/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: goo/collections/vector */

EXT(Ylst,"runtime/boot","lst");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(Yhead,"runtime/boot","head");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(YgooStypeYanyQ,"goo/type","any?");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YgooStypeY2nd,"goo/type","2nd");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(Ynot,"runtime/boot","not");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypeYtQ,"goo/type","t?");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(Yerror,"runtime/boot","error");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooStypeYlen,"goo/type","len");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(Ynil,"runtime/boot","nil");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YgooStypeYtL,"goo/type","t<");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooStypeYtE,"goo/type","t=");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
DEF(YgooScollectionsSvectorYto_str,"goo/collections/vector","to-str");
EXT(Yvec,"runtime/boot","vec");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooStypeYas,"goo/type","as");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YgooStypeYLproductG,"goo/type","<product>");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YgooStypeYtype_elts_setter,"goo/type","type-elts-setter");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooStypeYtT,"goo/type","t*");
EXT(Ytail,"runtime/boot","tail");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YPsnul,"runtime/boot","%snul");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YgooScollectionsSsequenceYdo_key_vals,"goo/collections/sequence","do-key-vals");
EXT(YgooStypeYtA,"goo/type","t+");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(Ynew,"runtime/boot","new");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YgooScollectionsSsequenceYrange_checkQ,"goo/collections/sequence","range-check?");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YisaQ,"runtime/boot","isa?");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooStypeYall2Q,"goo/type","all2?");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(Yadd_prop,"runtime/boot","add-prop");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_6);
DEFLIT(lit_0);
DEFLIT(lit_1);
DEFLIT(lit_9);
DEFLIT(lit_11);
DEFLIT(lit_4);
DEFLIT(lit_12);
DEFLIT(lit_3);
DEFLIT(lit_19);
DEFLIT(lit_17);
DEFLIT(lit_5);
DEFLIT(lit_15);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_18);
DEFLIT(lit_14);
DEFLIT(lit_13);
DEFLIT(lit_10);
DEFLIT(lit_16);
DEFLIT(lit_8);

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
extern P YgooScollectionsSvectorY___main_0___ ();

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
  T0 = CALL2(1,VARREF(YgooStypeYas),VARREF(YLvecG),objects_);
UNLINK_STACK();
  RET(T0);
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
  T1 = CALL2(1,VARREF(YgooScollectionsSsequenceYrange_checkQ),x_,i_);
  if (T1 != YPfalse) {
    T3 = (P)YPiu(i_);
    T2 = (P)YPvelt(x_,T3);
    T0 = T2;
  } else {
    T0 = default_;
  }
UNLINK_STACK();
  RET(T0);
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
  CALL2(1,VARREF(YgooScollectionsSsequenceYrange_check),x_,i_);
  T1 = (P)YPiu(i_);
  T0 = (P)YPvelt_setter(z_,x_,T1);
UNLINK_STACK();
  RET(T0);
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
  T1 = CALL1(1,VARREF(YgooScollectionsSsequenceYvals_to_str),x_);
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
  RET(T0);
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
  RET(T0);
}

P YgooScollectionsSvectorY___main_0___() {
  P T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"as");
  lit_1 = YPPsym((P)"_");
  lit_2 = YPPsym((P)"x");
  T1 = CALL1(1,VARREF(YgooStypeYtE),VARREF(YLvecG));
  T0 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,T1,VARREF(YLvecG)),YPfalse,YPint((P)2),VARREF(YLvecG),Ynil);
  fun_as_0 = YPmet(FUNCODEREF(fun_as_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T4 = BOUNDP(YgooStypeYas);
  if (T4 != YPfalse) {
    T3 = VARREF(YgooStypeYas);
  } else {
    T3 = YPfalse;
  }
  T5 = fun_as_0;
  T2 = CALL2(1,VARREF(YPdefine_method),T3,T5);
  VARSET(YgooStypeYas,T2);
  lit_3 = YPPsym((P)"vec");
  lit_4 = YPPsym((P)"objects");
  T6 = YPsig(YPPlist(1,LITREF(lit_4)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  Yvec = YPmet(FUNCODEREF(Yvec),LITREF(lit_3),T6,ENVNUL,PNUL,YPfalse);
  T7 = Yvec;
  VARSET(Yvec,T7);
  lit_5 = YPPsym((P)"len");
  T8 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLvecG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_2 = YPmet(FUNCODEREF(fun_len_2),LITREF(lit_5),T8,ENVNUL,PNUL,YPfalse);
  T11 = BOUNDP(YgooStypeYlen);
  if (T11 != YPfalse) {
    T10 = VARREF(YgooStypeYlen);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_len_2;
  T9 = CALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YgooStypeYlen,T9);
  lit_6 = YPPsym((P)"elt-or");
  lit_7 = YPPsym((P)"i");
  lit_8 = YPPsym((P)"default");
  T13 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_7),LITREF(lit_8)),YPPlist(3,VARREF(YLvecG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_3 = YPmet(FUNCODEREF(fun_elt_or_3),LITREF(lit_6),T13,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YgooScollectionsScollectionYelt_or);
  if (T16 != YPfalse) {
    T15 = VARREF(YgooScollectionsScollectionYelt_or);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_elt_or_3;
  T14 = CALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YgooScollectionsScollectionYelt_or,T14);
  lit_9 = YPPsym((P)"elt-setter");
  lit_10 = YPPsym((P)"z");
  T18 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_2),LITREF(lit_7)),YPPlist(3,VARREF(YLanyG),VARREF(YLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_4 = YPmet(FUNCODEREF(fun_elt_setter_4),LITREF(lit_9),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YgooScollectionsScollectionYelt_setter);
  if (T21 != YPfalse) {
    T20 = VARREF(YgooScollectionsScollectionYelt_setter);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_elt_setter_4;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YgooScollectionsScollectionYelt_setter,T19);
  lit_11 = YPPsym((P)"empty");
  lit_12 = YPPsym((P)"c");
  T24 = CALL1(1,VARREF(YgooStypeYtE),VARREF(YLvecG));
  T23 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,T24),YPfalse,YPint((P)1),VARREF(YLvecG),Ynil);
  fun_empty_5 = YPmet(FUNCODEREF(fun_empty_5),LITREF(lit_11),T23,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YgooScollectionsScollectionYempty);
  if (T27 != YPfalse) {
    T26 = VARREF(YgooScollectionsScollectionYempty);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_empty_5;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YgooScollectionsScollectionYempty,T25);
  lit_13 = YPPsym((P)"fab");
  lit_14 = YPPsym((P)"s");
  T30 = CALL1(1,VARREF(YgooStypeYtE),VARREF(YLvecG));
  T29 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_14)),YPPlist(2,T30,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLvecG),Ynil);
  fun_fab_6 = YPmet(FUNCODEREF(fun_fab_6),LITREF(lit_13),T29,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YgooScollectionsScollectionYfab);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooScollectionsScollectionYfab);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_fab_6;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooScollectionsScollectionYfab,T31);
  lit_15 = YPPsym((P)"to-str");
  lit_16 = YPsb((P)"#(");
  lit_17 = YPsb((P)")");
  T35 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_7 = YPmet(FUNCODEREF(fun_to_str_7),LITREF(lit_15),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooScollectionsSvectorYto_str);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooScollectionsSvectorYto_str);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_to_str_7;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooScollectionsSvectorYto_str,T36);
  lit_18 = YPPsym((P)"low-elt");
  T40 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_7)),YPPlist(2,VARREF(YLvecG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_8 = YPmet(FUNCODEREF(fun_low_elt_8),LITREF(lit_18),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YgooScollectionsScollectionYlow_elt);
  if (T43 != YPfalse) {
    T42 = VARREF(YgooScollectionsScollectionYlow_elt);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_low_elt_8;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YgooScollectionsScollectionYlow_elt,T41);
  lit_19 = YPPsym((P)"low-elt-setter");
  T47 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_2),LITREF(lit_7)),YPPlist(3,VARREF(YLanyG),VARREF(YLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T46 = fun_low_elt_setter_9 = YPmet(FUNCODEREF(fun_low_elt_setter_9),LITREF(lit_19),T47,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YgooScollectionsScollectionYlow_elt_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooScollectionsScollectionYlow_elt_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_low_elt_setter_9;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  T48 = VARSET(YgooScollectionsScollectionYlow_elt_setter,T49);
  T45 = T48;
  return T45;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStype;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooScollectionsSflat;
extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmath;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStype},
  {&module_info_gooScollectionsScollection},
  {&module_info_gooScollectionsSsequence},
  {&module_info_gooScollectionsSflat},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"lst", &module_info_runtimeSboot, "lst"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"df", &module_info_runtimeSboot, "df"},
  {"as-copy", &module_info_gooScollectionsScollection, "as-copy"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"match", &module_info_gooSmacros, "match"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"range-check", &module_info_gooScollectionsSsequence, "range-check"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"head", &module_info_runtimeSboot, "head"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"any?", &module_info_gooStype, "any?"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"app", &module_info_gooSmacros, "app"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"dup", &module_info_gooScollectionsScollection, "dup"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"try", &module_info_runtimeSboot, "try"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"finds", &module_info_gooScollectionsSsequence, "finds"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"2nd", &module_info_gooStype, "2nd"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"not", &module_info_runtimeSboot, "not"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"t?", &module_info_gooStype, "t?"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"use", &module_info_runtimeSboot, "use"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"error", &module_info_runtimeSboot, "error"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"len", &module_info_gooStype, "len"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"t<", &module_info_gooStype, "t<"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"or", &module_info_gooSmacros, "or"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"t=", &module_info_gooStype, "t="},
  {"and", &module_info_gooSmacros, "and"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"as", &module_info_gooStype, "as"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"for", &module_info_gooSmacros, "for"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"ins!", &module_info_gooScollectionsSsequence, "ins!"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"def", &module_info_runtimeSboot, "def"},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"if", &module_info_runtimeSboot, "if"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"==", &module_info_gooSmacros, "=="},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"<product>", &module_info_gooStype, "<product>"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"case", &module_info_gooSmacros, "case"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"type-elts-setter", &module_info_gooStype, "type-elts-setter"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"t*", &module_info_gooStype, "t*"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"export", &module_info_runtimeSboot, "export"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"ins", &module_info_gooScollectionsSsequence, "ins"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"map", &module_info_gooSmacros, "map"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"do-key-vals", &module_info_gooScollectionsSsequence, "do-key-vals"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"t+", &module_info_gooStype, "t+"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"while", &module_info_gooSmacros, "while"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"new", &module_info_runtimeSboot, "new"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"do", &module_info_gooSmacros, "do"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"vals-to-str", &module_info_gooScollectionsSsequence, "vals-to-str"},
  {"set", &module_info_runtimeSboot, "set"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"range-check?", &module_info_gooScollectionsSsequence, "range-check?"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"when", &module_info_gooSmacros, "when"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"all2?", &module_info_gooStype, "all2?"},
  {"do3", &module_info_gooScollectionsScollection, "do3"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"to-str", &YgooScollectionsSvectorYto_str},
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<vec>", "<vec>"},
  {"vec", "vec"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScollectionsSvector;
MODULE_INFO module_info_gooScollectionsSvector = {
  "goo/collections/vector",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooStype (void);
extern void load_module_gooScollectionsScollection (void);
extern void load_module_gooScollectionsSsequence (void);
extern void load_module_gooScollectionsSflat (void);

/* EXPRESSION: */

extern void load_module_gooScollectionsSvector (void);

void load_module_gooScollectionsSvector (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_gooStype();
  load_module_gooScollectionsScollection();
  load_module_gooScollectionsSsequence();
  load_module_gooScollectionsSflat();

  (P)YgooScollectionsSvectorY___main_0___();

}

/* END OF GENERATED CODE. */
