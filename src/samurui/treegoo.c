/* gtktreestore.c
 * Copyright (C) 2000  Red Hat, Inc.,  Jonathan Blandford <jrb@redhat.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include <gtk/gtktreemodel.h>
#include <gtk/gtktreednd.h>
#include <string.h>
#include <gobject/gvaluecollector.h>

#include "treegoo.h"

#define GTK_TREE_GOO_IS_SORTED(tree) (GTK_TREE_GOO (tree)->sort_column_id != -2)
#define VALID_ITER(iter, tree_store) (iter!= NULL && iter->user_data != NULL && tree_store->stamp == iter->stamp)

/* We need:
   - The 'collection' we're using [can go in the model info]
   - The current node [iter]
   - Ancestors of the current node [linked list in iter]
   - Indices of ourselves and our ancestors [cur node's index in its parent in iter]
   
   By maintaining a chain of ancestors we deal with that nasty thing, although there is the
    issue of reference counting or freeing or what not...
*/

/* So there's a fundamental problem with representing the backwards 'parent' edges.  This can
    either be dealt with here, or in the actual collection view.  The downside is that it 
    requires a meta-model to be going on.  The worst case scenario I can imagine is that the
    meta-model builds up a nearly complete alternate representation of the data in hand. 
   The problem stems from the fact that the naive collection implementation can't reprsent
    back-edges simply.  But a more sophisticated implementation (graph, database) presumably 
    could implement back-edges both easily and efficiently.
   As such, it seems clear that the burden must lie on the collection view.  Forcing a distinctness
    property on the nodes on the tree is not egregious.  The one downside is that the collec
 */ 

/* We use the TreeIter structure like so:
   (stamp: as expected, sanity checking)
   user_data - The node we actually point to.
*/

static void         gtk_tree_goo_init            (GtkTreeGoo      *tree_goo);
static void         gtk_tree_goo_class_init      (GtkTreeGooClass *tree_goo_class);
static void         gtk_tree_goo_tree_model_init (GtkTreeModelIface *iface);
//static void         gtk_tree_goo_drag_source_init(GtkTreeDragSourceIface *iface);
//static void         gtk_tree_goo_drag_dest_init  (GtkTreeDragDestIface   *iface);
//static void         gtk_tree_goo_sortable_init   (GtkTreeSortableIface   *iface);
static void         gtk_tree_goo_finalize        (GObject           *object);
static guint        gtk_tree_goo_get_flags       (GtkTreeModel      *tree_model);
static gint         gtk_tree_goo_get_n_columns   (GtkTreeModel      *tree_model);
static GType        gtk_tree_goo_get_column_type (GtkTreeModel      *tree_model,
						    gint               index);
static gboolean     gtk_tree_goo_get_iter        (GtkTreeModel      *tree_model,
						    GtkTreeIter       *iter,
						    GtkTreePath       *path);
static GtkTreePath *gtk_tree_goo_get_path        (GtkTreeModel      *tree_model,
						    GtkTreeIter       *iter);
static void         gtk_tree_goo_get_value       (GtkTreeModel      *tree_model,
						    GtkTreeIter       *iter,
						    gint               column,
						    GValue            *value);
static gboolean     gtk_tree_goo_iter_next       (GtkTreeModel      *tree_model,
						    GtkTreeIter       *iter);
static gboolean     gtk_tree_goo_iter_children   (GtkTreeModel      *tree_model,
						    GtkTreeIter       *iter,
						    GtkTreeIter       *parent);
static gboolean     gtk_tree_goo_iter_has_child  (GtkTreeModel      *tree_model,
						    GtkTreeIter       *iter);
static gint         gtk_tree_goo_iter_n_children (GtkTreeModel      *tree_model,
						    GtkTreeIter       *iter);
static gboolean     gtk_tree_goo_iter_nth_child  (GtkTreeModel      *tree_model,
						    GtkTreeIter       *iter,
						    GtkTreeIter       *parent,
						    gint               n);
static gboolean     gtk_tree_goo_iter_parent     (GtkTreeModel      *tree_model,
						    GtkTreeIter       *iter,
						    GtkTreeIter       *child);


static void gtk_tree_goo_set_n_columns   (GtkTreeGoo *tree_goo,
					    gint          n_columns);
static void gtk_tree_goo_set_column_type (GtkTreeGoo *tree_goo,
					    gint          column,
					    GType         type);

EXT(YsamuruiSsamuruiYgtk_tv_get_start_node, "samurui/samurui", "gtk-tv-get-start-node");
EXT(YsamuruiSsamuruiYgtk_tv_get_label, "samurui/samurui", "gtk-tv-get-label");

EXT(YsamuruiSsamuruiYgtk_tv_get_n_columns, "samurui/samurui", "gtk-tv-get-n-columns");
EXT(YsamuruiSsamuruiYgtk_tv_iter_children, "samurui/samurui", "gtk-tv-iter-children");
EXT(YsamuruiSsamuruiYgtk_tv_iter_has_child, "samurui/samurui", "gtk-tv-iter-has-child");
EXT(YsamuruiSsamuruiYgtk_tv_iter_n_children, "samurui/samurui", "gtk-tv-iter-n-children");
EXT(YsamuruiSsamuruiYgtk_tv_iter_next_child, "samurui/samurui", "gtk-tv-iter-next-child");
EXT(YsamuruiSsamuruiYgtk_tv_iter_nth_child, "samurui/samurui", "gtk-tv-iter-nth-child");
EXT(YsamuruiSsamuruiYgtk_tv_iter_parent, "samurui/samurui", "gtk-tv-iter-parent");
EXT(YsamuruiSsamuruiYgtk_tv_iter_has_parent, "samurui/samurui", "gtk-tv-iter-has-parent");
EXT(YsamuruiSsamuruiYgtk_tv_node_pos_in_parent, "samurui/samurui", "gtk-tv-node-pos-in-parent");

/* DND interfaces */
/*
static gboolean gtk_tree_goo_drag_data_delete   (GtkTreeDragSource *drag_source,
						   GtkTreePath       *path);
static gboolean gtk_tree_goo_drag_data_get      (GtkTreeDragSource *drag_source,
						   GtkTreePath       *path,
						   GtkSelectionData  *selection_data);
static gboolean gtk_tree_goo_drag_data_received (GtkTreeDragDest   *drag_dest,
						   GtkTreePath       *dest,
						   GtkSelectionData  *selection_data);
static gboolean gtk_tree_goo_row_drop_possible  (GtkTreeDragDest   *drag_dest,
						   GtkTreePath       *dest_path,
						   GtkSelectionData  *selection_data);
*/

/* Sortable Interfaces */

/*
static void     gtk_tree_goo_sort                    (GtkTreeGoo           *tree_goo);
static void     gtk_tree_goo_sort_iter_changed       (GtkTreeGoo           *tree_goo,
							GtkTreeIter            *iter,
							gint                    column);
static gboolean gtk_tree_goo_get_sort_column_id      (GtkTreeSortable        *sortable,
							gint                   *sort_column_id,
							GtkSortType            *order);
static void     gtk_tree_goo_set_sort_column_id      (GtkTreeSortable        *sortable,
							gint                    sort_column_id,
							GtkSortType             order);
static void     gtk_tree_goo_set_sort_func           (GtkTreeSortable        *sortable,
							gint                    sort_column_id,
							GtkTreeIterCompareFunc  func,
							gpointer                data,
							GtkDestroyNotify        destroy);
static void     gtk_tree_goo_set_default_sort_func   (GtkTreeSortable        *sortable,
							GtkTreeIterCompareFunc  func,
							gpointer                data,
							GtkDestroyNotify        destroy);
static gboolean gtk_tree_goo_has_default_sort_func   (GtkTreeSortable        *sortable);

static void     validate_gnode                         (GNode *node);

*/

static GObjectClass *parent_class = NULL;

GtkType
gtk_tree_goo_get_type (void)
{
  static GType tree_goo_type = 0;

  if (!tree_goo_type)
    {
      static const GTypeInfo tree_goo_info =
      {
        sizeof (GtkTreeGooClass),
	NULL,		/* base_init */
	NULL,		/* base_finalize */
        (GClassInitFunc) gtk_tree_goo_class_init,
	NULL,		/* class_finalize */
	NULL,		/* class_data */
        sizeof (GtkTreeGoo),
	0,              /* n_preallocs */
        (GInstanceInitFunc) gtk_tree_goo_init
      };

      static const GInterfaceInfo tree_model_info =
      {
	(GInterfaceInitFunc) gtk_tree_goo_tree_model_init,
	NULL,
	NULL
      };

      /*
      static const GInterfaceInfo drag_source_info =
      {
	(GInterfaceInitFunc) gtk_tree_goo_drag_source_init,
	NULL,
	NULL
      };

      static const GInterfaceInfo drag_dest_info =
      {
	(GInterfaceInitFunc) gtk_tree_goo_drag_dest_init,
	NULL,
	NULL
      };

      static const GInterfaceInfo sortable_info =
      {
	(GInterfaceInitFunc) gtk_tree_goo_sortable_init,
	NULL,
	NULL
      };
      */

      tree_goo_type = g_type_register_static (G_TYPE_OBJECT, "GtkTreeGoo", &tree_goo_info, 0);

      g_type_add_interface_static (tree_goo_type,
				   GTK_TYPE_TREE_MODEL,
				   &tree_model_info);
      /*
      g_type_add_interface_static (tree_goo_type,
				   GTK_TYPE_TREE_DRAG_SOURCE,
				   &drag_source_info);
      g_type_add_interface_static (tree_goo_type,
				   GTK_TYPE_TREE_DRAG_DEST,
				   &drag_dest_info);
      g_type_add_interface_static (tree_goo_type,
				   GTK_TYPE_TREE_SORTABLE,
				   &sortable_info);
      */				  

    }

  return tree_goo_type;
}

static void
gtk_tree_goo_class_init (GtkTreeGooClass *class)
{
  GObjectClass *object_class;

  parent_class = g_type_class_peek_parent (class);
  object_class = (GObjectClass *) class;

  object_class->finalize = gtk_tree_goo_finalize;
}

static void
gtk_tree_goo_tree_model_init (GtkTreeModelIface *iface)
{
  iface->get_flags = gtk_tree_goo_get_flags;
  iface->get_n_columns = gtk_tree_goo_get_n_columns;
  iface->get_column_type = gtk_tree_goo_get_column_type;
  iface->get_iter = gtk_tree_goo_get_iter;
  iface->get_path = gtk_tree_goo_get_path;
  iface->get_value = gtk_tree_goo_get_value;
  iface->iter_next = gtk_tree_goo_iter_next;
  iface->iter_children = gtk_tree_goo_iter_children;
  iface->iter_has_child = gtk_tree_goo_iter_has_child;
  iface->iter_n_children = gtk_tree_goo_iter_n_children;
  iface->iter_nth_child = gtk_tree_goo_iter_nth_child;
  iface->iter_parent = gtk_tree_goo_iter_parent;
}

/*
static void
gtk_tree_goo_drag_source_init (GtkTreeDragSourceIface *iface)
{
  iface->drag_data_delete = gtk_tree_goo_drag_data_delete;
  iface->drag_data_get = gtk_tree_goo_drag_data_get;
}

static void
gtk_tree_goo_drag_dest_init (GtkTreeDragDestIface *iface)
{
  iface->drag_data_received = gtk_tree_goo_drag_data_received;
  iface->row_drop_possible = gtk_tree_goo_row_drop_possible;
}

static void
gtk_tree_goo_sortable_init (GtkTreeSortableIface *iface)
{
  iface->get_sort_column_id = gtk_tree_goo_get_sort_column_id;
  iface->set_sort_column_id = gtk_tree_goo_set_sort_column_id;
  iface->set_sort_func = gtk_tree_goo_set_sort_func;
  iface->set_default_sort_func = gtk_tree_goo_set_default_sort_func;
  iface->has_default_sort_func = gtk_tree_goo_has_default_sort_func;
}
*/

static void
gtk_tree_goo_init (GtkTreeGoo *tree_goo)
{

  /* While the odds are against us getting 0...
   */
  do
    {
      tree_goo->stamp = g_random_int ();
    }
  while (tree_goo->stamp == 0);
}

/**
 * gtk_tree_goo_new:
 * @n_columns: number of columns in the tree store
 * @Varargs: all #GType types for the columns, from first to last
 *
 * Creates a new tree store as with @n_columns columns each of the types passed
 * in.  As an example, <literal>gtk_tree_goo_new (3, G_TYPE_INT, G_TYPE_STRING,
 * GDK_TYPE_PIXBUF);</literal> will create a new #GtkTreeGoo with three columns, of type
 * <type>int</type>, <type>string</type> and #GdkPixbuf respectively.
 *
 * Return value: a new #GtkTreeGoo
 **/
GtkTreeGoo *
gtk_tree_goo_new (P gtv)
{
  GtkTreeGoo *tree_goo;
  DEFCREGS();

  tree_goo = GTK_TREE_GOO (g_object_new (GTK_TYPE_TREE_GOO, NULL));

  tree_goo->gui_tree_view = gtv;

  tree_goo->root = XCALL1(0, VARREF(YsamuruiSsamuruiYgtk_tv_get_start_node), tree_goo->gui_tree_view);
  tree_goo->n_columns = (gint)YPiu(XCALL1(0, VARREF(YsamuruiSsamuruiYgtk_tv_get_n_columns), tree_goo->gui_tree_view));

  return tree_goo;
}

void
gtk_tree_goo_refresh(GtkTreeGoo *tree_goo)
{
  /*
  GtkTreePath *myPath;
  GtkTreeIter myIter;
  */

  DEFCREGS();

   tree_goo->root = XCALL1(0, VARREF(YsamuruiSsamuruiYgtk_tv_get_start_node), tree_goo->gui_tree_view);
   tree_goo->n_columns = (gint)YPiu(XCALL1(0, VARREF(YsamuruiSsamuruiYgtk_tv_get_n_columns), tree_goo->gui_tree_view));

   /*
   myPath =  gtk_tree_path_new ();
   myIter.stamp = tree_goo->stamp;
   myIter.user_data = tree_goo->root;

   gtk_tree_model_row_changed((GtkTreeModel *)tree_goo, myPath, &myIter);

   gtk_tree_path_free(myPath);
   */
}

static void
gtk_tree_goo_finalize (GObject *object)
{
  GtkTreeGoo *tree_goo = GTK_TREE_GOO (object);

  (* parent_class->finalize) (object);
}

/* fulfill the GtkTreeModel requirements */
/* NOTE: GtkTreeGoo::root is a GNode, that acts as the parent node.  However,
 * it is not visible to the tree or to the user., and the path "0" refers to the
 * first child of GtkTreeGoo::root.
 */


static guint
gtk_tree_goo_get_flags (GtkTreeModel *tree_model)
{
  g_return_val_if_fail (GTK_IS_TREE_GOO (tree_model), 0);

  //return GTK_TREE_MODEL_ITERS_PERSIST;
  return 0;
}

static gint
gtk_tree_goo_get_n_columns (GtkTreeModel *tree_model)
{
  GtkTreeGoo *tree_goo = (GtkTreeGoo *) tree_model;

  g_return_val_if_fail (GTK_IS_TREE_GOO (tree_model), 0);

  return tree_goo->n_columns;
}

static GType
gtk_tree_goo_get_column_type (GtkTreeModel *tree_model,
				gint          index)
{
  GtkTreeGoo *tree_goo = (GtkTreeGoo *) tree_model;

  g_return_val_if_fail (GTK_IS_TREE_GOO (tree_model), G_TYPE_INVALID);
  g_return_val_if_fail (index < GTK_TREE_GOO (tree_model)->n_columns &&
			index >= 0, G_TYPE_INVALID);

  //tree_goo->columns_dirty = TRUE;

  //return tree_goo->column_headers[index];
  return G_TYPE_STRING;
}

static gboolean
gtk_tree_goo_get_iter (GtkTreeModel *tree_model,
			 GtkTreeIter  *iter,
			 GtkTreePath  *path)
{
  GtkTreeGoo *tree_goo = (GtkTreeGoo *) tree_model;
  GtkTreeIter parent;
  gint *indices;
  gint depth, i;

  g_return_val_if_fail (GTK_IS_TREE_GOO (tree_goo), FALSE);

  tree_goo->columns_dirty = TRUE;

  indices = gtk_tree_path_get_indices (path);
  depth = gtk_tree_path_get_depth (path);

  g_return_val_if_fail (depth > 0, FALSE);

  parent.stamp = tree_goo->stamp;
  parent.user_data = tree_goo->root;

  if (! gtk_tree_model_iter_nth_child (tree_model, iter, &parent, indices[0]))
    return FALSE;

  for (i = 1; i < depth; i++)
    {
      parent = *iter;
      if (! gtk_tree_model_iter_nth_child (tree_model, iter, &parent, indices[i]))
	return FALSE;
    }

  return TRUE;
}

static GtkTreePath *
gtk_tree_goo_get_path (GtkTreeModel *tree_model,
			 GtkTreeIter  *iter)
{
  GtkTreeGoo *tree_goo = (GtkTreeGoo *) tree_model;
  GtkTreePath *retval;
  P parent;
  P our_index;
  gint i = 0;
  DEFCREGS();


  g_return_val_if_fail (GTK_IS_TREE_GOO (tree_model), NULL);
  g_return_val_if_fail (iter != NULL, NULL);
  g_return_val_if_fail (iter->user_data != NULL, NULL);
  g_return_val_if_fail (iter->stamp == GTK_TREE_GOO (tree_model)->stamp, NULL);

  parent = XCALL2(0, VARREF(YsamuruiSsamuruiYgtk_tv_iter_parent), tree_goo->gui_tree_view, iter->user_data);

  if ((parent == YPfalse) || (parent == tree_goo->root))
    return gtk_tree_path_new ();

  if (parent == tree_goo->root)
    {
      retval = gtk_tree_path_new ();
    }
  else
    {
      GtkTreeIter tmp_iter = *iter;

      // Find the path to our parent
      tmp_iter.user_data = parent;

      retval = gtk_tree_goo_get_path (tree_model,
					&tmp_iter);
    }

  if (retval == NULL)
    return NULL;

  // Find our index 
  our_index = XCALL3(0, VARREF(YsamuruiSsamuruiYgtk_tv_node_pos_in_parent), tree_goo->gui_tree_view, iter->user_data, parent);

  if(our_index == YPfalse)
  {
    /* We couldn't find node, meaning it's prolly not ours */
    gtk_tree_path_free (retval);
    return NULL;      
  }

  i = (int)YPiu(our_index);

  gtk_tree_path_append_index (retval, i);

  return retval;
}

static void
gtk_tree_goo_get_value (GtkTreeModel *tree_model,
			  GtkTreeIter  *iter,
			  gint          column,
			  GValue       *value)
{
  GtkTreeGoo *tree_goo = (GtkTreeGoo *) tree_model;
  P label_value;
  DEFCREGS();

  g_return_if_fail (GTK_IS_TREE_GOO (tree_model));
  g_return_if_fail (iter != NULL);
  g_return_if_fail (column < GTK_TREE_GOO (tree_model)->n_columns);

  label_value = XCALL3(0, VARREF(YsamuruiSsamuruiYgtk_tv_get_label), tree_goo->gui_tree_view, iter->user_data, YPib((P)column));
  g_value_init(value, G_TYPE_STRING);
  g_value_set_string(value, (gchar *)YPsu(label_value));
}

static gboolean
gtk_tree_goo_iter_next (GtkTreeModel  *tree_model,
			  GtkTreeIter   *iter)
{
  GtkTreeGoo *tree_goo = (GtkTreeGoo *) tree_model;
  DEFCREGS();

  g_return_val_if_fail (iter->user_data != NULL, FALSE);

  iter->user_data = XCALL2(0, VARREF(YsamuruiSsamuruiYgtk_tv_iter_next_child), tree_goo->gui_tree_view, iter->user_data);

  if(iter->user_data == YPfalse)
    return FALSE;
  else
    return TRUE;
}

// Set iterator to first child of parent if it has children, otherwise ret false.
static gboolean
gtk_tree_goo_iter_children (GtkTreeModel *tree_model,
			      GtkTreeIter  *iter,
			      GtkTreeIter  *parent)
{
  GtkTreeGoo *tree_goo = (GtkTreeGoo *) tree_model;
  P children;
  P pnode;
  DEFCREGS();

  g_return_val_if_fail (parent == NULL || parent->user_data != NULL, FALSE);

  if (parent)
    pnode = parent->user_data;
  else
    pnode = tree_goo->root;

  children = XCALL2(0, VARREF(YsamuruiSsamuruiYgtk_tv_iter_children), tree_goo->gui_tree_view, pnode);

  if (children != YPfalse)
    {
      iter->stamp = GTK_TREE_GOO (tree_model)->stamp;
      iter->user_data = children;
      return TRUE;
    }
  else
    return FALSE;
}

// Does the node have kids?
static gboolean
gtk_tree_goo_iter_has_child (GtkTreeModel *tree_model,
			       GtkTreeIter  *iter)
{
  GtkTreeGoo *tree_goo = (GtkTreeGoo *) tree_model;
  DEFCREGS();

  g_return_val_if_fail (GTK_IS_TREE_GOO (tree_model), FALSE);
  g_return_val_if_fail (iter->stamp == GTK_TREE_GOO (tree_model)->stamp, FALSE);
  g_return_val_if_fail (iter->user_data != NULL, FALSE);

  return (XCALL2(0, VARREF(YsamuruiSsamuruiYgtk_tv_iter_has_child), tree_goo->gui_tree_view, iter->user_data) != YPfalse);
}

// How many kids does it have? (NULL iter => return num of toplevel)
static gint
gtk_tree_goo_iter_n_children (GtkTreeModel *tree_model,
				GtkTreeIter  *iter)
{
  GtkTreeGoo *tree_goo = (GtkTreeGoo *) tree_model;
  P pnode;
  DEFCREGS();

  g_return_val_if_fail (GTK_IS_TREE_GOO (tree_model), 0);
  g_return_val_if_fail (iter == NULL || iter->user_data != NULL, FALSE);

  if (iter == NULL)
    pnode = tree_goo->root;
  else
    pnode = iter->user_data;

  return (int)YPiu(XCALL2(0, VARREF(YsamuruiSsamuruiYgtk_tv_iter_n_children), tree_goo->gui_tree_view, pnode));
}

// Set iter to the nth child of parent. false on insane n
static gboolean
gtk_tree_goo_iter_nth_child (GtkTreeModel *tree_model,
			       GtkTreeIter  *iter,
			       GtkTreeIter  *parent,
			       gint          n)
{
  GtkTreeGoo *tree_goo = (GtkTreeGoo *) tree_model;
  P pnode;
  P child;
  DEFCREGS();

  g_return_val_if_fail (GTK_IS_TREE_GOO (tree_model), FALSE);
  g_return_val_if_fail (parent == NULL || parent->user_data != NULL, FALSE);

  if (parent == NULL)
    pnode = tree_goo->root;
  else
    pnode = parent->user_data;


  child = XCALL3(0, VARREF(YsamuruiSsamuruiYgtk_tv_iter_nth_child), tree_goo->gui_tree_view, pnode, YPib((P)n));

  if (child != YPfalse)
    {
      iter->stamp = GTK_TREE_GOO (tree_model)->stamp;
      iter->user_data = child;
      return TRUE;
    }
  else
    return FALSE;
}


static gboolean
gtk_tree_goo_iter_parent (GtkTreeModel *tree_model,
			    GtkTreeIter  *iter,
			    GtkTreeIter  *child)
{
  GtkTreeGoo *tree_goo = (GtkTreeGoo *) tree_model;
  P parent;
  DEFCREGS();

  g_return_val_if_fail (iter != NULL, FALSE);
  g_return_val_if_fail (child->user_data != NULL, FALSE);

  parent = XCALL2(0, VARREF(YsamuruiSsamuruiYgtk_tv_iter_parent), tree_goo->gui_tree_view, child->user_data);


  if (parent != YPfalse)
    {
      iter->user_data = parent;
      iter->stamp = GTK_TREE_GOO (tree_model)->stamp;
      return TRUE;
    }
  else
    return FALSE;
}

