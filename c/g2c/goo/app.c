/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/app */

EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ynot,"goo/boot","not");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YtT,"goo/boot","t*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Ylst,"goo/boot","lst");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLintG,"goo/boot","<int>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ytup,"goo/boot","tup");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ynew,"goo/boot","new");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yadd_prop,"goo/boot","add-prop");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_4);
DEFLIT(lit_2);
DEFLIT(lit_0);
DEFLIT(lit_6);
DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_7);
DEFLIT(lit_1);

/* FUNCTIONS: */

LOCFOR(fun_loop1_0);
LOCFOR(fun_loop2_1);
FUNFOR(YgooSmacrosYnapp);
extern P YgooSappY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_loop1_0) {
  P i_;
  P topF967;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = (P)YOA(FREEREF(0),YPint((P)-1));
  topF967 = T1;
  T3 = (P)YOL(i_,FREEREF(1));
  if (T3 != YPfalse) {
    T4 = (P)YOoelt(FREEREF(2),i_);
    T6 = (P)YPiu(topF967);
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
  P loop2F974;
  P loop1F973;
  P argendF972;
  P stackspaceF971;
  P tlenF970;
  P leltF969;
  P ilenF968;
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
  ilenF968 = T1;
  T4 = (P)YOoelt(args_,ilenF968);
  leltF969 = T4;
  T7 = CALL1(1,VARREF(YgooStypesYlen),leltF969);
  T6 = (P)YOA(ilenF968,T7);
  tlenF970 = T6;
  T12 = (P)YPiu(tlenF970);
  T11 = (P)YPiA((P)2,T12);
  T10 = (P)YPallocate_stack(T11);
  T9 = (P)YPlb(T10);
  stackspaceF971 = T9;
  T14 = (P)YPsp_reg();
  argendF972 = T14;
  T15 = FUNSHELL(1,fun_loop1_0,5);
  loop1F973 = T15;
  FUNINIT(loop1F973, 5,tlenF970,ilenF968,args_,stackspaceF971,loop1F973);
  T16 = CALL1(0,loop1F973,YPint((P)0));
  T17 = FUNSHELL(1,fun_loop2_1,3);
  loop2F974 = T17;
  FUNINIT(loop2F974, 3,stackspaceF971,tlenF970,loop2F974);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),leltF969);
  T20 = (P)YOA(YPint((P)1),ilenF968);
  T18 = CALL2(0,loop2F974,T19,T20);
  T21 = (P)YPiu(tlenF970);
  T22 = (P)YPiu(tlenF970);
  (P)YPloc_off_setter(T21,stackspaceF971,T22);
  T24 = (P)YPiu(tlenF970);
  T23 = (P)YPiA((P)1,T24);
  (P)YPloc_off_setter(proc_,stackspaceF971,T23);
  (P)YPsp_reg_setter(argendF972);
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
DEFCREGS();
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
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%su", &module_info_gooSboot, "%su"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"@len", &module_info_gooSboot, "@len"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"add", &module_info_gooScolsScol, "add"},
  {"when", &module_info_gooSmacros, "when"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"tail", &module_info_gooSboot, "tail"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"until", &module_info_gooSmacros, "until"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"not", &module_info_gooSboot, "not"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"def", &module_info_gooSboot, "def"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"for", &module_info_gooSmacros, "for"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"nul", &module_info_gooSboot, "nul"},
  {"df", &module_info_gooSboot, "df"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"col", &module_info_gooScolsScol, "col"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"dg", &module_info_gooSboot, "dg"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"dm", &module_info_gooSboot, "dm"},
  {"while", &module_info_gooSmacros, "while"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"if", &module_info_gooSboot, "if"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"head", &module_info_gooSboot, "head"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%time", &module_info_gooSboot, "%time"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"any?", &module_info_gooStypes, "any?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"t*", &module_info_gooSboot, "t*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"set", &module_info_gooSboot, "set"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"lst", &module_info_gooSboot, "lst"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"try", &module_info_gooSboot, "try"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"use", &module_info_gooSboot, "use"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%get", &module_info_gooSboot, "%get"},
  {"map", &module_info_gooSmacros, "map"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"find", &module_info_gooScolsScol, "find"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"op", &module_info_gooSmacros, "op"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"fin", &module_info_gooSboot, "fin"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"app", &module_info_gooSmacros, "app"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"export", &module_info_gooSboot, "export"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%str", &module_info_gooSboot, "%str"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"==", &module_info_gooSmacros, "=="},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"match", &module_info_gooSmacros, "match"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"fun", &module_info_gooSboot, "fun"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"nil", &module_info_gooSboot, "nil"},
  {"case", &module_info_gooSmacros, "case"},
  {"do", &module_info_gooSmacros, "do"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"esc", &module_info_gooSboot, "esc"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
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
