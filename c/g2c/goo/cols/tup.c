/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/tup */

EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooStypesYas,"goo/types","as");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsScolYlow_fillX,"goo/cols/col","low-fill!");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ynot,"goo/boot","not");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yhead,"goo/boot","head");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Ynew,"goo/boot","new");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsScolYlow_into,"goo/cols/col","low-into");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
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
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Ynil,"goo/boot","nil");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yunexec,"goo/boot","unexec");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
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
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLcolG,"goo/boot","<col>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YgooScolsStupYto_str,"goo/cols/tup","to-str");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ylst,"goo/boot","lst");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yerror,"goo/boot","error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YOlst,"goo/boot","@lst");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_18);
DEFLIT(lit_5);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_17);
DEFLIT(lit_0);
DEFLIT(lit_16);
DEFLIT(lit_1);
DEFLIT(lit_3);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_8);
DEFLIT(lit_15);
DEFLIT(lit_6);
DEFLIT(lit_10);
DEFLIT(lit_14);
DEFLIT(lit_13);
DEFLIT(lit_4);

/* FUNCTIONS: */

LOCFOR(fun_as_0);
FUNFOR(Ytup);
LOCFOR(fun_len_2);
LOCFOR(fun_elt_or_3);
LOCFOR(fun_empty_4);
LOCFOR(fun_fab_5);
LOCFOR(fun_to_str_6);
LOCFOR(fun_low_elt_7);
LOCFOR(fun_low_elt_setter_8);
extern P YgooScolsStupY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_as_0) {
  P U_,x_;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(x_, 1);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(Ytup) {
  P objects_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(objects_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),objects_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_2) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPtlen(x_);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_or_3) {
  P x_,i_,default_;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYrange_checkQ),x_,i_);
  if (T1 != YPfalse) {
    T3 = (P)YPiu(i_);
    T2 = (P)YPtelt(x_,T3);
    T0 = T2;
  } else {
    T0 = default_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_4) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YPtnul));
}

FUNCODEDEF(fun_fab_5) {
  P x_,s_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),s_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = VARREF(YPtnul);
  } else {
    T3 = (P)YPiu(s_);
    T2 = (P)YPtup(T3);
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_6) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_14),T1,LITREF(lit_15));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_7) {
  P x_,i_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPtelt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_setter_8) {
  P z_,x_,i_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPtelt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsStupY___main_0___() {
  P T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"as");
  lit_1 = YPPsym((P)"_");
  lit_2 = YPPsym((P)"x");
  T1 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLtupG));
  T0 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,T1,VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_as_0 = YPmet(FUNCODEREF(fun_as_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(YgooStypesYas);
  if (T4 != YPfalse) {
    T3 = VARREF(YgooStypesYas);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_as_0;
  T2 = CALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YgooStypesYas,T2);
  lit_3 = YPPsym((P)"tup");
  lit_4 = YPPsym((P)"objects");
  T6 = YPsig(YPPlist(1,LITREF(lit_4)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  Ytup = YPmet(FUNCODEREF(Ytup),LITREF(lit_3),T6,ENVNUL,PNUL,YPfalse);
  T7 = Ytup;
  VARSET(Ytup,T7);
  lit_5 = YPPsym((P)"len");
  T8 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_2 = YPmet(FUNCODEREF(fun_len_2),LITREF(lit_5),T8,ENVNUL,PNUL,YPfalse);
  T11 = BOUNDP(YgooStypesYlen);
  if (T11 != YPfalse) {
    T10 = VARREF(YgooStypesYlen);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_len_2;
  T9 = CALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YgooStypesYlen,T9);
  lit_6 = YPPsym((P)"elt-or");
  lit_7 = YPPsym((P)"i");
  lit_8 = YPPsym((P)"default");
  T13 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_7),LITREF(lit_8)),YPPlist(3,VARREF(YLtupG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_3 = YPmet(FUNCODEREF(fun_elt_or_3),LITREF(lit_6),T13,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YgooScolsScolYelt_or);
  if (T16 != YPfalse) {
    T15 = VARREF(YgooScolsScolYelt_or);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_elt_or_3;
  T14 = CALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YgooScolsScolYelt_or,T14);
  lit_9 = YPPsym((P)"empty");
  lit_10 = YPPsym((P)"c");
  T19 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLtupG));
  T18 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,T19),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_empty_4 = YPmet(FUNCODEREF(fun_empty_4),LITREF(lit_9),T18,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YgooScolsScolYempty);
  if (T22 != YPfalse) {
    T21 = VARREF(YgooScolsScolYempty);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_empty_4;
  T20 = CALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YgooScolsScolYempty,T20);
  lit_11 = YPPsym((P)"fab");
  lit_12 = YPPsym((P)"s");
  T25 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLtupG));
  T24 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_12)),YPPlist(2,T25,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_fab_5 = YPmet(FUNCODEREF(fun_fab_5),LITREF(lit_11),T24,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YgooScolsScolYfab);
  if (T28 != YPfalse) {
    T27 = VARREF(YgooScolsScolYfab);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_fab_5;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YgooScolsScolYfab,T26);
  lit_13 = YPPsym((P)"to-str");
  lit_14 = YPsb((P)"#(");
  lit_15 = YPsb((P)")");
  T30 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLtupG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_6 = YPmet(FUNCODEREF(fun_to_str_6),LITREF(lit_13),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YgooScolsStupYto_str);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooScolsStupYto_str);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_to_str_6;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooScolsStupYto_str,T31);
  lit_16 = YPPsym((P)"low-elt");
  T35 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_7)),YPPlist(2,VARREF(YLtupG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_7 = YPmet(FUNCODEREF(fun_low_elt_7),LITREF(lit_16),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooScolsScolYlow_elt);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooScolsScolYlow_elt);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_low_elt_7;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooScolsScolYlow_elt,T36);
  lit_17 = YPPsym((P)"low-elt-setter");
  lit_18 = YPPsym((P)"z");
  T42 = YPsig(YPPlist(3,LITREF(lit_18),LITREF(lit_2),LITREF(lit_7)),YPPlist(3,VARREF(YLanyG),VARREF(YLtupG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T41 = fun_low_elt_setter_8 = YPmet(FUNCODEREF(fun_low_elt_setter_8),LITREF(lit_17),T42,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YgooScolsScolYlow_elt_setter);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooScolsScolYlow_elt_setter);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_low_elt_setter_8;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  T43 = VARSET(YgooScolsScolYlow_elt_setter,T44);
  T40 = T43;
  return T40;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSflat;
extern MODULE_INFO module_info_gooSmath;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSflat},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"quote", &module_info_gooSboot, "quote"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"items", &module_info_gooScolsScol, "items"},
  {"loc", &module_info_gooSboot, "loc"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"len", &module_info_gooStypes, "len"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"find", &module_info_gooScolsScol, "find"},
  {"as", &module_info_gooStypes, "as"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
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
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
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
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
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
  {"mem?", &module_info_gooScolsScol, "mem?"},
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
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"low-fill!", &module_info_gooScolsScol, "low-fill!"},
  {"%put", &module_info_gooSboot, "%put"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%str", &module_info_gooSboot, "%str"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
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
  {"into", &module_info_gooScolsScol, "into"},
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
  {"fill", &module_info_gooScolsScol, "fill"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"or", &module_info_gooSmacros, "or"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%im", &module_info_gooSboot, "%im"},
  {"t*", &module_info_gooStypes, "t*"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"map", &module_info_gooSmacros, "map"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"while", &module_info_gooSmacros, "while"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"now", &module_info_gooScolsScol, "now"},
  {"mif", &module_info_gooSboot, "mif"},
  {"new", &module_info_gooSboot, "new"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"low-into", &module_info_gooScolsScol, "low-into"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"do", &module_info_gooSmacros, "do"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"t+", &module_info_gooStypes, "t+"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"tup", &module_info_gooSboot, "tup"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
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
  {"all?", &module_info_gooScolsScol, "all?"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"fun", &module_info_gooSboot, "fun"},
  {"dm", &module_info_gooSboot, "dm"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"t?", &module_info_gooStypes, "t?"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"when", &module_info_gooSmacros, "when"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"all2?", &module_info_gooStypes, "all2?"},
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
  {"enum", &module_info_gooScolsScol, "enum"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
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
  {"t<", &module_info_gooStypes, "t<"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"seq", &module_info_gooSboot, "seq"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"try", &module_info_gooSboot, "try"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"@len", &module_info_gooSboot, "@len"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"rep", &module_info_gooSboot, "rep"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"any?", &module_info_gooStypes, "any?"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"and", &module_info_gooSmacros, "and"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"t=", &module_info_gooStypes, "t="},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"app", &module_info_gooSmacros, "app"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"==", &module_info_gooSmacros, "=="},
  {"last", &module_info_gooScolsSseq, "last"},
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
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"case", &module_info_gooSmacros, "case"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"pos", &module_info_gooScolsSseq, "pos"},
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
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {"to-str", &YgooScolsStupYto_str},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"tup", "tup"},
  {"<tup>", "<tup>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsStup;
MODULE_INFO module_info_gooScolsStup = {
  "goo/cols/tup",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooStypes (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSflat (void);

/* EXPRESSION: */

extern void load_module_gooScolsStup (void);

void load_module_gooScolsStup (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();
  load_module_gooScolsSflat();

  (P)YgooScolsStupY___main_0___();

}

/* END OF GENERATED CODE. */
