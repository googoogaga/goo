/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/mag */

EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ynot,"goo/boot","not");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ynul,"goo/boot","nul");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yfun_names,"goo/boot","fun-names");
DEF(YgooSmagYG,"goo/mag",">");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ylst,"goo/boot","lst");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YgooSmagYL,"goo/mag","<");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yhead,"goo/boot","head");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YgooSmagYmax,"goo/mag","max");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLstrG,"goo/boot","<str>");
DEF(YgooSmagYmin,"goo/mag","min");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YgooSmagYGE,"goo/mag",">=");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Ytup,"goo/boot","tup");
EXT(Ysig_val,"goo/boot","sig-val");
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
EXT(Yerror,"goo/boot","error");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YPisa,"goo/boot","%isa");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YgooSmagYLE,"goo/mag","<=");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YOlst,"goo/boot","@lst");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yprop_setter,"goo/boot","prop-setter");
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

DEFLIT(lit_0);
DEFLIT(lit_6);
DEFLIT(lit_7);
DEFLIT(lit_4);
DEFLIT(lit_3);
DEFLIT(lit_1);
DEFLIT(lit_2);
DEFLIT(lit_5);

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
  {"%cu", &module_info_gooSboot, "%cu"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"and", &module_info_gooSmacros, "and"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"not", &module_info_gooSboot, "not"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"@len", &module_info_gooSboot, "@len"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"fun", &module_info_gooSboot, "fun"},
  {"rep", &module_info_gooSboot, "rep"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"seq", &module_info_gooSboot, "seq"},
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
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"case", &module_info_gooSmacros, "case"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
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
  {"do", &module_info_gooSmacros, "do"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"map", &module_info_gooSmacros, "map"},
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
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"dl", &module_info_gooSboot, "dl"},
  {"df", &module_info_gooSboot, "df"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"dv", &module_info_gooSboot, "dv"},
  {"ct", &module_info_gooSboot, "ct"},
  {"tup", &module_info_gooSboot, "tup"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
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
  {"%i+", &module_info_gooSboot, "%i+"},
  {"error", &module_info_gooSboot, "error"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
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
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"quote", &module_info_gooSboot, "quote"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"fin", &module_info_gooSboot, "fin"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%sb", &module_info_gooSboot, "%sb"},
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
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"dm", &module_info_gooSboot, "dm"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"@+", &module_info_gooSboot, "@+"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"or", &module_info_gooSmacros, "or"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
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
  {">", &YgooSmagYG},
  {"<", &YgooSmagYL},
  {"max", &YgooSmagYmax},
  {"min", &YgooSmagYmin},
  {">=", &YgooSmagYGE},
  {"---main-0---", NULL},
  {"<=", &YgooSmagYLE},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {">", ">"},
  {"<", "<"},
  {"max", "max"},
  {"min", "min"},
  {"<mag>", "<mag>"},
  {">=", ">="},
  {"<=", "<="},
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
