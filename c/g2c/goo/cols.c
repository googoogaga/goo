/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols */

EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YLintG,"goo/boot","<int>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Ynil,"goo/boot","nil");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Ynul,"goo/boot","nul");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ytail,"goo/boot","tail");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ynot,"goo/boot","not");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Yhead,"goo/boot","head");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ylst,"goo/boot","lst");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");

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
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"do2", &module_info_gooScolsSseq, "do2"},
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
  {"range", &module_info_gooScolsSrange, "range"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"%put", &module_info_gooSboot, "%put"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"map", &module_info_gooSmacros, "map"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"@==", &module_info_gooSboot, "@=="},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"op", &module_info_gooSmacros, "op"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"export", &module_info_gooSboot, "export"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"nul", &module_info_gooSboot, "nul"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"==", &module_info_gooSmacros, "=="},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"del", &module_info_gooScolsScol, "del"},
  {"match", &module_info_gooSmacros, "match"},
  {"do", &module_info_gooSmacros, "do"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"fun", &module_info_gooSboot, "fun"},
  {"now", &module_info_gooScolsScol, "now"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"dup", &module_info_gooScolsScol, "dup"},
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
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
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
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"when", &module_info_gooSmacros, "when"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"rep", &module_info_gooSboot, "rep"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"@len", &module_info_gooSboot, "@len"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"not", &module_info_gooSboot, "not"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"def", &module_info_gooSboot, "def"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"for", &module_info_gooSmacros, "for"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"seq", &module_info_gooSboot, "seq"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"error", &module_info_gooSboot, "error"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"dp", &module_info_gooSboot, "dp"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"quote", &module_info_gooSboot, "quote"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"df", &module_info_gooSboot, "df"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"dg", &module_info_gooSboot, "dg"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"dm", &module_info_gooSboot, "dm"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"while", &module_info_gooSmacros, "while"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"ds", &module_info_gooSboot, "ds"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"head", &module_info_gooSboot, "head"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"ct", &module_info_gooSboot, "ct"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"into", &module_info_gooScolsScol, "into"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"any?", &module_info_gooStypes, "any?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"t*", &module_info_gooSboot, "t*"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%get", &module_info_gooSboot, "%get"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"lst", &module_info_gooSboot, "lst"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"try", &module_info_gooSboot, "try"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%time", &module_info_gooSboot, "%time"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"pop", "pop"},
  {"ins!", "ins!"},
  {"vec", "vec"},
  {"id-hash", "id-hash"},
  {"do2", "do2"},
  {"nil", "nil"},
  {"range", "range"},
  {"tab-growth-factor-setter", "tab-growth-factor-setter"},
  {"<list>", "<list>"},
  {"len-setter", "len-setter"},
  {"tab-growth-threshold-setter", "tab-growth-threshold-setter"},
  {"map", "map"},
  {"fabs", "fabs"},
  {"elt-or", "elt-or"},
  {"suffix?", "suffix?"},
  {"find", "find"},
  {"mem?", "mem?"},
  {"tab-shrink-threshold", "tab-shrink-threshold"},
  {"first-then", "first-then"},
  {"zap!", "zap!"},
  {"<set>", "<set>"},
  {"<tab>", "<tab>"},
  {"pop!", "pop!"},
  {"map-keyed", "map-keyed"},
  {"elt", "elt"},
  {"sub-setter", "sub-setter"},
  {"sort-by", "sort-by"},
  {"*print-base*", "*print-base*"},
  {"finds", "finds"},
  {"tup", "tup"},
  {"cat2", "cat2"},
  {"tab-growth-factor", "tab-growth-factor"},
  {"del!", "del!"},
  {"tab-growth-threshold", "tab-growth-threshold"},
  {"range-check?", "range-check?"},
  {"zap", "zap"},
  {"len", "len"},
  {"sort", "sort"},
  {"<map>", "<map>"},
  {"range-by", "range-by"},
  {"do-keyed", "do-keyed"},
  {"list", "list"},
  {"ascii-whitespaces", "ascii-whitespaces"},
  {"nxt", "nxt"},
  {"<col.>", "<col.>"},
  {"del-dups", "del-dups"},
  {"cat", "cat"},
  {"now-key", "now-key"},
  {"add!", "add!"},
  {"assq", "assq"},
  {"range-check", "range-check"},
  {"del", "del"},
  {"now", "now"},
  {"dup", "dup"},
  {"do", "do"},
  {"rev", "rev"},
  {"last", "last"},
  {"num-to-str", "num-to-str"},
  {"now-setter", "now-setter"},
  {"enum", "enum"},
  {"rev!", "rev!"},
  {"del-vals", "del-vals"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"fin?", "fin?"},
  {"rep-nul", "rep-nul"},
  {"add", "add"},
  {"assqn", "assqn"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"tail-setter", "tail-setter"},
  {"<vec>", "<vec>"},
  {"tab-hash", "tab-hash"},
  {"do-key-vals", "do-key-vals"},
  {"tail", "tail"},
  {"reject", "reject"},
  {"all2?", "all2?"},
  {"2nd", "2nd"},
  {"elt-setter", "elt-setter"},
  {"col-res", "col-res"},
  {"find-or", "find-or"},
  {"empty", "empty"},
  {"rep-into!", "rep-into!"},
  {"ascii-limit", "ascii-limit"},
  {"fab", "fab"},
  {"pair", "pair"},
  {"num-to-str-base", "num-to-str-base"},
  {"vals-to-str", "vals-to-str"},
  {"cycle", "cycle"},
  {"elts", "elts"},
  {"1st", "1st"},
  {"empty?", "empty?"},
  {"alter", "alter"},
  {"pick", "pick"},
  {"all?", "all?"},
  {"rep-elt-setter", "rep-elt-setter"},
  {"fold+", "fold+"},
  {"str-to-num", "str-to-num"},
  {"char->ascii", "char->ascii"},
  {"any2?", "any2?"},
  {"<cycle>", "<cycle>"},
  {"fab-elt-setter", "fab-elt-setter"},
  {"<tup>", "<tup>"},
  {"join", "join"},
  {"<flat>", "<flat>"},
  {"<rep>", "<rep>"},
  {"push!", "push!"},
  {"keys", "keys"},
  {"sort-by!", "sort-by!"},
  {"rep-fill!", "rep-fill!"},
  {"rep-elt", "rep-elt"},
  {"<lst>", "<lst>"},
  {"<each>", "<each>"},
  {"col", "col"},
  {"low-elt", "low-elt"},
  {"fold", "fold"},
  {"key-test", "key-test"},
  {"sort!", "sort!"},
  {"ins", "ins"},
  {"map2", "map2"},
  {"str", "str"},
  {"<zip>", "<zip>"},
  {"split", "split"},
  {"<seq.>", "<seq.>"},
  {"low-elt-setter", "low-elt-setter"},
  {"head-setter", "head-setter"},
  {"<seq>", "<seq>"},
  {"rep-fab", "rep-fab"},
  {"3rd", "3rd"},
  {"push", "push"},
  {"range-error", "range-error"},
  {"pos", "pos"},
  {"key-type", "key-type"},
  {"del-dups!", "del-dups!"},
  {"head", "head"},
  {"<opts>", "<opts>"},
  {"cat!", "cat!"},
  {"unzip", "unzip"},
  {"<range>", "<range>"},
  {"elt-default", "elt-default"},
  {"<enum>", "<enum>"},
  {"repeat", "repeat"},
  {"into", "into"},
  {"fill!", "fill!"},
  {"below", "below"},
  {"fab-fill!", "fab-fill!"},
  {"any?", "any?"},
  {"<step>", "<step>"},
  {"<col>", "<col>"},
  {"del-vals!", "del-vals!"},
  {"from", "from"},
  {"do3", "do3"},
  {"col-res-type", "col-res-type"},
  {"elt-type", "elt-type"},
  {"sub", "sub"},
  {"lst", "lst"},
  {"len/fill-setter", "len/fill-setter"},
  {"rep-len", "rep-len"},
  {"each", "each"},
  {"tab-shrink-threshold-setter", "tab-shrink-threshold-setter"},
  {"prefix?", "prefix?"},
  {"fab-into", "fab-into"},
  {"<str-tab>", "<str-tab>"},
  {"items", "items"},
  {"fill", "fill"},
  {"zip", "zip"},
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
