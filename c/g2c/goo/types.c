/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/types */

EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooStypesYas,"goo/types","as");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLintG,"goo/boot","<int>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Ynil,"goo/boot","nil");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLproductG,"goo/boot","<product>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ytup,"goo/boot","tup");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Ynul,"goo/boot","nul");
EXT(YOlst,"goo/boot","@lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YgooStypesYlen,"goo/types","len");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Ynew,"goo/boot","new");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ytail,"goo/boot","tail");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooStypesY2nd,"goo/types","2nd");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ynot,"goo/boot","not");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YgooStypesYtQ,"goo/types","t?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YgooStypesYtL,"goo/types","t<");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YgooStypesYtA,"goo/types","t+");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yhead,"goo/boot","head");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(YgooStypesYanyQ,"goo/types","any?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLcolG,"goo/boot","<col>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ylst,"goo/boot","lst");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_4);
DEFLIT(lit_3);
DEFLIT(lit_1);
DEFLIT(lit_2);
DEFLIT(lit_5);
DEFLIT(lit_0);

/* FUNCTIONS: */

FUNFOR(YgooStypesYtA);
FUNFOR(YgooStypesYtE);
FUNFOR(YgooStypesYtL);
FUNFOR(YgooStypesYtQ);
extern P YgooStypesY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooStypesYtA) {
  P args_;
  P T0,T1;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLunionG),VARREF(Yunion_elts),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooStypesYtE) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLsingletonG),VARREF(Ytype_object),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooStypesYtL) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLsubclassG),VARREF(Ytype_class),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooStypesYtQ) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYtE),YPfalse);
  T0 = CALL2(1,VARREF(YgooStypesYtA),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooStypesY___main_0___() {
  P tmpF869;
  P tmpF868;
  P tmpF867;
  P tmpF866;
  P tmpF865;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"t+");
  lit_1 = YPPsym((P)"args");
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooStypesYtA = YPmet(FUNCODEREF(YgooStypesYtA),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T1 = YgooStypesYtA;
  VARSET(YgooStypesYtA,T1);
  lit_2 = YPPsym((P)"t=");
  lit_3 = YPPsym((P)"x");
  T2 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtE = YPmet(FUNCODEREF(YgooStypesYtE),LITREF(lit_2),T2,ENVNUL,PNUL,YPfalse);
  T3 = YgooStypesYtE;
  VARSET(YgooStypesYtE,T3);
  lit_4 = YPPsym((P)"t<");
  T4 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtL = YPmet(FUNCODEREF(YgooStypesYtL),LITREF(lit_4),T4,ENVNUL,PNUL,YPfalse);
  T5 = YgooStypesYtL;
  VARSET(YgooStypesYtL,T5);
  lit_5 = YPPsym((P)"t?");
  T6 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooStypesYtQ = YPmet(FUNCODEREF(YgooStypesYtQ),LITREF(lit_5),T6,ENVNUL,PNUL,YPfalse);
  T7 = YgooStypesYtQ;
  VARSET(YgooStypesYtQ,T7);
  tmpF865 = YPfalse;
  if (tmpF865 != YPfalse) {
    T8 = VARREF(YgooStypesYas);
  } else {
    T8 = YPfalse;
  }
  tmpF866 = YPfalse;
  if (tmpF866 != YPfalse) {
    T9 = VARREF(YgooStypesYlen);
  } else {
    T9 = YPfalse;
  }
  tmpF867 = YPfalse;
  if (tmpF867 != YPfalse) {
    T10 = VARREF(YgooStypesY2nd);
  } else {
    T10 = YPfalse;
  }
  tmpF868 = YPfalse;
  if (tmpF868 != YPfalse) {
    T11 = VARREF(YgooStypesYanyQ);
  } else {
    T11 = YPfalse;
  }
  tmpF869 = YPfalse;
  if (tmpF869 != YPfalse) {
    T12 = VARREF(YgooStypesYall2Q);
  } else {
    T12 = YPfalse;
  }
  T13 = YPfalse;
  return T13;
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
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"use", &module_info_gooSboot, "use"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%put", &module_info_gooSboot, "%put"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"map", &module_info_gooSmacros, "map"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"@==", &module_info_gooSboot, "@=="},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"op", &module_info_gooSmacros, "op"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"fin", &module_info_gooSboot, "fin"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"app", &module_info_gooSmacros, "app"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"export", &module_info_gooSboot, "export"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"nul", &module_info_gooSboot, "nul"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"mif", &module_info_gooSboot, "mif"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"==", &module_info_gooSmacros, "=="},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"match", &module_info_gooSmacros, "match"},
  {"do", &module_info_gooSmacros, "do"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"fun", &module_info_gooSboot, "fun"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"case", &module_info_gooSmacros, "case"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%str", &module_info_gooSboot, "%str"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"when", &module_info_gooSmacros, "when"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"rep", &module_info_gooSboot, "rep"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"@len", &module_info_gooSboot, "@len"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"until", &module_info_gooSmacros, "until"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"not", &module_info_gooSboot, "not"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"def", &module_info_gooSboot, "def"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"for", &module_info_gooSmacros, "for"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"seq", &module_info_gooSboot, "seq"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"error", &module_info_gooSboot, "error"},
  {"dp", &module_info_gooSboot, "dp"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"quote", &module_info_gooSboot, "quote"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"df", &module_info_gooSboot, "df"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"dg", &module_info_gooSboot, "dg"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"dm", &module_info_gooSboot, "dm"},
  {"while", &module_info_gooSmacros, "while"},
  {"ds", &module_info_gooSboot, "ds"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"head", &module_info_gooSboot, "head"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"ct", &module_info_gooSboot, "ct"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"t*", &module_info_gooSboot, "t*"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%get", &module_info_gooSboot, "%get"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"set", &module_info_gooSboot, "set"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"lst", &module_info_gooSboot, "lst"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"try", &module_info_gooSboot, "try"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%time", &module_info_gooSboot, "%time"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"as", CVAR, &YgooStypesYas},
  {"len", CVAR, &YgooStypesYlen},
  {"---main-0---", PVAR, NULL},
  {"all2?", CVAR, &YgooStypesYall2Q},
  {"2nd", CVAR, &YgooStypesY2nd},
  {"t?", CVAR, &YgooStypesYtQ},
  {"t<", CVAR, &YgooStypesYtL},
  {"t=", CVAR, &YgooStypesYtE},
  {"t+", CVAR, &YgooStypesYtA},
  {"any?", CVAR, &YgooStypesYanyQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"as", "as"},
  {"type-class", "type-class"},
  {"class-direct-props", "class-direct-props"},
  {"<product>", "<product>"},
  {"<union>", "<union>"},
  {"<subclass>", "<subclass>"},
  {"<singleton>", "<singleton>"},
  {"len", "len"},
  {"t*", "t*"},
  {"type-object", "type-object"},
  {"isa?", "isa?"},
  {"class-children", "class-children"},
  {"class-parents", "class-parents"},
  {"<class>", "<class>"},
  {"product-elts", "product-elts"},
  {"all2?", "all2?"},
  {"<type>", "<type>"},
  {"class-props", "class-props"},
  {"t?", "t?"},
  {"class-name", "class-name"},
  {"t<", "t<"},
  {"t=", "t="},
  {"union-elts", "union-elts"},
  {"t+", "t+"},
  {"2nd", "2nd"},
  {"class-ancestors", "class-ancestors"},
  {"any?", "any?"},
  {"subtype?", "subtype?"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooStypes;
MODULE_INFO module_info_gooStypes = {
  "goo/types",
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

extern void load_module_gooStypes (void);

void load_module_gooStypes (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();

  (P)YgooStypesY___main_0___();

}

/* END OF GENERATED CODE. */
