/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/types */

EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YgooStypesYas,"goo/types","as");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ynot,"goo/boot","not");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yhead,"goo/boot","head");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooStypesYtT,"goo/types","t*");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Ynew,"goo/boot","new");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
DEF(YgooStypesYtA,"goo/types","t+");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooStypesYLproductG,"goo/types","<product>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPisa,"goo/boot","%isa");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YLunionG,"goo/boot","<union>");
DEF(YgooStypesYall2Q,"goo/types","all2?");
EXT(Ynil,"goo/boot","nil");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yunexec,"goo/boot","unexec");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YgooStypesYtL,"goo/types","t<");
EXT(YLcolG,"goo/boot","<col>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YgooStypesYanyQ,"goo/types","any?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YgooStypesYtE,"goo/types","t=");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ylst,"goo/boot","lst");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YgooStypesY2nd,"goo/types","2nd");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yerror,"goo/boot","error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YOlst,"goo/boot","@lst");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_0);
DEFLIT(lit_24);
DEFLIT(lit_13);
DEFLIT(lit_15);
DEFLIT(lit_9);
DEFLIT(lit_6);
DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_11);
DEFLIT(lit_1);
DEFLIT(lit_8);
DEFLIT(lit_2);
DEFLIT(lit_26);
DEFLIT(lit_21);
DEFLIT(lit_10);
DEFLIT(lit_16);
DEFLIT(lit_14);
DEFLIT(lit_7);
DEFLIT(lit_22);
DEFLIT(lit_17);
DEFLIT(lit_23);
DEFLIT(lit_12);
DEFLIT(lit_18);
DEFLIT(lit_19);
DEFLIT(lit_4);
DEFLIT(lit_25);
DEFLIT(lit_20);

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
  {"quote", &module_info_gooSboot, "quote"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"loc", &module_info_gooSboot, "loc"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"df", &module_info_gooSboot, "df"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"for", &module_info_gooSmacros, "for"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"if", &module_info_gooSboot, "if"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"collected", &module_info_gooSmacros, "collected"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"dss", &module_info_gooSboot, "dss"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%put", &module_info_gooSboot, "%put"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"not", &module_info_gooSboot, "not"},
  {"op", &module_info_gooSmacros, "op"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"dc", &module_info_gooSboot, "dc"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"export", &module_info_gooSboot, "export"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"head", &module_info_gooSboot, "head"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"let", &module_info_gooSboot, "let"},
  {"or", &module_info_gooSmacros, "or"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"map", &module_info_gooSmacros, "map"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"while", &module_info_gooSmacros, "while"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"new", &module_info_gooSboot, "new"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"do", &module_info_gooSmacros, "do"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"tup", &module_info_gooSboot, "tup"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"isa", &module_info_gooSboot, "isa"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"set", &module_info_gooSboot, "set"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"fun", &module_info_gooSboot, "fun"},
  {"dm", &module_info_gooSboot, "dm"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"when", &module_info_gooSmacros, "when"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"%get", &module_info_gooSboot, "%get"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"match", &module_info_gooSmacros, "match"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"def", &module_info_gooSboot, "def"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"try", &module_info_gooSboot, "try"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"@len", &module_info_gooSboot, "@len"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"rep", &module_info_gooSboot, "rep"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"and", &module_info_gooSmacros, "and"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"app", &module_info_gooSmacros, "app"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"==", &module_info_gooSmacros, "=="},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"use", &module_info_gooSboot, "use"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"case", &module_info_gooSmacros, "case"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"error", &module_info_gooSboot, "error"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"len", &YgooStypesYlen},
  {"as", &YgooStypesYas},
  {"t*", &YgooStypesYtT},
  {"t+", &YgooStypesYtA},
  {"<product>", &YgooStypesYLproductG},
  {"---main-0---", NULL},
  {"t?", &YgooStypesYtQ},
  {"all2?", &YgooStypesYall2Q},
  {"t<", &YgooStypesYtL},
  {"---main-1---", NULL},
  {"any?", &YgooStypesYanyQ},
  {"t=", &YgooStypesYtE},
  {"type-elts-setter", &YgooStypesYtype_elts_setter},
  {"2nd", &YgooStypesY2nd},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"len", "len"},
  {"as", "as"},
  {"class-ancestors", "class-ancestors"},
  {"<class>", "<class>"},
  {"type-class", "type-class"},
  {"<type>", "<type>"},
  {"class-direct-props", "class-direct-props"},
  {"t*", "t*"},
  {"class-descendents", "class-descendents"},
  {"t+", "t+"},
  {"all2?", "all2?"},
  {"<product>", "<product>"},
  {"type-object", "type-object"},
  {"isa?", "isa?"},
  {"t?", "t?"},
  {"<union>", "<union>"},
  {"class-parents", "class-parents"},
  {"type-elts-setter", "type-elts-setter"},
  {"class-props", "class-props"},
  {"t<", "t<"},
  {"<subclass>", "<subclass>"},
  {"any?", "any?"},
  {"t=", "t="},
  {"subtype?", "subtype?"},
  {"<singleton>", "<singleton>"},
  {"2nd", "2nd"},
  {"type-elts", "type-elts"},
  {"class-name", "class-name"},
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
