/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: goo/magnitude */

EXT(Ylst,"runtime/boot","lst");
EXT(YPisa,"runtime/boot","%isa");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(YLunionG,"runtime/boot","<union>");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(Yhead,"runtime/boot","head");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(Ynot,"runtime/boot","not");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YOlst,"runtime/boot","@lst");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(Yerror,"runtime/boot","error");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(Ynil,"runtime/boot","nil");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
DEF(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(Yvec,"runtime/boot","vec");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YPvnul,"runtime/boot","%vnul");
DEF(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ytail,"runtime/boot","tail");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YPsnul,"runtime/boot","%snul");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
DEF(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
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
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YLgenG,"runtime/boot","<gen>");
DEF(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YisaQ,"runtime/boot","isa?");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YPprop,"runtime/boot","%prop");
EXT(Yadd_prop,"runtime/boot","add-prop");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_5);
DEFLIT(lit_2);
DEFLIT(lit_3);
DEFLIT(lit_1);
DEFLIT(lit_4);
DEFLIT(lit_0);
DEFLIT(lit_6);
DEFLIT(lit_7);

/* FUNCTIONS: */

LOCFOR(fun_G_0);
LOCFOR(fun_LE_1);
LOCFOR(fun_GE_2);
LOCFOR(fun_min_3);
LOCFOR(fun_max_4);
extern P YgooSmagnitudeY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_G_0) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSmagnitudeYL),y_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_LE_1) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagnitudeYL),y_,x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_GE_2) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagnitudeYL),x_,y_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_min_3) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagnitudeYL),x_,y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T0 = y_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_max_4) {
  P x_,y_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagnitudeYG),x_,y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T0 = y_;
  }
UNLINK_STACK();
  RET(T0);
}

P YgooSmagnitudeY___main_0___() {
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<");
  lit_1 = YPPsym((P)"x");
  lit_2 = YPPsym((P)"y");
  T1 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmagnitudeYL,T0);
  lit_3 = YPPsym((P)">");
  T3 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmagnitudeYG,T2);
  lit_4 = YPPsym((P)"<=");
  T5 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmagnitudeYLE,T4);
  lit_5 = YPPsym((P)">=");
  T7 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmagnitudeYGE,T6);
  lit_6 = YPPsym((P)"min");
  T9 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLmagG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmagnitudeYmin,T8);
  lit_7 = YPPsym((P)"max");
  T11 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLmagG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_7),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmagnitudeYmax,T10);
  T12 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_G_0 = YPmet(FUNCODEREF(fun_G_0),LITREF(lit_3),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YgooSmagnitudeYG);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooSmagnitudeYG);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_G_0;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooSmagnitudeYG,T13);
  T17 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_LE_1 = YPmet(FUNCODEREF(fun_LE_1),LITREF(lit_4),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooSmagnitudeYLE);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooSmagnitudeYLE);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_LE_1;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooSmagnitudeYLE,T18);
  T22 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_GE_2 = YPmet(FUNCODEREF(fun_GE_2),LITREF(lit_5),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooSmagnitudeYGE);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooSmagnitudeYGE);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_GE_2;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooSmagnitudeYGE,T23);
  T27 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLmagG),Ynil);
  fun_min_3 = YPmet(FUNCODEREF(fun_min_3),LITREF(lit_6),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YgooSmagnitudeYmin);
  if (T30 != YPfalse) {
    T29 = VARREF(YgooSmagnitudeYmin);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_min_3;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YgooSmagnitudeYmin,T28);
  T34 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLmagG),Ynil);
  T33 = fun_max_4 = YPmet(FUNCODEREF(fun_max_4),LITREF(lit_7),T34,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooSmagnitudeYmax);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooSmagnitudeYmax);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_max_4;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  T35 = VARSET(YgooSmagnitudeYmax,T36);
  T32 = T35;
  return T32;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_runtimeSboot;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"lst", &module_info_runtimeSboot, "lst"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"df", &module_info_runtimeSboot, "df"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"match", &module_info_gooSmacros, "match"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
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
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"head", &module_info_runtimeSboot, "head"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"app", &module_info_gooSmacros, "app"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"try", &module_info_runtimeSboot, "try"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
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
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"until", &module_info_gooSmacros, "until"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
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
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"not", &module_info_runtimeSboot, "not"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"use", &module_info_runtimeSboot, "use"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"error", &module_info_runtimeSboot, "error"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"or", &module_info_gooSmacros, "or"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"%raw", &module_info_runtimeSboot, "%raw"},
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
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"for", &module_info_gooSmacros, "for"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
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
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
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
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"export", &module_info_runtimeSboot, "export"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"map", &module_info_gooSmacros, "map"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
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
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"var-type", &module_info_gooSmacros, "var-type"},
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
  {"set", &module_info_runtimeSboot, "set"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
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
  {"collect", &module_info_gooSmacros, "collect"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {">", &YgooSmagnitudeYG},
  {"<", &YgooSmagnitudeYL},
  {"max", &YgooSmagnitudeYmax},
  {"min", &YgooSmagnitudeYmin},
  {"---main-0---", NULL},
  {">=", &YgooSmagnitudeYGE},
  {"<=", &YgooSmagnitudeYLE},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<mag>", "<mag>"},
  {">", ">"},
  {"<", "<"},
  {"max", "max"},
  {"min", "min"},
  {">=", ">="},
  {"<=", "<="},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSmagnitude;
MODULE_INFO module_info_gooSmagnitude = {
  "goo/magnitude",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);

/* EXPRESSION: */

extern void load_module_gooSmagnitude (void);

void load_module_gooSmagnitude (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();

  (P)YgooSmagnitudeY___main_0___();

}

/* END OF GENERATED CODE. */
