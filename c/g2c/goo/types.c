/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/types */

EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(Ytype_error,"boot","type-error");
EXT(YLoptsG,"boot","<opts>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YDmin_int,"boot","$min-int");
EXT(YmacrosYfin_stateQ,"macros","fin-state?");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(Ytype_object,"boot","type-object");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYini_state,"macros","ini-state");
EXT(YLclassG,"boot","<class>");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YLtypeG,"boot","<type>");
DEF(YprotoStypesYfalse_or,"proto/types","false-or");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(Yslot_init,"boot","slot-init");
EXT(Yobject_slots,"boot","object-slots");
EXT(YLsymG,"boot","<sym>");
DEF(YprotoStypesYtL,"proto/types","t<");
EXT(Yfind_setter,"boot","find-setter");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YLstrG,"boot","<str>");
EXT(YPvnul,"boot","%vnul");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
DEF(YprotoStypesYtE,"proto/types","t=");
EXT(Yerror,"boot","error");
EXT(YLvecG,"boot","<vec>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(Yhead_setter,"boot","head-setter");
EXT(Yfind_getter,"boot","find-getter");
EXT(YmacrosYpair,"macros","pair");
EXT(YLflatG,"boot","<flat>");
EXT(Yhead,"boot","head");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
DEF(YprotoStypesYtA,"proto/types","t+");
EXT(Ynul,"boot","nul");
EXT(Yobject_class,"boot","object-class");
EXT(Yfun_mets,"boot","fun-mets");
EXT(Ysym_name,"boot","sym-name");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YLfunG,"boot","<fun>");
EXT(YmacrosYnapply,"macros","napply");
EXT(YLlstG,"boot","<lst>");
EXT(YPsnul,"boot","%snul");
EXT(YDmax_int,"boot","$max-int");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YLseqG,"boot","<seq>");
EXT(YmacrosYcat,"macros","cat");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(Ytail,"boot","tail");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
DEF(YprotoStypesYas,"proto/types","as");
EXT(Ylst,"boot","lst");
EXT(Yclass_slots,"boot","class-slots");
EXT(YLcolG,"boot","<col>");
EXT(Yfab_class,"boot","fab-class");
EXT(YLtupG,"boot","<tup>");
EXT(YLsigG,"boot","<sig>");
EXT(YLlocG,"boot","<loc>");
EXT(Ytype_elts,"boot","type-elts");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YLnumG,"boot","<num>");
EXT(YLintG,"boot","<int>");
EXT(Ynil,"boot","nil");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YmacrosYEE,"macros","==");
EXT(Yfun_value,"boot","fun-value");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YPslot,"boot","%slot");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YPsymbols,"boot","%symbols");
EXT(YLlogG,"boot","<log>");
EXT(Yvec,"boot","vec");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YLslotG,"boot","<slot>");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YPPmacro,"boot","%%macro");
EXT(Ynot,"boot","not");
EXT(Yfun_name,"boot","fun-name");
EXT(Yclass_parents,"boot","class-parents");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLanyG,"boot","<any>");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YLunionG,"boot","<union>");
EXT(Yslot_value,"boot","slot-value");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YmacrosYmap,"macros","map");
EXT(YLsubclassG,"boot","<subclass>");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YmacrosYrevX,"macros","rev!");
EXT(Yunexec,"boot","unexec");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YLsingletonG,"boot","<singleton>");
EXT(Ytup,"boot","tup");
EXT(YmacrosYnxt_state,"macros","nxt-state");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(Yadd_slot,"boot","add-slot");
EXT(YisaQ,"boot","isa?");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYnow_elt,"macros","now-elt");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YmacrosYelt,"macros","elt");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_7);
DEFLIT(lit_3);
DEFLIT(lit_1);
DEFLIT(lit_5);
DEFLIT(lit_6);
DEFLIT(lit_0);
DEFLIT(lit_4);
DEFLIT(lit_2);

/* FUNCTIONS: */

FUNFOR(YprotoStypesYtA);
FUNFOR(YprotoStypesYtE);
FUNFOR(YprotoStypesYtL);
FUNFOR(YprotoStypesYfalse_or);
extern P YprotoStypesY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YprotoStypesYtA) {
  P args_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = (P)YPpair(VARREF(Ytype_elts),Ynil);
  T3 = CALL2(1,VARREF(YprotoStypesYas),VARREF(YLlstG),args_);
  T2 = (P)YPpair(T3,Ynil);
  T0 = CALL3(1,VARREF(YPisa),VARREF(YLunionG),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YprotoStypesYtE) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPpair(VARREF(Ytype_object),Ynil);
  T2 = (P)YPpair(x_,Ynil);
  T0 = CALL3(1,VARREF(YPisa),VARREF(YLsingletonG),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YprotoStypesYtL) {
  P x_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPpair(VARREF(Ytype_class),Ynil);
  T2 = (P)YPpair(x_,Ynil);
  T0 = CALL3(1,VARREF(YPisa),VARREF(YLsubclassG),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YprotoStypesYfalse_or) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YprotoStypesYtE),YPfalse);
  T0 = CALL2(1,VARREF(YprotoStypesYtA),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YprotoStypesY___main_0___() {
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"as");
  lit_1 = YPPsym((P)"x");
  lit_2 = YPPsym((P)"y");
  T1 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T0 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),LITREF(lit_0),T1,Ynil,YPfalse);
  VARSET(YprotoStypesYas,T0);
  lit_3 = YPPsym((P)"t+");
  lit_4 = YPPsym((P)"args");
  T2 = YPsig(YPPlist(1,LITREF(lit_4)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YprotoStypesYtA = YPmet(FUNCODEREF(YprotoStypesYtA),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
  T3 = YprotoStypesYtA;
  VARSET(YprotoStypesYtA,T3);
  lit_5 = YPPsym((P)"t=");
  T4 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YprotoStypesYtE = YPmet(FUNCODEREF(YprotoStypesYtE),LITREF(lit_5),T4,ENVNUL,PNUL,YPfalse);
  T5 = YprotoStypesYtE;
  VARSET(YprotoStypesYtE,T5);
  lit_6 = YPPsym((P)"t<");
  T6 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YprotoStypesYtL = YPmet(FUNCODEREF(YprotoStypesYtL),LITREF(lit_6),T6,ENVNUL,PNUL,YPfalse);
  T7 = YprotoStypesYtL;
  VARSET(YprotoStypesYtL,T7);
  lit_7 = YPPsym((P)"false-or");
  T10 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T9 = YprotoStypesYfalse_or = YPmet(FUNCODEREF(YprotoStypesYfalse_or),LITREF(lit_7),T10,ENVNUL,PNUL,YPfalse);
  T12 = YprotoStypesYfalse_or;
  T11 = VARSET(YprotoStypesYfalse_or,T12);
  T8 = T11;
  return T8;
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
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"type-error", &module_info_boot, "type-error"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"var-type", &module_info_macros, "var-type"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"dv", &module_info_boot, "dv"},
  {"%f=", &module_info_boot, "%f="},
  {"fin-state?", &module_info_macros, "fin-state?"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%iu", &module_info_boot, "%iu"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"use", &module_info_boot, "use"},
  {"%lu", &module_info_boot, "%lu"},
  {"type-object", &module_info_boot, "type-object"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"ini-state", &module_info_macros, "ini-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"dp", &module_info_boot, "dp"},
  {"gensym", &module_info_macros, "gensym"},
  {"ddv", &module_info_macros, "ddv"},
  {"%pair", &module_info_boot, "%pair"},
  {"and", &module_info_macros, "and"},
  {"%i-", &module_info_boot, "%i-"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"<type>", &module_info_boot, "<type>"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"rep", &module_info_boot, "rep"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"%c<", &module_info_boot, "%c<"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"inc", &module_info_macros, "inc"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%c=", &module_info_boot, "%c="},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"lab", &module_info_boot, "lab"},
  {"exported", &module_info_macros, "exported"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"<str>", &module_info_boot, "<str>"},
  {"dss", &module_info_boot, "dss"},
  {"isa", &module_info_boot, "isa"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"export", &module_info_boot, "export"},
  {"%iv", &module_info_boot, "%iv"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"@==", &module_info_boot, "@=="},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"error", &module_info_boot, "error"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%slen", &module_info_boot, "%slen"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"<met>", &module_info_boot, "<met>"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"quote", &module_info_boot, "quote"},
  {"pair", &module_info_macros, "pair"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"head", &module_info_boot, "head"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"when", &module_info_macros, "when"},
  {"nul", &module_info_boot, "nul"},
  {"apply", &module_info_macros, "apply"},
  {"object-class", &module_info_boot, "object-class"},
  {"%i<", &module_info_boot, "%i<"},
  {"%sb", &module_info_boot, "%sb"},
  {"%str", &module_info_boot, "%str"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"set", &module_info_boot, "set"},
  {"%i&", &module_info_boot, "%i&"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"%raw", &module_info_boot, "%raw"},
  {"case", &module_info_macros, "case"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"swapf", &module_info_macros, "swapf"},
  {"opf", &module_info_macros, "opf"},
  {"%untag", &module_info_boot, "%untag"},
  {"ct", &module_info_boot, "ct"},
  {"napply", &module_info_macros, "napply"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%fb", &module_info_boot, "%fb"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%snul", &module_info_boot, "%snul"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"%cb", &module_info_boot, "%cb"},
  {"%i+", &module_info_boot, "%i+"},
  {"collect", &module_info_macros, "collect"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"dc", &module_info_boot, "dc"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"use/export", &module_info_boot, "use/export"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"fin", &module_info_boot, "fin"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"if", &module_info_boot, "if"},
  {"sorted-app-mets", &module_info_boot, "sorted-app-mets"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"cat", &module_info_macros, "cat"},
  {"%i!", &module_info_boot, "%i!"},
  {"%i>>", &module_info_boot, "%i>>"},
  {"fun-sig-setter", &module_info_boot, "fun-sig-setter"},
  {"%f*", &module_info_boot, "%f*"},
  {"%file-exists?", &module_info_boot, "%file-exists?"},
  {"*restarts-ok?*", &module_info_boot, "*restarts-ok?*"},
  {"tail", &module_info_boot, "tail"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"%f+", &module_info_boot, "%f+"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"lst", &module_info_boot, "lst"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"%vec", &module_info_boot, "%vec"},
  {"<col>", &module_info_boot, "<col>"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"dg", &module_info_boot, "dg"},
  {"for", &module_info_macros, "for"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"try", &module_info_boot, "try"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"dec", &module_info_macros, "dec"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"let", &module_info_boot, "let"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"ds", &module_info_boot, "ds"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"%i=", &module_info_boot, "%i="},
  {"dlet", &module_info_macros, "dlet"},
  {"%isa", &module_info_boot, "%isa"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"%i?", &module_info_boot, "%i?"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"@+", &module_info_boot, "@+"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%fu", &module_info_boot, "%fu"},
  {"next-method", &module_info_macros, "next-method"},
  {"df", &module_info_boot, "df"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"class-name", &module_info_boot, "class-name"},
  {"%bb", &module_info_boot, "%bb"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"<num>", &module_info_boot, "<num>"},
  {"<int>", &module_info_boot, "<int>"},
  {"nil", &module_info_boot, "nil"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%i^", &module_info_boot, "%i^"},
  {"==", &module_info_macros, "=="},
  {"fun-value", &module_info_boot, "fun-value"},
  {"%f/", &module_info_boot, "%f/"},
  {"%su", &module_info_boot, "%su"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"%cu", &module_info_boot, "%cu"},
  {"empty?", &module_info_macros, "empty?"},
  {"%slot", &module_info_boot, "%slot"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"bound?", &module_info_boot, "bound?"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"<log>", &module_info_boot, "<log>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"vec", &module_info_boot, "vec"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"not", &module_info_boot, "not"},
  {"%selt", &module_info_boot, "%selt"},
  {"@<", &module_info_boot, "@<"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<any>", &module_info_boot, "<any>"},
  {"dm", &module_info_boot, "dm"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"%im", &module_info_boot, "%im"},
  {"%it/", &module_info_boot, "%it/"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<union>", &module_info_boot, "<union>"},
  {"select", &module_info_macros, "select"},
  {"seq", &module_info_boot, "seq"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"mif", &module_info_boot, "mif"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"map", &module_info_macros, "map"},
  {"fun", &module_info_boot, "fun"},
  {"%i*", &module_info_boot, "%i*"},
  {"%f<", &module_info_boot, "%f<"},
  {"collected", &module_info_macros, "collected"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"rev!", &module_info_macros, "rev!"},
  {"or", &module_info_macros, "or"},
  {"unless", &module_info_macros, "unless"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"unexec", &module_info_boot, "unexec"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"%ib", &module_info_boot, "%ib"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"@olen", &module_info_boot, "@olen"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"pushf", &module_info_macros, "pushf"},
  {"tup", &module_info_boot, "tup"},
  {"nxt-state", &module_info_macros, "nxt-state"},
  {"%force-output", &module_info_boot, "%force-output"},
  {"collecting", &module_info_macros, "collecting"},
  {"loc", &module_info_boot, "loc"},
  {"%lb", &module_info_boot, "%lb"},
  {"%allocate-stack", &module_info_boot, "%allocate-stack"},
  {"%f-", &module_info_boot, "%f-"},
  {"%velt", &module_info_boot, "%velt"},
  {"%binding-name", &module_info_boot, "%binding-name"},
  {"%write-char", &module_info_boot, "%write-char"},
  {"*boot-macro-expanders*", &module_info_boot, "*boot-macro-expanders*"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"popf", &module_info_macros, "popf"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"isa?", &module_info_boot, "isa?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"now-elt", &module_info_macros, "now-elt"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"assert", &module_info_macros, "assert"},
  {"var-name", &module_info_macros, "var-name"},
  {"elt", &module_info_macros, "elt"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"false-or", &YprotoStypesYfalse_or},
  {"t<", &YprotoStypesYtL},
  {"t=", &YprotoStypesYtE},
  {"t+", &YprotoStypesYtA},
  {"as", &YprotoStypesYas},
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"class-direct-slots", "class-direct-slots"},
  {"type-object", "type-object"},
  {"<class>", "<class>"},
  {"<type>", "<type>"},
  {"false-or", "false-or"},
  {"t<", "t<"},
  {"class-direct-children", "class-direct-children"},
  {"t=", "t="},
  {"class-direct-parents", "class-direct-parents"},
  {"t+", "t+"},
  {"as", "as"},
  {"class-slots", "class-slots"},
  {"type-elts", "type-elts"},
  {"class-name", "class-name"},
  {"subtype?", "subtype?"},
  {"class-parents", "class-parents"},
  {"type-class", "type-class"},
  {"<union>", "<union>"},
  {"<subclass>", "<subclass>"},
  {"<singleton>", "<singleton>"},
  {"isa?", "isa?"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoStypes;
MODULE_INFO module_info_protoStypes = {
  "proto/types",
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

extern void load_module_protoStypes (void);

void load_module_protoStypes (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();

  (P)YprotoStypesY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
