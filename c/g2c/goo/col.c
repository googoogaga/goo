/* PROTO 2 C $REVISION: 0.107 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: proto/collections */

EXT(Yfile_opening_error,"boot","file-opening-error");
EXT(Ytype_error,"boot","type-error");
EXT(YLoptsG,"boot","<opts>");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YprotoScollectionsSassocYassocs_test,"proto/collections/assoc","assocs-test");
EXT(YTboot_macro_namesT,"boot","*boot-macro-names*");
EXT(YprotoScollectionsSstringYTprint_baseT,"proto/collections/string","*print-base*");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(YDmin_int,"boot","$min-int");
EXT(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
EXT(YmacrosYfin_stateQ,"macros","fin-state?");
EXT(Yclass_direct_slots,"boot","class-direct-slots");
EXT(YprotoScollectionsStableYtable_shrink_threshold,"proto/collections/table","table-shrink-threshold");
EXT(YprotoScollectionsScollectionYall2Q,"proto/collections/collection","all2?");
EXT(YprotoScollectionsSrangeYfrom,"proto/collections/range","from");
EXT(YprotoScollectionsScollectionYnow_elt_setter,"proto/collections/collection","now-elt-setter");
EXT(Ytype_object,"boot","type-object");
EXT(YTmacros_okQT,"boot","*macros-ok?*");
EXT(Yunknown_function_error,"boot","unknown-function-error");
EXT(YmacrosYini_state,"macros","ini-state");
EXT(YLclassG,"boot","<class>");
EXT(YprotoScollectionsScollectionYlen,"proto/collections/collection","len");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YprotoScollectionsSrangeYfrom_to_by,"proto/collections/range","from-to-by");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
EXT(YprotoScollectionsStableYLstr_tabG,"proto/collections/table","<str-tab>");
EXT(YLtypeG,"boot","<type>");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YprotoScollectionsStableYtable_growth_factor_setter,"proto/collections/table","table-growth-factor-setter");
EXT(Yfun_specs,"boot","fun-specs");
EXT(YprotoScollectionsScollectionYdel_keys,"proto/collections/collection","del-keys");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YprotoScollectionsSbufferYlen_setter,"proto/collections/buffer","len-setter");
EXT(Yobject_parents,"boot","object-parents");
EXT(Ysig_naryQ,"boot","sig-nary?");
EXT(YLgenG,"boot","<gen>");
EXT(Yslot_init,"boot","slot-init");
EXT(YprotoScollectionsSlistYassqn,"proto/collections/list","assqn");
EXT(YprotoScollectionsScollectionYinto,"proto/collections/collection","into");
EXT(Yobject_slots,"boot","object-slots");
EXT(YprotoScollectionsStableYid_hash,"proto/collections/table","id-hash");
EXT(YLsymG,"boot","<sym>");
EXT(YprotoScollectionsSassocYassocs_test_setter,"proto/collections/assoc","assocs-test-setter");
EXT(Yfind_setter,"boot","find-setter");
EXT(YprotoSmathYfabs,"proto/math","fabs");
EXT(Yclass_direct_children,"boot","class-direct-children");
EXT(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
EXT(YLstrG,"boot","<str>");
EXT(YprotoScollectionsStableYtable_protocol,"proto/collections/table","table-protocol");
EXT(YPvnul,"boot","%vnul");
EXT(YprotoScollectionsScollectionYdel_key,"proto/collections/collection","del-key");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YprotoScollectionsScollectionYdo,"proto/collections/collection","do");
EXT(Yerror,"boot","error");
EXT(YLvecG,"boot","<vec>");
EXT(Yslot_owner,"boot","slot-owner");
EXT(Yfun_names,"boot","fun-names");
EXT(YLmetG,"boot","<met>");
EXT(Yhead_setter,"boot","head-setter");
EXT(YprotoScollectionsSsequenceYdo_key_vals,"proto/collections/sequence","do-key-vals");
EXT(YprotoScollectionsSbufferYlenSfill_setter,"proto/collections/buffer","len/fill-setter");
EXT(YprotoScollectionsSsequenceYrange_checkQ,"proto/collections/sequence","range-check?");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
EXT(Yfind_getter,"boot","find-getter");
EXT(YmacrosYpair,"macros","pair");
EXT(YLflatG,"boot","<flat>");
EXT(Yhead,"boot","head");
EXT(YprotoScollectionsSrangeYfrom_above,"proto/collections/range","from-above");
EXT(Ysig_unification_vars,"boot","sig-unification-vars");
EXT(Yclass_direct_parents,"boot","class-direct-parents");
EXT(YprotoScollectionsScollectionYfind_key,"proto/collections/collection","find-key");
EXT(Ynul,"boot","nul");
EXT(Yobject_class,"boot","object-class");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YprotoScollectionsSbufferYpop_lastX,"proto/collections/buffer","pop-last!");
EXT(Ysym_name,"boot","sym-name");
EXT(Yfab_gen,"boot","fab-gen");
EXT(YprotoScollectionsStableYtable_shrink_threshold_setter,"proto/collections/table","table-shrink-threshold-setter");
EXT(YLfunG,"boot","<fun>");
EXT(YmacrosYnapply,"macros","napply");
EXT(YprotoScollectionsSsequenceYrange_check,"proto/collections/sequence","range-check");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YLlstG,"boot","<lst>");
EXT(YPsnul,"boot","%snul");
EXT(YprotoScollectionsSsequenceYaddX,"proto/collections/sequence","add!");
EXT(YDmax_int,"boot","$max-int");
EXT(YprotoScollectionsSmapYfab_map,"proto/collections/map","fab-map");
EXT(Ysig_specs,"boot","sig-specs");
EXT(Ytail_setter,"boot","tail-setter");
EXT(Yslot_type,"boot","slot-type");
EXT(YprotoScollectionsScollectionYreduceA,"proto/collections/collection","reduce+");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(Ysorted_app_mets,"boot","sorted-app-mets");
EXT(YLseqG,"boot","<seq>");
EXT(YmacrosYcat,"macros","cat");
EXT(Yfun_sig_setter,"boot","fun-sig-setter");
EXT(YTrestarts_okQT,"boot","*restarts-ok?*");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
EXT(Ytail,"boot","tail");
EXT(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
EXT(YprotoScollectionsStableYLtabG,"proto/collections/table","<tab>");
EXT(YprotoScollectionsSstringYascii_limit,"proto/collections/string","ascii-limit");
EXT(YprotoScollectionsSbufferYpush_lastX,"proto/collections/buffer","push-last!");
EXT(YprotoScollectionsSrangeYfrom_to,"proto/collections/range","from-to");
EXT(Ylst,"boot","lst");
EXT(Yclass_slots,"boot","class-slots");
EXT(YprotoScollectionsSsequenceYrange_error,"proto/collections/sequence","range-error");
EXT(YLcolG,"boot","<col>");
EXT(YprotoScollectionsSsequenceYvals_to_str,"proto/collections/sequence","vals-to-str");
EXT(YprotoScollectionsStableYtable_growth_threshold,"proto/collections/table","table-growth-threshold");
EXT(Yfab_class,"boot","fab-class");
EXT(YLtupG,"boot","<tup>");
EXT(YprotoScollectionsScollectionYdefault,"proto/collections/collection","default");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
EXT(YLsigG,"boot","<sig>");
EXT(YprotoScollectionsSlistYlist,"proto/collections/list","list");
EXT(YLlocG,"boot","<loc>");
EXT(YprotoScollectionsSbufferYbuf,"proto/collections/buffer","buf");
EXT(YprotoScollectionsScollectionYreduce,"proto/collections/collection","reduce");
EXT(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
EXT(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
EXT(YprotoScollectionsSrangeYfrom_below_by,"proto/collections/range","from-below-by");
EXT(YPisa,"boot","%isa");
EXT(YLfloG,"boot","<flo>");
EXT(YprotoScollectionsStableYcase_insensitive_string_equal,"proto/collections/table","case-insensitive-string-equal");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
EXT(Ysig_value,"boot","sig-value");
EXT(Yclass_name,"boot","class-name");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(YprotoScollectionsSsequenceYdel,"proto/collections/sequence","del");
EXT(YmacrosYmake_sym,"macros","make-sym");
EXT(YprotoScollectionsSbufferYLbufG,"proto/collections/buffer","<buf>");
EXT(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
EXT(YLnumG,"boot","<num>");
EXT(YLintG,"boot","<int>");
EXT(Ynil,"boot","nil");
EXT(YprotoScollectionsSstringYstr_to_num,"proto/collections/string","str-to-num");
EXT(Ykeyboard_interrupt,"boot","keyboard-interrupt");
EXT(YmacrosYEE,"macros","==");
EXT(Yfun_value,"boot","fun-value");
EXT(YprotoScollectionsSstepYLstepG,"proto/collections/step","<step>");
EXT(YprotoScollectionsSmapYLmapG,"proto/collections/map","<map>");
EXT(YLchrG,"boot","<chr>");
EXT(YmacrosYmake_setter_name,"macros","make-setter-name");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YPslot,"boot","%slot");
EXT(YprotoScollectionsStableYcurrent_gc_state,"proto/collections/table","current-gc-state");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(Ysig_names,"boot","sig-names");
EXT(Yslot_setter,"boot","slot-setter");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(Yslot_value_setter,"boot","slot-value-setter");
EXT(YPsymbols,"boot","%symbols");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(YLlogG,"boot","<log>");
EXT(YprotoScollectionsStableYcase_insensitive_string_hash,"proto/collections/table","case-insensitive-string-hash");
EXT(Yvec,"boot","vec");
EXT(Yfun_name_setter,"boot","fun-name-setter");
EXT(YLslotG,"boot","<slot>");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(YPPmacro,"boot","%%macro");
EXT(YprotoSmathYchar_Gascii,"proto/math","char->ascii");
EXT(Ynot,"boot","not");
EXT(YprotoScollectionsScollectionYanyQ,"proto/collections/collection","any?");
EXT(Yfun_name,"boot","fun-name");
EXT(YprotoScollectionsScollectionYdo3,"proto/collections/collection","do3");
EXT(Yclass_parents,"boot","class-parents");
EXT(Ymay_isaQ,"boot","may-isa?");
EXT(YLanyG,"boot","<any>");
EXT(YprotoScollectionsSrangeYLrangeG,"proto/collections/range","<range>");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(Ytype_class,"boot","type-class");
EXT(YprotoScollectionsSstringYstr,"proto/collections/string","str");
EXT(YLunionG,"boot","<union>");
EXT(Yslot_value,"boot","slot-value");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
EXT(YprotoScollectionsSsequenceYfrom_below,"proto/collections/sequence","from-below");
EXT(YprotoScollectionsStableYtable_growth_threshold_setter,"proto/collections/table","table-growth-threshold-setter");
EXT(YprotoScollectionsStableYtable_growth_factor,"proto/collections/table","table-growth-factor");
EXT(YmacrosYmap,"macros","map");
EXT(YprotoScollectionsSstringYascii_whitespaces,"proto/collections/string","ascii-whitespaces");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YprotoScollectionsSstepYfirst_then,"proto/collections/step","first-then");
EXT(YprotoScollectionsSlistYpush,"proto/collections/list","push");
EXT(YprotoScollectionsSlistYpop,"proto/collections/list","pop");
EXT(Yfab_sym,"boot","fab-sym");
EXT(Ysig_arity,"boot","sig-arity");
EXT(YmacrosYrevX,"macros","rev!");
EXT(YprotoScollectionsSrangeYfrom_above_by,"proto/collections/range","from-above-by");
EXT(YprotoScollectionsSrangeYfrom_by,"proto/collections/range","from-by");
EXT(YprotoScollectionsScollectionYas_copy,"proto/collections/collection","as-copy");
EXT(YprotoScollectionsSassocYLassocsG,"proto/collections/assoc","<assocs>");
EXT(YprotoScollectionsScollectionYalter,"proto/collections/collection","alter");
EXT(YprotoScollectionsScollectionYcopy_state,"proto/collections/collection","copy-state");
EXT(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
EXT(Yunexec,"boot","unexec");
EXT(YmacrosYmatch_atom,"macros","match-atom");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YprotoScollectionsSsequenceY2nd,"proto/collections/sequence","2nd");
EXT(Ytup,"boot","tup");
EXT(YprotoScollectionsStableYDpermanent_hash_state,"proto/collections/table","$permanent-hash-state");
EXT(YmacrosYnxt_state,"macros","nxt-state");
EXT(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(Yincongruent_method_error,"boot","incongruent-method-error");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
EXT(YPwith_monitor,"boot","%with-monitor");
EXT(Yadd_slot,"boot","add-slot");
EXT(YisaQ,"boot","isa?");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YmacrosYnow_elt,"macros","now-elt");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YmacrosYvar_name,"macros","var-name");
EXT(YmacrosYelt,"macros","elt");
EXT(Yslot_getter,"boot","slot-getter");
EXT(YPdefine_method,"boot","%define-method");
EXT(YprotoScollectionsSlistYassq,"proto/collections/list","assq");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YprotoScollectionsY___main_0___ ();

/* FUNCTION CODES: */

P YprotoScollectionsY___main_0___() {
  P T0;
loop:
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_protoScollectionsSopts;
extern MODULE_INFO module_info_protoScollectionsSassoc;
extern MODULE_INFO module_info_protoScollectionsSbuffer;
extern MODULE_INFO module_info_protoScollectionsScollection;
extern MODULE_INFO module_info_protoScollectionsSflat;
extern MODULE_INFO module_info_protoScollectionsSlist;
extern MODULE_INFO module_info_protoScollectionsSmap;
extern MODULE_INFO module_info_protoScollectionsSrange;
extern MODULE_INFO module_info_protoScollectionsSsequence;
extern MODULE_INFO module_info_protoScollectionsSstep;
extern MODULE_INFO module_info_protoScollectionsSstring;
extern MODULE_INFO module_info_protoScollectionsStable;
extern MODULE_INFO module_info_protoScollectionsSvector;
extern MODULE_INFO module_info_protoSmath;

static USE_INFO use_infos[] = {
  {&module_info_boot},
  {&module_info_macros},
  {&module_info_protoScollectionsSopts},
  {&module_info_protoScollectionsSassoc},
  {&module_info_protoScollectionsSbuffer},
  {&module_info_protoScollectionsScollection},
  {&module_info_protoScollectionsSflat},
  {&module_info_protoScollectionsSlist},
  {&module_info_protoScollectionsSmap},
  {&module_info_protoScollectionsSrange},
  {&module_info_protoScollectionsSsequence},
  {&module_info_protoScollectionsSstep},
  {&module_info_protoScollectionsSstring},
  {&module_info_protoScollectionsStable},
  {&module_info_protoScollectionsSvector},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"file-opening-error", &module_info_boot, "file-opening-error"},
  {"type-error", &module_info_boot, "type-error"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"var-type", &module_info_macros, "var-type"},
  {"assocs-test", &module_info_protoScollectionsSassoc, "assocs-test"},
  {"*boot-macro-names*", &module_info_boot, "*boot-macro-names*"},
  {"*print-base*", &module_info_protoScollectionsSstring, "*print-base*"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"<list>", &module_info_protoScollectionsSlist, "<list>"},
  {"%raw-call", &module_info_boot, "%raw-call"},
  {"dv", &module_info_boot, "dv"},
  {"%f=", &module_info_boot, "%f="},
  {"fin-state?", &module_info_macros, "fin-state?"},
  {"class-direct-slots", &module_info_boot, "class-direct-slots"},
  {"%os-binding-value", &module_info_boot, "%os-binding-value"},
  {"%velt-setter", &module_info_boot, "%velt-setter"},
  {"%iu", &module_info_boot, "%iu"},
  {"table-shrink-threshold", &module_info_protoScollectionsStable, "table-shrink-threshold"},
  {"all2?", &module_info_protoScollectionsScollection, "all2?"},
  {"from", &module_info_protoScollectionsSrange, "from"},
  {"%locative-value", &module_info_boot, "%locative-value"},
  {"now-elt-setter", &module_info_protoScollectionsScollection, "now-elt-setter"},
  {"use", &module_info_boot, "use"},
  {"%lu", &module_info_boot, "%lu"},
  {"type-object", &module_info_boot, "type-object"},
  {"*macros-ok?*", &module_info_boot, "*macros-ok?*"},
  {"unknown-function-error", &module_info_boot, "unknown-function-error"},
  {"ini-state", &module_info_macros, "ini-state"},
  {"<class>", &module_info_boot, "<class>"},
  {"len", &module_info_protoScollectionsScollection, "len"},
  {"dp", &module_info_boot, "dp"},
  {"gensym", &module_info_macros, "gensym"},
  {"from-to-by", &module_info_protoScollectionsSrange, "from-to-by"},
  {"ddv", &module_info_macros, "ddv"},
  {"%pair", &module_info_boot, "%pair"},
  {"and", &module_info_macros, "and"},
  {"%i-", &module_info_boot, "%i-"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"%selt-setter", &module_info_boot, "%selt-setter"},
  {"<str-tab>", &module_info_protoScollectionsStable, "<str-tab>"},
  {"%read-char", &module_info_boot, "%read-char"},
  {"<type>", &module_info_boot, "<type>"},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"table-growth-factor-setter", &module_info_protoScollectionsStable, "table-growth-factor-setter"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"del-keys", &module_info_protoScollectionsScollection, "del-keys"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"len-setter", &module_info_protoScollectionsSbuffer, "len-setter"},
  {"object-parents", &module_info_boot, "object-parents"},
  {"sig-nary?", &module_info_boot, "sig-nary?"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"slot-init", &module_info_boot, "slot-init"},
  {"assqn", &module_info_protoScollectionsSlist, "assqn"},
  {"rep", &module_info_boot, "rep"},
  {"into", &module_info_protoScollectionsScollection, "into"},
  {"object-slots", &module_info_boot, "object-slots"},
  {"id-hash", &module_info_protoScollectionsStable, "id-hash"},
  {"%c<", &module_info_boot, "%c<"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"assocs-test-setter", &module_info_protoScollectionsSassoc, "assocs-test-setter"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"inc", &module_info_macros, "inc"},
  {"%eq?", &module_info_boot, "%eq?"},
  {"%c=", &module_info_boot, "%c="},
  {"fabs", &module_info_protoSmath, "fabs"},
  {"%i<<<", &module_info_boot, "%i<<<"},
  {"lab", &module_info_boot, "lab"},
  {"exported", &module_info_macros, "exported"},
  {"class-direct-children", &module_info_boot, "class-direct-children"},
  {"wrong-number-arguments-error", &module_info_boot, "wrong-number-arguments-error"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"<str>", &module_info_boot, "<str>"},
  {"dss", &module_info_boot, "dss"},
  {"isa", &module_info_boot, "isa"},
  {"%os-name", &module_info_boot, "%os-name"},
  {"export", &module_info_boot, "export"},
  {"table-protocol", &module_info_protoScollectionsStable, "table-protocol"},
  {"%iv", &module_info_boot, "%iv"},
  {"%app-filename", &module_info_boot, "%app-filename"},
  {"%vnul", &module_info_boot, "%vnul"},
  {"del-key", &module_info_protoScollectionsScollection, "del-key"},
  {"@==", &module_info_boot, "@=="},
  {"%sp-reg-setter", &module_info_boot, "%sp-reg-setter"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"%os-binding-value-setter", &module_info_boot, "%os-binding-value-setter"},
  {"all?", &module_info_protoScollectionsScollection, "all?"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"do", &module_info_protoScollectionsScollection, "do"},
  {"error", &module_info_boot, "error"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"slot-owner", &module_info_boot, "slot-owner"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"%slen", &module_info_boot, "%slen"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"<met>", &module_info_boot, "<met>"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"do-key-vals", &module_info_protoScollectionsSsequence, "do-key-vals"},
  {"len/fill-setter", &module_info_protoScollectionsSbuffer, "len/fill-setter"},
  {"range-check?", &module_info_protoScollectionsSsequence, "range-check?"},
  {"%sp-reg", &module_info_boot, "%sp-reg"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"%fi2f", &module_info_boot, "%fi2f"},
  {"cat!", &module_info_protoScollectionsSsequence, "cat!"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"quote", &module_info_boot, "quote"},
  {"pair", &module_info_macros, "pair"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"head", &module_info_boot, "head"},
  {"from-above", &module_info_protoScollectionsSrange, "from-above"},
  {"%build-runtime-modules", &module_info_boot, "%build-runtime-modules"},
  {"sig-unification-vars", &module_info_boot, "sig-unification-vars"},
  {"class-direct-parents", &module_info_boot, "class-direct-parents"},
  {"when", &module_info_macros, "when"},
  {"find-key", &module_info_protoScollectionsScollection, "find-key"},
  {"nul", &module_info_boot, "nul"},
  {"apply", &module_info_macros, "apply"},
  {"object-class", &module_info_boot, "object-class"},
  {"%i<", &module_info_boot, "%i<"},
  {"%sb", &module_info_boot, "%sb"},
  {"%str", &module_info_boot, "%str"},
  {"%%sym", &module_info_boot, "%%sym"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"pop-last!", &module_info_protoScollectionsSbuffer, "pop-last!"},
  {"sym-name", &module_info_boot, "sym-name"},
  {"set", &module_info_boot, "set"},
  {"%i&", &module_info_boot, "%i&"},
  {"fab-gen", &module_info_boot, "fab-gen"},
  {"table-shrink-threshold-setter", &module_info_protoScollectionsStable, "table-shrink-threshold-setter"},
  {"%raw", &module_info_boot, "%raw"},
  {"case", &module_info_macros, "case"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"swapf", &module_info_macros, "swapf"},
  {"opf", &module_info_macros, "opf"},
  {"%untag", &module_info_boot, "%untag"},
  {"ct", &module_info_boot, "ct"},
  {"napply", &module_info_macros, "napply"},
  {"range-check", &module_info_protoScollectionsSsequence, "range-check"},
  {"%check-call-types", &module_info_boot, "%check-call-types"},
  {"%fb", &module_info_boot, "%fb"},
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"%snul", &module_info_boot, "%snul"},
  {"add!", &module_info_protoScollectionsSsequence, "add!"},
  {"$max-int", &module_info_boot, "$max-int"},
  {"%cb", &module_info_boot, "%cb"},
  {"fab-map", &module_info_protoScollectionsSmap, "fab-map"},
  {"%i+", &module_info_boot, "%i+"},
  {"collect", &module_info_macros, "collect"},
  {"%flo-bits", &module_info_boot, "%flo-bits"},
  {"dc", &module_info_boot, "dc"},
  {"sig-specs", &module_info_boot, "sig-specs"},
  {"use/export", &module_info_boot, "use/export"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"slot-type", &module_info_boot, "slot-type"},
  {"slot", &module_info_boot, "slot"},
  {"reduce+", &module_info_protoScollectionsScollection, "reduce+"},
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
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
  {"tail", &module_info_boot, "tail"},
  {"%current-output-port", &module_info_boot, "%current-output-port"},
  {"<replace-generic-restart>", &module_info_boot, "<replace-generic-restart>"},
  {"%char-ready?", &module_info_boot, "%char-ready?"},
  {"<tab>", &module_info_protoScollectionsStable, "<tab>"},
  {"ascii-limit", &module_info_protoScollectionsSstring, "ascii-limit"},
  {"%loc-off", &module_info_boot, "%loc-off"},
  {"push-last!", &module_info_protoScollectionsSbuffer, "push-last!"},
  {"from-to", &module_info_protoScollectionsSrange, "from-to"},
  {"%f+", &module_info_boot, "%f+"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"lst", &module_info_boot, "lst"},
  {"class-slots", &module_info_boot, "class-slots"},
  {"range-error", &module_info_protoScollectionsSsequence, "range-error"},
  {"%vec", &module_info_boot, "%vec"},
  {"<col>", &module_info_boot, "<col>"},
  {"vals-to-str", &module_info_protoScollectionsSsequence, "vals-to-str"},
  {"table-growth-threshold", &module_info_protoScollectionsStable, "table-growth-threshold"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"default", &module_info_protoScollectionsScollection, "default"},
  {"map-keyed", &module_info_protoScollectionsScollection, "map-keyed"},
  {"dg", &module_info_boot, "dg"},
  {"for", &module_info_macros, "for"},
  {"<sig>", &module_info_boot, "<sig>"},
  {"try", &module_info_boot, "try"},
  {"list", &module_info_protoScollectionsSlist, "list"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"dec", &module_info_macros, "dec"},
  {"buf", &module_info_protoScollectionsSbuffer, "buf"},
  {"%i<<", &module_info_boot, "%i<<"},
  {"let", &module_info_boot, "let"},
  {"reduce", &module_info_protoScollectionsScollection, "reduce"},
  {"keys", &module_info_protoScollectionsScollection, "keys"},
  {"del-dups", &module_info_protoScollectionsSsequence, "del-dups"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"num-to-str", &module_info_protoSmath, "num-to-str"},
  {"%create-directory", &module_info_boot, "%create-directory"},
  {"@oelt", &module_info_boot, "@oelt"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"ds", &module_info_boot, "ds"},
  {"%current-input-port", &module_info_boot, "%current-input-port"},
  {"rev", &module_info_protoScollectionsSsequence, "rev"},
  {"from-below-by", &module_info_protoScollectionsSrange, "from-below-by"},
  {"%i=", &module_info_boot, "%i="},
  {"dlet", &module_info_macros, "dlet"},
  {"%isa", &module_info_boot, "%isa"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"%i?", &module_info_boot, "%i?"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"@+", &module_info_boot, "@+"},
  {"case-insensitive-string-equal", &module_info_protoScollectionsStable, "case-insensitive-string-equal"},
  {"%i>>>", &module_info_boot, "%i>>>"},
  {"%fu", &module_info_boot, "%fu"},
  {"next-method", &module_info_macros, "next-method"},
  {"do-keyed", &module_info_protoScollectionsScollection, "do-keyed"},
  {"df", &module_info_boot, "df"},
  {"sig-value", &module_info_boot, "sig-value"},
  {"class-name", &module_info_boot, "class-name"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"%bb", &module_info_boot, "%bb"},
  {"del", &module_info_protoScollectionsSsequence, "del"},
  {"make-sym", &module_info_macros, "make-sym"},
  {"<buf>", &module_info_protoScollectionsSbuffer, "<buf>"},
  {"%eof-object", &module_info_boot, "%eof-object"},
  {"*boot-macro-module-names*", &module_info_boot, "*boot-macro-module-names*"},
  {"%open-output-file", &module_info_boot, "%open-output-file"},
  {"<num>", &module_info_boot, "<num>"},
  {"<int>", &module_info_boot, "<int>"},
  {"nil", &module_info_boot, "nil"},
  {"str-to-num", &module_info_protoScollectionsSstring, "str-to-num"},
  {"keyboard-interrupt", &module_info_boot, "keyboard-interrupt"},
  {"%i^", &module_info_boot, "%i^"},
  {"==", &module_info_macros, "=="},
  {"fun-value", &module_info_boot, "fun-value"},
  {"<step>", &module_info_protoScollectionsSstep, "<step>"},
  {"%f/", &module_info_boot, "%f/"},
  {"<map>", &module_info_protoScollectionsSmap, "<map>"},
  {"%su", &module_info_boot, "%su"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"make-setter-name", &module_info_macros, "make-setter-name"},
  {"%ft", &module_info_boot, "%ft"},
  {"%open-input-file", &module_info_boot, "%open-input-file"},
  {"%locative-value-setter", &module_info_boot, "%locative-value-setter"},
  {"%cu", &module_info_boot, "%cu"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"empty?", &module_info_macros, "empty?"},
  {"%slot", &module_info_boot, "%slot"},
  {"current-gc-state", &module_info_protoScollectionsStable, "current-gc-state"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"sig-names", &module_info_boot, "sig-names"},
  {"slot-setter", &module_info_boot, "slot-setter"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"bound?", &module_info_boot, "bound?"},
  {"slot-value-setter", &module_info_boot, "slot-value-setter"},
  {"%close-output-port", &module_info_boot, "%close-output-port"},
  {"%symbols", &module_info_boot, "%symbols"},
  {"map2", &module_info_protoScollectionsScollection, "map2"},
  {"<log>", &module_info_boot, "<log>"},
  {"%peek-char", &module_info_boot, "%peek-char"},
  {"case-insensitive-string-hash", &module_info_protoScollectionsStable, "case-insensitive-string-hash"},
  {"vec", &module_info_boot, "vec"},
  {"fun-name-setter", &module_info_boot, "fun-name-setter"},
  {"<slot>", &module_info_boot, "<slot>"},
  {"%file-type", &module_info_boot, "%file-type"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
  {"subtype?", &module_info_boot, "subtype?"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"%%macro", &module_info_boot, "%%macro"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"char->ascii", &module_info_protoSmath, "char->ascii"},
  {"not", &module_info_boot, "not"},
  {"any?", &module_info_protoScollectionsScollection, "any?"},
  {"%selt", &module_info_boot, "%selt"},
  {"@<", &module_info_boot, "@<"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"do3", &module_info_protoScollectionsScollection, "do3"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<any>", &module_info_boot, "<any>"},
  {"<range>", &module_info_protoScollectionsSrange, "<range>"},
  {"dm", &module_info_boot, "dm"},
  {"low-elt", &module_info_protoScollectionsScollection, "low-elt"},
  {"%app-args", &module_info_boot, "%app-args"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"type-class", &module_info_boot, "type-class"},
  {"%im", &module_info_boot, "%im"},
  {"str", &module_info_protoScollectionsSstring, "str"},
  {"%it/", &module_info_boot, "%it/"},
  {"apply-next-method", &module_info_macros, "apply-next-method"},
  {"%vlen", &module_info_boot, "%vlen"},
  {"<union>", &module_info_boot, "<union>"},
  {"select", &module_info_macros, "select"},
  {"seq", &module_info_boot, "seq"},
  {"slot-value", &module_info_boot, "slot-value"},
  {"mif", &module_info_boot, "mif"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"3rd", &module_info_protoScollectionsSsequence, "3rd"},
  {"from-below", &module_info_protoScollectionsSsequence, "from-below"},
  {"table-growth-threshold-setter", &module_info_protoScollectionsStable, "table-growth-threshold-setter"},
  {"table-growth-factor", &module_info_protoScollectionsStable, "table-growth-factor"},
  {"map", &module_info_macros, "map"},
  {"fun", &module_info_boot, "fun"},
  {"%i*", &module_info_boot, "%i*"},
  {"%f<", &module_info_boot, "%f<"},
  {"collected", &module_info_macros, "collected"},
  {"ascii-whitespaces", &module_info_protoScollectionsSstring, "ascii-whitespaces"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"%process-module", &module_info_boot, "%process-module"},
  {"first-then", &module_info_protoScollectionsSstep, "first-then"},
  {"push", &module_info_protoScollectionsSlist, "push"},
  {"pop", &module_info_protoScollectionsSlist, "pop"},
  {"fab-sym", &module_info_boot, "fab-sym"},
  {"def-fun-var", &module_info_macros, "def-fun-var"},
  {"sig-arity", &module_info_boot, "sig-arity"},
  {"rev!", &module_info_macros, "rev!"},
  {"or", &module_info_macros, "or"},
  {"unless", &module_info_macros, "unless"},
  {"from-above-by", &module_info_protoScollectionsSrange, "from-above-by"},
  {"%write-string", &module_info_boot, "%write-string"},
  {"from-by", &module_info_protoScollectionsSrange, "from-by"},
  {"%invoke-debugger", &module_info_boot, "%invoke-debugger"},
  {"as-copy", &module_info_protoScollectionsScollection, "as-copy"},
  {"<assocs>", &module_info_protoScollectionsSassoc, "<assocs>"},
  {"alter", &module_info_protoScollectionsScollection, "alter"},
  {"copy-state", &module_info_protoScollectionsScollection, "copy-state"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"unexec", &module_info_boot, "unexec"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"%ib", &module_info_boot, "%ib"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"@olen", &module_info_boot, "@olen"},
  {"%do-stack-frames", &module_info_boot, "%do-stack-frames"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"2nd", &module_info_protoScollectionsSsequence, "2nd"},
  {"pushf", &module_info_macros, "pushf"},
  {"tup", &module_info_boot, "tup"},
  {"$permanent-hash-state", &module_info_protoScollectionsStable, "$permanent-hash-state"},
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
  {"now-key", &module_info_protoScollectionsScollection, "now-key"},
  {"%loc-off-setter", &module_info_boot, "%loc-off-setter"},
  {"incongruent-method-error", &module_info_boot, "incongruent-method-error"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
  {"%with-monitor", &module_info_boot, "%with-monitor"},
  {"popf", &module_info_macros, "popf"},
  {"add-slot", &module_info_boot, "add-slot"},
  {"isa?", &module_info_boot, "isa?"},
  {"%file-mtime", &module_info_boot, "%file-mtime"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"now-elt", &module_info_macros, "now-elt"},
  {"do2", &module_info_protoScollectionsScollection, "do2"},
  {"1st", &module_info_protoScollectionsSsequence, "1st"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"assert", &module_info_macros, "assert"},
  {"var-name", &module_info_macros, "var-name"},
  {"elt", &module_info_macros, "elt"},
  {"slot-getter", &module_info_boot, "slot-getter"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"assq", &module_info_protoScollectionsSlist, "assq"},
  {"%close-input-port", &module_info_boot, "%close-input-port"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<opts>", "<opts>"},
  {"assocs-test", "assocs-test"},
  {"*print-base*", "*print-base*"},
  {"fill", "fill"},
  {"<list>", "<list>"},
  {"from", "from"},
  {"fin-state?", "fin-state?"},
  {"table-shrink-threshold", "table-shrink-threshold"},
  {"all2?", "all2?"},
  {"now-elt-setter", "now-elt-setter"},
  {"alter", "alter"},
  {"ini-state", "ini-state"},
  {"len", "len"},
  {"from-to-by", "from-to-by"},
  {"sub", "sub"},
  {"<str-tab>", "<str-tab>"},
  {"add", "add"},
  {"table-growth-factor-setter", "table-growth-factor-setter"},
  {"del-keys", "del-keys"},
  {"len-setter", "len-setter"},
  {"assqn", "assqn"},
  {"into", "into"},
  {"id-hash", "id-hash"},
  {"assocs-test-setter", "assocs-test-setter"},
  {"fabs", "fabs"},
  {"cat2", "cat2"},
  {"table-protocol", "table-protocol"},
  {"del-key", "del-key"},
  {"pos", "pos"},
  {"all?", "all?"},
  {"do", "do"},
  {"<vec>", "<vec>"},
  {"head-setter", "head-setter"},
  {"len/fill-setter", "len/fill-setter"},
  {"range-check?", "range-check?"},
  {"fab", "fab"},
  {"cat!", "cat!"},
  {"pair", "pair"},
  {"<flat>", "<flat>"},
  {"head", "head"},
  {"from-above", "from-above"},
  {"find-key", "find-key"},
  {"pop-last!", "pop-last!"},
  {"table-shrink-threshold-setter", "table-shrink-threshold-setter"},
  {"range-check", "range-check"},
  {"mem?", "mem?"},
  {"<lst>", "<lst>"},
  {"add!", "add!"},
  {"fab-map", "fab-map"},
  {"tail-setter", "tail-setter"},
  {"reduce+", "reduce+"},
  {"<seq>", "<seq>"},
  {"cat", "cat"},
  {"any2?", "any2?"},
  {"tail", "tail"},
  {"<tab>", "<tab>"},
  {"ascii-limit", "ascii-limit"},
  {"push-last!", "push-last!"},
  {"lst", "lst"},
  {"range-error", "range-error"},
  {"<col>", "<col>"},
  {"vals-to-str", "vals-to-str"},
  {"table-growth-threshold", "table-growth-threshold"},
  {"default", "default"},
  {"map-keyed", "map-keyed"},
  {"list", "list"},
  {"buf", "buf"},
  {"reduce", "reduce"},
  {"keys", "keys"},
  {"del-dups", "del-dups"},
  {"num-to-str", "num-to-str"},
  {"rev", "rev"},
  {"from-below-by", "from-below-by"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"do-keyed", "do-keyed"},
  {"empty", "empty"},
  {"del", "del"},
  {"<buf>", "<buf>"},
  {"nil", "nil"},
  {"str-to-num", "str-to-num"},
  {"from-to", "from-to"},
  {"<step>", "<step>"},
  {"<map>", "<map>"},
  {"low-elt-setter", "low-elt-setter"},
  {"empty?", "empty?"},
  {"current-gc-state", "current-gc-state"},
  {"map2", "map2"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"vec", "vec"},
  {"pick", "pick"},
  {"last", "last"},
  {"char->ascii", "char->ascii"},
  {"any?", "any?"},
  {"do3", "do3"},
  {"<range>", "<range>"},
  {"low-elt", "low-elt"},
  {"str", "str"},
  {"3rd", "3rd"},
  {"from-below", "from-below"},
  {"table-growth-threshold-setter", "table-growth-threshold-setter"},
  {"table-growth-factor", "table-growth-factor"},
  {"map", "map"},
  {"ascii-whitespaces", "ascii-whitespaces"},
  {"first-then", "first-then"},
  {"push", "push"},
  {"pop", "pop"},
  {"rev!", "rev!"},
  {"from-above-by", "from-above-by"},
  {"from-by", "from-by"},
  {"as-copy", "as-copy"},
  {"<assocs>", "<assocs>"},
  {"copy-state", "copy-state"},
  {"elt-setter", "elt-setter"},
  {"2nd", "2nd"},
  {"$permanent-hash-state", "$permanent-hash-state"},
  {"nxt-state", "nxt-state"},
  {"now-key", "now-key"},
  {"sub-setter", "sub-setter"},
  {"now-elt", "now-elt"},
  {"do2", "do2"},
  {"1st", "1st"},
  {"elt", "elt"},
  {"do-key-vals", "do-key-vals"},
  {"assq", "assq"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_protoScollections;
MODULE_INFO module_info_protoScollections = {
  "proto/collections",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_boot (void);
extern void load_module_macros (void);
extern void load_module_protoScollectionsSopts (void);
extern void load_module_protoScollectionsSassoc (void);
extern void load_module_protoScollectionsSbuffer (void);
extern void load_module_protoScollectionsScollection (void);
extern void load_module_protoScollectionsSflat (void);
extern void load_module_protoScollectionsSlist (void);
extern void load_module_protoScollectionsSmap (void);
extern void load_module_protoScollectionsSrange (void);
extern void load_module_protoScollectionsSsequence (void);
extern void load_module_protoScollectionsSstep (void);
extern void load_module_protoScollectionsSstring (void);
extern void load_module_protoScollectionsStable (void);
extern void load_module_protoScollectionsSvector (void);

/* EXPRESSION: */

extern void load_module_protoScollections (void);

void load_module_protoScollections (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_boot();
  load_module_macros();
  load_module_protoScollectionsSopts();
  load_module_protoScollectionsSassoc();
  load_module_protoScollectionsSbuffer();
  load_module_protoScollectionsScollection();
  load_module_protoScollectionsSflat();
  load_module_protoScollectionsSlist();
  load_module_protoScollectionsSmap();
  load_module_protoScollectionsSrange();
  load_module_protoScollectionsSsequence();
  load_module_protoScollectionsSstep();
  load_module_protoScollectionsSstring();
  load_module_protoScollectionsStable();
  load_module_protoScollectionsSvector();

  (P)YprotoScollectionsY___main_0___();

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
