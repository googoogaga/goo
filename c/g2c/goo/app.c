/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/app */

EXT(Yclass_props,"goo/boot","class-props");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYelt_setter,"goo/cols/col","elt-setter");
EXT(YPvnul,"goo/boot","%vnul");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YPprop,"goo/boot","%prop");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YPisa,"goo/boot","%isa");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yvec,"goo/boot","vec");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLmetG,"goo/boot","<met>");
EXT(Ynew,"goo/boot","new");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Ylst,"goo/boot","lst");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytup,"goo/boot","tup");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsScolYfillX,"goo/cols/col","fill!");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Ynil,"goo/boot","nil");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_3);
DEFLIT(lit_4);
DEFLIT(lit_2);
DEFLIT(lit_7);
DEFLIT(lit_5);
DEFLIT(lit_0);
DEFLIT(lit_1);
DEFLIT(lit_6);

/* FUNCTIONS: */

LOCFOR(fun_loop1_0);
LOCFOR(fun_loop2_1);
FUNFOR(YgooSmacrosYnapp);
extern P YgooSappY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_loop1_0) {
  P i_;
  P topF969;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = (P)YOA(FREEREF(0),YPint((P)-1));
  topF969 = T1;
  T3 = (P)YOL(i_,FREEREF(1));
  if (T3 != YPfalse) {
    T4 = (P)YOoelt(FREEREF(2),i_);
    T6 = (P)YPiu(topF969);
    T7 = (P)YPiu(i_);
    T5 = (P)YPi_(T6,T7);
    (P)YPloc_off_setter(T4,FREEREF(3),T5);
    T9 = (P)YOA(i_,YPint((P)1));
    a1 = T9;
    i_ = a1;
    goto loop;
    T2 = T8;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop2_1) {
  P s_,i_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),s_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooScolsScolYnow),s_);
    T5 = (P)YPiu(FREEREF(1));
    T6 = (P)YPiu(i_);
    T4 = (P)YPi_(T5,T6);
    (P)YPloc_off_setter(T3,FREEREF(0),T4);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),s_);
    T9 = (P)YOA(i_,YPint((P)1));
    a1 = T8;
    a2 = T9;
    s_ = a1;
    i_ = a2;
    goto loop;
    T0 = T7;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYnapp) {
  P proc_,nexts_,args_;
  P loop2F976;
  P loop1F975;
  P argendF974;
  P stackspaceF973;
  P tlenF972;
  P leltF971;
  P ilenF970;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(proc_, 0);
  ARG(nexts_, 1);
  NARGS(args_, 2);
loop:
  T2 = (P)YOolen(args_);
  T1 = (P)YOA(T2,YPint((P)-1));
  ilenF970 = T1;
  T4 = (P)YOoelt(args_,ilenF970);
  leltF971 = T4;
  T7 = CALL1(1,VARREF(YgooStypesYlen),leltF971);
  T6 = (P)YOA(ilenF970,T7);
  tlenF972 = T6;
  T12 = (P)YPiu(tlenF972);
  T11 = (P)YPiA((P)2,T12);
  T10 = (P)YPallocate_stack(T11);
  T9 = (P)YPlb(T10);
  stackspaceF973 = T9;
  T14 = (P)YPsp_reg();
  argendF974 = T14;
  T15 = FUNSHELL(1,fun_loop1_0,5);
  loop1F975 = T15;
  FUNINIT(loop1F975, 5,tlenF972,ilenF970,args_,stackspaceF973,loop1F975);
  T16 = CALL1(0,loop1F975,YPint((P)0));
  T17 = FUNSHELL(1,fun_loop2_1,3);
  loop2F976 = T17;
  FUNINIT(loop2F976, 3,stackspaceF973,tlenF972,loop2F976);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),leltF971);
  T20 = (P)YOA(YPint((P)1),ilenF970);
  T18 = CALL2(0,loop2F976,T19,T20);
  T21 = (P)YPiu(tlenF972);
  T22 = (P)YPiu(tlenF972);
  (P)YPloc_off_setter(T21,stackspaceF973,T22);
  T24 = (P)YPiu(tlenF972);
  T23 = (P)YPiA((P)1,T24);
  (P)YPloc_off_setter(proc_,stackspaceF973,T23);
  (P)YPsp_reg_setter(argendF974);
  (P)YPcheck_call_types();
  T25 = (P)YPraw_call(proc_,nexts_);
  T13 = T25;
  T8 = T13;
  T5 = T8;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

P YgooSappY___main_0___() {
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"napp");
  lit_1 = YPPsym((P)"proc");
  lit_2 = YPPsym((P)"nexts");
  lit_3 = YPPsym((P)"args");
  lit_4 = YPPsym((P)"loop1");
  lit_5 = YPPsym((P)"i");
  lit_6 = YPPsym((P)"loop2");
  lit_7 = YPPsym((P)"s");
  T6 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T5 = fun_loop1_0 = YPmet(FUNCODEREF(fun_loop1_0),LITREF(lit_4),T6,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_5)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T3 = fun_loop2_1 = YPmet(FUNCODEREF(fun_loop2_1),LITREF(lit_6),T4,ENVNUL,PNUL,YPfalse);
  T2 = YPsig(YPPlist(3,LITREF(lit_1),LITREF(lit_2),LITREF(lit_3)),YPPlist(2,VARREF(YLfunG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  T1 = YgooSmacrosYnapp = YPmet(FUNCODEREF(YgooSmacrosYnapp),LITREF(lit_0),T2,ENVNUL,PNUL,YPfalse);
  T8 = YgooSmacrosYnapp;
  T7 = VARSET(YgooSmacrosYnapp,T8);
  T0 = T7;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooScolsScol},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"@<", &module_info_gooSboot, "@<"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"nul", &module_info_gooSboot, "nul"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"or", &module_info_gooSmacros, "or"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"do", &module_info_gooSmacros, "do"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"elt-setter", &module_info_gooScolsScol, "elt-setter"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"and", &module_info_gooSmacros, "and"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"fin", &module_info_gooSboot, "fin"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"ds", &module_info_gooSboot, "ds"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"add", &module_info_gooScolsScol, "add"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"len", &module_info_gooStypes, "len"},
  {"vec", &module_info_gooSboot, "vec"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"match", &module_info_gooSmacros, "match"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"ct", &module_info_gooSboot, "ct"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"new", &module_info_gooSboot, "new"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"==", &module_info_gooSmacros, "=="},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%str", &module_info_gooSboot, "%str"},
  {"into", &module_info_gooScolsScol, "into"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"df", &module_info_gooSboot, "df"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case", &module_info_gooSmacros, "case"},
  {"set", &module_info_gooSboot, "set"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"lst", &module_info_gooSboot, "lst"},
  {"not", &module_info_gooSboot, "not"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"rep", &module_info_gooSboot, "rep"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"def", &module_info_gooSboot, "def"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"fun", &module_info_gooSboot, "fun"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"isa", &module_info_gooSboot, "isa"},
  {"head", &module_info_gooSboot, "head"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"fill!", &module_info_gooScolsScol, "fill!"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"map", &module_info_gooSmacros, "map"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"dss", &module_info_gooSboot, "dss"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"find", &module_info_gooScolsScol, "find"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"esc", &module_info_gooSboot, "esc"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"when", &module_info_gooSmacros, "when"},
  {"%su", &module_info_gooSboot, "%su"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"dl", &module_info_gooSboot, "dl"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"nil", &module_info_gooSboot, "nil"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"until", &module_info_gooSmacros, "until"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"app", &module_info_gooSmacros, "app"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"loc", &module_info_gooSboot, "loc"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%put", &module_info_gooSboot, "%put"},
  {"try", &module_info_gooSboot, "try"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"use", &module_info_gooSboot, "use"},
  {"@len", &module_info_gooSboot, "@len"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"op", &module_info_gooSmacros, "op"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"error", &module_info_gooSboot, "error"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"for", &module_info_gooSmacros, "for"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"export", &module_info_gooSboot, "export"},
  {"%im", &module_info_gooSboot, "%im"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"dg", &module_info_gooSboot, "dg"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"while", &module_info_gooSmacros, "while"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSapp;
MODULE_INFO module_info_gooSapp = {
  "goo/app",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooScolsScol (void);

/* EXPRESSION: */

extern void load_module_gooSapp (void);

void load_module_gooSapp (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooScolsScol();

  (P)YgooSappY___main_0___();

}

/* END OF GENERATED CODE. */
