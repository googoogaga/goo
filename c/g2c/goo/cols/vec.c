/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/collections/vector */

EXT(YLnumG,"boot","<num>");
EXT(YLvecG,"boot","<vec>");
EXT(YprotoScollectionsScollectionYkey_type,"proto/collections/collection","key-type");
EXT(Yprop_getter,"boot","prop-getter");
EXT(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
EXT(YprotoScollectionsScollectionYfinQ,"proto/collections/collection","fin?");
EXT(Yunexec,"boot","unexec");
EXT(Ytype_error,"boot","type-error");
EXT(Yclass_direct_props,"boot","class-direct-props");
EXT(YmacrosYgensym,"macros","gensym");
EXT(Yvec,"boot","vec");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YprotoScollectionsSsequenceYbelow,"proto/collections/sequence","below");
EXT(YLmetG,"boot","<met>");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
EXT(Yprop_init,"boot","prop-init");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YprotoStypesYtA,"proto/types","t+");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YprotoScollectionsScollectionYenum,"proto/collections/collection","enum");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(Yclass_descendents,"boot","class-descendents");
EXT(YprotoScollectionsScollectionYelt_default,"proto/collections/collection","elt-default");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(Ygen_refs_setter,"boot","gen-refs-setter");
EXT(YLchrG,"boot","<chr>");
EXT(YLflatG,"boot","<flat>");
EXT(YprotoScollectionsSsequenceYdel_vals,"proto/collections/sequence","del-vals");
EXT(YsubtypeQ,"boot","subtype?");
EXT(Yprop_value_setter,"boot","prop-value-setter");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ygen_refs,"boot","gen-refs");
EXT(Ynot,"boot","not");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
EXT(YprotoScollectionsScollectionYdup,"proto/collections/collection","dup");
EXT(YprotoScollectionsScollectionYelt_type,"proto/collections/collection","elt-type");
EXT(YprotoScollectionsSsequenceYrange_checkQ,"proto/collections/sequence","range-check?");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(YprotoScollectionsScollectionYfold,"proto/collections/collection","fold");
EXT(YprotoScollectionsScollectionYelts,"proto/collections/collection","elts");
EXT(YLtupG,"boot","<tup>");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YOlst,"boot","@lst");
EXT(YPvnul,"boot","%vnul");
EXT(YLfunG,"boot","<fun>");
EXT(YmacrosYmap,"macros","map");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(YprotoStypesYtQ,"proto/types","t?");
EXT(YprotoStypesYall2Q,"proto/types","all2?");
EXT(YprotoScollectionsSsequenceYreject,"proto/collections/sequence","reject");
EXT(Ysig_val,"boot","sig-val");
EXT(Yprop_boundQ,"boot","prop-bound?");
EXT(YLlstG,"boot","<lst>");
EXT(YLlogG,"boot","<log>");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(Ytype_object,"boot","type-object");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(Yfab_class,"boot","fab-class");
EXT(Yfun_specs,"boot","fun-specs");
EXT(Ysym_name,"boot","sym-name");
EXT(YprotoScollectionsSsequenceYrange_check,"proto/collections/sequence","range-check");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YprotoScollectionsScollectionYfind,"proto/collections/collection","find");
EXT(Yfun_name,"boot","fun-name");
EXT(Yprop_owner,"boot","prop-owner");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
DEF(YprotoScollectionsSvectorYto_str,"proto/collections/vector","to-str");
EXT(YmacrosYfab_setter_name,"macros","fab-setter-name");
EXT(YprotoStypesYtL,"proto/types","t<");
EXT(Yobject_class,"boot","object-class");
EXT(Yclass_parents,"boot","class-parents");
EXT(YTreport_prop_unbound_errorsQT,"boot","*report-prop-unbound-errors?*");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
EXT(Yprop_value,"boot","prop-value");
EXT(YprotoScollectionsSsequenceYdo_key_vals,"proto/collections/sequence","do-key-vals");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLseqG,"boot","<seq>");
EXT(YLanyG,"boot","<any>");
EXT(Yprop_type,"boot","prop-type");
EXT(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YprotoStypesYanyQ,"proto/types","any?");
EXT(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
EXT(Yclass_props,"boot","class-props");
EXT(YprotoScollectionsScollectionYzap,"proto/collections/collection","zap");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YprotoStypesYtE,"proto/types","t=");
EXT(Yerror,"boot","error");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YLsigG,"boot","<sig>");
EXT(YPprop_unbound_error,"boot","%prop-unbound-error");
EXT(YPsymbols,"boot","%symbols");
EXT(YprotoScollectionsScollectionYdo3,"proto/collections/collection","do3");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfun_names,"boot","fun-names");
EXT(YprotoScollectionsScollectionYas_copy,"proto/collections/collection","as-copy");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YOall2Q,"boot","@all2?");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YprotoStypesY2nd,"proto/types","2nd");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YLcolG,"boot","<col>");
EXT(YLclassG,"boot","<class>");
EXT(YprotoScollectionsScollectionYaddX,"proto/collections/collection","add!");
EXT(YprotoScollectionsSsequenceYfinds,"proto/collections/sequence","finds");
EXT(YLmagG,"boot","<mag>");
EXT(YDmax_int,"boot","$max-int");
EXT(YprotoScollectionsScollectionYfind_or,"proto/collections/collection","find-or");
EXT(Yfind_setter,"boot","find-setter");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YprotoScollectionsScollectionYLtabG,"proto/collections/collection","<tab>");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YprotoStypesYLproductG,"proto/types","<product>");
EXT(YPsnul,"boot","%snul");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YprotoScollectionsScollectionYelt_or,"proto/collections/collection","elt-or");
EXT(YmacrosYcat,"macros","cat");
EXT(YprotoScollectionsScollectionYdel,"proto/collections/collection","del");
EXT(Yadd_prop,"boot","add-prop");
EXT(YprotoStypesYlen,"proto/types","len");
EXT(YprotoStypesYtype_elts_setter,"proto/types","type-elts-setter");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YLoptsG,"boot","<opts>");
EXT(YprotoScollectionsScollectionYLenumG,"proto/collections/collection","<enum>");
EXT(Ytail,"boot","tail");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YLtypeG,"boot","<type>");
EXT(YmacrosYnapp,"macros","napp");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
EXT(YLlocG,"boot","<loc>");
EXT(Yord_app_mets,"boot","ord-app-mets");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoScollectionsSsequenceYins,"proto/collections/sequence","ins");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(Yclass_name,"boot","class-name");
EXT(YPPmacro,"boot","%%macro");
EXT(Yfind_getter,"boot","find-getter");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(Yprop_setter,"boot","prop-setter");
EXT(Ynul,"boot","nul");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YprotoScollectionsScollectionYitems,"proto/collections/collection","items");
EXT(YprotoScollectionsScollectionYnow,"proto/collections/collection","now");
EXT(Yfun_val,"boot","fun-val");
EXT(Yclass_ancestors,"boot","class-ancestors");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
EXT(YprotoScollectionsScollectionYinto,"proto/collections/collection","into");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
EXT(YDmin_int,"boot","$min-int");
EXT(YmacrosYpair,"macros","pair");
EXT(YLfloG,"boot","<flo>");
EXT(YLsymG,"boot","<sym>");
EXT(YprotoScollectionsSsequenceYinsX,"proto/collections/sequence","ins!");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YmacrosYelt,"macros","elt");
EXT(YprotoStypesYas,"proto/types","as");
EXT(YprotoScollectionsScollectionYnow_setter,"proto/collections/collection","now-setter");
EXT(Yfun_mets,"boot","fun-mets");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YprotoScollectionsScollectionYnxt,"proto/collections/collection","nxt");
EXT(Ygen_src_setter,"boot","gen-src-setter");
EXT(YmacrosYdo,"macros","do");
EXT(YOisaQ,"boot","@isa?");
EXT(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
EXT(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
EXT(YprotoScollectionsScollectionYrange_error,"proto/collections/collection","range-error");
EXT(YLpropG,"boot","<prop>");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YLgenG,"boot","<gen>");
EXT(Ynil,"boot","nil");
EXT(Ygen_src,"boot","gen-src");
EXT(Ynew,"boot","new");
EXT(YprotoSmathYfabs,"proto/math","fabs");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(Yobject_props,"boot","object-props");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLintG,"boot","<int>");
EXT(YLstrG,"boot","<str>");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYcat_sym,"macros","cat-sym");
EXT(YmacrosYEE,"macros","==");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YprotoScollectionsScollectionYkey_test,"proto/collections/collection","key-test");
EXT(YmacrosYrevX,"macros","rev!");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(YprotoScollectionsSsequenceYvals_to_str,"proto/collections/sequence","vals-to-str");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
EXT(Yhead_setter,"boot","head-setter");
EXT(Ytype_class,"boot","type-class");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(Ylst,"boot","lst");
EXT(Ytup,"boot","tup");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YisaQ,"boot","isa?");
EXT(YLunionG,"boot","<union>");
EXT(YPprop,"boot","%prop");
EXT(YprotoStypesYtT,"proto/types","t*");
EXT(YPisa,"boot","%isa");
EXT(YprotoScollectionsScollectionYfoldA,"proto/collections/collection","fold+");
EXT(Yhead,"boot","head");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_0);
DEFLIT(lit_1);
DEFLIT(lit_18);
DEFLIT(lit_12);
DEFLIT(lit_16);
DEFLIT(lit_14);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_17);
DEFLIT(lit_4);
DEFLIT(lit_6);
DEFLIT(lit_10);
DEFLIT(lit_5);
DEFLIT(lit_13);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_8);
DEFLIT(lit_15);
DEFLIT(lit_19);
DEFLIT(lit_3);

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
extern P YprotoScollectionsSvectorY___main_0___ ();

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
  T0 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLvecG),objects_);
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
  T1 = CALL2(1,VARREF(YprotoScollectionsSsequenceYrange_checkQ),x_,i_);
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
  CALL2(1,VARREF(YprotoScollectionsSsequenceYrange_check),x_,i_);
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
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
loop:
  T1 = (P)YPiu(s_);
  T0 = (P)YPvec(T1);
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
  T1 = CALL1(1,VARREF(YprotoScollectionsSsequenceYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YmacrosYcat),LITREF(lit_16),T1,LITREF(lit_17));
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

P YprotoScollectionsSvectorY___main_0___() {
  P T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"as");
  lit_1 = YPPsym((P)"_");
  lit_2 = YPPsym((P)"x");
  T1 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLvecG));
  T0 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,T1,VARREF(YLvecG)),YPfalse,YPint((P)2),VARREF(YLvecG),Ynil);
  fun_as_0 = YPmet(FUNCODEREF(fun_as_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(YprotoStypesYas);
  if (T4 != YPfalse) {
    T3 = VARREF(YprotoStypesYas);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_as_0;
  T2 = CALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YprotoStypesYas,T2);
  lit_3 = YPPsym((P)"vec");
  lit_4 = YPPsym((P)"objects");
  T6 = YPsig(YPPlist(1,LITREF(lit_4)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  Yvec = YPmet(FUNCODEREF(Yvec),LITREF(lit_3),T6,ENVNUL,PNUL,YPfalse);
  T7 = Yvec;
  VARSET(Yvec,T7);
  lit_5 = YPPsym((P)"len");
  T8 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLvecG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_2 = YPmet(FUNCODEREF(fun_len_2),LITREF(lit_5),T8,ENVNUL,PNUL,YPfalse);
  T11 = BOUNDP(YprotoStypesYlen);
  if (T11 != YPfalse) {
    T10 = VARREF(YprotoStypesYlen);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_len_2;
  T9 = CALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YprotoStypesYlen,T9);
  lit_6 = YPPsym((P)"elt-or");
  lit_7 = YPPsym((P)"i");
  lit_8 = YPPsym((P)"default");
  T13 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_7),LITREF(lit_8)),YPPlist(3,VARREF(YLvecG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_3 = YPmet(FUNCODEREF(fun_elt_or_3),LITREF(lit_6),T13,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YprotoScollectionsScollectionYelt_or);
  if (T16 != YPfalse) {
    T15 = VARREF(YprotoScollectionsScollectionYelt_or);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_elt_or_3;
  T14 = CALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YprotoScollectionsScollectionYelt_or,T14);
  lit_9 = YPPsym((P)"elt-setter");
  lit_10 = YPPsym((P)"z");
  T18 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_2),LITREF(lit_7)),YPPlist(3,VARREF(YLanyG),VARREF(YLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_4 = YPmet(FUNCODEREF(fun_elt_setter_4),LITREF(lit_9),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YprotoScollectionsScollectionYelt_setter);
  if (T21 != YPfalse) {
    T20 = VARREF(YprotoScollectionsScollectionYelt_setter);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_elt_setter_4;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YprotoScollectionsScollectionYelt_setter,T19);
  lit_11 = YPPsym((P)"empty");
  lit_12 = YPPsym((P)"c");
  T24 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLvecG));
  T23 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,T24),YPfalse,YPint((P)1),VARREF(YLvecG),Ynil);
  fun_empty_5 = YPmet(FUNCODEREF(fun_empty_5),LITREF(lit_11),T23,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YprotoScollectionsScollectionYempty);
  if (T27 != YPfalse) {
    T26 = VARREF(YprotoScollectionsScollectionYempty);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_empty_5;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YprotoScollectionsScollectionYempty,T25);
  lit_13 = YPPsym((P)"fab");
  lit_14 = YPPsym((P)"s");
  T30 = CALL1(1,VARREF(YprotoStypesYtE),VARREF(YLvecG));
  T29 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_14)),YPPlist(2,T30,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLvecG),Ynil);
  fun_fab_6 = YPmet(FUNCODEREF(fun_fab_6),LITREF(lit_13),T29,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YprotoScollectionsScollectionYfab);
  if (T33 != YPfalse) {
    T32 = VARREF(YprotoScollectionsScollectionYfab);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_fab_6;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YprotoScollectionsScollectionYfab,T31);
  lit_15 = YPPsym((P)"to-str");
  lit_16 = YPsb((P)"#(");
  lit_17 = YPsb((P)")");
  T35 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_7 = YPmet(FUNCODEREF(fun_to_str_7),LITREF(lit_15),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YprotoScollectionsSvectorYto_str);
  if (T38 != YPfalse) {
    T37 = VARREF(YprotoScollectionsSvectorYto_str);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_to_str_7;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YprotoScollectionsSvectorYto_str,T36);
  lit_18 = YPPsym((P)"low-elt");
  T40 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_7)),YPPlist(2,VARREF(YLvecG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_8 = YPmet(FUNCODEREF(fun_low_elt_8),LITREF(lit_18),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YprotoScollectionsScollectionYlow_elt);
  if (T43 != YPfalse) {
    T42 = VARREF(YprotoScollectionsScollectionYlow_elt);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_low_elt_8;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YprotoScollectionsScollectionYlow_elt,T41);
  lit_19 = YPPsym((P)"low-elt-setter");
  T47 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_2),LITREF(lit_7)),YPPlist(3,VARREF(YLanyG),VARREF(YLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T46 = fun_low_elt_setter_9 = YPmet(FUNCODEREF(fun_low_elt_setter_9),LITREF(lit_19),T47,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YprotoScollectionsScollectionYlow_elt_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(YprotoScollectionsScollectionYlow_elt_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_low_elt_setter_9;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  T48 = VARSET(YprotoScollectionsScollectionYlow_elt_setter,T49);
  T45 = T48;
  return T45;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoScollectionsScollection;
extern MODULE_INFO module_info_protoScollectionsSsequence;
extern MODULE_INFO module_info_protoScollectionsSflat;
extern MODULE_INFO module_info_protoSmath;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_protoStypes},
  {&module_info_protoScollectionsScollection},
  {&module_info_protoScollectionsSsequence},
  {&module_info_protoScollectionsSflat},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<num>", &module_info_boot, "<num>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"key-type", &module_info_protoScollectionsScollection, "key-type"},
  {"prop-getter", &module_info_boot, "prop-getter"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"and", &module_info_macros, "and"},
  {"del-dups", &module_info_protoScollectionsSsequence, "del-dups"},
  {"fin?", &module_info_protoScollectionsScollection, "fin?"},
  {"%unlink-stack", &module_info_boot, "%unlink-stack"},
  {"unexec", &module_info_boot, "unexec"},
  {"type-error", &module_info_boot, "type-error"},
  {"%fun-reg", &module_info_boot, "%fun-reg"},
  {"class-direct-props", &module_info_boot, "class-direct-props"},
  {"gensym", &module_info_macros, "gensym"},
  {"vec", &module_info_boot, "vec"},
  {"or", &module_info_macros, "or"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"below", &module_info_protoScollectionsSsequence, "below"},
  {"<met>", &module_info_boot, "<met>"},
  {"map-keyed", &module_info_protoScollectionsScollection, "map-keyed"},
  {"mif", &module_info_boot, "mif"},
  {"use/export", &module_info_boot, "use/export"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@olen", &module_info_boot, "@olen"},
  {"until", &module_info_macros, "until"},
  {"prop-init", &module_info_boot, "prop-init"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"t+", &module_info_protoStypes, "t+"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"enum", &module_info_protoScollectionsScollection, "enum"},
  {"var-name", &module_info_macros, "var-name"},
  {"class-descendents", &module_info_boot, "class-descendents"},
  {"elt-default", &module_info_protoScollectionsScollection, "elt-default"},
  {"map2", &module_info_protoScollectionsScollection, "map2"},
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
  {"del-vals", &module_info_protoScollectionsSsequence, "del-vals"},
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
  {"do-keyed", &module_info_protoScollectionsScollection, "do-keyed"},
  {"%get", &module_info_boot, "%get"},
  {"%i+", &module_info_boot, "%i+"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"%f*", &module_info_boot, "%f*"},
  {"dup", &module_info_protoScollectionsScollection, "dup"},
  {"%iu", &module_info_boot, "%iu"},
  {"elt-type", &module_info_protoScollectionsScollection, "elt-type"},
  {"range-check?", &module_info_protoScollectionsSsequence, "range-check?"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%gen-src", &module_info_boot, "%gen-src"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"fold", &module_info_protoScollectionsScollection, "fold"},
  {"%im", &module_info_boot, "%im"},
  {"elts", &module_info_protoScollectionsScollection, "elts"},
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
  {"t?", &module_info_protoStypes, "t?"},
  {"all2?", &module_info_protoStypes, "all2?"},
  {"reject", &module_info_protoScollectionsSsequence, "reject"},
  {"match", &module_info_macros, "match"},
  {"assert", &module_info_macros, "assert"},
  {"sig-val", &module_info_boot, "sig-val"},
  {"prop-bound?", &module_info_boot, "prop-bound?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"<log>", &module_info_boot, "<log>"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"all?", &module_info_protoScollectionsScollection, "all?"},
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
  {"range-check", &module_info_protoScollectionsSsequence, "range-check"},
  {"%ready?", &module_info_boot, "%ready?"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%f+", &module_info_boot, "%f+"},
  {"@len", &module_info_boot, "@len"},
  {"%vec", &module_info_boot, "%vec"},
  {"%facos", &module_info_boot, "%facos"},
  {"%slen", &module_info_boot, "%slen"},
  {"find", &module_info_protoScollectionsScollection, "find"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"prop-owner", &module_info_boot, "prop-owner"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"fab-setter-name", &module_info_macros, "fab-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"t<", &module_info_protoStypes, "t<"},
  {"%untag", &module_info_boot, "%untag"},
  {"object-class", &module_info_boot, "object-class"},
  {"%fsin", &module_info_boot, "%fsin"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"try", &module_info_boot, "try"},
  {"*report-prop-unbound-errors?*", &module_info_boot, "*report-prop-unbound-errors?*"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
  {"prop-value", &module_info_boot, "prop-value"},
  {"do-key-vals", &module_info_protoScollectionsSsequence, "do-key-vals"},
  {"collected", &module_info_macros, "collected"},
  {"%i-", &module_info_boot, "%i-"},
  {"dv", &module_info_boot, "dv"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<any>", &module_info_boot, "<any>"},
  {"prop-type", &module_info_boot, "prop-type"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"seq", &module_info_boot, "seq"},
  {"var-type", &module_info_macros, "var-type"},
  {"%i<", &module_info_boot, "%i<"},
  {"%selt", &module_info_boot, "%selt"},
  {"any?", &module_info_protoStypes, "any?"},
  {"%fatan", &module_info_boot, "%fatan"},
  {"cat!", &module_info_protoScollectionsSsequence, "cat!"},
  {"pushf", &module_info_macros, "pushf"},
  {"class-props", &module_info_boot, "class-props"},
  {"zap", &module_info_protoScollectionsScollection, "zap"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"t=", &module_info_protoStypes, "t="},
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
  {"do3", &module_info_protoScollectionsScollection, "do3"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"collecting", &module_info_macros, "collecting"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"def", &module_info_boot, "def"},
  {"%gen-code", &module_info_boot, "%gen-code"},
  {"%puts", &module_info_boot, "%puts"},
  {"%su", &module_info_boot, "%su"},
  {"as-copy", &module_info_protoScollectionsScollection, "as-copy"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"@all2?", &module_info_boot, "@all2?"},
  {"@==", &module_info_boot, "@=="},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"quote", &module_info_boot, "quote"},
  {"%str", &module_info_boot, "%str"},
  {"2nd", &module_info_protoStypes, "2nd"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"fin", &module_info_boot, "fin"},
  {"<col>", &module_info_boot, "<col>"},
  {"esc", &module_info_boot, "esc"},
  {"<class>", &module_info_boot, "<class>"},
  {"%close-in-port", &module_info_boot, "%close-in-port"},
  {"add!", &module_info_protoScollectionsScollection, "add!"},
  {"finds", &module_info_protoScollectionsSsequence, "finds"},
  {"<mag>", &module_info_boot, "<mag>"},
  {"%i^", &module_info_boot, "%i^"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"find-or", &module_info_protoScollectionsScollection, "find-or"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%fatan2", &module_info_boot, "%fatan2"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"%i=", &module_info_boot, "%i="},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"<tab>", &module_info_protoScollectionsScollection, "<tab>"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"<product>", &module_info_protoStypes, "<product>"},
  {"%i?", &module_info_boot, "%i?"},
  {"%snul", &module_info_boot, "%snul"},
  {"dp", &module_info_boot, "dp"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"elt-or", &module_info_protoScollectionsScollection, "elt-or"},
  {"%ftanh", &module_info_boot, "%ftanh"},
  {"cat", &module_info_macros, "cat"},
  {"for", &module_info_macros, "for"},
  {"%put", &module_info_boot, "%put"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"del", &module_info_protoScollectionsScollection, "del"},
  {"add-prop", &module_info_boot, "add-prop"},
  {"bound?", &module_info_boot, "bound?"},
  {"len", &module_info_protoStypes, "len"},
  {"type-elts-setter", &module_info_protoStypes, "type-elts-setter"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"<enum>", &module_info_protoScollectionsScollection, "<enum>"},
  {"@<", &module_info_boot, "@<"},
  {"dm", &module_info_boot, "dm"},
  {"tail", &module_info_boot, "tail"},
  {"do2", &module_info_protoScollectionsScollection, "do2"},
  {"%gen-code-setter", &module_info_boot, "%gen-code-setter"},
  {"<type>", &module_info_boot, "<type>"},
  {"napp", &module_info_macros, "napp"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"ord-app-mets", &module_info_boot, "ord-app-mets"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"case-by", &module_info_macros, "case-by"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"ins", &module_info_protoScollectionsSsequence, "ins"},
  {"set", &module_info_boot, "set"},
  {"loc", &module_info_boot, "loc"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"%i&", &module_info_boot, "%i&"},
  {"class-name", &module_info_boot, "class-name"},
  {"swapf", &module_info_macros, "swapf"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"%loc-val", &module_info_boot, "%loc-val"},
  {"if", &module_info_boot, "if"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"dlet", &module_info_macros, "dlet"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"%peek", &module_info_boot, "%peek"},
  {"prop-setter", &module_info_boot, "prop-setter"},
  {"nul", &module_info_boot, "nul"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"items", &module_info_protoScollectionsScollection, "items"},
  {"now", &module_info_protoScollectionsScollection, "now"},
  {"%fasin", &module_info_boot, "%fasin"},
  {"fun-val", &module_info_boot, "fun-val"},
  {"when", &module_info_macros, "when"},
  {"%it/", &module_info_boot, "%it/"},
  {"%pair", &module_info_boot, "%pair"},
  {"collect", &module_info_macros, "collect"},
  {"class-ancestors", &module_info_boot, "class-ancestors"},
  {"low-elt", &module_info_protoScollectionsScollection, "low-elt"},
  {"into", &module_info_protoScollectionsScollection, "into"},
  {"rev", &module_info_protoScollectionsSsequence, "rev"},
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
  {"ins!", &module_info_protoScollectionsSsequence, "ins!"},
  {"%gen-refs", &module_info_boot, "%gen-refs"},
  {"app-sup", &module_info_macros, "app-sup"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"elt", &module_info_macros, "elt"},
  {"as", &module_info_protoStypes, "as"},
  {"now-setter", &module_info_protoScollectionsScollection, "now-setter"},
  {"%close-out-port", &module_info_boot, "%close-out-port"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%f/", &module_info_boot, "%f/"},
  {"nxt", &module_info_protoScollectionsScollection, "nxt"},
  {"gen-src-setter", &module_info_boot, "gen-src-setter"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"do", &module_info_macros, "do"},
  {"%fpow", &module_info_boot, "%fpow"},
  {"@isa?", &module_info_boot, "@isa?"},
  {"export", &module_info_boot, "export"},
  {"3rd", &module_info_protoScollectionsSsequence, "3rd"},
  {"keys", &module_info_protoScollectionsScollection, "keys"},
  {"while", &module_info_macros, "while"},
  {"%fcosh", &module_info_boot, "%fcosh"},
  {"ct", &module_info_boot, "ct"},
  {"range-error", &module_info_protoScollectionsScollection, "range-error"},
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
  {"fabs", &module_info_protoSmath, "fabs"},
  {"%i!", &module_info_boot, "%i!"},
  {"now-key", &module_info_protoScollectionsScollection, "now-key"},
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
  {"1st", &module_info_protoScollectionsSsequence, "1st"},
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
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"key-test", &module_info_protoScollectionsScollection, "key-test"},
  {"%cu", &module_info_boot, "%cu"},
  {"%current-in-port", &module_info_boot, "%current-in-port"},
  {"rev!", &module_info_macros, "rev!"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"vals-to-str", &module_info_protoScollectionsSsequence, "vals-to-str"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"without-prop-unbound-errors", &module_info_macros, "without-prop-unbound-errors"},
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
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
  {"t*", &module_info_protoStypes, "t*"},
  {"%f-", &module_info_boot, "%f-"},
  {"case", &module_info_macros, "case"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%isa", &module_info_boot, "%isa"},
  {"fold+", &module_info_protoScollectionsScollection, "fold+"},
  {"popf", &module_info_macros, "popf"},
  {"head", &module_info_boot, "head"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"df", &module_info_boot, "df"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"to-str", &YprotoScollectionsSvectorYto_str},
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<vec>", "<vec>"},
  {"vec", "vec"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoScollectionsSvector;
MODULE_INFO module_info_protoScollectionsSvector = {
  "proto/collections/vector",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);
extern void load_module_protoStypes (void);
extern void load_module_protoScollectionsScollection (void);
extern void load_module_protoScollectionsSsequence (void);
extern void load_module_protoScollectionsSflat (void);

/* EXPRESSION: */

extern void load_module_protoScollectionsSvector (void);

void load_module_protoScollectionsSvector (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_protoStypes();
  load_module_protoScollectionsScollection();
  load_module_protoScollectionsSsequence();
  load_module_protoScollectionsSflat();

  (P)YprotoScollectionsSvectorY___main_0___();

}

/* END OF GENERATED CODE. */
