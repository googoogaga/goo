/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/class");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/class */

EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(YgooSclassYclass_ordered_props,"goo/class","class-ordered-props");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooSclassYOdo_descendents,"goo/class","@do-descendents");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yclass_id,"goo/boot","class-id");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooSclassYOclass_direct_props,"goo/class","@class-direct-props");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yprop_offset,"goo/boot","prop-offset");
DEF(YgooSclassYclone,"goo/class","clone");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YgooSclassYDgetter_not_found,"goo/class","$getter-not-found");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YgooSclassYLparentsG,"goo/class","<parents>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOfold,"goo/boot","@fold");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(YgooSclassYensure_fresh_object,"goo/class","ensure-fresh-object");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
DEF(YgooSclassYclass_ordered_ancestors,"goo/class","class-ordered-ancestors");
DEF(YgooSclassYinit_class,"goo/class","init-class");
DEF(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YLclassG,"goo/boot","<class>");
DEF(YgooSclassYforward_class,"goo/class","forward-class");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(Yprops_of,"goo/boot","props-of");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YOnew,"goo/boot","@new");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
DEF(YgooSclassYclass_of,"goo/class","class-of");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Yerror,"goo/boot","error");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YOelt,"goo/boot","@elt");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YgooSclassYpatch_early_classes,"goo/class","patch-early-classes");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooSclassYrefab_class,"goo/class","refab-class");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YOdel_dups,"goo/boot","@del-dups");
DEF(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOlit,"goo/boot","@lit");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YPtrue,"goo/boot","%true");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
DEF(YgooSclassYOclass_ancestors,"goo/class","@class-ancestors");
EXT(YOdo,"goo/boot","@do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooSclassYLpropsG,"goo/class","<props>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YOpick,"goo/boot","@pick");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YgooSclassYPprop,"goo/class","%prop");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooSclassYDmax_classes,"goo/class","$max-classes");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YPfalse,"goo/boot","%false");
EXT(YOOnulQ,"goo/boot","@@nul?");
DEF(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YOmap,"goo/boot","@map");
EXT(YLintG,"goo/boot","<int>");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
DEF(YgooSclassYfinalize_props,"goo/class","finalize-props");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YgooSclassYprop_value,"goo/class","prop-value");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yapp_filename,"goo/boot","app-filename");
DEF(YgooSclassYdel_class,"goo/class","del-class");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yhead,"goo/boot","head");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(YgooSclassYTnext_class_idT,"goo/class","*next-class-id*");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YOrev,"goo/boot","@rev");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YLmagG,"goo/boot","<mag>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_71);
DEFLIT(lit_19);
DEFLIT(lit_52);
DEFLIT(lit_46);
DEFLIT(lit_67);
DEFLIT(lit_62);
DEFLIT(lit_28);
DEFLIT(lit_61);
DEFLIT(lit_23);
DEFLIT(lit_58);
DEFLIT(lit_70);
DEFLIT(lit_48);
DEFLIT(lit_12);
DEFLIT(lit_51);
DEFLIT(lit_32);
DEFLIT(lit_9);
DEFLIT(lit_2);
DEFLIT(lit_66);
DEFLIT(lit_64);
DEFLIT(lit_40);
DEFLIT(lit_27);
DEFLIT(lit_6);
DEFLIT(lit_0);
DEFLIT(lit_5);
DEFLIT(lit_33);
DEFLIT(lit_21);
DEFLIT(lit_10);
DEFLIT(lit_16);
DEFLIT(lit_20);
DEFLIT(lit_59);
DEFLIT(lit_34);
DEFLIT(lit_57);
DEFLIT(lit_42);
DEFLIT(lit_31);
DEFLIT(lit_41);
DEFLIT(lit_55);
DEFLIT(lit_65);
DEFLIT(lit_30);
DEFLIT(lit_37);
DEFLIT(lit_11);
DEFLIT(lit_35);
DEFLIT(lit_15);
DEFLIT(lit_69);
DEFLIT(lit_18);
DEFLIT(lit_63);
DEFLIT(lit_13);
DEFLIT(lit_44);
DEFLIT(lit_25);
DEFLIT(lit_38);
DEFLIT(lit_56);
DEFLIT(lit_47);
DEFLIT(lit_60);
DEFLIT(lit_22);
DEFLIT(lit_4);
DEFLIT(lit_7);
DEFLIT(lit_26);
DEFLIT(lit_17);
DEFLIT(lit_1);
DEFLIT(lit_24);
DEFLIT(lit_8);
DEFLIT(lit_3);
DEFLIT(lit_14);
DEFLIT(lit_39);
DEFLIT(lit_53);
DEFLIT(lit_29);
DEFLIT(lit_43);
DEFLIT(lit_50);
DEFLIT(lit_68);
DEFLIT(lit_45);
DEFLIT(lit_36);
DEFLIT(lit_49);
DEFLIT(lit_54);

/* FUNCTIONS: */

FUNFOR(YgooSclassYOclass_ancestors);
LOCFOR(fun_tailQ_1);
LOCFOR(fun_candidate_2);
LOCFOR(fun_candidate_at_head_3);
LOCFOR(fun_del_next_4);
FUNFOR(YgooSclassYclass_ordered_ancestors);
FUNFOR(YgooSclassYOclass_direct_props);
FUNFOR(YgooSclassYclass_ordered_props);
FUNFOR(YgooSclassYdel_class);
LOCFOR(fun_9);
LOCFOR(fun_10);
FUNFOR(YgooSclassYinit_class);
FUNFOR(YgooSclassYfab_class);
FUNFOR(YgooSclassYrefab_class);
FUNFOR(YgooSclassYclass_of);
FUNFOR(Yprops_of);
FUNFOR(YgooSclassYensure_fresh_object);
FUNFOR(Yprop_offset);
FUNFOR(YPprop_unbound_error);
FUNFOR(YgooSclassYprop_value);
FUNFOR(YgooSclassYprop_boundQ);
FUNFOR(YgooSclassYprop_value_setter);
FUNFOR(YgooSclassYfind_getter);
FUNFOR(YgooSclassYfind_setter);
LOCFOR(fun_24);
FUNFOR(YgooSclassYforward_class);
FUNFOR(YgooSclassYclone);
LOCFOR(fun_visit_27);
FUNFOR(YgooSclassYOdo_descendents);
LOCFOR(fun_29);
FUNFOR(YgooSclassYfinalize_props);
FUNFOR(YgooSclassYPprop);
extern P YgooSclassYPupdate_instance_for_changed_class (P);
FUNFOR(Yupdate_instance_for_changed_class);
FUNFOR(YgooSclassYpatch_early_classes);
extern P YgooSclassYPnew (P,P);
FUNFOR(YOnew);
LOCFOR(fun_new_37);
extern P YgooSclassY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSclassYOclass_ancestors) {
  P x_;
  P xF1771;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF1771 = x_;
  T0 = (P)YPprop_elt(xF1771,(P)4);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_tailQ_1) {
  P l_;
  P xF1773;
  P xF1772;
  P T0,T1;
LINK_STACK();
  ARG(l_, 0);
  xF1772 = l_;
  xF1773 = xF1772;
  T1 = (P)YPprop_elt(xF1773,(P)1);
  T0 = CALL2(1,VARREF(YOmemQ),T1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_candidate_2) {
  P c_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  T3 = FUNFAB(fun_tailQ_1,1,c_);
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

LOCCODEDEF(fun_candidate_at_head_3) {
  P l_;
  P xF1777;
  P xF1776;
  P xF1775;
  P xF1774;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(l_, 0);
  xF1774 = l_;
  xF1775 = xF1774;
  T3 = (P)YPeqQ(xF1775,VARREF(Ynil));
  T2 = (P)YPbb(T3);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    xF1776 = l_;
    xF1777 = xF1776;
    T5 = (P)YPprop_elt(xF1777,(P)0);
    T4 = CALL1(1,FREEREF(0),T5);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_del_next_4) {
  P l_;
  P xF1783;
  P xF1782;
  P yF1781;
  P xF1780;
  P xF1779;
  P xF1778;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(l_, 0);
  xF1778 = l_;
  xF1779 = xF1778;
  T3 = (P)YPprop_elt(xF1779,(P)0);
  xF1780 = T3;
  yF1781 = FREEREF(0);
  T2 = (P)YPeqQ(xF1780,yF1781);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF1782 = l_;
    xF1783 = xF1782;
    T4 = (P)YPprop_elt(xF1783,(P)1);
    T0 = T4;
  } else {
    T0 = l_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYclass_ordered_ancestors) {
  P c_;
  P nextF1790;
  P candidate_at_headF1789;
  P candidateF1788;
  P remaining_listsF1787;
  P partial_cplF1786;
  P parentsF1785;
  P xF1784;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(c_, 0);
  xF1784 = c_;
  T15 = (P)YPprop_elt(xF1784,(P)2);
  parentsF1785 = T15;
  T12 = CALL1(1,VARREF(YOlst),c_);
  check_type(T12,VARREF(YLlstG));
  partial_cplF1786 = T12;
  T14 = CALL2(1,VARREF(YOmap),VARREF(YgooSclassYOclass_ancestors),parentsF1785);
  T13 = (P)YOadd(T14,parentsF1785);
  check_type(T13,VARREF(YLlstG));
  remaining_listsF1787 = T13;
  LOOP_43: {
    P a43_0,a43_1;
    T1 = CALL2(1,VARREF(YOallQ),VARREF(YOOnulQ),remaining_listsF1787);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YOrevX),partial_cplF1786);
      T0 = T2;
    } else {
      T10 = FUNSHELL(1,fun_candidate_2,1);
      candidateF1788 = T10;
      T11 = FUNSHELL(0,fun_candidate_at_head_3,1);
      candidate_at_headF1789 = T11;
      FUNINIT(candidateF1788, 1,remaining_listsF1787);
      FUNINIT(candidate_at_headF1789, 1,candidateF1788);
      T9 = CALL2(1,VARREF(YOanyQ),candidate_at_headF1789,remaining_listsF1787);
      nextF1790 = T9;
      if (nextF1790 != YPfalse) {
        T5 = (P)YOpair(nextF1790,partial_cplF1786);
        T7 = FUNFAB(fun_del_next_4,1,nextF1790);
        T6 = CALL2(1,VARREF(YOmap),T7,remaining_listsF1787);
        a43_0 = T5;
        a43_1 = T6;
        partial_cplF1786 = a43_0;
        remaining_listsF1787 = a43_1;
        goto LOOP_43;
        T3 = T4;
      } else {
        T8 = CALL1(1,VARREF(Ycpl_error),LITREF(lit_12));
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
  P xF1791;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF1791 = x_;
  T0 = (P)YPprop_elt(xF1791,(P)3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYclass_ordered_props) {
  P x_;
  P propsF1793;
  P xF1792;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  xF1792 = x_;
  T5 = (P)YPprop_elt(xF1792,(P)4);
  T4 = CALL1(1,VARREF(YOrev),T5);
  T3 = CALL2(1,VARREF(YOmap),VARREF(YgooSclassYOclass_direct_props),T4);
  T2 = CALL3(1,VARREF(YOfold),VARREF(YOcat2),Ynil,T3);
  T1 = CALL1(1,VARREF(YOdel_dups),T2);
  propsF1793 = T1;
  T0 = (P)YOlen(propsF1793);
  (P)YPclass_prop_len_setter(T0,x_);
UNLINK_STACK();
  RET(propsF1793);
}

FUNCODEDEF(YgooSclassYdel_class) {
  P class_;
LINK_STACK();
  ARG(class_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_9) {
  P parent_;
  P xF1794;
  P T0,T1,T2;
LINK_STACK();
  ARG(parent_, 0);
  xF1794 = parent_;
  T2 = (P)YPprop_elt(xF1794,(P)6);
  T1 = (P)YOadd_new(T2,FREEREF(0));
  T0 = (P)YPclass_children_setter(T1,parent_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_10) {
  P ancestor_;
  P xF1799;
  P xF1798;
  P xF1797;
  P xF1796;
  P xF1795;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(ancestor_, 0);
  xF1795 = YPint((P)1);
  xF1796 = xF1795;
  T1 = (P)YPiGG(xF1796,(P)2);
  xF1797 = ancestor_;
  T3 = (P)YPprop_elt(xF1797,(P)10);
  xF1798 = T3;
  xF1799 = xF1798;
  T2 = (P)YPiGG(xF1799,(P)2);
  T0 = (P)YPselt_setter(T1,FREEREF(0),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYinit_class) {
  P x_;
  P xF1827;
  P rowF1826;
  P xF1825;
  P xF1824;
  P xF1823;
  P xF1822;
  P xF1821;
  P xF1820;
  P yF1819;
  P xF1818;
  P tF1817;
  P xF1816;
  P xF1815;
  P xF1814;
  P xF1813;
  P xF1812;
  P xF1811;
  P yF1810;
  P xF1809;
  P yF1808;
  P xF1807;
  P xF1806;
  P xF1805;
  P xF1804;
  P xF1803;
  P xF1802;
  P yF1801;
  P xF1800;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(x_, 0);
  xF1800 = VARREF(YgooSclassYDmax_classes);
  yF1801 = VARREF(YgooSclassYTnext_class_idT);
  xF1802 = xF1800;
  xF1803 = xF1802;
  T2 = (P)YPiGG(xF1803,(P)2);
  xF1804 = yF1801;
  xF1805 = xF1804;
  T3 = (P)YPiGG(xF1805,(P)2);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
  if (T1) {
    T4 = CALL2(1,VARREF(Yinternal_error),LITREF(lit_21),VARREF(YgooSclassYDmax_classes));
  } else {
  }
  xF1806 = x_;
  T8 = (P)YPprop_elt(xF1806,(P)2);
  T7 = (P)YOlen(T8);
  xF1807 = T7;
  yF1808 = YPint((P)0);
  T6 = (P)YPeqQ(xF1807,yF1808);
  T5 = (P)YPbb(T6);
  if (T6) {
    T9 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_22));
  } else {
  }
  (P)YPclass_id_setter(VARREF(YgooSclassYTnext_class_idT),x_);
  xF1809 = VARREF(YgooSclassYTnext_class_idT);
  yF1810 = YPint((P)1);
  xF1811 = xF1809;
  xF1812 = xF1811;
  T13 = (P)YPiGG(xF1812,(P)2);
  xF1813 = yF1810;
  xF1814 = xF1813;
  T14 = (P)YPiGG(xF1814,(P)2);
  T12 = (P)YPiA(T13,T14);
  xF1815 = T12;
  xF1816 = xF1815;
  tF1817 = (P)1;
  T11 = (P)YPiLL(xF1816,(P)2);
  T10 = (P)YPiv(T11,tF1817);
  VARSET(YgooSclassYTnext_class_idT,T10);
  xF1818 = x_;
  yF1819 = VARREF(YLanyG);
  T18 = (P)YPeqQ(xF1818,yF1819);
  T17 = (P)YPbb(T18);
  xF1820 = T17;
  T16 = (P)YPeqQ(xF1820,YPfalse);
  T15 = (P)YPbb(T16);
  if (T16) {
    T19 = FUNFAB(fun_9,1,x_);
    xF1821 = x_;
    T20 = (P)YPprop_elt(xF1821,(P)2);
    CALL2(1,VARREF(YOdo),T19,T20);
    T22 = CALL1(1,VARREF(YgooSclassYclass_ordered_ancestors),x_);
    T21 = (P)YPclass_ancestors_setter(T22,x_);
  } else {
  }
  xF1822 = VARREF(YgooSclassYDmax_classes);
  xF1823 = xF1822;
  T27 = (P)YPiGG(xF1823,(P)2);
  xF1824 = YPint((P)0);
  xF1825 = xF1824;
  T28 = (P)YPiGG(xF1825,(P)2);
  T26 = (P)YPstr(T27,T28);
  rowF1826 = T26;
  (P)YPclass_row_setter(rowF1826,x_);
  T23 = FUNFAB(fun_10,1,rowF1826);
  xF1827 = x_;
  T24 = (P)YPprop_elt(xF1827,(P)4);
  CALL2(1,VARREF(YOdo),T23,T24);
  T25 = CALL1(1,VARREF(YgooSclassYclass_ordered_props),x_);
  (P)YPclass_props_setter(T25,x_);
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(YgooSclassYfab_class) {
  P name_,parents_;
  P xF1828;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  ARG(parents_, 1);
  T0 = (P)YPclass(YPint((P)0),name_,parents_,Ynil,Ynil,Ynil,Ynil,Ynil,Ynil,YPfalse,YPint((P)-1),YPfalse);
  xF1828 = T0;
  CALL1(1,VARREF(YgooSclassYinit_class),xF1828);
UNLINK_STACK();
  RET(xF1828);
}

FUNCODEDEF(YgooSclassYrefab_class) {
  P old_class_,parents_;
  P new_classF1830;
  P xF1829;
  P T0,T1;
LINK_STACK();
  ARG(old_class_, 0);
  ARG(parents_, 1);
  xF1829 = old_class_;
  T1 = (P)YPprop_elt(xF1829,(P)3);
  T0 = CALL2(1,VARREF(YgooSclassYfab_class),parents_,T1);
  new_classF1830 = T0;
  (P)YPclass_forward_setter(new_classF1830,old_class_);
UNLINK_STACK();
  RET(new_classF1830);
}

FUNCODEDEF(YgooSclassYclass_of) {
  P x_;
  P tagF1833;
  P xF1832;
  P xF1831;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  xF1831 = x_;
  xF1832 = xF1831;
  T5 = (P)YPiB(xF1832,(P)3);
  tagF1833 = T5;
  T2 = (P)YPiE(tagF1833,(P)0);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = (P)YPobject_class(xF1831);
    T0 = T3;
  } else {
    T4 = (P)YPelt(VARREF(YDdirect_object_class),tagF1833);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprops_of) {
  P x_;
  P xF1837;
  P tagF1836;
  P xF1835;
  P xF1834;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  xF1834 = x_;
  xF1835 = xF1834;
  T6 = (P)YPiB(xF1835,(P)3);
  tagF1836 = T6;
  T3 = (P)YPiE(tagF1836,(P)0);
  T2 = (P)YPbb(T3);
  if (T3) {
    T4 = (P)YPobject_class(xF1834);
    T1 = T4;
  } else {
    T5 = (P)YPelt(VARREF(YDdirect_object_class),tagF1836);
    T1 = T5;
  }
  xF1837 = T1;
  T0 = (P)YPprop_elt(xF1837,(P)5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYensure_fresh_object) {
  P x_;
  P xF1841;
  P tagF1840;
  P xF1839;
  P xF1838;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  xF1838 = x_;
  xF1839 = xF1838;
  T7 = (P)YPiB(xF1839,(P)3);
  tagF1840 = T7;
  T4 = (P)YPiE(tagF1840,(P)0);
  T3 = (P)YPbb(T4);
  if (T4) {
    T5 = (P)YPobject_class(xF1838);
    T2 = T5;
  } else {
    T6 = (P)YPelt(VARREF(YDdirect_object_class),tagF1840);
    T2 = T6;
  }
  xF1841 = T2;
  T1 = (P)YPprop_elt(xF1841,(P)9);
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
  P xF1861;
  P xF1860;
  P tF1859;
  P xF1858;
  P xF1857;
  P xF1856;
  P xF1855;
  P xF1854;
  P xF1853;
  P yF1852;
  P xF1851;
  P yF1850;
  P xF1849;
  P xF1848;
  P xF1847;
  P xF1846;
  P xF1845;
  P xF1844;
  P propsF1843;
  P iF1842;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
  iF1842 = YPint((P)0);
  T15 = CALL1(1,VARREF(Yprops_of),object_);
  propsF1843 = T15;
  LOOP_44: {
    P a44_0,a44_1;
    xF1844 = propsF1843;
    xF1845 = xF1844;
    T2 = (P)YPeqQ(xF1845,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = VARREF(YgooSclassYDgetter_not_found);
    } else {
      xF1846 = propsF1843;
      xF1847 = xF1846;
      T7 = (P)YPprop_elt(xF1847,(P)0);
      xF1848 = T7;
      T6 = (P)YPprop_elt(xF1848,(P)1);
      xF1849 = T6;
      yF1850 = getter_;
      T5 = (P)YPeqQ(xF1849,yF1850);
      T4 = (P)YPbb(T5);
      if (T5) {
        T3 = iF1842;
      } else {
        xF1851 = iF1842;
        yF1852 = YPint((P)1);
        xF1853 = xF1851;
        xF1854 = xF1853;
        T12 = (P)YPiGG(xF1854,(P)2);
        xF1855 = yF1852;
        xF1856 = xF1855;
        T13 = (P)YPiGG(xF1856,(P)2);
        T11 = (P)YPiA(T12,T13);
        xF1857 = T11;
        xF1858 = xF1857;
        tF1859 = (P)1;
        T10 = (P)YPiLL(xF1858,(P)2);
        T9 = (P)YPiv(T10,tF1859);
        xF1860 = propsF1843;
        xF1861 = xF1860;
        T14 = (P)YPprop_elt(xF1861,(P)1);
        a44_0 = T9;
        a44_1 = T14;
        iF1842 = a44_0;
        propsF1843 = a44_1;
        goto LOOP_44;
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
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYprop_value) {
  P object_,getter_;
  P yF1864;
  P xF1863;
  P offsetF1862;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
  CALL1(1,VARREF(YgooSclassYensure_fresh_object),object_);
  T5 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF1862 = T5;
  xF1863 = offsetF1862;
  yF1864 = VARREF(YgooSclassYDgetter_not_found);
  T2 = (P)YPiE(xF1863,yF1864);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
    T0 = T3;
  } else {
    T4 = (P)YgooSfunYprop_value_at(object_,offsetF1862);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYprop_boundQ) {
  P object_,getter_;
  P yF1867;
  P xF1866;
  P offsetF1865;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
  CALL1(1,VARREF(YgooSclassYensure_fresh_object),object_);
  T5 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF1865 = T5;
  xF1866 = offsetF1865;
  yF1867 = VARREF(YgooSclassYDgetter_not_found);
  T2 = (P)YPiE(xF1866,yF1867);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
    T0 = T3;
  } else {
    T4 = (P)YgooSfunYprop_bound_atQ(object_,offsetF1865);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSclassYprop_value_setter) {
  P z_,object_,getter_;
  P xF1910;
  P xF1909;
  P tF1908;
  P xF1907;
  P xF1906;
  P xF1905;
  P xF1904;
  P xF1903;
  P xF1902;
  P yF1901;
  P xF1900;
  P xF1899;
  P xF1898;
  P xF1897;
  P xF1896;
  P xF1895;
  P xF1894;
  P xF1893;
  P c2F1892;
  P c1F1891;
  P tagF1890;
  P xF1889;
  P xF1888;
  P cF1887;
  P oF1886;
  P yF1885;
  P xF1884;
  P tagF1883;
  P xF1882;
  P xF1881;
  P tF1880;
  P oF1879;
  P xF1878;
  P yF1877;
  P xF1876;
  P xF1875;
  P propF1874;
  P xF1873;
  P xF1872;
  P xF1871;
  P xF1870;
  P propsF1869;
  P iF1868;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
LINK_STACK();
  ARG(z_, 0);
  ARG(object_, 1);
  ARG(getter_, 2);
  CALL1(1,VARREF(YgooSclassYensure_fresh_object),object_);
  iF1868 = YPint((P)0);
  T44 = CALL1(1,VARREF(Yprops_of),object_);
  propsF1869 = T44;
  LOOP_45: {
    P a45_0,a45_1;
    xF1870 = propsF1869;
    xF1871 = xF1870;
    T2 = (P)YPeqQ(xF1871,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
      T0 = T3;
    } else {
      xF1872 = propsF1869;
      xF1873 = xF1872;
      T43 = (P)YPprop_elt(xF1873,(P)0);
      propF1874 = T43;
      xF1875 = propF1874;
      T7 = (P)YPprop_elt(xF1875,(P)1);
      xF1876 = T7;
      yF1877 = getter_;
      T6 = (P)YPeqQ(xF1876,yF1877);
      T5 = (P)YPbb(T6);
      if (T6) {
        oF1879 = z_;
        xF1878 = propF1874;
        T32 = (P)YPprop_elt(xF1878,(P)3);
        tF1880 = T32;
        xF1881 = tF1880;
        xF1882 = xF1881;
        T17 = (P)YPiB(xF1882,(P)3);
        tagF1883 = T17;
        T14 = (P)YPiE(tagF1883,(P)0);
        T13 = (P)YPbb(T14);
        if (T14) {
          T15 = (P)YPobject_class(xF1881);
          T12 = T15;
        } else {
          T16 = (P)YPelt(VARREF(YDdirect_object_class),tagF1883);
          T12 = T16;
        }
        xF1884 = T12;
        yF1885 = VARREF(YLclassG);
        T11 = (P)YPeqQ(xF1884,yF1885);
        T10 = (P)YPbb(T11);
        if (T11) {
          oF1886 = oF1879;
          cF1887 = tF1880;
          xF1888 = oF1886;
          xF1889 = xF1888;
          T30 = (P)YPiB(xF1889,(P)3);
          tagF1890 = T30;
          T27 = (P)YPiE(tagF1890,(P)0);
          T26 = (P)YPbb(T27);
          if (T27) {
            T28 = (P)YPobject_class(xF1888);
            T25 = T28;
          } else {
            T29 = (P)YPelt(VARREF(YDdirect_object_class),tagF1890);
            T25 = T29;
          }
          c1F1891 = T25;
          c2F1892 = cF1887;
          xF1893 = c1F1891;
          T21 = (P)YPprop_elt(xF1893,(P)11);
          xF1894 = c2F1892;
          T23 = (P)YPprop_elt(xF1894,(P)10);
          xF1895 = T23;
          xF1896 = xF1895;
          T22 = (P)YPiGG(xF1896,(P)2);
          T20 = (P)YPselt(T21,T22);
          xF1897 = YPint((P)1);
          xF1898 = xF1897;
          T24 = (P)YPiGG(xF1898,(P)2);
          T19 = (P)YPiE(T20,T24);
          T18 = (P)YPbb(T19);
          T9 = T18;
        } else {
          T31 = CALL2(1,VARREF(YisaQ),oF1879,tF1880);
          T9 = T31;
        }
        if (T9 != YPfalse) {
          T33 = (P)YgooSfunYprop_value_at_setter(z_,object_,iF1868);
          T8 = T33;
        } else {
          xF1899 = propF1874;
          T35 = (P)YPprop_elt(xF1899,(P)3);
          T34 = CALL3(1,VARREF(Yproperty_type_error),getter_,z_,T35);
          T8 = T34;
        }
        T4 = T8;
      } else {
        xF1900 = iF1868;
        yF1901 = YPint((P)1);
        xF1902 = xF1900;
        xF1903 = xF1902;
        T40 = (P)YPiGG(xF1903,(P)2);
        xF1904 = yF1901;
        xF1905 = xF1904;
        T41 = (P)YPiGG(xF1905,(P)2);
        T39 = (P)YPiA(T40,T41);
        xF1906 = T39;
        xF1907 = xF1906;
        tF1908 = (P)1;
        T38 = (P)YPiLL(xF1907,(P)2);
        T37 = (P)YPiv(T38,tF1908);
        xF1909 = propsF1869;
        xF1910 = xF1909;
        T42 = (P)YPprop_elt(xF1910,(P)1);
        a45_0 = T37;
        a45_1 = T42;
        iF1868 = a45_0;
        propsF1869 = a45_1;
        goto LOOP_45;
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
  P xF1920;
  P xF1919;
  P yF1918;
  P xF1917;
  P metF1916;
  P xF1915;
  P xF1914;
  P xF1913;
  P xF1912;
  P metsF1911;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  T11 = CALL1(1,VARREF(YgooSfunYOfun_mets),getter_);
  metsF1911 = T11;
  LOOP_46: {
    P a46_0;
    xF1912 = metsF1911;
    xF1913 = xF1912;
    T2 = (P)YPeqQ(xF1913,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,owner_);
      T0 = T3;
    } else {
      xF1914 = metsF1911;
      xF1915 = xF1914;
      T10 = (P)YPprop_elt(xF1915,(P)0);
      metF1916 = T10;
      T7 = CALL2(1,VARREF(YgooSfunYfun_spec),metF1916,YPint((P)0));
      xF1917 = T7;
      yF1918 = owner_;
      T6 = (P)YPeqQ(xF1917,yF1918);
      T5 = (P)YPbb(T6);
      if (T6) {
        T4 = metF1916;
      } else {
        xF1919 = metsF1911;
        xF1920 = xF1919;
        T9 = (P)YPprop_elt(xF1920,(P)1);
        a46_0 = T9;
        metsF1911 = a46_0;
        goto LOOP_46;
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
  P xF1930;
  P xF1929;
  P yF1928;
  P xF1927;
  P metF1926;
  P xF1925;
  P xF1924;
  P xF1923;
  P xF1922;
  P metsF1921;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(owner_, 0);
  ARG(type_, 1);
  ARG(zetter_, 2);
  T14 = CALL1(1,VARREF(YgooSfunYOfun_mets),zetter_);
  metsF1921 = T14;
  LOOP_47: {
    P a47_0;
    xF1922 = metsF1921;
    xF1923 = xF1922;
    T2 = (P)YPeqQ(xF1923,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL2(1,VARREF(Yproperty_not_found_error),zetter_,owner_);
      T0 = T3;
    } else {
      xF1924 = metsF1921;
      xF1925 = xF1924;
      T13 = (P)YPprop_elt(xF1925,(P)0);
      metF1926 = T13;
      T8 = CALL2(1,VARREF(YgooSfunYfun_spec),metF1926,YPint((P)1));
      xF1927 = T8;
      yF1928 = owner_;
      T7 = (P)YPeqQ(xF1927,yF1928);
      T6 = (P)YPbb(T7);
      if (T7) {
        T10 = CALL2(1,VARREF(YgooSfunYfun_spec),metF1926,YPint((P)0));
        T9 = CALL2(1,VARREF(YOtype_equalQ),T10,type_);
        T5 = T9;
      } else {
        T5 = YPfalse;
      }
      if (T5 != YPfalse) {
        T4 = metF1926;
      } else {
        xF1929 = metsF1921;
        xF1930 = xF1929;
        T12 = (P)YPprop_elt(xF1930,(P)1);
        a47_0 = T12;
        metsF1921 = a47_0;
        goto LOOP_47;
        T4 = T11;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_24) {
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
  P xF1932;
  P new_classF1931;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(old_class_, 0);
  T3 = (P)YPclone(old_class_);
  new_classF1931 = T3;
  T0 = fun_24;
  xF1932 = old_class_;
  T1 = (P)YPprop_elt(xF1932,(P)7);
  CALL2(1,VARREF(YOdo),T0,T1);
  T2 = (P)YPclass_forward_setter(new_classF1931,old_class_);
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

LOCCODEDEF(fun_visit_27) {
  P x_;
  P xF1934;
  P xF1933;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  T4 = BOXGET(FREEREF(0));
  T3 = CALL2(1,VARREF(YOmemQ),T4,x_);
  xF1933 = T3;
  T2 = (P)YPeqQ(xF1933,YPfalse);
  T1 = (P)YPbb(T2);
  if (T2) {
    T6 = BOXGET(FREEREF(0));
    T5 = (P)YOadd(T6,x_);
    BOXPUT(T5,FREEREF(0));
    CALL1(0,FREEREF(1),x_);
    xF1934 = x_;
    T8 = (P)YPprop_elt(xF1934,(P)6);
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
  P visitF1936;
  P visitedF1935;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  visitedF1935 = Ynil;
  visitedF1935 = BOXFAB(visitedF1935);
  T2 = FUNSHELL(0,fun_visit_27,3);
  visitF1936 = T2;
  FUNINIT(visitF1936, 3,visitedF1935,f_,visitF1936);
  T1 = CALL1(1,visitF1936,x_);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_29) {
  P prop_;
  P xF1937;
  P T0,T1;
LINK_STACK();
  ARG(prop_, 0);
  xF1937 = prop_;
  T1 = (P)YPprop_elt(xF1937,(P)1);
  T0 = (P)YPfun_cache_setter(YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYfinalize_props) {
  P class_;
  P xF1938;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(class_, 0);
  T0 = CALL1(1,VARREF(YgooSclassYclass_ordered_props),class_);
  (P)YPclass_props_setter(T0,class_);
  T2 = fun_29;
  xF1938 = class_;
  T3 = (P)YPprop_elt(xF1938,(P)5);
  T1 = CALL2(1,VARREF(YOdo),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YgooSclassYPprop) {
  P owner_,getter_,setter_,type_,init_;
  P xF1943;
  P setter_metF1942;
  P getter_metF1941;
  P propF1940;
  P classF1939;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  ARG(setter_, 2);
  ARG(type_, 3);
  ARG(init_, 4);
  classF1939 = owner_;
  T6 = CALLN(1,VARREF(YOnew),11,VARREF(YLpropG),VARREF(Yprop_owner),owner_,VARREF(Yprop_getter),getter_,VARREF(Yprop_setter),setter_,VARREF(Yprop_type),type_,VARREF(Yprop_init),init_);
  propF1940 = T6;
  T5 = CALL2(1,VARREF(YgooSclassYfind_getter),owner_,getter_);
  getter_metF1941 = T5;
  (P)YPmet_env_setter(propF1940,getter_metF1941);
  if (setter_ != YPfalse) {
    T1 = CALL3(1,VARREF(YgooSclassYfind_setter),owner_,type_,setter_);
    setter_metF1942 = T1;
    T0 = (P)YPmet_env_setter(propF1940,setter_metF1942);
  } else {
  }
  xF1943 = classF1939;
  T3 = (P)YPprop_elt(xF1943,(P)3);
  T4 = CALL1(1,VARREF(YOlst),propF1940);
  T2 = CALL2(1,VARREF(YOcat2),T3,T4);
  (P)YPclass_direct_props_setter(T2,classF1939);
  CALL2(1,VARREF(YgooSclassYOdo_descendents),VARREF(YgooSclassYfinalize_props),owner_);
UNLINK_STACK();
  QRET(propF1940);
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
  P tF1987;
  P xF1986;
  P xF1985;
  P xF1984;
  P xF1983;
  P xF1982;
  P xF1981;
  P yF1980;
  P xF1979;
  P valF1978;
  P xF1977;
  P xF1976;
  P xF1975;
  P iF1974;
  P xF1973;
  P tF1972;
  P xF1971;
  P xF1970;
  P xF1969;
  P xF1968;
  P xF1967;
  P xF1966;
  P yF1965;
  P xF1964;
  P getterF1963;
  P xF1962;
  P xF1961;
  P xF1960;
  P iF1959;
  P xF1958;
  P xF1957;
  P xF1956;
  P xF1955;
  P xF1954;
  P yF1953;
  P xF1952;
  P iF1951;
  P numF1950;
  P xF1949;
  P xF1948;
  P objectF1947;
  P xF1946;
  P xF1945;
  P xF1944;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
DEFCREGS();
  xF1944 = parent_;
  T27 = (P)YPprop_elt(xF1944,(P)0);
  xF1945 = T27;
  xF1946 = xF1945;
  T26 = (P)YPiGG(xF1946,(P)2);
  T25 = (P)YPobject_of(parent_,T26);
  objectF1947 = T25;
  xF1948 = inits_;
  xF1949 = xF1948;
  T24 = (P)YPprop_elt(xF1949,(P)1);
  numF1950 = T24;
  iF1951 = YPint((P)0);
  LOOP_48: {
    P a48_0;
    xF1952 = iF1951;
    yF1953 = numF1950;
    xF1954 = xF1952;
    xF1955 = xF1954;
    T3 = (P)YPiGG(xF1955,(P)2);
    xF1956 = yF1953;
    xF1957 = xF1956;
    T4 = (P)YPiGG(xF1957,(P)2);
    T2 = (P)YPiL(T3,T4);
    T1 = (P)YPbb(T2);
    if (T2) {
      xF1958 = inits_;
      iF1959 = iF1951;
      xF1960 = xF1958;
      T21 = (P)YPprop_elt(xF1960,(P)0);
      xF1961 = iF1959;
      xF1962 = xF1961;
      T23 = (P)YPiGG(xF1962,(P)2);
      T22 = (P)YPi_((P)0,T23);
      T20 = (P)YPloc_off(T21,T22);
      getterF1963 = T20;
      xF1973 = inits_;
      xF1964 = iF1951;
      yF1965 = YPint((P)1);
      xF1966 = xF1964;
      xF1967 = xF1966;
      T18 = (P)YPiGG(xF1967,(P)2);
      xF1968 = yF1965;
      xF1969 = xF1968;
      T19 = (P)YPiGG(xF1969,(P)2);
      T17 = (P)YPiA(T18,T19);
      xF1970 = T17;
      xF1971 = xF1970;
      tF1972 = (P)1;
      T16 = (P)YPiLL(xF1971,(P)2);
      T15 = (P)YPiv(T16,tF1972);
      iF1974 = T15;
      xF1975 = xF1973;
      T12 = (P)YPprop_elt(xF1975,(P)0);
      xF1976 = iF1974;
      xF1977 = xF1976;
      T14 = (P)YPiGG(xF1977,(P)2);
      T13 = (P)YPi_((P)0,T14);
      T11 = (P)YPloc_off(T12,T13);
      valF1978 = T11;
      XCALL3(1,VARREF(YgooSclassYprop_value_setter),valF1978,objectF1947,getterF1963);
      xF1979 = iF1951;
      yF1980 = YPint((P)2);
      xF1981 = xF1979;
      xF1982 = xF1981;
      T9 = (P)YPiGG(xF1982,(P)2);
      xF1983 = yF1980;
      xF1984 = xF1983;
      T10 = (P)YPiGG(xF1984,(P)2);
      T8 = (P)YPiA(T9,T10);
      xF1985 = T8;
      xF1986 = xF1985;
      tF1987 = (P)1;
      T7 = (P)YPiLL(xF1986,(P)2);
      T6 = (P)YPiv(T7,tF1987);
      a48_0 = T6;
      iF1951 = a48_0;
      goto LOOP_48;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
  return objectF1947;
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

LOCCODEDEF(fun_new_37) {
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
  P T64,T65,T66,T67;
DEFCREGS();
  VARSET(YgooSclassYLparentsG,VARREF(YLlstG));
  VARSET(YgooSclassYLpropsG,VARREF(YLlstG));
  lit_0 = YPPsym((P)"@class-ancestors");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYOclass_ancestors = YPfab_met(FUNCODEREF(YgooSclassYOclass_ancestors),T0,LITREF(lit_0),LITREF(lit_1),sloc(26),YPsb((P)"(fun (x) (%class-ancestors x))"));
  T1 = YgooSclassYOclass_ancestors;
  VARSET(YgooSclassYOclass_ancestors,T1);
  lit_2 = YPPsym((P)"class-ordered-ancestors");
  lit_3 = YPPlist(1,YPPsym((P)"c"));
  lit_4 = YPPsym((P)"candidate");
  lit_5 = YPPlist(1,YPPsym((P)"c"));
  lit_6 = YPPsym((P)"tail?");
  lit_7 = YPPlist(1,YPPsym((P)"l"));
  lit_8 = YPPsym((P)"candidate-at-head");
  lit_9 = YPPlist(1,YPPsym((P)"l"));
  lit_10 = YPPsym((P)"del-next");
  lit_11 = YPPlist(1,YPPsym((P)"l"));
  lit_12 = YPsb((P)"inconsistent precedence graph");
  T6 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tailQ_1 = YPfab_met(FUNCODEREF(fun_tailQ_1),T6,LITREF(lit_6),LITREF(lit_7),sloc(37),YPsb((P)"(fun ((l <lst>)) (@mem? (@tail l) c))"));
  T5 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_candidate_2 = YPfab_met(FUNCODEREF(fun_candidate_2),T5,LITREF(lit_4),LITREF(lit_5),sloc(36),YPsb((P)"(fun (c) (loc ((tail? ((l <lst>)) (@mem? (@tail l) c))) (and (not (@any? tail? remaining-lists)) c)))"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_candidate_at_head_3 = YPfab_met(FUNCODEREF(fun_candidate_at_head_3),T4,LITREF(lit_8),LITREF(lit_9),sloc(39),YPsb((P)"(fun ((l <lst>)) (and (not (@nul? l)) (candidate (@head l))))"));
  T3 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_del_next_4 = YPfab_met(FUNCODEREF(fun_del_next_4),T3,LITREF(lit_10),LITREF(lit_11),sloc(43),YPsb((P)"(fun ((l <lst>)) (if (@== (@head l) next) (@tail l) l))"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YgooSclassYLparentsG),Ynil);
  YgooSclassYclass_ordered_ancestors = YPfab_met(FUNCODEREF(YgooSclassYclass_ordered_ancestors),T2,LITREF(lit_2),LITREF(lit_3),sloc(28),YPsb((P)"(fun ((c <class>) => <parents>) (def parents (%class-parents c)) (rep merge-lists (((partial-cpl <lst>) (@lst c)) ((remaining-lists <lst>) (@add (@map @class-ancestors parents) parents))) (if (@all? @@nul? remaining-lists) (@rev! partial-cpl) (loc ((candidate (c) (loc ((tail? ((l <lst>)) (@mem? (@tail l) c))) (and (not (@any? tail? remaining-lists)) c))) (candidate-at-head ((l <lst>)) (and (not (@nul? l)) (candidate (@head l))))) (def next (@any? candidate-at-head remaining-lists)) (if next (loc ((del-next ((l <lst>)) (if (@== (@head l) next) (@tail l) l))) (merge-lists (@pair next partial-cpl) (@map del-next remaining-lists))) (cpl-error inconsistent precedence graph))))))"));
  T7 = YgooSclassYclass_ordered_ancestors;
  VARSET(YgooSclassYclass_ordered_ancestors,T7);
  lit_13 = YPPsym((P)"@class-direct-props");
  lit_14 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYOclass_direct_props = YPfab_met(FUNCODEREF(YgooSclassYOclass_direct_props),T8,LITREF(lit_13),LITREF(lit_14),sloc(48),YPsb((P)"(fun (x) (%class-direct-props x))"));
  T9 = YgooSclassYOclass_direct_props;
  VARSET(YgooSclassYOclass_direct_props,T9);
  lit_15 = YPPsym((P)"class-ordered-props");
  lit_16 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YgooSclassYLpropsG),Ynil);
  YgooSclassYclass_ordered_props = YPfab_met(FUNCODEREF(YgooSclassYclass_ordered_props),T10,LITREF(lit_15),LITREF(lit_16),sloc(50),YPsb((P)"(fun ((x <class>) => <props>) (def props (@del-dups (@fold @cat2 '() (@map @class-direct-props (@rev (%class-ancestors x)))))) (set (%class-prop-len x) (@len props)) props)"));
  T11 = YgooSclassYclass_ordered_props;
  VARSET(YgooSclassYclass_ordered_props,T11);
  lit_17 = YPPsym((P)"del-class");
  lit_18 = YPPlist(1,YPPsym((P)"class"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYdel_class = YPfab_met(FUNCODEREF(YgooSclassYdel_class),T12,LITREF(lit_17),LITREF(lit_18),sloc(57),YPsb((P)"(fun ((class <class>)))"));
  T13 = YgooSclassYdel_class;
  VARSET(YgooSclassYdel_class,T13);
  VARSET(YgooSclassYTnext_class_idT,YPint((P)0));
  VARSET(YgooSclassYDmax_classes,YPint((P)500));
  lit_19 = YPPsym((P)"init-class");
  lit_20 = YPPlist(1,YPPsym((P)"x"));
  lit_21 = YPsb((P)"Too many classes %=");
  lit_22 = YPsb((P)"Need at least one parent in class definition");
  lit_23 = YPPlist(1,YPPsym((P)"parent"));
  lit_24 = YPPlist(1,YPPsym((P)"ancestor"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T16,YPfalse,LITREF(lit_23),sloc(74),YPsb((P)"(fun (parent) (set (%class-children parent) (@add-new (%class-children parent) x)))"));
  T15 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPfab_met(FUNCODEREF(fun_10),T15,YPfalse,LITREF(lit_24),sloc(81),YPsb((P)"(fun (ancestor) (set (%selt row (%iu (%class-id ancestor))) (%iu 1)))"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYinit_class = YPfab_met(FUNCODEREF(YgooSclassYinit_class),T14,LITREF(lit_19),LITREF(lit_20),sloc(66),YPsb((P)"(fun (x) (when (@< $max-classes *next-class-id*) (internal-error Too many classes %= $max-classes)) (when (@== (@len (%class-parents x)) 0) (internal-error Need at least one parent in class definition)) (set (%class-id x) *next-class-id*) (set *next-class-id* (@+ *next-class-id* 1)) (unless (@== x <any>) (@do (fun (parent) (set (%class-children parent) (@add-new (%class-children parent) x))) (%class-parents x)) (set (%class-ancestors x) (class-ordered-ancestors x))) (def row (%str (%iu $max-classes) (%iu 0))) (set (%class-row x) row) (@do (fun (ancestor) (set (%selt row (%iu (%class-id ancestor))) (%iu 1))) (%class-ancestors x)) (set (%class-props x) (class-ordered-props x)) x)"));
  T17 = YgooSclassYinit_class;
  VARSET(YgooSclassYinit_class,T17);
  lit_25 = YPPsym((P)"fab-class");
  lit_26 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"parents"));
  T18 = YPfab_sig(YPPlist(2,VARREF(YLsymG),VARREF(YgooSclassYLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  YgooSclassYfab_class = YPfab_met(FUNCODEREF(YgooSclassYfab_class),T18,LITREF(lit_25),LITREF(lit_26),sloc(86),YPsb((P)"(fun ((name <sym>) (parents <parents>) => <class>) (def x (%class 0 name parents '() '() '() '() '() '() #f -1 #f)) (init-class x) x)"));
  T19 = YgooSclassYfab_class;
  VARSET(YgooSclassYfab_class,T19);
  lit_27 = YPPsym((P)"refab-class");
  lit_28 = YPPlist(2,YPPsym((P)"old-class"),YPPsym((P)"parents"));
  T20 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YgooSclassYLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  YgooSclassYrefab_class = YPfab_met(FUNCODEREF(YgooSclassYrefab_class),T20,LITREF(lit_27),LITREF(lit_28),sloc(91),YPsb((P)"(fun ((old-class <class>) (parents <parents>) => <class>) (def new-class (fab-class parents (%class-direct-props old-class))) (set (%class-forward old-class) new-class) new-class)"));
  T21 = YgooSclassYrefab_class;
  VARSET(YgooSclassYrefab_class,T21);
  lit_29 = YPPsym((P)"class-of");
  lit_30 = YPPlist(1,YPPsym((P)"x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYclass_of = YPfab_met(FUNCODEREF(YgooSclassYclass_of),T22,LITREF(lit_29),LITREF(lit_30),sloc(99),YPsb((P)"(fun (x) (%class-of x))"));
  T23 = YgooSclassYclass_of;
  VARSET(YgooSclassYclass_of,T23);
  lit_31 = YPPsym((P)"props-of");
  lit_32 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yprops_of = YPfab_met(FUNCODEREF(Yprops_of),T24,LITREF(lit_31),LITREF(lit_32),sloc(100),YPsb((P)"(fun (x) (%class-props (%class-of x)))"));
  T25 = Yprops_of;
  VARSET(Yprops_of,T25);
  VARSET(YgooSclassYDgetter_not_found,YPint((P)-1));
  lit_33 = YPPsym((P)"ensure-fresh-object");
  lit_34 = YPPlist(1,YPPsym((P)"x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYensure_fresh_object = YPfab_met(FUNCODEREF(YgooSclassYensure_fresh_object),T26,LITREF(lit_33),LITREF(lit_34),sloc(108),YPsb((P)"(fun (x) (when (%class-forward (%class-of x)) (update-instance-for-changed-class x)))"));
  T27 = YgooSclassYensure_fresh_object;
  VARSET(YgooSclassYensure_fresh_object,T27);
  lit_35 = YPPsym((P)"prop-offset");
  lit_36 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T28 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  Yprop_offset = YPfab_met(FUNCODEREF(Yprop_offset),T28,LITREF(lit_35),LITREF(lit_36),sloc(112),YPsb((P)"(fun (object (getter <fun>) => <fixnum>) (rep loop ((i 0) (props (props-of object))) (if (@nul? props) $getter-not-found (if (@== (%prop-getter (@head props)) getter) i (loop (@+ i 1) (@tail props))))))"));
  T29 = Yprop_offset;
  VARSET(Yprop_offset,T29);
  VARSET(YgooSclassYTreport_prop_unbound_errorsQT,YPtrue);
  lit_37 = YPPsym((P)"%prop-unbound-error");
  lit_38 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPprop_unbound_error = YPfab_met(FUNCODEREF(YPprop_unbound_error),T30,LITREF(lit_37),LITREF(lit_38),sloc(122),YPsb((P)"(fun (x) (if *report-prop-unbound-errors?* (property-unbound-error x) #f))"));
  T31 = YPprop_unbound_error;
  VARSET(YPprop_unbound_error,T31);
  lit_39 = YPPsym((P)"prop-value");
  lit_40 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSclassYprop_value = YPfab_met(FUNCODEREF(YgooSclassYprop_value),T32,LITREF(lit_39),LITREF(lit_40),sloc(127),YPsb((P)"(fun (object (getter <fun>) => <any>) (ensure-fresh-object object) (def offset (prop-offset object getter)) (if (@= offset $getter-not-found) (property-not-found-error getter object) (prop-value-at object offset)))"));
  T33 = YgooSclassYprop_value;
  VARSET(YgooSclassYprop_value,T33);
  lit_41 = YPPsym((P)"prop-bound?");
  lit_42 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSclassYprop_boundQ = YPfab_met(FUNCODEREF(YgooSclassYprop_boundQ),T34,LITREF(lit_41),LITREF(lit_42),sloc(134),YPsb((P)"(fun (object (getter <fun>) => <log>) (ensure-fresh-object object) (def offset (prop-offset object getter)) (if (@= offset $getter-not-found) (property-not-found-error getter object) (prop-bound-at? object offset)))"));
  T35 = YgooSclassYprop_boundQ;
  VARSET(YgooSclassYprop_boundQ,T35);
  lit_43 = YPPsym((P)"prop-value-setter");
  lit_44 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"object"),YPPsym((P)"getter"));
  T36 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSclassYprop_value_setter = YPfab_met(FUNCODEREF(YgooSclassYprop_value_setter),T36,LITREF(lit_43),LITREF(lit_44),sloc(141),YPsb((P)"(fun (z object (getter <fun>)) (ensure-fresh-object object) (rep loop ((i 0) (props (props-of object))) (if (@nul? props) (property-not-found-error getter object) (let ((prop (@head props))) (if (@== (%prop-getter prop) getter) (if (@isa? z (%prop-type prop)) (set (prop-value-at object i) z) (property-type-error getter z (%prop-type prop))) (loop (@+ i 1) (@tail props)))))))"));
  T37 = YgooSclassYprop_value_setter;
  VARSET(YgooSclassYprop_value_setter,T37);
  lit_45 = YPPsym((P)"find-getter");
  lit_46 = YPPlist(2,YPPsym((P)"owner"),YPPsym((P)"getter"));
  T38 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLmetG),Ynil);
  YgooSclassYfind_getter = YPfab_met(FUNCODEREF(YgooSclassYfind_getter),T38,LITREF(lit_45),LITREF(lit_46),sloc(153),YPsb((P)"(fun ((owner <class>) (getter <gen>) => <met>) (rep loop ((mets (@fun-mets getter))) (if (@nul? mets) (property-not-found-error getter owner) (let ((met (@head mets))) (if (@== (fun-spec met 0) owner) met (loop (@tail mets)))))))"));
  T39 = YgooSclassYfind_getter;
  VARSET(YgooSclassYfind_getter,T39);
  lit_47 = YPPsym((P)"find-setter");
  lit_48 = YPPlist(3,YPPsym((P)"owner"),YPPsym((P)"type"),YPPsym((P)"zetter"));
  T40 = YPfab_sig(YPPlist(3,VARREF(YLclassG),VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)3),VARREF(YLmetG),Ynil);
  YgooSclassYfind_setter = YPfab_met(FUNCODEREF(YgooSclassYfind_setter),T40,LITREF(lit_47),LITREF(lit_48),sloc(162),YPsb((P)"(fun ((owner <class>) type (zetter <gen>) => <met>) (rep loop ((mets (@fun-mets zetter))) (if (@nul? mets) (property-not-found-error zetter owner) (let ((met (@head mets))) (if (and (@== (fun-spec met 1) owner) (@type-equal? (fun-spec met 0) type)) met (loop (@tail mets)))))))"));
  T41 = YgooSclassYfind_setter;
  VARSET(YgooSclassYfind_setter,T41);
  lit_49 = YPPsym((P)"forward-class");
  lit_50 = YPPlist(1,YPPsym((P)"old-class"));
  lit_51 = YPPlist(1,YPPsym((P)"g"));
  T43 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T43,YPfalse,LITREF(lit_51),sloc(177),YPsb((P)"(fun (g) (set (%fun-cache g) #f))"));
  T42 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYforward_class = YPfab_met(FUNCODEREF(YgooSclassYforward_class),T42,LITREF(lit_49),LITREF(lit_50),sloc(175),YPsb((P)"(fun (old-class) (def new-class (%clone old-class)) (@do (fun (g) (set (%fun-cache g) #f)) (%class-gens old-class)) (set (%class-forward old-class) new-class))"));
  T44 = YgooSclassYforward_class;
  VARSET(YgooSclassYforward_class,T44);
  lit_52 = YPPsym((P)"clone");
  lit_53 = YPPlist(1,YPPsym((P)"x"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYclone = YPfab_met(FUNCODEREF(YgooSclassYclone),T45,LITREF(lit_52),LITREF(lit_53),sloc(180),YPsb((P)"(fun (x) (%clone x))"));
  T46 = YgooSclassYclone;
  VARSET(YgooSclassYclone,T46);
  lit_54 = YPPsym((P)"@do-descendents");
  lit_55 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  lit_56 = YPPsym((P)"visit");
  lit_57 = YPPlist(1,YPPsym((P)"x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_visit_27 = YPfab_met(FUNCODEREF(fun_visit_27),T48,LITREF(lit_56),LITREF(lit_57),sloc(184),YPsb((P)"(fun (x => #f) (unless (@mem? visited x) (set visited (@add visited x)) (f x) (@do visit (%class-children x))))"));
  T47 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSclassYOdo_descendents = YPfab_met(FUNCODEREF(YgooSclassYOdo_descendents),T47,LITREF(lit_54),LITREF(lit_55),sloc(182),YPsb((P)"(fun (f x) (def visited '()) (rep visit ((x x)) (unless (@mem? visited x) (set visited (@add visited x)) (f x) (@do visit (%class-children x)))))"));
  T49 = YgooSclassYOdo_descendents;
  VARSET(YgooSclassYOdo_descendents,T49);
  lit_58 = YPPsym((P)"finalize-props");
  lit_59 = YPPlist(1,YPPsym((P)"class"));
  lit_60 = YPPlist(1,YPPsym((P)"prop"));
  T51 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPfab_met(FUNCODEREF(fun_29),T51,YPfalse,LITREF(lit_60),sloc(194),YPsb((P)"(fun (prop) (set (%fun-cache (%prop-getter prop)) #f))"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYfinalize_props = YPfab_met(FUNCODEREF(YgooSclassYfinalize_props),T50,LITREF(lit_58),LITREF(lit_59),sloc(190),YPsb((P)"(fun ((class <class>)) (set (%class-props class) (class-ordered-props class)) (@do (fun (prop) (set (%fun-cache (%prop-getter prop)) #f)) (%class-props class)))"));
  T52 = YgooSclassYfinalize_props;
  VARSET(YgooSclassYfinalize_props,T52);
  lit_61 = YPPsym((P)"%prop");
  lit_62 = YPPlist(5,YPPsym((P)"owner"),YPPsym((P)"getter"),YPPsym((P)"setter"),YPPsym((P)"type"),YPPsym((P)"init"));
  T53 = YPfab_sig(YPPlist(5,VARREF(YLclassG),VARREF(YLgenG),VARREF(YLanyG),VARREF(YLtypeG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YgooSclassYPprop = YPfab_met(FUNCODEREF(YgooSclassYPprop),T53,LITREF(lit_61),LITREF(lit_62),sloc(197),YPsb((P)"(fun ((owner <class>) (getter <gen>) (setter <any>) (type <type>) (init <fun>)) (def class owner) (def prop (@new <prop> prop-owner owner prop-getter getter prop-setter setter prop-type type prop-init init)) (def getter-met (find-getter owner getter)) (set (%met-env getter-met) prop) (when setter (def setter-met (find-setter owner type setter)) (set (%met-env setter-met) prop)) (set (%class-direct-props class) (@cat2 (%class-direct-props class) (@lst prop))) (@do-descendents finalize-props owner) prop)"));
  T54 = YgooSclassYPprop;
  VARSET(YgooSclassYPprop,T54);
  lit_63 = YPPsym((P)"update-instance-for-changed-class");
  lit_64 = YPPlist(1,YPPsym((P)"object"));
  T55 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yupdate_instance_for_changed_class = YPfab_met(FUNCODEREF(Yupdate_instance_for_changed_class),T55,LITREF(lit_63),LITREF(lit_64),sloc(236),YPsb((P)"(fun (object) (%update-instance-for-changed-class object))"));
  T56 = Yupdate_instance_for_changed_class;
  VARSET(Yupdate_instance_for_changed_class,T56);
  VARSET(YgooSclassYadd_prop,VARREF(YgooSclassYPprop));
  lit_65 = YPPsym((P)"patch-early-classes");
  lit_66 = Ynil;
  T57 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSclassYpatch_early_classes = YPfab_met(FUNCODEREF(YgooSclassYpatch_early_classes),T57,LITREF(lit_65),LITREF(lit_66),sloc(242),YPsb((P)"(fun () (set *early-classes* (@rev! *early-classes*)) (@do init-class *early-classes*) (set %classes-ready? #t))"));
  T58 = YgooSclassYpatch_early_classes;
  VARSET(YgooSclassYpatch_early_classes,T58);
  XCALL0(1,VARREF(YgooSclassYpatch_early_classes));
  lit_67 = YPPsym((P)"new");
  lit_68 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YLtypeG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T59 = YPfab_gen(T60,LITREF(lit_67),LITREF(lit_68),YPfalse);
  VARSET(Ynew,T59);
  lit_69 = YPPsym((P)"@new");
  lit_70 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T61 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YOnew = YPfab_met(FUNCODEREF(YOnew),T61,LITREF(lit_69),LITREF(lit_70),sloc(261),YPsb((P)"(fun ((parent <class>) (inits ...) => <any>) (%new parent inits))"));
  T62 = YOnew;
  VARSET(YOnew,T62);
  lit_71 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T63 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_37 = YPfab_met(FUNCODEREF(fun_new_37),T63,LITREF(lit_67),LITREF(lit_71),sloc(264),YPsb((P)"(fun ((parent <class>) (inits ...) => <any>) (%new parent inits))"));
  T65 = VARREF_OR(Ynew,YPfalse);
  T66 = fun_new_37;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(Ynew,T64);
  T67 = YPfalse;
  return T67;
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
  {"@@==", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"class-ordered-props", CVAR, &YgooSclassYclass_ordered_props},
  {"@do-descendents", CVAR, &YgooSclassYOdo_descendents},
  {"unless", PVAR, NULL},
  {"@class-direct-props", CVAR, &YgooSclassYOclass_direct_props},
  {"clone", CVAR, &YgooSclassYclone},
  {"and", PVAR, NULL},
  {"$getter-not-found", CVAR, &YgooSclassYDgetter_not_found},
  {"<parents>", CVAR, &YgooSclassYLparentsG},
  {"---main-0---", PVAR, NULL},
  {"ensure-fresh-object", CVAR, &YgooSclassYensure_fresh_object},
  {"class-ordered-ancestors", CVAR, &YgooSclassYclass_ordered_ancestors},
  {"init-class", CVAR, &YgooSclassYinit_class},
  {"fab-class", CVAR, &YgooSclassYfab_class},
  {"forward-class", CVAR, &YgooSclassYforward_class},
  {"class-of", CVAR, &YgooSclassYclass_of},
  {"find-setter", CVAR, &YgooSclassYfind_setter},
  {"patch-early-classes", CVAR, &YgooSclassYpatch_early_classes},
  {"refab-class", CVAR, &YgooSclassYrefab_class},
  {"%new", PVAR, NULL},
  {"*report-prop-unbound-errors?*", CVAR, &YgooSclassYTreport_prop_unbound_errorsQT},
  {"find-getter", CVAR, &YgooSclassYfind_getter},
  {"@class-ancestors", CVAR, &YgooSclassYOclass_ancestors},
  {"%update-instance-for-changed-class", PVAR, NULL},
  {"<props>", CVAR, &YgooSclassYLpropsG},
  {"prop-value-setter", CVAR, &YgooSclassYprop_value_setter},
  {"%prop", CVAR, &YgooSclassYPprop},
  {"$max-classes", CVAR, &YgooSclassYDmax_classes},
  {"prop-bound?", CVAR, &YgooSclassYprop_boundQ},
  {"when", PVAR, NULL},
  {"finalize-props", CVAR, &YgooSclassYfinalize_props},
  {"prop-value", CVAR, &YgooSclassYprop_value},
  {"add-prop", CVAR, &YgooSclassYadd_prop},
  {"or", PVAR, NULL},
  {"del-class", CVAR, &YgooSclassYdel_class},
  {"*next-class-id*", CVAR, &YgooSclassYTnext_class_idT},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"prop-offset", NULL},
  {"clone", NULL},
  {"props-of", NULL},
  {"class-of", NULL},
  {"new", NULL},
  {"find-setter", NULL},
  {"*report-prop-unbound-errors?*", NULL},
  {"find-getter", NULL},
  {"fab-class", NULL},
  {"prop-value-setter", NULL},
  {"%prop", NULL},
  {"prop-bound?", NULL},
  {"prop-value", NULL},
  {"add-prop", NULL},
  {"%prop-unbound-error", NULL},
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
