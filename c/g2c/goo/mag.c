/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/mag */

EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ytup,"goo/boot","tup");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ynew,"goo/boot","new");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ytail,"goo/boot","tail");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YPprop,"goo/boot","%prop");
EXT(Ynot,"goo/boot","not");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooSmagYGE,"goo/mag",">=");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YgooSmagYLE,"goo/mag","<=");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yerror,"goo/boot","error");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLprim_intG,"goo/boot","<prim-int>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLnumG,"goo/boot","<num>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ylst,"goo/boot","lst");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YgooSmagYG,"goo/mag",">");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YgooSmagYL,"goo/mag","<");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YgooSmagYmax,"goo/mag","max");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_6);
DEFLIT(lit_2);
DEFLIT(lit_5);
DEFLIT(lit_0);
DEFLIT(lit_4);
DEFLIT(lit_3);
DEFLIT(lit_7);
DEFLIT(lit_1);

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
  P T0,T1;
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
  P T0,T1;
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
  P T0,T1;
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
  P T0,T1;
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
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
DEFCREGS();
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
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
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
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
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
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
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
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
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
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
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
  {"fin", &module_info_gooSboot, "fin"},
  {"app", &module_info_gooSmacros, "app"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"export", &module_info_gooSboot, "export"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"tup", &module_info_gooSboot, "tup"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"or", &module_info_gooSmacros, "or"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"new", &module_info_gooSboot, "new"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%str", &module_info_gooSboot, "%str"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"not", &module_info_gooSboot, "not"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"==", &module_info_gooSmacros, "=="},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"match", &module_info_gooSmacros, "match"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"fun", &module_info_gooSboot, "fun"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"case", &module_info_gooSmacros, "case"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"try", &module_info_gooSboot, "try"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"when", &module_info_gooSmacros, "when"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"ds", &module_info_gooSboot, "ds"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"dss", &module_info_gooSboot, "dss"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"head", &module_info_gooSboot, "head"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"error", &module_info_gooSboot, "error"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"df", &module_info_gooSboot, "df"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"dg", &module_info_gooSboot, "dg"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<prim-int>", &module_info_gooSboot, "<prim-int>"},
  {"while", &module_info_gooSmacros, "while"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"if", &module_info_gooSboot, "if"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"dc", &module_info_gooSboot, "dc"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"map", &module_info_gooSmacros, "map"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"set", &module_info_gooSboot, "set"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"def", &module_info_gooSboot, "def"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"@+", &module_info_gooSboot, "@+"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%time", &module_info_gooSboot, "%time"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"do", &module_info_gooSmacros, "do"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"op", &module_info_gooSmacros, "op"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"@len", &module_info_gooSboot, "@len"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"use", &module_info_gooSboot, "use"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"min", CVAR, &YgooSmagYmin},
  {">=", CVAR, &YgooSmagYGE},
  {"<=", CVAR, &YgooSmagYLE},
  {"---main-0---", PVAR, NULL},
  {">", CVAR, &YgooSmagYG},
  {"<", CVAR, &YgooSmagYL},
  {"max", CVAR, &YgooSmagYmax},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"min", "min"},
  {">=", ">="},
  {"<=", "<="},
  {"<mag>", "<mag>"},
  {">", ">"},
  {"<", "<"},
  {"max", "max"},
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
