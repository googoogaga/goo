/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/collections */

EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooScollectionsSlistYassq,"goo/collections/list","assq");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YgooScollectionsStableYid_hash,"goo/collections/table","id-hash");
EXT(Yhead,"runtime/boot","head");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YgooScollectionsSzipYLzipG,"goo/collections/zip","<zip>");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooScollectionsSstringYascii_limit,"goo/collections/string","ascii-limit");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(YgooScollectionsSassocYLassocsG,"goo/collections/assoc","<assocs>");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooScollectionsStableYtab_hash,"goo/collections/table","tab-hash");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(Ynot,"runtime/boot","not");
EXT(YgooScollectionsSzipYzip,"goo/collections/zip","zip");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(YgooScollectionsScycleYcycle,"goo/collections/cycle","cycle");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YgooScollectionsScycleYLcycleG,"goo/collections/cycle","<cycle>");
EXT(YgooScollectionsSlistYassqn,"goo/collections/list","assqn");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Ylst,"runtime/boot","lst");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooScollectionsStableYtab_test,"goo/collections/table","tab-test");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(Yerror,"runtime/boot","error");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YgooScollectionsSsequenceYdo_key_vals,"goo/collections/sequence","do-key-vals");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooScollectionsStableYcase_insensitive_string_equal,"goo/collections/table","case-insensitive-string-equal");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(YgooScollectionsStableYDpermanent_hash_state,"goo/collections/table","$permanent-hash-state");
EXT(YgooScollectionsSrangeYrange_by,"goo/collections/range","range-by");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(Ynil,"runtime/boot","nil");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YgooScollectionsSstringYstr_to_num,"goo/collections/string","str-to-num");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScollectionsSmapYfab_map,"goo/collections/map","fab-map");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YgooScollectionsSsequenceYrange_checkQ,"goo/collections/sequence","range-check?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(Yvec,"runtime/boot","vec");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YgooScollectionsStableYcase_insensitive_string_hash,"goo/collections/table","case-insensitive-string-hash");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooScollectionsSassocYassocs_test_setter,"goo/collections/assoc","assocs-test-setter");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YgooScollectionsSstringYstr,"goo/collections/string","str");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooScollectionsStableYtab_growth_threshold_setter,"goo/collections/table","tab-growth-threshold-setter");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(Ytail,"runtime/boot","tail");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YgooScollectionsSrangeYrange,"goo/collections/range","range");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YgooScollectionsStableYtab_shrink_threshold_setter,"goo/collections/table","tab-shrink-threshold-setter");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YgooScollectionsSrangeYfrom,"goo/collections/range","from");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(YgooScollectionsSassocYassocs_test,"goo/collections/assoc","assocs-test");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(YgooScollectionsStableYtab_shrink_threshold,"goo/collections/table","tab-shrink-threshold");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooScollectionsSstringYascii_whitespaces,"goo/collections/string","ascii-whitespaces");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YgooScollectionsStableYtab_growth_threshold,"goo/collections/table","tab-growth-threshold");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(YgooScollectionsSzipYunzip,"goo/collections/zip","unzip");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YgooScollectionsStableYtab_growth_factor_setter,"goo/collections/table","tab-growth-factor-setter");
EXT(YgooScollectionsStableYtab_growth_factor,"goo/collections/table","tab-growth-factor");
EXT(YgooScollectionsSstepYfirst_then,"goo/collections/step","first-then");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScollectionsStableYLsetG,"goo/collections/table","<set>");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(YPsnul,"runtime/boot","%snul");
EXT(YgooScollectionsSstringYTprint_baseT,"goo/collections/string","*print-base*");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooScollectionsSstepYLstepG,"goo/collections/step","<step>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YgooScollectionsSrangeYLrangeG,"goo/collections/range","<range>");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YgooScollectionsSmapYLmapG,"goo/collections/map","<map>");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YgooScollectionsSstringYnum_to_str_base,"goo/collections/string","num-to-str-base");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YgooScollectionsStableYLstr_tabG,"goo/collections/table","<str-tab>");
EXT(YPvnul,"runtime/boot","%vnul");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YgooScollectionsY___main_0___ ();

/* FUNCTION CODES: */

P YgooScollectionsY___main_0___() {
  P T0;
loop:
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScollectionsSoptionals;
extern MODULE_INFO module_info_gooScollectionsSassoc;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSflat;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooScollectionsSmap;
extern MODULE_INFO module_info_gooScollectionsSrange;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooScollectionsSstep;
extern MODULE_INFO module_info_gooScollectionsSstring;
extern MODULE_INFO module_info_gooScollectionsStable;
extern MODULE_INFO module_info_gooScollectionsSvector;
extern MODULE_INFO module_info_gooScollectionsSzip;
extern MODULE_INFO module_info_gooScollectionsScycle;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooScollectionsSoptionals},
  {&module_info_gooScollectionsSassoc},
  {&module_info_gooScollectionsSbuffer},
  {&module_info_gooScollectionsScollection},
  {&module_info_gooScollectionsSflat},
  {&module_info_gooScollectionsSlist},
  {&module_info_gooScollectionsSmap},
  {&module_info_gooScollectionsSrange},
  {&module_info_gooScollectionsSsequence},
  {&module_info_gooScollectionsSstep},
  {&module_info_gooScollectionsSstring},
  {&module_info_gooScollectionsStable},
  {&module_info_gooScollectionsSvector},
  {&module_info_gooScollectionsSzip},
  {&module_info_gooScollectionsScycle},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"set", &module_info_gooSboot, "set"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"fun", &module_info_gooSboot, "fun"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"assq", &module_info_gooScollectionsSlist, "assq"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"try", &module_info_gooSboot, "try"},
  {"buf", &module_info_gooScollectionsSbuffer, "buf"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"tup", &module_info_gooSboot, "tup"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"dp", &module_info_gooSboot, "dp"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"ds", &module_info_gooSboot, "ds"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"ins!", &module_info_gooScollectionsSsequence, "ins!"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"loc", &module_info_gooSboot, "loc"},
  {"@+", &module_info_gooSboot, "@+"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"@len", &module_info_gooSboot, "@len"},
  {"id-hash", &module_info_gooScollectionsStable, "id-hash"},
  {"head", &module_info_gooSboot, "head"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"when", &module_info_gooSmacros, "when"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<zip>", &module_info_gooScollectionsSzip, "<zip>"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"ascii-limit", &module_info_gooScollectionsSstring, "ascii-limit"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"mif", &module_info_gooSboot, "mif"},
  {"export", &module_info_gooSboot, "export"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<assocs>", &module_info_gooScollectionsSassoc, "<assocs>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"while", &module_info_gooSmacros, "while"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"tab-hash", &module_info_gooScollectionsStable, "tab-hash"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"dl", &module_info_gooSboot, "dl"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"dc", &module_info_gooSboot, "dc"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"not", &module_info_gooSboot, "not"},
  {"zip", &module_info_gooScollectionsSzip, "zip"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%put", &module_info_gooSboot, "%put"},
  {"cycle", &module_info_gooScollectionsScycle, "cycle"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"<cycle>", &module_info_gooScollectionsScycle, "<cycle>"},
  {"assqn", &module_info_gooScollectionsSlist, "assqn"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"lst", &module_info_gooSboot, "lst"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"tab-test", &module_info_gooScollectionsStable, "tab-test"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"map", &module_info_gooSmacros, "map"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"error", &module_info_gooSboot, "error"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"ins", &module_info_gooScollectionsSsequence, "ins"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"match", &module_info_gooSmacros, "match"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"dg", &module_info_gooSboot, "dg"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"do-key-vals", &module_info_gooScollectionsSsequence, "do-key-vals"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"dss", &module_info_gooSboot, "dss"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"case-insensitive-string-equal", &module_info_gooScollectionsStable, "case-insensitive-string-equal"},
  {"quote", &module_info_gooSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"$permanent-hash-state", &module_info_gooScollectionsStable, "$permanent-hash-state"},
  {"range-by", &module_info_gooScollectionsSrange, "range-by"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"nil", &module_info_gooSboot, "nil"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"len-setter", &module_info_gooScollectionsSbuffer, "len-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"%str", &module_info_gooSboot, "%str"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"dm", &module_info_gooSboot, "dm"},
  {"str-to-num", &module_info_gooScollectionsSstring, "str-to-num"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"vals-to-str", &module_info_gooScollectionsSsequence, "vals-to-str"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"fab-map", &module_info_gooScollectionsSmap, "fab-map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"df", &module_info_gooSboot, "df"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"range-check?", &module_info_gooScollectionsSsequence, "range-check?"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"rep", &module_info_gooSboot, "rep"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%get", &module_info_gooSboot, "%get"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"do3", &module_info_gooScollectionsScollection, "do3"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"vec", &module_info_gooSboot, "vec"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"<buf>", &module_info_gooScollectionsSbuffer, "<buf>"},
  {"case-insensitive-string-hash", &module_info_gooScollectionsStable, "case-insensitive-string-hash"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"as-copy", &module_info_gooScollectionsScollection, "as-copy"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"if", &module_info_gooSboot, "if"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"use", &module_info_gooSboot, "use"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"range-check", &module_info_gooScollectionsSsequence, "range-check"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"isa", &module_info_gooSboot, "isa"},
  {"or", &module_info_gooSmacros, "or"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"until", &module_info_gooSmacros, "until"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"assocs-test-setter", &module_info_gooScollectionsSassoc, "assocs-test-setter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"len/fill-setter", &module_info_gooScollectionsSbuffer, "len/fill-setter"},
  {"def", &module_info_gooSboot, "def"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"and", &module_info_gooSmacros, "and"},
  {"str", &module_info_gooScollectionsSstring, "str"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"tab-growth-threshold-setter", &module_info_gooScollectionsStable, "tab-growth-threshold-setter"},
  {"dup", &module_info_gooScollectionsScollection, "dup"},
  {"tail", &module_info_gooSboot, "tail"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"range", &module_info_gooScollectionsSrange, "range"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"let", &module_info_gooSboot, "let"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"pop-last!", &module_info_gooScollectionsSbuffer, "pop-last!"},
  {"@==", &module_info_gooSboot, "@=="},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"tab-shrink-threshold-setter", &module_info_gooScollectionsStable, "tab-shrink-threshold-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"from", &module_info_gooScollectionsSrange, "from"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"tab-gc-state", &module_info_gooScollectionsStable, "tab-gc-state"},
  {"finds", &module_info_gooScollectionsSsequence, "finds"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"assocs-test", &module_info_gooScollectionsSassoc, "assocs-test"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"tab-shrink-threshold", &module_info_gooScollectionsStable, "tab-shrink-threshold"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"ascii-whitespaces", &module_info_gooScollectionsSstring, "ascii-whitespaces"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"tab-growth-threshold", &module_info_gooScollectionsStable, "tab-growth-threshold"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"len", &module_info_gooStypes, "len"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"unzip", &module_info_gooScollectionsSzip, "unzip"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"tab-growth-factor-setter", &module_info_gooScollectionsStable, "tab-growth-factor-setter"},
  {"tab-growth-factor", &module_info_gooScollectionsStable, "tab-growth-factor"},
  {"first-then", &module_info_gooScollectionsSstep, "first-then"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"<set>", &module_info_gooScollectionsStable, "<set>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"new", &module_info_gooSboot, "new"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"*print-base*", &module_info_gooScollectionsSstring, "*print-base*"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"do", &module_info_gooSmacros, "do"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"nul", &module_info_gooSboot, "nul"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"<step>", &module_info_gooScollectionsSstep, "<step>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<range>", &module_info_gooScollectionsSrange, "<range>"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<map>", &module_info_gooScollectionsSmap, "<map>"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"num-to-str-base", &module_info_gooScollectionsSstring, "num-to-str-base"},
  {"case", &module_info_gooSmacros, "case"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"dv", &module_info_gooSboot, "dv"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<str-tab>", &module_info_gooScollectionsStable, "<str-tab>"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"all?", "all?"},
  {"assq", "assq"},
  {"buf", "buf"},
  {"add", "add"},
  {"any2?", "any2?"},
  {"cat!", "cat!"},
  {"head-setter", "head-setter"},
  {"now-setter", "now-setter"},
  {"ins!", "ins!"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"nxt", "nxt"},
  {"id-hash", "id-hash"},
  {"head", "head"},
  {"elt-or", "elt-or"},
  {"<vec>", "<vec>"},
  {"into", "into"},
  {"empty", "empty"},
  {"<zip>", "<zip>"},
  {"now-key", "now-key"},
  {"ascii-limit", "ascii-limit"},
  {"zap", "zap"},
  {"<assocs>", "<assocs>"},
  {"map2", "map2"},
  {"below", "below"},
  {"last", "last"},
  {"now", "now"},
  {"tab-hash", "tab-hash"},
  {"push", "push"},
  {"cat", "cat"},
  {"empty?", "empty?"},
  {"<flat>", "<flat>"},
  {"zip", "zip"},
  {"cycle", "cycle"},
  {"3rd", "3rd"},
  {"pos", "pos"},
  {"fill", "fill"},
  {"<cycle>", "<cycle>"},
  {"assqn", "assqn"},
  {"elt", "elt"},
  {"lst", "lst"},
  {"tab-test", "tab-test"},
  {"map", "map"},
  {"del", "del"},
  {"ins", "ins"},
  {"keys", "keys"},
  {"do-key-vals", "do-key-vals"},
  {"<lst>", "<lst>"},
  {"rev!", "rev!"},
  {"rev", "rev"},
  {"1st", "1st"},
  {"enum", "enum"},
  {"$permanent-hash-state", "$permanent-hash-state"},
  {"range-by", "range-by"},
  {"find", "find"},
  {"nil", "nil"},
  {"len-setter", "len-setter"},
  {"fabs", "fabs"},
  {"str-to-num", "str-to-num"},
  {"<tab>", "<tab>"},
  {"vals-to-str", "vals-to-str"},
  {"all2?", "all2?"},
  {"fab-map", "fab-map"},
  {"key-test", "key-test"},
  {"range-check?", "range-check?"},
  {"<seq>", "<seq>"},
  {"num-to-str", "num-to-str"},
  {"do3", "do3"},
  {"vec", "vec"},
  {"del-dups", "del-dups"},
  {"<buf>", "<buf>"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"as-copy", "as-copy"},
  {"key-type", "key-type"},
  {"find-or", "find-or"},
  {"sub-setter", "sub-setter"},
  {"char->ascii", "char->ascii"},
  {"num-to-str-base", "num-to-str-base"},
  {"range-check", "range-check"},
  {"fin?", "fin?"},
  {"assocs-test-setter", "assocs-test-setter"},
  {"<col>", "<col>"},
  {"any?", "any?"},
  {"elt-default", "elt-default"},
  {"len/fill-setter", "len/fill-setter"},
  {"del-vals", "del-vals"},
  {"tail-setter", "tail-setter"},
  {"fold+", "fold+"},
  {"do2", "do2"},
  {"str", "str"},
  {"low-elt-setter", "low-elt-setter"},
  {"<opts>", "<opts>"},
  {"tab-growth-threshold-setter", "tab-growth-threshold-setter"},
  {"dup", "dup"},
  {"tail", "tail"},
  {"range", "range"},
  {"elt-type", "elt-type"},
  {"<enum>", "<enum>"},
  {"2nd", "2nd"},
  {"pop-last!", "pop-last!"},
  {"fab", "fab"},
  {"tab-shrink-threshold-setter", "tab-shrink-threshold-setter"},
  {"from", "from"},
  {"tab-gc-state", "tab-gc-state"},
  {"finds", "finds"},
  {"assocs-test", "assocs-test"},
  {"reject", "reject"},
  {"tab-growth-factor", "tab-growth-factor"},
  {"<list>", "<list>"},
  {"tab-shrink-threshold", "tab-shrink-threshold"},
  {"ascii-whitespaces", "ascii-whitespaces"},
  {"low-elt", "low-elt"},
  {"tab-growth-threshold", "tab-growth-threshold"},
  {"map-keyed", "map-keyed"},
  {"sub", "sub"},
  {"items", "items"},
  {"len", "len"},
  {"unzip", "unzip"},
  {"tab-growth-factor-setter", "tab-growth-factor-setter"},
  {"first-then", "first-then"},
  {"range-error", "range-error"},
  {"<set>", "<set>"},
  {"add!", "add!"},
  {"fold", "fold"},
  {"*print-base*", "*print-base*"},
  {"do", "do"},
  {"elt-setter", "elt-setter"},
  {"do-keyed", "do-keyed"},
  {"pick", "pick"},
  {"pair", "pair"},
  {"<range>", "<range>"},
  {"push-last!", "push-last!"},
  {"elts", "elts"},
  {"cat2", "cat2"},
  {"list", "list"},
  {"<step>", "<step>"},
  {"<map>", "<map>"},
  {"pop", "pop"},
  {"mem?", "mem?"},
  {"<str-tab>", "<str-tab>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScollections;
MODULE_INFO module_info_gooScollections = {
  "goo/collections",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooScollectionsSoptionals (void);
extern void load_module_gooScollectionsSassoc (void);
extern void load_module_gooScollectionsSbuffer (void);
extern void load_module_gooScollectionsScollection (void);
extern void load_module_gooScollectionsSflat (void);
extern void load_module_gooScollectionsSlist (void);
extern void load_module_gooScollectionsSmap (void);
extern void load_module_gooScollectionsSrange (void);
extern void load_module_gooScollectionsSsequence (void);
extern void load_module_gooScollectionsSstep (void);
extern void load_module_gooScollectionsSstring (void);
extern void load_module_gooScollectionsStable (void);
extern void load_module_gooScollectionsSvector (void);
extern void load_module_gooScollectionsSzip (void);
extern void load_module_gooScollectionsScycle (void);

/* EXPRESSION: */

extern void load_module_gooScollections (void);

void load_module_gooScollections (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooScollectionsSoptionals();
  load_module_gooScollectionsSassoc();
  load_module_gooScollectionsSbuffer();
  load_module_gooScollectionsScollection();
  load_module_gooScollectionsSflat();
  load_module_gooScollectionsSlist();
  load_module_gooScollectionsSmap();
  load_module_gooScollectionsSrange();
  load_module_gooScollectionsSsequence();
  load_module_gooScollectionsSstep();
  load_module_gooScollectionsSstring();
  load_module_gooScollectionsStable();
  load_module_gooScollectionsSvector();
  load_module_gooScollectionsSzip();
  load_module_gooScollectionsScycle();

  (P)YgooScollectionsY___main_0___();

}

/* END OF GENERATED CODE. */
