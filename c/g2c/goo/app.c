/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/app */

EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YPprop,"goo/boot","%prop");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ynul,"goo/boot","nul");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ylst,"goo/boot","lst");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yhead,"goo/boot","head");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YisaQ,"goo/boot","isa?");
EXT(Ynot,"goo/boot","not");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YtT,"goo/boot","t*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Ynil,"goo/boot","nil");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_4);
DEFLIT(lit_2);
DEFLIT(lit_7);
DEFLIT(lit_6);
DEFLIT(lit_1);
DEFLIT(lit_0);

/* FUNCTIONS: */

LOCFOR(fun_loop1_0);
LOCFOR(fun_loop2_1);
FUNFOR(YgooSmacrosYnapp);
extern P YgooSappY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_loop1_0) {
  P i_;
  P topF6820;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = (P)YOA(FREEREF(0),YPint((P)-1));
  topF6820 = T1;
  T3 = (P)YOL(i_,FREEREF(1));
  if (T3 != YPfalse) {
    T4 = (P)YOoelt(FREEREF(2),i_);
    T6 = (P)YPiu(topF6820);
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
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
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
  P loop2F6827;
  P loop1F6826;
  P argendF6825;
  P stackspaceF6824;
  P tlenF6823;
  P leltF6822;
  P ilenF6821;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2,a3;
LINK_STACK();
  ARG(proc_, 0);
  ARG(nexts_, 1);
  NARGS(args_, 2);
loop:
  T2 = (P)YOolen(args_);
  T1 = (P)YOA(T2,YPint((P)-1));
  ilenF6821 = T1;
  T4 = (P)YOoelt(args_,ilenF6821);
  leltF6822 = T4;
  T7 = CALL1(1,VARREF(YgooStypesYlen),leltF6822);
  T6 = (P)YOA(ilenF6821,T7);
  tlenF6823 = T6;
  T12 = (P)YPiu(tlenF6823);
  T11 = (P)YPiA((P)2,T12);
  T10 = (P)YPallocate_stack(T11);
  T9 = (P)YPlb(T10);
  stackspaceF6824 = T9;
  T14 = (P)YPsp_reg();
  argendF6825 = T14;
  T15 = FUNSHELL(1,fun_loop1_0,5);
  loop1F6826 = T15;
  FUNINIT(loop1F6826, 5,tlenF6823,ilenF6821,args_,stackspaceF6824,loop1F6826);
  T16 = CALL1(0,loop1F6826,YPint((P)0));
  T17 = FUNSHELL(1,fun_loop2_1,3);
  loop2F6827 = T17;
  FUNINIT(loop2F6827, 3,stackspaceF6824,tlenF6823,loop2F6827);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),leltF6822);
  T20 = (P)YOA(YPint((P)1),ilenF6821);
  T18 = CALL2(0,loop2F6827,T19,T20);
  T21 = (P)YPiu(tlenF6823);
  T22 = (P)YPiu(tlenF6823);
  (P)YPloc_off_setter(T21,stackspaceF6824,T22);
  T24 = (P)YPiu(tlenF6823);
  T23 = (P)YPiA((P)1,T24);
  (P)YPloc_off_setter(proc_,stackspaceF6824,T23);
  (P)YPsp_reg_setter(argendF6825);
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
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
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
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"set", &module_info_gooSboot, "set"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"find", &module_info_gooScolsScol, "find"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"error", &module_info_gooSboot, "error"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"try", &module_info_gooSboot, "try"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"@<", &module_info_gooSboot, "@<"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"while", &module_info_gooSmacros, "while"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"fun", &module_info_gooSboot, "fun"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"==", &module_info_gooSmacros, "=="},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"%im", &module_info_gooSboot, "%im"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%su", &module_info_gooSboot, "%su"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"and", &module_info_gooSmacros, "and"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"when", &module_info_gooSmacros, "when"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"case", &module_info_gooSmacros, "case"},
  {"%str", &module_info_gooSboot, "%str"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"items", &module_info_gooScolsScol, "items"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"dm", &module_info_gooSboot, "dm"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"if", &module_info_gooSboot, "if"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"dv", &module_info_gooSboot, "dv"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"esc", &module_info_gooSboot, "esc"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"loc", &module_info_gooSboot, "loc"},
  {"app", &module_info_gooSmacros, "app"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"lst", &module_info_gooSboot, "lst"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"def", &module_info_gooSboot, "def"},
  {"let", &module_info_gooSboot, "let"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"export", &module_info_gooSboot, "export"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"map", &module_info_gooSmacros, "map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"head", &module_info_gooSboot, "head"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"for", &module_info_gooSmacros, "for"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"not", &module_info_gooSboot, "not"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"df", &module_info_gooSboot, "df"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%put", &module_info_gooSboot, "%put"},
  {"until", &module_info_gooSmacros, "until"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"len", &module_info_gooStypes, "len"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"del", &module_info_gooScolsScol, "del"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"op", &module_info_gooSmacros, "op"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fin", &module_info_gooSboot, "fin"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"do", &module_info_gooSmacros, "do"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"@len", &module_info_gooSboot, "@len"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"or", &module_info_gooSmacros, "or"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"nil", &module_info_gooSboot, "nil"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%get", &module_info_gooSboot, "%get"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"col", &module_info_gooScolsScol, "col"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"@+", &module_info_gooSboot, "@+"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
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
