/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols */

EXT(Yclass_props,"goo/boot","class-props");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YPprop,"goo/boot","%prop");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Ynil,"goo/boot","nil");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLcolG,"goo/boot","<col>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");

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
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooScolsSopts},
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
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"new", &module_info_gooSboot, "new"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"until", &module_info_gooSmacros, "until"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"try", &module_info_gooSboot, "try"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"dc", &module_info_gooSboot, "dc"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"@+", &module_info_gooSboot, "@+"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"not", &module_info_gooSboot, "not"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"op", &module_info_gooSmacros, "op"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"def", &module_info_gooSboot, "def"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"or", &module_info_gooSmacros, "or"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"set", &module_info_gooSboot, "set"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"items", &module_info_gooScolsScol, "items"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"dl", &module_info_gooSboot, "dl"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%su", &module_info_gooSboot, "%su"},
  {"do", &module_info_gooSmacros, "do"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"error", &module_info_gooSboot, "error"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"map", &module_info_gooSmacros, "map"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"into", &module_info_gooScolsScol, "into"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"==", &module_info_gooSmacros, "=="},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"ds", &module_info_gooSboot, "ds"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"%put", &module_info_gooSboot, "%put"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%get", &module_info_gooSboot, "%get"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"and", &module_info_gooSmacros, "and"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"when", &module_info_gooSmacros, "when"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"case", &module_info_gooSmacros, "case"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"head", &module_info_gooSboot, "head"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"if", &module_info_gooSboot, "if"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"dv", &module_info_gooSboot, "dv"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%im", &module_info_gooSboot, "%im"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"esc", &module_info_gooSboot, "esc"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"any?", &module_info_gooStypes, "any?"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"len", &module_info_gooStypes, "len"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"loc", &module_info_gooSboot, "loc"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"app", &module_info_gooSmacros, "app"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"export", &module_info_gooSboot, "export"},
  {"dss", &module_info_gooSboot, "dss"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"use", &module_info_gooSboot, "use"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"let", &module_info_gooSboot, "let"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"@==", &module_info_gooSboot, "@=="},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"for", &module_info_gooSmacros, "for"},
  {"match", &module_info_gooSmacros, "match"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"seq", &module_info_gooSboot, "seq"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"find", &module_info_gooScolsScol, "find"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"@len", &module_info_gooSboot, "@len"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"df", &module_info_gooSboot, "df"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"while", &module_info_gooSmacros, "while"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"dg", &module_info_gooSboot, "dg"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<vec>", "<vec>"},
  {"tab-shrink-threshold-setter", "tab-shrink-threshold-setter"},
  {"<enum>", "<enum>"},
  {"key-type", "key-type"},
  {"find-or", "find-or"},
  {"pop", "pop"},
  {"nxt", "nxt"},
  {"cat", "cat"},
  {"reject", "reject"},
  {"zap!", "zap!"},
  {"any2?", "any2?"},
  {"pair", "pair"},
  {"unzip", "unzip"},
  {"now-key", "now-key"},
  {"elt-default", "elt-default"},
  {"fab-fill!", "fab-fill!"},
  {"col-res-type", "col-res-type"},
  {"sort-by", "sort-by"},
  {"tail-setter", "tail-setter"},
  {"del-dups!", "del-dups!"},
  {"now", "now"},
  {"range-by", "range-by"},
  {"num-to-str", "num-to-str"},
  {"*print-base*", "*print-base*"},
  {"<seq>", "<seq>"},
  {"<range>", "<range>"},
  {"tail", "tail"},
  {"1st", "1st"},
  {"rep-elt-setter", "rep-elt-setter"},
  {"fold+", "fold+"},
  {"fab", "fab"},
  {"elt-type", "elt-type"},
  {"rev!", "rev!"},
  {"str-to-num", "str-to-num"},
  {"del-vals", "del-vals"},
  {"items", "items"},
  {"fab-into", "fab-into"},
  {"fin?", "fin?"},
  {"del-vals!", "del-vals!"},
  {"low-elt-setter", "low-elt-setter"},
  {"dup", "dup"},
  {"rep-elt", "rep-elt"},
  {"do-key-vals", "do-key-vals"},
  {"do", "do"},
  {"enum", "enum"},
  {"rep-fill!", "rep-fill!"},
  {"all2?", "all2?"},
  {"<seq.>", "<seq.>"},
  {"<list>", "<list>"},
  {"finds", "finds"},
  {"cat2", "cat2"},
  {"vec", "vec"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"map", "map"},
  {"into", "into"},
  {"vals-to-str", "vals-to-str"},
  {"elt-or", "elt-or"},
  {"push!", "push!"},
  {"rep-fab", "rep-fab"},
  {"fold", "fold"},
  {"<str-tab>", "<str-tab>"},
  {"<map>", "<map>"},
  {"<col.>", "<col.>"},
  {"elt-setter", "elt-setter"},
  {"<set>", "<set>"},
  {"mem?", "mem?"},
  {"below", "below"},
  {"add", "add"},
  {"rep-len", "rep-len"},
  {"del!", "del!"},
  {"sort", "sort"},
  {"tab-growth-threshold-setter", "tab-growth-threshold-setter"},
  {"char->ascii", "char->ascii"},
  {"ins!", "ins!"},
  {"fill!", "fill!"},
  {"id-hash", "id-hash"},
  {"last", "last"},
  {"map-keyed", "map-keyed"},
  {"rep-nul", "rep-nul"},
  {"tab-growth-factor", "tab-growth-factor"},
  {"suffix?", "suffix?"},
  {"tab-shrink-threshold", "tab-shrink-threshold"},
  {"cat!", "cat!"},
  {"each", "each"},
  {"<tup>", "<tup>"},
  {"<opts>", "<opts>"},
  {"head-setter", "head-setter"},
  {"<cycle>", "<cycle>"},
  {"nil", "nil"},
  {"pick", "pick"},
  {"do2", "do2"},
  {"num-to-str-base", "num-to-str-base"},
  {"join", "join"},
  {"elt", "elt"},
  {"<col>", "<col>"},
  {"elts", "elts"},
  {"head", "head"},
  {"empty", "empty"},
  {"rev", "rev"},
  {"str", "str"},
  {"zip", "zip"},
  {"from", "from"},
  {"tab-hash", "tab-hash"},
  {"do-keyed", "do-keyed"},
  {"prefix?", "prefix?"},
  {"do3", "do3"},
  {"all?", "all?"},
  {"<tab>", "<tab>"},
  {"range", "range"},
  {"zap", "zap"},
  {"first-then", "first-then"},
  {"<flat>", "<flat>"},
  {"pop!", "pop!"},
  {"list", "list"},
  {"pos", "pos"},
  {"range-check?", "range-check?"},
  {"any?", "any?"},
  {"empty?", "empty?"},
  {"col-res", "col-res"},
  {"push", "push"},
  {"rep-into!", "rep-into!"},
  {"assq", "assq"},
  {"<rep>", "<rep>"},
  {"len", "len"},
  {"tup", "tup"},
  {"ins", "ins"},
  {"map2", "map2"},
  {"<each>", "<each>"},
  {"tab-growth-threshold", "tab-growth-threshold"},
  {"lst", "lst"},
  {"ascii-whitespaces", "ascii-whitespaces"},
  {"3rd", "3rd"},
  {"add!", "add!"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"split", "split"},
  {"range-check", "range-check"},
  {"len/fill-setter", "len/fill-setter"},
  {"ascii-limit", "ascii-limit"},
  {"sort!", "sort!"},
  {"<zip>", "<zip>"},
  {"keys", "keys"},
  {"sub-setter", "sub-setter"},
  {"<lst>", "<lst>"},
  {"del", "del"},
  {"alter", "alter"},
  {"now-setter", "now-setter"},
  {"sub", "sub"},
  {"fab-elt-setter", "fab-elt-setter"},
  {"fill", "fill"},
  {"del-dups", "del-dups"},
  {"find", "find"},
  {"fab-map", "fab-map"},
  {"<step>", "<step>"},
  {"assqn", "assqn"},
  {"tab-growth-factor-setter", "tab-growth-factor-setter"},
  {"cycle", "cycle"},
  {"key-test", "key-test"},
  {"low-elt", "low-elt"},
  {"repeat", "repeat"},
  {"len-setter", "len-setter"},
  {"sort-by!", "sort-by!"},
  {"fabs", "fabs"},
  {"2nd", "2nd"},
  {"range-error", "range-error"},
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
