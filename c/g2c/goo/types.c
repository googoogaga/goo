/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/types */

EXT(Ytype_class,"goo/boot","type-class");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooStypesYtE,"goo/types","t=");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfun_specs,"goo/boot","fun-specs");
DEF(YgooStypesYall2Q,"goo/types","all2?");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Ynul,"goo/boot","nul");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLcolG,"goo/boot","<col>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Yhead,"goo/boot","head");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YgooStypesYtQ,"goo/types","t?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ynil,"goo/boot","nil");
DEF(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YgooStypesYLproductG,"goo/types","<product>");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ytype_elts,"goo/boot","type-elts");
DEF(YgooStypesYas,"goo/types","as");
DEF(YgooStypesYtT,"goo/types","t*");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLmetG,"goo/boot","<met>");
DEF(YgooStypesY2nd,"goo/types","2nd");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Ynew,"goo/boot","new");
EXT(YLclassG,"goo/boot","<class>");
DEF(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Ynot,"goo/boot","not");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YPprop,"goo/boot","%prop");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooStypesYtL,"goo/types","t<");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ytail,"goo/boot","tail");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yprop_value,"goo/boot","prop-value");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_7);
DEFLIT(lit_19);
DEFLIT(lit_10);
DEFLIT(lit_6);
DEFLIT(lit_14);
DEFLIT(lit_3);
DEFLIT(lit_15);
DEFLIT(lit_1);
DEFLIT(lit_8);
DEFLIT(lit_2);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_5);
DEFLIT(lit_17);
DEFLIT(lit_16);
DEFLIT(lit_4);
DEFLIT(lit_18);
DEFLIT(lit_0);
DEFLIT(lit_13);

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
  P T0,T1;
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
  P T0,T1;
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
  P tmpF853;
  P tmpF852;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),o_,VARREF(YLtupG));
  tmpF852 = T1;
  if (tmpF852 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),o_);
    T7 = CALL1(1,VARREF(Ytype_elts),t_);
    T6 = CALL1(1,VARREF(YgooStypesYlen),T7);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,T6);
    tmpF853 = T4;
    if (tmpF853 != YPfalse) {
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
  P tmpF854;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
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
  tmpF854 = T1;
  if (tmpF854 != YPfalse) {
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
  P T0,T1;
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
  P someQF857;
  P tmpF856;
  P tupQF855;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),c_,VARREF(YLtupG));
  tupQF855 = T1;
  tmpF856 = tupQF855;
  if (tmpF856 != YPfalse) {
    T6 = fun_9;
    T7 = CALL1(1,VARREF(Ytype_elts),t_);
    T5 = CALL2(1,VARREF(YgooStypesYanyQ),T6,T7);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  someQF857 = T3;
  T8 = CALL2(1,VARREF(Ytup),tupQF855,someQF857);
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
  P T0,T1;
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
  P tmpF858;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54;
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
  CALL5(1,VARREF(YPprop),VARREF(YgooStypesYLproductG),VARREF(Ytype_elts),VARREF(YgooStypesYtype_elts_setter),VARREF(YLtupG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"t+");
  lit_6 = YPPsym((P)"args");
  T12 = YPsig(YPPlist(1,LITREF(lit_6)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooStypesYtA = YPmet(FUNCODEREF(YgooStypesYtA),LITREF(lit_5),T12,ENVNUL,PNUL,YPfalse);
  T13 = YgooStypesYtA;
  VARSET(YgooStypesYtA,T13);
  lit_7 = YPPsym((P)"t*");
  T14 = YPsig(YPPlist(1,LITREF(lit_6)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooStypesYtT = YPmet(FUNCODEREF(YgooStypesYtT),LITREF(lit_7),T14,ENVNUL,PNUL,YPfalse);
  T15 = YgooStypesYtT;
  VARSET(YgooStypesYtT,T15);
  lit_8 = YPPsym((P)"isa?");
  lit_9 = YPPsym((P)"o");
  lit_10 = YPPsym((P)"t");
  T16 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YgooStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_4 = YPmet(FUNCODEREF(fun_isaQ_4),LITREF(lit_8),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YisaQ);
  if (T19 != YPfalse) {
    T18 = VARREF(YisaQ);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_isaQ_4;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YisaQ,T17);
  lit_11 = YPPsym((P)"subtype?");
  lit_12 = YPPsym((P)"t1");
  lit_13 = YPPsym((P)"t2");
  T21 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_13)),YPPlist(2,VARREF(YgooStypesYLproductG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_5 = YPmet(FUNCODEREF(fun_subtypeQ_5),LITREF(lit_11),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YsubtypeQ);
  if (T24 != YPfalse) {
    T23 = VARREF(YsubtypeQ);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_subtypeQ_5;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YsubtypeQ,T22);
  T26 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_13)),YPPlist(2,VARREF(YLtypeG),VARREF(YgooStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_6 = YPmet(FUNCODEREF(fun_subtypeQ_6),LITREF(lit_11),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YsubtypeQ);
  if (T29 != YPfalse) {
    T28 = VARREF(YsubtypeQ);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_subtypeQ_6;
  T27 = CALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YsubtypeQ,T27);
  T31 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_13)),YPPlist(2,VARREF(YgooStypesYLproductG),VARREF(YgooStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_7 = YPmet(FUNCODEREF(fun_subtypeQ_7),LITREF(lit_11),T31,ENVNUL,PNUL,YPfalse);
  T34 = BOUNDP(YsubtypeQ);
  if (T34 != YPfalse) {
    T33 = VARREF(YsubtypeQ);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_subtypeQ_7;
  T32 = CALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YsubtypeQ,T32);
  T36 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_13)),YPPlist(2,VARREF(YgooStypesYLproductG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_8 = YPmet(FUNCODEREF(fun_subtypeQ_8),LITREF(lit_11),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YsubtypeQ);
  if (T39 != YPfalse) {
    T38 = VARREF(YsubtypeQ);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_subtypeQ_8;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YsubtypeQ,T37);
  lit_14 = YPPsym((P)"may-isa?");
  lit_15 = YPPsym((P)"c");
  T42 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_10)),YPPlist(2,VARREF(YLclassG),VARREF(YgooStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_may_isaQ_10 = YPmet(FUNCODEREF(fun_may_isaQ_10),LITREF(lit_14),T41,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(Ymay_isaQ);
  if (T45 != YPfalse) {
    T44 = VARREF(Ymay_isaQ);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_may_isaQ_10;
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(Ymay_isaQ,T43);
  lit_16 = YPPsym((P)"t=");
  lit_17 = YPPsym((P)"x");
  T47 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtE = YPmet(FUNCODEREF(YgooStypesYtE),LITREF(lit_16),T47,ENVNUL,PNUL,YPfalse);
  T48 = YgooStypesYtE;
  VARSET(YgooStypesYtE,T48);
  lit_18 = YPPsym((P)"t<");
  T49 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtL = YPmet(FUNCODEREF(YgooStypesYtL),LITREF(lit_18),T49,ENVNUL,PNUL,YPfalse);
  T50 = YgooStypesYtL;
  VARSET(YgooStypesYtL,T50);
  lit_19 = YPPsym((P)"t?");
  T51 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtQ = YPmet(FUNCODEREF(YgooStypesYtQ),LITREF(lit_19),T51,ENVNUL,PNUL,YPfalse);
  T52 = YgooStypesYtQ;
  VARSET(YgooStypesYtQ,T52);
  tmpF858 = YPfalse;
  if (tmpF858 != YPfalse) {
    T53 = VARREF(YgooStypesYas);
  } else {
    T53 = YPfalse;
  }
  T54 = YPfalse;
  return T54;
}

P YgooStypesY___main_1___() {
  P tmpF862;
  P tmpF861;
  P tmpF860;
  P tmpF859;
  P T0,T1,T2,T3,T4;
loop:
  tmpF859 = YPfalse;
  if (tmpF859 != YPfalse) {
    T0 = VARREF(YgooStypesYlen);
  } else {
    T0 = YPfalse;
  }
  tmpF860 = YPfalse;
  if (tmpF860 != YPfalse) {
    T1 = VARREF(YgooStypesY2nd);
  } else {
    T1 = YPfalse;
  }
  tmpF861 = YPfalse;
  if (tmpF861 != YPfalse) {
    T2 = VARREF(YgooStypesYanyQ);
  } else {
    T2 = YPfalse;
  }
  tmpF862 = YPfalse;
  if (tmpF862 != YPfalse) {
    T3 = VARREF(YgooStypesYall2Q);
  } else {
    T3 = YPfalse;
  }
  T4 = YPfalse;
  return T4;
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
  {"%i+", &module_info_gooSboot, "%i+"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"try", &module_info_gooSboot, "try"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"do", &module_info_gooSmacros, "do"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"error", &module_info_gooSboot, "error"},
  {"map", &module_info_gooSmacros, "map"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"incf", &module_info_gooSmacros, "incf"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%get", &module_info_gooSboot, "%get"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"while", &module_info_gooSmacros, "while"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"def", &module_info_gooSboot, "def"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"and", &module_info_gooSmacros, "and"},
  {"when", &module_info_gooSmacros, "when"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"case", &module_info_gooSmacros, "case"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"@len", &module_info_gooSboot, "@len"},
  {"head", &module_info_gooSboot, "head"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%su", &module_info_gooSboot, "%su"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"if", &module_info_gooSboot, "if"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dss", &module_info_gooSboot, "dss"},
  {"dv", &module_info_gooSboot, "dv"},
  {"mif", &module_info_gooSboot, "mif"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"app", &module_info_gooSmacros, "app"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"lst", &module_info_gooSboot, "lst"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"export", &module_info_gooSboot, "export"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"let", &module_info_gooSboot, "let"},
  {"@+", &module_info_gooSboot, "@+"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"for", &module_info_gooSmacros, "for"},
  {"match", &module_info_gooSmacros, "match"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"seq", &module_info_gooSboot, "seq"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"df", &module_info_gooSboot, "df"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"new", &module_info_gooSboot, "new"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"until", &module_info_gooSmacros, "until"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"not", &module_info_gooSboot, "not"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"op", &module_info_gooSmacros, "op"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"or", &module_info_gooSmacros, "or"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"set", &module_info_gooSboot, "set"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"t=", &YgooStypesYtE},
  {"---main-1---", NULL},
  {"all2?", &YgooStypesYall2Q},
  {"---main-0---", NULL},
  {"t?", &YgooStypesYtQ},
  {"any?", &YgooStypesYanyQ},
  {"len", &YgooStypesYlen},
  {"<product>", &YgooStypesYLproductG},
  {"type-elts-setter", &YgooStypesYtype_elts_setter},
  {"as", &YgooStypesYas},
  {"t*", &YgooStypesYtT},
  {"2nd", &YgooStypesY2nd},
  {"t+", &YgooStypesYtA},
  {"t<", &YgooStypesYtL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"type-class", "type-class"},
  {"class-name", "class-name"},
  {"isa?", "isa?"},
  {"t=", "t="},
  {"class-ancestors", "class-ancestors"},
  {"all2?", "all2?"},
  {"<union>", "<union>"},
  {"subtype?", "subtype?"},
  {"type-object", "type-object"},
  {"<subclass>", "<subclass>"},
  {"class-direct-props", "class-direct-props"},
  {"t?", "t?"},
  {"any?", "any?"},
  {"len", "len"},
  {"<singleton>", "<singleton>"},
  {"class-descendents", "class-descendents"},
  {"<product>", "<product>"},
  {"type-elts-setter", "type-elts-setter"},
  {"type-elts", "type-elts"},
  {"as", "as"},
  {"t*", "t*"},
  {"class-parents", "class-parents"},
  {"2nd", "2nd"},
  {"class-props", "class-props"},
  {"<class>", "<class>"},
  {"t+", "t+"},
  {"<type>", "<type>"},
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
