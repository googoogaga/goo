/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/types */

EXT(Yclass_props,"goo/boot","class-props");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Ynew,"goo/boot","new");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YgooStypesYtA,"goo/types","t+");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YPprop,"goo/boot","%prop");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooStypesYtL,"goo/types","t<");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ytail,"goo/boot","tail");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooStypesYtE,"goo/types","t=");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfun_specs,"goo/boot","fun-specs");
DEF(YgooStypesYall2Q,"goo/types","all2?");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Ynil,"goo/boot","nil");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLcolG,"goo/boot","<col>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Yhead,"goo/boot","head");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YgooStypesYtQ,"goo/types","t?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooStypesYanyQ,"goo/types","any?");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooStypesYlen,"goo/types","len");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YgooStypesYLproductG,"goo/types","<product>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Ynul,"goo/boot","nul");
EXT(Ytype_elts,"goo/boot","type-elts");
DEF(YgooStypesYas,"goo/types","as");
DEF(YgooStypesYtT,"goo/types","t*");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YgooStypesY2nd,"goo/types","2nd");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_6);
DEFLIT(lit_20);
DEFLIT(lit_16);
DEFLIT(lit_3);
DEFLIT(lit_14);
DEFLIT(lit_1);
DEFLIT(lit_8);
DEFLIT(lit_2);
DEFLIT(lit_12);
DEFLIT(lit_15);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_5);
DEFLIT(lit_19);
DEFLIT(lit_18);
DEFLIT(lit_4);
DEFLIT(lit_17);
DEFLIT(lit_0);
DEFLIT(lit_13);
DEFLIT(lit_7);
DEFLIT(lit_21);
DEFLIT(lit_10);

/* FUNCTIONS: */

LOCFOR(fun_type_elts_0);
LOCFOR(fun_type_elts_setter_1);
FUNFOR(YgooStypesYtA);
FUNFOR(YgooStypesYtT);
LOCFOR(fun_isaQ_4);
LOCFOR(fun_subtypeQ_5);
LOCFOR(fun_subtypeQ_6);
LOCFOR(fun_allQ_7);
LOCFOR(fun_subtypeQ_8);
LOCFOR(fun_subtypeQ_9);
LOCFOR(fun_10);
LOCFOR(fun_may_isaQ_11);
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
  T1 = (P)YPto_tup(args_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooStypesYLproductG),VARREF(Ytype_elts),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_isaQ_4) {
  P o_,t_;
  P tmpF23313;
  P tmpF23312;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),o_,VARREF(YLtupG));
  tmpF23312 = T1;
  if (tmpF23312 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooStypesYlen),o_);
    T7 = CALL1(1,VARREF(Ytype_elts),t_);
    T6 = CALL1(1,VARREF(YgooStypesYlen),T7);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,T6);
    tmpF23313 = T4;
    if (tmpF23313 != YPfalse) {
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

FUNCODEDEF(fun_allQ_7) {
  P i_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),i_,YPint((P)-1));
  if (T1 != YPfalse) {
    T0 = YPtrue;
  } else {
    T4 = (P)YOtelt(FREEREF(0),i_);
    T5 = (P)YOtelt(FREEREF(1),i_);
    T3 = CALL2(1,VARREF(YsubtypeQ),T4,T5);
    if (T3 != YPfalse) {
      T7 = (P)YOA(i_,YPint((P)-1));
      a1 = T7;
      i_ = a1;
      goto loop;
      T2 = T6;
    } else {
      if (YPtrue != YPfalse) {
        T8 = YPfalse;
      } else {
        T8 = YPfalse;
      }
      T2 = T8;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_subtypeQ_8) {
  P t1_,t2_;
  P allQF23317;
  P tmpF23316;
  P te2F23315;
  P te1F23314;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = CALL1(1,VARREF(Ytype_elts),t1_);
  te1F23314 = T1;
  T3 = CALL1(1,VARREF(Ytype_elts),t2_);
  te2F23315 = T3;
  T6 = (P)YOtlen(te1F23314);
  T7 = (P)YOtlen(te2F23315);
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),T6,T7);
  tmpF23316 = T5;
  if (tmpF23316 != YPfalse) {
    T10 = FUNSHELL(1,fun_allQ_7,3);
    allQF23317 = T10;
    FUNINIT(allQF23317, 3,te1F23314,te2F23315,allQF23317);
    T13 = (P)YOtlen(te1F23314);
    T12 = (P)YOA(T13,YPint((P)-1));
    T11 = CALL1(0,allQF23317,T12);
    T9 = T11;
    T8 = T9;
  } else {
    T8 = YPfalse;
  }
  T4 = T8;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_9) {
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

FUNCODEDEF(fun_10) {
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

FUNCODEDEF(fun_may_isaQ_11) {
  P c_,t_;
  P someQF23320;
  P tmpF23319;
  P tupQF23318;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),c_,VARREF(YLtupG));
  tupQF23318 = T1;
  tmpF23319 = tupQF23318;
  if (tmpF23319 != YPfalse) {
    T6 = fun_10;
    T7 = CALL1(1,VARREF(Ytype_elts),t_);
    T5 = CALL2(1,VARREF(YgooStypesYanyQ),T6,T7);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  someQF23320 = T3;
  T8 = CALL2(1,VARREF(Ytup),tupQF23318,someQF23320);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
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
  P tmpF23321;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
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
  lit_14 = YPPsym((P)"all?");
  lit_15 = YPPsym((P)"i");
  T32 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_allQ_7 = YPmet(FUNCODEREF(fun_allQ_7),LITREF(lit_14),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_13)),YPPlist(2,VARREF(YgooStypesYLproductG),VARREF(YgooStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_8 = YPmet(FUNCODEREF(fun_subtypeQ_8),LITREF(lit_11),T31,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YsubtypeQ);
  if (T35 != YPfalse) {
    T34 = VARREF(YsubtypeQ);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_subtypeQ_8;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YsubtypeQ,T33);
  T37 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_13)),YPPlist(2,VARREF(YgooStypesYLproductG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_9 = YPmet(FUNCODEREF(fun_subtypeQ_9),LITREF(lit_11),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YsubtypeQ);
  if (T40 != YPfalse) {
    T39 = VARREF(YsubtypeQ);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_subtypeQ_9;
  T38 = CALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YsubtypeQ,T38);
  lit_16 = YPPsym((P)"may-isa?");
  lit_17 = YPPsym((P)"c");
  T43 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_10)),YPPlist(2,VARREF(YLclassG),VARREF(YgooStypesYLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_may_isaQ_11 = YPmet(FUNCODEREF(fun_may_isaQ_11),LITREF(lit_16),T42,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(Ymay_isaQ);
  if (T46 != YPfalse) {
    T45 = VARREF(Ymay_isaQ);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_may_isaQ_11;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(Ymay_isaQ,T44);
  lit_18 = YPPsym((P)"t=");
  lit_19 = YPPsym((P)"x");
  T48 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtE = YPmet(FUNCODEREF(YgooStypesYtE),LITREF(lit_18),T48,ENVNUL,PNUL,YPfalse);
  T49 = YgooStypesYtE;
  VARSET(YgooStypesYtE,T49);
  lit_20 = YPPsym((P)"t<");
  T50 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtL = YPmet(FUNCODEREF(YgooStypesYtL),LITREF(lit_20),T50,ENVNUL,PNUL,YPfalse);
  T51 = YgooStypesYtL;
  VARSET(YgooStypesYtL,T51);
  lit_21 = YPPsym((P)"t?");
  T52 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtQ = YPmet(FUNCODEREF(YgooStypesYtQ),LITREF(lit_21),T52,ENVNUL,PNUL,YPfalse);
  T53 = YgooStypesYtQ;
  VARSET(YgooStypesYtQ,T53);
  tmpF23321 = YPfalse;
  if (tmpF23321 != YPfalse) {
    T54 = VARREF(YgooStypesYas);
  } else {
    T54 = YPfalse;
  }
  T55 = YPfalse;
  return T55;
}

P YgooStypesY___main_1___() {
  P tmpF23325;
  P tmpF23324;
  P tmpF23323;
  P tmpF23322;
  P T0,T1,T2,T3,T4;
loop:
  tmpF23322 = YPfalse;
  if (tmpF23322 != YPfalse) {
    T0 = VARREF(YgooStypesYlen);
  } else {
    T0 = YPfalse;
  }
  tmpF23323 = YPfalse;
  if (tmpF23323 != YPfalse) {
    T1 = VARREF(YgooStypesY2nd);
  } else {
    T1 = YPfalse;
  }
  tmpF23324 = YPfalse;
  if (tmpF23324 != YPfalse) {
    T2 = VARREF(YgooStypesYanyQ);
  } else {
    T2 = YPfalse;
  }
  tmpF23325 = YPfalse;
  if (tmpF23325 != YPfalse) {
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
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"new", &module_info_gooSboot, "new"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"until", &module_info_gooSmacros, "until"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"try", &module_info_gooSboot, "try"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"dc", &module_info_gooSboot, "dc"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"@+", &module_info_gooSboot, "@+"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"not", &module_info_gooSboot, "not"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"op", &module_info_gooSmacros, "op"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"def", &module_info_gooSboot, "def"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"or", &module_info_gooSmacros, "or"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"set", &module_info_gooSboot, "set"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%su", &module_info_gooSboot, "%su"},
  {"do", &module_info_gooSmacros, "do"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"error", &module_info_gooSboot, "error"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"map", &module_info_gooSmacros, "map"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"==", &module_info_gooSmacros, "=="},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%get", &module_info_gooSboot, "%get"},
  {"and", &module_info_gooSmacros, "and"},
  {"when", &module_info_gooSmacros, "when"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"case", &module_info_gooSmacros, "case"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"head", &module_info_gooSboot, "head"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"if", &module_info_gooSboot, "if"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"dv", &module_info_gooSboot, "dv"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%im", &module_info_gooSboot, "%im"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"esc", &module_info_gooSboot, "esc"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"loc", &module_info_gooSboot, "loc"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"app", &module_info_gooSmacros, "app"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"export", &module_info_gooSboot, "export"},
  {"dss", &module_info_gooSboot, "dss"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"use", &module_info_gooSboot, "use"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"let", &module_info_gooSboot, "let"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"@==", &module_info_gooSboot, "@=="},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"for", &module_info_gooSmacros, "for"},
  {"match", &module_info_gooSmacros, "match"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"@len", &module_info_gooSboot, "@len"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"df", &module_info_gooSboot, "df"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"while", &module_info_gooSmacros, "while"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"dg", &module_info_gooSboot, "dg"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"t+", &YgooStypesYtA},
  {"t<", &YgooStypesYtL},
  {"t=", &YgooStypesYtE},
  {"all2?", &YgooStypesYall2Q},
  {"---main-0---", NULL},
  {"t?", &YgooStypesYtQ},
  {"any?", &YgooStypesYanyQ},
  {"len", &YgooStypesYlen},
  {"---main-1---", NULL},
  {"<product>", &YgooStypesYLproductG},
  {"type-elts-setter", &YgooStypesYtype_elts_setter},
  {"as", &YgooStypesYas},
  {"t*", &YgooStypesYtT},
  {"2nd", &YgooStypesY2nd},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"class-props", "class-props"},
  {"<class>", "<class>"},
  {"t+", "t+"},
  {"<type>", "<type>"},
  {"t<", "t<"},
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
