/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/loc");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/loc */

EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(Yhead,"goo/boot","head");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YPsnul,"goo/boot","%snul");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YPtrue,"goo/boot","%true");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ylst,"goo/boot","lst");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YPfalse,"goo/boot","%false");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YOdo,"goo/boot","@do");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(Ytail,"goo/boot","tail");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YOpick,"goo/boot","@pick");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
DEF(YgooSlocYas_c,"goo/loc","as-c");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YOmap,"goo/boot","@map");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YOlit,"goo/boot","@lit");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YLbignumG,"goo/boot","<bignum>");
DEF(YgooSlocYas_goo,"goo/loc","as-goo");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(Yerror,"goo/boot","error");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YOnew,"goo/boot","@new");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YOfold,"goo/boot","@fold");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Ynew,"goo/boot","new");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOlst,"goo/boot","@lst");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(Ynil,"goo/boot","nil");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YLclassG,"goo/boot","<class>");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_18);
DEFLIT(lit_4);
DEFLIT(lit_17);
DEFLIT(lit_12);
DEFLIT(lit_10);
DEFLIT(lit_6);
DEFLIT(lit_0);
DEFLIT(lit_15);
DEFLIT(lit_9);
DEFLIT(lit_7);
DEFLIT(lit_8);
DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_16);
DEFLIT(lit_14);
DEFLIT(lit_13);
DEFLIT(lit_11);
DEFLIT(lit_5);
DEFLIT(lit_1);

/* FUNCTIONS: */

FUNFOR(YgooSlocYloc_val);
FUNFOR(YgooSlocYloc_val_setter);
LOCFOR(fun_as_c_2);
LOCFOR(fun_as_c_3);
LOCFOR(fun_as_c_4);
LOCFOR(fun_as_c_5);
LOCFOR(fun_as_c_6);
LOCFOR(fun_as_c_7);
LOCFOR(fun_as_goo_8);
LOCFOR(fun_as_goo_9);
LOCFOR(fun_as_goo_10);
LOCFOR(fun_as_goo_11);
LOCFOR(fun_as_goo_12);
extern P YgooSlocY___main_0___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

FUNCODEDEF(YgooSlocYloc_val) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPloc_val(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSlocYloc_val_setter) {
  P z_,x_;
  P T0;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T0 = (P)YPloc_val_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_c_2) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

LOCCODEDEF(fun_as_c_3) {
  P x_;
  P xF3119;
  P xF3118;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF3118 = x_;
  xF3119 = xF3118;
  T0 = (P)YPiGG(xF3119,(P)2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_c_4) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPfu(x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_c_5) {
  P x_;
  P xF3121;
  P xF3120;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF3120 = x_;
  xF3121 = xF3120;
  T0 = (P)YPiGG(xF3121,(P)2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_c_6) {
  P x_;
  P xF3122;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF3122 = x_;
  T0 = (P)YPuntag_into(xF3122);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_c_7) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPsu(x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_goo_8) {
  P t_,x_;
  P tF3125;
  P xF3124;
  P xF3123;
  P T0,T1;
LINK_STACK();
  ARG(t_, 0);
  ARG(x_, 1);
  xF3123 = x_;
  xF3124 = xF3123;
  tF3125 = (P)1;
  T1 = (P)YPiLL(xF3124,(P)2);
  T0 = (P)YPiv(T1,tF3125);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_goo_9) {
  P t_,x_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  ARG(x_, 1);
  T0 = (P)YPfb(x_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_goo_10) {
  P t_,x_;
  P tF3128;
  P xF3127;
  P xF3126;
  P T0,T1;
LINK_STACK();
  ARG(t_, 0);
  ARG(x_, 1);
  xF3126 = x_;
  xF3127 = xF3126;
  tF3128 = (P)2;
  T1 = (P)YPiLL(xF3127,(P)2);
  T0 = (P)YPiv(T1,tF3128);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_goo_11) {
  P t_,x_;
  P xF3129;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  ARG(x_, 1);
  xF3129 = x_;
  T0 = (P)YPtag_into(xF3129,(P)3);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_as_goo_12) {
  P t_,x_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  ARG(x_, 1);
  T0 = (P)YPsb(x_);
UNLINK_STACK();
  QRET(T0);
}

P YgooSlocY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
DEFCREGS();
  lit_0 = YPPsym((P)"loc-val");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSlocYloc_val = YPfab_met(FUNCODEREF(YgooSlocYloc_val),T0,LITREF(lit_0),LITREF(lit_1),sloc(9),YPfalse);
  T1 = YgooSlocYloc_val;
  VARSET(YgooSlocYloc_val,T1);
  lit_2 = YPPsym((P)"loc-val-setter");
  lit_3 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T2 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSlocYloc_val_setter = YPfab_met(FUNCODEREF(YgooSlocYloc_val_setter),T2,LITREF(lit_2),LITREF(lit_3),sloc(12),YPfalse);
  T3 = YgooSlocYloc_val_setter;
  VARSET(YgooSlocYloc_val_setter,T3);
  lit_4 = YPPsym((P)"as-c");
  lit_5 = YPPlist(1,YPPsym((P)"x"));
  T5 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_4),LITREF(lit_5),YPfalse);
  VARSET(YgooSlocYas_c,T4);
  lit_6 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_c_2 = YPfab_met(FUNCODEREF(fun_as_c_2),T6,LITREF(lit_4),LITREF(lit_6),sloc(19),YPfalse);
  T8 = VARREF_OR(YgooSlocYas_c,YPfalse);
  T9 = fun_as_c_2;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSlocYas_c,T7);
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_c_3 = YPfab_met(FUNCODEREF(fun_as_c_3),T10,LITREF(lit_4),LITREF(lit_7),sloc(20),YPfalse);
  T12 = VARREF_OR(YgooSlocYas_c,YPfalse);
  T13 = fun_as_c_3;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSlocYas_c,T11);
  lit_8 = YPPlist(1,YPPsym((P)"x"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_c_4 = YPfab_met(FUNCODEREF(fun_as_c_4),T14,LITREF(lit_4),LITREF(lit_8),sloc(21),YPfalse);
  T16 = VARREF_OR(YgooSlocYas_c,YPfalse);
  T17 = fun_as_c_4;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooSlocYas_c,T15);
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_c_5 = YPfab_met(FUNCODEREF(fun_as_c_5),T18,LITREF(lit_4),LITREF(lit_9),sloc(22),YPfalse);
  T20 = VARREF_OR(YgooSlocYas_c,YPfalse);
  T21 = fun_as_c_5;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YgooSlocYas_c,T19);
  lit_10 = YPPlist(1,YPPsym((P)"x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_c_6 = YPfab_met(FUNCODEREF(fun_as_c_6),T22,LITREF(lit_4),LITREF(lit_10),sloc(23),YPfalse);
  T24 = VARREF_OR(YgooSlocYas_c,YPfalse);
  T25 = fun_as_c_6;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooSlocYas_c,T23);
  lit_11 = YPPlist(1,YPPsym((P)"x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_c_7 = YPfab_met(FUNCODEREF(fun_as_c_7),T26,LITREF(lit_4),LITREF(lit_11),sloc(24),YPfalse);
  T28 = VARREF_OR(YgooSlocYas_c,YPfalse);
  T29 = fun_as_c_7;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSlocYas_c,T27);
  lit_12 = YPPsym((P)"as-goo");
  lit_13 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"x"));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T30 = YPfab_gen(T31,LITREF(lit_12),LITREF(lit_13),YPfalse);
  VARSET(YgooSlocYas_goo,T30);
  lit_14 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"x"));
  T33 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T32 = YPfab_sig(YPPlist(2,T33,VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_as_goo_8 = YPfab_met(FUNCODEREF(fun_as_goo_8),T32,LITREF(lit_12),LITREF(lit_14),sloc(27),YPfalse);
  T35 = VARREF_OR(YgooSlocYas_goo,YPfalse);
  T36 = fun_as_goo_8;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YgooSlocYas_goo,T34);
  lit_15 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"x"));
  T38 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLfloG));
  T37 = YPfab_sig(YPPlist(2,T38,VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_as_goo_9 = YPfab_met(FUNCODEREF(fun_as_goo_9),T37,LITREF(lit_12),LITREF(lit_15),sloc(28),YPfalse);
  T40 = VARREF_OR(YgooSlocYas_goo,YPfalse);
  T41 = fun_as_goo_9;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooSlocYas_goo,T39);
  lit_16 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"x"));
  T43 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLchrG));
  T42 = YPfab_sig(YPPlist(2,T43,VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_as_goo_10 = YPfab_met(FUNCODEREF(fun_as_goo_10),T42,LITREF(lit_12),LITREF(lit_16),sloc(29),YPfalse);
  T45 = VARREF_OR(YgooSlocYas_goo,YPfalse);
  T46 = fun_as_goo_10;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YgooSlocYas_goo,T44);
  lit_17 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"x"));
  T48 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlocG));
  T47 = YPfab_sig(YPPlist(2,T48,VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_as_goo_11 = YPfab_met(FUNCODEREF(fun_as_goo_11),T47,LITREF(lit_12),LITREF(lit_17),sloc(30),YPfalse);
  T50 = VARREF_OR(YgooSlocYas_goo,YPfalse);
  T51 = fun_as_goo_11;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooSlocYas_goo,T49);
  lit_18 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"x"));
  T53 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLstrG));
  T52 = YPfab_sig(YPPlist(2,T53,VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_as_goo_12 = YPfab_met(FUNCODEREF(fun_as_goo_12),T52,LITREF(lit_12),LITREF(lit_18),sloc(31),YPfalse);
  T55 = VARREF_OR(YgooSlocYas_goo,YPfalse);
  T56 = fun_as_goo_12;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YgooSlocYas_goo,T54);
  T57 = YPfalse;
  return T57;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmacros;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooStypes},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"as-c", CVAR, &YgooSlocYas_c},
  {"as-goo", CVAR, &YgooSlocYas_goo},
  {"loc-val", CVAR, &YgooSlocYloc_val},
  {"loc-val-setter", CVAR, &YgooSlocYloc_val_setter},
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"as-c", NULL},
  {"as-goo", NULL},
  {"loc-val-setter", NULL},
  {"loc-val", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSloc;
MODULE_INFO module_info_gooSloc = {
  "goo/loc",
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
extern void load_module_gooStypes (void);

/* EXPRESSION: */

extern void load_module_gooSloc (void);

void load_module_gooSloc (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooStypes();

  (P)YgooSlocY___main_0___();

}

/* END OF GENERATED CODE. */
