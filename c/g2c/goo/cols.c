/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols */

EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSstrYstring_join,"goo/cols/str","string-join");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsScolYlow_fillX,"goo/cols/col","low-fill!");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSstrYstring_split,"goo/cols/str","string-split");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSlstYpop,"goo/cols/lst","pop");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Ynew,"goo/boot","new");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsScolYlow_into,"goo/cols/col","low-into");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSlstYpush,"goo/cols/lst","push");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSassocYassocs_test_setter,"goo/cols/assoc","assocs-test-setter");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSstrYstring_repeat,"goo/cols/str","string-repeat");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPisa,"goo/boot","%isa");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Ynil,"goo/boot","nil");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yunexec,"goo/boot","unexec");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSvecYpop_lastX,"goo/cols/vec","pop-last!");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSvecYpush_lastX,"goo/cols/vec","push-last!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ylst,"goo/boot","lst");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(Yerror,"goo/boot","error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YgooScolsY___main_0___ ();

/* FUNCTION CODES: */

P YgooScolsY___main_0___() {
  P T0;
loop:
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSopts;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSflat;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsStup;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooScolsSopts},
  {&module_info_gooScolsSassoc},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSflat},
  {&module_info_gooScolsSlst},
  {&module_info_gooScolsSmap},
  {&module_info_gooScolsSrange},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {&module_info_gooScolsSstep},
  {&module_info_gooScolsSstr},
  {&module_info_gooScolsStab},
  {&module_info_gooScolsSrep},
  {&module_info_gooScolsSvec},
  {&module_info_gooScolsStup},
  {&module_info_gooScolsSzip},
  {&module_info_gooScolsScycle},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"quote", &module_info_gooSboot, "quote"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"items", &module_info_gooScolsScol, "items"},
  {"loc", &module_info_gooSboot, "loc"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"string-join", &module_info_gooScolsSstr, "string-join"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"len", &module_info_gooStypes, "len"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"find", &module_info_gooScolsScol, "find"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"@+", &module_info_gooSboot, "@+"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"df", &module_info_gooSboot, "df"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"for", &module_info_gooSmacros, "for"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"if", &module_info_gooSboot, "if"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"tab-test", &module_info_gooScolsStab, "tab-test"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"dss", &module_info_gooSboot, "dss"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"low-fill!", &module_info_gooScolsScol, "low-fill!"},
  {"%put", &module_info_gooSboot, "%put"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"not", &module_info_gooSboot, "not"},
  {"op", &module_info_gooSmacros, "op"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"dc", &module_info_gooSboot, "dc"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"export", &module_info_gooSboot, "export"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"into", &module_info_gooScolsScol, "into"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"head", &module_info_gooSboot, "head"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"let", &module_info_gooSboot, "let"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"or", &module_info_gooSmacros, "or"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%im", &module_info_gooSboot, "%im"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"map", &module_info_gooSmacros, "map"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"string-split", &module_info_gooScolsSstr, "string-split"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"while", &module_info_gooSmacros, "while"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"pop", &module_info_gooScolsSlst, "pop"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"now", &module_info_gooScolsScol, "now"},
  {"mif", &module_info_gooSboot, "mif"},
  {"new", &module_info_gooSboot, "new"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"low-into", &module_info_gooScolsScol, "low-into"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"do", &module_info_gooSmacros, "do"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"push", &module_info_gooScolsSlst, "push"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"del", &module_info_gooScolsScol, "del"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"tup", &module_info_gooSboot, "tup"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"assocs-test-setter", &module_info_gooScolsSassoc, "assocs-test-setter"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"string-repeat", &module_info_gooScolsSstr, "string-repeat"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"isa", &module_info_gooSboot, "isa"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"set", &module_info_gooSboot, "set"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"fun", &module_info_gooSboot, "fun"},
  {"dm", &module_info_gooSboot, "dm"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"when", &module_info_gooSmacros, "when"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"%get", &module_info_gooSboot, "%get"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"match", &module_info_gooSmacros, "match"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"def", &module_info_gooSboot, "def"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"$permanent-hash-state", &module_info_gooScolsStab, "$permanent-hash-state"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"seq", &module_info_gooSboot, "seq"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"try", &module_info_gooSboot, "try"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"@len", &module_info_gooSboot, "@len"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"pop-last!", &module_info_gooScolsSvec, "pop-last!"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"rep", &module_info_gooSboot, "rep"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"any?", &module_info_gooStypes, "any?"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"and", &module_info_gooSmacros, "and"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"push-last!", &module_info_gooScolsSvec, "push-last!"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"app", &module_info_gooSmacros, "app"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"==", &module_info_gooSmacros, "=="},
  {"last", &module_info_gooScolsSseq, "last"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"use", &module_info_gooSboot, "use"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"case", &module_info_gooSmacros, "case"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"error", &module_info_gooSboot, "error"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<lst>", "<lst>"},
  {"elt-type", "elt-type"},
  {"do-keyed", "do-keyed"},
  {"items", "items"},
  {"rev", "rev"},
  {"string-join", "string-join"},
  {"assqn", "assqn"},
  {"*print-base*", "*print-base*"},
  {"len", "len"},
  {"empty", "empty"},
  {"range-error", "range-error"},
  {"find", "find"},
  {"fab-map", "fab-map"},
  {"fold", "fold"},
  {"1st", "1st"},
  {"rep-len", "rep-len"},
  {"sub-setter", "sub-setter"},
  {"tab-hash", "tab-hash"},
  {"first-then", "first-then"},
  {"pick", "pick"},
  {"any2?", "any2?"},
  {"<map>", "<map>"},
  {"add!", "add!"},
  {"rep-nul", "rep-nul"},
  {"empty?", "empty?"},
  {"rep-elt", "rep-elt"},
  {"num-to-str-base", "num-to-str-base"},
  {"as-copy", "as-copy"},
  {"str-to-num", "str-to-num"},
  {"range-by", "range-by"},
  {"range-check?", "range-check?"},
  {"mem?", "mem?"},
  {"tab-test", "tab-test"},
  {"now-setter", "now-setter"},
  {"<step>", "<step>"},
  {"low-fill!", "low-fill!"},
  {"char->ascii", "char->ascii"},
  {"<seq.>", "<seq.>"},
  {"keys", "keys"},
  {"rep-fab", "rep-fab"},
  {"<vec>", "<vec>"},
  {"map2", "map2"},
  {"range-check", "range-check"},
  {"head-setter", "head-setter"},
  {"<range>", "<range>"},
  {"into", "into"},
  {"tab-growth-factor", "tab-growth-factor"},
  {"head", "head"},
  {"str", "str"},
  {"fill", "fill"},
  {"fab", "fab"},
  {"ins", "ins"},
  {"<cycle>", "<cycle>"},
  {"do-key-vals", "do-key-vals"},
  {"<seq>", "<seq>"},
  {"nxt", "nxt"},
  {"key-test", "key-test"},
  {"fill!", "fill!"},
  {"alter", "alter"},
  {"zap", "zap"},
  {"map", "map"},
  {"finds", "finds"},
  {"tab-growth-threshold", "tab-growth-threshold"},
  {"tab-growth-threshold-setter", "tab-growth-threshold-setter"},
  {"string-split", "string-split"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"now-key", "now-key"},
  {"low-elt", "low-elt"},
  {"below", "below"},
  {"key-type", "key-type"},
  {"fabs", "fabs"},
  {"vals-to-str", "vals-to-str"},
  {"pop", "pop"},
  {"now", "now"},
  {"low-into", "low-into"},
  {"do", "do"},
  {"2nd", "2nd"},
  {"<set>", "<set>"},
  {"push", "push"},
  {"range", "range"},
  {"elt-default", "elt-default"},
  {"tab-gc-state", "tab-gc-state"},
  {"assocs-test", "assocs-test"},
  {"pair", "pair"},
  {"del", "del"},
  {"elts", "elts"},
  {"<tab>", "<tab>"},
  {"elt-setter", "elt-setter"},
  {"cycle", "cycle"},
  {"from", "from"},
  {"del-dups", "del-dups"},
  {"unzip", "unzip"},
  {"assocs-test-setter", "assocs-test-setter"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"len/fill-setter", "len/fill-setter"},
  {"string-repeat", "string-repeat"},
  {"tab-shrink-threshold-setter", "tab-shrink-threshold-setter"},
  {"<list>", "<list>"},
  {"cat!", "cat!"},
  {"all?", "all?"},
  {"do3", "do3"},
  {"sub", "sub"},
  {"<col.>", "<col.>"},
  {"fin?", "fin?"},
  {"zip", "zip"},
  {"ins!", "ins!"},
  {"tup", "tup"},
  {"rep-into!", "rep-into!"},
  {"all2?", "all2?"},
  {"nil", "nil"},
  {"enum", "enum"},
  {"<assocs>", "<assocs>"},
  {"low-elt-setter", "low-elt-setter"},
  {"ascii-whitespaces", "ascii-whitespaces"},
  {"<opts>", "<opts>"},
  {"<tup>", "<tup>"},
  {"$permanent-hash-state", "$permanent-hash-state"},
  {"cat2", "cat2"},
  {"<col>", "<col>"},
  {"len-setter", "len-setter"},
  {"dup", "dup"},
  {"do2", "do2"},
  {"tab-shrink-threshold", "tab-shrink-threshold"},
  {"find-or", "find-or"},
  {"del-vals", "del-vals"},
  {"elt-or", "elt-or"},
  {"assq", "assq"},
  {"<str-tab>", "<str-tab>"},
  {"pop-last!", "pop-last!"},
  {"any?", "any?"},
  {"num-to-str", "num-to-str"},
  {"zap!", "zap!"},
  {"push-last!", "push-last!"},
  {"<flat>", "<flat>"},
  {"last", "last"},
  {"<rep>", "<rep>"},
  {"tail-setter", "tail-setter"},
  {"lst", "lst"},
  {"<zip>", "<zip>"},
  {"map-keyed", "map-keyed"},
  {"rep-fill!", "rep-fill!"},
  {"fold+", "fold+"},
  {"reject", "reject"},
  {"<enum>", "<enum>"},
  {"cat", "cat"},
  {"add", "add"},
  {"ascii-limit", "ascii-limit"},
  {"tail", "tail"},
  {"vec", "vec"},
  {"pos", "pos"},
  {"tab-growth-factor-setter", "tab-growth-factor-setter"},
  {"list", "list"},
  {"rep-elt-setter", "rep-elt-setter"},
  {"del!", "del!"},
  {"3rd", "3rd"},
  {"id-hash", "id-hash"},
  {"elt", "elt"},
  {"rev!", "rev!"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScols;
MODULE_INFO module_info_gooScols = {
  "goo/cols",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooScolsSopts (void);
extern void load_module_gooScolsSassoc (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSflat (void);
extern void load_module_gooScolsSlst (void);
extern void load_module_gooScolsSmap (void);
extern void load_module_gooScolsSrange (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);
extern void load_module_gooScolsSstep (void);
extern void load_module_gooScolsSstr (void);
extern void load_module_gooScolsStab (void);
extern void load_module_gooScolsSrep (void);
extern void load_module_gooScolsSvec (void);
extern void load_module_gooScolsStup (void);
extern void load_module_gooScolsSzip (void);
extern void load_module_gooScolsScycle (void);

/* EXPRESSION: */

extern void load_module_gooScols (void);

void load_module_gooScols (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooScolsSopts();
  load_module_gooScolsSassoc();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSflat();
  load_module_gooScolsSlst();
  load_module_gooScolsSmap();
  load_module_gooScolsSrange();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();
  load_module_gooScolsSstep();
  load_module_gooScolsSstr();
  load_module_gooScolsStab();
  load_module_gooScolsSrep();
  load_module_gooScolsSvec();
  load_module_gooScolsStup();
  load_module_gooScolsSzip();
  load_module_gooScolsScycle();

  (P)YgooScolsY___main_0___();

}

/* END OF GENERATED CODE. */
