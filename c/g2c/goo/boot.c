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
DEF(Ygen_lookup_miss,"goo/boot","gen-lookup-miss");
DEF(YOgen_cache_classes,"goo/boot","@gen-cache-classes");
DEF(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YLseqXG,"goo/boot","<seq!>");
DEF(YDgetter_not_found,"goo/boot","$getter-not-found");
DEF(Ytail,"goo/boot","tail");
DEF(Yopts_tup_storage_setter,"goo/boot","opts-tup-storage-setter");
DEF(Yfun_arity,"goo/boot","fun-arity");
DEF(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(Yclass_name,"goo/boot","class-name");
DEF(YDmin_int,"goo/boot","$min-int");
DEF(Yassert_error,"goo/boot","assert-error");
DEF(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YDmax_classes,"goo/boot","$max-classes");
DEF(YLseqIG,"goo/boot","<seq.>");
DEF(Yensure_fresh_object,"goo/boot","ensure-fresh-object");
DEF(Yinternal_error,"goo/boot","internal-error");
DEF(YOfun_naryQ,"goo/boot","@fun-nary?");
DEF(YLspecsG,"goo/boot","<specs>");
DEF(Yopts_tup_storage,"goo/boot","opts-tup-storage");
DEF(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YOorder_specs_class,"goo/boot","@order-specs-class");
DEF(YLseqG,"goo/boot","<seq>");
DEF(Yclass_type_cache_setter,"goo/boot","class-type-cache-setter");
DEF(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(Ytype_object_setter,"goo/boot","type-object-setter");
DEF(YLbodyG,"goo/boot","<body>");
DEF(Yproduct_elts_setter,"goo/boot","product-elts-setter");
DEF(YPdefine_method,"goo/boot","%define-method");
DEF(Yarity_error,"goo/boot","arity-error");
DEF(YOfun_mets_setter,"goo/boot","@fun-mets-setter");
DEF(YLcolXG,"goo/boot","<col!>");
DEF(YOgen_cache_singletons_setter,"goo/boot","@gen-cache-singletons-setter");
DEF(Yclass_gens,"goo/boot","class-gens");
DEF(Ygen_cache_missableQ_setter,"goo/boot","gen-cache-missable?-setter");
DEF(YLsigG,"goo/boot","<sig>");
DEF(YOalter,"goo/boot","@alter");
DEF(Yclass_type_cache,"goo/boot","class-type-cache");
DEF(YDgen_cache_singletons_offset,"goo/boot","$gen-cache-singletons-offset");
DEF(Ygen_cache_classes_setter,"goo/boot","gen-cache-classes-setter");
DEF(Yobject_parents,"goo/boot","object-parents");
DEF(YOfun_specs,"goo/boot","@fun-specs");
DEF(YOallQ,"goo/boot","@all?");
DEF(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(Yfun_naryQ_setter,"goo/boot","fun-nary?-setter");
DEF(Ytype_object,"goo/boot","type-object");
DEF(YLcolIG,"goo/boot","<col.>");
DEF(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(Yproduct_elts,"goo/boot","product-elts");
DEF(Yprop_setter_setter,"goo/boot","prop-setter-setter");
DEF(YOdel_dups,"goo/boot","@del-dups");
DEF(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(YOprune_mets_by_type_at,"goo/boot","@prune-mets-by-type-at");
DEF(YLparentsG,"goo/boot","<parents>");
DEF(YLcolG,"goo/boot","<col>");
DEF(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(Ygen_cache_classes,"goo/boot","gen-cache-classes");
DEF(YOgen_cache_singletons,"goo/boot","@gen-cache-singletons");
DEF(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(YDgen_cache_classes_offset,"goo/boot","$gen-cache-classes-offset");
DEF(YLrepG,"goo/boot","<rep>");
DEF(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(Yobject_props,"goo/boot","object-props");
DEF(Ynul,"goo/boot","nul");
DEF(YOfun_names,"goo/boot","@fun-names");
DEF(YPtrue,"goo/boot","%true");
DEF(YOrevX,"goo/boot","@rev!");
DEF(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YDmissed_dispatch,"goo/boot","$missed-dispatch");
DEF(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(Ygen_from_met,"goo/boot","gen-from-met");
DEF(YOdo,"goo/boot","@do");
DEF(YLlocG,"goo/boot","<loc>");
DEF(YPadd_prop,"goo/boot","%add-prop");
DEF(YOcache_add,"goo/boot","@cache-add");
DEF(YPfalse,"goo/boot","%false");
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
DEF(YDmax_int,"goo/boot","$max-int");
DEF(YOOemptyQ,"goo/boot","@@empty?");
DEF(YLfixnumG,"goo/boot","<fixnum>");
DEF(Yproperty_type_error,"goo/boot","property-type-error");
DEF(Yhead_setter,"goo/boot","head-setter");
DEF(YOgen_cache_arg_pos_setter,"goo/boot","@gen-cache-arg-pos-setter");
DEF(Ysyntax_error,"goo/boot","syntax-error");
DEF(YOsubtypeQ,"goo/boot","@subtype?");
DEF(Yclass_ordered_ancestors,"goo/boot","class-ordered-ancestors");
DEF(YOmemQ,"goo/boot","@mem?");
DEF(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DEF(Ynil,"goo/boot","nil");
DEF(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
DEF(YLpropG,"goo/boot","<prop>");
DEF(Yfun_specs_setter,"goo/boot","fun-specs-setter");
DEF(YLintG,"goo/boot","<int>");
DEF(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(Yfun_congruentQ,"goo/boot","fun-congruent?");
DEF(YOpick,"goo/boot","@pick");
DEF(Ylst,"goo/boot","lst");
DEF(Yhead,"goo/boot","head");
DEF(Yopts_count_setter,"goo/boot","opts-count-setter");
DEF(Yrefab_class,"goo/boot","refab-class");
DEF(Yclass_prop_len,"goo/boot","class-prop-len");
DEF(YLnumG,"goo/boot","<num>");
DEF(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(Ynot,"goo/boot","not");
DEF(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YLproductG,"goo/boot","<product>");
DEF(YOgen_cache_arg_pos,"goo/boot","@gen-cache-arg-pos");
DEF(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YOclass_ancestors,"goo/boot","@class-ancestors");
DEF(Yopts_count,"goo/boot","opts-count");
DEF(Yclass_children_setter,"goo/boot","class-children-setter");
DEF(Yfind_getter,"goo/boot","find-getter");
DEF(Yfun_specs,"goo/boot","fun-specs");
DEF(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(YPadd_met,"goo/boot","%add-met");
DEF(YOfind,"goo/boot","@find");
DEF(YLunionG,"goo/boot","<union>");
DEF(Yclass_row_setter,"goo/boot","class-row-setter");
DEF(YLsrc_locG,"goo/boot","<src-loc>");
DEF(Yord_app_mets_1,"goo/boot","ord-app-mets-1");
DEF(Yunion_elts_setter,"goo/boot","union-elts-setter");
DEF(YOprecise_specQ,"goo/boot","@precise-spec?");
DEF(Ymay_isaQ,"goo/boot","may-isa?");
DEF(Yclass_children,"goo/boot","class-children");
DEF(Yfun_same_metQ,"goo/boot","fun-same-met?");
DEF(Yclass_of,"goo/boot","class-of");
DEF(YOmap,"goo/boot","@map");
DEF(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YLchrG,"goo/boot","<chr>");
DEF(Yclass_forward,"goo/boot","class-forward");
DEF(Ygen_cache_singletons_setter,"goo/boot","gen-cache-singletons-setter");
DEF(Yobject_class,"goo/boot","object-class");
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
DEF(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(Yfab_class,"goo/boot","fab-class");
DEF(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(Yarithmetic_error,"goo/boot","arithmetic-error");
DEF(Yprop_init_setter,"goo/boot","prop-init-setter");
DEF(Yensure_singleton_cache,"goo/boot","ensure-singleton-cache");
DEF(Ycpl_error,"goo/boot","cpl-error");
DEF(YPsymbols_readyQ,"goo/boot","%symbols-ready?");
DEF(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(YsubtypeQ,"goo/boot","subtype?");
DEF(YOOEE,"goo/boot","@@==");
DEF(YLsingletonG,"goo/boot","<singleton>");
DEF(Yfun_names_setter,"goo/boot","fun-names-setter");
DEF(YOunion_specQ,"goo/boot","@union-spec?");
DEF(Yas_error,"goo/boot","as-error");
DEF(YLlogG,"goo/boot","<log>");
DEF(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(Ysig_specs,"goo/boot","sig-specs");
DEF(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(Yprop_getter,"goo/boot","prop-getter");
DEF(YOcat2,"goo/boot","@cat2");
DEF(Ytype_error,"goo/boot","type-error");
DEF(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YtT,"goo/boot","t*");
DEF(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(Yprop_init,"goo/boot","prop-init");
DEF(Ynarity_error,"goo/boot","narity-error");
DEF(Yfun_refs_setter,"goo/boot","fun-refs-setter");
DEF(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YLanyG,"goo/boot","<any>");
DEF(Yfun_spec,"goo/boot","fun-spec");
DEF(Yforward_class,"goo/boot","forward-class");
DEF(Yfun_cache_setter,"goo/boot","fun-cache-setter");
DEF(YOanyQ,"goo/boot","@any?");
DEF(Yerror,"goo/boot","error");
DEF(Yclass_mets_setter,"goo/boot","class-mets-setter");
DEF(Ysig_val,"goo/boot","sig-val");
DEF(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YPsymbols,"goo/boot","%symbols");
DEF(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(Yfun_unification_vars_setter,"goo/boot","fun-unification-vars-setter");
DEF(YPclasses_readyQ,"goo/boot","%classes-ready?");
DEF(Yfun_name,"goo/boot","fun-name");
DEF(YTearly_classesT,"goo/boot","*early-classes*");
DEF(Ynul_prop,"goo/boot","nul-prop");
DEF(YOtanyQ,"goo/boot","@tany?");
DEF(YLopts_tupG,"goo/boot","<opts-tup>");
DEF(Yfab_gen,"goo/boot","fab-gen");
DEF(Yfun_names,"goo/boot","fun-names");
DEF(Yfun_refs,"goo/boot","fun-refs");
DEF(YOsubclass_specQ,"goo/boot","@subclass-spec?");
DEF(YPprop,"goo/boot","%prop");
DEF(Yrange_error,"goo/boot","range-error");
DEF(YLenvG,"goo/boot","<env>");
DEF(Yfun_cache,"goo/boot","fun-cache");
DEF(YOrev,"goo/boot","@rev");
DEF(YPearly_dispatch,"goo/boot","%early-dispatch");
DEF(Yrequires_singleton_prec,"goo/boot","requires-singleton-prec");
DEF(Yopts_location,"goo/boot","opts-location");
DEF(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(Yfun_env,"goo/boot","fun-env");
DEF(Ysrc_loc_file_setter,"goo/boot","src-loc-file-setter");
DEF(Yord_app_metsT,"goo/boot","ord-app-mets*");
DEF(YOmets_subclasses_at,"goo/boot","@mets-subclasses-at");
DEF(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(Yprop_setter,"goo/boot","prop-setter");
DEF(Ysym_name_setter,"goo/boot","sym-name-setter");
DEF(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(YOlst,"goo/boot","@lst");
DEF(YLoptsG,"goo/boot","<opts>");
DEF(Yclass_gens_setter,"goo/boot","class-gens-setter");
DEF(Yclass_parents_setter,"goo/boot","class-parents-setter");
DEF(YPfinalize_propsX,"goo/boot","%finalize-props!");
DEF(Yorder_mets,"goo/boot","order-mets");
DEF(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(YOsingleton_specQ,"goo/boot","@singleton-spec?");
DEF(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(Yopts_location_setter,"goo/boot","opts-location-setter");
DEF(YOfill,"goo/boot","@fill");
DEF(YisaQ,"goo/boot","isa?");
DEF(YPrnul,"goo/boot","%rnul");
DEF(Ysym_name,"goo/boot","sym-name");
DEF(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(Ynew,"goo/boot","new");
DEF(Yclass_parents,"goo/boot","class-parents");
DEF(YOclassL,"goo/boot","@class<");
DEF(Yclass_props,"goo/boot","class-props");
DEF(YPPmacro,"goo/boot","%%macro");
DEF(Yfinalize_props,"goo/boot","finalize-props");
DEF(YTnext_class_idT,"goo/boot","*next-class-id*");
DEF(Yinit_class,"goo/boot","init-class");
DEF(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YPcollect_direct_props,"goo/boot","%collect-direct-props");
DEF(YOfun_mets,"goo/boot","@fun-mets");
DEF(YOnew,"goo/boot","@new");
DEF(YLclassG,"goo/boot","<class>");
DEF(Yclass_id_setter,"goo/boot","class-id-setter");
DEF(YPsnul,"goo/boot","%snul");
DEF(YOspecd_args,"goo/boot","@specd-args");
DEF(Ydel_class,"goo/boot","del-class");
DEF(Yfun_val_setter,"goo/boot","fun-val-setter");
DEF(Ytype_class_setter,"goo/boot","type-class-setter");
DEF(YPdispatch,"goo/boot","%dispatch");
DEF(YLpropsG,"goo/boot","<props>");
DEF(Yprop_owner_setter,"goo/boot","prop-owner-setter");
DEF(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YLtypeG,"goo/boot","<type>");
DEF(YPprop_offset,"goo/boot","%prop-offset");
DEF(Yclass_mets,"goo/boot","class-mets");
DEF(Ygen_cache_arg_pos_setter,"goo/boot","gen-cache-arg-pos-setter");
DEF(YLgenG,"goo/boot","<gen>");
DEF(YOmets_singletons_at,"goo/boot","@mets-singletons-at");
DEF(Yclass_id,"goo/boot","class-id");
DEF(Ysig_names_setter,"goo/boot","sig-names-setter");
DEF(YOorder_specs,"goo/boot","@order-specs");
DEF(Yadd_prop,"goo/boot","add-prop");
DEF(Ytype_class,"goo/boot","type-class");
DEF(YOfold,"goo/boot","@fold");
DEF(Ymethod_accessor_offset,"goo/boot","method-accessor-offset");
DEF(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(Yone_nil,"goo/boot","one-nil");
DEF(YOelt,"goo/boot","@elt");
DEF(Yprop_owner,"goo/boot","prop-owner");
DEF(Yprop_type_setter,"goo/boot","prop-type-setter");
DEF(YPTused_symbols_too_earlyT,"goo/boot","%*used-symbols-too-early*");
DEF(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(Yprop_value,"goo/boot","prop-value");
DEF(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(Yclass_ordered_props,"goo/boot","class-ordered-props");
DEF(Yfun_val,"goo/boot","fun-val");
DEF(Ysig_names,"goo/boot","sig-names");
DEF(YOisaQ,"goo/boot","@isa?");
DEF(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YLstrG,"goo/boot","<str>");
DEF(YPpatch_early_generic,"goo/boot","%patch-early-generic");
DEF(Ysig_arity,"goo/boot","sig-arity");
DEF(Yfun_code_setter,"goo/boot","fun-code-setter");
DEF(Yfun_unification_vars,"goo/boot","fun-unification-vars");
DEF(Ymet_app_unify,"goo/boot","met-app-unify");
DEF(Ymet_appQ,"goo/boot","met-app?");
DEF(YOgen_cache_classes_setter,"goo/boot","@gen-cache-classes-setter");
DEF(Yprop_type,"goo/boot","prop-type");
DEF(YOmets_unspecialized_atQ,"goo/boot","@mets-unspecialized-at?");
DEF(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(Ychoose_methods,"goo/boot","choose-methods");
DEF(Yfun_env_setter,"goo/boot","fun-env-setter");
DEF(YPTstart_running_atT,"goo/boot","%*start-running-at*");
DEF(YPtnul,"goo/boot","%tnul");
DEF(YOfun_unification_vars,"goo/boot","@fun-unification-vars");
DEF(Yfun_mets_setter,"goo/boot","fun-mets-setter");
DEF(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(YLtupG,"goo/boot","<tup>");
DEF(YLsymG,"goo/boot","<sym>");
DEF(YLfunG,"goo/boot","<fun>");
DEF(YOfun_val,"goo/boot","@fun-val");
DEF(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(Ytup,"goo/boot","tup");
DEF(Yorder_specs,"goo/boot","order-specs");
DEF(Yfun_code,"goo/boot","fun-code");
DEF(YOdo_descendents,"goo/boot","@do-descendents");
DEF(YOclass_direct_props,"goo/boot","@class-direct-props");
DEF(YLmetsG,"goo/boot","<mets>");
DEF(YLmetG,"goo/boot","<met>");
DEF(YLflatG,"goo/boot","<flat>");
DEF(YDnum_int_bits,"goo/boot","$num-int-bits");
DEF(YDnul_assocs,"goo/boot","$nul-assocs");
DEF(Yfun_mets,"goo/boot","fun-mets");
DEF(Yfab_sym,"goo/boot","fab-sym");
DEF(Ygen_src,"goo/boot","gen-src");
DEF(Yfun_arity_setter,"goo/boot","fun-arity-setter");
DEF(YOmets_specs_at,"goo/boot","@mets-specs-at");
DEF(YOfab,"goo/boot","@fab");
DEF(YOall2Q,"goo/boot","@all2?");
DEF(YOlst_helper,"goo/boot","@lst-helper");
DEF(Ytail_setter,"goo/boot","tail-setter");
DEF(Yprop_offset,"goo/boot","prop-offset");
DEF(YOfun_arity,"goo/boot","@fun-arity");
DEF(Yclass_name_setter,"goo/boot","class-name-setter");
DEF(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_522);
DEFLIT(lit_15);
DEFLIT(lit_554);
DEFLIT(lit_235);
DEFLIT(lit_60);
DEFLIT(lit_583);
DEFLIT(lit_299);
DEFLIT(lit_620);
DEFLIT(lit_3);
DEFLIT(lit_421);
DEFLIT(lit_342);
DEFLIT(lit_227);
DEFLIT(lit_635);
DEFLIT(lit_38);
DEFLIT(lit_47);
DEFLIT(lit_114);
DEFLIT(lit_558);
DEFLIT(lit_22);
DEFLIT(lit_228);
DEFLIT(lit_284);
DEFLIT(lit_28);
DEFLIT(lit_261);
DEFLIT(lit_49);
DEFLIT(lit_371);
DEFLIT(lit_496);
DEFLIT(lit_43);
DEFLIT(lit_560);
DEFLIT(lit_589);
DEFLIT(lit_608);
DEFLIT(lit_247);
DEFLIT(lit_613);
DEFLIT(lit_192);
DEFLIT(lit_150);
DEFLIT(lit_529);
DEFLIT(lit_283);
DEFLIT(lit_126);
DEFLIT(lit_543);
DEFLIT(lit_362);
DEFLIT(lit_624);
DEFLIT(lit_609);
DEFLIT(lit_92);
DEFLIT(lit_259);
DEFLIT(lit_13);
DEFLIT(lit_400);
DEFLIT(lit_16);
DEFLIT(lit_384);
DEFLIT(lit_504);
DEFLIT(lit_435);
DEFLIT(lit_327);
DEFLIT(lit_147);
DEFLIT(lit_248);
DEFLIT(lit_29);
DEFLIT(lit_72);
DEFLIT(lit_250);
DEFLIT(lit_426);
DEFLIT(lit_190);
DEFLIT(lit_187);
DEFLIT(lit_122);
DEFLIT(lit_105);
DEFLIT(lit_172);
DEFLIT(lit_373);
DEFLIT(lit_175);
DEFLIT(lit_467);
DEFLIT(lit_453);
DEFLIT(lit_120);
DEFLIT(lit_581);
DEFLIT(lit_596);
DEFLIT(lit_281);
DEFLIT(lit_433);
DEFLIT(lit_406);
DEFLIT(lit_73);
DEFLIT(lit_61);
DEFLIT(lit_329);
DEFLIT(lit_151);
DEFLIT(lit_520);
DEFLIT(lit_101);
DEFLIT(lit_188);
DEFLIT(lit_328);
DEFLIT(lit_88);
DEFLIT(lit_536);
DEFLIT(lit_538);
DEFLIT(lit_377);
DEFLIT(lit_428);
DEFLIT(lit_166);
DEFLIT(lit_541);
DEFLIT(lit_210);
DEFLIT(lit_360);
DEFLIT(lit_312);
DEFLIT(lit_569);
DEFLIT(lit_494);
DEFLIT(lit_103);
DEFLIT(lit_280);
DEFLIT(lit_202);
DEFLIT(lit_181);
DEFLIT(lit_443);
DEFLIT(lit_118);
DEFLIT(lit_343);
DEFLIT(lit_456);
DEFLIT(lit_594);
DEFLIT(lit_252);
DEFLIT(lit_399);
DEFLIT(lit_408);
DEFLIT(lit_337);
DEFLIT(lit_31);
DEFLIT(lit_618);
DEFLIT(lit_149);
DEFLIT(lit_518);
DEFLIT(lit_629);
DEFLIT(lit_335);
DEFLIT(lit_452);
DEFLIT(lit_86);
DEFLIT(lit_279);
DEFLIT(lit_570);
DEFLIT(lit_479);
DEFLIT(lit_563);
DEFLIT(lit_365);
DEFLIT(lit_164);
DEFLIT(lit_173);
DEFLIT(lit_161);
DEFLIT(lit_203);
DEFLIT(lit_616);
DEFLIT(lit_451);
DEFLIT(lit_361);
DEFLIT(lit_487);
DEFLIT(lit_509);
DEFLIT(lit_39);
DEFLIT(lit_99);
DEFLIT(lit_179);
DEFLIT(lit_196);
DEFLIT(lit_398);
DEFLIT(lit_133);
DEFLIT(lit_381);
DEFLIT(lit_278);
DEFLIT(lit_211);
DEFLIT(lit_465);
DEFLIT(lit_0);
DEFLIT(lit_157);
DEFLIT(lit_539);
DEFLIT(lit_358);
DEFLIT(lit_310);
DEFLIT(lit_297);
DEFLIT(lit_226);
DEFLIT(lit_223);
DEFLIT(lit_607);
DEFLIT(lit_531);
DEFLIT(lit_222);
DEFLIT(lit_431);
DEFLIT(lit_626);
DEFLIT(lit_241);
DEFLIT(lit_578);
DEFLIT(lit_315);
DEFLIT(lit_326);
DEFLIT(lit_277);
DEFLIT(lit_331);
DEFLIT(lit_121);
DEFLIT(lit_194);
DEFLIT(lit_230);
DEFLIT(lit_464);
DEFLIT(lit_351);
DEFLIT(lit_565);
DEFLIT(lit_486);
DEFLIT(lit_69);
DEFLIT(lit_347);
DEFLIT(lit_425);
DEFLIT(lit_209);
DEFLIT(lit_515);
DEFLIT(lit_556);
DEFLIT(lit_10);
DEFLIT(lit_517);
DEFLIT(lit_459);
DEFLIT(lit_420);
DEFLIT(lit_508);
DEFLIT(lit_462);
DEFLIT(lit_224);
DEFLIT(lit_17);
DEFLIT(lit_276);
DEFLIT(lit_610);
DEFLIT(lit_441);
DEFLIT(lit_466);
DEFLIT(lit_56);
DEFLIT(lit_160);
DEFLIT(lit_242);
DEFLIT(lit_24);
DEFLIT(lit_131);
DEFLIT(lit_239);
DEFLIT(lit_112);
DEFLIT(lit_575);
DEFLIT(lit_557);
DEFLIT(lit_401);
DEFLIT(lit_109);
DEFLIT(lit_601);
DEFLIT(lit_308);
DEFLIT(lit_552);
DEFLIT(lit_262);
DEFLIT(lit_265);
DEFLIT(lit_275);
DEFLIT(lit_263);
DEFLIT(lit_144);
DEFLIT(lit_180);
DEFLIT(lit_621);
DEFLIT(lit_410);
DEFLIT(lit_469);
DEFLIT(lit_340);
DEFLIT(lit_40);
DEFLIT(lit_454);
DEFLIT(lit_628);
DEFLIT(lit_158);
DEFLIT(lit_412);
DEFLIT(lit_571);
DEFLIT(lit_117);
DEFLIT(lit_218);
DEFLIT(lit_55);
DEFLIT(lit_19);
DEFLIT(lit_296);
DEFLIT(lit_615);
DEFLIT(lit_274);
DEFLIT(lit_632);
DEFLIT(lit_21);
DEFLIT(lit_378);
DEFLIT(lit_74);
DEFLIT(lit_387);
DEFLIT(lit_471);
DEFLIT(lit_325);
DEFLIT(lit_324);
DEFLIT(lit_52);
DEFLIT(lit_23);
DEFLIT(lit_107);
DEFLIT(lit_256);
DEFLIT(lit_345);
DEFLIT(lit_423);
DEFLIT(lit_537);
DEFLIT(lit_1);
DEFLIT(lit_198);
DEFLIT(lit_273);
DEFLIT(lit_573);
DEFLIT(lit_102);
DEFLIT(lit_182);
DEFLIT(lit_197);
DEFLIT(lit_306);
DEFLIT(lit_53);
DEFLIT(lit_391);
DEFLIT(lit_295);
DEFLIT(lit_124);
DEFLIT(lit_27);
DEFLIT(lit_414);
DEFLIT(lit_341);
DEFLIT(lit_205);
DEFLIT(lit_309);
DEFLIT(lit_449);
DEFLIT(lit_510);
DEFLIT(lit_534);
DEFLIT(lit_212);
DEFLIT(lit_254);
DEFLIT(lit_70);
DEFLIT(lit_422);
DEFLIT(lit_619);
DEFLIT(lit_540);
DEFLIT(lit_417);
DEFLIT(lit_440);
DEFLIT(lit_139);
DEFLIT(lit_546);
DEFLIT(lit_85);
DEFLIT(lit_9);
DEFLIT(lit_526);
DEFLIT(lit_577);
DEFLIT(lit_567);
DEFLIT(lit_183);
DEFLIT(lit_512);
DEFLIT(lit_338);
DEFLIT(lit_294);
DEFLIT(lit_100);
DEFLIT(lit_272);
DEFLIT(lit_111);
DEFLIT(lit_64);
DEFLIT(lit_630);
DEFLIT(lit_419);
DEFLIT(lit_115);
DEFLIT(lit_79);
DEFLIT(lit_447);
DEFLIT(lit_429);
DEFLIT(lit_506);
DEFLIT(lit_68);
DEFLIT(lit_376);
DEFLIT(lit_393);
DEFLIT(lit_140);
DEFLIT(lit_474);
DEFLIT(lit_322);
DEFLIT(lit_271);
DEFLIT(lit_83);
DEFLIT(lit_167);
DEFLIT(lit_217);
DEFLIT(lit_41);
DEFLIT(lit_215);
DEFLIT(lit_463);
DEFLIT(lit_66);
DEFLIT(lit_514);
DEFLIT(lit_293);
DEFLIT(lit_98);
DEFLIT(lit_379);
DEFLIT(lit_213);
DEFLIT(lit_176);
DEFLIT(lit_519);
DEFLIT(lit_394);
DEFLIT(lit_354);
DEFLIT(lit_113);
DEFLIT(lit_130);
DEFLIT(lit_170);
DEFLIT(lit_270);
DEFLIT(lit_225);
DEFLIT(lit_383);
DEFLIT(lit_588);
DEFLIT(lit_411);
DEFLIT(lit_535);
DEFLIT(lit_96);
DEFLIT(lit_145);
DEFLIT(lit_375);
DEFLIT(lit_598);
DEFLIT(lit_84);
DEFLIT(lit_59);
DEFLIT(lit_349);
DEFLIT(lit_501);
DEFLIT(lit_142);
DEFLIT(lit_492);
DEFLIT(lit_159);
DEFLIT(lit_267);
DEFLIT(lit_590);
DEFLIT(lit_304);
DEFLIT(lit_516);
DEFLIT(lit_238);
DEFLIT(lit_292);
DEFLIT(lit_445);
DEFLIT(lit_507);
DEFLIT(lit_269);
DEFLIT(lit_323);
DEFLIT(lit_174);
DEFLIT(lit_191);
DEFLIT(lit_597);
DEFLIT(lit_438);
DEFLIT(lit_336);
DEFLIT(lit_54);
DEFLIT(lit_430);
DEFLIT(lit_206);
DEFLIT(lit_245);
DEFLIT(lit_136);
DEFLIT(lit_392);
DEFLIT(lit_143);
DEFLIT(lit_141);
DEFLIT(lit_104);
DEFLIT(lit_34);
DEFLIT(lit_579);
DEFLIT(lit_268);
DEFLIT(lit_243);
DEFLIT(lit_548);
DEFLIT(lit_533);
DEFLIT(lit_489);
DEFLIT(lit_374);
DEFLIT(lit_625);
DEFLIT(lit_559);
DEFLIT(lit_236);
DEFLIT(lit_76);
DEFLIT(lit_168);
DEFLIT(lit_320);
DEFLIT(lit_258);
DEFLIT(lit_37);
DEFLIT(lit_442);
DEFLIT(lit_189);
DEFLIT(lit_185);
DEFLIT(lit_153);
DEFLIT(lit_614);
DEFLIT(lit_204);
DEFLIT(lit_604);
DEFLIT(lit_593);
DEFLIT(lit_572);
DEFLIT(lit_389);
DEFLIT(lit_51);
DEFLIT(lit_352);
DEFLIT(lit_303);
DEFLIT(lit_576);
DEFLIT(lit_484);
DEFLIT(lit_219);
DEFLIT(lit_71);
DEFLIT(lit_521);
DEFLIT(lit_305);
DEFLIT(lit_135);
DEFLIT(lit_7);
DEFLIT(lit_234);
DEFLIT(lit_334);
DEFLIT(lit_530);
DEFLIT(lit_6);
DEFLIT(lit_470);
DEFLIT(lit_564);
DEFLIT(lit_544);
DEFLIT(lit_481);
DEFLIT(lit_561);
DEFLIT(lit_237);
DEFLIT(lit_249);
DEFLIT(lit_26);
DEFLIT(lit_524);
DEFLIT(lit_214);
DEFLIT(lit_221);
DEFLIT(lit_307);
DEFLIT(lit_200);
DEFLIT(lit_20);
DEFLIT(lit_152);
DEFLIT(lit_461);
DEFLIT(lit_511);
DEFLIT(lit_542);
DEFLIT(lit_513);
DEFLIT(lit_128);
DEFLIT(lit_81);
DEFLIT(lit_448);
DEFLIT(lit_551);
DEFLIT(lit_155);
DEFLIT(lit_631);
DEFLIT(lit_350);
DEFLIT(lit_302);
DEFLIT(lit_50);
DEFLIT(lit_90);
DEFLIT(lit_611);
DEFLIT(lit_266);
DEFLIT(lit_617);
DEFLIT(lit_407);
DEFLIT(lit_220);
DEFLIT(lit_372);
DEFLIT(lit_317);
DEFLIT(lit_65);
DEFLIT(lit_436);
DEFLIT(lit_42);
DEFLIT(lit_119);
DEFLIT(lit_339);
DEFLIT(lit_595);
DEFLIT(lit_91);
DEFLIT(lit_18);
DEFLIT(lit_8);
DEFLIT(lit_251);
DEFLIT(lit_584);
DEFLIT(lit_318);
DEFLIT(lit_562);
DEFLIT(lit_11);
DEFLIT(lit_25);
DEFLIT(lit_450);
DEFLIT(lit_33);
DEFLIT(lit_457);
DEFLIT(lit_58);
DEFLIT(lit_357);
DEFLIT(lit_545);
DEFLIT(lit_129);
DEFLIT(lit_321);
DEFLIT(lit_413);
DEFLIT(lit_146);
DEFLIT(lit_48);
DEFLIT(lit_148);
DEFLIT(lit_282);
DEFLIT(lit_497);
DEFLIT(lit_177);
DEFLIT(lit_477);
DEFLIT(lit_77);
DEFLIT(lit_63);
DEFLIT(lit_555);
DEFLIT(lit_485);
DEFLIT(lit_5);
DEFLIT(lit_476);
DEFLIT(lit_432);
DEFLIT(lit_367);
DEFLIT(lit_568);
DEFLIT(lit_127);
DEFLIT(lit_385);
DEFLIT(lit_634);
DEFLIT(lit_348);
DEFLIT(lit_44);
DEFLIT(lit_390);
DEFLIT(lit_355);
DEFLIT(lit_313);
DEFLIT(lit_264);
DEFLIT(lit_80);
DEFLIT(lit_592);
DEFLIT(lit_106);
DEFLIT(lit_603);
DEFLIT(lit_370);
DEFLIT(lit_260);
DEFLIT(lit_587);
DEFLIT(lit_319);
DEFLIT(lit_582);
DEFLIT(lit_291);
DEFLIT(lit_95);
DEFLIT(lit_311);
DEFLIT(lit_134);
DEFLIT(lit_232);
DEFLIT(lit_549);
DEFLIT(lit_523);
DEFLIT(lit_240);
DEFLIT(lit_97);
DEFLIT(lit_233);
DEFLIT(lit_437);
DEFLIT(lit_502);
DEFLIT(lit_110);
DEFLIT(lit_87);
DEFLIT(lit_480);
DEFLIT(lit_397);
DEFLIT(lit_622);
DEFLIT(lit_550);
DEFLIT(lit_488);
DEFLIT(lit_125);
DEFLIT(lit_602);
DEFLIT(lit_446);
DEFLIT(lit_290);
DEFLIT(lit_35);
DEFLIT(lit_4);
DEFLIT(lit_444);
DEFLIT(lit_78);
DEFLIT(lit_495);
DEFLIT(lit_156);
DEFLIT(lit_364);
DEFLIT(lit_178);
DEFLIT(lit_301);
DEFLIT(lit_458);
DEFLIT(lit_574);
DEFLIT(lit_363);
DEFLIT(lit_93);
DEFLIT(lit_12);
DEFLIT(lit_171);
DEFLIT(lit_405);
DEFLIT(lit_353);
DEFLIT(lit_46);
DEFLIT(lit_108);
DEFLIT(lit_332);
DEFLIT(lit_439);
DEFLIT(lit_132);
DEFLIT(lit_186);
DEFLIT(lit_368);
DEFLIT(lit_316);
DEFLIT(lit_123);
DEFLIT(lit_75);
DEFLIT(lit_289);
DEFLIT(lit_528);
DEFLIT(lit_532);
DEFLIT(lit_62);
DEFLIT(lit_32);
DEFLIT(lit_162);
DEFLIT(lit_547);
DEFLIT(lit_553);
DEFLIT(lit_154);
DEFLIT(lit_525);
DEFLIT(lit_434);
DEFLIT(lit_500);
DEFLIT(lit_253);
DEFLIT(lit_193);
DEFLIT(lit_566);
DEFLIT(lit_169);
DEFLIT(lit_195);
DEFLIT(lit_427);
DEFLIT(lit_57);
DEFLIT(lit_585);
DEFLIT(lit_627);
DEFLIT(lit_424);
DEFLIT(lit_288);
DEFLIT(lit_382);
DEFLIT(lit_482);
DEFLIT(lit_184);
DEFLIT(lit_201);
DEFLIT(lit_388);
DEFLIT(lit_409);
DEFLIT(lit_633);
DEFLIT(lit_36);
DEFLIT(lit_138);
DEFLIT(lit_165);
DEFLIT(lit_369);
DEFLIT(lit_478);
DEFLIT(lit_216);
DEFLIT(lit_605);
DEFLIT(lit_418);
DEFLIT(lit_503);
DEFLIT(lit_395);
DEFLIT(lit_600);
DEFLIT(lit_356);
DEFLIT(lit_580);
DEFLIT(lit_380);
DEFLIT(lit_231);
DEFLIT(lit_287);
DEFLIT(lit_416);
DEFLIT(lit_298);
DEFLIT(lit_207);
DEFLIT(lit_404);
DEFLIT(lit_366);
DEFLIT(lit_67);
DEFLIT(lit_246);
DEFLIT(lit_483);
DEFLIT(lit_491);
DEFLIT(lit_493);
DEFLIT(lit_199);
DEFLIT(lit_14);
DEFLIT(lit_612);
DEFLIT(lit_300);
DEFLIT(lit_499);
DEFLIT(lit_286);
DEFLIT(lit_344);
DEFLIT(lit_386);
DEFLIT(lit_403);
DEFLIT(lit_490);
DEFLIT(lit_472);
DEFLIT(lit_333);
DEFLIT(lit_229);
DEFLIT(lit_359);
DEFLIT(lit_89);
DEFLIT(lit_415);
DEFLIT(lit_2);
DEFLIT(lit_163);
DEFLIT(lit_82);
DEFLIT(lit_208);
DEFLIT(lit_244);
DEFLIT(lit_498);
DEFLIT(lit_455);
DEFLIT(lit_330);
DEFLIT(lit_460);
DEFLIT(lit_473);
DEFLIT(lit_623);
DEFLIT(lit_402);
DEFLIT(lit_591);
DEFLIT(lit_314);
DEFLIT(lit_94);
DEFLIT(lit_346);
DEFLIT(lit_468);
DEFLIT(lit_606);
DEFLIT(lit_599);
DEFLIT(lit_30);
DEFLIT(lit_527);
DEFLIT(lit_586);
DEFLIT(lit_505);
DEFLIT(lit_257);
DEFLIT(lit_137);
DEFLIT(lit_255);
DEFLIT(lit_475);
DEFLIT(lit_45);
DEFLIT(lit_116);
DEFLIT(lit_285);
DEFLIT(lit_396);

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
  P T0,T1,T2,T3;
DEFCREGS();
  (P)YPdef_regs();
  T3 = (P)YPsp_reg();
  retF1 = T3;
  T1 = (P)YPsp_reg();
  T2 = (P)YPiT((P)4,num_);
  T0 = (P)YPiA(T1,T2);
  (P)YPsp_reg_setter(T0);
  return retF1;
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
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLclassG),(P)13);
  classF2 = T0;
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
  return classF2;
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
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLsingletonG),(P)1);
  classF3 = T0;
  (P)YPprop_elt_setter(Ynil,classF3,(P)1);
  (P)YPprop_elt_setter(type_object_,classF3,(P)0);
  return classF3;
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
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLsubclassG),(P)1);
  classF4 = T0;
  (P)YPprop_elt_setter(Ynil,classF4,(P)1);
  (P)YPprop_elt_setter(type_class_,classF4,(P)0);
  return classF4;
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
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLunionG),(P)1);
  classF5 = T0;
  (P)YPprop_elt_setter(Ynil,classF5,(P)1);
  (P)YPprop_elt_setter(union_elts_,classF5,(P)0);
  return classF5;
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
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLproductG),(P)1);
  classF6 = T0;
  (P)YPprop_elt_setter(Ynil,classF6,(P)1);
  (P)YPprop_elt_setter(product_elts_,classF6,(P)0);
  return classF6;
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
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLlstG),(P)2);
  classF7 = T0;
  (P)YPprop_elt_setter(Ynil,classF7,(P)2);
  (P)YPprop_elt_setter(tail_,classF7,(P)1);
  (P)YPprop_elt_setter(head_,classF7,(P)0);
  return classF7;
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
  P xF8;
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
  xF8 = x_;
  T2 = (P)YPeqQ(xF8,VARREF(Ynil));
  T1 = (P)YPbb(T2);
  if (T2) {
    T0 = (P)0;
  } else {
    T5 = (P)YPtail(x_);
    T4 = (P)YPPlen(T5);
    T3 = (P)YPiA(T4,(P)1);
    T0 = T3;
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
  P classF9;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLsigG),(P)6);
  classF9 = T0;
  (P)YPprop_elt_setter(Ynil,classF9,(P)6);
  (P)YPprop_elt_setter(sig_unification_vars_,classF9,(P)5);
  (P)YPprop_elt_setter(sig_val_,classF9,(P)4);
  (P)YPprop_elt_setter(sig_arity_,classF9,(P)3);
  (P)YPprop_elt_setter(sig_naryQ_,classF9,(P)2);
  (P)YPprop_elt_setter(sig_specs_,classF9,(P)1);
  (P)YPprop_elt_setter(sig_names_,classF9,(P)0);
  return classF9;
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
  P classF10;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLsrc_locG),(P)2);
  classF10 = T0;
  (P)YPprop_elt_setter(Ynil,classF10,(P)2);
  (P)YPprop_elt_setter(src_loc_file_,classF10,(P)1);
  (P)YPprop_elt_setter(src_loc_line_,classF10,(P)0);
  return classF10;
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
  P classF11;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLmetG),(P)6);
  classF11 = T0;
  (P)YPprop_elt_setter(Ynil,classF11,(P)6);
  (P)YPprop_elt_setter(met_src_,classF11,(P)5);
  (P)YPprop_elt_setter(met_refs_,classF11,(P)4);
  (P)YPprop_elt_setter(met_env_,classF11,(P)3);
  (P)YPprop_elt_setter(met_sig_,classF11,(P)2);
  (P)YPprop_elt_setter(met_name_,classF11,(P)1);
  (P)YPprop_elt_setter(met_code_,classF11,(P)0);
  return classF11;
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
  P tF14;
  P xF13;
  P xF12;
  P T0,T1,T2;
DEFCREGS();
  xF12 = x_;
  T2 = (P)YPiGG(xF12,(P)2);
  xF13 = T2;
  tF14 = t_;
  T1 = (P)YPiLL(xF13,(P)2);
  T0 = (P)YPiv(T1,tF14);
  return T0;
}

P YPuntag_into(P x_) {
  P tF17;
  P xF16;
  P xF15;
  P T0,T1,T2;
DEFCREGS();
  xF15 = x_;
  T2 = (P)YPiGG(xF15,(P)2);
  xF16 = T2;
  tF17 = (P)0;
  T1 = (P)YPiLL(xF16,(P)2);
  T0 = (P)YPiv(T1,tF17);
  return T0;
}

P YPindirect_objectQ(P x_) {
  P xF18;
  P T0,T1;
DEFCREGS();
  xF18 = x_;
  T1 = (P)YPiB(xF18,(P)3);
  T0 = (P)YPiE(T1,(P)0);
  return T0;
}

INLINE P YPclass_of(P x_) {
  P tagF20;
  P xF19;
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
  xF19 = x_;
  T5 = (P)YPiB(xF19,(P)3);
  tagF20 = T5;
  T2 = (P)YPiE(tagF20,(P)0);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = (P)YPobject_class(x_);
    T0 = T3;
  } else {
    T4 = (P)YPelt(VARREF(YDdirect_object_class),tagF20);
    T0 = T4;
  }
  return T0;
}

INLINE P YPib(P x_) {
  P tF22;
  P xF21;
  P T0,T1;
DEFCREGS();
  xF21 = x_;
  tF22 = (P)1;
  T1 = (P)YPiLL(xF21,(P)2);
  T0 = (P)YPiv(T1,tF22);
  return T0;
}

INLINE P YPfixnum(P x_) {
  P tF25;
  P xF24;
  P xF23;
  P T0,T1;
DEFCREGS();
  xF23 = x_;
  xF24 = xF23;
  tF25 = (P)1;
  T1 = (P)YPiLL(xF24,(P)2);
  T0 = (P)YPiv(T1,tF25);
  return T0;
}

INLINE P YPiu(P x_) {
  P xF26;
  P T0;
DEFCREGS();
  xF26 = x_;
  T0 = (P)YPiGG(xF26,(P)2);
  return T0;
}

P YPint(P x_) {
  P tF29;
  P xF28;
  P xF27;
  P T0,T1;
DEFCREGS();
  xF27 = x_;
  xF28 = xF27;
  tF29 = (P)1;
  T1 = (P)YPiLL(xF28,(P)2);
  T0 = (P)YPiv(T1,tF29);
  return T0;
}

INLINE P YOintQ(P x_) {
  P xF30;
  P T0,T1,T2;
DEFCREGS();
  xF30 = x_;
  T2 = (P)YPiB(xF30,(P)3);
  T1 = (P)YPiE(T2,(P)1);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YPcb(P x_) {
  P tF32;
  P xF31;
  P T0,T1;
DEFCREGS();
  xF31 = x_;
  tF32 = (P)2;
  T1 = (P)YPiLL(xF31,(P)2);
  T0 = (P)YPiv(T1,tF32);
  return T0;
}

INLINE P YPchr(P x_) {
  P tF35;
  P xF34;
  P xF33;
  P T0,T1;
DEFCREGS();
  xF33 = x_;
  xF34 = xF33;
  tF35 = (P)2;
  T1 = (P)YPiLL(xF34,(P)2);
  T0 = (P)YPiv(T1,tF35);
  return T0;
}

INLINE P YPcu(P x_) {
  P xF36;
  P T0;
DEFCREGS();
  xF36 = x_;
  T0 = (P)YPiGG(xF36,(P)2);
  return T0;
}

INLINE P YPlb(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPtag_into(x_,(P)3);
  return T0;
}

INLINE P YPloc(P x_) {
  P xF37;
  P T0;
DEFCREGS();
  xF37 = x_;
  T0 = (P)YPtag_into(xF37,(P)3);
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
  if (T2) {
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
  if (T2) {
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
  if (T2) {
    T0 = VARREF(YPrnul);
  } else {
    T3 = (P)YPrepX(len_,e_);
    T0 = T3;
  }
  return T0;
}

P YPstr_eqQ_loop(P s1_,P s2_,P len_,P i_) {
  P c2F43;
  P c1F42;
  P tmpF41;
  P c2F40;
  P c1F39;
  P tmpF38;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
  for (;;) {
    P a0_0,a0_1,a0_2,a0_3;
  loop0:
    T9 = (P)YPiE(i_,len_);
    T8 = (P)YPbb(T9);
    tmpF41 = T8;
    if (tmpF41 != YPfalse) {
      T0 = tmpF41;
    } else {
      T7 = (P)YPselt(s1_,i_);
      c1F42 = T7;
      T6 = (P)YPselt(s2_,i_);
      c2F43 = T6;
      T3 = (P)YPcE(c1F42,c2F43);
      T2 = (P)YPbb(T3);
      if (T3) {
        T5 = (P)YPiA(i_,(P)1);
        a0_0 = s1_;
        a0_1 = s2_;
        a0_2 = len_;
        a0_3 = T5;
        s1_ = a0_0;
        s2_ = a0_1;
        len_ = a0_2;
        i_ = a0_3;
        goto loop0;
        T1 = T4;
      } else {
        T1 = YPfalse;
      }
      T0 = T1;
    }
    break;
  }
  return T0;
}

P YPstr_eqQ(P s1_,P s2_) {
  P lenF44;
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
  T5 = (P)YPslen(s1_);
  lenF44 = T5;
  T3 = (P)YPslen(s2_);
  T2 = (P)YPiE(lenF44,T3);
  T1 = (P)YPbb(T2);
  if (T2) {
    T4 = (P)YPstr_eqQ_loop(s1_,s2_,lenF44,(P)0);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
  return T0;
}

P YPcompute_ancestors(P parent_) {
  P T0,T1,T2,T3,T4,T5,T6,T7;
DEFCREGS();
  T2 = (P)YPeqQ(parent_,VARREF(YLanyG));
  T1 = (P)YPbb(T2);
  if (T2) {
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
  P classF45;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLsymG),(P)1);
  classF45 = T0;
  (P)YPprop_elt_setter(Ynil,classF45,(P)1);
  (P)YPprop_elt_setter(sym_nam_,classF45,(P)0);
  return classF45;
}

FUNCODEDEF(fun_111) {
  P name_;
  P symF49;
  P symF48;
  P xF47;
  P sF46;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(name_, 0);
  sF46 = VARREF(YPsymbols);
  for (;;) {
    P a1_0;
  loop1:
    xF47 = sF46;
    T2 = (P)YPeqQ(xF47,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T4 = (P)YPsym(name_);
      symF48 = T4;
      T3 = (P)YPpair(symF48,VARREF(YPsymbols));
      VARSET(YPsymbols,T3);
      T0 = symF48;
    } else {
      T10 = (P)YPhead(sF46);
      symF49 = T10;
      T7 = (P)YPsym_nam(symF49);
      T6 = (P)YPstr_eqQ(T7,name_);
      if (T6 != YPfalse) {
        T5 = symF49;
      } else {
        T9 = (P)YPtail(sF46);
        a1_0 = T9;
        sF46 = a1_0;
        goto loop1;
        T5 = T8;
      }
      T0 = T5;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfab_sym) {
  P name_;
  P symF53;
  P symF52;
  P xF51;
  P sF50;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(name_, 0);
  sF50 = VARREF(YPsymbols);
  for (;;) {
    P a2_0;
  loop2:
    xF51 = sF50;
    T2 = (P)YPeqQ(xF51,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T4 = (P)YPsym(name_);
      symF52 = T4;
      T3 = (P)YPpair(symF52,VARREF(YPsymbols));
      VARSET(YPsymbols,T3);
      T0 = symF52;
    } else {
      T10 = (P)YPhead(sF50);
      symF53 = T10;
      T7 = (P)YPsym_nam(symF53);
      T6 = (P)YPstr_eqQ(T7,name_);
      if (T6 != YPfalse) {
        T5 = symF53;
      } else {
        T9 = (P)YPtail(sF50);
        a2_0 = T9;
        sF50 = a2_0;
        goto loop2;
        T5 = T8;
      }
      T0 = T5;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

P YPrevX(P c_) {
  P tF57;
  P xF56;
  P rF55;
  P lF54;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  lF54 = c_;
  rF55 = Ynil;
  for (;;) {
    P a3_0,a3_1;
  loop3:
    xF56 = lF54;
    T2 = (P)YPeqQ(xF56,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = rF55;
    } else {
      T4 = (P)YPtail(lF54);
      tF57 = T4;
      (P)YPtail_setter(rF55,lF54);
      a3_0 = tF57;
      a3_1 = lF54;
      lF54 = a3_0;
      rF55 = a3_1;
      goto loop3;
      T0 = T3;
    }
    break;
  }
  return T0;
}

P YPcat2(P x_,P y_) {
  P xF63;
  P yF62;
  P lxyF61;
  P xF60;
  P xF59;
  P lxF58;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
DEFCREGS();
  lxF58 = VARREF(Ynil);
  xF59 = x_;
  for (;;) {
    P a4_0,a4_1;
  loop4:
    xF60 = xF59;
    T2 = (P)YPeqQ(xF60,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      lxyF61 = lxF58;
      yF62 = y_;
      for (;;) {
        P a5_0,a5_1;
      loop5:
        xF63 = yF62;
        T5 = (P)YPeqQ(xF63,VARREF(Ynil));
        T4 = (P)YPbb(T5);
        if (T5) {
          T6 = (P)YPrevX(lxyF61);
          T3 = T6;
        } else {
          T9 = (P)YPhead(yF62);
          T8 = (P)YPpair(T9,lxyF61);
          T10 = (P)YPtail(yF62);
          a5_0 = T8;
          a5_1 = T10;
          lxyF61 = a5_0;
          yF62 = a5_1;
          goto loop5;
          T3 = T7;
        }
        break;
      }
      T0 = T3;
    } else {
      T13 = (P)YPhead(xF59);
      T12 = (P)YPpair(T13,lxF58);
      T14 = (P)YPtail(xF59);
      a4_0 = T12;
      a4_1 = T14;
      lxF58 = a4_0;
      xF59 = a4_1;
      goto loop4;
      T0 = T11;
    }
    break;
  }
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
  P classF64;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLfloG),(P)1);
  classF64 = T0;
  (P)YPprop_elt_setter(flo_dat_,classF64,(P)0);
  return classF64;
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
  P classF65;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLoptsG),(P)2);
  classF65 = T0;
  (P)YPprop_elt_setter(Ynil,classF65,(P)2);
  (P)YPprop_elt_setter(opts_count_,classF65,(P)1);
  (P)YPprop_elt_setter(opts_location_,classF65,(P)0);
  return classF65;
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
  P classF66;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLopts_tupG),(P)3);
  classF66 = T0;
  (P)YPprop_elt_setter(Ynil,classF66,(P)3);
  (P)YPprop_elt_setter(opts_tup_tup_,classF66,(P)2);
  (P)YPprop_elt_setter(opts_tup_count_,classF66,(P)1);
  (P)YPprop_elt_setter(opts_tup_location_,classF66,(P)0);
  return classF66;
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
  P classF67;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLpropG),(P)5);
  classF67 = T0;
  (P)YPprop_elt_setter(Ynil,classF67,(P)5);
  (P)YPprop_elt_setter(prop_init_,classF67,(P)4);
  (P)YPprop_elt_setter(prop_type_,classF67,(P)3);
  (P)YPprop_elt_setter(prop_setter_,classF67,(P)2);
  (P)YPprop_elt_setter(prop_getter_,classF67,(P)1);
  (P)YPprop_elt_setter(prop_owner_,classF67,(P)0);
  return classF67;
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
  P classF68;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLgen_cacheG),(P)5);
  classF68 = T0;
  (P)YPprop_elt_setter(Ynil,classF68,(P)5);
  (P)YPprop_elt_setter(gen_cache_count_,classF68,(P)4);
  (P)YPprop_elt_setter(gen_cache_classes_,classF68,(P)3);
  (P)YPprop_elt_setter(gen_cache_singletons_,classF68,(P)2);
  (P)YPprop_elt_setter(gen_cache_arg_pos_,classF68,(P)1);
  (P)YPprop_elt_setter(gen_cache_missableQ_,classF68,(P)0);
  return classF68;
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
  P classF69;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLgenG),(P)7);
  classF69 = T0;
  (P)YPprop_elt_setter(Ynil,classF69,(P)7);
  (P)YPprop_elt_setter(gen_src_,classF69,(P)6);
  (P)YPprop_elt_setter(gen_refs_,classF69,(P)5);
  (P)YPprop_elt_setter(fun_cache_,classF69,(P)4);
  (P)YPprop_elt_setter(gen_mets_,classF69,(P)3);
  (P)YPprop_elt_setter(gen_sig_,classF69,(P)2);
  (P)YPprop_elt_setter(gen_name_,classF69,(P)1);
  (P)YPprop_elt_setter(gen_code_,classF69,(P)0);
  return classF69;
}

FUNCODEDEF(YPprop_offset) {
  P owner_,getter_;
  P propF75;
  P xF74;
  P xF73;
  P xF72;
  P propsF71;
  P iF70;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  iF70 = (P)0;
  T13 = (P)YPobject_class(owner_);
  T12 = (P)YPclass_props(T13);
  propsF71 = T12;
  for (;;) {
    P a6_0,a6_1;
  loop6:
    xF72 = propsF71;
    T2 = (P)YPeqQ(xF72,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      xF73 = YPint((P)-1);
      xF74 = xF73;
      T3 = (P)YPiGG(xF74,(P)2);
      T0 = T3;
    } else {
      T11 = (P)YPhead(propsF71);
      propF75 = T11;
      T7 = (P)YPprop_getter(propF75);
      T6 = (P)YPeqQ(T7,getter_);
      T5 = (P)YPbb(T6);
      if (T6) {
        T4 = iF70;
      } else {
        T9 = (P)YPiA(iF70,(P)1);
        T10 = (P)YPtail(propsF71);
        a6_0 = T9;
        a6_1 = T10;
        iF70 = a6_0;
        propsF71 = a6_1;
        goto loop6;
        T4 = T8;
      }
      T0 = T4;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPearly_dispatch) {
  P args_;
  P genF76;
  P T0,T1,T2,T3;
LINK_STACK();
  NARGS(args_, 0);
  T3 = (P)YPfun_reg();
  genF76 = T3;
  T0 = (P)YPcurrent_out_port();
  T1 = (P)YPsu(LITREF(lit_8));
  (P)YPputs(T0,T1);
  T2 = CALL0(1,(P)0);
  QRET(T2);
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
  P parentF77;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(class_, 0);
  T4 = (P)YPclass_parents(class_);
  T3 = (P)YPhead(T4);
  parentF77 = T3;
  T1 = (P)YPclass_props(parentF77);
  T2 = (P)YPclass_direct_props(class_);
  T0 = (P)YPcat2(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPfinalize_propsX) {
  P name_,class_;
  P tF80;
  P xF79;
  P xF78;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(name_, 0);
  ARG(class_, 1);
  (P)YPclass_name_setter(name_,class_);
  T1 = (P)YPclass_direct_props(class_);
  T0 = (P)YPrevX(T1);
  (P)YPclass_direct_props_setter(T0,class_);
  T2 = CALL1(1,VARREF(YPcollect_direct_props),class_);
  (P)YPclass_props_setter(T2,class_);
  T6 = (P)YPclass_props(class_);
  T5 = (P)YPPlen(T6);
  xF78 = T5;
  xF79 = xF78;
  tF80 = (P)1;
  T4 = (P)YPiLL(xF79,(P)2);
  T3 = (P)YPiv(T4,tF80);
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
  P xF84;
  P xF83;
  P xF82;
  P xF81;
  P T0,T1,T2,T3;
DEFCREGS();
  xF81 = x_;
  xF82 = xF81;
  T2 = (P)YPiGG(xF82,(P)2);
  xF83 = y_;
  xF84 = xF83;
  T3 = (P)YPiGG(xF84,(P)2);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOA(P x_,P y_) {
  P tF91;
  P xF90;
  P xF89;
  P xF88;
  P xF87;
  P xF86;
  P xF85;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  xF85 = x_;
  xF86 = xF85;
  T3 = (P)YPiGG(xF86,(P)2);
  xF87 = y_;
  xF88 = xF87;
  T4 = (P)YPiGG(xF88,(P)2);
  T2 = (P)YPiA(T3,T4);
  xF89 = T2;
  xF90 = xF89;
  tF91 = (P)1;
  T1 = (P)YPiLL(xF90,(P)2);
  T0 = (P)YPiv(T1,tF91);
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
  P xF92;
  P T0,T1;
DEFCREGS();
  xF92 = x_;
  T1 = (P)YPeqQ(xF92,VARREF(Ynil));
  T0 = (P)YPbb(T1);
  return T0;
}

FUNCODEDEF(YOOemptyQ) {
  P x_;
  P xF93;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF93 = x_;
  T1 = (P)YPeqQ(xF93,VARREF(Ynil));
  T0 = (P)YPbb(T1);
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
  P tF96;
  P xF95;
  P xF94;
  P T0,T1,T2;
DEFCREGS();
  T2 = (P)YPPlen(x_);
  xF94 = T2;
  xF95 = xF94;
  tF96 = (P)1;
  T1 = (P)YPiLL(xF95,(P)2);
  T0 = (P)YPiv(T1,tF96);
  return T0;
}

INLINE P YOoelt(P x_,P i_) {
  P xF98;
  P xF97;
  P T0,T1,T2,T3;
DEFCREGS();
  T1 = (P)YPopts_location(x_);
  xF97 = i_;
  xF98 = xF97;
  T3 = (P)YPiGG(xF98,(P)2);
  T2 = (P)YPi_((P)0,T3);
  T0 = (P)YPloc_off(T1,T2);
  return T0;
}

INLINE P YOoelt_setter(P z_,P x_,P i_) {
  P xF100;
  P xF99;
  P T0,T1,T2,T3;
DEFCREGS();
  T1 = (P)YPopts_location(x_);
  xF99 = i_;
  xF100 = xF99;
  T3 = (P)YPiGG(xF100,(P)2);
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
  P xF103;
  P xF102;
  P pF101;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  pF101 = c_;
  for (;;) {
    P a7_0;
  loop7:
    xF102 = pF101;
    xF103 = xF102;
    T2 = (P)YPeqQ(xF103,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPtrue;
    } else {
      T5 = (P)YOhead(pF101);
      T4 = CALL1(0,test_,T5);
      if (T4 != YPfalse) {
        T7 = (P)YOtail(pF101);
        a7_0 = T7;
        pF101 = a7_0;
        goto loop7;
        T3 = T6;
      } else {
        T3 = YPfalse;
      }
      T0 = T3;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOall2Q) {
  P test_,x_,y_;
  P xF111;
  P xF110;
  P xF109;
  P xF108;
  P xF107;
  P xF106;
  P pyF105;
  P pxF104;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  pxF104 = x_;
  pyF105 = y_;
  for (;;) {
    P a8_0,a8_1;
  loop8:
    xF106 = pxF104;
    xF107 = xF106;
    T2 = (P)YPeqQ(xF107,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      xF108 = pyF105;
      xF109 = xF108;
      T4 = (P)YPeqQ(xF109,VARREF(Ynil));
      T3 = (P)YPbb(T4);
      T0 = T3;
    } else {
      xF110 = pyF105;
      xF111 = xF110;
      T7 = (P)YPeqQ(xF111,VARREF(Ynil));
      T6 = (P)YPbb(T7);
      if (T7) {
        T5 = YPfalse;
      } else {
        T10 = (P)YOhead(pxF104);
        T11 = (P)YOhead(pyF105);
        T9 = CALL2(0,test_,T10,T11);
        if (T9 != YPfalse) {
          T13 = (P)YOtail(pxF104);
          T14 = (P)YOtail(pyF105);
          a8_0 = T13;
          a8_1 = T14;
          pxF104 = a8_0;
          pyF105 = a8_1;
          goto loop8;
          T8 = T12;
        } else {
          T8 = YPfalse;
        }
        T5 = T8;
      }
      T0 = T5;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOelt) {
  P x_,key_;
  P yF117;
  P xF116;
  P yF115;
  P xF114;
  P xF113;
  P countF112;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  check_type(YPint((P)0),VARREF(YLfixnumG));
  countF112 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF113 = x_;
  for (;;) {
    P a9_0,a9_1;
  loop9:
    xF114 = xF113;
    yF115 = Ynil;
    T2 = (P)YPeqQ(xF114,yF115);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = VARREF(Ynul);
    } else {
      xF116 = countF112;
      yF117 = key_;
      T5 = (P)YPiE(xF116,yF117);
      T4 = (P)YPbb(T5);
      if (T5) {
        T6 = (P)YOhead(xF113);
        T3 = T6;
      } else {
        T8 = (P)YOA(countF112,YPint((P)1));
        T9 = (P)YOtail(xF113);
        a9_0 = T8;
        a9_1 = T9;
        countF112 = a9_0;
        xF113 = a9_1;
        goto loop9;
        T3 = T7;
      }
      T0 = T3;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOfill) {
  P x_,f_;
  P xF120;
  P xF119;
  P pF118;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(f_, 1);
  pF118 = x_;
  for (;;) {
    P a10_0;
  loop10:
    xF119 = pF118;
    xF120 = xF119;
    T2 = (P)YPeqQ(xF120,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = x_;
    } else {
      (P)YOhead_setter(f_,pF118);
      T4 = (P)YOtail(pF118);
      a10_0 = T4;
      pF118 = a10_0;
      goto loop10;
      T0 = T3;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOanyQ) {
  P test_,c_;
  P tmpF124;
  P xF123;
  P xF122;
  P pF121;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  pF121 = c_;
  for (;;) {
    P a11_0;
  loop11:
    xF122 = pF121;
    xF123 = xF122;
    T2 = (P)YPeqQ(xF123,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPfalse;
    } else {
      T7 = (P)YOhead(pF121);
      T6 = CALL1(0,test_,T7);
      tmpF124 = T6;
      if (tmpF124 != YPfalse) {
        T3 = tmpF124;
      } else {
        T5 = (P)YOtail(pF121);
        a11_0 = T5;
        pF121 = a11_0;
        goto loop11;
        T3 = T4;
      }
      T0 = T3;
    }
    break;
  }
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
  P xF128;
  P xF127;
  P resF126;
  P xF125;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  xF125 = x_;
  resF126 = Ynil;
  for (;;) {
    P a12_0,a12_1;
  loop12:
    xF127 = xF125;
    xF128 = xF127;
    T2 = (P)YPeqQ(xF128,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL1(1,VARREF(YOrevX),resF126);
      T0 = T3;
    } else {
      T5 = (P)YOtail(xF125);
      T8 = (P)YOhead(xF125);
      T7 = CALL1(1,f_,T8);
      T6 = (P)YOpair(T7,resF126);
      a12_0 = T5;
      a12_1 = T6;
      xF125 = a12_0;
      resF126 = a12_1;
      goto loop12;
      T0 = T4;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOpick) {
  P f_,x_;
  P hF133;
  P xF132;
  P xF131;
  P resF130;
  P xF129;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  xF129 = x_;
  resF130 = Ynil;
  for (;;) {
    P a13_0,a13_1;
  loop13:
    xF131 = xF129;
    xF132 = xF131;
    T2 = (P)YPeqQ(xF132,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL1(1,VARREF(YOrevX),resF130);
      T0 = T3;
    } else {
      T9 = (P)YOhead(xF129);
      hF133 = T9;
      T5 = (P)YOtail(xF129);
      T7 = CALL1(1,f_,hF133);
      if (T7 != YPfalse) {
        T8 = (P)YOpair(hF133,resF130);
        T6 = T8;
      } else {
        T6 = resF130;
      }
      a13_0 = T5;
      a13_1 = T6;
      xF129 = a13_0;
      resF130 = a13_1;
      goto loop13;
      T0 = T4;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOdo) {
  P f_,x_;
  P xF136;
  P xF135;
  P xF134;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  xF134 = x_;
  for (;;) {
    P a14_0;
  loop14:
    xF135 = xF134;
    xF136 = xF135;
    T2 = (P)YPeqQ(xF136,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPfalse;
    } else {
      T3 = (P)YOhead(xF134);
      CALL1(0,f_,T3);
      T5 = (P)YOtail(xF134);
      a14_0 = T5;
      xF134 = a14_0;
      goto loop14;
      T0 = T4;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOalter) {
  P dst_,src_;
  P xF143;
  P xF142;
  P tmpF141;
  P xF140;
  P xF139;
  P ssF138;
  P dsF137;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  dsF137 = dst_;
  ssF138 = src_;
  for (;;) {
    P a15_0,a15_1;
  loop15:
    xF139 = dsF137;
    xF140 = xF139;
    T5 = (P)YPeqQ(xF140,VARREF(Ynil));
    T4 = (P)YPbb(T5);
    tmpF141 = T4;
    if (tmpF141 != YPfalse) {
      T1 = tmpF141;
    } else {
      xF142 = ssF138;
      xF143 = xF142;
      T3 = (P)YPeqQ(xF143,VARREF(Ynil));
      T2 = (P)YPbb(T3);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      T6 = (P)YOhead(ssF138);
      (P)YOhead_setter(T6,dsF137);
      T8 = (P)YOtail(dsF137);
      T9 = (P)YOtail(ssF138);
      a15_0 = T8;
      a15_1 = T9;
      dsF137 = a15_0;
      ssF138 = a15_1;
      goto loop15;
      T0 = T7;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfab) {
  P x_,s_;
  P xF151;
  P xF150;
  P xF149;
  P xF148;
  P yF147;
  P xF146;
  P resF145;
  P iF144;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  check_type(s_,VARREF(YLfixnumG));
  iF144 = s_;
  check_type(Ynil,VARREF(YLlstG));
  resF145 = Ynil;
  for (;;) {
    P a16_0,a16_1;
  loop16:
    xF146 = iF144;
    yF147 = YPint((P)0);
    xF148 = xF146;
    xF149 = xF148;
    T3 = (P)YPiGG(xF149,(P)2);
    xF150 = yF147;
    xF151 = xF150;
    T4 = (P)YPiGG(xF151,(P)2);
    T2 = (P)YPiL(T3,T4);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = resF145;
    } else {
      T6 = (P)YOA(iF144,YPint((P)-1));
      T7 = (P)YOpair(VARREF(Ynul),resF145);
      a16_0 = T6;
      a16_1 = T7;
      iF144 = a16_0;
      resF145 = a16_1;
      goto loop16;
      T0 = T5;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfold) {
  P combine_,init_,c_;
  P xF155;
  P xF154;
  P cF153;
  P resF152;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
  resF152 = init_;
  cF153 = c_;
  for (;;) {
    P a17_0,a17_1;
  loop17:
    xF154 = cF153;
    xF155 = xF154;
    T2 = (P)YPeqQ(xF155,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = resF152;
    } else {
      T5 = (P)YOhead(cF153);
      T4 = CALL2(0,combine_,resF152,T5);
      T6 = (P)YOtail(cF153);
      a17_0 = T4;
      a17_1 = T6;
      resF152 = a17_0;
      cF153 = a17_1;
      goto loop17;
      T0 = T3;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOrev) {
  P x_;
  P xF159;
  P xF158;
  P rF157;
  P lF156;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  lF156 = x_;
  rF157 = Ynil;
  for (;;) {
    P a18_0,a18_1;
  loop18:
    xF158 = lF156;
    xF159 = xF158;
    T2 = (P)YPeqQ(xF159,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = rF157;
    } else {
      T4 = (P)YOtail(lF156);
      T6 = (P)YOhead(lF156);
      T5 = (P)YOpair(T6,rF157);
      a18_0 = T4;
      a18_1 = T5;
      lF156 = a18_0;
      rF157 = a18_1;
      goto loop18;
      T0 = T3;
    }
    break;
  }
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
  P xF163;
  P xF162;
  P iF161;
  P cF160;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  cF160 = c_;
  iF161 = YPint((P)0);
  for (;;) {
    P a19_0,a19_1;
  loop19:
    xF162 = cF160;
    xF163 = xF162;
    T2 = (P)YPeqQ(xF163,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = VARREF(Ynul);
    } else {
      T5 = (P)YOhead(cF160);
      T4 = CALL1(1,f_,T5);
      if (T4 != YPfalse) {
        T3 = iF161;
      } else {
        T7 = (P)YOtail(cF160);
        T8 = (P)YOA(iF161,YPint((P)1));
        a19_0 = T7;
        a19_1 = T8;
        cF160 = a19_0;
        iF161 = a19_1;
        goto loop19;
        T3 = T6;
      }
      T0 = T3;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_361) {
  P y_;
  P yF165;
  P xF164;
  P T0,T1;
LINK_STACK();
  ARG(y_, 0);
  xF164 = FREEREF(0);
  yF165 = y_;
  T1 = (P)YPeqQ(xF164,yF165);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmemQ) {
  P c_,x_;
  P yF167;
  P xF166;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T4 = FUNFAB(fun_361,1,x_);
  T3 = CALL2(1,VARREF(YOfind),T4,c_);
  xF166 = T3;
  yF167 = VARREF(Ynul);
  T2 = (P)YPeqQ(xF166,yF167);
  T1 = (P)YPbb(T2);
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
  P xF173;
  P xF172;
  P iF171;
  P xF170;
  P yF169;
  P xF168;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(objects_, 0);
  ARG(i_, 1);
  ARG(l_, 2);
  xF168 = i_;
  yF169 = YPint((P)-1);
  T2 = (P)YPeqQ(xF168,yF169);
  T1 = (P)YPbb(T2);
  if (T2) {
    T0 = l_;
  } else {
    T4 = (P)YOA(i_,YPint((P)-1));
    xF170 = objects_;
    iF171 = i_;
    T7 = (P)YPopts_location(xF170);
    xF172 = iF171;
    xF173 = xF172;
    T9 = (P)YPiGG(xF173,(P)2);
    T8 = (P)YPi_((P)0,T9);
    T6 = (P)YPloc_off(T7,T8);
    T5 = (P)YOpair(T6,l_);
    T3 = CALL3(1,VARREF(YOlst_helper),objects_,T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOopts_as_lst) {
  P x_;
  P xF174;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  xF174 = x_;
  T2 = (P)YPopts_count(xF174);
  T1 = (P)YOA(T2,YPint((P)-1));
  T0 = CALL3(1,VARREF(YOlst_helper),x_,T1,Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOlst) {
  P objects_;
  P xF175;
  P T0,T1,T2;
LINK_STACK();
  NARGS(objects_, 0);
  xF175 = objects_;
  T2 = (P)YPopts_count(xF175);
  T1 = (P)YOA(T2,YPint((P)-1));
  T0 = CALL3(1,VARREF(YOlst_helper),objects_,T1,Ynil);
UNLINK_STACK();
  QRET(T0);
}

INLINE P YOtlen(P x_) {
  P tF178;
  P xF177;
  P xF176;
  P T0,T1,T2;
DEFCREGS();
  T2 = (P)YPtlen(x_);
  xF176 = T2;
  xF177 = xF176;
  tF178 = (P)1;
  T1 = (P)YPiLL(xF177,(P)2);
  T0 = (P)YPiv(T1,tF178);
  return T0;
}

INLINE P YOtelt(P x_,P i_) {
  P xF180;
  P xF179;
  P T0,T1;
DEFCREGS();
  xF179 = i_;
  xF180 = xF179;
  T1 = (P)YPiGG(xF180,(P)2);
  T0 = (P)YPtelt(x_,T1);
  return T0;
}

INLINE P YOtelt_setter(P z_,P x_,P i_) {
  P xF182;
  P xF181;
  P T0,T1;
DEFCREGS();
  xF181 = i_;
  xF182 = xF181;
  T1 = (P)YPiGG(xF182,(P)2);
  T0 = (P)YPtelt_setter(z_,x_,T1);
  return T0;
}

FUNCODEDEF(YOtanyQ) {
  P test_,c_;
  P tmpF190;
  P xF189;
  P xF188;
  P xF187;
  P xF186;
  P yF185;
  P xF184;
  P iF183;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  T11 = (P)YOtlen(c_);
  T10 = (P)YOA(T11,YPint((P)-1));
  iF183 = T10;
  for (;;) {
    P a20_0;
  loop20:
    xF184 = iF183;
    yF185 = YPint((P)0);
    xF186 = xF184;
    xF187 = xF186;
    T3 = (P)YPiGG(xF187,(P)2);
    xF188 = yF185;
    xF189 = xF188;
    T4 = (P)YPiGG(xF189,(P)2);
    T2 = (P)YPiL(T3,T4);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPfalse;
    } else {
      T9 = (P)YOtelt(c_,iF183);
      T8 = CALL1(0,test_,T9);
      tmpF190 = T8;
      if (tmpF190 != YPfalse) {
        T5 = tmpF190;
      } else {
        T7 = (P)YOA(iF183,YPint((P)-1));
        a20_0 = T7;
        iF183 = a20_0;
        goto loop20;
        T5 = T6;
      }
      T0 = T5;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOtall2Q) {
  P test_,c1_,c2_;
  P tmpF200;
  P xF199;
  P xF198;
  P xF197;
  P xF196;
  P yF195;
  P xF194;
  P iF193;
  P yF192;
  P xF191;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(test_, 0);
  ARG(c1_, 1);
  ARG(c2_, 2);
  T3 = (P)YOtlen(c1_);
  xF191 = T3;
  T4 = (P)YOtlen(c2_);
  yF192 = T4;
  T2 = (P)YPeqQ(xF191,yF192);
  T1 = (P)YPbb(T2);
  if (T2) {
    T17 = (P)YOtlen(c1_);
    T16 = (P)YOA(T17,YPint((P)-1));
    iF193 = T16;
    for (;;) {
      P a21_0;
    loop21:
      xF194 = iF193;
      yF195 = YPint((P)0);
      xF196 = xF194;
      xF197 = xF196;
      T14 = (P)YPiGG(xF197,(P)2);
      xF198 = yF195;
      xF199 = xF198;
      T15 = (P)YPiGG(xF199,(P)2);
      T13 = (P)YPiL(T14,T15);
      T12 = (P)YPbb(T13);
      tmpF200 = T12;
      if (tmpF200 != YPfalse) {
        T5 = tmpF200;
      } else {
        T8 = (P)YOtelt(c1_,iF193);
        T9 = (P)YOtelt(c2_,iF193);
        T7 = CALL2(1,test_,T8,T9);
        if (T7 != YPfalse) {
          T11 = (P)YOA(iF193,YPint((P)-1));
          a21_0 = T11;
          iF193 = a21_0;
          goto loop21;
          T6 = T10;
        } else {
          T6 = YPfalse;
        }
        T5 = T6;
      }
      break;
    }
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

INLINE P YPto_tup(P args_) {
  P xF222;
  P xF221;
  P iF220;
  P xF219;
  P yF218;
  P xF217;
  P kF216;
  P xF215;
  P xF214;
  P iF213;
  P xF212;
  P xF211;
  P xF210;
  P iF209;
  P xF208;
  P yF207;
  P xF206;
  P tF205;
  P xF204;
  P xF203;
  P lF202;
  P xF201;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
DEFCREGS();
  xF201 = args_;
  T24 = (P)YPopts_count(xF201);
  lF202 = T24;
  xF203 = lF202;
  xF204 = xF203;
  T23 = (P)YPiGG(xF204,(P)2);
  T22 = (P)YPtup(T23,VARREF(Ynul));
  tF205 = T22;
  xF206 = lF202;
  yF207 = YPint((P)2);
  T1 = (P)YPiE(xF206,yF207);
  T0 = (P)YPbb(T1);
  if (T1) {
    xF208 = args_;
    iF209 = YPint((P)0);
    T3 = (P)YPopts_location(xF208);
    xF210 = iF209;
    xF211 = xF210;
    T5 = (P)YPiGG(xF211,(P)2);
    T4 = (P)YPi_((P)0,T5);
    T2 = (P)YPloc_off(T3,T4);
    (P)YOtelt_setter(T2,tF205,YPint((P)0));
    xF212 = args_;
    iF213 = YPint((P)1);
    T8 = (P)YPopts_location(xF212);
    xF214 = iF213;
    xF215 = xF214;
    T10 = (P)YPiGG(xF215,(P)2);
    T9 = (P)YPi_((P)0,T10);
    T7 = (P)YPloc_off(T8,T9);
    T6 = (P)YOtelt_setter(T7,tF205,YPint((P)1));
  } else {
    T21 = (P)YOA(lF202,YPint((P)-1));
    kF216 = T21;
    for (;;) {
      P a22_0;
    loop22:
      xF217 = kF216;
      yF218 = YPint((P)-1);
      T14 = (P)YPiE(xF217,yF218);
      T13 = (P)YPbb(T14);
      T12 = XCALL1(1,VARREF(Ynot),T13);
      if (T12 != YPfalse) {
        xF219 = args_;
        iF220 = kF216;
        T16 = (P)YPopts_location(xF219);
        xF221 = iF220;
        xF222 = xF221;
        T18 = (P)YPiGG(xF222,(P)2);
        T17 = (P)YPi_((P)0,T18);
        T15 = (P)YPloc_off(T16,T17);
        (P)YOtelt_setter(T15,tF205,kF216);
        T20 = (P)YOA(kF216,YPint((P)-1));
        a22_0 = T20;
        kF216 = a22_0;
        goto loop22;
        T11 = T19;
      } else {
        T11 = YPfalse;
      }
      break;
    }
  }
  return tF205;
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
  P yF226;
  P xF225;
  P yF224;
  P xF223;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T3 = CALL1(1,VARREF(YOfun_arity),x_);
  xF223 = T3;
  T4 = CALL1(1,VARREF(YOfun_arity),y_);
  yF224 = T4;
  T2 = (P)YPiE(xF223,yF224);
  T1 = (P)YPbb(T2);
  if (T2) {
    T8 = CALL1(1,VARREF(YOfun_naryQ),x_);
    xF225 = T8;
    T9 = CALL1(1,VARREF(YOfun_naryQ),y_);
    yF226 = T9;
    T7 = (P)YPeqQ(xF225,yF226);
    T6 = (P)YPbb(T7);
    if (T7) {
      T12 = CALL1(1,VARREF(YOfun_specs),x_);
      T13 = CALL1(1,VARREF(YOfun_specs),y_);
      T11 = CALL3(1,VARREF(YOall2Q),VARREF(YOsubtypeQ),T12,T13);
      if (T11 != YPfalse) {
        T15 = CALL1(1,VARREF(YOfun_val),x_);
        T16 = CALL1(1,VARREF(YOfun_val),y_);
        T14 = CALL2(1,VARREF(YOsubtypeQ),T15,T16);
        T10 = T14;
      } else {
        T10 = YPfalse;
      }
      T5 = T10;
    } else {
      T5 = YPfalse;
    }
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
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
  P tmpF242;
  P now_sameQF241;
  P gmF240;
  P xF239;
  P xF238;
  P gmsF237;
  P sameQF236;
  P metsF235;
  P spec_classF234;
  P yF233;
  P xF232;
  P tmpF231;
  P specF230;
  P xF229;
  P xF228;
  P specsF227;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
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
    T25 = CALL1(1,VARREF(YOfun_specs),m_);
    specsF227 = T25;
    for (;;) {
      P a23_0;
    loop23:
      xF228 = specsF227;
      xF229 = xF228;
      T10 = (P)YPeqQ(xF229,VARREF(Ynil));
      T9 = (P)YPbb(T10);
      T8 = CALL1(1,VARREF(Ynot),T9);
      if (T8 != YPfalse) {
        T24 = (P)YOhead(specsF227);
        specF230 = T24;
        T16 = CALL1(1,VARREF(YOsingleton_specQ),specF230);
        tmpF231 = T16;
        if (tmpF231 != YPfalse) {
          T13 = tmpF231;
        } else {
          xF232 = specF230;
          yF233 = VARREF(YLanyG);
          T15 = (P)YPeqQ(xF232,yF233);
          T14 = (P)YPbb(T15);
          T13 = T14;
        }
        T12 = CALL1(1,VARREF(Ynot),T13);
        if (T12 != YPfalse) {
          T23 = (P)YPobject_class(specF230);
          spec_classF234 = T23;
          T18 = (P)YPclass_gens(spec_classF234);
          T17 = (P)YOadd_new(T18,g_);
          (P)YPclass_gens_setter(T17,spec_classF234);
          T20 = (P)YPclass_mets(spec_classF234);
          T19 = (P)YOadd_new(T20,m_);
          (P)YPclass_mets_setter(T19,spec_classF234);
          T22 = (P)YOtail(specsF227);
          a23_0 = T22;
          specsF227 = a23_0;
          goto loop23;
          T11 = T21;
        } else {
          T11 = YPfalse;
        }
        T7 = T11;
      } else {
        T7 = YPfalse;
      }
      break;
    }
    metsF235 = Ynil;
    sameQF236 = YPfalse;
    T40 = CALL1(1,VARREF(YOfun_mets),g_);
    check_type(T40,VARREF(YLmetsG));
    gmsF237 = T40;
    for (;;) {
      P a24_0,a24_1,a24_2;
    loop24:
      xF238 = gmsF237;
      xF239 = xF238;
      T28 = (P)YPeqQ(xF239,VARREF(Ynil));
      T27 = (P)YPbb(T28);
      if (T28) {
        if (sameQF236 != YPfalse) {
          T31 = metsF235;
        } else {
          T32 = (P)YOadd(metsF235,m_);
          T31 = T32;
        }
        T30 = CALL1(1,VARREF(YOrevX),T31);
        T29 = (P)YPgen_mets_setter(T30,g_);
        T26 = T29;
      } else {
        T39 = (P)YOhead(gmsF237);
        gmF240 = T39;
        T38 = CALL2(1,VARREF(Yfun_same_metQ),gmF240,m_);
        now_sameQF241 = T38;
        if (now_sameQF241 != YPfalse) {
          T35 = m_;
        } else {
          T35 = gmF240;
        }
        T34 = (P)YOadd(metsF235,T35);
        tmpF242 = now_sameQF241;
        if (tmpF242 != YPfalse) {
          T36 = tmpF242;
        } else {
          T36 = sameQF236;
        }
        T37 = (P)YOtail(gmsF237);
        a24_0 = T34;
        a24_1 = T36;
        a24_2 = T37;
        metsF235 = a24_0;
        sameQF236 = a24_1;
        gmsF237 = a24_2;
        goto loop24;
        T26 = T33;
      }
      break;
    }
    T0 = g_;
  }
UNLINK_STACK();
  RET(T0);
}

INLINE P YOsubclassQ(P c1_,P c2_) {
  P xF246;
  P xF245;
  P xF244;
  P xF243;
  P T0,T1,T2,T3,T4,T5,T6;
DEFCREGS();
  T3 = (P)YPclass_row(c1_);
  T5 = (P)YPclass_id(c2_);
  xF243 = T5;
  xF244 = xF243;
  T4 = (P)YPiGG(xF244,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF245 = YPint((P)1);
  xF246 = xF245;
  T6 = (P)YPiGG(xF246,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
  return T0;
}

P YOclass_isaQ(P o_,P c_) {
  P xF255;
  P xF254;
  P xF253;
  P xF252;
  P c2F251;
  P c1F250;
  P tagF249;
  P xF248;
  P xF247;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
DEFCREGS();
  xF247 = o_;
  xF248 = xF247;
  T12 = (P)YPiB(xF248,(P)3);
  tagF249 = T12;
  T9 = (P)YPiE(tagF249,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF247);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF249);
    T7 = T11;
  }
  c1F250 = T7;
  c2F251 = c_;
  T3 = (P)YPclass_row(c1F250);
  T5 = (P)YPclass_id(c2F251);
  xF252 = T5;
  xF253 = xF252;
  T4 = (P)YPiGG(xF253,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF254 = YPint((P)1);
  xF255 = xF254;
  T6 = (P)YPiGG(xF255,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
  return T0;
}

P YOsingleton_isaQ(P o_,P t_) {
  P yF257;
  P xF256;
  P T0,T1,T2;
DEFCREGS();
  T2 = (P)YPtype_object(t_);
  xF256 = T2;
  yF257 = o_;
  T1 = (P)YPeqQ(xF256,yF257);
  T0 = (P)YPbb(T1);
  return T0;
}

FUNCODEDEF(YOisaQ) {
  P o_,t_;
  P yF262;
  P xF261;
  P tagF260;
  P xF259;
  P xF258;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  xF258 = t_;
  xF259 = xF258;
  T8 = (P)YPiB(xF259,(P)3);
  tagF260 = T8;
  T5 = (P)YPiE(tagF260,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF258);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF260);
    T3 = T7;
  }
  xF261 = T3;
  yF262 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF261,yF262);
  T1 = (P)YPbb(T2);
  if (T2) {
    T9 = (P)YOclass_isaQ(o_,t_);
    T0 = T9;
  } else {
    T10 = CALL2(1,VARREF(YisaQ),o_,t_);
    T0 = T10;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOclassL) {
  P c1_,c2_,wrt_;
  P yF270;
  P xF269;
  P yF268;
  P xF267;
  P cF266;
  P xF265;
  P xF264;
  P psF263;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  ARG(wrt_, 2);
  T13 = (P)YPclass_ancestors(wrt_);
  psF263 = T13;
  for (;;) {
    P a25_0;
  loop25:
    xF264 = psF263;
    xF265 = xF264;
    T2 = (P)YPeqQ(xF265,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL5(1,VARREF(Ycpl_error),LITREF(lit_390),LITREF(lit_391),wrt_,c1_,c2_);
      T0 = T3;
    } else {
      T12 = (P)YOhead(psF263);
      cF266 = T12;
      xF267 = cF266;
      yF268 = c1_;
      T6 = (P)YPeqQ(xF267,yF268);
      T5 = (P)YPbb(T6);
      if (T6) {
        T4 = YPtrue;
      } else {
        xF269 = cF266;
        yF270 = c2_;
        T9 = (P)YPeqQ(xF269,yF270);
        T8 = (P)YPbb(T9);
        if (T9) {
          T7 = YPfalse;
        } else {
          T11 = (P)YOtail(psF263);
          a25_0 = T11;
          psF263 = a25_0;
          goto loop25;
          T7 = T10;
        }
        T4 = T7;
      }
      T0 = T4;
    }
    break;
  }
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
  P yF283;
  P xF282;
  P tagF281;
  P xF280;
  P xF279;
  P yF278;
  P xF277;
  P tagF276;
  P xF275;
  P xF274;
  P tmpF273;
  P yF272;
  P xF271;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF271 = t1_;
  yF272 = t2_;
  T25 = (P)YPeqQ(xF271,yF272);
  T24 = (P)YPbb(T25);
  tmpF273 = T24;
  if (tmpF273 != YPfalse) {
    T0 = tmpF273;
  } else {
    xF274 = t1_;
    xF275 = xF274;
    T10 = (P)YPiB(xF275,(P)3);
    tagF276 = T10;
    T7 = (P)YPiE(tagF276,(P)0);
    T6 = (P)YPbb(T7);
    if (T7) {
      T8 = (P)YPobject_class(xF274);
      T5 = T8;
    } else {
      T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF276);
      T5 = T9;
    }
    xF277 = T5;
    yF278 = VARREF(YLclassG);
    T4 = (P)YPeqQ(xF277,yF278);
    T3 = (P)YPbb(T4);
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      xF279 = t2_;
      xF280 = xF279;
      T20 = (P)YPiB(xF280,(P)3);
      tagF281 = T20;
      T17 = (P)YPiE(tagF281,(P)0);
      T16 = (P)YPbb(T17);
      if (T17) {
        T18 = (P)YPobject_class(xF279);
        T15 = T18;
      } else {
        T19 = (P)YPelt(VARREF(YDdirect_object_class),tagF281);
        T15 = T19;
      }
      xF282 = T15;
      yF283 = VARREF(YLclassG);
      T14 = (P)YPeqQ(xF282,yF283);
      T13 = (P)YPbb(T14);
      T12 = CALL1(1,VARREF(Ynot),T13);
      if (T12 != YPfalse) {
        T22 = CALL2(1,VARREF(YOsubtypeQ),t1_,t2_);
        if (T22 != YPfalse) {
          T23 = CALL2(1,VARREF(YOsubtypeQ),t2_,t1_);
          T21 = T23;
        } else {
          T21 = YPfalse;
        }
        T11 = T21;
      } else {
        T11 = YPfalse;
      }
      T1 = T11;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOsubtypeQ) {
  P t1_,t2_;
  P xF299;
  P xF298;
  P xF297;
  P xF296;
  P c2F295;
  P c1F294;
  P yF293;
  P xF292;
  P tagF291;
  P xF290;
  P xF289;
  P yF288;
  P xF287;
  P tagF286;
  P xF285;
  P xF284;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF284 = t2_;
  xF285 = xF284;
  T9 = (P)YPiB(xF285,(P)3);
  tagF286 = T9;
  T6 = (P)YPiE(tagF286,(P)0);
  T5 = (P)YPbb(T6);
  if (T6) {
    T7 = (P)YPobject_class(xF284);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF286);
    T4 = T8;
  }
  xF287 = T4;
  yF288 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF287,yF288);
  T2 = (P)YPbb(T3);
  if (T3) {
    xF289 = t1_;
    xF290 = xF289;
    T17 = (P)YPiB(xF290,(P)3);
    tagF291 = T17;
    T14 = (P)YPiE(tagF291,(P)0);
    T13 = (P)YPbb(T14);
    if (T14) {
      T15 = (P)YPobject_class(xF289);
      T12 = T15;
    } else {
      T16 = (P)YPelt(VARREF(YDdirect_object_class),tagF291);
      T12 = T16;
    }
    xF292 = T12;
    yF293 = VARREF(YLclassG);
    T11 = (P)YPeqQ(xF292,yF293);
    T10 = (P)YPbb(T11);
    T1 = T10;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    c1F294 = t1_;
    c2F295 = t2_;
    T21 = (P)YPclass_row(c1F294);
    T23 = (P)YPclass_id(c2F295);
    xF296 = T23;
    xF297 = xF296;
    T22 = (P)YPiGG(xF297,(P)2);
    T20 = (P)YPselt(T21,T22);
    xF298 = YPint((P)1);
    xF299 = xF298;
    T24 = (P)YPiGG(xF299,(P)2);
    T19 = (P)YPiE(T20,T24);
    T18 = (P)YPbb(T19);
    T0 = T18;
  } else {
    T25 = CALL2(1,VARREF(YsubtypeQ),t1_,t2_);
    T0 = T25;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOmay_isaQ) {
  P c_,t_;
  P xF310;
  P xF309;
  P xF308;
  P xF307;
  P c2F306;
  P c1F305;
  P yF304;
  P xF303;
  P tagF302;
  P xF301;
  P xF300;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  xF300 = t_;
  xF301 = xF300;
  T8 = (P)YPiB(xF301,(P)3);
  tagF302 = T8;
  T5 = (P)YPiE(tagF302,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF300);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF302);
    T3 = T7;
  }
  xF303 = T3;
  yF304 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF303,yF304);
  T1 = (P)YPbb(T2);
  if (T2) {
    c1F305 = c_;
    c2F306 = t_;
    T13 = (P)YPclass_row(c1F305);
    T15 = (P)YPclass_id(c2F306);
    xF307 = T15;
    xF308 = xF307;
    T14 = (P)YPiGG(xF308,(P)2);
    T12 = (P)YPselt(T13,T14);
    xF309 = YPint((P)1);
    xF310 = xF309;
    T16 = (P)YPiGG(xF310,(P)2);
    T11 = (P)YPiE(T12,T16);
    T10 = (P)YPbb(T11);
    if (T11) {
      T17 = CALL2(1,VARREF(YOtup),YPtrue,YPtrue);
      T9 = T17;
    } else {
      T18 = CALL2(1,VARREF(YOtup),YPfalse,YPfalse);
      T9 = T18;
    }
    T0 = T9;
  } else {
    T19 = CALL2(1,VARREF(Ymay_isaQ),c_,t_);
    T0 = T19;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOorder_specs_class) {
  P t1_,t2_,arg_;
  P tagF315;
  P xF314;
  P xF313;
  P yF312;
  P xF311;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  xF311 = t1_;
  yF312 = t2_;
  T2 = (P)YPeqQ(xF311,yF312);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(YOtup),LITREF(lit_402),t1_);
    T0 = T3;
  } else {
    xF313 = arg_;
    xF314 = xF313;
    T11 = (P)YPiB(xF314,(P)3);
    tagF315 = T11;
    T8 = (P)YPiE(tagF315,(P)0);
    T7 = (P)YPbb(T8);
    if (T8) {
      T9 = (P)YPobject_class(xF313);
      T6 = T9;
    } else {
      T10 = (P)YPelt(VARREF(YDdirect_object_class),tagF315);
      T6 = T10;
    }
    T5 = CALL3(1,VARREF(YOclassL),t1_,t2_,T6);
    if (T5 != YPfalse) {
      T12 = CALL2(1,VARREF(YOtup),LITREF(lit_403),t1_);
      T4 = T12;
    } else {
      T13 = CALL2(1,VARREF(YOtup),LITREF(lit_404),t2_);
      T4 = T13;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOorder_specs) {
  P t1_,t2_,arg_;
  P yF325;
  P xF324;
  P tagF323;
  P xF322;
  P xF321;
  P yF320;
  P xF319;
  P tagF318;
  P xF317;
  P xF316;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  xF316 = t1_;
  xF317 = xF316;
  T9 = (P)YPiB(xF317,(P)3);
  tagF318 = T9;
  T6 = (P)YPiE(tagF318,(P)0);
  T5 = (P)YPbb(T6);
  if (T6) {
    T7 = (P)YPobject_class(xF316);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF318);
    T4 = T8;
  }
  xF319 = T4;
  yF320 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF319,yF320);
  T2 = (P)YPbb(T3);
  if (T3) {
    xF321 = t2_;
    xF322 = xF321;
    T17 = (P)YPiB(xF322,(P)3);
    tagF323 = T17;
    T14 = (P)YPiE(tagF323,(P)0);
    T13 = (P)YPbb(T14);
    if (T14) {
      T15 = (P)YPobject_class(xF321);
      T12 = T15;
    } else {
      T16 = (P)YPelt(VARREF(YDdirect_object_class),tagF323);
      T12 = T16;
    }
    xF324 = T12;
    yF325 = VARREF(YLclassG);
    T11 = (P)YPeqQ(xF324,yF325);
    T10 = (P)YPbb(T11);
    T1 = T10;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T18 = CALL3(1,VARREF(YOorder_specs_class),t1_,t2_,arg_);
    T0 = T18;
  } else {
    T19 = CALL3(1,VARREF(Yorder_specs),t1_,t2_,arg_);
    T0 = T19;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yorder_mets) {
  P m1_,m2_,args_;
  P yF348;
  P xF347;
  P tmpF346;
  P yF345;
  P xF344;
  P yF343;
  P xF342;
  P yF341;
  P xF340;
  P idxF339;
  P cmpF338;
  P cmpAtypF337;
  P xF336;
  P xF335;
  P iF334;
  P xF333;
  P m2specF332;
  P m1specF331;
  P yF330;
  P xF329;
  P idxF328;
  P stateF327;
  P arityF326;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(args_, 2);
  T27 = CALL1(1,VARREF(YOfun_arity),m1_);
  check_type(T27,VARREF(YLfixnumG));
  arityF326 = T27;
  check_type(LITREF(lit_402),VARREF(YLsymG));
  stateF327 = LITREF(lit_402);
  check_type(YPint((P)0),VARREF(YLfixnumG));
  idxF328 = YPint((P)0);
  for (;;) {
    P a26_0,a26_1;
  loop26:
    xF329 = idxF328;
    yF330 = arityF326;
    T2 = (P)YPiE(xF329,yF330);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = stateF327;
    } else {
      T26 = CALL2(1,VARREF(Yfun_spec),m1_,idxF328);
      m1specF331 = T26;
      T25 = CALL2(1,VARREF(Yfun_spec),m2_,idxF328);
      m2specF332 = T25;
      xF333 = args_;
      iF334 = idxF328;
      T22 = (P)YPopts_location(xF333);
      xF335 = iF334;
      xF336 = xF335;
      T24 = (P)YPiGG(xF336,(P)2);
      T23 = (P)YPi_((P)0,T24);
      T21 = (P)YPloc_off(T22,T23);
      T20 = CALL3(1,VARREF(YOorder_specs),m1specF331,m2specF332,T21);
      check_type(T20,VARREF(YLtupG));
      cmpAtypF337 = T20;
      T19 = (P)YOtelt(cmpAtypF337,YPint((P)0));
      check_type(T19,VARREF(YLsymG));
      cmpF338 = T19;
      T18 = (P)YOA(idxF328,YPint((P)1));
      check_type(T18,VARREF(YLfixnumG));
      idxF339 = T18;
      xF340 = cmpF338;
      yF341 = LITREF(lit_402);
      T5 = (P)YPeqQ(xF340,yF341);
      T4 = (P)YPbb(T5);
      if (T5) {
        a26_0 = stateF327;
        a26_1 = idxF339;
        stateF327 = a26_0;
        idxF328 = a26_1;
        goto loop26;
        T3 = T6;
      } else {
        xF342 = cmpF338;
        yF343 = LITREF(lit_409);
        T11 = (P)YPeqQ(xF342,yF343);
        T10 = (P)YPbb(T11);
        T9 = CALL1(1,VARREF(Ynot),T10);
        if (T9 != YPfalse) {
          xF344 = stateF327;
          yF345 = LITREF(lit_402);
          T16 = (P)YPeqQ(xF344,yF345);
          T15 = (P)YPbb(T16);
          tmpF346 = T15;
          if (tmpF346 != YPfalse) {
            T12 = tmpF346;
          } else {
            xF347 = cmpF338;
            yF348 = stateF327;
            T14 = (P)YPeqQ(xF347,yF348);
            T13 = (P)YPbb(T14);
            T12 = T13;
          }
          T8 = T12;
        } else {
          T8 = YPfalse;
        }
        if (T8 != YPfalse) {
          a26_0 = cmpF338;
          a26_1 = idxF339;
          stateF327 = a26_0;
          idxF328 = a26_1;
          goto loop26;
          T7 = T17;
        } else {
          T7 = LITREF(lit_409);
        }
        T3 = T7;
      }
      T0 = T3;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_make_ambiguous_403) {
  P headed_list_;
  P t1F353;
  P tmpF352;
  P yF351;
  P xF350;
  P lF349;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(headed_list_, 0);
  T6 = (P)YOtail(headed_list_);
  check_type(T6,VARREF(YLlstG));
  lF349 = T6;
  for (;;) {
    P a27_0;
  loop27:
    xF350 = lF349;
    yF351 = Ynil;
    T5 = (P)YPeqQ(xF350,yF351);
    T4 = (P)YPbb(T5);
    tmpF352 = T4;
    if (tmpF352 != YPfalse) {
      T0 = tmpF352;
    } else {
      T3 = (P)YOtail(lF349);
      t1F353 = T3;
      T1 = (P)YOtail(FREEREF(0));
      (P)YOtail_setter(T1,lF349);
      (P)YOtail_setter(lF349,FREEREF(0));
      a27_0 = t1F353;
      lF349 = a27_0;
      goto loop27;
      T0 = T2;
    }
    break;
  }
  (P)YOtail_setter(Ynil,headed_list_);
  T9 = (P)YOtail(FREEREF(0));
  T8 = (P)YOpair(FREEREF(1),T9);
  T7 = (P)YOtail_setter(T8,FREEREF(0));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_precedes_allQ_404) {
  P l_;
  P yF358;
  P xF357;
  P yF356;
  P xF355;
  P lF354;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(l_, 0);
  check_type(l_,VARREF(YLlstG));
  lF354 = l_;
  for (;;) {
    P a28_0;
  loop28:
    xF355 = lF354;
    yF356 = Ynil;
    T2 = (P)YPeqQ(xF355,yF356);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPtrue;
    } else {
      T7 = (P)YOhead(lF354);
      T6 = CALL3(1,FREEREF(2),FREEREF(0),T7,FREEREF(1));
      xF357 = T6;
      yF358 = LITREF(lit_403);
      T5 = (P)YPeqQ(xF357,yF358);
      T4 = (P)YPbb(T5);
      if (T5) {
        T9 = (P)YOtail(lF354);
        a28_0 = T9;
        lF354 = a28_0;
        goto loop28;
        T3 = T8;
      } else {
        T3 = YPfalse;
      }
      T0 = T3;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_subsequent_ambiguities_405) {
  P oprev_;
  P tmpF359;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(oprev_, 0);
  T7 = (P)YOtail(oprev_);
  T6 = CALL1(1,FREEREF(0),T7);
  T5 = CALL1(1,VARREF(Ynot),T6);
  tmpF359 = T5;
  if (tmpF359 != YPfalse) {
    T1 = tmpF359;
  } else {
    T4 = (P)YOtail(FREEREF(1));
    T3 = CALL1(1,FREEREF(0),T4);
    T2 = CALL1(1,VARREF(Ynot),T3);
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T8 = CALL1(1,FREEREF(2),oprev_);
    T0 = T8;
  } else {
    T11 = (P)YOtail(oprev_);
    T10 = (P)YOpair(FREEREF(3),T11);
    T9 = (P)YOtail_setter(T10,oprev_);
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_406) {
  P oprev_,osub_;
  P yF373;
  P xF372;
  P yF371;
  P xF370;
  P indicF369;
  P xF368;
  P xF367;
  P yF366;
  P xF365;
  P yF364;
  P xF363;
  P indicF362;
  P xF361;
  P xF360;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(oprev_, 0);
  ARG(osub_, 1);
  for (;;) {
    P a29_0,a29_1;
  loop29:
    xF367 = osub_;
    xF368 = xF367;
    T2 = (P)YPeqQ(xF368,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL1(1,FREEREF(0),oprev_);
      T0 = T3;
    } else {
      T15 = (P)YOhead(osub_);
      T14 = CALL3(1,FREEREF(3),FREEREF(1),T15,FREEREF(2));
      indicF369 = T14;
      xF370 = indicF369;
      yF371 = LITREF(lit_403);
      T6 = (P)YPeqQ(xF370,yF371);
      T5 = (P)YPbb(T6);
      if (T6) {
        T7 = CALL1(1,FREEREF(0),oprev_);
        T4 = T7;
      } else {
        xF372 = indicF369;
        yF373 = LITREF(lit_404);
        T10 = (P)YPeqQ(xF372,yF373);
        T9 = (P)YPbb(T10);
        if (T10) {
          T12 = (P)YOtail(osub_);
          a29_0 = osub_;
          a29_1 = T12;
          oprev_ = a29_0;
          osub_ = a29_1;
          goto loop29;
          T8 = T11;
        } else {
          T13 = CALL1(1,FREEREF(4),oprev_);
          T8 = T13;
        }
        T4 = T8;
      }
      T0 = T4;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yord_app_mets_1) {
  P mets_,args_,order_mets_;
  P insertF383;
  P check_subsequent_ambiguitiesF382;
  P precedes_allQF381;
  P make_ambiguousF380;
  P metF379;
  P yF378;
  P xF377;
  P metsF376;
  P aheadF375;
  P oheadF374;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(mets_, 0);
  ARG(args_, 1);
  ARG(order_mets_, 2);
  T16 = (P)YOpair(YPfalse,Ynil);
  check_type(T16,VARREF(YLlstG));
  oheadF374 = T16;
  T15 = (P)YOpair(YPfalse,Ynil);
  check_type(T15,VARREF(YLlstG));
  aheadF375 = T15;
  check_type(mets_,VARREF(YLlstG));
  metsF376 = mets_;
  for (;;) {
    P a30_0;
  loop30:
    xF377 = metsF376;
    yF378 = Ynil;
    T3 = (P)YPeqQ(xF377,yF378);
    T2 = (P)YPbb(T3);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T11 = (P)YOhead(metsF376);
      check_type(T11,VARREF(YLmetG));
      metF379 = T11;
      T7 = FUNSHELL(1,fun_make_ambiguous_403,2);
      make_ambiguousF380 = T7;
      T8 = FUNSHELL(1,fun_precedes_allQ_404,3);
      precedes_allQF381 = T8;
      T9 = FUNSHELL(1,fun_check_subsequent_ambiguities_405,4);
      check_subsequent_ambiguitiesF382 = T9;
      T10 = FUNSHELL(1,fun_insert_406,5);
      insertF383 = T10;
      FUNINIT(make_ambiguousF380, 2,aheadF375,metF379);
      FUNINIT(precedes_allQF381, 3,metF379,args_,order_mets_);
      FUNINIT(check_subsequent_ambiguitiesF382, 4,precedes_allQF381,aheadF375,make_ambiguousF380,metF379);
      FUNINIT(insertF383, 5,check_subsequent_ambiguitiesF382,metF379,args_,order_mets_,make_ambiguousF380);
      T4 = (P)YOtail(oheadF374);
      CALL2(1,insertF383,oheadF374,T4);
      T6 = (P)YOtail(metsF376);
      a30_0 = T6;
      metsF376 = a30_0;
      goto loop30;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
    break;
  }
  T13 = (P)YOtail(oheadF374);
  T14 = (P)YOtail(aheadF375);
  T12 = CALL2(1,VARREF(YOtup),T13,T14);
UNLINK_STACK();
  RET(T12);
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
  P xF393;
  P xF392;
  P iF391;
  P xF390;
  P yF389;
  P xF388;
  P iF387;
  P nF386;
  P xF385;
  P xF384;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(met_, 0);
  ARG(args_, 1);
  T4 = CALL1(1,VARREF(YOfun_unification_vars),met_);
  xF384 = T4;
  xF385 = xF384;
  T3 = (P)YPeqQ(xF385,VARREF(Ynil));
  T2 = (P)YPbb(T3);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(Ymet_app_unify),met_,args_);
    T0 = T5;
  } else {
    T18 = CALL1(1,VARREF(YOfun_arity),met_);
    check_type(T18,VARREF(YLfixnumG));
    nF386 = T18;
    check_type(YPint((P)0),VARREF(YLfixnumG));
    iF387 = YPint((P)0);
    for (;;) {
      P a31_0;
    loop31:
      xF388 = iF387;
      yF389 = nF386;
      T8 = (P)YPiE(xF388,yF389);
      T7 = (P)YPbb(T8);
      if (T8) {
        T6 = YPtrue;
      } else {
        xF390 = args_;
        iF391 = iF387;
        T12 = (P)YPopts_location(xF390);
        xF392 = iF391;
        xF393 = xF392;
        T14 = (P)YPiGG(xF393,(P)2);
        T13 = (P)YPi_((P)0,T14);
        T11 = (P)YPloc_off(T12,T13);
        T15 = CALL2(1,VARREF(Yfun_spec),met_,iF387);
        T10 = CALL2(1,VARREF(YOisaQ),T11,T15);
        if (T10 != YPfalse) {
          T17 = (P)YOA(iF387,YPint((P)1));
          a31_0 = T17;
          iF387 = a31_0;
          goto loop31;
          T9 = T16;
        } else {
          T9 = YPfalse;
        }
        T6 = T9;
      }
      break;
    }
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yord_app_metsT) {
  P gf_,args_;
  P considered_metsF400;
  P ansF399;
  P mF398;
  P xF397;
  P xF396;
  P msF395;
  P ansF394;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(gf_, 0);
  ARG(args_, 1);
  ansF394 = Ynil;
  T10 = CALL1(1,VARREF(YOfun_mets),gf_);
  msF395 = T10;
  for (;;) {
    P a32_0,a32_1;
  loop32:
    xF396 = msF395;
    xF397 = xF396;
    T3 = (P)YPeqQ(xF397,VARREF(Ynil));
    T2 = (P)YPbb(T3);
    if (T3) {
      T1 = ansF394;
    } else {
      T9 = (P)YOhead(msF395);
      mF398 = T9;
      T7 = CALL2(1,VARREF(Ymet_appQ),mF398,args_);
      if (T7 != YPfalse) {
        T8 = (P)YOpair(mF398,ansF394);
        T6 = T8;
      } else {
        T6 = ansF394;
      }
      ansF399 = T6;
      T5 = (P)YOtail(msF395);
      a32_0 = ansF399;
      a32_1 = T5;
      ansF394 = a32_0;
      msF395 = a32_1;
      goto loop32;
      T1 = T4;
    }
    break;
  }
  considered_metsF400 = T1;
  T0 = CALL3(1,VARREF(Yord_app_mets_1),considered_metsF400,args_,VARREF(Yorder_mets));
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
  P xF419;
  P xF418;
  P iF417;
  P xF416;
  P xF415;
  P xF414;
  P iF413;
  P xF412;
  P yF411;
  P xF410;
  P nF409;
  P xF408;
  P propQF407;
  P yF406;
  P xF405;
  P tagF404;
  P xF403;
  P xF402;
  P propF401;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  ARG(args_, 2);
  T25 = (P)YPmet_env(met_);
  propF401 = T25;
  if (propF401 != YPfalse) {
    xF402 = propF401;
    xF403 = xF402;
    T24 = (P)YPiB(xF403,(P)3);
    tagF404 = T24;
    T21 = (P)YPiE(tagF404,(P)0);
    T20 = (P)YPbb(T21);
    if (T21) {
      T22 = (P)YPobject_class(xF402);
      T19 = T22;
    } else {
      T23 = (P)YPelt(VARREF(YDdirect_object_class),tagF404);
      T19 = T23;
    }
    xF405 = T19;
    yF406 = VARREF(YLpropG);
    T18 = (P)YPeqQ(xF405,yF406);
    T17 = (P)YPbb(T18);
    T16 = T17;
  } else {
    T16 = YPfalse;
  }
  propQF407 = T16;
  xF408 = args_;
  T15 = (P)YPopts_count(xF408);
  nF409 = T15;
  if (propQF407 != YPfalse) {
    xF410 = nF409;
    yF411 = YPint((P)1);
    T3 = (P)YPiE(xF410,yF411);
    T2 = (P)YPbb(T3);
    if (T3) {
      xF412 = args_;
      iF413 = YPint((P)0);
      T6 = (P)YPopts_location(xF412);
      xF414 = iF413;
      xF415 = xF414;
      T8 = (P)YPiGG(xF415,(P)2);
      T7 = (P)YPi_((P)0,T8);
      T5 = (P)YPloc_off(T6,T7);
      T4 = CALL2(1,VARREF(Yprop_offset),T5,gen_);
      T1 = T4;
    } else {
      xF416 = args_;
      iF417 = YPint((P)1);
      T11 = (P)YPopts_location(xF416);
      xF418 = iF417;
      xF419 = xF418;
      T13 = (P)YPiGG(xF419,(P)2);
      T12 = (P)YPi_((P)0,T13);
      T10 = (P)YPloc_off(T11,T12);
      T14 = (P)YPprop_getter(propF401);
      T9 = CALL2(1,VARREF(Yprop_offset),T10,T14);
      T1 = T9;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
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
  P tmpF421;
  P tmpF420;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  T7 = CALL1(1,VARREF(YOsingleton_specQ),x_);
  tmpF420 = T7;
  if (tmpF420 != YPfalse) {
    T0 = tmpF420;
  } else {
    T6 = CALL1(1,VARREF(YOsubclass_specQ),x_);
    tmpF421 = T6;
    if (tmpF421 != YPfalse) {
      T1 = tmpF421;
    } else {
      T3 = CALL1(1,VARREF(YOunion_specQ),x_);
      if (T3 != YPfalse) {
        T5 = (P)YPunion_elts(x_);
        T4 = CALL2(1,VARREF(YOanyQ),VARREF(YOprecise_specQ),T5);
        T2 = T4;
      } else {
        T2 = YPfalse;
      }
      T1 = T2;
    }
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_423) {
  P met_;
  P yF423;
  P xF422;
  P T0,T1,T2;
LINK_STACK();
  ARG(met_, 0);
  T2 = CALL2(1,VARREF(Yfun_spec),met_,FREEREF(0));
  xF422 = T2;
  yF423 = VARREF(YLanyG);
  T1 = (P)YPiE(xF422,yF423);
  T0 = (P)YPbb(T1);
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
  P iF431;
  P yF430;
  P xF429;
  P iF428;
  P resF427;
  P xF426;
  P xF425;
  P olenF424;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(t_, 0);
  ARG(k_, 1);
  ARG(v_, 2);
  T13 = (P)YOtlen(t_);
  olenF424 = T13;
  T12 = (P)YOA(olenF424,YPint((P)2));
  xF425 = T12;
  xF426 = xF425;
  T11 = (P)YPiGG(xF426,(P)2);
  T10 = (P)YPtup(T11,VARREF(Ynul));
  resF427 = T10;
  iF428 = YPint((P)0);
  for (;;) {
    P a33_0;
  loop33:
    xF429 = iF428;
    yF430 = olenF424;
    T3 = (P)YPiE(xF429,yF430);
    T2 = (P)YPbb(T3);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T4 = (P)YOtelt(t_,iF428);
      (P)YOtelt_setter(T4,resF427,iF428);
      T8 = (P)YOA(iF428,YPint((P)1));
      iF431 = T8;
      T5 = (P)YOtelt(t_,iF431);
      (P)YOtelt_setter(T5,resF427,iF431);
      T7 = (P)YOA(iF431,YPint((P)1));
      a33_0 = T7;
      iF428 = a33_0;
      goto loop33;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
    break;
  }
  (P)YOtelt_setter(k_,resF427,olenF424);
  T9 = (P)YOA(olenF424,YPint((P)1));
  (P)YOtelt_setter(v_,resF427,T9);
UNLINK_STACK();
  QRET(resF427);
}

FUNCODEDEF(Ygen_lookup_miss_1_using) {
  P key_,instance_,all_assocs_,all_assocs_setter_,gen_,cache_,mets_,sorted_mets_,i_,args_;
  P vF446;
  P yF445;
  P xF444;
  P valF443;
  P tagF442;
  P xF441;
  P xF440;
  P yF439;
  P xF438;
  P yF437;
  P xF436;
  P jF435;
  P assocsF434;
  P cacheF433;
  P tmpF432;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
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
  tmpF432 = cache_;
  if (tmpF432 != YPfalse) {
    T36 = tmpF432;
  } else {
    T37 = (P)YPgen_cache(YPtrue,i_,VARREF(YDnul_assocs),VARREF(YDnul_assocs),(P)0);
    T36 = T37;
  }
  cacheF433 = T36;
  T35 = CALL1(1,all_assocs_,cacheF433);
  assocsF434 = T35;
  jF435 = YPint((P)0);
  for (;;) {
    P a34_0;
  loop34:
    xF436 = jF435;
    T4 = (P)YOtlen(assocsF434);
    yF437 = T4;
    T3 = (P)YPiE(xF436,yF437);
    T2 = (P)YPbb(T3);
    if (T3) {
      xF438 = all_assocs_;
      yF439 = VARREF(YOgen_cache_classes);
      T8 = (P)YPeqQ(xF438,yF439);
      T7 = (P)YPbb(T8);
      if (T8) {
        T10 = BOXVAL(key_);
        T9 = (P)YPclass_forward(T10);
        T6 = T9;
      } else {
        T6 = YPfalse;
      }
      if (T6 != YPfalse) {
        CALL1(1,VARREF(Yupdate_instance_for_changed_class),instance_);
        xF440 = instance_;
        xF441 = xF440;
        T16 = (P)YPiB(xF441,(P)3);
        tagF442 = T16;
        T13 = (P)YPiE(tagF442,(P)0);
        T12 = (P)YPbb(T13);
        if (T13) {
          T14 = (P)YPobject_class(xF440);
          T11 = T14;
        } else {
          T15 = (P)YPelt(VARREF(YDdirect_object_class),tagF442);
          T11 = T15;
        }
        BOXVAL(key_) = T11;
        T18 = CALL1(0,all_assocs_,cacheF433);
        a34_0 = T18;
        jF435 = a34_0;
        goto loop34;
        T5 = T17;
      } else {
        T23 = (P)YOA(i_,YPint((P)1));
        T22 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,gen_,YPfalse,mets_,sorted_mets_,T23,args_);
        valF443 = T22;
        T21 = BOXVAL(key_);
        T20 = CALL3(1,VARREF(YOcache_add),assocsF434,T21,valF443);
        T19 = CALL2(1,all_assocs_setter_,T20,cacheF433);
        T5 = T19;
      }
      T1 = T5;
    } else {
      T27 = (P)YOtelt(assocsF434,jF435);
      xF444 = T27;
      T28 = BOXVAL(key_);
      yF445 = T28;
      T26 = (P)YPeqQ(xF444,yF445);
      T25 = (P)YPbb(T26);
      if (T26) {
        T32 = (P)YOA(jF435,YPint((P)1));
        T31 = (P)YOtelt(assocsF434,T32);
        vF446 = T31;
        T30 = (P)YOA(i_,YPint((P)1));
        T29 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,gen_,vF446,mets_,sorted_mets_,T30,args_);
        T24 = T29;
      } else {
        T34 = (P)YOA(jF435,YPint((P)2));
        a34_0 = T34;
        jF435 = a34_0;
        goto loop34;
        T24 = T33;
      }
      T1 = T24;
    }
    break;
  }
UNLINK_STACK();
  QRET(cacheF433);
}

FUNCODEDEF(YOspecd_args) {
  P args_,i_,arg_;
  P xF470;
  P xF469;
  P iF468;
  P xF467;
  P zF466;
  P xF465;
  P xF464;
  P iF463;
  P xF462;
  P yF461;
  P xF460;
  P yF459;
  P xF458;
  P xF457;
  P kF456;
  P rF455;
  P tF454;
  P xF453;
  P xF452;
  P xF451;
  P vF450;
  P xF449;
  P xF448;
  P xF447;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(args_, 0);
  ARG(i_, 1);
  ARG(arg_, 2);
  xF447 = args_;
  T26 = (P)YPopts_count(xF447);
  xF448 = T26;
  xF449 = xF448;
  T25 = (P)YPiGG(xF449,(P)2);
  T24 = (P)YPtup(T25,VARREF(Ynul));
  vF450 = T24;
  T20 = (P)YPtlen(vF450);
  T19 = (P)YPprop_dat_at(vF450,T20);
  xF451 = T19;
  T18 = (P)YPtag_into(xF451,(P)3);
  T23 = (P)YPtlen(vF450);
  xF452 = T23;
  xF453 = xF452;
  tF454 = (P)1;
  T22 = (P)YPiLL(xF453,(P)2);
  T21 = (P)YPiv(T22,tF454);
  T17 = (P)YPopts_tup(T18,T21,vF450);
  rF455 = T17;
  kF456 = YPint((P)0);
  for (;;) {
    P a35_0;
  loop35:
    xF457 = args_;
    T3 = (P)YPopts_count(xF457);
    xF458 = T3;
    yF459 = kF456;
    T2 = (P)YPeqQ(xF458,yF459);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = rF455;
    } else {
      xF460 = kF456;
      yF461 = i_;
      T10 = (P)YPeqQ(xF460,yF461);
      T9 = (P)YPbb(T10);
      if (T10) {
        T8 = arg_;
      } else {
        xF462 = args_;
        iF463 = kF456;
        T12 = (P)YPopts_location(xF462);
        xF464 = iF463;
        xF465 = xF464;
        T14 = (P)YPiGG(xF465,(P)2);
        T13 = (P)YPi_((P)0,T14);
        T11 = (P)YPloc_off(T12,T13);
        T8 = T11;
      }
      zF466 = T8;
      xF467 = rF455;
      iF468 = kF456;
      T5 = (P)YPopts_location(xF467);
      xF469 = iF468;
      xF470 = xF469;
      T7 = (P)YPiGG(xF470,(P)2);
      T6 = (P)YPi_((P)0,T7);
      T4 = (P)YPloc_off_setter(zF466,T5,T6);
      T16 = (P)YOA(kF456,YPint((P)1));
      a35_0 = T16;
      kF456 = a35_0;
      goto loop35;
      T0 = T15;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yrequires_singleton_prec) {
  P mets_,pos_;
  P xF472;
  P xF471;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
  T3 = CALL2(1,VARREF(YOmets_subclasses_at),mets_,pos_);
  xF471 = T3;
  xF472 = xF471;
  T2 = (P)YPeqQ(xF472,VARREF(Ynil));
  T1 = (P)YPbb(T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yensure_singleton_cache) {
  P gen_,cache_,mets_,sorted_mets_,i_,args_;
  P app_metsF485;
  P smetsF484;
  P argsF483;
  P argF482;
  P singF481;
  P xF480;
  P xF479;
  P singletonsF478;
  P cacheF477;
  P xF476;
  P xF475;
  P singletonsF474;
  P tmpF473;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(gen_, 0);
  ARG(cache_, 1);
  ARG(mets_, 2);
  ARG(sorted_mets_, 3);
  ARG(i_, 4);
  ARG(args_, 5);
  tmpF473 = cache_;
  if (tmpF473 != YPfalse) {
    T0 = tmpF473;
  } else {
    T2 = CALL2(1,VARREF(Yrequires_singleton_prec),mets_,i_);
    if (T2 != YPfalse) {
      T3 = (P)YPgen_cache(YPfalse,i_,VARREF(YDnul_assocs),VARREF(YDnul_assocs),(P)0);
      T1 = T3;
    } else {
      T18 = CALL2(1,VARREF(YOmets_singletons_at),mets_,i_);
      singletonsF474 = T18;
      xF475 = singletonsF474;
      xF476 = xF475;
      T6 = (P)YPeqQ(xF476,VARREF(Ynil));
      T5 = (P)YPbb(T6);
      if (T6) {
        T4 = YPfalse;
      } else {
        T17 = (P)YPgen_cache(YPtrue,i_,VARREF(YDnul_assocs),VARREF(YDnul_assocs),(P)0);
        cacheF477 = T17;
        singletonsF478 = singletonsF474;
        for (;;) {
          P a36_0;
        loop36:
          xF479 = singletonsF478;
          xF480 = xF479;
          T9 = (P)YPeqQ(xF480,VARREF(Ynil));
          T8 = (P)YPbb(T9);
          if (T9) {
            T7 = cacheF477;
          } else {
            T16 = (P)YOhead(singletonsF478);
            singF481 = T16;
            T15 = (P)YPtype_object(singF481);
            argF482 = T15;
            T14 = CALL3(1,VARREF(YOspecd_args),args_,i_,argF482);
            argsF483 = T14;
            T13 = CALL2(1,VARREF(Ychoose_methods),gen_,argsF483);
            smetsF484 = T13;
            T12 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,singF481,i_);
            app_metsF485 = T12;
            CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,argF482,argF482,VARREF(YOgen_cache_singletons),VARREF(YOgen_cache_singletons_setter),gen_,cacheF477,mets_,smetsF484,i_,argsF483);
            T11 = (P)YOtail(singletonsF478);
            a36_0 = T11;
            singletonsF478 = a36_0;
            goto loop36;
            T7 = T10;
          }
          break;
        }
        T4 = T7;
      }
      T1 = T4;
    }
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss_1) {
  P gen_,ocache_,mets_,sorted_mets_,i_,args_;
  P app_metsF511;
  P classF510;
  P tagF509;
  P xF508;
  P xF507;
  P metsF506;
  P tmpF505;
  P yF504;
  P xF503;
  P singQF502;
  P cacheF501;
  P argF500;
  P xF499;
  P xF498;
  P iF497;
  P xF496;
  P tmpF495;
  P xF494;
  P xF493;
  P xF492;
  P xF491;
  P yF490;
  P xF489;
  P tmpF488;
  P yF487;
  P xF486;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46;
LINK_STACK();
  ARG(gen_, 0);
  ARG(ocache_, 1);
  ARG(mets_, 2);
  ARG(sorted_mets_, 3);
  ARG(i_, 4);
  ARG(args_, 5);
  xF486 = i_;
  T3 = CALL1(1,VARREF(YOfun_arity),gen_);
  yF487 = T3;
  T2 = (P)YPiE(xF486,yF487);
  T1 = (P)YPbb(T2);
  if (T2) {
    T6 = (P)YOhead(sorted_mets_);
    T5 = CALL3(1,VARREF(Ymethod_accessor_offset),gen_,T6,args_);
    tmpF488 = T5;
    if (tmpF488 != YPfalse) {
      T4 = tmpF488;
    } else {
      T4 = sorted_mets_;
    }
    T0 = T4;
  } else {
    if (ocache_ != YPfalse) {
      xF489 = i_;
      T15 = (P)YPgen_cache_arg_pos(ocache_);
      yF490 = T15;
      xF491 = xF489;
      xF492 = xF491;
      T13 = (P)YPiGG(xF492,(P)2);
      xF493 = yF490;
      xF494 = xF493;
      T14 = (P)YPiGG(xF494,(P)2);
      T12 = (P)YPiL(T13,T14);
      T11 = (P)YPbb(T12);
      T10 = T11;
    } else {
      T10 = YPfalse;
    }
    tmpF495 = T10;
    if (tmpF495 != YPfalse) {
      T8 = tmpF495;
    } else {
      T9 = CALL2(1,VARREF(YOmets_unspecialized_atQ),mets_,i_);
      T8 = T9;
    }
    if (T8 != YPfalse) {
      T17 = (P)YOA(i_,YPint((P)1));
      T16 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,gen_,ocache_,mets_,sorted_mets_,T17,args_);
      T7 = T16;
    } else {
      if (YPtrue != YPfalse) {
        xF496 = args_;
        iF497 = i_;
        T44 = (P)YPopts_location(xF496);
        xF498 = iF497;
        xF499 = xF498;
        T46 = (P)YPiGG(xF499,(P)2);
        T45 = (P)YPi_((P)0,T46);
        T43 = (P)YPloc_off(T44,T45);
        argF500 = T43;
        T42 = CALLN(1,VARREF(Yensure_singleton_cache),6,gen_,ocache_,mets_,sorted_mets_,i_,args_);
        cacheF501 = T42;
        T41 = (P)YOhead(sorted_mets_);
        T40 = CALL2(1,VARREF(Yfun_spec),T41,i_);
        T39 = CALL1(1,VARREF(YOsingleton_specQ),T40);
        singQF502 = T39;
        if (singQF502 != YPfalse) {
          xF503 = ocache_;
          yF504 = cacheF501;
          T26 = (P)YPeqQ(xF503,yF504);
          T25 = (P)YPbb(T26);
          T24 = T25;
        } else {
          T24 = YPfalse;
        }
        tmpF505 = T24;
        if (tmpF505 != YPfalse) {
          T20 = tmpF505;
        } else {
          if (cacheF501 != YPfalse) {
            T23 = (P)YPgen_cache_missableQ(cacheF501);
            T22 = CALL1(1,VARREF(Ynot),T23);
            T21 = T22;
          } else {
            T21 = YPfalse;
          }
          T20 = T21;
        }
        if (T20 != YPfalse) {
          T29 = (P)YPsingleton(argF500);
          T28 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,T29,i_);
          metsF506 = T28;
          T27 = CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,argF500,argF500,VARREF(YOgen_cache_singletons),VARREF(YOgen_cache_singletons_setter),gen_,cacheF501,metsF506,sorted_mets_,i_,args_);
          T19 = T27;
        } else {
          if (singQF502 != YPfalse) {
            T30 = cacheF501;
          } else {
            xF507 = argF500;
            xF508 = xF507;
            T38 = (P)YPiB(xF508,(P)3);
            tagF509 = T38;
            T35 = (P)YPiE(tagF509,(P)0);
            T34 = (P)YPbb(T35);
            if (T35) {
              T36 = (P)YPobject_class(xF507);
              T33 = T36;
            } else {
              T37 = (P)YPelt(VARREF(YDdirect_object_class),tagF509);
              T33 = T37;
            }
            classF510 = T33;
            T32 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,classF510,i_);
            app_metsF511 = T32;
            T31 = CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,classF510,argF500,VARREF(YOgen_cache_classes),VARREF(YOgen_cache_classes_setter),gen_,cacheF501,app_metsF511,sorted_mets_,i_,args_);
            T30 = T31;
          }
          T19 = T30;
        }
        T18 = T19;
      } else {
        T18 = YPfalse;
      }
      T7 = T18;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss) {
  P gen_,args_;
  P metsF512;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
  T3 = CALL2(1,VARREF(Ychoose_methods),gen_,args_);
  metsF512 = T3;
  T1 = (P)YPfun_cache(gen_);
  T2 = (P)YPgen_mets(gen_);
  T0 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,gen_,T1,T2,metsF512,YPint((P)0),args_);
UNLINK_STACK();
  QRET(T0);
}

INLINE P Ygen_lookup(P gen_,P args_) {
  P cF514;
  P tmpF513;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  T4 = (P)YPfun_cache(gen_);
  tmpF513 = T4;
  if (tmpF513 != YPfalse) {
    T1 = tmpF513;
  } else {
    T3 = XCALL2(1,VARREF(Ygen_lookup_miss),gen_,args_);
    T2 = (P)YPfun_cache_setter(T3,gen_);
    T1 = T2;
  }
  cF514 = T1;
  T0 = (P)Ygen_lookup_1(gen_,cF514,args_);
  return T0;
}

INLINE P Yprop_value_at(P object_,P offset_) {
  P xF522;
  P xF521;
  P propsF520;
  P yF519;
  P xF518;
  P valF517;
  P xF516;
  P xF515;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
  xF515 = offset_;
  xF516 = xF515;
  T10 = (P)YPiGG(xF516,(P)2);
  T9 = (P)YPprop_elt(object_,T10);
  valF517 = T9;
  xF518 = valF517;
  yF519 = VARREF(Ynul_prop);
  T2 = (P)YPeqQ(xF518,yF519);
  T1 = (P)YPbb(T2);
  if (T2) {
    T8 = XCALL1(1,VARREF(Yobject_props),object_);
    propsF520 = T8;
    T6 = XCALL2(1,VARREF(YOelt),propsF520,offset_);
    T5 = (P)YPprop_init(T6);
    T4 = XCALL1(1,T5,object_);
    xF521 = offset_;
    xF522 = xF521;
    T7 = (P)YPiGG(xF522,(P)2);
    T3 = (P)YPprop_elt_setter(T4,object_,T7);
    T0 = T3;
  } else {
    T0 = valF517;
  }
  return T0;
}

P Yprop_bound_atQ(P object_,P offset_) {
  P yF530;
  P xF529;
  P propsF528;
  P yF527;
  P xF526;
  P valF525;
  P xF524;
  P xF523;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
  xF523 = offset_;
  xF524 = xF523;
  T10 = (P)YPiGG(xF524,(P)2);
  T9 = (P)YPprop_elt(object_,T10);
  valF525 = T9;
  xF526 = valF525;
  yF527 = VARREF(Ynul_prop);
  T2 = (P)YPeqQ(xF526,yF527);
  T1 = (P)YPbb(T2);
  if (T2) {
    T8 = XCALL1(1,VARREF(Yobject_props),object_);
    propsF528 = T8;
    T7 = XCALL2(1,VARREF(YOelt),propsF528,offset_);
    T6 = (P)YPprop_init(T7);
    xF529 = T6;
    yF530 = VARREF(YPprop_unbound_error);
    T5 = (P)YPeqQ(xF529,yF530);
    T4 = (P)YPbb(T5);
    T3 = XCALL1(1,VARREF(Ynot),T4);
    T0 = T3;
  } else {
    T0 = YPtrue;
  }
  return T0;
}

INLINE P Yprop_value_at_setter(P z_,P object_,P offset_) {
  P xF532;
  P xF531;
  P T0,T1;
DEFCREGS();
  xF531 = offset_;
  xF532 = xF531;
  T1 = (P)YPiGG(xF532,(P)2);
  T0 = (P)YPprop_elt_setter(z_,object_,T1);
  return T0;
}

INLINE P Ygen_lookup_1_using(P key_,P i_,P len_,P assocs_,P missableQ_,P gen_,P args_) {
  P yF536;
  P xF535;
  P yF534;
  P xF533;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
DEFCREGS();
  for (;;) {
    P a37_0,a37_1,a37_2,a37_3,a37_4,a37_5,a37_6;
  loop37:
    T2 = (P)YPiE(i_,len_);
    T1 = (P)YPbb(T2);
    if (T2) {
      if (missableQ_ != YPfalse) {
        T3 = VARREF(YDmissed_dispatch);
      } else {
        T4 = XCALL2(1,VARREF(Ygen_lookup_miss),gen_,args_);
        (P)YPfun_cache_setter(T4,gen_);
        T5 = (P)Ygen_lookup(gen_,args_);
        T3 = T5;
      }
      T0 = T3;
    } else {
      T9 = (P)YPtelt(assocs_,i_);
      xF535 = T9;
      yF536 = key_;
      T8 = (P)YPeqQ(xF535,yF536);
      T7 = (P)YPbb(T8);
      if (T8) {
        T12 = (P)YPiA(i_,(P)1);
        T11 = (P)YPtelt(assocs_,T12);
        T10 = (P)Ygen_lookup_1(gen_,T11,args_);
        T6 = T10;
      } else {
        T14 = (P)YPiA(i_,(P)2);
        a37_0 = key_;
        a37_1 = T14;
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
        T6 = T13;
      }
      T0 = T6;
    }
    break;
  }
  return T0;
}

P Ygen_lookup_1(P gen_,P cache_,P args_) {
  P tagF554;
  P xF553;
  P xF552;
  P assocsF551;
  P yF550;
  P xF549;
  P valF548;
  P assocsF547;
  P argF546;
  P xF545;
  P xF544;
  P iF543;
  P xF542;
  P yF541;
  P xF540;
  P tagF539;
  P xF538;
  P xF537;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
DEFCREGS();
  xF537 = cache_;
  xF538 = xF537;
  T8 = (P)YPiB(xF538,(P)3);
  tagF539 = T8;
  T5 = (P)YPiE(tagF539,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF537);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF539);
    T3 = T7;
  }
  xF540 = T3;
  yF541 = VARREF(YLgen_cacheG);
  T2 = (P)YPeqQ(xF540,yF541);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF542 = args_;
    T29 = (P)YPgen_cache_arg_pos(cache_);
    iF543 = T29;
    T26 = (P)YPopts_location(xF542);
    xF544 = iF543;
    xF545 = xF544;
    T28 = (P)YPiGG(xF545,(P)2);
    T27 = (P)YPi_((P)0,T28);
    T25 = (P)YPloc_off(T26,T27);
    argF546 = T25;
    T24 = (P)YPgen_cache_singletons(cache_);
    assocsF547 = T24;
    T22 = (P)YPtlen(assocsF547);
    T23 = (P)YPgen_cache_missableQ(cache_);
    T21 = (P)Ygen_lookup_1_using(argF546,(P)0,T22,assocsF547,T23,gen_,args_);
    valF548 = T21;
    xF549 = valF548;
    yF550 = VARREF(YDmissed_dispatch);
    T11 = (P)YPeqQ(xF549,yF550);
    T10 = (P)YPbb(T11);
    if (T11) {
      T20 = (P)YPgen_cache_classes(cache_);
      assocsF551 = T20;
      xF552 = argF546;
      xF553 = xF552;
      T18 = (P)YPiB(xF553,(P)3);
      tagF554 = T18;
      T15 = (P)YPiE(tagF554,(P)0);
      T14 = (P)YPbb(T15);
      if (T15) {
        T16 = (P)YPobject_class(xF552);
        T13 = T16;
      } else {
        T17 = (P)YPelt(VARREF(YDdirect_object_class),tagF554);
        T13 = T17;
      }
      T19 = (P)YPtlen(assocsF551);
      T12 = (P)Ygen_lookup_1_using(T13,(P)0,T19,assocsF551,YPfalse,gen_,args_);
      T9 = T12;
    } else {
      T9 = valF548;
    }
    T0 = T9;
  } else {
    T0 = cache_;
  }
  return T0;
}

FUNCODEDEF(Ychoose_methods) {
  P gen_,args_;
  P xF559;
  P xF558;
  P ambiguous_metsF557;
  P sorted_metsF556;
  P ord_amb_metsF555;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
  T6 = CALL2(1,VARREF(Yord_app_metsT),gen_,args_);
  ord_amb_metsF555 = T6;
  T5 = (P)YOtelt(ord_amb_metsF555,YPint((P)0));
  sorted_metsF556 = T5;
  T4 = (P)YOtelt(ord_amb_metsF555,YPint((P)1));
  ambiguous_metsF557 = T4;
  xF558 = sorted_metsF556;
  xF559 = xF558;
  T2 = (P)YPeqQ(xF559,VARREF(Ynil));
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(Yno_applicable_methods_error),gen_,args_);
    T0 = T3;
  } else {
    T0 = sorted_metsF556;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPdispatch) {
  P args_;
  P resF578;
  P xF577;
  P xF576;
  P iF575;
  P xF574;
  P xF573;
  P xF572;
  P iF571;
  P xF570;
  P xF569;
  P xF568;
  P iF567;
  P xF566;
  P yF565;
  P xF564;
  P xF563;
  P xF562;
  P xF561;
  P resultF560;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  NARGS(args_, 0);
  T26 = (P)YPfun_reg();
  T25 = (P)Ygen_lookup(T26,args_);
  resultF560 = T25;
  xF561 = resultF560;
  xF562 = xF561;
  T3 = (P)YPiB(xF562,(P)3);
  T2 = (P)YPiE(T3,(P)1);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF563 = args_;
    T7 = (P)YPopts_count(xF563);
    xF564 = T7;
    yF565 = YPint((P)1);
    T6 = (P)YPiE(xF564,yF565);
    T5 = (P)YPbb(T6);
    if (T6) {
      xF566 = args_;
      iF567 = YPint((P)0);
      T10 = (P)YPopts_location(xF566);
      xF568 = iF567;
      xF569 = xF568;
      T12 = (P)YPiGG(xF569,(P)2);
      T11 = (P)YPi_((P)0,T12);
      T9 = (P)YPloc_off(T10,T11);
      T8 = (P)Yprop_value_at(T9,resultF560);
      T4 = T8;
    } else {
      xF570 = args_;
      iF571 = YPint((P)0);
      T15 = (P)YPopts_location(xF570);
      xF572 = iF571;
      xF573 = xF572;
      T17 = (P)YPiGG(xF573,(P)2);
      T16 = (P)YPi_((P)0,T17);
      T14 = (P)YPloc_off(T15,T16);
      xF574 = args_;
      iF575 = YPint((P)1);
      T19 = (P)YPopts_location(xF574);
      xF576 = iF575;
      xF577 = xF576;
      T21 = (P)YPiGG(xF577,(P)2);
      T20 = (P)YPi_((P)0,T21);
      T18 = (P)YPloc_off(T19,T20);
      T13 = (P)Yprop_value_at_setter(T14,T18,resultF560);
      T4 = T13;
    }
    resF578 = T4;
    (P)YPunlink_stack();
    T0 = resF578;
  } else {
    T23 = (P)YPhead(resultF560);
    T24 = (P)YPtail(resultF560);
    T22 = (P)YPraw_met_call(T23,T24);
    T0 = T22;
  }
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
  P tagF581;
  P xF580;
  P xF579;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  xF579 = x_;
  xF580 = xF579;
  T5 = (P)YPiB(xF580,(P)3);
  tagF581 = T5;
  T2 = (P)YPiE(tagF581,(P)0);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = (P)YPobject_class(xF579);
    T0 = T3;
  } else {
    T4 = (P)YPelt(VARREF(YDdirect_object_class),tagF581);
    T0 = T4;
  }
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
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  T3 = FUNFAB(fun_tailQ_463,1,c_);
  T2 = CALL2(1,VARREF(YOanyQ),T3,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T0 = c_;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_candidate_at_head_465) {
  P l_;
  P xF583;
  P xF582;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(l_, 0);
  xF582 = l_;
  xF583 = xF582;
  T3 = (P)YPeqQ(xF583,VARREF(Ynil));
  T2 = (P)YPbb(T3);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = (P)YOhead(l_);
    T4 = CALL1(1,FREEREF(0),T5);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_next_466) {
  P l_;
  P yF585;
  P xF584;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(l_, 0);
  T3 = (P)YOhead(l_);
  xF584 = T3;
  yF585 = FREEREF(0);
  T2 = (P)YPeqQ(xF584,yF585);
  T1 = (P)YPbb(T2);
  if (T2) {
    T4 = (P)YOtail(l_);
    T0 = T4;
  } else {
    T0 = l_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yclass_ordered_ancestors) {
  P c_;
  P nextF591;
  P candidate_at_headF590;
  P candidateF589;
  P remaining_listsF588;
  P partial_cplF587;
  P parentsF586;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(c_, 0);
  T15 = (P)YPclass_parents(c_);
  parentsF586 = T15;
  T12 = CALL1(1,VARREF(YOlst),c_);
  check_type(T12,VARREF(YLlstG));
  partial_cplF587 = T12;
  T14 = CALL2(1,VARREF(YOmap),VARREF(YOclass_ancestors),parentsF586);
  T13 = (P)YOadd(T14,parentsF586);
  check_type(T13,VARREF(YLlstG));
  remaining_listsF588 = T13;
  for (;;) {
    P a38_0,a38_1;
  loop38:
    T1 = CALL2(1,VARREF(YOallQ),VARREF(YOOemptyQ),remaining_listsF588);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YOrevX),partial_cplF587);
      T0 = T2;
    } else {
      T10 = FUNSHELL(1,fun_candidate_464,1);
      candidateF589 = T10;
      T11 = FUNSHELL(0,fun_candidate_at_head_465,1);
      candidate_at_headF590 = T11;
      FUNINIT(candidateF589, 1,remaining_listsF588);
      FUNINIT(candidate_at_headF590, 1,candidateF589);
      T9 = CALL2(1,VARREF(YOanyQ),candidate_at_headF590,remaining_listsF588);
      nextF591 = T9;
      if (nextF591 != YPfalse) {
        T5 = (P)YOpair(nextF591,partial_cplF587);
        T7 = FUNFAB(fun_del_next_466,1,nextF591);
        T6 = CALL2(1,VARREF(YOmap),T7,remaining_listsF588);
        a38_0 = T5;
        a38_1 = T6;
        partial_cplF587 = a38_0;
        remaining_listsF588 = a38_1;
        goto loop38;
        T3 = T4;
      } else {
        T8 = CALL1(1,VARREF(Ycpl_error),LITREF(lit_522));
        T3 = T8;
      }
      T0 = T3;
    }
    break;
  }
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
  P propsF592;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T5 = (P)YPclass_ancestors(x_);
  T4 = CALL1(1,VARREF(YOrev),T5);
  T3 = CALL2(1,VARREF(YOmap),VARREF(YOclass_direct_props),T4);
  T2 = CALL3(1,VARREF(YOfold),VARREF(YOcat2),Ynil,T3);
  T1 = CALL1(1,VARREF(YOdel_dups),T2);
  propsF592 = T1;
  T0 = (P)YOlen(propsF592);
  (P)YPclass_prop_len_setter(T0,x_);
UNLINK_STACK();
  RET(propsF592);
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
  P xF596;
  P xF595;
  P xF594;
  P xF593;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(ancestor_, 0);
  xF593 = YPint((P)1);
  xF594 = xF593;
  T1 = (P)YPiGG(xF594,(P)2);
  T3 = (P)YPclass_id(ancestor_);
  xF595 = T3;
  xF596 = xF595;
  T2 = (P)YPiGG(xF596,(P)2);
  T0 = (P)YPselt_setter(T1,FREEREF(0),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yinit_class) {
  P x_;
  P rowF611;
  P xF610;
  P xF609;
  P xF608;
  P xF607;
  P yF606;
  P xF605;
  P yF604;
  P xF603;
  P xF602;
  P xF601;
  P xF600;
  P xF599;
  P yF598;
  P xF597;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(x_, 0);
  xF597 = VARREF(YDmax_classes);
  yF598 = VARREF(YTnext_class_idT);
  xF599 = xF597;
  xF600 = xF599;
  T2 = (P)YPiGG(xF600,(P)2);
  xF601 = yF598;
  xF602 = xF601;
  T3 = (P)YPiGG(xF602,(P)2);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
  if (T1) {
    T4 = CALL2(1,VARREF(Yinternal_error),LITREF(lit_531),VARREF(YDmax_classes));
  } else {
  }
  T8 = (P)YPclass_parents(x_);
  T7 = (P)YOlen(T8);
  xF603 = T7;
  yF604 = YPint((P)0);
  T6 = (P)YPeqQ(xF603,yF604);
  T5 = (P)YPbb(T6);
  if (T6) {
    T9 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_532));
  } else {
  }
  (P)YPclass_id_setter(VARREF(YTnext_class_idT),x_);
  T10 = (P)YOA(VARREF(YTnext_class_idT),YPint((P)1));
  VARSET(YTnext_class_idT,T10);
  xF605 = x_;
  yF606 = VARREF(YLanyG);
  T13 = (P)YPeqQ(xF605,yF606);
  T12 = (P)YPbb(T13);
  T11 = CALL1(1,VARREF(Ynot),T12);
  if (T11 != YPfalse) {
    T14 = FUNFAB(fun_471,1,x_);
    T15 = (P)YPclass_parents(x_);
    CALL2(1,VARREF(YOdo),T14,T15);
    T17 = CALL1(1,VARREF(Yclass_ordered_ancestors),x_);
    T16 = (P)YPclass_ancestors_setter(T17,x_);
  } else {
  }
  xF607 = VARREF(YDmax_classes);
  xF608 = xF607;
  T22 = (P)YPiGG(xF608,(P)2);
  xF609 = YPint((P)0);
  xF610 = xF609;
  T23 = (P)YPiGG(xF610,(P)2);
  T21 = (P)YPstr(T22,T23);
  rowF611 = T21;
  (P)YPclass_row_setter(rowF611,x_);
  T18 = FUNFAB(fun_472,1,rowF611);
  T19 = (P)YPclass_ancestors(x_);
  CALL2(1,VARREF(YOdo),T18,T19);
  T20 = CALL1(1,VARREF(Yclass_ordered_props),x_);
  (P)YPclass_props_setter(T20,x_);
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(Yfab_class) {
  P name_,parents_;
  P xF612;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  ARG(parents_, 1);
  T0 = (P)YPclass(YPint((P)0),name_,parents_,Ynil,Ynil,Ynil,Ynil,Ynil,Ynil,YPfalse,YPfalse,YPint((P)-1),VARREF(Ynul));
  xF612 = T0;
  CALL1(1,VARREF(Yinit_class),xF612);
UNLINK_STACK();
  RET(xF612);
}

FUNCODEDEF(Yrefab_class) {
  P old_class_,parents_;
  P new_classF613;
  P T0,T1;
LINK_STACK();
  ARG(old_class_, 0);
  ARG(parents_, 1);
  T1 = (P)YPclass_direct_props(old_class_);
  T0 = CALL2(1,VARREF(Yfab_class),parents_,T1);
  new_classF613 = T0;
  (P)YPclass_forward_setter(new_classF613,old_class_);
UNLINK_STACK();
  RET(new_classF613);
}

FUNCODEDEF(Yobject_props) {
  P x_;
  P tagF616;
  P xF615;
  P xF614;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  xF614 = x_;
  xF615 = xF614;
  T6 = (P)YPiB(xF615,(P)3);
  tagF616 = T6;
  T3 = (P)YPiE(tagF616,(P)0);
  T2 = (P)YPbb(T3);
  if (T3) {
    T4 = (P)YPobject_class(xF614);
    T1 = T4;
  } else {
    T5 = (P)YPelt(VARREF(YDdirect_object_class),tagF616);
    T1 = T5;
  }
  T0 = (P)YPclass_props(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yobject_parents) {
  P x_;
  P tagF619;
  P xF618;
  P xF617;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  xF617 = x_;
  xF618 = xF617;
  T6 = (P)YPiB(xF618,(P)3);
  tagF619 = T6;
  T3 = (P)YPiE(tagF619,(P)0);
  T2 = (P)YPbb(T3);
  if (T3) {
    T4 = (P)YPobject_class(xF617);
    T1 = T4;
  } else {
    T5 = (P)YPelt(VARREF(YDdirect_object_class),tagF619);
    T1 = T5;
  }
  T0 = (P)YPclass_parents(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yensure_fresh_object) {
  P x_;
  P tagF622;
  P xF621;
  P xF620;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  xF620 = x_;
  xF621 = xF620;
  T7 = (P)YPiB(xF621,(P)3);
  tagF622 = T7;
  T4 = (P)YPiE(tagF622,(P)0);
  T3 = (P)YPbb(T4);
  if (T4) {
    T5 = (P)YPobject_class(xF620);
    T2 = T5;
  } else {
    T6 = (P)YPelt(VARREF(YDdirect_object_class),tagF622);
    T2 = T6;
  }
  T1 = (P)YPclass_forward(T2);
  if (T1 != YPfalse) {
    T8 = CALL1(1,VARREF(Yupdate_instance_for_changed_class),x_);
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_offset) {
  P object_,getter_;
  P yF628;
  P xF627;
  P xF626;
  P xF625;
  P propsF624;
  P iF623;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
  iF623 = YPint((P)0);
  T11 = CALL1(1,VARREF(Yobject_props),object_);
  propsF624 = T11;
  for (;;) {
    P a39_0,a39_1;
  loop39:
    xF625 = propsF624;
    xF626 = xF625;
    T2 = (P)YPeqQ(xF626,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = VARREF(YDgetter_not_found);
    } else {
      T7 = (P)YOhead(propsF624);
      T6 = (P)YPprop_getter(T7);
      xF627 = T6;
      yF628 = getter_;
      T5 = (P)YPeqQ(xF627,yF628);
      T4 = (P)YPbb(T5);
      if (T5) {
        T3 = iF623;
      } else {
        T9 = (P)YOA(iF623,YPint((P)1));
        T10 = (P)YOtail(propsF624);
        a39_0 = T9;
        a39_1 = T10;
        iF623 = a39_0;
        propsF624 = a39_1;
        goto loop39;
        T3 = T8;
      }
      T0 = T3;
    }
    break;
  }
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
  P yF631;
  P xF630;
  P offsetF629;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T5 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF629 = T5;
  xF630 = offsetF629;
  yF631 = VARREF(YDgetter_not_found);
  T2 = (P)YPiE(xF630,yF631);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
    T0 = T3;
  } else {
    T4 = (P)Yprop_value_at(object_,offsetF629);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_boundQ) {
  P object_,getter_;
  P yF634;
  P xF633;
  P offsetF632;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T5 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF632 = T5;
  xF633 = offsetF632;
  yF634 = VARREF(YDgetter_not_found);
  T2 = (P)YPiE(xF633,yF634);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
    T0 = T3;
  } else {
    T4 = (P)Yprop_bound_atQ(object_,offsetF632);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yprop_value_setter) {
  P z_,object_,getter_;
  P yF641;
  P xF640;
  P propF639;
  P xF638;
  P xF637;
  P propsF636;
  P iF635;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(z_, 0);
  ARG(object_, 1);
  ARG(getter_, 2);
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  iF635 = YPint((P)0);
  T18 = CALL1(1,VARREF(Yobject_props),object_);
  propsF636 = T18;
  for (;;) {
    P a40_0,a40_1;
  loop40:
    xF637 = propsF636;
    xF638 = xF637;
    T2 = (P)YPeqQ(xF638,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
      T0 = T3;
    } else {
      T17 = (P)YOhead(propsF636);
      propF639 = T17;
      T7 = (P)YPprop_getter(propF639);
      xF640 = T7;
      yF641 = getter_;
      T6 = (P)YPeqQ(xF640,yF641);
      T5 = (P)YPbb(T6);
      if (T6) {
        T10 = (P)YPprop_type(propF639);
        T9 = CALL2(1,VARREF(YOisaQ),z_,T10);
        if (T9 != YPfalse) {
          T11 = (P)Yprop_value_at_setter(z_,object_,iF635);
          T8 = T11;
        } else {
          T13 = (P)YPprop_type(propF639);
          T12 = CALL3(1,VARREF(Yproperty_type_error),getter_,z_,T13);
          T8 = T12;
        }
        T4 = T8;
      } else {
        T15 = (P)YOA(iF635,YPint((P)1));
        T16 = (P)YOtail(propsF636);
        a40_0 = T15;
        a40_1 = T16;
        iF635 = a40_0;
        propsF636 = a40_1;
        goto loop40;
        T4 = T14;
      }
      T0 = T4;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfind_getter) {
  P owner_,getter_;
  P yF647;
  P xF646;
  P metF645;
  P xF644;
  P xF643;
  P metsF642;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  T11 = CALL1(1,VARREF(YOfun_mets),getter_);
  metsF642 = T11;
  for (;;) {
    P a41_0;
  loop41:
    xF643 = metsF642;
    xF644 = xF643;
    T2 = (P)YPeqQ(xF644,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,owner_);
      T0 = T3;
    } else {
      T10 = (P)YOhead(metsF642);
      metF645 = T10;
      T7 = CALL2(1,VARREF(Yfun_spec),metF645,YPint((P)0));
      xF646 = T7;
      yF647 = owner_;
      T6 = (P)YPeqQ(xF646,yF647);
      T5 = (P)YPbb(T6);
      if (T6) {
        T4 = metF645;
      } else {
        T9 = (P)YOtail(metsF642);
        a41_0 = T9;
        metsF642 = a41_0;
        goto loop41;
        T4 = T8;
      }
      T0 = T4;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yfind_setter) {
  P owner_,type_,zetter_;
  P yF653;
  P xF652;
  P metF651;
  P xF650;
  P xF649;
  P metsF648;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(owner_, 0);
  ARG(type_, 1);
  ARG(zetter_, 2);
  T14 = CALL1(1,VARREF(YOfun_mets),zetter_);
  metsF648 = T14;
  for (;;) {
    P a42_0;
  loop42:
    xF649 = metsF648;
    xF650 = xF649;
    T2 = (P)YPeqQ(xF650,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL2(1,VARREF(Yproperty_not_found_error),zetter_,owner_);
      T0 = T3;
    } else {
      T13 = (P)YOhead(metsF648);
      metF651 = T13;
      T8 = CALL2(1,VARREF(Yfun_spec),metF651,YPint((P)1));
      xF652 = T8;
      yF653 = owner_;
      T7 = (P)YPeqQ(xF652,yF653);
      T6 = (P)YPbb(T7);
      if (T7) {
        T10 = CALL2(1,VARREF(Yfun_spec),metF651,YPint((P)0));
        T9 = CALL2(1,VARREF(YOtype_equalQ),T10,type_);
        T5 = T9;
      } else {
        T5 = YPfalse;
      }
      if (T5 != YPfalse) {
        T4 = metF651;
      } else {
        T12 = (P)YOtail(metsF648);
        a42_0 = T12;
        metsF648 = a42_0;
        goto loop42;
        T4 = T11;
      }
      T0 = T4;
    }
    break;
  }
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
  P new_classF654;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(old_class_, 0);
  T3 = (P)YPclone(old_class_);
  new_classF654 = T3;
  T0 = fun_486;
  T1 = (P)YPclass_gens(old_class_);
  CALL2(1,VARREF(YOdo),T0,T1);
  T2 = (P)YPclass_forward_setter(new_classF654,old_class_);
UNLINK_STACK();
  QRET(T2);
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
  P visitF656;
  P visitedF655;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  visitedF655 = Ynil;
  visitedF655 = BOXFAB(visitedF655);
  T2 = FUNSHELL(0,fun_visit_489,3);
  visitF656 = T2;
  FUNINIT(visitF656, 3,visitedF655,f_,visitF656);
  T1 = CALL1(1,visitF656,x_);
UNLINK_STACK();
  QRET(T1);
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
  P setter_metF660;
  P getter_metF659;
  P propF658;
  P classF657;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  ARG(setter_, 2);
  ARG(type_, 3);
  ARG(init_, 4);
  classF657 = owner_;
  T5 = CALLN(1,VARREF(YOnew),11,VARREF(YLpropG),VARREF(Yprop_owner),owner_,VARREF(Yprop_getter),getter_,VARREF(Yprop_setter),setter_,VARREF(Yprop_type),type_,VARREF(Yprop_init),init_);
  propF658 = T5;
  T4 = CALL2(1,VARREF(Yfind_getter),owner_,getter_);
  getter_metF659 = T4;
  T3 = CALL3(1,VARREF(Yfind_setter),owner_,type_,setter_);
  setter_metF660 = T3;
  (P)YPmet_env_setter(propF658,getter_metF659);
  (P)YPmet_env_setter(propF658,setter_metF660);
  T1 = (P)YPclass_direct_props(classF657);
  T2 = CALL1(1,VARREF(YOlst),propF658);
  T0 = CALL2(1,VARREF(YOcat2),T1,T2);
  (P)YPclass_direct_props_setter(T0,classF657);
  CALL2(1,VARREF(YOdo_descendents),VARREF(Yfinalize_props),owner_);
UNLINK_STACK();
  QRET(propF658);
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
  P gF661;
  P T0,T1,T2,T3;
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
  gF661 = T1;
  T0 = (P)YPmet_code(VARREF(YPdispatch));
  (P)YPgen_code_setter(T0,gF661);
UNLINK_STACK();
  RET(gF661);
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
  P specsF662;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T4 = fun_498;
  T5 = CALL1(1,VARREF(YOfun_specs),x_);
  T3 = CALL2(1,VARREF(YOmap),T4,T5);
  specsF662 = T3;
  T1 = CALL1(1,VARREF(Yfun_name),x_);
  T2 = CALL1(1,VARREF(YOfun_naryQ),x_);
  T0 = CALLN(1,VARREF(Yfab_gen),6,T1,Ynil,specsF662,T2,VARREF(YLanyG),Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPdefine_method) {
  P gen_,met_;
  P tmpF663;
  P T0,T1,T2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  tmpF663 = gen_;
  if (tmpF663 != YPfalse) {
    T1 = tmpF663;
  } else {
    T2 = CALL1(1,VARREF(Ygen_from_met),met_);
    T1 = T2;
  }
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
  P valF685;
  P xF684;
  P xF683;
  P iF682;
  P xF681;
  P getterF680;
  P xF679;
  P xF678;
  P iF677;
  P xF676;
  P xF675;
  P xF674;
  P xF673;
  P xF672;
  P yF671;
  P xF670;
  P iF669;
  P numF668;
  P xF667;
  P objectF666;
  P xF665;
  P xF664;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
DEFCREGS();
  T19 = (P)YPclass_prop_len(parent_);
  xF664 = T19;
  xF665 = xF664;
  T18 = (P)YPiGG(xF665,(P)2);
  T17 = (P)YPobject_of(parent_,T18);
  objectF666 = T17;
  xF667 = inits_;
  T16 = (P)YPopts_count(xF667);
  numF668 = T16;
  iF669 = YPint((P)0);
  for (;;) {
    P a43_0;
  loop43:
    xF670 = iF669;
    yF671 = numF668;
    xF672 = xF670;
    xF673 = xF672;
    T3 = (P)YPiGG(xF673,(P)2);
    xF674 = yF671;
    xF675 = xF674;
    T4 = (P)YPiGG(xF675,(P)2);
    T2 = (P)YPiL(T3,T4);
    T1 = (P)YPbb(T2);
    if (T2) {
      xF676 = inits_;
      iF677 = iF669;
      T13 = (P)YPopts_location(xF676);
      xF678 = iF677;
      xF679 = xF678;
      T15 = (P)YPiGG(xF679,(P)2);
      T14 = (P)YPi_((P)0,T15);
      T12 = (P)YPloc_off(T13,T14);
      getterF680 = T12;
      xF681 = inits_;
      T11 = (P)YOA(iF669,YPint((P)1));
      iF682 = T11;
      T8 = (P)YPopts_location(xF681);
      xF683 = iF682;
      xF684 = xF683;
      T10 = (P)YPiGG(xF684,(P)2);
      T9 = (P)YPi_((P)0,T10);
      T7 = (P)YPloc_off(T8,T9);
      valF685 = T7;
      XCALL3(1,VARREF(Yprop_value_setter),valF685,objectF666,getterF680);
      T6 = (P)YOA(iF669,YPint((P)2));
      a43_0 = T6;
      iF669 = a43_0;
      goto loop43;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
    break;
  }
  return objectF666;
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
  P xF691;
  P xF690;
  P xF689;
  P xF688;
  P c2F687;
  P c1F686;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  c1F686 = t1_;
  c2F687 = t2_;
  T3 = (P)YPclass_row(c1F686);
  T5 = (P)YPclass_id(c2F687);
  xF688 = T5;
  xF689 = xF688;
  T4 = (P)YPiGG(xF689,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF690 = YPint((P)1);
  xF691 = xF690;
  T6 = (P)YPiGG(xF691,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
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
  P xF697;
  P xF696;
  P xF695;
  P xF694;
  P c2F693;
  P c1F692;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  c1F692 = VARREF(YLclassG);
  c2F693 = t2_;
  T3 = (P)YPclass_row(c1F692);
  T5 = (P)YPclass_id(c2F693);
  xF694 = T5;
  xF695 = xF694;
  T4 = (P)YPiGG(xF695,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF696 = YPint((P)1);
  xF697 = xF696;
  T6 = (P)YPiGG(xF697,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
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
  P yF701;
  P xF700;
  P yF699;
  P xF698;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF698 = t1_;
  yF699 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF698,yF699);
  T1 = (P)YPbb(T2);
  if (T2) {
    T5 = (P)YPtype_class(t2_);
    xF700 = T5;
    yF701 = VARREF(YLclassG);
    T4 = (P)YPeqQ(xF700,yF701);
    T3 = (P)YPbb(T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_518) {
  P t1_,t2_;
  P xF707;
  P xF706;
  P xF705;
  P xF704;
  P c2F703;
  P c1F702;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T7 = (P)YPtype_class(t1_);
  c1F702 = T7;
  T8 = (P)YPtype_class(t2_);
  c2F703 = T8;
  T3 = (P)YPclass_row(c1F702);
  T5 = (P)YPclass_id(c2F703);
  xF704 = T5;
  xF705 = xF704;
  T4 = (P)YPiGG(xF705,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF706 = YPint((P)1);
  xF707 = xF706;
  T6 = (P)YPiGG(xF707,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_519) {
  P t1_,t2_;
  P xF713;
  P xF712;
  P xF711;
  P xF710;
  P c2F709;
  P c1F708;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T2 = (P)YPtype_object(t1_);
  T1 = CALL2(1,VARREF(YOisaQ),T2,VARREF(YLclassG));
  if (T1 != YPfalse) {
    T10 = (P)YPtype_object(t1_);
    c1F708 = T10;
    T11 = (P)YPtype_class(t2_);
    c2F709 = T11;
    T6 = (P)YPclass_row(c1F708);
    T8 = (P)YPclass_id(c2F709);
    xF710 = T8;
    xF711 = xF710;
    T7 = (P)YPiGG(xF711,(P)2);
    T5 = (P)YPselt(T6,T7);
    xF712 = YPint((P)1);
    xF713 = xF712;
    T9 = (P)YPiGG(xF713,(P)2);
    T4 = (P)YPiE(T5,T9);
    T3 = (P)YPbb(T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
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
  P yF717;
  P xF716;
  P teT2F715;
  P teT1F714;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  T7 = (P)YPproduct_elts(t1_);
  teT1F714 = T7;
  T6 = (P)YPproduct_elts(t2_);
  teT2F715 = T6;
  T3 = (P)YOtlen(teT1F714);
  xF716 = T3;
  T4 = (P)YOtlen(teT2F715);
  yF717 = T4;
  T2 = (P)YPeqQ(xF716,yF717);
  T1 = (P)YPbb(T2);
  if (T2) {
    T5 = CALL3(1,VARREF(YOtall2Q),VARREF(YsubtypeQ),teT1F714,teT2F715);
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
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
  P xF723;
  P xF722;
  P xF721;
  P xF720;
  P c2F719;
  P c1F718;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  T1 = CALL2(1,VARREF(YOisaQ),o_,VARREF(YLclassG));
  if (T1 != YPfalse) {
    c1F718 = o_;
    T9 = (P)YPtype_class(t_);
    c2F719 = T9;
    T5 = (P)YPclass_row(c1F718);
    T7 = (P)YPclass_id(c2F719);
    xF720 = T7;
    xF721 = xF720;
    T6 = (P)YPiGG(xF721,(P)2);
    T4 = (P)YPselt(T5,T6);
    xF722 = YPint((P)1);
    xF723 = xF722;
    T8 = (P)YPiGG(xF723,(P)2);
    T3 = (P)YPiE(T4,T8);
    T2 = (P)YPbb(T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
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
  P yF726;
  P xF725;
  P teTF724;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
  T8 = (P)YPproduct_elts(t_);
  teTF724 = T8;
  T1 = CALL2(1,VARREF(YisaQ),o_,VARREF(YLtupG));
  if (T1 != YPfalse) {
    T5 = (P)YOtlen(o_);
    xF725 = T5;
    T6 = (P)YOtlen(teTF724);
    yF726 = T6;
    T4 = (P)YPeqQ(xF725,yF726);
    T3 = (P)YPbb(T4);
    if (T4) {
      T7 = CALL3(1,VARREF(YOtall2Q),VARREF(YisaQ),o_,teTF724);
      T2 = T7;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
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
  P yF730;
  P xF729;
  P c2F728;
  P c1F727;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T10 = (P)YPtype_class(t1_);
  c1F727 = T10;
  T9 = (P)YPtype_class(t2_);
  c2F728 = T9;
  xF729 = c1F727;
  yF730 = c2F728;
  T2 = (P)YPeqQ(xF729,yF730);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(YOtup),LITREF(lit_402),t1_);
    T0 = T3;
  } else {
    T5 = CALL3(1,VARREF(YOclassL),c1F727,c2F728,arg_);
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YOtup),LITREF(lit_403),t1_);
      T4 = T6;
    } else {
      if (YPtrue != YPfalse) {
        T8 = CALL2(1,VARREF(YOtup),LITREF(lit_404),t2_);
        T7 = T8;
      } else {
        T7 = YPfalse;
      }
      T4 = T7;
    }
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_533) {
  P t1_,t2_,arg_;
  P yF732;
  P xF731;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T2 = CALL2(1,VARREF(YOsubtypeQ),VARREF(YLclassG),t2_);
  if (T2 != YPfalse) {
    xF731 = t1_;
    yF732 = VARREF(YLanyG);
    T5 = (P)YPeqQ(xF731,yF732);
    T4 = (P)YPbb(T5);
    if (T5) {
      T6 = CALL3(1,VARREF(Yorder_specs),VARREF(YLclassG),t2_,arg_);
      T3 = T6;
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
  P yF734;
  P xF733;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  T2 = CALL2(1,VARREF(YOsubtypeQ),VARREF(YLclassG),t1_);
  if (T2 != YPfalse) {
    xF733 = t2_;
    yF734 = VARREF(YLanyG);
    T5 = (P)YPeqQ(xF733,yF734);
    T4 = (P)YPbb(T5);
    if (T5) {
      T6 = CALL3(1,VARREF(Yorder_specs),t1_,VARREF(YLclassG),arg_);
      T3 = T6;
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
  P xF740;
  P xF739;
  P xF738;
  P xF737;
  P c2F736;
  P c1F735;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  c1F735 = c_;
  c2F736 = t_;
  T4 = (P)YPclass_row(c1F735);
  T6 = (P)YPclass_id(c2F736);
  xF737 = T6;
  xF738 = xF737;
  T5 = (P)YPiGG(xF738,(P)2);
  T3 = (P)YPselt(T4,T5);
  xF739 = YPint((P)1);
  xF740 = xF739;
  T7 = (P)YPiGG(xF740,(P)2);
  T2 = (P)YPiE(T3,T7);
  T1 = (P)YPbb(T2);
  if (T2) {
    T8 = CALL2(1,VARREF(YOtup),YPtrue,YPtrue);
    T0 = T8;
  } else {
    T9 = CALL2(1,VARREF(YOtup),YPfalse,YPfalse);
    T0 = T9;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_538) {
  P c_,t_;
  P tagF743;
  P xF742;
  P xF741;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  T8 = (P)YPtype_object(t_);
  xF741 = T8;
  xF742 = xF741;
  T7 = (P)YPiB(xF742,(P)3);
  tagF743 = T7;
  T4 = (P)YPiE(tagF743,(P)0);
  T3 = (P)YPbb(T4);
  if (T4) {
    T5 = (P)YPobject_class(xF741);
    T2 = T5;
  } else {
    T6 = (P)YPelt(VARREF(YDdirect_object_class),tagF743);
    T2 = T6;
  }
  T1 = CALL2(1,VARREF(YOmay_isaQ),T2,c_);
  T0 = CALL2(1,VARREF(YOtup),T1,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_539) {
  P c_,t_;
  P yF746;
  P xF745;
  P classQF744;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  T5 = CALL2(1,VARREF(YOsubtypeQ),c_,VARREF(YLclassG));
  classQF744 = T5;
  if (classQF744 != YPfalse) {
    T4 = (P)YPtype_class(c_);
    xF745 = T4;
    yF746 = VARREF(YLanyG);
    T3 = (P)YPeqQ(xF745,yF746);
    T2 = (P)YPbb(T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = CALL2(1,VARREF(YOtup),classQF744,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_540) {
  P c_,t_;
  P tmpF756;
  P tmpF755;
  P elt_allQF754;
  P elt_someQF753;
  P elt_some_allQF752;
  P xF751;
  P xF750;
  P eltsF749;
  P allQF748;
  P someQF747;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  someQF747 = YPfalse;
  allQF748 = YPfalse;
  T12 = (P)YPunion_elts(t_);
  eltsF749 = T12;
  for (;;) {
    P a44_0,a44_1,a44_2;
  loop44:
    xF750 = eltsF749;
    xF751 = xF750;
    T2 = (P)YPeqQ(xF751,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL2(1,VARREF(YOtup),someQF747,allQF748);
      T0 = T3;
    } else {
      T11 = (P)YOhead(eltsF749);
      T10 = CALL2(1,VARREF(YOmay_isaQ),c_,T11);
      elt_some_allQF752 = T10;
      T9 = (P)YOtelt(elt_some_allQF752,YPint((P)0));
      elt_someQF753 = T9;
      T8 = (P)YOtelt(elt_some_allQF752,YPint((P)1));
      elt_allQF754 = T8;
      tmpF755 = elt_someQF753;
      if (tmpF755 != YPfalse) {
        T5 = tmpF755;
      } else {
        T5 = someQF747;
      }
      tmpF756 = elt_allQF754;
      if (tmpF756 != YPfalse) {
        T6 = tmpF756;
      } else {
        T6 = allQF748;
      }
      T7 = (P)YOtail(eltsF749);
      a44_0 = T5;
      a44_1 = T6;
      a44_2 = T7;
      someQF747 = a44_0;
      allQF748 = a44_1;
      eltsF749 = a44_2;
      goto loop44;
      T0 = T4;
    }
    break;
  }
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
  P someQF760;
  P tupQF759;
  P yF758;
  P xF757;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  xF757 = c_;
  yF758 = VARREF(YLtupG);
  T6 = (P)YPeqQ(xF757,yF758);
  T5 = (P)YPbb(T6);
  tupQF759 = T5;
  if (tupQF759 != YPfalse) {
    T3 = fun_541;
    T4 = (P)YPproduct_elts(t_);
    T2 = CALL2(1,VARREF(YOtanyQ),T3,T4);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  someQF760 = T1;
  T0 = CALL2(1,VARREF(Ytup),tupQF759,someQF760);
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
  P xF787;
  P xF786;
  P tF785;
  P xF784;
  P xF783;
  P xF782;
  P xF781;
  P xF780;
  P xF779;
  P xF778;
  P xF777;
  P tF776;
  P xF775;
  P xF774;
  P xF773;
  P xF772;
  P xF771;
  P xF770;
  P xF769;
  P xF768;
  P xF767;
  P xF766;
  P tF765;
  P xF764;
  P xF763;
  P xF762;
  P xF761;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
DEFCREGS();
  VARSET(YPmet_prop_len,(P)4);
  VARSET(YPsymbols_readyQ,YPfalse);
  VARSET(YPTstart_running_atT,VARREF(Ynil));
  T0 = (P)YPraw_alloc((P)4);
  VARSET(YDdirect_object_class,T0);
  (P)YPelt_setter(VARREF(YLfixnumG),VARREF(YDdirect_object_class),(P)1);
  (P)YPelt_setter(VARREF(YLchrG),VARREF(YDdirect_object_class),(P)2);
  (P)YPelt_setter(VARREF(YLlocG),VARREF(YDdirect_object_class),(P)3);
  xF761 = YPint((P)32);
  xF762 = xF761;
  T4 = (P)YPiGG(xF762,(P)2);
  T3 = (P)YPi_(T4,(P)2);
  xF763 = T3;
  xF764 = xF763;
  tF765 = (P)1;
  T2 = (P)YPiLL(xF764,(P)2);
  T1 = (P)YPiv(T2,tF765);
  VARSET(YDnum_int_bits,T1);
  xF766 = YPint((P)1);
  xF767 = xF766;
  T9 = (P)YPiGG(xF767,(P)2);
  xF768 = VARREF(YDnum_int_bits);
  xF769 = xF768;
  T11 = (P)YPiGG(xF769,(P)2);
  xF770 = YPint((P)1);
  xF771 = xF770;
  T12 = (P)YPiGG(xF771,(P)2);
  T10 = (P)YPi_(T11,T12);
  T8 = (P)YPiLL(T9,T10);
  xF772 = YPint((P)1);
  xF773 = xF772;
  T13 = (P)YPiGG(xF773,(P)2);
  T7 = (P)YPi_(T8,T13);
  xF774 = T7;
  xF775 = xF774;
  tF776 = (P)1;
  T6 = (P)YPiLL(xF775,(P)2);
  T5 = (P)YPiv(T6,tF776);
  VARSET(YDmax_int,T5);
  xF777 = YPint((P)1);
  xF778 = xF777;
  T17 = (P)YPiGG(xF778,(P)2);
  xF779 = VARREF(YDnum_int_bits);
  xF780 = xF779;
  T19 = (P)YPiGG(xF780,(P)2);
  xF781 = YPint((P)1);
  xF782 = xF781;
  T20 = (P)YPiGG(xF782,(P)2);
  T18 = (P)YPi_(T19,T20);
  T16 = (P)YPiLL(T17,T18);
  xF783 = T16;
  xF784 = xF783;
  tF785 = (P)1;
  T15 = (P)YPiLL(xF784,(P)2);
  T14 = (P)YPiv(T15,tF785);
  VARSET(YDmin_int,T14);
  xF786 = YPchr((P)32);
  xF787 = xF786;
  T22 = (P)YPiGG(xF787,(P)2);
  T21 = (P)YPstrX((P)0,T22);
  VARSET(YPsnul,T21);
  T23 = (P)YPtupX((P)0,VARREF(Ynul));
  VARSET(YPtnul,T23);
  T24 = (P)YPrepX((P)0,VARREF(Ynul));
  VARSET(YPrnul,T24);
  VARSET(YTearly_classesT,VARREF(Ynil));
  T25 = YPfalse;
  return T25;
}

P Y___main_6___() {
  P tF790;
  P xF789;
  P xF788;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54;
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
  if (T44) {
    T46 = (P)YPcurrent_out_port();
    T47 = (P)YPsu(LITREF(lit_0));
    T45 = (P)YPputs(T46,T47);
  } else {
  }
  lit_1 = YPPlist(1,YPPsym((P)"name"));
  T48 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T48,ENVNUL,PNUL,sloc(583));
  T49 = fun_111;
  VARSET(Yfab_sym,T49);
  VARSET(YPsymbols_readyQ,YPtrue);
  lit_2 = YPPsym((P)"fab-sym");
  lit_3 = YPPlist(1,YPPsym((P)"name"));
  T50 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfab_sym = YPmet(FUNCODEREF(Yfab_sym),LITREF(lit_2),T50,ENVNUL,PNUL,sloc(597));
  T51 = Yfab_sym;
  VARSET(Yfab_sym,T51);
  xF788 = VARREF(YPmet_prop_len);
  xF789 = xF788;
  tF790 = (P)1;
  T53 = (P)YPiLL(xF789,(P)2);
  T52 = (P)YPiv(T53,tF790);
  (P)YPclass_prop_len_setter(T52,VARREF(YLmetG));
  T54 = YPfalse;
  return T54;
}

P Y___main_7___() {
  P propF855;
  P setterF854;
  P accessorF853;
  P getterF852;
  P accessorF851;
  P propF850;
  P setterF849;
  P accessorF848;
  P getterF847;
  P accessorF846;
  P propF845;
  P setterF844;
  P accessorF843;
  P getterF842;
  P accessorF841;
  P propF840;
  P setterF839;
  P accessorF838;
  P getterF837;
  P accessorF836;
  P propF835;
  P setterF834;
  P accessorF833;
  P getterF832;
  P accessorF831;
  P propF830;
  P setterF829;
  P accessorF828;
  P getterF827;
  P accessorF826;
  P propF825;
  P setterF824;
  P accessorF823;
  P getterF822;
  P accessorF821;
  P propF820;
  P setterF819;
  P accessorF818;
  P getterF817;
  P accessorF816;
  P propF815;
  P setterF814;
  P accessorF813;
  P getterF812;
  P accessorF811;
  P propF810;
  P setterF809;
  P accessorF808;
  P getterF807;
  P accessorF806;
  P propF805;
  P setterF804;
  P accessorF803;
  P getterF802;
  P accessorF801;
  P propF800;
  P setterF799;
  P accessorF798;
  P getterF797;
  P accessorF796;
  P propF795;
  P setterF794;
  P accessorF793;
  P getterF792;
  P accessorF791;
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
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206;
DEFCREGS();
  VARSET(YDgen_cache_singletons_offset,YPint((P)2));
  VARSET(YDgen_cache_classes_offset,YPint((P)3));
  lit_4 = YPPsym((P)"%prop-offset");
  lit_5 = YPPlist(2,YPPsym((P)"owner"),YPPsym((P)"getter"));
  T0 = YPsig(LITREF(lit_5),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPprop_offset = YPmet(FUNCODEREF(YPprop_offset),LITREF(lit_4),T0,ENVNUL,PNUL,sloc(688));
  T1 = YPprop_offset;
  VARSET(YPprop_offset,T1);
  lit_6 = YPPsym((P)"%early-dispatch");
  lit_7 = YPPlist(1,YPPsym((P)"args"));
  lit_8 = YPsb((P)"ERROR: Generic function dispatch called before it existed.");
  T2 = YPsig(LITREF(lit_7),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YPearly_dispatch = YPmet(FUNCODEREF(YPearly_dispatch),LITREF(lit_6),T2,ENVNUL,PNUL,sloc(706));
  T3 = YPearly_dispatch;
  VARSET(YPearly_dispatch,T3);
  lit_9 = YPPsym((P)"%add-met");
  lit_10 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T4 = YPsig(LITREF(lit_10),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPadd_met = YPmet(FUNCODEREF(YPadd_met),LITREF(lit_9),T4,ENVNUL,PNUL,sloc(714));
  T5 = YPadd_met;
  VARSET(YPadd_met,T5);
  lit_11 = YPPsym((P)"%add-prop");
  lit_12 = YPPlist(2,YPPsym((P)"class"),YPPsym((P)"prop"));
  T6 = YPsig(LITREF(lit_12),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPadd_prop = YPmet(FUNCODEREF(YPadd_prop),LITREF(lit_11),T6,ENVNUL,PNUL,sloc(740));
  T7 = YPadd_prop;
  VARSET(YPadd_prop,T7);
  lit_13 = YPPsym((P)"src-loc-line");
  lit_14 = YPPlist(1,YPPsym((P)"x"));
  lit_15 = YPPsym((P)"src-loc-line-setter");
  lit_16 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_17 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YLsrc_locG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_173 = YPmet(FUNCODEREF(fun_173),YPfalse,T10,ENVNUL,PNUL,sloc(759));
  T9 = YPsig(LITREF(lit_16),YPPlist(2,VARREF(YLintG),VARREF(YLsrc_locG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_174 = YPmet(FUNCODEREF(fun_174),YPfalse,T9,ENVNUL,PNUL,sloc(759));
  T8 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T8,ENVNUL,PNUL,sloc(759));
  T21 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T20 = (P)YPsig(Ynil,T21,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T19 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_13),T20,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysrc_loc_line,T19);
  T22 = fun_173;
  accessorF791 = T22;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_line),accessorF791);
  (P)YPmet_name_setter(VARREF(Ysrc_loc_line),accessorF791);
  getterF792 = accessorF791;
  T17 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T16 = (P)YPpair(VARREF(YLanyG),T17);
  T15 = (P)YPsig(Ynil,T16,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T14 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_15),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysrc_loc_line_setter,T14);
  T18 = fun_174;
  accessorF793 = T18;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_line_setter),accessorF793);
  (P)YPmet_name_setter(VARREF(Ysrc_loc_line_setter),accessorF793);
  setterF794 = accessorF793;
  T13 = fun_175;
  T12 = (P)YPPprop(VARREF(YLsrc_locG),VARREF(Ysrc_loc_line),VARREF(Ysrc_loc_line_setter),VARREF(YLintG),T13);
  propF795 = T12;
  (P)YPmet_env_setter(propF795,getterF792);
  (P)YPmet_env_setter(propF795,setterF794);
  T11 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsrc_locG),propF795);
  lit_18 = YPPsym((P)"src-loc-file");
  lit_19 = YPPlist(1,YPPsym((P)"x"));
  lit_20 = YPPsym((P)"src-loc-file-setter");
  lit_21 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_22 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLsrc_locG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_176 = YPmet(FUNCODEREF(fun_176),YPfalse,T25,ENVNUL,PNUL,sloc(759));
  T24 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLstrG),VARREF(YLsrc_locG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_177 = YPmet(FUNCODEREF(fun_177),YPfalse,T24,ENVNUL,PNUL,sloc(759));
  T23 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T23,ENVNUL,PNUL,sloc(759));
  T36 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T35 = (P)YPsig(Ynil,T36,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T34 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_18),T35,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysrc_loc_file,T34);
  T37 = fun_176;
  accessorF796 = T37;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_file),accessorF796);
  (P)YPmet_name_setter(VARREF(Ysrc_loc_file),accessorF796);
  getterF797 = accessorF796;
  T32 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T31 = (P)YPpair(VARREF(YLanyG),T32);
  T30 = (P)YPsig(Ynil,T31,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T29 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_20),T30,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysrc_loc_file_setter,T29);
  T33 = fun_177;
  accessorF798 = T33;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_file_setter),accessorF798);
  (P)YPmet_name_setter(VARREF(Ysrc_loc_file_setter),accessorF798);
  setterF799 = accessorF798;
  T28 = fun_178;
  T27 = (P)YPPprop(VARREF(YLsrc_locG),VARREF(Ysrc_loc_file),VARREF(Ysrc_loc_file_setter),VARREF(YLstrG),T28);
  propF800 = T27;
  (P)YPmet_env_setter(propF800,getterF797);
  (P)YPmet_env_setter(propF800,setterF799);
  T26 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsrc_locG),propF800);
  lit_23 = YPPsym((P)"head");
  lit_24 = YPPlist(1,YPPsym((P)"x"));
  lit_25 = YPPsym((P)"head-setter");
  lit_26 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_27 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_179 = YPmet(FUNCODEREF(fun_179),YPfalse,T40,ENVNUL,PNUL,sloc(759));
  T39 = YPsig(LITREF(lit_26),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T39,ENVNUL,PNUL,sloc(759));
  T38 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_181 = YPmet(FUNCODEREF(fun_181),YPfalse,T38,ENVNUL,PNUL,sloc(759));
  T51 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T50 = (P)YPsig(Ynil,T51,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T49 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_23),T50,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yhead,T49);
  T52 = fun_179;
  accessorF801 = T52;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yhead),accessorF801);
  (P)YPmet_name_setter(VARREF(Yhead),accessorF801);
  getterF802 = accessorF801;
  T47 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T46 = (P)YPpair(VARREF(YLanyG),T47);
  T45 = (P)YPsig(Ynil,T46,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T44 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_25),T45,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yhead_setter,T44);
  T48 = fun_180;
  accessorF803 = T48;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yhead_setter),accessorF803);
  (P)YPmet_name_setter(VARREF(Yhead_setter),accessorF803);
  setterF804 = accessorF803;
  T43 = fun_181;
  T42 = (P)YPPprop(VARREF(YLlstG),VARREF(Yhead),VARREF(Yhead_setter),VARREF(YLanyG),T43);
  propF805 = T42;
  (P)YPmet_env_setter(propF805,getterF802);
  (P)YPmet_env_setter(propF805,setterF804);
  T41 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF805);
  lit_28 = YPPsym((P)"tail");
  lit_29 = YPPlist(1,YPPsym((P)"x"));
  lit_30 = YPPsym((P)"tail-setter");
  lit_31 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_32 = YPPlist(1,YPPsym((P)"x"));
  T55 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T55,ENVNUL,PNUL,sloc(759));
  T54 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_183 = YPmet(FUNCODEREF(fun_183),YPfalse,T54,ENVNUL,PNUL,sloc(759));
  T53 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_184 = YPmet(FUNCODEREF(fun_184),YPfalse,T53,ENVNUL,PNUL,sloc(759));
  T66 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T65 = (P)YPsig(Ynil,T66,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T64 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_28),T65,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytail,T64);
  T67 = fun_182;
  accessorF806 = T67;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytail),accessorF806);
  (P)YPmet_name_setter(VARREF(Ytail),accessorF806);
  getterF807 = accessorF806;
  T62 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T61 = (P)YPpair(VARREF(YLanyG),T62);
  T60 = (P)YPsig(Ynil,T61,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T59 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_30),T60,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytail_setter,T59);
  T63 = fun_183;
  accessorF808 = T63;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytail_setter),accessorF808);
  (P)YPmet_name_setter(VARREF(Ytail_setter),accessorF808);
  setterF809 = accessorF808;
  T58 = fun_184;
  T57 = (P)YPPprop(VARREF(YLlstG),VARREF(Ytail),VARREF(Ytail_setter),VARREF(YLlstG),T58);
  propF810 = T57;
  (P)YPmet_env_setter(propF810,getterF807);
  (P)YPmet_env_setter(propF810,setterF809);
  T56 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF810);
  lit_33 = YPPsym((P)"sym-name");
  lit_34 = YPPlist(1,YPPsym((P)"x"));
  lit_35 = YPPsym((P)"sym-name-setter");
  lit_36 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_37 = YPPlist(1,YPPsym((P)"x"));
  T70 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_185 = YPmet(FUNCODEREF(fun_185),YPfalse,T70,ENVNUL,PNUL,sloc(759));
  T69 = YPsig(LITREF(lit_36),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_186 = YPmet(FUNCODEREF(fun_186),YPfalse,T69,ENVNUL,PNUL,sloc(759));
  T68 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_187 = YPmet(FUNCODEREF(fun_187),YPfalse,T68,ENVNUL,PNUL,sloc(759));
  T81 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T80 = (P)YPsig(Ynil,T81,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T79 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_33),T80,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysym_name,T79);
  T82 = fun_185;
  accessorF811 = T82;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysym_name),accessorF811);
  (P)YPmet_name_setter(VARREF(Ysym_name),accessorF811);
  getterF812 = accessorF811;
  T77 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T76 = (P)YPpair(VARREF(YLanyG),T77);
  T75 = (P)YPsig(Ynil,T76,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T74 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_35),T75,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysym_name_setter,T74);
  T78 = fun_186;
  accessorF813 = T78;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysym_name_setter),accessorF813);
  (P)YPmet_name_setter(VARREF(Ysym_name_setter),accessorF813);
  setterF814 = accessorF813;
  T73 = fun_187;
  T72 = (P)YPPprop(VARREF(YLsymG),VARREF(Ysym_name),VARREF(Ysym_name_setter),VARREF(YLstrG),T73);
  propF815 = T72;
  (P)YPmet_env_setter(propF815,getterF812);
  (P)YPmet_env_setter(propF815,setterF814);
  T71 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsymG),propF815);
  lit_38 = YPPsym((P)"class-prop-len");
  lit_39 = YPPlist(1,YPPsym((P)"x"));
  lit_40 = YPPsym((P)"class-prop-len-setter");
  lit_41 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_42 = YPPlist(1,YPPsym((P)"x"));
  T85 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T85,ENVNUL,PNUL,sloc(759));
  T84 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YLfixnumG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_189 = YPmet(FUNCODEREF(fun_189),YPfalse,T84,ENVNUL,PNUL,sloc(759));
  T83 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_190 = YPmet(FUNCODEREF(fun_190),YPfalse,T83,ENVNUL,PNUL,sloc(759));
  T96 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T95 = (P)YPsig(Ynil,T96,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T94 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_38),T95,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_prop_len,T94);
  T97 = fun_188;
  accessorF816 = T97;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len),accessorF816);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len),accessorF816);
  getterF817 = accessorF816;
  T92 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T91 = (P)YPpair(VARREF(YLanyG),T92);
  T90 = (P)YPsig(Ynil,T91,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T89 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_40),T90,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_prop_len_setter,T89);
  T93 = fun_189;
  accessorF818 = T93;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len_setter),accessorF818);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len_setter),accessorF818);
  setterF819 = accessorF818;
  T88 = fun_190;
  T87 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_prop_len),VARREF(Yclass_prop_len_setter),VARREF(YLfixnumG),T88);
  propF820 = T87;
  (P)YPmet_env_setter(propF820,getterF817);
  (P)YPmet_env_setter(propF820,setterF819);
  T86 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF820);
  lit_43 = YPPsym((P)"class-name");
  lit_44 = YPPlist(1,YPPsym((P)"x"));
  lit_45 = YPPsym((P)"class-name-setter");
  lit_46 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_47 = YPPlist(1,YPPsym((P)"x"));
  T100 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T100,ENVNUL,PNUL,sloc(759));
  T99 = YPsig(LITREF(lit_46),YPPlist(2,VARREF(YLsymG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_192 = YPmet(FUNCODEREF(fun_192),YPfalse,T99,ENVNUL,PNUL,sloc(759));
  T98 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T98,ENVNUL,PNUL,sloc(759));
  T111 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T110 = (P)YPsig(Ynil,T111,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T109 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_43),T110,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_name,T109);
  T112 = fun_191;
  accessorF821 = T112;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_name),accessorF821);
  (P)YPmet_name_setter(VARREF(Yclass_name),accessorF821);
  getterF822 = accessorF821;
  T107 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T106 = (P)YPpair(VARREF(YLanyG),T107);
  T105 = (P)YPsig(Ynil,T106,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T104 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_45),T105,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_name_setter,T104);
  T108 = fun_192;
  accessorF823 = T108;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_name_setter),accessorF823);
  (P)YPmet_name_setter(VARREF(Yclass_name_setter),accessorF823);
  setterF824 = accessorF823;
  T103 = fun_193;
  T102 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_name),VARREF(Yclass_name_setter),VARREF(YLsymG),T103);
  propF825 = T102;
  (P)YPmet_env_setter(propF825,getterF822);
  (P)YPmet_env_setter(propF825,setterF824);
  T101 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF825);
  lit_48 = YPPsym((P)"class-parents");
  lit_49 = YPPlist(1,YPPsym((P)"x"));
  lit_50 = YPPsym((P)"class-parents-setter");
  lit_51 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_52 = YPPlist(1,YPPsym((P)"x"));
  T115 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_194 = YPmet(FUNCODEREF(fun_194),YPfalse,T115,ENVNUL,PNUL,sloc(759));
  T114 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_195 = YPmet(FUNCODEREF(fun_195),YPfalse,T114,ENVNUL,PNUL,sloc(759));
  T113 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_196 = YPmet(FUNCODEREF(fun_196),YPfalse,T113,ENVNUL,PNUL,sloc(759));
  T126 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T125 = (P)YPsig(Ynil,T126,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T124 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_48),T125,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_parents,T124);
  T127 = fun_194;
  accessorF826 = T127;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents),accessorF826);
  (P)YPmet_name_setter(VARREF(Yclass_parents),accessorF826);
  getterF827 = accessorF826;
  T122 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T121 = (P)YPpair(VARREF(YLanyG),T122);
  T120 = (P)YPsig(Ynil,T121,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T119 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_50),T120,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_parents_setter,T119);
  T123 = fun_195;
  accessorF828 = T123;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents_setter),accessorF828);
  (P)YPmet_name_setter(VARREF(Yclass_parents_setter),accessorF828);
  setterF829 = accessorF828;
  T118 = fun_196;
  T117 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_parents),VARREF(Yclass_parents_setter),VARREF(YLlstG),T118);
  propF830 = T117;
  (P)YPmet_env_setter(propF830,getterF827);
  (P)YPmet_env_setter(propF830,setterF829);
  T116 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF830);
  lit_53 = YPPsym((P)"class-direct-props");
  lit_54 = YPPlist(1,YPPsym((P)"x"));
  lit_55 = YPPsym((P)"class-direct-props-setter");
  lit_56 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_57 = YPPlist(1,YPPsym((P)"x"));
  T130 = YPsig(LITREF(lit_54),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T130,ENVNUL,PNUL,sloc(759));
  T129 = YPsig(LITREF(lit_56),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_198 = YPmet(FUNCODEREF(fun_198),YPfalse,T129,ENVNUL,PNUL,sloc(759));
  T128 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_199 = YPmet(FUNCODEREF(fun_199),YPfalse,T128,ENVNUL,PNUL,sloc(759));
  T141 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T140 = (P)YPsig(Ynil,T141,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T139 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_53),T140,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_direct_props,T139);
  T142 = fun_197;
  accessorF831 = T142;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props),accessorF831);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props),accessorF831);
  getterF832 = accessorF831;
  T137 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T136 = (P)YPpair(VARREF(YLanyG),T137);
  T135 = (P)YPsig(Ynil,T136,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T134 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_55),T135,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_direct_props_setter,T134);
  T138 = fun_198;
  accessorF833 = T138;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props_setter),accessorF833);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props_setter),accessorF833);
  setterF834 = accessorF833;
  T133 = fun_199;
  T132 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_direct_props),VARREF(Yclass_direct_props_setter),VARREF(YLlstG),T133);
  propF835 = T132;
  (P)YPmet_env_setter(propF835,getterF832);
  (P)YPmet_env_setter(propF835,setterF834);
  T131 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF835);
  lit_58 = YPPsym((P)"class-ancestors");
  lit_59 = YPPlist(1,YPPsym((P)"x"));
  lit_60 = YPPsym((P)"class-ancestors-setter");
  lit_61 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_62 = YPPlist(1,YPPsym((P)"x"));
  T145 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_200 = YPmet(FUNCODEREF(fun_200),YPfalse,T145,ENVNUL,PNUL,sloc(759));
  T144 = YPsig(LITREF(lit_61),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_201 = YPmet(FUNCODEREF(fun_201),YPfalse,T144,ENVNUL,PNUL,sloc(759));
  T143 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T143,ENVNUL,PNUL,sloc(759));
  T156 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T155 = (P)YPsig(Ynil,T156,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T154 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_58),T155,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_ancestors,T154);
  T157 = fun_200;
  accessorF836 = T157;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors),accessorF836);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors),accessorF836);
  getterF837 = accessorF836;
  T152 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T151 = (P)YPpair(VARREF(YLanyG),T152);
  T150 = (P)YPsig(Ynil,T151,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T149 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_60),T150,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_ancestors_setter,T149);
  T153 = fun_201;
  accessorF838 = T153;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors_setter),accessorF838);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors_setter),accessorF838);
  setterF839 = accessorF838;
  T148 = fun_202;
  T147 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_ancestors),VARREF(Yclass_ancestors_setter),VARREF(YLlstG),T148);
  propF840 = T147;
  (P)YPmet_env_setter(propF840,getterF837);
  (P)YPmet_env_setter(propF840,setterF839);
  T146 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF840);
  lit_63 = YPPsym((P)"class-props");
  lit_64 = YPPlist(1,YPPsym((P)"x"));
  lit_65 = YPPsym((P)"class-props-setter");
  lit_66 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_67 = YPPlist(1,YPPsym((P)"x"));
  T160 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_203 = YPmet(FUNCODEREF(fun_203),YPfalse,T160,ENVNUL,PNUL,sloc(759));
  T159 = YPsig(LITREF(lit_66),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_204 = YPmet(FUNCODEREF(fun_204),YPfalse,T159,ENVNUL,PNUL,sloc(759));
  T158 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_205 = YPmet(FUNCODEREF(fun_205),YPfalse,T158,ENVNUL,PNUL,sloc(759));
  T171 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T170 = (P)YPsig(Ynil,T171,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T169 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_63),T170,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_props,T169);
  T172 = fun_203;
  accessorF841 = T172;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_props),accessorF841);
  (P)YPmet_name_setter(VARREF(Yclass_props),accessorF841);
  getterF842 = accessorF841;
  T167 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T166 = (P)YPpair(VARREF(YLanyG),T167);
  T165 = (P)YPsig(Ynil,T166,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T164 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_65),T165,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_props_setter,T164);
  T168 = fun_204;
  accessorF843 = T168;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_props_setter),accessorF843);
  (P)YPmet_name_setter(VARREF(Yclass_props_setter),accessorF843);
  setterF844 = accessorF843;
  T163 = fun_205;
  T162 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_props),VARREF(Yclass_props_setter),VARREF(YLlstG),T163);
  propF845 = T162;
  (P)YPmet_env_setter(propF845,getterF842);
  (P)YPmet_env_setter(propF845,setterF844);
  T161 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF845);
  lit_68 = YPPsym((P)"class-children");
  lit_69 = YPPlist(1,YPPsym((P)"x"));
  lit_70 = YPPsym((P)"class-children-setter");
  lit_71 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_72 = YPPlist(1,YPPsym((P)"x"));
  T175 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T175,ENVNUL,PNUL,sloc(759));
  T174 = YPsig(LITREF(lit_71),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_207 = YPmet(FUNCODEREF(fun_207),YPfalse,T174,ENVNUL,PNUL,sloc(759));
  T173 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_208 = YPmet(FUNCODEREF(fun_208),YPfalse,T173,ENVNUL,PNUL,sloc(759));
  T186 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T185 = (P)YPsig(Ynil,T186,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T184 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_68),T185,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_children,T184);
  T187 = fun_206;
  accessorF846 = T187;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_children),accessorF846);
  (P)YPmet_name_setter(VARREF(Yclass_children),accessorF846);
  getterF847 = accessorF846;
  T182 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T181 = (P)YPpair(VARREF(YLanyG),T182);
  T180 = (P)YPsig(Ynil,T181,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T179 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_70),T180,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_children_setter,T179);
  T183 = fun_207;
  accessorF848 = T183;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_children_setter),accessorF848);
  (P)YPmet_name_setter(VARREF(Yclass_children_setter),accessorF848);
  setterF849 = accessorF848;
  T178 = fun_208;
  T177 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_children),VARREF(Yclass_children_setter),VARREF(YLlstG),T178);
  propF850 = T177;
  (P)YPmet_env_setter(propF850,getterF847);
  (P)YPmet_env_setter(propF850,setterF849);
  T176 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF850);
  lit_73 = YPPsym((P)"class-gens");
  lit_74 = YPPlist(1,YPPsym((P)"x"));
  lit_75 = YPPsym((P)"class-gens-setter");
  lit_76 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_77 = YPPlist(1,YPPsym((P)"x"));
  T194 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T193 = fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T194,ENVNUL,PNUL,sloc(759));
  T192 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T191 = fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T192,ENVNUL,PNUL,sloc(759));
  T190 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T189 = fun_211 = YPmet(FUNCODEREF(fun_211),YPfalse,T190,ENVNUL,PNUL,sloc(759));
  T205 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T204 = (P)YPsig(Ynil,T205,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T203 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_73),T204,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_gens,T203);
  T206 = fun_209;
  accessorF851 = T206;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens),accessorF851);
  (P)YPmet_name_setter(VARREF(Yclass_gens),accessorF851);
  getterF852 = accessorF851;
  T201 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T200 = (P)YPpair(VARREF(YLanyG),T201);
  T199 = (P)YPsig(Ynil,T200,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T198 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_75),T199,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_gens_setter,T198);
  T202 = fun_210;
  accessorF853 = T202;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens_setter),accessorF853);
  (P)YPmet_name_setter(VARREF(Yclass_gens_setter),accessorF853);
  setterF854 = accessorF853;
  T197 = fun_211;
  T196 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_gens),VARREF(Yclass_gens_setter),VARREF(YLlstG),T197);
  propF855 = T196;
  (P)YPmet_env_setter(propF855,getterF852);
  (P)YPmet_env_setter(propF855,setterF854);
  T195 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF855);
  T188 = T195;
  return T188;
}

P Y___main_8___() {
  P propF1040;
  P setterF1039;
  P accessorF1038;
  P getterF1037;
  P accessorF1036;
  P propF1035;
  P setterF1034;
  P accessorF1033;
  P getterF1032;
  P accessorF1031;
  P propF1030;
  P setterF1029;
  P accessorF1028;
  P getterF1027;
  P accessorF1026;
  P propF1025;
  P setterF1024;
  P accessorF1023;
  P getterF1022;
  P accessorF1021;
  P propF1020;
  P setterF1019;
  P accessorF1018;
  P getterF1017;
  P accessorF1016;
  P propF1015;
  P setterF1014;
  P accessorF1013;
  P getterF1012;
  P accessorF1011;
  P propF1010;
  P setterF1009;
  P accessorF1008;
  P getterF1007;
  P accessorF1006;
  P propF1005;
  P setterF1004;
  P accessorF1003;
  P getterF1002;
  P accessorF1001;
  P propF1000;
  P setterF999;
  P accessorF998;
  P getterF997;
  P accessorF996;
  P propF995;
  P setterF994;
  P accessorF993;
  P getterF992;
  P accessorF991;
  P propF990;
  P setterF989;
  P accessorF988;
  P getterF987;
  P accessorF986;
  P propF985;
  P setterF984;
  P accessorF983;
  P getterF982;
  P accessorF981;
  P propF980;
  P setterF979;
  P accessorF978;
  P getterF977;
  P accessorF976;
  P propF975;
  P setterF974;
  P accessorF973;
  P getterF972;
  P accessorF971;
  P propF970;
  P setterF969;
  P accessorF968;
  P getterF967;
  P accessorF966;
  P propF965;
  P setterF964;
  P accessorF963;
  P getterF962;
  P accessorF961;
  P propF960;
  P setterF959;
  P accessorF958;
  P getterF957;
  P accessorF956;
  P propF955;
  P setterF954;
  P accessorF953;
  P getterF952;
  P accessorF951;
  P propF950;
  P setterF949;
  P accessorF948;
  P getterF947;
  P accessorF946;
  P propF945;
  P setterF944;
  P accessorF943;
  P getterF942;
  P accessorF941;
  P propF940;
  P setterF939;
  P accessorF938;
  P getterF937;
  P accessorF936;
  P propF935;
  P setterF934;
  P accessorF933;
  P getterF932;
  P accessorF931;
  P propF930;
  P setterF929;
  P accessorF928;
  P getterF927;
  P accessorF926;
  P propF925;
  P setterF924;
  P accessorF923;
  P getterF922;
  P accessorF921;
  P propF920;
  P setterF919;
  P accessorF918;
  P getterF917;
  P accessorF916;
  P propF915;
  P setterF914;
  P accessorF913;
  P getterF912;
  P accessorF911;
  P propF910;
  P setterF909;
  P accessorF908;
  P getterF907;
  P accessorF906;
  P propF905;
  P setterF904;
  P accessorF903;
  P getterF902;
  P accessorF901;
  P propF900;
  P setterF899;
  P accessorF898;
  P getterF897;
  P accessorF896;
  P propF895;
  P setterF894;
  P accessorF893;
  P getterF892;
  P accessorF891;
  P propF890;
  P setterF889;
  P accessorF888;
  P getterF887;
  P accessorF886;
  P propF885;
  P setterF884;
  P accessorF883;
  P getterF882;
  P accessorF881;
  P propF880;
  P setterF879;
  P accessorF878;
  P getterF877;
  P accessorF876;
  P propF875;
  P setterF874;
  P accessorF873;
  P getterF872;
  P accessorF871;
  P propF870;
  P setterF869;
  P accessorF868;
  P getterF867;
  P accessorF866;
  P propF865;
  P setterF864;
  P accessorF863;
  P getterF862;
  P accessorF861;
  P propF860;
  P setterF859;
  P accessorF858;
  P getterF857;
  P accessorF856;
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
  P T560,T561;
DEFCREGS();
  lit_78 = YPPsym((P)"class-mets");
  lit_79 = YPPlist(1,YPPsym((P)"x"));
  lit_80 = YPPsym((P)"class-mets-setter");
  lit_81 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_82 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_212 = YPmet(FUNCODEREF(fun_212),YPfalse,T2,ENVNUL,PNUL,sloc(759));
  T1 = YPsig(LITREF(lit_81),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_213 = YPmet(FUNCODEREF(fun_213),YPfalse,T1,ENVNUL,PNUL,sloc(759));
  T0 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_214 = YPmet(FUNCODEREF(fun_214),YPfalse,T0,ENVNUL,PNUL,sloc(759));
  T13 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T12 = (P)YPsig(Ynil,T13,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T11 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_78),T12,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_mets,T11);
  T14 = fun_212;
  accessorF856 = T14;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets),accessorF856);
  (P)YPmet_name_setter(VARREF(Yclass_mets),accessorF856);
  getterF857 = accessorF856;
  T9 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T8 = (P)YPpair(VARREF(YLanyG),T9);
  T7 = (P)YPsig(Ynil,T8,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T6 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_80),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_mets_setter,T6);
  T10 = fun_213;
  accessorF858 = T10;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets_setter),accessorF858);
  (P)YPmet_name_setter(VARREF(Yclass_mets_setter),accessorF858);
  setterF859 = accessorF858;
  T5 = fun_214;
  T4 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_mets),VARREF(Yclass_mets_setter),VARREF(YLlstG),T5);
  propF860 = T4;
  (P)YPmet_env_setter(propF860,getterF857);
  (P)YPmet_env_setter(propF860,setterF859);
  T3 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF860);
  lit_83 = YPPsym((P)"class-forward");
  lit_84 = YPPlist(1,YPPsym((P)"x"));
  lit_85 = YPPsym((P)"class-forward-setter");
  lit_86 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_87 = YPPlist(1,YPPsym((P)"x"));
  T17 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T17,ENVNUL,PNUL,sloc(759));
  T16 = YPsig(LITREF(lit_86),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T16,ENVNUL,PNUL,sloc(759));
  T15 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_217 = YPmet(FUNCODEREF(fun_217),YPfalse,T15,ENVNUL,PNUL,sloc(759));
  T28 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T27 = (P)YPsig(Ynil,T28,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T26 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_83),T27,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_forward,T26);
  T29 = fun_215;
  accessorF861 = T29;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward),accessorF861);
  (P)YPmet_name_setter(VARREF(Yclass_forward),accessorF861);
  getterF862 = accessorF861;
  T24 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T23 = (P)YPpair(VARREF(YLanyG),T24);
  T22 = (P)YPsig(Ynil,T23,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T21 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_85),T22,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_forward_setter,T21);
  T25 = fun_216;
  accessorF863 = T25;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward_setter),accessorF863);
  (P)YPmet_name_setter(VARREF(Yclass_forward_setter),accessorF863);
  setterF864 = accessorF863;
  T20 = fun_217;
  T19 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_forward),VARREF(Yclass_forward_setter),VARREF(YLanyG),T20);
  propF865 = T19;
  (P)YPmet_env_setter(propF865,getterF862);
  (P)YPmet_env_setter(propF865,setterF864);
  T18 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF865);
  lit_88 = YPPsym((P)"class-type-cache");
  lit_89 = YPPlist(1,YPPsym((P)"x"));
  lit_90 = YPPsym((P)"class-type-cache-setter");
  lit_91 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_92 = YPPlist(1,YPPsym((P)"x"));
  T32 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_218 = YPmet(FUNCODEREF(fun_218),YPfalse,T32,ENVNUL,PNUL,sloc(759));
  T31 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T31,ENVNUL,PNUL,sloc(759));
  T30 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T30,ENVNUL,PNUL,sloc(759));
  T43 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T42 = (P)YPsig(Ynil,T43,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T41 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_88),T42,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_type_cache,T41);
  T44 = fun_218;
  accessorF866 = T44;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_type_cache),accessorF866);
  (P)YPmet_name_setter(VARREF(Yclass_type_cache),accessorF866);
  getterF867 = accessorF866;
  T39 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T38 = (P)YPpair(VARREF(YLanyG),T39);
  T37 = (P)YPsig(Ynil,T38,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T36 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_90),T37,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_type_cache_setter,T36);
  T40 = fun_219;
  accessorF868 = T40;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_type_cache_setter),accessorF868);
  (P)YPmet_name_setter(VARREF(Yclass_type_cache_setter),accessorF868);
  setterF869 = accessorF868;
  T35 = fun_220;
  T34 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_type_cache),VARREF(Yclass_type_cache_setter),VARREF(YLanyG),T35);
  propF870 = T34;
  (P)YPmet_env_setter(propF870,getterF867);
  (P)YPmet_env_setter(propF870,setterF869);
  T33 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF870);
  lit_93 = YPPsym((P)"class-id");
  lit_94 = YPPlist(1,YPPsym((P)"x"));
  lit_95 = YPPsym((P)"class-id-setter");
  lit_96 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_97 = YPPlist(1,YPPsym((P)"x"));
  T47 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T47,ENVNUL,PNUL,sloc(759));
  T46 = YPsig(LITREF(lit_96),YPPlist(2,VARREF(YLfixnumG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T46,ENVNUL,PNUL,sloc(759));
  T45 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_223 = YPmet(FUNCODEREF(fun_223),YPfalse,T45,ENVNUL,PNUL,sloc(759));
  T58 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T57 = (P)YPsig(Ynil,T58,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T56 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_93),T57,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_id,T56);
  T59 = fun_221;
  accessorF871 = T59;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_id),accessorF871);
  (P)YPmet_name_setter(VARREF(Yclass_id),accessorF871);
  getterF872 = accessorF871;
  T54 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T53 = (P)YPpair(VARREF(YLanyG),T54);
  T52 = (P)YPsig(Ynil,T53,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T51 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_95),T52,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_id_setter,T51);
  T55 = fun_222;
  accessorF873 = T55;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_id_setter),accessorF873);
  (P)YPmet_name_setter(VARREF(Yclass_id_setter),accessorF873);
  setterF874 = accessorF873;
  T50 = fun_223;
  T49 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_id),VARREF(Yclass_id_setter),VARREF(YLfixnumG),T50);
  propF875 = T49;
  (P)YPmet_env_setter(propF875,getterF872);
  (P)YPmet_env_setter(propF875,setterF874);
  T48 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF875);
  lit_98 = YPPsym((P)"class-row");
  lit_99 = YPPlist(1,YPPsym((P)"x"));
  lit_100 = YPPsym((P)"class-row-setter");
  lit_101 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_102 = YPPlist(1,YPPsym((P)"x"));
  T62 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_224 = YPmet(FUNCODEREF(fun_224),YPfalse,T62,ENVNUL,PNUL,sloc(759));
  T61 = YPsig(LITREF(lit_101),YPPlist(2,VARREF(YLtupG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T61,ENVNUL,PNUL,sloc(759));
  T60 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_226 = YPmet(FUNCODEREF(fun_226),YPfalse,T60,ENVNUL,PNUL,sloc(759));
  T73 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T72 = (P)YPsig(Ynil,T73,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T71 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_98),T72,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_row,T71);
  T74 = fun_224;
  accessorF876 = T74;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_row),accessorF876);
  (P)YPmet_name_setter(VARREF(Yclass_row),accessorF876);
  getterF877 = accessorF876;
  T69 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T68 = (P)YPpair(VARREF(YLanyG),T69);
  T67 = (P)YPsig(Ynil,T68,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T66 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_100),T67,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_row_setter,T66);
  T70 = fun_225;
  accessorF878 = T70;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_row_setter),accessorF878);
  (P)YPmet_name_setter(VARREF(Yclass_row_setter),accessorF878);
  setterF879 = accessorF878;
  T65 = fun_226;
  T64 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_row),VARREF(Yclass_row_setter),VARREF(YLtupG),T65);
  propF880 = T64;
  (P)YPmet_env_setter(propF880,getterF877);
  (P)YPmet_env_setter(propF880,setterF879);
  T63 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF880);
  lit_103 = YPPsym((P)"type-object");
  lit_104 = YPPlist(1,YPPsym((P)"x"));
  lit_105 = YPPsym((P)"type-object-setter");
  lit_106 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_107 = YPPlist(1,YPPsym((P)"x"));
  T77 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YLsingletonG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_227 = YPmet(FUNCODEREF(fun_227),YPfalse,T77,ENVNUL,PNUL,sloc(759));
  T76 = YPsig(LITREF(lit_106),YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_228 = YPmet(FUNCODEREF(fun_228),YPfalse,T76,ENVNUL,PNUL,sloc(759));
  T75 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_229 = YPmet(FUNCODEREF(fun_229),YPfalse,T75,ENVNUL,PNUL,sloc(759));
  T88 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T87 = (P)YPsig(Ynil,T88,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T86 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_103),T87,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_object,T86);
  T89 = fun_227;
  accessorF881 = T89;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_object),accessorF881);
  (P)YPmet_name_setter(VARREF(Ytype_object),accessorF881);
  getterF882 = accessorF881;
  T84 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T83 = (P)YPpair(VARREF(YLanyG),T84);
  T82 = (P)YPsig(Ynil,T83,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T81 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_105),T82,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_object_setter,T81);
  T85 = fun_228;
  accessorF883 = T85;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_object_setter),accessorF883);
  (P)YPmet_name_setter(VARREF(Ytype_object_setter),accessorF883);
  setterF884 = accessorF883;
  T80 = fun_229;
  T79 = (P)YPPprop(VARREF(YLsingletonG),VARREF(Ytype_object),VARREF(Ytype_object_setter),VARREF(YLanyG),T80);
  propF885 = T79;
  (P)YPmet_env_setter(propF885,getterF882);
  (P)YPmet_env_setter(propF885,setterF884);
  T78 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsingletonG),propF885);
  lit_108 = YPPsym((P)"type-class");
  lit_109 = YPPlist(1,YPPsym((P)"x"));
  lit_110 = YPPsym((P)"type-class-setter");
  lit_111 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_112 = YPPlist(1,YPPsym((P)"x"));
  T92 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLsubclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_230 = YPmet(FUNCODEREF(fun_230),YPfalse,T92,ENVNUL,PNUL,sloc(759));
  T91 = YPsig(LITREF(lit_111),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_231 = YPmet(FUNCODEREF(fun_231),YPfalse,T91,ENVNUL,PNUL,sloc(759));
  T90 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T90,ENVNUL,PNUL,sloc(759));
  T103 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T102 = (P)YPsig(Ynil,T103,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T101 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_108),T102,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_class,T101);
  T104 = fun_230;
  accessorF886 = T104;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_class),accessorF886);
  (P)YPmet_name_setter(VARREF(Ytype_class),accessorF886);
  getterF887 = accessorF886;
  T99 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T98 = (P)YPpair(VARREF(YLanyG),T99);
  T97 = (P)YPsig(Ynil,T98,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T96 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_110),T97,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_class_setter,T96);
  T100 = fun_231;
  accessorF888 = T100;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_class_setter),accessorF888);
  (P)YPmet_name_setter(VARREF(Ytype_class_setter),accessorF888);
  setterF889 = accessorF888;
  T95 = fun_232;
  T94 = (P)YPPprop(VARREF(YLsubclassG),VARREF(Ytype_class),VARREF(Ytype_class_setter),VARREF(YLclassG),T95);
  propF890 = T94;
  (P)YPmet_env_setter(propF890,getterF887);
  (P)YPmet_env_setter(propF890,setterF889);
  T93 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsubclassG),propF890);
  lit_113 = YPPsym((P)"union-elts");
  lit_114 = YPPlist(1,YPPsym((P)"x"));
  lit_115 = YPPsym((P)"union-elts-setter");
  lit_116 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_117 = YPPlist(1,YPPsym((P)"x"));
  T107 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLunionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_233 = YPmet(FUNCODEREF(fun_233),YPfalse,T107,ENVNUL,PNUL,sloc(759));
  T106 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLlstG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_234 = YPmet(FUNCODEREF(fun_234),YPfalse,T106,ENVNUL,PNUL,sloc(759));
  T105 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_235 = YPmet(FUNCODEREF(fun_235),YPfalse,T105,ENVNUL,PNUL,sloc(759));
  T118 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T117 = (P)YPsig(Ynil,T118,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T116 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_113),T117,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yunion_elts,T116);
  T119 = fun_233;
  accessorF891 = T119;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yunion_elts),accessorF891);
  (P)YPmet_name_setter(VARREF(Yunion_elts),accessorF891);
  getterF892 = accessorF891;
  T114 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T113 = (P)YPpair(VARREF(YLanyG),T114);
  T112 = (P)YPsig(Ynil,T113,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T111 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_115),T112,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yunion_elts_setter,T111);
  T115 = fun_234;
  accessorF893 = T115;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yunion_elts_setter),accessorF893);
  (P)YPmet_name_setter(VARREF(Yunion_elts_setter),accessorF893);
  setterF894 = accessorF893;
  T110 = fun_235;
  T109 = (P)YPPprop(VARREF(YLunionG),VARREF(Yunion_elts),VARREF(Yunion_elts_setter),VARREF(YLlstG),T110);
  propF895 = T109;
  (P)YPmet_env_setter(propF895,getterF892);
  (P)YPmet_env_setter(propF895,setterF894);
  T108 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLunionG),propF895);
  lit_118 = YPPsym((P)"product-elts");
  lit_119 = YPPlist(1,YPPsym((P)"x"));
  lit_120 = YPPsym((P)"product-elts-setter");
  lit_121 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_122 = YPPlist(1,YPPsym((P)"x"));
  T122 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YLproductG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T122,ENVNUL,PNUL,sloc(759));
  T121 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YLtupG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_237 = YPmet(FUNCODEREF(fun_237),YPfalse,T121,ENVNUL,PNUL,sloc(759));
  T120 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_238 = YPmet(FUNCODEREF(fun_238),YPfalse,T120,ENVNUL,PNUL,sloc(759));
  T133 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T132 = (P)YPsig(Ynil,T133,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T131 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_118),T132,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yproduct_elts,T131);
  T134 = fun_236;
  accessorF896 = T134;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yproduct_elts),accessorF896);
  (P)YPmet_name_setter(VARREF(Yproduct_elts),accessorF896);
  getterF897 = accessorF896;
  T129 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T128 = (P)YPpair(VARREF(YLanyG),T129);
  T127 = (P)YPsig(Ynil,T128,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T126 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_120),T127,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yproduct_elts_setter,T126);
  T130 = fun_237;
  accessorF898 = T130;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yproduct_elts_setter),accessorF898);
  (P)YPmet_name_setter(VARREF(Yproduct_elts_setter),accessorF898);
  setterF899 = accessorF898;
  T125 = fun_238;
  T124 = (P)YPPprop(VARREF(YLproductG),VARREF(Yproduct_elts),VARREF(Yproduct_elts_setter),VARREF(YLtupG),T125);
  propF900 = T124;
  (P)YPmet_env_setter(propF900,getterF897);
  (P)YPmet_env_setter(propF900,setterF899);
  T123 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLproductG),propF900);
  lit_123 = YPPsym((P)"prop-owner");
  lit_124 = YPPlist(1,YPPsym((P)"x"));
  lit_125 = YPPsym((P)"prop-owner-setter");
  lit_126 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_127 = YPPlist(1,YPPsym((P)"x"));
  T137 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_239 = YPmet(FUNCODEREF(fun_239),YPfalse,T137,ENVNUL,PNUL,sloc(759));
  T136 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLanyG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_240 = YPmet(FUNCODEREF(fun_240),YPfalse,T136,ENVNUL,PNUL,sloc(759));
  T135 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_241 = YPmet(FUNCODEREF(fun_241),YPfalse,T135,ENVNUL,PNUL,sloc(759));
  T148 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T147 = (P)YPsig(Ynil,T148,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T146 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_123),T147,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_owner,T146);
  T149 = fun_239;
  accessorF901 = T149;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner),accessorF901);
  (P)YPmet_name_setter(VARREF(Yprop_owner),accessorF901);
  getterF902 = accessorF901;
  T144 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T143 = (P)YPpair(VARREF(YLanyG),T144);
  T142 = (P)YPsig(Ynil,T143,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T141 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_125),T142,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_owner_setter,T141);
  T145 = fun_240;
  accessorF903 = T145;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner_setter),accessorF903);
  (P)YPmet_name_setter(VARREF(Yprop_owner_setter),accessorF903);
  setterF904 = accessorF903;
  T140 = fun_241;
  T139 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_owner),VARREF(Yprop_owner_setter),VARREF(YLanyG),T140);
  propF905 = T139;
  (P)YPmet_env_setter(propF905,getterF902);
  (P)YPmet_env_setter(propF905,setterF904);
  T138 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF905);
  lit_128 = YPPsym((P)"prop-getter");
  lit_129 = YPPlist(1,YPPsym((P)"x"));
  lit_130 = YPPsym((P)"prop-getter-setter");
  lit_131 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_132 = YPPlist(1,YPPsym((P)"x"));
  T152 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_242 = YPmet(FUNCODEREF(fun_242),YPfalse,T152,ENVNUL,PNUL,sloc(759));
  T151 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_243 = YPmet(FUNCODEREF(fun_243),YPfalse,T151,ENVNUL,PNUL,sloc(759));
  T150 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_244 = YPmet(FUNCODEREF(fun_244),YPfalse,T150,ENVNUL,PNUL,sloc(759));
  T163 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T162 = (P)YPsig(Ynil,T163,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T161 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_128),T162,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_getter,T161);
  T164 = fun_242;
  accessorF906 = T164;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter),accessorF906);
  (P)YPmet_name_setter(VARREF(Yprop_getter),accessorF906);
  getterF907 = accessorF906;
  T159 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T158 = (P)YPpair(VARREF(YLanyG),T159);
  T157 = (P)YPsig(Ynil,T158,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T156 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_130),T157,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_getter_setter,T156);
  T160 = fun_243;
  accessorF908 = T160;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter_setter),accessorF908);
  (P)YPmet_name_setter(VARREF(Yprop_getter_setter),accessorF908);
  setterF909 = accessorF908;
  T155 = fun_244;
  T154 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_getter),VARREF(Yprop_getter_setter),VARREF(YLfunG),T155);
  propF910 = T154;
  (P)YPmet_env_setter(propF910,getterF907);
  (P)YPmet_env_setter(propF910,setterF909);
  T153 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF910);
  lit_133 = YPPsym((P)"prop-setter");
  lit_134 = YPPlist(1,YPPsym((P)"x"));
  lit_135 = YPPsym((P)"prop-setter-setter");
  lit_136 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_137 = YPPlist(1,YPPsym((P)"x"));
  T167 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_245 = YPmet(FUNCODEREF(fun_245),YPfalse,T167,ENVNUL,PNUL,sloc(759));
  T166 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_246 = YPmet(FUNCODEREF(fun_246),YPfalse,T166,ENVNUL,PNUL,sloc(759));
  T165 = YPsig(LITREF(lit_137),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_247 = YPmet(FUNCODEREF(fun_247),YPfalse,T165,ENVNUL,PNUL,sloc(759));
  T178 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T177 = (P)YPsig(Ynil,T178,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T176 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_133),T177,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_setter,T176);
  T179 = fun_245;
  accessorF911 = T179;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter),accessorF911);
  (P)YPmet_name_setter(VARREF(Yprop_setter),accessorF911);
  getterF912 = accessorF911;
  T174 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T173 = (P)YPpair(VARREF(YLanyG),T174);
  T172 = (P)YPsig(Ynil,T173,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T171 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_135),T172,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_setter_setter,T171);
  T175 = fun_246;
  accessorF913 = T175;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter_setter),accessorF913);
  (P)YPmet_name_setter(VARREF(Yprop_setter_setter),accessorF913);
  setterF914 = accessorF913;
  T170 = fun_247;
  T169 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_setter),VARREF(Yprop_setter_setter),VARREF(YLfunG),T170);
  propF915 = T169;
  (P)YPmet_env_setter(propF915,getterF912);
  (P)YPmet_env_setter(propF915,setterF914);
  T168 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF915);
  lit_138 = YPPsym((P)"prop-type");
  lit_139 = YPPlist(1,YPPsym((P)"x"));
  lit_140 = YPPsym((P)"prop-type-setter");
  lit_141 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_142 = YPPlist(1,YPPsym((P)"x"));
  T182 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_248 = YPmet(FUNCODEREF(fun_248),YPfalse,T182,ENVNUL,PNUL,sloc(759));
  T181 = YPsig(LITREF(lit_141),YPPlist(2,VARREF(YLtypeG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_249 = YPmet(FUNCODEREF(fun_249),YPfalse,T181,ENVNUL,PNUL,sloc(759));
  T180 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_250 = YPmet(FUNCODEREF(fun_250),YPfalse,T180,ENVNUL,PNUL,sloc(759));
  T193 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T192 = (P)YPsig(Ynil,T193,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T191 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_138),T192,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_type,T191);
  T194 = fun_248;
  accessorF916 = T194;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_type),accessorF916);
  (P)YPmet_name_setter(VARREF(Yprop_type),accessorF916);
  getterF917 = accessorF916;
  T189 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T188 = (P)YPpair(VARREF(YLanyG),T189);
  T187 = (P)YPsig(Ynil,T188,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T186 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_140),T187,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_type_setter,T186);
  T190 = fun_249;
  accessorF918 = T190;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_type_setter),accessorF918);
  (P)YPmet_name_setter(VARREF(Yprop_type_setter),accessorF918);
  setterF919 = accessorF918;
  T185 = fun_250;
  T184 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_type),VARREF(Yprop_type_setter),VARREF(YLtypeG),T185);
  propF920 = T184;
  (P)YPmet_env_setter(propF920,getterF917);
  (P)YPmet_env_setter(propF920,setterF919);
  T183 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF920);
  lit_143 = YPPsym((P)"prop-init");
  lit_144 = YPPlist(1,YPPsym((P)"x"));
  lit_145 = YPPsym((P)"prop-init-setter");
  lit_146 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_147 = YPPlist(1,YPPsym((P)"x"));
  lit_148 = YPPlist(1,YPPsym((P)"x"));
  T198 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_251 = YPmet(FUNCODEREF(fun_251),YPfalse,T198,ENVNUL,PNUL,sloc(759));
  T197 = YPsig(LITREF(lit_146),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_252 = YPmet(FUNCODEREF(fun_252),YPfalse,T197,ENVNUL,PNUL,sloc(759));
  T196 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_253 = YPmet(FUNCODEREF(fun_253),YPfalse,T196,ENVNUL,PNUL,sloc(188));
  T195 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_254 = YPmet(FUNCODEREF(fun_254),YPfalse,T195,ENVNUL,PNUL,sloc(759));
  T209 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T208 = (P)YPsig(Ynil,T209,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T207 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_143),T208,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_init,T207);
  T210 = fun_251;
  accessorF921 = T210;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_init),accessorF921);
  (P)YPmet_name_setter(VARREF(Yprop_init),accessorF921);
  getterF922 = accessorF921;
  T205 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T204 = (P)YPpair(VARREF(YLanyG),T205);
  T203 = (P)YPsig(Ynil,T204,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T202 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_145),T203,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_init_setter,T202);
  T206 = fun_252;
  accessorF923 = T206;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_init_setter),accessorF923);
  (P)YPmet_name_setter(VARREF(Yprop_init_setter),accessorF923);
  setterF924 = accessorF923;
  T201 = fun_254;
  T200 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_init),VARREF(Yprop_init_setter),VARREF(YLfunG),T201);
  propF925 = T200;
  (P)YPmet_env_setter(propF925,getterF922);
  (P)YPmet_env_setter(propF925,setterF924);
  T199 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF925);
  lit_149 = YPPsym((P)"gen-cache-missable?");
  lit_150 = YPPlist(1,YPPsym((P)"x"));
  lit_151 = YPPsym((P)"gen-cache-missable?-setter");
  lit_152 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_153 = YPPlist(1,YPPsym((P)"x"));
  T213 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_255 = YPmet(FUNCODEREF(fun_255),YPfalse,T213,ENVNUL,PNUL,sloc(759));
  T212 = YPsig(LITREF(lit_152),YPPlist(2,VARREF(YLlogG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_256 = YPmet(FUNCODEREF(fun_256),YPfalse,T212,ENVNUL,PNUL,sloc(759));
  T211 = YPsig(LITREF(lit_153),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_257 = YPmet(FUNCODEREF(fun_257),YPfalse,T211,ENVNUL,PNUL,sloc(759));
  T224 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T223 = (P)YPsig(Ynil,T224,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T222 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_149),T223,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_missableQ,T222);
  T225 = fun_255;
  accessorF926 = T225;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ),accessorF926);
  (P)YPmet_name_setter(VARREF(Ygen_cache_missableQ),accessorF926);
  getterF927 = accessorF926;
  T220 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T219 = (P)YPpair(VARREF(YLanyG),T220);
  T218 = (P)YPsig(Ynil,T219,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T217 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_151),T218,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_missableQ_setter,T217);
  T221 = fun_256;
  accessorF928 = T221;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ_setter),accessorF928);
  (P)YPmet_name_setter(VARREF(Ygen_cache_missableQ_setter),accessorF928);
  setterF929 = accessorF928;
  T216 = fun_257;
  T215 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ),VARREF(Ygen_cache_missableQ_setter),VARREF(YLlogG),T216);
  propF930 = T215;
  (P)YPmet_env_setter(propF930,getterF927);
  (P)YPmet_env_setter(propF930,setterF929);
  T214 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF930);
  lit_154 = YPPsym((P)"gen-cache-arg-pos");
  lit_155 = YPPlist(1,YPPsym((P)"x"));
  lit_156 = YPPsym((P)"gen-cache-arg-pos-setter");
  lit_157 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_158 = YPPlist(1,YPPsym((P)"x"));
  T228 = YPsig(LITREF(lit_155),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_258 = YPmet(FUNCODEREF(fun_258),YPfalse,T228,ENVNUL,PNUL,sloc(759));
  T227 = YPsig(LITREF(lit_157),YPPlist(2,VARREF(YLfixnumG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_259 = YPmet(FUNCODEREF(fun_259),YPfalse,T227,ENVNUL,PNUL,sloc(759));
  T226 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_260 = YPmet(FUNCODEREF(fun_260),YPfalse,T226,ENVNUL,PNUL,sloc(759));
  T239 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T238 = (P)YPsig(Ynil,T239,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T237 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_154),T238,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_arg_pos,T237);
  T240 = fun_258;
  accessorF931 = T240;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos),accessorF931);
  (P)YPmet_name_setter(VARREF(Ygen_cache_arg_pos),accessorF931);
  getterF932 = accessorF931;
  T235 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T234 = (P)YPpair(VARREF(YLanyG),T235);
  T233 = (P)YPsig(Ynil,T234,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T232 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_156),T233,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_arg_pos_setter,T232);
  T236 = fun_259;
  accessorF933 = T236;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos_setter),accessorF933);
  (P)YPmet_name_setter(VARREF(Ygen_cache_arg_pos_setter),accessorF933);
  setterF934 = accessorF933;
  T231 = fun_260;
  T230 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos),VARREF(Ygen_cache_arg_pos_setter),VARREF(YLfixnumG),T231);
  propF935 = T230;
  (P)YPmet_env_setter(propF935,getterF932);
  (P)YPmet_env_setter(propF935,setterF934);
  T229 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF935);
  lit_159 = YPPsym((P)"gen-cache-singletons");
  lit_160 = YPPlist(1,YPPsym((P)"x"));
  lit_161 = YPPsym((P)"gen-cache-singletons-setter");
  lit_162 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_163 = YPPlist(1,YPPsym((P)"x"));
  T243 = YPsig(LITREF(lit_160),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_261 = YPmet(FUNCODEREF(fun_261),YPfalse,T243,ENVNUL,PNUL,sloc(759));
  T242 = YPsig(LITREF(lit_162),YPPlist(2,VARREF(YLlstG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_262 = YPmet(FUNCODEREF(fun_262),YPfalse,T242,ENVNUL,PNUL,sloc(759));
  T241 = YPsig(LITREF(lit_163),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_263 = YPmet(FUNCODEREF(fun_263),YPfalse,T241,ENVNUL,PNUL,sloc(759));
  T254 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T253 = (P)YPsig(Ynil,T254,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T252 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_159),T253,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_singletons,T252);
  T255 = fun_261;
  accessorF936 = T255;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons),accessorF936);
  (P)YPmet_name_setter(VARREF(Ygen_cache_singletons),accessorF936);
  getterF937 = accessorF936;
  T250 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T249 = (P)YPpair(VARREF(YLanyG),T250);
  T248 = (P)YPsig(Ynil,T249,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T247 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_161),T248,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_singletons_setter,T247);
  T251 = fun_262;
  accessorF938 = T251;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons_setter),accessorF938);
  (P)YPmet_name_setter(VARREF(Ygen_cache_singletons_setter),accessorF938);
  setterF939 = accessorF938;
  T246 = fun_263;
  T245 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons),VARREF(Ygen_cache_singletons_setter),VARREF(YLlstG),T246);
  propF940 = T245;
  (P)YPmet_env_setter(propF940,getterF937);
  (P)YPmet_env_setter(propF940,setterF939);
  T244 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF940);
  lit_164 = YPPsym((P)"gen-cache-classes");
  lit_165 = YPPlist(1,YPPsym((P)"x"));
  lit_166 = YPPsym((P)"gen-cache-classes-setter");
  lit_167 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_168 = YPPlist(1,YPPsym((P)"x"));
  T258 = YPsig(LITREF(lit_165),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_264 = YPmet(FUNCODEREF(fun_264),YPfalse,T258,ENVNUL,PNUL,sloc(759));
  T257 = YPsig(LITREF(lit_167),YPPlist(2,VARREF(YLlstG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_265 = YPmet(FUNCODEREF(fun_265),YPfalse,T257,ENVNUL,PNUL,sloc(759));
  T256 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_266 = YPmet(FUNCODEREF(fun_266),YPfalse,T256,ENVNUL,PNUL,sloc(759));
  T269 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T268 = (P)YPsig(Ynil,T269,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T267 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_164),T268,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_classes,T267);
  T270 = fun_264;
  accessorF941 = T270;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes),accessorF941);
  (P)YPmet_name_setter(VARREF(Ygen_cache_classes),accessorF941);
  getterF942 = accessorF941;
  T265 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T264 = (P)YPpair(VARREF(YLanyG),T265);
  T263 = (P)YPsig(Ynil,T264,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T262 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_166),T263,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_classes_setter,T262);
  T266 = fun_265;
  accessorF943 = T266;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes_setter),accessorF943);
  (P)YPmet_name_setter(VARREF(Ygen_cache_classes_setter),accessorF943);
  setterF944 = accessorF943;
  T261 = fun_266;
  T260 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes),VARREF(Ygen_cache_classes_setter),VARREF(YLlstG),T261);
  propF945 = T260;
  (P)YPmet_env_setter(propF945,getterF942);
  (P)YPmet_env_setter(propF945,setterF944);
  T259 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF945);
  lit_169 = YPPsym((P)"sig-names");
  lit_170 = YPPlist(1,YPPsym((P)"x"));
  lit_171 = YPPsym((P)"sig-names-setter");
  lit_172 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_173 = YPPlist(1,YPPsym((P)"x"));
  T273 = YPsig(LITREF(lit_170),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_267 = YPmet(FUNCODEREF(fun_267),YPfalse,T273,ENVNUL,PNUL,sloc(759));
  T272 = YPsig(LITREF(lit_172),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_268 = YPmet(FUNCODEREF(fun_268),YPfalse,T272,ENVNUL,PNUL,sloc(759));
  T271 = YPsig(LITREF(lit_173),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_269 = YPmet(FUNCODEREF(fun_269),YPfalse,T271,ENVNUL,PNUL,sloc(759));
  T284 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T283 = (P)YPsig(Ynil,T284,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T282 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_169),T283,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names,T282);
  T285 = fun_267;
  accessorF946 = T285;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_names),accessorF946);
  (P)YPmet_name_setter(VARREF(Ysig_names),accessorF946);
  getterF947 = accessorF946;
  T280 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T279 = (P)YPpair(VARREF(YLanyG),T280);
  T278 = (P)YPsig(Ynil,T279,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T277 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_171),T278,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names_setter,T277);
  T281 = fun_268;
  accessorF948 = T281;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_names_setter),accessorF948);
  (P)YPmet_name_setter(VARREF(Ysig_names_setter),accessorF948);
  setterF949 = accessorF948;
  T276 = fun_269;
  T275 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_names),VARREF(Ysig_names_setter),VARREF(YLlstG),T276);
  propF950 = T275;
  (P)YPmet_env_setter(propF950,getterF947);
  (P)YPmet_env_setter(propF950,setterF949);
  T274 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF950);
  lit_174 = YPPsym((P)"sig-specs");
  lit_175 = YPPlist(1,YPPsym((P)"x"));
  lit_176 = YPPsym((P)"sig-specs-setter");
  lit_177 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_178 = YPPlist(1,YPPsym((P)"x"));
  T288 = YPsig(LITREF(lit_175),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_270 = YPmet(FUNCODEREF(fun_270),YPfalse,T288,ENVNUL,PNUL,sloc(759));
  T287 = YPsig(LITREF(lit_177),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_271 = YPmet(FUNCODEREF(fun_271),YPfalse,T287,ENVNUL,PNUL,sloc(759));
  T286 = YPsig(LITREF(lit_178),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_272 = YPmet(FUNCODEREF(fun_272),YPfalse,T286,ENVNUL,PNUL,sloc(759));
  T299 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T298 = (P)YPsig(Ynil,T299,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T297 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_174),T298,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs,T297);
  T300 = fun_270;
  accessorF951 = T300;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs),accessorF951);
  (P)YPmet_name_setter(VARREF(Ysig_specs),accessorF951);
  getterF952 = accessorF951;
  T295 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T294 = (P)YPpair(VARREF(YLanyG),T295);
  T293 = (P)YPsig(Ynil,T294,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T292 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_176),T293,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs_setter,T292);
  T296 = fun_271;
  accessorF953 = T296;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs_setter),accessorF953);
  (P)YPmet_name_setter(VARREF(Ysig_specs_setter),accessorF953);
  setterF954 = accessorF953;
  T291 = fun_272;
  T290 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_specs),VARREF(Ysig_specs_setter),VARREF(YLlstG),T291);
  propF955 = T290;
  (P)YPmet_env_setter(propF955,getterF952);
  (P)YPmet_env_setter(propF955,setterF954);
  T289 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF955);
  lit_179 = YPPsym((P)"sig-nary?");
  lit_180 = YPPlist(1,YPPsym((P)"x"));
  lit_181 = YPPsym((P)"sig-nary?-setter");
  lit_182 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_183 = YPPlist(1,YPPsym((P)"x"));
  T303 = YPsig(LITREF(lit_180),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_273 = YPmet(FUNCODEREF(fun_273),YPfalse,T303,ENVNUL,PNUL,sloc(759));
  T302 = YPsig(LITREF(lit_182),YPPlist(2,VARREF(YLlogG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_274 = YPmet(FUNCODEREF(fun_274),YPfalse,T302,ENVNUL,PNUL,sloc(759));
  T301 = YPsig(LITREF(lit_183),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_275 = YPmet(FUNCODEREF(fun_275),YPfalse,T301,ENVNUL,PNUL,sloc(759));
  T314 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T313 = (P)YPsig(Ynil,T314,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T312 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_179),T313,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ,T312);
  T315 = fun_273;
  accessorF956 = T315;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ),accessorF956);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ),accessorF956);
  getterF957 = accessorF956;
  T310 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T309 = (P)YPpair(VARREF(YLanyG),T310);
  T308 = (P)YPsig(Ynil,T309,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T307 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_181),T308,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ_setter,T307);
  T311 = fun_274;
  accessorF958 = T311;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ_setter),accessorF958);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ_setter),accessorF958);
  setterF959 = accessorF958;
  T306 = fun_275;
  T305 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_naryQ),VARREF(Ysig_naryQ_setter),VARREF(YLlogG),T306);
  propF960 = T305;
  (P)YPmet_env_setter(propF960,getterF957);
  (P)YPmet_env_setter(propF960,setterF959);
  T304 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF960);
  lit_184 = YPPsym((P)"sig-arity");
  lit_185 = YPPlist(1,YPPsym((P)"x"));
  lit_186 = YPPsym((P)"sig-arity-setter");
  lit_187 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_188 = YPPlist(1,YPPsym((P)"x"));
  T318 = YPsig(LITREF(lit_185),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_276 = YPmet(FUNCODEREF(fun_276),YPfalse,T318,ENVNUL,PNUL,sloc(759));
  T317 = YPsig(LITREF(lit_187),YPPlist(2,VARREF(YLfixnumG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_277 = YPmet(FUNCODEREF(fun_277),YPfalse,T317,ENVNUL,PNUL,sloc(759));
  T316 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_278 = YPmet(FUNCODEREF(fun_278),YPfalse,T316,ENVNUL,PNUL,sloc(759));
  T329 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T328 = (P)YPsig(Ynil,T329,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T327 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_184),T328,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity,T327);
  T330 = fun_276;
  accessorF961 = T330;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity),accessorF961);
  (P)YPmet_name_setter(VARREF(Ysig_arity),accessorF961);
  getterF962 = accessorF961;
  T325 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T324 = (P)YPpair(VARREF(YLanyG),T325);
  T323 = (P)YPsig(Ynil,T324,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T322 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_186),T323,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity_setter,T322);
  T326 = fun_277;
  accessorF963 = T326;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity_setter),accessorF963);
  (P)YPmet_name_setter(VARREF(Ysig_arity_setter),accessorF963);
  setterF964 = accessorF963;
  T321 = fun_278;
  T320 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_arity),VARREF(Ysig_arity_setter),VARREF(YLfixnumG),T321);
  propF965 = T320;
  (P)YPmet_env_setter(propF965,getterF962);
  (P)YPmet_env_setter(propF965,setterF964);
  T319 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF965);
  lit_189 = YPPsym((P)"sig-val");
  lit_190 = YPPlist(1,YPPsym((P)"x"));
  lit_191 = YPPsym((P)"sig-val-setter");
  lit_192 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_193 = YPPlist(1,YPPsym((P)"x"));
  T333 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_279 = YPmet(FUNCODEREF(fun_279),YPfalse,T333,ENVNUL,PNUL,sloc(759));
  T332 = YPsig(LITREF(lit_192),YPPlist(2,VARREF(YLanyG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_280 = YPmet(FUNCODEREF(fun_280),YPfalse,T332,ENVNUL,PNUL,sloc(759));
  T331 = YPsig(LITREF(lit_193),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_281 = YPmet(FUNCODEREF(fun_281),YPfalse,T331,ENVNUL,PNUL,sloc(759));
  T344 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T343 = (P)YPsig(Ynil,T344,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T342 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_189),T343,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val,T342);
  T345 = fun_279;
  accessorF966 = T345;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_val),accessorF966);
  (P)YPmet_name_setter(VARREF(Ysig_val),accessorF966);
  getterF967 = accessorF966;
  T340 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T339 = (P)YPpair(VARREF(YLanyG),T340);
  T338 = (P)YPsig(Ynil,T339,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T337 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_191),T338,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val_setter,T337);
  T341 = fun_280;
  accessorF968 = T341;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_val_setter),accessorF968);
  (P)YPmet_name_setter(VARREF(Ysig_val_setter),accessorF968);
  setterF969 = accessorF968;
  T336 = fun_281;
  T335 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_val),VARREF(Ysig_val_setter),VARREF(YLanyG),T336);
  propF970 = T335;
  (P)YPmet_env_setter(propF970,getterF967);
  (P)YPmet_env_setter(propF970,setterF969);
  T334 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF970);
  lit_194 = YPPsym((P)"sig-unification-vars");
  lit_195 = YPPlist(1,YPPsym((P)"x"));
  lit_196 = YPPsym((P)"sig-unification-vars-setter");
  lit_197 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_198 = YPPlist(1,YPPsym((P)"x"));
  T348 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_282 = YPmet(FUNCODEREF(fun_282),YPfalse,T348,ENVNUL,PNUL,sloc(759));
  T347 = YPsig(LITREF(lit_197),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_283 = YPmet(FUNCODEREF(fun_283),YPfalse,T347,ENVNUL,PNUL,sloc(759));
  T346 = YPsig(LITREF(lit_198),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_284 = YPmet(FUNCODEREF(fun_284),YPfalse,T346,ENVNUL,PNUL,sloc(759));
  T359 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T358 = (P)YPsig(Ynil,T359,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T357 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_194),T358,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars,T357);
  T360 = fun_282;
  accessorF971 = T360;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars),accessorF971);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars),accessorF971);
  getterF972 = accessorF971;
  T355 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T354 = (P)YPpair(VARREF(YLanyG),T355);
  T353 = (P)YPsig(Ynil,T354,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T352 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_196),T353,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars_setter,T352);
  T356 = fun_283;
  accessorF973 = T356;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars_setter),accessorF973);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars_setter),accessorF973);
  setterF974 = accessorF973;
  T351 = fun_284;
  T350 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_unification_vars),VARREF(Ysig_unification_vars_setter),VARREF(YLlstG),T351);
  propF975 = T350;
  (P)YPmet_env_setter(propF975,getterF972);
  (P)YPmet_env_setter(propF975,setterF974);
  T349 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF975);
  lit_199 = YPPsym((P)"fun-code");
  lit_200 = YPPlist(1,YPPsym((P)"x"));
  lit_201 = YPPsym((P)"fun-code-setter");
  lit_202 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_203 = YPPlist(1,YPPsym((P)"x"));
  T363 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_285 = YPmet(FUNCODEREF(fun_285),YPfalse,T363,ENVNUL,PNUL,sloc(759));
  T362 = YPsig(LITREF(lit_202),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_286 = YPmet(FUNCODEREF(fun_286),YPfalse,T362,ENVNUL,PNUL,sloc(759));
  T361 = YPsig(LITREF(lit_203),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_287 = YPmet(FUNCODEREF(fun_287),YPfalse,T361,ENVNUL,PNUL,sloc(759));
  T374 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T373 = (P)YPsig(Ynil,T374,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T372 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_199),T373,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_code,T372);
  T375 = fun_285;
  accessorF976 = T375;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_code),accessorF976);
  (P)YPmet_name_setter(VARREF(Yfun_code),accessorF976);
  getterF977 = accessorF976;
  T370 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T369 = (P)YPpair(VARREF(YLanyG),T370);
  T368 = (P)YPsig(Ynil,T369,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T367 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_201),T368,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_code_setter,T367);
  T371 = fun_286;
  accessorF978 = T371;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_code_setter),accessorF978);
  (P)YPmet_name_setter(VARREF(Yfun_code_setter),accessorF978);
  setterF979 = accessorF978;
  T366 = fun_287;
  T365 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_code),VARREF(Yfun_code_setter),VARREF(YLanyG),T366);
  propF980 = T365;
  (P)YPmet_env_setter(propF980,getterF977);
  (P)YPmet_env_setter(propF980,setterF979);
  T364 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF980);
  lit_204 = YPPsym((P)"fun-name");
  lit_205 = YPPlist(1,YPPsym((P)"x"));
  lit_206 = YPPsym((P)"fun-name-setter");
  lit_207 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_208 = YPPlist(1,YPPsym((P)"x"));
  T378 = YPsig(LITREF(lit_205),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_288 = YPmet(FUNCODEREF(fun_288),YPfalse,T378,ENVNUL,PNUL,sloc(759));
  T377 = YPsig(LITREF(lit_207),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_289 = YPmet(FUNCODEREF(fun_289),YPfalse,T377,ENVNUL,PNUL,sloc(759));
  T376 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_290 = YPmet(FUNCODEREF(fun_290),YPfalse,T376,ENVNUL,PNUL,sloc(759));
  T389 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T388 = (P)YPsig(Ynil,T389,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T387 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_204),T388,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name,T387);
  T390 = fun_288;
  accessorF981 = T390;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_name),accessorF981);
  (P)YPmet_name_setter(VARREF(Yfun_name),accessorF981);
  getterF982 = accessorF981;
  T385 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T384 = (P)YPpair(VARREF(YLanyG),T385);
  T383 = (P)YPsig(Ynil,T384,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T382 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_206),T383,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name_setter,T382);
  T386 = fun_289;
  accessorF983 = T386;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_name_setter),accessorF983);
  (P)YPmet_name_setter(VARREF(Yfun_name_setter),accessorF983);
  setterF984 = accessorF983;
  T381 = fun_290;
  T380 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_name),VARREF(Yfun_name_setter),VARREF(YLanyG),T381);
  propF985 = T380;
  (P)YPmet_env_setter(propF985,getterF982);
  (P)YPmet_env_setter(propF985,setterF984);
  T379 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF985);
  lit_209 = YPPsym((P)"fun-sig");
  lit_210 = YPPlist(1,YPPsym((P)"x"));
  lit_211 = YPPsym((P)"fun-sig-setter");
  lit_212 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_213 = YPPlist(1,YPPsym((P)"x"));
  T393 = YPsig(LITREF(lit_210),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_291 = YPmet(FUNCODEREF(fun_291),YPfalse,T393,ENVNUL,PNUL,sloc(759));
  T392 = YPsig(LITREF(lit_212),YPPlist(2,VARREF(YLsigG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_292 = YPmet(FUNCODEREF(fun_292),YPfalse,T392,ENVNUL,PNUL,sloc(759));
  T391 = YPsig(LITREF(lit_213),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_293 = YPmet(FUNCODEREF(fun_293),YPfalse,T391,ENVNUL,PNUL,sloc(759));
  T404 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T403 = (P)YPsig(Ynil,T404,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T402 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_209),T403,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig,T402);
  T405 = fun_291;
  accessorF986 = T405;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig),accessorF986);
  (P)YPmet_name_setter(VARREF(Yfun_sig),accessorF986);
  getterF987 = accessorF986;
  T400 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T399 = (P)YPpair(VARREF(YLanyG),T400);
  T398 = (P)YPsig(Ynil,T399,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T397 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_211),T398,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig_setter,T397);
  T401 = fun_292;
  accessorF988 = T401;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig_setter),accessorF988);
  (P)YPmet_name_setter(VARREF(Yfun_sig_setter),accessorF988);
  setterF989 = accessorF988;
  T396 = fun_293;
  T395 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_sig),VARREF(Yfun_sig_setter),VARREF(YLsigG),T396);
  propF990 = T395;
  (P)YPmet_env_setter(propF990,getterF987);
  (P)YPmet_env_setter(propF990,setterF989);
  T394 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF990);
  lit_214 = YPPsym((P)"fun-env");
  lit_215 = YPPlist(1,YPPsym((P)"x"));
  lit_216 = YPPsym((P)"fun-env-setter");
  lit_217 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_218 = YPPlist(1,YPPsym((P)"x"));
  T408 = YPsig(LITREF(lit_215),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_294 = YPmet(FUNCODEREF(fun_294),YPfalse,T408,ENVNUL,PNUL,sloc(759));
  T407 = YPsig(LITREF(lit_217),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_295 = YPmet(FUNCODEREF(fun_295),YPfalse,T407,ENVNUL,PNUL,sloc(759));
  T406 = YPsig(LITREF(lit_218),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_296 = YPmet(FUNCODEREF(fun_296),YPfalse,T406,ENVNUL,PNUL,sloc(759));
  T419 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T418 = (P)YPsig(Ynil,T419,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T417 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_214),T418,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_env,T417);
  T420 = fun_294;
  accessorF991 = T420;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_env),accessorF991);
  (P)YPmet_name_setter(VARREF(Yfun_env),accessorF991);
  getterF992 = accessorF991;
  T415 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T414 = (P)YPpair(VARREF(YLanyG),T415);
  T413 = (P)YPsig(Ynil,T414,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T412 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_216),T413,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_env_setter,T412);
  T416 = fun_295;
  accessorF993 = T416;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_env_setter),accessorF993);
  (P)YPmet_name_setter(VARREF(Yfun_env_setter),accessorF993);
  setterF994 = accessorF993;
  T411 = fun_296;
  T410 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_env),VARREF(Yfun_env_setter),VARREF(YLanyG),T411);
  propF995 = T410;
  (P)YPmet_env_setter(propF995,getterF992);
  (P)YPmet_env_setter(propF995,setterF994);
  T409 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF995);
  lit_219 = YPPsym((P)"fun-refs");
  lit_220 = YPPlist(1,YPPsym((P)"x"));
  lit_221 = YPPsym((P)"fun-refs-setter");
  lit_222 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_223 = YPPlist(1,YPPsym((P)"x"));
  T423 = YPsig(LITREF(lit_220),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_297 = YPmet(FUNCODEREF(fun_297),YPfalse,T423,ENVNUL,PNUL,sloc(759));
  T422 = YPsig(LITREF(lit_222),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_298 = YPmet(FUNCODEREF(fun_298),YPfalse,T422,ENVNUL,PNUL,sloc(759));
  T421 = YPsig(LITREF(lit_223),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_299 = YPmet(FUNCODEREF(fun_299),YPfalse,T421,ENVNUL,PNUL,sloc(759));
  T434 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T433 = (P)YPsig(Ynil,T434,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T432 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_219),T433,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_refs,T432);
  T435 = fun_297;
  accessorF996 = T435;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_refs),accessorF996);
  (P)YPmet_name_setter(VARREF(Yfun_refs),accessorF996);
  getterF997 = accessorF996;
  T430 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T429 = (P)YPpair(VARREF(YLanyG),T430);
  T428 = (P)YPsig(Ynil,T429,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T427 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_221),T428,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_refs_setter,T427);
  T431 = fun_298;
  accessorF998 = T431;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_refs_setter),accessorF998);
  (P)YPmet_name_setter(VARREF(Yfun_refs_setter),accessorF998);
  setterF999 = accessorF998;
  T426 = fun_299;
  T425 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_refs),VARREF(Yfun_refs_setter),VARREF(YLanyG),T426);
  propF1000 = T425;
  (P)YPmet_env_setter(propF1000,getterF997);
  (P)YPmet_env_setter(propF1000,setterF999);
  T424 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF1000);
  lit_224 = YPPsym((P)"fun-src");
  lit_225 = YPPlist(1,YPPsym((P)"x"));
  lit_226 = YPPsym((P)"fun-src-setter");
  lit_227 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_228 = YPPlist(1,YPPsym((P)"x"));
  T438 = YPsig(LITREF(lit_225),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_300 = YPmet(FUNCODEREF(fun_300),YPfalse,T438,ENVNUL,PNUL,sloc(759));
  T437 = YPsig(LITREF(lit_227),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_301 = YPmet(FUNCODEREF(fun_301),YPfalse,T437,ENVNUL,PNUL,sloc(759));
  T436 = YPsig(LITREF(lit_228),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_302 = YPmet(FUNCODEREF(fun_302),YPfalse,T436,ENVNUL,PNUL,sloc(759));
  T449 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T448 = (P)YPsig(Ynil,T449,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T447 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_224),T448,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src,T447);
  T450 = fun_300;
  accessorF1001 = T450;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_src),accessorF1001);
  (P)YPmet_name_setter(VARREF(Yfun_src),accessorF1001);
  getterF1002 = accessorF1001;
  T445 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T444 = (P)YPpair(VARREF(YLanyG),T445);
  T443 = (P)YPsig(Ynil,T444,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T442 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_226),T443,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src_setter,T442);
  T446 = fun_301;
  accessorF1003 = T446;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_src_setter),accessorF1003);
  (P)YPmet_name_setter(VARREF(Yfun_src_setter),accessorF1003);
  setterF1004 = accessorF1003;
  T441 = fun_302;
  T440 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_src),VARREF(Yfun_src_setter),VARREF(YLanyG),T441);
  propF1005 = T440;
  (P)YPmet_env_setter(propF1005,getterF1002);
  (P)YPmet_env_setter(propF1005,setterF1004);
  T439 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF1005);
  lit_229 = YPPsym((P)"fun-mets");
  lit_230 = YPPlist(1,YPPsym((P)"x"));
  lit_231 = YPPsym((P)"fun-mets-setter");
  lit_232 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_233 = YPPlist(1,YPPsym((P)"x"));
  T453 = YPsig(LITREF(lit_230),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_303 = YPmet(FUNCODEREF(fun_303),YPfalse,T453,ENVNUL,PNUL,sloc(759));
  T452 = YPsig(LITREF(lit_232),YPPlist(2,VARREF(YLlstG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_304 = YPmet(FUNCODEREF(fun_304),YPfalse,T452,ENVNUL,PNUL,sloc(759));
  T451 = YPsig(LITREF(lit_233),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_305 = YPmet(FUNCODEREF(fun_305),YPfalse,T451,ENVNUL,PNUL,sloc(759));
  T464 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T463 = (P)YPsig(Ynil,T464,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T462 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_229),T463,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets,T462);
  T465 = fun_303;
  accessorF1006 = T465;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets),accessorF1006);
  (P)YPmet_name_setter(VARREF(Yfun_mets),accessorF1006);
  getterF1007 = accessorF1006;
  T460 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T459 = (P)YPpair(VARREF(YLanyG),T460);
  T458 = (P)YPsig(Ynil,T459,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T457 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_231),T458,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets_setter,T457);
  T461 = fun_304;
  accessorF1008 = T461;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets_setter),accessorF1008);
  (P)YPmet_name_setter(VARREF(Yfun_mets_setter),accessorF1008);
  setterF1009 = accessorF1008;
  T456 = fun_305;
  T455 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_mets),VARREF(Yfun_mets_setter),VARREF(YLlstG),T456);
  propF1010 = T455;
  (P)YPmet_env_setter(propF1010,getterF1007);
  (P)YPmet_env_setter(propF1010,setterF1009);
  T454 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF1010);
  lit_234 = YPPsym((P)"fun-cache");
  lit_235 = YPPlist(1,YPPsym((P)"x"));
  lit_236 = YPPsym((P)"fun-cache-setter");
  lit_237 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_238 = YPPlist(1,YPPsym((P)"x"));
  T468 = YPsig(LITREF(lit_235),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_306 = YPmet(FUNCODEREF(fun_306),YPfalse,T468,ENVNUL,PNUL,sloc(759));
  T467 = YPsig(LITREF(lit_237),YPPlist(2,VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_307 = YPmet(FUNCODEREF(fun_307),YPfalse,T467,ENVNUL,PNUL,sloc(759));
  T466 = YPsig(LITREF(lit_238),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_308 = YPmet(FUNCODEREF(fun_308),YPfalse,T466,ENVNUL,PNUL,sloc(759));
  T479 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T478 = (P)YPsig(Ynil,T479,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T477 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_234),T478,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_cache,T477);
  T480 = fun_306;
  accessorF1011 = T480;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache),accessorF1011);
  (P)YPmet_name_setter(VARREF(Yfun_cache),accessorF1011);
  getterF1012 = accessorF1011;
  T475 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T474 = (P)YPpair(VARREF(YLanyG),T475);
  T473 = (P)YPsig(Ynil,T474,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T472 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_236),T473,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_cache_setter,T472);
  T476 = fun_307;
  accessorF1013 = T476;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache_setter),accessorF1013);
  (P)YPmet_name_setter(VARREF(Yfun_cache_setter),accessorF1013);
  setterF1014 = accessorF1013;
  T471 = fun_308;
  T470 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_cache),VARREF(Yfun_cache_setter),VARREF(YLanyG),T471);
  propF1015 = T470;
  (P)YPmet_env_setter(propF1015,getterF1012);
  (P)YPmet_env_setter(propF1015,setterF1014);
  T469 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF1015);
  lit_239 = YPPsym((P)"gen-refs");
  lit_240 = YPPlist(1,YPPsym((P)"x"));
  lit_241 = YPPsym((P)"gen-refs-setter");
  lit_242 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_243 = YPPlist(1,YPPsym((P)"x"));
  T483 = YPsig(LITREF(lit_240),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_309 = YPmet(FUNCODEREF(fun_309),YPfalse,T483,ENVNUL,PNUL,sloc(759));
  T482 = YPsig(LITREF(lit_242),YPPlist(2,VARREF(YLtupG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_310 = YPmet(FUNCODEREF(fun_310),YPfalse,T482,ENVNUL,PNUL,sloc(759));
  T481 = YPsig(LITREF(lit_243),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_311 = YPmet(FUNCODEREF(fun_311),YPfalse,T481,ENVNUL,PNUL,sloc(759));
  T494 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T493 = (P)YPsig(Ynil,T494,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T492 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_239),T493,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_refs,T492);
  T495 = fun_309;
  accessorF1016 = T495;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_refs),accessorF1016);
  (P)YPmet_name_setter(VARREF(Ygen_refs),accessorF1016);
  getterF1017 = accessorF1016;
  T490 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T489 = (P)YPpair(VARREF(YLanyG),T490);
  T488 = (P)YPsig(Ynil,T489,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T487 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_241),T488,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_refs_setter,T487);
  T491 = fun_310;
  accessorF1018 = T491;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_refs_setter),accessorF1018);
  (P)YPmet_name_setter(VARREF(Ygen_refs_setter),accessorF1018);
  setterF1019 = accessorF1018;
  T486 = fun_311;
  T485 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_refs),VARREF(Ygen_refs_setter),VARREF(YLtupG),T486);
  propF1020 = T485;
  (P)YPmet_env_setter(propF1020,getterF1017);
  (P)YPmet_env_setter(propF1020,setterF1019);
  T484 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF1020);
  lit_244 = YPPsym((P)"gen-src");
  lit_245 = YPPlist(1,YPPsym((P)"x"));
  lit_246 = YPPsym((P)"gen-src-setter");
  lit_247 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_248 = YPPlist(1,YPPsym((P)"x"));
  T498 = YPsig(LITREF(lit_245),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_312 = YPmet(FUNCODEREF(fun_312),YPfalse,T498,ENVNUL,PNUL,sloc(759));
  T497 = YPsig(LITREF(lit_247),YPPlist(2,VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_313 = YPmet(FUNCODEREF(fun_313),YPfalse,T497,ENVNUL,PNUL,sloc(759));
  T496 = YPsig(LITREF(lit_248),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_314 = YPmet(FUNCODEREF(fun_314),YPfalse,T496,ENVNUL,PNUL,sloc(759));
  T509 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T508 = (P)YPsig(Ynil,T509,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T507 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_244),T508,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src,T507);
  T510 = fun_312;
  accessorF1021 = T510;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_src),accessorF1021);
  (P)YPmet_name_setter(VARREF(Ygen_src),accessorF1021);
  getterF1022 = accessorF1021;
  T505 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T504 = (P)YPpair(VARREF(YLanyG),T505);
  T503 = (P)YPsig(Ynil,T504,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T502 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_246),T503,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src_setter,T502);
  T506 = fun_313;
  accessorF1023 = T506;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_src_setter),accessorF1023);
  (P)YPmet_name_setter(VARREF(Ygen_src_setter),accessorF1023);
  setterF1024 = accessorF1023;
  T501 = fun_314;
  T500 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_src),VARREF(Ygen_src_setter),VARREF(YLanyG),T501);
  propF1025 = T500;
  (P)YPmet_env_setter(propF1025,getterF1022);
  (P)YPmet_env_setter(propF1025,setterF1024);
  T499 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF1025);
  lit_249 = YPPsym((P)"opts-location");
  lit_250 = YPPlist(1,YPPsym((P)"x"));
  lit_251 = YPPsym((P)"opts-location-setter");
  lit_252 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_253 = YPPlist(1,YPPsym((P)"x"));
  T513 = YPsig(LITREF(lit_250),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_315 = YPmet(FUNCODEREF(fun_315),YPfalse,T513,ENVNUL,PNUL,sloc(759));
  T512 = YPsig(LITREF(lit_252),YPPlist(2,VARREF(YLlocG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_316 = YPmet(FUNCODEREF(fun_316),YPfalse,T512,ENVNUL,PNUL,sloc(759));
  T511 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_317 = YPmet(FUNCODEREF(fun_317),YPfalse,T511,ENVNUL,PNUL,sloc(759));
  T524 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T523 = (P)YPsig(Ynil,T524,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T522 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_249),T523,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_location,T522);
  T525 = fun_315;
  accessorF1026 = T525;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_location),accessorF1026);
  (P)YPmet_name_setter(VARREF(Yopts_location),accessorF1026);
  getterF1027 = accessorF1026;
  T520 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T519 = (P)YPpair(VARREF(YLanyG),T520);
  T518 = (P)YPsig(Ynil,T519,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T517 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_251),T518,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_location_setter,T517);
  T521 = fun_316;
  accessorF1028 = T521;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_location_setter),accessorF1028);
  (P)YPmet_name_setter(VARREF(Yopts_location_setter),accessorF1028);
  setterF1029 = accessorF1028;
  T516 = fun_317;
  T515 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_location),VARREF(Yopts_location_setter),VARREF(YLlocG),T516);
  propF1030 = T515;
  (P)YPmet_env_setter(propF1030,getterF1027);
  (P)YPmet_env_setter(propF1030,setterF1029);
  T514 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF1030);
  lit_254 = YPPsym((P)"opts-count");
  lit_255 = YPPlist(1,YPPsym((P)"x"));
  lit_256 = YPPsym((P)"opts-count-setter");
  lit_257 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_258 = YPPlist(1,YPPsym((P)"x"));
  T528 = YPsig(LITREF(lit_255),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_318 = YPmet(FUNCODEREF(fun_318),YPfalse,T528,ENVNUL,PNUL,sloc(759));
  T527 = YPsig(LITREF(lit_257),YPPlist(2,VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_319 = YPmet(FUNCODEREF(fun_319),YPfalse,T527,ENVNUL,PNUL,sloc(759));
  T526 = YPsig(LITREF(lit_258),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_320 = YPmet(FUNCODEREF(fun_320),YPfalse,T526,ENVNUL,PNUL,sloc(759));
  T539 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T538 = (P)YPsig(Ynil,T539,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T537 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_254),T538,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_count,T537);
  T540 = fun_318;
  accessorF1031 = T540;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_count),accessorF1031);
  (P)YPmet_name_setter(VARREF(Yopts_count),accessorF1031);
  getterF1032 = accessorF1031;
  T535 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T534 = (P)YPpair(VARREF(YLanyG),T535);
  T533 = (P)YPsig(Ynil,T534,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T532 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_256),T533,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_count_setter,T532);
  T536 = fun_319;
  accessorF1033 = T536;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_count_setter),accessorF1033);
  (P)YPmet_name_setter(VARREF(Yopts_count_setter),accessorF1033);
  setterF1034 = accessorF1033;
  T531 = fun_320;
  T530 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_count),VARREF(Yopts_count_setter),VARREF(YLfixnumG),T531);
  propF1035 = T530;
  (P)YPmet_env_setter(propF1035,getterF1032);
  (P)YPmet_env_setter(propF1035,setterF1034);
  T529 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF1035);
  lit_259 = YPPsym((P)"opts-tup-storage");
  lit_260 = YPPlist(1,YPPsym((P)"x"));
  lit_261 = YPPsym((P)"opts-tup-storage-setter");
  lit_262 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_263 = YPPlist(1,YPPsym((P)"x"));
  T543 = YPsig(LITREF(lit_260),YPPlist(1,VARREF(YLopts_tupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_321 = YPmet(FUNCODEREF(fun_321),YPfalse,T543,ENVNUL,PNUL,sloc(759));
  T542 = YPsig(LITREF(lit_262),YPPlist(2,VARREF(YLtupG),VARREF(YLopts_tupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_322 = YPmet(FUNCODEREF(fun_322),YPfalse,T542,ENVNUL,PNUL,sloc(759));
  T541 = YPsig(LITREF(lit_263),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_323 = YPmet(FUNCODEREF(fun_323),YPfalse,T541,ENVNUL,PNUL,sloc(759));
  T554 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T553 = (P)YPsig(Ynil,T554,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T552 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_259),T553,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_tup_storage,T552);
  T555 = fun_321;
  accessorF1036 = T555;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_tup_storage),accessorF1036);
  (P)YPmet_name_setter(VARREF(Yopts_tup_storage),accessorF1036);
  getterF1037 = accessorF1036;
  T550 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T549 = (P)YPpair(VARREF(YLanyG),T550);
  T548 = (P)YPsig(Ynil,T549,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T547 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_261),T548,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_tup_storage_setter,T547);
  T551 = fun_322;
  accessorF1038 = T551;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_tup_storage_setter),accessorF1038);
  (P)YPmet_name_setter(VARREF(Yopts_tup_storage_setter),accessorF1038);
  setterF1039 = accessorF1038;
  T546 = fun_323;
  T545 = (P)YPPprop(VARREF(YLopts_tupG),VARREF(Yopts_tup_storage),VARREF(Yopts_tup_storage_setter),VARREF(YLtupG),T546);
  propF1040 = T545;
  (P)YPmet_env_setter(propF1040,getterF1037);
  (P)YPmet_env_setter(propF1040,setterF1039);
  T544 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLopts_tupG),propF1040);
  lit_264 = YPPsym((P)"%collect-direct-props");
  lit_265 = YPPlist(1,YPPsym((P)"class"));
  T556 = YPsig(LITREF(lit_265),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPcollect_direct_props = YPmet(FUNCODEREF(YPcollect_direct_props),LITREF(lit_264),T556,ENVNUL,PNUL,sloc(767));
  T557 = YPcollect_direct_props;
  VARSET(YPcollect_direct_props,T557);
  lit_266 = YPPsym((P)"%finalize-props!");
  lit_267 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"class"));
  T558 = YPsig(LITREF(lit_267),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPfinalize_propsX = YPmet(FUNCODEREF(YPfinalize_propsX),LITREF(lit_266),T558,ENVNUL,PNUL,sloc(771));
  T559 = YPfinalize_propsX;
  VARSET(YPfinalize_propsX,T559);
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
  T561 = XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_291),VARREF(YLclassG));
  T560 = T561;
  return T560;
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
  YOOEE = YPmet(FUNCODEREF(YOOEE),LITREF(lit_304),T0,ENVNUL,PNUL,sloc(813));
  T1 = YOOEE;
  VARSET(YOOEE,T1);
  lit_306 = YPPsym((P)"not");
  lit_307 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_307),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  Ynot = YPmet(FUNCODEREF(Ynot),LITREF(lit_306),T2,ENVNUL,PNUL,sloc(815));
  T3 = Ynot;
  VARSET(Ynot,T3);
  lit_308 = YPPsym((P)"@@empty?");
  lit_309 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_309),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOOemptyQ = YPmet(FUNCODEREF(YOOemptyQ),LITREF(lit_308),T4,ENVNUL,PNUL,sloc(821));
  T5 = YOOemptyQ;
  VARSET(YOOemptyQ,T5);
  lit_310 = YPPsym((P)"@rev!");
  lit_311 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_311),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrevX = YPmet(FUNCODEREF(YOrevX),LITREF(lit_310),T6,ENVNUL,PNUL,sloc(823));
  T7 = YOrevX;
  VARSET(YOrevX,T7);
  lit_312 = YPPsym((P)"@all?");
  lit_313 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T8 = YPsig(LITREF(lit_313),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOallQ = YPmet(FUNCODEREF(YOallQ),LITREF(lit_312),T8,ENVNUL,PNUL,sloc(833));
  T9 = YOallQ;
  VARSET(YOallQ,T9);
  lit_314 = YPPsym((P)"@all2?");
  lit_315 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T10 = YPsig(LITREF(lit_315),YPPlist(3,VARREF(YLfunG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOall2Q = YPmet(FUNCODEREF(YOall2Q),LITREF(lit_314),T10,ENVNUL,PNUL,sloc(837));
  T11 = YOall2Q;
  VARSET(YOall2Q,T11);
  lit_316 = YPPsym((P)"@elt");
  lit_317 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T12 = YPsig(LITREF(lit_317),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOelt = YPmet(FUNCODEREF(YOelt),LITREF(lit_316),T12,ENVNUL,PNUL,sloc(847));
  T13 = YOelt;
  VARSET(YOelt,T13);
  lit_318 = YPPsym((P)"@fill");
  lit_319 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"f"));
  T14 = YPsig(LITREF(lit_319),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfill = YPmet(FUNCODEREF(YOfill),LITREF(lit_318),T14,ENVNUL,PNUL,sloc(853));
  T15 = YOfill;
  VARSET(YOfill,T15);
  lit_320 = YPPsym((P)"@any?");
  lit_321 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T16 = YPsig(LITREF(lit_321),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOanyQ = YPmet(FUNCODEREF(YOanyQ),LITREF(lit_320),T16,ENVNUL,PNUL,sloc(857));
  T17 = YOanyQ;
  VARSET(YOanyQ,T17);
  lit_322 = YPPsym((P)"@map");
  lit_323 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T18 = YPsig(LITREF(lit_323),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmap = YPmet(FUNCODEREF(YOmap),LITREF(lit_322),T18,ENVNUL,PNUL,sloc(868));
  T19 = YOmap;
  VARSET(YOmap,T19);
  lit_324 = YPPsym((P)"@pick");
  lit_325 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_325),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOpick = YPmet(FUNCODEREF(YOpick),LITREF(lit_324),T20,ENVNUL,PNUL,sloc(874));
  T21 = YOpick;
  VARSET(YOpick,T21);
  lit_326 = YPPsym((P)"@do");
  lit_327 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T22 = YPsig(LITREF(lit_327),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo = YPmet(FUNCODEREF(YOdo),LITREF(lit_326),T22,ENVNUL,PNUL,sloc(880));
  T23 = YOdo;
  VARSET(YOdo,T23);
  lit_328 = YPPsym((P)"@alter");
  lit_329 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T24 = YPsig(LITREF(lit_329),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOalter = YPmet(FUNCODEREF(YOalter),LITREF(lit_328),T24,ENVNUL,PNUL,sloc(886));
  T25 = YOalter;
  VARSET(YOalter,T25);
  lit_330 = YPPsym((P)"@fab");
  lit_331 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T26 = YPsig(LITREF(lit_331),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfab = YPmet(FUNCODEREF(YOfab),LITREF(lit_330),T26,ENVNUL,PNUL,sloc(893));
  T27 = YOfab;
  VARSET(YOfab,T27);
  lit_332 = YPPsym((P)"@fold");
  lit_333 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"c"));
  T28 = YPsig(LITREF(lit_333),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  YOfold = YPmet(FUNCODEREF(YOfold),LITREF(lit_332),T28,ENVNUL,PNUL,sloc(897));
  T29 = YOfold;
  VARSET(YOfold,T29);
  lit_334 = YPPsym((P)"@rev");
  lit_335 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPsig(LITREF(lit_335),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrev = YPmet(FUNCODEREF(YOrev),LITREF(lit_334),T30,ENVNUL,PNUL,sloc(903));
  T31 = YOrev;
  VARSET(YOrev,T31);
  lit_336 = YPPsym((P)"@cat2");
  lit_337 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T32 = YPsig(LITREF(lit_337),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOcat2 = YPmet(FUNCODEREF(YOcat2),LITREF(lit_336),T32,ENVNUL,PNUL,sloc(909));
  T33 = YOcat2;
  VARSET(YOcat2,T33);
  lit_338 = YPPsym((P)"@find");
  lit_339 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T34 = YPsig(LITREF(lit_339),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfind = YPmet(FUNCODEREF(YOfind),LITREF(lit_338),T34,ENVNUL,PNUL,sloc(912));
  T35 = YOfind;
  VARSET(YOfind,T35);
  lit_340 = YPPsym((P)"@mem?");
  lit_341 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  lit_342 = YPPlist(1,YPPsym((P)"y"));
  T37 = YPsig(LITREF(lit_342),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_361 = YPmet(FUNCODEREF(fun_361),YPfalse,T37,ENVNUL,PNUL,sloc(921));
  T36 = YPsig(LITREF(lit_341),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmemQ = YPmet(FUNCODEREF(YOmemQ),LITREF(lit_340),T36,ENVNUL,PNUL,sloc(920));
  T38 = YOmemQ;
  VARSET(YOmemQ,T38);
  lit_343 = YPPsym((P)"@del-dups");
  lit_344 = YPPlist(1,YPPsym((P)"x"));
  lit_345 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"e"));
  T40 = YPsig(LITREF(lit_345),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_363 = YPmet(FUNCODEREF(fun_363),YPfalse,T40,ENVNUL,PNUL,sloc(926));
  T39 = YPsig(LITREF(lit_344),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOdel_dups = YPmet(FUNCODEREF(YOdel_dups),LITREF(lit_343),T39,ENVNUL,PNUL,sloc(925));
  T41 = YOdel_dups;
  VARSET(YOdel_dups,T41);
  lit_346 = YPPsym((P)"@lst-helper");
  lit_347 = YPPlist(3,YPPsym((P)"objects"),YPPsym((P)"i"),YPPsym((P)"l"));
  T42 = YPsig(LITREF(lit_347),YPPlist(3,VARREF(YLoptsG),VARREF(YLfixnumG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOlst_helper = YPmet(FUNCODEREF(YOlst_helper),LITREF(lit_346),T42,ENVNUL,PNUL,sloc(928));
  T43 = YOlst_helper;
  VARSET(YOlst_helper,T43);
  lit_348 = YPPsym((P)"@opts-as-lst");
  lit_349 = YPPlist(1,YPPsym((P)"x"));
  T44 = YPsig(LITREF(lit_349),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOopts_as_lst = YPmet(FUNCODEREF(YOopts_as_lst),LITREF(lit_348),T44,ENVNUL,PNUL,sloc(933));
  T45 = YOopts_as_lst;
  VARSET(YOopts_as_lst,T45);
  lit_350 = YPPsym((P)"@lst");
  lit_351 = YPPlist(1,YPPsym((P)"objects"));
  T46 = YPsig(LITREF(lit_351),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOlst = YPmet(FUNCODEREF(YOlst),LITREF(lit_350),T46,ENVNUL,PNUL,sloc(936));
  T47 = YOlst;
  VARSET(YOlst,T47);
  lit_352 = YPPsym((P)"@tany?");
  lit_353 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T48 = YPsig(LITREF(lit_353),YPPlist(2,VARREF(YLfunG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtanyQ = YPmet(FUNCODEREF(YOtanyQ),LITREF(lit_352),T48,ENVNUL,PNUL,sloc(947));
  T49 = YOtanyQ;
  VARSET(YOtanyQ,T49);
  lit_354 = YPPsym((P)"@tall2?");
  lit_355 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"c1"),YPPsym((P)"c2"));
  T50 = YPsig(LITREF(lit_355),YPPlist(3,VARREF(YLfunG),VARREF(YLtupG),VARREF(YLtupG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOtall2Q = YPmet(FUNCODEREF(YOtall2Q),LITREF(lit_354),T50,ENVNUL,PNUL,sloc(951));
  T51 = YOtall2Q;
  VARSET(YOtall2Q,T51);
  lit_356 = YPPsym((P)"@tup");
  lit_357 = YPPlist(1,YPPsym((P)"args"));
  T52 = YPsig(LITREF(lit_357),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOtup = YPmet(FUNCODEREF(YOtup),LITREF(lit_356),T52,ENVNUL,PNUL,sloc(968));
  T53 = YOtup;
  VARSET(YOtup,T53);
  lit_358 = YPPsym((P)"@fun-names");
  lit_359 = YPPlist(1,YPPsym((P)"x"));
  T54 = YPsig(LITREF(lit_359),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_names = YPmet(FUNCODEREF(YOfun_names),LITREF(lit_358),T54,ENVNUL,PNUL,sloc(970));
  T55 = YOfun_names;
  VARSET(YOfun_names,T55);
  lit_360 = YPPsym((P)"@fun-specs");
  lit_361 = YPPlist(1,YPPsym((P)"x"));
  T56 = YPsig(LITREF(lit_361),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_specs = YPmet(FUNCODEREF(YOfun_specs),LITREF(lit_360),T56,ENVNUL,PNUL,sloc(972));
  T57 = YOfun_specs;
  VARSET(YOfun_specs,T57);
  lit_362 = YPPsym((P)"@fun-nary?");
  lit_363 = YPPlist(1,YPPsym((P)"x"));
  T58 = YPsig(LITREF(lit_363),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOfun_naryQ = YPmet(FUNCODEREF(YOfun_naryQ),LITREF(lit_362),T58,ENVNUL,PNUL,sloc(974));
  T59 = YOfun_naryQ;
  VARSET(YOfun_naryQ,T59);
  lit_364 = YPPsym((P)"@fun-arity");
  lit_365 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPsig(LITREF(lit_365),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  YOfun_arity = YPmet(FUNCODEREF(YOfun_arity),LITREF(lit_364),T60,ENVNUL,PNUL,sloc(976));
  T61 = YOfun_arity;
  VARSET(YOfun_arity,T61);
  lit_366 = YPPsym((P)"@fun-val");
  lit_367 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPsig(LITREF(lit_367),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T63 = YOfun_val = YPmet(FUNCODEREF(YOfun_val),LITREF(lit_366),T64,ENVNUL,PNUL,sloc(978));
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
  YOfun_unification_vars = YPmet(FUNCODEREF(YOfun_unification_vars),LITREF(lit_368),T0,ENVNUL,PNUL,sloc(980));
  T1 = YOfun_unification_vars;
  VARSET(YOfun_unification_vars,T1);
  lit_370 = YPPsym((P)"@fun-mets");
  lit_371 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_371),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_mets = YPmet(FUNCODEREF(YOfun_mets),LITREF(lit_370),T2,ENVNUL,PNUL,sloc(982));
  T3 = YOfun_mets;
  VARSET(YOfun_mets,T3);
  lit_372 = YPPsym((P)"@fun-mets-setter");
  lit_373 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_373),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfun_mets_setter = YPmet(FUNCODEREF(YOfun_mets_setter),LITREF(lit_372),T4,ENVNUL,PNUL,sloc(984));
  T5 = YOfun_mets_setter;
  VARSET(YOfun_mets_setter,T5);
  VARSET(YLenvG,VARREF(YLanyG));
  VARSET(YLspecsG,VARREF(YLlstG));
  VARSET(YLbodyG,VARREF(YLanyG));
  lit_374 = YPPsym((P)"fun-spec");
  lit_375 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T6 = YPsig(LITREF(lit_375),YPPlist(2,VARREF(YLmetG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_spec = YPmet(FUNCODEREF(Yfun_spec),LITREF(lit_374),T6,ENVNUL,PNUL,sloc(994));
  T7 = Yfun_spec;
  VARSET(Yfun_spec,T7);
  VARSET(YLmetsG,VARREF(YLlstG));
  lit_376 = YPPsym((P)"fun-same-met?");
  lit_377 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T8 = YPsig(LITREF(lit_377),YPPlist(2,VARREF(YLmetG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yfun_same_metQ = YPmet(FUNCODEREF(Yfun_same_metQ),LITREF(lit_376),T8,ENVNUL,PNUL,sloc(999));
  T9 = Yfun_same_metQ;
  VARSET(Yfun_same_metQ,T9);
  lit_378 = YPPsym((P)"fun-congruent?");
  lit_379 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T10 = YPsig(LITREF(lit_379),YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yfun_congruentQ = YPmet(FUNCODEREF(Yfun_congruentQ),LITREF(lit_378),T10,ENVNUL,PNUL,sloc(1002));
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
  fun_387 = YPmet(FUNCODEREF(fun_387),YPfalse,T15,ENVNUL,PNUL,sloc(1024));
  T14 = YPsig(LITREF(lit_384),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_388 = YPmet(FUNCODEREF(fun_388),YPfalse,T14,ENVNUL,PNUL,sloc(1026));
  T13 = YPsig(LITREF(lit_382),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_389 = YPmet(FUNCODEREF(fun_389),YPfalse,T13,ENVNUL,PNUL,sloc(1020));
  T12 = YPsig(LITREF(lit_381),YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  Ygen_add_met = YPmet(FUNCODEREF(Ygen_add_met),LITREF(lit_380),T12,ENVNUL,PNUL,sloc(1013));
  T17 = Ygen_add_met;
  VARSET(Ygen_add_met,T17);
  lit_386 = YPPsym((P)"@isa?");
  lit_387 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T18 = YPsig(LITREF(lit_387),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOisaQ = YPmet(FUNCODEREF(YOisaQ),LITREF(lit_386),T18,ENVNUL,PNUL,sloc(1082));
  T19 = YOisaQ;
  VARSET(YOisaQ,T19);
  lit_388 = YPPsym((P)"@class<");
  lit_389 = YPPlist(3,YPPsym((P)"c1"),YPPsym((P)"c2"),YPPsym((P)"wrt"));
  lit_390 = YPsb((P)"can't order specializers - arg/reference object %= is ");
  lit_391 = YPsb((P)"neither %= nor %=");
  T20 = YPsig(LITREF(lit_389),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOclassL = YPmet(FUNCODEREF(YOclassL),LITREF(lit_388),T20,ENVNUL,PNUL,sloc(1087));
  T21 = YOclassL;
  VARSET(YOclassL,T21);
  VARSET(Ytup,VARREF(YOtup));
  lit_392 = YPPsym((P)"t*");
  lit_393 = YPPlist(1,YPPsym((P)"args"));
  T22 = YPsig(LITREF(lit_393),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YtT = YPmet(FUNCODEREF(YtT),LITREF(lit_392),T22,ENVNUL,PNUL,sloc(1101));
  T23 = YtT;
  VARSET(YtT,T23);
  lit_394 = YPPsym((P)"@type-equal?");
  lit_395 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T24 = YPsig(LITREF(lit_395),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtype_equalQ = YPmet(FUNCODEREF(YOtype_equalQ),LITREF(lit_394),T24,ENVNUL,PNUL,sloc(1105));
  T25 = YOtype_equalQ;
  VARSET(YOtype_equalQ,T25);
  lit_396 = YPPsym((P)"@subtype?");
  lit_397 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T26 = YPsig(LITREF(lit_397),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOsubtypeQ = YPmet(FUNCODEREF(YOsubtypeQ),LITREF(lit_396),T26,ENVNUL,PNUL,sloc(1110));
  T27 = YOsubtypeQ;
  VARSET(YOsubtypeQ,T27);
  lit_398 = YPPsym((P)"@may-isa?");
  lit_399 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T29 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T28 = YPsig(LITREF(lit_399),YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),T29,Ynil);
  YOmay_isaQ = YPmet(FUNCODEREF(YOmay_isaQ),LITREF(lit_398),T28,ENVNUL,PNUL,sloc(1115));
  T30 = YOmay_isaQ;
  VARSET(YOmay_isaQ,T30);
  lit_400 = YPPsym((P)"@order-specs-class");
  lit_401 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_402 = YPPsym((P)"=");
  lit_403 = YPPsym((P)"<");
  lit_404 = YPPsym((P)">");
  T31 = YPsig(LITREF(lit_401),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOorder_specs_class = YPmet(FUNCODEREF(YOorder_specs_class),LITREF(lit_400),T31,ENVNUL,PNUL,sloc(1120));
  T32 = YOorder_specs_class;
  VARSET(YOorder_specs_class,T32);
  lit_405 = YPPsym((P)"@order-specs");
  lit_406 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T33 = YPsig(LITREF(lit_406),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOorder_specs = YPmet(FUNCODEREF(YOorder_specs),LITREF(lit_405),T33,ENVNUL,PNUL,sloc(1127));
  T34 = YOorder_specs;
  VARSET(YOorder_specs,T34);
  lit_407 = YPPsym((P)"order-mets");
  lit_408 = YPPlist(3,YPPsym((P)"m1"),YPPsym((P)"m2"),YPPsym((P)"args"));
  lit_409 = YPPsym((P)"<>");
  T35 = YPsig(LITREF(lit_408),YPPlist(3,VARREF(YLmetG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLsymG),Ynil);
  Yorder_mets = YPmet(FUNCODEREF(Yorder_mets),LITREF(lit_407),T35,ENVNUL,PNUL,sloc(1132));
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
  fun_make_ambiguous_403 = YPmet(FUNCODEREF(fun_make_ambiguous_403),LITREF(lit_412),T41,ENVNUL,PNUL,sloc(1157));
  T40 = YPsig(LITREF(lit_415),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_precedes_allQ_404 = YPmet(FUNCODEREF(fun_precedes_allQ_404),LITREF(lit_414),T40,ENVNUL,PNUL,sloc(1166));
  T39 = YPsig(LITREF(lit_417),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_check_subsequent_ambiguities_405 = YPmet(FUNCODEREF(fun_check_subsequent_ambiguities_405),LITREF(lit_416),T39,ENVNUL,PNUL,sloc(1173));
  T38 = YPsig(LITREF(lit_419),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_406 = YPmet(FUNCODEREF(fun_insert_406),LITREF(lit_418),T38,ENVNUL,PNUL,sloc(1178));
  T37 = YPsig(LITREF(lit_411),YPPlist(3,VARREF(YLlstG),VARREF(YLoptsG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  Yord_app_mets_1 = YPmet(FUNCODEREF(Yord_app_mets_1),LITREF(lit_410),T37,ENVNUL,PNUL,sloc(1149));
  T42 = Yord_app_mets_1;
  VARSET(Yord_app_mets_1,T42);
  lit_420 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T43 = YPsig(LITREF(lit_420),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_408 = YPmet(FUNCODEREF(fun_408),YPfalse,T43,ENVNUL,PNUL,sloc(1191));
  T44 = fun_408;
  VARSET(Ymet_app_unify,T44);
  lit_421 = YPPsym((P)"met-app?");
  lit_422 = YPPlist(2,YPPsym((P)"met"),YPPsym((P)"args"));
  T45 = YPsig(LITREF(lit_422),YPPlist(2,VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Ymet_appQ = YPmet(FUNCODEREF(Ymet_appQ),LITREF(lit_421),T45,ENVNUL,PNUL,sloc(1193));
  T46 = Ymet_appQ;
  VARSET(Ymet_appQ,T46);
  lit_423 = YPPsym((P)"ord-app-mets*");
  lit_424 = YPPlist(2,YPPsym((P)"gf"),YPPsym((P)"args"));
  T47 = YPsig(LITREF(lit_424),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  Yord_app_metsT = YPmet(FUNCODEREF(Yord_app_metsT),LITREF(lit_423),T47,ENVNUL,PNUL,sloc(1204));
  T48 = Yord_app_metsT;
  VARSET(Yord_app_metsT,T48);
  lit_425 = YPPsym((P)"ord-app-mets");
  lit_426 = YPPlist(2,YPPsym((P)"gf"),YPPsym((P)"args"));
  T50 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T49 = YPsig(LITREF(lit_426),YPPlist(1,VARREF(YLgenG)),YPtrue,YPint((P)1),T50,Ynil);
  Yord_app_mets = YPmet(FUNCODEREF(Yord_app_mets),LITREF(lit_425),T49,ENVNUL,PNUL,sloc(1215));
  T51 = Yord_app_mets;
  VARSET(Yord_app_mets,T51);
  lit_427 = YPPsym((P)"@gen-cache-arg-pos");
  lit_428 = YPPlist(1,YPPsym((P)"x"));
  T52 = YPsig(LITREF(lit_428),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_arg_pos = YPmet(FUNCODEREF(YOgen_cache_arg_pos),LITREF(lit_427),T52,ENVNUL,PNUL,sloc(1226));
  T53 = YOgen_cache_arg_pos;
  VARSET(YOgen_cache_arg_pos,T53);
  lit_429 = YPPsym((P)"@gen-cache-arg-pos-setter");
  lit_430 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T54 = YPsig(LITREF(lit_430),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_arg_pos_setter = YPmet(FUNCODEREF(YOgen_cache_arg_pos_setter),LITREF(lit_429),T54,ENVNUL,PNUL,sloc(1227));
  T55 = YOgen_cache_arg_pos_setter;
  VARSET(YOgen_cache_arg_pos_setter,T55);
  lit_431 = YPPsym((P)"@gen-cache-singletons");
  lit_432 = YPPlist(1,YPPsym((P)"x"));
  T56 = YPsig(LITREF(lit_432),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_singletons = YPmet(FUNCODEREF(YOgen_cache_singletons),LITREF(lit_431),T56,ENVNUL,PNUL,sloc(1228));
  T57 = YOgen_cache_singletons;
  VARSET(YOgen_cache_singletons,T57);
  lit_433 = YPPsym((P)"@gen-cache-singletons-setter");
  lit_434 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T58 = YPsig(LITREF(lit_434),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_singletons_setter = YPmet(FUNCODEREF(YOgen_cache_singletons_setter),LITREF(lit_433),T58,ENVNUL,PNUL,sloc(1229));
  T59 = YOgen_cache_singletons_setter;
  VARSET(YOgen_cache_singletons_setter,T59);
  lit_435 = YPPsym((P)"@gen-cache-classes");
  lit_436 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPsig(LITREF(lit_436),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_classes = YPmet(FUNCODEREF(YOgen_cache_classes),LITREF(lit_435),T60,ENVNUL,PNUL,sloc(1230));
  T61 = YOgen_cache_classes;
  VARSET(YOgen_cache_classes,T61);
  lit_437 = YPPsym((P)"@gen-cache-classes-setter");
  lit_438 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T62 = YPsig(LITREF(lit_438),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_classes_setter = YPmet(FUNCODEREF(YOgen_cache_classes_setter),LITREF(lit_437),T62,ENVNUL,PNUL,sloc(1231));
  T63 = YOgen_cache_classes_setter;
  VARSET(YOgen_cache_classes_setter,T63);
  lit_439 = YPPsym((P)"method-accessor-offset");
  lit_440 = YPPlist(3,YPPsym((P)"gen"),YPPsym((P)"met"),YPPsym((P)"args"));
  T64 = YPsig(LITREF(lit_440),YPPlist(3,VARREF(YLgenG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Ymethod_accessor_offset = YPmet(FUNCODEREF(Ymethod_accessor_offset),LITREF(lit_439),T64,ENVNUL,PNUL,sloc(1235));
  T65 = Ymethod_accessor_offset;
  VARSET(Ymethod_accessor_offset,T65);
  lit_441 = YPPsym((P)"@singleton-spec?");
  lit_442 = YPPlist(1,YPPsym((P)"x"));
  T66 = YPsig(LITREF(lit_442),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOsingleton_specQ = YPmet(FUNCODEREF(YOsingleton_specQ),LITREF(lit_441),T66,ENVNUL,PNUL,sloc(1244));
  T67 = YOsingleton_specQ;
  VARSET(YOsingleton_specQ,T67);
  lit_443 = YPPsym((P)"@subclass-spec?");
  lit_444 = YPPlist(1,YPPsym((P)"x"));
  T68 = YPsig(LITREF(lit_444),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOsubclass_specQ = YPmet(FUNCODEREF(YOsubclass_specQ),LITREF(lit_443),T68,ENVNUL,PNUL,sloc(1247));
  T69 = YOsubclass_specQ;
  VARSET(YOsubclass_specQ,T69);
  lit_445 = YPPsym((P)"@union-spec?");
  lit_446 = YPPlist(1,YPPsym((P)"x"));
  T70 = YPsig(LITREF(lit_446),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOunion_specQ = YPmet(FUNCODEREF(YOunion_specQ),LITREF(lit_445),T70,ENVNUL,PNUL,sloc(1250));
  T71 = YOunion_specQ;
  VARSET(YOunion_specQ,T71);
  lit_447 = YPPsym((P)"@precise-spec?");
  lit_448 = YPPlist(1,YPPsym((P)"x"));
  T72 = YPsig(LITREF(lit_448),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOprecise_specQ = YPmet(FUNCODEREF(YOprecise_specQ),LITREF(lit_447),T72,ENVNUL,PNUL,sloc(1253));
  T73 = YOprecise_specQ;
  VARSET(YOprecise_specQ,T73);
  lit_449 = YPPsym((P)"@mets-unspecialized-at?");
  lit_450 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_451 = YPPlist(1,YPPsym((P)"met"));
  T75 = YPsig(LITREF(lit_451),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_423 = YPmet(FUNCODEREF(fun_423),YPfalse,T75,ENVNUL,PNUL,sloc(1258));
  T74 = YPsig(LITREF(lit_450),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmets_unspecialized_atQ = YPmet(FUNCODEREF(YOmets_unspecialized_atQ),LITREF(lit_449),T74,ENVNUL,PNUL,sloc(1257));
  T76 = YOmets_unspecialized_atQ;
  VARSET(YOmets_unspecialized_atQ,T76);
  lit_452 = YPPsym((P)"@prune-mets-by-type-at");
  lit_453 = YPPlist(3,YPPsym((P)"mets"),YPPsym((P)"type"),YPPsym((P)"pos"));
  lit_454 = YPPlist(1,YPPsym((P)"met"));
  T78 = YPsig(LITREF(lit_454),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_425 = YPmet(FUNCODEREF(fun_425),YPfalse,T78,ENVNUL,PNUL,sloc(1262));
  T77 = YPsig(LITREF(lit_453),YPPlist(3,VARREF(YLlstG),VARREF(YLtypeG),VARREF(YLfixnumG)),YPfalse,YPint((P)3),VARREF(YLmetsG),Ynil);
  YOprune_mets_by_type_at = YPmet(FUNCODEREF(YOprune_mets_by_type_at),LITREF(lit_452),T77,ENVNUL,PNUL,sloc(1260));
  T79 = YOprune_mets_by_type_at;
  VARSET(YOprune_mets_by_type_at,T79);
  lit_455 = YPPsym((P)"@mets-specs-at");
  lit_456 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_457 = YPPlist(1,YPPsym((P)"met"));
  T81 = YPsig(LITREF(lit_457),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_427 = YPmet(FUNCODEREF(fun_427),YPfalse,T81,ENVNUL,PNUL,sloc(1265));
  T80 = YPsig(LITREF(lit_456),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_specs_at = YPmet(FUNCODEREF(YOmets_specs_at),LITREF(lit_455),T80,ENVNUL,PNUL,sloc(1264));
  T82 = YOmets_specs_at;
  VARSET(YOmets_specs_at,T82);
  lit_458 = YPPsym((P)"@mets-singletons-at");
  lit_459 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_460 = YPPlist(1,YPPsym((P)"spec"));
  T84 = YPsig(LITREF(lit_460),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_429 = YPmet(FUNCODEREF(fun_429),YPfalse,T84,ENVNUL,PNUL,sloc(1270));
  T83 = YPsig(LITREF(lit_459),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_singletons_at = YPmet(FUNCODEREF(YOmets_singletons_at),LITREF(lit_458),T83,ENVNUL,PNUL,sloc(1269));
  T85 = YOmets_singletons_at;
  VARSET(YOmets_singletons_at,T85);
  lit_461 = YPPsym((P)"@mets-subclasses-at");
  lit_462 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_463 = YPPlist(1,YPPsym((P)"spec"));
  T87 = YPsig(LITREF(lit_463),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_431 = YPmet(FUNCODEREF(fun_431),YPfalse,T87,ENVNUL,PNUL,sloc(1273));
  T86 = YPsig(LITREF(lit_462),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_subclasses_at = YPmet(FUNCODEREF(YOmets_subclasses_at),LITREF(lit_461),T86,ENVNUL,PNUL,sloc(1272));
  T88 = YOmets_subclasses_at;
  VARSET(YOmets_subclasses_at,T88);
  VARSET(YDnul_assocs,VARREF(YPtnul));
  lit_464 = YPPsym((P)"@cache-add");
  lit_465 = YPPlist(3,YPPsym((P)"t"),YPPsym((P)"k"),YPPsym((P)"v"));
  T89 = YPsig(LITREF(lit_465),YPPlist(3,VARREF(YLtupG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOcache_add = YPmet(FUNCODEREF(YOcache_add),LITREF(lit_464),T89,ENVNUL,PNUL,sloc(1277));
  T90 = YOcache_add;
  VARSET(YOcache_add,T90);
  lit_466 = YPPsym((P)"gen-lookup-miss-1-using");
  lit_467 = YPPlist(10,YPPsym((P)"key"),YPPsym((P)"instance"),YPPsym((P)"all-assocs"),YPPsym((P)"all-assocs-setter"),YPPsym((P)"gen"),YPPsym((P)"cache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T91 = YPsig(LITREF(lit_467),YPPlist(10,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)10),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss_1_using = YPmet(FUNCODEREF(Ygen_lookup_miss_1_using),LITREF(lit_466),T91,ENVNUL,PNUL,sloc(1290));
  T92 = Ygen_lookup_miss_1_using;
  VARSET(Ygen_lookup_miss_1_using,T92);
  lit_468 = YPPsym((P)"@specd-args");
  lit_469 = YPPlist(3,YPPsym((P)"args"),YPPsym((P)"i"),YPPsym((P)"arg"));
  T93 = YPsig(LITREF(lit_469),YPPlist(3,VARREF(YLoptsG),VARREF(YLfixnumG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLoptsG),Ynil);
  YOspecd_args = YPmet(FUNCODEREF(YOspecd_args),LITREF(lit_468),T93,ENVNUL,PNUL,sloc(1315));
  T94 = YOspecd_args;
  VARSET(YOspecd_args,T94);
  lit_470 = YPPsym((P)"requires-singleton-prec");
  lit_471 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  T95 = YPsig(LITREF(lit_471),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yrequires_singleton_prec = YPmet(FUNCODEREF(Yrequires_singleton_prec),LITREF(lit_470),T95,ENVNUL,PNUL,sloc(1325));
  T96 = Yrequires_singleton_prec;
  VARSET(Yrequires_singleton_prec,T96);
  lit_472 = YPPsym((P)"ensure-singleton-cache");
  lit_473 = YPPlist(6,YPPsym((P)"gen"),YPPsym((P)"cache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T97 = YPsig(LITREF(lit_473),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  Yensure_singleton_cache = YPmet(FUNCODEREF(Yensure_singleton_cache),LITREF(lit_472),T97,ENVNUL,PNUL,sloc(1340));
  T98 = Yensure_singleton_cache;
  VARSET(Yensure_singleton_cache,T98);
  lit_474 = YPPsym((P)"gen-lookup-miss-1");
  lit_475 = YPPlist(6,YPPsym((P)"gen"),YPPsym((P)"ocache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T99 = YPsig(LITREF(lit_475),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss_1 = YPmet(FUNCODEREF(Ygen_lookup_miss_1),LITREF(lit_474),T99,ENVNUL,PNUL,sloc(1363));
  T100 = Ygen_lookup_miss_1;
  VARSET(Ygen_lookup_miss_1,T100);
  lit_476 = YPPsym((P)"gen-lookup-miss");
  lit_477 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T101 = YPsig(LITREF(lit_477),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss = YPmet(FUNCODEREF(Ygen_lookup_miss),LITREF(lit_476),T101,ENVNUL,PNUL,sloc(1389));
  T102 = Ygen_lookup_miss;
  VARSET(Ygen_lookup_miss,T102);
  T103 = (P)YPpair(VARREF(Ynil),VARREF(Ynil));
  VARSET(YDmissed_dispatch,T103);
  lit_478 = YPPsym((P)"choose-methods");
  lit_479 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T104 = YPsig(LITREF(lit_479),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  Ychoose_methods = YPmet(FUNCODEREF(Ychoose_methods),LITREF(lit_478),T104,ENVNUL,PNUL,sloc(1459));
  T105 = Ychoose_methods;
  VARSET(Ychoose_methods,T105);
  lit_480 = YPPsym((P)"%dispatch");
  lit_481 = YPPlist(1,YPPsym((P)"args"));
  T108 = YPsig(LITREF(lit_481),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  T107 = YPdispatch = YPmet(FUNCODEREF(YPdispatch),LITREF(lit_480),T108,ENVNUL,PNUL,sloc(1473));
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
  YPpatch_early_generic = YPmet(FUNCODEREF(YPpatch_early_generic),LITREF(lit_482),T0,ENVNUL,PNUL,sloc(1487));
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
  Yfun_names = YPmet(FUNCODEREF(Yfun_names),LITREF(lit_484),T0,ENVNUL,PNUL,sloc(1507));
  T1 = Yfun_names;
  VARSET(Yfun_names,T1);
  lit_486 = YPPsym((P)"fun-names-setter");
  lit_487 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_487),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_names_setter = YPmet(FUNCODEREF(Yfun_names_setter),LITREF(lit_486),T2,ENVNUL,PNUL,sloc(1507));
  T3 = Yfun_names_setter;
  VARSET(Yfun_names_setter,T3);
  lit_488 = YPPsym((P)"fun-specs");
  lit_489 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_489),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_specs = YPmet(FUNCODEREF(Yfun_specs),LITREF(lit_488),T4,ENVNUL,PNUL,sloc(1508));
  T5 = Yfun_specs;
  VARSET(Yfun_specs,T5);
  lit_490 = YPPsym((P)"fun-specs-setter");
  lit_491 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_491),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_specs_setter = YPmet(FUNCODEREF(Yfun_specs_setter),LITREF(lit_490),T6,ENVNUL,PNUL,sloc(1508));
  T7 = Yfun_specs_setter;
  VARSET(Yfun_specs_setter,T7);
  lit_492 = YPPsym((P)"fun-nary?");
  lit_493 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPsig(LITREF(lit_493),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_naryQ = YPmet(FUNCODEREF(Yfun_naryQ),LITREF(lit_492),T8,ENVNUL,PNUL,sloc(1509));
  T9 = Yfun_naryQ;
  VARSET(Yfun_naryQ,T9);
  lit_494 = YPPsym((P)"fun-nary?-setter");
  lit_495 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T10 = YPsig(LITREF(lit_495),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_naryQ_setter = YPmet(FUNCODEREF(Yfun_naryQ_setter),LITREF(lit_494),T10,ENVNUL,PNUL,sloc(1509));
  T11 = Yfun_naryQ_setter;
  VARSET(Yfun_naryQ_setter,T11);
  lit_496 = YPPsym((P)"fun-arity");
  lit_497 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPsig(LITREF(lit_497),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_arity = YPmet(FUNCODEREF(Yfun_arity),LITREF(lit_496),T12,ENVNUL,PNUL,sloc(1510));
  T13 = Yfun_arity;
  VARSET(Yfun_arity,T13);
  lit_498 = YPPsym((P)"fun-arity-setter");
  lit_499 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T14 = YPsig(LITREF(lit_499),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_arity_setter = YPmet(FUNCODEREF(Yfun_arity_setter),LITREF(lit_498),T14,ENVNUL,PNUL,sloc(1510));
  T15 = Yfun_arity_setter;
  VARSET(Yfun_arity_setter,T15);
  lit_500 = YPPsym((P)"fun-val");
  lit_501 = YPPlist(1,YPPsym((P)"x"));
  T16 = YPsig(LITREF(lit_501),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_val = YPmet(FUNCODEREF(Yfun_val),LITREF(lit_500),T16,ENVNUL,PNUL,sloc(1511));
  T17 = Yfun_val;
  VARSET(Yfun_val,T17);
  lit_502 = YPPsym((P)"fun-val-setter");
  lit_503 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T18 = YPsig(LITREF(lit_503),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_val_setter = YPmet(FUNCODEREF(Yfun_val_setter),LITREF(lit_502),T18,ENVNUL,PNUL,sloc(1511));
  T19 = Yfun_val_setter;
  VARSET(Yfun_val_setter,T19);
  lit_504 = YPPsym((P)"fun-unification-vars");
  lit_505 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_505),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_unification_vars = YPmet(FUNCODEREF(Yfun_unification_vars),LITREF(lit_504),T20,ENVNUL,PNUL,sloc(1512));
  T21 = Yfun_unification_vars;
  VARSET(Yfun_unification_vars,T21);
  lit_506 = YPPsym((P)"fun-unification-vars-setter");
  lit_507 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T22 = YPsig(LITREF(lit_507),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_unification_vars_setter = YPmet(FUNCODEREF(Yfun_unification_vars_setter),LITREF(lit_506),T22,ENVNUL,PNUL,sloc(1512));
  T23 = Yfun_unification_vars_setter;
  VARSET(Yfun_unification_vars_setter,T23);
  VARSET(YLparentsG,VARREF(YLlstG));
  VARSET(YLpropsG,VARREF(YLlstG));
  lit_508 = YPPsym((P)"object-class");
  lit_509 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPsig(LITREF(lit_509),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_class = YPmet(FUNCODEREF(Yobject_class),LITREF(lit_508),T24,ENVNUL,PNUL,sloc(1521));
  T25 = Yobject_class;
  VARSET(Yobject_class,T25);
  VARSET(Yclass_of,VARREF(Yobject_class));
  lit_510 = YPPsym((P)"@class-ancestors");
  lit_511 = YPPlist(1,YPPsym((P)"x"));
  T26 = YPsig(LITREF(lit_511),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOclass_ancestors = YPmet(FUNCODEREF(YOclass_ancestors),LITREF(lit_510),T26,ENVNUL,PNUL,sloc(1523));
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
  fun_tailQ_463 = YPmet(FUNCODEREF(fun_tailQ_463),LITREF(lit_516),T32,ENVNUL,PNUL,sloc(1565));
  T31 = YPsig(LITREF(lit_515),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_candidate_464 = YPmet(FUNCODEREF(fun_candidate_464),LITREF(lit_514),T31,ENVNUL,PNUL,sloc(1564));
  T30 = YPsig(LITREF(lit_519),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_candidate_at_head_465 = YPmet(FUNCODEREF(fun_candidate_at_head_465),LITREF(lit_518),T30,ENVNUL,PNUL,sloc(1567));
  T29 = YPsig(LITREF(lit_521),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_del_next_466 = YPmet(FUNCODEREF(fun_del_next_466),LITREF(lit_520),T29,ENVNUL,PNUL,sloc(1571));
  T28 = YPsig(LITREF(lit_513),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLparentsG),Ynil);
  Yclass_ordered_ancestors = YPmet(FUNCODEREF(Yclass_ordered_ancestors),LITREF(lit_512),T28,ENVNUL,PNUL,sloc(1556));
  T33 = Yclass_ordered_ancestors;
  VARSET(Yclass_ordered_ancestors,T33);
  lit_523 = YPPsym((P)"@class-direct-props");
  lit_524 = YPPlist(1,YPPsym((P)"x"));
  T34 = YPsig(LITREF(lit_524),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOclass_direct_props = YPmet(FUNCODEREF(YOclass_direct_props),LITREF(lit_523),T34,ENVNUL,PNUL,sloc(1576));
  T35 = YOclass_direct_props;
  VARSET(YOclass_direct_props,T35);
  lit_525 = YPPsym((P)"class-ordered-props");
  lit_526 = YPPlist(1,YPPsym((P)"x"));
  T36 = YPsig(LITREF(lit_526),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLpropsG),Ynil);
  Yclass_ordered_props = YPmet(FUNCODEREF(Yclass_ordered_props),LITREF(lit_525),T36,ENVNUL,PNUL,sloc(1578));
  T37 = Yclass_ordered_props;
  VARSET(Yclass_ordered_props,T37);
  lit_527 = YPPsym((P)"del-class");
  lit_528 = YPPlist(1,YPPsym((P)"class"));
  T38 = YPsig(LITREF(lit_528),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Ydel_class = YPmet(FUNCODEREF(Ydel_class),LITREF(lit_527),T38,ENVNUL,PNUL,sloc(1585));
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
  fun_471 = YPmet(FUNCODEREF(fun_471),YPfalse,T42,ENVNUL,PNUL,sloc(1602));
  T41 = YPsig(LITREF(lit_534),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_472 = YPmet(FUNCODEREF(fun_472),YPfalse,T41,ENVNUL,PNUL,sloc(1609));
  T40 = YPsig(LITREF(lit_530),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yinit_class = YPmet(FUNCODEREF(Yinit_class),LITREF(lit_529),T40,ENVNUL,PNUL,sloc(1594));
  T43 = Yinit_class;
  VARSET(Yinit_class,T43);
  lit_535 = YPPsym((P)"fab-class");
  lit_536 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"parents"));
  T46 = YPsig(LITREF(lit_536),YPPlist(2,VARREF(YLsymG),VARREF(YLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  T45 = Yfab_class = YPmet(FUNCODEREF(Yfab_class),LITREF(lit_535),T46,ENVNUL,PNUL,sloc(1614));
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
  Yrefab_class = YPmet(FUNCODEREF(Yrefab_class),LITREF(lit_537),T0,ENVNUL,PNUL,sloc(1619));
  T1 = Yrefab_class;
  VARSET(Yrefab_class,T1);
  lit_539 = YPPsym((P)"object-props");
  lit_540 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_540),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_props = YPmet(FUNCODEREF(Yobject_props),LITREF(lit_539),T2,ENVNUL,PNUL,sloc(1634));
  T3 = Yobject_props;
  VARSET(Yobject_props,T3);
  lit_541 = YPPsym((P)"object-parents");
  lit_542 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_542),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_parents = YPmet(FUNCODEREF(Yobject_parents),LITREF(lit_541),T4,ENVNUL,PNUL,sloc(1635));
  T5 = Yobject_parents;
  VARSET(Yobject_parents,T5);
  VARSET(YDgetter_not_found,YPint((P)-1));
  lit_543 = YPPsym((P)"ensure-fresh-object");
  lit_544 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_544),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yensure_fresh_object = YPmet(FUNCODEREF(Yensure_fresh_object),LITREF(lit_543),T6,ENVNUL,PNUL,sloc(1643));
  T7 = Yensure_fresh_object;
  VARSET(Yensure_fresh_object,T7);
  lit_545 = YPPsym((P)"prop-offset");
  lit_546 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T8 = YPsig(LITREF(lit_546),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  Yprop_offset = YPmet(FUNCODEREF(Yprop_offset),LITREF(lit_545),T8,ENVNUL,PNUL,sloc(1647));
  T9 = Yprop_offset;
  VARSET(Yprop_offset,T9);
  VARSET(YTreport_prop_unbound_errorsQT,YPtrue);
  lit_547 = YPPsym((P)"%prop-unbound-error");
  lit_548 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPsig(LITREF(lit_548),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPprop_unbound_error = YPmet(FUNCODEREF(YPprop_unbound_error),LITREF(lit_547),T10,ENVNUL,PNUL,sloc(1657));
  T11 = YPprop_unbound_error;
  VARSET(YPprop_unbound_error,T11);
  lit_549 = YPPsym((P)"prop-value");
  lit_550 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T12 = YPsig(LITREF(lit_550),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yprop_value = YPmet(FUNCODEREF(Yprop_value),LITREF(lit_549),T12,ENVNUL,PNUL,sloc(1662));
  T13 = Yprop_value;
  VARSET(Yprop_value,T13);
  lit_551 = YPPsym((P)"prop-bound?");
  lit_552 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T14 = YPsig(LITREF(lit_552),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yprop_boundQ = YPmet(FUNCODEREF(Yprop_boundQ),LITREF(lit_551),T14,ENVNUL,PNUL,sloc(1669));
  T15 = Yprop_boundQ;
  VARSET(Yprop_boundQ,T15);
  lit_553 = YPPsym((P)"prop-value-setter");
  lit_554 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"object"),YPPsym((P)"getter"));
  T16 = YPsig(LITREF(lit_554),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yprop_value_setter = YPmet(FUNCODEREF(Yprop_value_setter),LITREF(lit_553),T16,ENVNUL,PNUL,sloc(1676));
  T17 = Yprop_value_setter;
  VARSET(Yprop_value_setter,T17);
  lit_555 = YPPsym((P)"find-getter");
  lit_556 = YPPlist(2,YPPsym((P)"owner"),YPPsym((P)"getter"));
  T18 = YPsig(LITREF(lit_556),YPPlist(2,VARREF(YLclassG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLmetG),Ynil);
  Yfind_getter = YPmet(FUNCODEREF(Yfind_getter),LITREF(lit_555),T18,ENVNUL,PNUL,sloc(1688));
  T19 = Yfind_getter;
  VARSET(Yfind_getter,T19);
  lit_557 = YPPsym((P)"find-setter");
  lit_558 = YPPlist(3,YPPsym((P)"owner"),YPPsym((P)"type"),YPPsym((P)"zetter"));
  T20 = YPsig(LITREF(lit_558),YPPlist(3,VARREF(YLclassG),VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)3),VARREF(YLmetG),Ynil);
  Yfind_setter = YPmet(FUNCODEREF(Yfind_setter),LITREF(lit_557),T20,ENVNUL,PNUL,sloc(1697));
  T21 = Yfind_setter;
  VARSET(Yfind_setter,T21);
  lit_559 = YPPsym((P)"forward-class");
  lit_560 = YPPlist(1,YPPsym((P)"old-class"));
  lit_561 = YPPlist(1,YPPsym((P)"g"));
  T23 = YPsig(LITREF(lit_561),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_486 = YPmet(FUNCODEREF(fun_486),YPfalse,T23,ENVNUL,PNUL,sloc(1712));
  T22 = YPsig(LITREF(lit_560),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yforward_class = YPmet(FUNCODEREF(Yforward_class),LITREF(lit_559),T22,ENVNUL,PNUL,sloc(1710));
  T24 = Yforward_class;
  VARSET(Yforward_class,T24);
  lit_562 = YPPsym((P)"clone");
  lit_563 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPsig(LITREF(lit_563),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yclone = YPmet(FUNCODEREF(Yclone),LITREF(lit_562),T25,ENVNUL,PNUL,sloc(1715));
  T26 = Yclone;
  VARSET(Yclone,T26);
  lit_564 = YPPsym((P)"@do-descendents");
  lit_565 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  lit_566 = YPPsym((P)"visit");
  lit_567 = YPPlist(1,YPPsym((P)"x"));
  T28 = YPsig(LITREF(lit_567),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_visit_489 = YPmet(FUNCODEREF(fun_visit_489),LITREF(lit_566),T28,ENVNUL,PNUL,sloc(1719));
  T27 = YPsig(LITREF(lit_565),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo_descendents = YPmet(FUNCODEREF(YOdo_descendents),LITREF(lit_564),T27,ENVNUL,PNUL,sloc(1717));
  T29 = YOdo_descendents;
  VARSET(YOdo_descendents,T29);
  lit_568 = YPPsym((P)"finalize-props");
  lit_569 = YPPlist(1,YPPsym((P)"class"));
  lit_570 = YPPlist(1,YPPsym((P)"prop"));
  T31 = YPsig(LITREF(lit_570),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_491 = YPmet(FUNCODEREF(fun_491),YPfalse,T31,ENVNUL,PNUL,sloc(1729));
  T30 = YPsig(LITREF(lit_569),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfinalize_props = YPmet(FUNCODEREF(Yfinalize_props),LITREF(lit_568),T30,ENVNUL,PNUL,sloc(1725));
  T32 = Yfinalize_props;
  VARSET(Yfinalize_props,T32);
  lit_571 = YPPsym((P)"%prop");
  lit_572 = YPPlist(5,YPPsym((P)"owner"),YPPsym((P)"getter"),YPPsym((P)"setter"),YPPsym((P)"type"),YPPsym((P)"init"));
  T33 = YPsig(LITREF(lit_572),YPPlist(5,VARREF(YLclassG),VARREF(YLgenG),VARREF(YLgenG),VARREF(YLtypeG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YPprop = YPmet(FUNCODEREF(YPprop),LITREF(lit_571),T33,ENVNUL,PNUL,sloc(1732));
  T34 = YPprop;
  VARSET(YPprop,T34);
  lit_573 = YPPsym((P)"update-instance-for-changed-class");
  lit_574 = YPPlist(1,YPPsym((P)"object"));
  T35 = YPsig(LITREF(lit_574),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yupdate_instance_for_changed_class = YPmet(FUNCODEREF(Yupdate_instance_for_changed_class),LITREF(lit_573),T35,ENVNUL,PNUL,sloc(1770));
  T36 = Yupdate_instance_for_changed_class;
  VARSET(Yupdate_instance_for_changed_class,T36);
  VARSET(Yadd_prop,VARREF(YPprop));
  lit_575 = YPPsym((P)"patch-early-classes");
  T37 = YPsig(LITREF(lit_384),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ypatch_early_classes = YPmet(FUNCODEREF(Ypatch_early_classes),LITREF(lit_575),T37,ENVNUL,PNUL,sloc(1776));
  T38 = Ypatch_early_classes;
  VARSET(Ypatch_early_classes,T38);
  XCALL0(1,VARREF(Ypatch_early_classes));
  lit_576 = YPPsym((P)"fab-gen");
  lit_577 = YPPlist(6,YPPsym((P)"name"),YPPsym((P)"names"),YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"val"),YPPsym((P)"mets"));
  T39 = YPsig(LITREF(lit_577),YPPlist(6,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLlogG),VARREF(YLtypeG),VARREF(YLlstG)),YPfalse,YPint((P)6),VARREF(YLgenG),Ynil);
  Yfab_gen = YPmet(FUNCODEREF(Yfab_gen),LITREF(lit_576),T39,ENVNUL,PNUL,sloc(1785));
  T40 = Yfab_gen;
  VARSET(Yfab_gen,T40);
  lit_578 = YPPsym((P)"gen-from-met");
  lit_579 = YPPlist(1,YPPsym((P)"x"));
  lit_580 = YPPlist(1,YPPsym((P)"x"));
  T42 = YPsig(LITREF(lit_580),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_498 = YPmet(FUNCODEREF(fun_498),YPfalse,T42,ENVNUL,PNUL,sloc(1800));
  T41 = YPsig(LITREF(lit_579),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLgenG),Ynil);
  Ygen_from_met = YPmet(FUNCODEREF(Ygen_from_met),LITREF(lit_578),T41,ENVNUL,PNUL,sloc(1799));
  T43 = Ygen_from_met;
  VARSET(Ygen_from_met,T43);
  lit_581 = YPPsym((P)"%define-method");
  lit_582 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T44 = YPsig(LITREF(lit_582),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  YPdefine_method = YPmet(FUNCODEREF(YPdefine_method),LITREF(lit_581),T44,ENVNUL,PNUL,sloc(1805));
  T45 = YPdefine_method;
  VARSET(YPdefine_method,T45);
  lit_583 = YPPsym((P)"unexec");
  lit_584 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"fun"));
  T46 = YPsig(LITREF(lit_584),YPPlist(2,VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yunexec = YPmet(FUNCODEREF(Yunexec),LITREF(lit_583),T46,ENVNUL,PNUL,sloc(1808));
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
  YOnew = YPmet(FUNCODEREF(YOnew),LITREF(lit_587),T50,ENVNUL,PNUL,sloc(1824));
  T51 = YOnew;
  VARSET(YOnew,T51);
  lit_589 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T52 = YPsig(LITREF(lit_589),YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_504 = YPmet(FUNCODEREF(fun_new_504),LITREF(lit_585),T52,ENVNUL,PNUL,sloc(1827));
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
  fun_505 = YPmet(FUNCODEREF(fun_505),YPfalse,T59,ENVNUL,PNUL,sloc(1836));
  T58 = YPsig(LITREF(lit_592),YPPlist(2,VARREF(YLunionG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_506 = YPmet(FUNCODEREF(fun_subtypeQ_506),LITREF(lit_590),T58,ENVNUL,PNUL,sloc(1835));
  T61 = VARREF_OR(YsubtypeQ,YPfalse);
  T62 = fun_subtypeQ_506;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T62);
  VARSET(YsubtypeQ,T60);
  lit_594 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_595 = YPPlist(1,YPPsym((P)"t"));
  T64 = YPsig(LITREF(lit_595),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_507 = YPmet(FUNCODEREF(fun_507),YPfalse,T64,ENVNUL,PNUL,sloc(1838));
  T63 = YPsig(LITREF(lit_594),YPPlist(2,VARREF(YLtypeG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_508 = YPmet(FUNCODEREF(fun_subtypeQ_508),LITREF(lit_590),T63,ENVNUL,PNUL,sloc(1837));
  T66 = VARREF_OR(YsubtypeQ,YPfalse);
  T67 = fun_subtypeQ_508;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YsubtypeQ,T65);
  lit_596 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_597 = YPPlist(1,YPPsym((P)"t"));
  T69 = YPsig(LITREF(lit_597),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_509 = YPmet(FUNCODEREF(fun_509),YPfalse,T69,ENVNUL,PNUL,sloc(1841));
  T68 = YPsig(LITREF(lit_596),YPPlist(2,VARREF(YLunionG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_510 = YPmet(FUNCODEREF(fun_subtypeQ_510),LITREF(lit_590),T68,ENVNUL,PNUL,sloc(1840));
  T71 = VARREF_OR(YsubtypeQ,YPfalse);
  T72 = fun_subtypeQ_510;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T72);
  VARSET(YsubtypeQ,T70);
  lit_598 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T73 = YPsig(LITREF(lit_598),YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_511 = YPmet(FUNCODEREF(fun_subtypeQ_511),LITREF(lit_590),T73,ENVNUL,PNUL,sloc(1843));
  T75 = VARREF_OR(YsubtypeQ,YPfalse);
  T76 = fun_subtypeQ_511;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T76);
  VARSET(YsubtypeQ,T74);
  lit_599 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T77 = YPsig(LITREF(lit_599),YPPlist(2,VARREF(YLsingletonG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_512 = YPmet(FUNCODEREF(fun_subtypeQ_512),LITREF(lit_590),T77,ENVNUL,PNUL,sloc(1845));
  T79 = VARREF_OR(YsubtypeQ,YPfalse);
  T80 = fun_subtypeQ_512;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T80);
  VARSET(YsubtypeQ,T78);
  lit_600 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T81 = YPsig(LITREF(lit_600),YPPlist(2,VARREF(YLsubclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_513 = YPmet(FUNCODEREF(fun_subtypeQ_513),LITREF(lit_590),T81,ENVNUL,PNUL,sloc(1847));
  T83 = VARREF_OR(YsubtypeQ,YPfalse);
  T84 = fun_subtypeQ_513;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T84);
  VARSET(YsubtypeQ,T82);
  lit_601 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T85 = YPsig(LITREF(lit_601),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_514 = YPmet(FUNCODEREF(fun_subtypeQ_514),LITREF(lit_590),T85,ENVNUL,PNUL,sloc(1850));
  T87 = VARREF_OR(YsubtypeQ,YPfalse);
  T88 = fun_subtypeQ_514;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T88);
  VARSET(YsubtypeQ,T86);
  lit_602 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T89 = YPsig(LITREF(lit_602),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_515 = YPmet(FUNCODEREF(fun_subtypeQ_515),LITREF(lit_590),T89,ENVNUL,PNUL,sloc(1852));
  T91 = VARREF_OR(YsubtypeQ,YPfalse);
  T92 = fun_subtypeQ_515;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T92);
  VARSET(YsubtypeQ,T90);
  lit_603 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T93 = YPsig(LITREF(lit_603),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_516 = YPmet(FUNCODEREF(fun_subtypeQ_516),LITREF(lit_590),T93,ENVNUL,PNUL,sloc(1854));
  T95 = VARREF_OR(YsubtypeQ,YPfalse);
  T96 = fun_subtypeQ_516;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T96);
  VARSET(YsubtypeQ,T94);
  lit_604 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T97 = YPsig(LITREF(lit_604),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_517 = YPmet(FUNCODEREF(fun_subtypeQ_517),LITREF(lit_590),T97,ENVNUL,PNUL,sloc(1857));
  T99 = VARREF_OR(YsubtypeQ,YPfalse);
  T100 = fun_subtypeQ_517;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T100);
  VARSET(YsubtypeQ,T98);
  lit_605 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T101 = YPsig(LITREF(lit_605),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_518 = YPmet(FUNCODEREF(fun_subtypeQ_518),LITREF(lit_590),T101,ENVNUL,PNUL,sloc(1859));
  T103 = VARREF_OR(YsubtypeQ,YPfalse);
  T104 = fun_subtypeQ_518;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T104);
  VARSET(YsubtypeQ,T102);
  lit_606 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T105 = YPsig(LITREF(lit_606),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_519 = YPmet(FUNCODEREF(fun_subtypeQ_519),LITREF(lit_590),T105,ENVNUL,PNUL,sloc(1861));
  T107 = VARREF_OR(YsubtypeQ,YPfalse);
  T108 = fun_subtypeQ_519;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T108);
  VARSET(YsubtypeQ,T106);
  lit_607 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T109 = YPsig(LITREF(lit_607),YPPlist(2,VARREF(YLproductG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_520 = YPmet(FUNCODEREF(fun_subtypeQ_520),LITREF(lit_590),T109,ENVNUL,PNUL,sloc(1864));
  T111 = VARREF_OR(YsubtypeQ,YPfalse);
  T112 = fun_subtypeQ_520;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T112);
  VARSET(YsubtypeQ,T110);
  lit_608 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T113 = YPsig(LITREF(lit_608),YPPlist(2,VARREF(YLtypeG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_521 = YPmet(FUNCODEREF(fun_subtypeQ_521),LITREF(lit_590),T113,ENVNUL,PNUL,sloc(1866));
  T115 = VARREF_OR(YsubtypeQ,YPfalse);
  T116 = fun_subtypeQ_521;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T116);
  VARSET(YsubtypeQ,T114);
  lit_609 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T117 = YPsig(LITREF(lit_609),YPPlist(2,VARREF(YLproductG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_522 = YPmet(FUNCODEREF(fun_subtypeQ_522),LITREF(lit_590),T117,ENVNUL,PNUL,sloc(1868));
  T119 = VARREF_OR(YsubtypeQ,YPfalse);
  T120 = fun_subtypeQ_522;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T120);
  VARSET(YsubtypeQ,T118);
  lit_610 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T121 = YPsig(LITREF(lit_610),YPPlist(2,VARREF(YLproductG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_523 = YPmet(FUNCODEREF(fun_subtypeQ_523),LITREF(lit_590),T121,ENVNUL,PNUL,sloc(1873));
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
  fun_isaQ_524 = YPmet(FUNCODEREF(fun_isaQ_524),LITREF(lit_611),T127,ENVNUL,PNUL,sloc(1880));
  T129 = VARREF_OR(YisaQ,YPfalse);
  T130 = fun_isaQ_524;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T130);
  VARSET(YisaQ,T128);
  lit_614 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T131 = YPsig(LITREF(lit_614),YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_525 = YPmet(FUNCODEREF(fun_isaQ_525),LITREF(lit_611),T131,ENVNUL,PNUL,sloc(1882));
  T133 = VARREF_OR(YisaQ,YPfalse);
  T134 = fun_isaQ_525;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T134);
  VARSET(YisaQ,T132);
  lit_615 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T135 = YPsig(LITREF(lit_615),YPPlist(2,VARREF(YLanyG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_526 = YPmet(FUNCODEREF(fun_isaQ_526),LITREF(lit_611),T135,ENVNUL,PNUL,sloc(1884));
  T137 = VARREF_OR(YisaQ,YPfalse);
  T138 = fun_isaQ_526;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T138);
  VARSET(YisaQ,T136);
  lit_616 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"u"));
  lit_617 = YPPlist(1,YPPsym((P)"t"));
  T140 = YPsig(LITREF(lit_617),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_527 = YPmet(FUNCODEREF(fun_527),YPfalse,T140,ENVNUL,PNUL,sloc(1888));
  T139 = YPsig(LITREF(lit_616),YPPlist(2,VARREF(YLanyG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_528 = YPmet(FUNCODEREF(fun_isaQ_528),LITREF(lit_611),T139,ENVNUL,PNUL,sloc(1887));
  T142 = VARREF_OR(YisaQ,YPfalse);
  T143 = fun_isaQ_528;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YisaQ,T141);
  lit_618 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T144 = YPsig(LITREF(lit_618),YPPlist(2,VARREF(YLanyG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_529 = YPmet(FUNCODEREF(fun_isaQ_529),LITREF(lit_611),T144,ENVNUL,PNUL,sloc(1889));
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
  fun_order_specs_530 = YPmet(FUNCODEREF(fun_order_specs_530),LITREF(lit_619),T151,ENVNUL,PNUL,sloc(1899));
  T154 = VARREF_OR(Yorder_specs,YPfalse);
  T155 = fun_order_specs_530;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T155);
  VARSET(Yorder_specs,T153);
  lit_622 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T157 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T156 = YPsig(LITREF(lit_622),YPPlist(3,VARREF(YLsingletonG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T157,Ynil);
  fun_order_specs_531 = YPmet(FUNCODEREF(fun_order_specs_531),LITREF(lit_619),T156,ENVNUL,PNUL,sloc(1903));
  T159 = VARREF_OR(Yorder_specs,YPfalse);
  T160 = fun_order_specs_531;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T160);
  VARSET(Yorder_specs,T158);
  lit_623 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T162 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T161 = YPsig(LITREF(lit_623),YPPlist(3,VARREF(YLsubclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T162,Ynil);
  fun_order_specs_532 = YPmet(FUNCODEREF(fun_order_specs_532),LITREF(lit_619),T161,ENVNUL,PNUL,sloc(1907));
  T164 = VARREF_OR(Yorder_specs,YPfalse);
  T165 = fun_order_specs_532;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T165);
  VARSET(Yorder_specs,T163);
  lit_624 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T167 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T166 = YPsig(LITREF(lit_624),YPPlist(3,VARREF(YLsubclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T167,Ynil);
  fun_order_specs_533 = YPmet(FUNCODEREF(fun_order_specs_533),LITREF(lit_619),T166,ENVNUL,PNUL,sloc(1916));
  T169 = VARREF_OR(Yorder_specs,YPfalse);
  T170 = fun_order_specs_533;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T170);
  VARSET(Yorder_specs,T168);
  lit_625 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T172 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T171 = YPsig(LITREF(lit_625),YPPlist(3,VARREF(YLclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T172,Ynil);
  fun_order_specs_534 = YPmet(FUNCODEREF(fun_order_specs_534),LITREF(lit_619),T171,ENVNUL,PNUL,sloc(1925));
  T174 = VARREF_OR(Yorder_specs,YPfalse);
  T175 = fun_order_specs_534;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T175);
  VARSET(Yorder_specs,T173);
  lit_626 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T177 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T176 = YPsig(LITREF(lit_626),YPPlist(3,VARREF(YLclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T177,Ynil);
  fun_order_specs_535 = YPmet(FUNCODEREF(fun_order_specs_535),LITREF(lit_619),T176,ENVNUL,PNUL,sloc(1934));
  T179 = VARREF_OR(Yorder_specs,YPfalse);
  T180 = fun_order_specs_535;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T180);
  VARSET(Yorder_specs,T178);
  lit_627 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T182 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T181 = YPsig(LITREF(lit_627),YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T182,Ynil);
  fun_order_specs_536 = YPmet(FUNCODEREF(fun_order_specs_536),LITREF(lit_619),T181,ENVNUL,PNUL,sloc(1938));
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
  fun_may_isaQ_537 = YPmet(FUNCODEREF(fun_may_isaQ_537),LITREF(lit_628),T0,ENVNUL,PNUL,sloc(1949));
  T3 = VARREF_OR(Ymay_isaQ,YPfalse);
  T4 = fun_may_isaQ_537;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T4);
  VARSET(Ymay_isaQ,T2);
  lit_631 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T6 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T5 = YPsig(LITREF(lit_631),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),T6,Ynil);
  fun_may_isaQ_538 = YPmet(FUNCODEREF(fun_may_isaQ_538),LITREF(lit_628),T5,ENVNUL,PNUL,sloc(1951));
  T8 = VARREF_OR(Ymay_isaQ,YPfalse);
  T9 = fun_may_isaQ_538;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(Ymay_isaQ,T7);
  lit_632 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T11 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T10 = YPsig(LITREF(lit_632),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),T11,Ynil);
  fun_may_isaQ_539 = YPmet(FUNCODEREF(fun_may_isaQ_539),LITREF(lit_628),T10,ENVNUL,PNUL,sloc(1953));
  T13 = VARREF_OR(Ymay_isaQ,YPfalse);
  T14 = fun_may_isaQ_539;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T14);
  VARSET(Ymay_isaQ,T12);
  lit_633 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T16 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T15 = YPsig(LITREF(lit_633),YPPlist(2,VARREF(YLclassG),VARREF(YLunionG)),YPfalse,YPint((P)2),T16,Ynil);
  fun_may_isaQ_540 = YPmet(FUNCODEREF(fun_may_isaQ_540),LITREF(lit_628),T15,ENVNUL,PNUL,sloc(1956));
  T18 = VARREF_OR(Ymay_isaQ,YPfalse);
  T19 = fun_may_isaQ_540;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(Ymay_isaQ,T17);
  lit_634 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  lit_635 = YPPlist(1,YPPsym((P)"t"));
  T22 = YPsig(LITREF(lit_635),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_541 = YPmet(FUNCODEREF(fun_541),YPfalse,T22,ENVNUL,PNUL,sloc(1966));
  T21 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T20 = YPsig(LITREF(lit_634),YPPlist(2,VARREF(YLclassG),VARREF(YLproductG)),YPfalse,YPint((P)2),T21,Ynil);
  fun_may_isaQ_542 = YPmet(FUNCODEREF(fun_may_isaQ_542),LITREF(lit_628),T20,ENVNUL,PNUL,sloc(1964));
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
  {"%vpc", PVAR, NULL},
  {"src-loc-line-setter", CVAR, &Ysrc_loc_line_setter},
  {"clone", CVAR, &Yclone},
  {"%met-name", PVAR, NULL},
  {"%src-loc-file-setter", PVAR, NULL},
  {"class-ancestors-setter", CVAR, &Yclass_ancestors_setter},
  {"%class-forward", PVAR, NULL},
  {"unexec", CVAR, &Yunexec},
  {"%class-parents", PVAR, NULL},
  {"%class-children-setter", PVAR, NULL},
  {"%i^", PVAR, NULL},
  {"gen-lookup-miss", CVAR, &Ygen_lookup_miss},
  {"@gen-cache-classes", CVAR, &YOgen_cache_classes},
  {"%vfn", PVAR, NULL},
  {"%elt-setter", PVAR, NULL},
  {"%class-ancestors", PVAR, NULL},
  {"%i<", PVAR, NULL},
  {"%object-shells", PVAR, NULL},
  {"%tag-into", PVAR, NULL},
  {"%ir", PVAR, NULL},
  {"@tail-setter", PVAR, NULL},
  {"@oelt", PVAR, NULL},
  {"no-applicable-methods-error", CVAR, &Yno_applicable_methods_error},
  {"$tag-len", PVAR, NULL},
  {"<seq!>", CVAR, &YLseqXG},
  {"$getter-not-found", CVAR, &YDgetter_not_found},
  {"tail", CVAR, &Ytail},
  {"%prop-owner-setter", PVAR, NULL},
  {"opts-tup-storage-setter", CVAR, &Yopts_tup_storage_setter},
  {"%close-out-port", PVAR, NULL},
  {"%i<<", PVAR, NULL},
  {"%class-prop-len", PVAR, NULL},
  {"%iu", PVAR, NULL},
  {"%fsqrt", PVAR, NULL},
  {"%vnm", PVAR, NULL},
  {"---main-8---", PVAR, NULL},
  {"fun-arity", CVAR, &Yfun_arity},
  {"%met-prop-len", CVAR, &YPmet_prop_len},
  {"class-name", CVAR, &Yclass_name},
  {"$min-int", CVAR, &YDmin_int},
  {"assert-error", CVAR, &Yassert_error},
  {"%object-class", PVAR, NULL},
  {"%class-parents-setter", PVAR, NULL},
  {"use/mangle", PVAR, NULL},
  {"class-ancestors", CVAR, &Yclass_ancestors},
  {"$max-classes", CVAR, &YDmax_classes},
  {"bound?", PVAR, NULL},
  {"%union-elts-setter", PVAR, NULL},
  {"<seq.>", CVAR, &YLseqIG},
  {"%bb", PVAR, NULL},
  {"%trace-off", PVAR, NULL},
  {"def-fun/sig-accessor", PVAR, NULL},
  {"%fasin", PVAR, NULL},
  {"ensure-fresh-object", CVAR, &Yensure_fresh_object},
  {"%unexec", PVAR, NULL},
  {"internal-error", CVAR, &Yinternal_error},
  {"@fun-nary?", CVAR, &YOfun_naryQ},
  {"%class", PVAR, NULL},
  {"<specs>", CVAR, &YLspecsG},
  {"%fc", PVAR, NULL},
  {"%lb", PVAR, NULL},
  {"%get", PVAR, NULL},
  {"%gen-src", PVAR, NULL},
  {"try", PVAR, NULL},
  {"opts-tup-storage", CVAR, &Yopts_tup_storage},
  {"%eq?", PVAR, NULL},
  {"src-loc-line", CVAR, &Ysrc_loc_line},
  {"%class-mets-setter", PVAR, NULL},
  {"%pairize", PVAR, NULL},
  {"@order-specs-class", CVAR, &YOorder_specs_class},
  {"%class-id", PVAR, NULL},
  {"%check-call-types", PVAR, NULL},
  {"%raw", PVAR, NULL},
  {"%i+", PVAR, NULL},
  {"%gen-name-setter", PVAR, NULL},
  {"<seq>", CVAR, &YLseqG},
  {"%lst", PVAR, NULL},
  {"class-type-cache-setter", CVAR, &Yclass_type_cache_setter},
  {"---main-2---", PVAR, NULL},
  {"seq", PVAR, NULL},
  {"%gen-refs-setter", PVAR, NULL},
  {"handler-info-arguments", CVAR, &Yhandler_info_arguments},
  {"type-object-setter", CVAR, &Ytype_object_setter},
  {"%gen-name", PVAR, NULL},
  {"prop-value-at", PVAR, NULL},
  {"%fapply", PVAR, NULL},
  {"%gen-cache-classes-setter", PVAR, NULL},
  {"%fun-cache-setter", PVAR, NULL},
  {"%prop-setter-setter", PVAR, NULL},
  {"<body>", CVAR, &YLbodyG},
  {"product-elts-setter", CVAR, &Yproduct_elts_setter},
  {"%define-method", CVAR, &YPdefine_method},
  {"arity-error", CVAR, &Yarity_error},
  {"@fun-mets-setter", CVAR, &YOfun_mets_setter},
  {"<col!>", CVAR, &YLcolXG},
  {"ddv", PVAR, NULL},
  {"@gen-cache-singletons-setter", CVAR, &YOgen_cache_singletons_setter},
  {"%src-loc-file", PVAR, NULL},
  {"class-gens", CVAR, &Yclass_gens},
  {"%i=", PVAR, NULL},
  {"%peek", PVAR, NULL},
  {"gen-cache-missable?-setter", CVAR, &Ygen_cache_missableQ_setter},
  {"@tail", PVAR, NULL},
  {"%current-out-port", PVAR, NULL},
  {"%vfn-setter", PVAR, NULL},
  {"if", PVAR, NULL},
  {"%vfp-setter", PVAR, NULL},
  {"%f<", PVAR, NULL},
  {"<sig>", CVAR, &YLsigG},
  {"%class-direct-props", PVAR, NULL},
  {"@alter", CVAR, &YOalter},
  {"class-type-cache", CVAR, &Yclass_type_cache},
  {"%build-runtime-modules", PVAR, NULL},
  {"%os-val-setter", PVAR, NULL},
  {"$gen-cache-singletons-offset", CVAR, &YDgen_cache_singletons_offset},
  {"gen-cache-classes-setter", CVAR, &Ygen_cache_classes_setter},
  {"object-parents", CVAR, &Yobject_parents},
  {"---main-9---", PVAR, NULL},
  {"%sig-arity-setter", PVAR, NULL},
  {"@fun-specs", CVAR, &YOfun_specs},
  {"@all?", CVAR, &YOallQ},
  {"%opts-tup-location", PVAR, NULL},
  {"file-opening-error", CVAR, &Yfile_opening_error},
  {"%define-primitives", PVAR, NULL},
  {"fun-nary?-setter", CVAR, &Yfun_naryQ_setter},
  {"%tup", PVAR, NULL},
  {"type-object", CVAR, &Ytype_object},
  {"<col.>", CVAR, &YLcolIG},
  {"%sym-nam-setter", PVAR, NULL},
  {"%app-args", PVAR, NULL},
  {"%@subclass?", PVAR, NULL},
  {"%vm-box-fab", PVAR, NULL},
  {"sig-nary?-setter", CVAR, &Ysig_naryQ_setter},
  {"%selt", PVAR, NULL},
  {"%fun-cache", PVAR, NULL},
  {"use/library", PVAR, NULL},
  {"%clone", PVAR, NULL},
  {"%vnm-setter", PVAR, NULL},
  {"unless", PVAR, NULL},
  {"product-elts", CVAR, &Yproduct_elts},
  {"prop-setter-setter", CVAR, &Yprop_setter_setter},
  {"@del-dups", CVAR, &YOdel_dups},
  {"incongruent-method-error", CVAR, &Yincongruent_method_error},
  {"%ru", PVAR, NULL},
  {"ds", PVAR, NULL},
  {"%class-name-setter", PVAR, NULL},
  {"%empty?", PVAR, NULL},
  {"%fixnum", PVAR, NULL},
  {"%fp-reg-setter", PVAR, NULL},
  {"gen-cache-missable?", CVAR, &Ygen_cache_missableQ},
  {"%gen", PVAR, NULL},
  {"%prop-init", PVAR, NULL},
  {"@prune-mets-by-type-at", CVAR, &YOprune_mets_by_type_at},
  {"<parents>", CVAR, &YLparentsG},
  {"<col>", CVAR, &YLcolG},
  {"*macros-ok?*", CVAR, &YTmacros_okQT},
  {"gen-cache-classes", CVAR, &Ygen_cache_classes},
  {"%pair", PVAR, NULL},
  {"%vm-fun-env-elt", PVAR, NULL},
  {"%lu", PVAR, NULL},
  {"@gen-cache-singletons", CVAR, &YOgen_cache_singletons},
  {"sig-nary?", CVAR, &Ysig_naryQ},
  {"sig-unification-vars-setter", CVAR, &Ysig_unification_vars_setter},
  {"@may-isa?", CVAR, &YOmay_isaQ},
  {"%%apply", PVAR, NULL},
  {"%met", PVAR, NULL},
  {"$gen-cache-classes-offset", CVAR, &YDgen_cache_classes_offset},
  {"fin", PVAR, NULL},
  {"%fatan2", PVAR, NULL},
  {"%object-of", PVAR, NULL},
  {"<rep>", CVAR, &YLrepG},
  {"fun-sig-setter", CVAR, &Yfun_sig_setter},
  {"%su", PVAR, NULL},
  {"%sig-specs", PVAR, NULL},
  {"@==", PVAR, NULL},
  {"object-props", CVAR, &Yobject_props},
  {"and", PVAR, NULL},
  {"nul", CVAR, &Ynul},
  {"@fun-names", CVAR, &YOfun_names},
  {"%true", CVAR, &YPtrue},
  {"@rev!", CVAR, &YOrevX},
  {"%define-props", PVAR, NULL},
  {"%met-code", PVAR, NULL},
  {"<gen-cache>", CVAR, &YLgen_cacheG},
  {"fun-nary?", CVAR, &Yfun_naryQ},
  {"%fsin", PVAR, NULL},
  {"fun-src-setter", CVAR, &Yfun_src_setter},
  {"%opts-tup-location-setter", PVAR, NULL},
  {"%sig-specs-setter", PVAR, NULL},
  {"%f+", PVAR, NULL},
  {"%gen-cache-arg-pos-setter", PVAR, NULL},
  {"@pair", PVAR, NULL},
  {"$tag-msk", PVAR, NULL},
  {"%tup!", PVAR, NULL},
  {"%f/", PVAR, NULL},
  {"$missed-dispatch", CVAR, &YDmissed_dispatch},
  {"gen-refs-setter", CVAR, &Ygen_refs_setter},
  {"gen-from-met", CVAR, &Ygen_from_met},
  {"%compute-ancestors", PVAR, NULL},
  {"@do", CVAR, &YOdo},
  {"<loc>", CVAR, &YLlocG},
  {"%opts-tup", PVAR, NULL},
  {"gen-lookup", PVAR, NULL},
  {"%untag-into", PVAR, NULL},
  {"%add-prop", CVAR, &YPadd_prop},
  {"@cache-add", CVAR, &YOcache_add},
  {"%gen-src-setter", PVAR, NULL},
  {"%sig-names", PVAR, NULL},
  {"%@class-of", PVAR, NULL},
  {"%vm-box-val", PVAR, NULL},
  {"%false", CVAR, &YPfalse},
  {"fun-sig", CVAR, &Yfun_sig},
  {"%define-setter", PVAR, NULL},
  {"%opts-location-setter", PVAR, NULL},
  {"%tag", PVAR, NULL},
  {"%fi2f", PVAR, NULL},
  {"%raw-alloc", PVAR, NULL},
  {"fun-src", CVAR, &Yfun_src},
  {"%head", PVAR, NULL},
  {"return-type-error", CVAR, &Yreturn_type_error},
  {"<flo>", CVAR, &YLfloG},
  {"gen-lookup-miss-1", CVAR, &Ygen_lookup_miss_1},
  {"gen-lookup-miss-1-using", CVAR, &Ygen_lookup_miss_1_using},
  {"%puts", PVAR, NULL},
  {"@tup", CVAR, &YOtup},
  {"gen-refs", CVAR, &Ygen_refs},
  {"prop-value-at-setter", PVAR, NULL},
  {"patch-early-classes", CVAR, &Ypatch_early_classes},
  {"%opts-count-setter", PVAR, NULL},
  {"find-setter", CVAR, &Yfind_setter},
  {"ct-also", PVAR, NULL},
  {"$max-int", CVAR, &YDmax_int},
  {"@@empty?", CVAR, &YOOemptyQ},
  {"%opts-tup-count", PVAR, NULL},
  {"%%sfab", PVAR, NULL},
  {"%f-", PVAR, NULL},
  {"<fixnum>", CVAR, &YLfixnumG},
  {"property-type-error", CVAR, &Yproperty_type_error},
  {"head-setter", CVAR, &Yhead_setter},
  {"@gen-cache-arg-pos-setter", CVAR, &YOgen_cache_arg_pos_setter},
  {"syntax-error", CVAR, &Ysyntax_error},
  {"%class-shells", PVAR, NULL},
  {"%define-tagged-structure", PVAR, NULL},
  {"%current-in-port", PVAR, NULL},
  {"%selt-setter", PVAR, NULL},
  {"@subtype?", CVAR, &YOsubtypeQ},
  {"@singleton-isa?", PVAR, NULL},
  {"%facos", PVAR, NULL},
  {"class-ordered-ancestors", CVAR, &Yclass_ordered_ancestors},
  {"@mem?", CVAR, &YOmemQ},
  {"%f=", PVAR, NULL},
  {"def", PVAR, NULL},
  {"class-prop-len-setter", CVAR, &Yclass_prop_len_setter},
  {"%break", PVAR, NULL},
  {"nil", CVAR, &Ynil},
  {"@+", PVAR, NULL},
  {"%i?", PVAR, NULL},
  {"export", PVAR, NULL},
  {"%type-object", PVAR, NULL},
  {"%class-forward-setter", PVAR, NULL},
  {"class-direct-props-setter", CVAR, &Yclass_direct_props_setter},
  {"---main-12---", PVAR, NULL},
  {"<prop>", CVAR, &YLpropG},
  {"fun-specs-setter", CVAR, &Yfun_specs_setter},
  {"---main-15---", PVAR, NULL},
  {"<int>", CVAR, &YLintG},
  {"mif", PVAR, NULL},
  {"@head", PVAR, NULL},
  {"%flo-dat", PVAR, NULL},
  {"property-unbound-error", CVAR, &Yproperty_unbound_error},
  {"%src-loc-line-setter", PVAR, NULL},
  {"fun-congruent?", CVAR, &Yfun_congruentQ},
  {"%object-class-setter", PVAR, NULL},
  {"%loc-val", PVAR, NULL},
  {"%code-ref", PVAR, NULL},
  {"$adr-tag", PVAR, NULL},
  {"%sig-names-setter", PVAR, NULL},
  {"@pick", CVAR, &YOpick},
  {"lst", CVAR, &Ylst},
  {"head", CVAR, &Yhead},
  {"@tlen", PVAR, NULL},
  {"opts-count-setter", CVAR, &Yopts_count_setter},
  {"%type-class", PVAR, NULL},
  {"%sym-nam", PVAR, NULL},
  {"%i<<<", PVAR, NULL},
  {"refab-class", CVAR, &Yrefab_class},
  {"%new", PVAR, NULL},
  {"%union-elts", PVAR, NULL},
  {"class-prop-len", CVAR, &Yclass_prop_len},
  {"@empty?", PVAR, NULL},
  {"<num>", CVAR, &YLnumG},
  {"update-instance-for-changed-class", CVAR, &Yupdate_instance_for_changed_class},
  {"%indirect-object?", PVAR, NULL},
  {"%define-parents", PVAR, NULL},
  {"%sb", PVAR, NULL},
  {"not", CVAR, &Ynot},
  {"*boot-macro-module-names*", CVAR, &YTboot_macro_module_namesT},
  {"%vm-with-cleanup", PVAR, NULL},
  {"or", PVAR, NULL},
  {"<product>", CVAR, &YLproductG},
  {"%define-accessor", PVAR, NULL},
  {"---main-5---", PVAR, NULL},
  {"@gen-cache-arg-pos", CVAR, &YOgen_cache_arg_pos},
  {"%fcosh", PVAR, NULL},
  {"%met-refs-setter", PVAR, NULL},
  {"no-next-methods-error", CVAR, &Yno_next_methods_error},
  {"%untag", PVAR, NULL},
  {"@class-ancestors", CVAR, &YOclass_ancestors},
  {"%class-id-setter", PVAR, NULL},
  {"opts-count", CVAR, &Yopts_count},
  {"class-children-setter", CVAR, &Yclass_children_setter},
  {"find-getter", CVAR, &Yfind_getter},
  {"%met-sig-setter", PVAR, NULL},
  {"@not", PVAR, NULL},
  {"%cu", PVAR, NULL},
  {"%raw-met-call", PVAR, NULL},
  {"fun-specs", CVAR, &Yfun_specs},
  {"class-forward-setter", CVAR, &Yclass_forward_setter},
  {"%i>>", PVAR, NULL},
  {"%add-met", CVAR, &YPadd_met},
  {"%type-class-setter", PVAR, NULL},
  {"%met-refs", PVAR, NULL},
  {"%prop-setter", PVAR, NULL},
  {"%trace-on", PVAR, NULL},
  {"@find", CVAR, &YOfind},
  {"<union>", CVAR, &YLunionG},
  {"class-row-setter", CVAR, &Yclass_row_setter},
  {"%ft", PVAR, NULL},
  {"<src-loc>", CVAR, &YLsrc_locG},
  {"%relt", PVAR, NULL},
  {"%class-props", PVAR, NULL},
  {"%tail", PVAR, NULL},
  {"ord-app-mets-1", CVAR, &Yord_app_mets_1},
  {"%type-object-setter", PVAR, NULL},
  {"use", PVAR, NULL},
  {"union-elts-setter", CVAR, &Yunion_elts_setter},
  {"dss", PVAR, NULL},
  {"@precise-spec?", CVAR, &YOprecise_specQ},
  {"%flog", PVAR, NULL},
  {"%cb", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"@add-new", PVAR, NULL},
  {"may-isa?", CVAR, &Ymay_isaQ},
  {"%ft/", PVAR, NULL},
  {"class-children", CVAR, &Yclass_children},
  {"%open-out-file", PVAR, NULL},
  {"fun-same-met?", CVAR, &Yfun_same_metQ},
  {"%opts-tup-tup-setter", PVAR, NULL},
  {"---main-7---", PVAR, NULL},
  {"class-of", CVAR, &Yclass_of},
  {"---main-14---", PVAR, NULL},
  {"@map", CVAR, &YOmap},
  {"<simple-handler-info>", CVAR, &YLsimple_handler_infoG},
  {"<chr>", CVAR, &YLchrG},
  {"%class-direct-props-setter", PVAR, NULL},
  {"class-forward", CVAR, &Yclass_forward},
  {"@<", PVAR, NULL},
  {"gen-cache-singletons-setter", CVAR, &Ygen_cache_singletons_setter},
  {"%sig-val-setter", PVAR, NULL},
  {"%prop-init-setter", PVAR, NULL},
  {"object-class", CVAR, &Yobject_class},
  {"%time", PVAR, NULL},
  {"<subclass>", CVAR, &YLsubclassG},
  {"%rev!", PVAR, NULL},
  {"class-row", CVAR, &Yclass_row},
  {"%i*", PVAR, NULL},
  {"%def-regs", PVAR, NULL},
  {"%%tfab", PVAR, NULL},
  {"sig-specs-setter", CVAR, &Ysig_specs_setter},
  {"@telt", PVAR, NULL},
  {"argument-type-error", CVAR, &Yargument_type_error},
  {"@type-equal?", CVAR, &YOtype_equalQ},
  {"@tall2?", CVAR, &YOtall2Q},
  {"union-elts", CVAR, &Yunion_elts},
  {"prop-getter-setter", CVAR, &Yprop_getter_setter},
  {"---main-6---", PVAR, NULL},
  {"%flo-dat-setter", PVAR, NULL},
  {"<mag>", CVAR, &YLmagG},
  {"gen-lookup-1-using", PVAR, NULL},
  {"ord-app-mets", CVAR, &Yord_app_mets},
  {"%i!", PVAR, NULL},
  {"%str!", PVAR, NULL},
  {"unknown-function-error", CVAR, &Yunknown_function_error},
  {"fab-class", CVAR, &Yfab_class},
  {"*boot-macro-names*", CVAR, &YTboot_macro_namesT},
  {"arithmetic-error", CVAR, &Yarithmetic_error},
  {"%class-name", PVAR, NULL},
  {"prop-init-setter", CVAR, &Yprop_init_setter},
  {"%class-gens", PVAR, NULL},
  {"%met-env-setter", PVAR, NULL},
  {"%sig-val", PVAR, NULL},
  {"ensure-singleton-cache", CVAR, &Yensure_singleton_cache},
  {"%tu", PVAR, NULL},
  {"cpl-error", CVAR, &Ycpl_error},
  {"%symbols-ready?", CVAR, &YPsymbols_readyQ},
  {"%prop-elt-setter", PVAR, NULL},
  {"%relt-setter", PVAR, NULL},
  {"dp", PVAR, NULL},
  {"gen-cache-singletons", CVAR, &Ygen_cache_singletons},
  {"%im", PVAR, NULL},
  {"loc", PVAR, NULL},
  {"subtype?", CVAR, &YsubtypeQ},
  {"@@==", CVAR, &YOOEE},
  {"<singleton>", CVAR, &YLsingletonG},
  {"fun-names-setter", CVAR, &Yfun_names_setter},
  {"@union-spec?", CVAR, &YOunion_specQ},
  {"as-error", CVAR, &Yas_error},
  {"<log>", CVAR, &YLlogG},
  {"ambiguous-method-error", CVAR, &Yambiguous_method_error},
  {"sig-specs", CVAR, &Ysig_specs},
  {"sig-val-setter", CVAR, &Ysig_val_setter},
  {"%product-elts-setter", PVAR, NULL},
  {"%ftanh", PVAR, NULL},
  {"prop-getter", CVAR, &Yprop_getter},
  {"@cat2", CVAR, &YOcat2},
  {"type-error", CVAR, &Ytype_error},
  {"%%sym", PVAR, NULL},
  {"fun-name-setter", CVAR, &Yfun_name_setter},
  {"%loc", PVAR, NULL},
  {"%gen-code-setter", PVAR, NULL},
  {"prop-value-setter", CVAR, &Yprop_value_setter},
  {"df", PVAR, NULL},
  {"%dyn-var-val", PVAR, NULL},
  {"%str-eq?-loop", PVAR, NULL},
  {"t*", CVAR, &YtT},
  {"%flo-bits", PVAR, NULL},
  {"$direct-object-class", CVAR, &YDdirect_object_class},
  {"prop-init", CVAR, &Yprop_init},
  {"narity-error", CVAR, &Ynarity_error},
  {"fun-refs-setter", CVAR, &Yfun_refs_setter},
  {"rep", PVAR, NULL},
  {"gen-add-met", CVAR, &Ygen_add_met},
  {"<any>", CVAR, &YLanyG},
  {"%class-of", PVAR, NULL},
  {"%dyn-var-val-setter", PVAR, NULL},
  {"%opts-count", PVAR, NULL},
  {"esc", PVAR, NULL},
  {"fun-spec", CVAR, &Yfun_spec},
  {"%define-repeated-structure", PVAR, NULL},
  {"forward-class", CVAR, &Yforward_class},
  {"fun-cache-setter", CVAR, &Yfun_cache_setter},
  {"%gen-cache", PVAR, NULL},
  {"%sp-reg", PVAR, NULL},
  {"@any?", CVAR, &YOanyQ},
  {"error", CVAR, &Yerror},
  {"%cat2", PVAR, NULL},
  {"class-mets-setter", CVAR, &Yclass_mets_setter},
  {"sig-val", CVAR, &Ysig_val},
  {"%with-monitor", CVAR, &YPwith_monitor},
  {"dg", PVAR, NULL},
  {"%symbols", CVAR, &YPsymbols},
  {"*report-prop-unbound-errors?*", CVAR, &YTreport_prop_unbound_errorsQT},
  {"fun-unification-vars-setter", CVAR, &Yfun_unification_vars_setter},
  {"%vpc-setter", PVAR, NULL},
  {"%classes-ready?", CVAR, &YPclasses_readyQ},
  {"fun-name", CVAR, &Yfun_name},
  {"%iv", PVAR, NULL},
  {"%vm-fun-env-elt-setter", PVAR, NULL},
  {"*early-classes*", CVAR, &YTearly_classesT},
  {"nul-prop", CVAR, &Ynul_prop},
  {"@tany?", CVAR, &YOtanyQ},
  {"---main-3---", PVAR, NULL},
  {"%product", PVAR, NULL},
  {"<opts-tup>", CVAR, &YLopts_tupG},
  {"fab-gen", CVAR, &Yfab_gen},
  {"fun-names", CVAR, &Yfun_names},
  {"fun-refs", CVAR, &Yfun_refs},
  {"@subclass-spec?", CVAR, &YOsubclass_specQ},
  {"%prop", CVAR, &YPprop},
  {"range-error", CVAR, &Yrange_error},
  {"dc", PVAR, NULL},
  {"%sig-unification-vars", PVAR, NULL},
  {"<env>", CVAR, &YLenvG},
  {"fun-cache", CVAR, &Yfun_cache},
  {"@rev", CVAR, &YOrev},
  {"%class-row-setter", PVAR, NULL},
  {"%early-dispatch", CVAR, &YPearly_dispatch},
  {"quasiquote", PVAR, NULL},
  {"requires-singleton-prec", CVAR, &Yrequires_singleton_prec},
  {"%app-filename", PVAR, NULL},
  {"%gen-sig-setter", PVAR, NULL},
  {"@class-isa?", PVAR, NULL},
  {"%open-in-file", PVAR, NULL},
  {"opts-location", CVAR, &Yopts_location},
  {"sig-unification-vars", CVAR, &Ysig_unification_vars},
  {"@=", PVAR, NULL},
  {"%os-name", PVAR, NULL},
  {"fun-env", CVAR, &Yfun_env},
  {"---main-1---", PVAR, NULL},
  {"%os-val", PVAR, NULL},
  {"src-loc-file-setter", CVAR, &Ysrc_loc_file_setter},
  {"ord-app-mets*", CVAR, &Yord_app_metsT},
  {"%file-type", PVAR, NULL},
  {"@mets-subclasses-at", CVAR, &YOmets_subclasses_at},
  {"%process-module", PVAR, NULL},
  {"property-not-found-error", CVAR, &Yproperty_not_found_error},
  {"%put", PVAR, NULL},
  {"prop-setter", CVAR, &Yprop_setter},
  {"%vm-with-exit", PVAR, NULL},
  {"sym-name-setter", CVAR, &Ysym_name_setter},
  {"%gen-cache-count-setter", PVAR, NULL},
  {"<replace-generic-restart>", CVAR, &YLreplace_generic_restartG},
  {"%reparent-class-shells", PVAR, NULL},
  {"prop-bound?", CVAR, &Yprop_boundQ},
  {"%i>>>", PVAR, NULL},
  {"@lst", CVAR, &YOlst},
  {"<opts>", CVAR, &YLoptsG},
  {"class-gens-setter", CVAR, &Yclass_gens_setter},
  {"class-parents-setter", CVAR, &Yclass_parents_setter},
  {"---main-4---", PVAR, NULL},
  {"%int", PVAR, NULL},
  {"%c=", PVAR, NULL},
  {"%prop-type-setter", PVAR, NULL},
  {"%ib", PVAR, NULL},
  {"%finalize-props!", CVAR, &YPfinalize_propsX},
  {"%force-out", PVAR, NULL},
  {"%do-stack-frames", PVAR, NULL},
  {"%define-structure", PVAR, NULL},
  {"%define-boxed-structure", PVAR, NULL},
  {"quote", PVAR, NULL},
  {"order-mets", CVAR, &Yorder_mets},
  {"%opts-tup-tup", PVAR, NULL},
  {"%gen-code", PVAR, NULL},
  {"use/include", PVAR, NULL},
  {"%f*", PVAR, NULL},
  {"ct", PVAR, NULL},
  {"%file-mtime", PVAR, NULL},
  {"%i&", PVAR, NULL},
  {"class-props-setter", CVAR, &Yclass_props_setter},
  {"%macro", PVAR, NULL},
  {"%str", PVAR, NULL},
  {"@singleton-spec?", CVAR, &YOsingleton_specQ},
  {"%prop-owner", PVAR, NULL},
  {"%prop-getter-setter", PVAR, NULL},
  {"src-loc-file", CVAR, &Ysrc_loc_file},
  {"%%len", PVAR, NULL},
  {"opts-location-setter", CVAR, &Yopts_location_setter},
  {"%gen-cache-singletons-setter", PVAR, NULL},
  {"@head-setter", PVAR, NULL},
  {"@fill", CVAR, &YOfill},
  {"%loc-val-setter", PVAR, NULL},
  {"%opts-tup-count-setter", PVAR, NULL},
  {"isa?", CVAR, &YisaQ},
  {"gen-lookup-1", PVAR, NULL},
  {"%finalize-props", PVAR, NULL},
  {"%rnul", CVAR, &YPrnul},
  {"sym-name", CVAR, &Ysym_name},
  {"@int?", PVAR, NULL},
  {"class-direct-props", CVAR, &Yclass_direct_props},
  {"%define-hierarchy", PVAR, NULL},
  {"%class-props-setter", PVAR, NULL},
  {"new", CVAR, &Ynew},
  {"%met-code-setter", PVAR, NULL},
  {"%vm-fun-env-fab", PVAR, NULL},
  {"%prop-dat-at", PVAR, NULL},
  {"@add", PVAR, NULL},
  {"%gen-cache-classes", PVAR, NULL},
  {"class-parents", CVAR, &Yclass_parents},
  {"%i-", PVAR, NULL},
  {"%ftan", PVAR, NULL},
  {"use/export", PVAR, NULL},
  {"@subclass?", PVAR, NULL},
  {"%fsinh", PVAR, NULL},
  {"---main-11---", PVAR, NULL},
  {"@class<", CVAR, &YOclassL},
  {"class-props", CVAR, &Yclass_props},
  {"@oelt-setter", PVAR, NULL},
  {"force-names-into-boot-module", PVAR, NULL},
  {"%%macro", CVAR, &YPPmacro},
  {"%class-type-cache", PVAR, NULL},
  {"%opts", PVAR, NULL},
  {"finalize-props", CVAR, &Yfinalize_props},
  {"%fu", PVAR, NULL},
  {"%%prop", PVAR, NULL},
  {"%invoke-debugger", PVAR, NULL},
  {"%next-methods", PVAR, NULL},
  {"*next-class-id*", CVAR, &YTnext_class_idT},
  {"init-class", CVAR, &Yinit_class},
  {"@opts-as-lst", CVAR, &YOopts_as_lst},
  {"%loc-off-setter", PVAR, NULL},
  {"%collect-direct-props", CVAR, &YPcollect_direct_props},
  {"%class-type-cache-setter", PVAR, NULL},
  {"%opts-location", PVAR, NULL},
  {"@fun-mets", CVAR, &YOfun_mets},
  {"%ready?", PVAR, NULL},
  {"@new", CVAR, &YOnew},
  {"<class>", CVAR, &YLclassG},
  {"class-id-setter", CVAR, &Yclass_id_setter},
  {"%gen-mets-setter", PVAR, NULL},
  {"%snul", CVAR, &YPsnul},
  {"@specd-args", CVAR, &YOspecd_args},
  {"%fb", PVAR, NULL},
  {"%prop-getter", PVAR, NULL},
  {"%fun-reg", PVAR, NULL},
  {"%met-src-setter", PVAR, NULL},
  {"del-class", CVAR, &Ydel_class},
  {"fun-val-setter", CVAR, &Yfun_val_setter},
  {"type-class-setter", CVAR, &Ytype_class_setter},
  {"%class-mets", PVAR, NULL},
  {"%sym", PVAR, NULL},
  {"%dispatch", CVAR, &YPdispatch},
  {"%class-prop-len-setter", PVAR, NULL},
  {"%class-gens-setter", PVAR, NULL},
  {"%union", PVAR, NULL},
  {"<props>", CVAR, &YLpropsG},
  {"cond", PVAR, NULL},
  {"%tlen", PVAR, NULL},
  {"%sig-nary?", PVAR, NULL},
  {"%gen-cache-missable?", PVAR, NULL},
  {"%gen-cache-singletons", PVAR, NULL},
  {"prop-owner-setter", CVAR, &Yprop_owner_setter},
  {"keyboard-interrupt", CVAR, &Ykeyboard_interrupt},
  {"<type>", CVAR, &YLtypeG},
  {"%gen-sig", PVAR, NULL},
  {"%prop-offset", CVAR, &YPprop_offset},
  {"%fatan", PVAR, NULL},
  {"class-mets", CVAR, &Yclass_mets},
  {"%eof-object", PVAR, NULL},
  {"gen-cache-arg-pos-setter", CVAR, &Ygen_cache_arg_pos_setter},
  {"%fcos", PVAR, NULL},
  {"%class-ancestors-setter", PVAR, NULL},
  {"%define-getter", PVAR, NULL},
  {"<gen>", CVAR, &YLgenG},
  {"%met-sig", PVAR, NULL},
  {"@mets-singletons-at", CVAR, &YOmets_singletons_at},
  {"macro-expand", PVAR, NULL},
  {"%sig-unification-vars-setter", PVAR, NULL},
  {"class-id", CVAR, &Yclass_id},
  {"%sig-nary?-setter", PVAR, NULL},
  {"%telt-setter", PVAR, NULL},
  {"sig-names-setter", CVAR, &Ysig_names_setter},
  {"@len", PVAR, NULL},
  {"@order-specs", CVAR, &YOorder_specs},
  {"%gen-cache-missable?-setter", PVAR, NULL},
  {"add-prop", CVAR, &Yadd_prop},
  {"%gen-refs", PVAR, NULL},
  {"@olen", PVAR, NULL},
  {"%class-row", PVAR, NULL},
  {"type-class", CVAR, &Ytype_class},
  {"%c<", PVAR, NULL},
  {"@fold", CVAR, &YOfold},
  {"method-accessor-offset", CVAR, &Ymethod_accessor_offset},
  {"sig-arity-setter", CVAR, &Ysig_arity_setter},
  {"%fab-dyn-var", PVAR, NULL},
  {"let", PVAR, NULL},
  {"---main-10---", PVAR, NULL},
  {"one-nil", CVAR, &Yone_nil},
  {"%head-setter", PVAR, NULL},
  {"@elt", CVAR, &YOelt},
  {"%allocate-stack", PVAR, NULL},
  {"prop-owner", CVAR, &Yprop_owner},
  {"prop-type-setter", CVAR, &Yprop_type_setter},
  {"---main-13---", PVAR, NULL},
  {"%*used-symbols-too-early*", CVAR, &YPTused_symbols_too_earlyT},
  {"%%mep-apply", PVAR, NULL},
  {"%vsp", PVAR, NULL},
  {"%patch-early-generics", PVAR, NULL},
  {"%src-loc-line", PVAR, NULL},
  {"%prop-unbound-error", CVAR, &YPprop_unbound_error},
  {"%met-env", PVAR, NULL},
  {"prop-value", CVAR, &Yprop_value},
  {"gen-cache-arg-pos", CVAR, &Ygen_cache_arg_pos},
  {"*boot-macro-expanders*", CVAR, &YTboot_macro_expandersT},
  {"class-ordered-props", CVAR, &Yclass_ordered_props},
  {"%unlink-stack", PVAR, NULL},
  {"fun-val", CVAR, &Yfun_val},
  {"%singleton", PVAR, NULL},
  {"sig-names", CVAR, &Ysig_names},
  {"@isa?", CVAR, &YOisaQ},
  {"%file-exists?", PVAR, NULL},
  {"%create-directory", PVAR, NULL},
  {"prop-bound-at?", PVAR, NULL},
  {"dm", PVAR, NULL},
  {"*restarts-ok?*", CVAR, &YTrestarts_okQT},
  {"%sp-reg-setter", PVAR, NULL},
  {"%vm-box-val-setter", PVAR, NULL},
  {"%slen", PVAR, NULL},
  {"%tail-setter", PVAR, NULL},
  {"<str>", CVAR, &YLstrG},
  {"%src-loc", PVAR, NULL},
  {"%patch-early-generic", CVAR, &YPpatch_early_generic},
  {"sig-arity", CVAR, &Ysig_arity},
  {"fun-code-setter", CVAR, &Yfun_code_setter},
  {"fun-unification-vars", CVAR, &Yfun_unification_vars},
  {"%chr", PVAR, NULL},
  {"%to-tup", PVAR, NULL},
  {"%loc-off", PVAR, NULL},
  {"%fp-reg", PVAR, NULL},
  {"met-app-unify", CVAR, &Ymet_app_unify},
  {"met-app?", CVAR, &Ymet_appQ},
  {"@gen-cache-classes-setter", CVAR, &YOgen_cache_classes_setter},
  {"when", PVAR, NULL},
  {"%update-instance-for-changed-class", PVAR, NULL},
  {"prop-type", CVAR, &Yprop_type},
  {"@mets-unspecialized-at?", CVAR, &YOmets_unspecialized_atQ},
  {"handler-info-message", CVAR, &Yhandler_info_message},
  {"%sig-arity", PVAR, NULL},
  {"choose-methods", CVAR, &Ychoose_methods},
  {"fun-env-setter", CVAR, &Yfun_env_setter},
  {"%*start-running-at*", CVAR, &YPTstart_running_atT},
  {"%elt", PVAR, NULL},
  {"%tnul", CVAR, &YPtnul},
  {"dv", PVAR, NULL},
  {"@fun-unification-vars", CVAR, &YOfun_unification_vars},
  {"fun-mets-setter", CVAR, &Yfun_mets_setter},
  {"stack-overflow-error", CVAR, &Ystack_overflow_error},
  {"<tup>", CVAR, &YLtupG},
  {"<sym>", CVAR, &YLsymG},
  {"<fun>", CVAR, &YLfunG},
  {"%vsp-setter", PVAR, NULL},
  {"%%rfab", PVAR, NULL},
  {"@telt-setter", PVAR, NULL},
  {"dl", PVAR, NULL},
  {"%ff", PVAR, NULL},
  {"@fun-val", CVAR, &YOfun_val},
  {"%vfp", PVAR, NULL},
  {"gen-src-setter", CVAR, &Ygen_src_setter},
  {"%met-src", PVAR, NULL},
  {"tup", CVAR, &Ytup},
  {"order-specs", CVAR, &Yorder_specs},
  {"%close-in-port", PVAR, NULL},
  {"fun-code", CVAR, &Yfun_code},
  {"@do-descendents", CVAR, &YOdo_descendents},
  {"%raw-call", PVAR, NULL},
  {"%met-name-setter", PVAR, NULL},
  {"%define-structure-accessors", PVAR, NULL},
  {"%flo", PVAR, NULL},
  {"@class-direct-props", CVAR, &YOclass_direct_props},
  {"<mets>", CVAR, &YLmetsG},
  {"%str-eq?", PVAR, NULL},
  {"<met>", CVAR, &YLmetG},
  {"<flat>", CVAR, &YLflatG},
  {"%tag-bits", PVAR, NULL},
  {"%gen-cache-count", PVAR, NULL},
  {"%it/", PVAR, NULL},
  {"$num-int-bits", CVAR, &YDnum_int_bits},
  {"%prop-type", PVAR, NULL},
  {"%subclass", PVAR, NULL},
  {"%rep!", PVAR, NULL},
  {"%rep", PVAR, NULL},
  {"$nul-assocs", CVAR, &YDnul_assocs},
  {"%gen-mets", PVAR, NULL},
  {"%sig", PVAR, NULL},
  {"fun-mets", CVAR, &Yfun_mets},
  {"%telt", PVAR, NULL},
  {"%binding-name", PVAR, NULL},
  {"fab-sym", CVAR, &Yfab_sym},
  {"%class-children", PVAR, NULL},
  {"gen-src", CVAR, &Ygen_src},
  {"%prop-elt", PVAR, NULL},
  {"fun-arity-setter", CVAR, &Yfun_arity_setter},
  {"@mets-specs-at", CVAR, &YOmets_specs_at},
  {"@fab", CVAR, &YOfab},
  {"%ready", PVAR, NULL},
  {"@all2?", CVAR, &YOall2Q},
  {"fun", PVAR, NULL},
  {"@lst-helper", CVAR, &YOlst_helper},
  {"tail-setter", CVAR, &Ytail_setter},
  {"%fab-code-refs", PVAR, NULL},
  {"%product-elts", PVAR, NULL},
  {"%fpow", PVAR, NULL},
  {"%newline", PVAR, NULL},
  {"set", PVAR, NULL},
  {"prop-offset", CVAR, &Yprop_offset},
  {"def-object-class-accessor", PVAR, NULL},
  {"@fun-arity", CVAR, &YOfun_arity},
  {"class-name-setter", CVAR, &Yclass_name_setter},
  {"%gen-cache-arg-pos", PVAR, NULL},
  {"<lst>", CVAR, &YLlstG},
  {"%rlen", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%vpc", NULL},
  {"clone", NULL},
  {"unexec", NULL},
  {"<fun>", NULL},
  {"%i^", NULL},
  {"esc", NULL},
  {"%i<", NULL},
  {"@oelt", NULL},
  {"no-applicable-methods-error", NULL},
  {"<seq!>", NULL},
  {"tail", NULL},
  {"%close-out-port", NULL},
  {"%i<<", NULL},
  {"%iu", NULL},
  {"%fsqrt", NULL},
  {"%vnm", NULL},
  {"fun-arity", NULL},
  {"class-name", NULL},
  {"$min-int", NULL},
  {"assert-error", NULL},
  {"use/mangle", NULL},
  {"class-ancestors", NULL},
  {"bound?", NULL},
  {"<seq.>", NULL},
  {"%bb", NULL},
  {"%fasin", NULL},
  {"internal-error", NULL},
  {"%@class-of", NULL},
  {"%peek", NULL},
  {"%lb", NULL},
  {"%get", NULL},
  {"try", NULL},
  {"%eq?", NULL},
  {"prop-setter", NULL},
  {"%raw", NULL},
  {"%i+", NULL},
  {"<seq>", NULL},
  {"%force-out", NULL},
  {"seq", NULL},
  {"handler-info-arguments", NULL},
  {"%class-of", NULL},
  {"arity-error", NULL},
  {"<col!>", NULL},
  {"ddv", NULL},
  {"%relt", NULL},
  {"%i=", NULL},
  {"%current-out-port", NULL},
  {"if", NULL},
  {"%f<", NULL},
  {"<sig>", NULL},
  {"%vfn", NULL},
  {"%file-mtime", NULL},
  {"%build-runtime-modules", NULL},
  {"%os-val-setter", NULL},
  {"object-parents", NULL},
  {"prop-value-setter", NULL},
  {"file-opening-error", NULL},
  {"%tup", NULL},
  {"<col.>", NULL},
  {"%app-args", NULL},
  {"%vm-box-fab", NULL},
  {"%selt", NULL},
  {"use/library", NULL},
  {"%vnm-setter", NULL},
  {"product-elts", NULL},
  {"incongruent-method-error", NULL},
  {"ds", NULL},
  {"prop-owner", NULL},
  {"<col>", NULL},
  {"type-object", NULL},
  {"*macros-ok?*", NULL},
  {"%gen-src", NULL},
  {"%pair", NULL},
  {"%vm-fun-env-elt", NULL},
  {"sig-nary?", NULL},
  {"%met", NULL},
  {"fin", NULL},
  {"<rep>", NULL},
  {"fun-sig-setter", NULL},
  {"%su", NULL},
  {"@==", NULL},
  {"object-props", NULL},
  {"new", NULL},
  {"%met-code", NULL},
  {"fun-nary?", NULL},
  {"%fsin", NULL},
  {"@not", NULL},
  {"%f+", NULL},
  {"gen-add-met", NULL},
  {"%f/", NULL},
  {"gen-refs-setter", NULL},
  {"<loc>", NULL},
  {"sig-unification-vars", NULL},
  {"%vm-box-val", NULL},
  {"fun-sig", NULL},
  {"%fi2f", NULL},
  {"fun-src", NULL},
  {"return-type-error", NULL},
  {"<flo>", NULL},
  {"%puts", NULL},
  {"gen-refs", NULL},
  {"find-setter", NULL},
  {"ct-also", NULL},
  {"$max-int", NULL},
  {"%f-", NULL},
  {"property-type-error", NULL},
  {"head-setter", NULL},
  {"syntax-error", NULL},
  {"%current-in-port", NULL},
  {"%selt-setter", NULL},
  {"%facos", NULL},
  {"%f=", NULL},
  {"def", NULL},
  {"nil", NULL},
  {"%i?", NULL},
  {"export", NULL},
  {"<prop>", NULL},
  {"<int>", NULL},
  {"mif", NULL},
  {"property-unbound-error", NULL},
  {"%loc-val", NULL},
  {"%vfp-setter", NULL},
  {"head", NULL},
  {"%i<<<", NULL},
  {"gen-src-setter", NULL},
  {"<num>", NULL},
  {"%vm-fun-env-elt-setter", NULL},
  {"%sb", NULL},
  {"*boot-macro-module-names*", NULL},
  {"%vm-with-cleanup", NULL},
  {"<product>", NULL},
  {"@+", NULL},
  {"%fcosh", NULL},
  {"no-next-methods-error", NULL},
  {"%untag", NULL},
  {"find-getter", NULL},
  {"%with-monitor", NULL},
  {"%cu", NULL},
  {"fun-specs", NULL},
  {"@subclass?", NULL},
  {"%i>>", NULL},
  {"not", NULL},
  {"<union>", NULL},
  {"%ft", NULL},
  {"<src-loc>", NULL},
  {"%vfn-setter", NULL},
  {"use", NULL},
  {"dss", NULL},
  {"%flog", NULL},
  {"%cb", NULL},
  {"may-isa?", NULL},
  {"class-children", NULL},
  {"%open-out-file", NULL},
  {"class-of", NULL},
  {"<simple-handler-info>", NULL},
  {"<chr>", NULL},
  {"@<", NULL},
  {"object-class", NULL},
  {"%time", NULL},
  {"<subclass>", NULL},
  {"%i*", NULL},
  {"@telt", NULL},
  {"argument-type-error", NULL},
  {"union-elts", NULL},
  {"<mag>", NULL},
  {"ord-app-mets", NULL},
  {"%i!", NULL},
  {"fab-class", NULL},
  {"arithmetic-error", NULL},
  {"%met-env-setter", NULL},
  {"%iv", NULL},
  {"%fb", NULL},
  {"%relt-setter", NULL},
  {"dp", NULL},
  {"%im", NULL},
  {"loc", NULL},
  {"<singleton>", NULL},
  {"as-error", NULL},
  {"<log>", NULL},
  {"sig-specs", NULL},
  {"%ftanh", NULL},
  {"prop-getter", NULL},
  {"%%sym", NULL},
  {"%gen-code-setter", NULL},
  {"df", NULL},
  {"t*", NULL},
  {"%flo-bits", NULL},
  {"prop-init", NULL},
  {"fun-refs-setter", NULL},
  {"rep", NULL},
  {"<any>", NULL},
  {"%dyn-var-val-setter", NULL},
  {"cpl-error", NULL},
  {"%sp-reg", NULL},
  {"@any?", NULL},
  {"error", NULL},
  {"sig-val", NULL},
  {"*restarts-ok?*", NULL},
  {"dg", NULL},
  {"%symbols", NULL},
  {"*report-prop-unbound-errors?*", NULL},
  {"$direct-object-class", NULL},
  {"%vpc-setter", NULL},
  {"fun-name", NULL},
  {"unknown-function-error", NULL},
  {"narity-error", NULL},
  {"fab-gen", NULL},
  {"fun-names", NULL},
  {"fun-refs", NULL},
  {"%prop", NULL},
  {"range-error", NULL},
  {"dc", NULL},
  {"fun-cache", NULL},
  {"quasiquote", NULL},
  {"%app-filename", NULL},
  {"%open-in-file", NULL},
  {"%os-name", NULL},
  {"fun-src-setter", NULL},
  {"%os-val", NULL},
  {"ambiguous-method-error", NULL},
  {"%file-type", NULL},
  {"%process-module", NULL},
  {"property-not-found-error", NULL},
  {"%put", NULL},
  {"prop-type", NULL},
  {"%vm-with-exit", NULL},
  {"sig-names", NULL},
  {"%check-call-types", NULL},
  {"<replace-generic-restart>", NULL},
  {"%next-methods", NULL},
  {"prop-bound?", NULL},
  {"%i>>>", NULL},
  {"@lst", NULL},
  {"<opts>", NULL},
  {"%c=", NULL},
  {"%ib", NULL},
  {"%do-stack-frames", NULL},
  {"%to-tup", NULL},
  {"quote", NULL},
  {"%gen-code", NULL},
  {"use/include", NULL},
  {"ct", NULL},
  {"%i&", NULL},
  {"%str", NULL},
  {"src-loc-file", NULL},
  {"%loc-val-setter", NULL},
  {"isa?", NULL},
  {"src-loc-line", NULL},
  {"sym-name", NULL},
  {"%rnul", NULL},
  {"class-direct-props", NULL},
  {"%lu", NULL},
  {"%define-method", NULL},
  {"%vm-fun-env-fab", NULL},
  {"type-error", NULL},
  {"class-parents", NULL},
  {"%ftan", NULL},
  {"use/export", NULL},
  {"%fsinh", NULL},
  {"fun-name-setter", NULL},
  {"class-props", NULL},
  {"%%macro", NULL},
  {"%fu", NULL},
  {"%invoke-debugger", NULL},
  {"@opts-as-lst", NULL},
  {"%loc-off-setter", NULL},
  {"%raw-met-call", NULL},
  {"met-app?", NULL},
  {"%ready?", NULL},
  {"<class>", NULL},
  {"%snul", NULL},
  {"lst", NULL},
  {"%fun-reg", NULL},
  {"%dispatch", NULL},
  {"%tlen", NULL},
  {"keyboard-interrupt", NULL},
  {"<type>", NULL},
  {"@len", NULL},
  {"%fatan", NULL},
  {"%eof-object", NULL},
  {"%fcos", NULL},
  {"<gen>", NULL},
  {"macro-expand", NULL},
  {"%telt-setter", NULL},
  {"%fatan2", NULL},
  {"%gen-refs", NULL},
  {"nul", NULL},
  {"add-prop", NULL},
  {"type-class", NULL},
  {"%c<", NULL},
  {"%fab-dyn-var", NULL},
  {"let", NULL},
  {"%allocate-stack", NULL},
  {"%vsp", NULL},
  {"*boot-macro-names*", NULL},
  {"%prop-unbound-error", NULL},
  {"prop-value", NULL},
  {"%unlink-stack", NULL},
  {"%f*", NULL},
  {"@isa?", NULL},
  {"%file-exists?", NULL},
  {"%create-directory", NULL},
  {"dm", NULL},
  {"%vm-box-val-setter", NULL},
  {"%slen", NULL},
  {"<str>", NULL},
  {"%src-loc", NULL},
  {"sig-arity", NULL},
  {"fun-val", NULL},
  {"%loc-off", NULL},
  {"*boot-macro-expanders*", NULL},
  {"handler-info-message", NULL},
  {"%i-", NULL},
  {"%dyn-var-val", NULL},
  {"subtype?", NULL},
  {"%tnul", NULL},
  {"dv", NULL},
  {"stack-overflow-error", NULL},
  {"<fixnum>", NULL},
  {"<sym>", NULL},
  {"%vsp-setter", NULL},
  {"<tup>", NULL},
  {"dl", NULL},
  {"%vfp", NULL},
  {"tup", NULL},
  {"%close-in-port", NULL},
  {"%raw-call", NULL},
  {"%telt", NULL},
  {"@tlen", NULL},
  {"<met>", NULL},
  {"<flat>", NULL},
  {"%it/", NULL},
  {"%rep", NULL},
  {"fun-mets", NULL},
  {"@olen", NULL},
  {"%binding-name", NULL},
  {"fab-sym", NULL},
  {"gen-src", NULL},
  {"%sp-reg-setter", NULL},
  {"@all2?", NULL},
  {"fun", NULL},
  {"%@subclass?", NULL},
  {"tail-setter", NULL},
  {"%fpow", NULL},
  {"set", NULL},
  {"<lst>", NULL},
  {"%rlen", NULL},
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
