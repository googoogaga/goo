/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/mag */

EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ynil,"goo/boot","nil");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YPvnul,"goo/boot","%vnul");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ytail,"goo/boot","tail");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YgooSmagYmax,"goo/mag","max");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YPprop,"goo/boot","%prop");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YPisa,"goo/boot","%isa");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yvec,"goo/boot","vec");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YgooSmagYmin,"goo/mag","min");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLmetG,"goo/boot","<met>");
EXT(Ynew,"goo/boot","new");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooSmagYGE,"goo/mag",">=");
EXT(YLintG,"goo/boot","<int>");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Ylst,"goo/boot","lst");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytup,"goo/boot","tup");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yhead,"goo/boot","head");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooSmagYLE,"goo/mag","<=");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Ynul,"goo/boot","nul");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YPdefine_method,"goo/boot","%define-method");
DEF(YgooSmagYG,"goo/mag",">");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yfun_names,"goo/boot","fun-names");
DEF(YgooSmagYL,"goo/mag","<");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yerror,"goo/boot","error");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_2);
DEFLIT(lit_4);
DEFLIT(lit_5);
DEFLIT(lit_6);
DEFLIT(lit_7);
DEFLIT(lit_1);
DEFLIT(lit_0);
DEFLIT(lit_3);

/* FUNCTIONS: */

LOCFOR(fun_G_0);
LOCFOR(fun_LE_1);
LOCFOR(fun_GE_2);
LOCFOR(fun_min_3);
LOCFOR(fun_max_4);
extern P YgooSmagY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_G_0) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSmagYL),y_,x_);
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
  T1 = CALL2(1,VARREF(YgooSmagYL),y_,x_);
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
  T1 = CALL2(1,VARREF(YgooSmagYL),x_,y_);
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
  T1 = CALL2(1,VARREF(YgooSmagYL),x_,y_);
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
  T1 = CALL2(1,VARREF(YgooSmagYG),x_,y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T0 = y_;
  }
UNLINK_STACK();
  RET(T0);
}

P YgooSmagY___main_0___() {
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<");
  lit_1 = YPPsym((P)"x");
  lit_2 = YPPsym((P)"y");
  T1 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmagYL,T0);
  lit_3 = YPPsym((P)">");
  T3 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmagYG,T2);
  lit_4 = YPPsym((P)"<=");
  T5 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmagYLE,T4);
  lit_5 = YPPsym((P)">=");
  T7 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmagYGE,T6);
  lit_6 = YPPsym((P)"min");
  T9 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLmagG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmagYmin,T8);
  lit_7 = YPPsym((P)"max");
  T11 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLmagG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_7),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmagYmax,T10);
  T12 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_G_0 = YPmet(FUNCODEREF(fun_G_0),LITREF(lit_3),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YgooSmagYG);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooSmagYG);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_G_0;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooSmagYG,T13);
  T17 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_LE_1 = YPmet(FUNCODEREF(fun_LE_1),LITREF(lit_4),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooSmagYLE);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooSmagYLE);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_LE_1;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooSmagYLE,T18);
  T22 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_GE_2 = YPmet(FUNCODEREF(fun_GE_2),LITREF(lit_5),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooSmagYGE);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooSmagYGE);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_GE_2;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooSmagYGE,T23);
  T27 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLmagG),Ynil);
  fun_min_3 = YPmet(FUNCODEREF(fun_min_3),LITREF(lit_6),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YgooSmagYmin);
  if (T30 != YPfalse) {
    T29 = VARREF(YgooSmagYmin);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_min_3;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YgooSmagYmin,T28);
  T34 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLmagG),Ynil);
  T33 = fun_max_4 = YPmet(FUNCODEREF(fun_max_4),LITREF(lit_7),T34,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YgooSmagYmax);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooSmagYmax);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_max_4;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  T35 = VARSET(YgooSmagYmax,T36);
  T32 = T35;
  return T32;
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
  {"opf", &module_info_gooSmacros, "opf"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"nil", &module_info_gooSboot, "nil"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"dp", &module_info_gooSboot, "dp"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"@==", &module_info_gooSboot, "@=="},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%get", &module_info_gooSboot, "%get"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"or", &module_info_gooSmacros, "or"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"def", &module_info_gooSboot, "def"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"do", &module_info_gooSmacros, "do"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"and", &module_info_gooSmacros, "and"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fin", &module_info_gooSboot, "fin"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"vec", &module_info_gooSboot, "vec"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"ct", &module_info_gooSboot, "ct"},
  {"@len", &module_info_gooSboot, "@len"},
  {"match", &module_info_gooSmacros, "match"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"new", &module_info_gooSboot, "new"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"==", &module_info_gooSmacros, "=="},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"df", &module_info_gooSboot, "df"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case", &module_info_gooSmacros, "case"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"set", &module_info_gooSboot, "set"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"dss", &module_info_gooSboot, "dss"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"lst", &module_info_gooSboot, "lst"},
  {"@<", &module_info_gooSboot, "@<"},
  {"not", &module_info_gooSboot, "not"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%im", &module_info_gooSboot, "%im"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"fun", &module_info_gooSboot, "fun"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%str", &module_info_gooSboot, "%str"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"tup", &module_info_gooSboot, "tup"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"use", &module_info_gooSboot, "use"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"head", &module_info_gooSboot, "head"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"map", &module_info_gooSmacros, "map"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"when", &module_info_gooSmacros, "when"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"dl", &module_info_gooSboot, "dl"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"until", &module_info_gooSmacros, "until"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"app", &module_info_gooSmacros, "app"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@+", &module_info_gooSboot, "@+"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"op", &module_info_gooSmacros, "op"},
  {"error", &module_info_gooSboot, "error"},
  {"for", &module_info_gooSmacros, "for"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"export", &module_info_gooSboot, "export"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"esc", &module_info_gooSboot, "esc"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"dg", &module_info_gooSboot, "dg"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"try", &module_info_gooSboot, "try"},
  {"quote", &module_info_gooSboot, "quote"},
  {"isa", &module_info_gooSboot, "isa"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"max", &YgooSmagYmax},
  {"min", &YgooSmagYmin},
  {">=", &YgooSmagYGE},
  {"---main-0---", NULL},
  {"<=", &YgooSmagYLE},
  {">", &YgooSmagYG},
  {"<", &YgooSmagYL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"max", "max"},
  {"<mag>", "<mag>"},
  {"min", "min"},
  {">=", ">="},
  {"<=", "<="},
  {">", ">"},
  {"<", "<"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSmag;
MODULE_INFO module_info_gooSmag = {
  "goo/mag",
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

extern void load_module_gooSmag (void);

void load_module_gooSmag (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();

  (P)YgooSmagY___main_0___();

}

/* END OF GENERATED CODE. */
