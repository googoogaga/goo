/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/mag */

EXT(YLclassG,"goo/boot","<class>");
DEF(YgooSmagYG,"goo/mag",">");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
DEF(YgooSmagYL,"goo/mag","<");
EXT(Ynot,"goo/boot","not");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooSmagYmax,"goo/mag","max");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YPprop,"goo/boot","%prop");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YPisa,"goo/boot","%isa");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ytup,"goo/boot","tup");
EXT(Ynil,"goo/boot","nil");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLstrG,"goo/boot","<str>");
DEF(YgooSmagYmin,"goo/mag","min");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLunionG,"goo/boot","<union>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YgooSmagYGE,"goo/mag",">=");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yerror,"goo/boot","error");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YgooSmagYLE,"goo/mag","<=");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ylst,"goo/boot","lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ytail,"goo/boot","tail");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Ynul,"goo/boot","nul");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfind_getter,"goo/boot","find-getter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_1);
DEFLIT(lit_2);
DEFLIT(lit_3);
DEFLIT(lit_4);
DEFLIT(lit_5);
DEFLIT(lit_6);
DEFLIT(lit_7);
DEFLIT(lit_0);

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
  {"<class>", &module_info_gooSboot, "<class>"},
  {"df", &module_info_gooSboot, "df"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"for", &module_info_gooSmacros, "for"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"use", &module_info_gooSboot, "use"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"not", &module_info_gooSboot, "not"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"dg", &module_info_gooSboot, "dg"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"when", &module_info_gooSmacros, "when"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"op", &module_info_gooSmacros, "op"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"set", &module_info_gooSboot, "set"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"export", &module_info_gooSboot, "export"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"map", &module_info_gooSmacros, "map"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"head", &module_info_gooSboot, "head"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%su", &module_info_gooSboot, "%su"},
  {"do", &module_info_gooSmacros, "do"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"while", &module_info_gooSmacros, "while"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%str", &module_info_gooSboot, "%str"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"@+", &module_info_gooSboot, "@+"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"dl", &module_info_gooSboot, "dl"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"dm", &module_info_gooSboot, "dm"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"def", &module_info_gooSboot, "def"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"match", &module_info_gooSmacros, "match"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"app", &module_info_gooSmacros, "app"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"or", &module_info_gooSmacros, "or"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"isa", &module_info_gooSboot, "isa"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"and", &module_info_gooSmacros, "and"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"error", &module_info_gooSboot, "error"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"loc", &module_info_gooSboot, "loc"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"until", &module_info_gooSmacros, "until"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"seq", &module_info_gooSboot, "seq"},
  {"new", &module_info_gooSboot, "new"},
  {"==", &module_info_gooSmacros, "=="},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"lst", &module_info_gooSboot, "lst"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%put", &module_info_gooSboot, "%put"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"case", &module_info_gooSmacros, "case"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"@len", &module_info_gooSboot, "@len"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"try", &module_info_gooSboot, "try"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"nul", &module_info_gooSboot, "nul"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"if", &module_info_gooSboot, "if"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
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
