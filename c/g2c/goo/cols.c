/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols */

EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ynot,"goo/boot","not");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Ylst,"goo/boot","lst");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YLanyG,"goo/boot","<any>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ynil,"goo/boot","nil");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Ytail,"goo/boot","tail");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");

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
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;

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
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"not", &module_info_gooSboot, "not"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"loc", &module_info_gooSboot, "loc"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%str", &module_info_gooSboot, "%str"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"col", &module_info_gooScolsScol, "col"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"ds", &module_info_gooSboot, "ds"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"len", &module_info_gooStypes, "len"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"op", &module_info_gooSmacros, "op"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"def", &module_info_gooSboot, "def"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"into", &module_info_gooScolsScol, "into"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"export", &module_info_gooSboot, "export"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"and", &module_info_gooSmacros, "and"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"set", &module_info_gooSboot, "set"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"if", &module_info_gooSboot, "if"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"now", &module_info_gooScolsScol, "now"},
  {"ct", &module_info_gooSboot, "ct"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"mif", &module_info_gooSboot, "mif"},
  {"==", &module_info_gooSmacros, "=="},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"case", &module_info_gooSmacros, "case"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"let", &module_info_gooSboot, "let"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"items", &module_info_gooScolsScol, "items"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"find", &module_info_gooScolsScol, "find"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"when", &module_info_gooSmacros, "when"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"rep", &module_info_gooSboot, "rep"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"dss", &module_info_gooSboot, "dss"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"@len", &module_info_gooSboot, "@len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"use", &module_info_gooSboot, "use"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"@+", &module_info_gooSboot, "@+"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"app", &module_info_gooSmacros, "app"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%met", &module_info_gooSboot, "%met"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"%time", &module_info_gooSboot, "%time"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"nul", &module_info_gooSboot, "nul"},
  {"seq", &module_info_gooSboot, "seq"},
  {"map", &module_info_gooSmacros, "map"},
  {"do", &module_info_gooSmacros, "do"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"for", &module_info_gooSmacros, "for"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"error", &module_info_gooSboot, "error"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"%im", &module_info_gooSboot, "%im"},
  {"dm", &module_info_gooSboot, "dm"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"while", &module_info_gooSmacros, "while"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"df", &module_info_gooSboot, "df"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"last", &module_info_gooSmacros, "last"},
  {"dg", &module_info_gooSboot, "dg"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"@<", &module_info_gooSboot, "@<"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"try", &module_info_gooSboot, "try"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%put", &module_info_gooSboot, "%put"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"esc", &module_info_gooSboot, "esc"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"any2?", "any2?"},
  {"<seq>", "<seq>"},
  {"dup", "dup"},
  {"cat!", "cat!"},
  {"head-setter", "head-setter"},
  {"del-vals!", "del-vals!"},
  {"head", "head"},
  {"find-or", "find-or"},
  {"3rd", "3rd"},
  {"fab-fill!", "fab-fill!"},
  {"<col.>", "<col.>"},
  {"sort-by", "sort-by"},
  {"rep-fab", "rep-fab"},
  {"sort", "sort"},
  {"pop", "pop"},
  {"<col>", "<col>"},
  {"add", "add"},
  {"elt", "elt"},
  {"<list>", "<list>"},
  {"push!", "push!"},
  {"lst", "lst"},
  {"<rep>", "<rep>"},
  {"rev", "rev"},
  {"2nd", "2nd"},
  {"col", "col"},
  {"unzip", "unzip"},
  {"del-dups", "del-dups"},
  {"fold+", "fold+"},
  {"ins!", "ins!"},
  {"fab-into", "fab-into"},
  {"do-key-vals", "do-key-vals"},
  {"push", "push"},
  {"empty", "empty"},
  {"len", "len"},
  {"tab-shrink-threshold-setter", "tab-shrink-threshold-setter"},
  {"elts", "elts"},
  {"<zip>", "<zip>"},
  {"del!", "del!"},
  {"pos", "pos"},
  {"<opts>", "<opts>"},
  {"all?", "all?"},
  {"del-vals", "del-vals"},
  {"pop!", "pop!"},
  {"do2", "do2"},
  {"<enum>", "<enum>"},
  {"empty?", "empty?"},
  {"zip", "zip"},
  {"into", "into"},
  {"map", "map"},
  {"ascii-limit", "ascii-limit"},
  {"tup", "tup"},
  {"fold", "fold"},
  {"1st", "1st"},
  {"sub-setter", "sub-setter"},
  {"vals-to-str", "vals-to-str"},
  {"<map>", "<map>"},
  {"reject", "reject"},
  {"vec", "vec"},
  {"<flat>", "<flat>"},
  {"nxt", "nxt"},
  {"col-res-type", "col-res-type"},
  {"rep-fill!", "rep-fill!"},
  {"keys", "keys"},
  {"num-to-str", "num-to-str"},
  {"add!", "add!"},
  {"now-key", "now-key"},
  {"*print-base*", "*print-base*"},
  {"map2", "map2"},
  {"now", "now"},
  {"len-setter", "len-setter"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"nil", "nil"},
  {"key-test", "key-test"},
  {"map-keyed", "map-keyed"},
  {"range-by", "range-by"},
  {"any?", "any?"},
  {"range-check?", "range-check?"},
  {"fin?", "fin?"},
  {"items", "items"},
  {"pick", "pick"},
  {"find", "find"},
  {"enum", "enum"},
  {"key-type", "key-type"},
  {"rev!", "rev!"},
  {"num-to-str-base", "num-to-str-base"},
  {"finds", "finds"},
  {"do-keyed", "do-keyed"},
  {"range-check", "range-check"},
  {"elt-setter", "elt-setter"},
  {"fill", "fill"},
  {"elt-default", "elt-default"},
  {"cycle", "cycle"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"<str-tab>", "<str-tab>"},
  {"assq", "assq"},
  {"mem?", "mem?"},
  {"<step>", "<step>"},
  {"join", "join"},
  {"zap!", "zap!"},
  {"list", "list"},
  {"cat2", "cat2"},
  {"id-hash", "id-hash"},
  {"elt-type", "elt-type"},
  {"col-res", "col-res"},
  {"ins", "ins"},
  {"low-elt-setter", "low-elt-setter"},
  {"now-setter", "now-setter"},
  {"tab-growth-factor-setter", "tab-growth-factor-setter"},
  {"fabs", "fabs"},
  {"tail-setter", "tail-setter"},
  {"str-to-num", "str-to-num"},
  {"<cycle>", "<cycle>"},
  {"tab-growth-threshold-setter", "tab-growth-threshold-setter"},
  {"rep-len", "rep-len"},
  {"alter", "alter"},
  {"tab-hash", "tab-hash"},
  {"tail", "tail"},
  {"assqn", "assqn"},
  {"all2?", "all2?"},
  {"rep-nul", "rep-nul"},
  {"do3", "do3"},
  {"split", "split"},
  {"<range>", "<range>"},
  {"zap", "zap"},
  {"do", "do"},
  {"<vec>", "<vec>"},
  {"tab-shrink-threshold", "tab-shrink-threshold"},
  {"fill!", "fill!"},
  {"<each>", "<each>"},
  {"char->ascii", "char->ascii"},
  {"each", "each"},
  {"fab-elt-setter", "fab-elt-setter"},
  {"below", "below"},
  {"<tup>", "<tup>"},
  {"sort-by!", "sort-by!"},
  {"<set>", "<set>"},
  {"<tab>", "<tab>"},
  {"ascii-whitespaces", "ascii-whitespaces"},
  {"pair", "pair"},
  {"rep-into!", "rep-into!"},
  {"str", "str"},
  {"repeat", "repeat"},
  {"from", "from"},
  {"del", "del"},
  {"tab-growth-factor", "tab-growth-factor"},
  {"tab-growth-threshold", "tab-growth-threshold"},
  {"last", "last"},
  {"sort!", "sort!"},
  {"first-then", "first-then"},
  {"rep-elt-setter", "rep-elt-setter"},
  {"len/fill-setter", "len/fill-setter"},
  {"sub", "sub"},
  {"<lst>", "<lst>"},
  {"elt-or", "elt-or"},
  {"range", "range"},
  {"suffix?", "suffix?"},
  {"del-dups!", "del-dups!"},
  {"fab", "fab"},
  {"cat", "cat"},
  {"prefix?", "prefix?"},
  {"low-elt", "low-elt"},
  {"<seq.>", "<seq.>"},
  {"rep-elt", "rep-elt"},
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
