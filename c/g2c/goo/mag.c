/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/magnitudes */

EXT(YLnumG,"boot","<num>");
EXT(YLvecG,"boot","<vec>");
EXT(Yprop_getter,"boot","prop-getter");
EXT(Yunexec,"boot","unexec");
EXT(Ytype_error,"boot","type-error");
EXT(Yclass_direct_props,"boot","class-direct-props");
EXT(YmacrosYgensym,"macros","gensym");
EXT(Yvec,"boot","vec");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YLmetG,"boot","<met>");
EXT(Yprop_init,"boot","prop-init");
EXT(YLsubclassG,"boot","<subclass>");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(Yclass_descendents,"boot","class-descendents");
EXT(Ygen_refs_setter,"boot","gen-refs-setter");
EXT(YLchrG,"boot","<chr>");
EXT(YLflatG,"boot","<flat>");
EXT(YsubtypeQ,"boot","subtype?");
EXT(Yprop_value_setter,"boot","prop-value-setter");
EXT(YPdefine_method,"boot","%define-method");
EXT(Ygen_refs,"boot","gen-refs");
EXT(Ynot,"boot","not");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(Ysig_specs,"boot","sig-specs");
EXT(YLtupG,"boot","<tup>");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YOlst,"boot","@lst");
EXT(YPvnul,"boot","%vnul");
EXT(YLfunG,"boot","<fun>");
EXT(YmacrosYmap,"macros","map");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Ysig_val,"boot","sig-val");
EXT(Yprop_boundQ,"boot","prop-bound?");
EXT(YLlstG,"boot","<lst>");
EXT(YLlogG,"boot","<log>");
EXT(Ytype_object,"boot","type-object");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(Yfab_class,"boot","fab-class");
EXT(Yfun_specs,"boot","fun-specs");
EXT(Ysym_name,"boot","sym-name");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(Yfun_name,"boot","fun-name");
EXT(Yprop_owner,"boot","prop-owner");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YmacrosYfab_setter_name,"macros","fab-setter-name");
EXT(Yobject_class,"boot","object-class");
EXT(Yclass_parents,"boot","class-parents");
EXT(YTreport_prop_unbound_errorsQT,"boot","*report-prop-unbound-errors?*");
EXT(Yprop_value,"boot","prop-value");
EXT(YmacrosYmatch_atom,"macros","match-atom");
DEF(YprotoSmagnitudesYG,"proto/magnitudes",">");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLseqG,"boot","<seq>");
EXT(YLanyG,"boot","<any>");
EXT(Yprop_type,"boot","prop-type");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(Yclass_props,"boot","class-props");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(Yerror,"boot","error");
DEF(YprotoSmagnitudesYL,"proto/magnitudes","<");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YLsigG,"boot","<sig>");
EXT(YPprop_unbound_error,"boot","%prop-unbound-error");
EXT(YPsymbols,"boot","%symbols");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Yfun_names,"boot","fun-names");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YOall2Q,"boot","@all2?");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YLcolG,"boot","<col>");
EXT(YLclassG,"boot","<class>");
EXT(YLmagG,"boot","<mag>");
DEF(YprotoSmagnitudesYmax,"proto/magnitudes","max");
EXT(YDmax_int,"boot","$max-int");
EXT(Yfind_setter,"boot","find-setter");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(Ytail_setter,"boot","tail-setter");
EXT(YPsnul,"boot","%snul");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YmacrosYcat,"macros","cat");
EXT(Yadd_prop,"boot","add-prop");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YLoptsG,"boot","<opts>");
EXT(Ytail,"boot","tail");
EXT(YLtypeG,"boot","<type>");
EXT(YmacrosYnapp,"macros","napp");
EXT(YLlocG,"boot","<loc>");
EXT(Yord_app_mets,"boot","ord-app-mets");
EXT(Ytype_elts,"boot","type-elts");
DEF(YprotoSmagnitudesYmin,"proto/magnitudes","min");
EXT(Yclass_name,"boot","class-name");
EXT(YPPmacro,"boot","%%macro");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yprop_setter,"boot","prop-setter");
EXT(Ynul,"boot","nul");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Yfun_val,"boot","fun-val");
EXT(Yclass_ancestors,"boot","class-ancestors");
EXT(YDmin_int,"boot","$min-int");
EXT(YmacrosYpair,"macros","pair");
EXT(YLfloG,"boot","<flo>");
EXT(YLsymG,"boot","<sym>");
DEF(YprotoSmagnitudesYGE,"proto/magnitudes",">=");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YmacrosYelt,"macros","elt");
EXT(Yfun_mets,"boot","fun-mets");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(Ygen_src_setter,"boot","gen-src-setter");
EXT(YmacrosYdo,"macros","do");
EXT(YOisaQ,"boot","@isa?");
EXT(YLpropG,"boot","<prop>");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YLgenG,"boot","<gen>");
EXT(Ynil,"boot","nil");
EXT(Ygen_src,"boot","gen-src");
EXT(Ynew,"boot","new");
EXT(Yobject_props,"boot","object-props");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLintG,"boot","<int>");
EXT(YLstrG,"boot","<str>");
EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(YPwith_monitor,"boot","%with-monitor");
DEF(YprotoSmagnitudesYLE,"proto/magnitudes","<=");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYcat_sym,"macros","cat-sym");
EXT(YmacrosYEE,"macros","==");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
EXT(YmacrosYrevX,"macros","rev!");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yhead_setter,"boot","head-setter");
EXT(Ytype_class,"boot","type-class");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(Ylst,"boot","lst");
EXT(Ytup,"boot","tup");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YisaQ,"boot","isa?");
EXT(YLunionG,"boot","<union>");
EXT(YPprop,"boot","%prop");
EXT(YPisa,"boot","%isa");
EXT(Yhead,"boot","head");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_6);
DEFLIT(lit_4);
DEFLIT(lit_1);
DEFLIT(lit_7);
DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_0);
DEFLIT(lit_5);

/* FUNCTIONS: */

LOCFOR(fun_G_0);
LOCFOR(fun_LE_1);
LOCFOR(fun_GE_2);
LOCFOR(fun_min_3);
LOCFOR(fun_max_4);
extern P YprotoSmagnitudesY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_G_0) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL2(1,VARREF(YprotoSmagnitudesYL),y_,x_);
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
  T1 = CALL2(1,VARREF(YprotoSmagnitudesYL),y_,x_);
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
  T1 = CALL2(1,VARREF(YprotoSmagnitudesYL),x_,y_);
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
  T1 = CALL2(1,VARREF(YprotoSmagnitudesYL),x_,y_);
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
  T1 = CALL2(1,VARREF(YprotoSmagnitudesYG),x_,y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T0 = y_;
  }
UNLINK_STACK();
  RET(T0);
}

P YprotoSmagnitudesY___main_0___() {
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<");
  lit_1 = YPPsym((P)"x");
  lit_2 = YPPsym((P)"y");
  T1 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmagnitudesYL,T0);
  lit_3 = YPPsym((P)">");
  T3 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmagnitudesYG,T2);
  lit_4 = YPPsym((P)"<=");
  T5 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmagnitudesYLE,T4);
  lit_5 = YPPsym((P)">=");
  T7 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmagnitudesYGE,T6);
  lit_6 = YPPsym((P)"min");
  T9 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLmagG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmagnitudesYmin,T8);
  lit_7 = YPPsym((P)"max");
  T11 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLmagG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_7),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YprotoSmagnitudesYmax,T10);
  T12 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_G_0 = YPmet(FUNCODEREF(fun_G_0),LITREF(lit_3),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YprotoSmagnitudesYG);
  if (T15 != YPfalse) {
    T14 = VARREF(YprotoSmagnitudesYG);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_G_0;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YprotoSmagnitudesYG,T13);
  T17 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_LE_1 = YPmet(FUNCODEREF(fun_LE_1),LITREF(lit_4),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YprotoSmagnitudesYLE);
  if (T20 != YPfalse) {
    T19 = VARREF(YprotoSmagnitudesYLE);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_LE_1;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YprotoSmagnitudesYLE,T18);
  T22 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_GE_2 = YPmet(FUNCODEREF(fun_GE_2),LITREF(lit_5),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YprotoSmagnitudesYGE);
  if (T25 != YPfalse) {
    T24 = VARREF(YprotoSmagnitudesYGE);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_GE_2;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YprotoSmagnitudesYGE,T23);
  T27 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLmagG),Ynil);
  fun_min_3 = YPmet(FUNCODEREF(fun_min_3),LITREF(lit_6),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YprotoSmagnitudesYmin);
  if (T30 != YPfalse) {
    T29 = VARREF(YprotoSmagnitudesYmin);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_min_3;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YprotoSmagnitudesYmin,T28);
  T34 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLmagG),VARREF(YLmagG)),YPfalse,YPint((P)2),VARREF(YLmagG),Ynil);
  T33 = fun_max_4 = YPmet(FUNCODEREF(fun_max_4),LITREF(lit_7),T34,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YprotoSmagnitudesYmax);
  if (T38 != YPfalse) {
    T37 = VARREF(YprotoSmagnitudesYmax);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_max_4;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  T35 = VARSET(YprotoSmagnitudesYmax,T36);
  T32 = T35;
  return T32;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<num>", &module_info_boot, "<num>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"prop-getter", &module_info_boot, "prop-getter"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"and", &module_info_macros, "and"},
  {"%unlink-stack", &module_info_boot, "%unlink-stack"},
  {"unexec", &module_info_boot, "unexec"},
  {"type-error", &module_info_boot, "type-error"},
  {"%fun-reg", &module_info_boot, "%fun-reg"},
  {"class-direct-props", &module_info_boot, "class-direct-props"},
  {"gensym", &module_info_macros, "gensym"},
  {"vec", &module_info_boot, "vec"},
  {"or", &module_info_macros, "or"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"<met>", &module_info_boot, "<met>"},
  {"mif", &module_info_boot, "mif"},
  {"use/export", &module_info_boot, "use/export"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@olen", &module_info_boot, "@olen"},
  {"until", &module_info_macros, "until"},
  {"prop-init", &module_info_boot, "prop-init"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"var-name", &module_info_macros, "var-name"},
  {"class-descendents", &module_info_boot, "class-descendents"},
  {"gen-refs-setter", &module_info_boot, "gen-refs-setter"},
  {"%fcos", &module_info_boot, "%fcos"},
  {"cond", &module_info_macros, "cond"},
  {"%loc-val-setter", &module_info_boot, "%loc-val-setter"},
  {"app", &module_info_macros, "app"},
  {"isa", &module_info_boot, "isa"},
  {"@+", &module_info_boot, "@+"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"dss", &module_info_boot, "dss"},
  {"prop-value-setter", &module_info_boot, "prop-value-setter"},
  {"%lu", &module_info_boot, "%lu"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"gen-refs", &module_info_boot, "gen-refs"},
  {"exported", &module_info_macros, "exported"},
  {"not", &module_info_boot, "not"},
  {"incf", &module_info_macros, "incf"},
  {"%get", &module_info_boot, "%get"},
  {"%i+", &module_info_boot, "%i+"},
  {"%f*", &module_info_boot, "%f*"},
  {"%iu", &module_info_boot, "%iu"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"%gen-src", &module_info_boot, "%gen-src"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"%im", &module_info_boot, "%im"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"%fsinh", &module_info_boot, "%fsinh"},
  {"%met-code", &module_info_boot, "%met-code"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"@lst", &module_info_boot, "@lst"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"rep", &module_info_boot, "rep"},
  {"opf", &module_info_macros, "opf"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"%os-val-setter", &module_info_boot, "%os-val-setter"},
  {"map", &module_info_macros, "map"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"match", &module_info_macros, "match"},
  {"assert", &module_info_macros, "assert"},
  {"sig-val", &module_info_boot, "sig-val"},
  {"prop-bound?", &module_info_boot, "prop-bound?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"<log>", &module_info_boot, "<log>"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"type-object", &module_info_boot, "type-object"},
  {"%open-out-file", &module_info_boot, "%open-out-file"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"%c<", &module_info_boot, "%c<"},
  {"%ftan", &module_info_boot, "%ftan"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"renew", &module_info_macros, "renew"},
  {"decf", &module_info_macros, "decf"},
  {"%raw", &module_info_boot, "%raw"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"%ready?", &module_info_boot, "%ready?"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%f+", &module_info_boot, "%f+"},
  {"@len", &module_info_boot, "@len"},
  {"%vec", &module_info_boot, "%vec"},
  {"%facos", &module_info_boot, "%facos"},
  {"%slen", &module_info_boot, "%slen"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"prop-owner", &module_info_boot, "prop-owner"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"fab-setter-name", &module_info_macros, "fab-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"%untag", &module_info_boot, "%untag"},
  {"object-class", &module_info_boot, "object-class"},
  {"%fsin", &module_info_boot, "%fsin"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"try", &module_info_boot, "try"},
  {"*report-prop-unbound-errors?*", &module_info_boot, "*report-prop-unbound-errors?*"},
  {"prop-value", &module_info_boot, "prop-value"},
  {"collected", &module_info_macros, "collected"},
  {"%i-", &module_info_boot, "%i-"},
  {"dv", &module_info_boot, "dv"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"<any>", &module_info_boot, "<any>"},
  {"prop-type", &module_info_boot, "prop-type"},
  {"seq", &module_info_boot, "seq"},
  {"var-type", &module_info_macros, "var-type"},
  {"%i<", &module_info_boot, "%i<"},
  {"%selt", &module_info_boot, "%selt"},
  {"%fatan", &module_info_boot, "%fatan"},
  {"pushf", &module_info_macros, "pushf"},
  {"class-props", &module_info_boot, "class-props"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"error", &module_info_boot, "error"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"ddv", &module_info_macros, "ddv"},
  {"%cb", &module_info_boot, "%cb"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"%force-out", &module_info_boot, "%force-out"},
  {"%fsqrt", &module_info_boot, "%fsqrt"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"%prop-unbound-error", &module_info_boot, "%prop-unbound-error"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"%iv", &module_info_boot, "%iv"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"collecting", &module_info_macros, "collecting"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"def", &module_info_boot, "def"},
  {"%gen-code", &module_info_boot, "%gen-code"},
  {"%puts", &module_info_boot, "%puts"},
  {"%su", &module_info_boot, "%su"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"@all2?", &module_info_boot, "@all2?"},
  {"@==", &module_info_boot, "@=="},
  {"quote", &module_info_boot, "quote"},
  {"%str", &module_info_boot, "%str"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"fin", &module_info_boot, "fin"},
  {"<col>", &module_info_boot, "<col>"},
  {"esc", &module_info_boot, "esc"},
  {"<class>", &module_info_boot, "<class>"},
  {"%close-in-port", &module_info_boot, "%close-in-port"},
  {"<mag>", &module_info_boot, "<mag>"},
  {"%i^", &module_info_boot, "%i^"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"%fatan2", &module_info_boot, "%fatan2"},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"%i=", &module_info_boot, "%i="},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"%i?", &module_info_boot, "%i?"},
  {"%snul", &module_info_boot, "%snul"},
  {"dp", &module_info_boot, "dp"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"%ftanh", &module_info_boot, "%ftanh"},
  {"cat", &module_info_macros, "cat"},
  {"for", &module_info_macros, "for"},
  {"%put", &module_info_boot, "%put"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"add-prop", &module_info_boot, "add-prop"},
  {"bound?", &module_info_boot, "bound?"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"@<", &module_info_boot, "@<"},
  {"dm", &module_info_boot, "dm"},
  {"tail", &module_info_boot, "tail"},
  {"%gen-code-setter", &module_info_boot, "%gen-code-setter"},
  {"<type>", &module_info_boot, "<type>"},
  {"napp", &module_info_macros, "napp"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"ord-app-mets", &module_info_boot, "ord-app-mets"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"case-by", &module_info_macros, "case-by"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"set", &module_info_boot, "set"},
  {"loc", &module_info_boot, "loc"},
  {"%i&", &module_info_boot, "%i&"},
  {"class-name", &module_info_boot, "class-name"},
  {"swapf", &module_info_macros, "swapf"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"%loc-val", &module_info_boot, "%loc-val"},
  {"if", &module_info_boot, "if"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"dlet", &module_info_macros, "dlet"},
  {"%peek", &module_info_boot, "%peek"},
  {"prop-setter", &module_info_boot, "prop-setter"},
  {"nul", &module_info_boot, "nul"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"%fasin", &module_info_boot, "%fasin"},
  {"fun-val", &module_info_boot, "fun-val"},
  {"when", &module_info_macros, "when"},
  {"%it/", &module_info_boot, "%it/"},
  {"%pair", &module_info_boot, "%pair"},
  {"collect", &module_info_macros, "collect"},
  {"class-ancestors", &module_info_boot, "class-ancestors"},
  {"%current-out-port", &module_info_boot, "%current-out-port"},
  {"%c=", &module_info_boot, "%c="},
  {"unless", &module_info_macros, "unless"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"%f=", &module_info_boot, "%f="},
  {"dc", &module_info_boot, "dc"},
  {"pair", &module_info_macros, "pair"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"%gen-refs", &module_info_boot, "%gen-refs"},
  {"app-sup", &module_info_macros, "app-sup"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"elt", &module_info_macros, "elt"},
  {"%close-out-port", &module_info_boot, "%close-out-port"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%f/", &module_info_boot, "%f/"},
  {"gen-src-setter", &module_info_boot, "gen-src-setter"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"do", &module_info_macros, "do"},
  {"%fpow", &module_info_boot, "%fpow"},
  {"@isa?", &module_info_boot, "@isa?"},
  {"export", &module_info_boot, "export"},
  {"while", &module_info_macros, "while"},
  {"%fcosh", &module_info_boot, "%fcosh"},
  {"ct", &module_info_boot, "ct"},
  {"<prop>", &module_info_boot, "<prop>"},
  {"empty?", &module_info_macros, "empty?"},
  {"dl", &module_info_boot, "dl"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"%ib", &module_info_boot, "%ib"},
  {"%i*", &module_info_boot, "%i*"},
  {"nil", &module_info_boot, "nil"},
  {"let", &module_info_boot, "let"},
  {"%open-in-file", &module_info_boot, "%open-in-file"},
  {"gen-src", &module_info_boot, "gen-src"},
  {"new", &module_info_boot, "new"},
  {"%f<", &module_info_boot, "%f<"},
  {"use", &module_info_boot, "use"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"%i!", &module_info_boot, "%i!"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"object-props", &module_info_boot, "object-props"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"dg", &module_info_boot, "dg"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<int>", &module_info_boot, "<int>"},
  {"%lb", &module_info_boot, "%lb"},
  {"<str>", &module_info_boot, "<str>"},
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"%fu", &module_info_boot, "%fu"},
  {"sup", &module_info_macros, "sup"},
  {"%sb", &module_info_boot, "%sb"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"%os-val", &module_info_boot, "%os-val"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"cat-sym", &module_info_macros, "cat-sym"},
  {"%velt", &module_info_boot, "%velt"},
  {"==", &module_info_macros, "=="},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"%cu", &module_info_boot, "%cu"},
  {"%current-in-port", &module_info_boot, "%current-in-port"},
  {"rev!", &module_info_macros, "rev!"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"without-prop-unbound-errors", &module_info_macros, "without-prop-unbound-errors"},
  {"ds", &module_info_boot, "ds"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"type-class", &module_info_boot, "type-class"},
  {"%flog", &module_info_boot, "%flog"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%fb", &module_info_boot, "%fb"},
  {"lst", &module_info_boot, "lst"},
  {"tup", &module_info_boot, "tup"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"isa?", &module_info_boot, "isa?"},
  {"<union>", &module_info_boot, "<union>"},
  {"fun", &module_info_boot, "fun"},
  {"%bb", &module_info_boot, "%bb"},
  {"%prop", &module_info_boot, "%prop"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"%f-", &module_info_boot, "%f-"},
  {"case", &module_info_macros, "case"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"%isa", &module_info_boot, "%isa"},
  {"popf", &module_info_macros, "popf"},
  {"head", &module_info_boot, "head"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"df", &module_info_boot, "df"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {">", &YprotoSmagnitudesYG},
  {"<", &YprotoSmagnitudesYL},
  {"max", &YprotoSmagnitudesYmax},
  {"min", &YprotoSmagnitudesYmin},
  {">=", &YprotoSmagnitudesYGE},
  {"<=", &YprotoSmagnitudesYLE},
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {">", ">"},
  {"<", "<"},
  {"<mag>", "<mag>"},
  {"max", "max"},
  {"min", "min"},
  {">=", ">="},
  {"<=", "<="},
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoSmagnitudes;
MODULE_INFO module_info_protoSmagnitudes = {
  "proto/magnitudes",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);

/* EXPRESSION: */

extern void load_module_protoSmagnitudes (void);

void load_module_protoSmagnitudes (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();

  (P)YprotoSmagnitudesY___main_0___();

}

/* END OF GENERATED CODE. */
