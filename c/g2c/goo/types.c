/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/types");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/types */

EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ytup,"goo/boot","tup");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmacrosYcat,"goo/macros","cat");
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
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(Yerror,"goo/boot","error");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
DEF(YgooStypesYtQ,"goo/types","t?");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooStypesYtL,"goo/types","t<");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YgooStypesYall2Q,"goo/types","all2?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSmacrosY1st,"goo/macros","1st");
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
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YOallQ,"goo/boot","@all?");
EXT(YtT,"goo/boot","t*");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YLcolG,"goo/boot","<col>");
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
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YPfalse,"goo/boot","%false");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YgooStypesYDbot,"goo/types","$bot");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YOmap,"goo/boot","@map");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YOnew,"goo/boot","@new");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YLintG,"goo/boot","<int>");
EXT(Ynot,"goo/boot","not");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YOtup,"goo/boot","@tup");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooStypesYlen,"goo/types","len");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ynew,"goo/boot","new");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
DEF(YgooStypesYas,"goo/types","as");
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
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ytail,"goo/boot","tail");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Ybox_value,"goo/boot","box-value");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ynil,"goo/boot","nil");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ylst,"goo/boot","lst");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YOfold,"goo/boot","@fold");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YPtrue,"goo/boot","%true");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
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
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_20);
DEFLIT(lit_24);
DEFLIT(lit_5);
DEFLIT(lit_27);
DEFLIT(lit_42);
DEFLIT(lit_62);
DEFLIT(lit_54);
DEFLIT(lit_40);
DEFLIT(lit_45);
DEFLIT(lit_48);
DEFLIT(lit_34);
DEFLIT(lit_23);
DEFLIT(lit_17);
DEFLIT(lit_21);
DEFLIT(lit_52);
DEFLIT(lit_44);
DEFLIT(lit_7);
DEFLIT(lit_11);
DEFLIT(lit_10);
DEFLIT(lit_43);
DEFLIT(lit_47);
DEFLIT(lit_4);
DEFLIT(lit_18);
DEFLIT(lit_56);
DEFLIT(lit_22);
DEFLIT(lit_55);
DEFLIT(lit_2);
DEFLIT(lit_9);
DEFLIT(lit_36);
DEFLIT(lit_28);
DEFLIT(lit_61);
DEFLIT(lit_35);
DEFLIT(lit_8);
DEFLIT(lit_29);
DEFLIT(lit_46);
DEFLIT(lit_12);
DEFLIT(lit_16);
DEFLIT(lit_15);
DEFLIT(lit_37);
DEFLIT(lit_59);
DEFLIT(lit_49);
DEFLIT(lit_25);
DEFLIT(lit_41);
DEFLIT(lit_0);
DEFLIT(lit_31);
DEFLIT(lit_1);
DEFLIT(lit_39);
DEFLIT(lit_33);
DEFLIT(lit_26);
DEFLIT(lit_3);
DEFLIT(lit_14);
DEFLIT(lit_58);
DEFLIT(lit_60);
DEFLIT(lit_19);
DEFLIT(lit_13);
DEFLIT(lit_30);
DEFLIT(lit_32);
DEFLIT(lit_6);
DEFLIT(lit_38);
DEFLIT(lit_51);
DEFLIT(lit_50);
DEFLIT(lit_57);
DEFLIT(lit_63);
DEFLIT(lit_53);

/* FUNCTIONS: */

FUNFOR(YgooStypesYtA);
FUNFOR(YgooStypesYtE);
FUNFOR(YgooStypesYtL);
FUNFOR(YgooStypesYtQ);
LOCFOR(fun_subtypeQ_4);
LOCFOR(fun_subtypeQ_5);
LOCFOR(fun_subtypeQ_6);
LOCFOR(fun_subtypeQ_7);
LOCFOR(fun_subtypeQ_8);
LOCFOR(fun_9);
LOCFOR(fun_subtypeQ_10);
LOCFOR(fun_11);
LOCFOR(fun_subtypeQ_12);
LOCFOR(fun_13);
LOCFOR(fun_subtypeQ_14);
LOCFOR(fun_subtypeQ_15);
LOCFOR(fun_subtypeQ_16);
LOCFOR(fun_subtypeQ_17);
LOCFOR(fun_subtypeQ_18);
LOCFOR(fun_subtypeQ_19);
LOCFOR(fun_subtypeQ_20);
LOCFOR(fun_subtypeQ_21);
LOCFOR(fun_subtypeQ_22);
LOCFOR(fun_subtypeQ_23);
LOCFOR(fun_subtypeQ_24);
LOCFOR(fun_subtypeQ_25);
LOCFOR(fun_subtypeQ_26);
LOCFOR(fun_subtypeQ_27);
LOCFOR(fun_isaQ_28);
LOCFOR(fun_isaQ_29);
LOCFOR(fun_isaQ_30);
LOCFOR(fun_31);
LOCFOR(fun_isaQ_32);
LOCFOR(fun_isaQ_33);
LOCFOR(fun_order_specs_34);
LOCFOR(fun_order_specs_35);
LOCFOR(fun_order_specs_36);
LOCFOR(fun_order_specs_37);
LOCFOR(fun_order_specs_38);
LOCFOR(fun_order_specs_39);
LOCFOR(fun_order_specs_40);
LOCFOR(fun_may_isaQ_41);
LOCFOR(fun_may_isaQ_42);
LOCFOR(fun_may_isaQ_43);
LOCFOR(fun_may_isaQ_44);
LOCFOR(fun_45);
LOCFOR(fun_may_isaQ_46);
extern P YgooStypesY___main_0___ ();
extern P YgooStypesY___main_1___ ();
extern P YgooStypesY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooStypesYtA) {
  P args_;
  P T0,T1;
LINK_STACK();
  NARGS(args_, 0);
  T1 = CALL1(1,VARREF(YOopts_as_lst),args_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLunionG),VARREF(Yunion_elts),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooStypesYtE) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLsingletonG),VARREF(Ytype_object),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooStypesYtL) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLsubclassG),VARREF(Ytype_class),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooStypesYtQ) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T0 = CALL2(1,VARREF(YgooStypesYtA),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_subtypeQ_4) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPfalse);
}

LOCCODEDEF(fun_subtypeQ_5) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPfalse);
}

LOCCODEDEF(fun_subtypeQ_6) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPtrue);
}

LOCCODEDEF(fun_subtypeQ_7) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPtrue);
}

LOCCODEDEF(fun_subtypeQ_8) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPtrue);
}

LOCCODEDEF(fun_9) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  T0 = CALL2(1,VARREF(YOsubtypeQ),t_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_subtypeQ_10) {
  P t1_,t2_;
  P xF2594;
  P T0,T1,T2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = FUNFAB(fun_9,1,t2_);
  xF2594 = t1_;
  T2 = (P)YPprop_elt(xF2594,(P)0);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_11) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  T0 = CALL2(1,VARREF(YOsubtypeQ),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_subtypeQ_12) {
  P t1_,t2_;
  P xF2595;
  P T0,T1,T2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = FUNFAB(fun_11,1,t1_);
  xF2595 = t2_;
  T2 = (P)YPprop_elt(xF2595,(P)0);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_13) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  T0 = CALL2(1,VARREF(YOsubtypeQ),t_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_subtypeQ_14) {
  P t1_,t2_;
  P xF2596;
  P T0,T1,T2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = FUNFAB(fun_13,1,t2_);
  xF2596 = t1_;
  T2 = (P)YPprop_elt(xF2596,(P)0);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_subtypeQ_15) {
  P t1_,t2_;
  P xF2604;
  P xF2603;
  P xF2602;
  P xF2601;
  P xF2600;
  P xF2599;
  P c2F2598;
  P c1F2597;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  c1F2597 = t1_;
  c2F2598 = t2_;
  xF2599 = c1F2597;
  T3 = (P)YPprop_elt(xF2599,(P)11);
  xF2600 = c2F2598;
  T5 = (P)YPprop_elt(xF2600,(P)10);
  xF2601 = T5;
  xF2602 = xF2601;
  T4 = (P)YPiGG(xF2602,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF2603 = YPint((P)1);
  xF2604 = xF2603;
  T6 = (P)YPiGG(xF2604,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_subtypeQ_16) {
  P t1_,t2_;
  P xF2625;
  P xF2624;
  P xF2623;
  P xF2622;
  P xF2621;
  P xF2620;
  P c2F2619;
  P c1F2618;
  P tagF2617;
  P xF2616;
  P xF2615;
  P cF2614;
  P oF2613;
  P yF2612;
  P xF2611;
  P tagF2610;
  P xF2609;
  P xF2608;
  P tF2607;
  P oF2606;
  P xF2605;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF2605 = t1_;
  T23 = (P)YPprop_elt(xF2605,(P)0);
  oF2606 = T23;
  tF2607 = t2_;
  xF2608 = tF2607;
  xF2609 = xF2608;
  T8 = (P)YPiB(xF2609,(P)3);
  tagF2610 = T8;
  T5 = (P)YPiE(tagF2610,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF2608);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF2610);
    T3 = T7;
  }
  xF2611 = T3;
  yF2612 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF2611,yF2612);
  T1 = (P)YPbb(T2);
  if (T2) {
    oF2613 = oF2606;
    cF2614 = tF2607;
    xF2615 = oF2613;
    xF2616 = xF2615;
    T21 = (P)YPiB(xF2616,(P)3);
    tagF2617 = T21;
    T18 = (P)YPiE(tagF2617,(P)0);
    T17 = (P)YPbb(T18);
    if (T18) {
      T19 = (P)YPobject_class(xF2615);
      T16 = T19;
    } else {
      T20 = (P)YPelt(VARREF(YDdirect_object_class),tagF2617);
      T16 = T20;
    }
    c1F2618 = T16;
    c2F2619 = cF2614;
    xF2620 = c1F2618;
    T12 = (P)YPprop_elt(xF2620,(P)11);
    xF2621 = c2F2619;
    T14 = (P)YPprop_elt(xF2621,(P)10);
    xF2622 = T14;
    xF2623 = xF2622;
    T13 = (P)YPiGG(xF2623,(P)2);
    T11 = (P)YPselt(T12,T13);
    xF2624 = YPint((P)1);
    xF2625 = xF2624;
    T15 = (P)YPiGG(xF2625,(P)2);
    T10 = (P)YPiE(T11,T15);
    T9 = (P)YPbb(T10);
    T0 = T9;
  } else {
    T22 = CALL2(1,VARREF(YisaQ),oF2606,tF2607);
    T0 = T22;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_subtypeQ_17) {
  P t1_,t2_;
  P xF2633;
  P xF2632;
  P xF2631;
  P xF2630;
  P xF2629;
  P xF2628;
  P c2F2627;
  P c1F2626;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  c1F2626 = VARREF(YLclassG);
  c2F2627 = t2_;
  xF2628 = c1F2626;
  T3 = (P)YPprop_elt(xF2628,(P)11);
  xF2629 = c2F2627;
  T5 = (P)YPprop_elt(xF2629,(P)10);
  xF2630 = T5;
  xF2631 = xF2630;
  T4 = (P)YPiGG(xF2631,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF2632 = YPint((P)1);
  xF2633 = xF2632;
  T6 = (P)YPiGG(xF2633,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_subtypeQ_18) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPfalse);
}

LOCCODEDEF(fun_subtypeQ_19) {
  P t1_,t2_;
  P xF2634;
  P T0,T1;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF2634 = t1_;
  T1 = (P)YPprop_elt(xF2634,(P)0);
  T0 = (P)YOsingleton_isaQ(T1,t2_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_subtypeQ_20) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPfalse);
}

LOCCODEDEF(fun_subtypeQ_21) {
  P t1_,t2_;
  P yF2639;
  P xF2638;
  P xF2637;
  P yF2636;
  P xF2635;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF2635 = t1_;
  yF2636 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF2635,yF2636);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF2637 = t2_;
    T5 = (P)YPprop_elt(xF2637,(P)0);
    xF2638 = T5;
    yF2639 = VARREF(YLclassG);
    T4 = (P)YPeqQ(xF2638,yF2639);
    T3 = (P)YPbb(T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_subtypeQ_22) {
  P t1_,t2_;
  P xF2649;
  P xF2648;
  P xF2647;
  P xF2646;
  P xF2645;
  P xF2644;
  P c2F2643;
  P c1F2642;
  P xF2641;
  P xF2640;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF2640 = t1_;
  T7 = (P)YPprop_elt(xF2640,(P)0);
  c1F2642 = T7;
  xF2641 = t2_;
  T8 = (P)YPprop_elt(xF2641,(P)0);
  c2F2643 = T8;
  xF2644 = c1F2642;
  T3 = (P)YPprop_elt(xF2644,(P)11);
  xF2645 = c2F2643;
  T5 = (P)YPprop_elt(xF2645,(P)10);
  xF2646 = T5;
  xF2647 = xF2646;
  T4 = (P)YPiGG(xF2647,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF2648 = YPint((P)1);
  xF2649 = xF2648;
  T6 = (P)YPiGG(xF2649,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_subtypeQ_23) {
  P t1_,t2_;
  P xF2680;
  P xF2679;
  P xF2678;
  P xF2677;
  P xF2676;
  P xF2675;
  P c2F2674;
  P c1F2673;
  P xF2672;
  P xF2671;
  P xF2670;
  P xF2669;
  P xF2668;
  P xF2667;
  P xF2666;
  P xF2665;
  P c2F2664;
  P c1F2663;
  P tagF2662;
  P xF2661;
  P xF2660;
  P cF2659;
  P oF2658;
  P yF2657;
  P xF2656;
  P tagF2655;
  P xF2654;
  P xF2653;
  P tF2652;
  P oF2651;
  P xF2650;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF2650 = t1_;
  T24 = (P)YPprop_elt(xF2650,(P)0);
  oF2651 = T24;
  tF2652 = VARREF(YLclassG);
  xF2653 = tF2652;
  xF2654 = xF2653;
  T9 = (P)YPiB(xF2654,(P)3);
  tagF2655 = T9;
  T6 = (P)YPiE(tagF2655,(P)0);
  T5 = (P)YPbb(T6);
  if (T6) {
    T7 = (P)YPobject_class(xF2653);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF2655);
    T4 = T8;
  }
  xF2656 = T4;
  yF2657 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF2656,yF2657);
  T2 = (P)YPbb(T3);
  if (T3) {
    oF2658 = oF2651;
    cF2659 = tF2652;
    xF2660 = oF2658;
    xF2661 = xF2660;
    T22 = (P)YPiB(xF2661,(P)3);
    tagF2662 = T22;
    T19 = (P)YPiE(tagF2662,(P)0);
    T18 = (P)YPbb(T19);
    if (T19) {
      T20 = (P)YPobject_class(xF2660);
      T17 = T20;
    } else {
      T21 = (P)YPelt(VARREF(YDdirect_object_class),tagF2662);
      T17 = T21;
    }
    c1F2663 = T17;
    c2F2664 = cF2659;
    xF2665 = c1F2663;
    T13 = (P)YPprop_elt(xF2665,(P)11);
    xF2666 = c2F2664;
    T15 = (P)YPprop_elt(xF2666,(P)10);
    xF2667 = T15;
    xF2668 = xF2667;
    T14 = (P)YPiGG(xF2668,(P)2);
    T12 = (P)YPselt(T13,T14);
    xF2669 = YPint((P)1);
    xF2670 = xF2669;
    T16 = (P)YPiGG(xF2670,(P)2);
    T11 = (P)YPiE(T12,T16);
    T10 = (P)YPbb(T11);
    T1 = T10;
  } else {
    T23 = CALL2(1,VARREF(YisaQ),oF2651,tF2652);
    T1 = T23;
  }
  if (T1 != YPfalse) {
    xF2671 = t1_;
    T32 = (P)YPprop_elt(xF2671,(P)0);
    c1F2673 = T32;
    xF2672 = t2_;
    T33 = (P)YPprop_elt(xF2672,(P)0);
    c2F2674 = T33;
    xF2675 = c1F2673;
    T28 = (P)YPprop_elt(xF2675,(P)11);
    xF2676 = c2F2674;
    T30 = (P)YPprop_elt(xF2676,(P)10);
    xF2677 = T30;
    xF2678 = xF2677;
    T29 = (P)YPiGG(xF2678,(P)2);
    T27 = (P)YPselt(T28,T29);
    xF2679 = YPint((P)1);
    xF2680 = xF2679;
    T31 = (P)YPiGG(xF2680,(P)2);
    T26 = (P)YPiE(T27,T31);
    T25 = (P)YPbb(T26);
    T0 = T25;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_subtypeQ_24) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPfalse);
}

LOCCODEDEF(fun_subtypeQ_25) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPfalse);
}

LOCCODEDEF(fun_subtypeQ_26) {
  P t1_,t2_;
  P yF2694;
  P xF2693;
  P tF2692;
  P xF2691;
  P xF2690;
  P xF2689;
  P tF2688;
  P xF2687;
  P xF2686;
  P xF2685;
  P teT2F2684;
  P xF2683;
  P teT1F2682;
  P xF2681;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF2681 = t1_;
  T11 = (P)YPprop_elt(xF2681,(P)0);
  teT1F2682 = T11;
  xF2683 = t2_;
  T10 = (P)YPprop_elt(xF2683,(P)0);
  teT2F2684 = T10;
  xF2685 = teT1F2682;
  T5 = (P)YPtlen(xF2685);
  xF2686 = T5;
  xF2687 = xF2686;
  tF2688 = (P)1;
  T4 = (P)YPiLL(xF2687,(P)2);
  T3 = (P)YPiv(T4,tF2688);
  xF2693 = T3;
  xF2689 = teT2F2684;
  T8 = (P)YPtlen(xF2689);
  xF2690 = T8;
  xF2691 = xF2690;
  tF2692 = (P)1;
  T7 = (P)YPiLL(xF2691,(P)2);
  T6 = (P)YPiv(T7,tF2692);
  yF2694 = T6;
  T2 = (P)YPeqQ(xF2693,yF2694);
  T1 = (P)YPbb(T2);
  if (T2) {
    T9 = CALL3(1,VARREF(YOtall2Q),VARREF(YsubtypeQ),teT1F2682,teT2F2684);
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_subtypeQ_27) {
  P t1_,t2_;
  P T0;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T0 = CALL2(1,VARREF(YsubtypeQ),VARREF(YLtupG),t2_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_isaQ_28) {
  P o_,t_;
  P xF2707;
  P xF2706;
  P xF2705;
  P xF2704;
  P xF2703;
  P xF2702;
  P c2F2701;
  P c1F2700;
  P tagF2699;
  P xF2698;
  P xF2697;
  P cF2696;
  P oF2695;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  oF2695 = o_;
  cF2696 = t_;
  xF2697 = oF2695;
  xF2698 = xF2697;
  T12 = (P)YPiB(xF2698,(P)3);
  tagF2699 = T12;
  T9 = (P)YPiE(tagF2699,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF2697);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF2699);
    T7 = T11;
  }
  c1F2700 = T7;
  c2F2701 = cF2696;
  xF2702 = c1F2700;
  T3 = (P)YPprop_elt(xF2702,(P)11);
  xF2703 = c2F2701;
  T5 = (P)YPprop_elt(xF2703,(P)10);
  xF2704 = T5;
  xF2705 = xF2704;
  T4 = (P)YPiGG(xF2705,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF2706 = YPint((P)1);
  xF2707 = xF2706;
  T6 = (P)YPiGG(xF2707,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_isaQ_29) {
  P o_,t_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  T0 = (P)YOsingleton_isaQ(o_,t_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_isaQ_30) {
  P o_,t_;
  P xF2736;
  P xF2735;
  P xF2734;
  P xF2733;
  P xF2732;
  P xF2731;
  P c2F2730;
  P c1F2729;
  P xF2728;
  P xF2727;
  P xF2726;
  P xF2725;
  P xF2724;
  P xF2723;
  P xF2722;
  P c2F2721;
  P c1F2720;
  P tagF2719;
  P xF2718;
  P xF2717;
  P cF2716;
  P oF2715;
  P yF2714;
  P xF2713;
  P tagF2712;
  P xF2711;
  P xF2710;
  P tF2709;
  P oF2708;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  oF2708 = o_;
  tF2709 = VARREF(YLclassG);
  xF2710 = tF2709;
  xF2711 = xF2710;
  T9 = (P)YPiB(xF2711,(P)3);
  tagF2712 = T9;
  T6 = (P)YPiE(tagF2712,(P)0);
  T5 = (P)YPbb(T6);
  if (T6) {
    T7 = (P)YPobject_class(xF2710);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF2712);
    T4 = T8;
  }
  xF2713 = T4;
  yF2714 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF2713,yF2714);
  T2 = (P)YPbb(T3);
  if (T3) {
    oF2715 = oF2708;
    cF2716 = tF2709;
    xF2717 = oF2715;
    xF2718 = xF2717;
    T22 = (P)YPiB(xF2718,(P)3);
    tagF2719 = T22;
    T19 = (P)YPiE(tagF2719,(P)0);
    T18 = (P)YPbb(T19);
    if (T19) {
      T20 = (P)YPobject_class(xF2717);
      T17 = T20;
    } else {
      T21 = (P)YPelt(VARREF(YDdirect_object_class),tagF2719);
      T17 = T21;
    }
    c1F2720 = T17;
    c2F2721 = cF2716;
    xF2722 = c1F2720;
    T13 = (P)YPprop_elt(xF2722,(P)11);
    xF2723 = c2F2721;
    T15 = (P)YPprop_elt(xF2723,(P)10);
    xF2724 = T15;
    xF2725 = xF2724;
    T14 = (P)YPiGG(xF2725,(P)2);
    T12 = (P)YPselt(T13,T14);
    xF2726 = YPint((P)1);
    xF2727 = xF2726;
    T16 = (P)YPiGG(xF2727,(P)2);
    T11 = (P)YPiE(T12,T16);
    T10 = (P)YPbb(T11);
    T1 = T10;
  } else {
    T23 = CALL2(1,VARREF(YisaQ),oF2708,tF2709);
    T1 = T23;
  }
  if (T1 != YPfalse) {
    c1F2729 = o_;
    xF2728 = t_;
    T31 = (P)YPprop_elt(xF2728,(P)0);
    c2F2730 = T31;
    xF2731 = c1F2729;
    T27 = (P)YPprop_elt(xF2731,(P)11);
    xF2732 = c2F2730;
    T29 = (P)YPprop_elt(xF2732,(P)10);
    xF2733 = T29;
    xF2734 = xF2733;
    T28 = (P)YPiGG(xF2734,(P)2);
    T26 = (P)YPselt(T27,T28);
    xF2735 = YPint((P)1);
    xF2736 = xF2735;
    T30 = (P)YPiGG(xF2736,(P)2);
    T25 = (P)YPiE(T26,T30);
    T24 = (P)YPbb(T25);
    T0 = T24;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_31) {
  P t_;
  P xF2756;
  P xF2755;
  P xF2754;
  P xF2753;
  P xF2752;
  P xF2751;
  P c2F2750;
  P c1F2749;
  P tagF2748;
  P xF2747;
  P xF2746;
  P cF2745;
  P oF2744;
  P yF2743;
  P xF2742;
  P tagF2741;
  P xF2740;
  P xF2739;
  P tF2738;
  P oF2737;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(t_, 0);
  oF2737 = FREEREF(0);
  tF2738 = t_;
  xF2739 = tF2738;
  xF2740 = xF2739;
  T8 = (P)YPiB(xF2740,(P)3);
  tagF2741 = T8;
  T5 = (P)YPiE(tagF2741,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF2739);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF2741);
    T3 = T7;
  }
  xF2742 = T3;
  yF2743 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF2742,yF2743);
  T1 = (P)YPbb(T2);
  if (T2) {
    oF2744 = oF2737;
    cF2745 = tF2738;
    xF2746 = oF2744;
    xF2747 = xF2746;
    T21 = (P)YPiB(xF2747,(P)3);
    tagF2748 = T21;
    T18 = (P)YPiE(tagF2748,(P)0);
    T17 = (P)YPbb(T18);
    if (T18) {
      T19 = (P)YPobject_class(xF2746);
      T16 = T19;
    } else {
      T20 = (P)YPelt(VARREF(YDdirect_object_class),tagF2748);
      T16 = T20;
    }
    c1F2749 = T16;
    c2F2750 = cF2745;
    xF2751 = c1F2749;
    T12 = (P)YPprop_elt(xF2751,(P)11);
    xF2752 = c2F2750;
    T14 = (P)YPprop_elt(xF2752,(P)10);
    xF2753 = T14;
    xF2754 = xF2753;
    T13 = (P)YPiGG(xF2754,(P)2);
    T11 = (P)YPselt(T12,T13);
    xF2755 = YPint((P)1);
    xF2756 = xF2755;
    T15 = (P)YPiGG(xF2756,(P)2);
    T10 = (P)YPiE(T11,T15);
    T9 = (P)YPbb(T10);
    T0 = T9;
  } else {
    T22 = CALL2(1,VARREF(YisaQ),oF2737,tF2738);
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_isaQ_32) {
  P o_,u_;
  P xF2757;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(u_, 1);
  T1 = FUNFAB(fun_31,1,o_);
  xF2757 = u_;
  T2 = (P)YPprop_elt(xF2757,(P)0);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_isaQ_33) {
  P o_,t_;
  P yF2769;
  P xF2768;
  P tF2767;
  P xF2766;
  P xF2765;
  P xF2764;
  P tF2763;
  P xF2762;
  P xF2761;
  P xF2760;
  P teTF2759;
  P xF2758;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  xF2758 = t_;
  T12 = (P)YPprop_elt(xF2758,(P)0);
  teTF2759 = T12;
  T1 = CALL2(1,VARREF(YisaQ),o_,VARREF(YLtupG));
  if (T1 != YPfalse) {
    xF2760 = o_;
    T7 = (P)YPtlen(xF2760);
    xF2761 = T7;
    xF2762 = xF2761;
    tF2763 = (P)1;
    T6 = (P)YPiLL(xF2762,(P)2);
    T5 = (P)YPiv(T6,tF2763);
    xF2768 = T5;
    xF2764 = teTF2759;
    T10 = (P)YPtlen(xF2764);
    xF2765 = T10;
    xF2766 = xF2765;
    tF2767 = (P)1;
    T9 = (P)YPiLL(xF2766,(P)2);
    T8 = (P)YPiv(T9,tF2767);
    yF2769 = T8;
    T4 = (P)YPeqQ(xF2768,yF2769);
    T3 = (P)YPbb(T4);
    if (T4) {
      T11 = CALL3(1,VARREF(YOtall2Q),VARREF(YisaQ),o_,teTF2759);
      T2 = T11;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_order_specs_34) {
  P t1_,t2_,arg_;
  P T0;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_46),t1_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_order_specs_35) {
  P t1_,t2_,arg_;
  P T0;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_48),t1_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_order_specs_36) {
  P t1_,t2_,arg_;
  P yF2775;
  P xF2774;
  P c2F2773;
  P xF2772;
  P c1F2771;
  P xF2770;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  xF2770 = t1_;
  T10 = (P)YPprop_elt(xF2770,(P)0);
  c1F2771 = T10;
  xF2772 = t2_;
  T9 = (P)YPprop_elt(xF2772,(P)0);
  c2F2773 = T9;
  xF2774 = c1F2771;
  yF2775 = c2F2773;
  T2 = (P)YPeqQ(xF2774,yF2775);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(YOtup),LITREF(lit_46),t1_);
    T0 = T3;
  } else {
    T5 = CALL3(1,VARREF(YgooSfunYOclassL),c1F2771,c2F2773,arg_);
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YOtup),LITREF(lit_48),t1_);
      T4 = T6;
    } else {
      if (YPtrue != YPfalse) {
        T8 = CALL2(1,VARREF(YOtup),LITREF(lit_50),t2_);
        T7 = T8;
      } else {
        T7 = YPfalse;
      }
      T4 = T7;
    }
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_order_specs_37) {
  P t1_,t2_,arg_;
  P yF2777;
  P xF2776;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T2 = CALL2(1,VARREF(YOsubtypeQ),VARREF(YLclassG),t2_);
  if (T2 != YPfalse) {
    xF2776 = t1_;
    yF2777 = VARREF(YLanyG);
    T5 = (P)YPeqQ(xF2776,yF2777);
    T4 = (P)YPbb(T5);
    if (T5) {
      T6 = CALL3(1,VARREF(Yorder_specs),VARREF(YLclassG),t2_,arg_);
      T3 = T6;
    } else {
      T3 = LITREF(lit_48);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_52);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t1_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_order_specs_38) {
  P t1_,t2_,arg_;
  P yF2779;
  P xF2778;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T2 = CALL2(1,VARREF(YOsubtypeQ),VARREF(YLclassG),t1_);
  if (T2 != YPfalse) {
    xF2778 = t2_;
    yF2779 = VARREF(YLanyG);
    T5 = (P)YPeqQ(xF2778,yF2779);
    T4 = (P)YPbb(T5);
    if (T5) {
      T6 = CALL3(1,VARREF(Yorder_specs),t1_,VARREF(YLclassG),arg_);
      T3 = T6;
    } else {
      T3 = LITREF(lit_50);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_52);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t2_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_order_specs_39) {
  P t1_,t2_,arg_;
  P T0;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T0 = CALL3(1,VARREF(YgooSfunYOorder_specs_class),t1_,t2_,arg_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_order_specs_40) {
  P t1_,t2_,arg_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T1 = CALL2(1,VARREF(YOsubtypeQ),t1_,t2_);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YOsubtypeQ),t2_,t1_);
    if (T4 != YPfalse) {
      T3 = LITREF(lit_46);
    } else {
      T3 = LITREF(lit_48);
    }
    T2 = CALL2(1,VARREF(YOtup),T3,t1_);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YOsubtypeQ),t2_,t1_);
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YOtup),LITREF(lit_50),t2_);
      T5 = T7;
    } else {
      T8 = CALL2(1,VARREF(YOtup),LITREF(lit_52),VARREF(YLanyG));
      T5 = T8;
    }
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_may_isaQ_41) {
  P c_,t_;
  P xF2787;
  P xF2786;
  P xF2785;
  P xF2784;
  P xF2783;
  P xF2782;
  P c2F2781;
  P c1F2780;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  c1F2780 = c_;
  c2F2781 = t_;
  xF2782 = c1F2780;
  T4 = (P)YPprop_elt(xF2782,(P)11);
  xF2783 = c2F2781;
  T6 = (P)YPprop_elt(xF2783,(P)10);
  xF2784 = T6;
  xF2785 = xF2784;
  T5 = (P)YPiGG(xF2785,(P)2);
  T3 = (P)YPselt(T4,T5);
  xF2786 = YPint((P)1);
  xF2787 = xF2786;
  T7 = (P)YPiGG(xF2787,(P)2);
  T2 = (P)YPiE(T3,T7);
  T1 = (P)YPbb(T2);
  if (T2) {
    T8 = CALL2(1,VARREF(YOtup),YPtrue,YPtrue);
    T0 = T8;
  } else {
    T9 = CALL2(1,VARREF(YOtup),YPfalse,YPfalse);
    T0 = T9;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_may_isaQ_42) {
  P c_,t_;
  P tagF2791;
  P xF2790;
  P xF2789;
  P xF2788;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  xF2788 = t_;
  T8 = (P)YPprop_elt(xF2788,(P)0);
  xF2789 = T8;
  xF2790 = xF2789;
  T7 = (P)YPiB(xF2790,(P)3);
  tagF2791 = T7;
  T4 = (P)YPiE(tagF2791,(P)0);
  T3 = (P)YPbb(T4);
  if (T4) {
    T5 = (P)YPobject_class(xF2789);
    T2 = T5;
  } else {
    T6 = (P)YPelt(VARREF(YDdirect_object_class),tagF2791);
    T2 = T6;
  }
  T1 = CALL2(1,VARREF(YOmay_isaQ),T2,c_);
  T0 = CALL2(1,VARREF(YOtup),T1,YPfalse);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_may_isaQ_43) {
  P c_,t_;
  P yF2795;
  P xF2794;
  P xF2793;
  P classQF2792;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  T5 = CALL2(1,VARREF(YOsubtypeQ),c_,VARREF(YLclassG));
  classQF2792 = T5;
  if (classQF2792 != YPfalse) {
    xF2793 = c_;
    T4 = (P)YPprop_elt(xF2793,(P)0);
    xF2794 = T4;
    yF2795 = VARREF(YLanyG);
    T3 = (P)YPeqQ(xF2794,yF2795);
    T2 = (P)YPbb(T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = CALL2(1,VARREF(YOtup),classQF2792,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_may_isaQ_44) {
  P c_,t_;
  P xF2818;
  P xF2817;
  P tmpF2816;
  P tmpF2815;
  P elt_allQF2814;
  P xF2813;
  P xF2812;
  P iF2811;
  P xF2810;
  P elt_someQF2809;
  P xF2808;
  P xF2807;
  P iF2806;
  P xF2805;
  P elt_some_allQF2804;
  P xF2803;
  P xF2802;
  P xF2801;
  P xF2800;
  P eltsF2799;
  P allQF2798;
  P someQF2797;
  P xF2796;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  someQF2797 = YPfalse;
  allQF2798 = YPfalse;
  xF2796 = t_;
  T14 = (P)YPprop_elt(xF2796,(P)0);
  eltsF2799 = T14;
  LOOP_50: {
    P a50_0,a50_1,a50_2;
    xF2800 = eltsF2799;
    xF2801 = xF2800;
    T2 = (P)YPeqQ(xF2801,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL2(1,VARREF(YOtup),someQF2797,allQF2798);
      T0 = T3;
    } else {
      xF2802 = eltsF2799;
      xF2803 = xF2802;
      T13 = (P)YPprop_elt(xF2803,(P)0);
      T12 = CALL2(1,VARREF(YOmay_isaQ),c_,T13);
      elt_some_allQF2804 = T12;
      xF2805 = elt_some_allQF2804;
      iF2806 = YPint((P)0);
      xF2807 = iF2806;
      xF2808 = xF2807;
      T11 = (P)YPiGG(xF2808,(P)2);
      T10 = (P)YPtelt(xF2805,T11);
      elt_someQF2809 = T10;
      xF2810 = elt_some_allQF2804;
      iF2811 = YPint((P)1);
      xF2812 = iF2811;
      xF2813 = xF2812;
      T9 = (P)YPiGG(xF2813,(P)2);
      T8 = (P)YPtelt(xF2810,T9);
      elt_allQF2814 = T8;
      tmpF2815 = elt_someQF2809;
      if (tmpF2815 != YPfalse) {
        T5 = tmpF2815;
      } else {
        T5 = someQF2797;
      }
      tmpF2816 = elt_allQF2814;
      if (tmpF2816 != YPfalse) {
        T6 = tmpF2816;
      } else {
        T6 = allQF2798;
      }
      xF2817 = eltsF2799;
      xF2818 = xF2817;
      T7 = (P)YPprop_elt(xF2818,(P)1);
      a50_0 = T5;
      a50_1 = T6;
      a50_2 = T7;
      someQF2797 = a50_0;
      allQF2798 = a50_1;
      eltsF2799 = a50_2;
      goto LOOP_50;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_45) {
  P t_;
  P xF2822;
  P xF2821;
  P iF2820;
  P xF2819;
  P T0,T1,T2;
LINK_STACK();
  ARG(t_, 0);
  T2 = CALL2(1,VARREF(Ymay_isaQ),VARREF(YLanyG),t_);
  xF2819 = T2;
  iF2820 = YPint((P)1);
  xF2821 = iF2820;
  xF2822 = xF2821;
  T1 = (P)YPiGG(xF2822,(P)2);
  T0 = (P)YPtelt(xF2819,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_may_isaQ_46) {
  P c_,t_;
  P someQF2827;
  P xF2826;
  P tupQF2825;
  P yF2824;
  P xF2823;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  xF2823 = c_;
  yF2824 = VARREF(YLtupG);
  T6 = (P)YPeqQ(xF2823,yF2824);
  T5 = (P)YPbb(T6);
  tupQF2825 = T5;
  if (tupQF2825 != YPfalse) {
    T3 = fun_45;
    xF2826 = t_;
    T4 = (P)YPprop_elt(xF2826,(P)0);
    T2 = CALL2(1,VARREF(YOtanyQ),T3,T4);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  someQF2827 = T1;
  T0 = CALL2(1,VARREF(Ytup),tupQF2825,someQF2827);
UNLINK_STACK();
  RET(T0);
}

P YgooStypesY___main_0___() {
  P T0;
DEFCREGS();
  T0 = YPfalse;
  return T0;
}

P YgooStypesY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133;
DEFCREGS();
  lit_0 = YPPsym((P)"<bot>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLtypeG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YgooStypesYLbotG,T0);
  lit_1 = YPPsym((P)"t+");
  lit_2 = YPPlist(1,YPPsym((P)"args"));
  T2 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooStypesYtA = YPfab_met(FUNCODEREF(YgooStypesYtA),T2,LITREF(lit_1),LITREF(lit_2),sloc(54),YPfalse);
  T3 = YgooStypesYtA;
  VARSET(YgooStypesYtA,T3);
  lit_3 = YPPsym((P)"t=");
  lit_4 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtE = YPfab_met(FUNCODEREF(YgooStypesYtE),T4,LITREF(lit_3),LITREF(lit_4),sloc(56),YPfalse);
  T5 = YgooStypesYtE;
  VARSET(YgooStypesYtE,T5);
  lit_5 = YPPsym((P)"t<");
  lit_6 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtL = YPfab_met(FUNCODEREF(YgooStypesYtL),T6,LITREF(lit_5),LITREF(lit_6),sloc(58),YPfalse);
  T7 = YgooStypesYtL;
  VARSET(YgooStypesYtL,T7);
  lit_7 = YPPsym((P)"t?");
  lit_8 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtQ = YPfab_met(FUNCODEREF(YgooStypesYtQ),T8,LITREF(lit_7),LITREF(lit_8),sloc(60),YPfalse);
  T9 = YgooStypesYtQ;
  VARSET(YgooStypesYtQ,T9);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T10 = XCALL1(1,VARREF(Ynew),VARREF(YgooStypesYLbotG));
  VARSET(YgooStypesYDbot,T10);
  lit_9 = YPPsym((P)"subtype?");
  lit_10 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T11 = YPfab_gen(T12,LITREF(lit_9),LITREF(lit_10),YPfalse);
  VARSET(YsubtypeQ,T11);
  lit_11 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T13 = YPfab_sig(YPPlist(2,VARREF(YLtypeG),VARREF(YgooStypesYLbotG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_4 = YPfab_met(FUNCODEREF(fun_subtypeQ_4),T13,LITREF(lit_9),LITREF(lit_11),sloc(71),YPfalse);
  T15 = VARREF_OR(YsubtypeQ,YPfalse);
  T16 = fun_subtypeQ_4;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YsubtypeQ,T14);
  lit_12 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T17 = YPfab_sig(YPPlist(2,VARREF(YLunionG),VARREF(YgooStypesYLbotG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_5 = YPfab_met(FUNCODEREF(fun_subtypeQ_5),T17,LITREF(lit_9),LITREF(lit_12),sloc(72),YPfalse);
  T19 = VARREF_OR(YsubtypeQ,YPfalse);
  T20 = fun_subtypeQ_5;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YsubtypeQ,T18);
  lit_13 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T21 = YPfab_sig(YPPlist(2,VARREF(YgooStypesYLbotG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_6 = YPfab_met(FUNCODEREF(fun_subtypeQ_6),T21,LITREF(lit_9),LITREF(lit_13),sloc(73),YPfalse);
  T23 = VARREF_OR(YsubtypeQ,YPfalse);
  T24 = fun_subtypeQ_6;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YsubtypeQ,T22);
  lit_14 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T25 = YPfab_sig(YPPlist(2,VARREF(YgooStypesYLbotG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_7 = YPfab_met(FUNCODEREF(fun_subtypeQ_7),T25,LITREF(lit_9),LITREF(lit_14),sloc(74),YPfalse);
  T27 = VARREF_OR(YsubtypeQ,YPfalse);
  T28 = fun_subtypeQ_7;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YsubtypeQ,T26);
  lit_15 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T29 = YPfab_sig(YPPlist(2,VARREF(YgooStypesYLbotG),VARREF(YgooStypesYLbotG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_8 = YPfab_met(FUNCODEREF(fun_subtypeQ_8),T29,LITREF(lit_9),LITREF(lit_15),sloc(75),YPfalse);
  T31 = VARREF_OR(YsubtypeQ,YPfalse);
  T32 = fun_subtypeQ_8;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YsubtypeQ,T30);
  lit_16 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_17 = YPPlist(1,YPPsym((P)"t"));
  T34 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T34,YPfalse,LITREF(lit_17),sloc(78),YPfalse);
  T33 = YPfab_sig(YPPlist(2,VARREF(YLunionG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_10 = YPfab_met(FUNCODEREF(fun_subtypeQ_10),T33,LITREF(lit_9),LITREF(lit_16),sloc(77),YPfalse);
  T36 = VARREF_OR(YsubtypeQ,YPfalse);
  T37 = fun_subtypeQ_10;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YsubtypeQ,T35);
  lit_18 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_19 = YPPlist(1,YPPsym((P)"t"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T39,YPfalse,LITREF(lit_19),sloc(80),YPfalse);
  T38 = YPfab_sig(YPPlist(2,VARREF(YLtypeG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_12 = YPfab_met(FUNCODEREF(fun_subtypeQ_12),T38,LITREF(lit_9),LITREF(lit_18),sloc(79),YPfalse);
  T41 = VARREF_OR(YsubtypeQ,YPfalse);
  T42 = fun_subtypeQ_12;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YsubtypeQ,T40);
  lit_20 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_21 = YPPlist(1,YPPsym((P)"t"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPfab_met(FUNCODEREF(fun_13),T44,YPfalse,LITREF(lit_21),sloc(83),YPfalse);
  T43 = YPfab_sig(YPPlist(2,VARREF(YLunionG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_14 = YPfab_met(FUNCODEREF(fun_subtypeQ_14),T43,LITREF(lit_9),LITREF(lit_20),sloc(82),YPfalse);
  T46 = VARREF_OR(YsubtypeQ,YPfalse);
  T47 = fun_subtypeQ_14;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YsubtypeQ,T45);
  lit_22 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T48 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_15 = YPfab_met(FUNCODEREF(fun_subtypeQ_15),T48,LITREF(lit_9),LITREF(lit_22),sloc(85),YPfalse);
  T50 = VARREF_OR(YsubtypeQ,YPfalse);
  T51 = fun_subtypeQ_15;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YsubtypeQ,T49);
  lit_23 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YLsingletonG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_16 = YPfab_met(FUNCODEREF(fun_subtypeQ_16),T52,LITREF(lit_9),LITREF(lit_23),sloc(87),YPfalse);
  T54 = VARREF_OR(YsubtypeQ,YPfalse);
  T55 = fun_subtypeQ_16;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YsubtypeQ,T53);
  lit_24 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T56 = YPfab_sig(YPPlist(2,VARREF(YLsubclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_17 = YPfab_met(FUNCODEREF(fun_subtypeQ_17),T56,LITREF(lit_9),LITREF(lit_24),sloc(89),YPfalse);
  T58 = VARREF_OR(YsubtypeQ,YPfalse);
  T59 = fun_subtypeQ_17;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YsubtypeQ,T57);
  lit_25 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T60 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_18 = YPfab_met(FUNCODEREF(fun_subtypeQ_18),T60,LITREF(lit_9),LITREF(lit_25),sloc(92),YPfalse);
  T62 = VARREF_OR(YsubtypeQ,YPfalse);
  T63 = fun_subtypeQ_18;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YsubtypeQ,T61);
  lit_26 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLsingletonG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_19 = YPfab_met(FUNCODEREF(fun_subtypeQ_19),T64,LITREF(lit_9),LITREF(lit_26),sloc(94),YPfalse);
  T66 = VARREF_OR(YsubtypeQ,YPfalse);
  T67 = fun_subtypeQ_19;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YsubtypeQ,T65);
  lit_27 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T68 = YPfab_sig(YPPlist(2,VARREF(YLsubclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_20 = YPfab_met(FUNCODEREF(fun_subtypeQ_20),T68,LITREF(lit_9),LITREF(lit_27),sloc(96),YPfalse);
  T70 = VARREF_OR(YsubtypeQ,YPfalse);
  T71 = fun_subtypeQ_20;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YsubtypeQ,T69);
  lit_28 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T72 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_21 = YPfab_met(FUNCODEREF(fun_subtypeQ_21),T72,LITREF(lit_9),LITREF(lit_28),sloc(99),YPfalse);
  T74 = VARREF_OR(YsubtypeQ,YPfalse);
  T75 = fun_subtypeQ_21;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YsubtypeQ,T73);
  lit_29 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T76 = YPfab_sig(YPPlist(2,VARREF(YLsubclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_22 = YPfab_met(FUNCODEREF(fun_subtypeQ_22),T76,LITREF(lit_9),LITREF(lit_29),sloc(101),YPfalse);
  T78 = VARREF_OR(YsubtypeQ,YPfalse);
  T79 = fun_subtypeQ_22;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YsubtypeQ,T77);
  lit_30 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T80 = YPfab_sig(YPPlist(2,VARREF(YLsingletonG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_23 = YPfab_met(FUNCODEREF(fun_subtypeQ_23),T80,LITREF(lit_9),LITREF(lit_30),sloc(103),YPfalse);
  T82 = VARREF_OR(YsubtypeQ,YPfalse);
  T83 = fun_subtypeQ_23;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YsubtypeQ,T81);
  lit_31 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T84 = YPfab_sig(YPPlist(2,VARREF(YLproductG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_24 = YPfab_met(FUNCODEREF(fun_subtypeQ_24),T84,LITREF(lit_9),LITREF(lit_31),sloc(106),YPfalse);
  T86 = VARREF_OR(YsubtypeQ,YPfalse);
  T87 = fun_subtypeQ_24;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YsubtypeQ,T85);
  lit_32 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T88 = YPfab_sig(YPPlist(2,VARREF(YLtypeG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_25 = YPfab_met(FUNCODEREF(fun_subtypeQ_25),T88,LITREF(lit_9),LITREF(lit_32),sloc(108),YPfalse);
  T90 = VARREF_OR(YsubtypeQ,YPfalse);
  T91 = fun_subtypeQ_25;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YsubtypeQ,T89);
  lit_33 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T92 = YPfab_sig(YPPlist(2,VARREF(YLproductG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_26 = YPfab_met(FUNCODEREF(fun_subtypeQ_26),T92,LITREF(lit_9),LITREF(lit_33),sloc(110),YPfalse);
  T94 = VARREF_OR(YsubtypeQ,YPfalse);
  T95 = fun_subtypeQ_26;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YsubtypeQ,T93);
  lit_34 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T96 = YPfab_sig(YPPlist(2,VARREF(YLproductG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_27 = YPfab_met(FUNCODEREF(fun_subtypeQ_27),T96,LITREF(lit_9),LITREF(lit_34),sloc(115),YPfalse);
  T98 = VARREF_OR(YsubtypeQ,YPfalse);
  T99 = fun_subtypeQ_27;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YsubtypeQ,T97);
  lit_35 = YPPsym((P)"isa?");
  lit_36 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"t"));
  T101 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T100 = YPfab_gen(T101,LITREF(lit_35),LITREF(lit_36),YPfalse);
  VARSET(YisaQ,T100);
  lit_37 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T102 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_28 = YPfab_met(FUNCODEREF(fun_isaQ_28),T102,LITREF(lit_35),LITREF(lit_37),sloc(122),YPfalse);
  T104 = VARREF_OR(YisaQ,YPfalse);
  T105 = fun_isaQ_28;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YisaQ,T103);
  lit_38 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T106 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_29 = YPfab_met(FUNCODEREF(fun_isaQ_29),T106,LITREF(lit_35),LITREF(lit_38),sloc(124),YPfalse);
  T108 = VARREF_OR(YisaQ,YPfalse);
  T109 = fun_isaQ_29;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YisaQ,T107);
  lit_39 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T110 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_30 = YPfab_met(FUNCODEREF(fun_isaQ_30),T110,LITREF(lit_35),LITREF(lit_39),sloc(126),YPfalse);
  T112 = VARREF_OR(YisaQ,YPfalse);
  T113 = fun_isaQ_30;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YisaQ,T111);
  lit_40 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"u"));
  lit_41 = YPPlist(1,YPPsym((P)"t"));
  T115 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPfab_met(FUNCODEREF(fun_31),T115,YPfalse,LITREF(lit_41),sloc(130),YPfalse);
  T114 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_32 = YPfab_met(FUNCODEREF(fun_isaQ_32),T114,LITREF(lit_35),LITREF(lit_40),sloc(129),YPfalse);
  T117 = VARREF_OR(YisaQ,YPfalse);
  T118 = fun_isaQ_32;
  T116 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T117,T118);
  VARSET(YisaQ,T116);
  lit_42 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T119 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_33 = YPfab_met(FUNCODEREF(fun_isaQ_33),T119,LITREF(lit_35),LITREF(lit_42),sloc(131),YPfalse);
  T121 = VARREF_OR(YisaQ,YPfalse);
  T122 = fun_isaQ_33;
  T120 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T121,T122);
  VARSET(YisaQ,T120);
  lit_43 = YPPsym((P)"order-specs");
  lit_44 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T125 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T124 = YPfab_sig(YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T125,Ynil);
  T123 = YPfab_gen(T124,LITREF(lit_43),LITREF(lit_44),YPfalse);
  VARSET(Yorder_specs,T123);
  lit_45 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_46 = YPPsym((P)"=");
  T129 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T128 = YPfab_sig(YPPlist(3,VARREF(YLsingletonG),VARREF(YLsingletonG),VARREF(YLanyG)),YPfalse,YPint((P)3),T129,Ynil);
  T127 = fun_order_specs_34 = YPfab_met(FUNCODEREF(fun_order_specs_34),T128,LITREF(lit_43),LITREF(lit_45),sloc(141),YPfalse);
  T132 = VARREF_OR(Yorder_specs,YPfalse);
  T133 = fun_order_specs_34;
  T131 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T132,T133);
  T130 = VARSET(Yorder_specs,T131);
  T126 = T130;
  return T126;
}

P YgooStypesY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59;
DEFCREGS();
  lit_47 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_48 = YPPsym((P)"<");
  T1 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T0 = YPfab_sig(YPPlist(3,VARREF(YLsingletonG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T1,Ynil);
  fun_order_specs_35 = YPfab_met(FUNCODEREF(fun_order_specs_35),T0,LITREF(lit_43),LITREF(lit_47),sloc(145),YPfalse);
  T3 = VARREF_OR(Yorder_specs,YPfalse);
  T4 = fun_order_specs_35;
  T2 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T3,T4);
  VARSET(Yorder_specs,T2);
  lit_49 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_50 = YPPsym((P)">");
  T6 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T5 = YPfab_sig(YPPlist(3,VARREF(YLsubclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T6,Ynil);
  fun_order_specs_36 = YPfab_met(FUNCODEREF(fun_order_specs_36),T5,LITREF(lit_43),LITREF(lit_49),sloc(149),YPfalse);
  T8 = VARREF_OR(Yorder_specs,YPfalse);
  T9 = fun_order_specs_36;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(Yorder_specs,T7);
  lit_51 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_52 = YPPsym((P)"<>");
  T11 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T10 = YPfab_sig(YPPlist(3,VARREF(YLsubclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T11,Ynil);
  fun_order_specs_37 = YPfab_met(FUNCODEREF(fun_order_specs_37),T10,LITREF(lit_43),LITREF(lit_51),sloc(158),YPfalse);
  T13 = VARREF_OR(Yorder_specs,YPfalse);
  T14 = fun_order_specs_37;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(Yorder_specs,T12);
  lit_53 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T16 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T15 = YPfab_sig(YPPlist(3,VARREF(YLclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T16,Ynil);
  fun_order_specs_38 = YPfab_met(FUNCODEREF(fun_order_specs_38),T15,LITREF(lit_43),LITREF(lit_53),sloc(167),YPfalse);
  T18 = VARREF_OR(Yorder_specs,YPfalse);
  T19 = fun_order_specs_38;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(Yorder_specs,T17);
  lit_54 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T21 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T20 = YPfab_sig(YPPlist(3,VARREF(YLclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T21,Ynil);
  fun_order_specs_39 = YPfab_met(FUNCODEREF(fun_order_specs_39),T20,LITREF(lit_43),LITREF(lit_54),sloc(176),YPfalse);
  T23 = VARREF_OR(Yorder_specs,YPfalse);
  T24 = fun_order_specs_39;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(Yorder_specs,T22);
  lit_55 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T26 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T25 = YPfab_sig(YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T26,Ynil);
  fun_order_specs_40 = YPfab_met(FUNCODEREF(fun_order_specs_40),T25,LITREF(lit_43),LITREF(lit_55),sloc(180),YPfalse);
  T28 = VARREF_OR(Yorder_specs,YPfalse);
  T29 = fun_order_specs_40;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(Yorder_specs,T27);
  lit_56 = YPPsym((P)"may-isa?");
  lit_57 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T32 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),T32,Ynil);
  T30 = YPfab_gen(T31,LITREF(lit_56),LITREF(lit_57),YPfalse);
  VARSET(Ymay_isaQ,T30);
  lit_58 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T34 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T33 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),T34,Ynil);
  fun_may_isaQ_41 = YPfab_met(FUNCODEREF(fun_may_isaQ_41),T33,LITREF(lit_56),LITREF(lit_58),sloc(191),YPfalse);
  T36 = VARREF_OR(Ymay_isaQ,YPfalse);
  T37 = fun_may_isaQ_41;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(Ymay_isaQ,T35);
  lit_59 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T39 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T38 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),T39,Ynil);
  fun_may_isaQ_42 = YPfab_met(FUNCODEREF(fun_may_isaQ_42),T38,LITREF(lit_56),LITREF(lit_59),sloc(193),YPfalse);
  T41 = VARREF_OR(Ymay_isaQ,YPfalse);
  T42 = fun_may_isaQ_42;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(Ymay_isaQ,T40);
  lit_60 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T44 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T43 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),T44,Ynil);
  fun_may_isaQ_43 = YPfab_met(FUNCODEREF(fun_may_isaQ_43),T43,LITREF(lit_56),LITREF(lit_60),sloc(195),YPfalse);
  T46 = VARREF_OR(Ymay_isaQ,YPfalse);
  T47 = fun_may_isaQ_43;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(Ymay_isaQ,T45);
  lit_61 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T49 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T48 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLunionG)),YPfalse,YPint((P)2),T49,Ynil);
  fun_may_isaQ_44 = YPfab_met(FUNCODEREF(fun_may_isaQ_44),T48,LITREF(lit_56),LITREF(lit_61),sloc(198),YPfalse);
  T51 = VARREF_OR(Ymay_isaQ,YPfalse);
  T52 = fun_may_isaQ_44;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(Ymay_isaQ,T50);
  lit_62 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  lit_63 = YPPlist(1,YPPsym((P)"t"));
  T55 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPfab_met(FUNCODEREF(fun_45),T55,YPfalse,LITREF(lit_63),sloc(208),YPfalse);
  T54 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T53 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLproductG)),YPfalse,YPint((P)2),T54,Ynil);
  fun_may_isaQ_46 = YPfab_met(FUNCODEREF(fun_may_isaQ_46),T53,LITREF(lit_56),LITREF(lit_62),sloc(206),YPfalse);
  T57 = VARREF_OR(Ymay_isaQ,YPfalse);
  T58 = fun_may_isaQ_46;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(Ymay_isaQ,T56);
  T59 = YPfalse;
  return T59;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"find-setter", &module_info_gooSclass, NULL},
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
  {"popf", &module_info_gooSmacros, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
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
  {"last", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
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
  {"case-by", &module_info_gooSmacros, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
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
  {"pub", &module_info_gooSmacros, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
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
  {"%prop", &module_info_gooSclass, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
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
  {"rev!", &module_info_gooSmacros, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
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
  {"rotf", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
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
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
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
  {"gensym", &module_info_gooSmacros, NULL},
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
  {"do", &module_info_gooSmacros, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
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
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"pair", &module_info_gooSmacros, NULL},
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
  {"opf", &module_info_gooSmacros, NULL},
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
  {"elt", &module_info_gooSmacros, NULL},
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
  {"class-of", &module_info_gooSclass, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
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
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
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
  {"when", &module_info_gooSmacros, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"t?", CVAR, &YgooStypesYtQ},
  {"t<", CVAR, &YgooStypesYtL},
  {"all2?", CVAR, &YgooStypesYall2Q},
  {"t=", CVAR, &YgooStypesYtE},
  {"t+", CVAR, &YgooStypesYtA},
  {"---main-0---", PVAR, NULL},
  {"$bot", CVAR, &YgooStypesYDbot},
  {"any?", CVAR, &YgooStypesYanyQ},
  {"len", CVAR, &YgooStypesYlen},
  {"as", CVAR, &YgooStypesYas},
  {"---main-2---", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"<bot>", CVAR, &YgooStypesYLbotG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"order-specs", NULL},
  {"t?", NULL},
  {"t<", NULL},
  {"product-elts", NULL},
  {"all2?", NULL},
  {"2nd", NULL},
  {"t=", NULL},
  {"class-direct-props", NULL},
  {"class-children", NULL},
  {"<product>", NULL},
  {"t*", NULL},
  {"may-isa?", NULL},
  {"t+", NULL},
  {"union-elts", NULL},
  {"$bot", NULL},
  {"any?", NULL},
  {"type-class", NULL},
  {"as", NULL},
  {"<union>", NULL},
  {"class-parents", NULL},
  {"class-props", NULL},
  {"<subclass>", NULL},
  {"<singleton>", NULL},
  {"type-object", NULL},
  {"<bot>", NULL},
  {"class-name", NULL},
  {"len", NULL},
  {"subtype?", NULL},
  {"isa?", NULL},
  {"<class>", NULL},
  {"<type>", NULL},
  {"class-ancestors", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooStypes;
MODULE_INFO module_info_gooStypes = {
  "goo/types",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSfun (void);
extern void load_module_gooSclass (void);
extern void load_module_gooSmacros (void);

/* EXPRESSION: */

extern void load_module_gooStypes (void);

void load_module_gooStypes (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();

  (P)YgooStypesY___main_0___();
  (P)YgooStypesY___main_1___();
  (P)YgooStypesY___main_2___();

}

/* END OF GENERATED CODE. */
