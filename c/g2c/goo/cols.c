/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols */

DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ynot,"goo/boot","not");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YtT,"goo/boot","t*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ylst,"goo/boot","lst");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YLintG,"goo/boot","<int>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ynil,"goo/boot","nil");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YgooScolsY___main_0___ ();

/* FUNCTION CODES: */

P YgooScolsY___main_0___() {
  P T0;
DEFCREGS();
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
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%time", &module_info_gooSboot, "%time"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"@len", &module_info_gooSboot, "@len"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"@<", &module_info_gooSboot, "@<"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%im", &module_info_gooSboot, "%im"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"when", &module_info_gooSmacros, "when"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"not", &module_info_gooSboot, "not"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"def", &module_info_gooSboot, "def"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"for", &module_info_gooSmacros, "for"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"seq", &module_info_gooSboot, "seq"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"dp", &module_info_gooSboot, "dp"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"nul", &module_info_gooSboot, "nul"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"df", &module_info_gooSboot, "df"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"dm", &module_info_gooSboot, "dm"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"while", &module_info_gooSmacros, "while"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"if", &module_info_gooSboot, "if"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%put", &module_info_gooSboot, "%put"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"head", &module_info_gooSboot, "head"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"ct", &module_info_gooSboot, "ct"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"any?", &module_info_gooStypes, "any?"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"t*", &module_info_gooSboot, "t*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"try", &module_info_gooSboot, "try"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"use", &module_info_gooSboot, "use"},
  {"%get", &module_info_gooSboot, "%get"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"map", &module_info_gooSmacros, "map"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"op", &module_info_gooSmacros, "op"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%su", &module_info_gooSboot, "%su"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dl", &module_info_gooSboot, "dl"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"export", &module_info_gooSboot, "export"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"@+", &module_info_gooSboot, "@+"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"==", &module_info_gooSmacros, "=="},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"match", &module_info_gooSmacros, "match"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"fun", &module_info_gooSboot, "fun"},
  {"now", &module_info_gooScolsScol, "now"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"case", &module_info_gooSmacros, "case"},
  {"do", &module_info_gooSmacros, "do"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"*print-base*", "*print-base*"},
  {"rev", "rev"},
  {"last", "last"},
  {"num-to-str", "num-to-str"},
  {"now-setter", "now-setter"},
  {"enum", "enum"},
  {"<str-tab>", "<str-tab>"},
  {"ascii-limit", "ascii-limit"},
  {"rev!", "rev!"},
  {"del-vals", "del-vals"},
  {"fin?", "fin?"},
  {"each", "each"},
  {"<step>", "<step>"},
  {"rep-nul", "rep-nul"},
  {"add", "add"},
  {"assqn", "assqn"},
  {"tail-setter", "tail-setter"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"<vec>", "<vec>"},
  {"tail", "tail"},
  {"do-key-vals", "do-key-vals"},
  {"reject", "reject"},
  {"first-then", "first-then"},
  {"all2?", "all2?"},
  {"2nd", "2nd"},
  {"elt-setter", "elt-setter"},
  {"col-res", "col-res"},
  {"find-or", "find-or"},
  {"empty", "empty"},
  {"rep-into!", "rep-into!"},
  {"fab", "fab"},
  {"pair", "pair"},
  {"num-to-str-base", "num-to-str-base"},
  {"vals-to-str", "vals-to-str"},
  {"elts", "elts"},
  {"1st", "1st"},
  {"<cycle>", "<cycle>"},
  {"<zip>", "<zip>"},
  {"empty?", "empty?"},
  {"alter", "alter"},
  {"pick", "pick"},
  {"all?", "all?"},
  {"rep-elt-setter", "rep-elt-setter"},
  {"rep-len", "rep-len"},
  {"<tup>", "<tup>"},
  {"fold+", "fold+"},
  {"str-to-num", "str-to-num"},
  {"any2?", "any2?"},
  {"<flat>", "<flat>"},
  {"fab-elt-setter", "fab-elt-setter"},
  {"join", "join"},
  {"push!", "push!"},
  {"keys", "keys"},
  {"sort-by!", "sort-by!"},
  {"rep-elt", "rep-elt"},
  {"<lst>", "<lst>"},
  {"tab-hash", "tab-hash"},
  {"3rd", "3rd"},
  {"ins", "ins"},
  {"char->ascii", "char->ascii"},
  {"col", "col"},
  {"low-elt", "low-elt"},
  {"fold", "fold"},
  {"key-test", "key-test"},
  {"sort!", "sort!"},
  {"list", "list"},
  {"map2", "map2"},
  {"str", "str"},
  {"<seq.>", "<seq.>"},
  {"head-setter", "head-setter"},
  {"split", "split"},
  {"low-elt-setter", "low-elt-setter"},
  {"ascii-whitespaces", "ascii-whitespaces"},
  {"rep-fab", "rep-fab"},
  {"<seq>", "<seq>"},
  {"range-error", "range-error"},
  {"pos", "pos"},
  {"head", "head"},
  {"key-type", "key-type"},
  {"del-dups!", "del-dups!"},
  {"<opts>", "<opts>"},
  {"cat!", "cat!"},
  {"range-by", "range-by"},
  {"<col.>", "<col.>"},
  {"rep-fill!", "rep-fill!"},
  {"<enum>", "<enum>"},
  {"repeat", "repeat"},
  {"elt-default", "elt-default"},
  {"fill!", "fill!"},
  {"below", "below"},
  {"<col>", "<col>"},
  {"fab-fill!", "fab-fill!"},
  {"any?", "any?"},
  {"del-vals!", "del-vals!"},
  {"from", "from"},
  {"do3", "do3"},
  {"<rep>", "<rep>"},
  {"col-res-type", "col-res-type"},
  {"elt-type", "elt-type"},
  {"sub", "sub"},
  {"lst", "lst"},
  {"len/fill-setter", "len/fill-setter"},
  {"tab-shrink-threshold-setter", "tab-shrink-threshold-setter"},
  {"prefix?", "prefix?"},
  {"fab-into", "fab-into"},
  {"items", "items"},
  {"fill", "fill"},
  {"unzip", "unzip"},
  {"pop", "pop"},
  {"ins!", "ins!"},
  {"vec", "vec"},
  {"id-hash", "id-hash"},
  {"do2", "do2"},
  {"tab-growth-factor-setter", "tab-growth-factor-setter"},
  {"len-setter", "len-setter"},
  {"tab-growth-threshold-setter", "tab-growth-threshold-setter"},
  {"map", "map"},
  {"fabs", "fabs"},
  {"elt-or", "elt-or"},
  {"suffix?", "suffix?"},
  {"find", "find"},
  {"mem?", "mem?"},
  {"tab-shrink-threshold", "tab-shrink-threshold"},
  {"zap!", "zap!"},
  {"zip", "zip"},
  {"<set>", "<set>"},
  {"<tab>", "<tab>"},
  {"pop!", "pop!"},
  {"<each>", "<each>"},
  {"map-keyed", "map-keyed"},
  {"elt", "elt"},
  {"sub-setter", "sub-setter"},
  {"sort-by", "sort-by"},
  {"finds", "finds"},
  {"tup", "tup"},
  {"<range>", "<range>"},
  {"cat2", "cat2"},
  {"tab-growth-factor", "tab-growth-factor"},
  {"del!", "del!"},
  {"tab-growth-threshold", "tab-growth-threshold"},
  {"range-check?", "range-check?"},
  {"zap", "zap"},
  {"into", "into"},
  {"len", "len"},
  {"sort", "sort"},
  {"<map>", "<map>"},
  {"do-keyed", "do-keyed"},
  {"nil", "nil"},
  {"nxt", "nxt"},
  {"range", "range"},
  {"push", "push"},
  {"cycle", "cycle"},
  {"del-dups", "del-dups"},
  {"cat", "cat"},
  {"now-key", "now-key"},
  {"add!", "add!"},
  {"assq", "assq"},
  {"range-check", "range-check"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"del", "del"},
  {"now", "now"},
  {"dup", "dup"},
  {"do", "do"},
  {"<list>", "<list>"},
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
