/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/late-macros");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/late-macros */

EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YisaQ,"goo/boot","isa?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Ynil,"goo/boot","nil");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Ylst,"goo/boot","lst");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yclass_of,"goo/boot","class-of");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yfun_name,"goo/boot","fun-name");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yas_error,"goo/boot","as-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ynot,"goo/boot","not");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ynul,"goo/boot","nul");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YPprop,"goo/boot","%prop");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YLintG,"goo/boot","<int>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_mets,"goo/boot","fun-mets");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_25);
DEFLIT(lit_0);
DEFLIT(lit_1);
DEFLIT(lit_3);
DEFLIT(lit_21);
DEFLIT(lit_7);
DEFLIT(lit_11);
DEFLIT(lit_23);
DEFLIT(lit_8);
DEFLIT(lit_6);
DEFLIT(lit_20);
DEFLIT(lit_12);
DEFLIT(lit_2);
DEFLIT(lit_5);
DEFLIT(lit_17);
DEFLIT(lit_22);
DEFLIT(lit_15);
DEFLIT(lit_26);
DEFLIT(lit_18);
DEFLIT(lit_14);
DEFLIT(lit_27);
DEFLIT(lit_10);
DEFLIT(lit_13);
DEFLIT(lit_19);
DEFLIT(lit_24);
DEFLIT(lit_16);
DEFLIT(lit_4);
DEFLIT(lit_9);

/* FUNCTIONS: */

LOCFOR(fun_x_1419_0);
LOCFOR(fun_1);
LOCFOR(fun_splice_2);
LOCFOR(fun_rest_opQ_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_walk_op_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
extern P YgooSlate_macrosY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1419_0) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_4),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_1) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_9));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
    T4 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T5,LITREF(lit_13));
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
    T8 = CALL1(1,VARREF(Ylst),x_);
    T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,LITREF(lit_13));
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_splice_2) {
  P y_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T1 = fun_1;
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,y_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rest_opQ_3) {
  P x_;
  P tmpF2471;
  P tmpF2470;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF2470 = T2;
  if (tmpF2470 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooStypesYanyQ),FREEREF(0),x_);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF2471 = T1;
  if (tmpF2471 != YPfalse) {
    T5 = tmpF2471;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_9));
    T5 = T6;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_4) {
  P y_;
  P T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),y_,LITREF(lit_9));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P y_;
  P T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T0 = CALL2(1,FREEREF(1),FREEREF(0),y_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_walk_op_6) {
  P vars_,x_;
  P yF2474;
  P spliceQF2473;
  P varF2472;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(vars_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_19));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooStypesYlen),vars_);
    T3 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_20),T4);
    varF2472 = T3;
    T6 = CALL1(1,VARREF(Ytail),vars_);
    T5 = CALL2(1,VARREF(YgooSmacrosYpair),varF2472,T6);
    CALL2(1,VARREF(Ytail_setter),T5,vars_);
    T2 = varF2472;
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
    if (T8 != YPfalse) {
      T11 = fun_4;
      T10 = CALL2(1,VARREF(YgooStypesYanyQ),T11,x_);
      spliceQF2473 = T10;
      T14 = FUNFAB(fun_5,2,vars_,FREEREF(0));
      T13 = CALL2(1,VARREF(YgooSmacrosYmap),T14,x_);
      yF2474 = T13;
      if (spliceQF2473 != YPfalse) {
        T17 = CALL1(1,VARREF(Ylst),LITREF(lit_23));
        T19 = CALL1(1,VARREF(Yhead),yF2474);
        T18 = CALL1(1,VARREF(Ylst),T19);
        T22 = CALL1(1,VARREF(Ylst),LITREF(lit_24));
        T24 = CALL1(1,VARREF(Ytail),yF2474);
        T23 = CALL1(1,FREEREF(1),T24);
        T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,LITREF(lit_13));
        T20 = CALL1(1,VARREF(Ylst),T21);
        T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T20,LITREF(lit_13));
        T15 = T16;
      } else {
        T15 = yF2474;
      }
      T12 = T15;
      T9 = T12;
      T7 = T9;
    } else {
      if (YPtrue != YPfalse) {
        T25 = x_;
      } else {
        T25 = YPfalse;
      }
      T7 = T25;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P return_;
  P argsF2489;
  P exprF2488;
  P varsF2487;
  P walk_opF2486;
  P rest_opQF2485;
  P spliceF2484;
  P x_1418F2483;
  P x_1418F2482;
  P x_1418F2481;
  P x_1418F2480;
  P x_1418F2479;
  P argsF2478;
  P fF2477;
  P x_1418F2476;
  P x_1419F2475;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1419_0,2);
  x_1419F2475 = T1;
  FUNINIT(x_1419F2475, 2,FREEREF(0),return_);
  x_1418F2476 = FREEREF(0);
  fF2477 = YPfalse;
  fF2477 = BOXFAB(fF2477);
  argsF2478 = YPfalse;
  argsF2478 = BOXFAB(argsF2478);
  T7 = CALL2(1,VARREF(YisaQ),x_1418F2476,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1418F2476,LITREF(lit_4),x_1419F2475);
    x_1418F2479 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1418F2479,x_1419F2475);
    BOXVAL(fF2477) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1418F2479);
    x_1418F2480 = T12;
    BOXVAL(argsF2478) = x_1418F2480;
    x_1418F2481 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1418F2481,x_1419F2475);
    x_1418F2482 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1418F2482,x_1419F2475);
    T17 = CALL1(1,VARREF(Ytail),x_1418F2481);
    x_1418F2483 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1418F2483,x_1419F2475);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1419F2475,LITREF(lit_5),x_1418F2476);
  }
  T21 = fun_splice_2;
  spliceF2484 = T21;
  T22 = FUNSHELL(0,fun_rest_opQ_3,1);
  rest_opQF2485 = T22;
  T23 = FUNSHELL(1,fun_walk_op_6,2);
  walk_opF2486 = T23;
  FUNINIT(rest_opQF2485, 1,rest_opQF2485);
  FUNINIT(walk_opF2486, 2,walk_opF2486,spliceF2484);
  T26 = BOXVAL(argsF2478);
  T25 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T26);
  if (T25 != YPfalse) {
    T29 = BOXVAL(fF2477);
    T28 = CALL2(1,VARREF(YgooSmacrosYEE),T29,LITREF(lit_19));
    if (T28 != YPfalse) {
      T31 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
      T34 = CALL1(1,VARREF(Ylst),LITREF(lit_26));
      T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,LITREF(lit_13));
      T32 = CALL1(1,VARREF(Ylst),T33);
      T35 = CALL1(1,VARREF(Ylst),LITREF(lit_26));
      T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T35,LITREF(lit_13));
      T27 = T30;
    } else {
      T37 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
      T42 = CALL1(1,VARREF(Ylst),LITREF(lit_26));
      T43 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
      T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_13));
      T40 = CALL1(1,VARREF(Ylst),T41);
      T39 = CALL2(1,VARREF(YgooSmacrosYcat),T40,Ynil);
      T38 = CALL1(1,VARREF(Ylst),T39);
      T45 = BOXVAL(fF2477);
      T44 = CALL1(1,VARREF(Ylst),T45);
      T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T44,LITREF(lit_13));
      T27 = T36;
    }
    T24 = T27;
  } else {
    T47 = CALL2(1,VARREF(YgooSmacrosYpair),YPfalse,Ynil);
    varsF2487 = T47;
    T52 = BOXVAL(fF2477);
    T51 = CALL1(1,VARREF(Ylst),T52);
    T53 = BOXVAL(argsF2478);
    T50 = CALL3(1,VARREF(YgooSmacrosYcat),T51,T53,LITREF(lit_13));
    T49 = CALL2(1,walk_opF2486,varsF2487,T50);
    exprF2488 = T49;
    T57 = CALL1(1,VARREF(Ytail),varsF2487);
    T56 = CALL1(1,VARREF(YgooSmacrosYrevX),T57);
    T60 = BOXVAL(argsF2478);
    T59 = CALL1(1,rest_opQF2485,T60);
    if (T59 != YPfalse) {
      T58 = LITREF(lit_27);
    } else {
      T58 = Ynil;
    }
    T55 = CALL3(1,VARREF(YgooSmacrosYcat),T56,T58,LITREF(lit_13));
    argsF2489 = T55;
    T62 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
    T63 = CALL1(1,VARREF(Ylst),argsF2489);
    T64 = CALL1(1,VARREF(Ylst),exprF2488);
    T61 = CALL4(1,VARREF(YgooSmacrosYcat),T62,T63,T64,LITREF(lit_13));
    T54 = T61;
    T48 = T54;
    T46 = T48;
    T24 = T46;
  }
  T20 = T24;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_7,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSlate_macrosY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
loop:
  lit_0 = YPPlist(1,YPPsym((P)"exp"));
  lit_1 = YPPlist(1,YPPsym((P)"return"));
  lit_2 = YPPsym((P)"x-1419");
  lit_3 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_4 = YPPsym((P)"op");
  lit_5 = YPsb((P)"Match Pattern Failure");
  lit_6 = YPPsym((P)"splice");
  lit_7 = YPPlist(1,YPPsym((P)"y"));
  lit_8 = YPPlist(1,YPPsym((P)"x"));
  lit_9 = YPPsym((P)"...");
  lit_10 = YPPsym((P)"as");
  lit_11 = YPPsym((P)"<lst>");
  lit_12 = YPPsym((P)"_*");
  lit_13 = Ynil;
  lit_14 = YPPsym((P)"lst");
  lit_15 = YPPsym((P)"rest-op?");
  lit_16 = YPPlist(1,YPPsym((P)"x"));
  lit_17 = YPPsym((P)"walk-op");
  lit_18 = YPPlist(2,YPPsym((P)"vars"),YPPsym((P)"x"));
  lit_19 = YPPsym((P)"_");
  lit_20 = YPsb((P)"_");
  lit_21 = YPPlist(1,YPPsym((P)"y"));
  lit_22 = YPPlist(1,YPPsym((P)"y"));
  lit_23 = YPPsym((P)"app");
  lit_24 = YPPsym((P)"cat!");
  lit_25 = YPPsym((P)"fun");
  lit_26 = YPPsym((P)"x");
  lit_27 = YPPlist(1,YPPlist(2,YPPsym((P)"_*"),YPPsym((P)"...")));
  T8 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1419_0 = YPmet(FUNCODEREF(fun_x_1419_0),LITREF(lit_2),T8,ENVNUL,PNUL,YPfalse);
  T7 = YPsig(LITREF(lit_8),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T7,ENVNUL,PNUL,sloc(9));
  T6 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_splice_2 = YPmet(FUNCODEREF(fun_splice_2),LITREF(lit_6),T6,ENVNUL,PNUL,sloc(8));
  T5 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_rest_opQ_3 = YPmet(FUNCODEREF(fun_rest_opQ_3),LITREF(lit_15),T5,ENVNUL,PNUL,sloc(10));
  T4 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T4,ENVNUL,PNUL,sloc(18));
  T3 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T3,ENVNUL,PNUL,sloc(19));
  T2 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_walk_op_6 = YPmet(FUNCODEREF(fun_walk_op_6),LITREF(lit_17),T2,ENVNUL,PNUL,sloc(12));
  T1 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(LITREF(lit_0),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T9 = fun_8;
  YPmacro(YPPsym((P)"goo/late-macros"),YPPsym((P)"op"),T9);
  T10 = YPfalse;
  return T10;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooScols},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {"op", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"op", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSlate_macros;
MODULE_INFO module_info_gooSlate_macros = {
  "goo/late-macros",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooScols (void);

/* EXPRESSION: */

extern void load_module_gooSlate_macros (void);

void load_module_gooSlate_macros (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooScols();

  (P)YgooSlate_macrosY___main_0___();

}

/* END OF GENERATED CODE. */
