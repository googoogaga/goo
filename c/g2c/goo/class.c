/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/class");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/class */

DEF(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ytup,"goo/boot","tup");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YgooSclassYpatch_early_classes,"goo/class","patch-early-classes");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yclass_id,"goo/boot","class-id");
DEF(YgooSclassYOclass_ancestors,"goo/class","@class-ancestors");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YgooSclassYfab_class,"goo/class","fab-class");
EXT(Yerror,"goo/boot","error");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(YgooSclassYrefab_class,"goo/class","refab-class");
DEF(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DEF(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YOdo,"goo/boot","@do");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YgooSclassYPprop,"goo/class","%prop");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YOallQ,"goo/boot","@all?");
EXT(YtT,"goo/boot","t*");
DEF(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooSclassYinit_class,"goo/class","init-class");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOpick,"goo/boot","@pick");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSclassYDgetter_not_found,"goo/class","$getter-not-found");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YPfalse,"goo/boot","%false");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YOrevX,"goo/boot","@rev!");
DEF(YgooSclassYdel_class,"goo/class","del-class");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
DEF(YgooSclassYprop_value,"goo/class","prop-value");
DEF(YgooSclassYfinalize_props,"goo/class","finalize-props");
EXT(YOmap,"goo/boot","@map");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YgooSclassYTnext_class_idT,"goo/class","*next-class-id*");
EXT(YOlit,"goo/boot","@lit");
DEF(YgooSclassYDmax_classes,"goo/class","$max-classes");
DEF(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YOnew,"goo/boot","@new");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YLintG,"goo/boot","<int>");
EXT(Ynot,"goo/boot","not");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YOtup,"goo/boot","@tup");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YgooSclassYLpropsG,"goo/class","<props>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
DEF(YgooSclassYOclass_direct_props,"goo/class","@class-direct-props");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ynew,"goo/boot","new");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YLunionG,"goo/boot","<union>");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(Ytail,"goo/boot","tail");
DEF(YgooSclassYOdo_descendents,"goo/class","@do-descendents");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(Ynarity_error,"goo/boot","narity-error");
DEF(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Ybox_value,"goo/boot","box-value");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YOtall2Q,"goo/boot","@tall2?");
DEF(YgooSclassYclone,"goo/class","clone");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLlogG,"goo/boot","<log>");
DEF(YgooSclassYLparentsG,"goo/class","<parents>");
EXT(Ynil,"goo/boot","nil");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ylst,"goo/boot","lst");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSclassYforward_class,"goo/class","forward-class");
EXT(YOfold,"goo/boot","@fold");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
DEF(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(YgooSclassYclass_ordered_props,"goo/class","class-ordered-props");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YPtrue,"goo/boot","%true");
EXT(YOlst,"goo/boot","@lst");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yhead,"goo/boot","head");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YgooSclassYclass_ordered_ancestors,"goo/class","class-ordered-ancestors");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_67);
DEFLIT(lit_4);
DEFLIT(lit_58);
DEFLIT(lit_3);
DEFLIT(lit_17);
DEFLIT(lit_57);
DEFLIT(lit_8);
DEFLIT(lit_49);
DEFLIT(lit_6);
DEFLIT(lit_63);
DEFLIT(lit_60);
DEFLIT(lit_55);
DEFLIT(lit_29);
DEFLIT(lit_13);
DEFLIT(lit_44);
DEFLIT(lit_15);
DEFLIT(lit_35);
DEFLIT(lit_11);
DEFLIT(lit_40);
DEFLIT(lit_59);
DEFLIT(lit_41);
DEFLIT(lit_1);
DEFLIT(lit_50);
DEFLIT(lit_19);
DEFLIT(lit_32);
DEFLIT(lit_61);
DEFLIT(lit_9);
DEFLIT(lit_39);
DEFLIT(lit_16);
DEFLIT(lit_31);
DEFLIT(lit_64);
DEFLIT(lit_23);
DEFLIT(lit_37);
DEFLIT(lit_7);
DEFLIT(lit_69);
DEFLIT(lit_56);
DEFLIT(lit_2);
DEFLIT(lit_47);
DEFLIT(lit_66);
DEFLIT(lit_27);
DEFLIT(lit_14);
DEFLIT(lit_0);
DEFLIT(lit_33);
DEFLIT(lit_24);
DEFLIT(lit_26);
DEFLIT(lit_10);
DEFLIT(lit_20);
DEFLIT(lit_68);
DEFLIT(lit_46);
DEFLIT(lit_54);
DEFLIT(lit_48);
DEFLIT(lit_30);
DEFLIT(lit_34);
DEFLIT(lit_36);
DEFLIT(lit_52);
DEFLIT(lit_45);
DEFLIT(lit_21);
DEFLIT(lit_38);
DEFLIT(lit_5);
DEFLIT(lit_28);
DEFLIT(lit_43);
DEFLIT(lit_51);
DEFLIT(lit_62);
DEFLIT(lit_22);
DEFLIT(lit_53);
DEFLIT(lit_25);
DEFLIT(lit_12);
DEFLIT(lit_42);
DEFLIT(lit_18);
DEFLIT(lit_65);

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
extern P YgooSclassYensure_fresh_object (P);
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
  P xF1854;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF1854 = x_;
  T0 = (P)YPprop_elt(xF1854,(P)4);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_tailQ_1) {
  P l_;
  P xF1856;
  P xF1855;
  P T0,T1;
LINK_STACK();
  ARG(l_, 0);
  xF1855 = l_;
  xF1856 = xF1855;
  T1 = (P)YPprop_elt(xF1856,(P)1);
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
  P xF1860;
  P xF1859;
  P xF1858;
  P xF1857;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(l_, 0);
  xF1857 = l_;
  xF1858 = xF1857;
  T3 = (P)YPeqQ(xF1858,VARREF(Ynil));
  T2 = (P)YPbb(T3);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    xF1859 = l_;
    xF1860 = xF1859;
    T5 = (P)YPprop_elt(xF1860,(P)0);
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
  P xF1866;
  P xF1865;
  P yF1864;
  P xF1863;
  P xF1862;
  P xF1861;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(l_, 0);
  xF1861 = l_;
  xF1862 = xF1861;
  T3 = (P)YPprop_elt(xF1862,(P)0);
  xF1863 = T3;
  yF1864 = FREEREF(0);
  T2 = (P)YPeqQ(xF1863,yF1864);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF1865 = l_;
    xF1866 = xF1865;
    T4 = (P)YPprop_elt(xF1866,(P)1);
    T0 = T4;
  } else {
    T0 = l_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYclass_ordered_ancestors) {
  P c_;
  P nextF1873;
  P candidate_at_headF1872;
  P candidateF1871;
  P remaining_listsF1870;
  P partial_cplF1869;
  P parentsF1868;
  P xF1867;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(c_, 0);
  xF1867 = c_;
  T15 = (P)YPprop_elt(xF1867,(P)2);
  parentsF1868 = T15;
  T12 = CALL1(1,VARREF(YOlst),c_);
  check_type(T12,VARREF(YLlstG));
  partial_cplF1869 = T12;
  T14 = CALL2(1,VARREF(YOmap),VARREF(YgooSclassYOclass_ancestors),parentsF1868);
  T13 = (P)YOadd(T14,parentsF1868);
  check_type(T13,VARREF(YLlstG));
  remaining_listsF1870 = T13;
  LOOP_43: {
    P a43_0,a43_1;
    T1 = CALL2(1,VARREF(YOallQ),VARREF(YOOnulQ),remaining_listsF1870);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YOrevX),partial_cplF1869);
      T0 = T2;
    } else {
      T10 = FUNSHELL(1,fun_candidate_2,1);
      candidateF1871 = T10;
      T11 = FUNSHELL(0,fun_candidate_at_head_3,1);
      candidate_at_headF1872 = T11;
      FUNINIT(candidateF1871, 1,remaining_listsF1870);
      FUNINIT(candidate_at_headF1872, 1,candidateF1871);
      T9 = CALL2(1,VARREF(YOanyQ),candidate_at_headF1872,remaining_listsF1870);
      nextF1873 = T9;
      if (nextF1873 != YPfalse) {
        T5 = (P)YOpair(nextF1873,partial_cplF1869);
        T7 = FUNFAB(fun_del_next_4,1,nextF1873);
        T6 = CALL2(1,VARREF(YOmap),T7,remaining_listsF1870);
        a43_0 = T5;
        a43_1 = T6;
        partial_cplF1869 = a43_0;
        remaining_listsF1870 = a43_1;
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
  P xF1874;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF1874 = x_;
  T0 = (P)YPprop_elt(xF1874,(P)3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYclass_ordered_props) {
  P x_;
  P propsF1876;
  P xF1875;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  xF1875 = x_;
  T5 = (P)YPprop_elt(xF1875,(P)4);
  T4 = CALL1(1,VARREF(YOrev),T5);
  T3 = CALL2(1,VARREF(YOmap),VARREF(YgooSclassYOclass_direct_props),T4);
  T2 = CALL3(1,VARREF(YOfold),VARREF(YOcat2),Ynil,T3);
  T1 = CALL1(1,VARREF(YOdel_dups),T2);
  propsF1876 = T1;
  T0 = (P)YOlen(propsF1876);
  (P)YPclass_prop_len_setter(T0,x_);
UNLINK_STACK();
  RET(propsF1876);
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
  P xF1877;
  P T0,T1,T2;
LINK_STACK();
  ARG(parent_, 0);
  xF1877 = parent_;
  T2 = (P)YPprop_elt(xF1877,(P)6);
  T1 = (P)YOadd_new(T2,FREEREF(0));
  T0 = (P)YPclass_children_setter(T1,parent_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_10) {
  P ancestor_;
  P xF1882;
  P xF1881;
  P xF1880;
  P xF1879;
  P xF1878;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(ancestor_, 0);
  xF1878 = YPint((P)1);
  xF1879 = xF1878;
  T1 = (P)YPiGG(xF1879,(P)2);
  xF1880 = ancestor_;
  T3 = (P)YPprop_elt(xF1880,(P)10);
  xF1881 = T3;
  xF1882 = xF1881;
  T2 = (P)YPiGG(xF1882,(P)2);
  T0 = (P)YPselt_setter(T1,FREEREF(0),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYinit_class) {
  P x_;
  P xF1910;
  P rowF1909;
  P xF1908;
  P xF1907;
  P xF1906;
  P xF1905;
  P xF1904;
  P xF1903;
  P yF1902;
  P xF1901;
  P tF1900;
  P xF1899;
  P xF1898;
  P xF1897;
  P xF1896;
  P xF1895;
  P xF1894;
  P yF1893;
  P xF1892;
  P yF1891;
  P xF1890;
  P xF1889;
  P xF1888;
  P xF1887;
  P xF1886;
  P xF1885;
  P yF1884;
  P xF1883;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(x_, 0);
  xF1883 = VARREF(YgooSclassYDmax_classes);
  yF1884 = VARREF(YgooSclassYTnext_class_idT);
  xF1885 = xF1883;
  xF1886 = xF1885;
  T2 = (P)YPiGG(xF1886,(P)2);
  xF1887 = yF1884;
  xF1888 = xF1887;
  T3 = (P)YPiGG(xF1888,(P)2);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
  if (T1) {
    T4 = CALL2(1,VARREF(Yinternal_error),LITREF(lit_21),VARREF(YgooSclassYDmax_classes));
  } else {
  }
  xF1889 = x_;
  T8 = (P)YPprop_elt(xF1889,(P)2);
  T7 = (P)YOlen(T8);
  xF1890 = T7;
  yF1891 = YPint((P)0);
  T6 = (P)YPeqQ(xF1890,yF1891);
  T5 = (P)YPbb(T6);
  if (T6) {
    T9 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_22));
  } else {
  }
  (P)YPclass_id_setter(VARREF(YgooSclassYTnext_class_idT),x_);
  xF1892 = VARREF(YgooSclassYTnext_class_idT);
  yF1893 = YPint((P)1);
  xF1894 = xF1892;
  xF1895 = xF1894;
  T13 = (P)YPiGG(xF1895,(P)2);
  xF1896 = yF1893;
  xF1897 = xF1896;
  T14 = (P)YPiGG(xF1897,(P)2);
  T12 = (P)YPiA(T13,T14);
  xF1898 = T12;
  xF1899 = xF1898;
  tF1900 = (P)1;
  T11 = (P)YPiLL(xF1899,(P)2);
  T10 = (P)YPiv(T11,tF1900);
  VARSET(YgooSclassYTnext_class_idT,T10);
  xF1901 = x_;
  yF1902 = VARREF(YLanyG);
  T18 = (P)YPeqQ(xF1901,yF1902);
  T17 = (P)YPbb(T18);
  xF1903 = T17;
  T16 = (P)YPeqQ(xF1903,YPfalse);
  T15 = (P)YPbb(T16);
  if (T16) {
    T19 = FUNFAB(fun_9,1,x_);
    xF1904 = x_;
    T20 = (P)YPprop_elt(xF1904,(P)2);
    CALL2(1,VARREF(YOdo),T19,T20);
    T22 = CALL1(1,VARREF(YgooSclassYclass_ordered_ancestors),x_);
    T21 = (P)YPclass_ancestors_setter(T22,x_);
  } else {
  }
  xF1905 = VARREF(YgooSclassYDmax_classes);
  xF1906 = xF1905;
  T27 = (P)YPiGG(xF1906,(P)2);
  xF1907 = YPint((P)0);
  xF1908 = xF1907;
  T28 = (P)YPiGG(xF1908,(P)2);
  T26 = (P)YPstr(T27,T28);
  rowF1909 = T26;
  (P)YPclass_row_setter(rowF1909,x_);
  T23 = FUNFAB(fun_10,1,rowF1909);
  xF1910 = x_;
  T24 = (P)YPprop_elt(xF1910,(P)4);
  CALL2(1,VARREF(YOdo),T23,T24);
  T25 = CALL1(1,VARREF(YgooSclassYclass_ordered_props),x_);
  (P)YPclass_props_setter(T25,x_);
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(YgooSclassYfab_class) {
  P name_,parents_;
  P xF1911;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  ARG(parents_, 1);
  T0 = (P)YPclass(YPint((P)0),name_,parents_,Ynil,Ynil,Ynil,Ynil,Ynil,Ynil,YPfalse,YPint((P)-1),YPfalse);
  xF1911 = T0;
  CALL1(1,VARREF(YgooSclassYinit_class),xF1911);
UNLINK_STACK();
  RET(xF1911);
}

FUNCODEDEF(YgooSclassYrefab_class) {
  P old_class_,parents_;
  P new_classF1913;
  P xF1912;
  P T0,T1;
LINK_STACK();
  ARG(old_class_, 0);
  ARG(parents_, 1);
  xF1912 = old_class_;
  T1 = (P)YPprop_elt(xF1912,(P)3);
  T0 = CALL2(1,VARREF(YgooSclassYfab_class),parents_,T1);
  new_classF1913 = T0;
  (P)YPclass_forward_setter(new_classF1913,old_class_);
UNLINK_STACK();
  RET(new_classF1913);
}

FUNCODEDEF(YgooSclassYclass_of) {
  P x_;
  P tagF1916;
  P xF1915;
  P xF1914;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  xF1914 = x_;
  xF1915 = xF1914;
  T5 = (P)YPiB(xF1915,(P)3);
  tagF1916 = T5;
  T2 = (P)YPiE(tagF1916,(P)0);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = (P)YPobject_class(xF1914);
    T0 = T3;
  } else {
    T4 = (P)YPelt(VARREF(YDdirect_object_class),tagF1916);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprops_of) {
  P x_;
  P xF1920;
  P tagF1919;
  P xF1918;
  P xF1917;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  xF1917 = x_;
  xF1918 = xF1917;
  T6 = (P)YPiB(xF1918,(P)3);
  tagF1919 = T6;
  T3 = (P)YPiE(tagF1919,(P)0);
  T2 = (P)YPbb(T3);
  if (T3) {
    T4 = (P)YPobject_class(xF1917);
    T1 = T4;
  } else {
    T5 = (P)YPelt(VARREF(YDdirect_object_class),tagF1919);
    T1 = T5;
  }
  xF1920 = T1;
  T0 = (P)YPprop_elt(xF1920,(P)5);
UNLINK_STACK();
  QRET(T0);
}

INLINE P YgooSclassYensure_fresh_object(P x_) {
  P xF1924;
  P tagF1923;
  P xF1922;
  P xF1921;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
DEFCREGS();
  xF1921 = x_;
  xF1922 = xF1921;
  T7 = (P)YPiB(xF1922,(P)3);
  tagF1923 = T7;
  T4 = (P)YPiE(tagF1923,(P)0);
  T3 = (P)YPbb(T4);
  if (T4) {
    T5 = (P)YPobject_class(xF1921);
    T2 = T5;
  } else {
    T6 = (P)YPelt(VARREF(YDdirect_object_class),tagF1923);
    T2 = T6;
  }
  xF1924 = T2;
  T1 = (P)YPprop_elt(xF1924,(P)9);
  if (T1 != YPfalse) {
    T8 = XCALL1(1,VARREF(Yupdate_instance_for_changed_class),x_);
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
  return T0;
}

FUNCODEDEF(Yprop_offset) {
  P object_,getter_;
  P xF1944;
  P xF1943;
  P tF1942;
  P xF1941;
  P xF1940;
  P xF1939;
  P xF1938;
  P xF1937;
  P xF1936;
  P yF1935;
  P xF1934;
  P yF1933;
  P xF1932;
  P xF1931;
  P xF1930;
  P xF1929;
  P xF1928;
  P xF1927;
  P propsF1926;
  P iF1925;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
  iF1925 = YPint((P)0);
  T15 = CALL1(1,VARREF(Yprops_of),object_);
  propsF1926 = T15;
  LOOP_44: {
    P a44_0,a44_1;
    xF1927 = propsF1926;
    xF1928 = xF1927;
    T2 = (P)YPeqQ(xF1928,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = VARREF(YgooSclassYDgetter_not_found);
    } else {
      xF1929 = propsF1926;
      xF1930 = xF1929;
      T7 = (P)YPprop_elt(xF1930,(P)0);
      xF1931 = T7;
      T6 = (P)YPprop_elt(xF1931,(P)1);
      xF1932 = T6;
      yF1933 = getter_;
      T5 = (P)YPeqQ(xF1932,yF1933);
      T4 = (P)YPbb(T5);
      if (T5) {
        T3 = iF1925;
      } else {
        xF1934 = iF1925;
        yF1935 = YPint((P)1);
        xF1936 = xF1934;
        xF1937 = xF1936;
        T12 = (P)YPiGG(xF1937,(P)2);
        xF1938 = yF1935;
        xF1939 = xF1938;
        T13 = (P)YPiGG(xF1939,(P)2);
        T11 = (P)YPiA(T12,T13);
        xF1940 = T11;
        xF1941 = xF1940;
        tF1942 = (P)1;
        T10 = (P)YPiLL(xF1941,(P)2);
        T9 = (P)YPiv(T10,tF1942);
        xF1943 = propsF1926;
        xF1944 = xF1943;
        T14 = (P)YPprop_elt(xF1944,(P)1);
        a44_0 = T9;
        a44_1 = T14;
        iF1925 = a44_0;
        propsF1926 = a44_1;
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
  P yF1952;
  P xF1951;
  P offsetF1950;
  P xF1949;
  P tagF1948;
  P xF1947;
  P xF1946;
  P xF1945;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
  xF1945 = object_;
  xF1946 = xF1945;
  xF1947 = xF1946;
  T7 = (P)YPiB(xF1947,(P)3);
  tagF1948 = T7;
  T4 = (P)YPiE(tagF1948,(P)0);
  T3 = (P)YPbb(T4);
  if (T4) {
    T5 = (P)YPobject_class(xF1946);
    T2 = T5;
  } else {
    T6 = (P)YPelt(VARREF(YDdirect_object_class),tagF1948);
    T2 = T6;
  }
  xF1949 = T2;
  T1 = (P)YPprop_elt(xF1949,(P)9);
  if (T1 != YPfalse) {
    T8 = CALL1(1,VARREF(Yupdate_instance_for_changed_class),xF1945);
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
  T14 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF1950 = T14;
  xF1951 = offsetF1950;
  yF1952 = VARREF(YgooSclassYDgetter_not_found);
  T11 = (P)YPiE(xF1951,yF1952);
  T10 = (P)YPbb(T11);
  if (T11) {
    T12 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
    T9 = T12;
  } else {
    T13 = (P)YgooSfunYprop_value_at(object_,offsetF1950);
    T9 = T13;
  }
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(YgooSclassYprop_boundQ) {
  P object_,getter_;
  P yF1960;
  P xF1959;
  P offsetF1958;
  P xF1957;
  P tagF1956;
  P xF1955;
  P xF1954;
  P xF1953;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
  xF1953 = object_;
  xF1954 = xF1953;
  xF1955 = xF1954;
  T7 = (P)YPiB(xF1955,(P)3);
  tagF1956 = T7;
  T4 = (P)YPiE(tagF1956,(P)0);
  T3 = (P)YPbb(T4);
  if (T4) {
    T5 = (P)YPobject_class(xF1954);
    T2 = T5;
  } else {
    T6 = (P)YPelt(VARREF(YDdirect_object_class),tagF1956);
    T2 = T6;
  }
  xF1957 = T2;
  T1 = (P)YPprop_elt(xF1957,(P)9);
  if (T1 != YPfalse) {
    T8 = CALL1(1,VARREF(Yupdate_instance_for_changed_class),xF1953);
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
  T14 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF1958 = T14;
  xF1959 = offsetF1958;
  yF1960 = VARREF(YgooSclassYDgetter_not_found);
  T11 = (P)YPiE(xF1959,yF1960);
  T10 = (P)YPbb(T11);
  if (T11) {
    T12 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
    T9 = T12;
  } else {
    T13 = (P)YgooSfunYprop_bound_atQ(object_,offsetF1958);
    T9 = T13;
  }
UNLINK_STACK();
  RET(T9);
}

FUNCODEDEF(YgooSclassYprop_value_setter) {
  P z_,object_,getter_;
  P xF2008;
  P xF2007;
  P tF2006;
  P xF2005;
  P xF2004;
  P xF2003;
  P xF2002;
  P xF2001;
  P xF2000;
  P yF1999;
  P xF1998;
  P xF1997;
  P xF1996;
  P xF1995;
  P xF1994;
  P xF1993;
  P xF1992;
  P xF1991;
  P c2F1990;
  P c1F1989;
  P tagF1988;
  P xF1987;
  P xF1986;
  P cF1985;
  P oF1984;
  P yF1983;
  P xF1982;
  P tagF1981;
  P xF1980;
  P xF1979;
  P tF1978;
  P oF1977;
  P xF1976;
  P yF1975;
  P xF1974;
  P xF1973;
  P propF1972;
  P xF1971;
  P xF1970;
  P xF1969;
  P xF1968;
  P propsF1967;
  P iF1966;
  P xF1965;
  P tagF1964;
  P xF1963;
  P xF1962;
  P xF1961;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53;
LINK_STACK();
  ARG(z_, 0);
  ARG(object_, 1);
  ARG(getter_, 2);
  xF1961 = object_;
  xF1962 = xF1961;
  xF1963 = xF1962;
  T7 = (P)YPiB(xF1963,(P)3);
  tagF1964 = T7;
  T4 = (P)YPiE(tagF1964,(P)0);
  T3 = (P)YPbb(T4);
  if (T4) {
    T5 = (P)YPobject_class(xF1962);
    T2 = T5;
  } else {
    T6 = (P)YPelt(VARREF(YDdirect_object_class),tagF1964);
    T2 = T6;
  }
  xF1965 = T2;
  T1 = (P)YPprop_elt(xF1965,(P)9);
  if (T1 != YPfalse) {
    T8 = CALL1(1,VARREF(Yupdate_instance_for_changed_class),xF1961);
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
  iF1966 = YPint((P)0);
  T53 = CALL1(1,VARREF(Yprops_of),object_);
  propsF1967 = T53;
  LOOP_45: {
    P a45_0,a45_1;
    xF1968 = propsF1967;
    xF1969 = xF1968;
    T11 = (P)YPeqQ(xF1969,VARREF(Ynil));
    T10 = (P)YPbb(T11);
    if (T11) {
      T12 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
      T9 = T12;
    } else {
      xF1970 = propsF1967;
      xF1971 = xF1970;
      T52 = (P)YPprop_elt(xF1971,(P)0);
      propF1972 = T52;
      xF1973 = propF1972;
      T16 = (P)YPprop_elt(xF1973,(P)1);
      xF1974 = T16;
      yF1975 = getter_;
      T15 = (P)YPeqQ(xF1974,yF1975);
      T14 = (P)YPbb(T15);
      if (T15) {
        oF1977 = z_;
        xF1976 = propF1972;
        T41 = (P)YPprop_elt(xF1976,(P)3);
        tF1978 = T41;
        xF1979 = tF1978;
        xF1980 = xF1979;
        T26 = (P)YPiB(xF1980,(P)3);
        tagF1981 = T26;
        T23 = (P)YPiE(tagF1981,(P)0);
        T22 = (P)YPbb(T23);
        if (T23) {
          T24 = (P)YPobject_class(xF1979);
          T21 = T24;
        } else {
          T25 = (P)YPelt(VARREF(YDdirect_object_class),tagF1981);
          T21 = T25;
        }
        xF1982 = T21;
        yF1983 = VARREF(YLclassG);
        T20 = (P)YPeqQ(xF1982,yF1983);
        T19 = (P)YPbb(T20);
        if (T20) {
          oF1984 = oF1977;
          cF1985 = tF1978;
          xF1986 = oF1984;
          xF1987 = xF1986;
          T39 = (P)YPiB(xF1987,(P)3);
          tagF1988 = T39;
          T36 = (P)YPiE(tagF1988,(P)0);
          T35 = (P)YPbb(T36);
          if (T36) {
            T37 = (P)YPobject_class(xF1986);
            T34 = T37;
          } else {
            T38 = (P)YPelt(VARREF(YDdirect_object_class),tagF1988);
            T34 = T38;
          }
          c1F1989 = T34;
          c2F1990 = cF1985;
          xF1991 = c1F1989;
          T30 = (P)YPprop_elt(xF1991,(P)11);
          xF1992 = c2F1990;
          T32 = (P)YPprop_elt(xF1992,(P)10);
          xF1993 = T32;
          xF1994 = xF1993;
          T31 = (P)YPiGG(xF1994,(P)2);
          T29 = (P)YPselt(T30,T31);
          xF1995 = YPint((P)1);
          xF1996 = xF1995;
          T33 = (P)YPiGG(xF1996,(P)2);
          T28 = (P)YPiE(T29,T33);
          T27 = (P)YPbb(T28);
          T18 = T27;
        } else {
          T40 = CALL2(1,VARREF(YisaQ),oF1977,tF1978);
          T18 = T40;
        }
        if (T18 != YPfalse) {
          T42 = (P)YgooSfunYprop_value_at_setter(z_,object_,iF1966);
          T17 = T42;
        } else {
          xF1997 = propF1972;
          T44 = (P)YPprop_elt(xF1997,(P)3);
          T43 = CALL3(1,VARREF(Yproperty_type_error),getter_,z_,T44);
          T17 = T43;
        }
        T13 = T17;
      } else {
        xF1998 = iF1966;
        yF1999 = YPint((P)1);
        xF2000 = xF1998;
        xF2001 = xF2000;
        T49 = (P)YPiGG(xF2001,(P)2);
        xF2002 = yF1999;
        xF2003 = xF2002;
        T50 = (P)YPiGG(xF2003,(P)2);
        T48 = (P)YPiA(T49,T50);
        xF2004 = T48;
        xF2005 = xF2004;
        tF2006 = (P)1;
        T47 = (P)YPiLL(xF2005,(P)2);
        T46 = (P)YPiv(T47,tF2006);
        xF2007 = propsF1967;
        xF2008 = xF2007;
        T51 = (P)YPprop_elt(xF2008,(P)1);
        a45_0 = T46;
        a45_1 = T51;
        iF1966 = a45_0;
        propsF1967 = a45_1;
        goto LOOP_45;
        T13 = T45;
      }
      T9 = T13;
    }
  }
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(YgooSclassYfind_getter) {
  P owner_,getter_;
  P xF2018;
  P xF2017;
  P yF2016;
  P xF2015;
  P metF2014;
  P xF2013;
  P xF2012;
  P xF2011;
  P xF2010;
  P metsF2009;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  T11 = CALL1(1,VARREF(YgooSfunYOfun_mets),getter_);
  metsF2009 = T11;
  LOOP_46: {
    P a46_0;
    xF2010 = metsF2009;
    xF2011 = xF2010;
    T2 = (P)YPeqQ(xF2011,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,owner_);
      T0 = T3;
    } else {
      xF2012 = metsF2009;
      xF2013 = xF2012;
      T10 = (P)YPprop_elt(xF2013,(P)0);
      metF2014 = T10;
      T7 = CALL2(1,VARREF(YgooSfunYfun_spec),metF2014,YPint((P)0));
      xF2015 = T7;
      yF2016 = owner_;
      T6 = (P)YPeqQ(xF2015,yF2016);
      T5 = (P)YPbb(T6);
      if (T6) {
        T4 = metF2014;
      } else {
        xF2017 = metsF2009;
        xF2018 = xF2017;
        T9 = (P)YPprop_elt(xF2018,(P)1);
        a46_0 = T9;
        metsF2009 = a46_0;
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
  P xF2028;
  P xF2027;
  P yF2026;
  P xF2025;
  P metF2024;
  P xF2023;
  P xF2022;
  P xF2021;
  P xF2020;
  P metsF2019;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(owner_, 0);
  ARG(type_, 1);
  ARG(zetter_, 2);
  T14 = CALL1(1,VARREF(YgooSfunYOfun_mets),zetter_);
  metsF2019 = T14;
  LOOP_47: {
    P a47_0;
    xF2020 = metsF2019;
    xF2021 = xF2020;
    T2 = (P)YPeqQ(xF2021,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL2(1,VARREF(Yproperty_not_found_error),zetter_,owner_);
      T0 = T3;
    } else {
      xF2022 = metsF2019;
      xF2023 = xF2022;
      T13 = (P)YPprop_elt(xF2023,(P)0);
      metF2024 = T13;
      T8 = CALL2(1,VARREF(YgooSfunYfun_spec),metF2024,YPint((P)1));
      xF2025 = T8;
      yF2026 = owner_;
      T7 = (P)YPeqQ(xF2025,yF2026);
      T6 = (P)YPbb(T7);
      if (T7) {
        T10 = CALL2(1,VARREF(YgooSfunYfun_spec),metF2024,YPint((P)0));
        T9 = CALL2(1,VARREF(YOtype_equalQ),T10,type_);
        T5 = T9;
      } else {
        T5 = YPfalse;
      }
      if (T5 != YPfalse) {
        T4 = metF2024;
      } else {
        xF2027 = metsF2019;
        xF2028 = xF2027;
        T12 = (P)YPprop_elt(xF2028,(P)1);
        a47_0 = T12;
        metsF2019 = a47_0;
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
  P xF2030;
  P new_classF2029;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(old_class_, 0);
  T3 = (P)YPclone(old_class_);
  new_classF2029 = T3;
  T0 = fun_24;
  xF2030 = old_class_;
  T1 = (P)YPprop_elt(xF2030,(P)7);
  CALL2(1,VARREF(YOdo),T0,T1);
  T2 = (P)YPclass_forward_setter(new_classF2029,old_class_);
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
  P xF2032;
  P xF2031;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  T4 = BOXGET(FREEREF(0));
  T3 = CALL2(1,VARREF(YOmemQ),T4,x_);
  xF2031 = T3;
  T2 = (P)YPeqQ(xF2031,YPfalse);
  T1 = (P)YPbb(T2);
  if (T2) {
    T6 = BOXGET(FREEREF(0));
    T5 = (P)YOadd(T6,x_);
    BOXPUT(T5,FREEREF(0));
    CALL1(0,FREEREF(1),x_);
    xF2032 = x_;
    T8 = (P)YPprop_elt(xF2032,(P)6);
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
  P visitF2034;
  P visitedF2033;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  visitedF2033 = Ynil;
  visitedF2033 = BOXFAB(visitedF2033);
  T2 = FUNSHELL(0,fun_visit_27,3);
  visitF2034 = T2;
  FUNINIT(visitF2034, 3,visitedF2033,f_,visitF2034);
  T1 = CALL1(1,visitF2034,x_);
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_29) {
  P prop_;
  P xF2035;
  P T0,T1;
LINK_STACK();
  ARG(prop_, 0);
  xF2035 = prop_;
  T1 = (P)YPprop_elt(xF2035,(P)1);
  T0 = (P)YPfun_cache_setter(YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSclassYfinalize_props) {
  P class_;
  P xF2036;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(class_, 0);
  T0 = CALL1(1,VARREF(YgooSclassYclass_ordered_props),class_);
  (P)YPclass_props_setter(T0,class_);
  T2 = fun_29;
  xF2036 = class_;
  T3 = (P)YPprop_elt(xF2036,(P)5);
  T1 = CALL2(1,VARREF(YOdo),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YgooSclassYPprop) {
  P owner_,getter_,setter_,type_,init_;
  P xF2041;
  P setter_metF2040;
  P getter_metF2039;
  P propF2038;
  P classF2037;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  ARG(setter_, 2);
  ARG(type_, 3);
  ARG(init_, 4);
  classF2037 = owner_;
  T6 = CALLN(1,VARREF(YOnew),11,VARREF(YLpropG),VARREF(Yprop_owner),owner_,VARREF(Yprop_getter),getter_,VARREF(Yprop_setter),setter_,VARREF(Yprop_type),type_,VARREF(Yprop_init),init_);
  propF2038 = T6;
  T5 = CALL2(1,VARREF(YgooSclassYfind_getter),owner_,getter_);
  getter_metF2039 = T5;
  (P)YPmet_env_setter(propF2038,getter_metF2039);
  if (setter_ != YPfalse) {
    T1 = CALL3(1,VARREF(YgooSclassYfind_setter),owner_,type_,setter_);
    setter_metF2040 = T1;
    T0 = (P)YPmet_env_setter(propF2038,setter_metF2040);
  } else {
  }
  xF2041 = classF2037;
  T3 = (P)YPprop_elt(xF2041,(P)3);
  T4 = CALL1(1,VARREF(YOlst),propF2038);
  T2 = CALL2(1,VARREF(YOcat2),T3,T4);
  (P)YPclass_direct_props_setter(T2,classF2037);
  CALL2(1,VARREF(YgooSclassYOdo_descendents),VARREF(YgooSclassYfinalize_props),owner_);
UNLINK_STACK();
  QRET(propF2038);
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
  P tF2085;
  P xF2084;
  P xF2083;
  P xF2082;
  P xF2081;
  P xF2080;
  P xF2079;
  P yF2078;
  P xF2077;
  P valF2076;
  P xF2075;
  P xF2074;
  P xF2073;
  P iF2072;
  P xF2071;
  P tF2070;
  P xF2069;
  P xF2068;
  P xF2067;
  P xF2066;
  P xF2065;
  P xF2064;
  P yF2063;
  P xF2062;
  P getterF2061;
  P xF2060;
  P xF2059;
  P xF2058;
  P iF2057;
  P xF2056;
  P xF2055;
  P xF2054;
  P xF2053;
  P xF2052;
  P yF2051;
  P xF2050;
  P iF2049;
  P numF2048;
  P xF2047;
  P xF2046;
  P objectF2045;
  P xF2044;
  P xF2043;
  P xF2042;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
DEFCREGS();
  xF2042 = parent_;
  T27 = (P)YPprop_elt(xF2042,(P)0);
  xF2043 = T27;
  xF2044 = xF2043;
  T26 = (P)YPiGG(xF2044,(P)2);
  T25 = (P)YPobject_of(parent_,T26);
  objectF2045 = T25;
  xF2046 = inits_;
  xF2047 = xF2046;
  T24 = (P)YPprop_elt(xF2047,(P)1);
  numF2048 = T24;
  iF2049 = YPint((P)0);
  LOOP_48: {
    P a48_0;
    xF2050 = iF2049;
    yF2051 = numF2048;
    xF2052 = xF2050;
    xF2053 = xF2052;
    T3 = (P)YPiGG(xF2053,(P)2);
    xF2054 = yF2051;
    xF2055 = xF2054;
    T4 = (P)YPiGG(xF2055,(P)2);
    T2 = (P)YPiL(T3,T4);
    T1 = (P)YPbb(T2);
    if (T2) {
      xF2056 = inits_;
      iF2057 = iF2049;
      xF2058 = xF2056;
      T21 = (P)YPprop_elt(xF2058,(P)0);
      xF2059 = iF2057;
      xF2060 = xF2059;
      T23 = (P)YPiGG(xF2060,(P)2);
      T22 = (P)YPi_((P)0,T23);
      T20 = (P)YPloc_off(T21,T22);
      getterF2061 = T20;
      xF2071 = inits_;
      xF2062 = iF2049;
      yF2063 = YPint((P)1);
      xF2064 = xF2062;
      xF2065 = xF2064;
      T18 = (P)YPiGG(xF2065,(P)2);
      xF2066 = yF2063;
      xF2067 = xF2066;
      T19 = (P)YPiGG(xF2067,(P)2);
      T17 = (P)YPiA(T18,T19);
      xF2068 = T17;
      xF2069 = xF2068;
      tF2070 = (P)1;
      T16 = (P)YPiLL(xF2069,(P)2);
      T15 = (P)YPiv(T16,tF2070);
      iF2072 = T15;
      xF2073 = xF2071;
      T12 = (P)YPprop_elt(xF2073,(P)0);
      xF2074 = iF2072;
      xF2075 = xF2074;
      T14 = (P)YPiGG(xF2075,(P)2);
      T13 = (P)YPi_((P)0,T14);
      T11 = (P)YPloc_off(T12,T13);
      valF2076 = T11;
      XCALL3(1,VARREF(YgooSclassYprop_value_setter),valF2076,objectF2045,getterF2061);
      xF2077 = iF2049;
      yF2078 = YPint((P)2);
      xF2079 = xF2077;
      xF2080 = xF2079;
      T9 = (P)YPiGG(xF2080,(P)2);
      xF2081 = yF2078;
      xF2082 = xF2081;
      T10 = (P)YPiGG(xF2082,(P)2);
      T8 = (P)YPiA(T9,T10);
      xF2083 = T8;
      xF2084 = xF2083;
      tF2085 = (P)1;
      T7 = (P)YPiLL(xF2084,(P)2);
      T6 = (P)YPiv(T7,tF2085);
      a48_0 = T6;
      iF2049 = a48_0;
      goto LOOP_48;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
  return objectF2045;
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
  P T64,T65;
DEFCREGS();
  VARSET(YgooSclassYLparentsG,VARREF(YLlstG));
  VARSET(YgooSclassYLpropsG,VARREF(YLlstG));
  lit_0 = YPPsym((P)"@class-ancestors");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYOclass_ancestors = YPfab_met(FUNCODEREF(YgooSclassYOclass_ancestors),T0,LITREF(lit_0),LITREF(lit_1),sloc(26),YPfalse);
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
  fun_tailQ_1 = YPfab_met(FUNCODEREF(fun_tailQ_1),T6,LITREF(lit_6),LITREF(lit_7),sloc(37),YPfalse);
  T5 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_candidate_2 = YPfab_met(FUNCODEREF(fun_candidate_2),T5,LITREF(lit_4),LITREF(lit_5),sloc(36),YPfalse);
  T4 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_candidate_at_head_3 = YPfab_met(FUNCODEREF(fun_candidate_at_head_3),T4,LITREF(lit_8),LITREF(lit_9),sloc(39),YPfalse);
  T3 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_del_next_4 = YPfab_met(FUNCODEREF(fun_del_next_4),T3,LITREF(lit_10),LITREF(lit_11),sloc(43),YPfalse);
  T2 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YgooSclassYLparentsG),Ynil);
  YgooSclassYclass_ordered_ancestors = YPfab_met(FUNCODEREF(YgooSclassYclass_ordered_ancestors),T2,LITREF(lit_2),LITREF(lit_3),sloc(28),YPfalse);
  T7 = YgooSclassYclass_ordered_ancestors;
  VARSET(YgooSclassYclass_ordered_ancestors,T7);
  lit_13 = YPPsym((P)"@class-direct-props");
  lit_14 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYOclass_direct_props = YPfab_met(FUNCODEREF(YgooSclassYOclass_direct_props),T8,LITREF(lit_13),LITREF(lit_14),sloc(48),YPfalse);
  T9 = YgooSclassYOclass_direct_props;
  VARSET(YgooSclassYOclass_direct_props,T9);
  lit_15 = YPPsym((P)"class-ordered-props");
  lit_16 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YgooSclassYLpropsG),Ynil);
  YgooSclassYclass_ordered_props = YPfab_met(FUNCODEREF(YgooSclassYclass_ordered_props),T10,LITREF(lit_15),LITREF(lit_16),sloc(50),YPfalse);
  T11 = YgooSclassYclass_ordered_props;
  VARSET(YgooSclassYclass_ordered_props,T11);
  lit_17 = YPPsym((P)"del-class");
  lit_18 = YPPlist(1,YPPsym((P)"class"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYdel_class = YPfab_met(FUNCODEREF(YgooSclassYdel_class),T12,LITREF(lit_17),LITREF(lit_18),sloc(57),YPfalse);
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
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T16,YPfalse,LITREF(lit_23),sloc(74),YPfalse);
  T15 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPfab_met(FUNCODEREF(fun_10),T15,YPfalse,LITREF(lit_24),sloc(81),YPfalse);
  T14 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYinit_class = YPfab_met(FUNCODEREF(YgooSclassYinit_class),T14,LITREF(lit_19),LITREF(lit_20),sloc(66),YPfalse);
  T17 = YgooSclassYinit_class;
  VARSET(YgooSclassYinit_class,T17);
  lit_25 = YPPsym((P)"fab-class");
  lit_26 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"parents"));
  T18 = YPfab_sig(YPPlist(2,VARREF(YLsymG),VARREF(YgooSclassYLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  YgooSclassYfab_class = YPfab_met(FUNCODEREF(YgooSclassYfab_class),T18,LITREF(lit_25),LITREF(lit_26),sloc(86),YPfalse);
  T19 = YgooSclassYfab_class;
  VARSET(YgooSclassYfab_class,T19);
  lit_27 = YPPsym((P)"refab-class");
  lit_28 = YPPlist(2,YPPsym((P)"old-class"),YPPsym((P)"parents"));
  T20 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YgooSclassYLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  YgooSclassYrefab_class = YPfab_met(FUNCODEREF(YgooSclassYrefab_class),T20,LITREF(lit_27),LITREF(lit_28),sloc(91),YPfalse);
  T21 = YgooSclassYrefab_class;
  VARSET(YgooSclassYrefab_class,T21);
  lit_29 = YPPsym((P)"class-of");
  lit_30 = YPPlist(1,YPPsym((P)"x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYclass_of = YPfab_met(FUNCODEREF(YgooSclassYclass_of),T22,LITREF(lit_29),LITREF(lit_30),sloc(99),YPfalse);
  T23 = YgooSclassYclass_of;
  VARSET(YgooSclassYclass_of,T23);
  lit_31 = YPPsym((P)"props-of");
  lit_32 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yprops_of = YPfab_met(FUNCODEREF(Yprops_of),T24,LITREF(lit_31),LITREF(lit_32),sloc(100),YPfalse);
  T25 = Yprops_of;
  VARSET(Yprops_of,T25);
  VARSET(YgooSclassYDgetter_not_found,YPint((P)-1));
  lit_33 = YPPsym((P)"prop-offset");
  lit_34 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  Yprop_offset = YPfab_met(FUNCODEREF(Yprop_offset),T26,LITREF(lit_33),LITREF(lit_34),sloc(112),YPfalse);
  T27 = Yprop_offset;
  VARSET(Yprop_offset,T27);
  VARSET(YgooSclassYTreport_prop_unbound_errorsQT,YPtrue);
  lit_35 = YPPsym((P)"%prop-unbound-error");
  lit_36 = YPPlist(1,YPPsym((P)"x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPprop_unbound_error = YPfab_met(FUNCODEREF(YPprop_unbound_error),T28,LITREF(lit_35),LITREF(lit_36),sloc(122),YPfalse);
  T29 = YPprop_unbound_error;
  VARSET(YPprop_unbound_error,T29);
  lit_37 = YPPsym((P)"prop-value");
  lit_38 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T30 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSclassYprop_value = YPfab_met(FUNCODEREF(YgooSclassYprop_value),T30,LITREF(lit_37),LITREF(lit_38),sloc(127),YPfalse);
  T31 = YgooSclassYprop_value;
  VARSET(YgooSclassYprop_value,T31);
  lit_39 = YPPsym((P)"prop-bound?");
  lit_40 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSclassYprop_boundQ = YPfab_met(FUNCODEREF(YgooSclassYprop_boundQ),T32,LITREF(lit_39),LITREF(lit_40),sloc(134),YPfalse);
  T33 = YgooSclassYprop_boundQ;
  VARSET(YgooSclassYprop_boundQ,T33);
  lit_41 = YPPsym((P)"prop-value-setter");
  lit_42 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"object"),YPPsym((P)"getter"));
  T34 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSclassYprop_value_setter = YPfab_met(FUNCODEREF(YgooSclassYprop_value_setter),T34,LITREF(lit_41),LITREF(lit_42),sloc(141),YPfalse);
  T35 = YgooSclassYprop_value_setter;
  VARSET(YgooSclassYprop_value_setter,T35);
  lit_43 = YPPsym((P)"find-getter");
  lit_44 = YPPlist(2,YPPsym((P)"owner"),YPPsym((P)"getter"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLmetG),Ynil);
  YgooSclassYfind_getter = YPfab_met(FUNCODEREF(YgooSclassYfind_getter),T36,LITREF(lit_43),LITREF(lit_44),sloc(153),YPfalse);
  T37 = YgooSclassYfind_getter;
  VARSET(YgooSclassYfind_getter,T37);
  lit_45 = YPPsym((P)"find-setter");
  lit_46 = YPPlist(3,YPPsym((P)"owner"),YPPsym((P)"type"),YPPsym((P)"zetter"));
  T38 = YPfab_sig(YPPlist(3,VARREF(YLclassG),VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)3),VARREF(YLmetG),Ynil);
  YgooSclassYfind_setter = YPfab_met(FUNCODEREF(YgooSclassYfind_setter),T38,LITREF(lit_45),LITREF(lit_46),sloc(162),YPfalse);
  T39 = YgooSclassYfind_setter;
  VARSET(YgooSclassYfind_setter,T39);
  lit_47 = YPPsym((P)"forward-class");
  lit_48 = YPPlist(1,YPPsym((P)"old-class"));
  lit_49 = YPPlist(1,YPPsym((P)"g"));
  T41 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T41,YPfalse,LITREF(lit_49),sloc(177),YPfalse);
  T40 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYforward_class = YPfab_met(FUNCODEREF(YgooSclassYforward_class),T40,LITREF(lit_47),LITREF(lit_48),sloc(175),YPfalse);
  T42 = YgooSclassYforward_class;
  VARSET(YgooSclassYforward_class,T42);
  lit_50 = YPPsym((P)"clone");
  lit_51 = YPPlist(1,YPPsym((P)"x"));
  T43 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYclone = YPfab_met(FUNCODEREF(YgooSclassYclone),T43,LITREF(lit_50),LITREF(lit_51),sloc(180),YPfalse);
  T44 = YgooSclassYclone;
  VARSET(YgooSclassYclone,T44);
  lit_52 = YPPsym((P)"@do-descendents");
  lit_53 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  lit_54 = YPPsym((P)"visit");
  lit_55 = YPPlist(1,YPPsym((P)"x"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_visit_27 = YPfab_met(FUNCODEREF(fun_visit_27),T46,LITREF(lit_54),LITREF(lit_55),sloc(184),YPfalse);
  T45 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSclassYOdo_descendents = YPfab_met(FUNCODEREF(YgooSclassYOdo_descendents),T45,LITREF(lit_52),LITREF(lit_53),sloc(182),YPfalse);
  T47 = YgooSclassYOdo_descendents;
  VARSET(YgooSclassYOdo_descendents,T47);
  lit_56 = YPPsym((P)"finalize-props");
  lit_57 = YPPlist(1,YPPsym((P)"class"));
  lit_58 = YPPlist(1,YPPsym((P)"prop"));
  T49 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPfab_met(FUNCODEREF(fun_29),T49,YPfalse,LITREF(lit_58),sloc(194),YPfalse);
  T48 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSclassYfinalize_props = YPfab_met(FUNCODEREF(YgooSclassYfinalize_props),T48,LITREF(lit_56),LITREF(lit_57),sloc(190),YPfalse);
  T50 = YgooSclassYfinalize_props;
  VARSET(YgooSclassYfinalize_props,T50);
  lit_59 = YPPsym((P)"%prop");
  lit_60 = YPPlist(5,YPPsym((P)"owner"),YPPsym((P)"getter"),YPPsym((P)"setter"),YPPsym((P)"type"),YPPsym((P)"init"));
  T51 = YPfab_sig(YPPlist(5,VARREF(YLclassG),VARREF(YLgenG),VARREF(YLanyG),VARREF(YLtypeG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YgooSclassYPprop = YPfab_met(FUNCODEREF(YgooSclassYPprop),T51,LITREF(lit_59),LITREF(lit_60),sloc(197),YPfalse);
  T52 = YgooSclassYPprop;
  VARSET(YgooSclassYPprop,T52);
  lit_61 = YPPsym((P)"update-instance-for-changed-class");
  lit_62 = YPPlist(1,YPPsym((P)"object"));
  T53 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yupdate_instance_for_changed_class = YPfab_met(FUNCODEREF(Yupdate_instance_for_changed_class),T53,LITREF(lit_61),LITREF(lit_62),sloc(236),YPfalse);
  T54 = Yupdate_instance_for_changed_class;
  VARSET(Yupdate_instance_for_changed_class,T54);
  VARSET(YgooSclassYadd_prop,VARREF(YgooSclassYPprop));
  lit_63 = YPPsym((P)"patch-early-classes");
  lit_64 = Ynil;
  T55 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSclassYpatch_early_classes = YPfab_met(FUNCODEREF(YgooSclassYpatch_early_classes),T55,LITREF(lit_63),LITREF(lit_64),sloc(242),YPfalse);
  T56 = YgooSclassYpatch_early_classes;
  VARSET(YgooSclassYpatch_early_classes,T56);
  XCALL0(1,VARREF(YgooSclassYpatch_early_classes));
  lit_65 = YPPsym((P)"new");
  lit_66 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YLtypeG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T57 = YPfab_gen(T58,LITREF(lit_65),LITREF(lit_66),YPfalse);
  VARSET(Ynew,T57);
  lit_67 = YPPsym((P)"@new");
  lit_68 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T59 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YOnew = YPfab_met(FUNCODEREF(YOnew),T59,LITREF(lit_67),LITREF(lit_68),sloc(261),YPfalse);
  T60 = YOnew;
  VARSET(YOnew,T60);
  lit_69 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T61 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_37 = YPfab_met(FUNCODEREF(fun_new_37),T61,LITREF(lit_65),LITREF(lit_69),sloc(264),YPfalse);
  T63 = VARREF_OR(Ynew,YPfalse);
  T64 = fun_new_37;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(Ynew,T62);
  T65 = YPfalse;
  return T65;
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
  {"%cu", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"find-setter", CVAR, &YgooSclassYfind_setter},
  {"patch-early-classes", CVAR, &YgooSclassYpatch_early_classes},
  {"@class-ancestors", CVAR, &YgooSclassYOclass_ancestors},
  {"fab-class", CVAR, &YgooSclassYfab_class},
  {"%update-instance-for-changed-class", PVAR, NULL},
  {"refab-class", CVAR, &YgooSclassYrefab_class},
  {"prop-value-setter", CVAR, &YgooSclassYprop_value_setter},
  {"find-getter", CVAR, &YgooSclassYfind_getter},
  {"unless", PVAR, NULL},
  {"%new", PVAR, NULL},
  {"ensure-fresh-object", PVAR, NULL},
  {"%prop", CVAR, &YgooSclassYPprop},
  {"prop-bound?", CVAR, &YgooSclassYprop_boundQ},
  {"init-class", CVAR, &YgooSclassYinit_class},
  {"---main-0---", PVAR, NULL},
  {"$getter-not-found", CVAR, &YgooSclassYDgetter_not_found},
  {"del-class", CVAR, &YgooSclassYdel_class},
  {"prop-value", CVAR, &YgooSclassYprop_value},
  {"finalize-props", CVAR, &YgooSclassYfinalize_props},
  {"or", PVAR, NULL},
  {"*next-class-id*", CVAR, &YgooSclassYTnext_class_idT},
  {"$max-classes", CVAR, &YgooSclassYDmax_classes},
  {"add-prop", CVAR, &YgooSclassYadd_prop},
  {"<props>", CVAR, &YgooSclassYLpropsG},
  {"@class-direct-props", CVAR, &YgooSclassYOclass_direct_props},
  {"@do-descendents", CVAR, &YgooSclassYOdo_descendents},
  {"*report-prop-unbound-errors?*", CVAR, &YgooSclassYTreport_prop_unbound_errorsQT},
  {"clone", CVAR, &YgooSclassYclone},
  {"<parents>", CVAR, &YgooSclassYLparentsG},
  {"forward-class", CVAR, &YgooSclassYforward_class},
  {"class-of", CVAR, &YgooSclassYclass_of},
  {"class-ordered-props", CVAR, &YgooSclassYclass_ordered_props},
  {"and", PVAR, NULL},
  {"when", PVAR, NULL},
  {"class-ordered-ancestors", CVAR, &YgooSclassYclass_ordered_ancestors},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"find-setter", NULL},
  {"find-getter", NULL},
  {"fab-class", NULL},
  {"prop-value-setter", NULL},
  {"%prop", NULL},
  {"prop-bound?", NULL},
  {"prop-value", NULL},
  {"add-prop", NULL},
  {"%prop-unbound-error", NULL},
  {"new", NULL},
  {"prop-offset", NULL},
  {"*report-prop-unbound-errors?*", NULL},
  {"clone", NULL},
  {"props-of", NULL},
  {"class-of", NULL},
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
