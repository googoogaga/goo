/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/types */

EXT(YLnumG,"boot","<num>");
EXT(YLvecG,"boot","<vec>");
EXT(Yprop_getter,"boot","prop-getter");
EXT(Yunexec,"boot","unexec");
EXT(Ytype_error,"boot","type-error");
EXT(Yclass_direct_props,"boot","class-direct-props");
EXT(YmacrosYgensym,"macros","gensym");
EXT(Yvec,"boot","vec");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YLmetG,"boot","<met>");
EXT(Yprop_init,"boot","prop-init");
EXT(YLsubclassG,"boot","<subclass>");
DEF(YprotoStypesYtA,"proto/types","t+");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(Yclass_descendents,"boot","class-descendents");
EXT(Ygen_refs_setter,"boot","gen-refs-setter");
EXT(YLchrG,"boot","<chr>");
EXT(YLflatG,"boot","<flat>");
EXT(YsubtypeQ,"boot","subtype?");
EXT(Yprop_value_setter,"boot","prop-value-setter");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ygen_refs,"boot","gen-refs");
EXT(Ynot,"boot","not");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YLtupG,"boot","<tup>");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YOlst,"boot","@lst");
EXT(YPvnul,"boot","%vnul");
EXT(YLfunG,"boot","<fun>");
EXT(YmacrosYmap,"macros","map");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
DEF(YprotoStypesYtQ,"proto/types","t?");
DEF(YprotoStypesYall2Q,"proto/types","all2?");
EXT(Ysig_val,"boot","sig-val");
EXT(Yprop_boundQ,"boot","prop-bound?");
EXT(YLlstG,"boot","<lst>");
EXT(YLlogG,"boot","<log>");
EXT(Ytype_object,"boot","type-object");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(Yfab_class,"boot","fab-class");
EXT(Yfun_specs,"boot","fun-specs");
EXT(Ysym_name,"boot","sym-name");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(Yfun_name,"boot","fun-name");
EXT(Yprop_owner,"boot","prop-owner");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YmacrosYfab_setter_name,"macros","fab-setter-name");
DEF(YprotoStypesYtL,"proto/types","t<");
EXT(Yobject_class,"boot","object-class");
EXT(Yclass_parents,"boot","class-parents");
EXT(YTreport_prop_unbound_errorsQT,"boot","*report-prop-unbound-errors?*");
EXT(Yprop_value,"boot","prop-value");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLseqG,"boot","<seq>");
EXT(YLanyG,"boot","<any>");
EXT(Yprop_type,"boot","prop-type");
EXT(YmacrosYvar_type,"macros","var-type");
DEF(YprotoStypesYanyQ,"proto/types","any?");
EXT(Yclass_props,"boot","class-props");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
DEF(YprotoStypesYtE,"proto/types","t=");
EXT(Yerror,"boot","error");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YLsigG,"boot","<sig>");
EXT(YPprop_unbound_error,"boot","%prop-unbound-error");
EXT(YPsymbols,"boot","%symbols");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfun_names,"boot","fun-names");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YOall2Q,"boot","@all2?");
DEF(YprotoStypesY2nd,"proto/types","2nd");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YLcolG,"boot","<col>");
EXT(YLclassG,"boot","<class>");
EXT(YLmagG,"boot","<mag>");
EXT(YDmax_int,"boot","$max-int");
EXT(Yfind_setter,"boot","find-setter");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(Ytail_setter,"boot","tail-setter");
DEF(YprotoStypesYLproductG,"proto/types","<product>");
EXT(YPsnul,"boot","%snul");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YmacrosYcat,"macros","cat");
EXT(Yadd_prop,"boot","add-prop");
DEF(YprotoStypesYlen,"proto/types","len");
DEF(YprotoStypesYtype_elts_setter,"proto/types","type-elts-setter");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YLoptsG,"boot","<opts>");
EXT(Ytail,"boot","tail");
EXT(YLtypeG,"boot","<type>");
EXT(YmacrosYnapp,"macros","napp");
EXT(YLlocG,"boot","<loc>");
EXT(Yord_app_mets,"boot","ord-app-mets");
EXT(Ytype_elts,"boot","type-elts");
EXT(Yclass_name,"boot","class-name");
EXT(YPPmacro,"boot","%%macro");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yprop_setter,"boot","prop-setter");
EXT(Ynul,"boot","nul");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Yfun_val,"boot","fun-val");
EXT(Yclass_ancestors,"boot","class-ancestors");
EXT(YDmin_int,"boot","$min-int");
EXT(YmacrosYpair,"macros","pair");
EXT(YLfloG,"boot","<flo>");
EXT(YLsymG,"boot","<sym>");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YmacrosYelt,"macros","elt");
DEF(YprotoStypesYas,"proto/types","as");
EXT(Yfun_mets,"boot","fun-mets");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ygen_src_setter,"boot","gen-src-setter");
EXT(YmacrosYdo,"macros","do");
EXT(YOisaQ,"boot","@isa?");
EXT(YLpropG,"boot","<prop>");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YLgenG,"boot","<gen>");
EXT(Ynil,"boot","nil");
EXT(Ygen_src,"boot","gen-src");
EXT(Ynew,"boot","new");
EXT(Yobject_props,"boot","object-props");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLintG,"boot","<int>");
EXT(YLstrG,"boot","<str>");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYcat_sym,"macros","cat-sym");
EXT(YmacrosYEE,"macros","==");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
EXT(YmacrosYrevX,"macros","rev!");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yhead_setter,"boot","head-setter");
EXT(Ytype_class,"boot","type-class");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(Ylst,"boot","lst");
EXT(Ytup,"boot","tup");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YisaQ,"boot","isa?");
EXT(YLunionG,"boot","<union>");
EXT(YPprop,"boot","%prop");
DEF(YprotoStypesYtT,"proto/types","t*");
EXT(YPisa,"boot","%isa");
EXT(Yhead,"boot","head");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_5);
DEFLIT(lit_15);
DEFLIT(lit_18);
DEFLIT(lit_10);
DEFLIT(lit_16);
DEFLIT(lit_22);
DEFLIT(lit_24);
DEFLIT(lit_23);
DEFLIT(lit_4);
DEFLIT(lit_11);
DEFLIT(lit_21);
DEFLIT(lit_14);
DEFLIT(lit_9);
DEFLIT(lit_8);
DEFLIT(lit_6);
DEFLIT(lit_19);
DEFLIT(lit_26);
DEFLIT(lit_25);
DEFLIT(lit_2);
DEFLIT(lit_12);
DEFLIT(lit_13);
DEFLIT(lit_3);
DEFLIT(lit_0);
DEFLIT(lit_20);
DEFLIT(lit_1);
DEFLIT(lit_17);
DEFLIT(lit_7);

/* FUNCTIONS: */

LOCFOR(fun_type_elts_0);
LOCFOR(fun_type_elts_setter_1);
FUNFOR(YprotoStypesYtA);
FUNFOR(YprotoStypesYtT);
LOCFOR(fun_isaQ_4);
LOCFOR(fun_subtypeQ_5);
LOCFOR(fun_subtypeQ_6);
LOCFOR(fun_subtypeQ_7);
LOCFOR(fun_subtypeQ_8);
LOCFOR(fun_9);
LOCFOR(fun_may_isaQ_10);
FUNFOR(YprotoStypesYtE);
FUNFOR(YprotoStypesYtL);
FUNFOR(YprotoStypesYtQ);
extern P YprotoStypesY___main_0___ ();
extern P YprotoStypesY___main_1___ ();

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

FUNCODEDEF(YprotoStypesYtA) {
  P args_;
  P T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLlstG),args_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLunionG),VARREF(Ytype_elts),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YprotoStypesYtT) {
  P args_;
  P T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLtupG),args_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YprotoStypesYLproductG),VARREF(Ytype_elts),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_isaQ_4) {
  P o_,t_;
  P tmpF5209;
  P tmpF5208;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),o_,VARREF(YLtupG));
  tmpF5208 = T1;
  if (tmpF5208 != YPfalse) {
    T5 = CALL1(1,VARREF(YprotoStypesYlen),o_);
    T7 = CALL1(1,VARREF(Ytype_elts),t_);
    T6 = CALL1(1,VARREF(YprotoStypesYlen),T7);
    T4 = CALL2(1,VARREF(YmacrosYEE),T5,T6);
    tmpF5209 = T4;
    if (tmpF5209 != YPfalse) {
      T10 = CALL1(1,VARREF(Ytype_elts),t_);
      T9 = CALL3(1,VARREF(YprotoStypesYall2Q),VARREF(YisaQ),o_,T10);
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
  P tmpF5210;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T3 = CALL1(1,VARREF(Ytype_elts),t1_);
  T2 = CALL1(1,VARREF(YprotoStypesYlen),T3);
  T5 = CALL1(1,VARREF(Ytype_elts),t2_);
  T4 = CALL1(1,VARREF(YprotoStypesYlen),T5);
  T1 = CALL2(1,VARREF(YmacrosYEE),T2,T4);
  tmpF5210 = T1;
  if (tmpF5210 != YPfalse) {
    T8 = CALL1(1,VARREF(Ytype_elts),t1_);
    T9 = CALL1(1,VARREF(Ytype_elts),t2_);
    T7 = CALL3(1,VARREF(YprotoStypesYall2Q),VARREF(YsubtypeQ),T8,T9);
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
  T0 = CALL1(1,VARREF(YprotoStypesY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_may_isaQ_10) {
  P c_,t_;
  P someQF5213;
  P tmpF5212;
  P tupQF5211;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YmacrosYEE),c_,VARREF(YLtupG));
  tupQF5211 = T1;
  tmpF5212 = tupQF5211;
  if (tmpF5212 != YPfalse) {
    T6 = fun_9;
    T7 = CALL1(1,VARREF(Ytype_elts),t_);
    T5 = CALL2(1,VARREF(YprotoStypesYanyQ),T6,T7);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  someQF5213 = T3;
  T8 = CALL2(1,VARREF(Ytup),tupQF5211,someQF5213);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YprotoStypesYtE) {
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

FUNCODEDEF(YprotoStypesYtL) {
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

FUNCODEDEF(YprotoStypesYtQ) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoStypesYtE),YPfalse);
  T0 = CALL2(1,VARREF(YprotoStypesYtA),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YprotoStypesY___main_0___() {
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
loop:
  lit_0 = YPPsym((P)"<product>");
  T1 = (P)YPpair(VARREF(YLtypeG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YprotoStypesYLproductG,T0);
  lit_1 = YPPsym((P)"type-elts");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YprotoStypesYLproductG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
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
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLtupG),VARREF(YprotoStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_elts_setter_1 = YPmet(FUNCODEREF(fun_type_elts_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YprotoStypesYtype_elts_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YprotoStypesYtype_elts_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_type_elts_setter_1;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YprotoStypesYtype_elts_setter,T8);
  CALLN(1,VARREF(YPprop),5,VARREF(YprotoStypesYLproductG),VARREF(Ytype_elts),VARREF(YprotoStypesYtype_elts_setter),VARREF(YLtupG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"as");
  lit_6 = YPPsym((P)"x");
  lit_7 = YPPsym((P)"y");
  T13 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T12 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoStypesYas,T12);
  lit_8 = YPPsym((P)"len");
  T15 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoStypesYlen,T14);
  lit_9 = YPPsym((P)"2nd");
  T17 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_9),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoStypesY2nd,T16);
  lit_10 = YPPsym((P)"any?");
  lit_11 = YPPsym((P)"test");
  T19 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_6)),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoStypesYanyQ,T18);
  lit_12 = YPPsym((P)"all2?");
  T21 = YPsig(YPPlist(3,LITREF(lit_11),LITREF(lit_6),LITREF(lit_7)),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T20 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_12),T21,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoStypesYall2Q,T20);
  lit_13 = YPPsym((P)"t+");
  lit_14 = YPPsym((P)"args");
  T22 = YPsig(YPPlist(1,LITREF(lit_14)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YprotoStypesYtA = YPmet(FUNCODEREF(YprotoStypesYtA),LITREF(lit_13),T22,ENVNUL,PNUL,YPfalse);
  T23 = YprotoStypesYtA;
  VARSET(YprotoStypesYtA,T23);
  lit_15 = YPPsym((P)"t*");
  T24 = YPsig(YPPlist(1,LITREF(lit_14)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YprotoStypesYtT = YPmet(FUNCODEREF(YprotoStypesYtT),LITREF(lit_15),T24,ENVNUL,PNUL,YPfalse);
  T25 = YprotoStypesYtT;
  VARSET(YprotoStypesYtT,T25);
  lit_16 = YPPsym((P)"isa?");
  lit_17 = YPPsym((P)"o");
  lit_18 = YPPsym((P)"t");
  T28 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_18)),YPPlist(2,VARREF(YLanyG),VARREF(YprotoStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
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

P YprotoStypesY___main_1___() {
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
loop:
  lit_19 = YPPsym((P)"subtype?");
  lit_20 = YPPsym((P)"t1");
  lit_21 = YPPsym((P)"t2");
  T0 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_21)),YPPlist(2,VARREF(YprotoStypesYLproductG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
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
  T5 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_21)),YPPlist(2,VARREF(YLtypeG),VARREF(YprotoStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
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
  T10 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_21)),YPPlist(2,VARREF(YprotoStypesYLproductG),VARREF(YprotoStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
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
  T15 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_21)),YPPlist(2,VARREF(YprotoStypesYLproductG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
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
  T20 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_18)),YPPlist(2,VARREF(YLclassG),VARREF(YprotoStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
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
  YprotoStypesYtE = YPmet(FUNCODEREF(YprotoStypesYtE),LITREF(lit_24),T26,ENVNUL,PNUL,YPfalse);
  T27 = YprotoStypesYtE;
  VARSET(YprotoStypesYtE,T27);
  lit_25 = YPPsym((P)"t<");
  T28 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YprotoStypesYtL = YPmet(FUNCODEREF(YprotoStypesYtL),LITREF(lit_25),T28,ENVNUL,PNUL,YPfalse);
  T29 = YprotoStypesYtL;
  VARSET(YprotoStypesYtL,T29);
  lit_26 = YPPsym((P)"t?");
  T32 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T31 = YprotoStypesYtQ = YPmet(FUNCODEREF(YprotoStypesYtQ),LITREF(lit_26),T32,ENVNUL,PNUL,YPfalse);
  T34 = YprotoStypesYtQ;
  T33 = VARSET(YprotoStypesYtQ,T34);
  T30 = T33;
  return T30;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<num>", &module_info_boot, "<num>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"prop-getter", &module_info_boot, "prop-getter"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"and", &module_info_macros, "and"},
  {"%unlink-stack", &module_info_boot, "%unlink-stack"},
  {"unexec", &module_info_boot, "unexec"},
  {"type-error", &module_info_boot, "type-error"},
  {"%fun-reg", &module_info_boot, "%fun-reg"},
  {"class-direct-props", &module_info_boot, "class-direct-props"},
  {"gensym", &module_info_macros, "gensym"},
  {"vec", &module_info_boot, "vec"},
  {"or", &module_info_macros, "or"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"<met>", &module_info_boot, "<met>"},
  {"mif", &module_info_boot, "mif"},
  {"use/export", &module_info_boot, "use/export"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@olen", &module_info_boot, "@olen"},
  {"until", &module_info_macros, "until"},
  {"prop-init", &module_info_boot, "prop-init"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"var-name", &module_info_macros, "var-name"},
  {"class-descendents", &module_info_boot, "class-descendents"},
  {"gen-refs-setter", &module_info_boot, "gen-refs-setter"},
  {"%fcos", &module_info_boot, "%fcos"},
  {"cond", &module_info_macros, "cond"},
  {"%loc-val-setter", &module_info_boot, "%loc-val-setter"},
  {"app", &module_info_macros, "app"},
  {"isa", &module_info_boot, "isa"},
  {"@+", &module_info_boot, "@+"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"dss", &module_info_boot, "dss"},
  {"prop-value-setter", &module_info_boot, "prop-value-setter"},
  {"%lu", &module_info_boot, "%lu"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"gen-refs", &module_info_boot, "gen-refs"},
  {"exported", &module_info_macros, "exported"},
  {"not", &module_info_boot, "not"},
  {"incf", &module_info_macros, "incf"},
  {"%get", &module_info_boot, "%get"},
  {"%i+", &module_info_boot, "%i+"},
  {"%f*", &module_info_boot, "%f*"},
  {"%iu", &module_info_boot, "%iu"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%gen-src", &module_info_boot, "%gen-src"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"%im", &module_info_boot, "%im"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%fsinh", &module_info_boot, "%fsinh"},
  {"%met-code", &module_info_boot, "%met-code"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"@lst", &module_info_boot, "@lst"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"rep", &module_info_boot, "rep"},
  {"opf", &module_info_macros, "opf"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"%os-val-setter", &module_info_boot, "%os-val-setter"},
  {"map", &module_info_macros, "map"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"match", &module_info_macros, "match"},
  {"assert", &module_info_macros, "assert"},
  {"sig-val", &module_info_boot, "sig-val"},
  {"prop-bound?", &module_info_boot, "prop-bound?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"<log>", &module_info_boot, "<log>"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"type-object", &module_info_boot, "type-object"},
  {"%open-out-file", &module_info_boot, "%open-out-file"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"%c<", &module_info_boot, "%c<"},
  {"%ftan", &module_info_boot, "%ftan"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"renew", &module_info_macros, "renew"},
  {"decf", &module_info_macros, "decf"},
  {"%raw", &module_info_boot, "%raw"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"%ready?", &module_info_boot, "%ready?"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%f+", &module_info_boot, "%f+"},
  {"@len", &module_info_boot, "@len"},
  {"%vec", &module_info_boot, "%vec"},
  {"%facos", &module_info_boot, "%facos"},
  {"%slen", &module_info_boot, "%slen"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"prop-owner", &module_info_boot, "prop-owner"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"fab-setter-name", &module_info_macros, "fab-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"%untag", &module_info_boot, "%untag"},
  {"object-class", &module_info_boot, "object-class"},
  {"%fsin", &module_info_boot, "%fsin"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"try", &module_info_boot, "try"},
  {"*report-prop-unbound-errors?*", &module_info_boot, "*report-prop-unbound-errors?*"},
  {"prop-value", &module_info_boot, "prop-value"},
  {"collected", &module_info_macros, "collected"},
  {"%i-", &module_info_boot, "%i-"},
  {"dv", &module_info_boot, "dv"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<any>", &module_info_boot, "<any>"},
  {"prop-type", &module_info_boot, "prop-type"},
  {"seq", &module_info_boot, "seq"},
  {"var-type", &module_info_macros, "var-type"},
  {"%i<", &module_info_boot, "%i<"},
  {"%selt", &module_info_boot, "%selt"},
  {"%fatan", &module_info_boot, "%fatan"},
  {"pushf", &module_info_macros, "pushf"},
  {"class-props", &module_info_boot, "class-props"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"error", &module_info_boot, "error"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"ddv", &module_info_macros, "ddv"},
  {"%cb", &module_info_boot, "%cb"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"%force-out", &module_info_boot, "%force-out"},
  {"%fsqrt", &module_info_boot, "%fsqrt"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%prop-unbound-error", &module_info_boot, "%prop-unbound-error"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%iv", &module_info_boot, "%iv"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"collecting", &module_info_macros, "collecting"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"def", &module_info_boot, "def"},
  {"%gen-code", &module_info_boot, "%gen-code"},
  {"%puts", &module_info_boot, "%puts"},
  {"%su", &module_info_boot, "%su"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"@all2?", &module_info_boot, "@all2?"},
  {"@==", &module_info_boot, "@=="},
  {"quote", &module_info_boot, "quote"},
  {"%str", &module_info_boot, "%str"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"fin", &module_info_boot, "fin"},
  {"<col>", &module_info_boot, "<col>"},
  {"esc", &module_info_boot, "esc"},
  {"<class>", &module_info_boot, "<class>"},
  {"%close-in-port", &module_info_boot, "%close-in-port"},
  {"<mag>", &module_info_boot, "<mag>"},
  {"%i^", &module_info_boot, "%i^"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%fatan2", &module_info_boot, "%fatan2"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"%i=", &module_info_boot, "%i="},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"%i?", &module_info_boot, "%i?"},
  {"%snul", &module_info_boot, "%snul"},
  {"dp", &module_info_boot, "dp"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%ftanh", &module_info_boot, "%ftanh"},
  {"cat", &module_info_macros, "cat"},
  {"for", &module_info_macros, "for"},
  {"%put", &module_info_boot, "%put"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"add-prop", &module_info_boot, "add-prop"},
  {"bound?", &module_info_boot, "bound?"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"@<", &module_info_boot, "@<"},
  {"dm", &module_info_boot, "dm"},
  {"tail", &module_info_boot, "tail"},
  {"%gen-code-setter", &module_info_boot, "%gen-code-setter"},
  {"<type>", &module_info_boot, "<type>"},
  {"napp", &module_info_macros, "napp"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"ord-app-mets", &module_info_boot, "ord-app-mets"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"case-by", &module_info_macros, "case-by"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"set", &module_info_boot, "set"},
  {"loc", &module_info_boot, "loc"},
  {"%i&", &module_info_boot, "%i&"},
  {"class-name", &module_info_boot, "class-name"},
  {"swapf", &module_info_macros, "swapf"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"%loc-val", &module_info_boot, "%loc-val"},
  {"if", &module_info_boot, "if"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"dlet", &module_info_macros, "dlet"},
  {"%peek", &module_info_boot, "%peek"},
  {"prop-setter", &module_info_boot, "prop-setter"},
  {"nul", &module_info_boot, "nul"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%fasin", &module_info_boot, "%fasin"},
  {"fun-val", &module_info_boot, "fun-val"},
  {"when", &module_info_macros, "when"},
  {"%it/", &module_info_boot, "%it/"},
  {"%pair", &module_info_boot, "%pair"},
  {"collect", &module_info_macros, "collect"},
  {"class-ancestors", &module_info_boot, "class-ancestors"},
  {"%current-out-port", &module_info_boot, "%current-out-port"},
  {"%c=", &module_info_boot, "%c="},
  {"unless", &module_info_macros, "unless"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"%f=", &module_info_boot, "%f="},
  {"dc", &module_info_boot, "dc"},
  {"pair", &module_info_macros, "pair"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"%gen-refs", &module_info_boot, "%gen-refs"},
  {"app-sup", &module_info_macros, "app-sup"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"elt", &module_info_macros, "elt"},
  {"%close-out-port", &module_info_boot, "%close-out-port"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%f/", &module_info_boot, "%f/"},
  {"gen-src-setter", &module_info_boot, "gen-src-setter"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"do", &module_info_macros, "do"},
  {"%fpow", &module_info_boot, "%fpow"},
  {"@isa?", &module_info_boot, "@isa?"},
  {"export", &module_info_boot, "export"},
  {"while", &module_info_macros, "while"},
  {"%fcosh", &module_info_boot, "%fcosh"},
  {"ct", &module_info_boot, "ct"},
  {"<prop>", &module_info_boot, "<prop>"},
  {"empty?", &module_info_macros, "empty?"},
  {"dl", &module_info_boot, "dl"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%ib", &module_info_boot, "%ib"},
  {"%i*", &module_info_boot, "%i*"},
  {"nil", &module_info_boot, "nil"},
  {"let", &module_info_boot, "let"},
  {"%open-in-file", &module_info_boot, "%open-in-file"},
  {"gen-src", &module_info_boot, "gen-src"},
  {"new", &module_info_boot, "new"},
  {"%f<", &module_info_boot, "%f<"},
  {"use", &module_info_boot, "use"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"%i!", &module_info_boot, "%i!"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"object-props", &module_info_boot, "object-props"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"dg", &module_info_boot, "dg"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<int>", &module_info_boot, "<int>"},
  {"%lb", &module_info_boot, "%lb"},
  {"<str>", &module_info_boot, "<str>"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"%fu", &module_info_boot, "%fu"},
  {"sup", &module_info_macros, "sup"},
  {"%sb", &module_info_boot, "%sb"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"%os-val", &module_info_boot, "%os-val"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"cat-sym", &module_info_macros, "cat-sym"},
  {"%velt", &module_info_boot, "%velt"},
  {"==", &module_info_macros, "=="},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"%cu", &module_info_boot, "%cu"},
  {"%current-in-port", &module_info_boot, "%current-in-port"},
  {"rev!", &module_info_macros, "rev!"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"without-prop-unbound-errors", &module_info_macros, "without-prop-unbound-errors"},
  {"ds", &module_info_boot, "ds"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"type-class", &module_info_boot, "type-class"},
  {"%flog", &module_info_boot, "%flog"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%fb", &module_info_boot, "%fb"},
  {"lst", &module_info_boot, "lst"},
  {"tup", &module_info_boot, "tup"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"isa?", &module_info_boot, "isa?"},
  {"<union>", &module_info_boot, "<union>"},
  {"fun", &module_info_boot, "fun"},
  {"%bb", &module_info_boot, "%bb"},
  {"%prop", &module_info_boot, "%prop"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"%f-", &module_info_boot, "%f-"},
  {"case", &module_info_macros, "case"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%isa", &module_info_boot, "%isa"},
  {"popf", &module_info_macros, "popf"},
  {"head", &module_info_boot, "head"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"df", &module_info_boot, "df"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"t+", &YprotoStypesYtA},
  {"t?", &YprotoStypesYtQ},
  {"all2?", &YprotoStypesYall2Q},
  {"t<", &YprotoStypesYtL},
  {"any?", &YprotoStypesYanyQ},
  {"t=", &YprotoStypesYtE},
  {"2nd", &YprotoStypesY2nd},
  {"---main-1---", NULL},
  {"<product>", &YprotoStypesYLproductG},
  {"len", &YprotoStypesYlen},
  {"type-elts-setter", &YprotoStypesYtype_elts_setter},
  {"as", &YprotoStypesYas},
  {"---main-0---", NULL},
  {"t*", &YprotoStypesYtT},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"class-direct-props", "class-direct-props"},
  {"<subclass>", "<subclass>"},
  {"t+", "t+"},
  {"class-descendents", "class-descendents"},
  {"subtype?", "subtype?"},
  {"<singleton>", "<singleton>"},
  {"t?", "t?"},
  {"all2?", "all2?"},
  {"type-object", "type-object"},
  {"t<", "t<"},
  {"class-parents", "class-parents"},
  {"any?", "any?"},
  {"class-props", "class-props"},
  {"t=", "t="},
  {"2nd", "2nd"},
  {"<class>", "<class>"},
  {"<product>", "<product>"},
  {"len", "len"},
  {"type-elts-setter", "type-elts-setter"},
  {"<type>", "<type>"},
  {"type-elts", "type-elts"},
  {"class-name", "class-name"},
  {"class-ancestors", "class-ancestors"},
  {"as", "as"},
  {"<union>", "<union>"},
  {"type-class", "type-class"},
  {"isa?", "isa?"},
  {"t*", "t*"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoStypes;
MODULE_INFO module_info_protoStypes = {
  "proto/types",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);

/* EXPRESSION: */

extern void load_module_protoStypes (void);

void load_module_protoStypes (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();

  (P)YprotoStypesY___main_0___();
  (P)YprotoStypesY___main_1___();

}

/* END OF GENERATED CODE. */
