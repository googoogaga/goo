/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/types */

EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YPprop,"runtime/boot","%prop");
DEF(YgooStypesYas,"goo/types","as");
EXT(YPisa,"runtime/boot","%isa");
EXT(Ytup,"runtime/boot","tup");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(YLunionG,"runtime/boot","<union>");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(Yhead,"runtime/boot","head");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
DEF(YgooStypesYLproductG,"goo/types","<product>");
EXT(YLmetG,"runtime/boot","<met>");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
DEF(YgooStypesYtT,"goo/types","t*");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(Ynot,"runtime/boot","not");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Ylst,"runtime/boot","lst");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooStypesYtA,"goo/types","t+");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(Yerror,"runtime/boot","error");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(Ynil,"runtime/boot","nil");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
DEF(YgooStypesYall2Q,"goo/types","all2?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(Yvec,"runtime/boot","vec");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YgooStypesYanyQ,"goo/types","any?");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YPsymbols,"runtime/boot","%symbols");
DEF(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(Ytail,"runtime/boot","tail");
EXT(Ytype_error,"runtime/boot","type-error");
DEF(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
DEF(YgooStypesYtQ,"goo/types","t?");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
DEF(YgooStypesYlen,"goo/types","len");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
DEF(YgooStypesYtL,"goo/types","t<");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(YPsnul,"runtime/boot","%snul");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ynul,"runtime/boot","nul");
DEF(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YPvnul,"runtime/boot","%vnul");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_13);
DEFLIT(lit_24);
DEFLIT(lit_11);
DEFLIT(lit_0);
DEFLIT(lit_20);
DEFLIT(lit_6);
DEFLIT(lit_4);
DEFLIT(lit_17);
DEFLIT(lit_26);
DEFLIT(lit_15);
DEFLIT(lit_5);
DEFLIT(lit_2);
DEFLIT(lit_21);
DEFLIT(lit_10);
DEFLIT(lit_3);
DEFLIT(lit_16);
DEFLIT(lit_25);
DEFLIT(lit_1);
DEFLIT(lit_14);
DEFLIT(lit_9);
DEFLIT(lit_22);
DEFLIT(lit_7);
DEFLIT(lit_18);
DEFLIT(lit_12);
DEFLIT(lit_19);
DEFLIT(lit_8);
DEFLIT(lit_23);

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
  P tmpF843;
  P tmpF842;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),o_,VARREF(YLtupG));
  tmpF842 = T1;
  if (tmpF842 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),o_);
    T7 = CALL1(1,VARREF(Ytype_elts),t_);
    T6 = CALL1(1,VARREF(YgooStypesYlen),T7);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,T6);
    tmpF843 = T4;
    if (tmpF843 != YPfalse) {
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
  P tmpF844;
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
  tmpF844 = T1;
  if (tmpF844 != YPfalse) {
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
  P someQF847;
  P tmpF846;
  P tupQF845;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),c_,VARREF(YLtupG));
  tupQF845 = T1;
  tmpF846 = tupQF845;
  if (tmpF846 != YPfalse) {
    T6 = fun_9;
    T7 = CALL1(1,VARREF(Ytype_elts),t_);
    T5 = CALL2(1,VARREF(YgooStypesYanyQ),T6,T7);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  someQF847 = T3;
  T8 = CALL2(1,VARREF(Ytup),tupQF845,someQF847);
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

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"set", &module_info_runtimeSboot, "set"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"try", &module_info_runtimeSboot, "try"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"head", &module_info_runtimeSboot, "head"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"when", &module_info_gooSmacros, "when"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"export", &module_info_runtimeSboot, "export"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"while", &module_info_gooSmacros, "while"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"not", &module_info_runtimeSboot, "not"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"map", &module_info_gooSmacros, "map"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"error", &module_info_runtimeSboot, "error"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"match", &module_info_gooSmacros, "match"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"df", &module_info_runtimeSboot, "df"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"if", &module_info_runtimeSboot, "if"},
  {"use", &module_info_runtimeSboot, "use"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"or", &module_info_gooSmacros, "or"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"until", &module_info_gooSmacros, "until"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"def", &module_info_runtimeSboot, "def"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"and", &module_info_gooSmacros, "and"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"new", &module_info_runtimeSboot, "new"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"do", &module_info_gooSmacros, "do"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"case", &module_info_gooSmacros, "case"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"as", &YgooStypesYas},
  {"<product>", &YgooStypesYLproductG},
  {"---main-0---", NULL},
  {"---main-1---", NULL},
  {"t*", &YgooStypesYtT},
  {"t+", &YgooStypesYtA},
  {"all2?", &YgooStypesYall2Q},
  {"any?", &YgooStypesYanyQ},
  {"type-elts-setter", &YgooStypesYtype_elts_setter},
  {"2nd", &YgooStypesY2nd},
  {"t?", &YgooStypesYtQ},
  {"len", &YgooStypesYlen},
  {"t<", &YgooStypesYtL},
  {"t=", &YgooStypesYtE},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"as", "as"},
  {"type-class", "type-class"},
  {"<union>", "<union>"},
  {"class-direct-props", "class-direct-props"},
  {"<product>", "<product>"},
  {"<subclass>", "<subclass>"},
  {"class-descendents", "class-descendents"},
  {"t*", "t*"},
  {"subtype?", "subtype?"},
  {"t+", "t+"},
  {"<singleton>", "<singleton>"},
  {"type-object", "type-object"},
  {"class-parents", "class-parents"},
  {"all2?", "all2?"},
  {"class-props", "class-props"},
  {"<class>", "<class>"},
  {"any?", "any?"},
  {"type-elts-setter", "type-elts-setter"},
  {"2nd", "2nd"},
  {"<type>", "<type>"},
  {"t?", "t?"},
  {"type-elts", "type-elts"},
  {"class-name", "class-name"},
  {"len", "len"},
  {"t<", "t<"},
  {"class-ancestors", "class-ancestors"},
  {"t=", "t="},
  {"isa?", "isa?"},
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

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);

/* EXPRESSION: */

extern void load_module_gooStypes (void);

void load_module_gooStypes (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();

  (P)YgooStypesY___main_0___();
  (P)YgooStypesY___main_1___();

}

/* END OF GENERATED CODE. */
