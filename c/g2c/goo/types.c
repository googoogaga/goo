/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/types */

EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Ynot,"goo/boot","not");
DEF(YgooStypesYanyQ,"goo/types","any?");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooStypesY2nd,"goo/types","2nd");
DEF(YgooStypesYtE,"goo/types","t=");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooStypesYlen,"goo/types","len");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YPprop,"goo/boot","%prop");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YPisa,"goo/boot","%isa");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ytup,"goo/boot","tup");
EXT(Ynil,"goo/boot","nil");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLstrG,"goo/boot","<str>");
DEF(YgooStypesYtL,"goo/types","t<");
EXT(Yclass_descendents,"goo/boot","class-descendents");
DEF(YgooStypesYLproductG,"goo/types","<product>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YgooStypesYtA,"goo/types","t+");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLunionG,"goo/boot","<union>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yerror,"goo/boot","error");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(YgooStypesYtT,"goo/types","t*");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ylst,"goo/boot","lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(Ytail,"goo/boot","tail");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yadd_prop,"goo/boot","add-prop");
DEF(YgooStypesYas,"goo/types","as");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooStypesYall2Q,"goo/types","all2?");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynul,"goo/boot","nul");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YPdefine_method,"goo/boot","%define-method");
DEF(YgooStypesYtQ,"goo/types","t?");
EXT(Yfind_getter,"goo/boot","find-getter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_9);
DEFLIT(lit_2);
DEFLIT(lit_12);
DEFLIT(lit_6);
DEFLIT(lit_3);
DEFLIT(lit_24);
DEFLIT(lit_11);
DEFLIT(lit_1);
DEFLIT(lit_8);
DEFLIT(lit_26);
DEFLIT(lit_25);
DEFLIT(lit_15);
DEFLIT(lit_21);
DEFLIT(lit_0);
DEFLIT(lit_22);
DEFLIT(lit_4);
DEFLIT(lit_20);
DEFLIT(lit_14);
DEFLIT(lit_18);
DEFLIT(lit_7);
DEFLIT(lit_23);
DEFLIT(lit_10);
DEFLIT(lit_5);
DEFLIT(lit_19);
DEFLIT(lit_17);
DEFLIT(lit_13);
DEFLIT(lit_16);

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
  P tmpF854;
  P tmpF853;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),o_,VARREF(YLtupG));
  tmpF853 = T1;
  if (tmpF853 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),o_);
    T7 = CALL1(1,VARREF(Ytype_elts),t_);
    T6 = CALL1(1,VARREF(YgooStypesYlen),T7);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,T6);
    tmpF854 = T4;
    if (tmpF854 != YPfalse) {
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
  P tmpF855;
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
  tmpF855 = T1;
  if (tmpF855 != YPfalse) {
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
  P someQF858;
  P tmpF857;
  P tupQF856;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),c_,VARREF(YLtupG));
  tupQF856 = T1;
  tmpF857 = tupQF856;
  if (tmpF857 != YPfalse) {
    T6 = fun_9;
    T7 = CALL1(1,VARREF(Ytype_elts),t_);
    T5 = CALL2(1,VARREF(YgooStypesYanyQ),T6,T7);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  someQF858 = T3;
  T8 = CALL2(1,VARREF(Ytup),tupQF856,someQF858);
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
  {"<class>", &module_info_gooSboot, "<class>"},
  {"df", &module_info_gooSboot, "df"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"for", &module_info_gooSmacros, "for"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"not", &module_info_gooSboot, "not"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"dg", &module_info_gooSboot, "dg"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"when", &module_info_gooSmacros, "when"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"op", &module_info_gooSmacros, "op"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"set", &module_info_gooSboot, "set"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"export", &module_info_gooSboot, "export"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"map", &module_info_gooSmacros, "map"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"head", &module_info_gooSboot, "head"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%su", &module_info_gooSboot, "%su"},
  {"do", &module_info_gooSmacros, "do"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"while", &module_info_gooSmacros, "while"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%str", &module_info_gooSboot, "%str"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"@+", &module_info_gooSboot, "@+"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"dl", &module_info_gooSboot, "dl"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"dm", &module_info_gooSboot, "dm"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"def", &module_info_gooSboot, "def"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"match", &module_info_gooSmacros, "match"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"app", &module_info_gooSmacros, "app"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"or", &module_info_gooSmacros, "or"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"isa", &module_info_gooSboot, "isa"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"and", &module_info_gooSmacros, "and"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"error", &module_info_gooSboot, "error"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"loc", &module_info_gooSboot, "loc"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"until", &module_info_gooSmacros, "until"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"seq", &module_info_gooSboot, "seq"},
  {"new", &module_info_gooSboot, "new"},
  {"==", &module_info_gooSmacros, "=="},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"lst", &module_info_gooSboot, "lst"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%put", &module_info_gooSboot, "%put"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"case", &module_info_gooSmacros, "case"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"@len", &module_info_gooSboot, "@len"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"try", &module_info_gooSboot, "try"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"nul", &module_info_gooSboot, "nul"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"if", &module_info_gooSboot, "if"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"any?", &YgooStypesYanyQ},
  {"2nd", &YgooStypesY2nd},
  {"t=", &YgooStypesYtE},
  {"len", &YgooStypesYlen},
  {"---main-1---", NULL},
  {"t<", &YgooStypesYtL},
  {"<product>", &YgooStypesYLproductG},
  {"t+", &YgooStypesYtA},
  {"---main-0---", NULL},
  {"t*", &YgooStypesYtT},
  {"type-elts-setter", &YgooStypesYtype_elts_setter},
  {"as", &YgooStypesYas},
  {"all2?", &YgooStypesYall2Q},
  {"t?", &YgooStypesYtQ},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<class>", "<class>"},
  {"subtype?", "subtype?"},
  {"any?", "any?"},
  {"t<", "t<"},
  {"<type>", "<type>"},
  {"2nd", "2nd"},
  {"t=", "t="},
  {"type-class", "type-class"},
  {"len", "len"},
  {"class-direct-props", "class-direct-props"},
  {"class-descendents", "class-descendents"},
  {"<product>", "<product>"},
  {"<union>", "<union>"},
  {"type-object", "type-object"},
  {"<subclass>", "<subclass>"},
  {"class-parents", "class-parents"},
  {"t*", "t*"},
  {"class-props", "class-props"},
  {"<singleton>", "<singleton>"},
  {"isa?", "isa?"},
  {"t+", "t+"},
  {"type-elts-setter", "type-elts-setter"},
  {"as", "as"},
  {"type-elts", "type-elts"},
  {"class-name", "class-name"},
  {"all2?", "all2?"},
  {"class-ancestors", "class-ancestors"},
  {"t?", "t?"},
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
