/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/types */

EXT(Ysig_names,"goo/boot","sig-names");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YgooStypesYtE,"goo/types","t=");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ytail,"goo/boot","tail");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Ytype_elts,"goo/boot","type-elts");
DEF(YgooStypesY2nd,"goo/types","2nd");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yvec,"goo/boot","vec");
EXT(YPprop,"goo/boot","%prop");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Ynil,"goo/boot","nil");
EXT(YPisa,"goo/boot","%isa");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YPvnul,"goo/boot","%vnul");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YgooStypesYlen,"goo/types","len");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLintG,"goo/boot","<int>");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ylst,"goo/boot","lst");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ynul,"goo/boot","nul");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytup,"goo/boot","tup");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yhead,"goo/boot","head");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOlst,"goo/boot","@lst");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yfun_specs,"goo/boot","fun-specs");
DEF(YgooStypesYas,"goo/types","as");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YgooStypesYtT,"goo/types","t*");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yerror,"goo/boot","error");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YgooStypesYLproductG,"goo/types","<product>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooStypesYtQ,"goo/types","t?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YgooStypesYtL,"goo/types","t<");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_5);
DEFLIT(lit_11);
DEFLIT(lit_4);
DEFLIT(lit_8);
DEFLIT(lit_19);
DEFLIT(lit_18);
DEFLIT(lit_15);
DEFLIT(lit_13);
DEFLIT(lit_16);
DEFLIT(lit_6);
DEFLIT(lit_3);
DEFLIT(lit_14);
DEFLIT(lit_20);
DEFLIT(lit_1);
DEFLIT(lit_2);
DEFLIT(lit_23);
DEFLIT(lit_17);
DEFLIT(lit_10);
DEFLIT(lit_22);
DEFLIT(lit_25);
DEFLIT(lit_26);
DEFLIT(lit_7);
DEFLIT(lit_24);
DEFLIT(lit_9);
DEFLIT(lit_0);
DEFLIT(lit_12);
DEFLIT(lit_21);

/* FUNCTIONS: */

LOCFOR(fun_type_elts_0);
LOCFOR(fun_type_elts_setter_1);
FUNFOR(YgooStypesYtA);
FUNFOR(YgooStypesYtT);
LOCFOR(fun_isaQ_4);
LOCFOR(fun_subtypeQ_5);
LOCFOR(fun_subtypeQ_6);
LOCFOR(fun_subtypeQ_7);
LOCFOR(fun_subtypeQ_8);
LOCFOR(fun_9);
LOCFOR(fun_may_isaQ_10);
FUNFOR(YgooStypesYtE);
FUNFOR(YgooStypesYtL);
FUNFOR(YgooStypesYtQ);
extern P YgooStypesY___main_0___ ();
extern P YgooStypesY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_type_elts_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Ytype_elts));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_type_elts_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Ytype_elts));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooStypesYtA) {
  P args_;
  P T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLunionG),VARREF(Ytype_elts),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooStypesYtT) {
  P args_;
  P T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),args_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooStypesYLproductG),VARREF(Ytype_elts),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_isaQ_4) {
  P o_,t_;
  P tmpF869;
  P tmpF868;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),o_,VARREF(YLtupG));
  tmpF868 = T1;
  if (tmpF868 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),o_);
    T7 = CALL1(1,VARREF(Ytype_elts),t_);
    T6 = CALL1(1,VARREF(YgooStypesYlen),T7);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,T6);
    tmpF869 = T4;
    if (tmpF869 != YPfalse) {
      T10 = CALL1(1,VARREF(Ytype_elts),t_);
      T9 = CALL3(1,VARREF(YgooStypesYall2Q),VARREF(YisaQ),o_,T10);
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T3 = T8;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_5) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_6) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_7) {
  P t1_,t2_;
  P tmpF870;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T3 = CALL1(1,VARREF(Ytype_elts),t1_);
  T2 = CALL1(1,VARREF(YgooStypesYlen),T3);
  T5 = CALL1(1,VARREF(Ytype_elts),t2_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),T5);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,T4);
  tmpF870 = T1;
  if (tmpF870 != YPfalse) {
    T8 = CALL1(1,VARREF(Ytype_elts),t1_);
    T9 = CALL1(1,VARREF(Ytype_elts),t2_);
    T7 = CALL3(1,VARREF(YgooStypesYall2Q),VARREF(YsubtypeQ),T8,T9);
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T0 = T6;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_8) {
  P t1_,t2_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T0 = CALL2(1,VARREF(YsubtypeQ),VARREF(YLtupG),t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_9) {
  P t_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T1 = CALL2(1,VARREF(Ymay_isaQ),VARREF(YLanyG),t_);
  T0 = CALL1(1,VARREF(YgooStypesY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_may_isaQ_10) {
  P c_,t_;
  P someQF873;
  P tmpF872;
  P tupQF871;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),c_,VARREF(YLtupG));
  tupQF871 = T1;
  tmpF872 = tupQF871;
  if (tmpF872 != YPfalse) {
    T6 = fun_9;
    T7 = CALL1(1,VARREF(Ytype_elts),t_);
    T5 = CALL2(1,VARREF(YgooStypesYanyQ),T6,T7);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  someQF873 = T3;
  T8 = CALL2(1,VARREF(Ytup),tupQF871,someQF873);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooStypesYtE) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLsingletonG),VARREF(Ytype_object),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooStypesYtL) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLsubclassG),VARREF(Ytype_class),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooStypesYtQ) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T0 = CALL2(1,VARREF(YgooStypesYtA),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooStypesY___main_0___() {
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
loop:
  lit_0 = YPPsym((P)"<product>");
  T1 = (P)YPpair(VARREF(YLtypeG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooStypesYLproductG,T0);
  lit_1 = YPPsym((P)"type-elts");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YgooStypesYLproductG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_type_elts_0 = YPmet(FUNCODEREF(fun_type_elts_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(Ytype_elts);
  if (T5 != YPfalse) {
    T4 = VARREF(Ytype_elts);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_type_elts_0;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(Ytype_elts,T3);
  lit_3 = YPPsym((P)"type-elts-setter");
  lit_4 = YPPsym((P)"_z");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLtupG),VARREF(YgooStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_elts_setter_1 = YPmet(FUNCODEREF(fun_type_elts_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YgooStypesYtype_elts_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YgooStypesYtype_elts_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_type_elts_setter_1;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YgooStypesYtype_elts_setter,T8);
  CALLN(1,VARREF(YPprop),5,VARREF(YgooStypesYLproductG),VARREF(Ytype_elts),VARREF(YgooStypesYtype_elts_setter),VARREF(YLtupG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"as");
  lit_6 = YPPsym((P)"x");
  lit_7 = YPPsym((P)"y");
  T13 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T12 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYas,T12);
  lit_8 = YPPsym((P)"len");
  T15 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYlen,T14);
  lit_9 = YPPsym((P)"2nd");
  T17 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_9),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesY2nd,T16);
  lit_10 = YPPsym((P)"any?");
  lit_11 = YPPsym((P)"test");
  T19 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_6)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYanyQ,T18);
  lit_12 = YPPsym((P)"all2?");
  T21 = YPsig(YPPlist(3,LITREF(lit_11),LITREF(lit_6),LITREF(lit_7)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T20 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_12),T21,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYall2Q,T20);
  lit_13 = YPPsym((P)"t+");
  lit_14 = YPPsym((P)"args");
  T22 = YPsig(YPPlist(1,LITREF(lit_14)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooStypesYtA = YPmet(FUNCODEREF(YgooStypesYtA),LITREF(lit_13),T22,ENVNUL,PNUL,YPfalse);
  T23 = YgooStypesYtA;
  VARSET(YgooStypesYtA,T23);
  lit_15 = YPPsym((P)"t*");
  T24 = YPsig(YPPlist(1,LITREF(lit_14)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooStypesYtT = YPmet(FUNCODEREF(YgooStypesYtT),LITREF(lit_15),T24,ENVNUL,PNUL,YPfalse);
  T25 = YgooStypesYtT;
  VARSET(YgooStypesYtT,T25);
  lit_16 = YPPsym((P)"isa?");
  lit_17 = YPPsym((P)"o");
  lit_18 = YPPsym((P)"t");
  T28 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_18)),YPPlist(2,VARREF(YLanyG),VARREF(YgooStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T27 = fun_isaQ_4 = YPmet(FUNCODEREF(fun_isaQ_4),LITREF(lit_16),T28,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YisaQ);
  if (T32 != YPfalse) {
    T31 = VARREF(YisaQ);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_isaQ_4;
  T30 = CALL2(1,VARREF(YPdefine_method),T31,T33);
  T29 = VARSET(YisaQ,T30);
  T26 = T29;
  return T26;
}

P YgooStypesY___main_1___() {
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
loop:
  lit_19 = YPPsym((P)"subtype?");
  lit_20 = YPPsym((P)"t1");
  lit_21 = YPPsym((P)"t2");
  T0 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_21)),YPPlist(2,VARREF(YgooStypesYLproductG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_5 = YPmet(FUNCODEREF(fun_subtypeQ_5),LITREF(lit_19),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YsubtypeQ);
  if (T3 != YPfalse) {
    T2 = VARREF(YsubtypeQ);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_subtypeQ_5;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YsubtypeQ,T1);
  T5 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_21)),YPPlist(2,VARREF(YLtypeG),VARREF(YgooStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_6 = YPmet(FUNCODEREF(fun_subtypeQ_6),LITREF(lit_19),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YsubtypeQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YsubtypeQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_subtypeQ_6;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YsubtypeQ,T6);
  T10 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_21)),YPPlist(2,VARREF(YgooStypesYLproductG),VARREF(YgooStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_7 = YPmet(FUNCODEREF(fun_subtypeQ_7),LITREF(lit_19),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YsubtypeQ);
  if (T13 != YPfalse) {
    T12 = VARREF(YsubtypeQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_subtypeQ_7;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YsubtypeQ,T11);
  T15 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_21)),YPPlist(2,VARREF(YgooStypesYLproductG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_8 = YPmet(FUNCODEREF(fun_subtypeQ_8),LITREF(lit_19),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YsubtypeQ);
  if (T18 != YPfalse) {
    T17 = VARREF(YsubtypeQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_subtypeQ_8;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YsubtypeQ,T16);
  lit_22 = YPPsym((P)"may-isa?");
  lit_23 = YPPsym((P)"c");
  T21 = YPsig(YPPlist(1,LITREF(lit_18)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_18)),YPPlist(2,VARREF(YLclassG),VARREF(YgooStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_may_isaQ_10 = YPmet(FUNCODEREF(fun_may_isaQ_10),LITREF(lit_22),T20,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(Ymay_isaQ);
  if (T24 != YPfalse) {
    T23 = VARREF(Ymay_isaQ);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_may_isaQ_10;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(Ymay_isaQ,T22);
  lit_24 = YPPsym((P)"t=");
  T26 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtE = YPmet(FUNCODEREF(YgooStypesYtE),LITREF(lit_24),T26,ENVNUL,PNUL,YPfalse);
  T27 = YgooStypesYtE;
  VARSET(YgooStypesYtE,T27);
  lit_25 = YPPsym((P)"t<");
  T28 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtL = YPmet(FUNCODEREF(YgooStypesYtL),LITREF(lit_25),T28,ENVNUL,PNUL,YPfalse);
  T29 = YgooStypesYtL;
  VARSET(YgooStypesYtL,T29);
  lit_26 = YPPsym((P)"t?");
  T32 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T31 = YgooStypesYtQ = YPmet(FUNCODEREF(YgooStypesYtQ),LITREF(lit_26),T32,ENVNUL,PNUL,YPfalse);
  T34 = YgooStypesYtQ;
  T33 = VARSET(YgooStypesYtQ,T34);
  T30 = T33;
  return T30;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"or", &module_info_gooSmacros, "or"},
  {"%put", &module_info_gooSboot, "%put"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"do", &module_info_gooSmacros, "do"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"vec", &module_info_gooSboot, "vec"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"and", &module_info_gooSmacros, "and"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%get", &module_info_gooSboot, "%get"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fin", &module_info_gooSboot, "fin"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"match", &module_info_gooSmacros, "match"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"new", &module_info_gooSboot, "new"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"df", &module_info_gooSboot, "df"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"def", &module_info_gooSboot, "def"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case", &module_info_gooSmacros, "case"},
  {"set", &module_info_gooSboot, "set"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"lst", &module_info_gooSboot, "lst"},
  {"not", &module_info_gooSboot, "not"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"fun", &module_info_gooSboot, "fun"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"nul", &module_info_gooSboot, "nul"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"tup", &module_info_gooSboot, "tup"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"head", &module_info_gooSboot, "head"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"esc", &module_info_gooSboot, "esc"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"try", &module_info_gooSboot, "try"},
  {"dss", &module_info_gooSboot, "dss"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"when", &module_info_gooSmacros, "when"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"until", &module_info_gooSmacros, "until"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"app", &module_info_gooSmacros, "app"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"map", &module_info_gooSmacros, "map"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"op", &module_info_gooSmacros, "op"},
  {"error", &module_info_gooSboot, "error"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"for", &module_info_gooSmacros, "for"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"export", &module_info_gooSboot, "export"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"dg", &module_info_gooSboot, "dg"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"use", &module_info_gooSboot, "use"},
  {"@len", &module_info_gooSboot, "@len"},
  {"quote", &module_info_gooSboot, "quote"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"@+", &module_info_gooSboot, "@+"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"loc", &module_info_gooSboot, "loc"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"isa", &module_info_gooSboot, "isa"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"t=", &YgooStypesYtE},
  {"any?", &YgooStypesYanyQ},
  {"type-elts-setter", &YgooStypesYtype_elts_setter},
  {"2nd", &YgooStypesY2nd},
  {"len", &YgooStypesYlen},
  {"---main-0---", NULL},
  {"as", &YgooStypesYas},
  {"t*", &YgooStypesYtT},
  {"---main-1---", NULL},
  {"t+", &YgooStypesYtA},
  {"<product>", &YgooStypesYLproductG},
  {"t?", &YgooStypesYtQ},
  {"all2?", &YgooStypesYall2Q},
  {"t<", &YgooStypesYtL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"t=", "t="},
  {"any?", "any?"},
  {"type-elts-setter", "type-elts-setter"},
  {"type-elts", "type-elts"},
  {"2nd", "2nd"},
  {"class-name", "class-name"},
  {"<union>", "<union>"},
  {"class-ancestors", "class-ancestors"},
  {"len", "len"},
  {"<subclass>", "<subclass>"},
  {"isa?", "isa?"},
  {"type-class", "type-class"},
  {"<singleton>", "<singleton>"},
  {"class-direct-props", "class-direct-props"},
  {"as", "as"},
  {"class-descendents", "class-descendents"},
  {"t*", "t*"},
  {"subtype?", "subtype?"},
  {"t+", "t+"},
  {"type-object", "type-object"},
  {"<class>", "<class>"},
  {"<product>", "<product>"},
  {"class-parents", "class-parents"},
  {"t?", "t?"},
  {"<type>", "<type>"},
  {"all2?", "all2?"},
  {"class-props", "class-props"},
  {"t<", "t<"},
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
extern void load_module_gooSmacros (void);

/* EXPRESSION: */

extern void load_module_gooStypes (void);

void load_module_gooStypes (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();

  (P)YgooStypesY___main_0___();
  (P)YgooStypesY___main_1___();

}

/* END OF GENERATED CODE. */
