/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/vec */

EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YgooScolsSvecYto_str,"goo/cols/vec","to-str");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLstrG,"goo/boot","<str>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YPvnul,"goo/boot","%vnul");
EXT(YPprop,"goo/boot","%prop");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YPisa,"goo/boot","%isa");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ynil,"goo/boot","nil");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLintG,"goo/boot","<int>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Ylst,"goo/boot","lst");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yvec,"goo/boot","vec");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ytup,"goo/boot","tup");
EXT(Yhead,"goo/boot","head");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOlst,"goo/boot","@lst");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYelt_setter,"goo/cols/col","elt-setter");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ynul,"goo/boot","nul");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_0);
DEFLIT(lit_11);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_4);
DEFLIT(lit_8);
DEFLIT(lit_10);
DEFLIT(lit_17);
DEFLIT(lit_3);
DEFLIT(lit_16);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_15);
DEFLIT(lit_18);
DEFLIT(lit_1);
DEFLIT(lit_13);
DEFLIT(lit_9);
DEFLIT(lit_14);
DEFLIT(lit_19);
DEFLIT(lit_12);

/* FUNCTIONS: */

LOCFOR(fun_as_0);
FUNFOR(Yvec);
LOCFOR(fun_len_2);
LOCFOR(fun_elt_or_3);
LOCFOR(fun_elt_setter_4);
LOCFOR(fun_empty_5);
LOCFOR(fun_fab_6);
LOCFOR(fun_to_str_7);
LOCFOR(fun_low_elt_8);
LOCFOR(fun_low_elt_setter_9);
extern P YgooScolsSvecY___main_0___ ();

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

FUNCODEDEF(Yvec) {
  P objects_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(objects_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLvecG),objects_);
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
  T1 = (P)YPvlen(x_);
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
    T2 = (P)YPvelt(x_,T3);
    T0 = T2;
  } else {
    T0 = default_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_4) {
  P z_,x_,i_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  CALL2(1,VARREF(YgooScolsSseqYrange_check),x_,i_);
  T1 = (P)YPiu(i_);
  T0 = (P)YPvelt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_5) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YPvnul));
}

FUNCODEDEF(fun_fab_6) {
  P x_,s_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),s_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = VARREF(YPvnul);
  } else {
    T3 = (P)YPiu(s_);
    T2 = (P)YPvec(T3);
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_7) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_16),T1,LITREF(lit_17));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_8) {
  P x_,i_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPvelt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_setter_9) {
  P z_,x_,i_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPvelt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsSvecY___main_0___() {
  P T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"as");
  lit_1 = YPPsym((P)"_");
  lit_2 = YPPsym((P)"x");
  T1 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLvecG));
  T0 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,T1,VARREF(YLvecG)),YPfalse,YPint((P)2),VARREF(YLvecG),Ynil);
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
  lit_3 = YPPsym((P)"vec");
  lit_4 = YPPsym((P)"objects");
  T6 = YPsig(YPPlist(1,LITREF(lit_4)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  Yvec = YPmet(FUNCODEREF(Yvec),LITREF(lit_3),T6,ENVNUL,PNUL,YPfalse);
  T7 = Yvec;
  VARSET(Yvec,T7);
  lit_5 = YPPsym((P)"len");
  T8 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLvecG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
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
  T13 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_7),LITREF(lit_8)),YPPlist(3,VARREF(YLvecG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
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
  lit_9 = YPPsym((P)"elt-setter");
  lit_10 = YPPsym((P)"z");
  T18 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_2),LITREF(lit_7)),YPPlist(3,VARREF(YLanyG),VARREF(YLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_4 = YPmet(FUNCODEREF(fun_elt_setter_4),LITREF(lit_9),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YgooScolsScolYelt_setter);
  if (T21 != YPfalse) {
    T20 = VARREF(YgooScolsScolYelt_setter);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_elt_setter_4;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YgooScolsScolYelt_setter,T19);
  lit_11 = YPPsym((P)"empty");
  lit_12 = YPPsym((P)"c");
  T24 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLvecG));
  T23 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,T24),YPfalse,YPint((P)1),VARREF(YLvecG),Ynil);
  fun_empty_5 = YPmet(FUNCODEREF(fun_empty_5),LITREF(lit_11),T23,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YgooScolsScolYempty);
  if (T27 != YPfalse) {
    T26 = VARREF(YgooScolsScolYempty);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_empty_5;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YgooScolsScolYempty,T25);
  lit_13 = YPPsym((P)"fab");
  lit_14 = YPPsym((P)"s");
  T30 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLvecG));
  T29 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_14)),YPPlist(2,T30,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLvecG),Ynil);
  fun_fab_6 = YPmet(FUNCODEREF(fun_fab_6),LITREF(lit_13),T29,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YgooScolsScolYfab);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooScolsScolYfab);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_fab_6;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooScolsScolYfab,T31);
  lit_15 = YPPsym((P)"to-str");
  lit_16 = YPsb((P)"#(");
  lit_17 = YPsb((P)")");
  T35 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_7 = YPmet(FUNCODEREF(fun_to_str_7),LITREF(lit_15),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooScolsSvecYto_str);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooScolsSvecYto_str);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_to_str_7;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooScolsSvecYto_str,T36);
  lit_18 = YPPsym((P)"low-elt");
  T40 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_7)),YPPlist(2,VARREF(YLvecG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_8 = YPmet(FUNCODEREF(fun_low_elt_8),LITREF(lit_18),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YgooScolsScolYlow_elt);
  if (T43 != YPfalse) {
    T42 = VARREF(YgooScolsScolYlow_elt);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_low_elt_8;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YgooScolsScolYlow_elt,T41);
  lit_19 = YPPsym((P)"low-elt-setter");
  T47 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_2),LITREF(lit_7)),YPPlist(3,VARREF(YLanyG),VARREF(YLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T46 = fun_low_elt_setter_9 = YPmet(FUNCODEREF(fun_low_elt_setter_9),LITREF(lit_19),T47,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YgooScolsScolYlow_elt_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooScolsScolYlow_elt_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_low_elt_setter_9;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  T48 = VARSET(YgooScolsScolYlow_elt_setter,T49);
  T45 = T48;
  return T45;
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
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"for", &module_info_gooSmacros, "for"},
  {"items", &module_info_gooScolsScol, "items"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"export", &module_info_gooSboot, "export"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"dg", &module_info_gooSboot, "dg"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%im", &module_info_gooSboot, "%im"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"while", &module_info_gooSmacros, "while"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"try", &module_info_gooSboot, "try"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"t?", &module_info_gooStypes, "t?"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"into", &module_info_gooScolsScol, "into"},
  {"@<", &module_info_gooSboot, "@<"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"dp", &module_info_gooSboot, "dp"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"or", &module_info_gooSmacros, "or"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"t=", &module_info_gooStypes, "t="},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"do", &module_info_gooSmacros, "do"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%get", &module_info_gooSboot, "%get"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"@len", &module_info_gooSboot, "@len"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"seq", &module_info_gooSboot, "seq"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"@+", &module_info_gooSboot, "@+"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"and", &module_info_gooSmacros, "and"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"map", &module_info_gooSmacros, "map"},
  {"@==", &module_info_gooSboot, "@=="},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"len", &module_info_gooStypes, "len"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%su", &module_info_gooSboot, "%su"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"match", &module_info_gooSmacros, "match"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"new", &module_info_gooSboot, "new"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"==", &module_info_gooSmacros, "=="},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"df", &module_info_gooSboot, "df"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"def", &module_info_gooSboot, "def"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%str", &module_info_gooSboot, "%str"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case", &module_info_gooSmacros, "case"},
  {"use", &module_info_gooSboot, "use"},
  {"set", &module_info_gooSboot, "set"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"not", &module_info_gooSboot, "not"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"vec", &module_info_gooSboot, "vec"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%put", &module_info_gooSboot, "%put"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"tup", &module_info_gooSboot, "tup"},
  {"head", &module_info_gooSboot, "head"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"as", &module_info_gooStypes, "as"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"find", &module_info_gooScolsScol, "find"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"when", &module_info_gooSmacros, "when"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"isa", &module_info_gooSboot, "isa"},
  {"elt-setter", &module_info_gooScolsScol, "elt-setter"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"until", &module_info_gooSmacros, "until"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"app", &module_info_gooSmacros, "app"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"ct", &module_info_gooSboot, "ct"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"add", &module_info_gooScolsScol, "add"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"op", &module_info_gooSmacros, "op"},
  {"error", &module_info_gooSboot, "error"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {"to-str", &YgooScolsSvecYto_str},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<vec>", "<vec>"},
  {"vec", "vec"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSvec;
MODULE_INFO module_info_gooScolsSvec = {
  "goo/cols/vec",
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

extern void load_module_gooScolsSvec (void);

void load_module_gooScolsSvec (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();
  load_module_gooScolsSflat();

  (P)YgooScolsSvecY___main_0___();

}

/* END OF GENERATED CODE. */
