/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/types");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/types */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YgooStypesYlen,"goo/types","len");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YOelt,"goo/boot","@elt");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YgooStypesYtE,"goo/types","t=");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YgooStypesYtA,"goo/types","t+");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
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
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YLcolG,"goo/boot","<col>");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
DEF(YgooStypesYas,"goo/types","as");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YgooStypesYtL,"goo/types","t<");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
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
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YOdo,"goo/boot","@do");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
DEF(YgooStypesYanyQ,"goo/types","any?");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YOpick,"goo/boot","@pick");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
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
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YOtup,"goo/boot","@tup");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSclassYobject_parents,"goo/class","object-parents");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
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
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YOrev,"goo/boot","@rev");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YgooStypesYtQ,"goo/types","t?");
EXT(Ynew,"goo/boot","new");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_6);
DEFLIT(lit_37);
DEFLIT(lit_47);
DEFLIT(lit_8);
DEFLIT(lit_40);
DEFLIT(lit_52);
DEFLIT(lit_28);
DEFLIT(lit_12);
DEFLIT(lit_38);
DEFLIT(lit_13);
DEFLIT(lit_15);
DEFLIT(lit_30);
DEFLIT(lit_21);
DEFLIT(lit_50);
DEFLIT(lit_19);
DEFLIT(lit_39);
DEFLIT(lit_24);
DEFLIT(lit_34);
DEFLIT(lit_49);
DEFLIT(lit_5);
DEFLIT(lit_27);
DEFLIT(lit_54);
DEFLIT(lit_26);
DEFLIT(lit_1);
DEFLIT(lit_45);
DEFLIT(lit_17);
DEFLIT(lit_44);
DEFLIT(lit_36);
DEFLIT(lit_55);
DEFLIT(lit_57);
DEFLIT(lit_42);
DEFLIT(lit_18);
DEFLIT(lit_31);
DEFLIT(lit_53);
DEFLIT(lit_7);
DEFLIT(lit_25);
DEFLIT(lit_3);
DEFLIT(lit_20);
DEFLIT(lit_11);
DEFLIT(lit_2);
DEFLIT(lit_56);
DEFLIT(lit_35);
DEFLIT(lit_9);
DEFLIT(lit_23);
DEFLIT(lit_46);
DEFLIT(lit_22);
DEFLIT(lit_32);
DEFLIT(lit_0);
DEFLIT(lit_16);
DEFLIT(lit_14);
DEFLIT(lit_29);
DEFLIT(lit_48);
DEFLIT(lit_33);
DEFLIT(lit_10);
DEFLIT(lit_43);
DEFLIT(lit_4);
DEFLIT(lit_51);
DEFLIT(lit_41);

/* FUNCTIONS: */

FUNFOR(YgooStypesYtA);
FUNFOR(YgooStypesYtE);
FUNFOR(YgooStypesYtL);
FUNFOR(YgooStypesYtQ);
LOCFOR(fun_4);
LOCFOR(fun_subtypeQ_5);
LOCFOR(fun_6);
LOCFOR(fun_subtypeQ_7);
LOCFOR(fun_8);
LOCFOR(fun_subtypeQ_9);
LOCFOR(fun_subtypeQ_10);
LOCFOR(fun_subtypeQ_11);
LOCFOR(fun_subtypeQ_12);
LOCFOR(fun_subtypeQ_13);
LOCFOR(fun_subtypeQ_14);
LOCFOR(fun_subtypeQ_15);
LOCFOR(fun_subtypeQ_16);
LOCFOR(fun_subtypeQ_17);
LOCFOR(fun_subtypeQ_18);
LOCFOR(fun_subtypeQ_19);
LOCFOR(fun_subtypeQ_20);
LOCFOR(fun_subtypeQ_21);
LOCFOR(fun_subtypeQ_22);
LOCFOR(fun_isaQ_23);
LOCFOR(fun_isaQ_24);
LOCFOR(fun_isaQ_25);
LOCFOR(fun_26);
LOCFOR(fun_isaQ_27);
LOCFOR(fun_isaQ_28);
LOCFOR(fun_order_specs_29);
LOCFOR(fun_order_specs_30);
LOCFOR(fun_order_specs_31);
LOCFOR(fun_order_specs_32);
LOCFOR(fun_order_specs_33);
LOCFOR(fun_order_specs_34);
LOCFOR(fun_order_specs_35);
LOCFOR(fun_may_isaQ_36);
LOCFOR(fun_may_isaQ_37);
LOCFOR(fun_may_isaQ_38);
LOCFOR(fun_may_isaQ_39);
LOCFOR(fun_40);
LOCFOR(fun_may_isaQ_41);
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

FUNCODEDEF(fun_4) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  T0 = CALL2(1,VARREF(YOsubtypeQ),t_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_subtypeQ_5) {
  P t1_,t2_;
  P xF7502;
  P T0,T1,T2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = FUNFAB(fun_4,1,t2_);
  xF7502 = t1_;
  T2 = (P)YPprop_elt(xF7502,(P)0);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_6) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  T0 = CALL2(1,VARREF(YOsubtypeQ),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_subtypeQ_7) {
  P t1_,t2_;
  P xF7503;
  P T0,T1,T2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = FUNFAB(fun_6,1,t1_);
  xF7503 = t2_;
  T2 = (P)YPprop_elt(xF7503,(P)0);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_8) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  T0 = CALL2(1,VARREF(YOsubtypeQ),t_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_subtypeQ_9) {
  P t1_,t2_;
  P xF7504;
  P T0,T1,T2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = FUNFAB(fun_8,1,t2_);
  xF7504 = t1_;
  T2 = (P)YPprop_elt(xF7504,(P)0);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_10) {
  P t1_,t2_;
  P xF7512;
  P xF7511;
  P xF7510;
  P xF7509;
  P xF7508;
  P xF7507;
  P c2F7506;
  P c1F7505;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  c1F7505 = t1_;
  c2F7506 = t2_;
  xF7507 = c1F7505;
  T3 = (P)YPprop_elt(xF7507,(P)12);
  xF7508 = c2F7506;
  T5 = (P)YPprop_elt(xF7508,(P)11);
  xF7509 = T5;
  xF7510 = xF7509;
  T4 = (P)YPiGG(xF7510,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF7511 = YPint((P)1);
  xF7512 = xF7511;
  T6 = (P)YPiGG(xF7512,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_11) {
  P t1_,t2_;
  P xF7533;
  P xF7532;
  P xF7531;
  P xF7530;
  P xF7529;
  P xF7528;
  P c2F7527;
  P c1F7526;
  P tagF7525;
  P xF7524;
  P xF7523;
  P cF7522;
  P oF7521;
  P yF7520;
  P xF7519;
  P tagF7518;
  P xF7517;
  P xF7516;
  P tF7515;
  P oF7514;
  P xF7513;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF7513 = t1_;
  T23 = (P)YPprop_elt(xF7513,(P)0);
  oF7514 = T23;
  tF7515 = t2_;
  xF7516 = tF7515;
  xF7517 = xF7516;
  T8 = (P)YPiB(xF7517,(P)3);
  tagF7518 = T8;
  T5 = (P)YPiE(tagF7518,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF7516);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF7518);
    T3 = T7;
  }
  xF7519 = T3;
  yF7520 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF7519,yF7520);
  T1 = (P)YPbb(T2);
  if (T2) {
    oF7521 = oF7514;
    cF7522 = tF7515;
    xF7523 = oF7521;
    xF7524 = xF7523;
    T21 = (P)YPiB(xF7524,(P)3);
    tagF7525 = T21;
    T18 = (P)YPiE(tagF7525,(P)0);
    T17 = (P)YPbb(T18);
    if (T18) {
      T19 = (P)YPobject_class(xF7523);
      T16 = T19;
    } else {
      T20 = (P)YPelt(VARREF(YDdirect_object_class),tagF7525);
      T16 = T20;
    }
    c1F7526 = T16;
    c2F7527 = cF7522;
    xF7528 = c1F7526;
    T12 = (P)YPprop_elt(xF7528,(P)12);
    xF7529 = c2F7527;
    T14 = (P)YPprop_elt(xF7529,(P)11);
    xF7530 = T14;
    xF7531 = xF7530;
    T13 = (P)YPiGG(xF7531,(P)2);
    T11 = (P)YPselt(T12,T13);
    xF7532 = YPint((P)1);
    xF7533 = xF7532;
    T15 = (P)YPiGG(xF7533,(P)2);
    T10 = (P)YPiE(T11,T15);
    T9 = (P)YPbb(T10);
    T0 = T9;
  } else {
    T22 = CALL2(1,VARREF(YisaQ),oF7514,tF7515);
    T0 = T22;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_12) {
  P t1_,t2_;
  P xF7541;
  P xF7540;
  P xF7539;
  P xF7538;
  P xF7537;
  P xF7536;
  P c2F7535;
  P c1F7534;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  c1F7534 = VARREF(YLclassG);
  c2F7535 = t2_;
  xF7536 = c1F7534;
  T3 = (P)YPprop_elt(xF7536,(P)12);
  xF7537 = c2F7535;
  T5 = (P)YPprop_elt(xF7537,(P)11);
  xF7538 = T5;
  xF7539 = xF7538;
  T4 = (P)YPiGG(xF7539,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF7540 = YPint((P)1);
  xF7541 = xF7540;
  T6 = (P)YPiGG(xF7541,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_13) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_14) {
  P t1_,t2_;
  P xF7542;
  P T0,T1;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF7542 = t1_;
  T1 = (P)YPprop_elt(xF7542,(P)0);
  T0 = (P)YOsingleton_isaQ(T1,t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_15) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_16) {
  P t1_,t2_;
  P yF7547;
  P xF7546;
  P xF7545;
  P yF7544;
  P xF7543;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF7543 = t1_;
  yF7544 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF7543,yF7544);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF7545 = t2_;
    T5 = (P)YPprop_elt(xF7545,(P)0);
    xF7546 = T5;
    yF7547 = VARREF(YLclassG);
    T4 = (P)YPeqQ(xF7546,yF7547);
    T3 = (P)YPbb(T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_17) {
  P t1_,t2_;
  P xF7557;
  P xF7556;
  P xF7555;
  P xF7554;
  P xF7553;
  P xF7552;
  P c2F7551;
  P c1F7550;
  P xF7549;
  P xF7548;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF7548 = t1_;
  T7 = (P)YPprop_elt(xF7548,(P)0);
  c1F7550 = T7;
  xF7549 = t2_;
  T8 = (P)YPprop_elt(xF7549,(P)0);
  c2F7551 = T8;
  xF7552 = c1F7550;
  T3 = (P)YPprop_elt(xF7552,(P)12);
  xF7553 = c2F7551;
  T5 = (P)YPprop_elt(xF7553,(P)11);
  xF7554 = T5;
  xF7555 = xF7554;
  T4 = (P)YPiGG(xF7555,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF7556 = YPint((P)1);
  xF7557 = xF7556;
  T6 = (P)YPiGG(xF7557,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_18) {
  P t1_,t2_;
  P xF7588;
  P xF7587;
  P xF7586;
  P xF7585;
  P xF7584;
  P xF7583;
  P c2F7582;
  P c1F7581;
  P xF7580;
  P xF7579;
  P xF7578;
  P xF7577;
  P xF7576;
  P xF7575;
  P xF7574;
  P xF7573;
  P c2F7572;
  P c1F7571;
  P tagF7570;
  P xF7569;
  P xF7568;
  P cF7567;
  P oF7566;
  P yF7565;
  P xF7564;
  P tagF7563;
  P xF7562;
  P xF7561;
  P tF7560;
  P oF7559;
  P xF7558;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF7558 = t1_;
  T24 = (P)YPprop_elt(xF7558,(P)0);
  oF7559 = T24;
  tF7560 = VARREF(YLclassG);
  xF7561 = tF7560;
  xF7562 = xF7561;
  T9 = (P)YPiB(xF7562,(P)3);
  tagF7563 = T9;
  T6 = (P)YPiE(tagF7563,(P)0);
  T5 = (P)YPbb(T6);
  if (T6) {
    T7 = (P)YPobject_class(xF7561);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF7563);
    T4 = T8;
  }
  xF7564 = T4;
  yF7565 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF7564,yF7565);
  T2 = (P)YPbb(T3);
  if (T3) {
    oF7566 = oF7559;
    cF7567 = tF7560;
    xF7568 = oF7566;
    xF7569 = xF7568;
    T22 = (P)YPiB(xF7569,(P)3);
    tagF7570 = T22;
    T19 = (P)YPiE(tagF7570,(P)0);
    T18 = (P)YPbb(T19);
    if (T19) {
      T20 = (P)YPobject_class(xF7568);
      T17 = T20;
    } else {
      T21 = (P)YPelt(VARREF(YDdirect_object_class),tagF7570);
      T17 = T21;
    }
    c1F7571 = T17;
    c2F7572 = cF7567;
    xF7573 = c1F7571;
    T13 = (P)YPprop_elt(xF7573,(P)12);
    xF7574 = c2F7572;
    T15 = (P)YPprop_elt(xF7574,(P)11);
    xF7575 = T15;
    xF7576 = xF7575;
    T14 = (P)YPiGG(xF7576,(P)2);
    T12 = (P)YPselt(T13,T14);
    xF7577 = YPint((P)1);
    xF7578 = xF7577;
    T16 = (P)YPiGG(xF7578,(P)2);
    T11 = (P)YPiE(T12,T16);
    T10 = (P)YPbb(T11);
    T1 = T10;
  } else {
    T23 = CALL2(1,VARREF(YisaQ),oF7559,tF7560);
    T1 = T23;
  }
  if (T1 != YPfalse) {
    xF7579 = t1_;
    T32 = (P)YPprop_elt(xF7579,(P)0);
    c1F7581 = T32;
    xF7580 = t2_;
    T33 = (P)YPprop_elt(xF7580,(P)0);
    c2F7582 = T33;
    xF7583 = c1F7581;
    T28 = (P)YPprop_elt(xF7583,(P)12);
    xF7584 = c2F7582;
    T30 = (P)YPprop_elt(xF7584,(P)11);
    xF7585 = T30;
    xF7586 = xF7585;
    T29 = (P)YPiGG(xF7586,(P)2);
    T27 = (P)YPselt(T28,T29);
    xF7587 = YPint((P)1);
    xF7588 = xF7587;
    T31 = (P)YPiGG(xF7588,(P)2);
    T26 = (P)YPiE(T27,T31);
    T25 = (P)YPbb(T26);
    T0 = T25;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_19) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_20) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_21) {
  P t1_,t2_;
  P yF7602;
  P xF7601;
  P tF7600;
  P xF7599;
  P xF7598;
  P xF7597;
  P tF7596;
  P xF7595;
  P xF7594;
  P xF7593;
  P teT2F7592;
  P xF7591;
  P teT1F7590;
  P xF7589;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF7589 = t1_;
  T11 = (P)YPprop_elt(xF7589,(P)0);
  teT1F7590 = T11;
  xF7591 = t2_;
  T10 = (P)YPprop_elt(xF7591,(P)0);
  teT2F7592 = T10;
  xF7593 = teT1F7590;
  T5 = (P)YPtlen(xF7593);
  xF7594 = T5;
  xF7595 = xF7594;
  tF7596 = (P)1;
  T4 = (P)YPiLL(xF7595,(P)2);
  T3 = (P)YPiv(T4,tF7596);
  xF7601 = T3;
  xF7597 = teT2F7592;
  T8 = (P)YPtlen(xF7597);
  xF7598 = T8;
  xF7599 = xF7598;
  tF7600 = (P)1;
  T7 = (P)YPiLL(xF7599,(P)2);
  T6 = (P)YPiv(T7,tF7600);
  yF7602 = T6;
  T2 = (P)YPeqQ(xF7601,yF7602);
  T1 = (P)YPbb(T2);
  if (T2) {
    T9 = CALL3(1,VARREF(YOtall2Q),VARREF(YsubtypeQ),teT1F7590,teT2F7592);
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_22) {
  P t1_,t2_;
  P T0;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T0 = CALL2(1,VARREF(YsubtypeQ),VARREF(YLtupG),t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isaQ_23) {
  P o_,t_;
  P xF7615;
  P xF7614;
  P xF7613;
  P xF7612;
  P xF7611;
  P xF7610;
  P c2F7609;
  P c1F7608;
  P tagF7607;
  P xF7606;
  P xF7605;
  P cF7604;
  P oF7603;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  oF7603 = o_;
  cF7604 = t_;
  xF7605 = oF7603;
  xF7606 = xF7605;
  T12 = (P)YPiB(xF7606,(P)3);
  tagF7607 = T12;
  T9 = (P)YPiE(tagF7607,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF7605);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF7607);
    T7 = T11;
  }
  c1F7608 = T7;
  c2F7609 = cF7604;
  xF7610 = c1F7608;
  T3 = (P)YPprop_elt(xF7610,(P)12);
  xF7611 = c2F7609;
  T5 = (P)YPprop_elt(xF7611,(P)11);
  xF7612 = T5;
  xF7613 = xF7612;
  T4 = (P)YPiGG(xF7613,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF7614 = YPint((P)1);
  xF7615 = xF7614;
  T6 = (P)YPiGG(xF7615,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isaQ_24) {
  P o_,t_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  T0 = (P)YOsingleton_isaQ(o_,t_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isaQ_25) {
  P o_,t_;
  P xF7644;
  P xF7643;
  P xF7642;
  P xF7641;
  P xF7640;
  P xF7639;
  P c2F7638;
  P c1F7637;
  P xF7636;
  P xF7635;
  P xF7634;
  P xF7633;
  P xF7632;
  P xF7631;
  P xF7630;
  P c2F7629;
  P c1F7628;
  P tagF7627;
  P xF7626;
  P xF7625;
  P cF7624;
  P oF7623;
  P yF7622;
  P xF7621;
  P tagF7620;
  P xF7619;
  P xF7618;
  P tF7617;
  P oF7616;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  oF7616 = o_;
  tF7617 = VARREF(YLclassG);
  xF7618 = tF7617;
  xF7619 = xF7618;
  T9 = (P)YPiB(xF7619,(P)3);
  tagF7620 = T9;
  T6 = (P)YPiE(tagF7620,(P)0);
  T5 = (P)YPbb(T6);
  if (T6) {
    T7 = (P)YPobject_class(xF7618);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF7620);
    T4 = T8;
  }
  xF7621 = T4;
  yF7622 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF7621,yF7622);
  T2 = (P)YPbb(T3);
  if (T3) {
    oF7623 = oF7616;
    cF7624 = tF7617;
    xF7625 = oF7623;
    xF7626 = xF7625;
    T22 = (P)YPiB(xF7626,(P)3);
    tagF7627 = T22;
    T19 = (P)YPiE(tagF7627,(P)0);
    T18 = (P)YPbb(T19);
    if (T19) {
      T20 = (P)YPobject_class(xF7625);
      T17 = T20;
    } else {
      T21 = (P)YPelt(VARREF(YDdirect_object_class),tagF7627);
      T17 = T21;
    }
    c1F7628 = T17;
    c2F7629 = cF7624;
    xF7630 = c1F7628;
    T13 = (P)YPprop_elt(xF7630,(P)12);
    xF7631 = c2F7629;
    T15 = (P)YPprop_elt(xF7631,(P)11);
    xF7632 = T15;
    xF7633 = xF7632;
    T14 = (P)YPiGG(xF7633,(P)2);
    T12 = (P)YPselt(T13,T14);
    xF7634 = YPint((P)1);
    xF7635 = xF7634;
    T16 = (P)YPiGG(xF7635,(P)2);
    T11 = (P)YPiE(T12,T16);
    T10 = (P)YPbb(T11);
    T1 = T10;
  } else {
    T23 = CALL2(1,VARREF(YisaQ),oF7616,tF7617);
    T1 = T23;
  }
  if (T1 != YPfalse) {
    c1F7637 = o_;
    xF7636 = t_;
    T31 = (P)YPprop_elt(xF7636,(P)0);
    c2F7638 = T31;
    xF7639 = c1F7637;
    T27 = (P)YPprop_elt(xF7639,(P)12);
    xF7640 = c2F7638;
    T29 = (P)YPprop_elt(xF7640,(P)11);
    xF7641 = T29;
    xF7642 = xF7641;
    T28 = (P)YPiGG(xF7642,(P)2);
    T26 = (P)YPselt(T27,T28);
    xF7643 = YPint((P)1);
    xF7644 = xF7643;
    T30 = (P)YPiGG(xF7644,(P)2);
    T25 = (P)YPiE(T26,T30);
    T24 = (P)YPbb(T25);
    T0 = T24;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_26) {
  P t_;
  P xF7664;
  P xF7663;
  P xF7662;
  P xF7661;
  P xF7660;
  P xF7659;
  P c2F7658;
  P c1F7657;
  P tagF7656;
  P xF7655;
  P xF7654;
  P cF7653;
  P oF7652;
  P yF7651;
  P xF7650;
  P tagF7649;
  P xF7648;
  P xF7647;
  P tF7646;
  P oF7645;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(t_, 0);
  oF7645 = FREEREF(0);
  tF7646 = t_;
  xF7647 = tF7646;
  xF7648 = xF7647;
  T8 = (P)YPiB(xF7648,(P)3);
  tagF7649 = T8;
  T5 = (P)YPiE(tagF7649,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF7647);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF7649);
    T3 = T7;
  }
  xF7650 = T3;
  yF7651 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF7650,yF7651);
  T1 = (P)YPbb(T2);
  if (T2) {
    oF7652 = oF7645;
    cF7653 = tF7646;
    xF7654 = oF7652;
    xF7655 = xF7654;
    T21 = (P)YPiB(xF7655,(P)3);
    tagF7656 = T21;
    T18 = (P)YPiE(tagF7656,(P)0);
    T17 = (P)YPbb(T18);
    if (T18) {
      T19 = (P)YPobject_class(xF7654);
      T16 = T19;
    } else {
      T20 = (P)YPelt(VARREF(YDdirect_object_class),tagF7656);
      T16 = T20;
    }
    c1F7657 = T16;
    c2F7658 = cF7653;
    xF7659 = c1F7657;
    T12 = (P)YPprop_elt(xF7659,(P)12);
    xF7660 = c2F7658;
    T14 = (P)YPprop_elt(xF7660,(P)11);
    xF7661 = T14;
    xF7662 = xF7661;
    T13 = (P)YPiGG(xF7662,(P)2);
    T11 = (P)YPselt(T12,T13);
    xF7663 = YPint((P)1);
    xF7664 = xF7663;
    T15 = (P)YPiGG(xF7664,(P)2);
    T10 = (P)YPiE(T11,T15);
    T9 = (P)YPbb(T10);
    T0 = T9;
  } else {
    T22 = CALL2(1,VARREF(YisaQ),oF7645,tF7646);
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_isaQ_27) {
  P o_,u_;
  P xF7665;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(u_, 1);
  T1 = FUNFAB(fun_26,1,o_);
  xF7665 = u_;
  T2 = (P)YPprop_elt(xF7665,(P)0);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isaQ_28) {
  P o_,t_;
  P yF7677;
  P xF7676;
  P tF7675;
  P xF7674;
  P xF7673;
  P xF7672;
  P tF7671;
  P xF7670;
  P xF7669;
  P xF7668;
  P teTF7667;
  P xF7666;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  xF7666 = t_;
  T12 = (P)YPprop_elt(xF7666,(P)0);
  teTF7667 = T12;
  T1 = CALL2(1,VARREF(YisaQ),o_,VARREF(YLtupG));
  if (T1 != YPfalse) {
    xF7668 = o_;
    T7 = (P)YPtlen(xF7668);
    xF7669 = T7;
    xF7670 = xF7669;
    tF7671 = (P)1;
    T6 = (P)YPiLL(xF7670,(P)2);
    T5 = (P)YPiv(T6,tF7671);
    xF7676 = T5;
    xF7672 = teTF7667;
    T10 = (P)YPtlen(xF7672);
    xF7673 = T10;
    xF7674 = xF7673;
    tF7675 = (P)1;
    T9 = (P)YPiLL(xF7674,(P)2);
    T8 = (P)YPiv(T9,tF7675);
    yF7677 = T8;
    T4 = (P)YPeqQ(xF7676,yF7677);
    T3 = (P)YPbb(T4);
    if (T4) {
      T11 = CALL3(1,VARREF(YOtall2Q),VARREF(YisaQ),o_,teTF7667);
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

FUNCODEDEF(fun_order_specs_29) {
  P t1_,t2_,arg_;
  P T0;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_40),t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_30) {
  P t1_,t2_,arg_;
  P T0;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_42),t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_31) {
  P t1_,t2_,arg_;
  P yF7683;
  P xF7682;
  P c2F7681;
  P xF7680;
  P c1F7679;
  P xF7678;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  xF7678 = t1_;
  T10 = (P)YPprop_elt(xF7678,(P)0);
  c1F7679 = T10;
  xF7680 = t2_;
  T9 = (P)YPprop_elt(xF7680,(P)0);
  c2F7681 = T9;
  xF7682 = c1F7679;
  yF7683 = c2F7681;
  T2 = (P)YPeqQ(xF7682,yF7683);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(YOtup),LITREF(lit_40),t1_);
    T0 = T3;
  } else {
    T5 = CALL3(1,VARREF(YgooSfunYOclassL),c1F7679,c2F7681,arg_);
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YOtup),LITREF(lit_42),t1_);
      T4 = T6;
    } else {
      if (YPtrue != YPfalse) {
        T8 = CALL2(1,VARREF(YOtup),LITREF(lit_44),t2_);
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

FUNCODEDEF(fun_order_specs_32) {
  P t1_,t2_,arg_;
  P yF7685;
  P xF7684;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T2 = CALL2(1,VARREF(YOsubtypeQ),VARREF(YLclassG),t2_);
  if (T2 != YPfalse) {
    xF7684 = t1_;
    yF7685 = VARREF(YLanyG);
    T5 = (P)YPeqQ(xF7684,yF7685);
    T4 = (P)YPbb(T5);
    if (T5) {
      T6 = CALL3(1,VARREF(Yorder_specs),VARREF(YLclassG),t2_,arg_);
      T3 = T6;
    } else {
      T3 = LITREF(lit_42);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_46);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_33) {
  P t1_,t2_,arg_;
  P yF7687;
  P xF7686;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T2 = CALL2(1,VARREF(YOsubtypeQ),VARREF(YLclassG),t1_);
  if (T2 != YPfalse) {
    xF7686 = t2_;
    yF7687 = VARREF(YLanyG);
    T5 = (P)YPeqQ(xF7686,yF7687);
    T4 = (P)YPbb(T5);
    if (T5) {
      T6 = CALL3(1,VARREF(Yorder_specs),t1_,VARREF(YLclassG),arg_);
      T3 = T6;
    } else {
      T3 = LITREF(lit_44);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_46);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_34) {
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

FUNCODEDEF(fun_order_specs_35) {
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
      T3 = LITREF(lit_40);
    } else {
      T3 = LITREF(lit_42);
    }
    T2 = CALL2(1,VARREF(YOtup),T3,t1_);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YOsubtypeQ),t2_,t1_);
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YOtup),LITREF(lit_44),t2_);
      T5 = T7;
    } else {
      T8 = CALL2(1,VARREF(YOtup),LITREF(lit_46),VARREF(YLanyG));
      T5 = T8;
    }
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_36) {
  P c_,t_;
  P xF7695;
  P xF7694;
  P xF7693;
  P xF7692;
  P xF7691;
  P xF7690;
  P c2F7689;
  P c1F7688;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  c1F7688 = c_;
  c2F7689 = t_;
  xF7690 = c1F7688;
  T4 = (P)YPprop_elt(xF7690,(P)12);
  xF7691 = c2F7689;
  T6 = (P)YPprop_elt(xF7691,(P)11);
  xF7692 = T6;
  xF7693 = xF7692;
  T5 = (P)YPiGG(xF7693,(P)2);
  T3 = (P)YPselt(T4,T5);
  xF7694 = YPint((P)1);
  xF7695 = xF7694;
  T7 = (P)YPiGG(xF7695,(P)2);
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

FUNCODEDEF(fun_may_isaQ_37) {
  P c_,t_;
  P tagF7699;
  P xF7698;
  P xF7697;
  P xF7696;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  xF7696 = t_;
  T8 = (P)YPprop_elt(xF7696,(P)0);
  xF7697 = T8;
  xF7698 = xF7697;
  T7 = (P)YPiB(xF7698,(P)3);
  tagF7699 = T7;
  T4 = (P)YPiE(tagF7699,(P)0);
  T3 = (P)YPbb(T4);
  if (T4) {
    T5 = (P)YPobject_class(xF7697);
    T2 = T5;
  } else {
    T6 = (P)YPelt(VARREF(YDdirect_object_class),tagF7699);
    T2 = T6;
  }
  T1 = CALL2(1,VARREF(YOmay_isaQ),T2,c_);
  T0 = CALL2(1,VARREF(YOtup),T1,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_38) {
  P c_,t_;
  P yF7703;
  P xF7702;
  P xF7701;
  P classQF7700;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  T5 = CALL2(1,VARREF(YOsubtypeQ),c_,VARREF(YLclassG));
  classQF7700 = T5;
  if (classQF7700 != YPfalse) {
    xF7701 = c_;
    T4 = (P)YPprop_elt(xF7701,(P)0);
    xF7702 = T4;
    yF7703 = VARREF(YLanyG);
    T3 = (P)YPeqQ(xF7702,yF7703);
    T2 = (P)YPbb(T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = CALL2(1,VARREF(YOtup),classQF7700,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_39) {
  P c_,t_;
  P xF7726;
  P xF7725;
  P tmpF7724;
  P tmpF7723;
  P elt_allQF7722;
  P xF7721;
  P xF7720;
  P iF7719;
  P xF7718;
  P elt_someQF7717;
  P xF7716;
  P xF7715;
  P iF7714;
  P xF7713;
  P elt_some_allQF7712;
  P xF7711;
  P xF7710;
  P xF7709;
  P xF7708;
  P eltsF7707;
  P allQF7706;
  P someQF7705;
  P xF7704;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  someQF7705 = YPfalse;
  allQF7706 = YPfalse;
  xF7704 = t_;
  T14 = (P)YPprop_elt(xF7704,(P)0);
  eltsF7707 = T14;
  LOOP_300: {
    P a300_0,a300_1,a300_2;
    xF7708 = eltsF7707;
    xF7709 = xF7708;
    T2 = (P)YPeqQ(xF7709,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL2(1,VARREF(YOtup),someQF7705,allQF7706);
      T0 = T3;
    } else {
      xF7710 = eltsF7707;
      xF7711 = xF7710;
      T13 = (P)YPprop_elt(xF7711,(P)0);
      T12 = CALL2(1,VARREF(YOmay_isaQ),c_,T13);
      elt_some_allQF7712 = T12;
      xF7713 = elt_some_allQF7712;
      iF7714 = YPint((P)0);
      xF7715 = iF7714;
      xF7716 = xF7715;
      T11 = (P)YPiGG(xF7716,(P)2);
      T10 = (P)YPtelt(xF7713,T11);
      elt_someQF7717 = T10;
      xF7718 = elt_some_allQF7712;
      iF7719 = YPint((P)1);
      xF7720 = iF7719;
      xF7721 = xF7720;
      T9 = (P)YPiGG(xF7721,(P)2);
      T8 = (P)YPtelt(xF7718,T9);
      elt_allQF7722 = T8;
      tmpF7723 = elt_someQF7717;
      if (tmpF7723 != YPfalse) {
        T5 = tmpF7723;
      } else {
        T5 = someQF7705;
      }
      tmpF7724 = elt_allQF7722;
      if (tmpF7724 != YPfalse) {
        T6 = tmpF7724;
      } else {
        T6 = allQF7706;
      }
      xF7725 = eltsF7707;
      xF7726 = xF7725;
      T7 = (P)YPprop_elt(xF7726,(P)1);
      a300_0 = T5;
      a300_1 = T6;
      a300_2 = T7;
      someQF7705 = a300_0;
      allQF7706 = a300_1;
      eltsF7707 = a300_2;
      goto LOOP_300;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_40) {
  P t_;
  P xF7730;
  P xF7729;
  P iF7728;
  P xF7727;
  P T0,T1,T2;
LINK_STACK();
  ARG(t_, 0);
  T2 = CALL2(1,VARREF(Ymay_isaQ),VARREF(YLanyG),t_);
  xF7727 = T2;
  iF7728 = YPint((P)1);
  xF7729 = iF7728;
  xF7730 = xF7729;
  T1 = (P)YPiGG(xF7730,(P)2);
  T0 = (P)YPtelt(xF7727,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_may_isaQ_41) {
  P c_,t_;
  P someQF7735;
  P xF7734;
  P tupQF7733;
  P yF7732;
  P xF7731;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  xF7731 = c_;
  yF7732 = VARREF(YLtupG);
  T6 = (P)YPeqQ(xF7731,yF7732);
  T5 = (P)YPbb(T6);
  tupQF7733 = T5;
  if (tupQF7733 != YPfalse) {
    T3 = fun_40;
    xF7734 = t_;
    T4 = (P)YPprop_elt(xF7734,(P)0);
    T2 = CALL2(1,VARREF(YOtanyQ),T3,T4);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  someQF7735 = T1;
  T0 = CALL2(1,VARREF(Ytup),tupQF7733,someQF7735);
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
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158;
DEFCREGS();
  lit_0 = YPPsym((P)"t+");
  lit_1 = YPPlist(1,YPPsym((P)"args"));
  T0 = YPsig(LITREF(lit_1),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooStypesYtA = YPmet(FUNCODEREF(YgooStypesYtA),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(49));
  T1 = YgooStypesYtA;
  VARSET(YgooStypesYtA,T1);
  lit_2 = YPPsym((P)"t=");
  lit_3 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtE = YPmet(FUNCODEREF(YgooStypesYtE),LITREF(lit_2),T2,ENVNUL,PNUL,sloc(51));
  T3 = YgooStypesYtE;
  VARSET(YgooStypesYtE,T3);
  lit_4 = YPPsym((P)"t<");
  lit_5 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtL = YPmet(FUNCODEREF(YgooStypesYtL),LITREF(lit_4),T4,ENVNUL,PNUL,sloc(53));
  T5 = YgooStypesYtL;
  VARSET(YgooStypesYtL,T5);
  lit_6 = YPPsym((P)"t?");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtQ = YPmet(FUNCODEREF(YgooStypesYtQ),LITREF(lit_6),T6,ENVNUL,PNUL,sloc(55));
  T7 = YgooStypesYtQ;
  VARSET(YgooStypesYtQ,T7);
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
  lit_8 = YPPsym((P)"subtype?");
  lit_9 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T9 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YsubtypeQ,T8);
  lit_10 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_11 = YPPlist(1,YPPsym((P)"t"));
  T11 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T11,ENVNUL,PNUL,sloc(65));
  T10 = YPsig(LITREF(lit_10),YPPlist(2,VARREF(YLunionG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_5 = YPmet(FUNCODEREF(fun_subtypeQ_5),LITREF(lit_8),T10,ENVNUL,PNUL,sloc(64));
  T13 = VARREF_OR(YsubtypeQ,YPfalse);
  T14 = fun_subtypeQ_5;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YsubtypeQ,T12);
  lit_12 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_13 = YPPlist(1,YPPsym((P)"t"));
  T16 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T16,ENVNUL,PNUL,sloc(67));
  T15 = YPsig(LITREF(lit_12),YPPlist(2,VARREF(YLtypeG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_7 = YPmet(FUNCODEREF(fun_subtypeQ_7),LITREF(lit_8),T15,ENVNUL,PNUL,sloc(66));
  T18 = VARREF_OR(YsubtypeQ,YPfalse);
  T19 = fun_subtypeQ_7;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YsubtypeQ,T17);
  lit_14 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_15 = YPPlist(1,YPPsym((P)"t"));
  T21 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T21,ENVNUL,PNUL,sloc(70));
  T20 = YPsig(LITREF(lit_14),YPPlist(2,VARREF(YLunionG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_9 = YPmet(FUNCODEREF(fun_subtypeQ_9),LITREF(lit_8),T20,ENVNUL,PNUL,sloc(69));
  T23 = VARREF_OR(YsubtypeQ,YPfalse);
  T24 = fun_subtypeQ_9;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YsubtypeQ,T22);
  lit_16 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T25 = YPsig(LITREF(lit_16),YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_10 = YPmet(FUNCODEREF(fun_subtypeQ_10),LITREF(lit_8),T25,ENVNUL,PNUL,sloc(72));
  T27 = VARREF_OR(YsubtypeQ,YPfalse);
  T28 = fun_subtypeQ_10;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YsubtypeQ,T26);
  lit_17 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T29 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLsingletonG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_11 = YPmet(FUNCODEREF(fun_subtypeQ_11),LITREF(lit_8),T29,ENVNUL,PNUL,sloc(74));
  T31 = VARREF_OR(YsubtypeQ,YPfalse);
  T32 = fun_subtypeQ_11;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YsubtypeQ,T30);
  lit_18 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T33 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLsubclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_12 = YPmet(FUNCODEREF(fun_subtypeQ_12),LITREF(lit_8),T33,ENVNUL,PNUL,sloc(76));
  T35 = VARREF_OR(YsubtypeQ,YPfalse);
  T36 = fun_subtypeQ_12;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YsubtypeQ,T34);
  lit_19 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T37 = YPsig(LITREF(lit_19),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_13 = YPmet(FUNCODEREF(fun_subtypeQ_13),LITREF(lit_8),T37,ENVNUL,PNUL,sloc(79));
  T39 = VARREF_OR(YsubtypeQ,YPfalse);
  T40 = fun_subtypeQ_13;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YsubtypeQ,T38);
  lit_20 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T41 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_14 = YPmet(FUNCODEREF(fun_subtypeQ_14),LITREF(lit_8),T41,ENVNUL,PNUL,sloc(81));
  T43 = VARREF_OR(YsubtypeQ,YPfalse);
  T44 = fun_subtypeQ_14;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YsubtypeQ,T42);
  lit_21 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T45 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_15 = YPmet(FUNCODEREF(fun_subtypeQ_15),LITREF(lit_8),T45,ENVNUL,PNUL,sloc(83));
  T47 = VARREF_OR(YsubtypeQ,YPfalse);
  T48 = fun_subtypeQ_15;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YsubtypeQ,T46);
  lit_22 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T49 = YPsig(LITREF(lit_22),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_16 = YPmet(FUNCODEREF(fun_subtypeQ_16),LITREF(lit_8),T49,ENVNUL,PNUL,sloc(86));
  T51 = VARREF_OR(YsubtypeQ,YPfalse);
  T52 = fun_subtypeQ_16;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YsubtypeQ,T50);
  lit_23 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T53 = YPsig(LITREF(lit_23),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_17 = YPmet(FUNCODEREF(fun_subtypeQ_17),LITREF(lit_8),T53,ENVNUL,PNUL,sloc(88));
  T55 = VARREF_OR(YsubtypeQ,YPfalse);
  T56 = fun_subtypeQ_17;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YsubtypeQ,T54);
  lit_24 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T57 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_18 = YPmet(FUNCODEREF(fun_subtypeQ_18),LITREF(lit_8),T57,ENVNUL,PNUL,sloc(90));
  T59 = VARREF_OR(YsubtypeQ,YPfalse);
  T60 = fun_subtypeQ_18;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YsubtypeQ,T58);
  lit_25 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T61 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YLproductG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_19 = YPmet(FUNCODEREF(fun_subtypeQ_19),LITREF(lit_8),T61,ENVNUL,PNUL,sloc(93));
  T63 = VARREF_OR(YsubtypeQ,YPfalse);
  T64 = fun_subtypeQ_19;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YsubtypeQ,T62);
  lit_26 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T65 = YPsig(LITREF(lit_26),YPPlist(2,VARREF(YLtypeG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_20 = YPmet(FUNCODEREF(fun_subtypeQ_20),LITREF(lit_8),T65,ENVNUL,PNUL,sloc(95));
  T67 = VARREF_OR(YsubtypeQ,YPfalse);
  T68 = fun_subtypeQ_20;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YsubtypeQ,T66);
  lit_27 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T69 = YPsig(LITREF(lit_27),YPPlist(2,VARREF(YLproductG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_21 = YPmet(FUNCODEREF(fun_subtypeQ_21),LITREF(lit_8),T69,ENVNUL,PNUL,sloc(97));
  T71 = VARREF_OR(YsubtypeQ,YPfalse);
  T72 = fun_subtypeQ_21;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YsubtypeQ,T70);
  lit_28 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T73 = YPsig(LITREF(lit_28),YPPlist(2,VARREF(YLproductG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_22 = YPmet(FUNCODEREF(fun_subtypeQ_22),LITREF(lit_8),T73,ENVNUL,PNUL,sloc(102));
  T75 = VARREF_OR(YsubtypeQ,YPfalse);
  T76 = fun_subtypeQ_22;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YsubtypeQ,T74);
  lit_29 = YPPsym((P)"isa?");
  lit_30 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"t"));
  T78 = YPsig(LITREF(lit_30),YPPlist(2,VARREF(YLanyG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T77 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_29),T78,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YisaQ,T77);
  lit_31 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T79 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_23 = YPmet(FUNCODEREF(fun_isaQ_23),LITREF(lit_29),T79,ENVNUL,PNUL,sloc(109));
  T81 = VARREF_OR(YisaQ,YPfalse);
  T82 = fun_isaQ_23;
  T80 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T81,T82);
  VARSET(YisaQ,T80);
  lit_32 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T83 = YPsig(LITREF(lit_32),YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_24 = YPmet(FUNCODEREF(fun_isaQ_24),LITREF(lit_29),T83,ENVNUL,PNUL,sloc(111));
  T85 = VARREF_OR(YisaQ,YPfalse);
  T86 = fun_isaQ_24;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YisaQ,T84);
  lit_33 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T87 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLanyG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_25 = YPmet(FUNCODEREF(fun_isaQ_25),LITREF(lit_29),T87,ENVNUL,PNUL,sloc(113));
  T89 = VARREF_OR(YisaQ,YPfalse);
  T90 = fun_isaQ_25;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YisaQ,T88);
  lit_34 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"u"));
  lit_35 = YPPlist(1,YPPsym((P)"t"));
  T92 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T92,ENVNUL,PNUL,sloc(117));
  T91 = YPsig(LITREF(lit_34),YPPlist(2,VARREF(YLanyG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_27 = YPmet(FUNCODEREF(fun_isaQ_27),LITREF(lit_29),T91,ENVNUL,PNUL,sloc(116));
  T94 = VARREF_OR(YisaQ,YPfalse);
  T95 = fun_isaQ_27;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YisaQ,T93);
  lit_36 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T96 = YPsig(LITREF(lit_36),YPPlist(2,VARREF(YLanyG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_28 = YPmet(FUNCODEREF(fun_isaQ_28),LITREF(lit_29),T96,ENVNUL,PNUL,sloc(118));
  T98 = VARREF_OR(YisaQ,YPfalse);
  T99 = fun_isaQ_28;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YisaQ,T97);
  lit_37 = YPPsym((P)"order-specs");
  lit_38 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T102 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T101 = YPsig(LITREF(lit_38),YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T102,Ynil);
  T100 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_37),T101,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yorder_specs,T100);
  lit_39 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_40 = YPPsym((P)"=");
  T104 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T103 = YPsig(LITREF(lit_39),YPPlist(3,VARREF(YLsingletonG),VARREF(YLsingletonG),VARREF(YLanyG)),YPfalse,YPint((P)3),T104,Ynil);
  fun_order_specs_29 = YPmet(FUNCODEREF(fun_order_specs_29),LITREF(lit_37),T103,ENVNUL,PNUL,sloc(128));
  T106 = VARREF_OR(Yorder_specs,YPfalse);
  T107 = fun_order_specs_29;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(Yorder_specs,T105);
  lit_41 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_42 = YPPsym((P)"<");
  T109 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T108 = YPsig(LITREF(lit_41),YPPlist(3,VARREF(YLsingletonG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T109,Ynil);
  fun_order_specs_30 = YPmet(FUNCODEREF(fun_order_specs_30),LITREF(lit_37),T108,ENVNUL,PNUL,sloc(132));
  T111 = VARREF_OR(Yorder_specs,YPfalse);
  T112 = fun_order_specs_30;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(Yorder_specs,T110);
  lit_43 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_44 = YPPsym((P)">");
  T114 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T113 = YPsig(LITREF(lit_43),YPPlist(3,VARREF(YLsubclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T114,Ynil);
  fun_order_specs_31 = YPmet(FUNCODEREF(fun_order_specs_31),LITREF(lit_37),T113,ENVNUL,PNUL,sloc(136));
  T116 = VARREF_OR(Yorder_specs,YPfalse);
  T117 = fun_order_specs_31;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(Yorder_specs,T115);
  lit_45 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_46 = YPPsym((P)"<>");
  T119 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T118 = YPsig(LITREF(lit_45),YPPlist(3,VARREF(YLsubclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T119,Ynil);
  fun_order_specs_32 = YPmet(FUNCODEREF(fun_order_specs_32),LITREF(lit_37),T118,ENVNUL,PNUL,sloc(145));
  T121 = VARREF_OR(Yorder_specs,YPfalse);
  T122 = fun_order_specs_32;
  T120 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T121,T122);
  VARSET(Yorder_specs,T120);
  lit_47 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T124 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T123 = YPsig(LITREF(lit_47),YPPlist(3,VARREF(YLclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T124,Ynil);
  fun_order_specs_33 = YPmet(FUNCODEREF(fun_order_specs_33),LITREF(lit_37),T123,ENVNUL,PNUL,sloc(154));
  T126 = VARREF_OR(Yorder_specs,YPfalse);
  T127 = fun_order_specs_33;
  T125 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T126,T127);
  VARSET(Yorder_specs,T125);
  lit_48 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T129 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T128 = YPsig(LITREF(lit_48),YPPlist(3,VARREF(YLclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T129,Ynil);
  fun_order_specs_34 = YPmet(FUNCODEREF(fun_order_specs_34),LITREF(lit_37),T128,ENVNUL,PNUL,sloc(163));
  T131 = VARREF_OR(Yorder_specs,YPfalse);
  T132 = fun_order_specs_34;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(Yorder_specs,T130);
  lit_49 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T134 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T133 = YPsig(LITREF(lit_49),YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T134,Ynil);
  fun_order_specs_35 = YPmet(FUNCODEREF(fun_order_specs_35),LITREF(lit_37),T133,ENVNUL,PNUL,sloc(167));
  T136 = VARREF_OR(Yorder_specs,YPfalse);
  T137 = fun_order_specs_35;
  T135 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T136,T137);
  VARSET(Yorder_specs,T135);
  lit_50 = YPPsym((P)"may-isa?");
  lit_51 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T140 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T139 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),T140,Ynil);
  T138 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_50),T139,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ymay_isaQ,T138);
  lit_52 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T142 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T141 = YPsig(LITREF(lit_52),YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),T142,Ynil);
  fun_may_isaQ_36 = YPmet(FUNCODEREF(fun_may_isaQ_36),LITREF(lit_50),T141,ENVNUL,PNUL,sloc(178));
  T144 = VARREF_OR(Ymay_isaQ,YPfalse);
  T145 = fun_may_isaQ_36;
  T143 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T144,T145);
  VARSET(Ymay_isaQ,T143);
  lit_53 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T147 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T146 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),T147,Ynil);
  fun_may_isaQ_37 = YPmet(FUNCODEREF(fun_may_isaQ_37),LITREF(lit_50),T146,ENVNUL,PNUL,sloc(180));
  T149 = VARREF_OR(Ymay_isaQ,YPfalse);
  T150 = fun_may_isaQ_37;
  T148 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T149,T150);
  VARSET(Ymay_isaQ,T148);
  lit_54 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T154 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T153 = YPsig(LITREF(lit_54),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),T154,Ynil);
  T152 = fun_may_isaQ_38 = YPmet(FUNCODEREF(fun_may_isaQ_38),LITREF(lit_50),T153,ENVNUL,PNUL,sloc(182));
  T157 = VARREF_OR(Ymay_isaQ,YPfalse);
  T158 = fun_may_isaQ_38;
  T156 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T157,T158);
  T155 = VARSET(Ymay_isaQ,T156);
  T151 = T155;
  return T151;
}

P YgooStypesY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
DEFCREGS();
  lit_55 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T1 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T0 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YLclassG),VARREF(YLunionG)),YPfalse,YPint((P)2),T1,Ynil);
  fun_may_isaQ_39 = YPmet(FUNCODEREF(fun_may_isaQ_39),LITREF(lit_50),T0,ENVNUL,PNUL,sloc(185));
  T3 = VARREF_OR(Ymay_isaQ,YPfalse);
  T4 = fun_may_isaQ_39;
  T2 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T3,T4);
  VARSET(Ymay_isaQ,T2);
  lit_56 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  lit_57 = YPPlist(1,YPPsym((P)"t"));
  T7 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T7,ENVNUL,PNUL,sloc(195));
  T6 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T5 = YPsig(LITREF(lit_56),YPPlist(2,VARREF(YLclassG),VARREF(YLproductG)),YPfalse,YPint((P)2),T6,Ynil);
  fun_may_isaQ_41 = YPmet(FUNCODEREF(fun_may_isaQ_41),LITREF(lit_50),T5,ENVNUL,PNUL,sloc(193));
  T9 = VARREF_OR(Ymay_isaQ,YPfalse);
  T10 = fun_may_isaQ_41;
  T8 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T9,T10);
  VARSET(Ymay_isaQ,T8);
  T11 = YPfalse;
  return T11;
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
  {"add-prop", &module_info_gooSclass, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
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
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
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
  {"dlet", &module_info_gooSmacros, NULL},
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
  {"opf", &module_info_gooSmacros, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
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
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
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
  {"when", &module_info_gooSmacros, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
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
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
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
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
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
  {"fab-class", &module_info_gooSclass, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
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
  {"and", &module_info_gooSmacros, NULL},
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
  {"until", &module_info_gooSmacros, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
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
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
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
  {"last", &module_info_gooSmacros, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
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
  {"gensym", &module_info_gooSmacros, NULL},
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
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
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
  {"object-parents", &module_info_gooSclass, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
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
  {"app-sup", &module_info_gooSmacros, NULL},
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
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
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
  {"elt", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"incf", &module_info_gooSmacros, NULL},
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
  {"len", CVAR, &YgooStypesYlen},
  {"t=", CVAR, &YgooStypesYtE},
  {"t+", CVAR, &YgooStypesYtA},
  {"---main-0---", PVAR, NULL},
  {"as", CVAR, &YgooStypesYas},
  {"t<", CVAR, &YgooStypesYtL},
  {"any?", CVAR, &YgooStypesYanyQ},
  {"---main-1---", PVAR, NULL},
  {"all2?", CVAR, &YgooStypesYall2Q},
  {"---main-2---", PVAR, NULL},
  {"t?", CVAR, &YgooStypesYtQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<class>", NULL},
  {"class-direct-props", NULL},
  {"class-children", NULL},
  {"len", NULL},
  {"<type>", NULL},
  {"type-class", NULL},
  {"t=", NULL},
  {"type-object", NULL},
  {"t+", NULL},
  {"class-parents", NULL},
  {"class-props", NULL},
  {"as", NULL},
  {"isa?", NULL},
  {"class-name", NULL},
  {"t<", NULL},
  {"order-specs", NULL},
  {"any?", NULL},
  {"<product>", NULL},
  {"t*", NULL},
  {"<union>", NULL},
  {"class-ancestors", NULL},
  {"<subclass>", NULL},
  {"product-elts", NULL},
  {"<singleton>", NULL},
  {"may-isa?", NULL},
  {"all2?", NULL},
  {"2nd", NULL},
  {"subtype?", NULL},
  {"union-elts", NULL},
  {"t?", NULL},
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
