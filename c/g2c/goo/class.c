/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/class");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/class */

DEF(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooSclassYpatch_early_classes,"goo/class","patch-early-classes");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YOelt,"goo/boot","@elt");
DEF(YgooSclassYrefab_class,"goo/class","refab-class");
DEF(YgooSclassYclass_ordered_ancestors,"goo/class","class-ordered-ancestors");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLstrG,"goo/boot","<str>");
DEF(YgooSclassYfind_getter,"goo/class","find-getter");
DEF(YgooSclassYLpropsG,"goo/class","<props>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YOfold,"goo/boot","@fold");
DEF(YgooSclassYOclass_ancestors,"goo/class","@class-ancestors");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YgooSclassYobject_class,"goo/class","object-class");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytype_object,"goo/boot","type-object");
DEF(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YgooSclassYTnext_class_idT,"goo/class","*next-class-id*");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
DEF(YgooSclassYPprop,"goo/class","%prop");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ytail,"goo/boot","tail");
EXT(Ytup,"goo/boot","tup");
EXT(Ynil,"goo/boot","nil");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YLcolG,"goo/boot","<col>");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
DEF(YgooSclassYfinalize_props,"goo/class","finalize-props");
DEF(YgooSclassYclass_of,"goo/class","class-of");
DEF(YgooSclassYinit_class,"goo/class","init-class");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Ylst,"goo/boot","lst");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooSclassYDgetter_not_found,"goo/class","$getter-not-found");
DEF(YgooSclassYdel_class,"goo/class","del-class");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YOdo,"goo/boot","@do");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YLintG,"goo/boot","<int>");
DEF(YgooSclassYforward_class,"goo/class","forward-class");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
DEF(YgooSclassYclass_ordered_props,"goo/class","class-ordered-props");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YgooSclassYOdo_descendents,"goo/class","@do-descendents");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yhead,"goo/boot","head");
DEF(YgooSclassYLparentsG,"goo/class","<parents>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YOpick,"goo/boot","@pick");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooSclassYOclass_direct_props,"goo/class","@class-direct-props");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YgooSclassYclone,"goo/class","clone");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
DEF(YgooSclassYensure_fresh_object,"goo/class","ensure-fresh-object");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YOtup,"goo/boot","@tup");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YgooSclassYobject_parents,"goo/class","object-parents");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YOnew,"goo/boot","@new");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSclassYDmax_classes,"goo/class","$max-classes");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YOrev,"goo/boot","@rev");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Ynew,"goo/boot","new");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_67);
DEFLIT(lit_34);
DEFLIT(lit_51);
DEFLIT(lit_31);
DEFLIT(lit_73);
DEFLIT(lit_22);
DEFLIT(lit_61);
DEFLIT(lit_69);
DEFLIT(lit_50);
DEFLIT(lit_18);
DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_21);
DEFLIT(lit_65);
DEFLIT(lit_60);
DEFLIT(lit_32);
DEFLIT(lit_30);
DEFLIT(lit_64);
DEFLIT(lit_36);
DEFLIT(lit_33);
DEFLIT(lit_38);
DEFLIT(lit_14);
DEFLIT(lit_57);
DEFLIT(lit_13);
DEFLIT(lit_4);
DEFLIT(lit_70);
DEFLIT(lit_45);
DEFLIT(lit_1);
DEFLIT(lit_16);
DEFLIT(lit_62);
DEFLIT(lit_46);
DEFLIT(lit_63);
DEFLIT(lit_29);
DEFLIT(lit_8);
DEFLIT(lit_19);
DEFLIT(lit_26);
DEFLIT(lit_35);
DEFLIT(lit_15);
DEFLIT(lit_71);
DEFLIT(lit_12);
DEFLIT(lit_58);
DEFLIT(lit_41);
DEFLIT(lit_52);
DEFLIT(lit_25);
DEFLIT(lit_59);
DEFLIT(lit_37);
DEFLIT(lit_72);
DEFLIT(lit_44);
DEFLIT(lit_39);
DEFLIT(lit_48);
DEFLIT(lit_28);
DEFLIT(lit_0);
DEFLIT(lit_17);
DEFLIT(lit_20);
DEFLIT(lit_11);
DEFLIT(lit_40);
DEFLIT(lit_55);
DEFLIT(lit_42);
DEFLIT(lit_68);
DEFLIT(lit_7);
DEFLIT(lit_23);
DEFLIT(lit_56);
DEFLIT(lit_27);
DEFLIT(lit_66);
DEFLIT(lit_53);
DEFLIT(lit_49);
DEFLIT(lit_9);
DEFLIT(lit_5);
DEFLIT(lit_6);
DEFLIT(lit_54);
DEFLIT(lit_43);
DEFLIT(lit_24);
DEFLIT(lit_47);
DEFLIT(lit_10);

/* FUNCTIONS: */

FUNFOR(YgooSclassYobject_class);
FUNFOR(YgooSclassYOclass_ancestors);
LOCFOR(fun_tailQ_2);
LOCFOR(fun_candidate_3);
LOCFOR(fun_candidate_at_head_4);
LOCFOR(fun_del_next_5);
FUNFOR(YgooSclassYclass_ordered_ancestors);
FUNFOR(YgooSclassYOclass_direct_props);
FUNFOR(YgooSclassYclass_ordered_props);
FUNFOR(YgooSclassYdel_class);
LOCFOR(fun_10);
LOCFOR(fun_11);
FUNFOR(YgooSclassYinit_class);
FUNFOR(YgooSclassYfab_class);
FUNFOR(YgooSclassYrefab_class);
FUNFOR(Yobject_props);
FUNFOR(YgooSclassYobject_parents);
FUNFOR(YgooSclassYensure_fresh_object);
FUNFOR(Yprop_offset);
FUNFOR(YPprop_unbound_error);
FUNFOR(YgooSclassYprop_value);
FUNFOR(YgooSclassYprop_boundQ);
FUNFOR(YgooSclassYprop_value_setter);
FUNFOR(YgooSclassYfind_getter);
FUNFOR(YgooSclassYfind_setter);
LOCFOR(fun_25);
FUNFOR(YgooSclassYforward_class);
FUNFOR(YgooSclassYclone);
LOCFOR(fun_visit_28);
FUNFOR(YgooSclassYOdo_descendents);
LOCFOR(fun_30);
FUNFOR(YgooSclassYfinalize_props);
FUNFOR(YgooSclassYPprop);
extern P YgooSclassYPupdate_instance_for_changed_class (P);
FUNFOR(Yupdate_instance_for_changed_class);
FUNFOR(YgooSclassYpatch_early_classes);
extern P YgooSclassYPnew (P,P);
FUNFOR(YOnew);
LOCFOR(fun_new_38);
extern P YgooSclassY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSclassYobject_class) {
  P x_;
  P tagF6780;
  P xF6779;
  P xF6778;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  xF6778 = x_;
  xF6779 = xF6778;
  T5 = (P)YPiB(xF6779,(P)3);
  tagF6780 = T5;
  T2 = (P)YPiE(tagF6780,(P)0);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = (P)YPobject_class(xF6778);
    T0 = T3;
  } else {
    T4 = (P)YPelt(VARREF(YDdirect_object_class),tagF6780);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYOclass_ancestors) {
  P x_;
  P xF6781;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF6781 = x_;
  T0 = (P)YPprop_elt(xF6781,(P)4);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_tailQ_2) {
  P l_;
  P xF6783;
  P xF6782;
  P T0,T1;
LINK_STACK();
  ARG(l_, 0);
  xF6782 = l_;
  xF6783 = xF6782;
  T1 = (P)YPprop_elt(xF6783,(P)1);
  T0 = CALL2(1,VARREF(YOmemQ),T1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_candidate_3) {
  P c_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  T3 = FUNFAB(fun_tailQ_2,1,c_);
  T2 = CALL2(1,VARREF(YOanyQ),T3,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T0 = c_;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_candidate_at_head_4) {
  P l_;
  P xF6787;
  P xF6786;
  P xF6785;
  P xF6784;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(l_, 0);
  xF6784 = l_;
  xF6785 = xF6784;
  T3 = (P)YPeqQ(xF6785,VARREF(Ynil));
  T2 = (P)YPbb(T3);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    xF6786 = l_;
    xF6787 = xF6786;
    T5 = (P)YPprop_elt(xF6787,(P)0);
    T4 = CALL1(1,FREEREF(0),T5);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_next_5) {
  P l_;
  P xF6793;
  P xF6792;
  P yF6791;
  P xF6790;
  P xF6789;
  P xF6788;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(l_, 0);
  xF6788 = l_;
  xF6789 = xF6788;
  T3 = (P)YPprop_elt(xF6789,(P)0);
  xF6790 = T3;
  yF6791 = FREEREF(0);
  T2 = (P)YPeqQ(xF6790,yF6791);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF6792 = l_;
    xF6793 = xF6792;
    T4 = (P)YPprop_elt(xF6793,(P)1);
    T0 = T4;
  } else {
    T0 = l_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYclass_ordered_ancestors) {
  P c_;
  P nextF6800;
  P candidate_at_headF6799;
  P candidateF6798;
  P remaining_listsF6797;
  P partial_cplF6796;
  P parentsF6795;
  P xF6794;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(c_, 0);
  xF6794 = c_;
  T15 = (P)YPprop_elt(xF6794,(P)2);
  parentsF6795 = T15;
  T12 = CALL1(1,VARREF(YOlst),c_);
  check_type(T12,VARREF(YLlstG));
  partial_cplF6796 = T12;
  T14 = CALL2(1,VARREF(YOmap),VARREF(YgooSclassYOclass_ancestors),parentsF6795);
  T13 = (P)YOadd(T14,parentsF6795);
  check_type(T13,VARREF(YLlstG));
  remaining_listsF6797 = T13;
  LOOP_293: {
    P a293_0,a293_1;
    T1 = CALL2(1,VARREF(YOallQ),VARREF(YOOemptyQ),remaining_listsF6797);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YOrevX),partial_cplF6796);
      T0 = T2;
    } else {
      T10 = FUNSHELL(1,fun_candidate_3,1);
      candidateF6798 = T10;
      T11 = FUNSHELL(0,fun_candidate_at_head_4,1);
      candidate_at_headF6799 = T11;
      FUNINIT(candidateF6798, 1,remaining_listsF6797);
      FUNINIT(candidate_at_headF6799, 1,candidateF6798);
      T9 = CALL2(1,VARREF(YOanyQ),candidate_at_headF6799,remaining_listsF6797);
      nextF6800 = T9;
      if (nextF6800 != YPfalse) {
        T5 = (P)YOpair(nextF6800,partial_cplF6796);
        T7 = FUNFAB(fun_del_next_5,1,nextF6800);
        T6 = CALL2(1,VARREF(YOmap),T7,remaining_listsF6797);
        a293_0 = T5;
        a293_1 = T6;
        partial_cplF6796 = a293_0;
        remaining_listsF6797 = a293_1;
        goto LOOP_293;
        T3 = T4;
      } else {
        T8 = CALL1(1,VARREF(Ycpl_error),LITREF(lit_14));
        T3 = T8;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSclassYOclass_direct_props) {
  P x_;
  P xF6801;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF6801 = x_;
  T0 = (P)YPprop_elt(xF6801,(P)3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYclass_ordered_props) {
  P x_;
  P propsF6803;
  P xF6802;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  xF6802 = x_;
  T5 = (P)YPprop_elt(xF6802,(P)4);
  T4 = CALL1(1,VARREF(YOrev),T5);
  T3 = CALL2(1,VARREF(YOmap),VARREF(YgooSclassYOclass_direct_props),T4);
  T2 = CALL3(1,VARREF(YOfold),VARREF(YOcat2),Ynil,T3);
  T1 = CALL1(1,VARREF(YOdel_dups),T2);
  propsF6803 = T1;
  T0 = (P)YOlen(propsF6803);
  (P)YPclass_prop_len_setter(T0,x_);
UNLINK_STACK();
  RET(propsF6803);
}

FUNCODEDEF(YgooSclassYdel_class) {
  P class_;
LINK_STACK();
  ARG(class_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_10) {
  P parent_;
  P xF6804;
  P T0,T1,T2;
LINK_STACK();
  ARG(parent_, 0);
  xF6804 = parent_;
  T2 = (P)YPprop_elt(xF6804,(P)6);
  T1 = (P)YOadd_new(T2,FREEREF(0));
  T0 = (P)YPclass_children_setter(T1,parent_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P ancestor_;
  P xF6809;
  P xF6808;
  P xF6807;
  P xF6806;
  P xF6805;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(ancestor_, 0);
  xF6805 = YPint((P)1);
  xF6806 = xF6805;
  T1 = (P)YPiGG(xF6806,(P)2);
  xF6807 = ancestor_;
  T3 = (P)YPprop_elt(xF6807,(P)11);
  xF6808 = T3;
  xF6809 = xF6808;
  T2 = (P)YPiGG(xF6809,(P)2);
  T0 = (P)YPselt_setter(T1,FREEREF(0),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYinit_class) {
  P x_;
  P xF6837;
  P rowF6836;
  P xF6835;
  P xF6834;
  P xF6833;
  P xF6832;
  P xF6831;
  P xF6830;
  P yF6829;
  P xF6828;
  P tF6827;
  P xF6826;
  P xF6825;
  P xF6824;
  P xF6823;
  P xF6822;
  P xF6821;
  P yF6820;
  P xF6819;
  P yF6818;
  P xF6817;
  P xF6816;
  P xF6815;
  P xF6814;
  P xF6813;
  P xF6812;
  P yF6811;
  P xF6810;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(x_, 0);
  xF6810 = VARREF(YgooSclassYDmax_classes);
  yF6811 = VARREF(YgooSclassYTnext_class_idT);
  xF6812 = xF6810;
  xF6813 = xF6812;
  T2 = (P)YPiGG(xF6813,(P)2);
  xF6814 = yF6811;
  xF6815 = xF6814;
  T3 = (P)YPiGG(xF6815,(P)2);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
  if (T1) {
    T4 = CALL2(1,VARREF(Yinternal_error),LITREF(lit_23),VARREF(YgooSclassYDmax_classes));
  } else {
  }
  xF6816 = x_;
  T8 = (P)YPprop_elt(xF6816,(P)2);
  T7 = (P)YOlen(T8);
  xF6817 = T7;
  yF6818 = YPint((P)0);
  T6 = (P)YPeqQ(xF6817,yF6818);
  T5 = (P)YPbb(T6);
  if (T6) {
    T9 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_24));
  } else {
  }
  (P)YPclass_id_setter(VARREF(YgooSclassYTnext_class_idT),x_);
  xF6819 = VARREF(YgooSclassYTnext_class_idT);
  yF6820 = YPint((P)1);
  xF6821 = xF6819;
  xF6822 = xF6821;
  T13 = (P)YPiGG(xF6822,(P)2);
  xF6823 = yF6820;
  xF6824 = xF6823;
  T14 = (P)YPiGG(xF6824,(P)2);
  T12 = (P)YPiA(T13,T14);
  xF6825 = T12;
  xF6826 = xF6825;
  tF6827 = (P)1;
  T11 = (P)YPiLL(xF6826,(P)2);
  T10 = (P)YPiv(T11,tF6827);
  VARSET(YgooSclassYTnext_class_idT,T10);
  xF6828 = x_;
  yF6829 = VARREF(YLanyG);
  T18 = (P)YPeqQ(xF6828,yF6829);
  T17 = (P)YPbb(T18);
  xF6830 = T17;
  T16 = (P)YPeqQ(xF6830,YPfalse);
  T15 = (P)YPbb(T16);
  if (T16) {
    T19 = FUNFAB(fun_10,1,x_);
    xF6831 = x_;
    T20 = (P)YPprop_elt(xF6831,(P)2);
    CALL2(1,VARREF(YOdo),T19,T20);
    T22 = CALL1(1,VARREF(YgooSclassYclass_ordered_ancestors),x_);
    T21 = (P)YPclass_ancestors_setter(T22,x_);
  } else {
  }
  xF6832 = VARREF(YgooSclassYDmax_classes);
  xF6833 = xF6832;
  T27 = (P)YPiGG(xF6833,(P)2);
  xF6834 = YPint((P)0);
  xF6835 = xF6834;
  T28 = (P)YPiGG(xF6835,(P)2);
  T26 = (P)YPstr(T27,T28);
  rowF6836 = T26;
  (P)YPclass_row_setter(rowF6836,x_);
  T23 = FUNFAB(fun_11,1,rowF6836);
  xF6837 = x_;
  T24 = (P)YPprop_elt(xF6837,(P)4);
  CALL2(1,VARREF(YOdo),T23,T24);
  T25 = CALL1(1,VARREF(YgooSclassYclass_ordered_props),x_);
  (P)YPclass_props_setter(T25,x_);
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(YgooSclassYfab_class) {
  P name_,parents_;
  P xF6838;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  ARG(parents_, 1);
  T0 = (P)YPclass(YPint((P)0),name_,parents_,Ynil,Ynil,Ynil,Ynil,Ynil,Ynil,YPfalse,YPfalse,YPint((P)-1),VARREF(Ynul));
  xF6838 = T0;
  CALL1(1,VARREF(YgooSclassYinit_class),xF6838);
UNLINK_STACK();
  RET(xF6838);
}

FUNCODEDEF(YgooSclassYrefab_class) {
  P old_class_,parents_;
  P new_classF6840;
  P xF6839;
  P T0,T1;
LINK_STACK();
  ARG(old_class_, 0);
  ARG(parents_, 1);
  xF6839 = old_class_;
  T1 = (P)YPprop_elt(xF6839,(P)3);
  T0 = CALL2(1,VARREF(YgooSclassYfab_class),parents_,T1);
  new_classF6840 = T0;
  (P)YPclass_forward_setter(new_classF6840,old_class_);
UNLINK_STACK();
  RET(new_classF6840);
}

FUNCODEDEF(Yobject_props) {
  P x_;
  P xF6844;
  P tagF6843;
  P xF6842;
  P xF6841;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  xF6841 = x_;
  xF6842 = xF6841;
  T6 = (P)YPiB(xF6842,(P)3);
  tagF6843 = T6;
  T3 = (P)YPiE(tagF6843,(P)0);
  T2 = (P)YPbb(T3);
  if (T3) {
    T4 = (P)YPobject_class(xF6841);
    T1 = T4;
  } else {
    T5 = (P)YPelt(VARREF(YDdirect_object_class),tagF6843);
    T1 = T5;
  }
  xF6844 = T1;
  T0 = (P)YPprop_elt(xF6844,(P)5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYobject_parents) {
  P x_;
  P xF6848;
  P tagF6847;
  P xF6846;
  P xF6845;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  xF6845 = x_;
  xF6846 = xF6845;
  T6 = (P)YPiB(xF6846,(P)3);
  tagF6847 = T6;
  T3 = (P)YPiE(tagF6847,(P)0);
  T2 = (P)YPbb(T3);
  if (T3) {
    T4 = (P)YPobject_class(xF6845);
    T1 = T4;
  } else {
    T5 = (P)YPelt(VARREF(YDdirect_object_class),tagF6847);
    T1 = T5;
  }
  xF6848 = T1;
  T0 = (P)YPprop_elt(xF6848,(P)2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYensure_fresh_object) {
  P x_;
  P xF6852;
  P tagF6851;
  P xF6850;
  P xF6849;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  xF6849 = x_;
  xF6850 = xF6849;
  T7 = (P)YPiB(xF6850,(P)3);
  tagF6851 = T7;
  T4 = (P)YPiE(tagF6851,(P)0);
  T3 = (P)YPbb(T4);
  if (T4) {
    T5 = (P)YPobject_class(xF6849);
    T2 = T5;
  } else {
    T6 = (P)YPelt(VARREF(YDdirect_object_class),tagF6851);
    T2 = T6;
  }
  xF6852 = T2;
  T1 = (P)YPprop_elt(xF6852,(P)9);
  if (T1 != YPfalse) {
    T8 = CALL1(1,VARREF(Yupdate_instance_for_changed_class),x_);
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_offset) {
  P object_,getter_;
  P xF6872;
  P xF6871;
  P tF6870;
  P xF6869;
  P xF6868;
  P xF6867;
  P xF6866;
  P xF6865;
  P xF6864;
  P yF6863;
  P xF6862;
  P yF6861;
  P xF6860;
  P xF6859;
  P xF6858;
  P xF6857;
  P xF6856;
  P xF6855;
  P propsF6854;
  P iF6853;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
  iF6853 = YPint((P)0);
  T15 = CALL1(1,VARREF(Yobject_props),object_);
  propsF6854 = T15;
  LOOP_294: {
    P a294_0,a294_1;
    xF6855 = propsF6854;
    xF6856 = xF6855;
    T2 = (P)YPeqQ(xF6856,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = VARREF(YgooSclassYDgetter_not_found);
    } else {
      xF6857 = propsF6854;
      xF6858 = xF6857;
      T7 = (P)YPprop_elt(xF6858,(P)0);
      xF6859 = T7;
      T6 = (P)YPprop_elt(xF6859,(P)1);
      xF6860 = T6;
      yF6861 = getter_;
      T5 = (P)YPeqQ(xF6860,yF6861);
      T4 = (P)YPbb(T5);
      if (T5) {
        T3 = iF6853;
      } else {
        xF6862 = iF6853;
        yF6863 = YPint((P)1);
        xF6864 = xF6862;
        xF6865 = xF6864;
        T12 = (P)YPiGG(xF6865,(P)2);
        xF6866 = yF6863;
        xF6867 = xF6866;
        T13 = (P)YPiGG(xF6867,(P)2);
        T11 = (P)YPiA(T12,T13);
        xF6868 = T11;
        xF6869 = xF6868;
        tF6870 = (P)1;
        T10 = (P)YPiLL(xF6869,(P)2);
        T9 = (P)YPiv(T10,tF6870);
        xF6871 = propsF6854;
        xF6872 = xF6871;
        T14 = (P)YPprop_elt(xF6872,(P)1);
        a294_0 = T9;
        a294_1 = T14;
        iF6853 = a294_0;
        propsF6854 = a294_1;
        goto LOOP_294;
        T3 = T8;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPprop_unbound_error) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  if (VARREF(YgooSclassYTreport_prop_unbound_errorsQT) != YPfalse) {
    T1 = CALL1(1,VARREF(Yproperty_unbound_error),x_);
    T0 = T1;
  } else {
    T0 = VARREF(Ynul);
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYprop_value) {
  P object_,getter_;
  P yF6875;
  P xF6874;
  P offsetF6873;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
  CALL1(1,VARREF(YgooSclassYensure_fresh_object),object_);
  T5 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF6873 = T5;
  xF6874 = offsetF6873;
  yF6875 = VARREF(YgooSclassYDgetter_not_found);
  T2 = (P)YPiE(xF6874,yF6875);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
    T0 = T3;
  } else {
    T4 = (P)YgooSfunYprop_value_at(object_,offsetF6873);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYprop_boundQ) {
  P object_,getter_;
  P yF6878;
  P xF6877;
  P offsetF6876;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
  CALL1(1,VARREF(YgooSclassYensure_fresh_object),object_);
  T5 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF6876 = T5;
  xF6877 = offsetF6876;
  yF6878 = VARREF(YgooSclassYDgetter_not_found);
  T2 = (P)YPiE(xF6877,yF6878);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
    T0 = T3;
  } else {
    T4 = (P)YgooSfunYprop_bound_atQ(object_,offsetF6876);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSclassYprop_value_setter) {
  P z_,object_,getter_;
  P xF6921;
  P xF6920;
  P tF6919;
  P xF6918;
  P xF6917;
  P xF6916;
  P xF6915;
  P xF6914;
  P xF6913;
  P yF6912;
  P xF6911;
  P xF6910;
  P xF6909;
  P xF6908;
  P xF6907;
  P xF6906;
  P xF6905;
  P xF6904;
  P c2F6903;
  P c1F6902;
  P tagF6901;
  P xF6900;
  P xF6899;
  P cF6898;
  P oF6897;
  P yF6896;
  P xF6895;
  P tagF6894;
  P xF6893;
  P xF6892;
  P tF6891;
  P oF6890;
  P xF6889;
  P yF6888;
  P xF6887;
  P xF6886;
  P propF6885;
  P xF6884;
  P xF6883;
  P xF6882;
  P xF6881;
  P propsF6880;
  P iF6879;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
LINK_STACK();
  ARG(z_, 0);
  ARG(object_, 1);
  ARG(getter_, 2);
  CALL1(1,VARREF(YgooSclassYensure_fresh_object),object_);
  iF6879 = YPint((P)0);
  T44 = CALL1(1,VARREF(Yobject_props),object_);
  propsF6880 = T44;
  LOOP_295: {
    P a295_0,a295_1;
    xF6881 = propsF6880;
    xF6882 = xF6881;
    T2 = (P)YPeqQ(xF6882,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
      T0 = T3;
    } else {
      xF6883 = propsF6880;
      xF6884 = xF6883;
      T43 = (P)YPprop_elt(xF6884,(P)0);
      propF6885 = T43;
      xF6886 = propF6885;
      T7 = (P)YPprop_elt(xF6886,(P)1);
      xF6887 = T7;
      yF6888 = getter_;
      T6 = (P)YPeqQ(xF6887,yF6888);
      T5 = (P)YPbb(T6);
      if (T6) {
        oF6890 = z_;
        xF6889 = propF6885;
        T32 = (P)YPprop_elt(xF6889,(P)3);
        tF6891 = T32;
        xF6892 = tF6891;
        xF6893 = xF6892;
        T17 = (P)YPiB(xF6893,(P)3);
        tagF6894 = T17;
        T14 = (P)YPiE(tagF6894,(P)0);
        T13 = (P)YPbb(T14);
        if (T14) {
          T15 = (P)YPobject_class(xF6892);
          T12 = T15;
        } else {
          T16 = (P)YPelt(VARREF(YDdirect_object_class),tagF6894);
          T12 = T16;
        }
        xF6895 = T12;
        yF6896 = VARREF(YLclassG);
        T11 = (P)YPeqQ(xF6895,yF6896);
        T10 = (P)YPbb(T11);
        if (T11) {
          oF6897 = oF6890;
          cF6898 = tF6891;
          xF6899 = oF6897;
          xF6900 = xF6899;
          T30 = (P)YPiB(xF6900,(P)3);
          tagF6901 = T30;
          T27 = (P)YPiE(tagF6901,(P)0);
          T26 = (P)YPbb(T27);
          if (T27) {
            T28 = (P)YPobject_class(xF6899);
            T25 = T28;
          } else {
            T29 = (P)YPelt(VARREF(YDdirect_object_class),tagF6901);
            T25 = T29;
          }
          c1F6902 = T25;
          c2F6903 = cF6898;
          xF6904 = c1F6902;
          T21 = (P)YPprop_elt(xF6904,(P)12);
          xF6905 = c2F6903;
          T23 = (P)YPprop_elt(xF6905,(P)11);
          xF6906 = T23;
          xF6907 = xF6906;
          T22 = (P)YPiGG(xF6907,(P)2);
          T20 = (P)YPselt(T21,T22);
          xF6908 = YPint((P)1);
          xF6909 = xF6908;
          T24 = (P)YPiGG(xF6909,(P)2);
          T19 = (P)YPiE(T20,T24);
          T18 = (P)YPbb(T19);
          T9 = T18;
        } else {
          T31 = CALL2(1,VARREF(YisaQ),oF6890,tF6891);
          T9 = T31;
        }
        if (T9 != YPfalse) {
          T33 = (P)YgooSfunYprop_value_at_setter(z_,object_,iF6879);
          T8 = T33;
        } else {
          xF6910 = propF6885;
          T35 = (P)YPprop_elt(xF6910,(P)3);
          T34 = CALL3(1,VARREF(Yproperty_type_error),getter_,z_,T35);
          T8 = T34;
        }
        T4 = T8;
      } else {
        xF6911 = iF6879;
        yF6912 = YPint((P)1);
        xF6913 = xF6911;
        xF6914 = xF6913;
        T40 = (P)YPiGG(xF6914,(P)2);
        xF6915 = yF6912;
        xF6916 = xF6915;
        T41 = (P)YPiGG(xF6916,(P)2);
        T39 = (P)YPiA(T40,T41);
        xF6917 = T39;
        xF6918 = xF6917;
        tF6919 = (P)1;
        T38 = (P)YPiLL(xF6918,(P)2);
        T37 = (P)YPiv(T38,tF6919);
        xF6920 = propsF6880;
        xF6921 = xF6920;
        T42 = (P)YPprop_elt(xF6921,(P)1);
        a295_0 = T37;
        a295_1 = T42;
        iF6879 = a295_0;
        propsF6880 = a295_1;
        goto LOOP_295;
        T4 = T36;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYfind_getter) {
  P owner_,getter_;
  P xF6931;
  P xF6930;
  P yF6929;
  P xF6928;
  P metF6927;
  P xF6926;
  P xF6925;
  P xF6924;
  P xF6923;
  P metsF6922;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  T11 = CALL1(1,VARREF(YgooSfunYOfun_mets),getter_);
  metsF6922 = T11;
  LOOP_296: {
    P a296_0;
    xF6923 = metsF6922;
    xF6924 = xF6923;
    T2 = (P)YPeqQ(xF6924,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,owner_);
      T0 = T3;
    } else {
      xF6925 = metsF6922;
      xF6926 = xF6925;
      T10 = (P)YPprop_elt(xF6926,(P)0);
      metF6927 = T10;
      T7 = CALL2(1,VARREF(YgooSfunYfun_spec),metF6927,YPint((P)0));
      xF6928 = T7;
      yF6929 = owner_;
      T6 = (P)YPeqQ(xF6928,yF6929);
      T5 = (P)YPbb(T6);
      if (T6) {
        T4 = metF6927;
      } else {
        xF6930 = metsF6922;
        xF6931 = xF6930;
        T9 = (P)YPprop_elt(xF6931,(P)1);
        a296_0 = T9;
        metsF6922 = a296_0;
        goto LOOP_296;
        T4 = T8;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSclassYfind_setter) {
  P owner_,type_,zetter_;
  P xF6941;
  P xF6940;
  P yF6939;
  P xF6938;
  P metF6937;
  P xF6936;
  P xF6935;
  P xF6934;
  P xF6933;
  P metsF6932;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(owner_, 0);
  ARG(type_, 1);
  ARG(zetter_, 2);
  T14 = CALL1(1,VARREF(YgooSfunYOfun_mets),zetter_);
  metsF6932 = T14;
  LOOP_297: {
    P a297_0;
    xF6933 = metsF6932;
    xF6934 = xF6933;
    T2 = (P)YPeqQ(xF6934,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL2(1,VARREF(Yproperty_not_found_error),zetter_,owner_);
      T0 = T3;
    } else {
      xF6935 = metsF6932;
      xF6936 = xF6935;
      T13 = (P)YPprop_elt(xF6936,(P)0);
      metF6937 = T13;
      T8 = CALL2(1,VARREF(YgooSfunYfun_spec),metF6937,YPint((P)1));
      xF6938 = T8;
      yF6939 = owner_;
      T7 = (P)YPeqQ(xF6938,yF6939);
      T6 = (P)YPbb(T7);
      if (T7) {
        T10 = CALL2(1,VARREF(YgooSfunYfun_spec),metF6937,YPint((P)0));
        T9 = CALL2(1,VARREF(YOtype_equalQ),T10,type_);
        T5 = T9;
      } else {
        T5 = YPfalse;
      }
      if (T5 != YPfalse) {
        T4 = metF6937;
      } else {
        xF6940 = metsF6932;
        xF6941 = xF6940;
        T12 = (P)YPprop_elt(xF6941,(P)1);
        a297_0 = T12;
        metsF6932 = a297_0;
        goto LOOP_297;
        T4 = T11;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_25) {
  P g_;
  P T0;
LINK_STACK();
  ARG(g_, 0);
  T0 = (P)YPfun_cache_setter(YPfalse,g_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYforward_class) {
  P old_class_;
  P xF6943;
  P new_classF6942;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(old_class_, 0);
  T3 = (P)YPclone(old_class_);
  new_classF6942 = T3;
  T0 = fun_25;
  xF6943 = old_class_;
  T1 = (P)YPprop_elt(xF6943,(P)7);
  CALL2(1,VARREF(YOdo),T0,T1);
  T2 = (P)YPclass_forward_setter(new_classF6942,old_class_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YgooSclassYclone) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPclone(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_visit_28) {
  P x_;
  P xF6945;
  P xF6944;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  T4 = BOXGET(FREEREF(0));
  T3 = CALL2(1,VARREF(YOmemQ),T4,x_);
  xF6944 = T3;
  T2 = (P)YPeqQ(xF6944,YPfalse);
  T1 = (P)YPbb(T2);
  if (T2) {
    T6 = BOXGET(FREEREF(0));
    T5 = (P)YOadd(T6,x_);
    BOXPUT(T5,FREEREF(0));
    CALL1(0,FREEREF(1),x_);
    xF6945 = x_;
    T8 = (P)YPprop_elt(xF6945,(P)6);
    T7 = CALL2(1,VARREF(YOdo),FREEREF(2),T8);
    T0 = T7;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYOdo_descendents) {
  P f_,x_;
  P visitF6947;
  P visitedF6946;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  visitedF6946 = Ynil;
  visitedF6946 = BOXFAB(visitedF6946);
  T2 = FUNSHELL(0,fun_visit_28,3);
  visitF6947 = T2;
  FUNINIT(visitF6947, 3,visitedF6946,f_,visitF6947);
  T1 = CALL1(1,visitF6947,x_);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_30) {
  P prop_;
  P xF6948;
  P T0,T1;
LINK_STACK();
  ARG(prop_, 0);
  xF6948 = prop_;
  T1 = (P)YPprop_elt(xF6948,(P)1);
  T0 = (P)YPfun_cache_setter(YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYfinalize_props) {
  P class_;
  P xF6949;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(class_, 0);
  T0 = CALL1(1,VARREF(YgooSclassYclass_ordered_props),class_);
  (P)YPclass_props_setter(T0,class_);
  T2 = fun_30;
  xF6949 = class_;
  T3 = (P)YPprop_elt(xF6949,(P)5);
  T1 = CALL2(1,VARREF(YOdo),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YgooSclassYPprop) {
  P owner_,getter_,setter_,type_,init_;
  P xF6954;
  P setter_metF6953;
  P getter_metF6952;
  P propF6951;
  P classF6950;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  ARG(setter_, 2);
  ARG(type_, 3);
  ARG(init_, 4);
  classF6950 = owner_;
  T6 = CALLN(1,VARREF(YOnew),11,VARREF(YLpropG),VARREF(Yprop_owner),owner_,VARREF(Yprop_getter),getter_,VARREF(Yprop_setter),setter_,VARREF(Yprop_type),type_,VARREF(Yprop_init),init_);
  propF6951 = T6;
  T5 = CALL2(1,VARREF(YgooSclassYfind_getter),owner_,getter_);
  getter_metF6952 = T5;
  (P)YPmet_env_setter(propF6951,getter_metF6952);
  if (setter_ != YPfalse) {
    T1 = CALL3(1,VARREF(YgooSclassYfind_setter),owner_,type_,setter_);
    setter_metF6953 = T1;
    T0 = (P)YPmet_env_setter(propF6951,setter_metF6953);
  } else {
  }
  xF6954 = classF6950;
  T3 = (P)YPprop_elt(xF6954,(P)3);
  T4 = CALL1(1,VARREF(YOlst),propF6951);
  T2 = CALL2(1,VARREF(YOcat2),T3,T4);
  (P)YPclass_direct_props_setter(T2,classF6950);
  CALL2(1,VARREF(YgooSclassYOdo_descendents),VARREF(YgooSclassYfinalize_props),owner_);
UNLINK_STACK();
  QRET(propF6951);
}

P YgooSclassYPupdate_instance_for_changed_class(P new_object_) {
DEFCREGS();
  return new_object_;
}

FUNCODEDEF(Yupdate_instance_for_changed_class) {
  P object_;
  P T0;
LINK_STACK();
  ARG(object_, 0);
  T0 = (P)YgooSclassYPupdate_instance_for_changed_class(object_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYpatch_early_classes) {
  P T0,T1;
LINK_STACK();
  T0 = CALL1(1,VARREF(YOrevX),VARREF(YTearly_classesT));
  VARSET(YTearly_classesT,T0);
  CALL2(1,VARREF(YOdo),VARREF(YgooSclassYinit_class),VARREF(YTearly_classesT));
  T1 = VARSET(YPclasses_readyQ,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

INLINE P YgooSclassYPnew(P parent_,P inits_) {
  P tF6998;
  P xF6997;
  P xF6996;
  P xF6995;
  P xF6994;
  P xF6993;
  P xF6992;
  P yF6991;
  P xF6990;
  P valF6989;
  P xF6988;
  P xF6987;
  P xF6986;
  P iF6985;
  P xF6984;
  P tF6983;
  P xF6982;
  P xF6981;
  P xF6980;
  P xF6979;
  P xF6978;
  P xF6977;
  P yF6976;
  P xF6975;
  P getterF6974;
  P xF6973;
  P xF6972;
  P xF6971;
  P iF6970;
  P xF6969;
  P xF6968;
  P xF6967;
  P xF6966;
  P xF6965;
  P yF6964;
  P xF6963;
  P iF6962;
  P numF6961;
  P xF6960;
  P xF6959;
  P objectF6958;
  P xF6957;
  P xF6956;
  P xF6955;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
DEFCREGS();
  xF6955 = parent_;
  T27 = (P)YPprop_elt(xF6955,(P)0);
  xF6956 = T27;
  xF6957 = xF6956;
  T26 = (P)YPiGG(xF6957,(P)2);
  T25 = (P)YPobject_of(parent_,T26);
  objectF6958 = T25;
  xF6959 = inits_;
  xF6960 = xF6959;
  T24 = (P)YPprop_elt(xF6960,(P)1);
  numF6961 = T24;
  iF6962 = YPint((P)0);
  LOOP_298: {
    P a298_0;
    xF6963 = iF6962;
    yF6964 = numF6961;
    xF6965 = xF6963;
    xF6966 = xF6965;
    T3 = (P)YPiGG(xF6966,(P)2);
    xF6967 = yF6964;
    xF6968 = xF6967;
    T4 = (P)YPiGG(xF6968,(P)2);
    T2 = (P)YPiL(T3,T4);
    T1 = (P)YPbb(T2);
    if (T2) {
      xF6969 = inits_;
      iF6970 = iF6962;
      xF6971 = xF6969;
      T21 = (P)YPprop_elt(xF6971,(P)0);
      xF6972 = iF6970;
      xF6973 = xF6972;
      T23 = (P)YPiGG(xF6973,(P)2);
      T22 = (P)YPi_((P)0,T23);
      T20 = (P)YPloc_off(T21,T22);
      getterF6974 = T20;
      xF6984 = inits_;
      xF6975 = iF6962;
      yF6976 = YPint((P)1);
      xF6977 = xF6975;
      xF6978 = xF6977;
      T18 = (P)YPiGG(xF6978,(P)2);
      xF6979 = yF6976;
      xF6980 = xF6979;
      T19 = (P)YPiGG(xF6980,(P)2);
      T17 = (P)YPiA(T18,T19);
      xF6981 = T17;
      xF6982 = xF6981;
      tF6983 = (P)1;
      T16 = (P)YPiLL(xF6982,(P)2);
      T15 = (P)YPiv(T16,tF6983);
      iF6985 = T15;
      xF6986 = xF6984;
      T12 = (P)YPprop_elt(xF6986,(P)0);
      xF6987 = iF6985;
      xF6988 = xF6987;
      T14 = (P)YPiGG(xF6988,(P)2);
      T13 = (P)YPi_((P)0,T14);
      T11 = (P)YPloc_off(T12,T13);
      valF6989 = T11;
      XCALL3(1,VARREF(YgooSclassYprop_value_setter),valF6989,objectF6958,getterF6974);
      xF6990 = iF6962;
      yF6991 = YPint((P)2);
      xF6992 = xF6990;
      xF6993 = xF6992;
      T9 = (P)YPiGG(xF6993,(P)2);
      xF6994 = yF6991;
      xF6995 = xF6994;
      T10 = (P)YPiGG(xF6995,(P)2);
      T8 = (P)YPiA(T9,T10);
      xF6996 = T8;
      xF6997 = xF6996;
      tF6998 = (P)1;
      T7 = (P)YPiLL(xF6997,(P)2);
      T6 = (P)YPiv(T7,tF6998);
      a298_0 = T6;
      iF6962 = a298_0;
      goto LOOP_298;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
  return objectF6958;
}

FUNCODEDEF(YOnew) {
  P parent_,inits_;
  P T0;
LINK_STACK();
  ARG(parent_, 0);
  NARGS(inits_, 1);
  T0 = (P)YgooSclassYPnew(parent_,inits_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_38) {
  P parent_,inits_;
  P T0;
LINK_STACK();
  ARG(parent_, 0);
  NARGS(inits_, 1);
  T0 = (P)YgooSclassYPnew(parent_,inits_);
UNLINK_STACK();
  QRET(T0);
}

P YgooSclassY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69;
DEFCREGS();
  VARSET(YgooSclassYLparentsG,VARREF(YLlstG));
  VARSET(YgooSclassYLpropsG,VARREF(YLlstG));
  lit_0 = YPPsym((P)"object-class");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYobject_class = YPmet(FUNCODEREF(YgooSclassYobject_class),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(24));
  T1 = YgooSclassYobject_class;
  VARSET(YgooSclassYobject_class,T1);
  VARSET(YgooSclassYclass_of,VARREF(YgooSclassYobject_class));
  lit_2 = YPPsym((P)"@class-ancestors");
  lit_3 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYOclass_ancestors = YPmet(FUNCODEREF(YgooSclassYOclass_ancestors),LITREF(lit_2),T2,ENVNUL,PNUL,sloc(26));
  T3 = YgooSclassYOclass_ancestors;
  VARSET(YgooSclassYOclass_ancestors,T3);
  lit_4 = YPPsym((P)"class-ordered-ancestors");
  lit_5 = YPPlist(1,YPPsym((P)"c"));
  lit_6 = YPPsym((P)"candidate");
  lit_7 = YPPlist(1,YPPsym((P)"c"));
  lit_8 = YPPsym((P)"tail?");
  lit_9 = YPPlist(1,YPPsym((P)"l"));
  lit_10 = YPPsym((P)"candidate-at-head");
  lit_11 = YPPlist(1,YPPsym((P)"l"));
  lit_12 = YPPsym((P)"del-next");
  lit_13 = YPPlist(1,YPPsym((P)"l"));
  lit_14 = YPsb((P)"inconsistent precedence graph");
  T8 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tailQ_2 = YPmet(FUNCODEREF(fun_tailQ_2),LITREF(lit_8),T8,ENVNUL,PNUL,sloc(37));
  T7 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_candidate_3 = YPmet(FUNCODEREF(fun_candidate_3),LITREF(lit_6),T7,ENVNUL,PNUL,sloc(36));
  T6 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_candidate_at_head_4 = YPmet(FUNCODEREF(fun_candidate_at_head_4),LITREF(lit_10),T6,ENVNUL,PNUL,sloc(39));
  T5 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_del_next_5 = YPmet(FUNCODEREF(fun_del_next_5),LITREF(lit_12),T5,ENVNUL,PNUL,sloc(43));
  T4 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YgooSclassYLparentsG),Ynil);
  YgooSclassYclass_ordered_ancestors = YPmet(FUNCODEREF(YgooSclassYclass_ordered_ancestors),LITREF(lit_4),T4,ENVNUL,PNUL,sloc(28));
  T9 = YgooSclassYclass_ordered_ancestors;
  VARSET(YgooSclassYclass_ordered_ancestors,T9);
  lit_15 = YPPsym((P)"@class-direct-props");
  lit_16 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYOclass_direct_props = YPmet(FUNCODEREF(YgooSclassYOclass_direct_props),LITREF(lit_15),T10,ENVNUL,PNUL,sloc(48));
  T11 = YgooSclassYOclass_direct_props;
  VARSET(YgooSclassYOclass_direct_props,T11);
  lit_17 = YPPsym((P)"class-ordered-props");
  lit_18 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YgooSclassYLpropsG),Ynil);
  YgooSclassYclass_ordered_props = YPmet(FUNCODEREF(YgooSclassYclass_ordered_props),LITREF(lit_17),T12,ENVNUL,PNUL,sloc(50));
  T13 = YgooSclassYclass_ordered_props;
  VARSET(YgooSclassYclass_ordered_props,T13);
  lit_19 = YPPsym((P)"del-class");
  lit_20 = YPPlist(1,YPPsym((P)"class"));
  T14 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYdel_class = YPmet(FUNCODEREF(YgooSclassYdel_class),LITREF(lit_19),T14,ENVNUL,PNUL,sloc(57));
  T15 = YgooSclassYdel_class;
  VARSET(YgooSclassYdel_class,T15);
  VARSET(YgooSclassYTnext_class_idT,YPint((P)0));
  VARSET(YgooSclassYDmax_classes,YPint((P)500));
  lit_21 = YPPsym((P)"init-class");
  lit_22 = YPPlist(1,YPPsym((P)"x"));
  lit_23 = YPsb((P)"Too many classes %=");
  lit_24 = YPsb((P)"Need at least one parent in class definition");
  lit_25 = YPPlist(1,YPPsym((P)"parent"));
  lit_26 = YPPlist(1,YPPsym((P)"ancestor"));
  T18 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T18,ENVNUL,PNUL,sloc(74));
  T17 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T17,ENVNUL,PNUL,sloc(81));
  T16 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYinit_class = YPmet(FUNCODEREF(YgooSclassYinit_class),LITREF(lit_21),T16,ENVNUL,PNUL,sloc(66));
  T19 = YgooSclassYinit_class;
  VARSET(YgooSclassYinit_class,T19);
  lit_27 = YPPsym((P)"fab-class");
  lit_28 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"parents"));
  T20 = YPsig(LITREF(lit_28),YPPlist(2,VARREF(YLsymG),VARREF(YgooSclassYLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  YgooSclassYfab_class = YPmet(FUNCODEREF(YgooSclassYfab_class),LITREF(lit_27),T20,ENVNUL,PNUL,sloc(86));
  T21 = YgooSclassYfab_class;
  VARSET(YgooSclassYfab_class,T21);
  lit_29 = YPPsym((P)"refab-class");
  lit_30 = YPPlist(2,YPPsym((P)"old-class"),YPPsym((P)"parents"));
  T22 = YPsig(LITREF(lit_30),YPPlist(2,VARREF(YLclassG),VARREF(YgooSclassYLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  YgooSclassYrefab_class = YPmet(FUNCODEREF(YgooSclassYrefab_class),LITREF(lit_29),T22,ENVNUL,PNUL,sloc(91));
  T23 = YgooSclassYrefab_class;
  VARSET(YgooSclassYrefab_class,T23);
  lit_31 = YPPsym((P)"object-props");
  lit_32 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_props = YPmet(FUNCODEREF(Yobject_props),LITREF(lit_31),T24,ENVNUL,PNUL,sloc(106));
  T25 = Yobject_props;
  VARSET(Yobject_props,T25);
  lit_33 = YPPsym((P)"object-parents");
  lit_34 = YPPlist(1,YPPsym((P)"x"));
  T26 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYobject_parents = YPmet(FUNCODEREF(YgooSclassYobject_parents),LITREF(lit_33),T26,ENVNUL,PNUL,sloc(107));
  T27 = YgooSclassYobject_parents;
  VARSET(YgooSclassYobject_parents,T27);
  VARSET(YgooSclassYDgetter_not_found,YPint((P)-1));
  lit_35 = YPPsym((P)"ensure-fresh-object");
  lit_36 = YPPlist(1,YPPsym((P)"x"));
  T28 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYensure_fresh_object = YPmet(FUNCODEREF(YgooSclassYensure_fresh_object),LITREF(lit_35),T28,ENVNUL,PNUL,sloc(115));
  T29 = YgooSclassYensure_fresh_object;
  VARSET(YgooSclassYensure_fresh_object,T29);
  lit_37 = YPPsym((P)"prop-offset");
  lit_38 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T30 = YPsig(LITREF(lit_38),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  Yprop_offset = YPmet(FUNCODEREF(Yprop_offset),LITREF(lit_37),T30,ENVNUL,PNUL,sloc(119));
  T31 = Yprop_offset;
  VARSET(Yprop_offset,T31);
  VARSET(YgooSclassYTreport_prop_unbound_errorsQT,YPtrue);
  lit_39 = YPPsym((P)"%prop-unbound-error");
  lit_40 = YPPlist(1,YPPsym((P)"x"));
  T32 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPprop_unbound_error = YPmet(FUNCODEREF(YPprop_unbound_error),LITREF(lit_39),T32,ENVNUL,PNUL,sloc(129));
  T33 = YPprop_unbound_error;
  VARSET(YPprop_unbound_error,T33);
  lit_41 = YPPsym((P)"prop-value");
  lit_42 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T34 = YPsig(LITREF(lit_42),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSclassYprop_value = YPmet(FUNCODEREF(YgooSclassYprop_value),LITREF(lit_41),T34,ENVNUL,PNUL,sloc(134));
  T35 = YgooSclassYprop_value;
  VARSET(YgooSclassYprop_value,T35);
  lit_43 = YPPsym((P)"prop-bound?");
  lit_44 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T36 = YPsig(LITREF(lit_44),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSclassYprop_boundQ = YPmet(FUNCODEREF(YgooSclassYprop_boundQ),LITREF(lit_43),T36,ENVNUL,PNUL,sloc(141));
  T37 = YgooSclassYprop_boundQ;
  VARSET(YgooSclassYprop_boundQ,T37);
  lit_45 = YPPsym((P)"prop-value-setter");
  lit_46 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"object"),YPPsym((P)"getter"));
  T38 = YPsig(LITREF(lit_46),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSclassYprop_value_setter = YPmet(FUNCODEREF(YgooSclassYprop_value_setter),LITREF(lit_45),T38,ENVNUL,PNUL,sloc(148));
  T39 = YgooSclassYprop_value_setter;
  VARSET(YgooSclassYprop_value_setter,T39);
  lit_47 = YPPsym((P)"find-getter");
  lit_48 = YPPlist(2,YPPsym((P)"owner"),YPPsym((P)"getter"));
  T40 = YPsig(LITREF(lit_48),YPPlist(2,VARREF(YLclassG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLmetG),Ynil);
  YgooSclassYfind_getter = YPmet(FUNCODEREF(YgooSclassYfind_getter),LITREF(lit_47),T40,ENVNUL,PNUL,sloc(160));
  T41 = YgooSclassYfind_getter;
  VARSET(YgooSclassYfind_getter,T41);
  lit_49 = YPPsym((P)"find-setter");
  lit_50 = YPPlist(3,YPPsym((P)"owner"),YPPsym((P)"type"),YPPsym((P)"zetter"));
  T42 = YPsig(LITREF(lit_50),YPPlist(3,VARREF(YLclassG),VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)3),VARREF(YLmetG),Ynil);
  YgooSclassYfind_setter = YPmet(FUNCODEREF(YgooSclassYfind_setter),LITREF(lit_49),T42,ENVNUL,PNUL,sloc(169));
  T43 = YgooSclassYfind_setter;
  VARSET(YgooSclassYfind_setter,T43);
  lit_51 = YPPsym((P)"forward-class");
  lit_52 = YPPlist(1,YPPsym((P)"old-class"));
  lit_53 = YPPlist(1,YPPsym((P)"g"));
  T45 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T45,ENVNUL,PNUL,sloc(184));
  T44 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYforward_class = YPmet(FUNCODEREF(YgooSclassYforward_class),LITREF(lit_51),T44,ENVNUL,PNUL,sloc(182));
  T46 = YgooSclassYforward_class;
  VARSET(YgooSclassYforward_class,T46);
  lit_54 = YPPsym((P)"clone");
  lit_55 = YPPlist(1,YPPsym((P)"x"));
  T47 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYclone = YPmet(FUNCODEREF(YgooSclassYclone),LITREF(lit_54),T47,ENVNUL,PNUL,sloc(187));
  T48 = YgooSclassYclone;
  VARSET(YgooSclassYclone,T48);
  lit_56 = YPPsym((P)"@do-descendents");
  lit_57 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  lit_58 = YPPsym((P)"visit");
  lit_59 = YPPlist(1,YPPsym((P)"x"));
  T50 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_visit_28 = YPmet(FUNCODEREF(fun_visit_28),LITREF(lit_58),T50,ENVNUL,PNUL,sloc(191));
  T49 = YPsig(LITREF(lit_57),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSclassYOdo_descendents = YPmet(FUNCODEREF(YgooSclassYOdo_descendents),LITREF(lit_56),T49,ENVNUL,PNUL,sloc(189));
  T51 = YgooSclassYOdo_descendents;
  VARSET(YgooSclassYOdo_descendents,T51);
  lit_60 = YPPsym((P)"finalize-props");
  lit_61 = YPPlist(1,YPPsym((P)"class"));
  lit_62 = YPPlist(1,YPPsym((P)"prop"));
  T53 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T53,ENVNUL,PNUL,sloc(201));
  T52 = YPsig(LITREF(lit_61),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYfinalize_props = YPmet(FUNCODEREF(YgooSclassYfinalize_props),LITREF(lit_60),T52,ENVNUL,PNUL,sloc(197));
  T54 = YgooSclassYfinalize_props;
  VARSET(YgooSclassYfinalize_props,T54);
  lit_63 = YPPsym((P)"%prop");
  lit_64 = YPPlist(5,YPPsym((P)"owner"),YPPsym((P)"getter"),YPPsym((P)"setter"),YPPsym((P)"type"),YPPsym((P)"init"));
  T55 = YPsig(LITREF(lit_64),YPPlist(5,VARREF(YLclassG),VARREF(YLgenG),VARREF(YLanyG),VARREF(YLtypeG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YgooSclassYPprop = YPmet(FUNCODEREF(YgooSclassYPprop),LITREF(lit_63),T55,ENVNUL,PNUL,sloc(204));
  T56 = YgooSclassYPprop;
  VARSET(YgooSclassYPprop,T56);
  lit_65 = YPPsym((P)"update-instance-for-changed-class");
  lit_66 = YPPlist(1,YPPsym((P)"object"));
  T57 = YPsig(LITREF(lit_66),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yupdate_instance_for_changed_class = YPmet(FUNCODEREF(Yupdate_instance_for_changed_class),LITREF(lit_65),T57,ENVNUL,PNUL,sloc(243));
  T58 = Yupdate_instance_for_changed_class;
  VARSET(Yupdate_instance_for_changed_class,T58);
  VARSET(YgooSclassYadd_prop,VARREF(YgooSclassYPprop));
  lit_67 = YPPsym((P)"patch-early-classes");
  lit_68 = Ynil;
  T59 = YPsig(LITREF(lit_68),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSclassYpatch_early_classes = YPmet(FUNCODEREF(YgooSclassYpatch_early_classes),LITREF(lit_67),T59,ENVNUL,PNUL,sloc(249));
  T60 = YgooSclassYpatch_early_classes;
  VARSET(YgooSclassYpatch_early_classes,T60);
  XCALL0(1,VARREF(YgooSclassYpatch_early_classes));
  lit_69 = YPPsym((P)"new");
  lit_70 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T62 = YPsig(LITREF(lit_70),YPPlist(1,VARREF(YLtypeG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T61 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_69),T62,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ynew,T61);
  lit_71 = YPPsym((P)"@new");
  lit_72 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T63 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YOnew = YPmet(FUNCODEREF(YOnew),LITREF(lit_71),T63,ENVNUL,PNUL,sloc(268));
  T64 = YOnew;
  VARSET(YOnew,T64);
  lit_73 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T65 = YPsig(LITREF(lit_73),YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_38 = YPmet(FUNCODEREF(fun_new_38),LITREF(lit_69),T65,ENVNUL,PNUL,sloc(271));
  T67 = VARREF_OR(Ynew,YPfalse);
  T68 = fun_new_38;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(Ynew,T66);
  T69 = YPfalse;
  return T69;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%raw", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%sig-names", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"sig-names-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"add-prop", CVAR, &YgooSclassYadd_prop},
  {"patch-early-classes", CVAR, &YgooSclassYpatch_early_classes},
  {"find-setter", CVAR, &YgooSclassYfind_setter},
  {"refab-class", CVAR, &YgooSclassYrefab_class},
  {"class-ordered-ancestors", CVAR, &YgooSclassYclass_ordered_ancestors},
  {"find-getter", CVAR, &YgooSclassYfind_getter},
  {"<props>", CVAR, &YgooSclassYLpropsG},
  {"@class-ancestors", CVAR, &YgooSclassYOclass_ancestors},
  {"object-class", CVAR, &YgooSclassYobject_class},
  {"%new", PVAR, NULL},
  {"prop-value-setter", CVAR, &YgooSclassYprop_value_setter},
  {"*next-class-id*", CVAR, &YgooSclassYTnext_class_idT},
  {"when", PVAR, NULL},
  {"%prop", CVAR, &YgooSclassYPprop},
  {"prop-bound?", CVAR, &YgooSclassYprop_boundQ},
  {"---main-0---", PVAR, NULL},
  {"*report-prop-unbound-errors?*", CVAR, &YgooSclassYTreport_prop_unbound_errorsQT},
  {"finalize-props", CVAR, &YgooSclassYfinalize_props},
  {"class-of", CVAR, &YgooSclassYclass_of},
  {"init-class", CVAR, &YgooSclassYinit_class},
  {"prop-value", CVAR, &YgooSclassYprop_value},
  {"$getter-not-found", CVAR, &YgooSclassYDgetter_not_found},
  {"del-class", CVAR, &YgooSclassYdel_class},
  {"fab-class", CVAR, &YgooSclassYfab_class},
  {"forward-class", CVAR, &YgooSclassYforward_class},
  {"unless", PVAR, NULL},
  {"%update-instance-for-changed-class", PVAR, NULL},
  {"class-ordered-props", CVAR, &YgooSclassYclass_ordered_props},
  {"@do-descendents", CVAR, &YgooSclassYOdo_descendents},
  {"and", PVAR, NULL},
  {"<parents>", CVAR, &YgooSclassYLparentsG},
  {"@class-direct-props", CVAR, &YgooSclassYOclass_direct_props},
  {"clone", CVAR, &YgooSclassYclone},
  {"ensure-fresh-object", CVAR, &YgooSclassYensure_fresh_object},
  {"def-object-class-accessor", PVAR, NULL},
  {"or", PVAR, NULL},
  {"object-parents", CVAR, &YgooSclassYobject_parents},
  {"$max-classes", CVAR, &YgooSclassYDmax_classes},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"add-prop", NULL},
  {"find-setter", NULL},
  {"find-getter", NULL},
  {"fab-class", NULL},
  {"object-class", NULL},
  {"prop-value-setter", NULL},
  {"%prop", NULL},
  {"prop-bound?", NULL},
  {"*report-prop-unbound-errors?*", NULL},
  {"class-of", NULL},
  {"prop-value", NULL},
  {"%prop-unbound-error", NULL},
  {"prop-offset", NULL},
  {"clone", NULL},
  {"object-parents", NULL},
  {"object-props", NULL},
  {"new", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSclass;
MODULE_INFO module_info_gooSclass = {
  "goo/class",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSfun (void);

/* EXPRESSION: */

extern void load_module_gooSclass (void);

void load_module_gooSclass (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();

  (P)YgooSclassY___main_0___();

}

/* END OF GENERATED CODE. */
