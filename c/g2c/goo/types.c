/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/types");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/types */

EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
DEF(YgooStypesYtL,"goo/types","t<");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yclass_id,"goo/boot","class-id");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOfold,"goo/boot","@fold");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Yunexec,"goo/boot","unexec");
DEF(YgooStypesYtA,"goo/types","t+");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfun_code,"goo/boot","fun-code");
DEF(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yprops_of,"goo/boot","props-of");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YOnew,"goo/boot","@new");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
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
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
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
DEF(YgooStypesYas,"goo/types","as");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmacrosYmap,"goo/macros","map");
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
EXT(YOdo,"goo/boot","@do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YOpick,"goo/boot","@pick");
DEF(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YOmap,"goo/boot","@map");
EXT(YLintG,"goo/boot","<int>");
EXT(Yorder_specs,"goo/boot","order-specs");
DEF(YgooStypesYlen,"goo/types","len");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
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
DEF(YgooStypesYtQ,"goo/types","t?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yhead,"goo/boot","head");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YOrev,"goo/boot","@rev");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YLmagG,"goo/boot","<mag>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_59);
DEFLIT(lit_17);
DEFLIT(lit_57);
DEFLIT(lit_23);
DEFLIT(lit_6);
DEFLIT(lit_53);
DEFLIT(lit_9);
DEFLIT(lit_29);
DEFLIT(lit_3);
DEFLIT(lit_41);
DEFLIT(lit_30);
DEFLIT(lit_22);
DEFLIT(lit_43);
DEFLIT(lit_26);
DEFLIT(lit_18);
DEFLIT(lit_40);
DEFLIT(lit_46);
DEFLIT(lit_19);
DEFLIT(lit_4);
DEFLIT(lit_21);
DEFLIT(lit_16);
DEFLIT(lit_35);
DEFLIT(lit_36);
DEFLIT(lit_44);
DEFLIT(lit_5);
DEFLIT(lit_38);
DEFLIT(lit_20);
DEFLIT(lit_49);
DEFLIT(lit_2);
DEFLIT(lit_33);
DEFLIT(lit_42);
DEFLIT(lit_55);
DEFLIT(lit_32);
DEFLIT(lit_8);
DEFLIT(lit_60);
DEFLIT(lit_61);
DEFLIT(lit_37);
DEFLIT(lit_47);
DEFLIT(lit_12);
DEFLIT(lit_7);
DEFLIT(lit_13);
DEFLIT(lit_50);
DEFLIT(lit_27);
DEFLIT(lit_28);
DEFLIT(lit_10);
DEFLIT(lit_63);
DEFLIT(lit_11);
DEFLIT(lit_14);
DEFLIT(lit_45);
DEFLIT(lit_58);
DEFLIT(lit_62);
DEFLIT(lit_24);
DEFLIT(lit_39);
DEFLIT(lit_34);
DEFLIT(lit_0);
DEFLIT(lit_56);
DEFLIT(lit_54);
DEFLIT(lit_31);
DEFLIT(lit_48);
DEFLIT(lit_1);
DEFLIT(lit_25);
DEFLIT(lit_51);
DEFLIT(lit_52);
DEFLIT(lit_15);

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
  P xF2496;
  P T0,T1,T2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = FUNFAB(fun_9,1,t2_);
  xF2496 = t1_;
  T2 = (P)YPprop_elt(xF2496,(P)0);
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
  P xF2497;
  P T0,T1,T2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = FUNFAB(fun_11,1,t1_);
  xF2497 = t2_;
  T2 = (P)YPprop_elt(xF2497,(P)0);
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
  P xF2498;
  P T0,T1,T2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = FUNFAB(fun_13,1,t2_);
  xF2498 = t1_;
  T2 = (P)YPprop_elt(xF2498,(P)0);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_subtypeQ_15) {
  P t1_,t2_;
  P xF2506;
  P xF2505;
  P xF2504;
  P xF2503;
  P xF2502;
  P xF2501;
  P c2F2500;
  P c1F2499;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  c1F2499 = t1_;
  c2F2500 = t2_;
  xF2501 = c1F2499;
  T3 = (P)YPprop_elt(xF2501,(P)11);
  xF2502 = c2F2500;
  T5 = (P)YPprop_elt(xF2502,(P)10);
  xF2503 = T5;
  xF2504 = xF2503;
  T4 = (P)YPiGG(xF2504,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF2505 = YPint((P)1);
  xF2506 = xF2505;
  T6 = (P)YPiGG(xF2506,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_subtypeQ_16) {
  P t1_,t2_;
  P xF2527;
  P xF2526;
  P xF2525;
  P xF2524;
  P xF2523;
  P xF2522;
  P c2F2521;
  P c1F2520;
  P tagF2519;
  P xF2518;
  P xF2517;
  P cF2516;
  P oF2515;
  P yF2514;
  P xF2513;
  P tagF2512;
  P xF2511;
  P xF2510;
  P tF2509;
  P oF2508;
  P xF2507;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF2507 = t1_;
  T23 = (P)YPprop_elt(xF2507,(P)0);
  oF2508 = T23;
  tF2509 = t2_;
  xF2510 = tF2509;
  xF2511 = xF2510;
  T8 = (P)YPiB(xF2511,(P)3);
  tagF2512 = T8;
  T5 = (P)YPiE(tagF2512,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF2510);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF2512);
    T3 = T7;
  }
  xF2513 = T3;
  yF2514 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF2513,yF2514);
  T1 = (P)YPbb(T2);
  if (T2) {
    oF2515 = oF2508;
    cF2516 = tF2509;
    xF2517 = oF2515;
    xF2518 = xF2517;
    T21 = (P)YPiB(xF2518,(P)3);
    tagF2519 = T21;
    T18 = (P)YPiE(tagF2519,(P)0);
    T17 = (P)YPbb(T18);
    if (T18) {
      T19 = (P)YPobject_class(xF2517);
      T16 = T19;
    } else {
      T20 = (P)YPelt(VARREF(YDdirect_object_class),tagF2519);
      T16 = T20;
    }
    c1F2520 = T16;
    c2F2521 = cF2516;
    xF2522 = c1F2520;
    T12 = (P)YPprop_elt(xF2522,(P)11);
    xF2523 = c2F2521;
    T14 = (P)YPprop_elt(xF2523,(P)10);
    xF2524 = T14;
    xF2525 = xF2524;
    T13 = (P)YPiGG(xF2525,(P)2);
    T11 = (P)YPselt(T12,T13);
    xF2526 = YPint((P)1);
    xF2527 = xF2526;
    T15 = (P)YPiGG(xF2527,(P)2);
    T10 = (P)YPiE(T11,T15);
    T9 = (P)YPbb(T10);
    T0 = T9;
  } else {
    T22 = CALL2(1,VARREF(YisaQ),oF2508,tF2509);
    T0 = T22;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_subtypeQ_17) {
  P t1_,t2_;
  P xF2535;
  P xF2534;
  P xF2533;
  P xF2532;
  P xF2531;
  P xF2530;
  P c2F2529;
  P c1F2528;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  c1F2528 = VARREF(YLclassG);
  c2F2529 = t2_;
  xF2530 = c1F2528;
  T3 = (P)YPprop_elt(xF2530,(P)11);
  xF2531 = c2F2529;
  T5 = (P)YPprop_elt(xF2531,(P)10);
  xF2532 = T5;
  xF2533 = xF2532;
  T4 = (P)YPiGG(xF2533,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF2534 = YPint((P)1);
  xF2535 = xF2534;
  T6 = (P)YPiGG(xF2535,(P)2);
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
  P xF2536;
  P T0,T1;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF2536 = t1_;
  T1 = (P)YPprop_elt(xF2536,(P)0);
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
  P yF2541;
  P xF2540;
  P xF2539;
  P yF2538;
  P xF2537;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF2537 = t1_;
  yF2538 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF2537,yF2538);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF2539 = t2_;
    T5 = (P)YPprop_elt(xF2539,(P)0);
    xF2540 = T5;
    yF2541 = VARREF(YLclassG);
    T4 = (P)YPeqQ(xF2540,yF2541);
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
  P xF2551;
  P xF2550;
  P xF2549;
  P xF2548;
  P xF2547;
  P xF2546;
  P c2F2545;
  P c1F2544;
  P xF2543;
  P xF2542;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF2542 = t1_;
  T7 = (P)YPprop_elt(xF2542,(P)0);
  c1F2544 = T7;
  xF2543 = t2_;
  T8 = (P)YPprop_elt(xF2543,(P)0);
  c2F2545 = T8;
  xF2546 = c1F2544;
  T3 = (P)YPprop_elt(xF2546,(P)11);
  xF2547 = c2F2545;
  T5 = (P)YPprop_elt(xF2547,(P)10);
  xF2548 = T5;
  xF2549 = xF2548;
  T4 = (P)YPiGG(xF2549,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF2550 = YPint((P)1);
  xF2551 = xF2550;
  T6 = (P)YPiGG(xF2551,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_subtypeQ_23) {
  P t1_,t2_;
  P xF2582;
  P xF2581;
  P xF2580;
  P xF2579;
  P xF2578;
  P xF2577;
  P c2F2576;
  P c1F2575;
  P xF2574;
  P xF2573;
  P xF2572;
  P xF2571;
  P xF2570;
  P xF2569;
  P xF2568;
  P xF2567;
  P c2F2566;
  P c1F2565;
  P tagF2564;
  P xF2563;
  P xF2562;
  P cF2561;
  P oF2560;
  P yF2559;
  P xF2558;
  P tagF2557;
  P xF2556;
  P xF2555;
  P tF2554;
  P oF2553;
  P xF2552;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF2552 = t1_;
  T24 = (P)YPprop_elt(xF2552,(P)0);
  oF2553 = T24;
  tF2554 = VARREF(YLclassG);
  xF2555 = tF2554;
  xF2556 = xF2555;
  T9 = (P)YPiB(xF2556,(P)3);
  tagF2557 = T9;
  T6 = (P)YPiE(tagF2557,(P)0);
  T5 = (P)YPbb(T6);
  if (T6) {
    T7 = (P)YPobject_class(xF2555);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF2557);
    T4 = T8;
  }
  xF2558 = T4;
  yF2559 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF2558,yF2559);
  T2 = (P)YPbb(T3);
  if (T3) {
    oF2560 = oF2553;
    cF2561 = tF2554;
    xF2562 = oF2560;
    xF2563 = xF2562;
    T22 = (P)YPiB(xF2563,(P)3);
    tagF2564 = T22;
    T19 = (P)YPiE(tagF2564,(P)0);
    T18 = (P)YPbb(T19);
    if (T19) {
      T20 = (P)YPobject_class(xF2562);
      T17 = T20;
    } else {
      T21 = (P)YPelt(VARREF(YDdirect_object_class),tagF2564);
      T17 = T21;
    }
    c1F2565 = T17;
    c2F2566 = cF2561;
    xF2567 = c1F2565;
    T13 = (P)YPprop_elt(xF2567,(P)11);
    xF2568 = c2F2566;
    T15 = (P)YPprop_elt(xF2568,(P)10);
    xF2569 = T15;
    xF2570 = xF2569;
    T14 = (P)YPiGG(xF2570,(P)2);
    T12 = (P)YPselt(T13,T14);
    xF2571 = YPint((P)1);
    xF2572 = xF2571;
    T16 = (P)YPiGG(xF2572,(P)2);
    T11 = (P)YPiE(T12,T16);
    T10 = (P)YPbb(T11);
    T1 = T10;
  } else {
    T23 = CALL2(1,VARREF(YisaQ),oF2553,tF2554);
    T1 = T23;
  }
  if (T1 != YPfalse) {
    xF2573 = t1_;
    T32 = (P)YPprop_elt(xF2573,(P)0);
    c1F2575 = T32;
    xF2574 = t2_;
    T33 = (P)YPprop_elt(xF2574,(P)0);
    c2F2576 = T33;
    xF2577 = c1F2575;
    T28 = (P)YPprop_elt(xF2577,(P)11);
    xF2578 = c2F2576;
    T30 = (P)YPprop_elt(xF2578,(P)10);
    xF2579 = T30;
    xF2580 = xF2579;
    T29 = (P)YPiGG(xF2580,(P)2);
    T27 = (P)YPselt(T28,T29);
    xF2581 = YPint((P)1);
    xF2582 = xF2581;
    T31 = (P)YPiGG(xF2582,(P)2);
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
  P yF2596;
  P xF2595;
  P tF2594;
  P xF2593;
  P xF2592;
  P xF2591;
  P tF2590;
  P xF2589;
  P xF2588;
  P xF2587;
  P teT2F2586;
  P xF2585;
  P teT1F2584;
  P xF2583;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF2583 = t1_;
  T11 = (P)YPprop_elt(xF2583,(P)0);
  teT1F2584 = T11;
  xF2585 = t2_;
  T10 = (P)YPprop_elt(xF2585,(P)0);
  teT2F2586 = T10;
  xF2587 = teT1F2584;
  T5 = (P)YPtlen(xF2587);
  xF2588 = T5;
  xF2589 = xF2588;
  tF2590 = (P)1;
  T4 = (P)YPiLL(xF2589,(P)2);
  T3 = (P)YPiv(T4,tF2590);
  xF2595 = T3;
  xF2591 = teT2F2586;
  T8 = (P)YPtlen(xF2591);
  xF2592 = T8;
  xF2593 = xF2592;
  tF2594 = (P)1;
  T7 = (P)YPiLL(xF2593,(P)2);
  T6 = (P)YPiv(T7,tF2594);
  yF2596 = T6;
  T2 = (P)YPeqQ(xF2595,yF2596);
  T1 = (P)YPbb(T2);
  if (T2) {
    T9 = CALL3(1,VARREF(YOtall2Q),VARREF(YsubtypeQ),teT1F2584,teT2F2586);
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
  P xF2609;
  P xF2608;
  P xF2607;
  P xF2606;
  P xF2605;
  P xF2604;
  P c2F2603;
  P c1F2602;
  P tagF2601;
  P xF2600;
  P xF2599;
  P cF2598;
  P oF2597;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  oF2597 = o_;
  cF2598 = t_;
  xF2599 = oF2597;
  xF2600 = xF2599;
  T12 = (P)YPiB(xF2600,(P)3);
  tagF2601 = T12;
  T9 = (P)YPiE(tagF2601,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF2599);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF2601);
    T7 = T11;
  }
  c1F2602 = T7;
  c2F2603 = cF2598;
  xF2604 = c1F2602;
  T3 = (P)YPprop_elt(xF2604,(P)11);
  xF2605 = c2F2603;
  T5 = (P)YPprop_elt(xF2605,(P)10);
  xF2606 = T5;
  xF2607 = xF2606;
  T4 = (P)YPiGG(xF2607,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF2608 = YPint((P)1);
  xF2609 = xF2608;
  T6 = (P)YPiGG(xF2609,(P)2);
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
  P xF2638;
  P xF2637;
  P xF2636;
  P xF2635;
  P xF2634;
  P xF2633;
  P c2F2632;
  P c1F2631;
  P xF2630;
  P xF2629;
  P xF2628;
  P xF2627;
  P xF2626;
  P xF2625;
  P xF2624;
  P c2F2623;
  P c1F2622;
  P tagF2621;
  P xF2620;
  P xF2619;
  P cF2618;
  P oF2617;
  P yF2616;
  P xF2615;
  P tagF2614;
  P xF2613;
  P xF2612;
  P tF2611;
  P oF2610;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  oF2610 = o_;
  tF2611 = VARREF(YLclassG);
  xF2612 = tF2611;
  xF2613 = xF2612;
  T9 = (P)YPiB(xF2613,(P)3);
  tagF2614 = T9;
  T6 = (P)YPiE(tagF2614,(P)0);
  T5 = (P)YPbb(T6);
  if (T6) {
    T7 = (P)YPobject_class(xF2612);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF2614);
    T4 = T8;
  }
  xF2615 = T4;
  yF2616 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF2615,yF2616);
  T2 = (P)YPbb(T3);
  if (T3) {
    oF2617 = oF2610;
    cF2618 = tF2611;
    xF2619 = oF2617;
    xF2620 = xF2619;
    T22 = (P)YPiB(xF2620,(P)3);
    tagF2621 = T22;
    T19 = (P)YPiE(tagF2621,(P)0);
    T18 = (P)YPbb(T19);
    if (T19) {
      T20 = (P)YPobject_class(xF2619);
      T17 = T20;
    } else {
      T21 = (P)YPelt(VARREF(YDdirect_object_class),tagF2621);
      T17 = T21;
    }
    c1F2622 = T17;
    c2F2623 = cF2618;
    xF2624 = c1F2622;
    T13 = (P)YPprop_elt(xF2624,(P)11);
    xF2625 = c2F2623;
    T15 = (P)YPprop_elt(xF2625,(P)10);
    xF2626 = T15;
    xF2627 = xF2626;
    T14 = (P)YPiGG(xF2627,(P)2);
    T12 = (P)YPselt(T13,T14);
    xF2628 = YPint((P)1);
    xF2629 = xF2628;
    T16 = (P)YPiGG(xF2629,(P)2);
    T11 = (P)YPiE(T12,T16);
    T10 = (P)YPbb(T11);
    T1 = T10;
  } else {
    T23 = CALL2(1,VARREF(YisaQ),oF2610,tF2611);
    T1 = T23;
  }
  if (T1 != YPfalse) {
    c1F2631 = o_;
    xF2630 = t_;
    T31 = (P)YPprop_elt(xF2630,(P)0);
    c2F2632 = T31;
    xF2633 = c1F2631;
    T27 = (P)YPprop_elt(xF2633,(P)11);
    xF2634 = c2F2632;
    T29 = (P)YPprop_elt(xF2634,(P)10);
    xF2635 = T29;
    xF2636 = xF2635;
    T28 = (P)YPiGG(xF2636,(P)2);
    T26 = (P)YPselt(T27,T28);
    xF2637 = YPint((P)1);
    xF2638 = xF2637;
    T30 = (P)YPiGG(xF2638,(P)2);
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
  P xF2658;
  P xF2657;
  P xF2656;
  P xF2655;
  P xF2654;
  P xF2653;
  P c2F2652;
  P c1F2651;
  P tagF2650;
  P xF2649;
  P xF2648;
  P cF2647;
  P oF2646;
  P yF2645;
  P xF2644;
  P tagF2643;
  P xF2642;
  P xF2641;
  P tF2640;
  P oF2639;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(t_, 0);
  oF2639 = FREEREF(0);
  tF2640 = t_;
  xF2641 = tF2640;
  xF2642 = xF2641;
  T8 = (P)YPiB(xF2642,(P)3);
  tagF2643 = T8;
  T5 = (P)YPiE(tagF2643,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF2641);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF2643);
    T3 = T7;
  }
  xF2644 = T3;
  yF2645 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF2644,yF2645);
  T1 = (P)YPbb(T2);
  if (T2) {
    oF2646 = oF2639;
    cF2647 = tF2640;
    xF2648 = oF2646;
    xF2649 = xF2648;
    T21 = (P)YPiB(xF2649,(P)3);
    tagF2650 = T21;
    T18 = (P)YPiE(tagF2650,(P)0);
    T17 = (P)YPbb(T18);
    if (T18) {
      T19 = (P)YPobject_class(xF2648);
      T16 = T19;
    } else {
      T20 = (P)YPelt(VARREF(YDdirect_object_class),tagF2650);
      T16 = T20;
    }
    c1F2651 = T16;
    c2F2652 = cF2647;
    xF2653 = c1F2651;
    T12 = (P)YPprop_elt(xF2653,(P)11);
    xF2654 = c2F2652;
    T14 = (P)YPprop_elt(xF2654,(P)10);
    xF2655 = T14;
    xF2656 = xF2655;
    T13 = (P)YPiGG(xF2656,(P)2);
    T11 = (P)YPselt(T12,T13);
    xF2657 = YPint((P)1);
    xF2658 = xF2657;
    T15 = (P)YPiGG(xF2658,(P)2);
    T10 = (P)YPiE(T11,T15);
    T9 = (P)YPbb(T10);
    T0 = T9;
  } else {
    T22 = CALL2(1,VARREF(YisaQ),oF2639,tF2640);
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_isaQ_32) {
  P o_,u_;
  P xF2659;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(u_, 1);
  T1 = FUNFAB(fun_31,1,o_);
  xF2659 = u_;
  T2 = (P)YPprop_elt(xF2659,(P)0);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_isaQ_33) {
  P o_,t_;
  P yF2671;
  P xF2670;
  P tF2669;
  P xF2668;
  P xF2667;
  P xF2666;
  P tF2665;
  P xF2664;
  P xF2663;
  P xF2662;
  P teTF2661;
  P xF2660;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  xF2660 = t_;
  T12 = (P)YPprop_elt(xF2660,(P)0);
  teTF2661 = T12;
  T1 = CALL2(1,VARREF(YisaQ),o_,VARREF(YLtupG));
  if (T1 != YPfalse) {
    xF2662 = o_;
    T7 = (P)YPtlen(xF2662);
    xF2663 = T7;
    xF2664 = xF2663;
    tF2665 = (P)1;
    T6 = (P)YPiLL(xF2664,(P)2);
    T5 = (P)YPiv(T6,tF2665);
    xF2670 = T5;
    xF2666 = teTF2661;
    T10 = (P)YPtlen(xF2666);
    xF2667 = T10;
    xF2668 = xF2667;
    tF2669 = (P)1;
    T9 = (P)YPiLL(xF2668,(P)2);
    T8 = (P)YPiv(T9,tF2669);
    yF2671 = T8;
    T4 = (P)YPeqQ(xF2670,yF2671);
    T3 = (P)YPbb(T4);
    if (T4) {
      T11 = CALL3(1,VARREF(YOtall2Q),VARREF(YisaQ),o_,teTF2661);
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
  P yF2677;
  P xF2676;
  P c2F2675;
  P xF2674;
  P c1F2673;
  P xF2672;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  xF2672 = t1_;
  T10 = (P)YPprop_elt(xF2672,(P)0);
  c1F2673 = T10;
  xF2674 = t2_;
  T9 = (P)YPprop_elt(xF2674,(P)0);
  c2F2675 = T9;
  xF2676 = c1F2673;
  yF2677 = c2F2675;
  T2 = (P)YPeqQ(xF2676,yF2677);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(YOtup),LITREF(lit_46),t1_);
    T0 = T3;
  } else {
    T5 = CALL3(1,VARREF(YgooSfunYOclassL),c1F2673,c2F2675,arg_);
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
  P yF2679;
  P xF2678;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T2 = CALL2(1,VARREF(YOsubtypeQ),VARREF(YLclassG),t2_);
  if (T2 != YPfalse) {
    xF2678 = t1_;
    yF2679 = VARREF(YLanyG);
    T5 = (P)YPeqQ(xF2678,yF2679);
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
  P yF2681;
  P xF2680;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T2 = CALL2(1,VARREF(YOsubtypeQ),VARREF(YLclassG),t1_);
  if (T2 != YPfalse) {
    xF2680 = t2_;
    yF2681 = VARREF(YLanyG);
    T5 = (P)YPeqQ(xF2680,yF2681);
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
  P xF2689;
  P xF2688;
  P xF2687;
  P xF2686;
  P xF2685;
  P xF2684;
  P c2F2683;
  P c1F2682;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  c1F2682 = c_;
  c2F2683 = t_;
  xF2684 = c1F2682;
  T4 = (P)YPprop_elt(xF2684,(P)11);
  xF2685 = c2F2683;
  T6 = (P)YPprop_elt(xF2685,(P)10);
  xF2686 = T6;
  xF2687 = xF2686;
  T5 = (P)YPiGG(xF2687,(P)2);
  T3 = (P)YPselt(T4,T5);
  xF2688 = YPint((P)1);
  xF2689 = xF2688;
  T7 = (P)YPiGG(xF2689,(P)2);
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
  P tagF2693;
  P xF2692;
  P xF2691;
  P xF2690;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  xF2690 = t_;
  T8 = (P)YPprop_elt(xF2690,(P)0);
  xF2691 = T8;
  xF2692 = xF2691;
  T7 = (P)YPiB(xF2692,(P)3);
  tagF2693 = T7;
  T4 = (P)YPiE(tagF2693,(P)0);
  T3 = (P)YPbb(T4);
  if (T4) {
    T5 = (P)YPobject_class(xF2691);
    T2 = T5;
  } else {
    T6 = (P)YPelt(VARREF(YDdirect_object_class),tagF2693);
    T2 = T6;
  }
  T1 = CALL2(1,VARREF(YOmay_isaQ),T2,c_);
  T0 = CALL2(1,VARREF(YOtup),T1,YPfalse);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_may_isaQ_43) {
  P c_,t_;
  P yF2697;
  P xF2696;
  P xF2695;
  P classQF2694;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  T5 = CALL2(1,VARREF(YOsubtypeQ),c_,VARREF(YLclassG));
  classQF2694 = T5;
  if (classQF2694 != YPfalse) {
    xF2695 = c_;
    T4 = (P)YPprop_elt(xF2695,(P)0);
    xF2696 = T4;
    yF2697 = VARREF(YLanyG);
    T3 = (P)YPeqQ(xF2696,yF2697);
    T2 = (P)YPbb(T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = CALL2(1,VARREF(YOtup),classQF2694,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_may_isaQ_44) {
  P c_,t_;
  P xF2720;
  P xF2719;
  P tmpF2718;
  P tmpF2717;
  P elt_allQF2716;
  P xF2715;
  P xF2714;
  P iF2713;
  P xF2712;
  P elt_someQF2711;
  P xF2710;
  P xF2709;
  P iF2708;
  P xF2707;
  P elt_some_allQF2706;
  P xF2705;
  P xF2704;
  P xF2703;
  P xF2702;
  P eltsF2701;
  P allQF2700;
  P someQF2699;
  P xF2698;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  someQF2699 = YPfalse;
  allQF2700 = YPfalse;
  xF2698 = t_;
  T14 = (P)YPprop_elt(xF2698,(P)0);
  eltsF2701 = T14;
  LOOP_50: {
    P a50_0,a50_1,a50_2;
    xF2702 = eltsF2701;
    xF2703 = xF2702;
    T2 = (P)YPeqQ(xF2703,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL2(1,VARREF(YOtup),someQF2699,allQF2700);
      T0 = T3;
    } else {
      xF2704 = eltsF2701;
      xF2705 = xF2704;
      T13 = (P)YPprop_elt(xF2705,(P)0);
      T12 = CALL2(1,VARREF(YOmay_isaQ),c_,T13);
      elt_some_allQF2706 = T12;
      xF2707 = elt_some_allQF2706;
      iF2708 = YPint((P)0);
      xF2709 = iF2708;
      xF2710 = xF2709;
      T11 = (P)YPiGG(xF2710,(P)2);
      T10 = (P)YPtelt(xF2707,T11);
      elt_someQF2711 = T10;
      xF2712 = elt_some_allQF2706;
      iF2713 = YPint((P)1);
      xF2714 = iF2713;
      xF2715 = xF2714;
      T9 = (P)YPiGG(xF2715,(P)2);
      T8 = (P)YPtelt(xF2712,T9);
      elt_allQF2716 = T8;
      tmpF2717 = elt_someQF2711;
      if (tmpF2717 != YPfalse) {
        T5 = tmpF2717;
      } else {
        T5 = someQF2699;
      }
      tmpF2718 = elt_allQF2716;
      if (tmpF2718 != YPfalse) {
        T6 = tmpF2718;
      } else {
        T6 = allQF2700;
      }
      xF2719 = eltsF2701;
      xF2720 = xF2719;
      T7 = (P)YPprop_elt(xF2720,(P)1);
      a50_0 = T5;
      a50_1 = T6;
      a50_2 = T7;
      someQF2699 = a50_0;
      allQF2700 = a50_1;
      eltsF2701 = a50_2;
      goto LOOP_50;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_45) {
  P t_;
  P xF2724;
  P xF2723;
  P iF2722;
  P xF2721;
  P T0,T1,T2;
LINK_STACK();
  ARG(t_, 0);
  T2 = CALL2(1,VARREF(Ymay_isaQ),VARREF(YLanyG),t_);
  xF2721 = T2;
  iF2722 = YPint((P)1);
  xF2723 = iF2722;
  xF2724 = xF2723;
  T1 = (P)YPiGG(xF2724,(P)2);
  T0 = (P)YPtelt(xF2721,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_may_isaQ_46) {
  P c_,t_;
  P someQF2729;
  P xF2728;
  P tupQF2727;
  P yF2726;
  P xF2725;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  xF2725 = c_;
  yF2726 = VARREF(YLtupG);
  T6 = (P)YPeqQ(xF2725,yF2726);
  T5 = (P)YPbb(T6);
  tupQF2727 = T5;
  if (tupQF2727 != YPfalse) {
    T3 = fun_45;
    xF2728 = t_;
    T4 = (P)YPprop_elt(xF2728,(P)0);
    T2 = CALL2(1,VARREF(YOtanyQ),T3,T4);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  someQF2729 = T1;
  T0 = CALL2(1,VARREF(Ytup),tupQF2727,someQF2729);
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
  YgooStypesYtA = YPfab_met(FUNCODEREF(YgooStypesYtA),T2,LITREF(lit_1),LITREF(lit_2),sloc(54),YPsb((P)"(fun ((args ...)) (new <union> union-elts (@opts-as-lst args)))"));
  T3 = YgooStypesYtA;
  VARSET(YgooStypesYtA,T3);
  lit_3 = YPPsym((P)"t=");
  lit_4 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtE = YPfab_met(FUNCODEREF(YgooStypesYtE),T4,LITREF(lit_3),LITREF(lit_4),sloc(56),YPsb((P)"(fun (x) (new <singleton> type-object x))"));
  T5 = YgooStypesYtE;
  VARSET(YgooStypesYtE,T5);
  lit_5 = YPPsym((P)"t<");
  lit_6 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtL = YPfab_met(FUNCODEREF(YgooStypesYtL),T6,LITREF(lit_5),LITREF(lit_6),sloc(58),YPsb((P)"(fun (x) (new <subclass> type-class x))"));
  T7 = YgooStypesYtL;
  VARSET(YgooStypesYtL,T7);
  lit_7 = YPPsym((P)"t?");
  lit_8 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtQ = YPfab_met(FUNCODEREF(YgooStypesYtQ),T8,LITREF(lit_7),LITREF(lit_8),sloc(60),YPsb((P)"(fun (x) (t+ x (t= #f)))"));
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
  fun_subtypeQ_4 = YPfab_met(FUNCODEREF(fun_subtypeQ_4),T13,LITREF(lit_9),LITREF(lit_11),sloc(71),YPsb((P)"(fun ((t1 <type>) (t2 <bot>) => <log>) #f)"));
  T15 = VARREF_OR(YsubtypeQ,YPfalse);
  T16 = fun_subtypeQ_4;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YsubtypeQ,T14);
  lit_12 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T17 = YPfab_sig(YPPlist(2,VARREF(YLunionG),VARREF(YgooStypesYLbotG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_5 = YPfab_met(FUNCODEREF(fun_subtypeQ_5),T17,LITREF(lit_9),LITREF(lit_12),sloc(72),YPsb((P)"(fun ((t1 <union>) (t2 <bot>) => <log>) #f)"));
  T19 = VARREF_OR(YsubtypeQ,YPfalse);
  T20 = fun_subtypeQ_5;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YsubtypeQ,T18);
  lit_13 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T21 = YPfab_sig(YPPlist(2,VARREF(YgooStypesYLbotG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_6 = YPfab_met(FUNCODEREF(fun_subtypeQ_6),T21,LITREF(lit_9),LITREF(lit_13),sloc(73),YPsb((P)"(fun ((t1 <bot>) (t2 <type>) => <log>) #t)"));
  T23 = VARREF_OR(YsubtypeQ,YPfalse);
  T24 = fun_subtypeQ_6;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YsubtypeQ,T22);
  lit_14 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T25 = YPfab_sig(YPPlist(2,VARREF(YgooStypesYLbotG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_7 = YPfab_met(FUNCODEREF(fun_subtypeQ_7),T25,LITREF(lit_9),LITREF(lit_14),sloc(74),YPsb((P)"(fun ((t1 <bot>) (t2 <union>) => <log>) #t)"));
  T27 = VARREF_OR(YsubtypeQ,YPfalse);
  T28 = fun_subtypeQ_7;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YsubtypeQ,T26);
  lit_15 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T29 = YPfab_sig(YPPlist(2,VARREF(YgooStypesYLbotG),VARREF(YgooStypesYLbotG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_8 = YPfab_met(FUNCODEREF(fun_subtypeQ_8),T29,LITREF(lit_9),LITREF(lit_15),sloc(75),YPsb((P)"(fun ((t1 <bot>) (t2 <bot>) => <log>) #t)"));
  T31 = VARREF_OR(YsubtypeQ,YPfalse);
  T32 = fun_subtypeQ_8;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YsubtypeQ,T30);
  lit_16 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_17 = YPPlist(1,YPPsym((P)"t"));
  T34 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T34,YPfalse,LITREF(lit_17),sloc(78),YPsb((P)"(fun (t) (@subtype? t t2))"));
  T33 = YPfab_sig(YPPlist(2,VARREF(YLunionG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_10 = YPfab_met(FUNCODEREF(fun_subtypeQ_10),T33,LITREF(lit_9),LITREF(lit_16),sloc(77),YPsb((P)"(fun ((t1 <union>) (t2 <type>) => <log>) (@all? (fun (t) (@subtype? t t2)) (%union-elts t1)))"));
  T36 = VARREF_OR(YsubtypeQ,YPfalse);
  T37 = fun_subtypeQ_10;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YsubtypeQ,T35);
  lit_18 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_19 = YPPlist(1,YPPsym((P)"t"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T39,YPfalse,LITREF(lit_19),sloc(80),YPsb((P)"(fun (t) (@subtype? t1 t))"));
  T38 = YPfab_sig(YPPlist(2,VARREF(YLtypeG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_12 = YPfab_met(FUNCODEREF(fun_subtypeQ_12),T38,LITREF(lit_9),LITREF(lit_18),sloc(79),YPsb((P)"(fun ((t1 <type>) (t2 <union>) => <log>) (@any? (fun (t) (@subtype? t1 t)) (%union-elts t2)))"));
  T41 = VARREF_OR(YsubtypeQ,YPfalse);
  T42 = fun_subtypeQ_12;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YsubtypeQ,T40);
  lit_20 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_21 = YPPlist(1,YPPsym((P)"t"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPfab_met(FUNCODEREF(fun_13),T44,YPfalse,LITREF(lit_21),sloc(83),YPsb((P)"(fun (t) (@subtype? t t2))"));
  T43 = YPfab_sig(YPPlist(2,VARREF(YLunionG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_14 = YPfab_met(FUNCODEREF(fun_subtypeQ_14),T43,LITREF(lit_9),LITREF(lit_20),sloc(82),YPsb((P)"(fun ((t1 <union>) (t2 <union>) => <log>) (@all? (fun (t) (@subtype? t t2)) (%union-elts t1)))"));
  T46 = VARREF_OR(YsubtypeQ,YPfalse);
  T47 = fun_subtypeQ_14;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YsubtypeQ,T45);
  lit_22 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T48 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_15 = YPfab_met(FUNCODEREF(fun_subtypeQ_15),T48,LITREF(lit_9),LITREF(lit_22),sloc(85),YPsb((P)"(fun ((t1 <class>) (t2 <class>) => <log>) (@subclass? t1 t2))"));
  T50 = VARREF_OR(YsubtypeQ,YPfalse);
  T51 = fun_subtypeQ_15;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YsubtypeQ,T49);
  lit_23 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YLsingletonG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_16 = YPfab_met(FUNCODEREF(fun_subtypeQ_16),T52,LITREF(lit_9),LITREF(lit_23),sloc(87),YPsb((P)"(fun ((t1 <singleton>) (t2 <class>) => <log>) (@isa? (%type-object t1) t2))"));
  T54 = VARREF_OR(YsubtypeQ,YPfalse);
  T55 = fun_subtypeQ_16;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YsubtypeQ,T53);
  lit_24 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T56 = YPfab_sig(YPPlist(2,VARREF(YLsubclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_17 = YPfab_met(FUNCODEREF(fun_subtypeQ_17),T56,LITREF(lit_9),LITREF(lit_24),sloc(89),YPsb((P)"(fun ((t1 <subclass>) (t2 <class>) => <log>) (@subclass? <class> t2))"));
  T58 = VARREF_OR(YsubtypeQ,YPfalse);
  T59 = fun_subtypeQ_17;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YsubtypeQ,T57);
  lit_25 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T60 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_18 = YPfab_met(FUNCODEREF(fun_subtypeQ_18),T60,LITREF(lit_9),LITREF(lit_25),sloc(92),YPsb((P)"(fun ((t1 <class>) (t2 <singleton>) => <log>) #f)"));
  T62 = VARREF_OR(YsubtypeQ,YPfalse);
  T63 = fun_subtypeQ_18;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YsubtypeQ,T61);
  lit_26 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLsingletonG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_19 = YPfab_met(FUNCODEREF(fun_subtypeQ_19),T64,LITREF(lit_9),LITREF(lit_26),sloc(94),YPsb((P)"(fun ((t1 <singleton>) (t2 <singleton>) => <log>) (@singleton-isa? (%type-object t1) t2))"));
  T66 = VARREF_OR(YsubtypeQ,YPfalse);
  T67 = fun_subtypeQ_19;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YsubtypeQ,T65);
  lit_27 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T68 = YPfab_sig(YPPlist(2,VARREF(YLsubclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_20 = YPfab_met(FUNCODEREF(fun_subtypeQ_20),T68,LITREF(lit_9),LITREF(lit_27),sloc(96),YPsb((P)"(fun ((t1 <subclass>) (t2 <singleton>) => <log>) #f)"));
  T70 = VARREF_OR(YsubtypeQ,YPfalse);
  T71 = fun_subtypeQ_20;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YsubtypeQ,T69);
  lit_28 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T72 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_21 = YPfab_met(FUNCODEREF(fun_subtypeQ_21),T72,LITREF(lit_9),LITREF(lit_28),sloc(99),YPsb((P)"(fun ((t1 <class>) (t2 <subclass>) => <log>) (and (@== t1 <class>) (@== (%type-class t2) <class>)))"));
  T74 = VARREF_OR(YsubtypeQ,YPfalse);
  T75 = fun_subtypeQ_21;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YsubtypeQ,T73);
  lit_29 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T76 = YPfab_sig(YPPlist(2,VARREF(YLsubclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_22 = YPfab_met(FUNCODEREF(fun_subtypeQ_22),T76,LITREF(lit_9),LITREF(lit_29),sloc(101),YPsb((P)"(fun ((t1 <subclass>) (t2 <subclass>) => <log>) (@subclass? (%type-class t1) (%type-class t2)))"));
  T78 = VARREF_OR(YsubtypeQ,YPfalse);
  T79 = fun_subtypeQ_22;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YsubtypeQ,T77);
  lit_30 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T80 = YPfab_sig(YPPlist(2,VARREF(YLsingletonG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_23 = YPfab_met(FUNCODEREF(fun_subtypeQ_23),T80,LITREF(lit_9),LITREF(lit_30),sloc(103),YPsb((P)"(fun ((t1 <singleton>) (t2 <subclass>) => <log>) (and (@isa? (%type-object t1) <class>) (@subclass? (%type-object t1) (%type-class t2))))"));
  T82 = VARREF_OR(YsubtypeQ,YPfalse);
  T83 = fun_subtypeQ_23;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YsubtypeQ,T81);
  lit_31 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T84 = YPfab_sig(YPPlist(2,VARREF(YLproductG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_24 = YPfab_met(FUNCODEREF(fun_subtypeQ_24),T84,LITREF(lit_9),LITREF(lit_31),sloc(106),YPsb((P)"(fun ((t1 <product>) (t2 <type>) => <log>) #f)"));
  T86 = VARREF_OR(YsubtypeQ,YPfalse);
  T87 = fun_subtypeQ_24;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YsubtypeQ,T85);
  lit_32 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T88 = YPfab_sig(YPPlist(2,VARREF(YLtypeG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_25 = YPfab_met(FUNCODEREF(fun_subtypeQ_25),T88,LITREF(lit_9),LITREF(lit_32),sloc(108),YPsb((P)"(fun ((t1 <type>) (t2 <product>) => <log>) #f)"));
  T90 = VARREF_OR(YsubtypeQ,YPfalse);
  T91 = fun_subtypeQ_25;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YsubtypeQ,T89);
  lit_33 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T92 = YPfab_sig(YPPlist(2,VARREF(YLproductG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_26 = YPfab_met(FUNCODEREF(fun_subtypeQ_26),T92,LITREF(lit_9),LITREF(lit_33),sloc(110),YPsb((P)"(fun ((t1 <product>) (t2 <product>) => <log>) (def te*1 (%product-elts t1)) (def te*2 (%product-elts t2)) (and (@== (@tlen te*1) (@tlen te*2)) (@tall2? subtype? te*1 te*2)))"));
  T94 = VARREF_OR(YsubtypeQ,YPfalse);
  T95 = fun_subtypeQ_26;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YsubtypeQ,T93);
  lit_34 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T96 = YPfab_sig(YPPlist(2,VARREF(YLproductG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_27 = YPfab_met(FUNCODEREF(fun_subtypeQ_27),T96,LITREF(lit_9),LITREF(lit_34),sloc(115),YPsb((P)"(fun ((t1 <product>) (t2 <class>) => <log>) (subtype? <tup> t2))"));
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
  fun_isaQ_28 = YPfab_met(FUNCODEREF(fun_isaQ_28),T102,LITREF(lit_35),LITREF(lit_37),sloc(122),YPsb((P)"(fun (o (t <class>) => <log>) (@class-isa? o t))"));
  T104 = VARREF_OR(YisaQ,YPfalse);
  T105 = fun_isaQ_28;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YisaQ,T103);
  lit_38 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T106 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_29 = YPfab_met(FUNCODEREF(fun_isaQ_29),T106,LITREF(lit_35),LITREF(lit_38),sloc(124),YPsb((P)"(fun (o (t <singleton>) => <log>) (@singleton-isa? o t))"));
  T108 = VARREF_OR(YisaQ,YPfalse);
  T109 = fun_isaQ_29;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YisaQ,T107);
  lit_39 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T110 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_30 = YPfab_met(FUNCODEREF(fun_isaQ_30),T110,LITREF(lit_35),LITREF(lit_39),sloc(126),YPsb((P)"(fun (o (t <subclass>) => <log>) (and (@isa? o <class>) (@subclass? o (%type-class t))))"));
  T112 = VARREF_OR(YisaQ,YPfalse);
  T113 = fun_isaQ_30;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YisaQ,T111);
  lit_40 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"u"));
  lit_41 = YPPlist(1,YPPsym((P)"t"));
  T115 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPfab_met(FUNCODEREF(fun_31),T115,YPfalse,LITREF(lit_41),sloc(130),YPsb((P)"(fun (t) (@isa? o t))"));
  T114 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_32 = YPfab_met(FUNCODEREF(fun_isaQ_32),T114,LITREF(lit_35),LITREF(lit_40),sloc(129),YPsb((P)"(fun (o (u <union>) => <log>) (@any? (fun (t) (@isa? o t)) (%union-elts u)))"));
  T117 = VARREF_OR(YisaQ,YPfalse);
  T118 = fun_isaQ_32;
  T116 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T117,T118);
  VARSET(YisaQ,T116);
  lit_42 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T119 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_33 = YPfab_met(FUNCODEREF(fun_isaQ_33),T119,LITREF(lit_35),LITREF(lit_42),sloc(131),YPsb((P)"(fun (o (t <product>) => <log>) (def te* (%product-elts t)) (and (isa? o <tup>) (@== (@tlen o) (@tlen te*)) (@tall2? isa? o te*)))"));
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
  T127 = fun_order_specs_34 = YPfab_met(FUNCODEREF(fun_order_specs_34),T128,LITREF(lit_43),LITREF(lit_45),sloc(141),YPsb((P)"(fun ((t1 <singleton>) (t2 <singleton>) arg => (tup (order <sym>) (canonical-type <type>))) (@tup '= t1))"));
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
  fun_order_specs_35 = YPfab_met(FUNCODEREF(fun_order_specs_35),T0,LITREF(lit_43),LITREF(lit_47),sloc(145),YPsb((P)"(fun ((t1 <singleton>) (t2 <type>) arg => (tup (order <sym>) (canonical-type <type>))) (@tup '< t1))"));
  T3 = VARREF_OR(Yorder_specs,YPfalse);
  T4 = fun_order_specs_35;
  T2 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T3,T4);
  VARSET(Yorder_specs,T2);
  lit_49 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_50 = YPPsym((P)">");
  T6 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T5 = YPfab_sig(YPPlist(3,VARREF(YLsubclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T6,Ynil);
  fun_order_specs_36 = YPfab_met(FUNCODEREF(fun_order_specs_36),T5,LITREF(lit_43),LITREF(lit_49),sloc(149),YPsb((P)"(fun ((t1 <subclass>) (t2 <subclass>) arg => (tup (order <sym>) (canonical-type <type>))) (def c1 (%type-class t1)) (def c2 (%type-class t2)) (cond ((@== c1 c2) (@tup '= t1)) ((@class< c1 c2 arg) (@tup '< t1)) (#t (@tup '> t2))))"));
  T8 = VARREF_OR(Yorder_specs,YPfalse);
  T9 = fun_order_specs_36;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(Yorder_specs,T7);
  lit_51 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_52 = YPPsym((P)"<>");
  T11 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T10 = YPfab_sig(YPPlist(3,VARREF(YLsubclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T11,Ynil);
  fun_order_specs_37 = YPfab_met(FUNCODEREF(fun_order_specs_37),T10,LITREF(lit_43),LITREF(lit_51),sloc(158),YPsb((P)"(fun ((t1 <subclass>) (t2 <class>) arg => (tup (order <sym>) (canonical-type <type>))) (@tup (if (@subtype? <class> t2) (if (@== t1 <any>) (order-specs <class> t2 arg) '<) '<>) t1))"));
  T13 = VARREF_OR(Yorder_specs,YPfalse);
  T14 = fun_order_specs_37;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(Yorder_specs,T12);
  lit_53 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T16 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T15 = YPfab_sig(YPPlist(3,VARREF(YLclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T16,Ynil);
  fun_order_specs_38 = YPfab_met(FUNCODEREF(fun_order_specs_38),T15,LITREF(lit_43),LITREF(lit_53),sloc(167),YPsb((P)"(fun ((t1 <class>) (t2 <subclass>) arg => (tup (order <sym>) (canonical-type <type>))) (@tup (if (@subtype? <class> t1) (if (@== t2 <any>) (order-specs t1 <class> arg) '>) '<>) t2))"));
  T18 = VARREF_OR(Yorder_specs,YPfalse);
  T19 = fun_order_specs_38;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(Yorder_specs,T17);
  lit_54 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T21 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T20 = YPfab_sig(YPPlist(3,VARREF(YLclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T21,Ynil);
  fun_order_specs_39 = YPfab_met(FUNCODEREF(fun_order_specs_39),T20,LITREF(lit_43),LITREF(lit_54),sloc(176),YPsb((P)"(fun ((t1 <class>) (t2 <class>) arg => (tup (order <sym>) (canonical-type <type>))) (@order-specs-class t1 t2 arg))"));
  T23 = VARREF_OR(Yorder_specs,YPfalse);
  T24 = fun_order_specs_39;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(Yorder_specs,T22);
  lit_55 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T26 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T25 = YPfab_sig(YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T26,Ynil);
  fun_order_specs_40 = YPfab_met(FUNCODEREF(fun_order_specs_40),T25,LITREF(lit_43),LITREF(lit_55),sloc(180),YPsb((P)"(fun ((t1 <type>) (t2 <type>) arg => (tup (order <sym>) (canonical-type <type>))) (if (@subtype? t1 t2) (@tup (if (@subtype? t2 t1) '= '<) t1) (if (@subtype? t2 t1) (@tup '> t2) (@tup '<> <any>))))"));
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
  fun_may_isaQ_41 = YPfab_met(FUNCODEREF(fun_may_isaQ_41),T33,LITREF(lit_56),LITREF(lit_58),sloc(191),YPsb((P)"(fun ((c <class>) (t <class>) => (tup (some? <log>) (all? <log>))) (if (@subclass? c t) (@tup #t #t) (@tup #f #f)))"));
  T36 = VARREF_OR(Ymay_isaQ,YPfalse);
  T37 = fun_may_isaQ_41;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(Ymay_isaQ,T35);
  lit_59 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T39 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T38 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),T39,Ynil);
  fun_may_isaQ_42 = YPfab_met(FUNCODEREF(fun_may_isaQ_42),T38,LITREF(lit_56),LITREF(lit_59),sloc(193),YPsb((P)"(fun ((c <class>) (t <singleton>) => (tup (some? <log>) (all? <log>))) (@tup (@may-isa? (%class-of (%type-object t)) c) #f))"));
  T41 = VARREF_OR(Ymay_isaQ,YPfalse);
  T42 = fun_may_isaQ_42;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(Ymay_isaQ,T40);
  lit_60 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T44 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T43 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),T44,Ynil);
  fun_may_isaQ_43 = YPfab_met(FUNCODEREF(fun_may_isaQ_43),T43,LITREF(lit_56),LITREF(lit_60),sloc(195),YPsb((P)"(fun ((c <class>) (t <subclass>) => (tup (some? <log>) (all? <log>))) (def class? (@subtype? c <class>)) (@tup class? (and class? (@== (%type-class c) <any>))))"));
  T46 = VARREF_OR(Ymay_isaQ,YPfalse);
  T47 = fun_may_isaQ_43;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(Ymay_isaQ,T45);
  lit_61 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T49 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T48 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLunionG)),YPfalse,YPint((P)2),T49,Ynil);
  fun_may_isaQ_44 = YPfab_met(FUNCODEREF(fun_may_isaQ_44),T48,LITREF(lit_56),LITREF(lit_61),sloc(198),YPsb((P)"(fun ((c <class>) (t <union>) => (tup (some? <log>) (all? <log>))) (rep loop ((some? #f) (all? #f) (elts (%union-elts t))) (if (@nul? elts) (@tup some? all?) (let ((elt-some-all? (@may-isa? c (@head elts))) (elt-some? (@telt elt-some-all? 0)) (elt-all? (@telt elt-some-all? 1))) (loop (or elt-some? some?) (or elt-all? all?) (@tail elts))))))"));
  T51 = VARREF_OR(Ymay_isaQ,YPfalse);
  T52 = fun_may_isaQ_44;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(Ymay_isaQ,T50);
  lit_62 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  lit_63 = YPPlist(1,YPPsym((P)"t"));
  T55 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPfab_met(FUNCODEREF(fun_45),T55,YPfalse,LITREF(lit_63),sloc(208),YPsb((P)"(fun (t) (@telt (may-isa? <any> t) 1))"));
  T54 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T53 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLproductG)),YPfalse,YPint((P)2),T54,Ynil);
  fun_may_isaQ_46 = YPfab_met(FUNCODEREF(fun_may_isaQ_46),T53,LITREF(lit_56),LITREF(lit_62),sloc(206),YPsb((P)"(fun ((c <class>) (t <product>) => (tup (some? <log>) (all? <log>))) (def tup? (@== c <tup>)) (def some? (and tup? (@tany? (fun (t) (@telt (may-isa? <any> t) 1)) (%product-elts t)))) (tup tup? some?))"));
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
  {"@@==", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
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
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
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
  {"clone", &module_info_gooSclass, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
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
  {"fab-class", &module_info_gooSclass, NULL},
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
  {"opf", &module_info_gooSmacros, NULL},
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
  {"2nd", &module_info_gooSmacros, NULL},
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
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
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
  {"or/set", &module_info_gooSmacros, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
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
  {"swapf", &module_info_gooSmacros, NULL},
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
  {"rev!", &module_info_gooSmacros, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
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
  {"var-name", &module_info_gooSmacros, NULL},
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
  {"map2", &module_info_gooSmacros, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
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
  {"match-atom", &module_info_gooSmacros, NULL},
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
  {"pushf", &module_info_gooSmacros, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
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
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"when", &module_info_gooSmacros, NULL},
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
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"while", &module_info_gooSmacros, NULL},
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
  {"exported", &module_info_gooSmacros, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
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
  {"prop-value", &module_info_gooSclass, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
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
  {"incf", &module_info_gooSmacros, NULL},
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
  {"t<", CVAR, &YgooStypesYtL},
  {"t=", CVAR, &YgooStypesYtE},
  {"---main-0---", PVAR, NULL},
  {"t+", CVAR, &YgooStypesYtA},
  {"all2?", CVAR, &YgooStypesYall2Q},
  {"---main-1---", PVAR, NULL},
  {"---main-2---", PVAR, NULL},
  {"as", CVAR, &YgooStypesYas},
  {"any?", CVAR, &YgooStypesYanyQ},
  {"$bot", CVAR, &YgooStypesYDbot},
  {"<bot>", CVAR, &YgooStypesYLbotG},
  {"len", CVAR, &YgooStypesYlen},
  {"t?", CVAR, &YgooStypesYtQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"t<", NULL},
  {"<singleton>", NULL},
  {"t=", NULL},
  {"may-isa?", NULL},
  {"t+", NULL},
  {"product-elts", NULL},
  {"<class>", NULL},
  {"all2?", NULL},
  {"2nd", NULL},
  {"<type>", NULL},
  {"class-direct-props", NULL},
  {"class-children", NULL},
  {"union-elts", NULL},
  {"as", NULL},
  {"any?", NULL},
  {"type-class", NULL},
  {"class-parents", NULL},
  {"class-props", NULL},
  {"isa?", NULL},
  {"subtype?", NULL},
  {"<bot>", NULL},
  {"t*", NULL},
  {"$bot", NULL},
  {"type-object", NULL},
  {"class-name", NULL},
  {"order-specs", NULL},
  {"len", NULL},
  {"<product>", NULL},
  {"<union>", NULL},
  {"t?", NULL},
  {"class-ancestors", NULL},
  {"<subclass>", NULL},
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
