/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/boot");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/boot */

DEF(Ysrc_loc_line_setter,"goo/boot","src-loc-line-setter");
DEF(Yclone,"goo/boot","clone");
DEF(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
DEF(Yunexec,"goo/boot","unexec");
DEF(YLfunG,"goo/boot","<fun>");
DEF(Ygen_lookup_miss,"goo/boot","gen-lookup-miss");
DEF(YOgen_cache_classes,"goo/boot","@gen-cache-classes");
DEF(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YLseqXG,"goo/boot","<seq!>");
DEF(Ytail,"goo/boot","tail");
DEF(Yopts_tup_storage_setter,"goo/boot","opts-tup-storage-setter");
DEF(Yarity_error,"goo/boot","arity-error");
DEF(Yfun_arity,"goo/boot","fun-arity");
DEF(Yclass_name,"goo/boot","class-name");
DEF(Yassert_error,"goo/boot","assert-error");
DEF(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YLseqIG,"goo/boot","<seq.>");
DEF(Yensure_fresh_object,"goo/boot","ensure-fresh-object");
DEF(Yinternal_error,"goo/boot","internal-error");
DEF(YOfun_naryQ,"goo/boot","@fun-nary?");
DEF(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(Yclass_gens_setter,"goo/boot","class-gens-setter");
DEF(YOorder_specs_class,"goo/boot","@order-specs-class");
DEF(Yclass_type_cache_setter,"goo/boot","class-type-cache-setter");
DEF(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(Ytype_object_setter,"goo/boot","type-object-setter");
DEF(Ymet_app_unify,"goo/boot","met-app-unify");
DEF(Yproduct_elts_setter,"goo/boot","product-elts-setter");
DEF(YPdefine_method,"goo/boot","%define-method");
DEF(Yrequires_singleton_prec,"goo/boot","requires-singleton-prec");
DEF(YLcolXG,"goo/boot","<col!>");
DEF(YOgen_cache_singletons_setter,"goo/boot","@gen-cache-singletons-setter");
DEF(Yclass_gens,"goo/boot","class-gens");
DEF(Yforward_class,"goo/boot","forward-class");
DEF(Ygen_cache_missableQ_setter,"goo/boot","gen-cache-missable?-setter");
DEF(YPtnul,"goo/boot","%tnul");
DEF(YLsigG,"goo/boot","<sig>");
DEF(YOalter,"goo/boot","@alter");
DEF(Yclass_type_cache,"goo/boot","class-type-cache");
DEF(Ygen_cache_classes_setter,"goo/boot","gen-cache-classes-setter");
DEF(Yobject_parents,"goo/boot","object-parents");
DEF(YPTused_symbols_too_earlyT,"goo/boot","%*used-symbols-too-early*");
DEF(YOfun_specs,"goo/boot","@fun-specs");
DEF(YOallQ,"goo/boot","@all?");
DEF(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(Yfun_naryQ_setter,"goo/boot","fun-nary?-setter");
DEF(YLcolIG,"goo/boot","<col.>");
DEF(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(YDmax_int,"goo/boot","$max-int");
DEF(Yprop_setter_setter,"goo/boot","prop-setter-setter");
DEF(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(YOprune_mets_by_type_at,"goo/boot","@prune-mets-by-type-at");
DEF(YLcolG,"goo/boot","<col>");
DEF(Ygen_cache_classes,"goo/boot","gen-cache-classes");
DEF(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(Yprop_setter,"goo/boot","prop-setter");
DEF(YDgen_cache_singletons_offset,"goo/boot","$gen-cache-singletons-offset");
DEF(YLrepG,"goo/boot","<rep>");
DEF(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(Yobject_props,"goo/boot","object-props");
DEF(YOfun_names,"goo/boot","@fun-names");
DEF(YOrevX,"goo/boot","@rev!");
DEF(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(Ygen_add_met,"goo/boot","gen-add-met");
DEF(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(Ygen_from_met,"goo/boot","gen-from-met");
DEF(YOdo,"goo/boot","@do");
DEF(YLlocG,"goo/boot","<loc>");
DEF(YPadd_prop,"goo/boot","%add-prop");
DEF(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YOcache_add,"goo/boot","@cache-add");
DEF(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(Yfun_sig,"goo/boot","fun-sig");
DEF(Yfun_src,"goo/boot","fun-src");
DEF(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YLfloG,"goo/boot","<flo>");
DEF(Ygen_lookup_miss_1,"goo/boot","gen-lookup-miss-1");
DEF(Ygen_lookup_miss_1_using,"goo/boot","gen-lookup-miss-1-using");
DEF(YOtup,"goo/boot","@tup");
DEF(Ygen_refs,"goo/boot","gen-refs");
DEF(Ypatch_early_classes,"goo/boot","patch-early-classes");
DEF(Yfind_setter,"goo/boot","find-setter");
DEF(YOOemptyQ,"goo/boot","@@empty?");
DEF(YLfixnumG,"goo/boot","<fixnum>");
DEF(Yhead_setter,"goo/boot","head-setter");
DEF(YOgen_cache_arg_pos_setter,"goo/boot","@gen-cache-arg-pos-setter");
DEF(Ysyntax_error,"goo/boot","syntax-error");
DEF(YOsubtypeQ,"goo/boot","@subtype?");
DEF(YOprecise_specQ,"goo/boot","@precise-spec?");
DEF(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(Yclass_ordered_ancestors,"goo/boot","class-ordered-ancestors");
DEF(YOmemQ,"goo/boot","@mem?");
DEF(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DEF(YLparentsG,"goo/boot","<parents>");
DEF(Yone_nil,"goo/boot","one-nil");
DEF(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
DEF(YLpropG,"goo/boot","<prop>");
DEF(YLintG,"goo/boot","<int>");
DEF(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(Yfun_congruentQ,"goo/boot","fun-congruent?");
DEF(YOpick,"goo/boot","@pick");
DEF(Ylst,"goo/boot","lst");
DEF(YPsnul,"goo/boot","%snul");
DEF(Yhead,"goo/boot","head");
DEF(Yopts_count_setter,"goo/boot","opts-count-setter");
DEF(Yrefab_class,"goo/boot","refab-class");
DEF(Yclass_prop_len,"goo/boot","class-prop-len");
DEF(YLnumG,"goo/boot","<num>");
DEF(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(YPrnul,"goo/boot","%rnul");
DEF(Ynot,"goo/boot","not");
DEF(YDnul_assocs,"goo/boot","$nul-assocs");
DEF(YLproductG,"goo/boot","<product>");
DEF(YOgen_cache_arg_pos,"goo/boot","@gen-cache-arg-pos");
DEF(YOmets_unspecialized_atQ,"goo/boot","@mets-unspecialized-at?");
DEF(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YOclass_ancestors,"goo/boot","@class-ancestors");
DEF(Yopts_count,"goo/boot","opts-count");
DEF(Yclass_children_setter,"goo/boot","class-children-setter");
DEF(YPsymbols_readyQ,"goo/boot","%symbols-ready?");
DEF(YPwith_monitor,"goo/boot","%with-monitor");
DEF(Yfun_specs,"goo/boot","fun-specs");
DEF(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(YPadd_met,"goo/boot","%add-met");
DEF(YOfind,"goo/boot","@find");
DEF(YLunionG,"goo/boot","<union>");
DEF(Yclass_row_setter,"goo/boot","class-row-setter");
DEF(YLsrc_locG,"goo/boot","<src-loc>");
DEF(Yord_app_mets_1,"goo/boot","ord-app-mets-1");
DEF(Yunion_elts_setter,"goo/boot","union-elts-setter");
DEF(Ynul,"goo/boot","nul");
DEF(Ymay_isaQ,"goo/boot","may-isa?");
DEF(Yclass_children,"goo/boot","class-children");
DEF(Yfun_same_metQ,"goo/boot","fun-same-met?");
DEF(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YOmap,"goo/boot","@map");
DEF(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YLchrG,"goo/boot","<chr>");
DEF(Yclass_forward,"goo/boot","class-forward");
DEF(Ygen_cache_singletons_setter,"goo/boot","gen-cache-singletons-setter");
DEF(Yobject_class,"goo/boot","object-class");
DEF(Ynil,"goo/boot","nil");
DEF(YLpropsG,"goo/boot","<props>");
DEF(YLsubclassG,"goo/boot","<subclass>");
DEF(Yclass_row,"goo/boot","class-row");
DEF(Ysig_specs_setter,"goo/boot","sig-specs-setter");
DEF(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YOtype_equalQ,"goo/boot","@type-equal?");
DEF(YOtall2Q,"goo/boot","@tall2?");
DEF(Yunion_elts,"goo/boot","union-elts");
DEF(Yprop_getter_setter,"goo/boot","prop-getter-setter");
DEF(YLmagG,"goo/boot","<mag>");
DEF(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(Yfab_class,"goo/boot","fab-class");
DEF(Yarithmetic_error,"goo/boot","arithmetic-error");
DEF(Yprop_init_setter,"goo/boot","prop-init-setter");
DEF(Yensure_singleton_cache,"goo/boot","ensure-singleton-cache");
DEF(Ycpl_error,"goo/boot","cpl-error");
DEF(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(YsubtypeQ,"goo/boot","subtype?");
DEF(YOOEE,"goo/boot","@@==");
DEF(YLsingletonG,"goo/boot","<singleton>");
DEF(YOunion_specQ,"goo/boot","@union-spec?");
DEF(Yas_error,"goo/boot","as-error");
DEF(YLlogG,"goo/boot","<log>");
DEF(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(Ysig_specs,"goo/boot","sig-specs");
DEF(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YTnext_class_idT,"goo/boot","*next-class-id*");
DEF(Yadd_prop,"goo/boot","add-prop");
DEF(Yprop_getter,"goo/boot","prop-getter");
DEF(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YtT,"goo/boot","t*");
DEF(Yprop_init,"goo/boot","prop-init");
DEF(Ynarity_error,"goo/boot","narity-error");
DEF(YLenvG,"goo/boot","<env>");
DEF(Yfun_refs_setter,"goo/boot","fun-refs-setter");
DEF(YLanyG,"goo/boot","<any>");
DEF(YPclasses_readyQ,"goo/boot","%classes-ready?");
DEF(Yfun_spec,"goo/boot","fun-spec");
DEF(Yfun_cache_setter,"goo/boot","fun-cache-setter");
DEF(YOanyQ,"goo/boot","@any?");
DEF(Yerror,"goo/boot","error");
DEF(Ysig_val,"goo/boot","sig-val");
DEF(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(Yfun_unification_vars_setter,"goo/boot","fun-unification-vars-setter");
DEF(Yfun_name,"goo/boot","fun-name");
DEF(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YOtanyQ,"goo/boot","@tany?");
DEF(YLopts_tupG,"goo/boot","<opts-tup>");
DEF(Yfab_gen,"goo/boot","fab-gen");
DEF(Yfun_names,"goo/boot","fun-names");
DEF(Yfun_refs,"goo/boot","fun-refs");
DEF(YPprop,"goo/boot","%prop");
DEF(Yrange_error,"goo/boot","range-error");
DEF(Yfun_cache,"goo/boot","fun-cache");
DEF(YOrev,"goo/boot","@rev");
DEF(YPearly_dispatch,"goo/boot","%early-dispatch");
DEF(Yopts_location,"goo/boot","opts-location");
DEF(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(Ysrc_loc_file_setter,"goo/boot","src-loc-file-setter");
DEF(Yord_app_metsT,"goo/boot","ord-app-mets*");
DEF(YOmets_subclasses_at,"goo/boot","@mets-subclasses-at");
DEF(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(Ysym_name_setter,"goo/boot","sym-name-setter");
DEF(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(YOlst,"goo/boot","@lst");
DEF(Yorder_specs,"goo/boot","order-specs");
DEF(YLoptsG,"goo/boot","<opts>");
DEF(Yfun_unification_vars,"goo/boot","fun-unification-vars");
DEF(Yclass_parents_setter,"goo/boot","class-parents-setter");
DEF(YLspecsG,"goo/boot","<specs>");
DEF(Ytype_object,"goo/boot","type-object");
DEF(YisaQ,"goo/boot","isa?");
DEF(Yproduct_elts,"goo/boot","product-elts");
DEF(YPfinalize_propsX,"goo/boot","%finalize-props!");
DEF(Yorder_mets,"goo/boot","order-mets");
DEF(YOfun_mets_setter,"goo/boot","@fun-mets-setter");
DEF(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(YPtrue,"goo/boot","%true");
DEF(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YOsingleton_specQ,"goo/boot","@singleton-spec?");
DEF(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(Yopts_location_setter,"goo/boot","opts-location-setter");
DEF(YOfill,"goo/boot","@fill");
DEF(Ysym_name,"goo/boot","sym-name");
DEF(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(Ytype_error,"goo/boot","type-error");
DEF(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(Yclass_parents,"goo/boot","class-parents");
DEF(YPpatch_early_generic,"goo/boot","%patch-early-generic");
DEF(YOclassL,"goo/boot","@class<");
DEF(Yclass_props,"goo/boot","class-props");
DEF(YDgen_cache_classes_offset,"goo/boot","$gen-cache-classes-offset");
DEF(YPPmacro,"goo/boot","%%macro");
DEF(Yfinalize_props,"goo/boot","finalize-props");
DEF(Yinit_class,"goo/boot","init-class");
DEF(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YPsymbols,"goo/boot","%symbols");
DEF(YDmissed_dispatch,"goo/boot","$missed-dispatch");
DEF(YPcollect_direct_props,"goo/boot","%collect-direct-props");
DEF(Yclass_mets_setter,"goo/boot","class-mets-setter");
DEF(Ymet_appQ,"goo/boot","met-app?");
DEF(YOfun_mets,"goo/boot","@fun-mets");
DEF(YOnew,"goo/boot","@new");
DEF(YLclassG,"goo/boot","<class>");
DEF(Yclass_id_setter,"goo/boot","class-id-setter");
DEF(YOspecd_args,"goo/boot","@specd-args");
DEF(Yprop_value,"goo/boot","prop-value");
DEF(Ydel_class,"goo/boot","del-class");
DEF(Yfun_val_setter,"goo/boot","fun-val-setter");
DEF(Ytype_class_setter,"goo/boot","type-class-setter");
DEF(YPdispatch,"goo/boot","%dispatch");
DEF(Yprop_owner_setter,"goo/boot","prop-owner-setter");
DEF(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YLtypeG,"goo/boot","<type>");
DEF(YPprop_offset,"goo/boot","%prop-offset");
DEF(YTearly_classesT,"goo/boot","*early-classes*");
DEF(Yclass_mets,"goo/boot","class-mets");
DEF(YDgetter_not_found,"goo/boot","$getter-not-found");
DEF(Ygen_cache_arg_pos_setter,"goo/boot","gen-cache-arg-pos-setter");
DEF(YLgenG,"goo/boot","<gen>");
DEF(YOmets_singletons_at,"goo/boot","@mets-singletons-at");
DEF(Ynul_prop,"goo/boot","nul-prop");
DEF(Yclass_id,"goo/boot","class-id");
DEF(Ysig_names_setter,"goo/boot","sig-names-setter");
DEF(YOorder_specs,"goo/boot","@order-specs");
DEF(Ytype_class,"goo/boot","type-class");
DEF(YOfold,"goo/boot","@fold");
DEF(Ymethod_accessor_offset,"goo/boot","method-accessor-offset");
DEF(YPTstart_running_atT,"goo/boot","%*start-running-at*");
DEF(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(YDmin_int,"goo/boot","$min-int");
DEF(YOfun_unification_vars,"goo/boot","@fun-unification-vars");
DEF(YOelt,"goo/boot","@elt");
DEF(Yprop_owner,"goo/boot","prop-owner");
DEF(Yprop_type_setter,"goo/boot","prop-type-setter");
DEF(YLsymG,"goo/boot","<sym>");
DEF(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(Yfind_getter,"goo/boot","find-getter");
DEF(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(Yclass_ordered_props,"goo/boot","class-ordered-props");
DEF(YDnum_int_bits,"goo/boot","$num-int-bits");
DEF(Yfun_val,"goo/boot","fun-val");
DEF(YPfalse,"goo/boot","%false");
DEF(Ychoose_methods,"goo/boot","choose-methods");
DEF(Ysig_names,"goo/boot","sig-names");
DEF(Ynew,"goo/boot","new");
DEF(YLstrG,"goo/boot","<str>");
DEF(Yfun_names_setter,"goo/boot","fun-names-setter");
DEF(Yfun_specs_setter,"goo/boot","fun-specs-setter");
DEF(Ysig_arity,"goo/boot","sig-arity");
DEF(Yfun_code_setter,"goo/boot","fun-code-setter");
DEF(YOgen_cache_singletons,"goo/boot","@gen-cache-singletons");
DEF(Yprop_type,"goo/boot","prop-type");
DEF(YOsubclass_specQ,"goo/boot","@subclass-spec?");
DEF(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(Yfun_env_setter,"goo/boot","fun-env-setter");
DEF(YLbodyG,"goo/boot","<body>");
DEF(YOcat2,"goo/boot","@cat2");
DEF(YOdel_dups,"goo/boot","@del-dups");
DEF(YOfun_val,"goo/boot","@fun-val");
DEF(Yfun_mets_setter,"goo/boot","fun-mets-setter");
DEF(Yopts_tup_storage,"goo/boot","opts-tup-storage");
DEF(YLseqG,"goo/boot","<seq>");
DEF(YLtupG,"goo/boot","<tup>");
DEF(YDmax_classes,"goo/boot","$max-classes");
DEF(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(Ytup,"goo/boot","tup");
DEF(Yfun_code,"goo/boot","fun-code");
DEF(YOdo_descendents,"goo/boot","@do-descendents");
DEF(YOclass_direct_props,"goo/boot","@class-direct-props");
DEF(YLmetG,"goo/boot","<met>");
DEF(YLflatG,"goo/boot","<flat>");
DEF(Yfun_env,"goo/boot","fun-env");
DEF(YOgen_cache_classes_setter,"goo/boot","@gen-cache-classes-setter");
DEF(YOisaQ,"goo/boot","@isa?");
DEF(Yfun_mets,"goo/boot","fun-mets");
DEF(Yfab_sym,"goo/boot","fab-sym");
DEF(Ygen_src,"goo/boot","gen-src");
DEF(Yfun_arity_setter,"goo/boot","fun-arity-setter");
DEF(YOmets_specs_at,"goo/boot","@mets-specs-at");
DEF(YOfab,"goo/boot","@fab");
DEF(Yclass_of,"goo/boot","class-of");
DEF(YOall2Q,"goo/boot","@all2?");
DEF(YOlst_helper,"goo/boot","@lst-helper");
DEF(Ytail_setter,"goo/boot","tail-setter");
DEF(Yprop_offset,"goo/boot","prop-offset");
DEF(YOfun_arity,"goo/boot","@fun-arity");
DEF(Yclass_name_setter,"goo/boot","class-name-setter");
DEF(YLlstG,"goo/boot","<lst>");
DEF(YLmetsG,"goo/boot","<mets>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_157);
DEFLIT(lit_15);
DEFLIT(lit_493);
DEFLIT(lit_341);
DEFLIT(lit_99);
DEFLIT(lit_60);
DEFLIT(lit_31);
DEFLIT(lit_299);
DEFLIT(lit_476);
DEFLIT(lit_435);
DEFLIT(lit_428);
DEFLIT(lit_475);
DEFLIT(lit_24);
DEFLIT(lit_51);
DEFLIT(lit_600);
DEFLIT(lit_255);
DEFLIT(lit_284);
DEFLIT(lit_62);
DEFLIT(lit_147);
DEFLIT(lit_261);
DEFLIT(lit_595);
DEFLIT(lit_122);
DEFLIT(lit_163);
DEFLIT(lit_327);
DEFLIT(lit_43);
DEFLIT(lit_228);
DEFLIT(lit_616);
DEFLIT(lit_226);
DEFLIT(lit_129);
DEFLIT(lit_227);
DEFLIT(lit_345);
DEFLIT(lit_574);
DEFLIT(lit_12);
DEFLIT(lit_58);
DEFLIT(lit_577);
DEFLIT(lit_283);
DEFLIT(lit_615);
DEFLIT(lit_598);
DEFLIT(lit_534);
DEFLIT(lit_543);
DEFLIT(lit_46);
DEFLIT(lit_362);
DEFLIT(lit_613);
DEFLIT(lit_408);
DEFLIT(lit_139);
DEFLIT(lit_412);
DEFLIT(lit_259);
DEFLIT(lit_13);
DEFLIT(lit_618);
DEFLIT(lit_400);
DEFLIT(lit_384);
DEFLIT(lit_468);
DEFLIT(lit_247);
DEFLIT(lit_572);
DEFLIT(lit_513);
DEFLIT(lit_471);
DEFLIT(lit_282);
DEFLIT(lit_90);
DEFLIT(lit_16);
DEFLIT(lit_614);
DEFLIT(lit_609);
DEFLIT(lit_365);
DEFLIT(lit_580);
DEFLIT(lit_415);
DEFLIT(lit_105);
DEFLIT(lit_146);
DEFLIT(lit_150);
DEFLIT(lit_594);
DEFLIT(lit_420);
DEFLIT(lit_120);
DEFLIT(lit_581);
DEFLIT(lit_67);
DEFLIT(lit_349);
DEFLIT(lit_8);
DEFLIT(lit_433);
DEFLIT(lit_248);
DEFLIT(lit_395);
DEFLIT(lit_430);
DEFLIT(lit_552);
DEFLIT(lit_151);
DEFLIT(lit_520);
DEFLIT(lit_135);
DEFLIT(lit_187);
DEFLIT(lit_298);
DEFLIT(lit_515);
DEFLIT(lit_328);
DEFLIT(lit_88);
DEFLIT(lit_49);
DEFLIT(lit_166);
DEFLIT(lit_190);
DEFLIT(lit_360);
DEFLIT(lit_312);
DEFLIT(lit_494);
DEFLIT(lit_103);
DEFLIT(lit_554);
DEFLIT(lit_280);
DEFLIT(lit_52);
DEFLIT(lit_104);
DEFLIT(lit_181);
DEFLIT(lit_188);
DEFLIT(lit_39);
DEFLIT(lit_499);
DEFLIT(lit_172);
DEFLIT(lit_343);
DEFLIT(lit_175);
DEFLIT(lit_503);
DEFLIT(lit_34);
DEFLIT(lit_149);
DEFLIT(lit_518);
DEFLIT(lit_573);
DEFLIT(lit_215);
DEFLIT(lit_279);
DEFLIT(lit_355);
DEFLIT(lit_72);
DEFLIT(lit_164);
DEFLIT(lit_391);
DEFLIT(lit_210);
DEFLIT(lit_81);
DEFLIT(lit_431);
DEFLIT(lit_179);
DEFLIT(lit_196);
DEFLIT(lit_59);
DEFLIT(lit_398);
DEFLIT(lit_375);
DEFLIT(lit_119);
DEFLIT(lit_483);
DEFLIT(lit_373);
DEFLIT(lit_133);
DEFLIT(lit_561);
DEFLIT(lit_278);
DEFLIT(lit_211);
DEFLIT(lit_0);
DEFLIT(lit_134);
DEFLIT(lit_539);
DEFLIT(lit_457);
DEFLIT(lit_358);
DEFLIT(lit_310);
DEFLIT(lit_617);
DEFLIT(lit_297);
DEFLIT(lit_203);
DEFLIT(lit_562);
DEFLIT(lit_380);
DEFLIT(lit_445);
DEFLIT(lit_71);
DEFLIT(lit_241);
DEFLIT(lit_578);
DEFLIT(lit_268);
DEFLIT(lit_326);
DEFLIT(lit_277);
DEFLIT(lit_541);
DEFLIT(lit_75);
DEFLIT(lit_194);
DEFLIT(lit_464);
DEFLIT(lit_223);
DEFLIT(lit_61);
DEFLIT(lit_556);
DEFLIT(lit_486);
DEFLIT(lit_222);
DEFLIT(lit_409);
DEFLIT(lit_425);
DEFLIT(lit_209);
DEFLIT(lit_394);
DEFLIT(lit_517);
DEFLIT(lit_317);
DEFLIT(lit_514);
DEFLIT(lit_127);
DEFLIT(lit_224);
DEFLIT(lit_399);
DEFLIT(lit_276);
DEFLIT(lit_73);
DEFLIT(lit_466);
DEFLIT(lit_560);
DEFLIT(lit_569);
DEFLIT(lit_230);
DEFLIT(lit_407);
DEFLIT(lit_239);
DEFLIT(lit_250);
DEFLIT(lit_536);
DEFLIT(lit_575);
DEFLIT(lit_504);
DEFLIT(lit_558);
DEFLIT(lit_557);
DEFLIT(lit_377);
DEFLIT(lit_413);
DEFLIT(lit_243);
DEFLIT(lit_450);
DEFLIT(lit_308);
DEFLIT(lit_603);
DEFLIT(lit_633);
DEFLIT(lit_242);
DEFLIT(lit_275);
DEFLIT(lit_25);
DEFLIT(lit_77);
DEFLIT(lit_505);
DEFLIT(lit_396);
DEFLIT(lit_410);
DEFLIT(lit_512);
DEFLIT(lit_340);
DEFLIT(lit_40);
DEFLIT(lit_102);
DEFLIT(lit_382);
DEFLIT(lit_610);
DEFLIT(lit_131);
DEFLIT(lit_262);
DEFLIT(lit_265);
DEFLIT(lit_29);
DEFLIT(lit_593);
DEFLIT(lit_55);
DEFLIT(lit_296);
DEFLIT(lit_56);
DEFLIT(lit_635);
DEFLIT(lit_274);
DEFLIT(lit_160);
DEFLIT(lit_462);
DEFLIT(lit_263);
DEFLIT(lit_378);
DEFLIT(lit_446);
DEFLIT(lit_612);
DEFLIT(lit_531);
DEFLIT(lit_324);
DEFLIT(lit_23);
DEFLIT(lit_456);
DEFLIT(lit_256);
DEFLIT(lit_417);
DEFLIT(lit_604);
DEFLIT(lit_423);
DEFLIT(lit_82);
DEFLIT(lit_116);
DEFLIT(lit_266);
DEFLIT(lit_387);
DEFLIT(lit_38);
DEFLIT(lit_273);
DEFLIT(lit_397);
DEFLIT(lit_497);
DEFLIT(lit_448);
DEFLIT(lit_625);
DEFLIT(lit_306);
DEFLIT(lit_53);
DEFLIT(lit_295);
DEFLIT(lit_158);
DEFLIT(lit_427);
DEFLIT(lit_414);
DEFLIT(lit_524);
DEFLIT(lit_449);
DEFLIT(lit_66);
DEFLIT(lit_510);
DEFLIT(lit_465);
DEFLIT(lit_197);
DEFLIT(lit_371);
DEFLIT(lit_588);
DEFLIT(lit_37);
DEFLIT(lit_254);
DEFLIT(lit_70);
DEFLIT(lit_460);
DEFLIT(lit_453);
DEFLIT(lit_619);
DEFLIT(lit_182);
DEFLIT(lit_488);
DEFLIT(lit_198);
DEFLIT(lit_85);
DEFLIT(lit_111);
DEFLIT(lit_9);
DEFLIT(lit_606);
DEFLIT(lit_622);
DEFLIT(lit_451);
DEFLIT(lit_112);
DEFLIT(lit_338);
DEFLIT(lit_294);
DEFLIT(lit_100);
DEFLIT(lit_96);
DEFLIT(lit_272);
DEFLIT(lit_443);
DEFLIT(lit_205);
DEFLIT(lit_109);
DEFLIT(lit_64);
DEFLIT(lit_115);
DEFLIT(lit_447);
DEFLIT(lit_87);
DEFLIT(lit_429);
DEFLIT(lit_506);
DEFLIT(lit_344);
DEFLIT(lit_68);
DEFLIT(lit_376);
DEFLIT(lit_570);
DEFLIT(lit_333);
DEFLIT(lit_474);
DEFLIT(lit_322);
DEFLIT(lit_271);
DEFLIT(lit_83);
DEFLIT(lit_92);
DEFLIT(lit_608);
DEFLIT(lit_161);
DEFLIT(lit_508);
DEFLIT(lit_490);
DEFLIT(lit_293);
DEFLIT(lit_98);
DEFLIT(lit_252);
DEFLIT(lit_173);
DEFLIT(lit_42);
DEFLIT(lit_354);
DEFLIT(lit_113);
DEFLIT(lit_130);
DEFLIT(lit_438);
DEFLIT(lit_597);
DEFLIT(lit_270);
DEFLIT(lit_183);
DEFLIT(lit_436);
DEFLIT(lit_165);
DEFLIT(lit_535);
DEFLIT(lit_369);
DEFLIT(lit_145);
DEFLIT(lit_217);
DEFLIT(lit_546);
DEFLIT(lit_26);
DEFLIT(lit_347);
DEFLIT(lit_218);
DEFLIT(lit_472);
DEFLIT(lit_492);
DEFLIT(lit_159);
DEFLIT(lit_590);
DEFLIT(lit_304);
DEFLIT(lit_516);
DEFLIT(lit_292);
DEFLIT(lit_331);
DEFLIT(lit_167);
DEFLIT(lit_269);
DEFLIT(lit_174);
DEFLIT(lit_191);
DEFLIT(lit_225);
DEFLIT(lit_14);
DEFLIT(lit_74);
DEFLIT(lit_235);
DEFLIT(lit_128);
DEFLIT(lit_442);
DEFLIT(lit_528);
DEFLIT(lit_267);
DEFLIT(lit_144);
DEFLIT(lit_206);
DEFLIT(lit_379);
DEFLIT(lit_553);
DEFLIT(lit_392);
DEFLIT(lit_143);
DEFLIT(lit_170);
DEFLIT(lit_237);
DEFLIT(lit_544);
DEFLIT(lit_627);
DEFLIT(lit_221);
DEFLIT(lit_238);
DEFLIT(lit_1);
DEFLIT(lit_374);
DEFLIT(lit_559);
DEFLIT(lit_245);
DEFLIT(lit_236);
DEFLIT(lit_459);
DEFLIT(lit_584);
DEFLIT(lit_320);
DEFLIT(lit_481);
DEFLIT(lit_323);
DEFLIT(lit_189);
DEFLIT(lit_17);
DEFLIT(lit_452);
DEFLIT(lit_142);
DEFLIT(lit_11);
DEFLIT(lit_463);
DEFLIT(lit_257);
DEFLIT(lit_605);
DEFLIT(lit_204);
DEFLIT(lit_352);
DEFLIT(lit_303);
DEFLIT(lit_576);
DEFLIT(lit_484);
DEFLIT(lit_219);
DEFLIT(lit_185);
DEFLIT(lit_571);
DEFLIT(lit_208);
DEFLIT(lit_155);
DEFLIT(lit_602);
DEFLIT(lit_258);
DEFLIT(lit_132);
DEFLIT(lit_507);
DEFLIT(lit_342);
DEFLIT(lit_607);
DEFLIT(lit_234);
DEFLIT(lit_334);
DEFLIT(lit_6);
DEFLIT(lit_470);
DEFLIT(lit_57);
DEFLIT(lit_634);
DEFLIT(lit_489);
DEFLIT(lit_325);
DEFLIT(lit_101);
DEFLIT(lit_249);
DEFLIT(lit_393);
DEFLIT(lit_367);
DEFLIT(lit_79);
DEFLIT(lit_359);
DEFLIT(lit_168);
DEFLIT(lit_20);
DEFLIT(lit_424);
DEFLIT(lit_418);
DEFLIT(lit_114);
DEFLIT(lit_538);
DEFLIT(lit_192);
DEFLIT(lit_21);
DEFLIT(lit_69);
DEFLIT(lit_35);
DEFLIT(lit_148);
DEFLIT(lit_176);
DEFLIT(lit_526);
DEFLIT(lit_551);
DEFLIT(lit_434);
DEFLIT(lit_141);
DEFLIT(lit_350);
DEFLIT(lit_302);
DEFLIT(lit_50);
DEFLIT(lit_321);
DEFLIT(lit_121);
DEFLIT(lit_611);
DEFLIT(lit_118);
DEFLIT(lit_54);
DEFLIT(lit_200);
DEFLIT(lit_631);
DEFLIT(lit_372);
DEFLIT(lit_97);
DEFLIT(lit_84);
DEFLIT(lit_426);
DEFLIT(lit_281);
DEFLIT(lit_441);
DEFLIT(lit_18);
DEFLIT(lit_251);
DEFLIT(lit_469);
DEFLIT(lit_540);
DEFLIT(lit_318);
DEFLIT(lit_620);
DEFLIT(lit_309);
DEFLIT(lit_33);
DEFLIT(lit_28);
DEFLIT(lit_564);
DEFLIT(lit_152);
DEFLIT(lit_76);
DEFLIT(lit_337);
DEFLIT(lit_319);
DEFLIT(lit_496);
DEFLIT(lit_583);
DEFLIT(lit_315);
DEFLIT(lit_202);
DEFLIT(lit_220);
DEFLIT(lit_357);
DEFLIT(lit_48);
DEFLIT(lit_591);
DEFLIT(lit_482);
DEFLIT(lit_485);
DEFLIT(lit_523);
DEFLIT(lit_487);
DEFLIT(lit_32);
DEFLIT(lit_437);
DEFLIT(lit_473);
DEFLIT(lit_388);
DEFLIT(lit_63);
DEFLIT(lit_592);
DEFLIT(lit_555);
DEFLIT(lit_65);
DEFLIT(lit_530);
DEFLIT(lit_419);
DEFLIT(lit_567);
DEFLIT(lit_351);
DEFLIT(lit_568);
DEFLIT(lit_519);
DEFLIT(lit_529);
DEFLIT(lit_348);
DEFLIT(lit_212);
DEFLIT(lit_41);
DEFLIT(lit_390);
DEFLIT(lit_10);
DEFLIT(lit_264);
DEFLIT(lit_80);
DEFLIT(lit_509);
DEFLIT(lit_422);
DEFLIT(lit_370);
DEFLIT(lit_587);
DEFLIT(lit_213);
DEFLIT(lit_126);
DEFLIT(lit_291);
DEFLIT(lit_95);
DEFLIT(lit_3);
DEFLIT(lit_106);
DEFLIT(lit_381);
DEFLIT(lit_305);
DEFLIT(lit_527);
DEFLIT(lit_307);
DEFLIT(lit_502);
DEFLIT(lit_110);
DEFLIT(lit_177);
DEFLIT(lit_480);
DEFLIT(lit_260);
DEFLIT(lit_335);
DEFLIT(lit_432);
DEFLIT(lit_7);
DEFLIT(lit_454);
DEFLIT(lit_125);
DEFLIT(lit_86);
DEFLIT(lit_477);
DEFLIT(lit_232);
DEFLIT(lit_361);
DEFLIT(lit_290);
DEFLIT(lit_521);
DEFLIT(lit_4);
DEFLIT(lit_78);
DEFLIT(lit_589);
DEFLIT(lit_632);
DEFLIT(lit_156);
DEFLIT(lit_124);
DEFLIT(lit_440);
DEFLIT(lit_240);
DEFLIT(lit_458);
DEFLIT(lit_233);
DEFLIT(lit_383);
DEFLIT(lit_93);
DEFLIT(lit_353);
DEFLIT(lit_403);
DEFLIT(lit_171);
DEFLIT(lit_405);
DEFLIT(lit_47);
DEFLIT(lit_153);
DEFLIT(lit_389);
DEFLIT(lit_108);
DEFLIT(lit_332);
DEFLIT(lit_439);
DEFLIT(lit_186);
DEFLIT(lit_630);
DEFLIT(lit_411);
DEFLIT(lit_368);
DEFLIT(lit_316);
DEFLIT(lit_123);
DEFLIT(lit_140);
DEFLIT(lit_5);
DEFLIT(lit_511);
DEFLIT(lit_289);
DEFLIT(lit_550);
DEFLIT(lit_532);
DEFLIT(lit_623);
DEFLIT(lit_89);
DEFLIT(lit_491);
DEFLIT(lit_537);
DEFLIT(lit_547);
DEFLIT(lit_549);
DEFLIT(lit_154);
DEFLIT(lit_180);
DEFLIT(lit_500);
DEFLIT(lit_339);
DEFLIT(lit_566);
DEFLIT(lit_599);
DEFLIT(lit_169);
DEFLIT(lit_178);
DEFLIT(lit_585);
DEFLIT(lit_461);
DEFLIT(lit_288);
DEFLIT(lit_444);
DEFLIT(lit_401);
DEFLIT(lit_184);
DEFLIT(lit_201);
DEFLIT(lit_44);
DEFLIT(lit_253);
DEFLIT(lit_193);
DEFLIT(lit_421);
DEFLIT(lit_117);
DEFLIT(lit_138);
DEFLIT(lit_478);
DEFLIT(lit_216);
DEFLIT(lit_628);
DEFLIT(lit_22);
DEFLIT(lit_336);
DEFLIT(lit_313);
DEFLIT(lit_356);
DEFLIT(lit_195);
DEFLIT(lit_231);
DEFLIT(lit_287);
DEFLIT(lit_416);
DEFLIT(lit_2);
DEFLIT(lit_501);
DEFLIT(lit_301);
DEFLIT(lit_406);
DEFLIT(lit_563);
DEFLIT(lit_404);
DEFLIT(lit_329);
DEFLIT(lit_366);
DEFLIT(lit_246);
DEFLIT(lit_626);
DEFLIT(lit_107);
DEFLIT(lit_162);
DEFLIT(lit_91);
DEFLIT(lit_522);
DEFLIT(lit_199);
DEFLIT(lit_586);
DEFLIT(lit_479);
DEFLIT(lit_300);
DEFLIT(lit_495);
DEFLIT(lit_286);
DEFLIT(lit_214);
DEFLIT(lit_94);
DEFLIT(lit_548);
DEFLIT(lit_27);
DEFLIT(lit_136);
DEFLIT(lit_311);
DEFLIT(lit_565);
DEFLIT(lit_363);
DEFLIT(lit_137);
DEFLIT(lit_229);
DEFLIT(lit_467);
DEFLIT(lit_624);
DEFLIT(lit_533);
DEFLIT(lit_207);
DEFLIT(lit_525);
DEFLIT(lit_244);
DEFLIT(lit_498);
DEFLIT(lit_455);
DEFLIT(lit_330);
DEFLIT(lit_629);
DEFLIT(lit_596);
DEFLIT(lit_19);
DEFLIT(lit_385);
DEFLIT(lit_402);
DEFLIT(lit_621);
DEFLIT(lit_582);
DEFLIT(lit_314);
DEFLIT(lit_346);
DEFLIT(lit_36);
DEFLIT(lit_386);
DEFLIT(lit_30);
DEFLIT(lit_601);
DEFLIT(lit_545);
DEFLIT(lit_542);
DEFLIT(lit_364);
DEFLIT(lit_45);
DEFLIT(lit_579);
DEFLIT(lit_285);

/* FUNCTIONS: */

extern P YPallocate_stack (P);
extern P YPclass_prop_len_setter (P,P);
extern P YPclass_prop_len (P);
extern P YPclass_name_setter (P,P);
extern P YPclass_name (P);
extern P YPclass_parents_setter (P,P);
extern P YPclass_parents (P);
extern P YPclass_direct_props_setter (P,P);
extern P YPclass_direct_props (P);
extern P YPclass_ancestors_setter (P,P);
extern P YPclass_ancestors (P);
extern P YPclass_props_setter (P,P);
extern P YPclass_props (P);
extern P YPclass_children_setter (P,P);
extern P YPclass_children (P);
extern P YPclass_gens_setter (P,P);
extern P YPclass_gens (P);
extern P YPclass_mets_setter (P,P);
extern P YPclass_mets (P);
extern P YPclass_forward_setter (P,P);
extern P YPclass_forward (P);
extern P YPclass_type_cache_setter (P,P);
extern P YPclass_type_cache (P);
extern P YPclass_id_setter (P,P);
extern P YPclass_id (P);
extern P YPclass_row_setter (P,P);
extern P YPclass_row (P);
extern P YPclass (P,P,P,P,P,P,P,P,P,P,P,P,P);
extern P YPtype_object_setter (P,P);
extern P YPtype_object (P);
extern P YPsingleton (P);
extern P YPtype_class_setter (P,P);
extern P YPtype_class (P);
extern P YPsubclass (P);
extern P YPunion_elts_setter (P,P);
extern P YPunion_elts (P);
extern P YPunion (P);
extern P YPproduct_elts_setter (P,P);
extern P YPproduct_elts (P);
extern P YPproduct (P);
extern P YPhead_setter (P,P);
extern P YPhead (P);
extern P YPtail_setter (P,P);
extern P YPtail (P);
extern P YPlst (P,P);
extern P YPpair (P,P);
extern P YPemptyQ (P);
extern P YPPlen (P);
extern P YPsig_names_setter (P,P);
extern P YPsig_names (P);
extern P YPsig_specs_setter (P,P);
extern P YPsig_specs (P);
extern P YPsig_naryQ_setter (P,P);
extern P YPsig_naryQ (P);
extern P YPsig_arity_setter (P,P);
extern P YPsig_arity (P);
extern P YPsig_val_setter (P,P);
extern P YPsig_val (P);
extern P YPsig_unification_vars_setter (P,P);
extern P YPsig_unification_vars (P);
extern P YPsig (P,P,P,P,P,P);
extern P YPsrc_loc_line_setter (P,P);
extern P YPsrc_loc_line (P);
extern P YPsrc_loc_file_setter (P,P);
extern P YPsrc_loc_file (P);
extern P YPsrc_loc (P,P);
extern P YPmet_code_setter (P,P);
extern P YPmet_code (P);
extern P YPmet_name_setter (P,P);
extern P YPmet_name (P);
extern P YPmet_sig_setter (P,P);
extern P YPmet_sig (P);
extern P YPmet_env_setter (P,P);
extern P YPmet_env (P);
extern P YPmet_refs_setter (P,P);
extern P YPmet_refs (P);
extern P YPmet_src_setter (P,P);
extern P YPmet_src (P);
extern P YPmet (P,P,P,P,P,P);
extern P YPtag_bits (P);
extern P YPtag (P,P);
extern P YPuntag (P);
extern P YPtag_into (P,P);
extern P YPuntag_into (P);
extern P YPindirect_objectQ (P);
extern P YPclass_of (P);
extern P YPib (P);
extern P YPfixnum (P);
extern P YPiu (P);
extern P YPint (P);
extern P YOintQ (P);
extern P YPcb (P);
extern P YPchr (P);
extern P YPcu (P);
extern P YPlb (P);
extern P YPloc (P);
extern P YPlu (P);
extern P YPstrX (P,P);
extern P YPstr (P,P);
extern P YPtupX (P,P);
extern P YPtup (P,P);
extern P YPrepX (P,P);
extern P YPrep (P,P);
extern P YPstr_eqQ_loop (P,P,P,P);
extern P YPstr_eqQ (P,P);
extern P YPcompute_ancestors (P);
extern P YPdefine_parents (P,P);
extern P YPPsym (P);
extern P YPsym_nam_setter (P,P);
extern P YPsym_nam (P);
extern P YPsym (P);
LOCFOR(fun_111);
FUNFOR(Yfab_sym);
extern P YPrevX (P);
extern P YPcat2 (P,P);
extern P YPflo_dat_setter (P,P);
extern P YPflo_dat (P);
extern P YPflo (P);
extern P YPfb (P);
extern P YPfu (P);
extern P YPopts_location_setter (P,P);
extern P YPopts_location (P);
extern P YPopts_count_setter (P,P);
extern P YPopts_count (P);
extern P YPopts (P,P);
extern P YPopts_tup_location_setter (P,P);
extern P YPopts_tup_location (P);
extern P YPopts_tup_count_setter (P,P);
extern P YPopts_tup_count (P);
extern P YPopts_tup_tup_setter (P,P);
extern P YPopts_tup_tup (P);
extern P YPopts_tup (P,P,P);
extern P YPprop_owner_setter (P,P);
extern P YPprop_owner (P);
extern P YPprop_getter_setter (P,P);
extern P YPprop_getter (P);
extern P YPprop_setter_setter (P,P);
extern P YPprop_setter (P);
extern P YPprop_type_setter (P,P);
extern P YPprop_type (P);
extern P YPprop_init_setter (P,P);
extern P YPprop_init (P);
extern P YPPprop (P,P,P,P,P);
extern P YPgen_cache_missableQ_setter (P,P);
extern P YPgen_cache_missableQ (P);
extern P YPgen_cache_arg_pos_setter (P,P);
extern P YPgen_cache_arg_pos (P);
extern P YPgen_cache_singletons_setter (P,P);
extern P YPgen_cache_singletons (P);
extern P YPgen_cache_classes_setter (P,P);
extern P YPgen_cache_classes (P);
extern P YPgen_cache_count_setter (P,P);
extern P YPgen_cache_count (P);
extern P YPgen_cache (P,P,P,P,P);
extern P YPgen_code_setter (P,P);
extern P YPgen_code (P);
extern P YPgen_name_setter (P,P);
extern P YPgen_name (P);
extern P YPgen_sig_setter (P,P);
extern P YPgen_sig (P);
extern P YPgen_mets_setter (P,P);
extern P YPgen_mets (P);
extern P YPfun_cache_setter (P,P);
extern P YPfun_cache (P);
extern P YPgen_refs_setter (P,P);
extern P YPgen_refs (P);
extern P YPgen_src_setter (P,P);
extern P YPgen_src (P);
extern P YPgen (P,P,P,P,P,P,P);
FUNFOR(YPprop_offset);
FUNFOR(YPearly_dispatch);
FUNFOR(YPadd_met);
FUNFOR(YPadd_prop);
LOCFOR(fun_173);
LOCFOR(fun_174);
LOCFOR(fun_175);
LOCFOR(fun_176);
LOCFOR(fun_177);
LOCFOR(fun_178);
LOCFOR(fun_179);
LOCFOR(fun_180);
LOCFOR(fun_181);
LOCFOR(fun_182);
LOCFOR(fun_183);
LOCFOR(fun_184);
LOCFOR(fun_185);
LOCFOR(fun_186);
LOCFOR(fun_187);
LOCFOR(fun_188);
LOCFOR(fun_189);
LOCFOR(fun_190);
LOCFOR(fun_191);
LOCFOR(fun_192);
LOCFOR(fun_193);
LOCFOR(fun_194);
LOCFOR(fun_195);
LOCFOR(fun_196);
LOCFOR(fun_197);
LOCFOR(fun_198);
LOCFOR(fun_199);
LOCFOR(fun_200);
LOCFOR(fun_201);
LOCFOR(fun_202);
LOCFOR(fun_203);
LOCFOR(fun_204);
LOCFOR(fun_205);
LOCFOR(fun_206);
LOCFOR(fun_207);
LOCFOR(fun_208);
LOCFOR(fun_209);
LOCFOR(fun_210);
LOCFOR(fun_211);
LOCFOR(fun_212);
LOCFOR(fun_213);
LOCFOR(fun_214);
LOCFOR(fun_215);
LOCFOR(fun_216);
LOCFOR(fun_217);
LOCFOR(fun_218);
LOCFOR(fun_219);
LOCFOR(fun_220);
LOCFOR(fun_221);
LOCFOR(fun_222);
LOCFOR(fun_223);
LOCFOR(fun_224);
LOCFOR(fun_225);
LOCFOR(fun_226);
LOCFOR(fun_227);
LOCFOR(fun_228);
LOCFOR(fun_229);
LOCFOR(fun_230);
LOCFOR(fun_231);
LOCFOR(fun_232);
LOCFOR(fun_233);
LOCFOR(fun_234);
LOCFOR(fun_235);
LOCFOR(fun_236);
LOCFOR(fun_237);
LOCFOR(fun_238);
LOCFOR(fun_239);
LOCFOR(fun_240);
LOCFOR(fun_241);
LOCFOR(fun_242);
LOCFOR(fun_243);
LOCFOR(fun_244);
LOCFOR(fun_245);
LOCFOR(fun_246);
LOCFOR(fun_247);
LOCFOR(fun_248);
LOCFOR(fun_249);
LOCFOR(fun_250);
LOCFOR(fun_251);
LOCFOR(fun_252);
LOCFOR(fun_253);
LOCFOR(fun_254);
LOCFOR(fun_255);
LOCFOR(fun_256);
LOCFOR(fun_257);
LOCFOR(fun_258);
LOCFOR(fun_259);
LOCFOR(fun_260);
LOCFOR(fun_261);
LOCFOR(fun_262);
LOCFOR(fun_263);
LOCFOR(fun_264);
LOCFOR(fun_265);
LOCFOR(fun_266);
LOCFOR(fun_267);
LOCFOR(fun_268);
LOCFOR(fun_269);
LOCFOR(fun_270);
LOCFOR(fun_271);
LOCFOR(fun_272);
LOCFOR(fun_273);
LOCFOR(fun_274);
LOCFOR(fun_275);
LOCFOR(fun_276);
LOCFOR(fun_277);
LOCFOR(fun_278);
LOCFOR(fun_279);
LOCFOR(fun_280);
LOCFOR(fun_281);
LOCFOR(fun_282);
LOCFOR(fun_283);
LOCFOR(fun_284);
LOCFOR(fun_285);
LOCFOR(fun_286);
LOCFOR(fun_287);
LOCFOR(fun_288);
LOCFOR(fun_289);
LOCFOR(fun_290);
LOCFOR(fun_291);
LOCFOR(fun_292);
LOCFOR(fun_293);
LOCFOR(fun_294);
LOCFOR(fun_295);
LOCFOR(fun_296);
LOCFOR(fun_297);
LOCFOR(fun_298);
LOCFOR(fun_299);
LOCFOR(fun_300);
LOCFOR(fun_301);
LOCFOR(fun_302);
LOCFOR(fun_303);
LOCFOR(fun_304);
LOCFOR(fun_305);
LOCFOR(fun_306);
LOCFOR(fun_307);
LOCFOR(fun_308);
LOCFOR(fun_309);
LOCFOR(fun_310);
LOCFOR(fun_311);
LOCFOR(fun_312);
LOCFOR(fun_313);
LOCFOR(fun_314);
LOCFOR(fun_315);
LOCFOR(fun_316);
LOCFOR(fun_317);
LOCFOR(fun_318);
LOCFOR(fun_319);
LOCFOR(fun_320);
LOCFOR(fun_321);
LOCFOR(fun_322);
LOCFOR(fun_323);
FUNFOR(YPcollect_direct_props);
FUNFOR(YPfinalize_propsX);
extern P YOhead (P);
extern P YOhead_setter (P,P);
extern P YOtail (P);
extern P YOtail_setter (P,P);
extern P YOE (P,P);
extern P YOL (P,P);
extern P YOA (P,P);
extern P YOEE (P,P);
FUNFOR(YOOEE);
FUNFOR(Ynot);
extern P YOnot (P);
extern P YOemptyQ (P);
FUNFOR(YOOemptyQ);
FUNFOR(YOrevX);
extern P YOlen (P);
extern P YOoelt (P,P);
extern P YOoelt_setter (P,P,P);
extern P YOolen (P);
FUNFOR(YOallQ);
FUNFOR(YOall2Q);
FUNFOR(YOelt);
FUNFOR(YOfill);
FUNFOR(YOanyQ);
extern P YOpair (P,P);
extern P YOadd (P,P);
extern P YOadd_new (P,P);
FUNFOR(YOmap);
FUNFOR(YOpick);
FUNFOR(YOdo);
FUNFOR(YOalter);
FUNFOR(YOfab);
FUNFOR(YOfold);
FUNFOR(YOrev);
FUNFOR(YOcat2);
FUNFOR(YOfind);
LOCFOR(fun_361);
FUNFOR(YOmemQ);
LOCFOR(fun_363);
FUNFOR(YOdel_dups);
FUNFOR(YOlst_helper);
FUNFOR(YOopts_as_lst);
FUNFOR(YOlst);
extern P YOtlen (P);
extern P YOtelt (P,P);
extern P YOtelt_setter (P,P,P);
FUNFOR(YOtanyQ);
FUNFOR(YOtall2Q);
extern P YPto_tup (P);
FUNFOR(YOtup);
FUNFOR(YOfun_names);
FUNFOR(YOfun_specs);
FUNFOR(YOfun_naryQ);
FUNFOR(YOfun_arity);
FUNFOR(YOfun_val);
FUNFOR(YOfun_unification_vars);
FUNFOR(YOfun_mets);
FUNFOR(YOfun_mets_setter);
FUNFOR(Yfun_spec);
FUNFOR(Yfun_same_metQ);
FUNFOR(Yfun_congruentQ);
LOCFOR(fun_386);
LOCFOR(fun_387);
LOCFOR(fun_388);
LOCFOR(fun_389);
FUNFOR(Ygen_add_met);
extern P YOsubclassQ (P,P);
extern P YOclass_isaQ (P,P);
extern P YOsingleton_isaQ (P,P);
FUNFOR(YOisaQ);
FUNFOR(YOclassL);
FUNFOR(YtT);
FUNFOR(YOtype_equalQ);
FUNFOR(YOsubtypeQ);
FUNFOR(YOmay_isaQ);
FUNFOR(YOorder_specs_class);
FUNFOR(YOorder_specs);
FUNFOR(Yorder_mets);
LOCFOR(fun_make_ambiguous_403);
LOCFOR(fun_precedes_allQ_404);
LOCFOR(fun_check_subsequent_ambiguities_405);
LOCFOR(fun_insert_406);
FUNFOR(Yord_app_mets_1);
LOCFOR(fun_408);
FUNFOR(Ymet_appQ);
FUNFOR(Yord_app_metsT);
FUNFOR(Yord_app_mets);
FUNFOR(YOgen_cache_arg_pos);
FUNFOR(YOgen_cache_arg_pos_setter);
FUNFOR(YOgen_cache_singletons);
FUNFOR(YOgen_cache_singletons_setter);
FUNFOR(YOgen_cache_classes);
FUNFOR(YOgen_cache_classes_setter);
FUNFOR(Ymethod_accessor_offset);
FUNFOR(YOsingleton_specQ);
FUNFOR(YOsubclass_specQ);
FUNFOR(YOunion_specQ);
FUNFOR(YOprecise_specQ);
LOCFOR(fun_423);
FUNFOR(YOmets_unspecialized_atQ);
LOCFOR(fun_425);
FUNFOR(YOprune_mets_by_type_at);
LOCFOR(fun_427);
FUNFOR(YOmets_specs_at);
LOCFOR(fun_429);
FUNFOR(YOmets_singletons_at);
LOCFOR(fun_431);
FUNFOR(YOmets_subclasses_at);
FUNFOR(YOcache_add);
FUNFOR(Ygen_lookup_miss_1_using);
FUNFOR(YOspecd_args);
FUNFOR(Yrequires_singleton_prec);
FUNFOR(Yensure_singleton_cache);
FUNFOR(Ygen_lookup_miss_1);
FUNFOR(Ygen_lookup_miss);
extern P Ygen_lookup (P,P);
extern P Yprop_value_at (P,P);
extern P Yprop_bound_atQ (P,P);
extern P Yprop_value_at_setter (P,P,P);
extern P Ygen_lookup_1_using (P,P,P,P,P,P,P);
extern P Ygen_lookup_1 (P,P,P);
FUNFOR(Ychoose_methods);
FUNFOR(YPdispatch);
FUNFOR(YPpatch_early_generic);
FUNFOR(Yfun_names);
FUNFOR(Yfun_names_setter);
FUNFOR(Yfun_specs);
FUNFOR(Yfun_specs_setter);
FUNFOR(Yfun_naryQ);
FUNFOR(Yfun_naryQ_setter);
FUNFOR(Yfun_arity);
FUNFOR(Yfun_arity_setter);
FUNFOR(Yfun_val);
FUNFOR(Yfun_val_setter);
FUNFOR(Yfun_unification_vars);
FUNFOR(Yfun_unification_vars_setter);
FUNFOR(Yobject_class);
FUNFOR(YOclass_ancestors);
LOCFOR(fun_tailQ_463);
LOCFOR(fun_candidate_464);
LOCFOR(fun_candidate_at_head_465);
LOCFOR(fun_del_next_466);
FUNFOR(Yclass_ordered_ancestors);
FUNFOR(YOclass_direct_props);
FUNFOR(Yclass_ordered_props);
FUNFOR(Ydel_class);
LOCFOR(fun_471);
LOCFOR(fun_472);
FUNFOR(Yinit_class);
FUNFOR(Yfab_class);
FUNFOR(Yrefab_class);
FUNFOR(Yobject_props);
FUNFOR(Yobject_parents);
FUNFOR(Yensure_fresh_object);
FUNFOR(Yprop_offset);
FUNFOR(YPprop_unbound_error);
FUNFOR(Yprop_value);
FUNFOR(Yprop_boundQ);
FUNFOR(Yprop_value_setter);
FUNFOR(Yfind_getter);
FUNFOR(Yfind_setter);
LOCFOR(fun_486);
FUNFOR(Yforward_class);
FUNFOR(Yclone);
LOCFOR(fun_visit_489);
FUNFOR(YOdo_descendents);
LOCFOR(fun_491);
FUNFOR(Yfinalize_props);
FUNFOR(YPprop);
extern P YPupdate_instance_for_changed_class (P);
FUNFOR(Yupdate_instance_for_changed_class);
FUNFOR(Ypatch_early_classes);
FUNFOR(Yfab_gen);
LOCFOR(fun_498);
FUNFOR(Ygen_from_met);
FUNFOR(YPdefine_method);
FUNFOR(Yunexec);
extern P YPnew (P,P);
FUNFOR(YOnew);
LOCFOR(fun_new_504);
LOCFOR(fun_505);
LOCFOR(fun_subtypeQ_506);
LOCFOR(fun_507);
LOCFOR(fun_subtypeQ_508);
LOCFOR(fun_509);
LOCFOR(fun_subtypeQ_510);
LOCFOR(fun_subtypeQ_511);
LOCFOR(fun_subtypeQ_512);
LOCFOR(fun_subtypeQ_513);
LOCFOR(fun_subtypeQ_514);
LOCFOR(fun_subtypeQ_515);
LOCFOR(fun_subtypeQ_516);
LOCFOR(fun_subtypeQ_517);
LOCFOR(fun_subtypeQ_518);
LOCFOR(fun_subtypeQ_519);
LOCFOR(fun_subtypeQ_520);
LOCFOR(fun_subtypeQ_521);
LOCFOR(fun_subtypeQ_522);
LOCFOR(fun_subtypeQ_523);
LOCFOR(fun_isaQ_524);
LOCFOR(fun_isaQ_525);
LOCFOR(fun_isaQ_526);
LOCFOR(fun_527);
LOCFOR(fun_isaQ_528);
LOCFOR(fun_isaQ_529);
LOCFOR(fun_order_specs_530);
LOCFOR(fun_order_specs_531);
LOCFOR(fun_order_specs_532);
LOCFOR(fun_order_specs_533);
LOCFOR(fun_order_specs_534);
LOCFOR(fun_order_specs_535);
LOCFOR(fun_order_specs_536);
LOCFOR(fun_may_isaQ_537);
LOCFOR(fun_may_isaQ_538);
LOCFOR(fun_may_isaQ_539);
LOCFOR(fun_may_isaQ_540);
LOCFOR(fun_541);
LOCFOR(fun_may_isaQ_542);
extern P YPmacro (P,P,P);
extern P Y___main_0___ ();
extern P Y___main_1___ ();
extern P Y___main_2___ ();
extern P Y___main_3___ ();
extern P Y___main_4___ ();
extern P Y___main_5___ ();
extern P Y___main_6___ ();
extern P Y___main_7___ ();
extern P Y___main_8___ ();
extern P Y___main_9___ ();
extern P Y___main_10___ ();
extern P Y___main_11___ ();
extern P Y___main_12___ ();
extern P Y___main_13___ ();
extern P Y___main_14___ ();
extern P Y___main_15___ ();

/* FUNCTION CODES: */

P YPallocate_stack(P num_) {
  P retF1;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  (P)YPdef_regs();
  T1 = (P)YPsp_reg();
  retF1 = T1;
  T3 = (P)YPsp_reg();
  T4 = (P)YPiT((P)4,num_);
  T2 = (P)YPiA(T3,T4);
  (P)YPsp_reg_setter(T2);
  T0 = retF1;
  return T0;
}

P YPclass_prop_len_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPclass_prop_len(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPclass_name_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPclass_name(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPclass_parents_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPclass_parents(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPclass_direct_props_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPclass_direct_props(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPclass_ancestors_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPclass_ancestors(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPclass_props_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

INLINE P YPclass_props(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPclass_children_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)6);
  return T0;
}

INLINE P YPclass_children(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)6);
  return T0;
}

P YPclass_gens_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)7);
  return T0;
}

INLINE P YPclass_gens(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)7);
  return T0;
}

P YPclass_mets_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)8);
  return T0;
}

INLINE P YPclass_mets(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)8);
  return T0;
}

P YPclass_forward_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)9);
  return T0;
}

INLINE P YPclass_forward(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)9);
  return T0;
}

P YPclass_type_cache_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)10);
  return T0;
}

INLINE P YPclass_type_cache(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)10);
  return T0;
}

P YPclass_id_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)11);
  return T0;
}

INLINE P YPclass_id(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)11);
  return T0;
}

P YPclass_row_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)12);
  return T0;
}

INLINE P YPclass_row(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)12);
  return T0;
}

P YPclass(P class_prop_len_,P class_name_,P class_parents_,P class_direct_props_,P class_ancestors_,P class_props_,P class_children_,P class_gens_,P class_mets_,P class_forward_,P class_type_cache_,P class_id_,P class_row_) {
  P classF2;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLclassG),(P)13);
  classF2 = T1;
  (P)YPprop_elt_setter(Ynil,classF2,(P)13);
  (P)YPprop_elt_setter(class_row_,classF2,(P)12);
  (P)YPprop_elt_setter(class_id_,classF2,(P)11);
  (P)YPprop_elt_setter(class_type_cache_,classF2,(P)10);
  (P)YPprop_elt_setter(class_forward_,classF2,(P)9);
  (P)YPprop_elt_setter(class_mets_,classF2,(P)8);
  (P)YPprop_elt_setter(class_gens_,classF2,(P)7);
  (P)YPprop_elt_setter(class_children_,classF2,(P)6);
  (P)YPprop_elt_setter(class_props_,classF2,(P)5);
  (P)YPprop_elt_setter(class_ancestors_,classF2,(P)4);
  (P)YPprop_elt_setter(class_direct_props_,classF2,(P)3);
  (P)YPprop_elt_setter(class_parents_,classF2,(P)2);
  (P)YPprop_elt_setter(class_name_,classF2,(P)1);
  (P)YPprop_elt_setter(class_prop_len_,classF2,(P)0);
  T0 = classF2;
  return T0;
}

P YPtype_object_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPtype_object(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsingleton(P type_object_) {
  P classF3;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLsingletonG),(P)1);
  classF3 = T1;
  (P)YPprop_elt_setter(Ynil,classF3,(P)1);
  (P)YPprop_elt_setter(type_object_,classF3,(P)0);
  T0 = classF3;
  return T0;
}

P YPtype_class_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPtype_class(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsubclass(P type_class_) {
  P classF4;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLsubclassG),(P)1);
  classF4 = T1;
  (P)YPprop_elt_setter(Ynil,classF4,(P)1);
  (P)YPprop_elt_setter(type_class_,classF4,(P)0);
  T0 = classF4;
  return T0;
}

P YPunion_elts_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPunion_elts(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPunion(P union_elts_) {
  P classF5;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLunionG),(P)1);
  classF5 = T1;
  (P)YPprop_elt_setter(Ynil,classF5,(P)1);
  (P)YPprop_elt_setter(union_elts_,classF5,(P)0);
  T0 = classF5;
  return T0;
}

P YPproduct_elts_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPproduct_elts(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPproduct(P product_elts_) {
  P classF6;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLproductG),(P)1);
  classF6 = T1;
  (P)YPprop_elt_setter(Ynil,classF6,(P)1);
  (P)YPprop_elt_setter(product_elts_,classF6,(P)0);
  T0 = classF6;
  return T0;
}

P YPhead_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPhead(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPtail_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPtail(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPlst(P head_,P tail_) {
  P classF7;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLlstG),(P)2);
  classF7 = T1;
  (P)YPprop_elt_setter(Ynil,classF7,(P)2);
  (P)YPprop_elt_setter(tail_,classF7,(P)1);
  (P)YPprop_elt_setter(head_,classF7,(P)0);
  T0 = classF7;
  return T0;
}

P YPpair(P head_,P tail_) {
  P T0;
DEFCREGS();
  T0 = (P)YPlst(head_,tail_);
  return T0;
}

INLINE P YPemptyQ(P x_) {
  P T0,T1;
DEFCREGS();
  T1 = (P)YPeqQ(x_,VARREF(Ynil));
  T0 = (P)YPbb(T1);
  return T0;
}

P YPPlen(P x_) {
  P T0,T1,T2,T3,T4;
DEFCREGS();
  T1 = (P)YPemptyQ(x_);
  if (T1 != YPfalse) {
    T0 = (P)0;
  } else {
    T4 = (P)YPtail(x_);
    T3 = (P)YPPlen(T4);
    T2 = (P)YPiA(T3,(P)1);
    T0 = T2;
  }
  return T0;
}

P YPsig_names_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPsig_names(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsig_specs_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPsig_specs(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPsig_naryQ_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPsig_naryQ(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPsig_arity_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPsig_arity(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPsig_val_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPsig_val(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPsig_unification_vars_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

INLINE P YPsig_unification_vars(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPsig(P sig_names_,P sig_specs_,P sig_naryQ_,P sig_arity_,P sig_val_,P sig_unification_vars_) {
  P classF8;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLsigG),(P)6);
  classF8 = T1;
  (P)YPprop_elt_setter(Ynil,classF8,(P)6);
  (P)YPprop_elt_setter(sig_unification_vars_,classF8,(P)5);
  (P)YPprop_elt_setter(sig_val_,classF8,(P)4);
  (P)YPprop_elt_setter(sig_arity_,classF8,(P)3);
  (P)YPprop_elt_setter(sig_naryQ_,classF8,(P)2);
  (P)YPprop_elt_setter(sig_specs_,classF8,(P)1);
  (P)YPprop_elt_setter(sig_names_,classF8,(P)0);
  T0 = classF8;
  return T0;
}

P YPsrc_loc_line_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPsrc_loc_line(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsrc_loc_file_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPsrc_loc_file(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPsrc_loc(P src_loc_line_,P src_loc_file_) {
  P classF9;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLsrc_locG),(P)2);
  classF9 = T1;
  (P)YPprop_elt_setter(Ynil,classF9,(P)2);
  (P)YPprop_elt_setter(src_loc_file_,classF9,(P)1);
  (P)YPprop_elt_setter(src_loc_line_,classF9,(P)0);
  T0 = classF9;
  return T0;
}

P YPmet_code_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPmet_code(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPmet_name_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPmet_name(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPmet_sig_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPmet_sig(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPmet_env_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPmet_env(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPmet_refs_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPmet_refs(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPmet_src_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

INLINE P YPmet_src(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPmet(P met_code_,P met_name_,P met_sig_,P met_env_,P met_refs_,P met_src_) {
  P classF10;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLmetG),(P)6);
  classF10 = T1;
  (P)YPprop_elt_setter(Ynil,classF10,(P)6);
  (P)YPprop_elt_setter(met_src_,classF10,(P)5);
  (P)YPprop_elt_setter(met_refs_,classF10,(P)4);
  (P)YPprop_elt_setter(met_env_,classF10,(P)3);
  (P)YPprop_elt_setter(met_sig_,classF10,(P)2);
  (P)YPprop_elt_setter(met_name_,classF10,(P)1);
  (P)YPprop_elt_setter(met_code_,classF10,(P)0);
  T0 = classF10;
  return T0;
}

INLINE P YPtag_bits(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPiB(x_,(P)3);
  return T0;
}

INLINE P YPtag(P x_,P t_) {
  P T0,T1;
DEFCREGS();
  T1 = (P)YPiLL(x_,(P)2);
  T0 = (P)YPiv(T1,t_);
  return T0;
}

INLINE P YPuntag(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPiGG(x_,(P)2);
  return T0;
}

P YPtag_into(P x_,P t_) {
  P tF13;
  P xF12;
  P xF11;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  xF11 = x_;
  T2 = (P)YPiGG(xF11,(P)2);
  T1 = T2;
  xF12 = T1;
  tF13 = t_;
  T4 = (P)YPiLL(xF12,(P)2);
  T3 = (P)YPiv(T4,tF13);
  T0 = T3;
  return T0;
}

P YPuntag_into(P x_) {
  P tF16;
  P xF15;
  P xF14;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  xF14 = x_;
  T2 = (P)YPiGG(xF14,(P)2);
  T1 = T2;
  xF15 = T1;
  tF16 = (P)0;
  T4 = (P)YPiLL(xF15,(P)2);
  T3 = (P)YPiv(T4,tF16);
  T0 = T3;
  return T0;
}

P YPindirect_objectQ(P x_) {
  P xF17;
  P T0,T1,T2;
DEFCREGS();
  xF17 = x_;
  T2 = (P)YPiB(xF17,(P)3);
  T1 = T2;
  T0 = (P)YPiE(T1,(P)0);
  return T0;
}

INLINE P YPclass_of(P x_) {
  P tagF19;
  P xF18;
  P T0,T1,T2,T3,T4,T5,T6,T7;
DEFCREGS();
  xF18 = x_;
  T2 = (P)YPiB(xF18,(P)3);
  T1 = T2;
  tagF19 = T1;
  T5 = (P)YPiE(tagF19,(P)0);
  T4 = (P)YPbb(T5);
  if (T4 != YPfalse) {
    T6 = (P)YPobject_class(x_);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF19);
    T3 = T7;
  }
  T0 = T3;
  return T0;
}

INLINE P YPib(P x_) {
  P tF21;
  P xF20;
  P T0,T1,T2;
DEFCREGS();
  xF20 = x_;
  tF21 = (P)1;
  T2 = (P)YPiLL(xF20,(P)2);
  T1 = (P)YPiv(T2,tF21);
  T0 = T1;
  return T0;
}

INLINE P YPfixnum(P x_) {
  P tF24;
  P xF23;
  P xF22;
  P T0,T1,T2,T3;
DEFCREGS();
  xF22 = x_;
  xF23 = xF22;
  tF24 = (P)1;
  T3 = (P)YPiLL(xF23,(P)2);
  T2 = (P)YPiv(T3,tF24);
  T1 = T2;
  T0 = T1;
  return T0;
}

INLINE P YPiu(P x_) {
  P xF25;
  P T0,T1;
DEFCREGS();
  xF25 = x_;
  T1 = (P)YPiGG(xF25,(P)2);
  T0 = T1;
  return T0;
}

P YPint(P x_) {
  P tF28;
  P xF27;
  P xF26;
  P T0,T1,T2,T3;
DEFCREGS();
  xF26 = x_;
  xF27 = xF26;
  tF28 = (P)1;
  T3 = (P)YPiLL(xF27,(P)2);
  T2 = (P)YPiv(T3,tF28);
  T1 = T2;
  T0 = T1;
  return T0;
}

INLINE P YOintQ(P x_) {
  P xF29;
  P T0,T1,T2,T3;
DEFCREGS();
  xF29 = x_;
  T3 = (P)YPiB(xF29,(P)3);
  T2 = T3;
  T1 = (P)YPiE(T2,(P)1);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YPcb(P x_) {
  P tF31;
  P xF30;
  P T0,T1,T2;
DEFCREGS();
  xF30 = x_;
  tF31 = (P)2;
  T2 = (P)YPiLL(xF30,(P)2);
  T1 = (P)YPiv(T2,tF31);
  T0 = T1;
  return T0;
}

INLINE P YPchr(P x_) {
  P tF34;
  P xF33;
  P xF32;
  P T0,T1,T2,T3;
DEFCREGS();
  xF32 = x_;
  xF33 = xF32;
  tF34 = (P)2;
  T3 = (P)YPiLL(xF33,(P)2);
  T2 = (P)YPiv(T3,tF34);
  T1 = T2;
  T0 = T1;
  return T0;
}

INLINE P YPcu(P x_) {
  P xF35;
  P T0,T1;
DEFCREGS();
  xF35 = x_;
  T1 = (P)YPiGG(xF35,(P)2);
  T0 = T1;
  return T0;
}

INLINE P YPlb(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPtag_into(x_,(P)3);
  return T0;
}

INLINE P YPloc(P x_) {
  P xF36;
  P T0,T1;
DEFCREGS();
  xF36 = x_;
  T1 = (P)YPtag_into(xF36,(P)3);
  T0 = T1;
  return T0;
}

INLINE P YPlu(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPuntag_into(x_);
  return T0;
}

P YPstrX(P len_,P e_) {
  P T0;
DEFCREGS();
  T0 = (P)YPPsfab(len_,e_);
  return T0;
}

P YPstr(P len_,P e_) {
  P T0,T1,T2,T3;
DEFCREGS();
  T2 = (P)YPiE(len_,(P)0);
  T1 = (P)YPbb(T2);
  if (T1 != YPfalse) {
    T0 = VARREF(YPsnul);
  } else {
    T3 = (P)YPstrX(len_,e_);
    T0 = T3;
  }
  return T0;
}

P YPtupX(P len_,P e_) {
  P T0;
DEFCREGS();
  T0 = (P)YPPtfab(len_,e_);
  return T0;
}

P YPtup(P len_,P e_) {
  P T0,T1,T2,T3;
DEFCREGS();
  T2 = (P)YPiE(len_,(P)0);
  T1 = (P)YPbb(T2);
  if (T1 != YPfalse) {
    T0 = VARREF(YPtnul);
  } else {
    T3 = (P)YPtupX(len_,e_);
    T0 = T3;
  }
  return T0;
}

P YPrepX(P len_,P e_) {
  P T0;
DEFCREGS();
  T0 = (P)YPPrfab(len_,e_);
  return T0;
}

P YPrep(P len_,P e_) {
  P T0,T1,T2,T3;
DEFCREGS();
  T2 = (P)YPiE(len_,(P)0);
  T1 = (P)YPbb(T2);
  if (T1 != YPfalse) {
    T0 = VARREF(YPrnul);
  } else {
    T3 = (P)YPrepX(len_,e_);
    T0 = T3;
  }
  return T0;
}

P YPstr_eqQ_loop(P s1_,P s2_,P len_,P i_) {
  P tmpF44;
  P c2F43;
  P c1F42;
  P tmpF41;
  P tmpF40;
  P c2F39;
  P c1F38;
  P tmpF37;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
DEFCREGS();
  for (;;) {
    P a0_0,a0_1,a0_2,a0_3;
  loop0:
    T3 = (P)YPiE(i_,len_);
    T2 = (P)YPbb(T3);
    tmpF41 = T2;
    if (tmpF41 != YPfalse) {
      T4 = tmpF41;
    } else {
      T6 = (P)YPselt(s1_,i_);
      c1F42 = T6;
      T8 = (P)YPselt(s2_,i_);
      c2F43 = T8;
      T11 = (P)YPcE(c1F42,c2F43);
      T10 = (P)YPbb(T11);
      tmpF44 = T10;
      if (tmpF44 != YPfalse) {
        T14 = (P)YPiA(i_,(P)1);
        a0_0 = s1_;
        a0_1 = s2_;
        a0_2 = len_;
        a0_3 = T14;
        s1_ = a0_0;
        s2_ = a0_1;
        len_ = a0_2;
        i_ = a0_3;
        goto loop0;
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T9 = T12;
      T7 = T9;
      T5 = T7;
      T4 = T5;
    }
    T1 = T4;
    break;
  }
  T0 = T1;
  return T0;
}

P YPstr_eqQ(P s1_,P s2_) {
  P tmpF46;
  P lenF45;
  P T0,T1,T2,T3,T4,T5,T6,T7;
DEFCREGS();
  T1 = (P)YPslen(s1_);
  lenF45 = T1;
  T5 = (P)YPslen(s2_);
  T4 = (P)YPiE(lenF45,T5);
  T3 = (P)YPbb(T4);
  tmpF46 = T3;
  if (tmpF46 != YPfalse) {
    T7 = (P)YPstr_eqQ_loop(s1_,s2_,lenF45,(P)0);
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T2 = T6;
  T0 = T2;
  return T0;
}

P YPcompute_ancestors(P parent_) {
  P T0,T1,T2,T3,T4,T5,T6,T7;
DEFCREGS();
  T2 = (P)YPeqQ(parent_,VARREF(YLanyG));
  T1 = (P)YPbb(T2);
  if (T1 != YPfalse) {
    T3 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
    T0 = T3;
  } else {
    T7 = (P)YPclass_parents(parent_);
    T6 = (P)YPhead(T7);
    T5 = (P)YPcompute_ancestors(T6);
    T4 = (P)YPpair(parent_,T5);
    T0 = T4;
  }
  return T0;
}

P YPdefine_parents(P class_,P parents_) {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
DEFCREGS();
  T0 = (P)YPpair(class_,VARREF(YTearly_classesT));
  VARSET(YTearly_classesT,T0);
  (P)YPclass_prop_len_setter(YPint((P)0),class_);
  (P)YPclass_forward_setter(YPfalse,class_);
  (P)YPclass_parents_setter(parents_,class_);
  T3 = (P)YPhead(parents_);
  T2 = (P)YPcompute_ancestors(T3);
  T1 = (P)YPpair(class_,T2);
  (P)YPclass_ancestors_setter(T1,class_);
  T7 = (P)YPhead(parents_);
  T6 = (P)YPclass_children(T7);
  T5 = (P)YPpair(class_,T6);
  T8 = (P)YPhead(parents_);
  T4 = (P)YPclass_children_setter(T5,T8);
  return T4;
}

P YPPsym(P raw_str_) {
  P T0,T1,T2,T3;
DEFCREGS();
  if (VARREF(YPsymbols_readyQ) != YPfalse) {
    T2 = (P)YPsb(raw_str_);
    T1 = XCALL1(1,VARREF(Yfab_sym),T2);
    T0 = T1;
  } else {
    T3 = VARSET(YPTused_symbols_too_earlyT,YPtrue);
    T0 = T3;
  }
  return T0;
}

P YPsym_nam_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPsym_nam(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsym(P sym_nam_) {
  P classF47;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLsymG),(P)1);
  classF47 = T1;
  (P)YPprop_elt_setter(Ynil,classF47,(P)1);
  (P)YPprop_elt_setter(sym_nam_,classF47,(P)0);
  T0 = classF47;
  return T0;
}

FUNCODEDEF(fun_111) {
  P name_;
  P symF50;
  P symF49;
  P sF48;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(name_, 0);
  sF48 = VARREF(YPsymbols);
  for (;;) {
    P a1_0;
  loop1:
    T4 = (P)YPemptyQ(sF48);
    if (T4 != YPfalse) {
      T6 = (P)YPsym(name_);
      symF49 = T6;
      T7 = (P)YPpair(symF49,VARREF(YPsymbols));
      VARSET(YPsymbols,T7);
      T5 = symF49;
      T3 = T5;
    } else {
      T9 = (P)YPhead(sF48);
      symF50 = T9;
      T12 = (P)YPsym_nam(symF50);
      T11 = (P)YPstr_eqQ(T12,name_);
      if (T11 != YPfalse) {
        T10 = symF50;
      } else {
        T14 = (P)YPtail(sF48);
        a1_0 = T14;
        sF48 = a1_0;
        goto loop1;
        T10 = T13;
      }
      T8 = T10;
      T3 = T8;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfab_sym) {
  P name_;
  P symF53;
  P symF52;
  P sF51;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(name_, 0);
  sF51 = VARREF(YPsymbols);
  for (;;) {
    P a2_0;
  loop2:
    T4 = (P)YPemptyQ(sF51);
    if (T4 != YPfalse) {
      T6 = (P)YPsym(name_);
      symF52 = T6;
      T7 = (P)YPpair(symF52,VARREF(YPsymbols));
      VARSET(YPsymbols,T7);
      T5 = symF52;
      T3 = T5;
    } else {
      T9 = (P)YPhead(sF51);
      symF53 = T9;
      T12 = (P)YPsym_nam(symF53);
      T11 = (P)YPstr_eqQ(T12,name_);
      if (T11 != YPfalse) {
        T10 = symF53;
      } else {
        T14 = (P)YPtail(sF51);
        a2_0 = T14;
        sF51 = a2_0;
        goto loop2;
        T10 = T13;
      }
      T8 = T10;
      T3 = T8;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

P YPrevX(P c_) {
  P tF56;
  P rF55;
  P lF54;
  P T0,T1,T2,T3,T4,T5,T6,T7;
DEFCREGS();
  lF54 = c_;
  rF55 = Ynil;
  for (;;) {
    P a3_0,a3_1;
  loop3:
    T4 = (P)YPemptyQ(lF54);
    if (T4 != YPfalse) {
      T3 = rF55;
    } else {
      T6 = (P)YPtail(lF54);
      tF56 = T6;
      (P)YPtail_setter(rF55,lF54);
      a3_0 = tF56;
      a3_1 = lF54;
      lF54 = a3_0;
      rF55 = a3_1;
      goto loop3;
      T5 = T7;
      T3 = T5;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
  return T0;
}

P YPcat2(P x_,P y_) {
  P yF60;
  P lxyF59;
  P xF58;
  P lxF57;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
DEFCREGS();
  lxF57 = VARREF(Ynil);
  xF58 = x_;
  for (;;) {
    P a4_0,a4_1;
  loop4:
    T4 = (P)YPemptyQ(xF58);
    if (T4 != YPfalse) {
      lxyF59 = lxF57;
      yF60 = y_;
      for (;;) {
        P a5_0,a5_1;
      loop5:
        T8 = (P)YPemptyQ(yF60);
        if (T8 != YPfalse) {
          T9 = (P)YPrevX(lxyF59);
          T7 = T9;
        } else {
          T12 = (P)YPhead(yF60);
          T11 = (P)YPpair(T12,lxyF59);
          T13 = (P)YPtail(yF60);
          a5_0 = T11;
          a5_1 = T13;
          lxyF59 = a5_0;
          yF60 = a5_1;
          goto loop5;
          T7 = T10;
        }
        break;
      }
      T6 = T7;
      T5 = T6;
      T3 = T5;
    } else {
      T16 = (P)YPhead(xF58);
      T15 = (P)YPpair(T16,lxF57);
      T17 = (P)YPtail(xF58);
      a4_0 = T15;
      a4_1 = T17;
      lxF57 = a4_0;
      xF58 = a4_1;
      goto loop4;
      T3 = T14;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
  return T0;
}

P YPflo_dat_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPflo_dat(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPflo(P flo_dat_) {
  P classF61;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLfloG),(P)1);
  classF61 = T1;
  (P)YPprop_elt_setter(flo_dat_,classF61,(P)0);
  T0 = classF61;
  return T0;
}

P YPfb(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPflo(x_);
  return T0;
}

P YPfu(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPopts_location_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPopts_location(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPopts_count_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPopts_count(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPopts(P opts_location_,P opts_count_) {
  P classF62;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLoptsG),(P)2);
  classF62 = T1;
  (P)YPprop_elt_setter(Ynil,classF62,(P)2);
  (P)YPprop_elt_setter(opts_count_,classF62,(P)1);
  (P)YPprop_elt_setter(opts_location_,classF62,(P)0);
  T0 = classF62;
  return T0;
}

P YPopts_tup_location_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPopts_tup_location(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPopts_tup_count_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPopts_tup_count(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPopts_tup_tup_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPopts_tup_tup(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPopts_tup(P opts_tup_location_,P opts_tup_count_,P opts_tup_tup_) {
  P classF63;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLopts_tupG),(P)3);
  classF63 = T1;
  (P)YPprop_elt_setter(Ynil,classF63,(P)3);
  (P)YPprop_elt_setter(opts_tup_tup_,classF63,(P)2);
  (P)YPprop_elt_setter(opts_tup_count_,classF63,(P)1);
  (P)YPprop_elt_setter(opts_tup_location_,classF63,(P)0);
  T0 = classF63;
  return T0;
}

P YPprop_owner_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPprop_owner(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPprop_getter_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPprop_getter(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPprop_setter_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPprop_setter(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPprop_type_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPprop_type(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPprop_init_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPprop_init(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPPprop(P prop_owner_,P prop_getter_,P prop_setter_,P prop_type_,P prop_init_) {
  P classF64;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLpropG),(P)5);
  classF64 = T1;
  (P)YPprop_elt_setter(Ynil,classF64,(P)5);
  (P)YPprop_elt_setter(prop_init_,classF64,(P)4);
  (P)YPprop_elt_setter(prop_type_,classF64,(P)3);
  (P)YPprop_elt_setter(prop_setter_,classF64,(P)2);
  (P)YPprop_elt_setter(prop_getter_,classF64,(P)1);
  (P)YPprop_elt_setter(prop_owner_,classF64,(P)0);
  T0 = classF64;
  return T0;
}

P YPgen_cache_missableQ_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPgen_cache_missableQ(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPgen_cache_arg_pos_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPgen_cache_arg_pos(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPgen_cache_singletons_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPgen_cache_singletons(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPgen_cache_classes_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPgen_cache_classes(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPgen_cache_count_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPgen_cache_count(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPgen_cache(P gen_cache_missableQ_,P gen_cache_arg_pos_,P gen_cache_singletons_,P gen_cache_classes_,P gen_cache_count_) {
  P classF65;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLgen_cacheG),(P)5);
  classF65 = T1;
  (P)YPprop_elt_setter(Ynil,classF65,(P)5);
  (P)YPprop_elt_setter(gen_cache_count_,classF65,(P)4);
  (P)YPprop_elt_setter(gen_cache_classes_,classF65,(P)3);
  (P)YPprop_elt_setter(gen_cache_singletons_,classF65,(P)2);
  (P)YPprop_elt_setter(gen_cache_arg_pos_,classF65,(P)1);
  (P)YPprop_elt_setter(gen_cache_missableQ_,classF65,(P)0);
  T0 = classF65;
  return T0;
}

P YPgen_code_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPgen_code(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPgen_name_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPgen_name(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPgen_sig_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPgen_sig(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPgen_mets_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPgen_mets(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPfun_cache_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPfun_cache(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPgen_refs_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

INLINE P YPgen_refs(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPgen_src_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)6);
  return T0;
}

INLINE P YPgen_src(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)6);
  return T0;
}

P YPgen(P gen_code_,P gen_name_,P gen_sig_,P gen_mets_,P fun_cache_,P gen_refs_,P gen_src_) {
  P classF66;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPobject_of(VARREF(YLgenG),(P)7);
  classF66 = T1;
  (P)YPprop_elt_setter(Ynil,classF66,(P)7);
  (P)YPprop_elt_setter(gen_src_,classF66,(P)6);
  (P)YPprop_elt_setter(gen_refs_,classF66,(P)5);
  (P)YPprop_elt_setter(fun_cache_,classF66,(P)4);
  (P)YPprop_elt_setter(gen_mets_,classF66,(P)3);
  (P)YPprop_elt_setter(gen_sig_,classF66,(P)2);
  (P)YPprop_elt_setter(gen_name_,classF66,(P)1);
  (P)YPprop_elt_setter(gen_code_,classF66,(P)0);
  T0 = classF66;
  return T0;
}

FUNCODEDEF(YPprop_offset) {
  P owner_,getter_;
  P propF71;
  P xF70;
  P xF69;
  P propsF68;
  P iF67;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  iF67 = (P)0;
  T3 = (P)YPobject_class(owner_);
  T2 = (P)YPclass_props(T3);
  propsF68 = T2;
  for (;;) {
    P a6_0,a6_1;
  loop6:
    T6 = (P)YPemptyQ(propsF68);
    if (T6 != YPfalse) {
      xF69 = YPint((P)-1);
      xF70 = xF69;
      T9 = (P)YPiGG(xF70,(P)2);
      T8 = T9;
      T7 = T8;
      T5 = T7;
    } else {
      T11 = (P)YPhead(propsF68);
      propF71 = T11;
      T15 = (P)YPprop_getter(propF71);
      T14 = (P)YPeqQ(T15,getter_);
      T13 = (P)YPbb(T14);
      if (T13 != YPfalse) {
        T12 = iF67;
      } else {
        T17 = (P)YPiA(iF67,(P)1);
        T18 = (P)YPtail(propsF68);
        a6_0 = T17;
        a6_1 = T18;
        iF67 = a6_0;
        propsF68 = a6_1;
        goto loop6;
        T12 = T16;
      }
      T10 = T12;
      T5 = T10;
    }
    break;
  }
  T4 = T5;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPearly_dispatch) {
  P args_;
  P genF72;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  NARGS(args_, 0);
  T1 = (P)YPfun_reg();
  genF72 = T1;
  T2 = (P)YPcurrent_out_port();
  T3 = (P)YPsu(LITREF(lit_8));
  (P)YPputs(T2,T3);
  T4 = CALL0(1,(P)0);
  T0 = T4;
  QRET(T0);
}

FUNCODEDEF(YPadd_met) {
  P gen_,met_;
  P T0,T1,T2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  T2 = (P)YPgen_mets(gen_);
  T1 = (P)YPpair(met_,T2);
  T0 = (P)YPgen_mets_setter(T1,gen_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPadd_prop) {
  P class_,prop_;
  P T0,T1,T2;
LINK_STACK();
  ARG(class_, 0);
  ARG(prop_, 1);
  T2 = (P)YPclass_direct_props(class_);
  T1 = (P)YPpair(prop_,T2);
  T0 = (P)YPclass_direct_props_setter(T1,class_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_173) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsrc_locG),VARREF(Ysrc_loc_line));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_174) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsrc_locG),VARREF(Ysrc_loc_line));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_175) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_176) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsrc_locG),VARREF(Ysrc_loc_file));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_177) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsrc_locG),VARREF(Ysrc_loc_file));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_178) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_179) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Yhead));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_180) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Yhead));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_181) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_182) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Ytail));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_183) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Ytail));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_184) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_185) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsymG),VARREF(Ysym_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_186) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsymG),VARREF(Ysym_name));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_187) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_188) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_prop_len));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_189) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_prop_len));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_190) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_191) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_192) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_name));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_193) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_194) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_parents));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_195) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_parents));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_196) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_197) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_direct_props));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_198) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_direct_props));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_199) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_200) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_ancestors));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_201) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_ancestors));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_202) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_203) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_props));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_204) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_props));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_205) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_206) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_children));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_207) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_children));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_208) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_209) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_gens));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_210) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_gens));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_211) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_212) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_mets));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_213) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_mets));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_214) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_215) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_forward));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_216) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_forward));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_217) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_218) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_type_cache));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_219) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_type_cache));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_220) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_221) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_id));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_222) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_id));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_223) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)-1));
}

FUNCODEDEF(fun_224) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_row));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_225) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_row));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_226) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_227) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsingletonG),VARREF(Ytype_object));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_228) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsingletonG),VARREF(Ytype_object));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_229) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_230) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsubclassG),VARREF(Ytype_class));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_231) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsubclassG),VARREF(Ytype_class));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_232) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_233) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLunionG),VARREF(Yunion_elts));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_234) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLunionG),VARREF(Yunion_elts));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_235) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_236) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLproductG),VARREF(Yproduct_elts));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_237) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLproductG),VARREF(Yproduct_elts));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_238) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_239) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_owner));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_240) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_owner));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_241) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_242) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_getter));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_243) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_getter));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_244) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_245) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_setter));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_246) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_setter));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_247) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_248) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_type));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_249) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_type));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_250) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_251) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_init));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_252) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_init));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_253) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_254) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = fun_253;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_255) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_256) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_257) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_258) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_259) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_260) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_261) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_262) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_263) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_264) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_265) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_266) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_267) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_names));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_268) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_names));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_269) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_270) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_specs));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_271) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_specs));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_272) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_273) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_naryQ));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_274) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_naryQ));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_275) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_276) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_arity));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_277) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_arity));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_278) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_279) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_val));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_280) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_val));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_281) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

FUNCODEDEF(fun_282) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_unification_vars));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_283) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_unification_vars));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_284) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_285) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_code));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_286) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_code));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_287) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_288) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_289) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_name));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_290) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_291) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_sig));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_292) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_sig));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_293) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_294) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_env));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_295) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_env));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_296) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_297) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_refs));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_298) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_refs));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_299) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_300) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_src));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_301) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_src));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_302) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_303) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_mets));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_304) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_mets));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_305) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_306) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_cache));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_307) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_cache));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_308) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_309) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Ygen_refs));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_310) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Ygen_refs));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_311) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_312) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Ygen_src));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_313) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Ygen_src));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_314) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_315) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_location));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_316) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_location));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_317) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_318) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_count));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_319) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_count));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_320) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_321) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLopts_tupG),VARREF(Yopts_tup_storage));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_322) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLopts_tupG),VARREF(Yopts_tup_storage));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_323) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(YPcollect_direct_props) {
  P class_;
  P parentF73;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(class_, 0);
  T2 = (P)YPclass_parents(class_);
  T1 = (P)YPhead(T2);
  parentF73 = T1;
  T4 = (P)YPclass_props(parentF73);
  T5 = (P)YPclass_direct_props(class_);
  T3 = (P)YPcat2(T4,T5);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPfinalize_propsX) {
  P name_,class_;
  P tF76;
  P xF75;
  P xF74;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(name_, 0);
  ARG(class_, 1);
  (P)YPclass_name_setter(name_,class_);
  T1 = (P)YPclass_direct_props(class_);
  T0 = (P)YPrevX(T1);
  (P)YPclass_direct_props_setter(T0,class_);
  T2 = CALL1(1,VARREF(YPcollect_direct_props),class_);
  (P)YPclass_props_setter(T2,class_);
  T5 = (P)YPclass_props(class_);
  T4 = (P)YPPlen(T5);
  xF74 = T4;
  xF75 = xF74;
  tF76 = (P)1;
  T8 = (P)YPiLL(xF75,(P)2);
  T7 = (P)YPiv(T8,tF76);
  T6 = T7;
  T3 = T6;
  (P)YPclass_prop_len_setter(T3,class_);
UNLINK_STACK();
  QRET(class_);
}

INLINE P YOhead(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPhead(x_);
  return T0;
}

P YOhead_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPhead_setter(z_,x_);
  return T0;
}

INLINE P YOtail(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPtail(x_);
  return T0;
}

P YOtail_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPtail_setter(z_,x_);
  return T0;
}

INLINE P YOE(P x_,P y_) {
  P T0,T1;
DEFCREGS();
  T1 = (P)YPiE(x_,y_);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOL(P x_,P y_) {
  P xF80;
  P xF79;
  P xF78;
  P xF77;
  P T0,T1,T2,T3,T4,T5,T6,T7;
DEFCREGS();
  xF77 = x_;
  xF78 = xF77;
  T4 = (P)YPiGG(xF78,(P)2);
  T3 = T4;
  T2 = T3;
  xF79 = y_;
  xF80 = xF79;
  T7 = (P)YPiGG(xF80,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiL(T2,T5);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOA(P x_,P y_) {
  P tF87;
  P xF86;
  P xF85;
  P xF84;
  P xF83;
  P xF82;
  P xF81;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
  xF81 = x_;
  xF82 = xF81;
  T4 = (P)YPiGG(xF82,(P)2);
  T3 = T4;
  T2 = T3;
  xF83 = y_;
  xF84 = xF83;
  T7 = (P)YPiGG(xF84,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiA(T2,T5);
  xF85 = T1;
  xF86 = xF85;
  tF87 = (P)1;
  T10 = (P)YPiLL(xF86,(P)2);
  T9 = (P)YPiv(T10,tF87);
  T8 = T9;
  T0 = T8;
  return T0;
}

INLINE P YOEE(P x_,P y_) {
  P T0,T1;
DEFCREGS();
  T1 = (P)YPeqQ(x_,y_);
  T0 = (P)YPbb(T1);
  return T0;
}

FUNCODEDEF(YOOEE) {
  P x_,y_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = (P)YPeqQ(x_,y_);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Ynot) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = (P)YPeqQ(x_,YPfalse);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

INLINE P YOnot(P x_) {
  P T0,T1;
DEFCREGS();
  T1 = (P)YPeqQ(x_,YPfalse);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOemptyQ(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPemptyQ(x_);
  return T0;
}

FUNCODEDEF(YOOemptyQ) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPemptyQ(x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOrevX) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPrevX(x_);
UNLINK_STACK();
  RET(T0);
}

P YOlen(P x_) {
  P tF90;
  P xF89;
  P xF88;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  T1 = (P)YPPlen(x_);
  xF88 = T1;
  xF89 = xF88;
  tF90 = (P)1;
  T4 = (P)YPiLL(xF89,(P)2);
  T3 = (P)YPiv(T4,tF90);
  T2 = T3;
  T0 = T2;
  return T0;
}

INLINE P YOoelt(P x_,P i_) {
  P xF92;
  P xF91;
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
  T1 = (P)YPopts_location(x_);
  xF91 = i_;
  xF92 = xF91;
  T5 = (P)YPiGG(xF92,(P)2);
  T4 = T5;
  T3 = T4;
  T2 = (P)YPi_((P)0,T3);
  T0 = (P)YPloc_off(T1,T2);
  return T0;
}

INLINE P YOoelt_setter(P z_,P x_,P i_) {
  P xF94;
  P xF93;
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
  T1 = (P)YPopts_location(x_);
  xF93 = i_;
  xF94 = xF93;
  T5 = (P)YPiGG(xF94,(P)2);
  T4 = T5;
  T3 = T4;
  T2 = (P)YPi_((P)0,T3);
  T0 = (P)YPloc_off_setter(z_,T1,T2);
  return T0;
}

INLINE P YOolen(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPopts_count(x_);
  return T0;
}

FUNCODEDEF(YOallQ) {
  P test_,c_;
  P pF95;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  pF95 = c_;
  for (;;) {
    P a7_0;
  loop7:
    T4 = (P)YOemptyQ(pF95);
    if (T4 != YPfalse) {
      T3 = YPtrue;
    } else {
      T7 = (P)YOhead(pF95);
      T6 = CALL1(0,test_,T7);
      if (T6 != YPfalse) {
        T9 = (P)YOtail(pF95);
        a7_0 = T9;
        pF95 = a7_0;
        goto loop7;
        T5 = T8;
      } else {
        T5 = YPfalse;
      }
      T3 = T5;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOall2Q) {
  P test_,x_,y_;
  P pyF97;
  P pxF96;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  pxF96 = x_;
  pyF97 = y_;
  for (;;) {
    P a8_0,a8_1;
  loop8:
    T4 = (P)YOemptyQ(pxF96);
    if (T4 != YPfalse) {
      T5 = (P)YOemptyQ(pyF97);
      T3 = T5;
    } else {
      T7 = (P)YOemptyQ(pyF97);
      if (T7 != YPfalse) {
        T6 = YPfalse;
      } else {
        T10 = (P)YOhead(pxF96);
        T11 = (P)YOhead(pyF97);
        T9 = CALL2(0,test_,T10,T11);
        if (T9 != YPfalse) {
          T13 = (P)YOtail(pxF96);
          T14 = (P)YOtail(pyF97);
          a8_0 = T13;
          a8_1 = T14;
          pxF96 = a8_0;
          pyF97 = a8_1;
          goto loop8;
          T8 = T12;
        } else {
          T8 = YPfalse;
        }
        T6 = T8;
      }
      T3 = T6;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOelt) {
  P x_,key_;
  P yF103;
  P xF102;
  P yF101;
  P xF100;
  P xF99;
  P countF98;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  check_type(YPint((P)0),VARREF(YLfixnumG));
  countF98 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF99 = x_;
  for (;;) {
    P a9_0,a9_1;
  loop9:
    xF100 = xF99;
    yF101 = Ynil;
    T6 = (P)YPeqQ(xF100,yF101);
    T5 = (P)YPbb(T6);
    T4 = T5;
    if (T4 != YPfalse) {
      T3 = VARREF(Ynul);
    } else {
      xF102 = countF98;
      yF103 = key_;
      T10 = (P)YPiE(xF102,yF103);
      T9 = (P)YPbb(T10);
      T8 = T9;
      if (T8 != YPfalse) {
        T11 = (P)YOhead(xF99);
        T7 = T11;
      } else {
        T13 = (P)YOA(countF98,YPint((P)1));
        T14 = (P)YOtail(xF99);
        a9_0 = T13;
        a9_1 = T14;
        countF98 = a9_0;
        xF99 = a9_1;
        goto loop9;
        T7 = T12;
      }
      T3 = T7;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOfill) {
  P x_,f_;
  P pF104;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(f_, 1);
  pF104 = x_;
  for (;;) {
    P a10_0;
  loop10:
    T4 = (P)YOemptyQ(pF104);
    if (T4 != YPfalse) {
      T3 = x_;
    } else {
      (P)YOhead_setter(f_,pF104);
      T6 = (P)YOtail(pF104);
      a10_0 = T6;
      pF104 = a10_0;
      goto loop10;
      T3 = T5;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOanyQ) {
  P test_,c_;
  P tmpF106;
  P pF105;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  pF105 = c_;
  for (;;) {
    P a11_0;
  loop11:
    T4 = (P)YOemptyQ(pF105);
    if (T4 != YPfalse) {
      T3 = YPfalse;
    } else {
      T7 = (P)YOhead(pF105);
      T6 = CALL1(0,test_,T7);
      tmpF106 = T6;
      if (tmpF106 != YPfalse) {
        T8 = tmpF106;
      } else {
        T10 = (P)YOtail(pF105);
        a11_0 = T10;
        pF105 = a11_0;
        goto loop11;
        T8 = T9;
      }
      T5 = T8;
      T3 = T5;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

P YOpair(P h_,P t_) {
  P T0;
DEFCREGS();
  T0 = (P)YPpair(h_,t_);
  return T0;
}

P YOadd(P c_,P e_) {
  P T0;
DEFCREGS();
  T0 = (P)YOpair(e_,c_);
  return T0;
}

P YOadd_new(P c_,P e_) {
  P T0,T1,T2;
DEFCREGS();
  T1 = XCALL2(1,VARREF(YOmemQ),c_,e_);
  if (T1 != YPfalse) {
    T0 = c_;
  } else {
    T2 = (P)YOpair(e_,c_);
    T0 = T2;
  }
  return T0;
}

FUNCODEDEF(YOmap) {
  P f_,x_;
  P resF108;
  P xF107;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  xF107 = x_;
  resF108 = Ynil;
  for (;;) {
    P a12_0,a12_1;
  loop12:
    T4 = (P)YOemptyQ(xF107);
    if (T4 != YPfalse) {
      T5 = CALL1(1,VARREF(YOrevX),resF108);
      T3 = T5;
    } else {
      T7 = (P)YOtail(xF107);
      T10 = (P)YOhead(xF107);
      T9 = CALL1(1,f_,T10);
      T8 = (P)YOpair(T9,resF108);
      a12_0 = T7;
      a12_1 = T8;
      xF107 = a12_0;
      resF108 = a12_1;
      goto loop12;
      T3 = T6;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOpick) {
  P f_,x_;
  P hF111;
  P resF110;
  P xF109;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  xF109 = x_;
  resF110 = Ynil;
  for (;;) {
    P a13_0,a13_1;
  loop13:
    T4 = (P)YOemptyQ(xF109);
    if (T4 != YPfalse) {
      T5 = CALL1(1,VARREF(YOrevX),resF110);
      T3 = T5;
    } else {
      T7 = (P)YOhead(xF109);
      hF111 = T7;
      T9 = (P)YOtail(xF109);
      T11 = CALL1(1,f_,hF111);
      if (T11 != YPfalse) {
        T12 = (P)YOpair(hF111,resF110);
        T10 = T12;
      } else {
        T10 = resF110;
      }
      a13_0 = T9;
      a13_1 = T10;
      xF109 = a13_0;
      resF110 = a13_1;
      goto loop13;
      T6 = T8;
      T3 = T6;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOdo) {
  P f_,x_;
  P xF112;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  xF112 = x_;
  for (;;) {
    P a14_0;
  loop14:
    T4 = (P)YOemptyQ(xF112);
    if (T4 != YPfalse) {
      T3 = YPfalse;
    } else {
      T5 = (P)YOhead(xF112);
      CALL1(0,f_,T5);
      T7 = (P)YOtail(xF112);
      a14_0 = T7;
      xF112 = a14_0;
      goto loop14;
      T3 = T6;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOalter) {
  P dst_,src_;
  P tmpF115;
  P ssF114;
  P dsF113;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  dsF113 = dst_;
  ssF114 = src_;
  for (;;) {
    P a15_0,a15_1;
  loop15:
    T5 = (P)YOemptyQ(dsF113);
    tmpF115 = T5;
    if (tmpF115 != YPfalse) {
      T6 = tmpF115;
    } else {
      T7 = (P)YOemptyQ(ssF114);
      T6 = T7;
    }
    T4 = T6;
    if (T4 != YPfalse) {
      T3 = dst_;
    } else {
      T8 = (P)YOhead(ssF114);
      (P)YOhead_setter(T8,dsF113);
      T10 = (P)YOtail(dsF113);
      T11 = (P)YOtail(ssF114);
      a15_0 = T10;
      a15_1 = T11;
      dsF113 = a15_0;
      ssF114 = a15_1;
      goto loop15;
      T3 = T9;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfab) {
  P x_,s_;
  P xF123;
  P xF122;
  P xF121;
  P xF120;
  P yF119;
  P xF118;
  P resF117;
  P iF116;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  check_type(s_,VARREF(YLfixnumG));
  iF116 = s_;
  check_type(Ynil,VARREF(YLlstG));
  resF117 = Ynil;
  for (;;) {
    P a16_0,a16_1;
  loop16:
    xF118 = iF116;
    yF119 = YPint((P)0);
    xF120 = xF118;
    xF121 = xF120;
    T9 = (P)YPiGG(xF121,(P)2);
    T8 = T9;
    T7 = T8;
    xF122 = yF119;
    xF123 = xF122;
    T12 = (P)YPiGG(xF123,(P)2);
    T11 = T12;
    T10 = T11;
    T6 = (P)YPiL(T7,T10);
    T5 = (P)YPbb(T6);
    T4 = T5;
    if (T4 != YPfalse) {
      T3 = resF117;
    } else {
      T14 = (P)YOA(iF116,YPint((P)-1));
      T15 = (P)YOpair(VARREF(Ynul),resF117);
      a16_0 = T14;
      a16_1 = T15;
      iF116 = a16_0;
      resF117 = a16_1;
      goto loop16;
      T3 = T13;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfold) {
  P combine_,init_,c_;
  P cF125;
  P resF124;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
  resF124 = init_;
  cF125 = c_;
  for (;;) {
    P a17_0,a17_1;
  loop17:
    T4 = (P)YOemptyQ(cF125);
    if (T4 != YPfalse) {
      T3 = resF124;
    } else {
      T7 = (P)YOhead(cF125);
      T6 = CALL2(0,combine_,resF124,T7);
      T8 = (P)YOtail(cF125);
      a17_0 = T6;
      a17_1 = T8;
      resF124 = a17_0;
      cF125 = a17_1;
      goto loop17;
      T3 = T5;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOrev) {
  P x_;
  P rF127;
  P lF126;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  lF126 = x_;
  rF127 = Ynil;
  for (;;) {
    P a18_0,a18_1;
  loop18:
    T4 = (P)YOemptyQ(lF126);
    if (T4 != YPfalse) {
      T3 = rF127;
    } else {
      T6 = (P)YOtail(lF126);
      T8 = (P)YOhead(lF126);
      T7 = (P)YOpair(T8,rF127);
      a18_0 = T6;
      a18_1 = T7;
      lF126 = a18_0;
      rF127 = a18_1;
      goto loop18;
      T3 = T5;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOcat2) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = (P)YPcat2(x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfind) {
  P f_,c_;
  P iF129;
  P cF128;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  cF128 = c_;
  iF129 = YPint((P)0);
  for (;;) {
    P a19_0,a19_1;
  loop19:
    T4 = (P)YOemptyQ(cF128);
    if (T4 != YPfalse) {
      T3 = VARREF(Ynul);
    } else {
      T7 = (P)YOhead(cF128);
      T6 = CALL1(1,f_,T7);
      if (T6 != YPfalse) {
        T5 = iF129;
      } else {
        T9 = (P)YOtail(cF128);
        T10 = (P)YOA(iF129,YPint((P)1));
        a19_0 = T9;
        a19_1 = T10;
        cF128 = a19_0;
        iF129 = a19_1;
        goto loop19;
        T5 = T8;
      }
      T3 = T5;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_361) {
  P y_;
  P yF131;
  P xF130;
  P T0,T1,T2;
LINK_STACK();
  ARG(y_, 0);
  xF130 = FREEREF(0);
  yF131 = y_;
  T2 = (P)YPeqQ(xF130,yF131);
  T1 = (P)YPbb(T2);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmemQ) {
  P c_,x_;
  P yF133;
  P xF132;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T3 = FUNFAB(fun_361,1,x_);
  T2 = CALL2(1,VARREF(YOfind),T3,c_);
  xF132 = T2;
  yF133 = VARREF(Ynul);
  T5 = (P)YPeqQ(xF132,yF133);
  T4 = (P)YPbb(T5);
  T1 = T4;
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_363) {
  P s_,e_;
  P T0,T1,T2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
  T1 = CALL2(1,VARREF(YOmemQ),s_,e_);
  if (T1 != YPfalse) {
    T0 = s_;
  } else {
    T2 = (P)YOpair(e_,s_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOdel_dups) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = fun_363;
  T1 = CALL3(1,VARREF(YOfold),T2,Ynil,x_);
  T0 = CALL1(1,VARREF(YOrevX),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOlst_helper) {
  P objects_,i_,l_;
  P xF139;
  P xF138;
  P iF137;
  P xF136;
  P yF135;
  P xF134;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(objects_, 0);
  ARG(i_, 1);
  ARG(l_, 2);
  xF134 = i_;
  yF135 = YPint((P)-1);
  T3 = (P)YPeqQ(xF134,yF135);
  T2 = (P)YPbb(T3);
  T1 = T2;
  if (T1 != YPfalse) {
    T0 = l_;
  } else {
    T5 = (P)YOA(i_,YPint((P)-1));
    xF136 = objects_;
    iF137 = i_;
    T9 = (P)YPopts_location(xF136);
    xF138 = iF137;
    xF139 = xF138;
    T13 = (P)YPiGG(xF139,(P)2);
    T12 = T13;
    T11 = T12;
    T10 = (P)YPi_((P)0,T11);
    T8 = (P)YPloc_off(T9,T10);
    T7 = T8;
    T6 = (P)YOpair(T7,l_);
    T4 = CALL3(1,VARREF(YOlst_helper),objects_,T5,T6);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOopts_as_lst) {
  P x_;
  P xF140;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  xF140 = x_;
  T3 = (P)YPopts_count(xF140);
  T2 = T3;
  T1 = (P)YOA(T2,YPint((P)-1));
  T0 = CALL3(1,VARREF(YOlst_helper),x_,T1,Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOlst) {
  P objects_;
  P xF141;
  P T0,T1,T2,T3;
LINK_STACK();
  NARGS(objects_, 0);
  xF141 = objects_;
  T3 = (P)YPopts_count(xF141);
  T2 = T3;
  T1 = (P)YOA(T2,YPint((P)-1));
  T0 = CALL3(1,VARREF(YOlst_helper),objects_,T1,Ynil);
UNLINK_STACK();
  QRET(T0);
}

INLINE P YOtlen(P x_) {
  P tF144;
  P xF143;
  P xF142;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  T1 = (P)YPtlen(x_);
  xF142 = T1;
  xF143 = xF142;
  tF144 = (P)1;
  T4 = (P)YPiLL(xF143,(P)2);
  T3 = (P)YPiv(T4,tF144);
  T2 = T3;
  T0 = T2;
  return T0;
}

INLINE P YOtelt(P x_,P i_) {
  P xF146;
  P xF145;
  P T0,T1,T2,T3;
DEFCREGS();
  xF145 = i_;
  xF146 = xF145;
  T3 = (P)YPiGG(xF146,(P)2);
  T2 = T3;
  T1 = T2;
  T0 = (P)YPtelt(x_,T1);
  return T0;
}

INLINE P YOtelt_setter(P z_,P x_,P i_) {
  P xF148;
  P xF147;
  P T0,T1,T2,T3;
DEFCREGS();
  xF147 = i_;
  xF148 = xF147;
  T3 = (P)YPiGG(xF148,(P)2);
  T2 = T3;
  T1 = T2;
  T0 = (P)YPtelt_setter(z_,x_,T1);
  return T0;
}

FUNCODEDEF(YOtanyQ) {
  P test_,c_;
  P tmpF156;
  P xF155;
  P xF154;
  P xF153;
  P xF152;
  P yF151;
  P xF150;
  P iF149;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  T3 = (P)YOtlen(c_);
  T2 = (P)YOA(T3,YPint((P)-1));
  iF149 = T2;
  for (;;) {
    P a20_0;
  loop20:
    xF150 = iF149;
    yF151 = YPint((P)0);
    xF152 = xF150;
    xF153 = xF152;
    T11 = (P)YPiGG(xF153,(P)2);
    T10 = T11;
    T9 = T10;
    xF154 = yF151;
    xF155 = xF154;
    T14 = (P)YPiGG(xF155,(P)2);
    T13 = T14;
    T12 = T13;
    T8 = (P)YPiL(T9,T12);
    T7 = (P)YPbb(T8);
    T6 = T7;
    if (T6 != YPfalse) {
      T5 = YPfalse;
    } else {
      T17 = (P)YOtelt(c_,iF149);
      T16 = CALL1(0,test_,T17);
      tmpF156 = T16;
      if (tmpF156 != YPfalse) {
        T18 = tmpF156;
      } else {
        T20 = (P)YOA(iF149,YPint((P)-1));
        a20_0 = T20;
        iF149 = a20_0;
        goto loop20;
        T18 = T19;
      }
      T15 = T18;
      T5 = T15;
    }
    break;
  }
  T4 = T5;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOtall2Q) {
  P test_,c1_,c2_;
  P tmpF168;
  P tmpF167;
  P xF166;
  P xF165;
  P xF164;
  P xF163;
  P yF162;
  P xF161;
  P iF160;
  P tmpF159;
  P yF158;
  P xF157;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(test_, 0);
  ARG(c1_, 1);
  ARG(c2_, 2);
  T2 = (P)YOtlen(c1_);
  xF157 = T2;
  T3 = (P)YOtlen(c2_);
  yF158 = T3;
  T5 = (P)YPeqQ(xF157,yF158);
  T4 = (P)YPbb(T5);
  T1 = T4;
  tmpF159 = T1;
  if (tmpF159 != YPfalse) {
    T9 = (P)YOtlen(c1_);
    T8 = (P)YOA(T9,YPint((P)-1));
    iF160 = T8;
    for (;;) {
      P a21_0;
    loop21:
      xF161 = iF160;
      yF162 = YPint((P)0);
      xF163 = xF161;
      xF164 = xF163;
      T17 = (P)YPiGG(xF164,(P)2);
      T16 = T17;
      T15 = T16;
      xF165 = yF162;
      xF166 = xF165;
      T20 = (P)YPiGG(xF166,(P)2);
      T19 = T20;
      T18 = T19;
      T14 = (P)YPiL(T15,T18);
      T13 = (P)YPbb(T14);
      T12 = T13;
      tmpF167 = T12;
      if (tmpF167 != YPfalse) {
        T21 = tmpF167;
      } else {
        T24 = (P)YOtelt(c1_,iF160);
        T25 = (P)YOtelt(c2_,iF160);
        T23 = CALL2(1,test_,T24,T25);
        tmpF168 = T23;
        if (tmpF168 != YPfalse) {
          T28 = (P)YOA(iF160,YPint((P)-1));
          a21_0 = T28;
          iF160 = a21_0;
          goto loop21;
          T26 = T27;
        } else {
          T26 = YPfalse;
        }
        T22 = T26;
        T21 = T22;
      }
      T11 = T21;
      break;
    }
    T10 = T11;
    T7 = T10;
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T0 = T6;
UNLINK_STACK();
  RET(T0);
}

INLINE P YPto_tup(P args_) {
  P xF190;
  P xF189;
  P iF188;
  P xF187;
  P yF186;
  P xF185;
  P kF184;
  P xF183;
  P xF182;
  P iF181;
  P xF180;
  P xF179;
  P xF178;
  P iF177;
  P xF176;
  P yF175;
  P xF174;
  P tF173;
  P xF172;
  P xF171;
  P lF170;
  P xF169;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
DEFCREGS();
  xF169 = args_;
  T2 = (P)YPopts_count(xF169);
  T1 = T2;
  lF170 = T1;
  xF171 = lF170;
  xF172 = xF171;
  T7 = (P)YPiGG(xF172,(P)2);
  T6 = T7;
  T5 = T6;
  T4 = (P)YPtup(T5,VARREF(Ynul));
  tF173 = T4;
  xF174 = lF170;
  yF175 = YPint((P)2);
  T10 = (P)YPiE(xF174,yF175);
  T9 = (P)YPbb(T10);
  T8 = T9;
  if (T8 != YPfalse) {
    xF176 = args_;
    iF177 = YPint((P)0);
    T13 = (P)YPopts_location(xF176);
    xF178 = iF177;
    xF179 = xF178;
    T17 = (P)YPiGG(xF179,(P)2);
    T16 = T17;
    T15 = T16;
    T14 = (P)YPi_((P)0,T15);
    T12 = (P)YPloc_off(T13,T14);
    T11 = T12;
    (P)YOtelt_setter(T11,tF173,YPint((P)0));
    xF180 = args_;
    iF181 = YPint((P)1);
    T21 = (P)YPopts_location(xF180);
    xF182 = iF181;
    xF183 = xF182;
    T25 = (P)YPiGG(xF183,(P)2);
    T24 = T25;
    T23 = T24;
    T22 = (P)YPi_((P)0,T23);
    T20 = (P)YPloc_off(T21,T22);
    T19 = T20;
    T18 = (P)YOtelt_setter(T19,tF173,YPint((P)1));
  } else {
    T27 = (P)YOA(lF170,YPint((P)-1));
    kF184 = T27;
    for (;;) {
      P a22_0;
    loop22:
      xF185 = kF184;
      yF186 = YPint((P)-1);
      T33 = (P)YPiE(xF185,yF186);
      T32 = (P)YPbb(T33);
      T31 = T32;
      T30 = XCALL1(1,VARREF(Ynot),T31);
      if (T30 != YPfalse) {
        xF187 = args_;
        iF188 = kF184;
        T36 = (P)YPopts_location(xF187);
        xF189 = iF188;
        xF190 = xF189;
        T40 = (P)YPiGG(xF190,(P)2);
        T39 = T40;
        T38 = T39;
        T37 = (P)YPi_((P)0,T38);
        T35 = (P)YPloc_off(T36,T37);
        T34 = T35;
        (P)YOtelt_setter(T34,tF173,kF184);
        T42 = (P)YOA(kF184,YPint((P)-1));
        a22_0 = T42;
        kF184 = a22_0;
        goto loop22;
        T29 = T41;
      } else {
        T29 = YPfalse;
      }
      break;
    }
    T28 = T29;
    T26 = T28;
  }
  T3 = tF173;
  T0 = T3;
  return T0;
}

FUNCODEDEF(YOtup) {
  P args_;
  P T0;
LINK_STACK();
  NARGS(args_, 0);
  T0 = (P)YPto_tup(args_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOfun_names) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_names(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfun_specs) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_specs(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfun_naryQ) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_naryQ(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfun_arity) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_arity(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfun_val) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_val(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOfun_unification_vars) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_unification_vars(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfun_mets) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPgen_mets(x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfun_mets_setter) {
  P z_,x_;
  P T0;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T0 = (P)YPgen_mets_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_spec) {
  P x_,i_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  T1 = CALL1(1,VARREF(YOfun_specs),x_);
  T0 = CALL2(1,VARREF(YOelt),T1,i_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_same_metQ) {
  P x_,y_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(YOfun_specs),x_);
  T2 = CALL1(1,VARREF(YOfun_specs),y_);
  T0 = CALL3(1,VARREF(YOall2Q),VARREF(YOOEE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yfun_congruentQ) {
  P x_,y_;
  P tmpF197;
  P tmpF196;
  P yF195;
  P xF194;
  P tmpF193;
  P yF192;
  P xF191;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T2 = CALL1(1,VARREF(YOfun_arity),x_);
  xF191 = T2;
  T3 = CALL1(1,VARREF(YOfun_arity),y_);
  yF192 = T3;
  T5 = (P)YPiE(xF191,yF192);
  T4 = (P)YPbb(T5);
  T1 = T4;
  tmpF193 = T1;
  if (tmpF193 != YPfalse) {
    T9 = CALL1(1,VARREF(YOfun_naryQ),x_);
    xF194 = T9;
    T10 = CALL1(1,VARREF(YOfun_naryQ),y_);
    yF195 = T10;
    T12 = (P)YPeqQ(xF194,yF195);
    T11 = (P)YPbb(T12);
    T8 = T11;
    tmpF196 = T8;
    if (tmpF196 != YPfalse) {
      T16 = CALL1(1,VARREF(YOfun_specs),x_);
      T17 = CALL1(1,VARREF(YOfun_specs),y_);
      T15 = CALL3(1,VARREF(YOall2Q),VARREF(YOsubtypeQ),T16,T17);
      tmpF197 = T15;
      if (tmpF197 != YPfalse) {
        T20 = CALL1(1,VARREF(YOfun_val),x_);
        T21 = CALL1(1,VARREF(YOfun_val),y_);
        T19 = CALL2(1,VARREF(YOsubtypeQ),T20,T21);
        T18 = T19;
      } else {
        T18 = YPfalse;
      }
      T14 = T18;
      T13 = T14;
    } else {
      T13 = YPfalse;
    }
    T7 = T13;
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T0 = T6;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_386) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_387) {
  P c_,r_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  T2 = CALL1(1,VARREF(Ygen_from_met),FREEREF(0));
  T1 = CALL2(1,VARREF(Ygen_add_met),T2,FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_388) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(Yincongruent_method_error),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_389) {
  P return_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(return_, 0);
  T2 = CALL2(1,VARREF(Ylst),FREEREF(0),FREEREF(1));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_383),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_386;
  T4 = FUNFAB(fun_387,2,FREEREF(1),return_);
  T5 = FUNFAB(fun_388,2,FREEREF(0),FREEREF(1));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YLreplace_generic_restartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ygen_add_met) {
  P g_,m_;
  P tmpF209;
  P now_sameQF208;
  P gmF207;
  P gmsF206;
  P sameQF205;
  P metsF204;
  P spec_classF203;
  P yF202;
  P xF201;
  P tmpF200;
  P specF199;
  P specsF198;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
LINK_STACK();
  ARG(g_, 0);
  ARG(m_, 1);
  (P)YPfun_cache_setter(YPfalse,g_);
  T2 = CALL2(1,VARREF(Yfun_congruentQ),m_,g_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    if (VARREF(YTrestarts_okQT) != YPfalse) {
      T5 = FUNFAB(fun_389,2,g_,m_);
      T4 = with_exit(T5);
      T3 = T4;
    } else {
      T6 = CALL2(1,VARREF(Yincongruent_method_error),g_,m_);
      T3 = T6;
    }
    T0 = T3;
  } else {
    T7 = CALL1(1,VARREF(YOfun_specs),m_);
    specsF198 = T7;
    for (;;) {
      P a23_0;
    loop23:
      T11 = (P)YOemptyQ(specsF198);
      T10 = CALL1(1,VARREF(Ynot),T11);
      if (T10 != YPfalse) {
        T13 = (P)YOhead(specsF198);
        specF199 = T13;
        T17 = CALL1(1,VARREF(YOsingleton_specQ),specF199);
        tmpF200 = T17;
        if (tmpF200 != YPfalse) {
          T18 = tmpF200;
        } else {
          xF201 = specF199;
          yF202 = VARREF(YLanyG);
          T21 = (P)YPeqQ(xF201,yF202);
          T20 = (P)YPbb(T21);
          T19 = T20;
          T18 = T19;
        }
        T16 = T18;
        T15 = CALL1(1,VARREF(Ynot),T16);
        if (T15 != YPfalse) {
          T23 = (P)YPobject_class(specF199);
          spec_classF203 = T23;
          T25 = (P)YPclass_gens(spec_classF203);
          T24 = (P)YOadd_new(T25,g_);
          (P)YPclass_gens_setter(T24,spec_classF203);
          T27 = (P)YPclass_mets(spec_classF203);
          T26 = (P)YOadd_new(T27,m_);
          (P)YPclass_mets_setter(T26,spec_classF203);
          T29 = (P)YOtail(specsF198);
          a23_0 = T29;
          specsF198 = a23_0;
          goto loop23;
          T22 = T28;
          T14 = T22;
        } else {
          T14 = YPfalse;
        }
        T12 = T14;
        T9 = T12;
      } else {
        T9 = YPfalse;
      }
      break;
    }
    T8 = T9;
    metsF204 = Ynil;
    sameQF205 = YPfalse;
    T30 = CALL1(1,VARREF(YOfun_mets),g_);
    check_type(T30,VARREF(YLmetsG));
    gmsF206 = T30;
    for (;;) {
      P a24_0,a24_1,a24_2;
    loop24:
      T33 = (P)YOemptyQ(gmsF206);
      if (T33 != YPfalse) {
        if (sameQF205 != YPfalse) {
          T36 = metsF204;
        } else {
          T37 = (P)YOadd(metsF204,m_);
          T36 = T37;
        }
        T35 = CALL1(1,VARREF(YOrevX),T36);
        T34 = (P)YPgen_mets_setter(T35,g_);
        T32 = T34;
      } else {
        T39 = (P)YOhead(gmsF206);
        gmF207 = T39;
        T41 = CALL2(1,VARREF(Yfun_same_metQ),gmF207,m_);
        now_sameQF208 = T41;
        if (now_sameQF208 != YPfalse) {
          T44 = m_;
        } else {
          T44 = gmF207;
        }
        T43 = (P)YOadd(metsF204,T44);
        tmpF209 = now_sameQF208;
        if (tmpF209 != YPfalse) {
          T46 = tmpF209;
        } else {
          T46 = sameQF205;
        }
        T45 = T46;
        T47 = (P)YOtail(gmsF206);
        a24_0 = T43;
        a24_1 = T45;
        a24_2 = T47;
        metsF204 = a24_0;
        sameQF205 = a24_1;
        gmsF206 = a24_2;
        goto loop24;
        T40 = T42;
        T38 = T40;
        T32 = T38;
      }
      break;
    }
    T31 = T32;
    T0 = g_;
  }
UNLINK_STACK();
  RET(T0);
}

INLINE P YOsubclassQ(P c1_,P c2_) {
  P xF213;
  P xF212;
  P xF211;
  P xF210;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
  T3 = (P)YPclass_row(c1_);
  T5 = (P)YPclass_id(c2_);
  xF210 = T5;
  xF211 = xF210;
  T7 = (P)YPiGG(xF211,(P)2);
  T6 = T7;
  T4 = T6;
  T2 = (P)YPselt(T3,T4);
  xF212 = YPint((P)1);
  xF213 = xF212;
  T10 = (P)YPiGG(xF213,(P)2);
  T9 = T10;
  T8 = T9;
  T1 = (P)YPiE(T2,T8);
  T0 = (P)YPbb(T1);
  return T0;
}

P YOclass_isaQ(P o_,P c_) {
  P xF222;
  P xF221;
  P xF220;
  P xF219;
  P c2F218;
  P c1F217;
  P tagF216;
  P xF215;
  P xF214;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
DEFCREGS();
  xF214 = o_;
  xF215 = xF214;
  T4 = (P)YPiB(xF215,(P)3);
  T3 = T4;
  tagF216 = T3;
  T7 = (P)YPiE(tagF216,(P)0);
  T6 = (P)YPbb(T7);
  if (T6 != YPfalse) {
    T8 = (P)YPobject_class(xF214);
    T5 = T8;
  } else {
    T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF216);
    T5 = T9;
  }
  T2 = T5;
  T1 = T2;
  c1F217 = T1;
  c2F218 = c_;
  T13 = (P)YPclass_row(c1F217);
  T15 = (P)YPclass_id(c2F218);
  xF219 = T15;
  xF220 = xF219;
  T17 = (P)YPiGG(xF220,(P)2);
  T16 = T17;
  T14 = T16;
  T12 = (P)YPselt(T13,T14);
  xF221 = YPint((P)1);
  xF222 = xF221;
  T20 = (P)YPiGG(xF222,(P)2);
  T19 = T20;
  T18 = T19;
  T11 = (P)YPiE(T12,T18);
  T10 = (P)YPbb(T11);
  T0 = T10;
  return T0;
}

P YOsingleton_isaQ(P o_,P t_) {
  P yF224;
  P xF223;
  P T0,T1,T2,T3;
DEFCREGS();
  T1 = (P)YPtype_object(t_);
  xF223 = T1;
  yF224 = o_;
  T3 = (P)YPeqQ(xF223,yF224);
  T2 = (P)YPbb(T3);
  T0 = T2;
  return T0;
}

FUNCODEDEF(YOisaQ) {
  P o_,t_;
  P yF229;
  P xF228;
  P tagF227;
  P xF226;
  P xF225;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  xF225 = t_;
  xF226 = xF225;
  T5 = (P)YPiB(xF226,(P)3);
  T4 = T5;
  tagF227 = T4;
  T8 = (P)YPiE(tagF227,(P)0);
  T7 = (P)YPbb(T8);
  if (T7 != YPfalse) {
    T9 = (P)YPobject_class(xF225);
    T6 = T9;
  } else {
    T10 = (P)YPelt(VARREF(YDdirect_object_class),tagF227);
    T6 = T10;
  }
  T3 = T6;
  T2 = T3;
  xF228 = T2;
  yF229 = VARREF(YLclassG);
  T12 = (P)YPeqQ(xF228,yF229);
  T11 = (P)YPbb(T12);
  T1 = T11;
  if (T1 != YPfalse) {
    T13 = (P)YOclass_isaQ(o_,t_);
    T0 = T13;
  } else {
    T14 = CALL2(1,VARREF(YisaQ),o_,t_);
    T0 = T14;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOclassL) {
  P c1_,c2_,wrt_;
  P yF235;
  P xF234;
  P yF233;
  P xF232;
  P cF231;
  P psF230;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  ARG(wrt_, 2);
  T2 = (P)YPclass_ancestors(wrt_);
  psF230 = T2;
  for (;;) {
    P a25_0;
  loop25:
    T5 = (P)YOemptyQ(psF230);
    if (T5 != YPfalse) {
      T6 = CALL5(1,VARREF(Ycpl_error),LITREF(lit_390),LITREF(lit_391),wrt_,c1_,c2_);
      T4 = T6;
    } else {
      T8 = (P)YOhead(psF230);
      cF231 = T8;
      xF232 = cF231;
      yF233 = c1_;
      T12 = (P)YPeqQ(xF232,yF233);
      T11 = (P)YPbb(T12);
      T10 = T11;
      if (T10 != YPfalse) {
        T9 = YPtrue;
      } else {
        xF234 = cF231;
        yF235 = c2_;
        T16 = (P)YPeqQ(xF234,yF235);
        T15 = (P)YPbb(T16);
        T14 = T15;
        if (T14 != YPfalse) {
          T13 = YPfalse;
        } else {
          T18 = (P)YOtail(psF230);
          a25_0 = T18;
          psF230 = a25_0;
          goto loop25;
          T13 = T17;
        }
        T9 = T13;
      }
      T7 = T9;
      T4 = T7;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YtT) {
  P args_;
  P T0,T1;
LINK_STACK();
  NARGS(args_, 0);
  T1 = (P)YPto_tup(args_);
  T0 = (P)YPproduct(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOtype_equalQ) {
  P t1_,t2_;
  P tmpF251;
  P tmpF250;
  P yF249;
  P xF248;
  P tagF247;
  P xF246;
  P xF245;
  P tmpF244;
  P yF243;
  P xF242;
  P tagF241;
  P xF240;
  P xF239;
  P tmpF238;
  P yF237;
  P xF236;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF236 = t1_;
  yF237 = t2_;
  T3 = (P)YPeqQ(xF236,yF237);
  T2 = (P)YPbb(T3);
  T1 = T2;
  tmpF238 = T1;
  if (tmpF238 != YPfalse) {
    T4 = tmpF238;
  } else {
    xF239 = t1_;
    xF240 = xF239;
    T11 = (P)YPiB(xF240,(P)3);
    T10 = T11;
    tagF241 = T10;
    T14 = (P)YPiE(tagF241,(P)0);
    T13 = (P)YPbb(T14);
    if (T13 != YPfalse) {
      T15 = (P)YPobject_class(xF239);
      T12 = T15;
    } else {
      T16 = (P)YPelt(VARREF(YDdirect_object_class),tagF241);
      T12 = T16;
    }
    T9 = T12;
    T8 = T9;
    xF242 = T8;
    yF243 = VARREF(YLclassG);
    T18 = (P)YPeqQ(xF242,yF243);
    T17 = (P)YPbb(T18);
    T7 = T17;
    T6 = CALL1(1,VARREF(Ynot),T7);
    tmpF244 = T6;
    if (tmpF244 != YPfalse) {
      xF245 = t2_;
      xF246 = xF245;
      T26 = (P)YPiB(xF246,(P)3);
      T25 = T26;
      tagF247 = T25;
      T29 = (P)YPiE(tagF247,(P)0);
      T28 = (P)YPbb(T29);
      if (T28 != YPfalse) {
        T30 = (P)YPobject_class(xF245);
        T27 = T30;
      } else {
        T31 = (P)YPelt(VARREF(YDdirect_object_class),tagF247);
        T27 = T31;
      }
      T24 = T27;
      T23 = T24;
      xF248 = T23;
      yF249 = VARREF(YLclassG);
      T33 = (P)YPeqQ(xF248,yF249);
      T32 = (P)YPbb(T33);
      T22 = T32;
      T21 = CALL1(1,VARREF(Ynot),T22);
      tmpF250 = T21;
      if (tmpF250 != YPfalse) {
        T36 = CALL2(1,VARREF(YOsubtypeQ),t1_,t2_);
        tmpF251 = T36;
        if (tmpF251 != YPfalse) {
          T38 = CALL2(1,VARREF(YOsubtypeQ),t2_,t1_);
          T37 = T38;
        } else {
          T37 = YPfalse;
        }
        T35 = T37;
        T34 = T35;
      } else {
        T34 = YPfalse;
      }
      T20 = T34;
      T19 = T20;
    } else {
      T19 = YPfalse;
    }
    T5 = T19;
    T4 = T5;
  }
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOsubtypeQ) {
  P t1_,t2_;
  P xF268;
  P xF267;
  P xF266;
  P xF265;
  P c2F264;
  P c1F263;
  P yF262;
  P xF261;
  P tagF260;
  P xF259;
  P xF258;
  P tmpF257;
  P yF256;
  P xF255;
  P tagF254;
  P xF253;
  P xF252;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF252 = t2_;
  xF253 = xF252;
  T6 = (P)YPiB(xF253,(P)3);
  T5 = T6;
  tagF254 = T5;
  T9 = (P)YPiE(tagF254,(P)0);
  T8 = (P)YPbb(T9);
  if (T8 != YPfalse) {
    T10 = (P)YPobject_class(xF252);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF254);
    T7 = T11;
  }
  T4 = T7;
  T3 = T4;
  xF255 = T3;
  yF256 = VARREF(YLclassG);
  T13 = (P)YPeqQ(xF255,yF256);
  T12 = (P)YPbb(T13);
  T2 = T12;
  tmpF257 = T2;
  if (tmpF257 != YPfalse) {
    xF258 = t1_;
    xF259 = xF258;
    T19 = (P)YPiB(xF259,(P)3);
    T18 = T19;
    tagF260 = T18;
    T22 = (P)YPiE(tagF260,(P)0);
    T21 = (P)YPbb(T22);
    if (T21 != YPfalse) {
      T23 = (P)YPobject_class(xF258);
      T20 = T23;
    } else {
      T24 = (P)YPelt(VARREF(YDdirect_object_class),tagF260);
      T20 = T24;
    }
    T17 = T20;
    T16 = T17;
    xF261 = T16;
    yF262 = VARREF(YLclassG);
    T26 = (P)YPeqQ(xF261,yF262);
    T25 = (P)YPbb(T26);
    T15 = T25;
    T14 = T15;
  } else {
    T14 = YPfalse;
  }
  T1 = T14;
  if (T1 != YPfalse) {
    c1F263 = t1_;
    c2F264 = t2_;
    T31 = (P)YPclass_row(c1F263);
    T33 = (P)YPclass_id(c2F264);
    xF265 = T33;
    xF266 = xF265;
    T35 = (P)YPiGG(xF266,(P)2);
    T34 = T35;
    T32 = T34;
    T30 = (P)YPselt(T31,T32);
    xF267 = YPint((P)1);
    xF268 = xF267;
    T38 = (P)YPiGG(xF268,(P)2);
    T37 = T38;
    T36 = T37;
    T29 = (P)YPiE(T30,T36);
    T28 = (P)YPbb(T29);
    T27 = T28;
    T0 = T27;
  } else {
    T39 = CALL2(1,VARREF(YsubtypeQ),t1_,t2_);
    T0 = T39;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOmay_isaQ) {
  P c_,t_;
  P xF279;
  P xF278;
  P xF277;
  P xF276;
  P c2F275;
  P c1F274;
  P yF273;
  P xF272;
  P tagF271;
  P xF270;
  P xF269;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  xF269 = t_;
  xF270 = xF269;
  T5 = (P)YPiB(xF270,(P)3);
  T4 = T5;
  tagF271 = T4;
  T8 = (P)YPiE(tagF271,(P)0);
  T7 = (P)YPbb(T8);
  if (T7 != YPfalse) {
    T9 = (P)YPobject_class(xF269);
    T6 = T9;
  } else {
    T10 = (P)YPelt(VARREF(YDdirect_object_class),tagF271);
    T6 = T10;
  }
  T3 = T6;
  T2 = T3;
  xF272 = T2;
  yF273 = VARREF(YLclassG);
  T12 = (P)YPeqQ(xF272,yF273);
  T11 = (P)YPbb(T12);
  T1 = T11;
  if (T1 != YPfalse) {
    c1F274 = c_;
    c2F275 = t_;
    T18 = (P)YPclass_row(c1F274);
    T20 = (P)YPclass_id(c2F275);
    xF276 = T20;
    xF277 = xF276;
    T22 = (P)YPiGG(xF277,(P)2);
    T21 = T22;
    T19 = T21;
    T17 = (P)YPselt(T18,T19);
    xF278 = YPint((P)1);
    xF279 = xF278;
    T25 = (P)YPiGG(xF279,(P)2);
    T24 = T25;
    T23 = T24;
    T16 = (P)YPiE(T17,T23);
    T15 = (P)YPbb(T16);
    T14 = T15;
    if (T14 != YPfalse) {
      T26 = CALL2(1,VARREF(YOtup),YPtrue,YPtrue);
      T13 = T26;
    } else {
      T27 = CALL2(1,VARREF(YOtup),YPfalse,YPfalse);
      T13 = T27;
    }
    T0 = T13;
  } else {
    T28 = CALL2(1,VARREF(Ymay_isaQ),c_,t_);
    T0 = T28;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOorder_specs_class) {
  P t1_,t2_,arg_;
  P tagF284;
  P xF283;
  P xF282;
  P yF281;
  P xF280;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  xF280 = t1_;
  yF281 = t2_;
  T3 = (P)YPeqQ(xF280,yF281);
  T2 = (P)YPbb(T3);
  T1 = T2;
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YOtup),LITREF(lit_402),t1_);
    T0 = T4;
  } else {
    xF282 = arg_;
    xF283 = xF282;
    T10 = (P)YPiB(xF283,(P)3);
    T9 = T10;
    tagF284 = T9;
    T13 = (P)YPiE(tagF284,(P)0);
    T12 = (P)YPbb(T13);
    if (T12 != YPfalse) {
      T14 = (P)YPobject_class(xF282);
      T11 = T14;
    } else {
      T15 = (P)YPelt(VARREF(YDdirect_object_class),tagF284);
      T11 = T15;
    }
    T8 = T11;
    T7 = T8;
    T6 = CALL3(1,VARREF(YOclassL),t1_,t2_,T7);
    if (T6 != YPfalse) {
      T16 = CALL2(1,VARREF(YOtup),LITREF(lit_403),t1_);
      T5 = T16;
    } else {
      T17 = CALL2(1,VARREF(YOtup),LITREF(lit_404),t2_);
      T5 = T17;
    }
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOorder_specs) {
  P t1_,t2_,arg_;
  P yF295;
  P xF294;
  P tagF293;
  P xF292;
  P xF291;
  P tmpF290;
  P yF289;
  P xF288;
  P tagF287;
  P xF286;
  P xF285;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  xF285 = t1_;
  xF286 = xF285;
  T6 = (P)YPiB(xF286,(P)3);
  T5 = T6;
  tagF287 = T5;
  T9 = (P)YPiE(tagF287,(P)0);
  T8 = (P)YPbb(T9);
  if (T8 != YPfalse) {
    T10 = (P)YPobject_class(xF285);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF287);
    T7 = T11;
  }
  T4 = T7;
  T3 = T4;
  xF288 = T3;
  yF289 = VARREF(YLclassG);
  T13 = (P)YPeqQ(xF288,yF289);
  T12 = (P)YPbb(T13);
  T2 = T12;
  tmpF290 = T2;
  if (tmpF290 != YPfalse) {
    xF291 = t2_;
    xF292 = xF291;
    T19 = (P)YPiB(xF292,(P)3);
    T18 = T19;
    tagF293 = T18;
    T22 = (P)YPiE(tagF293,(P)0);
    T21 = (P)YPbb(T22);
    if (T21 != YPfalse) {
      T23 = (P)YPobject_class(xF291);
      T20 = T23;
    } else {
      T24 = (P)YPelt(VARREF(YDdirect_object_class),tagF293);
      T20 = T24;
    }
    T17 = T20;
    T16 = T17;
    xF294 = T16;
    yF295 = VARREF(YLclassG);
    T26 = (P)YPeqQ(xF294,yF295);
    T25 = (P)YPbb(T26);
    T15 = T25;
    T14 = T15;
  } else {
    T14 = YPfalse;
  }
  T1 = T14;
  if (T1 != YPfalse) {
    T27 = CALL3(1,VARREF(YOorder_specs_class),t1_,t2_,arg_);
    T0 = T27;
  } else {
    T28 = CALL3(1,VARREF(Yorder_specs),t1_,t2_,arg_);
    T0 = T28;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yorder_mets) {
  P m1_,m2_,args_;
  P yF319;
  P xF318;
  P tmpF317;
  P yF316;
  P xF315;
  P tmpF314;
  P yF313;
  P xF312;
  P yF311;
  P xF310;
  P idxF309;
  P cmpF308;
  P cmpAtypF307;
  P xF306;
  P xF305;
  P iF304;
  P xF303;
  P m2specF302;
  P m1specF301;
  P yF300;
  P xF299;
  P idxF298;
  P stateF297;
  P arityF296;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(args_, 2);
  T1 = CALL1(1,VARREF(YOfun_arity),m1_);
  check_type(T1,VARREF(YLfixnumG));
  arityF296 = T1;
  check_type(LITREF(lit_402),VARREF(YLsymG));
  stateF297 = LITREF(lit_402);
  check_type(YPint((P)0),VARREF(YLfixnumG));
  idxF298 = YPint((P)0);
  for (;;) {
    P a26_0,a26_1;
  loop26:
    xF299 = idxF298;
    yF300 = arityF296;
    T7 = (P)YPiE(xF299,yF300);
    T6 = (P)YPbb(T7);
    T5 = T6;
    if (T5 != YPfalse) {
      T4 = stateF297;
    } else {
      T9 = CALL2(1,VARREF(Yfun_spec),m1_,idxF298);
      m1specF301 = T9;
      T11 = CALL2(1,VARREF(Yfun_spec),m2_,idxF298);
      m2specF302 = T11;
      xF303 = args_;
      iF304 = idxF298;
      T16 = (P)YPopts_location(xF303);
      xF305 = iF304;
      xF306 = xF305;
      T20 = (P)YPiGG(xF306,(P)2);
      T19 = T20;
      T18 = T19;
      T17 = (P)YPi_((P)0,T18);
      T15 = (P)YPloc_off(T16,T17);
      T14 = T15;
      T13 = CALL3(1,VARREF(YOorder_specs),m1specF301,m2specF302,T14);
      check_type(T13,VARREF(YLtupG));
      cmpAtypF307 = T13;
      T22 = (P)YOtelt(cmpAtypF307,YPint((P)0));
      check_type(T22,VARREF(YLsymG));
      cmpF308 = T22;
      T24 = (P)YOA(idxF298,YPint((P)1));
      check_type(T24,VARREF(YLfixnumG));
      idxF309 = T24;
      xF310 = cmpF308;
      yF311 = LITREF(lit_402);
      T28 = (P)YPeqQ(xF310,yF311);
      T27 = (P)YPbb(T28);
      T26 = T27;
      if (T26 != YPfalse) {
        a26_0 = stateF297;
        a26_1 = idxF309;
        stateF297 = a26_0;
        idxF298 = a26_1;
        goto loop26;
        T25 = T29;
      } else {
        xF312 = cmpF308;
        yF313 = LITREF(lit_409);
        T35 = (P)YPeqQ(xF312,yF313);
        T34 = (P)YPbb(T35);
        T33 = T34;
        T32 = CALL1(1,VARREF(Ynot),T33);
        tmpF314 = T32;
        if (tmpF314 != YPfalse) {
          xF315 = stateF297;
          yF316 = LITREF(lit_402);
          T40 = (P)YPeqQ(xF315,yF316);
          T39 = (P)YPbb(T40);
          T38 = T39;
          tmpF317 = T38;
          if (tmpF317 != YPfalse) {
            T41 = tmpF317;
          } else {
            xF318 = cmpF308;
            yF319 = stateF297;
            T44 = (P)YPeqQ(xF318,yF319);
            T43 = (P)YPbb(T44);
            T42 = T43;
            T41 = T42;
          }
          T37 = T41;
          T36 = T37;
        } else {
          T36 = YPfalse;
        }
        T31 = T36;
        if (T31 != YPfalse) {
          a26_0 = cmpF308;
          a26_1 = idxF309;
          stateF297 = a26_0;
          idxF298 = a26_1;
          goto loop26;
          T30 = T45;
        } else {
          T30 = LITREF(lit_409);
        }
        T25 = T30;
      }
      T23 = T25;
      T21 = T23;
      T12 = T21;
      T10 = T12;
      T8 = T10;
      T4 = T8;
    }
    break;
  }
  T3 = T4;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_make_ambiguous_403) {
  P headed_list_;
  P t1F324;
  P tmpF323;
  P yF322;
  P xF321;
  P lF320;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(headed_list_, 0);
  T0 = (P)YOtail(headed_list_);
  check_type(T0,VARREF(YLlstG));
  lF320 = T0;
  for (;;) {
    P a27_0;
  loop27:
    xF321 = lF320;
    yF322 = Ynil;
    T5 = (P)YPeqQ(xF321,yF322);
    T4 = (P)YPbb(T5);
    T3 = T4;
    tmpF323 = T3;
    if (tmpF323 != YPfalse) {
      T6 = tmpF323;
    } else {
      T8 = (P)YOtail(lF320);
      t1F324 = T8;
      T9 = (P)YOtail(FREEREF(0));
      (P)YOtail_setter(T9,lF320);
      (P)YOtail_setter(lF320,FREEREF(0));
      a27_0 = t1F324;
      lF320 = a27_0;
      goto loop27;
      T7 = T10;
      T6 = T7;
    }
    T2 = T6;
    break;
  }
  T1 = T2;
  (P)YOtail_setter(Ynil,headed_list_);
  T13 = (P)YOtail(FREEREF(0));
  T12 = (P)YOpair(FREEREF(1),T13);
  T11 = (P)YOtail_setter(T12,FREEREF(0));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_precedes_allQ_404) {
  P l_;
  P yF329;
  P xF328;
  P yF327;
  P xF326;
  P lF325;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(l_, 0);
  check_type(l_,VARREF(YLlstG));
  lF325 = l_;
  for (;;) {
    P a28_0;
  loop28:
    xF326 = lF325;
    yF327 = Ynil;
    T6 = (P)YPeqQ(xF326,yF327);
    T5 = (P)YPbb(T6);
    T4 = T5;
    if (T4 != YPfalse) {
      T3 = YPtrue;
    } else {
      T10 = (P)YOhead(lF325);
      T9 = CALL3(1,FREEREF(2),FREEREF(0),T10,FREEREF(1));
      xF328 = T9;
      yF329 = LITREF(lit_403);
      T12 = (P)YPeqQ(xF328,yF329);
      T11 = (P)YPbb(T12);
      T8 = T11;
      if (T8 != YPfalse) {
        T14 = (P)YOtail(lF325);
        a28_0 = T14;
        lF325 = a28_0;
        goto loop28;
        T7 = T13;
      } else {
        T7 = YPfalse;
      }
      T3 = T7;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_subsequent_ambiguities_405) {
  P oprev_;
  P tmpF330;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(oprev_, 0);
  T4 = (P)YOtail(oprev_);
  T3 = CALL1(1,FREEREF(0),T4);
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF330 = T2;
  if (tmpF330 != YPfalse) {
    T5 = tmpF330;
  } else {
    T8 = (P)YOtail(FREEREF(1));
    T7 = CALL1(1,FREEREF(0),T8);
    T6 = CALL1(1,VARREF(Ynot),T7);
    T5 = T6;
  }
  T1 = T5;
  if (T1 != YPfalse) {
    T9 = CALL1(1,FREEREF(2),oprev_);
    T0 = T9;
  } else {
    T12 = (P)YOtail(oprev_);
    T11 = (P)YOpair(FREEREF(3),T12);
    T10 = (P)YOtail_setter(T11,oprev_);
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_406) {
  P oprev_,osub_;
  P yF340;
  P xF339;
  P yF338;
  P xF337;
  P indicF336;
  P yF335;
  P xF334;
  P yF333;
  P xF332;
  P indicF331;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(oprev_, 0);
  ARG(osub_, 1);
  for (;;) {
    P a29_0,a29_1;
  loop29:
    T2 = (P)YOemptyQ(osub_);
    if (T2 != YPfalse) {
      T3 = CALL1(1,FREEREF(0),oprev_);
      T1 = T3;
    } else {
      T6 = (P)YOhead(osub_);
      T5 = CALL3(1,FREEREF(3),FREEREF(1),T6,FREEREF(2));
      indicF336 = T5;
      xF337 = indicF336;
      yF338 = LITREF(lit_403);
      T10 = (P)YPeqQ(xF337,yF338);
      T9 = (P)YPbb(T10);
      T8 = T9;
      if (T8 != YPfalse) {
        T11 = CALL1(1,FREEREF(0),oprev_);
        T7 = T11;
      } else {
        xF339 = indicF336;
        yF340 = LITREF(lit_404);
        T15 = (P)YPeqQ(xF339,yF340);
        T14 = (P)YPbb(T15);
        T13 = T14;
        if (T13 != YPfalse) {
          T17 = (P)YOtail(osub_);
          a29_0 = osub_;
          a29_1 = T17;
          oprev_ = a29_0;
          osub_ = a29_1;
          goto loop29;
          T12 = T16;
        } else {
          T18 = CALL1(1,FREEREF(4),oprev_);
          T12 = T18;
        }
        T7 = T12;
      }
      T4 = T7;
      T1 = T4;
    }
    break;
  }
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yord_app_mets_1) {
  P mets_,args_,order_mets_;
  P insertF350;
  P check_subsequent_ambiguitiesF349;
  P precedes_allQF348;
  P make_ambiguousF347;
  P metF346;
  P yF345;
  P xF344;
  P metsF343;
  P aheadF342;
  P oheadF341;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(mets_, 0);
  ARG(args_, 1);
  ARG(order_mets_, 2);
  T1 = (P)YOpair(YPfalse,Ynil);
  check_type(T1,VARREF(YLlstG));
  oheadF341 = T1;
  T3 = (P)YOpair(YPfalse,Ynil);
  check_type(T3,VARREF(YLlstG));
  aheadF342 = T3;
  check_type(mets_,VARREF(YLlstG));
  metsF343 = mets_;
  for (;;) {
    P a30_0;
  loop30:
    xF344 = metsF343;
    yF345 = Ynil;
    T9 = (P)YPeqQ(xF344,yF345);
    T8 = (P)YPbb(T9);
    T7 = T8;
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T11 = (P)YOhead(metsF343);
      check_type(T11,VARREF(YLmetG));
      metF346 = T11;
      T13 = FUNSHELL(1,fun_make_ambiguous_403,2);
      make_ambiguousF347 = T13;
      T14 = FUNSHELL(1,fun_precedes_allQ_404,3);
      precedes_allQF348 = T14;
      T15 = FUNSHELL(1,fun_check_subsequent_ambiguities_405,4);
      check_subsequent_ambiguitiesF349 = T15;
      T16 = FUNSHELL(1,fun_insert_406,5);
      insertF350 = T16;
      FUNINIT(make_ambiguousF347, 2,aheadF342,metF346);
      FUNINIT(precedes_allQF348, 3,metF346,args_,order_mets_);
      FUNINIT(check_subsequent_ambiguitiesF349, 4,precedes_allQF348,aheadF342,make_ambiguousF347,metF346);
      FUNINIT(insertF350, 5,check_subsequent_ambiguitiesF349,metF346,args_,order_mets_,make_ambiguousF347);
      T17 = (P)YOtail(oheadF341);
      CALL2(1,insertF350,oheadF341,T17);
      T19 = (P)YOtail(metsF343);
      a30_0 = T19;
      metsF343 = a30_0;
      goto loop30;
      T12 = T18;
      T10 = T12;
      T5 = T10;
    } else {
      T5 = YPfalse;
    }
    break;
  }
  T4 = T5;
  T21 = (P)YOtail(oheadF341);
  T22 = (P)YOtail(aheadF342);
  T20 = CALL2(1,VARREF(YOtup),T21,T22);
  T2 = T20;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_408) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(Ymet_appQ) {
  P met_,args_;
  P xF358;
  P xF357;
  P iF356;
  P xF355;
  P yF354;
  P xF353;
  P iF352;
  P nF351;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(met_, 0);
  ARG(args_, 1);
  T3 = CALL1(1,VARREF(YOfun_unification_vars),met_);
  T2 = (P)YOemptyQ(T3);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(Ymet_app_unify),met_,args_);
    T0 = T4;
  } else {
    T6 = CALL1(1,VARREF(YOfun_arity),met_);
    check_type(T6,VARREF(YLfixnumG));
    nF351 = T6;
    check_type(YPint((P)0),VARREF(YLfixnumG));
    iF352 = YPint((P)0);
    for (;;) {
      P a31_0;
    loop31:
      xF353 = iF352;
      yF354 = nF351;
      T12 = (P)YPiE(xF353,yF354);
      T11 = (P)YPbb(T12);
      T10 = T11;
      if (T10 != YPfalse) {
        T9 = YPtrue;
      } else {
        xF355 = args_;
        iF356 = iF352;
        T17 = (P)YPopts_location(xF355);
        xF357 = iF356;
        xF358 = xF357;
        T21 = (P)YPiGG(xF358,(P)2);
        T20 = T21;
        T19 = T20;
        T18 = (P)YPi_((P)0,T19);
        T16 = (P)YPloc_off(T17,T18);
        T15 = T16;
        T22 = CALL2(1,VARREF(Yfun_spec),met_,iF352);
        T14 = CALL2(1,VARREF(YOisaQ),T15,T22);
        if (T14 != YPfalse) {
          T24 = (P)YOA(iF352,YPint((P)1));
          a31_0 = T24;
          iF352 = a31_0;
          goto loop31;
          T13 = T23;
        } else {
          T13 = YPfalse;
        }
        T9 = T13;
      }
      break;
    }
    T8 = T9;
    T7 = T8;
    T5 = T7;
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yord_app_metsT) {
  P gf_,args_;
  P considered_metsF363;
  P ansF362;
  P mF361;
  P msF360;
  P ansF359;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(gf_, 0);
  ARG(args_, 1);
  ansF359 = Ynil;
  T2 = CALL1(1,VARREF(YOfun_mets),gf_);
  msF360 = T2;
  for (;;) {
    P a32_0,a32_1;
  loop32:
    T5 = (P)YOemptyQ(msF360);
    if (T5 != YPfalse) {
      T4 = ansF359;
    } else {
      T7 = (P)YOhead(msF360);
      mF361 = T7;
      T10 = CALL2(1,VARREF(Ymet_appQ),mF361,args_);
      if (T10 != YPfalse) {
        T11 = (P)YOpair(mF361,ansF359);
        T9 = T11;
      } else {
        T9 = ansF359;
      }
      ansF362 = T9;
      T13 = (P)YOtail(msF360);
      a32_0 = ansF362;
      a32_1 = T13;
      ansF359 = a32_0;
      msF360 = a32_1;
      goto loop32;
      T8 = T12;
      T6 = T8;
      T4 = T6;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  considered_metsF363 = T1;
  T14 = CALL3(1,VARREF(Yord_app_mets_1),considered_metsF363,args_,VARREF(Yorder_mets));
  T0 = T14;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yord_app_mets) {
  P gf_,args_;
  P T0;
LINK_STACK();
  ARG(gf_, 0);
  NARGS(args_, 1);
  T0 = CALL2(1,VARREF(Yord_app_metsT),gf_,args_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOgen_cache_arg_pos) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPgen_cache_arg_pos(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOgen_cache_arg_pos_setter) {
  P z_,x_;
  P T0;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T0 = (P)YPgen_cache_arg_pos_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOgen_cache_singletons) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPgen_cache_singletons(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOgen_cache_singletons_setter) {
  P z_,x_;
  P T0;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T0 = (P)YPgen_cache_singletons_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOgen_cache_classes) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPgen_cache_classes(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOgen_cache_classes_setter) {
  P z_,x_;
  P T0;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T0 = (P)YPgen_cache_classes_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ymethod_accessor_offset) {
  P gen_,met_,args_;
  P xF384;
  P xF383;
  P iF382;
  P xF381;
  P xF380;
  P xF379;
  P iF378;
  P xF377;
  P yF376;
  P xF375;
  P tmpF374;
  P nF373;
  P xF372;
  P propQF371;
  P yF370;
  P xF369;
  P tagF368;
  P xF367;
  P xF366;
  P tmpF365;
  P propF364;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  ARG(args_, 2);
  T1 = (P)YPmet_env(met_);
  propF364 = T1;
  tmpF365 = propF364;
  if (tmpF365 != YPfalse) {
    xF366 = propF364;
    xF367 = xF366;
    T9 = (P)YPiB(xF367,(P)3);
    T8 = T9;
    tagF368 = T8;
    T12 = (P)YPiE(tagF368,(P)0);
    T11 = (P)YPbb(T12);
    if (T11 != YPfalse) {
      T13 = (P)YPobject_class(xF366);
      T10 = T13;
    } else {
      T14 = (P)YPelt(VARREF(YDdirect_object_class),tagF368);
      T10 = T14;
    }
    T7 = T10;
    T6 = T7;
    xF369 = T6;
    yF370 = VARREF(YLpropG);
    T16 = (P)YPeqQ(xF369,yF370);
    T15 = (P)YPbb(T16);
    T5 = T15;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  propQF371 = T3;
  xF372 = args_;
  T19 = (P)YPopts_count(xF372);
  T18 = T19;
  nF373 = T18;
  tmpF374 = propQF371;
  if (tmpF374 != YPfalse) {
    xF375 = nF373;
    yF376 = YPint((P)1);
    T25 = (P)YPiE(xF375,yF376);
    T24 = (P)YPbb(T25);
    T23 = T24;
    if (T23 != YPfalse) {
      xF377 = args_;
      iF378 = YPint((P)0);
      T29 = (P)YPopts_location(xF377);
      xF379 = iF378;
      xF380 = xF379;
      T33 = (P)YPiGG(xF380,(P)2);
      T32 = T33;
      T31 = T32;
      T30 = (P)YPi_((P)0,T31);
      T28 = (P)YPloc_off(T29,T30);
      T27 = T28;
      T26 = CALL2(1,VARREF(Yprop_offset),T27,gen_);
      T22 = T26;
    } else {
      xF381 = args_;
      iF382 = YPint((P)1);
      T37 = (P)YPopts_location(xF381);
      xF383 = iF382;
      xF384 = xF383;
      T41 = (P)YPiGG(xF384,(P)2);
      T40 = T41;
      T39 = T40;
      T38 = (P)YPi_((P)0,T39);
      T36 = (P)YPloc_off(T37,T38);
      T35 = T36;
      T42 = (P)YPprop_getter(propF364);
      T34 = CALL2(1,VARREF(Yprop_offset),T35,T42);
      T22 = T34;
    }
    T21 = T22;
  } else {
    T21 = YPfalse;
  }
  T20 = T21;
  T17 = T20;
  T2 = T17;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOsingleton_specQ) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YOclass_isaQ(x_,VARREF(YLsingletonG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOsubclass_specQ) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YOclass_isaQ(x_,VARREF(YLsubclassG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOunion_specQ) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YOclass_isaQ(x_,VARREF(YLunionG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOprecise_specQ) {
  P x_;
  P tmpF387;
  P tmpF386;
  P tmpF385;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YOsingleton_specQ),x_);
  tmpF385 = T1;
  if (tmpF385 != YPfalse) {
    T2 = tmpF385;
  } else {
    T4 = CALL1(1,VARREF(YOsubclass_specQ),x_);
    tmpF386 = T4;
    if (tmpF386 != YPfalse) {
      T5 = tmpF386;
    } else {
      T7 = CALL1(1,VARREF(YOunion_specQ),x_);
      tmpF387 = T7;
      if (tmpF387 != YPfalse) {
        T10 = (P)YPunion_elts(x_);
        T9 = CALL2(1,VARREF(YOanyQ),VARREF(YOprecise_specQ),T10);
        T8 = T9;
      } else {
        T8 = YPfalse;
      }
      T6 = T8;
      T5 = T6;
    }
    T3 = T5;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_423) {
  P met_;
  P yF389;
  P xF388;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(met_, 0);
  T1 = CALL2(1,VARREF(Yfun_spec),met_,FREEREF(0));
  xF388 = T1;
  yF389 = VARREF(YLanyG);
  T3 = (P)YPiE(xF388,yF389);
  T2 = (P)YPbb(T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmets_unspecialized_atQ) {
  P mets_,pos_;
  P T0,T1;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
  T1 = FUNFAB(fun_423,1,pos_);
  T0 = CALL2(1,VARREF(YOallQ),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_425) {
  P met_;
  P T0,T1;
LINK_STACK();
  ARG(met_, 0);
  T1 = CALL2(1,VARREF(Yfun_spec),met_,FREEREF(1));
  T0 = CALL2(1,VARREF(YOsubtypeQ),FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOprune_mets_by_type_at) {
  P mets_,type_,pos_;
  P T0,T1;
LINK_STACK();
  ARG(mets_, 0);
  ARG(type_, 1);
  ARG(pos_, 2);
  T1 = FUNFAB(fun_425,2,type_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_427) {
  P met_;
  P T0;
LINK_STACK();
  ARG(met_, 0);
  T0 = CALL2(1,VARREF(Yfun_spec),met_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmets_specs_at) {
  P mets_,pos_;
  P T0,T1;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
  T1 = FUNFAB(fun_427,1,pos_);
  T0 = CALL2(1,VARREF(YOmap),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_429) {
  P spec_;
  P T0;
LINK_STACK();
  ARG(spec_, 0);
  T0 = CALL1(1,VARREF(YOsingleton_specQ),spec_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmets_singletons_at) {
  P mets_,pos_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
  T1 = fun_429;
  T2 = CALL2(1,VARREF(YOmets_specs_at),mets_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_431) {
  P spec_;
  P T0;
LINK_STACK();
  ARG(spec_, 0);
  T0 = CALL1(1,VARREF(YOsubclass_specQ),spec_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmets_subclasses_at) {
  P mets_,pos_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
  T1 = fun_431;
  T2 = CALL2(1,VARREF(YOmets_specs_at),mets_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOcache_add) {
  P t_,k_,v_;
  P iF397;
  P yF396;
  P xF395;
  P iF394;
  P resF393;
  P xF392;
  P xF391;
  P olenF390;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(t_, 0);
  ARG(k_, 1);
  ARG(v_, 2);
  T1 = (P)YOtlen(t_);
  olenF390 = T1;
  T5 = (P)YOA(olenF390,YPint((P)2));
  xF391 = T5;
  xF392 = xF391;
  T7 = (P)YPiGG(xF392,(P)2);
  T6 = T7;
  T4 = T6;
  T3 = (P)YPtup(T4,VARREF(Ynul));
  resF393 = T3;
  iF394 = YPint((P)0);
  for (;;) {
    P a33_0;
  loop33:
    xF395 = iF394;
    yF396 = olenF390;
    T13 = (P)YPiE(xF395,yF396);
    T12 = (P)YPbb(T13);
    T11 = T12;
    T10 = CALL1(1,VARREF(Ynot),T11);
    if (T10 != YPfalse) {
      T14 = (P)YOtelt(t_,iF394);
      (P)YOtelt_setter(T14,resF393,iF394);
      T16 = (P)YOA(iF394,YPint((P)1));
      iF397 = T16;
      T17 = (P)YOtelt(t_,iF397);
      (P)YOtelt_setter(T17,resF393,iF397);
      T19 = (P)YOA(iF397,YPint((P)1));
      a33_0 = T19;
      iF394 = a33_0;
      goto loop33;
      T15 = T18;
      T9 = T15;
    } else {
      T9 = YPfalse;
    }
    break;
  }
  T8 = T9;
  (P)YOtelt_setter(k_,resF393,olenF390);
  T20 = (P)YOA(olenF390,YPint((P)1));
  (P)YOtelt_setter(v_,resF393,T20);
  T2 = resF393;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss_1_using) {
  P key_,instance_,all_assocs_,all_assocs_setter_,gen_,cache_,mets_,sorted_mets_,i_,args_;
  P vF413;
  P yF412;
  P xF411;
  P valF410;
  P tagF409;
  P xF408;
  P xF407;
  P tmpF406;
  P yF405;
  P xF404;
  P yF403;
  P xF402;
  P jF401;
  P assocsF400;
  P cacheF399;
  P tmpF398;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50;
LINK_STACK();
  ARG(key_, 0);
  ARG(instance_, 1);
  ARG(all_assocs_, 2);
  ARG(all_assocs_setter_, 3);
  ARG(gen_, 4);
  ARG(cache_, 5);
  ARG(mets_, 6);
  ARG(sorted_mets_, 7);
  ARG(i_, 8);
  ARG(args_, 9);
  key_ = BOXFAB(key_);
  tmpF398 = cache_;
  if (tmpF398 != YPfalse) {
    T3 = tmpF398;
  } else {
    T4 = (P)YPgen_cache(YPtrue,i_,VARREF(YDnul_assocs),VARREF(YDnul_assocs),(P)0);
    T3 = T4;
  }
  T2 = T3;
  cacheF399 = T2;
  T6 = CALL1(1,all_assocs_,cacheF399);
  assocsF400 = T6;
  jF401 = YPint((P)0);
  for (;;) {
    P a34_0;
  loop34:
    xF402 = jF401;
    T10 = (P)YOtlen(assocsF400);
    yF403 = T10;
    T12 = (P)YPiE(xF402,yF403);
    T11 = (P)YPbb(T12);
    T9 = T11;
    if (T9 != YPfalse) {
      xF404 = all_assocs_;
      yF405 = VARREF(YOgen_cache_classes);
      T17 = (P)YPeqQ(xF404,yF405);
      T16 = (P)YPbb(T17);
      T15 = T16;
      tmpF406 = T15;
      if (tmpF406 != YPfalse) {
        T20 = BOXVAL(key_);
        T19 = (P)YPclass_forward(T20);
        T18 = T19;
      } else {
        T18 = YPfalse;
      }
      T14 = T18;
      if (T14 != YPfalse) {
        CALL1(1,VARREF(Yupdate_instance_for_changed_class),instance_);
        xF407 = instance_;
        xF408 = xF407;
        T24 = (P)YPiB(xF408,(P)3);
        T23 = T24;
        tagF409 = T23;
        T27 = (P)YPiE(tagF409,(P)0);
        T26 = (P)YPbb(T27);
        if (T26 != YPfalse) {
          T28 = (P)YPobject_class(xF407);
          T25 = T28;
        } else {
          T29 = (P)YPelt(VARREF(YDdirect_object_class),tagF409);
          T25 = T29;
        }
        T22 = T25;
        T21 = T22;
        BOXVAL(key_) = T21;
        T31 = CALL1(0,all_assocs_,cacheF399);
        a34_0 = T31;
        jF401 = a34_0;
        goto loop34;
        T13 = T30;
      } else {
        T34 = (P)YOA(i_,YPint((P)1));
        T33 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,gen_,YPfalse,mets_,sorted_mets_,T34,args_);
        valF410 = T33;
        T37 = BOXVAL(key_);
        T36 = CALL3(1,VARREF(YOcache_add),assocsF400,T37,valF410);
        T35 = CALL2(1,all_assocs_setter_,T36,cacheF399);
        T32 = T35;
        T13 = T32;
      }
      T8 = T13;
    } else {
      T40 = (P)YOtelt(assocsF400,jF401);
      xF411 = T40;
      T41 = BOXVAL(key_);
      yF412 = T41;
      T43 = (P)YPeqQ(xF411,yF412);
      T42 = (P)YPbb(T43);
      T39 = T42;
      if (T39 != YPfalse) {
        T46 = (P)YOA(jF401,YPint((P)1));
        T45 = (P)YOtelt(assocsF400,T46);
        vF413 = T45;
        T48 = (P)YOA(i_,YPint((P)1));
        T47 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,gen_,vF413,mets_,sorted_mets_,T48,args_);
        T44 = T47;
        T38 = T44;
      } else {
        T50 = (P)YOA(jF401,YPint((P)2));
        a34_0 = T50;
        jF401 = a34_0;
        goto loop34;
        T38 = T49;
      }
      T8 = T38;
    }
    break;
  }
  T7 = T8;
  T5 = cacheF399;
  T1 = T5;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YOspecd_args) {
  P args_,i_,arg_;
  P xF437;
  P xF436;
  P iF435;
  P xF434;
  P zF433;
  P xF432;
  P xF431;
  P iF430;
  P xF429;
  P yF428;
  P xF427;
  P yF426;
  P xF425;
  P xF424;
  P kF423;
  P rF422;
  P tF421;
  P xF420;
  P xF419;
  P xF418;
  P vF417;
  P xF416;
  P xF415;
  P xF414;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
LINK_STACK();
  ARG(args_, 0);
  ARG(i_, 1);
  ARG(arg_, 2);
  xF414 = args_;
  T4 = (P)YPopts_count(xF414);
  T3 = T4;
  xF415 = T3;
  xF416 = xF415;
  T6 = (P)YPiGG(xF416,(P)2);
  T5 = T6;
  T2 = T5;
  T1 = (P)YPtup(T2,VARREF(Ynul));
  vF417 = T1;
  T11 = (P)YPtlen(vF417);
  T10 = (P)YPprop_dat_at(vF417,T11);
  xF418 = T10;
  T12 = (P)YPtag_into(xF418,(P)3);
  T9 = T12;
  T14 = (P)YPtlen(vF417);
  xF419 = T14;
  xF420 = xF419;
  tF421 = (P)1;
  T17 = (P)YPiLL(xF420,(P)2);
  T16 = (P)YPiv(T17,tF421);
  T15 = T16;
  T13 = T15;
  T8 = (P)YPopts_tup(T9,T13,vF417);
  rF422 = T8;
  kF423 = YPint((P)0);
  for (;;) {
    P a35_0;
  loop35:
    xF424 = args_;
    T23 = (P)YPopts_count(xF424);
    T22 = T23;
    xF425 = T22;
    yF426 = kF423;
    T25 = (P)YPeqQ(xF425,yF426);
    T24 = (P)YPbb(T25);
    T21 = T24;
    if (T21 != YPfalse) {
      T20 = rF422;
    } else {
      xF427 = kF423;
      yF428 = i_;
      T29 = (P)YPeqQ(xF427,yF428);
      T28 = (P)YPbb(T29);
      T27 = T28;
      if (T27 != YPfalse) {
        T26 = arg_;
      } else {
        xF429 = args_;
        iF430 = kF423;
        T32 = (P)YPopts_location(xF429);
        xF431 = iF430;
        xF432 = xF431;
        T36 = (P)YPiGG(xF432,(P)2);
        T35 = T36;
        T34 = T35;
        T33 = (P)YPi_((P)0,T34);
        T31 = (P)YPloc_off(T32,T33);
        T30 = T31;
        T26 = T30;
      }
      zF433 = T26;
      xF434 = rF422;
      iF435 = kF423;
      T38 = (P)YPopts_location(xF434);
      xF436 = iF435;
      xF437 = xF436;
      T42 = (P)YPiGG(xF437,(P)2);
      T41 = T42;
      T40 = T41;
      T39 = (P)YPi_((P)0,T40);
      T37 = (P)YPloc_off_setter(zF433,T38,T39);
      T44 = (P)YOA(kF423,YPint((P)1));
      a35_0 = T44;
      kF423 = a35_0;
      goto loop35;
      T20 = T43;
    }
    break;
  }
  T19 = T20;
  T18 = T19;
  T7 = T18;
  T0 = T7;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yrequires_singleton_prec) {
  P mets_,pos_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
  T2 = CALL2(1,VARREF(YOmets_subclasses_at),mets_,pos_);
  T1 = (P)YOemptyQ(T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yensure_singleton_cache) {
  P gen_,cache_,mets_,sorted_mets_,i_,args_;
  P app_metsF446;
  P smetsF445;
  P argsF444;
  P argF443;
  P singF442;
  P singletonsF441;
  P cacheF440;
  P singletonsF439;
  P tmpF438;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(gen_, 0);
  ARG(cache_, 1);
  ARG(mets_, 2);
  ARG(sorted_mets_, 3);
  ARG(i_, 4);
  ARG(args_, 5);
  tmpF438 = cache_;
  if (tmpF438 != YPfalse) {
    T1 = tmpF438;
  } else {
    T3 = CALL2(1,VARREF(Yrequires_singleton_prec),mets_,i_);
    if (T3 != YPfalse) {
      T4 = (P)YPgen_cache(YPfalse,i_,VARREF(YDnul_assocs),VARREF(YDnul_assocs),(P)0);
      T2 = T4;
    } else {
      T6 = CALL2(1,VARREF(YOmets_singletons_at),mets_,i_);
      singletonsF439 = T6;
      T8 = (P)YOemptyQ(singletonsF439);
      if (T8 != YPfalse) {
        T7 = YPfalse;
      } else {
        T10 = (P)YPgen_cache(YPtrue,i_,VARREF(YDnul_assocs),VARREF(YDnul_assocs),(P)0);
        cacheF440 = T10;
        singletonsF441 = singletonsF439;
        for (;;) {
          P a36_0;
        loop36:
          T14 = (P)YOemptyQ(singletonsF441);
          if (T14 != YPfalse) {
            T13 = cacheF440;
          } else {
            T16 = (P)YOhead(singletonsF441);
            singF442 = T16;
            T18 = (P)YPtype_object(singF442);
            argF443 = T18;
            T20 = CALL3(1,VARREF(YOspecd_args),args_,i_,argF443);
            argsF444 = T20;
            T22 = CALL2(1,VARREF(Ychoose_methods),gen_,argsF444);
            smetsF445 = T22;
            T24 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,singF442,i_);
            app_metsF446 = T24;
            CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,argF443,argF443,VARREF(YOgen_cache_singletons),VARREF(YOgen_cache_singletons_setter),gen_,cacheF440,mets_,smetsF445,i_,argsF444);
            T26 = (P)YOtail(singletonsF441);
            a36_0 = T26;
            singletonsF441 = a36_0;
            goto loop36;
            T23 = T25;
            T21 = T23;
            T19 = T21;
            T17 = T19;
            T15 = T17;
            T13 = T15;
          }
          break;
        }
        T12 = T13;
        T11 = T12;
        T9 = T11;
        T7 = T9;
      }
      T5 = T7;
      T2 = T5;
    }
    T1 = T2;
  }
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss_1) {
  P gen_,ocache_,mets_,sorted_mets_,i_,args_;
  P app_metsF475;
  P classF474;
  P tagF473;
  P xF472;
  P xF471;
  P metsF470;
  P tmpF469;
  P tmpF468;
  P yF467;
  P xF466;
  P tmpF465;
  P singQF464;
  P cacheF463;
  P argF462;
  P xF461;
  P xF460;
  P iF459;
  P xF458;
  P tmpF457;
  P xF456;
  P xF455;
  P xF454;
  P xF453;
  P yF452;
  P xF451;
  P tmpF450;
  P tmpF449;
  P yF448;
  P xF447;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71;
LINK_STACK();
  ARG(gen_, 0);
  ARG(ocache_, 1);
  ARG(mets_, 2);
  ARG(sorted_mets_, 3);
  ARG(i_, 4);
  ARG(args_, 5);
  xF447 = i_;
  T2 = CALL1(1,VARREF(YOfun_arity),gen_);
  yF448 = T2;
  T4 = (P)YPiE(xF447,yF448);
  T3 = (P)YPbb(T4);
  T1 = T3;
  if (T1 != YPfalse) {
    T7 = (P)YOhead(sorted_mets_);
    T6 = CALL3(1,VARREF(Ymethod_accessor_offset),gen_,T7,args_);
    tmpF449 = T6;
    if (tmpF449 != YPfalse) {
      T8 = tmpF449;
    } else {
      T8 = sorted_mets_;
    }
    T5 = T8;
    T0 = T5;
  } else {
    tmpF450 = ocache_;
    if (tmpF450 != YPfalse) {
      xF451 = i_;
      T14 = (P)YPgen_cache_arg_pos(ocache_);
      yF452 = T14;
      xF453 = xF451;
      xF454 = xF453;
      T19 = (P)YPiGG(xF454,(P)2);
      T18 = T19;
      T17 = T18;
      xF455 = yF452;
      xF456 = xF455;
      T22 = (P)YPiGG(xF456,(P)2);
      T21 = T22;
      T20 = T21;
      T16 = (P)YPiL(T17,T20);
      T15 = (P)YPbb(T16);
      T13 = T15;
      T12 = T13;
    } else {
      T12 = YPfalse;
    }
    T11 = T12;
    tmpF457 = T11;
    if (tmpF457 != YPfalse) {
      T23 = tmpF457;
    } else {
      T24 = CALL2(1,VARREF(YOmets_unspecialized_atQ),mets_,i_);
      T23 = T24;
    }
    T10 = T23;
    if (T10 != YPfalse) {
      T26 = (P)YOA(i_,YPint((P)1));
      T25 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,gen_,ocache_,mets_,sorted_mets_,T26,args_);
      T9 = T25;
    } else {
      if (YPtrue != YPfalse) {
        xF458 = args_;
        iF459 = i_;
        T31 = (P)YPopts_location(xF458);
        xF460 = iF459;
        xF461 = xF460;
        T35 = (P)YPiGG(xF461,(P)2);
        T34 = T35;
        T33 = T34;
        T32 = (P)YPi_((P)0,T33);
        T30 = (P)YPloc_off(T31,T32);
        T29 = T30;
        argF462 = T29;
        T37 = CALLN(1,VARREF(Yensure_singleton_cache),6,gen_,ocache_,mets_,sorted_mets_,i_,args_);
        cacheF463 = T37;
        T41 = (P)YOhead(sorted_mets_);
        T40 = CALL2(1,VARREF(Yfun_spec),T41,i_);
        T39 = CALL1(1,VARREF(YOsingleton_specQ),T40);
        singQF464 = T39;
        tmpF465 = singQF464;
        if (tmpF465 != YPfalse) {
          xF466 = ocache_;
          yF467 = cacheF463;
          T48 = (P)YPeqQ(xF466,yF467);
          T47 = (P)YPbb(T48);
          T46 = T47;
          T45 = T46;
        } else {
          T45 = YPfalse;
        }
        T44 = T45;
        tmpF468 = T44;
        if (tmpF468 != YPfalse) {
          T49 = tmpF468;
        } else {
          tmpF469 = cacheF463;
          if (tmpF469 != YPfalse) {
            T53 = (P)YPgen_cache_missableQ(cacheF463);
            T52 = CALL1(1,VARREF(Ynot),T53);
            T51 = T52;
          } else {
            T51 = YPfalse;
          }
          T50 = T51;
          T49 = T50;
        }
        T43 = T49;
        if (T43 != YPfalse) {
          T56 = (P)YPsingleton(argF462);
          T55 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,T56,i_);
          metsF470 = T55;
          T57 = CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,argF462,argF462,VARREF(YOgen_cache_singletons),VARREF(YOgen_cache_singletons_setter),gen_,cacheF463,metsF470,sorted_mets_,i_,args_);
          T54 = T57;
          T42 = T54;
        } else {
          if (singQF464 != YPfalse) {
            T58 = cacheF463;
          } else {
            xF471 = argF462;
            xF472 = xF471;
            T63 = (P)YPiB(xF472,(P)3);
            T62 = T63;
            tagF473 = T62;
            T66 = (P)YPiE(tagF473,(P)0);
            T65 = (P)YPbb(T66);
            if (T65 != YPfalse) {
              T67 = (P)YPobject_class(xF471);
              T64 = T67;
            } else {
              T68 = (P)YPelt(VARREF(YDdirect_object_class),tagF473);
              T64 = T68;
            }
            T61 = T64;
            T60 = T61;
            classF474 = T60;
            T70 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,classF474,i_);
            app_metsF475 = T70;
            T71 = CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,classF474,argF462,VARREF(YOgen_cache_classes),VARREF(YOgen_cache_classes_setter),gen_,cacheF463,app_metsF475,sorted_mets_,i_,args_);
            T69 = T71;
            T59 = T69;
            T58 = T59;
          }
          T42 = T58;
        }
        T38 = T42;
        T36 = T38;
        T28 = T36;
        T27 = T28;
      } else {
        T27 = YPfalse;
      }
      T9 = T27;
    }
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss) {
  P gen_,args_;
  P metsF476;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
  T1 = CALL2(1,VARREF(Ychoose_methods),gen_,args_);
  metsF476 = T1;
  T3 = (P)YPfun_cache(gen_);
  T4 = (P)YPgen_mets(gen_);
  T2 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,gen_,T3,T4,metsF476,YPint((P)0),args_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

INLINE P Ygen_lookup(P gen_,P args_) {
  P cF478;
  P tmpF477;
  P T0,T1,T2,T3,T4,T5,T6;
DEFCREGS();
  T2 = (P)YPfun_cache(gen_);
  tmpF477 = T2;
  if (tmpF477 != YPfalse) {
    T3 = tmpF477;
  } else {
    T5 = XCALL2(1,VARREF(Ygen_lookup_miss),gen_,args_);
    T4 = (P)YPfun_cache_setter(T5,gen_);
    T3 = T4;
  }
  T1 = T3;
  cF478 = T1;
  T6 = (P)Ygen_lookup_1(gen_,cF478,args_);
  T0 = T6;
  return T0;
}

INLINE P Yprop_value_at(P object_,P offset_) {
  P xF486;
  P xF485;
  P propsF484;
  P yF483;
  P xF482;
  P valF481;
  P xF480;
  P xF479;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
DEFCREGS();
  xF479 = offset_;
  xF480 = xF479;
  T4 = (P)YPiGG(xF480,(P)2);
  T3 = T4;
  T2 = T3;
  T1 = (P)YPprop_elt(object_,T2);
  valF481 = T1;
  xF482 = valF481;
  yF483 = VARREF(Ynul_prop);
  T8 = (P)YPeqQ(xF482,yF483);
  T7 = (P)YPbb(T8);
  T6 = T7;
  if (T6 != YPfalse) {
    T10 = XCALL1(1,VARREF(Yobject_props),object_);
    propsF484 = T10;
    T14 = XCALL2(1,VARREF(YOelt),propsF484,offset_);
    T13 = (P)YPprop_init(T14);
    T12 = XCALL1(1,T13,object_);
    xF485 = offset_;
    xF486 = xF485;
    T17 = (P)YPiGG(xF486,(P)2);
    T16 = T17;
    T15 = T16;
    T11 = (P)YPprop_elt_setter(T12,object_,T15);
    T9 = T11;
    T5 = T9;
  } else {
    T5 = valF481;
  }
  T0 = T5;
  return T0;
}

P Yprop_bound_atQ(P object_,P offset_) {
  P yF494;
  P xF493;
  P propsF492;
  P yF491;
  P xF490;
  P valF489;
  P xF488;
  P xF487;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
DEFCREGS();
  xF487 = offset_;
  xF488 = xF487;
  T4 = (P)YPiGG(xF488,(P)2);
  T3 = T4;
  T2 = T3;
  T1 = (P)YPprop_elt(object_,T2);
  valF489 = T1;
  xF490 = valF489;
  yF491 = VARREF(Ynul_prop);
  T8 = (P)YPeqQ(xF490,yF491);
  T7 = (P)YPbb(T8);
  T6 = T7;
  if (T6 != YPfalse) {
    T10 = XCALL1(1,VARREF(Yobject_props),object_);
    propsF492 = T10;
    T14 = XCALL2(1,VARREF(YOelt),propsF492,offset_);
    T13 = (P)YPprop_init(T14);
    xF493 = T13;
    yF494 = VARREF(YPprop_unbound_error);
    T16 = (P)YPeqQ(xF493,yF494);
    T15 = (P)YPbb(T16);
    T12 = T15;
    T11 = XCALL1(1,VARREF(Ynot),T12);
    T9 = T11;
    T5 = T9;
  } else {
    T5 = YPtrue;
  }
  T0 = T5;
  return T0;
}

INLINE P Yprop_value_at_setter(P z_,P object_,P offset_) {
  P xF496;
  P xF495;
  P T0,T1,T2,T3;
DEFCREGS();
  xF495 = offset_;
  xF496 = xF495;
  T3 = (P)YPiGG(xF496,(P)2);
  T2 = T3;
  T1 = T2;
  T0 = (P)YPprop_elt_setter(z_,object_,T1);
  return T0;
}

INLINE P Ygen_lookup_1_using(P key_,P i_,P len_,P assocs_,P missableQ_,P gen_,P args_) {
  P yF500;
  P xF499;
  P yF498;
  P xF497;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
DEFCREGS();
  for (;;) {
    P a37_0,a37_1,a37_2,a37_3,a37_4,a37_5,a37_6;
  loop37:
    T3 = (P)YPiE(i_,len_);
    T2 = (P)YPbb(T3);
    if (T2 != YPfalse) {
      if (missableQ_ != YPfalse) {
        T4 = VARREF(YDmissed_dispatch);
      } else {
        T5 = XCALL2(1,VARREF(Ygen_lookup_miss),gen_,args_);
        (P)YPfun_cache_setter(T5,gen_);
        T6 = (P)Ygen_lookup(gen_,args_);
        T4 = T6;
      }
      T1 = T4;
    } else {
      T9 = (P)YPtelt(assocs_,i_);
      xF499 = T9;
      yF500 = key_;
      T11 = (P)YPeqQ(xF499,yF500);
      T10 = (P)YPbb(T11);
      T8 = T10;
      if (T8 != YPfalse) {
        T14 = (P)YPiA(i_,(P)1);
        T13 = (P)YPtelt(assocs_,T14);
        T12 = (P)Ygen_lookup_1(gen_,T13,args_);
        T7 = T12;
      } else {
        T16 = (P)YPiA(i_,(P)2);
        a37_0 = key_;
        a37_1 = T16;
        a37_2 = len_;
        a37_3 = assocs_;
        a37_4 = missableQ_;
        a37_5 = gen_;
        a37_6 = args_;
        key_ = a37_0;
        i_ = a37_1;
        len_ = a37_2;
        assocs_ = a37_3;
        missableQ_ = a37_4;
        gen_ = a37_5;
        args_ = a37_6;
        goto loop37;
        T7 = T15;
      }
      T1 = T7;
    }
    break;
  }
  T0 = T1;
  return T0;
}

P Ygen_lookup_1(P gen_,P cache_,P args_) {
  P tagF518;
  P xF517;
  P xF516;
  P assocsF515;
  P yF514;
  P xF513;
  P valF512;
  P assocsF511;
  P argF510;
  P xF509;
  P xF508;
  P iF507;
  P xF506;
  P yF505;
  P xF504;
  P tagF503;
  P xF502;
  P xF501;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
DEFCREGS();
  xF501 = cache_;
  xF502 = xF501;
  T5 = (P)YPiB(xF502,(P)3);
  T4 = T5;
  tagF503 = T4;
  T8 = (P)YPiE(tagF503,(P)0);
  T7 = (P)YPbb(T8);
  if (T7 != YPfalse) {
    T9 = (P)YPobject_class(xF501);
    T6 = T9;
  } else {
    T10 = (P)YPelt(VARREF(YDdirect_object_class),tagF503);
    T6 = T10;
  }
  T3 = T6;
  T2 = T3;
  xF504 = T2;
  yF505 = VARREF(YLgen_cacheG);
  T12 = (P)YPeqQ(xF504,yF505);
  T11 = (P)YPbb(T12);
  T1 = T11;
  if (T1 != YPfalse) {
    xF506 = args_;
    T15 = (P)YPgen_cache_arg_pos(cache_);
    iF507 = T15;
    T17 = (P)YPopts_location(xF506);
    xF508 = iF507;
    xF509 = xF508;
    T21 = (P)YPiGG(xF509,(P)2);
    T20 = T21;
    T19 = T20;
    T18 = (P)YPi_((P)0,T19);
    T16 = (P)YPloc_off(T17,T18);
    T14 = T16;
    argF510 = T14;
    T24 = (P)YPgen_cache_singletons(cache_);
    assocsF511 = T24;
    T26 = (P)YPtlen(assocsF511);
    T27 = (P)YPgen_cache_missableQ(cache_);
    T25 = (P)Ygen_lookup_1_using(argF510,(P)0,T26,assocsF511,T27,gen_,args_);
    T23 = T25;
    valF512 = T23;
    xF513 = valF512;
    yF514 = VARREF(YDmissed_dispatch);
    T31 = (P)YPeqQ(xF513,yF514);
    T30 = (P)YPbb(T31);
    T29 = T30;
    if (T29 != YPfalse) {
      T33 = (P)YPgen_cache_classes(cache_);
      assocsF515 = T33;
      xF516 = argF510;
      xF517 = xF516;
      T38 = (P)YPiB(xF517,(P)3);
      T37 = T38;
      tagF518 = T37;
      T41 = (P)YPiE(tagF518,(P)0);
      T40 = (P)YPbb(T41);
      if (T40 != YPfalse) {
        T42 = (P)YPobject_class(xF516);
        T39 = T42;
      } else {
        T43 = (P)YPelt(VARREF(YDdirect_object_class),tagF518);
        T39 = T43;
      }
      T36 = T39;
      T35 = T36;
      T44 = (P)YPtlen(assocsF515);
      T34 = (P)Ygen_lookup_1_using(T35,(P)0,T44,assocsF515,YPfalse,gen_,args_);
      T32 = T34;
      T28 = T32;
    } else {
      T28 = valF512;
    }
    T22 = T28;
    T13 = T22;
    T0 = T13;
  } else {
    T0 = cache_;
  }
  return T0;
}

FUNCODEDEF(Ychoose_methods) {
  P gen_,args_;
  P ambiguous_metsF521;
  P sorted_metsF520;
  P ord_amb_metsF519;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
  T1 = CALL2(1,VARREF(Yord_app_metsT),gen_,args_);
  ord_amb_metsF519 = T1;
  T3 = (P)YOtelt(ord_amb_metsF519,YPint((P)0));
  sorted_metsF520 = T3;
  T5 = (P)YOtelt(ord_amb_metsF519,YPint((P)1));
  ambiguous_metsF521 = T5;
  T7 = (P)YOemptyQ(sorted_metsF520);
  if (T7 != YPfalse) {
    T8 = CALL2(1,VARREF(Yno_applicable_methods_error),gen_,args_);
    T6 = T8;
  } else {
    T6 = sorted_metsF520;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPdispatch) {
  P args_;
  P resF540;
  P xF539;
  P xF538;
  P iF537;
  P xF536;
  P xF535;
  P xF534;
  P iF533;
  P xF532;
  P xF531;
  P xF530;
  P iF529;
  P xF528;
  P yF527;
  P xF526;
  P xF525;
  P xF524;
  P xF523;
  P resultF522;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  NARGS(args_, 0);
  T2 = (P)YPfun_reg();
  T1 = (P)Ygen_lookup(T2,args_);
  resultF522 = T1;
  xF523 = resultF522;
  xF524 = xF523;
  T8 = (P)YPiB(xF524,(P)3);
  T7 = T8;
  T6 = (P)YPiE(T7,(P)1);
  T5 = (P)YPbb(T6);
  T4 = T5;
  if (T4 != YPfalse) {
    xF525 = args_;
    T13 = (P)YPopts_count(xF525);
    T12 = T13;
    xF526 = T12;
    yF527 = YPint((P)1);
    T15 = (P)YPiE(xF526,yF527);
    T14 = (P)YPbb(T15);
    T11 = T14;
    if (T11 != YPfalse) {
      xF528 = args_;
      iF529 = YPint((P)0);
      T19 = (P)YPopts_location(xF528);
      xF530 = iF529;
      xF531 = xF530;
      T23 = (P)YPiGG(xF531,(P)2);
      T22 = T23;
      T21 = T22;
      T20 = (P)YPi_((P)0,T21);
      T18 = (P)YPloc_off(T19,T20);
      T17 = T18;
      T16 = (P)Yprop_value_at(T17,resultF522);
      T10 = T16;
    } else {
      xF532 = args_;
      iF533 = YPint((P)0);
      T27 = (P)YPopts_location(xF532);
      xF534 = iF533;
      xF535 = xF534;
      T31 = (P)YPiGG(xF535,(P)2);
      T30 = T31;
      T29 = T30;
      T28 = (P)YPi_((P)0,T29);
      T26 = (P)YPloc_off(T27,T28);
      T25 = T26;
      xF536 = args_;
      iF537 = YPint((P)1);
      T34 = (P)YPopts_location(xF536);
      xF538 = iF537;
      xF539 = xF538;
      T38 = (P)YPiGG(xF539,(P)2);
      T37 = T38;
      T36 = T37;
      T35 = (P)YPi_((P)0,T36);
      T33 = (P)YPloc_off(T34,T35);
      T32 = T33;
      T24 = (P)Yprop_value_at_setter(T25,T32,resultF522);
      T10 = T24;
    }
    resF540 = T10;
    (P)YPunlink_stack();
    T9 = resF540;
    T3 = T9;
  } else {
    T40 = (P)YPhead(resultF522);
    T41 = (P)YPtail(resultF522);
    T39 = (P)YPraw_met_call(T40,T41);
    T3 = T39;
  }
  T0 = T3;
  QRET(T0);
}

FUNCODEDEF(YPpatch_early_generic) {
  P generic_;
  P T0,T1;
LINK_STACK();
  ARG(generic_, 0);
  T1 = (P)YPmet_code(VARREF(YPdispatch));
  T0 = (P)YPgen_code_setter(T1,generic_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_names) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_names),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_names_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_names_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_specs) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_specs),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_specs_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_specs_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_naryQ) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_naryQ),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_naryQ_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_naryQ_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_arity) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_arity),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_arity_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_arity_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_val) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_val),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_val_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_val_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_unification_vars) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_unification_vars),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_unification_vars_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_unification_vars_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yobject_class) {
  P x_;
  P tagF543;
  P xF542;
  P xF541;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  xF541 = x_;
  xF542 = xF541;
  T3 = (P)YPiB(xF542,(P)3);
  T2 = T3;
  tagF543 = T2;
  T6 = (P)YPiE(tagF543,(P)0);
  T5 = (P)YPbb(T6);
  if (T5 != YPfalse) {
    T7 = (P)YPobject_class(xF541);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF543);
    T4 = T8;
  }
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOclass_ancestors) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPclass_ancestors(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_tailQ_463) {
  P l_;
  P T0,T1;
LINK_STACK();
  ARG(l_, 0);
  T1 = (P)YOtail(l_);
  T0 = CALL2(1,VARREF(YOmemQ),T1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_candidate_464) {
  P c_;
  P tmpF544;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(c_, 0);
  T4 = FUNFAB(fun_tailQ_463,1,c_);
  T3 = CALL2(1,VARREF(YOanyQ),T4,FREEREF(0));
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF544 = T2;
  if (tmpF544 != YPfalse) {
    T5 = c_;
  } else {
    T5 = YPfalse;
  }
  T1 = T5;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_candidate_at_head_465) {
  P l_;
  P tmpF545;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(l_, 0);
  T2 = (P)YOemptyQ(l_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  tmpF545 = T1;
  if (tmpF545 != YPfalse) {
    T5 = (P)YOhead(l_);
    T4 = CALL1(1,FREEREF(0),T5);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_next_466) {
  P l_;
  P yF547;
  P xF546;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(l_, 0);
  T2 = (P)YOhead(l_);
  xF546 = T2;
  yF547 = FREEREF(0);
  T4 = (P)YPeqQ(xF546,yF547);
  T3 = (P)YPbb(T4);
  T1 = T3;
  if (T1 != YPfalse) {
    T5 = (P)YOtail(l_);
    T0 = T5;
  } else {
    T0 = l_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yclass_ordered_ancestors) {
  P c_;
  P nextF553;
  P candidate_at_headF552;
  P candidateF551;
  P remaining_listsF550;
  P partial_cplF549;
  P parentsF548;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(c_, 0);
  T1 = (P)YPclass_parents(c_);
  parentsF548 = T1;
  T3 = CALL1(1,VARREF(YOlst),c_);
  check_type(T3,VARREF(YLlstG));
  partial_cplF549 = T3;
  T5 = CALL2(1,VARREF(YOmap),VARREF(YOclass_ancestors),parentsF548);
  T4 = (P)YOadd(T5,parentsF548);
  check_type(T4,VARREF(YLlstG));
  remaining_listsF550 = T4;
  for (;;) {
    P a38_0,a38_1;
  loop38:
    T8 = CALL2(1,VARREF(YOallQ),VARREF(YOOemptyQ),remaining_listsF550);
    if (T8 != YPfalse) {
      T9 = CALL1(1,VARREF(YOrevX),partial_cplF549);
      T7 = T9;
    } else {
      T11 = FUNSHELL(1,fun_candidate_464,1);
      candidateF551 = T11;
      T12 = FUNSHELL(0,fun_candidate_at_head_465,1);
      candidate_at_headF552 = T12;
      FUNINIT(candidateF551, 1,remaining_listsF550);
      FUNINIT(candidate_at_headF552, 1,candidateF551);
      T14 = CALL2(1,VARREF(YOanyQ),candidate_at_headF552,remaining_listsF550);
      nextF553 = T14;
      if (nextF553 != YPfalse) {
        T17 = (P)YOpair(nextF553,partial_cplF549);
        T19 = FUNFAB(fun_del_next_466,1,nextF553);
        T18 = CALL2(1,VARREF(YOmap),T19,remaining_listsF550);
        a38_0 = T17;
        a38_1 = T18;
        partial_cplF549 = a38_0;
        remaining_listsF550 = a38_1;
        goto loop38;
        T15 = T16;
      } else {
        T20 = CALL1(1,VARREF(Ycpl_error),LITREF(lit_522));
        T15 = T20;
      }
      T13 = T15;
      T10 = T13;
      T7 = T10;
    }
    break;
  }
  T6 = T7;
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOclass_direct_props) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPclass_direct_props(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yclass_ordered_props) {
  P x_;
  P propsF554;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  T5 = (P)YPclass_ancestors(x_);
  T4 = CALL1(1,VARREF(YOrev),T5);
  T3 = CALL2(1,VARREF(YOmap),VARREF(YOclass_direct_props),T4);
  T2 = CALL3(1,VARREF(YOfold),VARREF(YOcat2),Ynil,T3);
  T1 = CALL1(1,VARREF(YOdel_dups),T2);
  propsF554 = T1;
  T6 = (P)YOlen(propsF554);
  (P)YPclass_prop_len_setter(T6,x_);
  T0 = propsF554;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Ydel_class) {
  P class_;
LINK_STACK();
  ARG(class_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_471) {
  P parent_;
  P T0,T1,T2;
LINK_STACK();
  ARG(parent_, 0);
  T2 = (P)YPclass_children(parent_);
  T1 = (P)YOadd_new(T2,FREEREF(0));
  T0 = (P)YPclass_children_setter(T1,parent_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_472) {
  P ancestor_;
  P xF558;
  P xF557;
  P xF556;
  P xF555;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(ancestor_, 0);
  xF555 = YPint((P)1);
  xF556 = xF555;
  T3 = (P)YPiGG(xF556,(P)2);
  T2 = T3;
  T1 = T2;
  T5 = (P)YPclass_id(ancestor_);
  xF557 = T5;
  xF558 = xF557;
  T7 = (P)YPiGG(xF558,(P)2);
  T6 = T7;
  T4 = T6;
  T0 = (P)YPselt_setter(T1,FREEREF(0),T4);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yinit_class) {
  P x_;
  P rowF573;
  P xF572;
  P xF571;
  P xF570;
  P xF569;
  P yF568;
  P xF567;
  P yF566;
  P xF565;
  P xF564;
  P xF563;
  P xF562;
  P xF561;
  P yF560;
  P xF559;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35;
LINK_STACK();
  ARG(x_, 0);
  xF559 = VARREF(YDmax_classes);
  yF560 = VARREF(YTnext_class_idT);
  xF561 = xF559;
  xF562 = xF561;
  T5 = (P)YPiGG(xF562,(P)2);
  T4 = T5;
  T3 = T4;
  xF563 = yF560;
  xF564 = xF563;
  T8 = (P)YPiGG(xF564,(P)2);
  T7 = T8;
  T6 = T7;
  T2 = (P)YPiL(T3,T6);
  T1 = (P)YPbb(T2);
  T0 = T1;
  if (T0 != YPfalse) {
    T9 = CALL2(1,VARREF(Yinternal_error),LITREF(lit_531),VARREF(YDmax_classes));
  } else {
  }
  T12 = (P)YPclass_parents(x_);
  T11 = (P)YOlen(T12);
  xF565 = T11;
  yF566 = YPint((P)0);
  T14 = (P)YPeqQ(xF565,yF566);
  T13 = (P)YPbb(T14);
  T10 = T13;
  if (T10 != YPfalse) {
    T15 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_532));
  } else {
  }
  (P)YPclass_id_setter(VARREF(YTnext_class_idT),x_);
  T16 = (P)YOA(VARREF(YTnext_class_idT),YPint((P)1));
  VARSET(YTnext_class_idT,T16);
  xF567 = x_;
  yF568 = VARREF(YLanyG);
  T20 = (P)YPeqQ(xF567,yF568);
  T19 = (P)YPbb(T20);
  T18 = T19;
  T17 = CALL1(1,VARREF(Ynot),T18);
  if (T17 != YPfalse) {
    T21 = FUNFAB(fun_471,1,x_);
    T22 = (P)YPclass_parents(x_);
    CALL2(1,VARREF(YOdo),T21,T22);
    T24 = CALL1(1,VARREF(Yclass_ordered_ancestors),x_);
    T23 = (P)YPclass_ancestors_setter(T24,x_);
  } else {
  }
  xF569 = VARREF(YDmax_classes);
  xF570 = xF569;
  T29 = (P)YPiGG(xF570,(P)2);
  T28 = T29;
  T27 = T28;
  xF571 = YPint((P)0);
  xF572 = xF571;
  T32 = (P)YPiGG(xF572,(P)2);
  T31 = T32;
  T30 = T31;
  T26 = (P)YPstr(T27,T30);
  rowF573 = T26;
  (P)YPclass_row_setter(rowF573,x_);
  T33 = FUNFAB(fun_472,1,rowF573);
  T34 = (P)YPclass_ancestors(x_);
  CALL2(1,VARREF(YOdo),T33,T34);
  T35 = CALL1(1,VARREF(Yclass_ordered_props),x_);
  (P)YPclass_props_setter(T35,x_);
  T25 = x_;
UNLINK_STACK();
  QRET(T25);
}

FUNCODEDEF(Yfab_class) {
  P name_,parents_;
  P xF574;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  ARG(parents_, 1);
  T1 = (P)YPclass(YPint((P)0),name_,parents_,Ynil,Ynil,Ynil,Ynil,Ynil,Ynil,YPfalse,YPfalse,YPint((P)-1),VARREF(Ynul));
  xF574 = T1;
  CALL1(1,VARREF(Yinit_class),xF574);
  T0 = xF574;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yrefab_class) {
  P old_class_,parents_;
  P new_classF575;
  P T0,T1,T2;
LINK_STACK();
  ARG(old_class_, 0);
  ARG(parents_, 1);
  T2 = (P)YPclass_direct_props(old_class_);
  T1 = CALL2(1,VARREF(Yfab_class),parents_,T2);
  new_classF575 = T1;
  (P)YPclass_forward_setter(new_classF575,old_class_);
  T0 = new_classF575;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yobject_props) {
  P x_;
  P tagF578;
  P xF577;
  P xF576;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(x_, 0);
  xF576 = x_;
  xF577 = xF576;
  T4 = (P)YPiB(xF577,(P)3);
  T3 = T4;
  tagF578 = T3;
  T7 = (P)YPiE(tagF578,(P)0);
  T6 = (P)YPbb(T7);
  if (T6 != YPfalse) {
    T8 = (P)YPobject_class(xF576);
    T5 = T8;
  } else {
    T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF578);
    T5 = T9;
  }
  T2 = T5;
  T1 = T2;
  T0 = (P)YPclass_props(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yobject_parents) {
  P x_;
  P tagF581;
  P xF580;
  P xF579;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(x_, 0);
  xF579 = x_;
  xF580 = xF579;
  T4 = (P)YPiB(xF580,(P)3);
  T3 = T4;
  tagF581 = T3;
  T7 = (P)YPiE(tagF581,(P)0);
  T6 = (P)YPbb(T7);
  if (T6 != YPfalse) {
    T8 = (P)YPobject_class(xF579);
    T5 = T8;
  } else {
    T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF581);
    T5 = T9;
  }
  T2 = T5;
  T1 = T2;
  T0 = (P)YPclass_parents(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yensure_fresh_object) {
  P x_;
  P tagF584;
  P xF583;
  P xF582;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(x_, 0);
  xF582 = x_;
  xF583 = xF582;
  T5 = (P)YPiB(xF583,(P)3);
  T4 = T5;
  tagF584 = T4;
  T8 = (P)YPiE(tagF584,(P)0);
  T7 = (P)YPbb(T8);
  if (T7 != YPfalse) {
    T9 = (P)YPobject_class(xF582);
    T6 = T9;
  } else {
    T10 = (P)YPelt(VARREF(YDdirect_object_class),tagF584);
    T6 = T10;
  }
  T3 = T6;
  T2 = T3;
  T1 = (P)YPclass_forward(T2);
  if (T1 != YPfalse) {
    T11 = CALL1(1,VARREF(Yupdate_instance_for_changed_class),x_);
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_offset) {
  P object_,getter_;
  P yF588;
  P xF587;
  P propsF586;
  P iF585;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
  iF585 = YPint((P)0);
  T2 = CALL1(1,VARREF(Yobject_props),object_);
  propsF586 = T2;
  for (;;) {
    P a39_0,a39_1;
  loop39:
    T5 = (P)YOemptyQ(propsF586);
    if (T5 != YPfalse) {
      T4 = VARREF(YDgetter_not_found);
    } else {
      T9 = (P)YOhead(propsF586);
      T8 = (P)YPprop_getter(T9);
      xF587 = T8;
      yF588 = getter_;
      T11 = (P)YPeqQ(xF587,yF588);
      T10 = (P)YPbb(T11);
      T7 = T10;
      if (T7 != YPfalse) {
        T6 = iF585;
      } else {
        T13 = (P)YOA(iF585,YPint((P)1));
        T14 = (P)YOtail(propsF586);
        a39_0 = T13;
        a39_1 = T14;
        iF585 = a39_0;
        propsF586 = a39_1;
        goto loop39;
        T6 = T12;
      }
      T4 = T6;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPprop_unbound_error) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  if (VARREF(YTreport_prop_unbound_errorsQT) != YPfalse) {
    T1 = CALL1(1,VARREF(Yproperty_unbound_error),x_);
    T0 = T1;
  } else {
    T0 = VARREF(Ynul);
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_value) {
  P object_,getter_;
  P yF591;
  P xF590;
  P offsetF589;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T1 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF589 = T1;
  xF590 = offsetF589;
  yF591 = VARREF(YDgetter_not_found);
  T5 = (P)YPiE(xF590,yF591);
  T4 = (P)YPbb(T5);
  T3 = T4;
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
    T2 = T6;
  } else {
    T7 = (P)Yprop_value_at(object_,offsetF589);
    T2 = T7;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_boundQ) {
  P object_,getter_;
  P yF594;
  P xF593;
  P offsetF592;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T1 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF592 = T1;
  xF593 = offsetF592;
  yF594 = VARREF(YDgetter_not_found);
  T5 = (P)YPiE(xF593,yF594);
  T4 = (P)YPbb(T5);
  T3 = T4;
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
    T2 = T6;
  } else {
    T7 = (P)Yprop_bound_atQ(object_,offsetF592);
    T2 = T7;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yprop_value_setter) {
  P z_,object_,getter_;
  P yF599;
  P xF598;
  P propF597;
  P propsF596;
  P iF595;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(z_, 0);
  ARG(object_, 1);
  ARG(getter_, 2);
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  iF595 = YPint((P)0);
  T1 = CALL1(1,VARREF(Yobject_props),object_);
  propsF596 = T1;
  for (;;) {
    P a40_0,a40_1;
  loop40:
    T4 = (P)YOemptyQ(propsF596);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
      T3 = T5;
    } else {
      T7 = (P)YOhead(propsF596);
      propF597 = T7;
      T10 = (P)YPprop_getter(propF597);
      xF598 = T10;
      yF599 = getter_;
      T12 = (P)YPeqQ(xF598,yF599);
      T11 = (P)YPbb(T12);
      T9 = T11;
      if (T9 != YPfalse) {
        T15 = (P)YPprop_type(propF597);
        T14 = CALL2(1,VARREF(YOisaQ),z_,T15);
        if (T14 != YPfalse) {
          T16 = (P)Yprop_value_at_setter(z_,object_,iF595);
          T13 = T16;
        } else {
          T18 = (P)YPprop_type(propF597);
          T17 = CALL3(1,VARREF(Yproperty_type_error),getter_,z_,T18);
          T13 = T17;
        }
        T8 = T13;
      } else {
        T20 = (P)YOA(iF595,YPint((P)1));
        T21 = (P)YOtail(propsF596);
        a40_0 = T20;
        a40_1 = T21;
        iF595 = a40_0;
        propsF596 = a40_1;
        goto loop40;
        T8 = T19;
      }
      T6 = T8;
      T3 = T6;
    }
    break;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfind_getter) {
  P owner_,getter_;
  P yF603;
  P xF602;
  P metF601;
  P metsF600;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  T2 = CALL1(1,VARREF(YOfun_mets),getter_);
  metsF600 = T2;
  for (;;) {
    P a41_0;
  loop41:
    T5 = (P)YOemptyQ(metsF600);
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,owner_);
      T4 = T6;
    } else {
      T8 = (P)YOhead(metsF600);
      metF601 = T8;
      T11 = CALL2(1,VARREF(Yfun_spec),metF601,YPint((P)0));
      xF602 = T11;
      yF603 = owner_;
      T13 = (P)YPeqQ(xF602,yF603);
      T12 = (P)YPbb(T13);
      T10 = T12;
      if (T10 != YPfalse) {
        T9 = metF601;
      } else {
        T15 = (P)YOtail(metsF600);
        a41_0 = T15;
        metsF600 = a41_0;
        goto loop41;
        T9 = T14;
      }
      T7 = T9;
      T4 = T7;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yfind_setter) {
  P owner_,type_,zetter_;
  P tmpF608;
  P yF607;
  P xF606;
  P metF605;
  P metsF604;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(owner_, 0);
  ARG(type_, 1);
  ARG(zetter_, 2);
  T2 = CALL1(1,VARREF(YOfun_mets),zetter_);
  metsF604 = T2;
  for (;;) {
    P a42_0;
  loop42:
    T5 = (P)YOemptyQ(metsF604);
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(Yproperty_not_found_error),zetter_,owner_);
      T4 = T6;
    } else {
      T8 = (P)YOhead(metsF604);
      metF605 = T8;
      T12 = CALL2(1,VARREF(Yfun_spec),metF605,YPint((P)1));
      xF606 = T12;
      yF607 = owner_;
      T14 = (P)YPeqQ(xF606,yF607);
      T13 = (P)YPbb(T14);
      T11 = T13;
      tmpF608 = T11;
      if (tmpF608 != YPfalse) {
        T17 = CALL2(1,VARREF(Yfun_spec),metF605,YPint((P)0));
        T16 = CALL2(1,VARREF(YOtype_equalQ),T17,type_);
        T15 = T16;
      } else {
        T15 = YPfalse;
      }
      T10 = T15;
      if (T10 != YPfalse) {
        T9 = metF605;
      } else {
        T19 = (P)YOtail(metsF604);
        a42_0 = T19;
        metsF604 = a42_0;
        goto loop42;
        T9 = T18;
      }
      T7 = T9;
      T4 = T7;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_486) {
  P g_;
  P T0;
LINK_STACK();
  ARG(g_, 0);
  T0 = (P)YPfun_cache_setter(YPfalse,g_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yforward_class) {
  P old_class_;
  P new_classF609;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(old_class_, 0);
  T1 = (P)YPclone(old_class_);
  new_classF609 = T1;
  T2 = fun_486;
  T3 = (P)YPclass_gens(old_class_);
  CALL2(1,VARREF(YOdo),T2,T3);
  T4 = (P)YPclass_forward_setter(new_classF609,old_class_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yclone) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = (P)YPclone(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_visit_489) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YOmemQ),T3,x_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = BOXVAL(FREEREF(0));
    T4 = (P)YOadd(T5,x_);
    BOXVAL(FREEREF(0)) = T4;
    CALL1(0,FREEREF(1),x_);
    T7 = (P)YPclass_children(x_);
    T6 = CALL2(1,VARREF(YOdo),FREEREF(2),T7);
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOdo_descendents) {
  P f_,x_;
  P visitF611;
  P visitedF610;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  visitedF610 = Ynil;
  visitedF610 = BOXFAB(visitedF610);
  T3 = FUNSHELL(0,fun_visit_489,3);
  visitF611 = T3;
  FUNINIT(visitF611, 3,visitedF610,f_,visitF611);
  T4 = CALL1(1,visitF611,x_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_491) {
  P prop_;
  P T0,T1;
LINK_STACK();
  ARG(prop_, 0);
  T1 = (P)YPprop_getter(prop_);
  T0 = (P)YPfun_cache_setter(YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfinalize_props) {
  P class_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(class_, 0);
  T0 = CALL1(1,VARREF(Yclass_ordered_props),class_);
  (P)YPclass_props_setter(T0,class_);
  T2 = fun_491;
  T3 = (P)YPclass_props(class_);
  T1 = CALL2(1,VARREF(YOdo),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YPprop) {
  P owner_,getter_,setter_,type_,init_;
  P setter_metF615;
  P getter_metF614;
  P propF613;
  P classF612;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  ARG(setter_, 2);
  ARG(type_, 3);
  ARG(init_, 4);
  classF612 = owner_;
  T2 = CALLN(1,VARREF(YOnew),11,VARREF(YLpropG),VARREF(Yprop_owner),owner_,VARREF(Yprop_getter),getter_,VARREF(Yprop_setter),setter_,VARREF(Yprop_type),type_,VARREF(Yprop_init),init_);
  propF613 = T2;
  T4 = CALL2(1,VARREF(Yfind_getter),owner_,getter_);
  getter_metF614 = T4;
  T6 = CALL3(1,VARREF(Yfind_setter),owner_,type_,setter_);
  setter_metF615 = T6;
  (P)YPmet_env_setter(propF613,getter_metF614);
  (P)YPmet_env_setter(propF613,setter_metF615);
  T8 = (P)YPclass_direct_props(classF612);
  T9 = CALL1(1,VARREF(YOlst),propF613);
  T7 = CALL2(1,VARREF(YOcat2),T8,T9);
  (P)YPclass_direct_props_setter(T7,classF612);
  CALL2(1,VARREF(YOdo_descendents),VARREF(Yfinalize_props),owner_);
  T5 = propF613;
  T3 = T5;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

P YPupdate_instance_for_changed_class(P new_object_) {
DEFCREGS();
  return new_object_;
}

FUNCODEDEF(Yupdate_instance_for_changed_class) {
  P object_;
  P T0;
LINK_STACK();
  ARG(object_, 0);
  T0 = (P)YPupdate_instance_for_changed_class(object_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ypatch_early_classes) {
  P T0,T1;
LINK_STACK();
  T0 = CALL1(1,VARREF(YOrevX),VARREF(YTearly_classesT));
  VARSET(YTearly_classesT,T0);
  CALL2(1,VARREF(YOdo),VARREF(Yinit_class),VARREF(YTearly_classesT));
  T1 = VARSET(YPclasses_readyQ,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(Yfab_gen) {
  P name_,names_,specs_,naryQ_,val_,mets_;
  P gF616;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  ARG(names_, 1);
  ARG(specs_, 2);
  ARG(naryQ_, 3);
  ARG(val_, 4);
  ARG(mets_, 5);
  T3 = (P)YOlen(specs_);
  T2 = CALLN(1,VARREF(YOnew),11,VARREF(YLsigG),VARREF(Ysig_names),names_,VARREF(Ysig_specs),specs_,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),T3,VARREF(Ysig_val),val_);
  T1 = CALLN(1,VARREF(YOnew),7,VARREF(YLgenG),VARREF(Yfun_name),name_,VARREF(Yfun_sig),T2,VARREF(Yfun_mets),mets_);
  gF616 = T1;
  T4 = (P)YPmet_code(VARREF(YPdispatch));
  (P)YPgen_code_setter(T4,gF616);
  T0 = gF616;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_498) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

FUNCODEDEF(Ygen_from_met) {
  P x_;
  P specsF617;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  T2 = fun_498;
  T3 = CALL1(1,VARREF(YOfun_specs),x_);
  T1 = CALL2(1,VARREF(YOmap),T2,T3);
  specsF617 = T1;
  T5 = CALL1(1,VARREF(Yfun_name),x_);
  T6 = CALL1(1,VARREF(YOfun_naryQ),x_);
  T4 = CALLN(1,VARREF(Yfab_gen),6,T5,Ynil,specsF617,T6,VARREF(YLanyG),Ynil);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPdefine_method) {
  P gen_,met_;
  P tmpF618;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  tmpF618 = gen_;
  if (tmpF618 != YPfalse) {
    T2 = tmpF618;
  } else {
    T3 = CALL1(1,VARREF(Ygen_from_met),met_);
    T2 = T3;
  }
  T1 = T2;
  T0 = CALL2(1,VARREF(Ygen_add_met),T1,met_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yunexec) {
  P name_,fun_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  ARG(fun_, 1);
  VARSET(YPTstart_running_atT,fun_);
  T1 = (P)YPsu(name_);
  T0 = (P)YPunexec(T1);
UNLINK_STACK();
  QRET(T0);
}

INLINE P YPnew(P parent_,P inits_) {
  P valF640;
  P xF639;
  P xF638;
  P iF637;
  P xF636;
  P getterF635;
  P xF634;
  P xF633;
  P iF632;
  P xF631;
  P xF630;
  P xF629;
  P xF628;
  P xF627;
  P yF626;
  P xF625;
  P iF624;
  P numF623;
  P xF622;
  P objectF621;
  P xF620;
  P xF619;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
DEFCREGS();
  T3 = (P)YPclass_prop_len(parent_);
  xF619 = T3;
  xF620 = xF619;
  T5 = (P)YPiGG(xF620,(P)2);
  T4 = T5;
  T2 = T4;
  T1 = (P)YPobject_of(parent_,T2);
  objectF621 = T1;
  xF622 = inits_;
  T8 = (P)YPopts_count(xF622);
  T7 = T8;
  numF623 = T7;
  iF624 = YPint((P)0);
  for (;;) {
    P a43_0;
  loop43:
    xF625 = iF624;
    yF626 = numF623;
    xF627 = xF625;
    xF628 = xF627;
    T16 = (P)YPiGG(xF628,(P)2);
    T15 = T16;
    T14 = T15;
    xF629 = yF626;
    xF630 = xF629;
    T19 = (P)YPiGG(xF630,(P)2);
    T18 = T19;
    T17 = T18;
    T13 = (P)YPiL(T14,T17);
    T12 = (P)YPbb(T13);
    T11 = T12;
    if (T11 != YPfalse) {
      xF631 = inits_;
      iF632 = iF624;
      T23 = (P)YPopts_location(xF631);
      xF633 = iF632;
      xF634 = xF633;
      T27 = (P)YPiGG(xF634,(P)2);
      T26 = T27;
      T25 = T26;
      T24 = (P)YPi_((P)0,T25);
      T22 = (P)YPloc_off(T23,T24);
      T21 = T22;
      getterF635 = T21;
      xF636 = inits_;
      T30 = (P)YOA(iF624,YPint((P)1));
      iF637 = T30;
      T32 = (P)YPopts_location(xF636);
      xF638 = iF637;
      xF639 = xF638;
      T36 = (P)YPiGG(xF639,(P)2);
      T35 = T36;
      T34 = T35;
      T33 = (P)YPi_((P)0,T34);
      T31 = (P)YPloc_off(T32,T33);
      T29 = T31;
      valF640 = T29;
      XCALL3(1,VARREF(Yprop_value_setter),valF640,objectF621,getterF635);
      T38 = (P)YOA(iF624,YPint((P)2));
      a43_0 = T38;
      iF624 = a43_0;
      goto loop43;
      T28 = T37;
      T20 = T28;
      T10 = T20;
    } else {
      T10 = YPfalse;
    }
    break;
  }
  T9 = T10;
  T6 = objectF621;
  T0 = T6;
  return T0;
}

FUNCODEDEF(YOnew) {
  P parent_,inits_;
  P T0;
LINK_STACK();
  ARG(parent_, 0);
  NARGS(inits_, 1);
  T0 = (P)YPnew(parent_,inits_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_504) {
  P parent_,inits_;
  P T0;
LINK_STACK();
  ARG(parent_, 0);
  NARGS(inits_, 1);
  T0 = (P)YPnew(parent_,inits_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_505) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  T0 = CALL2(1,VARREF(YOsubtypeQ),t_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_subtypeQ_506) {
  P t1_,t2_;
  P T0,T1,T2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = FUNFAB(fun_505,1,t2_);
  T2 = (P)YPunion_elts(t1_);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_507) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  T0 = CALL2(1,VARREF(YOsubtypeQ),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_subtypeQ_508) {
  P t1_,t2_;
  P T0,T1,T2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = FUNFAB(fun_507,1,t1_);
  T2 = (P)YPunion_elts(t2_);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_509) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  T0 = CALL2(1,VARREF(YOsubtypeQ),t_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_subtypeQ_510) {
  P t1_,t2_;
  P T0,T1,T2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = FUNFAB(fun_509,1,t2_);
  T2 = (P)YPunion_elts(t1_);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_511) {
  P t1_,t2_;
  P xF646;
  P xF645;
  P xF644;
  P xF643;
  P c2F642;
  P c1F641;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  c1F641 = t1_;
  c2F642 = t2_;
  T4 = (P)YPclass_row(c1F641);
  T6 = (P)YPclass_id(c2F642);
  xF643 = T6;
  xF644 = xF643;
  T8 = (P)YPiGG(xF644,(P)2);
  T7 = T8;
  T5 = T7;
  T3 = (P)YPselt(T4,T5);
  xF645 = YPint((P)1);
  xF646 = xF645;
  T11 = (P)YPiGG(xF646,(P)2);
  T10 = T11;
  T9 = T10;
  T2 = (P)YPiE(T3,T9);
  T1 = (P)YPbb(T2);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_512) {
  P t1_,t2_;
  P T0,T1;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = (P)YPtype_object(t1_);
  T0 = CALL2(1,VARREF(YOisaQ),T1,t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_513) {
  P t1_,t2_;
  P xF652;
  P xF651;
  P xF650;
  P xF649;
  P c2F648;
  P c1F647;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  c1F647 = VARREF(YLclassG);
  c2F648 = t2_;
  T4 = (P)YPclass_row(c1F647);
  T6 = (P)YPclass_id(c2F648);
  xF649 = T6;
  xF650 = xF649;
  T8 = (P)YPiGG(xF650,(P)2);
  T7 = T8;
  T5 = T7;
  T3 = (P)YPselt(T4,T5);
  xF651 = YPint((P)1);
  xF652 = xF651;
  T11 = (P)YPiGG(xF652,(P)2);
  T10 = T11;
  T9 = T10;
  T2 = (P)YPiE(T3,T9);
  T1 = (P)YPbb(T2);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_514) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_515) {
  P t1_,t2_;
  P T0,T1;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = (P)YPtype_object(t1_);
  T0 = (P)YOsingleton_isaQ(T1,t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_516) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_517) {
  P t1_,t2_;
  P yF657;
  P xF656;
  P tmpF655;
  P yF654;
  P xF653;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF653 = t1_;
  yF654 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF653,yF654);
  T2 = (P)YPbb(T3);
  T1 = T2;
  tmpF655 = T1;
  if (tmpF655 != YPfalse) {
    T6 = (P)YPtype_class(t2_);
    xF656 = T6;
    yF657 = VARREF(YLclassG);
    T8 = (P)YPeqQ(xF656,yF657);
    T7 = (P)YPbb(T8);
    T5 = T7;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_518) {
  P t1_,t2_;
  P xF663;
  P xF662;
  P xF661;
  P xF660;
  P c2F659;
  P c1F658;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = (P)YPtype_class(t1_);
  c1F658 = T1;
  T2 = (P)YPtype_class(t2_);
  c2F659 = T2;
  T6 = (P)YPclass_row(c1F658);
  T8 = (P)YPclass_id(c2F659);
  xF660 = T8;
  xF661 = xF660;
  T10 = (P)YPiGG(xF661,(P)2);
  T9 = T10;
  T7 = T9;
  T5 = (P)YPselt(T6,T7);
  xF662 = YPint((P)1);
  xF663 = xF662;
  T13 = (P)YPiGG(xF663,(P)2);
  T12 = T13;
  T11 = T12;
  T4 = (P)YPiE(T5,T11);
  T3 = (P)YPbb(T4);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_519) {
  P t1_,t2_;
  P xF670;
  P xF669;
  P xF668;
  P xF667;
  P c2F666;
  P c1F665;
  P tmpF664;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T2 = (P)YPtype_object(t1_);
  T1 = CALL2(1,VARREF(YOisaQ),T2,VARREF(YLclassG));
  tmpF664 = T1;
  if (tmpF664 != YPfalse) {
    T5 = (P)YPtype_object(t1_);
    c1F665 = T5;
    T6 = (P)YPtype_class(t2_);
    c2F666 = T6;
    T10 = (P)YPclass_row(c1F665);
    T12 = (P)YPclass_id(c2F666);
    xF667 = T12;
    xF668 = xF667;
    T14 = (P)YPiGG(xF668,(P)2);
    T13 = T14;
    T11 = T13;
    T9 = (P)YPselt(T10,T11);
    xF669 = YPint((P)1);
    xF670 = xF669;
    T17 = (P)YPiGG(xF670,(P)2);
    T16 = T17;
    T15 = T16;
    T8 = (P)YPiE(T9,T15);
    T7 = (P)YPbb(T8);
    T4 = T7;
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_520) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_521) {
  P t1_,t2_;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_522) {
  P t1_,t2_;
  P tmpF675;
  P yF674;
  P xF673;
  P teT2F672;
  P teT1F671;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T1 = (P)YPproduct_elts(t1_);
  teT1F671 = T1;
  T3 = (P)YPproduct_elts(t2_);
  teT2F672 = T3;
  T6 = (P)YOtlen(teT1F671);
  xF673 = T6;
  T7 = (P)YOtlen(teT2F672);
  yF674 = T7;
  T9 = (P)YPeqQ(xF673,yF674);
  T8 = (P)YPbb(T9);
  T5 = T8;
  tmpF675 = T5;
  if (tmpF675 != YPfalse) {
    T11 = CALL3(1,VARREF(YOtall2Q),VARREF(YsubtypeQ),teT1F671,teT2F672);
    T10 = T11;
  } else {
    T10 = YPfalse;
  }
  T4 = T10;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_523) {
  P t1_,t2_;
  P T0;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T0 = CALL2(1,VARREF(YsubtypeQ),VARREF(YLtupG),t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isaQ_524) {
  P o_,t_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  T0 = (P)YOclass_isaQ(o_,t_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isaQ_525) {
  P o_,t_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  T0 = (P)YOsingleton_isaQ(o_,t_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isaQ_526) {
  P o_,t_;
  P xF682;
  P xF681;
  P xF680;
  P xF679;
  P c2F678;
  P c1F677;
  P tmpF676;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  T1 = CALL2(1,VARREF(YOisaQ),o_,VARREF(YLclassG));
  tmpF676 = T1;
  if (tmpF676 != YPfalse) {
    c1F677 = o_;
    T4 = (P)YPtype_class(t_);
    c2F678 = T4;
    T8 = (P)YPclass_row(c1F677);
    T10 = (P)YPclass_id(c2F678);
    xF679 = T10;
    xF680 = xF679;
    T12 = (P)YPiGG(xF680,(P)2);
    T11 = T12;
    T9 = T11;
    T7 = (P)YPselt(T8,T9);
    xF681 = YPint((P)1);
    xF682 = xF681;
    T15 = (P)YPiGG(xF682,(P)2);
    T14 = T15;
    T13 = T14;
    T6 = (P)YPiE(T7,T13);
    T5 = (P)YPbb(T6);
    T3 = T5;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_527) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  T0 = CALL2(1,VARREF(YOisaQ),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_isaQ_528) {
  P o_,u_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(u_, 1);
  T1 = FUNFAB(fun_527,1,o_);
  T2 = (P)YPunion_elts(u_);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isaQ_529) {
  P o_,t_;
  P tmpF687;
  P yF686;
  P xF685;
  P tmpF684;
  P teTF683;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  T1 = (P)YPproduct_elts(t_);
  teTF683 = T1;
  T3 = CALL2(1,VARREF(YisaQ),o_,VARREF(YLtupG));
  tmpF684 = T3;
  if (tmpF684 != YPfalse) {
    T7 = (P)YOtlen(o_);
    xF685 = T7;
    T8 = (P)YOtlen(teTF683);
    yF686 = T8;
    T10 = (P)YPeqQ(xF685,yF686);
    T9 = (P)YPbb(T10);
    T6 = T9;
    tmpF687 = T6;
    if (tmpF687 != YPfalse) {
      T12 = CALL3(1,VARREF(YOtall2Q),VARREF(YisaQ),o_,teTF683);
      T11 = T12;
    } else {
      T11 = YPfalse;
    }
    T5 = T11;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_530) {
  P t1_,t2_,arg_;
  P T0;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_402),t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_531) {
  P t1_,t2_,arg_;
  P T0;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_403),t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_532) {
  P t1_,t2_,arg_;
  P yF691;
  P xF690;
  P c2F689;
  P c1F688;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T1 = (P)YPtype_class(t1_);
  c1F688 = T1;
  T3 = (P)YPtype_class(t2_);
  c2F689 = T3;
  xF690 = c1F688;
  yF691 = c2F689;
  T7 = (P)YPeqQ(xF690,yF691);
  T6 = (P)YPbb(T7);
  T5 = T6;
  if (T5 != YPfalse) {
    T8 = CALL2(1,VARREF(YOtup),LITREF(lit_402),t1_);
    T4 = T8;
  } else {
    T10 = CALL3(1,VARREF(YOclassL),c1F688,c2F689,arg_);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YOtup),LITREF(lit_403),t1_);
      T9 = T11;
    } else {
      if (YPtrue != YPfalse) {
        T13 = CALL2(1,VARREF(YOtup),LITREF(lit_404),t2_);
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T9 = T12;
    }
    T4 = T9;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_533) {
  P t1_,t2_,arg_;
  P yF693;
  P xF692;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T2 = CALL2(1,VARREF(YOsubtypeQ),VARREF(YLclassG),t2_);
  if (T2 != YPfalse) {
    xF692 = t1_;
    yF693 = VARREF(YLanyG);
    T6 = (P)YPeqQ(xF692,yF693);
    T5 = (P)YPbb(T6);
    T4 = T5;
    if (T4 != YPfalse) {
      T7 = CALL3(1,VARREF(Yorder_specs),VARREF(YLclassG),t2_,arg_);
      T3 = T7;
    } else {
      T3 = LITREF(lit_403);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_409);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_534) {
  P t1_,t2_,arg_;
  P yF695;
  P xF694;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T2 = CALL2(1,VARREF(YOsubtypeQ),VARREF(YLclassG),t1_);
  if (T2 != YPfalse) {
    xF694 = t2_;
    yF695 = VARREF(YLanyG);
    T6 = (P)YPeqQ(xF694,yF695);
    T5 = (P)YPbb(T6);
    T4 = T5;
    if (T4 != YPfalse) {
      T7 = CALL3(1,VARREF(Yorder_specs),t1_,VARREF(YLclassG),arg_);
      T3 = T7;
    } else {
      T3 = LITREF(lit_404);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_409);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_535) {
  P t1_,t2_,arg_;
  P T0;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T0 = CALL3(1,VARREF(YOorder_specs_class),t1_,t2_,arg_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_536) {
  P t1_,t2_,arg_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T1 = CALL2(1,VARREF(YOsubtypeQ),t1_,t2_);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YOsubtypeQ),t2_,t1_);
    if (T4 != YPfalse) {
      T3 = LITREF(lit_402);
    } else {
      T3 = LITREF(lit_403);
    }
    T2 = CALL2(1,VARREF(YOtup),T3,t1_);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YOsubtypeQ),t2_,t1_);
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YOtup),LITREF(lit_404),t2_);
      T5 = T7;
    } else {
      T8 = CALL2(1,VARREF(YOtup),LITREF(lit_409),VARREF(YLanyG));
      T5 = T8;
    }
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_537) {
  P c_,t_;
  P xF701;
  P xF700;
  P xF699;
  P xF698;
  P c2F697;
  P c1F696;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  c1F696 = c_;
  c2F697 = t_;
  T5 = (P)YPclass_row(c1F696);
  T7 = (P)YPclass_id(c2F697);
  xF698 = T7;
  xF699 = xF698;
  T9 = (P)YPiGG(xF699,(P)2);
  T8 = T9;
  T6 = T8;
  T4 = (P)YPselt(T5,T6);
  xF700 = YPint((P)1);
  xF701 = xF700;
  T12 = (P)YPiGG(xF701,(P)2);
  T11 = T12;
  T10 = T11;
  T3 = (P)YPiE(T4,T10);
  T2 = (P)YPbb(T3);
  T1 = T2;
  if (T1 != YPfalse) {
    T13 = CALL2(1,VARREF(YOtup),YPtrue,YPtrue);
    T0 = T13;
  } else {
    T14 = CALL2(1,VARREF(YOtup),YPfalse,YPfalse);
    T0 = T14;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_538) {
  P c_,t_;
  P tagF704;
  P xF703;
  P xF702;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  T3 = (P)YPtype_object(t_);
  xF702 = T3;
  xF703 = xF702;
  T6 = (P)YPiB(xF703,(P)3);
  T5 = T6;
  tagF704 = T5;
  T9 = (P)YPiE(tagF704,(P)0);
  T8 = (P)YPbb(T9);
  if (T8 != YPfalse) {
    T10 = (P)YPobject_class(xF702);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF704);
    T7 = T11;
  }
  T4 = T7;
  T2 = T4;
  T1 = CALL2(1,VARREF(YOmay_isaQ),T2,c_);
  T0 = CALL2(1,VARREF(YOtup),T1,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_539) {
  P c_,t_;
  P yF708;
  P xF707;
  P tmpF706;
  P classQF705;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  T1 = CALL2(1,VARREF(YOsubtypeQ),c_,VARREF(YLclassG));
  classQF705 = T1;
  tmpF706 = classQF705;
  if (tmpF706 != YPfalse) {
    T6 = (P)YPtype_class(c_);
    xF707 = T6;
    yF708 = VARREF(YLanyG);
    T8 = (P)YPeqQ(xF707,yF708);
    T7 = (P)YPbb(T8);
    T5 = T7;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  T2 = CALL2(1,VARREF(YOtup),classQF705,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_540) {
  P c_,t_;
  P tmpF716;
  P tmpF715;
  P elt_allQF714;
  P elt_someQF713;
  P elt_some_allQF712;
  P eltsF711;
  P allQF710;
  P someQF709;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  someQF709 = YPfalse;
  allQF710 = YPfalse;
  T2 = (P)YPunion_elts(t_);
  eltsF711 = T2;
  for (;;) {
    P a44_0,a44_1,a44_2;
  loop44:
    T5 = (P)YOemptyQ(eltsF711);
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YOtup),someQF709,allQF710);
      T4 = T6;
    } else {
      T9 = (P)YOhead(eltsF711);
      T8 = CALL2(1,VARREF(YOmay_isaQ),c_,T9);
      elt_some_allQF712 = T8;
      T11 = (P)YOtelt(elt_some_allQF712,YPint((P)0));
      elt_someQF713 = T11;
      T13 = (P)YOtelt(elt_some_allQF712,YPint((P)1));
      elt_allQF714 = T13;
      tmpF715 = elt_someQF713;
      if (tmpF715 != YPfalse) {
        T16 = tmpF715;
      } else {
        T16 = someQF709;
      }
      T15 = T16;
      tmpF716 = elt_allQF714;
      if (tmpF716 != YPfalse) {
        T18 = tmpF716;
      } else {
        T18 = allQF710;
      }
      T17 = T18;
      T19 = (P)YOtail(eltsF711);
      a44_0 = T15;
      a44_1 = T17;
      a44_2 = T19;
      someQF709 = a44_0;
      allQF710 = a44_1;
      eltsF711 = a44_2;
      goto loop44;
      T12 = T14;
      T10 = T12;
      T7 = T10;
      T4 = T7;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_541) {
  P t_;
  P T0,T1;
LINK_STACK();
  ARG(t_, 0);
  T1 = CALL2(1,VARREF(Ymay_isaQ),VARREF(YLanyG),t_);
  T0 = (P)YOtelt(T1,YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_may_isaQ_542) {
  P c_,t_;
  P someQF721;
  P tmpF720;
  P tupQF719;
  P yF718;
  P xF717;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  xF717 = c_;
  yF718 = VARREF(YLtupG);
  T3 = (P)YPeqQ(xF717,yF718);
  T2 = (P)YPbb(T3);
  T1 = T2;
  tupQF719 = T1;
  tmpF720 = tupQF719;
  if (tmpF720 != YPfalse) {
    T8 = fun_541;
    T9 = (P)YPproduct_elts(t_);
    T7 = CALL2(1,VARREF(YOtanyQ),T8,T9);
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  someQF721 = T5;
  T10 = CALL2(1,VARREF(Ytup),tupQF719,someQF721);
  T4 = T10;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

P YPmacro(P modname_,P name_,P expander_) {
  P T0,T1,T2,T3,T4;
DEFCREGS();
  if (VARREF(YTmacros_okQT) != YPfalse) {
    T0 = XCALL4(1,VARREF(YPPmacro),modname_,name_,expander_,YPfalse);
  } else {
    T1 = (P)YOpair(modname_,VARREF(YTboot_macro_module_namesT));
    VARSET(YTboot_macro_module_namesT,T1);
    T2 = (P)YOpair(name_,VARREF(YTboot_macro_namesT));
    VARSET(YTboot_macro_namesT,T2);
    T4 = (P)YOpair(expander_,VARREF(YTboot_macro_expandersT));
    T3 = VARSET(YTboot_macro_expandersT,T4);
  }
  return YPfalse;
}

P Y___main_0___() {
  P T0;
DEFCREGS();
  T0 = YPfalse;
  return T0;
}

P Y___main_1___() {
  P T0;
DEFCREGS();
  T0 = YPfalse;
  return T0;
}

P Y___main_2___() {
  P T0;
DEFCREGS();
  VARSET(YPfalse,(P)0);
  VARSET(YPtrue,(P)1);
  VARSET(YPTused_symbols_too_earlyT,(P)0);
  T0 = YPfalse;
  return T0;
}

P Y___main_3___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
DEFCREGS();
  T0 = (P)YPobject_of((P)0,(P)10);
  VARSET(YLclassG,T0);
  T1 = (P)YPobject_of(VARREF(YLclassG),(P)10);
  VARSET(YLlstG,T1);
  T2 = (P)YPobject_of(VARREF(YLlstG),(P)2);
  VARSET(Ynil,T2);
  VARSET(Yone_nil,VARREF(Ynil));
  T3 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLanyG,T3);
  T4 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlogG,T4);
  T5 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLmagG,T5);
  T6 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLchrG,T6);
  T7 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsrc_locG,T7);
  T8 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLnumG,T8);
  T9 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLintG,T9);
  T10 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfixnumG,T10);
  T11 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfloG,T11);
  T12 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlocG,T12);
  T13 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLrepG,T13);
  T14 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolG,T14);
  T15 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolIG,T15);
  T16 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolXG,T16);
  T17 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqG,T17);
  T18 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqIG,T18);
  T19 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqXG,T19);
  T20 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlstG,T20);
  T21 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLflatG,T21);
  T22 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLtupG,T22);
  T23 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLstrG,T23);
  T24 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsymG,T24);
  T25 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLtypeG,T25);
  T26 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLclassG,T26);
  T27 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsingletonG,T27);
  T28 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsubclassG,T28);
  T29 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLunionG,T29);
  T30 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLproductG,T30);
  T31 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLpropG,T31);
  T32 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLgen_cacheG,T32);
  T33 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsigG,T33);
  T34 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfunG,T34);
  T35 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLmetG,T35);
  T36 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLgenG,T36);
  T37 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLoptsG,T37);
  T38 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLopts_tupG,T38);
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLanyG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLlogG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLmagG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLchrG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLsrc_locG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLnumG));
  T40 = (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLintG));
  T39 = T40;
  return T39;
}

P Y___main_4___() {
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLfixnumG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLfloG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLlocG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLrepG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLcolG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLcolIG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLcolXG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLseqG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLseqIG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLseqXG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLlstG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLflatG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLtupG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLstrG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLsymG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLtypeG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLclassG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLsingletonG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLsubclassG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLunionG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLproductG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLpropG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLgen_cacheG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLsigG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLfunG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLmetG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLgenG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLoptsG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLopts_tupG));
  (P)YPobject_class_setter(VARREF(YLlstG),VARREF(Ynil));
  T0 = (P)YPobject_of(VARREF(YLanyG),(P)0);
  VARSET(Ynul,T0);
  T1 = (P)YPobject_of(VARREF(YLanyG),(P)0);
  VARSET(Ynul_prop,T1);
  T2 = (P)YPobject_of(VARREF(YLlogG),(P)0);
  VARSET(YPtrue,T2);
  T3 = (P)YPobject_of(VARREF(YLlogG),(P)0);
  VARSET(YPfalse,T3);
  T4 = (P)YPobject_of(VARREF(YLlstG),(P)0);
  VARSET(Ynil,T4);
  VARSET(YPclasses_readyQ,YPfalse);
  VARSET(Ynil,VARREF(Yone_nil));
  (P)YPhead_setter(VARREF(Ynil),VARREF(Ynil));
  (P)YPtail_setter(VARREF(Ynil),VARREF(Ynil));
  T5 = YPfalse;
  return T5;
}

P Y___main_5___() {
  P xF748;
  P xF747;
  P tF746;
  P xF745;
  P xF744;
  P xF743;
  P xF742;
  P xF741;
  P xF740;
  P xF739;
  P xF738;
  P tF737;
  P xF736;
  P xF735;
  P xF734;
  P xF733;
  P xF732;
  P xF731;
  P xF730;
  P xF729;
  P xF728;
  P xF727;
  P tF726;
  P xF725;
  P xF724;
  P xF723;
  P xF722;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
DEFCREGS();
  VARSET(YPmet_prop_len,(P)4);
  VARSET(YPsymbols_readyQ,YPfalse);
  VARSET(YPTstart_running_atT,VARREF(Ynil));
  T0 = (P)YPraw_alloc((P)4);
  VARSET(YDdirect_object_class,T0);
  (P)YPelt_setter(VARREF(YLfixnumG),VARREF(YDdirect_object_class),(P)1);
  (P)YPelt_setter(VARREF(YLchrG),VARREF(YDdirect_object_class),(P)2);
  (P)YPelt_setter(VARREF(YLlocG),VARREF(YDdirect_object_class),(P)3);
  xF722 = YPint((P)32);
  xF723 = xF722;
  T5 = (P)YPiGG(xF723,(P)2);
  T4 = T5;
  T3 = T4;
  T2 = (P)YPi_(T3,(P)2);
  xF724 = T2;
  xF725 = xF724;
  tF726 = (P)1;
  T8 = (P)YPiLL(xF725,(P)2);
  T7 = (P)YPiv(T8,tF726);
  T6 = T7;
  T1 = T6;
  VARSET(YDnum_int_bits,T1);
  xF727 = YPint((P)1);
  xF728 = xF727;
  T14 = (P)YPiGG(xF728,(P)2);
  T13 = T14;
  T12 = T13;
  xF729 = VARREF(YDnum_int_bits);
  xF730 = xF729;
  T18 = (P)YPiGG(xF730,(P)2);
  T17 = T18;
  T16 = T17;
  xF731 = YPint((P)1);
  xF732 = xF731;
  T21 = (P)YPiGG(xF732,(P)2);
  T20 = T21;
  T19 = T20;
  T15 = (P)YPi_(T16,T19);
  T11 = (P)YPiLL(T12,T15);
  xF733 = YPint((P)1);
  xF734 = xF733;
  T24 = (P)YPiGG(xF734,(P)2);
  T23 = T24;
  T22 = T23;
  T10 = (P)YPi_(T11,T22);
  xF735 = T10;
  xF736 = xF735;
  tF737 = (P)1;
  T27 = (P)YPiLL(xF736,(P)2);
  T26 = (P)YPiv(T27,tF737);
  T25 = T26;
  T9 = T25;
  VARSET(YDmax_int,T9);
  xF738 = YPint((P)1);
  xF739 = xF738;
  T32 = (P)YPiGG(xF739,(P)2);
  T31 = T32;
  T30 = T31;
  xF740 = VARREF(YDnum_int_bits);
  xF741 = xF740;
  T36 = (P)YPiGG(xF741,(P)2);
  T35 = T36;
  T34 = T35;
  xF742 = YPint((P)1);
  xF743 = xF742;
  T39 = (P)YPiGG(xF743,(P)2);
  T38 = T39;
  T37 = T38;
  T33 = (P)YPi_(T34,T37);
  T29 = (P)YPiLL(T30,T33);
  xF744 = T29;
  xF745 = xF744;
  tF746 = (P)1;
  T42 = (P)YPiLL(xF745,(P)2);
  T41 = (P)YPiv(T42,tF746);
  T40 = T41;
  T28 = T40;
  VARSET(YDmin_int,T28);
  xF747 = YPchr((P)32);
  xF748 = xF747;
  T46 = (P)YPiGG(xF748,(P)2);
  T45 = T46;
  T44 = T45;
  T43 = (P)YPstrX((P)0,T44);
  VARSET(YPsnul,T43);
  T47 = (P)YPtupX((P)0,VARREF(Ynul));
  VARSET(YPtnul,T47);
  T48 = (P)YPrepX((P)0,VARREF(Ynul));
  VARSET(YPrnul,T48);
  VARSET(YTearly_classesT,VARREF(Ynil));
  T49 = YPfalse;
  return T49;
}

P Y___main_6___() {
  P tF751;
  P xF750;
  P xF749;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56;
DEFCREGS();
  T0 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLanyG),T0);
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLlogG),T1);
  T2 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLmagG),T2);
  T3 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLchrG),T3);
  T4 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLsrc_locG),T4);
  T5 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLnumG),T5);
  T6 = (P)YPpair(VARREF(YLnumG),Ynil);
  (P)YPdefine_parents(VARREF(YLintG),T6);
  T7 = (P)YPpair(VARREF(YLintG),Ynil);
  (P)YPdefine_parents(VARREF(YLfixnumG),T7);
  T8 = (P)YPpair(VARREF(YLnumG),Ynil);
  (P)YPdefine_parents(VARREF(YLfloG),T8);
  T9 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLlocG),T9);
  T10 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLrepG),T10);
  T11 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolG),T11);
  T12 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolIG),T12);
  T13 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolXG),T13);
  T14 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLseqG),T14);
  T16 = (P)YPpair(VARREF(YLcolIG),Ynil);
  T15 = (P)YPpair(VARREF(YLseqG),T16);
  (P)YPdefine_parents(VARREF(YLseqIG),T15);
  T18 = (P)YPpair(VARREF(YLcolXG),Ynil);
  T17 = (P)YPpair(VARREF(YLseqG),T18);
  (P)YPdefine_parents(VARREF(YLseqXG),T17);
  T19 = (P)YPpair(VARREF(YLseqXG),Ynil);
  (P)YPdefine_parents(VARREF(YLlstG),T19);
  T20 = (P)YPpair(VARREF(YLseqG),Ynil);
  (P)YPdefine_parents(VARREF(YLflatG),T20);
  T22 = (P)YPpair(VARREF(YLseqIG),Ynil);
  T21 = (P)YPpair(VARREF(YLflatG),T22);
  (P)YPdefine_parents(VARREF(YLtupG),T21);
  T25 = (P)YPpair(VARREF(YLmagG),Ynil);
  T24 = (P)YPpair(VARREF(YLseqIG),T25);
  T23 = (P)YPpair(VARREF(YLflatG),T24);
  (P)YPdefine_parents(VARREF(YLstrG),T23);
  T26 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLsymG),T26);
  T27 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLtypeG),T27);
  T28 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLclassG),T28);
  T29 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsingletonG),T29);
  T30 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsubclassG),T30);
  T31 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLunionG),T31);
  T32 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLproductG),T32);
  T33 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLpropG),T33);
  T34 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLgen_cacheG),T34);
  T35 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLsigG),T35);
  T36 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLfunG),T36);
  T37 = (P)YPpair(VARREF(YLfunG),Ynil);
  (P)YPdefine_parents(VARREF(YLmetG),T37);
  T38 = (P)YPpair(VARREF(YLfunG),Ynil);
  (P)YPdefine_parents(VARREF(YLgenG),T38);
  T40 = (P)YPpair(VARREF(YLseqIG),Ynil);
  T39 = (P)YPpair(VARREF(YLflatG),T40);
  (P)YPdefine_parents(VARREF(YLoptsG),T39);
  T41 = (P)YPpair(VARREF(YLoptsG),Ynil);
  (P)YPdefine_parents(VARREF(YLopts_tupG),T41);
  T42 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  (P)YPclass_ancestors_setter(T42,VARREF(YLanyG));
  VARSET(YPsymbols,VARREF(Ynil));
  lit_0 = YPsb((P)"Warning: symbols were created in the boot image before the symbol-creation was setup. (Probably from a df or rep)\n");
  T44 = (P)YPeqQ(VARREF(YPTused_symbols_too_earlyT),YPtrue);
  T43 = (P)YPbb(T44);
  if (T43 != YPfalse) {
    T46 = (P)YPcurrent_out_port();
    T47 = (P)YPsu(LITREF(lit_0));
    T45 = (P)YPputs(T46,T47);
  } else {
  }
  lit_1 = YPPlist(1,YPPsym((P)"name"));
  T48 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T48,ENVNUL,PNUL,sloc(584));
  T49 = fun_111;
  VARSET(Yfab_sym,T49);
  VARSET(YPsymbols_readyQ,YPtrue);
  lit_2 = YPPsym((P)"fab-sym");
  lit_3 = YPPlist(1,YPPsym((P)"name"));
  T50 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfab_sym = YPmet(FUNCODEREF(Yfab_sym),LITREF(lit_2),T50,ENVNUL,PNUL,sloc(598));
  T51 = Yfab_sym;
  VARSET(Yfab_sym,T51);
  xF749 = VARREF(YPmet_prop_len);
  xF750 = xF749;
  tF751 = (P)1;
  T55 = (P)YPiLL(xF750,(P)2);
  T54 = (P)YPiv(T55,tF751);
  T53 = T54;
  T52 = T53;
  (P)YPclass_prop_len_setter(T52,VARREF(YLmetG));
  T56 = YPfalse;
  return T56;
}

P Y___main_7___() {
  P propF816;
  P setterF815;
  P accessorF814;
  P getterF813;
  P accessorF812;
  P propF811;
  P setterF810;
  P accessorF809;
  P getterF808;
  P accessorF807;
  P propF806;
  P setterF805;
  P accessorF804;
  P getterF803;
  P accessorF802;
  P propF801;
  P setterF800;
  P accessorF799;
  P getterF798;
  P accessorF797;
  P propF796;
  P setterF795;
  P accessorF794;
  P getterF793;
  P accessorF792;
  P propF791;
  P setterF790;
  P accessorF789;
  P getterF788;
  P accessorF787;
  P propF786;
  P setterF785;
  P accessorF784;
  P getterF783;
  P accessorF782;
  P propF781;
  P setterF780;
  P accessorF779;
  P getterF778;
  P accessorF777;
  P propF776;
  P setterF775;
  P accessorF774;
  P getterF773;
  P accessorF772;
  P propF771;
  P setterF770;
  P accessorF769;
  P getterF768;
  P accessorF767;
  P propF766;
  P setterF765;
  P accessorF764;
  P getterF763;
  P accessorF762;
  P propF761;
  P setterF760;
  P accessorF759;
  P getterF758;
  P accessorF757;
  P propF756;
  P setterF755;
  P accessorF754;
  P getterF753;
  P accessorF752;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254,T255;
  P T256,T257,T258,T259;
DEFCREGS();
  VARSET(YDgen_cache_singletons_offset,YPint((P)2));
  VARSET(YDgen_cache_classes_offset,YPint((P)3));
  lit_4 = YPPsym((P)"%prop-offset");
  lit_5 = YPPlist(2,YPPsym((P)"owner"),YPPsym((P)"getter"));
  T0 = YPsig(LITREF(lit_5),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPprop_offset = YPmet(FUNCODEREF(YPprop_offset),LITREF(lit_4),T0,ENVNUL,PNUL,sloc(689));
  T1 = YPprop_offset;
  VARSET(YPprop_offset,T1);
  lit_6 = YPPsym((P)"%early-dispatch");
  lit_7 = YPPlist(1,YPPsym((P)"args"));
  lit_8 = YPsb((P)"ERROR: Generic function dispatch called before it existed.");
  T2 = YPsig(LITREF(lit_7),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YPearly_dispatch = YPmet(FUNCODEREF(YPearly_dispatch),LITREF(lit_6),T2,ENVNUL,PNUL,sloc(707));
  T3 = YPearly_dispatch;
  VARSET(YPearly_dispatch,T3);
  lit_9 = YPPsym((P)"%add-met");
  lit_10 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T4 = YPsig(LITREF(lit_10),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPadd_met = YPmet(FUNCODEREF(YPadd_met),LITREF(lit_9),T4,ENVNUL,PNUL,sloc(715));
  T5 = YPadd_met;
  VARSET(YPadd_met,T5);
  lit_11 = YPPsym((P)"%add-prop");
  lit_12 = YPPlist(2,YPPsym((P)"class"),YPPsym((P)"prop"));
  T6 = YPsig(LITREF(lit_12),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPadd_prop = YPmet(FUNCODEREF(YPadd_prop),LITREF(lit_11),T6,ENVNUL,PNUL,sloc(741));
  T7 = YPadd_prop;
  VARSET(YPadd_prop,T7);
  lit_13 = YPPsym((P)"src-loc-line");
  lit_14 = YPPlist(1,YPPsym((P)"x"));
  lit_15 = YPPsym((P)"src-loc-line-setter");
  lit_16 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_17 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YLsrc_locG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_173 = YPmet(FUNCODEREF(fun_173),YPfalse,T10,ENVNUL,PNUL,sloc(760));
  T9 = YPsig(LITREF(lit_16),YPPlist(2,VARREF(YLintG),VARREF(YLsrc_locG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_174 = YPmet(FUNCODEREF(fun_174),YPfalse,T9,ENVNUL,PNUL,sloc(760));
  T8 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T8,ENVNUL,PNUL,sloc(760));
  T13 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T12 = (P)YPsig(Ynil,T13,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T11 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_13),T12,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysrc_loc_line,T11);
  T15 = fun_173;
  accessorF752 = T15;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_line),accessorF752);
  (P)YPmet_name_setter(VARREF(Ysrc_loc_line),accessorF752);
  T14 = accessorF752;
  getterF753 = T14;
  T20 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T19 = (P)YPpair(VARREF(YLanyG),T20);
  T18 = (P)YPsig(Ynil,T19,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T17 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_15),T18,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysrc_loc_line_setter,T17);
  T22 = fun_174;
  accessorF754 = T22;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_line_setter),accessorF754);
  (P)YPmet_name_setter(VARREF(Ysrc_loc_line_setter),accessorF754);
  T21 = accessorF754;
  setterF755 = T21;
  T25 = fun_175;
  T24 = (P)YPPprop(VARREF(YLsrc_locG),VARREF(Ysrc_loc_line),VARREF(Ysrc_loc_line_setter),VARREF(YLintG),T25);
  propF756 = T24;
  (P)YPmet_env_setter(propF756,getterF753);
  (P)YPmet_env_setter(propF756,setterF755);
  T26 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsrc_locG),propF756);
  T23 = T26;
  T16 = T23;
  lit_18 = YPPsym((P)"src-loc-file");
  lit_19 = YPPlist(1,YPPsym((P)"x"));
  lit_20 = YPPsym((P)"src-loc-file-setter");
  lit_21 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_22 = YPPlist(1,YPPsym((P)"x"));
  T29 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLsrc_locG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_176 = YPmet(FUNCODEREF(fun_176),YPfalse,T29,ENVNUL,PNUL,sloc(760));
  T28 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLstrG),VARREF(YLsrc_locG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_177 = YPmet(FUNCODEREF(fun_177),YPfalse,T28,ENVNUL,PNUL,sloc(760));
  T27 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T27,ENVNUL,PNUL,sloc(760));
  T32 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T31 = (P)YPsig(Ynil,T32,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T30 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_18),T31,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysrc_loc_file,T30);
  T34 = fun_176;
  accessorF757 = T34;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_file),accessorF757);
  (P)YPmet_name_setter(VARREF(Ysrc_loc_file),accessorF757);
  T33 = accessorF757;
  getterF758 = T33;
  T39 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T38 = (P)YPpair(VARREF(YLanyG),T39);
  T37 = (P)YPsig(Ynil,T38,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T36 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_20),T37,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysrc_loc_file_setter,T36);
  T41 = fun_177;
  accessorF759 = T41;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_file_setter),accessorF759);
  (P)YPmet_name_setter(VARREF(Ysrc_loc_file_setter),accessorF759);
  T40 = accessorF759;
  setterF760 = T40;
  T44 = fun_178;
  T43 = (P)YPPprop(VARREF(YLsrc_locG),VARREF(Ysrc_loc_file),VARREF(Ysrc_loc_file_setter),VARREF(YLstrG),T44);
  propF761 = T43;
  (P)YPmet_env_setter(propF761,getterF758);
  (P)YPmet_env_setter(propF761,setterF760);
  T45 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsrc_locG),propF761);
  T42 = T45;
  T35 = T42;
  lit_23 = YPPsym((P)"head");
  lit_24 = YPPlist(1,YPPsym((P)"x"));
  lit_25 = YPPsym((P)"head-setter");
  lit_26 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_27 = YPPlist(1,YPPsym((P)"x"));
  T48 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_179 = YPmet(FUNCODEREF(fun_179),YPfalse,T48,ENVNUL,PNUL,sloc(760));
  T47 = YPsig(LITREF(lit_26),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T47,ENVNUL,PNUL,sloc(760));
  T46 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_181 = YPmet(FUNCODEREF(fun_181),YPfalse,T46,ENVNUL,PNUL,sloc(760));
  T51 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T50 = (P)YPsig(Ynil,T51,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T49 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_23),T50,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yhead,T49);
  T53 = fun_179;
  accessorF762 = T53;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yhead),accessorF762);
  (P)YPmet_name_setter(VARREF(Yhead),accessorF762);
  T52 = accessorF762;
  getterF763 = T52;
  T58 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T57 = (P)YPpair(VARREF(YLanyG),T58);
  T56 = (P)YPsig(Ynil,T57,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T55 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_25),T56,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yhead_setter,T55);
  T60 = fun_180;
  accessorF764 = T60;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yhead_setter),accessorF764);
  (P)YPmet_name_setter(VARREF(Yhead_setter),accessorF764);
  T59 = accessorF764;
  setterF765 = T59;
  T63 = fun_181;
  T62 = (P)YPPprop(VARREF(YLlstG),VARREF(Yhead),VARREF(Yhead_setter),VARREF(YLanyG),T63);
  propF766 = T62;
  (P)YPmet_env_setter(propF766,getterF763);
  (P)YPmet_env_setter(propF766,setterF765);
  T64 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF766);
  T61 = T64;
  T54 = T61;
  lit_28 = YPPsym((P)"tail");
  lit_29 = YPPlist(1,YPPsym((P)"x"));
  lit_30 = YPPsym((P)"tail-setter");
  lit_31 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_32 = YPPlist(1,YPPsym((P)"x"));
  T67 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T67,ENVNUL,PNUL,sloc(760));
  T66 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_183 = YPmet(FUNCODEREF(fun_183),YPfalse,T66,ENVNUL,PNUL,sloc(760));
  T65 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_184 = YPmet(FUNCODEREF(fun_184),YPfalse,T65,ENVNUL,PNUL,sloc(760));
  T70 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T69 = (P)YPsig(Ynil,T70,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T68 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_28),T69,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytail,T68);
  T72 = fun_182;
  accessorF767 = T72;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytail),accessorF767);
  (P)YPmet_name_setter(VARREF(Ytail),accessorF767);
  T71 = accessorF767;
  getterF768 = T71;
  T77 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T76 = (P)YPpair(VARREF(YLanyG),T77);
  T75 = (P)YPsig(Ynil,T76,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T74 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_30),T75,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytail_setter,T74);
  T79 = fun_183;
  accessorF769 = T79;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytail_setter),accessorF769);
  (P)YPmet_name_setter(VARREF(Ytail_setter),accessorF769);
  T78 = accessorF769;
  setterF770 = T78;
  T82 = fun_184;
  T81 = (P)YPPprop(VARREF(YLlstG),VARREF(Ytail),VARREF(Ytail_setter),VARREF(YLlstG),T82);
  propF771 = T81;
  (P)YPmet_env_setter(propF771,getterF768);
  (P)YPmet_env_setter(propF771,setterF770);
  T83 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF771);
  T80 = T83;
  T73 = T80;
  lit_33 = YPPsym((P)"sym-name");
  lit_34 = YPPlist(1,YPPsym((P)"x"));
  lit_35 = YPPsym((P)"sym-name-setter");
  lit_36 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_37 = YPPlist(1,YPPsym((P)"x"));
  T86 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_185 = YPmet(FUNCODEREF(fun_185),YPfalse,T86,ENVNUL,PNUL,sloc(760));
  T85 = YPsig(LITREF(lit_36),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_186 = YPmet(FUNCODEREF(fun_186),YPfalse,T85,ENVNUL,PNUL,sloc(760));
  T84 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_187 = YPmet(FUNCODEREF(fun_187),YPfalse,T84,ENVNUL,PNUL,sloc(760));
  T89 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T88 = (P)YPsig(Ynil,T89,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T87 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_33),T88,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysym_name,T87);
  T91 = fun_185;
  accessorF772 = T91;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysym_name),accessorF772);
  (P)YPmet_name_setter(VARREF(Ysym_name),accessorF772);
  T90 = accessorF772;
  getterF773 = T90;
  T96 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T95 = (P)YPpair(VARREF(YLanyG),T96);
  T94 = (P)YPsig(Ynil,T95,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T93 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_35),T94,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysym_name_setter,T93);
  T98 = fun_186;
  accessorF774 = T98;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysym_name_setter),accessorF774);
  (P)YPmet_name_setter(VARREF(Ysym_name_setter),accessorF774);
  T97 = accessorF774;
  setterF775 = T97;
  T101 = fun_187;
  T100 = (P)YPPprop(VARREF(YLsymG),VARREF(Ysym_name),VARREF(Ysym_name_setter),VARREF(YLstrG),T101);
  propF776 = T100;
  (P)YPmet_env_setter(propF776,getterF773);
  (P)YPmet_env_setter(propF776,setterF775);
  T102 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsymG),propF776);
  T99 = T102;
  T92 = T99;
  lit_38 = YPPsym((P)"class-prop-len");
  lit_39 = YPPlist(1,YPPsym((P)"x"));
  lit_40 = YPPsym((P)"class-prop-len-setter");
  lit_41 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_42 = YPPlist(1,YPPsym((P)"x"));
  T105 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T105,ENVNUL,PNUL,sloc(760));
  T104 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YLfixnumG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_189 = YPmet(FUNCODEREF(fun_189),YPfalse,T104,ENVNUL,PNUL,sloc(760));
  T103 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_190 = YPmet(FUNCODEREF(fun_190),YPfalse,T103,ENVNUL,PNUL,sloc(760));
  T108 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T107 = (P)YPsig(Ynil,T108,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T106 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_38),T107,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_prop_len,T106);
  T110 = fun_188;
  accessorF777 = T110;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len),accessorF777);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len),accessorF777);
  T109 = accessorF777;
  getterF778 = T109;
  T115 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T114 = (P)YPpair(VARREF(YLanyG),T115);
  T113 = (P)YPsig(Ynil,T114,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T112 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_40),T113,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_prop_len_setter,T112);
  T117 = fun_189;
  accessorF779 = T117;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len_setter),accessorF779);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len_setter),accessorF779);
  T116 = accessorF779;
  setterF780 = T116;
  T120 = fun_190;
  T119 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_prop_len),VARREF(Yclass_prop_len_setter),VARREF(YLfixnumG),T120);
  propF781 = T119;
  (P)YPmet_env_setter(propF781,getterF778);
  (P)YPmet_env_setter(propF781,setterF780);
  T121 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF781);
  T118 = T121;
  T111 = T118;
  lit_43 = YPPsym((P)"class-name");
  lit_44 = YPPlist(1,YPPsym((P)"x"));
  lit_45 = YPPsym((P)"class-name-setter");
  lit_46 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_47 = YPPlist(1,YPPsym((P)"x"));
  T124 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T124,ENVNUL,PNUL,sloc(760));
  T123 = YPsig(LITREF(lit_46),YPPlist(2,VARREF(YLsymG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_192 = YPmet(FUNCODEREF(fun_192),YPfalse,T123,ENVNUL,PNUL,sloc(760));
  T122 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T122,ENVNUL,PNUL,sloc(760));
  T127 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T126 = (P)YPsig(Ynil,T127,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T125 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_43),T126,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_name,T125);
  T129 = fun_191;
  accessorF782 = T129;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_name),accessorF782);
  (P)YPmet_name_setter(VARREF(Yclass_name),accessorF782);
  T128 = accessorF782;
  getterF783 = T128;
  T134 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T133 = (P)YPpair(VARREF(YLanyG),T134);
  T132 = (P)YPsig(Ynil,T133,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T131 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_45),T132,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_name_setter,T131);
  T136 = fun_192;
  accessorF784 = T136;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_name_setter),accessorF784);
  (P)YPmet_name_setter(VARREF(Yclass_name_setter),accessorF784);
  T135 = accessorF784;
  setterF785 = T135;
  T139 = fun_193;
  T138 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_name),VARREF(Yclass_name_setter),VARREF(YLsymG),T139);
  propF786 = T138;
  (P)YPmet_env_setter(propF786,getterF783);
  (P)YPmet_env_setter(propF786,setterF785);
  T140 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF786);
  T137 = T140;
  T130 = T137;
  lit_48 = YPPsym((P)"class-parents");
  lit_49 = YPPlist(1,YPPsym((P)"x"));
  lit_50 = YPPsym((P)"class-parents-setter");
  lit_51 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_52 = YPPlist(1,YPPsym((P)"x"));
  T143 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_194 = YPmet(FUNCODEREF(fun_194),YPfalse,T143,ENVNUL,PNUL,sloc(760));
  T142 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_195 = YPmet(FUNCODEREF(fun_195),YPfalse,T142,ENVNUL,PNUL,sloc(760));
  T141 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_196 = YPmet(FUNCODEREF(fun_196),YPfalse,T141,ENVNUL,PNUL,sloc(760));
  T146 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T145 = (P)YPsig(Ynil,T146,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T144 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_48),T145,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_parents,T144);
  T148 = fun_194;
  accessorF787 = T148;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents),accessorF787);
  (P)YPmet_name_setter(VARREF(Yclass_parents),accessorF787);
  T147 = accessorF787;
  getterF788 = T147;
  T153 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T152 = (P)YPpair(VARREF(YLanyG),T153);
  T151 = (P)YPsig(Ynil,T152,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T150 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_50),T151,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_parents_setter,T150);
  T155 = fun_195;
  accessorF789 = T155;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents_setter),accessorF789);
  (P)YPmet_name_setter(VARREF(Yclass_parents_setter),accessorF789);
  T154 = accessorF789;
  setterF790 = T154;
  T158 = fun_196;
  T157 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_parents),VARREF(Yclass_parents_setter),VARREF(YLlstG),T158);
  propF791 = T157;
  (P)YPmet_env_setter(propF791,getterF788);
  (P)YPmet_env_setter(propF791,setterF790);
  T159 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF791);
  T156 = T159;
  T149 = T156;
  lit_53 = YPPsym((P)"class-direct-props");
  lit_54 = YPPlist(1,YPPsym((P)"x"));
  lit_55 = YPPsym((P)"class-direct-props-setter");
  lit_56 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_57 = YPPlist(1,YPPsym((P)"x"));
  T162 = YPsig(LITREF(lit_54),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T162,ENVNUL,PNUL,sloc(760));
  T161 = YPsig(LITREF(lit_56),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_198 = YPmet(FUNCODEREF(fun_198),YPfalse,T161,ENVNUL,PNUL,sloc(760));
  T160 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_199 = YPmet(FUNCODEREF(fun_199),YPfalse,T160,ENVNUL,PNUL,sloc(760));
  T165 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T164 = (P)YPsig(Ynil,T165,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T163 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_53),T164,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_direct_props,T163);
  T167 = fun_197;
  accessorF792 = T167;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props),accessorF792);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props),accessorF792);
  T166 = accessorF792;
  getterF793 = T166;
  T172 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T171 = (P)YPpair(VARREF(YLanyG),T172);
  T170 = (P)YPsig(Ynil,T171,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T169 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_55),T170,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_direct_props_setter,T169);
  T174 = fun_198;
  accessorF794 = T174;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props_setter),accessorF794);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props_setter),accessorF794);
  T173 = accessorF794;
  setterF795 = T173;
  T177 = fun_199;
  T176 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_direct_props),VARREF(Yclass_direct_props_setter),VARREF(YLlstG),T177);
  propF796 = T176;
  (P)YPmet_env_setter(propF796,getterF793);
  (P)YPmet_env_setter(propF796,setterF795);
  T178 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF796);
  T175 = T178;
  T168 = T175;
  lit_58 = YPPsym((P)"class-ancestors");
  lit_59 = YPPlist(1,YPPsym((P)"x"));
  lit_60 = YPPsym((P)"class-ancestors-setter");
  lit_61 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_62 = YPPlist(1,YPPsym((P)"x"));
  T181 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_200 = YPmet(FUNCODEREF(fun_200),YPfalse,T181,ENVNUL,PNUL,sloc(760));
  T180 = YPsig(LITREF(lit_61),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_201 = YPmet(FUNCODEREF(fun_201),YPfalse,T180,ENVNUL,PNUL,sloc(760));
  T179 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T179,ENVNUL,PNUL,sloc(760));
  T184 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T183 = (P)YPsig(Ynil,T184,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T182 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_58),T183,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_ancestors,T182);
  T186 = fun_200;
  accessorF797 = T186;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors),accessorF797);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors),accessorF797);
  T185 = accessorF797;
  getterF798 = T185;
  T191 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T190 = (P)YPpair(VARREF(YLanyG),T191);
  T189 = (P)YPsig(Ynil,T190,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T188 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_60),T189,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_ancestors_setter,T188);
  T193 = fun_201;
  accessorF799 = T193;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors_setter),accessorF799);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors_setter),accessorF799);
  T192 = accessorF799;
  setterF800 = T192;
  T196 = fun_202;
  T195 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_ancestors),VARREF(Yclass_ancestors_setter),VARREF(YLlstG),T196);
  propF801 = T195;
  (P)YPmet_env_setter(propF801,getterF798);
  (P)YPmet_env_setter(propF801,setterF800);
  T197 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF801);
  T194 = T197;
  T187 = T194;
  lit_63 = YPPsym((P)"class-props");
  lit_64 = YPPlist(1,YPPsym((P)"x"));
  lit_65 = YPPsym((P)"class-props-setter");
  lit_66 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_67 = YPPlist(1,YPPsym((P)"x"));
  T200 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_203 = YPmet(FUNCODEREF(fun_203),YPfalse,T200,ENVNUL,PNUL,sloc(760));
  T199 = YPsig(LITREF(lit_66),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_204 = YPmet(FUNCODEREF(fun_204),YPfalse,T199,ENVNUL,PNUL,sloc(760));
  T198 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_205 = YPmet(FUNCODEREF(fun_205),YPfalse,T198,ENVNUL,PNUL,sloc(760));
  T203 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T202 = (P)YPsig(Ynil,T203,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T201 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_63),T202,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_props,T201);
  T205 = fun_203;
  accessorF802 = T205;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_props),accessorF802);
  (P)YPmet_name_setter(VARREF(Yclass_props),accessorF802);
  T204 = accessorF802;
  getterF803 = T204;
  T210 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T209 = (P)YPpair(VARREF(YLanyG),T210);
  T208 = (P)YPsig(Ynil,T209,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T207 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_65),T208,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_props_setter,T207);
  T212 = fun_204;
  accessorF804 = T212;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_props_setter),accessorF804);
  (P)YPmet_name_setter(VARREF(Yclass_props_setter),accessorF804);
  T211 = accessorF804;
  setterF805 = T211;
  T215 = fun_205;
  T214 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_props),VARREF(Yclass_props_setter),VARREF(YLlstG),T215);
  propF806 = T214;
  (P)YPmet_env_setter(propF806,getterF803);
  (P)YPmet_env_setter(propF806,setterF805);
  T216 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF806);
  T213 = T216;
  T206 = T213;
  lit_68 = YPPsym((P)"class-children");
  lit_69 = YPPlist(1,YPPsym((P)"x"));
  lit_70 = YPPsym((P)"class-children-setter");
  lit_71 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_72 = YPPlist(1,YPPsym((P)"x"));
  T219 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T219,ENVNUL,PNUL,sloc(760));
  T218 = YPsig(LITREF(lit_71),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_207 = YPmet(FUNCODEREF(fun_207),YPfalse,T218,ENVNUL,PNUL,sloc(760));
  T217 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_208 = YPmet(FUNCODEREF(fun_208),YPfalse,T217,ENVNUL,PNUL,sloc(760));
  T222 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T221 = (P)YPsig(Ynil,T222,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T220 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_68),T221,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_children,T220);
  T224 = fun_206;
  accessorF807 = T224;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_children),accessorF807);
  (P)YPmet_name_setter(VARREF(Yclass_children),accessorF807);
  T223 = accessorF807;
  getterF808 = T223;
  T229 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T228 = (P)YPpair(VARREF(YLanyG),T229);
  T227 = (P)YPsig(Ynil,T228,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T226 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_70),T227,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_children_setter,T226);
  T231 = fun_207;
  accessorF809 = T231;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_children_setter),accessorF809);
  (P)YPmet_name_setter(VARREF(Yclass_children_setter),accessorF809);
  T230 = accessorF809;
  setterF810 = T230;
  T234 = fun_208;
  T233 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_children),VARREF(Yclass_children_setter),VARREF(YLlstG),T234);
  propF811 = T233;
  (P)YPmet_env_setter(propF811,getterF808);
  (P)YPmet_env_setter(propF811,setterF810);
  T235 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF811);
  T232 = T235;
  T225 = T232;
  lit_73 = YPPsym((P)"class-gens");
  lit_74 = YPPlist(1,YPPsym((P)"x"));
  lit_75 = YPPsym((P)"class-gens-setter");
  lit_76 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_77 = YPPlist(1,YPPsym((P)"x"));
  T242 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T241 = fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T242,ENVNUL,PNUL,sloc(760));
  T240 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T239 = fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T240,ENVNUL,PNUL,sloc(760));
  T238 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T237 = fun_211 = YPmet(FUNCODEREF(fun_211),YPfalse,T238,ENVNUL,PNUL,sloc(760));
  T246 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T245 = (P)YPsig(Ynil,T246,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T244 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_73),T245,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_gens,T244);
  T248 = fun_209;
  accessorF812 = T248;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens),accessorF812);
  (P)YPmet_name_setter(VARREF(Yclass_gens),accessorF812);
  T247 = accessorF812;
  getterF813 = T247;
  T253 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T252 = (P)YPpair(VARREF(YLanyG),T253);
  T251 = (P)YPsig(Ynil,T252,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T250 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_75),T251,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_gens_setter,T250);
  T255 = fun_210;
  accessorF814 = T255;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens_setter),accessorF814);
  (P)YPmet_name_setter(VARREF(Yclass_gens_setter),accessorF814);
  T254 = accessorF814;
  setterF815 = T254;
  T258 = fun_211;
  T257 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_gens),VARREF(Yclass_gens_setter),VARREF(YLlstG),T258);
  propF816 = T257;
  (P)YPmet_env_setter(propF816,getterF813);
  (P)YPmet_env_setter(propF816,setterF815);
  T259 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF816);
  T256 = T259;
  T249 = T256;
  T243 = T249;
  T236 = T243;
  return T236;
}

P Y___main_8___() {
  P propF1001;
  P setterF1000;
  P accessorF999;
  P getterF998;
  P accessorF997;
  P propF996;
  P setterF995;
  P accessorF994;
  P getterF993;
  P accessorF992;
  P propF991;
  P setterF990;
  P accessorF989;
  P getterF988;
  P accessorF987;
  P propF986;
  P setterF985;
  P accessorF984;
  P getterF983;
  P accessorF982;
  P propF981;
  P setterF980;
  P accessorF979;
  P getterF978;
  P accessorF977;
  P propF976;
  P setterF975;
  P accessorF974;
  P getterF973;
  P accessorF972;
  P propF971;
  P setterF970;
  P accessorF969;
  P getterF968;
  P accessorF967;
  P propF966;
  P setterF965;
  P accessorF964;
  P getterF963;
  P accessorF962;
  P propF961;
  P setterF960;
  P accessorF959;
  P getterF958;
  P accessorF957;
  P propF956;
  P setterF955;
  P accessorF954;
  P getterF953;
  P accessorF952;
  P propF951;
  P setterF950;
  P accessorF949;
  P getterF948;
  P accessorF947;
  P propF946;
  P setterF945;
  P accessorF944;
  P getterF943;
  P accessorF942;
  P propF941;
  P setterF940;
  P accessorF939;
  P getterF938;
  P accessorF937;
  P propF936;
  P setterF935;
  P accessorF934;
  P getterF933;
  P accessorF932;
  P propF931;
  P setterF930;
  P accessorF929;
  P getterF928;
  P accessorF927;
  P propF926;
  P setterF925;
  P accessorF924;
  P getterF923;
  P accessorF922;
  P propF921;
  P setterF920;
  P accessorF919;
  P getterF918;
  P accessorF917;
  P propF916;
  P setterF915;
  P accessorF914;
  P getterF913;
  P accessorF912;
  P propF911;
  P setterF910;
  P accessorF909;
  P getterF908;
  P accessorF907;
  P propF906;
  P setterF905;
  P accessorF904;
  P getterF903;
  P accessorF902;
  P propF901;
  P setterF900;
  P accessorF899;
  P getterF898;
  P accessorF897;
  P propF896;
  P setterF895;
  P accessorF894;
  P getterF893;
  P accessorF892;
  P propF891;
  P setterF890;
  P accessorF889;
  P getterF888;
  P accessorF887;
  P propF886;
  P setterF885;
  P accessorF884;
  P getterF883;
  P accessorF882;
  P propF881;
  P setterF880;
  P accessorF879;
  P getterF878;
  P accessorF877;
  P propF876;
  P setterF875;
  P accessorF874;
  P getterF873;
  P accessorF872;
  P propF871;
  P setterF870;
  P accessorF869;
  P getterF868;
  P accessorF867;
  P propF866;
  P setterF865;
  P accessorF864;
  P getterF863;
  P accessorF862;
  P propF861;
  P setterF860;
  P accessorF859;
  P getterF858;
  P accessorF857;
  P propF856;
  P setterF855;
  P accessorF854;
  P getterF853;
  P accessorF852;
  P propF851;
  P setterF850;
  P accessorF849;
  P getterF848;
  P accessorF847;
  P propF846;
  P setterF845;
  P accessorF844;
  P getterF843;
  P accessorF842;
  P propF841;
  P setterF840;
  P accessorF839;
  P getterF838;
  P accessorF837;
  P propF836;
  P setterF835;
  P accessorF834;
  P getterF833;
  P accessorF832;
  P propF831;
  P setterF830;
  P accessorF829;
  P getterF828;
  P accessorF827;
  P propF826;
  P setterF825;
  P accessorF824;
  P getterF823;
  P accessorF822;
  P propF821;
  P setterF820;
  P accessorF819;
  P getterF818;
  P accessorF817;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254,T255;
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268,T269,T270,T271;
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282,T283,T284,T285,T286,T287;
  P T288,T289,T290,T291,T292,T293,T294,T295,T296,T297,T298,T299,T300,T301,T302,T303;
  P T304,T305,T306,T307,T308,T309,T310,T311,T312,T313,T314,T315,T316,T317,T318,T319;
  P T320,T321,T322,T323,T324,T325,T326,T327,T328,T329,T330,T331,T332,T333,T334,T335;
  P T336,T337,T338,T339,T340,T341,T342,T343,T344,T345,T346,T347,T348,T349,T350,T351;
  P T352,T353,T354,T355,T356,T357,T358,T359,T360,T361,T362,T363,T364,T365,T366,T367;
  P T368,T369,T370,T371,T372,T373,T374,T375,T376,T377,T378,T379,T380,T381,T382,T383;
  P T384,T385,T386,T387,T388,T389,T390,T391,T392,T393,T394,T395,T396,T397,T398,T399;
  P T400,T401,T402,T403,T404,T405,T406,T407,T408,T409,T410,T411,T412,T413,T414,T415;
  P T416,T417,T418,T419,T420,T421,T422,T423,T424,T425,T426,T427,T428,T429,T430,T431;
  P T432,T433,T434,T435,T436,T437,T438,T439,T440,T441,T442,T443,T444,T445,T446,T447;
  P T448,T449,T450,T451,T452,T453,T454,T455,T456,T457,T458,T459,T460,T461,T462,T463;
  P T464,T465,T466,T467,T468,T469,T470,T471,T472,T473,T474,T475,T476,T477,T478,T479;
  P T480,T481,T482,T483,T484,T485,T486,T487,T488,T489,T490,T491,T492,T493,T494,T495;
  P T496,T497,T498,T499,T500,T501,T502,T503,T504,T505,T506,T507,T508,T509,T510,T511;
  P T512,T513,T514,T515,T516,T517,T518,T519,T520,T521,T522,T523,T524,T525,T526,T527;
  P T528,T529,T530,T531,T532,T533,T534,T535,T536,T537,T538,T539,T540,T541,T542,T543;
  P T544,T545,T546,T547,T548,T549,T550,T551,T552,T553,T554,T555,T556,T557,T558,T559;
  P T560,T561,T562,T563,T564,T565,T566,T567,T568,T569,T570,T571,T572,T573,T574,T575;
  P T576,T577,T578,T579,T580,T581,T582,T583,T584,T585,T586,T587,T588,T589,T590,T591;
  P T592,T593,T594,T595,T596,T597,T598,T599,T600,T601,T602,T603,T604,T605,T606,T607;
  P T608,T609,T610,T611,T612,T613,T614,T615,T616,T617,T618,T619,T620,T621,T622,T623;
  P T624,T625,T626,T627,T628,T629,T630,T631,T632,T633,T634,T635,T636,T637,T638,T639;
  P T640,T641,T642,T643,T644,T645,T646,T647,T648,T649,T650,T651,T652,T653,T654,T655;
  P T656,T657,T658,T659,T660,T661,T662,T663,T664,T665,T666,T667,T668,T669,T670,T671;
  P T672,T673,T674,T675,T676,T677,T678,T679,T680,T681,T682,T683,T684,T685,T686,T687;
  P T688,T689,T690,T691,T692,T693,T694,T695,T696,T697,T698,T699,T700,T701,T702,T703;
  P T704,T705,T706,T707,T708,T709;
DEFCREGS();
  lit_78 = YPPsym((P)"class-mets");
  lit_79 = YPPlist(1,YPPsym((P)"x"));
  lit_80 = YPPsym((P)"class-mets-setter");
  lit_81 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_82 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_212 = YPmet(FUNCODEREF(fun_212),YPfalse,T2,ENVNUL,PNUL,sloc(760));
  T1 = YPsig(LITREF(lit_81),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_213 = YPmet(FUNCODEREF(fun_213),YPfalse,T1,ENVNUL,PNUL,sloc(760));
  T0 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_214 = YPmet(FUNCODEREF(fun_214),YPfalse,T0,ENVNUL,PNUL,sloc(760));
  T5 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T4 = (P)YPsig(Ynil,T5,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T3 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_78),T4,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_mets,T3);
  T7 = fun_212;
  accessorF817 = T7;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets),accessorF817);
  (P)YPmet_name_setter(VARREF(Yclass_mets),accessorF817);
  T6 = accessorF817;
  getterF818 = T6;
  T12 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T11 = (P)YPpair(VARREF(YLanyG),T12);
  T10 = (P)YPsig(Ynil,T11,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T9 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_80),T10,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_mets_setter,T9);
  T14 = fun_213;
  accessorF819 = T14;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets_setter),accessorF819);
  (P)YPmet_name_setter(VARREF(Yclass_mets_setter),accessorF819);
  T13 = accessorF819;
  setterF820 = T13;
  T17 = fun_214;
  T16 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_mets),VARREF(Yclass_mets_setter),VARREF(YLlstG),T17);
  propF821 = T16;
  (P)YPmet_env_setter(propF821,getterF818);
  (P)YPmet_env_setter(propF821,setterF820);
  T18 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF821);
  T15 = T18;
  T8 = T15;
  lit_83 = YPPsym((P)"class-forward");
  lit_84 = YPPlist(1,YPPsym((P)"x"));
  lit_85 = YPPsym((P)"class-forward-setter");
  lit_86 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_87 = YPPlist(1,YPPsym((P)"x"));
  T21 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T21,ENVNUL,PNUL,sloc(760));
  T20 = YPsig(LITREF(lit_86),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T20,ENVNUL,PNUL,sloc(760));
  T19 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_217 = YPmet(FUNCODEREF(fun_217),YPfalse,T19,ENVNUL,PNUL,sloc(760));
  T24 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T23 = (P)YPsig(Ynil,T24,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T22 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_83),T23,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_forward,T22);
  T26 = fun_215;
  accessorF822 = T26;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward),accessorF822);
  (P)YPmet_name_setter(VARREF(Yclass_forward),accessorF822);
  T25 = accessorF822;
  getterF823 = T25;
  T31 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T30 = (P)YPpair(VARREF(YLanyG),T31);
  T29 = (P)YPsig(Ynil,T30,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T28 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_85),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_forward_setter,T28);
  T33 = fun_216;
  accessorF824 = T33;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward_setter),accessorF824);
  (P)YPmet_name_setter(VARREF(Yclass_forward_setter),accessorF824);
  T32 = accessorF824;
  setterF825 = T32;
  T36 = fun_217;
  T35 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_forward),VARREF(Yclass_forward_setter),VARREF(YLanyG),T36);
  propF826 = T35;
  (P)YPmet_env_setter(propF826,getterF823);
  (P)YPmet_env_setter(propF826,setterF825);
  T37 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF826);
  T34 = T37;
  T27 = T34;
  lit_88 = YPPsym((P)"class-type-cache");
  lit_89 = YPPlist(1,YPPsym((P)"x"));
  lit_90 = YPPsym((P)"class-type-cache-setter");
  lit_91 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_92 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_218 = YPmet(FUNCODEREF(fun_218),YPfalse,T40,ENVNUL,PNUL,sloc(760));
  T39 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T39,ENVNUL,PNUL,sloc(760));
  T38 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T38,ENVNUL,PNUL,sloc(760));
  T43 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T42 = (P)YPsig(Ynil,T43,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T41 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_88),T42,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_type_cache,T41);
  T45 = fun_218;
  accessorF827 = T45;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_type_cache),accessorF827);
  (P)YPmet_name_setter(VARREF(Yclass_type_cache),accessorF827);
  T44 = accessorF827;
  getterF828 = T44;
  T50 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T49 = (P)YPpair(VARREF(YLanyG),T50);
  T48 = (P)YPsig(Ynil,T49,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T47 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_90),T48,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_type_cache_setter,T47);
  T52 = fun_219;
  accessorF829 = T52;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_type_cache_setter),accessorF829);
  (P)YPmet_name_setter(VARREF(Yclass_type_cache_setter),accessorF829);
  T51 = accessorF829;
  setterF830 = T51;
  T55 = fun_220;
  T54 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_type_cache),VARREF(Yclass_type_cache_setter),VARREF(YLanyG),T55);
  propF831 = T54;
  (P)YPmet_env_setter(propF831,getterF828);
  (P)YPmet_env_setter(propF831,setterF830);
  T56 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF831);
  T53 = T56;
  T46 = T53;
  lit_93 = YPPsym((P)"class-id");
  lit_94 = YPPlist(1,YPPsym((P)"x"));
  lit_95 = YPPsym((P)"class-id-setter");
  lit_96 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_97 = YPPlist(1,YPPsym((P)"x"));
  T59 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T59,ENVNUL,PNUL,sloc(760));
  T58 = YPsig(LITREF(lit_96),YPPlist(2,VARREF(YLfixnumG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T58,ENVNUL,PNUL,sloc(760));
  T57 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_223 = YPmet(FUNCODEREF(fun_223),YPfalse,T57,ENVNUL,PNUL,sloc(760));
  T62 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T61 = (P)YPsig(Ynil,T62,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T60 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_93),T61,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_id,T60);
  T64 = fun_221;
  accessorF832 = T64;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_id),accessorF832);
  (P)YPmet_name_setter(VARREF(Yclass_id),accessorF832);
  T63 = accessorF832;
  getterF833 = T63;
  T69 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T68 = (P)YPpair(VARREF(YLanyG),T69);
  T67 = (P)YPsig(Ynil,T68,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T66 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_95),T67,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_id_setter,T66);
  T71 = fun_222;
  accessorF834 = T71;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_id_setter),accessorF834);
  (P)YPmet_name_setter(VARREF(Yclass_id_setter),accessorF834);
  T70 = accessorF834;
  setterF835 = T70;
  T74 = fun_223;
  T73 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_id),VARREF(Yclass_id_setter),VARREF(YLfixnumG),T74);
  propF836 = T73;
  (P)YPmet_env_setter(propF836,getterF833);
  (P)YPmet_env_setter(propF836,setterF835);
  T75 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF836);
  T72 = T75;
  T65 = T72;
  lit_98 = YPPsym((P)"class-row");
  lit_99 = YPPlist(1,YPPsym((P)"x"));
  lit_100 = YPPsym((P)"class-row-setter");
  lit_101 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_102 = YPPlist(1,YPPsym((P)"x"));
  T78 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_224 = YPmet(FUNCODEREF(fun_224),YPfalse,T78,ENVNUL,PNUL,sloc(760));
  T77 = YPsig(LITREF(lit_101),YPPlist(2,VARREF(YLtupG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T77,ENVNUL,PNUL,sloc(760));
  T76 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_226 = YPmet(FUNCODEREF(fun_226),YPfalse,T76,ENVNUL,PNUL,sloc(760));
  T81 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T80 = (P)YPsig(Ynil,T81,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T79 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_98),T80,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_row,T79);
  T83 = fun_224;
  accessorF837 = T83;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_row),accessorF837);
  (P)YPmet_name_setter(VARREF(Yclass_row),accessorF837);
  T82 = accessorF837;
  getterF838 = T82;
  T88 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T87 = (P)YPpair(VARREF(YLanyG),T88);
  T86 = (P)YPsig(Ynil,T87,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T85 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_100),T86,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_row_setter,T85);
  T90 = fun_225;
  accessorF839 = T90;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_row_setter),accessorF839);
  (P)YPmet_name_setter(VARREF(Yclass_row_setter),accessorF839);
  T89 = accessorF839;
  setterF840 = T89;
  T93 = fun_226;
  T92 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_row),VARREF(Yclass_row_setter),VARREF(YLtupG),T93);
  propF841 = T92;
  (P)YPmet_env_setter(propF841,getterF838);
  (P)YPmet_env_setter(propF841,setterF840);
  T94 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF841);
  T91 = T94;
  T84 = T91;
  lit_103 = YPPsym((P)"type-object");
  lit_104 = YPPlist(1,YPPsym((P)"x"));
  lit_105 = YPPsym((P)"type-object-setter");
  lit_106 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_107 = YPPlist(1,YPPsym((P)"x"));
  T97 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YLsingletonG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_227 = YPmet(FUNCODEREF(fun_227),YPfalse,T97,ENVNUL,PNUL,sloc(760));
  T96 = YPsig(LITREF(lit_106),YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_228 = YPmet(FUNCODEREF(fun_228),YPfalse,T96,ENVNUL,PNUL,sloc(760));
  T95 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_229 = YPmet(FUNCODEREF(fun_229),YPfalse,T95,ENVNUL,PNUL,sloc(760));
  T100 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T99 = (P)YPsig(Ynil,T100,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T98 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_103),T99,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_object,T98);
  T102 = fun_227;
  accessorF842 = T102;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_object),accessorF842);
  (P)YPmet_name_setter(VARREF(Ytype_object),accessorF842);
  T101 = accessorF842;
  getterF843 = T101;
  T107 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T106 = (P)YPpair(VARREF(YLanyG),T107);
  T105 = (P)YPsig(Ynil,T106,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T104 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_105),T105,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_object_setter,T104);
  T109 = fun_228;
  accessorF844 = T109;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_object_setter),accessorF844);
  (P)YPmet_name_setter(VARREF(Ytype_object_setter),accessorF844);
  T108 = accessorF844;
  setterF845 = T108;
  T112 = fun_229;
  T111 = (P)YPPprop(VARREF(YLsingletonG),VARREF(Ytype_object),VARREF(Ytype_object_setter),VARREF(YLanyG),T112);
  propF846 = T111;
  (P)YPmet_env_setter(propF846,getterF843);
  (P)YPmet_env_setter(propF846,setterF845);
  T113 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsingletonG),propF846);
  T110 = T113;
  T103 = T110;
  lit_108 = YPPsym((P)"type-class");
  lit_109 = YPPlist(1,YPPsym((P)"x"));
  lit_110 = YPPsym((P)"type-class-setter");
  lit_111 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_112 = YPPlist(1,YPPsym((P)"x"));
  T116 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLsubclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_230 = YPmet(FUNCODEREF(fun_230),YPfalse,T116,ENVNUL,PNUL,sloc(760));
  T115 = YPsig(LITREF(lit_111),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_231 = YPmet(FUNCODEREF(fun_231),YPfalse,T115,ENVNUL,PNUL,sloc(760));
  T114 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T114,ENVNUL,PNUL,sloc(760));
  T119 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T118 = (P)YPsig(Ynil,T119,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T117 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_108),T118,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_class,T117);
  T121 = fun_230;
  accessorF847 = T121;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_class),accessorF847);
  (P)YPmet_name_setter(VARREF(Ytype_class),accessorF847);
  T120 = accessorF847;
  getterF848 = T120;
  T126 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T125 = (P)YPpair(VARREF(YLanyG),T126);
  T124 = (P)YPsig(Ynil,T125,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T123 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_110),T124,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_class_setter,T123);
  T128 = fun_231;
  accessorF849 = T128;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_class_setter),accessorF849);
  (P)YPmet_name_setter(VARREF(Ytype_class_setter),accessorF849);
  T127 = accessorF849;
  setterF850 = T127;
  T131 = fun_232;
  T130 = (P)YPPprop(VARREF(YLsubclassG),VARREF(Ytype_class),VARREF(Ytype_class_setter),VARREF(YLclassG),T131);
  propF851 = T130;
  (P)YPmet_env_setter(propF851,getterF848);
  (P)YPmet_env_setter(propF851,setterF850);
  T132 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsubclassG),propF851);
  T129 = T132;
  T122 = T129;
  lit_113 = YPPsym((P)"union-elts");
  lit_114 = YPPlist(1,YPPsym((P)"x"));
  lit_115 = YPPsym((P)"union-elts-setter");
  lit_116 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_117 = YPPlist(1,YPPsym((P)"x"));
  T135 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLunionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_233 = YPmet(FUNCODEREF(fun_233),YPfalse,T135,ENVNUL,PNUL,sloc(760));
  T134 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLlstG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_234 = YPmet(FUNCODEREF(fun_234),YPfalse,T134,ENVNUL,PNUL,sloc(760));
  T133 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_235 = YPmet(FUNCODEREF(fun_235),YPfalse,T133,ENVNUL,PNUL,sloc(760));
  T138 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T137 = (P)YPsig(Ynil,T138,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T136 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_113),T137,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yunion_elts,T136);
  T140 = fun_233;
  accessorF852 = T140;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yunion_elts),accessorF852);
  (P)YPmet_name_setter(VARREF(Yunion_elts),accessorF852);
  T139 = accessorF852;
  getterF853 = T139;
  T145 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T144 = (P)YPpair(VARREF(YLanyG),T145);
  T143 = (P)YPsig(Ynil,T144,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T142 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_115),T143,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yunion_elts_setter,T142);
  T147 = fun_234;
  accessorF854 = T147;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yunion_elts_setter),accessorF854);
  (P)YPmet_name_setter(VARREF(Yunion_elts_setter),accessorF854);
  T146 = accessorF854;
  setterF855 = T146;
  T150 = fun_235;
  T149 = (P)YPPprop(VARREF(YLunionG),VARREF(Yunion_elts),VARREF(Yunion_elts_setter),VARREF(YLlstG),T150);
  propF856 = T149;
  (P)YPmet_env_setter(propF856,getterF853);
  (P)YPmet_env_setter(propF856,setterF855);
  T151 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLunionG),propF856);
  T148 = T151;
  T141 = T148;
  lit_118 = YPPsym((P)"product-elts");
  lit_119 = YPPlist(1,YPPsym((P)"x"));
  lit_120 = YPPsym((P)"product-elts-setter");
  lit_121 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_122 = YPPlist(1,YPPsym((P)"x"));
  T154 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YLproductG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T154,ENVNUL,PNUL,sloc(760));
  T153 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YLtupG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_237 = YPmet(FUNCODEREF(fun_237),YPfalse,T153,ENVNUL,PNUL,sloc(760));
  T152 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_238 = YPmet(FUNCODEREF(fun_238),YPfalse,T152,ENVNUL,PNUL,sloc(760));
  T157 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T156 = (P)YPsig(Ynil,T157,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T155 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_118),T156,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yproduct_elts,T155);
  T159 = fun_236;
  accessorF857 = T159;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yproduct_elts),accessorF857);
  (P)YPmet_name_setter(VARREF(Yproduct_elts),accessorF857);
  T158 = accessorF857;
  getterF858 = T158;
  T164 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T163 = (P)YPpair(VARREF(YLanyG),T164);
  T162 = (P)YPsig(Ynil,T163,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T161 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_120),T162,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yproduct_elts_setter,T161);
  T166 = fun_237;
  accessorF859 = T166;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yproduct_elts_setter),accessorF859);
  (P)YPmet_name_setter(VARREF(Yproduct_elts_setter),accessorF859);
  T165 = accessorF859;
  setterF860 = T165;
  T169 = fun_238;
  T168 = (P)YPPprop(VARREF(YLproductG),VARREF(Yproduct_elts),VARREF(Yproduct_elts_setter),VARREF(YLtupG),T169);
  propF861 = T168;
  (P)YPmet_env_setter(propF861,getterF858);
  (P)YPmet_env_setter(propF861,setterF860);
  T170 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLproductG),propF861);
  T167 = T170;
  T160 = T167;
  lit_123 = YPPsym((P)"prop-owner");
  lit_124 = YPPlist(1,YPPsym((P)"x"));
  lit_125 = YPPsym((P)"prop-owner-setter");
  lit_126 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_127 = YPPlist(1,YPPsym((P)"x"));
  T173 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_239 = YPmet(FUNCODEREF(fun_239),YPfalse,T173,ENVNUL,PNUL,sloc(760));
  T172 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLanyG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_240 = YPmet(FUNCODEREF(fun_240),YPfalse,T172,ENVNUL,PNUL,sloc(760));
  T171 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_241 = YPmet(FUNCODEREF(fun_241),YPfalse,T171,ENVNUL,PNUL,sloc(760));
  T176 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T175 = (P)YPsig(Ynil,T176,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T174 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_123),T175,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_owner,T174);
  T178 = fun_239;
  accessorF862 = T178;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner),accessorF862);
  (P)YPmet_name_setter(VARREF(Yprop_owner),accessorF862);
  T177 = accessorF862;
  getterF863 = T177;
  T183 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T182 = (P)YPpair(VARREF(YLanyG),T183);
  T181 = (P)YPsig(Ynil,T182,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T180 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_125),T181,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_owner_setter,T180);
  T185 = fun_240;
  accessorF864 = T185;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner_setter),accessorF864);
  (P)YPmet_name_setter(VARREF(Yprop_owner_setter),accessorF864);
  T184 = accessorF864;
  setterF865 = T184;
  T188 = fun_241;
  T187 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_owner),VARREF(Yprop_owner_setter),VARREF(YLanyG),T188);
  propF866 = T187;
  (P)YPmet_env_setter(propF866,getterF863);
  (P)YPmet_env_setter(propF866,setterF865);
  T189 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF866);
  T186 = T189;
  T179 = T186;
  lit_128 = YPPsym((P)"prop-getter");
  lit_129 = YPPlist(1,YPPsym((P)"x"));
  lit_130 = YPPsym((P)"prop-getter-setter");
  lit_131 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_132 = YPPlist(1,YPPsym((P)"x"));
  T192 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_242 = YPmet(FUNCODEREF(fun_242),YPfalse,T192,ENVNUL,PNUL,sloc(760));
  T191 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_243 = YPmet(FUNCODEREF(fun_243),YPfalse,T191,ENVNUL,PNUL,sloc(760));
  T190 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_244 = YPmet(FUNCODEREF(fun_244),YPfalse,T190,ENVNUL,PNUL,sloc(760));
  T195 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T194 = (P)YPsig(Ynil,T195,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T193 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_128),T194,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_getter,T193);
  T197 = fun_242;
  accessorF867 = T197;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter),accessorF867);
  (P)YPmet_name_setter(VARREF(Yprop_getter),accessorF867);
  T196 = accessorF867;
  getterF868 = T196;
  T202 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T201 = (P)YPpair(VARREF(YLanyG),T202);
  T200 = (P)YPsig(Ynil,T201,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T199 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_130),T200,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_getter_setter,T199);
  T204 = fun_243;
  accessorF869 = T204;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter_setter),accessorF869);
  (P)YPmet_name_setter(VARREF(Yprop_getter_setter),accessorF869);
  T203 = accessorF869;
  setterF870 = T203;
  T207 = fun_244;
  T206 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_getter),VARREF(Yprop_getter_setter),VARREF(YLfunG),T207);
  propF871 = T206;
  (P)YPmet_env_setter(propF871,getterF868);
  (P)YPmet_env_setter(propF871,setterF870);
  T208 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF871);
  T205 = T208;
  T198 = T205;
  lit_133 = YPPsym((P)"prop-setter");
  lit_134 = YPPlist(1,YPPsym((P)"x"));
  lit_135 = YPPsym((P)"prop-setter-setter");
  lit_136 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_137 = YPPlist(1,YPPsym((P)"x"));
  T211 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_245 = YPmet(FUNCODEREF(fun_245),YPfalse,T211,ENVNUL,PNUL,sloc(760));
  T210 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_246 = YPmet(FUNCODEREF(fun_246),YPfalse,T210,ENVNUL,PNUL,sloc(760));
  T209 = YPsig(LITREF(lit_137),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_247 = YPmet(FUNCODEREF(fun_247),YPfalse,T209,ENVNUL,PNUL,sloc(760));
  T214 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T213 = (P)YPsig(Ynil,T214,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T212 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_133),T213,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_setter,T212);
  T216 = fun_245;
  accessorF872 = T216;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter),accessorF872);
  (P)YPmet_name_setter(VARREF(Yprop_setter),accessorF872);
  T215 = accessorF872;
  getterF873 = T215;
  T221 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T220 = (P)YPpair(VARREF(YLanyG),T221);
  T219 = (P)YPsig(Ynil,T220,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T218 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_135),T219,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_setter_setter,T218);
  T223 = fun_246;
  accessorF874 = T223;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter_setter),accessorF874);
  (P)YPmet_name_setter(VARREF(Yprop_setter_setter),accessorF874);
  T222 = accessorF874;
  setterF875 = T222;
  T226 = fun_247;
  T225 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_setter),VARREF(Yprop_setter_setter),VARREF(YLfunG),T226);
  propF876 = T225;
  (P)YPmet_env_setter(propF876,getterF873);
  (P)YPmet_env_setter(propF876,setterF875);
  T227 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF876);
  T224 = T227;
  T217 = T224;
  lit_138 = YPPsym((P)"prop-type");
  lit_139 = YPPlist(1,YPPsym((P)"x"));
  lit_140 = YPPsym((P)"prop-type-setter");
  lit_141 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_142 = YPPlist(1,YPPsym((P)"x"));
  T230 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_248 = YPmet(FUNCODEREF(fun_248),YPfalse,T230,ENVNUL,PNUL,sloc(760));
  T229 = YPsig(LITREF(lit_141),YPPlist(2,VARREF(YLtypeG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_249 = YPmet(FUNCODEREF(fun_249),YPfalse,T229,ENVNUL,PNUL,sloc(760));
  T228 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_250 = YPmet(FUNCODEREF(fun_250),YPfalse,T228,ENVNUL,PNUL,sloc(760));
  T233 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T232 = (P)YPsig(Ynil,T233,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T231 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_138),T232,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_type,T231);
  T235 = fun_248;
  accessorF877 = T235;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_type),accessorF877);
  (P)YPmet_name_setter(VARREF(Yprop_type),accessorF877);
  T234 = accessorF877;
  getterF878 = T234;
  T240 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T239 = (P)YPpair(VARREF(YLanyG),T240);
  T238 = (P)YPsig(Ynil,T239,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T237 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_140),T238,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_type_setter,T237);
  T242 = fun_249;
  accessorF879 = T242;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_type_setter),accessorF879);
  (P)YPmet_name_setter(VARREF(Yprop_type_setter),accessorF879);
  T241 = accessorF879;
  setterF880 = T241;
  T245 = fun_250;
  T244 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_type),VARREF(Yprop_type_setter),VARREF(YLtypeG),T245);
  propF881 = T244;
  (P)YPmet_env_setter(propF881,getterF878);
  (P)YPmet_env_setter(propF881,setterF880);
  T246 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF881);
  T243 = T246;
  T236 = T243;
  lit_143 = YPPsym((P)"prop-init");
  lit_144 = YPPlist(1,YPPsym((P)"x"));
  lit_145 = YPPsym((P)"prop-init-setter");
  lit_146 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_147 = YPPlist(1,YPPsym((P)"x"));
  lit_148 = YPPlist(1,YPPsym((P)"x"));
  T250 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_251 = YPmet(FUNCODEREF(fun_251),YPfalse,T250,ENVNUL,PNUL,sloc(760));
  T249 = YPsig(LITREF(lit_146),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_252 = YPmet(FUNCODEREF(fun_252),YPfalse,T249,ENVNUL,PNUL,sloc(760));
  T248 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_253 = YPmet(FUNCODEREF(fun_253),YPfalse,T248,ENVNUL,PNUL,sloc(189));
  T247 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_254 = YPmet(FUNCODEREF(fun_254),YPfalse,T247,ENVNUL,PNUL,sloc(760));
  T253 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T252 = (P)YPsig(Ynil,T253,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T251 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_143),T252,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_init,T251);
  T255 = fun_251;
  accessorF882 = T255;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_init),accessorF882);
  (P)YPmet_name_setter(VARREF(Yprop_init),accessorF882);
  T254 = accessorF882;
  getterF883 = T254;
  T260 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T259 = (P)YPpair(VARREF(YLanyG),T260);
  T258 = (P)YPsig(Ynil,T259,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T257 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_145),T258,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_init_setter,T257);
  T262 = fun_252;
  accessorF884 = T262;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_init_setter),accessorF884);
  (P)YPmet_name_setter(VARREF(Yprop_init_setter),accessorF884);
  T261 = accessorF884;
  setterF885 = T261;
  T265 = fun_254;
  T264 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_init),VARREF(Yprop_init_setter),VARREF(YLfunG),T265);
  propF886 = T264;
  (P)YPmet_env_setter(propF886,getterF883);
  (P)YPmet_env_setter(propF886,setterF885);
  T266 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF886);
  T263 = T266;
  T256 = T263;
  lit_149 = YPPsym((P)"gen-cache-missable?");
  lit_150 = YPPlist(1,YPPsym((P)"x"));
  lit_151 = YPPsym((P)"gen-cache-missable?-setter");
  lit_152 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_153 = YPPlist(1,YPPsym((P)"x"));
  T269 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_255 = YPmet(FUNCODEREF(fun_255),YPfalse,T269,ENVNUL,PNUL,sloc(760));
  T268 = YPsig(LITREF(lit_152),YPPlist(2,VARREF(YLlogG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_256 = YPmet(FUNCODEREF(fun_256),YPfalse,T268,ENVNUL,PNUL,sloc(760));
  T267 = YPsig(LITREF(lit_153),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_257 = YPmet(FUNCODEREF(fun_257),YPfalse,T267,ENVNUL,PNUL,sloc(760));
  T272 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T271 = (P)YPsig(Ynil,T272,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T270 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_149),T271,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_missableQ,T270);
  T274 = fun_255;
  accessorF887 = T274;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ),accessorF887);
  (P)YPmet_name_setter(VARREF(Ygen_cache_missableQ),accessorF887);
  T273 = accessorF887;
  getterF888 = T273;
  T279 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T278 = (P)YPpair(VARREF(YLanyG),T279);
  T277 = (P)YPsig(Ynil,T278,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T276 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_151),T277,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_missableQ_setter,T276);
  T281 = fun_256;
  accessorF889 = T281;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ_setter),accessorF889);
  (P)YPmet_name_setter(VARREF(Ygen_cache_missableQ_setter),accessorF889);
  T280 = accessorF889;
  setterF890 = T280;
  T284 = fun_257;
  T283 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ),VARREF(Ygen_cache_missableQ_setter),VARREF(YLlogG),T284);
  propF891 = T283;
  (P)YPmet_env_setter(propF891,getterF888);
  (P)YPmet_env_setter(propF891,setterF890);
  T285 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF891);
  T282 = T285;
  T275 = T282;
  lit_154 = YPPsym((P)"gen-cache-arg-pos");
  lit_155 = YPPlist(1,YPPsym((P)"x"));
  lit_156 = YPPsym((P)"gen-cache-arg-pos-setter");
  lit_157 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_158 = YPPlist(1,YPPsym((P)"x"));
  T288 = YPsig(LITREF(lit_155),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_258 = YPmet(FUNCODEREF(fun_258),YPfalse,T288,ENVNUL,PNUL,sloc(760));
  T287 = YPsig(LITREF(lit_157),YPPlist(2,VARREF(YLfixnumG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_259 = YPmet(FUNCODEREF(fun_259),YPfalse,T287,ENVNUL,PNUL,sloc(760));
  T286 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_260 = YPmet(FUNCODEREF(fun_260),YPfalse,T286,ENVNUL,PNUL,sloc(760));
  T291 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T290 = (P)YPsig(Ynil,T291,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T289 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_154),T290,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_arg_pos,T289);
  T293 = fun_258;
  accessorF892 = T293;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos),accessorF892);
  (P)YPmet_name_setter(VARREF(Ygen_cache_arg_pos),accessorF892);
  T292 = accessorF892;
  getterF893 = T292;
  T298 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T297 = (P)YPpair(VARREF(YLanyG),T298);
  T296 = (P)YPsig(Ynil,T297,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T295 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_156),T296,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_arg_pos_setter,T295);
  T300 = fun_259;
  accessorF894 = T300;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos_setter),accessorF894);
  (P)YPmet_name_setter(VARREF(Ygen_cache_arg_pos_setter),accessorF894);
  T299 = accessorF894;
  setterF895 = T299;
  T303 = fun_260;
  T302 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos),VARREF(Ygen_cache_arg_pos_setter),VARREF(YLfixnumG),T303);
  propF896 = T302;
  (P)YPmet_env_setter(propF896,getterF893);
  (P)YPmet_env_setter(propF896,setterF895);
  T304 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF896);
  T301 = T304;
  T294 = T301;
  lit_159 = YPPsym((P)"gen-cache-singletons");
  lit_160 = YPPlist(1,YPPsym((P)"x"));
  lit_161 = YPPsym((P)"gen-cache-singletons-setter");
  lit_162 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_163 = YPPlist(1,YPPsym((P)"x"));
  T307 = YPsig(LITREF(lit_160),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_261 = YPmet(FUNCODEREF(fun_261),YPfalse,T307,ENVNUL,PNUL,sloc(760));
  T306 = YPsig(LITREF(lit_162),YPPlist(2,VARREF(YLlstG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_262 = YPmet(FUNCODEREF(fun_262),YPfalse,T306,ENVNUL,PNUL,sloc(760));
  T305 = YPsig(LITREF(lit_163),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_263 = YPmet(FUNCODEREF(fun_263),YPfalse,T305,ENVNUL,PNUL,sloc(760));
  T310 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T309 = (P)YPsig(Ynil,T310,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T308 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_159),T309,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_singletons,T308);
  T312 = fun_261;
  accessorF897 = T312;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons),accessorF897);
  (P)YPmet_name_setter(VARREF(Ygen_cache_singletons),accessorF897);
  T311 = accessorF897;
  getterF898 = T311;
  T317 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T316 = (P)YPpair(VARREF(YLanyG),T317);
  T315 = (P)YPsig(Ynil,T316,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T314 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_161),T315,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_singletons_setter,T314);
  T319 = fun_262;
  accessorF899 = T319;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons_setter),accessorF899);
  (P)YPmet_name_setter(VARREF(Ygen_cache_singletons_setter),accessorF899);
  T318 = accessorF899;
  setterF900 = T318;
  T322 = fun_263;
  T321 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons),VARREF(Ygen_cache_singletons_setter),VARREF(YLlstG),T322);
  propF901 = T321;
  (P)YPmet_env_setter(propF901,getterF898);
  (P)YPmet_env_setter(propF901,setterF900);
  T323 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF901);
  T320 = T323;
  T313 = T320;
  lit_164 = YPPsym((P)"gen-cache-classes");
  lit_165 = YPPlist(1,YPPsym((P)"x"));
  lit_166 = YPPsym((P)"gen-cache-classes-setter");
  lit_167 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_168 = YPPlist(1,YPPsym((P)"x"));
  T326 = YPsig(LITREF(lit_165),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_264 = YPmet(FUNCODEREF(fun_264),YPfalse,T326,ENVNUL,PNUL,sloc(760));
  T325 = YPsig(LITREF(lit_167),YPPlist(2,VARREF(YLlstG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_265 = YPmet(FUNCODEREF(fun_265),YPfalse,T325,ENVNUL,PNUL,sloc(760));
  T324 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_266 = YPmet(FUNCODEREF(fun_266),YPfalse,T324,ENVNUL,PNUL,sloc(760));
  T329 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T328 = (P)YPsig(Ynil,T329,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T327 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_164),T328,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_classes,T327);
  T331 = fun_264;
  accessorF902 = T331;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes),accessorF902);
  (P)YPmet_name_setter(VARREF(Ygen_cache_classes),accessorF902);
  T330 = accessorF902;
  getterF903 = T330;
  T336 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T335 = (P)YPpair(VARREF(YLanyG),T336);
  T334 = (P)YPsig(Ynil,T335,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T333 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_166),T334,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_classes_setter,T333);
  T338 = fun_265;
  accessorF904 = T338;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes_setter),accessorF904);
  (P)YPmet_name_setter(VARREF(Ygen_cache_classes_setter),accessorF904);
  T337 = accessorF904;
  setterF905 = T337;
  T341 = fun_266;
  T340 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes),VARREF(Ygen_cache_classes_setter),VARREF(YLlstG),T341);
  propF906 = T340;
  (P)YPmet_env_setter(propF906,getterF903);
  (P)YPmet_env_setter(propF906,setterF905);
  T342 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF906);
  T339 = T342;
  T332 = T339;
  lit_169 = YPPsym((P)"sig-names");
  lit_170 = YPPlist(1,YPPsym((P)"x"));
  lit_171 = YPPsym((P)"sig-names-setter");
  lit_172 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_173 = YPPlist(1,YPPsym((P)"x"));
  T345 = YPsig(LITREF(lit_170),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_267 = YPmet(FUNCODEREF(fun_267),YPfalse,T345,ENVNUL,PNUL,sloc(760));
  T344 = YPsig(LITREF(lit_172),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_268 = YPmet(FUNCODEREF(fun_268),YPfalse,T344,ENVNUL,PNUL,sloc(760));
  T343 = YPsig(LITREF(lit_173),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_269 = YPmet(FUNCODEREF(fun_269),YPfalse,T343,ENVNUL,PNUL,sloc(760));
  T348 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T347 = (P)YPsig(Ynil,T348,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T346 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_169),T347,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names,T346);
  T350 = fun_267;
  accessorF907 = T350;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_names),accessorF907);
  (P)YPmet_name_setter(VARREF(Ysig_names),accessorF907);
  T349 = accessorF907;
  getterF908 = T349;
  T355 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T354 = (P)YPpair(VARREF(YLanyG),T355);
  T353 = (P)YPsig(Ynil,T354,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T352 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_171),T353,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names_setter,T352);
  T357 = fun_268;
  accessorF909 = T357;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_names_setter),accessorF909);
  (P)YPmet_name_setter(VARREF(Ysig_names_setter),accessorF909);
  T356 = accessorF909;
  setterF910 = T356;
  T360 = fun_269;
  T359 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_names),VARREF(Ysig_names_setter),VARREF(YLlstG),T360);
  propF911 = T359;
  (P)YPmet_env_setter(propF911,getterF908);
  (P)YPmet_env_setter(propF911,setterF910);
  T361 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF911);
  T358 = T361;
  T351 = T358;
  lit_174 = YPPsym((P)"sig-specs");
  lit_175 = YPPlist(1,YPPsym((P)"x"));
  lit_176 = YPPsym((P)"sig-specs-setter");
  lit_177 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_178 = YPPlist(1,YPPsym((P)"x"));
  T364 = YPsig(LITREF(lit_175),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_270 = YPmet(FUNCODEREF(fun_270),YPfalse,T364,ENVNUL,PNUL,sloc(760));
  T363 = YPsig(LITREF(lit_177),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_271 = YPmet(FUNCODEREF(fun_271),YPfalse,T363,ENVNUL,PNUL,sloc(760));
  T362 = YPsig(LITREF(lit_178),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_272 = YPmet(FUNCODEREF(fun_272),YPfalse,T362,ENVNUL,PNUL,sloc(760));
  T367 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T366 = (P)YPsig(Ynil,T367,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T365 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_174),T366,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs,T365);
  T369 = fun_270;
  accessorF912 = T369;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs),accessorF912);
  (P)YPmet_name_setter(VARREF(Ysig_specs),accessorF912);
  T368 = accessorF912;
  getterF913 = T368;
  T374 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T373 = (P)YPpair(VARREF(YLanyG),T374);
  T372 = (P)YPsig(Ynil,T373,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T371 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_176),T372,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs_setter,T371);
  T376 = fun_271;
  accessorF914 = T376;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs_setter),accessorF914);
  (P)YPmet_name_setter(VARREF(Ysig_specs_setter),accessorF914);
  T375 = accessorF914;
  setterF915 = T375;
  T379 = fun_272;
  T378 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_specs),VARREF(Ysig_specs_setter),VARREF(YLlstG),T379);
  propF916 = T378;
  (P)YPmet_env_setter(propF916,getterF913);
  (P)YPmet_env_setter(propF916,setterF915);
  T380 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF916);
  T377 = T380;
  T370 = T377;
  lit_179 = YPPsym((P)"sig-nary?");
  lit_180 = YPPlist(1,YPPsym((P)"x"));
  lit_181 = YPPsym((P)"sig-nary?-setter");
  lit_182 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_183 = YPPlist(1,YPPsym((P)"x"));
  T383 = YPsig(LITREF(lit_180),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_273 = YPmet(FUNCODEREF(fun_273),YPfalse,T383,ENVNUL,PNUL,sloc(760));
  T382 = YPsig(LITREF(lit_182),YPPlist(2,VARREF(YLlogG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_274 = YPmet(FUNCODEREF(fun_274),YPfalse,T382,ENVNUL,PNUL,sloc(760));
  T381 = YPsig(LITREF(lit_183),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_275 = YPmet(FUNCODEREF(fun_275),YPfalse,T381,ENVNUL,PNUL,sloc(760));
  T386 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T385 = (P)YPsig(Ynil,T386,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T384 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_179),T385,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ,T384);
  T388 = fun_273;
  accessorF917 = T388;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ),accessorF917);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ),accessorF917);
  T387 = accessorF917;
  getterF918 = T387;
  T393 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T392 = (P)YPpair(VARREF(YLanyG),T393);
  T391 = (P)YPsig(Ynil,T392,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T390 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_181),T391,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ_setter,T390);
  T395 = fun_274;
  accessorF919 = T395;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ_setter),accessorF919);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ_setter),accessorF919);
  T394 = accessorF919;
  setterF920 = T394;
  T398 = fun_275;
  T397 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_naryQ),VARREF(Ysig_naryQ_setter),VARREF(YLlogG),T398);
  propF921 = T397;
  (P)YPmet_env_setter(propF921,getterF918);
  (P)YPmet_env_setter(propF921,setterF920);
  T399 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF921);
  T396 = T399;
  T389 = T396;
  lit_184 = YPPsym((P)"sig-arity");
  lit_185 = YPPlist(1,YPPsym((P)"x"));
  lit_186 = YPPsym((P)"sig-arity-setter");
  lit_187 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_188 = YPPlist(1,YPPsym((P)"x"));
  T402 = YPsig(LITREF(lit_185),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_276 = YPmet(FUNCODEREF(fun_276),YPfalse,T402,ENVNUL,PNUL,sloc(760));
  T401 = YPsig(LITREF(lit_187),YPPlist(2,VARREF(YLfixnumG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_277 = YPmet(FUNCODEREF(fun_277),YPfalse,T401,ENVNUL,PNUL,sloc(760));
  T400 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_278 = YPmet(FUNCODEREF(fun_278),YPfalse,T400,ENVNUL,PNUL,sloc(760));
  T405 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T404 = (P)YPsig(Ynil,T405,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T403 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_184),T404,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity,T403);
  T407 = fun_276;
  accessorF922 = T407;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity),accessorF922);
  (P)YPmet_name_setter(VARREF(Ysig_arity),accessorF922);
  T406 = accessorF922;
  getterF923 = T406;
  T412 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T411 = (P)YPpair(VARREF(YLanyG),T412);
  T410 = (P)YPsig(Ynil,T411,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T409 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_186),T410,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity_setter,T409);
  T414 = fun_277;
  accessorF924 = T414;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity_setter),accessorF924);
  (P)YPmet_name_setter(VARREF(Ysig_arity_setter),accessorF924);
  T413 = accessorF924;
  setterF925 = T413;
  T417 = fun_278;
  T416 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_arity),VARREF(Ysig_arity_setter),VARREF(YLfixnumG),T417);
  propF926 = T416;
  (P)YPmet_env_setter(propF926,getterF923);
  (P)YPmet_env_setter(propF926,setterF925);
  T418 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF926);
  T415 = T418;
  T408 = T415;
  lit_189 = YPPsym((P)"sig-val");
  lit_190 = YPPlist(1,YPPsym((P)"x"));
  lit_191 = YPPsym((P)"sig-val-setter");
  lit_192 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_193 = YPPlist(1,YPPsym((P)"x"));
  T421 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_279 = YPmet(FUNCODEREF(fun_279),YPfalse,T421,ENVNUL,PNUL,sloc(760));
  T420 = YPsig(LITREF(lit_192),YPPlist(2,VARREF(YLanyG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_280 = YPmet(FUNCODEREF(fun_280),YPfalse,T420,ENVNUL,PNUL,sloc(760));
  T419 = YPsig(LITREF(lit_193),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_281 = YPmet(FUNCODEREF(fun_281),YPfalse,T419,ENVNUL,PNUL,sloc(760));
  T424 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T423 = (P)YPsig(Ynil,T424,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T422 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_189),T423,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val,T422);
  T426 = fun_279;
  accessorF927 = T426;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_val),accessorF927);
  (P)YPmet_name_setter(VARREF(Ysig_val),accessorF927);
  T425 = accessorF927;
  getterF928 = T425;
  T431 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T430 = (P)YPpair(VARREF(YLanyG),T431);
  T429 = (P)YPsig(Ynil,T430,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T428 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_191),T429,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val_setter,T428);
  T433 = fun_280;
  accessorF929 = T433;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_val_setter),accessorF929);
  (P)YPmet_name_setter(VARREF(Ysig_val_setter),accessorF929);
  T432 = accessorF929;
  setterF930 = T432;
  T436 = fun_281;
  T435 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_val),VARREF(Ysig_val_setter),VARREF(YLanyG),T436);
  propF931 = T435;
  (P)YPmet_env_setter(propF931,getterF928);
  (P)YPmet_env_setter(propF931,setterF930);
  T437 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF931);
  T434 = T437;
  T427 = T434;
  lit_194 = YPPsym((P)"sig-unification-vars");
  lit_195 = YPPlist(1,YPPsym((P)"x"));
  lit_196 = YPPsym((P)"sig-unification-vars-setter");
  lit_197 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_198 = YPPlist(1,YPPsym((P)"x"));
  T440 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_282 = YPmet(FUNCODEREF(fun_282),YPfalse,T440,ENVNUL,PNUL,sloc(760));
  T439 = YPsig(LITREF(lit_197),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_283 = YPmet(FUNCODEREF(fun_283),YPfalse,T439,ENVNUL,PNUL,sloc(760));
  T438 = YPsig(LITREF(lit_198),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_284 = YPmet(FUNCODEREF(fun_284),YPfalse,T438,ENVNUL,PNUL,sloc(760));
  T443 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T442 = (P)YPsig(Ynil,T443,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T441 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_194),T442,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars,T441);
  T445 = fun_282;
  accessorF932 = T445;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars),accessorF932);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars),accessorF932);
  T444 = accessorF932;
  getterF933 = T444;
  T450 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T449 = (P)YPpair(VARREF(YLanyG),T450);
  T448 = (P)YPsig(Ynil,T449,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T447 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_196),T448,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars_setter,T447);
  T452 = fun_283;
  accessorF934 = T452;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars_setter),accessorF934);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars_setter),accessorF934);
  T451 = accessorF934;
  setterF935 = T451;
  T455 = fun_284;
  T454 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_unification_vars),VARREF(Ysig_unification_vars_setter),VARREF(YLlstG),T455);
  propF936 = T454;
  (P)YPmet_env_setter(propF936,getterF933);
  (P)YPmet_env_setter(propF936,setterF935);
  T456 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF936);
  T453 = T456;
  T446 = T453;
  lit_199 = YPPsym((P)"fun-code");
  lit_200 = YPPlist(1,YPPsym((P)"x"));
  lit_201 = YPPsym((P)"fun-code-setter");
  lit_202 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_203 = YPPlist(1,YPPsym((P)"x"));
  T459 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_285 = YPmet(FUNCODEREF(fun_285),YPfalse,T459,ENVNUL,PNUL,sloc(760));
  T458 = YPsig(LITREF(lit_202),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_286 = YPmet(FUNCODEREF(fun_286),YPfalse,T458,ENVNUL,PNUL,sloc(760));
  T457 = YPsig(LITREF(lit_203),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_287 = YPmet(FUNCODEREF(fun_287),YPfalse,T457,ENVNUL,PNUL,sloc(760));
  T462 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T461 = (P)YPsig(Ynil,T462,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T460 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_199),T461,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_code,T460);
  T464 = fun_285;
  accessorF937 = T464;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_code),accessorF937);
  (P)YPmet_name_setter(VARREF(Yfun_code),accessorF937);
  T463 = accessorF937;
  getterF938 = T463;
  T469 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T468 = (P)YPpair(VARREF(YLanyG),T469);
  T467 = (P)YPsig(Ynil,T468,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T466 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_201),T467,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_code_setter,T466);
  T471 = fun_286;
  accessorF939 = T471;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_code_setter),accessorF939);
  (P)YPmet_name_setter(VARREF(Yfun_code_setter),accessorF939);
  T470 = accessorF939;
  setterF940 = T470;
  T474 = fun_287;
  T473 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_code),VARREF(Yfun_code_setter),VARREF(YLanyG),T474);
  propF941 = T473;
  (P)YPmet_env_setter(propF941,getterF938);
  (P)YPmet_env_setter(propF941,setterF940);
  T475 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF941);
  T472 = T475;
  T465 = T472;
  lit_204 = YPPsym((P)"fun-name");
  lit_205 = YPPlist(1,YPPsym((P)"x"));
  lit_206 = YPPsym((P)"fun-name-setter");
  lit_207 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_208 = YPPlist(1,YPPsym((P)"x"));
  T478 = YPsig(LITREF(lit_205),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_288 = YPmet(FUNCODEREF(fun_288),YPfalse,T478,ENVNUL,PNUL,sloc(760));
  T477 = YPsig(LITREF(lit_207),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_289 = YPmet(FUNCODEREF(fun_289),YPfalse,T477,ENVNUL,PNUL,sloc(760));
  T476 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_290 = YPmet(FUNCODEREF(fun_290),YPfalse,T476,ENVNUL,PNUL,sloc(760));
  T481 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T480 = (P)YPsig(Ynil,T481,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T479 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_204),T480,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name,T479);
  T483 = fun_288;
  accessorF942 = T483;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_name),accessorF942);
  (P)YPmet_name_setter(VARREF(Yfun_name),accessorF942);
  T482 = accessorF942;
  getterF943 = T482;
  T488 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T487 = (P)YPpair(VARREF(YLanyG),T488);
  T486 = (P)YPsig(Ynil,T487,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T485 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_206),T486,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name_setter,T485);
  T490 = fun_289;
  accessorF944 = T490;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_name_setter),accessorF944);
  (P)YPmet_name_setter(VARREF(Yfun_name_setter),accessorF944);
  T489 = accessorF944;
  setterF945 = T489;
  T493 = fun_290;
  T492 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_name),VARREF(Yfun_name_setter),VARREF(YLanyG),T493);
  propF946 = T492;
  (P)YPmet_env_setter(propF946,getterF943);
  (P)YPmet_env_setter(propF946,setterF945);
  T494 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF946);
  T491 = T494;
  T484 = T491;
  lit_209 = YPPsym((P)"fun-sig");
  lit_210 = YPPlist(1,YPPsym((P)"x"));
  lit_211 = YPPsym((P)"fun-sig-setter");
  lit_212 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_213 = YPPlist(1,YPPsym((P)"x"));
  T497 = YPsig(LITREF(lit_210),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_291 = YPmet(FUNCODEREF(fun_291),YPfalse,T497,ENVNUL,PNUL,sloc(760));
  T496 = YPsig(LITREF(lit_212),YPPlist(2,VARREF(YLsigG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_292 = YPmet(FUNCODEREF(fun_292),YPfalse,T496,ENVNUL,PNUL,sloc(760));
  T495 = YPsig(LITREF(lit_213),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_293 = YPmet(FUNCODEREF(fun_293),YPfalse,T495,ENVNUL,PNUL,sloc(760));
  T500 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T499 = (P)YPsig(Ynil,T500,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T498 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_209),T499,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig,T498);
  T502 = fun_291;
  accessorF947 = T502;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig),accessorF947);
  (P)YPmet_name_setter(VARREF(Yfun_sig),accessorF947);
  T501 = accessorF947;
  getterF948 = T501;
  T507 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T506 = (P)YPpair(VARREF(YLanyG),T507);
  T505 = (P)YPsig(Ynil,T506,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T504 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_211),T505,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig_setter,T504);
  T509 = fun_292;
  accessorF949 = T509;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig_setter),accessorF949);
  (P)YPmet_name_setter(VARREF(Yfun_sig_setter),accessorF949);
  T508 = accessorF949;
  setterF950 = T508;
  T512 = fun_293;
  T511 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_sig),VARREF(Yfun_sig_setter),VARREF(YLsigG),T512);
  propF951 = T511;
  (P)YPmet_env_setter(propF951,getterF948);
  (P)YPmet_env_setter(propF951,setterF950);
  T513 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF951);
  T510 = T513;
  T503 = T510;
  lit_214 = YPPsym((P)"fun-env");
  lit_215 = YPPlist(1,YPPsym((P)"x"));
  lit_216 = YPPsym((P)"fun-env-setter");
  lit_217 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_218 = YPPlist(1,YPPsym((P)"x"));
  T516 = YPsig(LITREF(lit_215),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_294 = YPmet(FUNCODEREF(fun_294),YPfalse,T516,ENVNUL,PNUL,sloc(760));
  T515 = YPsig(LITREF(lit_217),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_295 = YPmet(FUNCODEREF(fun_295),YPfalse,T515,ENVNUL,PNUL,sloc(760));
  T514 = YPsig(LITREF(lit_218),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_296 = YPmet(FUNCODEREF(fun_296),YPfalse,T514,ENVNUL,PNUL,sloc(760));
  T519 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T518 = (P)YPsig(Ynil,T519,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T517 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_214),T518,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_env,T517);
  T521 = fun_294;
  accessorF952 = T521;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_env),accessorF952);
  (P)YPmet_name_setter(VARREF(Yfun_env),accessorF952);
  T520 = accessorF952;
  getterF953 = T520;
  T526 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T525 = (P)YPpair(VARREF(YLanyG),T526);
  T524 = (P)YPsig(Ynil,T525,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T523 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_216),T524,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_env_setter,T523);
  T528 = fun_295;
  accessorF954 = T528;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_env_setter),accessorF954);
  (P)YPmet_name_setter(VARREF(Yfun_env_setter),accessorF954);
  T527 = accessorF954;
  setterF955 = T527;
  T531 = fun_296;
  T530 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_env),VARREF(Yfun_env_setter),VARREF(YLanyG),T531);
  propF956 = T530;
  (P)YPmet_env_setter(propF956,getterF953);
  (P)YPmet_env_setter(propF956,setterF955);
  T532 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF956);
  T529 = T532;
  T522 = T529;
  lit_219 = YPPsym((P)"fun-refs");
  lit_220 = YPPlist(1,YPPsym((P)"x"));
  lit_221 = YPPsym((P)"fun-refs-setter");
  lit_222 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_223 = YPPlist(1,YPPsym((P)"x"));
  T535 = YPsig(LITREF(lit_220),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_297 = YPmet(FUNCODEREF(fun_297),YPfalse,T535,ENVNUL,PNUL,sloc(760));
  T534 = YPsig(LITREF(lit_222),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_298 = YPmet(FUNCODEREF(fun_298),YPfalse,T534,ENVNUL,PNUL,sloc(760));
  T533 = YPsig(LITREF(lit_223),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_299 = YPmet(FUNCODEREF(fun_299),YPfalse,T533,ENVNUL,PNUL,sloc(760));
  T538 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T537 = (P)YPsig(Ynil,T538,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T536 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_219),T537,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_refs,T536);
  T540 = fun_297;
  accessorF957 = T540;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_refs),accessorF957);
  (P)YPmet_name_setter(VARREF(Yfun_refs),accessorF957);
  T539 = accessorF957;
  getterF958 = T539;
  T545 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T544 = (P)YPpair(VARREF(YLanyG),T545);
  T543 = (P)YPsig(Ynil,T544,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T542 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_221),T543,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_refs_setter,T542);
  T547 = fun_298;
  accessorF959 = T547;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_refs_setter),accessorF959);
  (P)YPmet_name_setter(VARREF(Yfun_refs_setter),accessorF959);
  T546 = accessorF959;
  setterF960 = T546;
  T550 = fun_299;
  T549 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_refs),VARREF(Yfun_refs_setter),VARREF(YLanyG),T550);
  propF961 = T549;
  (P)YPmet_env_setter(propF961,getterF958);
  (P)YPmet_env_setter(propF961,setterF960);
  T551 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF961);
  T548 = T551;
  T541 = T548;
  lit_224 = YPPsym((P)"fun-src");
  lit_225 = YPPlist(1,YPPsym((P)"x"));
  lit_226 = YPPsym((P)"fun-src-setter");
  lit_227 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_228 = YPPlist(1,YPPsym((P)"x"));
  T554 = YPsig(LITREF(lit_225),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_300 = YPmet(FUNCODEREF(fun_300),YPfalse,T554,ENVNUL,PNUL,sloc(760));
  T553 = YPsig(LITREF(lit_227),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_301 = YPmet(FUNCODEREF(fun_301),YPfalse,T553,ENVNUL,PNUL,sloc(760));
  T552 = YPsig(LITREF(lit_228),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_302 = YPmet(FUNCODEREF(fun_302),YPfalse,T552,ENVNUL,PNUL,sloc(760));
  T557 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T556 = (P)YPsig(Ynil,T557,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T555 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_224),T556,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src,T555);
  T559 = fun_300;
  accessorF962 = T559;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_src),accessorF962);
  (P)YPmet_name_setter(VARREF(Yfun_src),accessorF962);
  T558 = accessorF962;
  getterF963 = T558;
  T564 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T563 = (P)YPpair(VARREF(YLanyG),T564);
  T562 = (P)YPsig(Ynil,T563,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T561 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_226),T562,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src_setter,T561);
  T566 = fun_301;
  accessorF964 = T566;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_src_setter),accessorF964);
  (P)YPmet_name_setter(VARREF(Yfun_src_setter),accessorF964);
  T565 = accessorF964;
  setterF965 = T565;
  T569 = fun_302;
  T568 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_src),VARREF(Yfun_src_setter),VARREF(YLanyG),T569);
  propF966 = T568;
  (P)YPmet_env_setter(propF966,getterF963);
  (P)YPmet_env_setter(propF966,setterF965);
  T570 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF966);
  T567 = T570;
  T560 = T567;
  lit_229 = YPPsym((P)"fun-mets");
  lit_230 = YPPlist(1,YPPsym((P)"x"));
  lit_231 = YPPsym((P)"fun-mets-setter");
  lit_232 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_233 = YPPlist(1,YPPsym((P)"x"));
  T573 = YPsig(LITREF(lit_230),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_303 = YPmet(FUNCODEREF(fun_303),YPfalse,T573,ENVNUL,PNUL,sloc(760));
  T572 = YPsig(LITREF(lit_232),YPPlist(2,VARREF(YLlstG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_304 = YPmet(FUNCODEREF(fun_304),YPfalse,T572,ENVNUL,PNUL,sloc(760));
  T571 = YPsig(LITREF(lit_233),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_305 = YPmet(FUNCODEREF(fun_305),YPfalse,T571,ENVNUL,PNUL,sloc(760));
  T576 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T575 = (P)YPsig(Ynil,T576,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T574 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_229),T575,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets,T574);
  T578 = fun_303;
  accessorF967 = T578;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets),accessorF967);
  (P)YPmet_name_setter(VARREF(Yfun_mets),accessorF967);
  T577 = accessorF967;
  getterF968 = T577;
  T583 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T582 = (P)YPpair(VARREF(YLanyG),T583);
  T581 = (P)YPsig(Ynil,T582,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T580 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_231),T581,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets_setter,T580);
  T585 = fun_304;
  accessorF969 = T585;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets_setter),accessorF969);
  (P)YPmet_name_setter(VARREF(Yfun_mets_setter),accessorF969);
  T584 = accessorF969;
  setterF970 = T584;
  T588 = fun_305;
  T587 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_mets),VARREF(Yfun_mets_setter),VARREF(YLlstG),T588);
  propF971 = T587;
  (P)YPmet_env_setter(propF971,getterF968);
  (P)YPmet_env_setter(propF971,setterF970);
  T589 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF971);
  T586 = T589;
  T579 = T586;
  lit_234 = YPPsym((P)"fun-cache");
  lit_235 = YPPlist(1,YPPsym((P)"x"));
  lit_236 = YPPsym((P)"fun-cache-setter");
  lit_237 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_238 = YPPlist(1,YPPsym((P)"x"));
  T592 = YPsig(LITREF(lit_235),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_306 = YPmet(FUNCODEREF(fun_306),YPfalse,T592,ENVNUL,PNUL,sloc(760));
  T591 = YPsig(LITREF(lit_237),YPPlist(2,VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_307 = YPmet(FUNCODEREF(fun_307),YPfalse,T591,ENVNUL,PNUL,sloc(760));
  T590 = YPsig(LITREF(lit_238),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_308 = YPmet(FUNCODEREF(fun_308),YPfalse,T590,ENVNUL,PNUL,sloc(760));
  T595 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T594 = (P)YPsig(Ynil,T595,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T593 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_234),T594,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_cache,T593);
  T597 = fun_306;
  accessorF972 = T597;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache),accessorF972);
  (P)YPmet_name_setter(VARREF(Yfun_cache),accessorF972);
  T596 = accessorF972;
  getterF973 = T596;
  T602 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T601 = (P)YPpair(VARREF(YLanyG),T602);
  T600 = (P)YPsig(Ynil,T601,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T599 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_236),T600,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_cache_setter,T599);
  T604 = fun_307;
  accessorF974 = T604;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache_setter),accessorF974);
  (P)YPmet_name_setter(VARREF(Yfun_cache_setter),accessorF974);
  T603 = accessorF974;
  setterF975 = T603;
  T607 = fun_308;
  T606 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_cache),VARREF(Yfun_cache_setter),VARREF(YLanyG),T607);
  propF976 = T606;
  (P)YPmet_env_setter(propF976,getterF973);
  (P)YPmet_env_setter(propF976,setterF975);
  T608 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF976);
  T605 = T608;
  T598 = T605;
  lit_239 = YPPsym((P)"gen-refs");
  lit_240 = YPPlist(1,YPPsym((P)"x"));
  lit_241 = YPPsym((P)"gen-refs-setter");
  lit_242 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_243 = YPPlist(1,YPPsym((P)"x"));
  T611 = YPsig(LITREF(lit_240),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_309 = YPmet(FUNCODEREF(fun_309),YPfalse,T611,ENVNUL,PNUL,sloc(760));
  T610 = YPsig(LITREF(lit_242),YPPlist(2,VARREF(YLtupG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_310 = YPmet(FUNCODEREF(fun_310),YPfalse,T610,ENVNUL,PNUL,sloc(760));
  T609 = YPsig(LITREF(lit_243),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_311 = YPmet(FUNCODEREF(fun_311),YPfalse,T609,ENVNUL,PNUL,sloc(760));
  T614 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T613 = (P)YPsig(Ynil,T614,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T612 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_239),T613,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_refs,T612);
  T616 = fun_309;
  accessorF977 = T616;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_refs),accessorF977);
  (P)YPmet_name_setter(VARREF(Ygen_refs),accessorF977);
  T615 = accessorF977;
  getterF978 = T615;
  T621 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T620 = (P)YPpair(VARREF(YLanyG),T621);
  T619 = (P)YPsig(Ynil,T620,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T618 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_241),T619,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_refs_setter,T618);
  T623 = fun_310;
  accessorF979 = T623;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_refs_setter),accessorF979);
  (P)YPmet_name_setter(VARREF(Ygen_refs_setter),accessorF979);
  T622 = accessorF979;
  setterF980 = T622;
  T626 = fun_311;
  T625 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_refs),VARREF(Ygen_refs_setter),VARREF(YLtupG),T626);
  propF981 = T625;
  (P)YPmet_env_setter(propF981,getterF978);
  (P)YPmet_env_setter(propF981,setterF980);
  T627 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF981);
  T624 = T627;
  T617 = T624;
  lit_244 = YPPsym((P)"gen-src");
  lit_245 = YPPlist(1,YPPsym((P)"x"));
  lit_246 = YPPsym((P)"gen-src-setter");
  lit_247 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_248 = YPPlist(1,YPPsym((P)"x"));
  T630 = YPsig(LITREF(lit_245),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_312 = YPmet(FUNCODEREF(fun_312),YPfalse,T630,ENVNUL,PNUL,sloc(760));
  T629 = YPsig(LITREF(lit_247),YPPlist(2,VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_313 = YPmet(FUNCODEREF(fun_313),YPfalse,T629,ENVNUL,PNUL,sloc(760));
  T628 = YPsig(LITREF(lit_248),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_314 = YPmet(FUNCODEREF(fun_314),YPfalse,T628,ENVNUL,PNUL,sloc(760));
  T633 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T632 = (P)YPsig(Ynil,T633,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T631 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_244),T632,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src,T631);
  T635 = fun_312;
  accessorF982 = T635;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_src),accessorF982);
  (P)YPmet_name_setter(VARREF(Ygen_src),accessorF982);
  T634 = accessorF982;
  getterF983 = T634;
  T640 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T639 = (P)YPpair(VARREF(YLanyG),T640);
  T638 = (P)YPsig(Ynil,T639,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T637 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_246),T638,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src_setter,T637);
  T642 = fun_313;
  accessorF984 = T642;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_src_setter),accessorF984);
  (P)YPmet_name_setter(VARREF(Ygen_src_setter),accessorF984);
  T641 = accessorF984;
  setterF985 = T641;
  T645 = fun_314;
  T644 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_src),VARREF(Ygen_src_setter),VARREF(YLanyG),T645);
  propF986 = T644;
  (P)YPmet_env_setter(propF986,getterF983);
  (P)YPmet_env_setter(propF986,setterF985);
  T646 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF986);
  T643 = T646;
  T636 = T643;
  lit_249 = YPPsym((P)"opts-location");
  lit_250 = YPPlist(1,YPPsym((P)"x"));
  lit_251 = YPPsym((P)"opts-location-setter");
  lit_252 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_253 = YPPlist(1,YPPsym((P)"x"));
  T649 = YPsig(LITREF(lit_250),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_315 = YPmet(FUNCODEREF(fun_315),YPfalse,T649,ENVNUL,PNUL,sloc(760));
  T648 = YPsig(LITREF(lit_252),YPPlist(2,VARREF(YLlocG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_316 = YPmet(FUNCODEREF(fun_316),YPfalse,T648,ENVNUL,PNUL,sloc(760));
  T647 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_317 = YPmet(FUNCODEREF(fun_317),YPfalse,T647,ENVNUL,PNUL,sloc(760));
  T652 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T651 = (P)YPsig(Ynil,T652,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T650 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_249),T651,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_location,T650);
  T654 = fun_315;
  accessorF987 = T654;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_location),accessorF987);
  (P)YPmet_name_setter(VARREF(Yopts_location),accessorF987);
  T653 = accessorF987;
  getterF988 = T653;
  T659 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T658 = (P)YPpair(VARREF(YLanyG),T659);
  T657 = (P)YPsig(Ynil,T658,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T656 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_251),T657,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_location_setter,T656);
  T661 = fun_316;
  accessorF989 = T661;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_location_setter),accessorF989);
  (P)YPmet_name_setter(VARREF(Yopts_location_setter),accessorF989);
  T660 = accessorF989;
  setterF990 = T660;
  T664 = fun_317;
  T663 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_location),VARREF(Yopts_location_setter),VARREF(YLlocG),T664);
  propF991 = T663;
  (P)YPmet_env_setter(propF991,getterF988);
  (P)YPmet_env_setter(propF991,setterF990);
  T665 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF991);
  T662 = T665;
  T655 = T662;
  lit_254 = YPPsym((P)"opts-count");
  lit_255 = YPPlist(1,YPPsym((P)"x"));
  lit_256 = YPPsym((P)"opts-count-setter");
  lit_257 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_258 = YPPlist(1,YPPsym((P)"x"));
  T668 = YPsig(LITREF(lit_255),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_318 = YPmet(FUNCODEREF(fun_318),YPfalse,T668,ENVNUL,PNUL,sloc(760));
  T667 = YPsig(LITREF(lit_257),YPPlist(2,VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_319 = YPmet(FUNCODEREF(fun_319),YPfalse,T667,ENVNUL,PNUL,sloc(760));
  T666 = YPsig(LITREF(lit_258),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_320 = YPmet(FUNCODEREF(fun_320),YPfalse,T666,ENVNUL,PNUL,sloc(760));
  T671 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T670 = (P)YPsig(Ynil,T671,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T669 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_254),T670,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_count,T669);
  T673 = fun_318;
  accessorF992 = T673;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_count),accessorF992);
  (P)YPmet_name_setter(VARREF(Yopts_count),accessorF992);
  T672 = accessorF992;
  getterF993 = T672;
  T678 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T677 = (P)YPpair(VARREF(YLanyG),T678);
  T676 = (P)YPsig(Ynil,T677,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T675 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_256),T676,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_count_setter,T675);
  T680 = fun_319;
  accessorF994 = T680;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_count_setter),accessorF994);
  (P)YPmet_name_setter(VARREF(Yopts_count_setter),accessorF994);
  T679 = accessorF994;
  setterF995 = T679;
  T683 = fun_320;
  T682 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_count),VARREF(Yopts_count_setter),VARREF(YLfixnumG),T683);
  propF996 = T682;
  (P)YPmet_env_setter(propF996,getterF993);
  (P)YPmet_env_setter(propF996,setterF995);
  T684 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF996);
  T681 = T684;
  T674 = T681;
  lit_259 = YPPsym((P)"opts-tup-storage");
  lit_260 = YPPlist(1,YPPsym((P)"x"));
  lit_261 = YPPsym((P)"opts-tup-storage-setter");
  lit_262 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_263 = YPPlist(1,YPPsym((P)"x"));
  T687 = YPsig(LITREF(lit_260),YPPlist(1,VARREF(YLopts_tupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_321 = YPmet(FUNCODEREF(fun_321),YPfalse,T687,ENVNUL,PNUL,sloc(760));
  T686 = YPsig(LITREF(lit_262),YPPlist(2,VARREF(YLtupG),VARREF(YLopts_tupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_322 = YPmet(FUNCODEREF(fun_322),YPfalse,T686,ENVNUL,PNUL,sloc(760));
  T685 = YPsig(LITREF(lit_263),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_323 = YPmet(FUNCODEREF(fun_323),YPfalse,T685,ENVNUL,PNUL,sloc(760));
  T690 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T689 = (P)YPsig(Ynil,T690,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T688 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_259),T689,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_tup_storage,T688);
  T692 = fun_321;
  accessorF997 = T692;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_tup_storage),accessorF997);
  (P)YPmet_name_setter(VARREF(Yopts_tup_storage),accessorF997);
  T691 = accessorF997;
  getterF998 = T691;
  T697 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T696 = (P)YPpair(VARREF(YLanyG),T697);
  T695 = (P)YPsig(Ynil,T696,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T694 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_261),T695,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_tup_storage_setter,T694);
  T699 = fun_322;
  accessorF999 = T699;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_tup_storage_setter),accessorF999);
  (P)YPmet_name_setter(VARREF(Yopts_tup_storage_setter),accessorF999);
  T698 = accessorF999;
  setterF1000 = T698;
  T702 = fun_323;
  T701 = (P)YPPprop(VARREF(YLopts_tupG),VARREF(Yopts_tup_storage),VARREF(Yopts_tup_storage_setter),VARREF(YLtupG),T702);
  propF1001 = T701;
  (P)YPmet_env_setter(propF1001,getterF998);
  (P)YPmet_env_setter(propF1001,setterF1000);
  T703 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLopts_tupG),propF1001);
  T700 = T703;
  T693 = T700;
  lit_264 = YPPsym((P)"%collect-direct-props");
  lit_265 = YPPlist(1,YPPsym((P)"class"));
  T704 = YPsig(LITREF(lit_265),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPcollect_direct_props = YPmet(FUNCODEREF(YPcollect_direct_props),LITREF(lit_264),T704,ENVNUL,PNUL,sloc(768));
  T705 = YPcollect_direct_props;
  VARSET(YPcollect_direct_props,T705);
  lit_266 = YPPsym((P)"%finalize-props!");
  lit_267 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"class"));
  T706 = YPsig(LITREF(lit_267),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPfinalize_propsX = YPmet(FUNCODEREF(YPfinalize_propsX),LITREF(lit_266),T706,ENVNUL,PNUL,sloc(772));
  T707 = YPfinalize_propsX;
  VARSET(YPfinalize_propsX,T707);
  lit_268 = YPPsym((P)"<any>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_268),VARREF(YLanyG));
  lit_269 = YPPsym((P)"<log>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_269),VARREF(YLlogG));
  lit_270 = YPPsym((P)"<mag>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_270),VARREF(YLmagG));
  lit_271 = YPPsym((P)"<chr>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_271),VARREF(YLchrG));
  lit_272 = YPPsym((P)"<src-loc>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_272),VARREF(YLsrc_locG));
  lit_273 = YPPsym((P)"<num>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_273),VARREF(YLnumG));
  lit_274 = YPPsym((P)"<int>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_274),VARREF(YLintG));
  lit_275 = YPPsym((P)"<fixnum>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_275),VARREF(YLfixnumG));
  lit_276 = YPPsym((P)"<flo>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_276),VARREF(YLfloG));
  lit_277 = YPPsym((P)"<loc>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_277),VARREF(YLlocG));
  lit_278 = YPPsym((P)"<rep>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_278),VARREF(YLrepG));
  lit_279 = YPPsym((P)"<col>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_279),VARREF(YLcolG));
  lit_280 = YPPsym((P)"<col.>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_280),VARREF(YLcolIG));
  lit_281 = YPPsym((P)"<col!>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_281),VARREF(YLcolXG));
  lit_282 = YPPsym((P)"<seq>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_282),VARREF(YLseqG));
  lit_283 = YPPsym((P)"<seq.>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_283),VARREF(YLseqIG));
  lit_284 = YPPsym((P)"<seq!>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_284),VARREF(YLseqXG));
  lit_285 = YPPsym((P)"<lst>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_285),VARREF(YLlstG));
  lit_286 = YPPsym((P)"<flat>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_286),VARREF(YLflatG));
  lit_287 = YPPsym((P)"<tup>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_287),VARREF(YLtupG));
  lit_288 = YPPsym((P)"<str>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_288),VARREF(YLstrG));
  lit_289 = YPPsym((P)"<sym>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_289),VARREF(YLsymG));
  lit_290 = YPPsym((P)"<type>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_290),VARREF(YLtypeG));
  lit_291 = YPPsym((P)"<class>");
  T709 = XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_291),VARREF(YLclassG));
  T708 = T709;
  return T708;
}

P Y___main_9___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66;
DEFCREGS();
  lit_292 = YPPsym((P)"<singleton>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_292),VARREF(YLsingletonG));
  lit_293 = YPPsym((P)"<subclass>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_293),VARREF(YLsubclassG));
  lit_294 = YPPsym((P)"<union>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_294),VARREF(YLunionG));
  lit_295 = YPPsym((P)"<product>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_295),VARREF(YLproductG));
  lit_296 = YPPsym((P)"<prop>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_296),VARREF(YLpropG));
  lit_297 = YPPsym((P)"<gen-cache>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_297),VARREF(YLgen_cacheG));
  lit_298 = YPPsym((P)"<sig>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_298),VARREF(YLsigG));
  lit_299 = YPPsym((P)"<fun>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_299),VARREF(YLfunG));
  lit_300 = YPPsym((P)"<met>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_300),VARREF(YLmetG));
  lit_301 = YPPsym((P)"<gen>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_301),VARREF(YLgenG));
  lit_302 = YPPsym((P)"<opts>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_302),VARREF(YLoptsG));
  lit_303 = YPPsym((P)"<opts-tup>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_303),VARREF(YLopts_tupG));
  lit_304 = YPPsym((P)"@@==");
  lit_305 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T0 = YPsig(LITREF(lit_305),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOOEE = YPmet(FUNCODEREF(YOOEE),LITREF(lit_304),T0,ENVNUL,PNUL,sloc(814));
  T1 = YOOEE;
  VARSET(YOOEE,T1);
  lit_306 = YPPsym((P)"not");
  lit_307 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_307),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  Ynot = YPmet(FUNCODEREF(Ynot),LITREF(lit_306),T2,ENVNUL,PNUL,sloc(816));
  T3 = Ynot;
  VARSET(Ynot,T3);
  lit_308 = YPPsym((P)"@@empty?");
  lit_309 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_309),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOOemptyQ = YPmet(FUNCODEREF(YOOemptyQ),LITREF(lit_308),T4,ENVNUL,PNUL,sloc(822));
  T5 = YOOemptyQ;
  VARSET(YOOemptyQ,T5);
  lit_310 = YPPsym((P)"@rev!");
  lit_311 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_311),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrevX = YPmet(FUNCODEREF(YOrevX),LITREF(lit_310),T6,ENVNUL,PNUL,sloc(824));
  T7 = YOrevX;
  VARSET(YOrevX,T7);
  lit_312 = YPPsym((P)"@all?");
  lit_313 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T8 = YPsig(LITREF(lit_313),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOallQ = YPmet(FUNCODEREF(YOallQ),LITREF(lit_312),T8,ENVNUL,PNUL,sloc(834));
  T9 = YOallQ;
  VARSET(YOallQ,T9);
  lit_314 = YPPsym((P)"@all2?");
  lit_315 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T10 = YPsig(LITREF(lit_315),YPPlist(3,VARREF(YLfunG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOall2Q = YPmet(FUNCODEREF(YOall2Q),LITREF(lit_314),T10,ENVNUL,PNUL,sloc(838));
  T11 = YOall2Q;
  VARSET(YOall2Q,T11);
  lit_316 = YPPsym((P)"@elt");
  lit_317 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T12 = YPsig(LITREF(lit_317),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOelt = YPmet(FUNCODEREF(YOelt),LITREF(lit_316),T12,ENVNUL,PNUL,sloc(848));
  T13 = YOelt;
  VARSET(YOelt,T13);
  lit_318 = YPPsym((P)"@fill");
  lit_319 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"f"));
  T14 = YPsig(LITREF(lit_319),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfill = YPmet(FUNCODEREF(YOfill),LITREF(lit_318),T14,ENVNUL,PNUL,sloc(854));
  T15 = YOfill;
  VARSET(YOfill,T15);
  lit_320 = YPPsym((P)"@any?");
  lit_321 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T16 = YPsig(LITREF(lit_321),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOanyQ = YPmet(FUNCODEREF(YOanyQ),LITREF(lit_320),T16,ENVNUL,PNUL,sloc(858));
  T17 = YOanyQ;
  VARSET(YOanyQ,T17);
  lit_322 = YPPsym((P)"@map");
  lit_323 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T18 = YPsig(LITREF(lit_323),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmap = YPmet(FUNCODEREF(YOmap),LITREF(lit_322),T18,ENVNUL,PNUL,sloc(869));
  T19 = YOmap;
  VARSET(YOmap,T19);
  lit_324 = YPPsym((P)"@pick");
  lit_325 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_325),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOpick = YPmet(FUNCODEREF(YOpick),LITREF(lit_324),T20,ENVNUL,PNUL,sloc(875));
  T21 = YOpick;
  VARSET(YOpick,T21);
  lit_326 = YPPsym((P)"@do");
  lit_327 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T22 = YPsig(LITREF(lit_327),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo = YPmet(FUNCODEREF(YOdo),LITREF(lit_326),T22,ENVNUL,PNUL,sloc(881));
  T23 = YOdo;
  VARSET(YOdo,T23);
  lit_328 = YPPsym((P)"@alter");
  lit_329 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T24 = YPsig(LITREF(lit_329),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOalter = YPmet(FUNCODEREF(YOalter),LITREF(lit_328),T24,ENVNUL,PNUL,sloc(887));
  T25 = YOalter;
  VARSET(YOalter,T25);
  lit_330 = YPPsym((P)"@fab");
  lit_331 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T26 = YPsig(LITREF(lit_331),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfab = YPmet(FUNCODEREF(YOfab),LITREF(lit_330),T26,ENVNUL,PNUL,sloc(894));
  T27 = YOfab;
  VARSET(YOfab,T27);
  lit_332 = YPPsym((P)"@fold");
  lit_333 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"c"));
  T28 = YPsig(LITREF(lit_333),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  YOfold = YPmet(FUNCODEREF(YOfold),LITREF(lit_332),T28,ENVNUL,PNUL,sloc(898));
  T29 = YOfold;
  VARSET(YOfold,T29);
  lit_334 = YPPsym((P)"@rev");
  lit_335 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPsig(LITREF(lit_335),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrev = YPmet(FUNCODEREF(YOrev),LITREF(lit_334),T30,ENVNUL,PNUL,sloc(904));
  T31 = YOrev;
  VARSET(YOrev,T31);
  lit_336 = YPPsym((P)"@cat2");
  lit_337 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T32 = YPsig(LITREF(lit_337),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOcat2 = YPmet(FUNCODEREF(YOcat2),LITREF(lit_336),T32,ENVNUL,PNUL,sloc(910));
  T33 = YOcat2;
  VARSET(YOcat2,T33);
  lit_338 = YPPsym((P)"@find");
  lit_339 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T34 = YPsig(LITREF(lit_339),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfind = YPmet(FUNCODEREF(YOfind),LITREF(lit_338),T34,ENVNUL,PNUL,sloc(913));
  T35 = YOfind;
  VARSET(YOfind,T35);
  lit_340 = YPPsym((P)"@mem?");
  lit_341 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  lit_342 = YPPlist(1,YPPsym((P)"y"));
  T37 = YPsig(LITREF(lit_342),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_361 = YPmet(FUNCODEREF(fun_361),YPfalse,T37,ENVNUL,PNUL,sloc(922));
  T36 = YPsig(LITREF(lit_341),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmemQ = YPmet(FUNCODEREF(YOmemQ),LITREF(lit_340),T36,ENVNUL,PNUL,sloc(921));
  T38 = YOmemQ;
  VARSET(YOmemQ,T38);
  lit_343 = YPPsym((P)"@del-dups");
  lit_344 = YPPlist(1,YPPsym((P)"x"));
  lit_345 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"e"));
  T40 = YPsig(LITREF(lit_345),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_363 = YPmet(FUNCODEREF(fun_363),YPfalse,T40,ENVNUL,PNUL,sloc(927));
  T39 = YPsig(LITREF(lit_344),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOdel_dups = YPmet(FUNCODEREF(YOdel_dups),LITREF(lit_343),T39,ENVNUL,PNUL,sloc(926));
  T41 = YOdel_dups;
  VARSET(YOdel_dups,T41);
  lit_346 = YPPsym((P)"@lst-helper");
  lit_347 = YPPlist(3,YPPsym((P)"objects"),YPPsym((P)"i"),YPPsym((P)"l"));
  T42 = YPsig(LITREF(lit_347),YPPlist(3,VARREF(YLoptsG),VARREF(YLfixnumG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOlst_helper = YPmet(FUNCODEREF(YOlst_helper),LITREF(lit_346),T42,ENVNUL,PNUL,sloc(929));
  T43 = YOlst_helper;
  VARSET(YOlst_helper,T43);
  lit_348 = YPPsym((P)"@opts-as-lst");
  lit_349 = YPPlist(1,YPPsym((P)"x"));
  T44 = YPsig(LITREF(lit_349),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOopts_as_lst = YPmet(FUNCODEREF(YOopts_as_lst),LITREF(lit_348),T44,ENVNUL,PNUL,sloc(934));
  T45 = YOopts_as_lst;
  VARSET(YOopts_as_lst,T45);
  lit_350 = YPPsym((P)"@lst");
  lit_351 = YPPlist(1,YPPsym((P)"objects"));
  T46 = YPsig(LITREF(lit_351),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOlst = YPmet(FUNCODEREF(YOlst),LITREF(lit_350),T46,ENVNUL,PNUL,sloc(937));
  T47 = YOlst;
  VARSET(YOlst,T47);
  lit_352 = YPPsym((P)"@tany?");
  lit_353 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T48 = YPsig(LITREF(lit_353),YPPlist(2,VARREF(YLfunG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtanyQ = YPmet(FUNCODEREF(YOtanyQ),LITREF(lit_352),T48,ENVNUL,PNUL,sloc(948));
  T49 = YOtanyQ;
  VARSET(YOtanyQ,T49);
  lit_354 = YPPsym((P)"@tall2?");
  lit_355 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"c1"),YPPsym((P)"c2"));
  T50 = YPsig(LITREF(lit_355),YPPlist(3,VARREF(YLfunG),VARREF(YLtupG),VARREF(YLtupG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOtall2Q = YPmet(FUNCODEREF(YOtall2Q),LITREF(lit_354),T50,ENVNUL,PNUL,sloc(952));
  T51 = YOtall2Q;
  VARSET(YOtall2Q,T51);
  lit_356 = YPPsym((P)"@tup");
  lit_357 = YPPlist(1,YPPsym((P)"args"));
  T52 = YPsig(LITREF(lit_357),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOtup = YPmet(FUNCODEREF(YOtup),LITREF(lit_356),T52,ENVNUL,PNUL,sloc(969));
  T53 = YOtup;
  VARSET(YOtup,T53);
  lit_358 = YPPsym((P)"@fun-names");
  lit_359 = YPPlist(1,YPPsym((P)"x"));
  T54 = YPsig(LITREF(lit_359),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_names = YPmet(FUNCODEREF(YOfun_names),LITREF(lit_358),T54,ENVNUL,PNUL,sloc(971));
  T55 = YOfun_names;
  VARSET(YOfun_names,T55);
  lit_360 = YPPsym((P)"@fun-specs");
  lit_361 = YPPlist(1,YPPsym((P)"x"));
  T56 = YPsig(LITREF(lit_361),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_specs = YPmet(FUNCODEREF(YOfun_specs),LITREF(lit_360),T56,ENVNUL,PNUL,sloc(973));
  T57 = YOfun_specs;
  VARSET(YOfun_specs,T57);
  lit_362 = YPPsym((P)"@fun-nary?");
  lit_363 = YPPlist(1,YPPsym((P)"x"));
  T58 = YPsig(LITREF(lit_363),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOfun_naryQ = YPmet(FUNCODEREF(YOfun_naryQ),LITREF(lit_362),T58,ENVNUL,PNUL,sloc(975));
  T59 = YOfun_naryQ;
  VARSET(YOfun_naryQ,T59);
  lit_364 = YPPsym((P)"@fun-arity");
  lit_365 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPsig(LITREF(lit_365),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  YOfun_arity = YPmet(FUNCODEREF(YOfun_arity),LITREF(lit_364),T60,ENVNUL,PNUL,sloc(977));
  T61 = YOfun_arity;
  VARSET(YOfun_arity,T61);
  lit_366 = YPPsym((P)"@fun-val");
  lit_367 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPsig(LITREF(lit_367),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T63 = YOfun_val = YPmet(FUNCODEREF(YOfun_val),LITREF(lit_366),T64,ENVNUL,PNUL,sloc(979));
  T66 = YOfun_val;
  T65 = VARSET(YOfun_val,T66);
  T62 = T65;
  return T62;
}

P Y___main_10___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110;
DEFCREGS();
  lit_368 = YPPsym((P)"@fun-unification-vars");
  lit_369 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_369),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_unification_vars = YPmet(FUNCODEREF(YOfun_unification_vars),LITREF(lit_368),T0,ENVNUL,PNUL,sloc(981));
  T1 = YOfun_unification_vars;
  VARSET(YOfun_unification_vars,T1);
  lit_370 = YPPsym((P)"@fun-mets");
  lit_371 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_371),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_mets = YPmet(FUNCODEREF(YOfun_mets),LITREF(lit_370),T2,ENVNUL,PNUL,sloc(983));
  T3 = YOfun_mets;
  VARSET(YOfun_mets,T3);
  lit_372 = YPPsym((P)"@fun-mets-setter");
  lit_373 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_373),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfun_mets_setter = YPmet(FUNCODEREF(YOfun_mets_setter),LITREF(lit_372),T4,ENVNUL,PNUL,sloc(985));
  T5 = YOfun_mets_setter;
  VARSET(YOfun_mets_setter,T5);
  VARSET(YLenvG,VARREF(YLanyG));
  VARSET(YLspecsG,VARREF(YLlstG));
  VARSET(YLbodyG,VARREF(YLanyG));
  lit_374 = YPPsym((P)"fun-spec");
  lit_375 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T6 = YPsig(LITREF(lit_375),YPPlist(2,VARREF(YLmetG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_spec = YPmet(FUNCODEREF(Yfun_spec),LITREF(lit_374),T6,ENVNUL,PNUL,sloc(995));
  T7 = Yfun_spec;
  VARSET(Yfun_spec,T7);
  VARSET(YLmetsG,VARREF(YLlstG));
  lit_376 = YPPsym((P)"fun-same-met?");
  lit_377 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T8 = YPsig(LITREF(lit_377),YPPlist(2,VARREF(YLmetG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yfun_same_metQ = YPmet(FUNCODEREF(Yfun_same_metQ),LITREF(lit_376),T8,ENVNUL,PNUL,sloc(1000));
  T9 = Yfun_same_metQ;
  VARSET(Yfun_same_metQ,T9);
  lit_378 = YPPsym((P)"fun-congruent?");
  lit_379 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T10 = YPsig(LITREF(lit_379),YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yfun_congruentQ = YPmet(FUNCODEREF(Yfun_congruentQ),LITREF(lit_378),T10,ENVNUL,PNUL,sloc(1003));
  T11 = Yfun_congruentQ;
  VARSET(Yfun_congruentQ,T11);
  VARSET(YTrestarts_okQT,YPfalse);
  lit_380 = YPPsym((P)"gen-add-met");
  lit_381 = YPPlist(2,YPPsym((P)"g"),YPPsym((P)"m"));
  lit_382 = YPPlist(1,YPPsym((P)"return"));
  lit_383 = YPsb((P)"Replace %= with an empty generic congruent with %=");
  lit_384 = Ynil;
  lit_385 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  T16 = YPsig(LITREF(lit_384),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_386 = YPmet(FUNCODEREF(fun_386),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(LITREF(lit_385),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_387 = YPmet(FUNCODEREF(fun_387),YPfalse,T15,ENVNUL,PNUL,sloc(1025));
  T14 = YPsig(LITREF(lit_384),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_388 = YPmet(FUNCODEREF(fun_388),YPfalse,T14,ENVNUL,PNUL,sloc(1027));
  T13 = YPsig(LITREF(lit_382),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_389 = YPmet(FUNCODEREF(fun_389),YPfalse,T13,ENVNUL,PNUL,sloc(1021));
  T12 = YPsig(LITREF(lit_381),YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  Ygen_add_met = YPmet(FUNCODEREF(Ygen_add_met),LITREF(lit_380),T12,ENVNUL,PNUL,sloc(1014));
  T17 = Ygen_add_met;
  VARSET(Ygen_add_met,T17);
  lit_386 = YPPsym((P)"@isa?");
  lit_387 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T18 = YPsig(LITREF(lit_387),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOisaQ = YPmet(FUNCODEREF(YOisaQ),LITREF(lit_386),T18,ENVNUL,PNUL,sloc(1083));
  T19 = YOisaQ;
  VARSET(YOisaQ,T19);
  lit_388 = YPPsym((P)"@class<");
  lit_389 = YPPlist(3,YPPsym((P)"c1"),YPPsym((P)"c2"),YPPsym((P)"wrt"));
  lit_390 = YPsb((P)"can't order specializers - arg/reference object %= is ");
  lit_391 = YPsb((P)"neither %= nor %=");
  T20 = YPsig(LITREF(lit_389),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOclassL = YPmet(FUNCODEREF(YOclassL),LITREF(lit_388),T20,ENVNUL,PNUL,sloc(1088));
  T21 = YOclassL;
  VARSET(YOclassL,T21);
  VARSET(Ytup,VARREF(YOtup));
  lit_392 = YPPsym((P)"t*");
  lit_393 = YPPlist(1,YPPsym((P)"args"));
  T22 = YPsig(LITREF(lit_393),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YtT = YPmet(FUNCODEREF(YtT),LITREF(lit_392),T22,ENVNUL,PNUL,sloc(1102));
  T23 = YtT;
  VARSET(YtT,T23);
  lit_394 = YPPsym((P)"@type-equal?");
  lit_395 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T24 = YPsig(LITREF(lit_395),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtype_equalQ = YPmet(FUNCODEREF(YOtype_equalQ),LITREF(lit_394),T24,ENVNUL,PNUL,sloc(1106));
  T25 = YOtype_equalQ;
  VARSET(YOtype_equalQ,T25);
  lit_396 = YPPsym((P)"@subtype?");
  lit_397 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T26 = YPsig(LITREF(lit_397),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOsubtypeQ = YPmet(FUNCODEREF(YOsubtypeQ),LITREF(lit_396),T26,ENVNUL,PNUL,sloc(1111));
  T27 = YOsubtypeQ;
  VARSET(YOsubtypeQ,T27);
  lit_398 = YPPsym((P)"@may-isa?");
  lit_399 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T29 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T28 = YPsig(LITREF(lit_399),YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),T29,Ynil);
  YOmay_isaQ = YPmet(FUNCODEREF(YOmay_isaQ),LITREF(lit_398),T28,ENVNUL,PNUL,sloc(1116));
  T30 = YOmay_isaQ;
  VARSET(YOmay_isaQ,T30);
  lit_400 = YPPsym((P)"@order-specs-class");
  lit_401 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_402 = YPPsym((P)"=");
  lit_403 = YPPsym((P)"<");
  lit_404 = YPPsym((P)">");
  T31 = YPsig(LITREF(lit_401),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOorder_specs_class = YPmet(FUNCODEREF(YOorder_specs_class),LITREF(lit_400),T31,ENVNUL,PNUL,sloc(1121));
  T32 = YOorder_specs_class;
  VARSET(YOorder_specs_class,T32);
  lit_405 = YPPsym((P)"@order-specs");
  lit_406 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T33 = YPsig(LITREF(lit_406),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOorder_specs = YPmet(FUNCODEREF(YOorder_specs),LITREF(lit_405),T33,ENVNUL,PNUL,sloc(1128));
  T34 = YOorder_specs;
  VARSET(YOorder_specs,T34);
  lit_407 = YPPsym((P)"order-mets");
  lit_408 = YPPlist(3,YPPsym((P)"m1"),YPPsym((P)"m2"),YPPsym((P)"args"));
  lit_409 = YPPsym((P)"<>");
  T35 = YPsig(LITREF(lit_408),YPPlist(3,VARREF(YLmetG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLsymG),Ynil);
  Yorder_mets = YPmet(FUNCODEREF(Yorder_mets),LITREF(lit_407),T35,ENVNUL,PNUL,sloc(1133));
  T36 = Yorder_mets;
  VARSET(Yorder_mets,T36);
  lit_410 = YPPsym((P)"ord-app-mets-1");
  lit_411 = YPPlist(3,YPPsym((P)"mets"),YPPsym((P)"args"),YPPsym((P)"order-mets"));
  lit_412 = YPPsym((P)"make-ambiguous");
  lit_413 = YPPlist(1,YPPsym((P)"headed-list"));
  lit_414 = YPPsym((P)"precedes-all?");
  lit_415 = YPPlist(1,YPPsym((P)"l"));
  lit_416 = YPPsym((P)"check-subsequent-ambiguities");
  lit_417 = YPPlist(1,YPPsym((P)"oprev"));
  lit_418 = YPPsym((P)"insert");
  lit_419 = YPPlist(2,YPPsym((P)"oprev"),YPPsym((P)"osub"));
  T41 = YPsig(LITREF(lit_413),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_ambiguous_403 = YPmet(FUNCODEREF(fun_make_ambiguous_403),LITREF(lit_412),T41,ENVNUL,PNUL,sloc(1158));
  T40 = YPsig(LITREF(lit_415),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_precedes_allQ_404 = YPmet(FUNCODEREF(fun_precedes_allQ_404),LITREF(lit_414),T40,ENVNUL,PNUL,sloc(1167));
  T39 = YPsig(LITREF(lit_417),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_check_subsequent_ambiguities_405 = YPmet(FUNCODEREF(fun_check_subsequent_ambiguities_405),LITREF(lit_416),T39,ENVNUL,PNUL,sloc(1174));
  T38 = YPsig(LITREF(lit_419),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_406 = YPmet(FUNCODEREF(fun_insert_406),LITREF(lit_418),T38,ENVNUL,PNUL,sloc(1179));
  T37 = YPsig(LITREF(lit_411),YPPlist(3,VARREF(YLlstG),VARREF(YLoptsG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  Yord_app_mets_1 = YPmet(FUNCODEREF(Yord_app_mets_1),LITREF(lit_410),T37,ENVNUL,PNUL,sloc(1150));
  T42 = Yord_app_mets_1;
  VARSET(Yord_app_mets_1,T42);
  lit_420 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T43 = YPsig(LITREF(lit_420),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_408 = YPmet(FUNCODEREF(fun_408),YPfalse,T43,ENVNUL,PNUL,sloc(1192));
  T44 = fun_408;
  VARSET(Ymet_app_unify,T44);
  lit_421 = YPPsym((P)"met-app?");
  lit_422 = YPPlist(2,YPPsym((P)"met"),YPPsym((P)"args"));
  T45 = YPsig(LITREF(lit_422),YPPlist(2,VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Ymet_appQ = YPmet(FUNCODEREF(Ymet_appQ),LITREF(lit_421),T45,ENVNUL,PNUL,sloc(1194));
  T46 = Ymet_appQ;
  VARSET(Ymet_appQ,T46);
  lit_423 = YPPsym((P)"ord-app-mets*");
  lit_424 = YPPlist(2,YPPsym((P)"gf"),YPPsym((P)"args"));
  T47 = YPsig(LITREF(lit_424),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  Yord_app_metsT = YPmet(FUNCODEREF(Yord_app_metsT),LITREF(lit_423),T47,ENVNUL,PNUL,sloc(1205));
  T48 = Yord_app_metsT;
  VARSET(Yord_app_metsT,T48);
  lit_425 = YPPsym((P)"ord-app-mets");
  lit_426 = YPPlist(2,YPPsym((P)"gf"),YPPsym((P)"args"));
  T50 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T49 = YPsig(LITREF(lit_426),YPPlist(1,VARREF(YLgenG)),YPtrue,YPint((P)1),T50,Ynil);
  Yord_app_mets = YPmet(FUNCODEREF(Yord_app_mets),LITREF(lit_425),T49,ENVNUL,PNUL,sloc(1216));
  T51 = Yord_app_mets;
  VARSET(Yord_app_mets,T51);
  lit_427 = YPPsym((P)"@gen-cache-arg-pos");
  lit_428 = YPPlist(1,YPPsym((P)"x"));
  T52 = YPsig(LITREF(lit_428),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_arg_pos = YPmet(FUNCODEREF(YOgen_cache_arg_pos),LITREF(lit_427),T52,ENVNUL,PNUL,sloc(1227));
  T53 = YOgen_cache_arg_pos;
  VARSET(YOgen_cache_arg_pos,T53);
  lit_429 = YPPsym((P)"@gen-cache-arg-pos-setter");
  lit_430 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T54 = YPsig(LITREF(lit_430),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_arg_pos_setter = YPmet(FUNCODEREF(YOgen_cache_arg_pos_setter),LITREF(lit_429),T54,ENVNUL,PNUL,sloc(1228));
  T55 = YOgen_cache_arg_pos_setter;
  VARSET(YOgen_cache_arg_pos_setter,T55);
  lit_431 = YPPsym((P)"@gen-cache-singletons");
  lit_432 = YPPlist(1,YPPsym((P)"x"));
  T56 = YPsig(LITREF(lit_432),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_singletons = YPmet(FUNCODEREF(YOgen_cache_singletons),LITREF(lit_431),T56,ENVNUL,PNUL,sloc(1229));
  T57 = YOgen_cache_singletons;
  VARSET(YOgen_cache_singletons,T57);
  lit_433 = YPPsym((P)"@gen-cache-singletons-setter");
  lit_434 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T58 = YPsig(LITREF(lit_434),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_singletons_setter = YPmet(FUNCODEREF(YOgen_cache_singletons_setter),LITREF(lit_433),T58,ENVNUL,PNUL,sloc(1230));
  T59 = YOgen_cache_singletons_setter;
  VARSET(YOgen_cache_singletons_setter,T59);
  lit_435 = YPPsym((P)"@gen-cache-classes");
  lit_436 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPsig(LITREF(lit_436),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_classes = YPmet(FUNCODEREF(YOgen_cache_classes),LITREF(lit_435),T60,ENVNUL,PNUL,sloc(1231));
  T61 = YOgen_cache_classes;
  VARSET(YOgen_cache_classes,T61);
  lit_437 = YPPsym((P)"@gen-cache-classes-setter");
  lit_438 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T62 = YPsig(LITREF(lit_438),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_classes_setter = YPmet(FUNCODEREF(YOgen_cache_classes_setter),LITREF(lit_437),T62,ENVNUL,PNUL,sloc(1232));
  T63 = YOgen_cache_classes_setter;
  VARSET(YOgen_cache_classes_setter,T63);
  lit_439 = YPPsym((P)"method-accessor-offset");
  lit_440 = YPPlist(3,YPPsym((P)"gen"),YPPsym((P)"met"),YPPsym((P)"args"));
  T64 = YPsig(LITREF(lit_440),YPPlist(3,VARREF(YLgenG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Ymethod_accessor_offset = YPmet(FUNCODEREF(Ymethod_accessor_offset),LITREF(lit_439),T64,ENVNUL,PNUL,sloc(1236));
  T65 = Ymethod_accessor_offset;
  VARSET(Ymethod_accessor_offset,T65);
  lit_441 = YPPsym((P)"@singleton-spec?");
  lit_442 = YPPlist(1,YPPsym((P)"x"));
  T66 = YPsig(LITREF(lit_442),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOsingleton_specQ = YPmet(FUNCODEREF(YOsingleton_specQ),LITREF(lit_441),T66,ENVNUL,PNUL,sloc(1245));
  T67 = YOsingleton_specQ;
  VARSET(YOsingleton_specQ,T67);
  lit_443 = YPPsym((P)"@subclass-spec?");
  lit_444 = YPPlist(1,YPPsym((P)"x"));
  T68 = YPsig(LITREF(lit_444),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOsubclass_specQ = YPmet(FUNCODEREF(YOsubclass_specQ),LITREF(lit_443),T68,ENVNUL,PNUL,sloc(1248));
  T69 = YOsubclass_specQ;
  VARSET(YOsubclass_specQ,T69);
  lit_445 = YPPsym((P)"@union-spec?");
  lit_446 = YPPlist(1,YPPsym((P)"x"));
  T70 = YPsig(LITREF(lit_446),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOunion_specQ = YPmet(FUNCODEREF(YOunion_specQ),LITREF(lit_445),T70,ENVNUL,PNUL,sloc(1251));
  T71 = YOunion_specQ;
  VARSET(YOunion_specQ,T71);
  lit_447 = YPPsym((P)"@precise-spec?");
  lit_448 = YPPlist(1,YPPsym((P)"x"));
  T72 = YPsig(LITREF(lit_448),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOprecise_specQ = YPmet(FUNCODEREF(YOprecise_specQ),LITREF(lit_447),T72,ENVNUL,PNUL,sloc(1254));
  T73 = YOprecise_specQ;
  VARSET(YOprecise_specQ,T73);
  lit_449 = YPPsym((P)"@mets-unspecialized-at?");
  lit_450 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_451 = YPPlist(1,YPPsym((P)"met"));
  T75 = YPsig(LITREF(lit_451),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_423 = YPmet(FUNCODEREF(fun_423),YPfalse,T75,ENVNUL,PNUL,sloc(1259));
  T74 = YPsig(LITREF(lit_450),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmets_unspecialized_atQ = YPmet(FUNCODEREF(YOmets_unspecialized_atQ),LITREF(lit_449),T74,ENVNUL,PNUL,sloc(1258));
  T76 = YOmets_unspecialized_atQ;
  VARSET(YOmets_unspecialized_atQ,T76);
  lit_452 = YPPsym((P)"@prune-mets-by-type-at");
  lit_453 = YPPlist(3,YPPsym((P)"mets"),YPPsym((P)"type"),YPPsym((P)"pos"));
  lit_454 = YPPlist(1,YPPsym((P)"met"));
  T78 = YPsig(LITREF(lit_454),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_425 = YPmet(FUNCODEREF(fun_425),YPfalse,T78,ENVNUL,PNUL,sloc(1263));
  T77 = YPsig(LITREF(lit_453),YPPlist(3,VARREF(YLlstG),VARREF(YLtypeG),VARREF(YLfixnumG)),YPfalse,YPint((P)3),VARREF(YLmetsG),Ynil);
  YOprune_mets_by_type_at = YPmet(FUNCODEREF(YOprune_mets_by_type_at),LITREF(lit_452),T77,ENVNUL,PNUL,sloc(1261));
  T79 = YOprune_mets_by_type_at;
  VARSET(YOprune_mets_by_type_at,T79);
  lit_455 = YPPsym((P)"@mets-specs-at");
  lit_456 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_457 = YPPlist(1,YPPsym((P)"met"));
  T81 = YPsig(LITREF(lit_457),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_427 = YPmet(FUNCODEREF(fun_427),YPfalse,T81,ENVNUL,PNUL,sloc(1266));
  T80 = YPsig(LITREF(lit_456),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_specs_at = YPmet(FUNCODEREF(YOmets_specs_at),LITREF(lit_455),T80,ENVNUL,PNUL,sloc(1265));
  T82 = YOmets_specs_at;
  VARSET(YOmets_specs_at,T82);
  lit_458 = YPPsym((P)"@mets-singletons-at");
  lit_459 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_460 = YPPlist(1,YPPsym((P)"spec"));
  T84 = YPsig(LITREF(lit_460),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_429 = YPmet(FUNCODEREF(fun_429),YPfalse,T84,ENVNUL,PNUL,sloc(1271));
  T83 = YPsig(LITREF(lit_459),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_singletons_at = YPmet(FUNCODEREF(YOmets_singletons_at),LITREF(lit_458),T83,ENVNUL,PNUL,sloc(1270));
  T85 = YOmets_singletons_at;
  VARSET(YOmets_singletons_at,T85);
  lit_461 = YPPsym((P)"@mets-subclasses-at");
  lit_462 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_463 = YPPlist(1,YPPsym((P)"spec"));
  T87 = YPsig(LITREF(lit_463),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_431 = YPmet(FUNCODEREF(fun_431),YPfalse,T87,ENVNUL,PNUL,sloc(1274));
  T86 = YPsig(LITREF(lit_462),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_subclasses_at = YPmet(FUNCODEREF(YOmets_subclasses_at),LITREF(lit_461),T86,ENVNUL,PNUL,sloc(1273));
  T88 = YOmets_subclasses_at;
  VARSET(YOmets_subclasses_at,T88);
  VARSET(YDnul_assocs,VARREF(YPtnul));
  lit_464 = YPPsym((P)"@cache-add");
  lit_465 = YPPlist(3,YPPsym((P)"t"),YPPsym((P)"k"),YPPsym((P)"v"));
  T89 = YPsig(LITREF(lit_465),YPPlist(3,VARREF(YLtupG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOcache_add = YPmet(FUNCODEREF(YOcache_add),LITREF(lit_464),T89,ENVNUL,PNUL,sloc(1278));
  T90 = YOcache_add;
  VARSET(YOcache_add,T90);
  lit_466 = YPPsym((P)"gen-lookup-miss-1-using");
  lit_467 = YPPlist(10,YPPsym((P)"key"),YPPsym((P)"instance"),YPPsym((P)"all-assocs"),YPPsym((P)"all-assocs-setter"),YPPsym((P)"gen"),YPPsym((P)"cache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T91 = YPsig(LITREF(lit_467),YPPlist(10,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)10),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss_1_using = YPmet(FUNCODEREF(Ygen_lookup_miss_1_using),LITREF(lit_466),T91,ENVNUL,PNUL,sloc(1291));
  T92 = Ygen_lookup_miss_1_using;
  VARSET(Ygen_lookup_miss_1_using,T92);
  lit_468 = YPPsym((P)"@specd-args");
  lit_469 = YPPlist(3,YPPsym((P)"args"),YPPsym((P)"i"),YPPsym((P)"arg"));
  T93 = YPsig(LITREF(lit_469),YPPlist(3,VARREF(YLoptsG),VARREF(YLfixnumG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLoptsG),Ynil);
  YOspecd_args = YPmet(FUNCODEREF(YOspecd_args),LITREF(lit_468),T93,ENVNUL,PNUL,sloc(1316));
  T94 = YOspecd_args;
  VARSET(YOspecd_args,T94);
  lit_470 = YPPsym((P)"requires-singleton-prec");
  lit_471 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  T95 = YPsig(LITREF(lit_471),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yrequires_singleton_prec = YPmet(FUNCODEREF(Yrequires_singleton_prec),LITREF(lit_470),T95,ENVNUL,PNUL,sloc(1326));
  T96 = Yrequires_singleton_prec;
  VARSET(Yrequires_singleton_prec,T96);
  lit_472 = YPPsym((P)"ensure-singleton-cache");
  lit_473 = YPPlist(6,YPPsym((P)"gen"),YPPsym((P)"cache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T97 = YPsig(LITREF(lit_473),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  Yensure_singleton_cache = YPmet(FUNCODEREF(Yensure_singleton_cache),LITREF(lit_472),T97,ENVNUL,PNUL,sloc(1341));
  T98 = Yensure_singleton_cache;
  VARSET(Yensure_singleton_cache,T98);
  lit_474 = YPPsym((P)"gen-lookup-miss-1");
  lit_475 = YPPlist(6,YPPsym((P)"gen"),YPPsym((P)"ocache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T99 = YPsig(LITREF(lit_475),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss_1 = YPmet(FUNCODEREF(Ygen_lookup_miss_1),LITREF(lit_474),T99,ENVNUL,PNUL,sloc(1364));
  T100 = Ygen_lookup_miss_1;
  VARSET(Ygen_lookup_miss_1,T100);
  lit_476 = YPPsym((P)"gen-lookup-miss");
  lit_477 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T101 = YPsig(LITREF(lit_477),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss = YPmet(FUNCODEREF(Ygen_lookup_miss),LITREF(lit_476),T101,ENVNUL,PNUL,sloc(1390));
  T102 = Ygen_lookup_miss;
  VARSET(Ygen_lookup_miss,T102);
  T103 = (P)YPpair(VARREF(Ynil),VARREF(Ynil));
  VARSET(YDmissed_dispatch,T103);
  lit_478 = YPPsym((P)"choose-methods");
  lit_479 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T104 = YPsig(LITREF(lit_479),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  Ychoose_methods = YPmet(FUNCODEREF(Ychoose_methods),LITREF(lit_478),T104,ENVNUL,PNUL,sloc(1460));
  T105 = Ychoose_methods;
  VARSET(Ychoose_methods,T105);
  lit_480 = YPPsym((P)"%dispatch");
  lit_481 = YPPlist(1,YPPsym((P)"args"));
  T108 = YPsig(LITREF(lit_481),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  T107 = YPdispatch = YPmet(FUNCODEREF(YPdispatch),LITREF(lit_480),T108,ENVNUL,PNUL,sloc(1474));
  T110 = YPdispatch;
  T109 = VARSET(YPdispatch,T110);
  T106 = T109;
  return T106;
}

P Y___main_11___() {
  P T0,T1,T2,T3;
DEFCREGS();
  lit_482 = YPPsym((P)"%patch-early-generic");
  lit_483 = YPPlist(1,YPPsym((P)"generic"));
  T0 = YPsig(LITREF(lit_483),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPpatch_early_generic = YPmet(FUNCODEREF(YPpatch_early_generic),LITREF(lit_482),T0,ENVNUL,PNUL,sloc(1488));
  T1 = YPpatch_early_generic;
  VARSET(YPpatch_early_generic,T1);
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysrc_loc_line));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysrc_loc_line_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysrc_loc_file));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysrc_loc_file_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yhead));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yhead_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytail));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytail_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysym_name));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysym_name_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_prop_len));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_prop_len_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_name));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_name_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_parents));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_parents_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_direct_props));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_direct_props_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_ancestors));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_ancestors_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_props));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_props_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_children));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_children_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_gens));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_gens_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_mets));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_mets_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_forward));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_forward_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_type_cache));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_type_cache_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_id));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_id_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_row));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_row_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytype_object));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytype_object_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytype_class));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytype_class_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yunion_elts));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yunion_elts_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yproduct_elts));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yproduct_elts_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_owner));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_owner_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_getter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_getter_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_setter_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_type));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_type_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_init));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_init_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_missableQ));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_missableQ_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_arg_pos));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_arg_pos_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_singletons));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_singletons_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_classes));
  T3 = XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_classes_setter));
  T2 = T3;
  return T2;
}

P Y___main_12___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
DEFCREGS();
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_names));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_names_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_specs));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_specs_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_naryQ));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_naryQ_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_arity));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_arity_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_val));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_val_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_unification_vars));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_unification_vars_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_code));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_code_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_name));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_name_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_sig));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_sig_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_env));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_env_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_refs));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_refs_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_src));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_src_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_mets));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_mets_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_cache));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_cache_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_refs));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_refs_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_src));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_src_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_location));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_location_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_count));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_count_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_tup_storage));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_tup_storage_setter));
  lit_484 = YPPsym((P)"fun-names");
  lit_485 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_485),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_names = YPmet(FUNCODEREF(Yfun_names),LITREF(lit_484),T0,ENVNUL,PNUL,sloc(1508));
  T1 = Yfun_names;
  VARSET(Yfun_names,T1);
  lit_486 = YPPsym((P)"fun-names-setter");
  lit_487 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_487),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_names_setter = YPmet(FUNCODEREF(Yfun_names_setter),LITREF(lit_486),T2,ENVNUL,PNUL,sloc(1508));
  T3 = Yfun_names_setter;
  VARSET(Yfun_names_setter,T3);
  lit_488 = YPPsym((P)"fun-specs");
  lit_489 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_489),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_specs = YPmet(FUNCODEREF(Yfun_specs),LITREF(lit_488),T4,ENVNUL,PNUL,sloc(1509));
  T5 = Yfun_specs;
  VARSET(Yfun_specs,T5);
  lit_490 = YPPsym((P)"fun-specs-setter");
  lit_491 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_491),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_specs_setter = YPmet(FUNCODEREF(Yfun_specs_setter),LITREF(lit_490),T6,ENVNUL,PNUL,sloc(1509));
  T7 = Yfun_specs_setter;
  VARSET(Yfun_specs_setter,T7);
  lit_492 = YPPsym((P)"fun-nary?");
  lit_493 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPsig(LITREF(lit_493),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_naryQ = YPmet(FUNCODEREF(Yfun_naryQ),LITREF(lit_492),T8,ENVNUL,PNUL,sloc(1510));
  T9 = Yfun_naryQ;
  VARSET(Yfun_naryQ,T9);
  lit_494 = YPPsym((P)"fun-nary?-setter");
  lit_495 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T10 = YPsig(LITREF(lit_495),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_naryQ_setter = YPmet(FUNCODEREF(Yfun_naryQ_setter),LITREF(lit_494),T10,ENVNUL,PNUL,sloc(1510));
  T11 = Yfun_naryQ_setter;
  VARSET(Yfun_naryQ_setter,T11);
  lit_496 = YPPsym((P)"fun-arity");
  lit_497 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPsig(LITREF(lit_497),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_arity = YPmet(FUNCODEREF(Yfun_arity),LITREF(lit_496),T12,ENVNUL,PNUL,sloc(1511));
  T13 = Yfun_arity;
  VARSET(Yfun_arity,T13);
  lit_498 = YPPsym((P)"fun-arity-setter");
  lit_499 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T14 = YPsig(LITREF(lit_499),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_arity_setter = YPmet(FUNCODEREF(Yfun_arity_setter),LITREF(lit_498),T14,ENVNUL,PNUL,sloc(1511));
  T15 = Yfun_arity_setter;
  VARSET(Yfun_arity_setter,T15);
  lit_500 = YPPsym((P)"fun-val");
  lit_501 = YPPlist(1,YPPsym((P)"x"));
  T16 = YPsig(LITREF(lit_501),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_val = YPmet(FUNCODEREF(Yfun_val),LITREF(lit_500),T16,ENVNUL,PNUL,sloc(1512));
  T17 = Yfun_val;
  VARSET(Yfun_val,T17);
  lit_502 = YPPsym((P)"fun-val-setter");
  lit_503 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T18 = YPsig(LITREF(lit_503),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_val_setter = YPmet(FUNCODEREF(Yfun_val_setter),LITREF(lit_502),T18,ENVNUL,PNUL,sloc(1512));
  T19 = Yfun_val_setter;
  VARSET(Yfun_val_setter,T19);
  lit_504 = YPPsym((P)"fun-unification-vars");
  lit_505 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_505),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_unification_vars = YPmet(FUNCODEREF(Yfun_unification_vars),LITREF(lit_504),T20,ENVNUL,PNUL,sloc(1513));
  T21 = Yfun_unification_vars;
  VARSET(Yfun_unification_vars,T21);
  lit_506 = YPPsym((P)"fun-unification-vars-setter");
  lit_507 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T22 = YPsig(LITREF(lit_507),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_unification_vars_setter = YPmet(FUNCODEREF(Yfun_unification_vars_setter),LITREF(lit_506),T22,ENVNUL,PNUL,sloc(1513));
  T23 = Yfun_unification_vars_setter;
  VARSET(Yfun_unification_vars_setter,T23);
  VARSET(YLparentsG,VARREF(YLlstG));
  VARSET(YLpropsG,VARREF(YLlstG));
  lit_508 = YPPsym((P)"object-class");
  lit_509 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPsig(LITREF(lit_509),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_class = YPmet(FUNCODEREF(Yobject_class),LITREF(lit_508),T24,ENVNUL,PNUL,sloc(1522));
  T25 = Yobject_class;
  VARSET(Yobject_class,T25);
  VARSET(Yclass_of,VARREF(Yobject_class));
  lit_510 = YPPsym((P)"@class-ancestors");
  lit_511 = YPPlist(1,YPPsym((P)"x"));
  T26 = YPsig(LITREF(lit_511),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOclass_ancestors = YPmet(FUNCODEREF(YOclass_ancestors),LITREF(lit_510),T26,ENVNUL,PNUL,sloc(1524));
  T27 = YOclass_ancestors;
  VARSET(YOclass_ancestors,T27);
  lit_512 = YPPsym((P)"class-ordered-ancestors");
  lit_513 = YPPlist(1,YPPsym((P)"c"));
  lit_514 = YPPsym((P)"candidate");
  lit_515 = YPPlist(1,YPPsym((P)"c"));
  lit_516 = YPPsym((P)"tail?");
  lit_517 = YPPlist(1,YPPsym((P)"l"));
  lit_518 = YPPsym((P)"candidate-at-head");
  lit_519 = YPPlist(1,YPPsym((P)"l"));
  lit_520 = YPPsym((P)"del-next");
  lit_521 = YPPlist(1,YPPsym((P)"l"));
  lit_522 = YPsb((P)"inconsistent precedence graph");
  T32 = YPsig(LITREF(lit_517),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tailQ_463 = YPmet(FUNCODEREF(fun_tailQ_463),LITREF(lit_516),T32,ENVNUL,PNUL,sloc(1566));
  T31 = YPsig(LITREF(lit_515),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_candidate_464 = YPmet(FUNCODEREF(fun_candidate_464),LITREF(lit_514),T31,ENVNUL,PNUL,sloc(1565));
  T30 = YPsig(LITREF(lit_519),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_candidate_at_head_465 = YPmet(FUNCODEREF(fun_candidate_at_head_465),LITREF(lit_518),T30,ENVNUL,PNUL,sloc(1568));
  T29 = YPsig(LITREF(lit_521),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_del_next_466 = YPmet(FUNCODEREF(fun_del_next_466),LITREF(lit_520),T29,ENVNUL,PNUL,sloc(1572));
  T28 = YPsig(LITREF(lit_513),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLparentsG),Ynil);
  Yclass_ordered_ancestors = YPmet(FUNCODEREF(Yclass_ordered_ancestors),LITREF(lit_512),T28,ENVNUL,PNUL,sloc(1557));
  T33 = Yclass_ordered_ancestors;
  VARSET(Yclass_ordered_ancestors,T33);
  lit_523 = YPPsym((P)"@class-direct-props");
  lit_524 = YPPlist(1,YPPsym((P)"x"));
  T34 = YPsig(LITREF(lit_524),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOclass_direct_props = YPmet(FUNCODEREF(YOclass_direct_props),LITREF(lit_523),T34,ENVNUL,PNUL,sloc(1577));
  T35 = YOclass_direct_props;
  VARSET(YOclass_direct_props,T35);
  lit_525 = YPPsym((P)"class-ordered-props");
  lit_526 = YPPlist(1,YPPsym((P)"x"));
  T36 = YPsig(LITREF(lit_526),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLpropsG),Ynil);
  Yclass_ordered_props = YPmet(FUNCODEREF(Yclass_ordered_props),LITREF(lit_525),T36,ENVNUL,PNUL,sloc(1579));
  T37 = Yclass_ordered_props;
  VARSET(Yclass_ordered_props,T37);
  lit_527 = YPPsym((P)"del-class");
  lit_528 = YPPlist(1,YPPsym((P)"class"));
  T38 = YPsig(LITREF(lit_528),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Ydel_class = YPmet(FUNCODEREF(Ydel_class),LITREF(lit_527),T38,ENVNUL,PNUL,sloc(1586));
  T39 = Ydel_class;
  VARSET(Ydel_class,T39);
  VARSET(YTnext_class_idT,YPint((P)0));
  VARSET(YDmax_classes,YPint((P)500));
  lit_529 = YPPsym((P)"init-class");
  lit_530 = YPPlist(1,YPPsym((P)"x"));
  lit_531 = YPsb((P)"Too many classes %=");
  lit_532 = YPsb((P)"Need at least one parent in class definition");
  lit_533 = YPPlist(1,YPPsym((P)"parent"));
  lit_534 = YPPlist(1,YPPsym((P)"ancestor"));
  T42 = YPsig(LITREF(lit_533),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_471 = YPmet(FUNCODEREF(fun_471),YPfalse,T42,ENVNUL,PNUL,sloc(1603));
  T41 = YPsig(LITREF(lit_534),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_472 = YPmet(FUNCODEREF(fun_472),YPfalse,T41,ENVNUL,PNUL,sloc(1610));
  T40 = YPsig(LITREF(lit_530),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yinit_class = YPmet(FUNCODEREF(Yinit_class),LITREF(lit_529),T40,ENVNUL,PNUL,sloc(1595));
  T43 = Yinit_class;
  VARSET(Yinit_class,T43);
  lit_535 = YPPsym((P)"fab-class");
  lit_536 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"parents"));
  T46 = YPsig(LITREF(lit_536),YPPlist(2,VARREF(YLsymG),VARREF(YLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  T45 = Yfab_class = YPmet(FUNCODEREF(Yfab_class),LITREF(lit_535),T46,ENVNUL,PNUL,sloc(1615));
  T48 = Yfab_class;
  T47 = VARSET(Yfab_class,T48);
  T44 = T47;
  return T44;
}

P Y___main_13___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190;
DEFCREGS();
  lit_537 = YPPsym((P)"refab-class");
  lit_538 = YPPlist(2,YPPsym((P)"old-class"),YPPsym((P)"parents"));
  T0 = YPsig(LITREF(lit_538),YPPlist(2,VARREF(YLclassG),VARREF(YLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  Yrefab_class = YPmet(FUNCODEREF(Yrefab_class),LITREF(lit_537),T0,ENVNUL,PNUL,sloc(1620));
  T1 = Yrefab_class;
  VARSET(Yrefab_class,T1);
  lit_539 = YPPsym((P)"object-props");
  lit_540 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_540),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_props = YPmet(FUNCODEREF(Yobject_props),LITREF(lit_539),T2,ENVNUL,PNUL,sloc(1635));
  T3 = Yobject_props;
  VARSET(Yobject_props,T3);
  lit_541 = YPPsym((P)"object-parents");
  lit_542 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_542),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_parents = YPmet(FUNCODEREF(Yobject_parents),LITREF(lit_541),T4,ENVNUL,PNUL,sloc(1636));
  T5 = Yobject_parents;
  VARSET(Yobject_parents,T5);
  VARSET(YDgetter_not_found,YPint((P)-1));
  lit_543 = YPPsym((P)"ensure-fresh-object");
  lit_544 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_544),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yensure_fresh_object = YPmet(FUNCODEREF(Yensure_fresh_object),LITREF(lit_543),T6,ENVNUL,PNUL,sloc(1644));
  T7 = Yensure_fresh_object;
  VARSET(Yensure_fresh_object,T7);
  lit_545 = YPPsym((P)"prop-offset");
  lit_546 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T8 = YPsig(LITREF(lit_546),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  Yprop_offset = YPmet(FUNCODEREF(Yprop_offset),LITREF(lit_545),T8,ENVNUL,PNUL,sloc(1648));
  T9 = Yprop_offset;
  VARSET(Yprop_offset,T9);
  VARSET(YTreport_prop_unbound_errorsQT,YPtrue);
  lit_547 = YPPsym((P)"%prop-unbound-error");
  lit_548 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPsig(LITREF(lit_548),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPprop_unbound_error = YPmet(FUNCODEREF(YPprop_unbound_error),LITREF(lit_547),T10,ENVNUL,PNUL,sloc(1658));
  T11 = YPprop_unbound_error;
  VARSET(YPprop_unbound_error,T11);
  lit_549 = YPPsym((P)"prop-value");
  lit_550 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T12 = YPsig(LITREF(lit_550),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yprop_value = YPmet(FUNCODEREF(Yprop_value),LITREF(lit_549),T12,ENVNUL,PNUL,sloc(1663));
  T13 = Yprop_value;
  VARSET(Yprop_value,T13);
  lit_551 = YPPsym((P)"prop-bound?");
  lit_552 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T14 = YPsig(LITREF(lit_552),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yprop_boundQ = YPmet(FUNCODEREF(Yprop_boundQ),LITREF(lit_551),T14,ENVNUL,PNUL,sloc(1670));
  T15 = Yprop_boundQ;
  VARSET(Yprop_boundQ,T15);
  lit_553 = YPPsym((P)"prop-value-setter");
  lit_554 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"object"),YPPsym((P)"getter"));
  T16 = YPsig(LITREF(lit_554),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yprop_value_setter = YPmet(FUNCODEREF(Yprop_value_setter),LITREF(lit_553),T16,ENVNUL,PNUL,sloc(1677));
  T17 = Yprop_value_setter;
  VARSET(Yprop_value_setter,T17);
  lit_555 = YPPsym((P)"find-getter");
  lit_556 = YPPlist(2,YPPsym((P)"owner"),YPPsym((P)"getter"));
  T18 = YPsig(LITREF(lit_556),YPPlist(2,VARREF(YLclassG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLmetG),Ynil);
  Yfind_getter = YPmet(FUNCODEREF(Yfind_getter),LITREF(lit_555),T18,ENVNUL,PNUL,sloc(1689));
  T19 = Yfind_getter;
  VARSET(Yfind_getter,T19);
  lit_557 = YPPsym((P)"find-setter");
  lit_558 = YPPlist(3,YPPsym((P)"owner"),YPPsym((P)"type"),YPPsym((P)"zetter"));
  T20 = YPsig(LITREF(lit_558),YPPlist(3,VARREF(YLclassG),VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)3),VARREF(YLmetG),Ynil);
  Yfind_setter = YPmet(FUNCODEREF(Yfind_setter),LITREF(lit_557),T20,ENVNUL,PNUL,sloc(1698));
  T21 = Yfind_setter;
  VARSET(Yfind_setter,T21);
  lit_559 = YPPsym((P)"forward-class");
  lit_560 = YPPlist(1,YPPsym((P)"old-class"));
  lit_561 = YPPlist(1,YPPsym((P)"g"));
  T23 = YPsig(LITREF(lit_561),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_486 = YPmet(FUNCODEREF(fun_486),YPfalse,T23,ENVNUL,PNUL,sloc(1713));
  T22 = YPsig(LITREF(lit_560),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yforward_class = YPmet(FUNCODEREF(Yforward_class),LITREF(lit_559),T22,ENVNUL,PNUL,sloc(1711));
  T24 = Yforward_class;
  VARSET(Yforward_class,T24);
  lit_562 = YPPsym((P)"clone");
  lit_563 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPsig(LITREF(lit_563),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yclone = YPmet(FUNCODEREF(Yclone),LITREF(lit_562),T25,ENVNUL,PNUL,sloc(1716));
  T26 = Yclone;
  VARSET(Yclone,T26);
  lit_564 = YPPsym((P)"@do-descendents");
  lit_565 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  lit_566 = YPPsym((P)"visit");
  lit_567 = YPPlist(1,YPPsym((P)"x"));
  T28 = YPsig(LITREF(lit_567),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_visit_489 = YPmet(FUNCODEREF(fun_visit_489),LITREF(lit_566),T28,ENVNUL,PNUL,sloc(1720));
  T27 = YPsig(LITREF(lit_565),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo_descendents = YPmet(FUNCODEREF(YOdo_descendents),LITREF(lit_564),T27,ENVNUL,PNUL,sloc(1718));
  T29 = YOdo_descendents;
  VARSET(YOdo_descendents,T29);
  lit_568 = YPPsym((P)"finalize-props");
  lit_569 = YPPlist(1,YPPsym((P)"class"));
  lit_570 = YPPlist(1,YPPsym((P)"prop"));
  T31 = YPsig(LITREF(lit_570),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_491 = YPmet(FUNCODEREF(fun_491),YPfalse,T31,ENVNUL,PNUL,sloc(1730));
  T30 = YPsig(LITREF(lit_569),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfinalize_props = YPmet(FUNCODEREF(Yfinalize_props),LITREF(lit_568),T30,ENVNUL,PNUL,sloc(1726));
  T32 = Yfinalize_props;
  VARSET(Yfinalize_props,T32);
  lit_571 = YPPsym((P)"%prop");
  lit_572 = YPPlist(5,YPPsym((P)"owner"),YPPsym((P)"getter"),YPPsym((P)"setter"),YPPsym((P)"type"),YPPsym((P)"init"));
  T33 = YPsig(LITREF(lit_572),YPPlist(5,VARREF(YLclassG),VARREF(YLgenG),VARREF(YLgenG),VARREF(YLtypeG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YPprop = YPmet(FUNCODEREF(YPprop),LITREF(lit_571),T33,ENVNUL,PNUL,sloc(1733));
  T34 = YPprop;
  VARSET(YPprop,T34);
  lit_573 = YPPsym((P)"update-instance-for-changed-class");
  lit_574 = YPPlist(1,YPPsym((P)"object"));
  T35 = YPsig(LITREF(lit_574),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yupdate_instance_for_changed_class = YPmet(FUNCODEREF(Yupdate_instance_for_changed_class),LITREF(lit_573),T35,ENVNUL,PNUL,sloc(1771));
  T36 = Yupdate_instance_for_changed_class;
  VARSET(Yupdate_instance_for_changed_class,T36);
  VARSET(Yadd_prop,VARREF(YPprop));
  lit_575 = YPPsym((P)"patch-early-classes");
  T37 = YPsig(LITREF(lit_384),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ypatch_early_classes = YPmet(FUNCODEREF(Ypatch_early_classes),LITREF(lit_575),T37,ENVNUL,PNUL,sloc(1777));
  T38 = Ypatch_early_classes;
  VARSET(Ypatch_early_classes,T38);
  XCALL0(1,VARREF(Ypatch_early_classes));
  lit_576 = YPPsym((P)"fab-gen");
  lit_577 = YPPlist(6,YPPsym((P)"name"),YPPsym((P)"names"),YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"val"),YPPsym((P)"mets"));
  T39 = YPsig(LITREF(lit_577),YPPlist(6,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLlogG),VARREF(YLtypeG),VARREF(YLlstG)),YPfalse,YPint((P)6),VARREF(YLgenG),Ynil);
  Yfab_gen = YPmet(FUNCODEREF(Yfab_gen),LITREF(lit_576),T39,ENVNUL,PNUL,sloc(1786));
  T40 = Yfab_gen;
  VARSET(Yfab_gen,T40);
  lit_578 = YPPsym((P)"gen-from-met");
  lit_579 = YPPlist(1,YPPsym((P)"x"));
  lit_580 = YPPlist(1,YPPsym((P)"x"));
  T42 = YPsig(LITREF(lit_580),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_498 = YPmet(FUNCODEREF(fun_498),YPfalse,T42,ENVNUL,PNUL,sloc(1801));
  T41 = YPsig(LITREF(lit_579),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLgenG),Ynil);
  Ygen_from_met = YPmet(FUNCODEREF(Ygen_from_met),LITREF(lit_578),T41,ENVNUL,PNUL,sloc(1800));
  T43 = Ygen_from_met;
  VARSET(Ygen_from_met,T43);
  lit_581 = YPPsym((P)"%define-method");
  lit_582 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T44 = YPsig(LITREF(lit_582),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  YPdefine_method = YPmet(FUNCODEREF(YPdefine_method),LITREF(lit_581),T44,ENVNUL,PNUL,sloc(1806));
  T45 = YPdefine_method;
  VARSET(YPdefine_method,T45);
  lit_583 = YPPsym((P)"unexec");
  lit_584 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"fun"));
  T46 = YPsig(LITREF(lit_584),YPPlist(2,VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yunexec = YPmet(FUNCODEREF(Yunexec),LITREF(lit_583),T46,ENVNUL,PNUL,sloc(1809));
  T47 = Yunexec;
  VARSET(Yunexec,T47);
  lit_585 = YPPsym((P)"new");
  lit_586 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T49 = YPsig(LITREF(lit_586),YPPlist(1,VARREF(YLtypeG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T48 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_585),T49,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ynew,T48);
  lit_587 = YPPsym((P)"@new");
  lit_588 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T50 = YPsig(LITREF(lit_588),YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YOnew = YPmet(FUNCODEREF(YOnew),LITREF(lit_587),T50,ENVNUL,PNUL,sloc(1825));
  T51 = YOnew;
  VARSET(YOnew,T51);
  lit_589 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T52 = YPsig(LITREF(lit_589),YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_504 = YPmet(FUNCODEREF(fun_new_504),LITREF(lit_585),T52,ENVNUL,PNUL,sloc(1828));
  T54 = VARREF_OR(Ynew,YPfalse);
  T55 = fun_new_504;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(Ynew,T53);
  lit_590 = YPPsym((P)"subtype?");
  lit_591 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T57 = YPsig(LITREF(lit_591),YPPlist(2,VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T56 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_590),T57,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YsubtypeQ,T56);
  lit_592 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_593 = YPPlist(1,YPPsym((P)"t"));
  T59 = YPsig(LITREF(lit_593),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_505 = YPmet(FUNCODEREF(fun_505),YPfalse,T59,ENVNUL,PNUL,sloc(1837));
  T58 = YPsig(LITREF(lit_592),YPPlist(2,VARREF(YLunionG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_506 = YPmet(FUNCODEREF(fun_subtypeQ_506),LITREF(lit_590),T58,ENVNUL,PNUL,sloc(1836));
  T61 = VARREF_OR(YsubtypeQ,YPfalse);
  T62 = fun_subtypeQ_506;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T62);
  VARSET(YsubtypeQ,T60);
  lit_594 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_595 = YPPlist(1,YPPsym((P)"t"));
  T64 = YPsig(LITREF(lit_595),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_507 = YPmet(FUNCODEREF(fun_507),YPfalse,T64,ENVNUL,PNUL,sloc(1839));
  T63 = YPsig(LITREF(lit_594),YPPlist(2,VARREF(YLtypeG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_508 = YPmet(FUNCODEREF(fun_subtypeQ_508),LITREF(lit_590),T63,ENVNUL,PNUL,sloc(1838));
  T66 = VARREF_OR(YsubtypeQ,YPfalse);
  T67 = fun_subtypeQ_508;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YsubtypeQ,T65);
  lit_596 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_597 = YPPlist(1,YPPsym((P)"t"));
  T69 = YPsig(LITREF(lit_597),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_509 = YPmet(FUNCODEREF(fun_509),YPfalse,T69,ENVNUL,PNUL,sloc(1842));
  T68 = YPsig(LITREF(lit_596),YPPlist(2,VARREF(YLunionG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_510 = YPmet(FUNCODEREF(fun_subtypeQ_510),LITREF(lit_590),T68,ENVNUL,PNUL,sloc(1841));
  T71 = VARREF_OR(YsubtypeQ,YPfalse);
  T72 = fun_subtypeQ_510;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T72);
  VARSET(YsubtypeQ,T70);
  lit_598 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T73 = YPsig(LITREF(lit_598),YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_511 = YPmet(FUNCODEREF(fun_subtypeQ_511),LITREF(lit_590),T73,ENVNUL,PNUL,sloc(1844));
  T75 = VARREF_OR(YsubtypeQ,YPfalse);
  T76 = fun_subtypeQ_511;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T76);
  VARSET(YsubtypeQ,T74);
  lit_599 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T77 = YPsig(LITREF(lit_599),YPPlist(2,VARREF(YLsingletonG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_512 = YPmet(FUNCODEREF(fun_subtypeQ_512),LITREF(lit_590),T77,ENVNUL,PNUL,sloc(1846));
  T79 = VARREF_OR(YsubtypeQ,YPfalse);
  T80 = fun_subtypeQ_512;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T80);
  VARSET(YsubtypeQ,T78);
  lit_600 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T81 = YPsig(LITREF(lit_600),YPPlist(2,VARREF(YLsubclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_513 = YPmet(FUNCODEREF(fun_subtypeQ_513),LITREF(lit_590),T81,ENVNUL,PNUL,sloc(1848));
  T83 = VARREF_OR(YsubtypeQ,YPfalse);
  T84 = fun_subtypeQ_513;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T84);
  VARSET(YsubtypeQ,T82);
  lit_601 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T85 = YPsig(LITREF(lit_601),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_514 = YPmet(FUNCODEREF(fun_subtypeQ_514),LITREF(lit_590),T85,ENVNUL,PNUL,sloc(1851));
  T87 = VARREF_OR(YsubtypeQ,YPfalse);
  T88 = fun_subtypeQ_514;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T88);
  VARSET(YsubtypeQ,T86);
  lit_602 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T89 = YPsig(LITREF(lit_602),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_515 = YPmet(FUNCODEREF(fun_subtypeQ_515),LITREF(lit_590),T89,ENVNUL,PNUL,sloc(1853));
  T91 = VARREF_OR(YsubtypeQ,YPfalse);
  T92 = fun_subtypeQ_515;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T92);
  VARSET(YsubtypeQ,T90);
  lit_603 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T93 = YPsig(LITREF(lit_603),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_516 = YPmet(FUNCODEREF(fun_subtypeQ_516),LITREF(lit_590),T93,ENVNUL,PNUL,sloc(1855));
  T95 = VARREF_OR(YsubtypeQ,YPfalse);
  T96 = fun_subtypeQ_516;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T96);
  VARSET(YsubtypeQ,T94);
  lit_604 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T97 = YPsig(LITREF(lit_604),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_517 = YPmet(FUNCODEREF(fun_subtypeQ_517),LITREF(lit_590),T97,ENVNUL,PNUL,sloc(1858));
  T99 = VARREF_OR(YsubtypeQ,YPfalse);
  T100 = fun_subtypeQ_517;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T100);
  VARSET(YsubtypeQ,T98);
  lit_605 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T101 = YPsig(LITREF(lit_605),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_518 = YPmet(FUNCODEREF(fun_subtypeQ_518),LITREF(lit_590),T101,ENVNUL,PNUL,sloc(1860));
  T103 = VARREF_OR(YsubtypeQ,YPfalse);
  T104 = fun_subtypeQ_518;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T104);
  VARSET(YsubtypeQ,T102);
  lit_606 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T105 = YPsig(LITREF(lit_606),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_519 = YPmet(FUNCODEREF(fun_subtypeQ_519),LITREF(lit_590),T105,ENVNUL,PNUL,sloc(1862));
  T107 = VARREF_OR(YsubtypeQ,YPfalse);
  T108 = fun_subtypeQ_519;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T108);
  VARSET(YsubtypeQ,T106);
  lit_607 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T109 = YPsig(LITREF(lit_607),YPPlist(2,VARREF(YLproductG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_520 = YPmet(FUNCODEREF(fun_subtypeQ_520),LITREF(lit_590),T109,ENVNUL,PNUL,sloc(1865));
  T111 = VARREF_OR(YsubtypeQ,YPfalse);
  T112 = fun_subtypeQ_520;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T112);
  VARSET(YsubtypeQ,T110);
  lit_608 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T113 = YPsig(LITREF(lit_608),YPPlist(2,VARREF(YLtypeG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_521 = YPmet(FUNCODEREF(fun_subtypeQ_521),LITREF(lit_590),T113,ENVNUL,PNUL,sloc(1867));
  T115 = VARREF_OR(YsubtypeQ,YPfalse);
  T116 = fun_subtypeQ_521;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T116);
  VARSET(YsubtypeQ,T114);
  lit_609 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T117 = YPsig(LITREF(lit_609),YPPlist(2,VARREF(YLproductG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_522 = YPmet(FUNCODEREF(fun_subtypeQ_522),LITREF(lit_590),T117,ENVNUL,PNUL,sloc(1869));
  T119 = VARREF_OR(YsubtypeQ,YPfalse);
  T120 = fun_subtypeQ_522;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T120);
  VARSET(YsubtypeQ,T118);
  lit_610 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T121 = YPsig(LITREF(lit_610),YPPlist(2,VARREF(YLproductG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_523 = YPmet(FUNCODEREF(fun_subtypeQ_523),LITREF(lit_590),T121,ENVNUL,PNUL,sloc(1874));
  T123 = VARREF_OR(YsubtypeQ,YPfalse);
  T124 = fun_subtypeQ_523;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YsubtypeQ,T122);
  lit_611 = YPPsym((P)"isa?");
  lit_612 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"t"));
  T126 = YPsig(LITREF(lit_612),YPPlist(2,VARREF(YLanyG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T125 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_611),T126,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YisaQ,T125);
  lit_613 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T127 = YPsig(LITREF(lit_613),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_524 = YPmet(FUNCODEREF(fun_isaQ_524),LITREF(lit_611),T127,ENVNUL,PNUL,sloc(1881));
  T129 = VARREF_OR(YisaQ,YPfalse);
  T130 = fun_isaQ_524;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T130);
  VARSET(YisaQ,T128);
  lit_614 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T131 = YPsig(LITREF(lit_614),YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_525 = YPmet(FUNCODEREF(fun_isaQ_525),LITREF(lit_611),T131,ENVNUL,PNUL,sloc(1883));
  T133 = VARREF_OR(YisaQ,YPfalse);
  T134 = fun_isaQ_525;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T134);
  VARSET(YisaQ,T132);
  lit_615 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T135 = YPsig(LITREF(lit_615),YPPlist(2,VARREF(YLanyG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_526 = YPmet(FUNCODEREF(fun_isaQ_526),LITREF(lit_611),T135,ENVNUL,PNUL,sloc(1885));
  T137 = VARREF_OR(YisaQ,YPfalse);
  T138 = fun_isaQ_526;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T138);
  VARSET(YisaQ,T136);
  lit_616 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"u"));
  lit_617 = YPPlist(1,YPPsym((P)"t"));
  T140 = YPsig(LITREF(lit_617),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_527 = YPmet(FUNCODEREF(fun_527),YPfalse,T140,ENVNUL,PNUL,sloc(1889));
  T139 = YPsig(LITREF(lit_616),YPPlist(2,VARREF(YLanyG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_528 = YPmet(FUNCODEREF(fun_isaQ_528),LITREF(lit_611),T139,ENVNUL,PNUL,sloc(1888));
  T142 = VARREF_OR(YisaQ,YPfalse);
  T143 = fun_isaQ_528;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YisaQ,T141);
  lit_618 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T144 = YPsig(LITREF(lit_618),YPPlist(2,VARREF(YLanyG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_529 = YPmet(FUNCODEREF(fun_isaQ_529),LITREF(lit_611),T144,ENVNUL,PNUL,sloc(1890));
  T146 = VARREF_OR(YisaQ,YPfalse);
  T147 = fun_isaQ_529;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T147);
  VARSET(YisaQ,T145);
  lit_619 = YPPsym((P)"order-specs");
  lit_620 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T150 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T149 = YPsig(LITREF(lit_620),YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T150,Ynil);
  T148 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_619),T149,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yorder_specs,T148);
  lit_621 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T152 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T151 = YPsig(LITREF(lit_621),YPPlist(3,VARREF(YLsingletonG),VARREF(YLsingletonG),VARREF(YLanyG)),YPfalse,YPint((P)3),T152,Ynil);
  fun_order_specs_530 = YPmet(FUNCODEREF(fun_order_specs_530),LITREF(lit_619),T151,ENVNUL,PNUL,sloc(1900));
  T154 = VARREF_OR(Yorder_specs,YPfalse);
  T155 = fun_order_specs_530;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T155);
  VARSET(Yorder_specs,T153);
  lit_622 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T157 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T156 = YPsig(LITREF(lit_622),YPPlist(3,VARREF(YLsingletonG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T157,Ynil);
  fun_order_specs_531 = YPmet(FUNCODEREF(fun_order_specs_531),LITREF(lit_619),T156,ENVNUL,PNUL,sloc(1904));
  T159 = VARREF_OR(Yorder_specs,YPfalse);
  T160 = fun_order_specs_531;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T160);
  VARSET(Yorder_specs,T158);
  lit_623 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T162 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T161 = YPsig(LITREF(lit_623),YPPlist(3,VARREF(YLsubclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T162,Ynil);
  fun_order_specs_532 = YPmet(FUNCODEREF(fun_order_specs_532),LITREF(lit_619),T161,ENVNUL,PNUL,sloc(1908));
  T164 = VARREF_OR(Yorder_specs,YPfalse);
  T165 = fun_order_specs_532;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T165);
  VARSET(Yorder_specs,T163);
  lit_624 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T167 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T166 = YPsig(LITREF(lit_624),YPPlist(3,VARREF(YLsubclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T167,Ynil);
  fun_order_specs_533 = YPmet(FUNCODEREF(fun_order_specs_533),LITREF(lit_619),T166,ENVNUL,PNUL,sloc(1917));
  T169 = VARREF_OR(Yorder_specs,YPfalse);
  T170 = fun_order_specs_533;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T170);
  VARSET(Yorder_specs,T168);
  lit_625 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T172 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T171 = YPsig(LITREF(lit_625),YPPlist(3,VARREF(YLclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T172,Ynil);
  fun_order_specs_534 = YPmet(FUNCODEREF(fun_order_specs_534),LITREF(lit_619),T171,ENVNUL,PNUL,sloc(1926));
  T174 = VARREF_OR(Yorder_specs,YPfalse);
  T175 = fun_order_specs_534;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T175);
  VARSET(Yorder_specs,T173);
  lit_626 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T177 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T176 = YPsig(LITREF(lit_626),YPPlist(3,VARREF(YLclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T177,Ynil);
  fun_order_specs_535 = YPmet(FUNCODEREF(fun_order_specs_535),LITREF(lit_619),T176,ENVNUL,PNUL,sloc(1935));
  T179 = VARREF_OR(Yorder_specs,YPfalse);
  T180 = fun_order_specs_535;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T180);
  VARSET(Yorder_specs,T178);
  lit_627 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T182 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T181 = YPsig(LITREF(lit_627),YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T182,Ynil);
  fun_order_specs_536 = YPmet(FUNCODEREF(fun_order_specs_536),LITREF(lit_619),T181,ENVNUL,PNUL,sloc(1939));
  T184 = VARREF_OR(Yorder_specs,YPfalse);
  T185 = fun_order_specs_536;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T185);
  VARSET(Yorder_specs,T183);
  lit_628 = YPPsym((P)"may-isa?");
  lit_629 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T190 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T189 = YPsig(LITREF(lit_629),YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),T190,Ynil);
  T188 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_628),T189,Ynil,YPfalse,YPfalse,YPfalse);
  T187 = VARSET(Ymay_isaQ,T188);
  T186 = T187;
  return T186;
}

P Y___main_14___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
DEFCREGS();
  lit_630 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T1 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T0 = YPsig(LITREF(lit_630),YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),T1,Ynil);
  fun_may_isaQ_537 = YPmet(FUNCODEREF(fun_may_isaQ_537),LITREF(lit_628),T0,ENVNUL,PNUL,sloc(1950));
  T3 = VARREF_OR(Ymay_isaQ,YPfalse);
  T4 = fun_may_isaQ_537;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T4);
  VARSET(Ymay_isaQ,T2);
  lit_631 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T6 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T5 = YPsig(LITREF(lit_631),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),T6,Ynil);
  fun_may_isaQ_538 = YPmet(FUNCODEREF(fun_may_isaQ_538),LITREF(lit_628),T5,ENVNUL,PNUL,sloc(1952));
  T8 = VARREF_OR(Ymay_isaQ,YPfalse);
  T9 = fun_may_isaQ_538;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(Ymay_isaQ,T7);
  lit_632 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T11 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T10 = YPsig(LITREF(lit_632),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),T11,Ynil);
  fun_may_isaQ_539 = YPmet(FUNCODEREF(fun_may_isaQ_539),LITREF(lit_628),T10,ENVNUL,PNUL,sloc(1954));
  T13 = VARREF_OR(Ymay_isaQ,YPfalse);
  T14 = fun_may_isaQ_539;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T14);
  VARSET(Ymay_isaQ,T12);
  lit_633 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T16 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T15 = YPsig(LITREF(lit_633),YPPlist(2,VARREF(YLclassG),VARREF(YLunionG)),YPfalse,YPint((P)2),T16,Ynil);
  fun_may_isaQ_540 = YPmet(FUNCODEREF(fun_may_isaQ_540),LITREF(lit_628),T15,ENVNUL,PNUL,sloc(1957));
  T18 = VARREF_OR(Ymay_isaQ,YPfalse);
  T19 = fun_may_isaQ_540;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(Ymay_isaQ,T17);
  lit_634 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  lit_635 = YPPlist(1,YPPsym((P)"t"));
  T22 = YPsig(LITREF(lit_635),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_541 = YPmet(FUNCODEREF(fun_541),YPfalse,T22,ENVNUL,PNUL,sloc(1967));
  T21 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T20 = YPsig(LITREF(lit_634),YPPlist(2,VARREF(YLclassG),VARREF(YLproductG)),YPfalse,YPint((P)2),T21,Ynil);
  fun_may_isaQ_542 = YPmet(FUNCODEREF(fun_may_isaQ_542),LITREF(lit_628),T20,ENVNUL,PNUL,sloc(1965));
  T24 = VARREF_OR(Ymay_isaQ,YPfalse);
  T25 = fun_may_isaQ_542;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(Ymay_isaQ,T23);
  VARSET(YTboot_macro_module_namesT,Ynil);
  VARSET(YTboot_macro_namesT,Ynil);
  VARSET(YTboot_macro_expandersT,Ynil);
  VARSET(YTmacros_okQT,YPfalse);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T26 = YPfalse;
  return T26;
}

P Y___main_15___() {
  P T0;
DEFCREGS();
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */


static USE_INFO use_infos[] = {
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"src-loc-line-setter", CVAR, &Ysrc_loc_line_setter},
  {"clone", CVAR, &Yclone},
  {"%prop-init", PVAR, NULL},
  {"%prop-owner", PVAR, NULL},
  {"%reparent-class-shells", PVAR, NULL},
  {"class-ancestors-setter", CVAR, &Yclass_ancestors_setter},
  {"%sig-nary?", PVAR, NULL},
  {"unexec", CVAR, &Yunexec},
  {"<fun>", CVAR, &YLfunG},
  {"def-object-class-accessor", PVAR, NULL},
  {"%i<<<", PVAR, NULL},
  {"%os-name", PVAR, NULL},
  {"%ftanh", PVAR, NULL},
  {"gen-lookup-miss", CVAR, &Ygen_lookup_miss},
  {"@gen-cache-classes", CVAR, &YOgen_cache_classes},
  {"%fatan2", PVAR, NULL},
  {"*restarts-ok?*", CVAR, &YTrestarts_okQT},
  {"%prop-setter-setter", PVAR, NULL},
  {"%patch-early-generics", PVAR, NULL},
  {"%flo-dat", PVAR, NULL},
  {"no-applicable-methods-error", CVAR, &Yno_applicable_methods_error},
  {"<seq!>", CVAR, &YLseqXG},
  {"tail", CVAR, &Ytail},
  {"%class-gens-setter", PVAR, NULL},
  {"opts-tup-storage-setter", CVAR, &Yopts_tup_storage_setter},
  {"%gen-name", PVAR, NULL},
  {"arity-error", CVAR, &Yarity_error},
  {"%met", PVAR, NULL},
  {"fun-arity", CVAR, &Yfun_arity},
  {"class-name", CVAR, &Yclass_name},
  {"%pairize", PVAR, NULL},
  {"%i+", PVAR, NULL},
  {"assert-error", CVAR, &Yassert_error},
  {"@int?", PVAR, NULL},
  {"use/mangle", PVAR, NULL},
  {"%fsin", PVAR, NULL},
  {"%class-children-setter", PVAR, NULL},
  {"class-ancestors", CVAR, &Yclass_ancestors},
  {"bound?", PVAR, NULL},
  {"%type-object", PVAR, NULL},
  {"%loc", PVAR, NULL},
  {"<seq.>", CVAR, &YLseqIG},
  {"%tup!", PVAR, NULL},
  {"gen-lookup-1", PVAR, NULL},
  {"%finalize-props", PVAR, NULL},
  {"@singleton-isa?", PVAR, NULL},
  {"ensure-fresh-object", CVAR, &Yensure_fresh_object},
  {"internal-error", CVAR, &Yinternal_error},
  {"@fun-nary?", CVAR, &YOfun_naryQ},
  {"%%prop", PVAR, NULL},
  {"*boot-macro-expanders*", CVAR, &YTboot_macro_expandersT},
  {"try", PVAR, NULL},
  {"%class-parents-setter", PVAR, NULL},
  {"src-loc-line", CVAR, &Ysrc_loc_line},
  {"class-gens-setter", CVAR, &Yclass_gens_setter},
  {"%vsp-setter", PVAR, NULL},
  {"@order-specs-class", CVAR, &YOorder_specs_class},
  {"%facos", PVAR, NULL},
  {"%tail-setter", PVAR, NULL},
  {"%str-eq?", PVAR, NULL},
  {"%raw", PVAR, NULL},
  {"%i-", PVAR, NULL},
  {"%define-boxed-structure", PVAR, NULL},
  {"%flo", PVAR, NULL},
  {"%iv", PVAR, NULL},
  {"%class-name-setter", PVAR, NULL},
  {"class-type-cache-setter", CVAR, &Yclass_type_cache_setter},
  {"%prop-setter", PVAR, NULL},
  {"$adr-tag", PVAR, NULL},
  {"%sig-val", PVAR, NULL},
  {"def-fun/sig-accessor", PVAR, NULL},
  {"seq", PVAR, NULL},
  {"handler-info-arguments", CVAR, &Yhandler_info_arguments},
  {"type-object-setter", CVAR, &Ytype_object_setter},
  {"prop-bound-at?", PVAR, NULL},
  {"met-app-unify", CVAR, &Ymet_app_unify},
  {"%class-type-cache", PVAR, NULL},
  {"%define-structure-accessors", PVAR, NULL},
  {"%str", PVAR, NULL},
  {"%fun-cache", PVAR, NULL},
  {"product-elts-setter", CVAR, &Yproduct_elts_setter},
  {"%gen-sig-setter", PVAR, NULL},
  {"%define-method", CVAR, &YPdefine_method},
  {"%get", PVAR, NULL},
  {"requires-singleton-prec", CVAR, &Yrequires_singleton_prec},
  {"%vnm-setter", PVAR, NULL},
  {"<col!>", CVAR, &YLcolXG},
  {"ddv", PVAR, NULL},
  {"@gen-cache-singletons-setter", CVAR, &YOgen_cache_singletons_setter},
  {"%fcosh", PVAR, NULL},
  {"class-gens", CVAR, &Yclass_gens},
  {"forward-class", CVAR, &Yforward_class},
  {"%class-type-cache-setter", PVAR, NULL},
  {"@oelt", PVAR, NULL},
  {"%i*", PVAR, NULL},
  {"gen-cache-missable?-setter", CVAR, &Ygen_cache_missableQ_setter},
  {"if", PVAR, NULL},
  {"%tnul", CVAR, &YPtnul},
  {"%prop-type", PVAR, NULL},
  {"<sig>", CVAR, &YLsigG},
  {"@alter", CVAR, &YOalter},
  {"%code-ref", PVAR, NULL},
  {"class-type-cache", CVAR, &Yclass_type_cache},
  {"---main-9---", PVAR, NULL},
  {"gen-cache-classes-setter", CVAR, &Ygen_cache_classes_setter},
  {"%%sfab", PVAR, NULL},
  {"object-parents", CVAR, &Yobject_parents},
  {"%*used-symbols-too-early*", CVAR, &YPTused_symbols_too_earlyT},
  {"%%len", PVAR, NULL},
  {"@fun-specs", CVAR, &YOfun_specs},
  {"@all?", CVAR, &YOallQ},
  {"%fab-dyn-var", PVAR, NULL},
  {"---main-3---", PVAR, NULL},
  {"file-opening-error", CVAR, &Yfile_opening_error},
  {"fun-nary?-setter", CVAR, &Yfun_naryQ_setter},
  {"%vm-box-val-setter", PVAR, NULL},
  {"%class-forward", PVAR, NULL},
  {"%define-tagged-structure", PVAR, NULL},
  {"%define-repeated-structure", PVAR, NULL},
  {"<col.>", CVAR, &YLcolIG},
  {"%do-stack-frames", PVAR, NULL},
  {"sig-nary?-setter", CVAR, &Ysig_naryQ_setter},
  {"%ft/", PVAR, NULL},
  {"@tlen", PVAR, NULL},
  {"use/library", PVAR, NULL},
  {"%indirect-object?", PVAR, NULL},
  {"unless", PVAR, NULL},
  {"$max-int", CVAR, &YDmax_int},
  {"%met-src", PVAR, NULL},
  {"prop-setter-setter", CVAR, &Yprop_setter_setter},
  {"%lb", PVAR, NULL},
  {"incongruent-method-error", CVAR, &Yincongruent_method_error},
  {"force-names-into-boot-module", PVAR, NULL},
  {"ds", PVAR, NULL},
  {"%vsp", PVAR, NULL},
  {"%flo-dat-setter", PVAR, NULL},
  {"gen-cache-missable?", CVAR, &Ygen_cache_missableQ},
  {"%src-loc-file", PVAR, NULL},
  {"%class-id", PVAR, NULL},
  {"@prune-mets-by-type-at", CVAR, &YOprune_mets_by_type_at},
  {"<col>", CVAR, &YLcolG},
  {"%tag-into", PVAR, NULL},
  {"%class-shells", PVAR, NULL},
  {"@telt-setter", PVAR, NULL},
  {"%head", PVAR, NULL},
  {"gen-cache-classes", CVAR, &Ygen_cache_classes},
  {"%to-tup", PVAR, NULL},
  {"%def-regs", PVAR, NULL},
  {"%pair", PVAR, NULL},
  {"%close-out-port", PVAR, NULL},
  {"---main-4---", PVAR, NULL},
  {"%raw-alloc", PVAR, NULL},
  {"%met-refs", PVAR, NULL},
  {"%check-call-types", PVAR, NULL},
  {"%opts-tup-location-setter", PVAR, NULL},
  {"sig-nary?", CVAR, &Ysig_naryQ},
  {"sig-unification-vars-setter", CVAR, &Ysig_unification_vars_setter},
  {"---main-5---", PVAR, NULL},
  {"%met-env", PVAR, NULL},
  {"@=", PVAR, NULL},
  {"@may-isa?", CVAR, &YOmay_isaQ},
  {"%trace-off", PVAR, NULL},
  {"%opts-tup-tup-setter", PVAR, NULL},
  {"@head-setter", PVAR, NULL},
  {"fin", PVAR, NULL},
  {"prop-setter", CVAR, &Yprop_setter},
  {"$gen-cache-singletons-offset", CVAR, &YDgen_cache_singletons_offset},
  {"---main-13---", PVAR, NULL},
  {"<rep>", CVAR, &YLrepG},
  {"%i^", PVAR, NULL},
  {"fun-sig-setter", CVAR, &Yfun_sig_setter},
  {"object-props", CVAR, &Yobject_props},
  {"and", PVAR, NULL},
  {"@fun-names", CVAR, &YOfun_names},
  {"@rev!", CVAR, &YOrevX},
  {"<gen-cache>", CVAR, &YLgen_cacheG},
  {"fun-nary?", CVAR, &Yfun_naryQ},
  {"fun-src-setter", CVAR, &Yfun_src_setter},
  {"%tag", PVAR, NULL},
  {"%class-mets", PVAR, NULL},
  {"gen-add-met", CVAR, &Ygen_add_met},
  {"gen-refs-setter", CVAR, &Ygen_refs_setter},
  {"gen-from-met", CVAR, &Ygen_from_met},
  {"@do", CVAR, &YOdo},
  {"<loc>", CVAR, &YLlocG},
  {"%sig-specs-setter", PVAR, NULL},
  {"%add-prop", CVAR, &YPadd_prop},
  {"sig-unification-vars", CVAR, &Ysig_unification_vars},
  {"%define-structure", PVAR, NULL},
  {"@cache-add", CVAR, &YOcache_add},
  {"$direct-object-class", CVAR, &YDdirect_object_class},
  {"%class-props", PVAR, NULL},
  {"fun-sig", CVAR, &Yfun_sig},
  {"%open-out-file", PVAR, NULL},
  {"%sig-names-setter", PVAR, NULL},
  {"%cb", PVAR, NULL},
  {"%vm-box-fab", PVAR, NULL},
  {"%vm-fun-env-elt-setter", PVAR, NULL},
  {"fun-src", CVAR, &Yfun_src},
  {"return-type-error", CVAR, &Yreturn_type_error},
  {"<flo>", CVAR, &YLfloG},
  {"gen-lookup-miss-1", CVAR, &Ygen_lookup_miss_1},
  {"%ff", PVAR, NULL},
  {"gen-lookup-miss-1-using", CVAR, &Ygen_lookup_miss_1_using},
  {"%union-elts", PVAR, NULL},
  {"%gen-mets-setter", PVAR, NULL},
  {"@tup", CVAR, &YOtup},
  {"@+", PVAR, NULL},
  {"@class-isa?", PVAR, NULL},
  {"gen-refs", CVAR, &Ygen_refs},
  {"%vpc", PVAR, NULL},
  {"patch-early-classes", CVAR, &Ypatch_early_classes},
  {"%vpc-setter", PVAR, NULL},
  {"%vfp-setter", PVAR, NULL},
  {"find-setter", CVAR, &Yfind_setter},
  {"ct-also", PVAR, NULL},
  {"%fsinh", PVAR, NULL},
  {"@@empty?", CVAR, &YOOemptyQ},
  {"%fab-code-refs", PVAR, NULL},
  {"<fixnum>", CVAR, &YLfixnumG},
  {"head-setter", CVAR, &Yhead_setter},
  {"@gen-cache-arg-pos-setter", CVAR, &YOgen_cache_arg_pos_setter},
  {"syntax-error", CVAR, &Ysyntax_error},
  {"%object-class", PVAR, NULL},
  {"@subtype?", CVAR, &YOsubtypeQ},
  {"@precise-spec?", CVAR, &YOprecise_specQ},
  {"%met-prop-len", CVAR, &YPmet_prop_len},
  {"%opts-count", PVAR, NULL},
  {"class-ordered-ancestors", CVAR, &Yclass_ordered_ancestors},
  {"@mem?", CVAR, &YOmemQ},
  {"def", PVAR, NULL},
  {"class-prop-len-setter", CVAR, &Yclass_prop_len_setter},
  {"%gen-cache", PVAR, NULL},
  {"<parents>", CVAR, &YLparentsG},
  {"%ready", PVAR, NULL},
  {"%c=", PVAR, NULL},
  {"export", PVAR, NULL},
  {"one-nil", CVAR, &Yone_nil},
  {"class-direct-props-setter", CVAR, &Yclass_direct_props_setter},
  {"%f=", PVAR, NULL},
  {"<prop>", CVAR, &YLpropG},
  {"%sig-names", PVAR, NULL},
  {"%sp-reg-setter", PVAR, NULL},
  {"%i=", PVAR, NULL},
  {"<int>", CVAR, &YLintG},
  {"mif", PVAR, NULL},
  {"@head", PVAR, NULL},
  {"%iu", PVAR, NULL},
  {"property-unbound-error", CVAR, &Yproperty_unbound_error},
  {"%app-filename", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"fun-congruent?", CVAR, &Yfun_congruentQ},
  {"%f-", PVAR, NULL},
  {"%fp-reg", PVAR, NULL},
  {"%ir", PVAR, NULL},
  {"@<", PVAR, NULL},
  {"@pick", CVAR, &YOpick},
  {"lst", CVAR, &Ylst},
  {"%snul", CVAR, &YPsnul},
  {"head", CVAR, &Yhead},
  {"%vnm", PVAR, NULL},
  {"%class-of", PVAR, NULL},
  {"opts-count-setter", CVAR, &Yopts_count_setter},
  {"@tail", PVAR, NULL},
  {"%sig-val-setter", PVAR, NULL},
  {"refab-class", CVAR, &Yrefab_class},
  {"%%tfab", PVAR, NULL},
  {"%time", PVAR, NULL},
  {"%met-sig-setter", PVAR, NULL},
  {"%src-loc-line-setter", PVAR, NULL},
  {"class-prop-len", CVAR, &Yclass_prop_len},
  {"%invoke-debugger", PVAR, NULL},
  {"<num>", CVAR, &YLnumG},
  {"%sym-nam", PVAR, NULL},
  {"%gen-cache-singletons", PVAR, NULL},
  {"update-instance-for-changed-class", CVAR, &Yupdate_instance_for_changed_class},
  {"%fi2f", PVAR, NULL},
  {"---main-8---", PVAR, NULL},
  {"%rnul", CVAR, &YPrnul},
  {"not", CVAR, &Ynot},
  {"or", PVAR, NULL},
  {"%gen-code-setter", PVAR, NULL},
  {"%break", PVAR, NULL},
  {"$nul-assocs", CVAR, &YDnul_assocs},
  {"%class-gens", PVAR, NULL},
  {"<product>", CVAR, &YLproductG},
  {"%sym", PVAR, NULL},
  {"%cu", PVAR, NULL},
  {"%close-in-port", PVAR, NULL},
  {"@gen-cache-arg-pos", CVAR, &YOgen_cache_arg_pos},
  {"%@class-of", PVAR, NULL},
  {"%cat2", PVAR, NULL},
  {"@mets-unspecialized-at?", CVAR, &YOmets_unspecialized_atQ},
  {"no-next-methods-error", CVAR, &Yno_next_methods_error},
  {"%%mep-apply", PVAR, NULL},
  {"@class-ancestors", CVAR, &YOclass_ancestors},
  {"%type-object-setter", PVAR, NULL},
  {"%ftan", PVAR, NULL},
  {"%vfn-setter", PVAR, NULL},
  {"%met-name", PVAR, NULL},
  {"opts-count", CVAR, &Yopts_count},
  {"%current-in-port", PVAR, NULL},
  {"class-children-setter", CVAR, &Yclass_children_setter},
  {"%symbols-ready?", CVAR, &YPsymbols_readyQ},
  {"%str-eq?-loop", PVAR, NULL},
  {"%class-row", PVAR, NULL},
  {"%with-monitor", CVAR, &YPwith_monitor},
  {"%allocate-stack", PVAR, NULL},
  {"fun-specs", CVAR, &Yfun_specs},
  {"%%rfab", PVAR, NULL},
  {"@empty?", PVAR, NULL},
  {"class-forward-setter", CVAR, &Yclass_forward_setter},
  {"%sig-arity", PVAR, NULL},
  {"%add-met", CVAR, &YPadd_met},
  {"%opts-count-setter", PVAR, NULL},
  {"%gen-mets", PVAR, NULL},
  {"%dyn-var-val-setter", PVAR, NULL},
  {"@find", CVAR, &YOfind},
  {"<union>", CVAR, &YLunionG},
  {"class-row-setter", CVAR, &Yclass_row_setter},
  {"<src-loc>", CVAR, &YLsrc_locG},
  {"%peek", PVAR, NULL},
  {"ord-app-mets-1", CVAR, &Yord_app_mets_1},
  {"%gen-src-setter", PVAR, NULL},
  {"use", PVAR, NULL},
  {"union-elts-setter", CVAR, &Yunion_elts_setter},
  {"%class-forward-setter", PVAR, NULL},
  {"dss", PVAR, NULL},
  {"%define-getter", PVAR, NULL},
  {"nul", CVAR, &Ynul},
  {"may-isa?", CVAR, &Ymay_isaQ},
  {"class-children", CVAR, &Yclass_children},
  {"prop-value-at", PVAR, NULL},
  {"fun-same-met?", CVAR, &Yfun_same_metQ},
  {"%binding-name", PVAR, NULL},
  {"%object-shells", PVAR, NULL},
  {"property-type-error", CVAR, &Yproperty_type_error},
  {"%vm-box-val", PVAR, NULL},
  {"%file-type", PVAR, NULL},
  {"%vfn", PVAR, NULL},
  {"@map", CVAR, &YOmap},
  {"<simple-handler-info>", CVAR, &YLsimple_handler_infoG},
  {"<chr>", CVAR, &YLchrG},
  {"%fun-cache-setter", PVAR, NULL},
  {"class-forward", CVAR, &Yclass_forward},
  {"%prop-init-setter", PVAR, NULL},
  {"%sp-reg", PVAR, NULL},
  {"gen-cache-singletons-setter", CVAR, &Ygen_cache_singletons_setter},
  {"%gen-name-setter", PVAR, NULL},
  {"@add", PVAR, NULL},
  {"object-class", CVAR, &Yobject_class},
  {"nil", CVAR, &Ynil},
  {"%%sym", PVAR, NULL},
  {"<props>", CVAR, &YLpropsG},
  {"<subclass>", CVAR, &YLsubclassG},
  {"class-row", CVAR, &Yclass_row},
  {"%new", PVAR, NULL},
  {"gen-lookup-1-using", PVAR, NULL},
  {"%gen-refs-setter", PVAR, NULL},
  {"%lu", PVAR, NULL},
  {"sig-specs-setter", CVAR, &Ysig_specs_setter},
  {"%opts-tup-location", PVAR, NULL},
  {"argument-type-error", CVAR, &Yargument_type_error},
  {"@type-equal?", CVAR, &YOtype_equalQ},
  {"@tall2?", CVAR, &YOtall2Q},
  {"%fpow", PVAR, NULL},
  {"@pair", PVAR, NULL},
  {"union-elts", CVAR, &Yunion_elts},
  {"prop-getter-setter", CVAR, &Yprop_getter_setter},
  {"%untag", PVAR, NULL},
  {"%open-in-file", PVAR, NULL},
  {"<mag>", CVAR, &YLmagG},
  {"%sig-arity-setter", PVAR, NULL},
  {"ord-app-mets", CVAR, &Yord_app_mets},
  {"%im", PVAR, NULL},
  {"%slen", PVAR, NULL},
  {"stack-overflow-error", CVAR, &Ystack_overflow_error},
  {"@not", PVAR, NULL},
  {"fab-class", CVAR, &Yfab_class},
  {"%met-refs-setter", PVAR, NULL},
  {"arithmetic-error", CVAR, &Yarithmetic_error},
  {"%eof-object", PVAR, NULL},
  {"prop-init-setter", CVAR, &Yprop_init_setter},
  {"%rlen", PVAR, NULL},
  {"@==", PVAR, NULL},
  {"%src-loc-line", PVAR, NULL},
  {"ensure-singleton-cache", CVAR, &Yensure_singleton_cache},
  {"cpl-error", CVAR, &Ycpl_error},
  {"%fapply", PVAR, NULL},
  {"dp", PVAR, NULL},
  {"gen-cache-singletons", CVAR, &Ygen_cache_singletons},
  {"%class-children", PVAR, NULL},
  {"%opts-location-setter", PVAR, NULL},
  {"loc", PVAR, NULL},
  {"subtype?", CVAR, &YsubtypeQ},
  {"@@==", CVAR, &YOOEE},
  {"<singleton>", CVAR, &YLsingletonG},
  {"%gen-cache-missable?", PVAR, NULL},
  {"@union-spec?", CVAR, &YOunion_specQ},
  {"as-error", CVAR, &Yas_error},
  {"%i?", PVAR, NULL},
  {"<log>", CVAR, &YLlogG},
  {"ambiguous-method-error", CVAR, &Yambiguous_method_error},
  {"%object-of", PVAR, NULL},
  {"sig-specs", CVAR, &Ysig_specs},
  {"%gen-cache-classes-setter", PVAR, NULL},
  {"sig-val-setter", CVAR, &Ysig_val_setter},
  {"%vm-with-cleanup", PVAR, NULL},
  {"*next-class-id*", CVAR, &YTnext_class_idT},
  {"%%apply", PVAR, NULL},
  {"add-prop", CVAR, &Yadd_prop},
  {"%product-elts-setter", PVAR, NULL},
  {"$tag-len", PVAR, NULL},
  {"prop-getter", CVAR, &Yprop_getter},
  {"%define-props", PVAR, NULL},
  {"fun-name-setter", CVAR, &Yfun_name_setter},
  {"%gen-cache-missable?-setter", PVAR, NULL},
  {"prop-value-setter", CVAR, &Yprop_value_setter},
  {"df", PVAR, NULL},
  {"%union", PVAR, NULL},
  {"t*", CVAR, &YtT},
  {"%vm-fun-env-fab", PVAR, NULL},
  {"prop-init", CVAR, &Yprop_init},
  {"narity-error", CVAR, &Ynarity_error},
  {"<env>", CVAR, &YLenvG},
  {"fun-refs-setter", CVAR, &Yfun_refs_setter},
  {"rep", PVAR, NULL},
  {"%prop-getter", PVAR, NULL},
  {"%@subclass?", PVAR, NULL},
  {"<any>", CVAR, &YLanyG},
  {"%prop-getter-setter", PVAR, NULL},
  {"%classes-ready?", CVAR, &YPclasses_readyQ},
  {"%gen-src", PVAR, NULL},
  {"esc", PVAR, NULL},
  {"fun-spec", CVAR, &Yfun_spec},
  {"%f<", PVAR, NULL},
  {"fun-cache-setter", CVAR, &Yfun_cache_setter},
  {"%sig-unification-vars", PVAR, NULL},
  {"%rev!", PVAR, NULL},
  {"@any?", CVAR, &YOanyQ},
  {"%relt", PVAR, NULL},
  {"error", CVAR, &Yerror},
  {"%telt", PVAR, NULL},
  {"@olen", PVAR, NULL},
  {"prop-value-at-setter", PVAR, NULL},
  {"sig-val", CVAR, &Ysig_val},
  {"dg", PVAR, NULL},
  {"%met-code-setter", PVAR, NULL},
  {"%os-val", PVAR, NULL},
  {"%elt-setter", PVAR, NULL},
  {"*report-prop-unbound-errors?*", CVAR, &YTreport_prop_unbound_errorsQT},
  {"fun-unification-vars-setter", CVAR, &Yfun_unification_vars_setter},
  {"%create-directory", PVAR, NULL},
  {"%fixnum", PVAR, NULL},
  {"%prop-dat-at", PVAR, NULL},
  {"fun-name", CVAR, &Yfun_name},
  {"%file-mtime", PVAR, NULL},
  {"%compute-ancestors", PVAR, NULL},
  {"unknown-function-error", CVAR, &Yunknown_function_error},
  {"%gen-cache-singletons-setter", PVAR, NULL},
  {"@tany?", CVAR, &YOtanyQ},
  {"%class-id-setter", PVAR, NULL},
  {"<opts-tup>", CVAR, &YLopts_tupG},
  {"fab-gen", CVAR, &Yfab_gen},
  {"%prop-elt", PVAR, NULL},
  {"fun-names", CVAR, &Yfun_names},
  {"%tag-bits", PVAR, NULL},
  {"fun-refs", CVAR, &Yfun_refs},
  {"%prop", CVAR, &YPprop},
  {"range-error", CVAR, &Yrange_error},
  {"dc", PVAR, NULL},
  {"%vm-with-exit", PVAR, NULL},
  {"fun-cache", CVAR, &Yfun_cache},
  {"@rev", CVAR, &YOrev},
  {"%early-dispatch", CVAR, &YPearly_dispatch},
  {"quasiquote", PVAR, NULL},
  {"%class-parents", PVAR, NULL},
  {"opts-location", CVAR, &Yopts_location},
  {"*macros-ok?*", CVAR, &YTmacros_okQT},
  {"%opts-location", PVAR, NULL},
  {"src-loc-file-setter", CVAR, &Ysrc_loc_file_setter},
  {"ord-app-mets*", CVAR, &Yord_app_metsT},
  {"@mets-subclasses-at", CVAR, &YOmets_subclasses_at},
  {"property-not-found-error", CVAR, &Yproperty_not_found_error},
  {"%prop-elt-setter", PVAR, NULL},
  {"sym-name-setter", CVAR, &Ysym_name_setter},
  {"<replace-generic-restart>", CVAR, &YLreplace_generic_restartG},
  {"%f*", PVAR, NULL},
  {"---main-12---", PVAR, NULL},
  {"prop-bound?", CVAR, &Yprop_boundQ},
  {"%flo-bits", PVAR, NULL},
  {"%rep!", PVAR, NULL},
  {"%fp-reg-setter", PVAR, NULL},
  {"%sig-nary?-setter", PVAR, NULL},
  {"@lst", CVAR, &YOlst},
  {"order-specs", CVAR, &Yorder_specs},
  {"<opts>", CVAR, &YLoptsG},
  {"fun-unification-vars", CVAR, &Yfun_unification_vars},
  {"class-parents-setter", CVAR, &Yclass_parents_setter},
  {"%class-ancestors-setter", PVAR, NULL},
  {"<specs>", CVAR, &YLspecsG},
  {"type-object", CVAR, &Ytype_object},
  {"isa?", CVAR, &YisaQ},
  {"product-elts", CVAR, &Yproduct_elts},
  {"%finalize-props!", CVAR, &YPfinalize_propsX},
  {"quote", PVAR, NULL},
  {"order-mets", CVAR, &Yorder_mets},
  {"%gen-cache-arg-pos-setter", PVAR, NULL},
  {"use/include", PVAR, NULL},
  {"@fun-mets-setter", CVAR, &YOfun_mets_setter},
  {"ct", PVAR, NULL},
  {"%type-class", PVAR, NULL},
  {"class-props-setter", CVAR, &Yclass_props_setter},
  {"%true", CVAR, &YPtrue},
  {"$tag-msk", PVAR, NULL},
  {"*boot-macro-names*", CVAR, &YTboot_macro_namesT},
  {"@singleton-spec?", CVAR, &YOsingleton_specQ},
  {"---main-14---", PVAR, NULL},
  {"src-loc-file", CVAR, &Ysrc_loc_file},
  {"%empty?", PVAR, NULL},
  {"---main-11---", PVAR, NULL},
  {"%trace-on", PVAR, NULL},
  {"opts-location-setter", CVAR, &Yopts_location_setter},
  {"@fill", CVAR, &YOfill},
  {"%raw-call", PVAR, NULL},
  {"sym-name", CVAR, &Ysym_name},
  {"%f/", PVAR, NULL},
  {"class-direct-props", CVAR, &Yclass_direct_props},
  {"%sig-unification-vars-setter", PVAR, NULL},
  {"%class-name", PVAR, NULL},
  {"%class", PVAR, NULL},
  {"%sig", PVAR, NULL},
  {"type-error", CVAR, &Ytype_error},
  {"*boot-macro-module-names*", CVAR, &YTboot_macro_module_namesT},
  {"%tu", PVAR, NULL},
  {"class-parents", CVAR, &Yclass_parents},
  {"%type-class-setter", PVAR, NULL},
  {"%patch-early-generic", CVAR, &YPpatch_early_generic},
  {"%macro", PVAR, NULL},
  {"use/export", PVAR, NULL},
  {"%str!", PVAR, NULL},
  {"@class<", CVAR, &YOclassL},
  {"class-props", CVAR, &Yclass_props},
  {"%product", PVAR, NULL},
  {"%gen-sig", PVAR, NULL},
  {"$gen-cache-classes-offset", CVAR, &YDgen_cache_classes_offset},
  {"%%macro", CVAR, &YPPmacro},
  {"%define-setter", PVAR, NULL},
  {"---main-2---", PVAR, NULL},
  {"@oelt-setter", PVAR, NULL},
  {"finalize-props", CVAR, &Yfinalize_props},
  {"%fu", PVAR, NULL},
  {"%int", PVAR, NULL},
  {"%next-methods", PVAR, NULL},
  {"%met-env-setter", PVAR, NULL},
  {"%met-sig", PVAR, NULL},
  {"init-class", CVAR, &Yinit_class},
  {"@len", PVAR, NULL},
  {"@opts-as-lst", CVAR, &YOopts_as_lst},
  {"%symbols", CVAR, &YPsymbols},
  {"%product-elts", PVAR, NULL},
  {"%fsqrt", PVAR, NULL},
  {"%c<", PVAR, NULL},
  {"$missed-dispatch", CVAR, &YDmissed_dispatch},
  {"%collect-direct-props", CVAR, &YPcollect_direct_props},
  {"class-mets-setter", CVAR, &Yclass_mets_setter},
  {"met-app?", CVAR, &Ymet_appQ},
  {"%object-class-setter", PVAR, NULL},
  {"gen-lookup", PVAR, NULL},
  {"%opts-tup-count-setter", PVAR, NULL},
  {"@fun-mets", CVAR, &YOfun_mets},
  {"%fasin", PVAR, NULL},
  {"@new", CVAR, &YOnew},
  {"---main-6---", PVAR, NULL},
  {"%tail", PVAR, NULL},
  {"<class>", CVAR, &YLclassG},
  {"%update-instance-for-changed-class", PVAR, NULL},
  {"class-id-setter", CVAR, &Yclass_id_setter},
  {"@specd-args", CVAR, &YOspecd_args},
  {"%class-props-setter", PVAR, NULL},
  {"%src-loc-file-setter", PVAR, NULL},
  {"%fb", PVAR, NULL},
  {"%fun-reg", PVAR, NULL},
  {"prop-value", CVAR, &Yprop_value},
  {"%class-prop-len-setter", PVAR, NULL},
  {"del-class", CVAR, &Ydel_class},
  {"%it/", PVAR, NULL},
  {"fun-val-setter", CVAR, &Yfun_val_setter},
  {"%tlen", PVAR, NULL},
  {"type-class-setter", CVAR, &Ytype_class_setter},
  {"%dispatch", CVAR, &YPdispatch},
  {"%loc-off-setter", PVAR, NULL},
  {"%class-mets-setter", PVAR, NULL},
  {"%class-row-setter", PVAR, NULL},
  {"%bb", PVAR, NULL},
  {"%sig-specs", PVAR, NULL},
  {"%os-val-setter", PVAR, NULL},
  {"cond", PVAR, NULL},
  {"%src-loc", PVAR, NULL},
  {"%eq?", PVAR, NULL},
  {"prop-owner-setter", CVAR, &Yprop_owner_setter},
  {"keyboard-interrupt", CVAR, &Ykeyboard_interrupt},
  {"%newline", PVAR, NULL},
  {"%flog", PVAR, NULL},
  {"%vfp", PVAR, NULL},
  {"<type>", CVAR, &YLtypeG},
  {"%gen-cache-count-setter", PVAR, NULL},
  {"%prop-offset", CVAR, &YPprop_offset},
  {"*early-classes*", CVAR, &YTearly_classesT},
  {"class-mets", CVAR, &Yclass_mets},
  {"%dyn-var-val", PVAR, NULL},
  {"$getter-not-found", CVAR, &YDgetter_not_found},
  {"%clone", PVAR, NULL},
  {"%app-args", PVAR, NULL},
  {"gen-cache-arg-pos-setter", CVAR, &Ygen_cache_arg_pos_setter},
  {"%define-accessor", PVAR, NULL},
  {"%loc-val-setter", PVAR, NULL},
  {"<gen>", CVAR, &YLgenG},
  {"@mets-singletons-at", CVAR, &YOmets_singletons_at},
  {"nul-prop", CVAR, &Ynul_prop},
  {"%met-code", PVAR, NULL},
  {"macro-expand", PVAR, NULL},
  {"class-id", CVAR, &Yclass_id},
  {"%class-prop-len", PVAR, NULL},
  {"sig-names-setter", CVAR, &Ysig_names_setter},
  {"%loc-val", PVAR, NULL},
  {"@order-specs", CVAR, &YOorder_specs},
  {"%ready?", PVAR, NULL},
  {"%elt", PVAR, NULL},
  {"%file-exists?", PVAR, NULL},
  {"%i!", PVAR, NULL},
  {"type-class", CVAR, &Ytype_class},
  {"@fold", CVAR, &YOfold},
  {"method-accessor-offset", CVAR, &Ymethod_accessor_offset},
  {"---main-7---", PVAR, NULL},
  {"%*start-running-at*", CVAR, &YPTstart_running_atT},
  {"%process-module", PVAR, NULL},
  {"sig-arity-setter", CVAR, &Ysig_arity_setter},
  {"let", PVAR, NULL},
  {"%class-direct-props", PVAR, NULL},
  {"$min-int", CVAR, &YDmin_int},
  {"@fun-unification-vars", CVAR, &YOfun_unification_vars},
  {"@elt", CVAR, &YOelt},
  {"prop-owner", CVAR, &Yprop_owner},
  {"%gen-code", PVAR, NULL},
  {"prop-type-setter", CVAR, &Yprop_type_setter},
  {"---main-1---", PVAR, NULL},
  {"<sym>", CVAR, &YLsymG},
  {"@telt", PVAR, NULL},
  {"%i>>>", PVAR, NULL},
  {"%singleton", PVAR, NULL},
  {"%prop-unbound-error", CVAR, &YPprop_unbound_error},
  {"---main-10---", PVAR, NULL},
  {"find-getter", CVAR, &Yfind_getter},
  {"gen-cache-arg-pos", CVAR, &Ygen_cache_arg_pos},
  {"class-ordered-props", CVAR, &Yclass_ordered_props},
  {"$num-int-bits", CVAR, &YDnum_int_bits},
  {"fun-val", CVAR, &Yfun_val},
  {"%false", CVAR, &YPfalse},
  {"%subclass", PVAR, NULL},
  {"choose-methods", CVAR, &Ychoose_methods},
  {"%loc-off", PVAR, NULL},
  {"%prop-owner-setter", PVAR, NULL},
  {"sig-names", CVAR, &Ysig_names},
  {"%selt", PVAR, NULL},
  {"dm", PVAR, NULL},
  {"new", CVAR, &Ynew},
  {"%force-out", PVAR, NULL},
  {"%opts-tup", PVAR, NULL},
  {"%selt-setter", PVAR, NULL},
  {"<str>", CVAR, &YLstrG},
  {"%gen-cache-arg-pos", PVAR, NULL},
  {"fun-names-setter", CVAR, &Yfun_names_setter},
  {"fun-specs-setter", CVAR, &Yfun_specs_setter},
  {"sig-arity", CVAR, &Ysig_arity},
  {"fun-code-setter", CVAR, &Yfun_code_setter},
  {"%gen-refs", PVAR, NULL},
  {"%telt-setter", PVAR, NULL},
  {"%untag-into", PVAR, NULL},
  {"@gen-cache-singletons", CVAR, &YOgen_cache_singletons},
  {"when", PVAR, NULL},
  {"%class-direct-props-setter", PVAR, NULL},
  {"prop-type", CVAR, &Yprop_type},
  {"@subclass-spec?", CVAR, &YOsubclass_specQ},
  {"handler-info-message", CVAR, &Yhandler_info_message},
  {"%met-name-setter", PVAR, NULL},
  {"@tail-setter", PVAR, NULL},
  {"%opts-tup-count", PVAR, NULL},
  {"fun-env-setter", CVAR, &Yfun_env_setter},
  {"---main-15---", PVAR, NULL},
  {"<body>", CVAR, &YLbodyG},
  {"%su", PVAR, NULL},
  {"@cat2", CVAR, &YOcat2},
  {"@del-dups", CVAR, &YOdel_dups},
  {"@fun-val", CVAR, &YOfun_val},
  {"%fcos", PVAR, NULL},
  {"%union-elts-setter", PVAR, NULL},
  {"dv", PVAR, NULL},
  {"fun-mets-setter", CVAR, &Yfun_mets_setter},
  {"opts-tup-storage", CVAR, &Yopts_tup_storage},
  {"%class-ancestors", PVAR, NULL},
  {"<seq>", CVAR, &YLseqG},
  {"%ru", PVAR, NULL},
  {"<tup>", CVAR, &YLtupG},
  {"%raw-met-call", PVAR, NULL},
  {"dl", PVAR, NULL},
  {"$max-classes", CVAR, &YDmax_classes},
  {"%lst", PVAR, NULL},
  {"%opts", PVAR, NULL},
  {"gen-src-setter", CVAR, &Ygen_src_setter},
  {"%gen-cache-classes", PVAR, NULL},
  {"tup", CVAR, &Ytup},
  {"%sb", PVAR, NULL},
  {"fun-code", CVAR, &Yfun_code},
  {"@do-descendents", CVAR, &YOdo_descendents},
  {"%fatan", PVAR, NULL},
  {"@class-direct-props", CVAR, &YOclass_direct_props},
  {"%i>>", PVAR, NULL},
  {"<met>", CVAR, &YLmetG},
  {"<flat>", CVAR, &YLflatG},
  {"fun-env", CVAR, &Yfun_env},
  {"@gen-cache-classes-setter", CVAR, &YOgen_cache_classes_setter},
  {"%ft", PVAR, NULL},
  {"%define-parents", PVAR, NULL},
  {"@isa?", CVAR, &YOisaQ},
  {"%gen", PVAR, NULL},
  {"%build-runtime-modules", PVAR, NULL},
  {"%define-primitives", PVAR, NULL},
  {"%i<", PVAR, NULL},
  {"%unlink-stack", PVAR, NULL},
  {"fun-mets", CVAR, &Yfun_mets},
  {"fab-sym", CVAR, &Yfab_sym},
  {"%i&", PVAR, NULL},
  {"gen-src", CVAR, &Ygen_src},
  {"%gen-cache-count", PVAR, NULL},
  {"fun-arity-setter", CVAR, &Yfun_arity_setter},
  {"%opts-tup-tup", PVAR, NULL},
  {"@mets-specs-at", CVAR, &YOmets_specs_at},
  {"@fab", CVAR, &YOfab},
  {"%f+", PVAR, NULL},
  {"%i<<", PVAR, NULL},
  {"%sym-nam-setter", PVAR, NULL},
  {"class-of", CVAR, &Yclass_of},
  {"%put", PVAR, NULL},
  {"@add-new", PVAR, NULL},
  {"%tup", PVAR, NULL},
  {"@all2?", CVAR, &YOall2Q},
  {"fun", PVAR, NULL},
  {"@lst-helper", CVAR, &YOlst_helper},
  {"%unexec", PVAR, NULL},
  {"%vm-fun-env-elt", PVAR, NULL},
  {"tail-setter", CVAR, &Ytail_setter},
  {"%relt-setter", PVAR, NULL},
  {"%rep", PVAR, NULL},
  {"set", PVAR, NULL},
  {"%chr", PVAR, NULL},
  {"@subclass?", PVAR, NULL},
  {"%head-setter", PVAR, NULL},
  {"prop-offset", CVAR, &Yprop_offset},
  {"%define-hierarchy", PVAR, NULL},
  {"%current-out-port", PVAR, NULL},
  {"@fun-arity", CVAR, &YOfun_arity},
  {"%puts", PVAR, NULL},
  {"%met-src-setter", PVAR, NULL},
  {"class-name-setter", CVAR, &Yclass_name_setter},
  {"%fc", PVAR, NULL},
  {"%ib", PVAR, NULL},
  {"<lst>", CVAR, &YLlstG},
  {"%prop-type-setter", PVAR, NULL},
  {"<mets>", CVAR, &YLmetsG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"clone", NULL},
  {"prop-value", NULL},
  {"unexec", NULL},
  {"<fun>", NULL},
  {"%i<<<", NULL},
  {"%ftanh", NULL},
  {"esc", NULL},
  {"*restarts-ok?*", NULL},
  {"class-direct-props", NULL},
  {"<int>", NULL},
  {"no-applicable-methods-error", NULL},
  {"<seq!>", NULL},
  {"tail", NULL},
  {"%met", NULL},
  {"class-name", NULL},
  {"assert-error", NULL},
  {"use/mangle", NULL},
  {"class-ancestors", NULL},
  {"bound?", NULL},
  {"<seq.>", NULL},
  {"*boot-macro-names*", NULL},
  {"internal-error", NULL},
  {"*boot-macro-expanders*", NULL},
  {"%i+", NULL},
  {"try", NULL},
  {"src-loc-line", NULL},
  {"%vsp-setter", NULL},
  {"%facos", NULL},
  {"%raw", NULL},
  {"%iv", NULL},
  {"%vm-fun-env-elt-setter", NULL},
  {"seq", NULL},
  {"handler-info-arguments", NULL},
  {"%str", NULL},
  {"arity-error", NULL},
  {"%get", NULL},
  {"%vnm-setter", NULL},
  {"ddv", NULL},
  {"%fcosh", NULL},
  {"%met-env-setter", NULL},
  {"@oelt", NULL},
  {"%i*", NULL},
  {"if", NULL},
  {"<sig>", NULL},
  {"object-parents", NULL},
  {"%fab-dyn-var", NULL},
  {"file-opening-error", NULL},
  {"%vm-box-val-setter", NULL},
  {"<col.>", NULL},
  {"%do-stack-frames", NULL},
  {"@tlen", NULL},
  {"use/library", NULL},
  {"$max-int", NULL},
  {"%lb", NULL},
  {"incongruent-method-error", NULL},
  {"%fatan2", NULL},
  {"ds", NULL},
  {"%vsp", NULL},
  {"<col>", NULL},
  {"type-object", NULL},
  {"%to-tup", NULL},
  {"%pair", NULL},
  {"%close-out-port", NULL},
  {"%check-call-types", NULL},
  {"sig-nary?", NULL},
  {"fin", NULL},
  {"%vfn", NULL},
  {"<rep>", NULL},
  {"%i^", NULL},
  {"object-props", NULL},
  {"new", NULL},
  {"fun-nary?", NULL},
  {"fun-src-setter", NULL},
  {"gen-add-met", NULL},
  {"gen-refs-setter", NULL},
  {"<loc>", NULL},
  {"sig-unification-vars", NULL},
  {"$direct-object-class", NULL},
  {"fun-sig", NULL},
  {"%open-out-file", NULL},
  {"%cb", NULL},
  {"%vm-box-fab", NULL},
  {"fun-src", NULL},
  {"return-type-error", NULL},
  {"<flo>", NULL},
  {"@+", NULL},
  {"gen-refs", NULL},
  {"%vpc", NULL},
  {"%vpc-setter", NULL},
  {"%vfp-setter", NULL},
  {"find-setter", NULL},
  {"ct-also", NULL},
  {"%fsinh", NULL},
  {"property-type-error", NULL},
  {"head-setter", NULL},
  {"syntax-error", NULL},
  {"def", NULL},
  {"%c=", NULL},
  {"export", NULL},
  {"%f=", NULL},
  {"<prop>", NULL},
  {"%sp-reg-setter", NULL},
  {"%i=", NULL},
  {"mif", NULL},
  {"property-unbound-error", NULL},
  {"%app-filename", NULL},
  {"%f-", NULL},
  {"@<", NULL},
  {"%snul", NULL},
  {"head", NULL},
  {"%vnm", NULL},
  {"%time", NULL},
  {"%invoke-debugger", NULL},
  {"<num>", NULL},
  {"%fi2f", NULL},
  {"%rnul", NULL},
  {"not", NULL},
  {"%gen-code-setter", NULL},
  {"<product>", NULL},
  {"%cu", NULL},
  {"%close-in-port", NULL},
  {"%@class-of", NULL},
  {"no-next-methods-error", NULL},
  {"%ftan", NULL},
  {"%current-in-port", NULL},
  {"%with-monitor", NULL},
  {"%allocate-stack", NULL},
  {"fun-specs", NULL},
  {"%dyn-var-val-setter", NULL},
  {"<union>", NULL},
  {"<src-loc>", NULL},
  {"%peek", NULL},
  {"use", NULL},
  {"dss", NULL},
  {"nul", NULL},
  {"%vfp", NULL},
  {"class-children", NULL},
  {"%binding-name", NULL},
  {"%vm-box-val", NULL},
  {"%file-type", NULL},
  {"<simple-handler-info>", NULL},
  {"<chr>", NULL},
  {"%sp-reg", NULL},
  {"object-class", NULL},
  {"%%sym", NULL},
  {"<subclass>", NULL},
  {"%lu", NULL},
  {"argument-type-error", NULL},
  {"%fpow", NULL},
  {"union-elts", NULL},
  {"<fixnum>", NULL},
  {"%untag", NULL},
  {"%open-in-file", NULL},
  {"<mag>", NULL},
  {"ord-app-mets", NULL},
  {"%im", NULL},
  {"%slen", NULL},
  {"@not", NULL},
  {"fab-class", NULL},
  {"arithmetic-error", NULL},
  {"%eof-object", NULL},
  {"%rlen", NULL},
  {"%fb", NULL},
  {"%class-of", NULL},
  {"dp", NULL},
  {"loc", NULL},
  {"%@subclass?", NULL},
  {"<singleton>", NULL},
  {"as-error", NULL},
  {"%i?", NULL},
  {"<log>", NULL},
  {"sig-specs", NULL},
  {"%vm-with-cleanup", NULL},
  {"add-prop", NULL},
  {"prop-getter", NULL},
  {"fun-name-setter", NULL},
  {"%i-", NULL},
  {"prop-value-setter", NULL},
  {"df", NULL},
  {"t*", NULL},
  {"%vm-fun-env-fab", NULL},
  {"%selt-setter", NULL},
  {"fun-refs-setter", NULL},
  {"rep", NULL},
  {"<any>", NULL},
  {"%gen-src", NULL},
  {"cpl-error", NULL},
  {"%f<", NULL},
  {"@any?", NULL},
  {"error", NULL},
  {"%telt", NULL},
  {"@olen", NULL},
  {"sig-val", NULL},
  {"dg", NULL},
  {"%os-val", NULL},
  {"*report-prop-unbound-errors?*", NULL},
  {"%create-directory", NULL},
  {"fun-name", NULL},
  {"%file-mtime", NULL},
  {"unknown-function-error", NULL},
  {"narity-error", NULL},
  {"fab-gen", NULL},
  {"fun-names", NULL},
  {"fun-refs", NULL},
  {"%prop", NULL},
  {"range-error", NULL},
  {"dc", NULL},
  {"%vm-with-exit", NULL},
  {"fun-cache", NULL},
  {"quasiquote", NULL},
  {"*macros-ok?*", NULL},
  {"fun-sig-setter", NULL},
  {"fun-mets", NULL},
  {"ambiguous-method-error", NULL},
  {"property-not-found-error", NULL},
  {"prop-setter", NULL},
  {"prop-init", NULL},
  {"sig-names", NULL},
  {"<replace-generic-restart>", NULL},
  {"%f*", NULL},
  {"prop-bound?", NULL},
  {"%flo-bits", NULL},
  {"@lst", NULL},
  {"<opts>", NULL},
  {"nil", NULL},
  {"isa?", NULL},
  {"product-elts", NULL},
  {"may-isa?", NULL},
  {"quote", NULL},
  {"use/include", NULL},
  {"ct", NULL},
  {"src-loc-file", NULL},
  {"%raw-call", NULL},
  {"sym-name", NULL},
  {"%f/", NULL},
  {"%define-method", NULL},
  {"subtype?", NULL},
  {"type-error", NULL},
  {"*boot-macro-module-names*", NULL},
  {"class-parents", NULL},
  {"<seq>", NULL},
  {"use/export", NULL},
  {"class-props", NULL},
  {"%%macro", NULL},
  {"%fu", NULL},
  {"%next-methods", NULL},
  {"@len", NULL},
  {"%symbols", NULL},
  {"%fsqrt", NULL},
  {"%c<", NULL},
  {"met-app?", NULL},
  {"%fasin", NULL},
  {"<class>", NULL},
  {"lst", NULL},
  {"%os-name", NULL},
  {"%fun-reg", NULL},
  {"%it/", NULL},
  {"%tlen", NULL},
  {"%dispatch", NULL},
  {"%iu", NULL},
  {"%loc-off-setter", NULL},
  {"%bb", NULL},
  {"%os-val-setter", NULL},
  {"%src-loc", NULL},
  {"%eq?", NULL},
  {"keyboard-interrupt", NULL},
  {"%flog", NULL},
  {"<type>", NULL},
  {"%dyn-var-val", NULL},
  {"%app-args", NULL},
  {"%loc-val-setter", NULL},
  {"%met-code", NULL},
  {"macro-expand", NULL},
  {"%loc-val", NULL},
  {"%ready?", NULL},
  {"%file-exists?", NULL},
  {"%i!", NULL},
  {"type-class", NULL},
  {"%relt", NULL},
  {"%process-module", NULL},
  {"let", NULL},
  {"$min-int", NULL},
  {"prop-owner", NULL},
  {"%gen-code", NULL},
  {"<sym>", NULL},
  {"@telt", NULL},
  {"%i>>>", NULL},
  {"%prop-unbound-error", NULL},
  {"find-getter", NULL},
  {"fun-val", NULL},
  {"%loc-off", NULL},
  {"@isa?", NULL},
  {"%selt", NULL},
  {"dm", NULL},
  {"%force-out", NULL},
  {"<str>", NULL},
  {"fun-arity", NULL},
  {"sig-arity", NULL},
  {"%gen-refs", NULL},
  {"%telt-setter", NULL},
  {"%fsin", NULL},
  {"prop-type", NULL},
  {"handler-info-message", NULL},
  {"%vfn-setter", NULL},
  {"%su", NULL},
  {"@opts-as-lst", NULL},
  {"%fcos", NULL},
  {"dv", NULL},
  {"stack-overflow-error", NULL},
  {"<col!>", NULL},
  {"<met>", NULL},
  {"<gen>", NULL},
  {"%raw-met-call", NULL},
  {"<tup>", NULL},
  {"dl", NULL},
  {"@==", NULL},
  {"gen-src-setter", NULL},
  {"tup", NULL},
  {"%sb", NULL},
  {"%fatan", NULL},
  {"%i>>", NULL},
  {"<flat>", NULL},
  {"%ft", NULL},
  {"%build-runtime-modules", NULL},
  {"%i<", NULL},
  {"%unlink-stack", NULL},
  {"fab-sym", NULL},
  {"%i&", NULL},
  {"gen-src", NULL},
  {"%f+", NULL},
  {"%i<<", NULL},
  {"class-of", NULL},
  {"%put", NULL},
  {"%tup", NULL},
  {"%tnul", NULL},
  {"@all2?", NULL},
  {"fun", NULL},
  {"%vm-fun-env-elt", NULL},
  {"tail-setter", NULL},
  {"%relt-setter", NULL},
  {"%rep", NULL},
  {"set", NULL},
  {"@subclass?", NULL},
  {"%current-out-port", NULL},
  {"%puts", NULL},
  {"%ib", NULL},
  {"<lst>", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSboot;
MODULE_INFO module_info_gooSboot = {
  "goo/boot",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */


/* EXPRESSION: */

extern void load_module_gooSboot (void);

void load_module_gooSboot (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;

  (P)Y___main_0___();
  (P)Y___main_1___();
  (P)Y___main_2___();
  (P)Y___main_3___();
  (P)Y___main_4___();
  (P)Y___main_5___();
  (P)Y___main_6___();
  (P)Y___main_7___();
  (P)Y___main_8___();
  (P)Y___main_9___();
  (P)Y___main_10___();
  (P)Y___main_11___();
  (P)Y___main_12___();
  (P)Y___main_13___();
  (P)Y___main_14___();
  (P)Y___main_15___();

}

/* END OF GENERATED CODE. */
