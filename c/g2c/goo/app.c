/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/app */

EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ynul,"goo/boot","nul");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ylst,"goo/boot","lst");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yhead,"goo/boot","head");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Ytup,"goo/boot","tup");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YPisa,"goo/boot","%isa");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YOlst,"goo/boot","@lst");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YLmetG,"goo/boot","<met>");
EXT(Ynew,"goo/boot","new");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ynil,"goo/boot","nil");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YPsymbols,"goo/boot","%symbols");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_6);
DEFLIT(lit_4);
DEFLIT(lit_1);
DEFLIT(lit_2);
DEFLIT(lit_0);
DEFLIT(lit_7);

/* FUNCTIONS: */

LOCFOR(fun_loop1_0);
LOCFOR(fun_loop2_1);
FUNFOR(YgooSmacrosYnapp);
extern P YgooSappY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_loop1_0) {
  P i_;
  P topF970;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = (P)YOA(FREEREF(0),YPint((P)-1));
  topF970 = T1;
  T3 = (P)YOL(i_,FREEREF(1));
  if (T3 != YPfalse) {
    T4 = (P)YOoelt(FREEREF(2),i_);
    T6 = (P)YPiu(topF970);
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
  P loop2F977;
  P loop1F976;
  P argendF975;
  P stackspaceF974;
  P tlenF973;
  P leltF972;
  P ilenF971;
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
  ilenF971 = T1;
  T4 = (P)YOoelt(args_,ilenF971);
  leltF972 = T4;
  T7 = CALL1(1,VARREF(YgooStypesYlen),leltF972);
  T6 = (P)YOA(ilenF971,T7);
  tlenF973 = T6;
  T12 = (P)YPiu(tlenF973);
  T11 = (P)YPiA((P)2,T12);
  T10 = (P)YPallocate_stack(T11);
  T9 = (P)YPlb(T10);
  stackspaceF974 = T9;
  T14 = (P)YPsp_reg();
  argendF975 = T14;
  T15 = FUNSHELL(1,fun_loop1_0,5);
  loop1F976 = T15;
  FUNINIT(loop1F976, 5,tlenF973,ilenF971,args_,stackspaceF974,loop1F976);
  T16 = CALL1(0,loop1F976,YPint((P)0));
  T17 = FUNSHELL(1,fun_loop2_1,3);
  loop2F977 = T17;
  FUNINIT(loop2F977, 3,stackspaceF974,tlenF973,loop2F977);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),leltF972);
  T20 = (P)YOA(YPint((P)1),ilenF971);
  T18 = CALL2(0,loop2F977,T19,T20);
  T21 = (P)YPiu(tlenF973);
  T22 = (P)YPiu(tlenF973);
  (P)YPloc_off_setter(T21,stackspaceF974,T22);
  T24 = (P)YPiu(tlenF973);
  T23 = (P)YPiA((P)1,T24);
  (P)YPloc_off_setter(proc_,stackspaceF974,T23);
  (P)YPsp_reg_setter(argendF975);
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
  {"%cu", &module_info_gooSboot, "%cu"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"and", &module_info_gooSmacros, "and"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"@<", &module_info_gooSboot, "@<"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"items", &module_info_gooScolsScol, "items"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"not", &module_info_gooSboot, "not"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"@len", &module_info_gooSboot, "@len"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"any?", &module_info_gooStypes, "any?"},
  {"fun", &module_info_gooSboot, "fun"},
  {"rep", &module_info_gooSboot, "rep"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"seq", &module_info_gooSboot, "seq"},
  {"find", &module_info_gooScolsScol, "find"},
  {"==", &module_info_gooSmacros, "=="},
  {"%su", &module_info_gooSboot, "%su"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"nul", &module_info_gooSboot, "nul"},
  {"set", &module_info_gooSboot, "set"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"until", &module_info_gooSmacros, "until"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"case", &module_info_gooSmacros, "case"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"def", &module_info_gooSboot, "def"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"let", &module_info_gooSboot, "let"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"try", &module_info_gooSboot, "try"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"len", &module_info_gooStypes, "len"},
  {"do", &module_info_gooSmacros, "do"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"map", &module_info_gooSmacros, "map"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"@==", &module_info_gooSboot, "@=="},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"loc", &module_info_gooSboot, "loc"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"for", &module_info_gooSmacros, "for"},
  {"ds", &module_info_gooSboot, "ds"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"dl", &module_info_gooSboot, "dl"},
  {"df", &module_info_gooSboot, "df"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"dv", &module_info_gooSboot, "dv"},
  {"ct", &module_info_gooSboot, "ct"},
  {"tup", &module_info_gooSboot, "tup"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"when", &module_info_gooSmacros, "when"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"op", &module_info_gooSmacros, "op"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"app", &module_info_gooSmacros, "app"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"esc", &module_info_gooSboot, "esc"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"error", &module_info_gooSboot, "error"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"export", &module_info_gooSboot, "export"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"%str", &module_info_gooSboot, "%str"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"quote", &module_info_gooSboot, "quote"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"fin", &module_info_gooSboot, "fin"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%put", &module_info_gooSboot, "%put"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"dss", &module_info_gooSboot, "dss"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"while", &module_info_gooSmacros, "while"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"isa", &module_info_gooSboot, "isa"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"dm", &module_info_gooSboot, "dm"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"@+", &module_info_gooSboot, "@+"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"or", &module_info_gooSmacros, "or"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"new", &module_info_gooSboot, "new"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"if", &module_info_gooSboot, "if"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%im", &module_info_gooSboot, "%im"},
  {"match", &module_info_gooSmacros, "match"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"nil", &module_info_gooSboot, "nil"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
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
