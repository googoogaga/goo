/* Kludged version of treestore.h
 * Modified to support goo graph abstraction implementation
 *
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

#ifndef __GTK_TREE_GOO_H__
#define __GTK_TREE_GOO_H__

#include <gtk/gtktreemodel.h>
//#include <gtk/gtktreesortable.h>
#include <stdarg.h>

#include "grt.h"
//#include "dlgrt.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define GTK_TYPE_TREE_GOO			(gtk_tree_goo_get_type ())
#define GTK_TREE_GOO(obj)			(GTK_CHECK_CAST ((obj), GTK_TYPE_TREE_GOO, GtkTreeGoo))
#define GTK_TREE_GOO_CLASS(klass)		(GTK_CHECK_CLASS_CAST ((klass), GTK_TYPE_TREE_GOO, GtkTreeGooClass))
#define GTK_IS_TREE_GOO(obj)			(GTK_CHECK_TYPE ((obj), GTK_TYPE_TREE_GOO))
#define GTK_IS_TREE_GOO_CLASS(klass)		(GTK_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TREE_GOO))
#define GTK_TREE_GOO_GET_CLASS(obj)           (GTK_CHECK_GET_CLASS ((obj), GTK_TYPE_TREE_GOO, GtkTreeGooClass))

typedef struct _GtkTreeGoo       GtkTreeGoo;
typedef struct _GtkTreeGooClass  GtkTreeGooClass;

struct _GtkTreeGoo
{
  GObject parent;

  P gui_tree_view;
  P root;

  gint stamp;
  gpointer last;
  gint n_columns;
  //  gint sort_column_id;
  //  GList *sort_list;
  //  GtkSortType order;
  //  GType *column_headers;
  //  GtkTreeIterCompareFunc default_sort_func;
  //  gpointer default_sort_data;
  //  GtkDestroyNotify default_sort_destroy;
  guint columns_dirty : 1;
};

struct _GtkTreeGooClass
{
  GObjectClass parent_class;
};


GtkType       gtk_tree_goo_get_type         (void);
GtkTreeGoo *gtk_tree_goo_new              ();

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* __GTK_TREE_GOO_H__ */
