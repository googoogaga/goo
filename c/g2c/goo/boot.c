/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/boot");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/boot */

DEF(YOunion_specQ,"goo/boot","@union-spec?");
DEF(Yclass_parents_setter,"goo/boot","class-parents-setter");
DEF(Ytype_object,"goo/boot","type-object");
DEF(Ysrc_loc_line_setter,"goo/boot","src-loc-line-setter");
DEF(YLsymG,"goo/boot","<sym>");
DEF(Ysig_specs_setter,"goo/boot","sig-specs-setter");
DEF(Yforward_class,"goo/boot","forward-class");
DEF(Yarity_error,"goo/boot","arity-error");
DEF(YPcollect_direct_props,"goo/boot","%collect-direct-props");
DEF(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(Yprop_type_setter,"goo/boot","prop-type-setter");
DEF(Yobject_parents,"goo/boot","object-parents");
DEF(Yfun_specs_setter,"goo/boot","fun-specs-setter");
DEF(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YOdo,"goo/boot","@do");
DEF(Yfun_congruentQ,"goo/boot","fun-congruent?");
DEF(YOcat2,"goo/boot","@cat2");
DEF(Yclass_parents,"goo/boot","class-parents");
DEF(YDgen_cache_classes_offset,"goo/boot","$gen-cache-classes-offset");
DEF(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YPrnul,"goo/boot","%rnul");
DEF(Ysig_specs,"goo/boot","sig-specs");
DEF(YDgetter_not_found,"goo/boot","$getter-not-found");
DEF(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(YOsubclass_specQ,"goo/boot","@subclass-spec?");
DEF(Yprop_type,"goo/boot","prop-type");
DEF(Yord_app_metsT,"goo/boot","ord-app-mets*");
DEF(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(Yobject_props,"goo/boot","object-props");
DEF(Ymay_isaQ,"goo/boot","may-isa?");
DEF(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(Yensure_singleton_cache,"goo/boot","ensure-singleton-cache");
DEF(Yfun_specs,"goo/boot","fun-specs");
DEF(YDgen_cache_singletons_offset,"goo/boot","$gen-cache-singletons-offset");
DEF(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YLmetG,"goo/boot","<met>");
DEF(Yproduct_elts_setter,"goo/boot","product-elts-setter");
DEF(Ysyntax_error,"goo/boot","syntax-error");
DEF(Yfun_sig,"goo/boot","fun-sig");
DEF(YOtall2Q,"goo/boot","@tall2?");
DEF(YOcache_add,"goo/boot","@cache-add");
DEF(YOrev,"goo/boot","@rev");
DEF(YOsingleton_specQ,"goo/boot","@singleton-spec?");
DEF(Ytail_setter,"goo/boot","tail-setter");
DEF(Yclass_forward,"goo/boot","class-forward");
DEF(Yfun_same_metQ,"goo/boot","fun-same-met?");
DEF(Yunexec,"goo/boot","unexec");
DEF(Yfind_setter,"goo/boot","find-setter");
DEF(Ygen_src,"goo/boot","gen-src");
DEF(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(YPfalse,"goo/boot","%false");
DEF(Ynil,"goo/boot","nil");
DEF(YOall2Q,"goo/boot","@all2?");
DEF(Yfun_name,"goo/boot","fun-name");
DEF(YDmax_classes,"goo/boot","$max-classes");
DEF(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YDmissed_dispatch,"goo/boot","$missed-dispatch");
DEF(YLstrG,"goo/boot","<str>");
DEF(YOfun_mets,"goo/boot","@fun-mets");
DEF(Ytail,"goo/boot","tail");
DEF(YLfunG,"goo/boot","<fun>");
DEF(Yclass_ordered_ancestors,"goo/boot","class-ordered-ancestors");
DEF(Yrequires_singleton_prec,"goo/boot","requires-singleton-prec");
DEF(Yfun_names_setter,"goo/boot","fun-names-setter");
DEF(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(YOpick,"goo/boot","@pick");
DEF(YOclassL,"goo/boot","@class<");
DEF(YLtupG,"goo/boot","<tup>");
DEF(Yclass_props,"goo/boot","class-props");
DEF(YDmax_int,"goo/boot","$max-int");
DEF(Yrefab_class,"goo/boot","refab-class");
DEF(YPadd_prop,"goo/boot","%add-prop");
DEF(Ysig_val,"goo/boot","sig-val");
DEF(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(Yfab_sym,"goo/boot","fab-sym");
DEF(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(Yclass_of,"goo/boot","class-of");
DEF(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(Yfun_spec,"goo/boot","fun-spec");
DEF(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YPdefine_method,"goo/boot","%define-method");
DEF(YLflatG,"goo/boot","<flat>");
DEF(Yclass_row_setter,"goo/boot","class-row-setter");
DEF(YOclass_ancestors,"goo/boot","@class-ancestors");
DEF(YOtanyQ,"goo/boot","@tany?");
DEF(Yfun_names,"goo/boot","fun-names");
DEF(YOmets_subclasses_at,"goo/boot","@mets-subclasses-at");
DEF(YOisaQ,"goo/boot","@isa?");
DEF(YLparentsG,"goo/boot","<parents>");
DEF(Ymethod_accessor_offset,"goo/boot","method-accessor-offset");
DEF(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(Yopts_tup_storage_setter,"goo/boot","opts-tup-storage-setter");
DEF(YDmin_int,"goo/boot","$min-int");
DEF(Ygen_cache_arg_pos_setter,"goo/boot","gen-cache-arg-pos-setter");
DEF(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(Yfun_code_setter,"goo/boot","fun-code-setter");
DEF(Yprop_setter_setter,"goo/boot","prop-setter-setter");
DEF(Yfind_getter,"goo/boot","find-getter");
DEF(Yfun_src,"goo/boot","fun-src");
DEF(YPtrue,"goo/boot","%true");
DEF(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(Yensure_fresh_object,"goo/boot","ensure-fresh-object");
DEF(Yclass_name_setter,"goo/boot","class-name-setter");
DEF(Yclass_row,"goo/boot","class-row");
DEF(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YOlst,"goo/boot","@lst");
DEF(Ysig_names_setter,"goo/boot","sig-names-setter");
DEF(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(YLlstG,"goo/boot","<lst>");
DEF(Yopts_tup_storage,"goo/boot","opts-tup-storage");
DEF(YLsigG,"goo/boot","<sig>");
DEF(Yobject_class,"goo/boot","object-class");
DEF(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
DEF(Yprop_setter,"goo/boot","prop-setter");
DEF(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YOfun_mets_setter,"goo/boot","@fun-mets-setter");
DEF(Ygen_from_met,"goo/boot","gen-from-met");
DEF(Ypatch_early_classes,"goo/boot","patch-early-classes");
DEF(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YLseqXG,"goo/boot","<seq!>");
DEF(Yclass_name,"goo/boot","class-name");
DEF(YLenvG,"goo/boot","<env>");
DEF(Yfab_class,"goo/boot","fab-class");
DEF(Yerror,"goo/boot","error");
DEF(YOspecd_args,"goo/boot","@specd-args");
DEF(YPpatch_early_generic,"goo/boot","%patch-early-generic");
DEF(Ysig_names,"goo/boot","sig-names");
DEF(YOgen_cache_classes_setter,"goo/boot","@gen-cache-classes-setter");
DEF(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YLseqIG,"goo/boot","<seq.>");
DEF(YPadd_met,"goo/boot","%add-met");
DEF(Yclass_mets_setter,"goo/boot","class-mets-setter");
DEF(Ytup,"goo/boot","tup");
DEF(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(YPsymbols_readyQ,"goo/boot","%symbols-ready?");
DEF(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(YPdispatch,"goo/boot","%dispatch");
DEF(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YLseqG,"goo/boot","<seq>");
DEF(Yunion_elts_setter,"goo/boot","union-elts-setter");
DEF(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(Yfun_unification_vars_setter,"goo/boot","fun-unification-vars-setter");
DEF(Yproduct_elts,"goo/boot","product-elts");
DEF(YOtype_equalQ,"goo/boot","@type-equal?");
DEF(YOmets_singletons_at,"goo/boot","@mets-singletons-at");
DEF(YOgen_cache_classes,"goo/boot","@gen-cache-classes");
DEF(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(YOmap,"goo/boot","@map");
DEF(YOallQ,"goo/boot","@all?");
DEF(Yhead_setter,"goo/boot","head-setter");
DEF(Yclass_mets,"goo/boot","class-mets");
DEF(YLcolXG,"goo/boot","<col!>");
DEF(Ylst,"goo/boot","lst");
DEF(Ygen_cache_missableQ_setter,"goo/boot","gen-cache-missable?-setter");
DEF(YisaQ,"goo/boot","isa?");
DEF(Ygen_refs,"goo/boot","gen-refs");
DEF(YPsymbols,"goo/boot","%symbols");
DEF(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
DEF(Yunion_elts,"goo/boot","union-elts");
DEF(YTearly_classesT,"goo/boot","*early-classes*");
DEF(YPearly_dispatch,"goo/boot","%early-dispatch");
DEF(Ynew,"goo/boot","new");
DEF(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(YPTstart_running_atT,"goo/boot","%*start-running-at*");
DEF(YPPmacro,"goo/boot","%%macro");
DEF(YLcolIG,"goo/boot","<col.>");
DEF(Yorder_specs,"goo/boot","order-specs");
DEF(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(Yhead,"goo/boot","head");
DEF(Yfun_unification_vars,"goo/boot","fun-unification-vars");
DEF(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YOrevX,"goo/boot","@rev!");
DEF(Ynarity_error,"goo/boot","narity-error");
DEF(Ychoose_methods,"goo/boot","choose-methods");
DEF(YLcolG,"goo/boot","<col>");
DEF(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(Ysig_arity,"goo/boot","sig-arity");
DEF(YLmetsG,"goo/boot","<mets>");
DEF(YPTused_symbols_too_earlyT,"goo/boot","%*used-symbols-too-early*");
DEF(YOgen_cache_singletons_setter,"goo/boot","@gen-cache-singletons-setter");
DEF(YLpropG,"goo/boot","<prop>");
DEF(Yfun_refs_setter,"goo/boot","fun-refs-setter");
DEF(YOfun_val,"goo/boot","@fun-val");
DEF(YOlst_helper,"goo/boot","@lst-helper");
DEF(YLrepG,"goo/boot","<rep>");
DEF(Yclass_id_setter,"goo/boot","class-id-setter");
DEF(Yinit_class,"goo/boot","init-class");
DEF(YOmets_specs_at,"goo/boot","@mets-specs-at");
DEF(YTnext_class_idT,"goo/boot","*next-class-id*");
DEF(YOanyQ,"goo/boot","@any?");
DEF(Ynul_prop,"goo/boot","nul-prop");
DEF(Yopts_count_setter,"goo/boot","opts-count-setter");
DEF(YOOemptyQ,"goo/boot","@@empty?");
DEF(Yas_error,"goo/boot","as-error");
DEF(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YLlocG,"goo/boot","<loc>");
DEF(Yprop_getter_setter,"goo/boot","prop-getter-setter");
DEF(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(YLproductG,"goo/boot","<product>");
DEF(Yfun_refs,"goo/boot","fun-refs");
DEF(Yfun_val_setter,"goo/boot","fun-val-setter");
DEF(YOgen_cache_singletons,"goo/boot","@gen-cache-singletons");
DEF(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DEF(Yclass_id,"goo/boot","class-id");
DEF(YOfun_arity,"goo/boot","@fun-arity");
DEF(Yarithmetic_error,"goo/boot","arithmetic-error");
DEF(Ygen_cache_classes_setter,"goo/boot","gen-cache-classes-setter");
DEF(YLfloG,"goo/boot","<flo>");
DEF(Yrange_error,"goo/boot","range-error");
DEF(Yopts_count,"goo/boot","opts-count");
DEF(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(Ydel_class,"goo/boot","del-class");
DEF(YOfab,"goo/boot","@fab");
DEF(Yprop_getter,"goo/boot","prop-getter");
DEF(Ynot,"goo/boot","not");
DEF(Yfab_gen,"goo/boot","fab-gen");
DEF(YLunionG,"goo/boot","<union>");
DEF(Ynul,"goo/boot","nul");
DEF(Yinternal_error,"goo/boot","internal-error");
DEF(YPprop,"goo/boot","%prop");
DEF(YLfixnumG,"goo/boot","<fixnum>");
DEF(Yclass_prop_len,"goo/boot","class-prop-len");
DEF(Ygen_lookup_miss,"goo/boot","gen-lookup-miss");
DEF(YOclass_direct_props,"goo/boot","@class-direct-props");
DEF(Yclass_ordered_props,"goo/boot","class-ordered-props");
DEF(Yprop_offset,"goo/boot","prop-offset");
DEF(Yfun_val,"goo/boot","fun-val");
DEF(Ygen_cache_classes,"goo/boot","gen-cache-classes");
DEF(Ymet_appQ,"goo/boot","met-app?");
DEF(YOprune_mets_by_type_at,"goo/boot","@prune-mets-by-type-at");
DEF(YOfun_naryQ,"goo/boot","@fun-nary?");
DEF(Yorder_mets,"goo/boot","order-mets");
DEF(YLintG,"goo/boot","<int>");
DEF(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(Yprop_value,"goo/boot","prop-value");
DEF(YOfun_unification_vars,"goo/boot","@fun-unification-vars");
DEF(YLsubclassG,"goo/boot","<subclass>");
DEF(Yfun_code,"goo/boot","fun-code");
DEF(Yclass_gens_setter,"goo/boot","class-gens-setter");
DEF(YOorder_specs_class,"goo/boot","@order-specs-class");
DEF(YOorder_specs,"goo/boot","@order-specs");
DEF(YOgen_cache_arg_pos_setter,"goo/boot","@gen-cache-arg-pos-setter");
DEF(Yfun_cache_setter,"goo/boot","fun-cache-setter");
DEF(YsubtypeQ,"goo/boot","subtype?");
DEF(YOdel_dups,"goo/boot","@del-dups");
DEF(YPsnul,"goo/boot","%snul");
DEF(YLnumG,"goo/boot","<num>");
DEF(YOfold,"goo/boot","@fold");
DEF(Ytype_class_setter,"goo/boot","type-class-setter");
DEF(YOfill,"goo/boot","@fill");
DEF(Ytype_error,"goo/boot","type-error");
DEF(YOOEE,"goo/boot","@@==");
DEF(Ysrc_loc_file_setter,"goo/boot","src-loc-file-setter");
DEF(YLsingletonG,"goo/boot","<singleton>");
DEF(Yclass_gens,"goo/boot","class-gens");
DEF(YOfun_specs,"goo/boot","@fun-specs");
DEF(Yfinalize_props,"goo/boot","finalize-props");
DEF(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(Yfun_cache,"goo/boot","fun-cache");
DEF(Yfun_arity_setter,"goo/boot","fun-arity-setter");
DEF(YOgen_cache_arg_pos,"goo/boot","@gen-cache-arg-pos");
DEF(Ytype_class,"goo/boot","type-class");
DEF(YPprop_offset,"goo/boot","%prop-offset");
DEF(Yprop_owner_setter,"goo/boot","prop-owner-setter");
DEF(YLsrc_locG,"goo/boot","<src-loc>");
DEF(Yprop_init_setter,"goo/boot","prop-init-setter");
DEF(YOsubtypeQ,"goo/boot","@subtype?");
DEF(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(Yadd_prop,"goo/boot","add-prop");
DEF(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YOfun_names,"goo/boot","@fun-names");
DEF(YLbodyG,"goo/boot","<body>");
DEF(YLchrG,"goo/boot","<chr>");
DEF(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YLopts_tupG,"goo/boot","<opts-tup>");
DEF(YPtnul,"goo/boot","%tnul");
DEF(Yfun_arity,"goo/boot","fun-arity");
DEF(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(Ymet_app_unify,"goo/boot","met-app-unify");
DEF(Yprop_init,"goo/boot","prop-init");
DEF(Yfun_env_setter,"goo/boot","fun-env-setter");
DEF(YOmemQ,"goo/boot","@mem?");
DEF(YLmagG,"goo/boot","<mag>");
DEF(Yassert_error,"goo/boot","assert-error");
DEF(Yclass_type_cache_setter,"goo/boot","class-type-cache-setter");
DEF(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YOtup,"goo/boot","@tup");
DEF(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(Yopts_location_setter,"goo/boot","opts-location-setter");
DEF(YLlogG,"goo/boot","<log>");
DEF(YLoptsG,"goo/boot","<opts>");
DEF(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(Yfun_env,"goo/boot","fun-env");
DEF(Ygen_lookup_miss_1,"goo/boot","gen-lookup-miss-1");
DEF(Yone_nil,"goo/boot","one-nil");
DEF(Ysym_name_setter,"goo/boot","sym-name-setter");
DEF(Yord_app_mets_1,"goo/boot","ord-app-mets-1");
DEF(Yclass_type_cache,"goo/boot","class-type-cache");
DEF(YOdo_descendents,"goo/boot","@do-descendents");
DEF(Ygen_cache_singletons_setter,"goo/boot","gen-cache-singletons-setter");
DEF(YLanyG,"goo/boot","<any>");
DEF(Yopts_location,"goo/boot","opts-location");
DEF(YOnew,"goo/boot","@new");
DEF(Yfun_naryQ_setter,"goo/boot","fun-nary?-setter");
DEF(YDnul_assocs,"goo/boot","$nul-assocs");
DEF(YOmets_unspecialized_atQ,"goo/boot","@mets-unspecialized-at?");
DEF(Yprop_owner,"goo/boot","prop-owner");
DEF(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(YLspecsG,"goo/boot","<specs>");
DEF(YDnum_int_bits,"goo/boot","$num-int-bits");
DEF(Ysym_name,"goo/boot","sym-name");
DEF(Ycpl_error,"goo/boot","cpl-error");
DEF(Ygen_lookup_miss_1_using,"goo/boot","gen-lookup-miss-1-using");
DEF(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(YOalter,"goo/boot","@alter");
DEF(YOelt,"goo/boot","@elt");
DEF(Yclone,"goo/boot","clone");
DEF(YLclassG,"goo/boot","<class>");
DEF(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(Yclass_children_setter,"goo/boot","class-children-setter");
DEF(YOprecise_specQ,"goo/boot","@precise-spec?");
DEF(YtT,"goo/boot","t*");
DEF(Yfun_mets_setter,"goo/boot","fun-mets-setter");
DEF(YOfind,"goo/boot","@find");
DEF(YPfinalize_propsX,"goo/boot","%finalize-props!");
DEF(Ytype_object_setter,"goo/boot","type-object-setter");
DEF(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(YLtypeG,"goo/boot","<type>");
DEF(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(YPclasses_readyQ,"goo/boot","%classes-ready?");
DEF(YLgenG,"goo/boot","<gen>");
DEF(Yclass_children,"goo/boot","class-children");
DEF(YLpropsG,"goo/boot","<props>");
DEF(Yfun_mets,"goo/boot","fun-mets");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_417);
DEFLIT(lit_379);
DEFLIT(lit_550);
DEFLIT(lit_489);
DEFLIT(lit_60);
DEFLIT(lit_478);
DEFLIT(lit_112);
DEFLIT(lit_538);
DEFLIT(lit_604);
DEFLIT(lit_25);
DEFLIT(lit_299);
DEFLIT(lit_583);
DEFLIT(lit_186);
DEFLIT(lit_614);
DEFLIT(lit_274);
DEFLIT(lit_150);
DEFLIT(lit_592);
DEFLIT(lit_428);
DEFLIT(lit_337);
DEFLIT(lit_173);
DEFLIT(lit_539);
DEFLIT(lit_588);
DEFLIT(lit_562);
DEFLIT(lit_105);
DEFLIT(lit_345);
DEFLIT(lit_652);
DEFLIT(lit_202);
DEFLIT(lit_121);
DEFLIT(lit_673);
DEFLIT(lit_92);
DEFLIT(lit_472);
DEFLIT(lit_94);
DEFLIT(lit_9);
DEFLIT(lit_258);
DEFLIT(lit_668);
DEFLIT(lit_159);
DEFLIT(lit_58);
DEFLIT(lit_44);
DEFLIT(lit_129);
DEFLIT(lit_412);
DEFLIT(lit_399);
DEFLIT(lit_23);
DEFLIT(lit_672);
DEFLIT(lit_488);
DEFLIT(lit_678);
DEFLIT(lit_184);
DEFLIT(lit_468);
DEFLIT(lit_563);
DEFLIT(lit_148);
DEFLIT(lit_406);
DEFLIT(lit_7);
DEFLIT(lit_501);
DEFLIT(lit_638);
DEFLIT(lit_221);
DEFLIT(lit_122);
DEFLIT(lit_479);
DEFLIT(lit_649);
DEFLIT(lit_426);
DEFLIT(lit_26);
DEFLIT(lit_95);
DEFLIT(lit_384);
DEFLIT(lit_520);
DEFLIT(lit_537);
DEFLIT(lit_1);
DEFLIT(lit_544);
DEFLIT(lit_109);
DEFLIT(lit_161);
DEFLIT(lit_454);
DEFLIT(lit_682);
DEFLIT(lit_611);
DEFLIT(lit_277);
DEFLIT(lit_256);
DEFLIT(lit_310);
DEFLIT(lit_627);
DEFLIT(lit_424);
DEFLIT(lit_107);
DEFLIT(lit_203);
DEFLIT(lit_504);
DEFLIT(lit_620);
DEFLIT(lit_195);
DEFLIT(lit_622);
DEFLIT(lit_315);
DEFLIT(lit_219);
DEFLIT(lit_616);
DEFLIT(lit_273);
DEFLIT(lit_360);
DEFLIT(lit_546);
DEFLIT(lit_485);
DEFLIT(lit_160);
DEFLIT(lit_257);
DEFLIT(lit_79);
DEFLIT(lit_585);
DEFLIT(lit_93);
DEFLIT(lit_39);
DEFLIT(lit_17);
DEFLIT(lit_29);
DEFLIT(lit_42);
DEFLIT(lit_210);
DEFLIT(lit_69);
DEFLIT(lit_141);
DEFLIT(lit_445);
DEFLIT(lit_254);
DEFLIT(lit_158);
DEFLIT(lit_270);
DEFLIT(lit_590);
DEFLIT(lit_621);
DEFLIT(lit_75);
DEFLIT(lit_526);
DEFLIT(lit_128);
DEFLIT(lit_142);
DEFLIT(lit_326);
DEFLIT(lit_408);
DEFLIT(lit_685);
DEFLIT(lit_201);
DEFLIT(lit_46);
DEFLIT(lit_207);
DEFLIT(lit_298);
DEFLIT(lit_38);
DEFLIT(lit_610);
DEFLIT(lit_309);
DEFLIT(lit_333);
DEFLIT(lit_534);
DEFLIT(lit_518);
DEFLIT(lit_535);
DEFLIT(lit_689);
DEFLIT(lit_664);
DEFLIT(lit_164);
DEFLIT(lit_342);
DEFLIT(lit_503);
DEFLIT(lit_463);
DEFLIT(lit_240);
DEFLIT(lit_101);
DEFLIT(lit_568);
DEFLIT(lit_218);
DEFLIT(lit_27);
DEFLIT(lit_487);
DEFLIT(lit_395);
DEFLIT(lit_297);
DEFLIT(lit_149);
DEFLIT(lit_423);
DEFLIT(lit_62);
DEFLIT(lit_362);
DEFLIT(lit_359);
DEFLIT(lit_281);
DEFLIT(lit_199);
DEFLIT(lit_416);
DEFLIT(lit_462);
DEFLIT(lit_383);
DEFLIT(lit_351);
DEFLIT(lit_623);
DEFLIT(lit_474);
DEFLIT(lit_10);
DEFLIT(lit_4);
DEFLIT(lit_180);
DEFLIT(lit_236);
DEFLIT(lit_636);
DEFLIT(lit_519);
DEFLIT(lit_296);
DEFLIT(lit_197);
DEFLIT(lit_357);
DEFLIT(lit_557);
DEFLIT(lit_250);
DEFLIT(lit_317);
DEFLIT(lit_110);
DEFLIT(lit_349);
DEFLIT(lit_559);
DEFLIT(lit_566);
DEFLIT(lit_82);
DEFLIT(lit_264);
DEFLIT(lit_505);
DEFLIT(lit_289);
DEFLIT(lit_400);
DEFLIT(lit_483);
DEFLIT(lit_271);
DEFLIT(lit_14);
DEFLIT(lit_410);
DEFLIT(lit_637);
DEFLIT(lit_3);
DEFLIT(lit_263);
DEFLIT(lit_319);
DEFLIT(lit_267);
DEFLIT(lit_191);
DEFLIT(lit_663);
DEFLIT(lit_358);
DEFLIT(lit_145);
DEFLIT(lit_641);
DEFLIT(lit_608);
DEFLIT(lit_431);
DEFLIT(lit_444);
DEFLIT(lit_450);
DEFLIT(lit_234);
DEFLIT(lit_37);
DEFLIT(lit_461);
DEFLIT(lit_113);
DEFLIT(lit_494);
DEFLIT(lit_140);
DEFLIT(lit_635);
DEFLIT(lit_654);
DEFLIT(lit_55);
DEFLIT(lit_15);
DEFLIT(lit_324);
DEFLIT(lit_108);
DEFLIT(lit_247);
DEFLIT(lit_486);
DEFLIT(lit_343);
DEFLIT(lit_378);
DEFLIT(lit_181);
DEFLIT(lit_541);
DEFLIT(lit_295);
DEFLIT(lit_124);
DEFLIT(lit_222);
DEFLIT(lit_269);
DEFLIT(lit_511);
DEFLIT(lit_390);
DEFLIT(lit_662);
DEFLIT(lit_308);
DEFLIT(lit_19);
DEFLIT(lit_21);
DEFLIT(lit_48);
DEFLIT(lit_192);
DEFLIT(lit_143);
DEFLIT(lit_73);
DEFLIT(lit_451);
DEFLIT(lit_237);
DEFLIT(lit_629);
DEFLIT(lit_216);
DEFLIT(lit_404);
DEFLIT(lit_466);
DEFLIT(lit_633);
DEFLIT(lit_630);
DEFLIT(lit_341);
DEFLIT(lit_491);
DEFLIT(lit_294);
DEFLIT(lit_53);
DEFLIT(lit_574);
DEFLIT(lit_437);
DEFLIT(lit_381);
DEFLIT(lit_52);
DEFLIT(lit_515);
DEFLIT(lit_104);
DEFLIT(lit_596);
DEFLIT(lit_179);
DEFLIT(lit_669);
DEFLIT(lit_481);
DEFLIT(lit_340);
DEFLIT(lit_558);
DEFLIT(lit_536);
DEFLIT(lit_369);
DEFLIT(lit_220);
DEFLIT(lit_513);
DEFLIT(lit_89);
DEFLIT(lit_376);
DEFLIT(lit_430);
DEFLIT(lit_67);
DEFLIT(lit_293);
DEFLIT(lit_331);
DEFLIT(lit_102);
DEFLIT(lit_442);
DEFLIT(lit_72);
DEFLIT(lit_54);
DEFLIT(lit_666);
DEFLIT(lit_117);
DEFLIT(lit_214);
DEFLIT(lit_90);
DEFLIT(lit_625);
DEFLIT(lit_476);
DEFLIT(lit_166);
DEFLIT(lit_251);
DEFLIT(lit_137);
DEFLIT(lit_245);
DEFLIT(lit_36);
DEFLIT(lit_392);
DEFLIT(lit_529);
DEFLIT(lit_656);
DEFLIT(lit_493);
DEFLIT(lit_136);
DEFLIT(lit_292);
DEFLIT(lit_193);
DEFLIT(lit_497);
DEFLIT(lit_125);
DEFLIT(lit_325);
DEFLIT(lit_307);
DEFLIT(lit_555);
DEFLIT(lit_507);
DEFLIT(lit_432);
DEFLIT(lit_502);
DEFLIT(lit_154);
DEFLIT(lit_509);
DEFLIT(lit_213);
DEFLIT(lit_96);
DEFLIT(lit_500);
DEFLIT(lit_322);
DEFLIT(lit_35);
DEFLIT(lit_372);
DEFLIT(lit_175);
DEFLIT(lit_88);
DEFLIT(lit_144);
DEFLIT(lit_639);
DEFLIT(lit_429);
DEFLIT(lit_291);
DEFLIT(lit_167);
DEFLIT(lit_433);
DEFLIT(lit_440);
DEFLIT(lit_532);
DEFLIT(lit_87);
DEFLIT(lit_249);
DEFLIT(lit_615);
DEFLIT(lit_375);
DEFLIT(lit_490);
DEFLIT(lit_470);
DEFLIT(lit_522);
DEFLIT(lit_328);
DEFLIT(lit_70);
DEFLIT(lit_377);
DEFLIT(lit_123);
DEFLIT(lit_427);
DEFLIT(lit_2);
DEFLIT(lit_498);
DEFLIT(lit_16);
DEFLIT(lit_168);
DEFLIT(lit_196);
DEFLIT(lit_435);
DEFLIT(lit_632);
DEFLIT(lit_290);
DEFLIT(lit_582);
DEFLIT(lit_647);
DEFLIT(lit_33);
DEFLIT(lit_495);
DEFLIT(lit_553);
DEFLIT(lit_548);
DEFLIT(lit_56);
DEFLIT(lit_675);
DEFLIT(lit_631);
DEFLIT(lit_41);
DEFLIT(lit_59);
DEFLIT(lit_320);
DEFLIT(lit_61);
DEFLIT(lit_453);
DEFLIT(lit_157);
DEFLIT(lit_97);
DEFLIT(lit_68);
DEFLIT(lit_570);
DEFLIT(lit_215);
DEFLIT(lit_443);
DEFLIT(lit_40);
DEFLIT(lit_334);
DEFLIT(lit_225);
DEFLIT(lit_648);
DEFLIT(lit_187);
DEFLIT(lit_194);
DEFLIT(lit_242);
DEFLIT(lit_521);
DEFLIT(lit_188);
DEFLIT(lit_262);
DEFLIT(lit_477);
DEFLIT(lit_626);
DEFLIT(lit_306);
DEFLIT(lit_231);
DEFLIT(lit_374);
DEFLIT(lit_74);
DEFLIT(lit_288);
DEFLIT(lit_370);
DEFLIT(lit_119);
DEFLIT(lit_364);
DEFLIT(lit_581);
DEFLIT(lit_223);
DEFLIT(lit_499);
DEFLIT(lit_354);
DEFLIT(lit_8);
DEFLIT(lit_335);
DEFLIT(lit_266);
DEFLIT(lit_318);
DEFLIT(lit_248);
DEFLIT(lit_579);
DEFLIT(lit_24);
DEFLIT(lit_64);
DEFLIT(lit_382);
DEFLIT(lit_336);
DEFLIT(lit_287);
DEFLIT(lit_670);
DEFLIT(lit_603);
DEFLIT(lit_71);
DEFLIT(lit_418);
DEFLIT(lit_57);
DEFLIT(lit_305);
DEFLIT(lit_229);
DEFLIT(lit_447);
DEFLIT(lit_434);
DEFLIT(lit_475);
DEFLIT(lit_419);
DEFLIT(lit_50);
DEFLIT(lit_660);
DEFLIT(lit_407);
DEFLIT(lit_232);
DEFLIT(lit_409);
DEFLIT(lit_540);
DEFLIT(lit_396);
DEFLIT(lit_411);
DEFLIT(lit_34);
DEFLIT(lit_564);
DEFLIT(lit_176);
DEFLIT(lit_286);
DEFLIT(lit_516);
DEFLIT(lit_361);
DEFLIT(lit_366);
DEFLIT(lit_642);
DEFLIT(lit_576);
DEFLIT(lit_572);
DEFLIT(lit_389);
DEFLIT(lit_86);
DEFLIT(lit_525);
DEFLIT(lit_601);
DEFLIT(lit_352);
DEFLIT(lit_138);
DEFLIT(lit_524);
DEFLIT(lit_204);
DEFLIT(lit_413);
DEFLIT(lit_316);
DEFLIT(lit_473);
DEFLIT(lit_211);
DEFLIT(lit_344);
DEFLIT(lit_560);
DEFLIT(lit_132);
DEFLIT(lit_111);
DEFLIT(lit_575);
DEFLIT(lit_285);
DEFLIT(lit_523);
DEFLIT(lit_131);
DEFLIT(lit_527);
DEFLIT(lit_492);
DEFLIT(lit_130);
DEFLIT(lit_371);
DEFLIT(lit_549);
DEFLIT(lit_605);
DEFLIT(lit_12);
DEFLIT(lit_174);
DEFLIT(lit_452);
DEFLIT(lit_609);
DEFLIT(lit_458);
DEFLIT(lit_420);
DEFLIT(lit_688);
DEFLIT(lit_508);
DEFLIT(lit_394);
DEFLIT(lit_530);
DEFLIT(lit_278);
DEFLIT(lit_415);
DEFLIT(lit_467);
DEFLIT(lit_606);
DEFLIT(lit_284);
DEFLIT(lit_162);
DEFLIT(lit_363);
DEFLIT(lit_217);
DEFLIT(lit_380);
DEFLIT(lit_327);
DEFLIT(lit_209);
DEFLIT(lit_85);
DEFLIT(lit_139);
DEFLIT(lit_687);
DEFLIT(lit_681);
DEFLIT(lit_436);
DEFLIT(lit_514);
DEFLIT(lit_455);
DEFLIT(lit_246);
DEFLIT(lit_646);
DEFLIT(lit_676);
DEFLIT(lit_528);
DEFLIT(lit_279);
DEFLIT(lit_304);
DEFLIT(lit_283);
DEFLIT(lit_680);
DEFLIT(lit_356);
DEFLIT(lit_120);
DEFLIT(lit_441);
DEFLIT(lit_346);
DEFLIT(lit_578);
DEFLIT(lit_114);
DEFLIT(lit_275);
DEFLIT(lit_303);
DEFLIT(lit_152);
DEFLIT(lit_332);
DEFLIT(lit_314);
DEFLIT(lit_30);
DEFLIT(lit_198);
DEFLIT(lit_302);
DEFLIT(lit_83);
DEFLIT(lit_212);
DEFLIT(lit_98);
DEFLIT(lit_347);
DEFLIT(lit_18);
DEFLIT(lit_599);
DEFLIT(lit_151);
DEFLIT(lit_244);
DEFLIT(lit_183);
DEFLIT(lit_547);
DEFLIT(lit_580);
DEFLIT(lit_32);
DEFLIT(lit_496);
DEFLIT(lit_65);
DEFLIT(lit_471);
DEFLIT(lit_355);
DEFLIT(lit_118);
DEFLIT(lit_465);
DEFLIT(lit_260);
DEFLIT(lit_163);
DEFLIT(lit_446);
DEFLIT(lit_13);
DEFLIT(lit_182);
DEFLIT(lit_84);
DEFLIT(lit_667);
DEFLIT(lit_439);
DEFLIT(lit_556);
DEFLIT(lit_282);
DEFLIT(lit_155);
DEFLIT(lit_405);
DEFLIT(lit_460);
DEFLIT(lit_238);
DEFLIT(lit_28);
DEFLIT(lit_598);
DEFLIT(lit_5);
DEFLIT(lit_81);
DEFLIT(lit_665);
DEFLIT(lit_573);
DEFLIT(lit_691);
DEFLIT(lit_403);
DEFLIT(lit_684);
DEFLIT(lit_619);
DEFLIT(lit_77);
DEFLIT(lit_634);
DEFLIT(lit_339);
DEFLIT(lit_321);
DEFLIT(lit_484);
DEFLIT(lit_330);
DEFLIT(lit_612);
DEFLIT(lit_116);
DEFLIT(lit_146);
DEFLIT(lit_230);
DEFLIT(lit_438);
DEFLIT(lit_313);
DEFLIT(lit_591);
DEFLIT(lit_587);
DEFLIT(lit_545);
DEFLIT(lit_189);
DEFLIT(lit_628);
DEFLIT(lit_397);
DEFLIT(lit_350);
DEFLIT(lit_655);
DEFLIT(lit_153);
DEFLIT(lit_20);
DEFLIT(lit_398);
DEFLIT(lit_99);
DEFLIT(lit_228);
DEFLIT(lit_226);
DEFLIT(lit_368);
DEFLIT(lit_551);
DEFLIT(lit_683);
DEFLIT(lit_280);
DEFLIT(lit_126);
DEFLIT(lit_0);
DEFLIT(lit_100);
DEFLIT(lit_388);
DEFLIT(lit_255);
DEFLIT(lit_323);
DEFLIT(lit_253);
DEFLIT(lit_421);
DEFLIT(lit_469);
DEFLIT(lit_425);
DEFLIT(lit_261);
DEFLIT(lit_644);
DEFLIT(lit_686);
DEFLIT(lit_367);
DEFLIT(lit_205);
DEFLIT(lit_385);
DEFLIT(lit_135);
DEFLIT(lit_593);
DEFLIT(lit_565);
DEFLIT(lit_373);
DEFLIT(lit_312);
DEFLIT(lit_391);
DEFLIT(lit_47);
DEFLIT(lit_224);
DEFLIT(lit_134);
DEFLIT(lit_235);
DEFLIT(lit_127);
DEFLIT(lit_106);
DEFLIT(lit_554);
DEFLIT(lit_45);
DEFLIT(lit_449);
DEFLIT(lit_268);
DEFLIT(lit_577);
DEFLIT(lit_517);
DEFLIT(lit_63);
DEFLIT(lit_464);
DEFLIT(lit_171);
DEFLIT(lit_692);
DEFLIT(lit_165);
DEFLIT(lit_259);
DEFLIT(lit_200);
DEFLIT(lit_542);
DEFLIT(lit_571);
DEFLIT(lit_387);
DEFLIT(lit_643);
DEFLIT(lit_543);
DEFLIT(lit_674);
DEFLIT(lit_671);
DEFLIT(lit_31);
DEFLIT(lit_510);
DEFLIT(lit_133);
DEFLIT(lit_227);
DEFLIT(lit_459);
DEFLIT(lit_206);
DEFLIT(lit_640);
DEFLIT(lit_353);
DEFLIT(lit_170);
DEFLIT(lit_531);
DEFLIT(lit_457);
DEFLIT(lit_602);
DEFLIT(lit_43);
DEFLIT(lit_22);
DEFLIT(lit_661);
DEFLIT(lit_386);
DEFLIT(lit_586);
DEFLIT(lit_512);
DEFLIT(lit_401);
DEFLIT(lit_169);
DEFLIT(lit_348);
DEFLIT(lit_658);
DEFLIT(lit_156);
DEFLIT(lit_329);
DEFLIT(lit_402);
DEFLIT(lit_6);
DEFLIT(lit_618);
DEFLIT(lit_569);
DEFLIT(lit_600);
DEFLIT(lit_11);
DEFLIT(lit_659);
DEFLIT(lit_607);
DEFLIT(lit_617);
DEFLIT(lit_584);
DEFLIT(lit_589);
DEFLIT(lit_561);
DEFLIT(lit_147);
DEFLIT(lit_252);
DEFLIT(lit_653);
DEFLIT(lit_657);
DEFLIT(lit_301);
DEFLIT(lit_80);
DEFLIT(lit_690);
DEFLIT(lit_190);
DEFLIT(lit_338);
DEFLIT(lit_594);
DEFLIT(lit_595);
DEFLIT(lit_49);
DEFLIT(lit_272);
DEFLIT(lit_679);
DEFLIT(lit_172);
DEFLIT(lit_241);
DEFLIT(lit_456);
DEFLIT(lit_422);
DEFLIT(lit_677);
DEFLIT(lit_365);
DEFLIT(lit_233);
DEFLIT(lit_276);
DEFLIT(lit_506);
DEFLIT(lit_115);
DEFLIT(lit_448);
DEFLIT(lit_597);
DEFLIT(lit_567);
DEFLIT(lit_300);
DEFLIT(lit_91);
DEFLIT(lit_177);
DEFLIT(lit_651);
DEFLIT(lit_243);
DEFLIT(lit_624);
DEFLIT(lit_178);
DEFLIT(lit_613);
DEFLIT(lit_265);
DEFLIT(lit_650);
DEFLIT(lit_311);
DEFLIT(lit_66);
DEFLIT(lit_552);
DEFLIT(lit_208);
DEFLIT(lit_78);
DEFLIT(lit_51);
DEFLIT(lit_76);
DEFLIT(lit_533);
DEFLIT(lit_103);
DEFLIT(lit_414);
DEFLIT(lit_480);
DEFLIT(lit_482);
DEFLIT(lit_393);
DEFLIT(lit_645);
DEFLIT(lit_185);
DEFLIT(lit_239);

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
LOCFOR(fun_lookup_110);
LOCFOR(fun_111);
LOCFOR(fun_lookup_112);
FUNFOR(Yfab_sym);
LOCFOR(fun_loop_114);
extern P YPrevX (P);
LOCFOR(fun_coly_116);
LOCFOR(fun_colx_117);
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
LOCFOR(fun_loop_173);
FUNFOR(YPprop_offset);
FUNFOR(YPearly_dispatch);
FUNFOR(YPadd_met);
FUNFOR(YPadd_prop);
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
LOCFOR(fun_324);
LOCFOR(fun_325);
LOCFOR(fun_326);
LOCFOR(fun_327);
LOCFOR(fun_328);
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
LOCFOR(fun_fnd_349);
FUNFOR(YOallQ);
LOCFOR(fun_fnd_351);
FUNFOR(YOall2Q);
LOCFOR(fun_fnd_353);
FUNFOR(YOelt);
LOCFOR(fun_loop_355);
FUNFOR(YOfill);
LOCFOR(fun_fnd_357);
FUNFOR(YOanyQ);
extern P YOpair (P,P);
extern P YOadd (P,P);
extern P YOadd_new (P,P);
LOCFOR(fun_do_362);
FUNFOR(YOmap);
LOCFOR(fun_do_364);
FUNFOR(YOpick);
LOCFOR(fun_do_366);
FUNFOR(YOdo);
LOCFOR(fun_in_368);
FUNFOR(YOalter);
LOCFOR(fun_fab_370);
FUNFOR(YOfab);
LOCFOR(fun_red_372);
FUNFOR(YOfold);
LOCFOR(fun_loop_374);
FUNFOR(YOrev);
FUNFOR(YOcat2);
LOCFOR(fun_fnd_377);
FUNFOR(YOfind);
LOCFOR(fun_379);
FUNFOR(YOmemQ);
LOCFOR(fun_381);
FUNFOR(YOdel_dups);
FUNFOR(YOlst_helper);
FUNFOR(YOopts_as_lst);
FUNFOR(YOlst);
extern P YOtlen (P);
extern P YOtelt (P,P);
extern P YOtelt_setter (P,P,P);
LOCFOR(fun_fnd_389);
FUNFOR(YOtanyQ);
LOCFOR(fun_fnd_391);
FUNFOR(YOtall2Q);
LOCFOR(fun_into_393);
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
LOCFOR(fun_407);
LOCFOR(fun_408);
LOCFOR(fun_409);
LOCFOR(fun_410);
LOCFOR(fun_lop_411);
LOCFOR(fun_col_412);
FUNFOR(Ygen_add_met);
extern P YOsubclassQ (P,P);
extern P YOclass_isaQ (P,P);
extern P YOsingleton_isaQ (P,P);
FUNFOR(YOisaQ);
LOCFOR(fun_find_418);
FUNFOR(YOclassL);
FUNFOR(YtT);
FUNFOR(YOtype_equalQ);
FUNFOR(YOsubtypeQ);
FUNFOR(YOmay_isaQ);
FUNFOR(YOorder_specs_class);
FUNFOR(YOorder_specs);
LOCFOR(fun_loop_426);
FUNFOR(Yorder_mets);
LOCFOR(fun_loop_428);
LOCFOR(fun_make_ambiguous_429);
LOCFOR(fun_loop_430);
LOCFOR(fun_precedes_allQ_431);
LOCFOR(fun_check_subsequent_ambiguities_432);
LOCFOR(fun_insert_433);
LOCFOR(fun_loop_434);
FUNFOR(Yord_app_mets_1);
LOCFOR(fun_436);
LOCFOR(fun_loop_437);
FUNFOR(Ymet_appQ);
LOCFOR(fun_col_439);
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
LOCFOR(fun_453);
FUNFOR(YOmets_unspecialized_atQ);
LOCFOR(fun_455);
FUNFOR(YOprune_mets_by_type_at);
LOCFOR(fun_457);
FUNFOR(YOmets_specs_at);
LOCFOR(fun_459);
FUNFOR(YOmets_singletons_at);
LOCFOR(fun_461);
FUNFOR(YOmets_subclasses_at);
LOCFOR(fun_copy_463);
FUNFOR(YOcache_add);
LOCFOR(fun_loop_465);
FUNFOR(Ygen_lookup_miss_1_using);
LOCFOR(fun_copy_467);
FUNFOR(YOspecd_args);
FUNFOR(Yrequires_singleton_prec);
LOCFOR(fun_loop_470);
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
LOCFOR(fun_tailQ_497);
LOCFOR(fun_candidate_498);
LOCFOR(fun_candidate_at_head_499);
LOCFOR(fun_del_next_500);
LOCFOR(fun_merge_lists_501);
FUNFOR(Yclass_ordered_ancestors);
FUNFOR(YOclass_direct_props);
FUNFOR(Yclass_ordered_props);
FUNFOR(Ydel_class);
LOCFOR(fun_506);
LOCFOR(fun_507);
FUNFOR(Yinit_class);
FUNFOR(Yfab_class);
FUNFOR(Yrefab_class);
FUNFOR(Yobject_props);
FUNFOR(Yobject_parents);
FUNFOR(Yensure_fresh_object);
LOCFOR(fun_loop_514);
FUNFOR(Yprop_offset);
FUNFOR(YPprop_unbound_error);
FUNFOR(Yprop_value);
FUNFOR(Yprop_boundQ);
LOCFOR(fun_loop_519);
FUNFOR(Yprop_value_setter);
LOCFOR(fun_loop_521);
FUNFOR(Yfind_getter);
LOCFOR(fun_loop_523);
FUNFOR(Yfind_setter);
LOCFOR(fun_525);
FUNFOR(Yforward_class);
FUNFOR(Yclone);
LOCFOR(fun_visit_528);
FUNFOR(YOdo_descendents);
LOCFOR(fun_530);
FUNFOR(Yfinalize_props);
FUNFOR(YPprop);
extern P YPupdate_instance_for_changed_class (P);
FUNFOR(Yupdate_instance_for_changed_class);
FUNFOR(Ypatch_early_classes);
FUNFOR(Yfab_gen);
LOCFOR(fun_537);
FUNFOR(Ygen_from_met);
FUNFOR(YPdefine_method);
FUNFOR(Yunexec);
LOCFOR(fun_loop_541);
extern P YPnew (P,P);
FUNFOR(YOnew);
LOCFOR(fun_new_544);
LOCFOR(fun_545);
LOCFOR(fun_subtypeQ_546);
LOCFOR(fun_547);
LOCFOR(fun_subtypeQ_548);
LOCFOR(fun_549);
LOCFOR(fun_subtypeQ_550);
LOCFOR(fun_subtypeQ_551);
LOCFOR(fun_subtypeQ_552);
LOCFOR(fun_subtypeQ_553);
LOCFOR(fun_subtypeQ_554);
LOCFOR(fun_subtypeQ_555);
LOCFOR(fun_subtypeQ_556);
LOCFOR(fun_subtypeQ_557);
LOCFOR(fun_subtypeQ_558);
LOCFOR(fun_subtypeQ_559);
LOCFOR(fun_subtypeQ_560);
LOCFOR(fun_subtypeQ_561);
LOCFOR(fun_subtypeQ_562);
LOCFOR(fun_subtypeQ_563);
LOCFOR(fun_isaQ_564);
LOCFOR(fun_isaQ_565);
LOCFOR(fun_isaQ_566);
LOCFOR(fun_567);
LOCFOR(fun_isaQ_568);
LOCFOR(fun_isaQ_569);
LOCFOR(fun_order_specs_570);
LOCFOR(fun_order_specs_571);
LOCFOR(fun_order_specs_572);
LOCFOR(fun_order_specs_573);
LOCFOR(fun_order_specs_574);
LOCFOR(fun_order_specs_575);
LOCFOR(fun_order_specs_576);
LOCFOR(fun_may_isaQ_577);
LOCFOR(fun_may_isaQ_578);
LOCFOR(fun_may_isaQ_579);
LOCFOR(fun_loop_580);
LOCFOR(fun_may_isaQ_581);
LOCFOR(fun_582);
LOCFOR(fun_may_isaQ_583);
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

/* FUNCTION CODES: */

P YPallocate_stack(P num_) {
  P retF1;
  P T0,T1,T2,T3,T4;
  P a1;
DEFCREGS();
loop:
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
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPclass_prop_len(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPclass_name_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPclass_name(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPclass_parents_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPclass_parents(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPclass_direct_props_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPclass_direct_props(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPclass_ancestors_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPclass_ancestors(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPclass_props_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

INLINE P YPclass_props(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPclass_children_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)6);
  return T0;
}

INLINE P YPclass_children(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)6);
  return T0;
}

P YPclass_gens_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)7);
  return T0;
}

INLINE P YPclass_gens(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)7);
  return T0;
}

P YPclass_mets_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)8);
  return T0;
}

INLINE P YPclass_mets(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)8);
  return T0;
}

P YPclass_forward_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)9);
  return T0;
}

INLINE P YPclass_forward(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)9);
  return T0;
}

P YPclass_type_cache_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)10);
  return T0;
}

INLINE P YPclass_type_cache(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)10);
  return T0;
}

P YPclass_id_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)11);
  return T0;
}

INLINE P YPclass_id(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)11);
  return T0;
}

P YPclass_row_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)12);
  return T0;
}

INLINE P YPclass_row(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)12);
  return T0;
}

P YPclass(P class_prop_len_,P class_name_,P class_parents_,P class_direct_props_,P class_ancestors_,P class_props_,P class_children_,P class_gens_,P class_mets_,P class_forward_,P class_type_cache_,P class_id_,P class_row_) {
  P classF2;
  P T0,T1;
  P a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13;
DEFCREGS();
loop:
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
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPtype_object(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsingleton(P type_object_) {
  P classF3;
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLsingletonG),(P)1);
  classF3 = T1;
  (P)YPprop_elt_setter(Ynil,classF3,(P)1);
  (P)YPprop_elt_setter(type_object_,classF3,(P)0);
  T0 = classF3;
  return T0;
}

P YPtype_class_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPtype_class(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsubclass(P type_class_) {
  P classF4;
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLsubclassG),(P)1);
  classF4 = T1;
  (P)YPprop_elt_setter(Ynil,classF4,(P)1);
  (P)YPprop_elt_setter(type_class_,classF4,(P)0);
  T0 = classF4;
  return T0;
}

P YPunion_elts_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPunion_elts(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPunion(P union_elts_) {
  P classF5;
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLunionG),(P)1);
  classF5 = T1;
  (P)YPprop_elt_setter(Ynil,classF5,(P)1);
  (P)YPprop_elt_setter(union_elts_,classF5,(P)0);
  T0 = classF5;
  return T0;
}

P YPproduct_elts_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPproduct_elts(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPproduct(P product_elts_) {
  P classF6;
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLproductG),(P)1);
  classF6 = T1;
  (P)YPprop_elt_setter(Ynil,classF6,(P)1);
  (P)YPprop_elt_setter(product_elts_,classF6,(P)0);
  T0 = classF6;
  return T0;
}

P YPhead_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPhead(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPtail_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPtail(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPlst(P head_,P tail_) {
  P classF7;
  P T0,T1;
  P a1,a2;
DEFCREGS();
loop:
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
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPlst(head_,tail_);
  return T0;
}

INLINE P YPemptyQ(P x_) {
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPeqQ(x_,VARREF(Ynil));
  T0 = (P)YPbb(T1);
  return T0;
}

P YPPlen(P x_) {
  P T0,T1,T2,T3,T4;
  P a1;
DEFCREGS();
loop:
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
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPsig_names(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsig_specs_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPsig_specs(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPsig_naryQ_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPsig_naryQ(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPsig_arity_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPsig_arity(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPsig_val_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPsig_val(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPsig_unification_vars_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

INLINE P YPsig_unification_vars(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPsig(P sig_names_,P sig_specs_,P sig_naryQ_,P sig_arity_,P sig_val_,P sig_unification_vars_) {
  P classF8;
  P T0,T1;
  P a1,a2,a3,a4,a5,a6;
DEFCREGS();
loop:
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
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPsrc_loc_line(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsrc_loc_file_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPsrc_loc_file(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPsrc_loc(P src_loc_line_,P src_loc_file_) {
  P classF9;
  P T0,T1;
  P a1,a2;
DEFCREGS();
loop:
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
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPmet_code(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPmet_name_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPmet_name(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPmet_sig_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPmet_sig(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPmet_env_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPmet_env(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPmet_refs_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPmet_refs(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPmet_src_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

INLINE P YPmet_src(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPmet(P met_code_,P met_name_,P met_sig_,P met_env_,P met_refs_,P met_src_) {
  P classF10;
  P T0,T1;
  P a1,a2,a3,a4,a5,a6;
DEFCREGS();
loop:
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
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPiB(x_,(P)3);
  return T0;
}

INLINE P YPtag(P x_,P t_) {
  P T0,T1;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YPiLL(x_,(P)2);
  T0 = (P)YPiv(T1,t_);
  return T0;
}

INLINE P YPuntag(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPiGG(x_,(P)2);
  return T0;
}

P YPtag_into(P x_,P t_) {
  P tF13;
  P xF12;
  P xF11;
  P T0,T1,T2,T3,T4;
  P a1,a2;
DEFCREGS();
loop:
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
  P a1;
DEFCREGS();
loop:
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
  P a1;
DEFCREGS();
loop:
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
  P a1;
DEFCREGS();
loop:
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
  P a1;
DEFCREGS();
loop:
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
  P a1;
DEFCREGS();
loop:
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
  P a1;
DEFCREGS();
loop:
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
  P a1;
DEFCREGS();
loop:
  xF26 = x_;
  xF27 = xF26;
  tF28 = (P)1;
  T3 = (P)YPiLL(xF27,(P)2);
  T2 = (P)YPiv(T3,tF28);
  T1 = T2;
  T0 = T1;
  return T0;
}

INLINE P YPcb(P x_) {
  P tF30;
  P xF29;
  P T0,T1,T2;
  P a1;
DEFCREGS();
loop:
  xF29 = x_;
  tF30 = (P)2;
  T2 = (P)YPiLL(xF29,(P)2);
  T1 = (P)YPiv(T2,tF30);
  T0 = T1;
  return T0;
}

INLINE P YPchr(P x_) {
  P tF33;
  P xF32;
  P xF31;
  P T0,T1,T2,T3;
  P a1;
DEFCREGS();
loop:
  xF31 = x_;
  xF32 = xF31;
  tF33 = (P)2;
  T3 = (P)YPiLL(xF32,(P)2);
  T2 = (P)YPiv(T3,tF33);
  T1 = T2;
  T0 = T1;
  return T0;
}

INLINE P YPcu(P x_) {
  P xF34;
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  xF34 = x_;
  T1 = (P)YPiGG(xF34,(P)2);
  T0 = T1;
  return T0;
}

INLINE P YPlb(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPtag_into(x_,(P)3);
  return T0;
}

INLINE P YPloc(P x_) {
  P xF35;
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  xF35 = x_;
  T1 = (P)YPtag_into(xF35,(P)3);
  T0 = T1;
  return T0;
}

INLINE P YPlu(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPuntag_into(x_);
  return T0;
}

P YPstrX(P len_,P e_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPPsfab(len_,e_);
  return T0;
}

P YPstr(P len_,P e_) {
  P T0,T1,T2,T3;
  P a1,a2;
DEFCREGS();
loop:
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
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPPtfab(len_,e_);
  return T0;
}

P YPtup(P len_,P e_) {
  P T0,T1,T2,T3;
  P a1,a2;
DEFCREGS();
loop:
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
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPPrfab(len_,e_);
  return T0;
}

P YPrep(P len_,P e_) {
  P T0,T1,T2,T3;
  P a1,a2;
DEFCREGS();
loop:
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
  P tmpF39;
  P c2F38;
  P c1F37;
  P tmpF36;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
DEFCREGS();
loop:
  T2 = (P)YPiE(i_,len_);
  T1 = (P)YPbb(T2);
  tmpF36 = T1;
  if (tmpF36 != YPfalse) {
    T3 = tmpF36;
  } else {
    T5 = (P)YPselt(s1_,i_);
    c1F37 = T5;
    T7 = (P)YPselt(s2_,i_);
    c2F38 = T7;
    T10 = (P)YPcE(c1F37,c2F38);
    T9 = (P)YPbb(T10);
    tmpF39 = T9;
    if (tmpF39 != YPfalse) {
      T13 = (P)YPiA(i_,(P)1);
      a1 = s1_;
      a2 = s2_;
      a3 = len_;
      a4 = T13;
      s1_ = a1;
      s2_ = a2;
      len_ = a3;
      i_ = a4;
      goto loop;
      T11 = T12;
    } else {
      T11 = YPfalse;
    }
    T8 = T11;
    T6 = T8;
    T4 = T6;
    T3 = T4;
  }
  T0 = T3;
  return T0;
}

P YPstr_eqQ(P s1_,P s2_) {
  P tmpF41;
  P lenF40;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YPslen(s1_);
  lenF40 = T1;
  T5 = (P)YPslen(s2_);
  T4 = (P)YPiE(lenF40,T5);
  T3 = (P)YPbb(T4);
  tmpF41 = T3;
  if (tmpF41 != YPfalse) {
    T7 = (P)YPstr_eqQ_loop(s1_,s2_,lenF40,(P)0);
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
  P a1;
DEFCREGS();
loop:
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
  P a1,a2;
DEFCREGS();
loop:
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
  P a1;
DEFCREGS();
loop:
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
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPsym_nam(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsym(P sym_nam_) {
  P classF42;
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLsymG),(P)1);
  classF42 = T1;
  (P)YPprop_elt_setter(Ynil,classF42,(P)1);
  (P)YPprop_elt_setter(sym_nam_,classF42,(P)0);
  T0 = classF42;
  return T0;
}

FUNCODEDEF(fun_lookup_110) {
  P s_;
  P symF44;
  P symF43;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T1 = (P)YPemptyQ(s_);
  if (T1 != YPfalse) {
    T3 = (P)YPsym(FREEREF(0));
    symF43 = T3;
    T4 = (P)YPpair(symF43,VARREF(YPsymbols));
    VARSET(YPsymbols,T4);
    T2 = symF43;
    T0 = T2;
  } else {
    T6 = (P)YPhead(s_);
    symF44 = T6;
    T9 = (P)YPsym_nam(symF44);
    T8 = (P)YPstr_eqQ(T9,FREEREF(0));
    if (T8 != YPfalse) {
      T7 = symF44;
    } else {
      T11 = (P)YPtail(s_);
      a1 = T11;
      s_ = a1;
      goto loop;
      T7 = T10;
    }
    T5 = T7;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_111) {
  P name_;
  P lookupF45;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = FUNSHELL(1,fun_lookup_110,2);
  lookupF45 = T1;
  FUNINIT(lookupF45, 2,name_,lookupF45);
  T2 = CALL1(0,lookupF45,VARREF(YPsymbols));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lookup_112) {
  P s_;
  P symF47;
  P symF46;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T1 = (P)YPemptyQ(s_);
  if (T1 != YPfalse) {
    T3 = (P)YPsym(FREEREF(0));
    symF46 = T3;
    T4 = (P)YPpair(symF46,VARREF(YPsymbols));
    VARSET(YPsymbols,T4);
    T2 = symF46;
    T0 = T2;
  } else {
    T6 = (P)YPhead(s_);
    symF47 = T6;
    T9 = (P)YPsym_nam(symF47);
    T8 = (P)YPstr_eqQ(T9,FREEREF(0));
    if (T8 != YPfalse) {
      T7 = symF47;
    } else {
      T11 = (P)YPtail(s_);
      a1 = T11;
      s_ = a1;
      goto loop;
      T7 = T10;
    }
    T5 = T7;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfab_sym) {
  P name_;
  P lookupF48;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = FUNSHELL(1,fun_lookup_112,2);
  lookupF48 = T1;
  FUNINIT(lookupF48, 2,name_,lookupF48);
  T2 = CALL1(0,lookupF48,VARREF(YPsymbols));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_114) {
  P l_,r_;
  P tF49;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(r_, 1);
loop:
  T1 = (P)YPemptyQ(l_);
  if (T1 != YPfalse) {
    T0 = r_;
  } else {
    T3 = (P)YPtail(l_);
    tF49 = T3;
    (P)YPtail_setter(r_,l_);
    a1 = tF49;
    a2 = l_;
    l_ = a1;
    r_ = a2;
    goto loop;
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

P YPrevX(P c_) {
  P loopF50;
  P T0,T1,T2;
  P a1;
DEFCREGS();
loop:
  T1 = FUNSHELL(1,fun_loop_114,1);
  loopF50 = T1;
  FUNINIT(loopF50, 1,loopF50);
  T2 = XCALL2(0,loopF50,c_,Ynil);
  T0 = T2;
  return T0;
}

FUNCODEDEF(fun_coly_116) {
  P lxy_,y_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(lxy_, 0);
  ARG(y_, 1);
loop:
  T1 = (P)YPemptyQ(y_);
  if (T1 != YPfalse) {
    T2 = (P)YPrevX(lxy_);
    T0 = T2;
  } else {
    T5 = (P)YPhead(y_);
    T4 = (P)YPpair(T5,lxy_);
    T6 = (P)YPtail(y_);
    a1 = T4;
    a2 = T6;
    lxy_ = a1;
    y_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_colx_117) {
  P lx_,x_;
  P colyF51;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(lx_, 0);
  ARG(x_, 1);
loop:
  T1 = (P)YPemptyQ(x_);
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_coly_116,1);
    colyF51 = T3;
    FUNINIT(colyF51, 1,colyF51);
    T4 = CALL2(0,colyF51,lx_,FREEREF(0));
    T2 = T4;
    T0 = T2;
  } else {
    T7 = (P)YPhead(x_);
    T6 = (P)YPpair(T7,lx_);
    T8 = (P)YPtail(x_);
    a1 = T6;
    a2 = T8;
    lx_ = a1;
    x_ = a2;
    goto loop;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

P YPcat2(P x_,P y_) {
  P colxF52;
  P T0,T1,T2;
  P a1,a2;
DEFCREGS();
loop:
  T1 = FUNSHELL(1,fun_colx_117,2);
  colxF52 = T1;
  FUNINIT(colxF52, 2,y_,colxF52);
  T2 = XCALL2(0,colxF52,VARREF(Ynil),x_);
  T0 = T2;
  return T0;
}

P YPflo_dat_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPflo_dat(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPflo(P flo_dat_) {
  P classF53;
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLfloG),(P)1);
  classF53 = T1;
  (P)YPprop_elt_setter(flo_dat_,classF53,(P)0);
  T0 = classF53;
  return T0;
}

P YPfb(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPflo(x_);
  return T0;
}

P YPfu(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPopts_location_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPopts_location(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPopts_count_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPopts_count(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPopts(P opts_location_,P opts_count_) {
  P classF54;
  P T0,T1;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLoptsG),(P)2);
  classF54 = T1;
  (P)YPprop_elt_setter(Ynil,classF54,(P)2);
  (P)YPprop_elt_setter(opts_count_,classF54,(P)1);
  (P)YPprop_elt_setter(opts_location_,classF54,(P)0);
  T0 = classF54;
  return T0;
}

P YPopts_tup_location_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPopts_tup_location(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPopts_tup_count_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPopts_tup_count(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPopts_tup_tup_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPopts_tup_tup(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPopts_tup(P opts_tup_location_,P opts_tup_count_,P opts_tup_tup_) {
  P classF55;
  P T0,T1;
  P a1,a2,a3;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLopts_tupG),(P)3);
  classF55 = T1;
  (P)YPprop_elt_setter(Ynil,classF55,(P)3);
  (P)YPprop_elt_setter(opts_tup_tup_,classF55,(P)2);
  (P)YPprop_elt_setter(opts_tup_count_,classF55,(P)1);
  (P)YPprop_elt_setter(opts_tup_location_,classF55,(P)0);
  T0 = classF55;
  return T0;
}

P YPprop_owner_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPprop_owner(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPprop_getter_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPprop_getter(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPprop_setter_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPprop_setter(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPprop_type_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPprop_type(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPprop_init_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPprop_init(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPPprop(P prop_owner_,P prop_getter_,P prop_setter_,P prop_type_,P prop_init_) {
  P classF56;
  P T0,T1;
  P a1,a2,a3,a4,a5;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLpropG),(P)5);
  classF56 = T1;
  (P)YPprop_elt_setter(Ynil,classF56,(P)5);
  (P)YPprop_elt_setter(prop_init_,classF56,(P)4);
  (P)YPprop_elt_setter(prop_type_,classF56,(P)3);
  (P)YPprop_elt_setter(prop_setter_,classF56,(P)2);
  (P)YPprop_elt_setter(prop_getter_,classF56,(P)1);
  (P)YPprop_elt_setter(prop_owner_,classF56,(P)0);
  T0 = classF56;
  return T0;
}

P YPgen_cache_missableQ_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPgen_cache_missableQ(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPgen_cache_arg_pos_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPgen_cache_arg_pos(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPgen_cache_singletons_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPgen_cache_singletons(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPgen_cache_classes_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPgen_cache_classes(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPgen_cache_count_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPgen_cache_count(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPgen_cache(P gen_cache_missableQ_,P gen_cache_arg_pos_,P gen_cache_singletons_,P gen_cache_classes_,P gen_cache_count_) {
  P classF57;
  P T0,T1;
  P a1,a2,a3,a4,a5;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLgen_cacheG),(P)5);
  classF57 = T1;
  (P)YPprop_elt_setter(Ynil,classF57,(P)5);
  (P)YPprop_elt_setter(gen_cache_count_,classF57,(P)4);
  (P)YPprop_elt_setter(gen_cache_classes_,classF57,(P)3);
  (P)YPprop_elt_setter(gen_cache_singletons_,classF57,(P)2);
  (P)YPprop_elt_setter(gen_cache_arg_pos_,classF57,(P)1);
  (P)YPprop_elt_setter(gen_cache_missableQ_,classF57,(P)0);
  T0 = classF57;
  return T0;
}

P YPgen_code_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPgen_code(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPgen_name_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPgen_name(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPgen_sig_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPgen_sig(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPgen_mets_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPgen_mets(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPfun_cache_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPfun_cache(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPgen_refs_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

INLINE P YPgen_refs(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPgen_src_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)6);
  return T0;
}

INLINE P YPgen_src(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)6);
  return T0;
}

P YPgen(P gen_code_,P gen_name_,P gen_sig_,P gen_mets_,P fun_cache_,P gen_refs_,P gen_src_) {
  P classF58;
  P T0,T1;
  P a1,a2,a3,a4,a5,a6,a7;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLgenG),(P)7);
  classF58 = T1;
  (P)YPprop_elt_setter(Ynil,classF58,(P)7);
  (P)YPprop_elt_setter(gen_src_,classF58,(P)6);
  (P)YPprop_elt_setter(gen_refs_,classF58,(P)5);
  (P)YPprop_elt_setter(fun_cache_,classF58,(P)4);
  (P)YPprop_elt_setter(gen_mets_,classF58,(P)3);
  (P)YPprop_elt_setter(gen_sig_,classF58,(P)2);
  (P)YPprop_elt_setter(gen_name_,classF58,(P)1);
  (P)YPprop_elt_setter(gen_code_,classF58,(P)0);
  T0 = classF58;
  return T0;
}

FUNCODEDEF(fun_loop_173) {
  P i_,props_;
  P propF61;
  P xF60;
  P xF59;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(props_, 1);
loop:
  T1 = (P)YPemptyQ(props_);
  if (T1 != YPfalse) {
    xF59 = YPint((P)-1);
    xF60 = xF59;
    T4 = (P)YPiGG(xF60,(P)2);
    T3 = T4;
    T2 = T3;
    T0 = T2;
  } else {
    T6 = (P)YPhead(props_);
    propF61 = T6;
    T10 = (P)YPprop_getter(propF61);
    T9 = (P)YPeqQ(T10,FREEREF(0));
    T8 = (P)YPbb(T9);
    if (T8 != YPfalse) {
      T7 = i_;
    } else {
      T12 = (P)YPiA(i_,(P)1);
      T13 = (P)YPtail(props_);
      a1 = T12;
      a2 = T13;
      i_ = a1;
      props_ = a2;
      goto loop;
      T7 = T11;
    }
    T5 = T7;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPprop_offset) {
  P owner_,getter_;
  P loopF62;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_173,2);
  loopF62 = T1;
  FUNINIT(loopF62, 2,getter_,loopF62);
  T4 = (P)YPobject_class(owner_);
  T3 = (P)YPclass_props(T4);
  T2 = CALL2(0,loopF62,(P)0,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPearly_dispatch) {
  P args_;
  P genF63;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = (P)YPfun_reg();
  genF63 = T1;
  T2 = (P)YPcurrent_out_port();
  T3 = (P)YPsu(LITREF(lit_18));
  (P)YPputs(T2,T3);
  T4 = CALL0(1,(P)0);
  T0 = T4;
  QRET(T0);
}

FUNCODEDEF(YPadd_met) {
  P gen_,met_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
loop:
  T2 = (P)YPgen_mets(gen_);
  T1 = (P)YPpair(met_,T2);
  T0 = (P)YPgen_mets_setter(T1,gen_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPadd_prop) {
  P class_,prop_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(class_, 0);
  ARG(prop_, 1);
loop:
  T2 = (P)YPclass_direct_props(class_);
  T1 = (P)YPpair(prop_,T2);
  T0 = (P)YPclass_direct_props_setter(T1,class_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_178) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsrc_locG),VARREF(Ysrc_loc_line));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_179) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsrc_locG),VARREF(Ysrc_loc_line));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_180) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_181) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsrc_locG),VARREF(Ysrc_loc_file));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_182) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsrc_locG),VARREF(Ysrc_loc_file));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_183) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_184) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Yhead));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_185) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Yhead));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_186) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_187) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Ytail));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_188) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Ytail));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_189) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_190) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsymG),VARREF(Ysym_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_191) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsymG),VARREF(Ysym_name));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_192) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_193) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_prop_len));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_194) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_prop_len));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_195) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_196) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_197) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_name));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_198) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_199) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_parents));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_200) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_parents));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_201) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_202) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_direct_props));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_203) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_direct_props));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_204) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_205) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_ancestors));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_206) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_ancestors));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_207) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_208) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_props));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_209) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_props));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_210) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_211) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_children));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_212) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_children));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_213) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_214) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_gens));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_215) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_gens));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_216) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_217) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_mets));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_218) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_mets));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_219) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_220) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_forward));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_221) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_forward));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_222) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_223) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_type_cache));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_224) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_type_cache));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_225) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_226) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_id));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_227) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_id));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_228) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)-1));
}

FUNCODEDEF(fun_229) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_row));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_230) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_row));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_231) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_232) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsingletonG),VARREF(Ytype_object));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_233) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsingletonG),VARREF(Ytype_object));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_234) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_235) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsubclassG),VARREF(Ytype_class));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_236) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsubclassG),VARREF(Ytype_class));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_237) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_238) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLunionG),VARREF(Yunion_elts));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_239) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLunionG),VARREF(Yunion_elts));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_240) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_241) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLproductG),VARREF(Yproduct_elts));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_242) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLproductG),VARREF(Yproduct_elts));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_243) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_244) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_owner));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_245) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_owner));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_246) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_247) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_getter));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_248) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_getter));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_249) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_250) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_setter));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_251) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_setter));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_252) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_253) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_type));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_254) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_type));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_255) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_256) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_init));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_257) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_init));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_258) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_259) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = fun_258;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_260) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_261) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_262) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_263) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_264) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_265) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_266) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_267) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_268) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_269) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_270) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_271) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_272) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_names));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_273) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_names));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_274) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_275) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_specs));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_276) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_specs));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_277) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_278) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_naryQ));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_279) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_naryQ));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_280) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_281) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_arity));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_282) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_arity));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_283) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_284) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_val));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_285) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_val));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_286) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

FUNCODEDEF(fun_287) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_unification_vars));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_288) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_unification_vars));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_289) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_290) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_code));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_291) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_code));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_292) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_293) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_294) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_name));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_295) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_296) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_sig));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_297) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_sig));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_298) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_299) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_env));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_300) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_env));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_301) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_302) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_refs));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_303) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_refs));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_304) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_305) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_src));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_306) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_src));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_307) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_308) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_mets));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_309) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_mets));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_310) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_311) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_cache));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_312) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_cache));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_313) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_314) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Ygen_refs));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_315) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Ygen_refs));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_316) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_317) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Ygen_src));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_318) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Ygen_src));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_319) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_320) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_location));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_321) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_location));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_322) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_323) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_count));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_324) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_count));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_325) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_326) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLopts_tupG),VARREF(Yopts_tup_storage));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_327) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLopts_tupG),VARREF(Yopts_tup_storage));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_328) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(YPcollect_direct_props) {
  P class_;
  P parentF64;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(class_, 0);
loop:
  T2 = (P)YPclass_parents(class_);
  T1 = (P)YPhead(T2);
  parentF64 = T1;
  T4 = (P)YPclass_props(parentF64);
  T5 = (P)YPclass_direct_props(class_);
  T3 = (P)YPcat2(T4,T5);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPfinalize_propsX) {
  P name_,class_;
  P tF67;
  P xF66;
  P xF65;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(class_, 1);
loop:
  (P)YPclass_name_setter(name_,class_);
  T1 = (P)YPclass_direct_props(class_);
  T0 = (P)YPrevX(T1);
  (P)YPclass_direct_props_setter(T0,class_);
  T2 = CALL1(1,VARREF(YPcollect_direct_props),class_);
  (P)YPclass_props_setter(T2,class_);
  T5 = (P)YPclass_props(class_);
  T4 = (P)YPPlen(T5);
  xF65 = T4;
  xF66 = xF65;
  tF67 = (P)1;
  T8 = (P)YPiLL(xF66,(P)2);
  T7 = (P)YPiv(T8,tF67);
  T6 = T7;
  T3 = T6;
  (P)YPclass_prop_len_setter(T3,class_);
UNLINK_STACK();
  QRET(class_);
}

INLINE P YOhead(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPhead(x_);
  return T0;
}

P YOhead_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPhead_setter(z_,x_);
  return T0;
}

INLINE P YOtail(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPtail(x_);
  return T0;
}

P YOtail_setter(P z_,P x_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPtail_setter(z_,x_);
  return T0;
}

INLINE P YOE(P x_,P y_) {
  P T0,T1;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YPiE(x_,y_);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOL(P x_,P y_) {
  P xF71;
  P xF70;
  P xF69;
  P xF68;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
DEFCREGS();
loop:
  xF68 = x_;
  xF69 = xF68;
  T4 = (P)YPiGG(xF69,(P)2);
  T3 = T4;
  T2 = T3;
  xF70 = y_;
  xF71 = xF70;
  T7 = (P)YPiGG(xF71,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiL(T2,T5);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOA(P x_,P y_) {
  P tF78;
  P xF77;
  P xF76;
  P xF75;
  P xF74;
  P xF73;
  P xF72;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
DEFCREGS();
loop:
  xF72 = x_;
  xF73 = xF72;
  T4 = (P)YPiGG(xF73,(P)2);
  T3 = T4;
  T2 = T3;
  xF74 = y_;
  xF75 = xF74;
  T7 = (P)YPiGG(xF75,(P)2);
  T6 = T7;
  T5 = T6;
  T1 = (P)YPiA(T2,T5);
  xF76 = T1;
  xF77 = xF76;
  tF78 = (P)1;
  T10 = (P)YPiLL(xF77,(P)2);
  T9 = (P)YPiv(T10,tF78);
  T8 = T9;
  T0 = T8;
  return T0;
}

INLINE P YOEE(P x_,P y_) {
  P T0,T1;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YPeqQ(x_,y_);
  T0 = (P)YPbb(T1);
  return T0;
}

FUNCODEDEF(YOOEE) {
  P x_,y_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = (P)YPeqQ(x_,y_);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Ynot) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPeqQ(x_,YPfalse);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

INLINE P YOnot(P x_) {
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPeqQ(x_,YPfalse);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOemptyQ(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPemptyQ(x_);
  return T0;
}

FUNCODEDEF(YOOemptyQ) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPemptyQ(x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOrevX) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPrevX(x_);
UNLINK_STACK();
  RET(T0);
}

P YOlen(P x_) {
  P tF81;
  P xF80;
  P xF79;
  P T0,T1,T2,T3,T4;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPPlen(x_);
  xF79 = T1;
  xF80 = xF79;
  tF81 = (P)1;
  T4 = (P)YPiLL(xF80,(P)2);
  T3 = (P)YPiv(T4,tF81);
  T2 = T3;
  T0 = T2;
  return T0;
}

INLINE P YOoelt(P x_,P i_) {
  P xF83;
  P xF82;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YPopts_location(x_);
  xF82 = i_;
  xF83 = xF82;
  T5 = (P)YPiGG(xF83,(P)2);
  T4 = T5;
  T3 = T4;
  T2 = (P)YPi_((P)0,T3);
  T0 = (P)YPloc_off(T1,T2);
  return T0;
}

INLINE P YOoelt_setter(P z_,P x_,P i_) {
  P xF85;
  P xF84;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
DEFCREGS();
loop:
  T1 = (P)YPopts_location(x_);
  xF84 = i_;
  xF85 = xF84;
  T5 = (P)YPiGG(xF85,(P)2);
  T4 = T5;
  T3 = T4;
  T2 = (P)YPi_((P)0,T3);
  T0 = (P)YPloc_off_setter(z_,T1,T2);
  return T0;
}

INLINE P YOolen(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPopts_count(x_);
  return T0;
}

FUNCODEDEF(fun_fnd_349) {
  P p_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(p_, 0);
loop:
  T1 = (P)YOemptyQ(p_);
  if (T1 != YPfalse) {
    T0 = YPtrue;
  } else {
    T4 = (P)YOhead(p_);
    T3 = CALL1(1,FREEREF(0),T4);
    if (T3 != YPfalse) {
      T6 = (P)YOtail(p_);
      a1 = T6;
      p_ = a1;
      goto loop;
      T2 = T5;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOallQ) {
  P test_,c_;
  P fndF86;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_349,2);
  fndF86 = T1;
  FUNINIT(fndF86, 2,test_,fndF86);
  T2 = CALL1(0,fndF86,c_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_351) {
  P px_,py_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(px_, 0);
  ARG(py_, 1);
loop:
  T1 = (P)YOemptyQ(px_);
  if (T1 != YPfalse) {
    T2 = (P)YOemptyQ(py_);
    T0 = T2;
  } else {
    T4 = (P)YOemptyQ(py_);
    if (T4 != YPfalse) {
      T3 = YPfalse;
    } else {
      T7 = (P)YOhead(px_);
      T8 = (P)YOhead(py_);
      T6 = CALL2(1,FREEREF(0),T7,T8);
      if (T6 != YPfalse) {
        T10 = (P)YOtail(px_);
        T11 = (P)YOtail(py_);
        a1 = T10;
        a2 = T11;
        px_ = a1;
        py_ = a2;
        goto loop;
        T5 = T9;
      } else {
        T5 = YPfalse;
      }
      T3 = T5;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOall2Q) {
  P test_,x_,y_;
  P fndF87;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_351,2);
  fndF87 = T1;
  FUNINIT(fndF87, 2,test_,fndF87);
  T2 = CALL2(0,fndF87,x_,y_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_353) {
  P count_,x_;
  P yF91;
  P xF90;
  P yF89;
  P xF88;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  xF88 = x_;
  yF89 = Ynil;
  T3 = (P)YPeqQ(xF88,yF89);
  T2 = (P)YPbb(T3);
  T1 = T2;
  if (T1 != YPfalse) {
    T0 = VARREF(Ynul);
  } else {
    xF90 = count_;
    yF91 = FREEREF(0);
    T7 = (P)YPiE(xF90,yF91);
    T6 = (P)YPbb(T7);
    T5 = T6;
    if (T5 != YPfalse) {
      T8 = (P)YOhead(x_);
      T4 = T8;
    } else {
      T10 = (P)YOA(count_,YPint((P)1));
      T11 = (P)YOtail(x_);
      a1 = T10;
      a2 = T11;
      count_ = a1;
      x_ = a2;
      goto loop;
      T4 = T9;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOelt) {
  P x_,key_;
  P fndF92;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_353,2);
  fndF92 = T1;
  FUNINIT(fndF92, 2,key_,fndF92);
  T2 = CALL2(1,fndF92,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_355) {
  P p_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(p_, 0);
loop:
  T1 = (P)YOemptyQ(p_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    (P)YOhead_setter(FREEREF(1),p_);
    T3 = (P)YOtail(p_);
    a1 = T3;
    p_ = a1;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOfill) {
  P x_,f_;
  P loopF93;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(f_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_355,3);
  loopF93 = T1;
  FUNINIT(loopF93, 3,x_,f_,loopF93);
  T2 = CALL1(0,loopF93,x_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_357) {
  P p_;
  P tmpF94;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(p_, 0);
loop:
  T1 = (P)YOemptyQ(p_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T4 = (P)YOhead(p_);
    T3 = CALL1(1,FREEREF(0),T4);
    tmpF94 = T3;
    if (tmpF94 != YPfalse) {
      T5 = tmpF94;
    } else {
      T7 = (P)YOtail(p_);
      a1 = T7;
      p_ = a1;
      goto loop;
      T5 = T6;
    }
    T2 = T5;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOanyQ) {
  P test_,c_;
  P fndF95;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_357,2);
  fndF95 = T1;
  FUNINIT(fndF95, 2,test_,fndF95);
  T2 = CALL1(0,fndF95,c_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YOpair(P h_,P t_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YPpair(h_,t_);
  return T0;
}

P YOadd(P c_,P e_) {
  P T0;
  P a1,a2;
DEFCREGS();
loop:
  T0 = (P)YOpair(e_,c_);
  return T0;
}

P YOadd_new(P c_,P e_) {
  P T0,T1,T2;
  P a1,a2;
DEFCREGS();
loop:
  T1 = XCALL2(1,VARREF(YOmemQ),c_,e_);
  if (T1 != YPfalse) {
    T0 = c_;
  } else {
    T2 = (P)YOpair(e_,c_);
    T0 = T2;
  }
  return T0;
}

FUNCODEDEF(fun_do_362) {
  P x_,res_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(res_, 1);
loop:
  T1 = (P)YOemptyQ(x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YOrevX),res_);
    T0 = T2;
  } else {
    T4 = (P)YOtail(x_);
    T7 = (P)YOhead(x_);
    T6 = CALL1(1,FREEREF(0),T7);
    T5 = (P)YOpair(T6,res_);
    a1 = T4;
    a2 = T5;
    x_ = a1;
    res_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmap) {
  P f_,x_;
  P doF96;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_do_362,2);
  doF96 = T1;
  FUNINIT(doF96, 2,f_,doF96);
  T2 = CALL2(0,doF96,x_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_364) {
  P x_,res_;
  P hF97;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(res_, 1);
loop:
  T1 = (P)YOemptyQ(x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YOrevX),res_);
    T0 = T2;
  } else {
    T4 = (P)YOhead(x_);
    hF97 = T4;
    T6 = (P)YOtail(x_);
    T8 = CALL1(1,FREEREF(0),hF97);
    if (T8 != YPfalse) {
      T9 = (P)YOpair(hF97,res_);
      T7 = T9;
    } else {
      T7 = res_;
    }
    a1 = T6;
    a2 = T7;
    x_ = a1;
    res_ = a2;
    goto loop;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOpick) {
  P f_,x_;
  P doF98;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_do_364,2);
  doF98 = T1;
  FUNINIT(doF98, 2,f_,doF98);
  T2 = CALL2(0,doF98,x_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_366) {
  P x_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YOemptyQ(x_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T2 = (P)YOhead(x_);
    CALL1(1,FREEREF(0),T2);
    T4 = (P)YOtail(x_);
    a1 = T4;
    x_ = a1;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOdo) {
  P f_,x_;
  P doF99;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_do_366,2);
  doF99 = T1;
  FUNINIT(doF99, 2,f_,doF99);
  T2 = CALL1(0,doF99,x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_in_368) {
  P ds_,ss_;
  P tmpF100;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(ds_, 0);
  ARG(ss_, 1);
loop:
  T2 = (P)YOemptyQ(ds_);
  tmpF100 = T2;
  if (tmpF100 != YPfalse) {
    T3 = tmpF100;
  } else {
    T4 = (P)YOemptyQ(ss_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T5 = (P)YOhead(ss_);
    (P)YOhead_setter(T5,ds_);
    T7 = (P)YOtail(ds_);
    T8 = (P)YOtail(ss_);
    a1 = T7;
    a2 = T8;
    ds_ = a1;
    ss_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOalter) {
  P dst_,src_;
  P inF101;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_368,2);
  inF101 = T1;
  FUNINIT(inF101, 2,dst_,inF101);
  T2 = CALL2(0,inF101,dst_,src_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_370) {
  P i_,res_;
  P xF107;
  P xF106;
  P xF105;
  P xF104;
  P yF103;
  P xF102;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(res_, 1);
loop:
  xF102 = i_;
  yF103 = YPint((P)0);
  xF104 = xF102;
  xF105 = xF104;
  T6 = (P)YPiGG(xF105,(P)2);
  T5 = T6;
  T4 = T5;
  xF106 = yF103;
  xF107 = xF106;
  T9 = (P)YPiGG(xF107,(P)2);
  T8 = T9;
  T7 = T8;
  T3 = (P)YPiL(T4,T7);
  T2 = (P)YPbb(T3);
  T1 = T2;
  if (T1 != YPfalse) {
    T0 = res_;
  } else {
    T11 = (P)YOA(i_,YPint((P)-1));
    T12 = (P)YOpair(VARREF(Ynul),res_);
    a1 = T11;
    a2 = T12;
    i_ = a1;
    res_ = a2;
    goto loop;
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOfab) {
  P x_,s_;
  P fabF108;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_fab_370,1);
  fabF108 = T1;
  FUNINIT(fabF108, 1,fabF108);
  T2 = CALL2(1,fabF108,s_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_red_372) {
  P res_,c_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(c_, 1);
loop:
  T1 = (P)YOemptyQ(c_);
  if (T1 != YPfalse) {
    T0 = res_;
  } else {
    T4 = (P)YOhead(c_);
    T3 = CALL2(1,FREEREF(0),res_,T4);
    T5 = (P)YOtail(c_);
    a1 = T3;
    a2 = T5;
    res_ = a1;
    c_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOfold) {
  P combine_,init_,c_;
  P redF109;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
loop:
  T1 = FUNSHELL(1,fun_red_372,2);
  redF109 = T1;
  FUNINIT(redF109, 2,combine_,redF109);
  T2 = CALL2(0,redF109,init_,c_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_374) {
  P l_,r_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(r_, 1);
loop:
  T1 = (P)YOemptyQ(l_);
  if (T1 != YPfalse) {
    T0 = r_;
  } else {
    T3 = (P)YOtail(l_);
    T5 = (P)YOhead(l_);
    T4 = (P)YOpair(T5,r_);
    a1 = T3;
    a2 = T4;
    l_ = a1;
    r_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOrev) {
  P x_;
  P loopF110;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_374,1);
  loopF110 = T1;
  FUNINIT(loopF110, 1,loopF110);
  T2 = CALL2(0,loopF110,x_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOcat2) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = (P)YPcat2(x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_377) {
  P c_,i_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(i_, 1);
loop:
  T1 = (P)YOemptyQ(c_);
  if (T1 != YPfalse) {
    T0 = VARREF(Ynul);
  } else {
    T4 = (P)YOhead(c_);
    T3 = CALL1(1,FREEREF(0),T4);
    if (T3 != YPfalse) {
      T2 = i_;
    } else {
      T6 = (P)YOtail(c_);
      T7 = (P)YOA(i_,YPint((P)1));
      a1 = T6;
      a2 = T7;
      c_ = a1;
      i_ = a2;
      goto loop;
      T2 = T5;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOfind) {
  P f_,c_;
  P fndF111;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_377,2);
  fndF111 = T1;
  FUNINIT(fndF111, 2,f_,fndF111);
  T2 = CALL2(0,fndF111,c_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_379) {
  P y_;
  P yF113;
  P xF112;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  xF112 = FREEREF(0);
  yF113 = y_;
  T2 = (P)YPeqQ(xF112,yF113);
  T1 = (P)YPbb(T2);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmemQ) {
  P c_,x_;
  P yF115;
  P xF114;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T3 = FUNFAB(fun_379,1,x_);
  T2 = CALL2(1,VARREF(YOfind),T3,c_);
  xF114 = T2;
  yF115 = VARREF(Ynul);
  T5 = (P)YPeqQ(xF114,yF115);
  T4 = (P)YPbb(T5);
  T1 = T4;
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_381) {
  P s_,e_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
loop:
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
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = fun_381;
  T1 = CALL3(1,VARREF(YOfold),T2,Ynil,x_);
  T0 = CALL1(1,VARREF(YOrevX),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOlst_helper) {
  P objects_,i_,l_;
  P xF121;
  P xF120;
  P iF119;
  P xF118;
  P yF117;
  P xF116;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(objects_, 0);
  ARG(i_, 1);
  ARG(l_, 2);
loop:
  xF116 = i_;
  yF117 = YPint((P)-1);
  T3 = (P)YPeqQ(xF116,yF117);
  T2 = (P)YPbb(T3);
  T1 = T2;
  if (T1 != YPfalse) {
    T0 = l_;
  } else {
    T5 = (P)YOA(i_,YPint((P)-1));
    xF118 = objects_;
    iF119 = i_;
    T9 = (P)YPopts_location(xF118);
    xF120 = iF119;
    xF121 = xF120;
    T13 = (P)YPiGG(xF121,(P)2);
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
  P xF122;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  xF122 = x_;
  T3 = (P)YPopts_count(xF122);
  T2 = T3;
  T1 = (P)YOA(T2,YPint((P)-1));
  T0 = CALL3(1,VARREF(YOlst_helper),x_,T1,Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOlst) {
  P objects_;
  P xF123;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  NARGS(objects_, 0);
loop:
  xF123 = objects_;
  T3 = (P)YPopts_count(xF123);
  T2 = T3;
  T1 = (P)YOA(T2,YPint((P)-1));
  T0 = CALL3(1,VARREF(YOlst_helper),objects_,T1,Ynil);
UNLINK_STACK();
  QRET(T0);
}

INLINE P YOtlen(P x_) {
  P tF126;
  P xF125;
  P xF124;
  P T0,T1,T2,T3,T4;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPtlen(x_);
  xF124 = T1;
  xF125 = xF124;
  tF126 = (P)1;
  T4 = (P)YPiLL(xF125,(P)2);
  T3 = (P)YPiv(T4,tF126);
  T2 = T3;
  T0 = T2;
  return T0;
}

INLINE P YOtelt(P x_,P i_) {
  P xF128;
  P xF127;
  P T0,T1,T2,T3;
  P a1,a2;
DEFCREGS();
loop:
  xF127 = i_;
  xF128 = xF127;
  T3 = (P)YPiGG(xF128,(P)2);
  T2 = T3;
  T1 = T2;
  T0 = (P)YPtelt(x_,T1);
  return T0;
}

INLINE P YOtelt_setter(P z_,P x_,P i_) {
  P xF130;
  P xF129;
  P T0,T1,T2,T3;
  P a1,a2,a3;
DEFCREGS();
loop:
  xF129 = i_;
  xF130 = xF129;
  T3 = (P)YPiGG(xF130,(P)2);
  T2 = T3;
  T1 = T2;
  T0 = (P)YPtelt_setter(z_,x_,T1);
  return T0;
}

FUNCODEDEF(fun_fnd_389) {
  P i_;
  P tmpF137;
  P xF136;
  P xF135;
  P xF134;
  P xF133;
  P yF132;
  P xF131;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  xF131 = i_;
  yF132 = YPint((P)0);
  xF133 = xF131;
  xF134 = xF133;
  T6 = (P)YPiGG(xF134,(P)2);
  T5 = T6;
  T4 = T5;
  xF135 = yF132;
  xF136 = xF135;
  T9 = (P)YPiGG(xF136,(P)2);
  T8 = T9;
  T7 = T8;
  T3 = (P)YPiL(T4,T7);
  T2 = (P)YPbb(T3);
  T1 = T2;
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T12 = (P)YOtelt(FREEREF(0),i_);
    T11 = CALL1(1,FREEREF(1),T12);
    tmpF137 = T11;
    if (tmpF137 != YPfalse) {
      T13 = tmpF137;
    } else {
      T15 = (P)YOA(i_,YPint((P)-1));
      a1 = T15;
      i_ = a1;
      goto loop;
      T13 = T14;
    }
    T10 = T13;
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOtanyQ) {
  P test_,c_;
  P fndF138;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_389,3);
  fndF138 = T1;
  FUNINIT(fndF138, 3,c_,test_,fndF138);
  T4 = (P)YOtlen(c_);
  T3 = (P)YOA(T4,YPint((P)-1));
  T2 = CALL1(0,fndF138,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_391) {
  P i_;
  P tmpF146;
  P tmpF145;
  P xF144;
  P xF143;
  P xF142;
  P xF141;
  P yF140;
  P xF139;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  xF139 = i_;
  yF140 = YPint((P)0);
  xF141 = xF139;
  xF142 = xF141;
  T6 = (P)YPiGG(xF142,(P)2);
  T5 = T6;
  T4 = T5;
  xF143 = yF140;
  xF144 = xF143;
  T9 = (P)YPiGG(xF144,(P)2);
  T8 = T9;
  T7 = T8;
  T3 = (P)YPiL(T4,T7);
  T2 = (P)YPbb(T3);
  T1 = T2;
  tmpF145 = T1;
  if (tmpF145 != YPfalse) {
    T10 = tmpF145;
  } else {
    T13 = (P)YOtelt(FREEREF(0),i_);
    T14 = (P)YOtelt(FREEREF(1),i_);
    T12 = CALL2(1,FREEREF(2),T13,T14);
    tmpF146 = T12;
    if (tmpF146 != YPfalse) {
      T17 = (P)YOA(i_,YPint((P)-1));
      a1 = T17;
      i_ = a1;
      goto loop;
      T15 = T16;
    } else {
      T15 = YPfalse;
    }
    T11 = T15;
    T10 = T11;
  }
  T0 = T10;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOtall2Q) {
  P test_,c1_,c2_;
  P fndF150;
  P tmpF149;
  P yF148;
  P xF147;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(c1_, 1);
  ARG(c2_, 2);
loop:
  T2 = (P)YOtlen(c1_);
  xF147 = T2;
  T3 = (P)YOtlen(c2_);
  yF148 = T3;
  T5 = (P)YPeqQ(xF147,yF148);
  T4 = (P)YPbb(T5);
  T1 = T4;
  tmpF149 = T1;
  if (tmpF149 != YPfalse) {
    T8 = FUNSHELL(1,fun_fnd_391,4);
    fndF150 = T8;
    FUNINIT(fndF150, 4,c1_,c2_,test_,fndF150);
    T11 = (P)YOtlen(c1_);
    T10 = (P)YOA(T11,YPint((P)-1));
    T9 = CALL1(0,fndF150,T10);
    T7 = T9;
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T0 = T6;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_into_393) {
  P k_;
  P xF156;
  P xF155;
  P iF154;
  P xF153;
  P yF152;
  P xF151;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(k_, 0);
loop:
  xF151 = k_;
  yF152 = YPint((P)-1);
  T4 = (P)YPiE(xF151,yF152);
  T3 = (P)YPbb(T4);
  T2 = T3;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    xF153 = FREEREF(0);
    iF154 = k_;
    T7 = (P)YPopts_location(xF153);
    xF155 = iF154;
    xF156 = xF155;
    T11 = (P)YPiGG(xF156,(P)2);
    T10 = T11;
    T9 = T10;
    T8 = (P)YPi_((P)0,T9);
    T6 = (P)YPloc_off(T7,T8);
    T5 = T6;
    (P)YOtelt_setter(T5,FREEREF(1),k_);
    T13 = (P)YOA(k_,YPint((P)-1));
    a1 = T13;
    k_ = a1;
    goto loop;
    T0 = T12;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

INLINE P YPto_tup(P args_) {
  P intoF172;
  P xF171;
  P xF170;
  P iF169;
  P xF168;
  P xF167;
  P xF166;
  P iF165;
  P xF164;
  P yF163;
  P xF162;
  P tF161;
  P xF160;
  P xF159;
  P lF158;
  P xF157;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1;
DEFCREGS();
loop:
  xF157 = args_;
  T2 = (P)YPopts_count(xF157);
  T1 = T2;
  lF158 = T1;
  xF159 = lF158;
  xF160 = xF159;
  T7 = (P)YPiGG(xF160,(P)2);
  T6 = T7;
  T5 = T6;
  T4 = (P)YPtup(T5,VARREF(Ynul));
  tF161 = T4;
  xF162 = lF158;
  yF163 = YPint((P)2);
  T10 = (P)YPiE(xF162,yF163);
  T9 = (P)YPbb(T10);
  T8 = T9;
  if (T8 != YPfalse) {
    xF164 = args_;
    iF165 = YPint((P)0);
    T13 = (P)YPopts_location(xF164);
    xF166 = iF165;
    xF167 = xF166;
    T17 = (P)YPiGG(xF167,(P)2);
    T16 = T17;
    T15 = T16;
    T14 = (P)YPi_((P)0,T15);
    T12 = (P)YPloc_off(T13,T14);
    T11 = T12;
    (P)YOtelt_setter(T11,tF161,YPint((P)0));
    xF168 = args_;
    iF169 = YPint((P)1);
    T21 = (P)YPopts_location(xF168);
    xF170 = iF169;
    xF171 = xF170;
    T25 = (P)YPiGG(xF171,(P)2);
    T24 = T25;
    T23 = T24;
    T22 = (P)YPi_((P)0,T23);
    T20 = (P)YPloc_off(T21,T22);
    T19 = T20;
    T18 = (P)YOtelt_setter(T19,tF161,YPint((P)1));
  } else {
    T27 = FUNSHELL(1,fun_into_393,3);
    intoF172 = T27;
    FUNINIT(intoF172, 3,args_,tF161,intoF172);
    T29 = (P)YOA(lF158,YPint((P)-1));
    T28 = XCALL1(0,intoF172,T29);
    T26 = T28;
  }
  T3 = tF161;
  T0 = T3;
  return T0;
}

FUNCODEDEF(YOtup) {
  P args_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T0 = (P)YPto_tup(args_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOfun_names) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_names(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfun_specs) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_specs(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfun_naryQ) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_naryQ(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfun_arity) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_arity(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfun_val) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_val(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOfun_unification_vars) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_unification_vars(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfun_mets) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPgen_mets(x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfun_mets_setter) {
  P z_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T0 = (P)YPgen_mets_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_spec) {
  P x_,i_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YOfun_specs),x_);
  T0 = CALL2(1,VARREF(YOelt),T1,i_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_same_metQ) {
  P x_,y_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL1(1,VARREF(YOfun_specs),x_);
  T2 = CALL1(1,VARREF(YOfun_specs),y_);
  T0 = CALL3(1,VARREF(YOall2Q),VARREF(YOOEE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yfun_congruentQ) {
  P x_,y_;
  P tmpF179;
  P tmpF178;
  P yF177;
  P xF176;
  P tmpF175;
  P yF174;
  P xF173;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = CALL1(1,VARREF(YOfun_arity),x_);
  xF173 = T2;
  T3 = CALL1(1,VARREF(YOfun_arity),y_);
  yF174 = T3;
  T5 = (P)YPiE(xF173,yF174);
  T4 = (P)YPbb(T5);
  T1 = T4;
  tmpF175 = T1;
  if (tmpF175 != YPfalse) {
    T9 = CALL1(1,VARREF(YOfun_naryQ),x_);
    xF176 = T9;
    T10 = CALL1(1,VARREF(YOfun_naryQ),y_);
    yF177 = T10;
    T12 = (P)YPeqQ(xF176,yF177);
    T11 = (P)YPbb(T12);
    T8 = T11;
    tmpF178 = T8;
    if (tmpF178 != YPfalse) {
      T16 = CALL1(1,VARREF(YOfun_specs),x_);
      T17 = CALL1(1,VARREF(YOfun_specs),y_);
      T15 = CALL3(1,VARREF(YOall2Q),VARREF(YOsubtypeQ),T16,T17);
      tmpF179 = T15;
      if (tmpF179 != YPfalse) {
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

FUNCODEDEF(fun_407) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_408) {
  P c_,r_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T2 = CALL1(1,VARREF(Ygen_from_met),FREEREF(0));
  T1 = CALL2(1,VARREF(Ygen_add_met),T2,FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_409) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(Yincongruent_method_error),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_410) {
  P return_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T2 = CALL2(1,VARREF(Ylst),FREEREF(0),FREEREF(1));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_415),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_407;
  T4 = FUNFAB(fun_408,2,FREEREF(1),return_);
  T5 = FUNFAB(fun_409,2,FREEREF(0),FREEREF(1));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YLreplace_generic_restartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lop_411) {
  P specs_;
  P spec_classF184;
  P yF183;
  P xF182;
  P tmpF181;
  P specF180;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(specs_, 0);
loop:
  T2 = (P)YOemptyQ(specs_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = (P)YOhead(specs_);
    specF180 = T4;
    T8 = CALL1(1,VARREF(YOsingleton_specQ),specF180);
    tmpF181 = T8;
    if (tmpF181 != YPfalse) {
      T9 = tmpF181;
    } else {
      xF182 = specF180;
      yF183 = VARREF(YLanyG);
      T12 = (P)YPeqQ(xF182,yF183);
      T11 = (P)YPbb(T12);
      T10 = T11;
      T9 = T10;
    }
    T7 = T9;
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T14 = (P)YPobject_class(specF180);
      spec_classF184 = T14;
      T16 = (P)YPclass_gens(spec_classF184);
      T15 = (P)YOadd_new(T16,FREEREF(0));
      (P)YPclass_gens_setter(T15,spec_classF184);
      T18 = (P)YPclass_mets(spec_classF184);
      T17 = (P)YOadd_new(T18,FREEREF(1));
      (P)YPclass_mets_setter(T17,spec_classF184);
      T20 = (P)YOtail(specs_);
      a1 = T20;
      specs_ = a1;
      goto loop;
      T13 = T19;
      T5 = T13;
    } else {
      T5 = YPfalse;
    }
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_col_412) {
  P mets_,sameQ_,gms_;
  P tmpF187;
  P now_sameQF186;
  P gmF185;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2,a3;
LINK_STACK();
  ARG(mets_, 0);
  ARG(sameQ_, 1);
  ARG(gms_, 2);
loop:
  T1 = (P)YOemptyQ(gms_);
  if (T1 != YPfalse) {
    if (sameQ_ != YPfalse) {
      T4 = mets_;
    } else {
      T5 = (P)YOadd(mets_,FREEREF(0));
      T4 = T5;
    }
    T3 = CALL1(1,VARREF(YOrevX),T4);
    T2 = (P)YPgen_mets_setter(T3,FREEREF(1));
    T0 = T2;
  } else {
    T7 = (P)YOhead(gms_);
    gmF185 = T7;
    T9 = CALL2(1,VARREF(Yfun_same_metQ),gmF185,FREEREF(0));
    now_sameQF186 = T9;
    if (now_sameQF186 != YPfalse) {
      T12 = FREEREF(0);
    } else {
      T12 = gmF185;
    }
    T11 = (P)YOadd(mets_,T12);
    tmpF187 = now_sameQF186;
    if (tmpF187 != YPfalse) {
      T14 = tmpF187;
    } else {
      T14 = sameQ_;
    }
    T13 = T14;
    T15 = (P)YOtail(gms_);
    a1 = T11;
    a2 = T13;
    a3 = T15;
    mets_ = a1;
    sameQ_ = a2;
    gms_ = a3;
    goto loop;
    T8 = T10;
    T6 = T8;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ygen_add_met) {
  P g_,m_;
  P colF189;
  P lopF188;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(g_, 0);
  ARG(m_, 1);
loop:
  (P)YPfun_cache_setter(YPfalse,g_);
  T2 = CALL2(1,VARREF(Yfun_congruentQ),m_,g_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    if (VARREF(YTrestarts_okQT) != YPfalse) {
      T5 = FUNFAB(fun_410,2,g_,m_);
      T4 = with_exit(T5);
      T3 = T4;
    } else {
      T6 = CALL2(1,VARREF(Yincongruent_method_error),g_,m_);
      T3 = T6;
    }
    T0 = T3;
  } else {
    T7 = FUNSHELL(1,fun_lop_411,3);
    lopF188 = T7;
    FUNINIT(lopF188, 3,g_,m_,lopF188);
    T9 = CALL1(1,VARREF(YOfun_specs),m_);
    T8 = CALL1(0,lopF188,T9);
    T10 = FUNSHELL(1,fun_col_412,3);
    colF189 = T10;
    FUNINIT(colF189, 3,m_,g_,colF189);
    T12 = CALL1(1,VARREF(YOfun_mets),g_);
    T11 = CALL3(1,colF189,Ynil,YPfalse,T12);
    T0 = g_;
  }
UNLINK_STACK();
  RET(T0);
}

INLINE P YOsubclassQ(P c1_,P c2_) {
  P xF193;
  P xF192;
  P xF191;
  P xF190;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
DEFCREGS();
loop:
  T3 = (P)YPclass_row(c1_);
  T5 = (P)YPclass_id(c2_);
  xF190 = T5;
  xF191 = xF190;
  T7 = (P)YPiGG(xF191,(P)2);
  T6 = T7;
  T4 = T6;
  T2 = (P)YPselt(T3,T4);
  xF192 = YPint((P)1);
  xF193 = xF192;
  T10 = (P)YPiGG(xF193,(P)2);
  T9 = T10;
  T8 = T9;
  T1 = (P)YPiE(T2,T8);
  T0 = (P)YPbb(T1);
  return T0;
}

P YOclass_isaQ(P o_,P c_) {
  P xF202;
  P xF201;
  P xF200;
  P xF199;
  P c2F198;
  P c1F197;
  P tagF196;
  P xF195;
  P xF194;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2;
DEFCREGS();
loop:
  xF194 = o_;
  xF195 = xF194;
  T4 = (P)YPiB(xF195,(P)3);
  T3 = T4;
  tagF196 = T3;
  T7 = (P)YPiE(tagF196,(P)0);
  T6 = (P)YPbb(T7);
  if (T6 != YPfalse) {
    T8 = (P)YPobject_class(xF194);
    T5 = T8;
  } else {
    T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF196);
    T5 = T9;
  }
  T2 = T5;
  T1 = T2;
  c1F197 = T1;
  c2F198 = c_;
  T13 = (P)YPclass_row(c1F197);
  T15 = (P)YPclass_id(c2F198);
  xF199 = T15;
  xF200 = xF199;
  T17 = (P)YPiGG(xF200,(P)2);
  T16 = T17;
  T14 = T16;
  T12 = (P)YPselt(T13,T14);
  xF201 = YPint((P)1);
  xF202 = xF201;
  T20 = (P)YPiGG(xF202,(P)2);
  T19 = T20;
  T18 = T19;
  T11 = (P)YPiE(T12,T18);
  T10 = (P)YPbb(T11);
  T0 = T10;
  return T0;
}

P YOsingleton_isaQ(P o_,P t_) {
  P yF204;
  P xF203;
  P T0,T1,T2,T3;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YPtype_object(t_);
  xF203 = T1;
  yF204 = o_;
  T3 = (P)YPeqQ(xF203,yF204);
  T2 = (P)YPbb(T3);
  T0 = T2;
  return T0;
}

FUNCODEDEF(YOisaQ) {
  P o_,t_;
  P yF209;
  P xF208;
  P tagF207;
  P xF206;
  P xF205;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  xF205 = t_;
  xF206 = xF205;
  T5 = (P)YPiB(xF206,(P)3);
  T4 = T5;
  tagF207 = T4;
  T8 = (P)YPiE(tagF207,(P)0);
  T7 = (P)YPbb(T8);
  if (T7 != YPfalse) {
    T9 = (P)YPobject_class(xF205);
    T6 = T9;
  } else {
    T10 = (P)YPelt(VARREF(YDdirect_object_class),tagF207);
    T6 = T10;
  }
  T3 = T6;
  T2 = T3;
  xF208 = T2;
  yF209 = VARREF(YLclassG);
  T12 = (P)YPeqQ(xF208,yF209);
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

FUNCODEDEF(fun_find_418) {
  P ps_;
  P yF214;
  P xF213;
  P yF212;
  P xF211;
  P cF210;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(ps_, 0);
loop:
  T1 = (P)YOemptyQ(ps_);
  if (T1 != YPfalse) {
    T2 = CALL5(1,VARREF(Ycpl_error),LITREF(lit_428),LITREF(lit_429),FREEREF(0),FREEREF(1),FREEREF(2));
    T0 = T2;
  } else {
    T4 = (P)YOhead(ps_);
    cF210 = T4;
    xF211 = cF210;
    yF212 = FREEREF(1);
    T8 = (P)YPeqQ(xF211,yF212);
    T7 = (P)YPbb(T8);
    T6 = T7;
    if (T6 != YPfalse) {
      T5 = YPtrue;
    } else {
      xF213 = cF210;
      yF214 = FREEREF(2);
      T12 = (P)YPeqQ(xF213,yF214);
      T11 = (P)YPbb(T12);
      T10 = T11;
      if (T10 != YPfalse) {
        T9 = YPfalse;
      } else {
        T14 = (P)YOtail(ps_);
        a1 = T14;
        ps_ = a1;
        goto loop;
        T9 = T13;
      }
      T5 = T9;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOclassL) {
  P c1_,c2_,wrt_;
  P findF215;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  ARG(wrt_, 2);
loop:
  T1 = FUNSHELL(1,fun_find_418,4);
  findF215 = T1;
  FUNINIT(findF215, 4,wrt_,c1_,c2_,findF215);
  T3 = (P)YPclass_ancestors(wrt_);
  T2 = CALL1(0,findF215,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YtT) {
  P args_;
  P T0,T1;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = (P)YPto_tup(args_);
  T0 = (P)YPproduct(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOtype_equalQ) {
  P t1_,t2_;
  P tmpF231;
  P tmpF230;
  P yF229;
  P xF228;
  P tagF227;
  P xF226;
  P xF225;
  P tmpF224;
  P yF223;
  P xF222;
  P tagF221;
  P xF220;
  P xF219;
  P tmpF218;
  P yF217;
  P xF216;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  xF216 = t1_;
  yF217 = t2_;
  T3 = (P)YPeqQ(xF216,yF217);
  T2 = (P)YPbb(T3);
  T1 = T2;
  tmpF218 = T1;
  if (tmpF218 != YPfalse) {
    T4 = tmpF218;
  } else {
    xF219 = t1_;
    xF220 = xF219;
    T11 = (P)YPiB(xF220,(P)3);
    T10 = T11;
    tagF221 = T10;
    T14 = (P)YPiE(tagF221,(P)0);
    T13 = (P)YPbb(T14);
    if (T13 != YPfalse) {
      T15 = (P)YPobject_class(xF219);
      T12 = T15;
    } else {
      T16 = (P)YPelt(VARREF(YDdirect_object_class),tagF221);
      T12 = T16;
    }
    T9 = T12;
    T8 = T9;
    xF222 = T8;
    yF223 = VARREF(YLclassG);
    T18 = (P)YPeqQ(xF222,yF223);
    T17 = (P)YPbb(T18);
    T7 = T17;
    T6 = CALL1(1,VARREF(Ynot),T7);
    tmpF224 = T6;
    if (tmpF224 != YPfalse) {
      xF225 = t2_;
      xF226 = xF225;
      T26 = (P)YPiB(xF226,(P)3);
      T25 = T26;
      tagF227 = T25;
      T29 = (P)YPiE(tagF227,(P)0);
      T28 = (P)YPbb(T29);
      if (T28 != YPfalse) {
        T30 = (P)YPobject_class(xF225);
        T27 = T30;
      } else {
        T31 = (P)YPelt(VARREF(YDdirect_object_class),tagF227);
        T27 = T31;
      }
      T24 = T27;
      T23 = T24;
      xF228 = T23;
      yF229 = VARREF(YLclassG);
      T33 = (P)YPeqQ(xF228,yF229);
      T32 = (P)YPbb(T33);
      T22 = T32;
      T21 = CALL1(1,VARREF(Ynot),T22);
      tmpF230 = T21;
      if (tmpF230 != YPfalse) {
        T36 = CALL2(1,VARREF(YOsubtypeQ),t1_,t2_);
        tmpF231 = T36;
        if (tmpF231 != YPfalse) {
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
  P xF248;
  P xF247;
  P xF246;
  P xF245;
  P c2F244;
  P c1F243;
  P yF242;
  P xF241;
  P tagF240;
  P xF239;
  P xF238;
  P tmpF237;
  P yF236;
  P xF235;
  P tagF234;
  P xF233;
  P xF232;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  xF232 = t2_;
  xF233 = xF232;
  T6 = (P)YPiB(xF233,(P)3);
  T5 = T6;
  tagF234 = T5;
  T9 = (P)YPiE(tagF234,(P)0);
  T8 = (P)YPbb(T9);
  if (T8 != YPfalse) {
    T10 = (P)YPobject_class(xF232);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF234);
    T7 = T11;
  }
  T4 = T7;
  T3 = T4;
  xF235 = T3;
  yF236 = VARREF(YLclassG);
  T13 = (P)YPeqQ(xF235,yF236);
  T12 = (P)YPbb(T13);
  T2 = T12;
  tmpF237 = T2;
  if (tmpF237 != YPfalse) {
    xF238 = t1_;
    xF239 = xF238;
    T19 = (P)YPiB(xF239,(P)3);
    T18 = T19;
    tagF240 = T18;
    T22 = (P)YPiE(tagF240,(P)0);
    T21 = (P)YPbb(T22);
    if (T21 != YPfalse) {
      T23 = (P)YPobject_class(xF238);
      T20 = T23;
    } else {
      T24 = (P)YPelt(VARREF(YDdirect_object_class),tagF240);
      T20 = T24;
    }
    T17 = T20;
    T16 = T17;
    xF241 = T16;
    yF242 = VARREF(YLclassG);
    T26 = (P)YPeqQ(xF241,yF242);
    T25 = (P)YPbb(T26);
    T15 = T25;
    T14 = T15;
  } else {
    T14 = YPfalse;
  }
  T1 = T14;
  if (T1 != YPfalse) {
    c1F243 = t1_;
    c2F244 = t2_;
    T31 = (P)YPclass_row(c1F243);
    T33 = (P)YPclass_id(c2F244);
    xF245 = T33;
    xF246 = xF245;
    T35 = (P)YPiGG(xF246,(P)2);
    T34 = T35;
    T32 = T34;
    T30 = (P)YPselt(T31,T32);
    xF247 = YPint((P)1);
    xF248 = xF247;
    T38 = (P)YPiGG(xF248,(P)2);
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
  P xF259;
  P xF258;
  P xF257;
  P xF256;
  P c2F255;
  P c1F254;
  P yF253;
  P xF252;
  P tagF251;
  P xF250;
  P xF249;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  xF249 = t_;
  xF250 = xF249;
  T5 = (P)YPiB(xF250,(P)3);
  T4 = T5;
  tagF251 = T4;
  T8 = (P)YPiE(tagF251,(P)0);
  T7 = (P)YPbb(T8);
  if (T7 != YPfalse) {
    T9 = (P)YPobject_class(xF249);
    T6 = T9;
  } else {
    T10 = (P)YPelt(VARREF(YDdirect_object_class),tagF251);
    T6 = T10;
  }
  T3 = T6;
  T2 = T3;
  xF252 = T2;
  yF253 = VARREF(YLclassG);
  T12 = (P)YPeqQ(xF252,yF253);
  T11 = (P)YPbb(T12);
  T1 = T11;
  if (T1 != YPfalse) {
    c1F254 = c_;
    c2F255 = t_;
    T18 = (P)YPclass_row(c1F254);
    T20 = (P)YPclass_id(c2F255);
    xF256 = T20;
    xF257 = xF256;
    T22 = (P)YPiGG(xF257,(P)2);
    T21 = T22;
    T19 = T21;
    T17 = (P)YPselt(T18,T19);
    xF258 = YPint((P)1);
    xF259 = xF258;
    T25 = (P)YPiGG(xF259,(P)2);
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
  P tagF264;
  P xF263;
  P xF262;
  P yF261;
  P xF260;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  xF260 = t1_;
  yF261 = t2_;
  T3 = (P)YPeqQ(xF260,yF261);
  T2 = (P)YPbb(T3);
  T1 = T2;
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YOtup),LITREF(lit_440),t1_);
    T0 = T4;
  } else {
    xF262 = arg_;
    xF263 = xF262;
    T10 = (P)YPiB(xF263,(P)3);
    T9 = T10;
    tagF264 = T9;
    T13 = (P)YPiE(tagF264,(P)0);
    T12 = (P)YPbb(T13);
    if (T12 != YPfalse) {
      T14 = (P)YPobject_class(xF262);
      T11 = T14;
    } else {
      T15 = (P)YPelt(VARREF(YDdirect_object_class),tagF264);
      T11 = T15;
    }
    T8 = T11;
    T7 = T8;
    T6 = CALL3(1,VARREF(YOclassL),t1_,t2_,T7);
    if (T6 != YPfalse) {
      T16 = CALL2(1,VARREF(YOtup),LITREF(lit_441),t1_);
      T5 = T16;
    } else {
      T17 = CALL2(1,VARREF(YOtup),LITREF(lit_442),t2_);
      T5 = T17;
    }
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOorder_specs) {
  P t1_,t2_,arg_;
  P yF275;
  P xF274;
  P tagF273;
  P xF272;
  P xF271;
  P tmpF270;
  P yF269;
  P xF268;
  P tagF267;
  P xF266;
  P xF265;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  xF265 = t1_;
  xF266 = xF265;
  T6 = (P)YPiB(xF266,(P)3);
  T5 = T6;
  tagF267 = T5;
  T9 = (P)YPiE(tagF267,(P)0);
  T8 = (P)YPbb(T9);
  if (T8 != YPfalse) {
    T10 = (P)YPobject_class(xF265);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF267);
    T7 = T11;
  }
  T4 = T7;
  T3 = T4;
  xF268 = T3;
  yF269 = VARREF(YLclassG);
  T13 = (P)YPeqQ(xF268,yF269);
  T12 = (P)YPbb(T13);
  T2 = T12;
  tmpF270 = T2;
  if (tmpF270 != YPfalse) {
    xF271 = t2_;
    xF272 = xF271;
    T19 = (P)YPiB(xF272,(P)3);
    T18 = T19;
    tagF273 = T18;
    T22 = (P)YPiE(tagF273,(P)0);
    T21 = (P)YPbb(T22);
    if (T21 != YPfalse) {
      T23 = (P)YPobject_class(xF271);
      T20 = T23;
    } else {
      T24 = (P)YPelt(VARREF(YDdirect_object_class),tagF273);
      T20 = T24;
    }
    T17 = T20;
    T16 = T17;
    xF274 = T16;
    yF275 = VARREF(YLclassG);
    T26 = (P)YPeqQ(xF274,yF275);
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

FUNCODEDEF(fun_loop_426) {
  P state_,idx_;
  P yF296;
  P xF295;
  P tmpF294;
  P yF293;
  P xF292;
  P tmpF291;
  P yF290;
  P xF289;
  P yF288;
  P xF287;
  P idxF286;
  P cmpF285;
  P cmpAtypF284;
  P xF283;
  P xF282;
  P iF281;
  P xF280;
  P m2specF279;
  P m1specF278;
  P yF277;
  P xF276;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1,a2;
LINK_STACK();
  ARG(state_, 0);
  ARG(idx_, 1);
loop:
  xF276 = idx_;
  yF277 = FREEREF(0);
  T3 = (P)YPiE(xF276,yF277);
  T2 = (P)YPbb(T3);
  T1 = T2;
  if (T1 != YPfalse) {
    T0 = state_;
  } else {
    T5 = CALL2(1,VARREF(Yfun_spec),FREEREF(1),idx_);
    m1specF278 = T5;
    T7 = CALL2(1,VARREF(Yfun_spec),FREEREF(2),idx_);
    m2specF279 = T7;
    xF280 = FREEREF(3);
    iF281 = idx_;
    T12 = (P)YPopts_location(xF280);
    xF282 = iF281;
    xF283 = xF282;
    T16 = (P)YPiGG(xF283,(P)2);
    T15 = T16;
    T14 = T15;
    T13 = (P)YPi_((P)0,T14);
    T11 = (P)YPloc_off(T12,T13);
    T10 = T11;
    T9 = CALL3(1,VARREF(YOorder_specs),m1specF278,m2specF279,T10);
    check_type(T9,VARREF(YLtupG));
    cmpAtypF284 = T9;
    T18 = (P)YOtelt(cmpAtypF284,YPint((P)0));
    check_type(T18,VARREF(YLsymG));
    cmpF285 = T18;
    T20 = (P)YOA(idx_,YPint((P)1));
    check_type(T20,VARREF(YLfixnumG));
    idxF286 = T20;
    xF287 = cmpF285;
    yF288 = LITREF(lit_440);
    T24 = (P)YPeqQ(xF287,yF288);
    T23 = (P)YPbb(T24);
    T22 = T23;
    if (T22 != YPfalse) {
      a1 = state_;
      a2 = idxF286;
      state_ = a1;
      idx_ = a2;
      goto loop;
      T21 = T25;
    } else {
      xF289 = cmpF285;
      yF290 = LITREF(lit_448);
      T31 = (P)YPeqQ(xF289,yF290);
      T30 = (P)YPbb(T31);
      T29 = T30;
      T28 = CALL1(1,VARREF(Ynot),T29);
      tmpF291 = T28;
      if (tmpF291 != YPfalse) {
        xF292 = state_;
        yF293 = LITREF(lit_440);
        T36 = (P)YPeqQ(xF292,yF293);
        T35 = (P)YPbb(T36);
        T34 = T35;
        tmpF294 = T34;
        if (tmpF294 != YPfalse) {
          T37 = tmpF294;
        } else {
          xF295 = cmpF285;
          yF296 = state_;
          T40 = (P)YPeqQ(xF295,yF296);
          T39 = (P)YPbb(T40);
          T38 = T39;
          T37 = T38;
        }
        T33 = T37;
        T32 = T33;
      } else {
        T32 = YPfalse;
      }
      T27 = T32;
      if (T27 != YPfalse) {
        a1 = cmpF285;
        a2 = idxF286;
        state_ = a1;
        idx_ = a2;
        goto loop;
        T26 = T41;
      } else {
        T26 = LITREF(lit_448);
      }
      T21 = T26;
    }
    T19 = T21;
    T17 = T19;
    T8 = T17;
    T6 = T8;
    T4 = T6;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yorder_mets) {
  P m1_,m2_,args_;
  P loopF298;
  P arityF297;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(args_, 2);
loop:
  T1 = CALL1(1,VARREF(YOfun_arity),m1_);
  check_type(T1,VARREF(YLfixnumG));
  arityF297 = T1;
  T3 = FUNSHELL(1,fun_loop_426,5);
  loopF298 = T3;
  FUNINIT(loopF298, 5,arityF297,m1_,m2_,args_,loopF298);
  T4 = CALL2(1,loopF298,LITREF(lit_440),YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_428) {
  P l_;
  P t1F302;
  P tmpF301;
  P yF300;
  P xF299;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  xF299 = l_;
  yF300 = Ynil;
  T3 = (P)YPeqQ(xF299,yF300);
  T2 = (P)YPbb(T3);
  T1 = T2;
  tmpF301 = T1;
  if (tmpF301 != YPfalse) {
    T4 = tmpF301;
  } else {
    T6 = (P)YOtail(l_);
    t1F302 = T6;
    T7 = (P)YOtail(FREEREF(0));
    (P)YOtail_setter(T7,l_);
    (P)YOtail_setter(l_,FREEREF(0));
    a1 = t1F302;
    l_ = a1;
    goto loop;
    T5 = T8;
    T4 = T5;
  }
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_make_ambiguous_429) {
  P headed_list_;
  P loopF303;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(headed_list_, 0);
loop:
  T0 = FUNSHELL(1,fun_loop_428,2);
  loopF303 = T0;
  FUNINIT(loopF303, 2,FREEREF(0),loopF303);
  T2 = (P)YOtail(headed_list_);
  T1 = CALL1(1,loopF303,T2);
  (P)YOtail_setter(Ynil,headed_list_);
  T5 = (P)YOtail(FREEREF(0));
  T4 = (P)YOpair(FREEREF(1),T5);
  T3 = (P)YOtail_setter(T4,FREEREF(0));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_loop_430) {
  P l_;
  P yF307;
  P xF306;
  P yF305;
  P xF304;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  xF304 = l_;
  yF305 = Ynil;
  T3 = (P)YPeqQ(xF304,yF305);
  T2 = (P)YPbb(T3);
  T1 = T2;
  if (T1 != YPfalse) {
    T0 = YPtrue;
  } else {
    T7 = (P)YOhead(l_);
    T6 = CALL3(1,FREEREF(2),FREEREF(0),T7,FREEREF(1));
    xF306 = T6;
    yF307 = LITREF(lit_441);
    T9 = (P)YPeqQ(xF306,yF307);
    T8 = (P)YPbb(T9);
    T5 = T8;
    if (T5 != YPfalse) {
      T11 = (P)YOtail(l_);
      a1 = T11;
      l_ = a1;
      goto loop;
      T4 = T10;
    } else {
      T4 = YPfalse;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_precedes_allQ_431) {
  P l_;
  P loopF308;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_430,4);
  loopF308 = T1;
  FUNINIT(loopF308, 4,FREEREF(0),FREEREF(1),FREEREF(2),loopF308);
  T2 = CALL1(1,loopF308,l_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_subsequent_ambiguities_432) {
  P oprev_;
  P tmpF309;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(oprev_, 0);
loop:
  T4 = (P)YOtail(oprev_);
  T3 = CALL1(1,FREEREF(0),T4);
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF309 = T2;
  if (tmpF309 != YPfalse) {
    T5 = tmpF309;
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

FUNCODEDEF(fun_insert_433) {
  P oprev_,osub_;
  P yF314;
  P xF313;
  P yF312;
  P xF311;
  P indicF310;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1,a2;
LINK_STACK();
  ARG(oprev_, 0);
  ARG(osub_, 1);
loop:
  T1 = (P)YOemptyQ(osub_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,FREEREF(0),oprev_);
    T0 = T2;
  } else {
    T5 = (P)YOhead(osub_);
    T4 = CALL3(1,FREEREF(3),FREEREF(1),T5,FREEREF(2));
    indicF310 = T4;
    xF311 = indicF310;
    yF312 = LITREF(lit_441);
    T9 = (P)YPeqQ(xF311,yF312);
    T8 = (P)YPbb(T9);
    T7 = T8;
    if (T7 != YPfalse) {
      T10 = CALL1(1,FREEREF(0),oprev_);
      T6 = T10;
    } else {
      xF313 = indicF310;
      yF314 = LITREF(lit_442);
      T14 = (P)YPeqQ(xF313,yF314);
      T13 = (P)YPbb(T14);
      T12 = T13;
      if (T12 != YPfalse) {
        T16 = (P)YOtail(osub_);
        a1 = osub_;
        a2 = T16;
        oprev_ = a1;
        osub_ = a2;
        goto loop;
        T11 = T15;
      } else {
        T17 = CALL1(1,FREEREF(5),oprev_);
        T11 = T17;
      }
      T6 = T11;
    }
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_434) {
  P mets_;
  P insertF321;
  P check_subsequent_ambiguitiesF320;
  P precedes_allQF319;
  P make_ambiguousF318;
  P metF317;
  P yF316;
  P xF315;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(mets_, 0);
loop:
  xF315 = mets_;
  yF316 = Ynil;
  T4 = (P)YPeqQ(xF315,yF316);
  T3 = (P)YPbb(T4);
  T2 = T3;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T6 = (P)YOhead(mets_);
    check_type(T6,VARREF(YLmetG));
    metF317 = T6;
    T8 = FUNSHELL(1,fun_make_ambiguous_429,2);
    make_ambiguousF318 = T8;
    T9 = FUNSHELL(1,fun_precedes_allQ_431,3);
    precedes_allQF319 = T9;
    T10 = FUNSHELL(1,fun_check_subsequent_ambiguities_432,4);
    check_subsequent_ambiguitiesF320 = T10;
    T11 = FUNSHELL(1,fun_insert_433,6);
    insertF321 = T11;
    FUNINIT(make_ambiguousF318, 2,FREEREF(0),metF317);
    FUNINIT(precedes_allQF319, 3,metF317,FREEREF(1),FREEREF(2));
    FUNINIT(check_subsequent_ambiguitiesF320, 4,precedes_allQF319,FREEREF(0),make_ambiguousF318,metF317);
    FUNINIT(insertF321, 6,check_subsequent_ambiguitiesF320,metF317,FREEREF(1),FREEREF(2),insertF321,make_ambiguousF318);
    T12 = (P)YOtail(FREEREF(3));
    CALL2(1,insertF321,FREEREF(3),T12);
    T14 = (P)YOtail(mets_);
    a1 = T14;
    mets_ = a1;
    goto loop;
    T7 = T13;
    T5 = T7;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yord_app_mets_1) {
  P mets_,args_,order_mets_;
  P loopF324;
  P aheadF323;
  P oheadF322;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(mets_, 0);
  ARG(args_, 1);
  ARG(order_mets_, 2);
loop:
  T1 = (P)YOpair(YPfalse,Ynil);
  check_type(T1,VARREF(YLlstG));
  oheadF322 = T1;
  T3 = (P)YOpair(YPfalse,Ynil);
  check_type(T3,VARREF(YLlstG));
  aheadF323 = T3;
  T4 = FUNSHELL(1,fun_loop_434,5);
  loopF324 = T4;
  FUNINIT(loopF324, 5,aheadF323,args_,order_mets_,oheadF322,loopF324);
  T5 = CALL1(1,loopF324,mets_);
  T7 = (P)YOtail(oheadF322);
  T8 = (P)YOtail(aheadF323);
  T6 = CALL2(1,VARREF(YOtup),T7,T8);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_436) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_loop_437) {
  P i_;
  P xF330;
  P xF329;
  P iF328;
  P xF327;
  P yF326;
  P xF325;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  xF325 = i_;
  yF326 = FREEREF(0);
  T3 = (P)YPiE(xF325,yF326);
  T2 = (P)YPbb(T3);
  T1 = T2;
  if (T1 != YPfalse) {
    T0 = YPtrue;
  } else {
    xF327 = FREEREF(1);
    iF328 = i_;
    T8 = (P)YPopts_location(xF327);
    xF329 = iF328;
    xF330 = xF329;
    T12 = (P)YPiGG(xF330,(P)2);
    T11 = T12;
    T10 = T11;
    T9 = (P)YPi_((P)0,T10);
    T7 = (P)YPloc_off(T8,T9);
    T6 = T7;
    T13 = CALL2(1,VARREF(Yfun_spec),FREEREF(2),i_);
    T5 = CALL2(1,VARREF(YOisaQ),T6,T13);
    if (T5 != YPfalse) {
      T15 = (P)YOA(i_,YPint((P)1));
      a1 = T15;
      i_ = a1;
      goto loop;
      T4 = T14;
    } else {
      T4 = YPfalse;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ymet_appQ) {
  P met_,args_;
  P loopF332;
  P nF331;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(met_, 0);
  ARG(args_, 1);
loop:
  T3 = CALL1(1,VARREF(YOfun_unification_vars),met_);
  T2 = (P)YOemptyQ(T3);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(Ymet_app_unify),met_,args_);
    T0 = T4;
  } else {
    T6 = CALL1(1,VARREF(YOfun_arity),met_);
    check_type(T6,VARREF(YLfixnumG));
    nF331 = T6;
    T8 = FUNSHELL(1,fun_loop_437,4);
    loopF332 = T8;
    FUNINIT(loopF332, 4,nF331,args_,met_,loopF332);
    T9 = CALL1(1,loopF332,YPint((P)0));
    T7 = T9;
    T5 = T7;
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_439) {
  P ans_,ms_;
  P ansF334;
  P mF333;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(ans_, 0);
  ARG(ms_, 1);
loop:
  T1 = (P)YOemptyQ(ms_);
  if (T1 != YPfalse) {
    T0 = ans_;
  } else {
    T3 = (P)YOhead(ms_);
    mF333 = T3;
    T6 = CALL2(1,VARREF(Ymet_appQ),mF333,FREEREF(0));
    if (T6 != YPfalse) {
      T7 = (P)YOpair(mF333,ans_);
      T5 = T7;
    } else {
      T5 = ans_;
    }
    ansF334 = T5;
    T9 = (P)YOtail(ms_);
    a1 = ansF334;
    a2 = T9;
    ans_ = a1;
    ms_ = a2;
    goto loop;
    T4 = T8;
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yord_app_metsT) {
  P gf_,args_;
  P considered_metsF336;
  P colF335;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(gf_, 0);
  ARG(args_, 1);
loop:
  T2 = FUNSHELL(1,fun_col_439,2);
  colF335 = T2;
  FUNINIT(colF335, 2,args_,colF335);
  T4 = CALL1(1,VARREF(YOfun_mets),gf_);
  T3 = CALL2(0,colF335,Ynil,T4);
  T1 = T3;
  considered_metsF336 = T1;
  T5 = CALL3(1,VARREF(Yord_app_mets_1),considered_metsF336,args_,VARREF(Yorder_mets));
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yord_app_mets) {
  P gf_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(gf_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL2(1,VARREF(Yord_app_metsT),gf_,args_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOgen_cache_arg_pos) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPgen_cache_arg_pos(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOgen_cache_arg_pos_setter) {
  P z_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T0 = (P)YPgen_cache_arg_pos_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOgen_cache_singletons) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPgen_cache_singletons(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOgen_cache_singletons_setter) {
  P z_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T0 = (P)YPgen_cache_singletons_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOgen_cache_classes) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPgen_cache_classes(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOgen_cache_classes_setter) {
  P z_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T0 = (P)YPgen_cache_classes_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ymethod_accessor_offset) {
  P gen_,met_,args_;
  P xF357;
  P xF356;
  P iF355;
  P xF354;
  P xF353;
  P xF352;
  P iF351;
  P xF350;
  P yF349;
  P xF348;
  P tmpF347;
  P nF346;
  P xF345;
  P propQF344;
  P yF343;
  P xF342;
  P tagF341;
  P xF340;
  P xF339;
  P tmpF338;
  P propF337;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1,a2,a3;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  ARG(args_, 2);
loop:
  T1 = (P)YPmet_env(met_);
  propF337 = T1;
  tmpF338 = propF337;
  if (tmpF338 != YPfalse) {
    xF339 = propF337;
    xF340 = xF339;
    T9 = (P)YPiB(xF340,(P)3);
    T8 = T9;
    tagF341 = T8;
    T12 = (P)YPiE(tagF341,(P)0);
    T11 = (P)YPbb(T12);
    if (T11 != YPfalse) {
      T13 = (P)YPobject_class(xF339);
      T10 = T13;
    } else {
      T14 = (P)YPelt(VARREF(YDdirect_object_class),tagF341);
      T10 = T14;
    }
    T7 = T10;
    T6 = T7;
    xF342 = T6;
    yF343 = VARREF(YLpropG);
    T16 = (P)YPeqQ(xF342,yF343);
    T15 = (P)YPbb(T16);
    T5 = T15;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  propQF344 = T3;
  xF345 = args_;
  T19 = (P)YPopts_count(xF345);
  T18 = T19;
  nF346 = T18;
  tmpF347 = propQF344;
  if (tmpF347 != YPfalse) {
    xF348 = nF346;
    yF349 = YPint((P)1);
    T25 = (P)YPiE(xF348,yF349);
    T24 = (P)YPbb(T25);
    T23 = T24;
    if (T23 != YPfalse) {
      xF350 = args_;
      iF351 = YPint((P)0);
      T29 = (P)YPopts_location(xF350);
      xF352 = iF351;
      xF353 = xF352;
      T33 = (P)YPiGG(xF353,(P)2);
      T32 = T33;
      T31 = T32;
      T30 = (P)YPi_((P)0,T31);
      T28 = (P)YPloc_off(T29,T30);
      T27 = T28;
      T26 = CALL2(1,VARREF(Yprop_offset),T27,gen_);
      T22 = T26;
    } else {
      xF354 = args_;
      iF355 = YPint((P)1);
      T37 = (P)YPopts_location(xF354);
      xF356 = iF355;
      xF357 = xF356;
      T41 = (P)YPiGG(xF357,(P)2);
      T40 = T41;
      T39 = T40;
      T38 = (P)YPi_((P)0,T39);
      T36 = (P)YPloc_off(T37,T38);
      T35 = T36;
      T42 = (P)YPprop_getter(propF337);
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
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YOclass_isaQ(x_,VARREF(YLsingletonG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOsubclass_specQ) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YOclass_isaQ(x_,VARREF(YLsubclassG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOunion_specQ) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YOclass_isaQ(x_,VARREF(YLunionG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOprecise_specQ) {
  P x_;
  P tmpF360;
  P tmpF359;
  P tmpF358;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YOsingleton_specQ),x_);
  tmpF358 = T1;
  if (tmpF358 != YPfalse) {
    T2 = tmpF358;
  } else {
    T4 = CALL1(1,VARREF(YOsubclass_specQ),x_);
    tmpF359 = T4;
    if (tmpF359 != YPfalse) {
      T5 = tmpF359;
    } else {
      T7 = CALL1(1,VARREF(YOunion_specQ),x_);
      tmpF360 = T7;
      if (tmpF360 != YPfalse) {
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

FUNCODEDEF(fun_453) {
  P met_;
  P yF362;
  P xF361;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(met_, 0);
loop:
  T1 = CALL2(1,VARREF(Yfun_spec),met_,FREEREF(0));
  xF361 = T1;
  yF362 = VARREF(YLanyG);
  T3 = (P)YPiE(xF361,yF362);
  T2 = (P)YPbb(T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmets_unspecialized_atQ) {
  P mets_,pos_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
loop:
  T1 = FUNFAB(fun_453,1,pos_);
  T0 = CALL2(1,VARREF(YOallQ),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_455) {
  P met_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(met_, 0);
loop:
  T1 = CALL2(1,VARREF(Yfun_spec),met_,FREEREF(1));
  T0 = CALL2(1,VARREF(YOsubtypeQ),FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOprune_mets_by_type_at) {
  P mets_,type_,pos_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(mets_, 0);
  ARG(type_, 1);
  ARG(pos_, 2);
loop:
  T1 = FUNFAB(fun_455,2,type_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_457) {
  P met_;
  P T0;
  P a1;
LINK_STACK();
  ARG(met_, 0);
loop:
  T0 = CALL2(1,VARREF(Yfun_spec),met_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmets_specs_at) {
  P mets_,pos_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
loop:
  T1 = FUNFAB(fun_457,1,pos_);
  T0 = CALL2(1,VARREF(YOmap),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_459) {
  P spec_;
  P T0;
  P a1;
LINK_STACK();
  ARG(spec_, 0);
loop:
  T0 = CALL1(1,VARREF(YOsingleton_specQ),spec_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmets_singletons_at) {
  P mets_,pos_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
loop:
  T1 = fun_459;
  T2 = CALL2(1,VARREF(YOmets_specs_at),mets_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_461) {
  P spec_;
  P T0;
  P a1;
LINK_STACK();
  ARG(spec_, 0);
loop:
  T0 = CALL1(1,VARREF(YOsubclass_specQ),spec_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmets_subclasses_at) {
  P mets_,pos_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
loop:
  T1 = fun_461;
  T2 = CALL2(1,VARREF(YOmets_specs_at),mets_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_copy_463) {
  P i_;
  P iF365;
  P yF364;
  P xF363;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  xF363 = i_;
  yF364 = FREEREF(0);
  T4 = (P)YPiE(xF363,yF364);
  T3 = (P)YPbb(T4);
  T2 = T3;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = (P)YOtelt(FREEREF(1),i_);
    (P)YOtelt_setter(T5,FREEREF(2),i_);
    T7 = (P)YOA(i_,YPint((P)1));
    iF365 = T7;
    T8 = (P)YOtelt(FREEREF(1),iF365);
    (P)YOtelt_setter(T8,FREEREF(2),iF365);
    T10 = (P)YOA(iF365,YPint((P)1));
    a1 = T10;
    i_ = a1;
    goto loop;
    T6 = T9;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOcache_add) {
  P t_,k_,v_;
  P copyF370;
  P resF369;
  P xF368;
  P xF367;
  P olenF366;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(t_, 0);
  ARG(k_, 1);
  ARG(v_, 2);
loop:
  T1 = (P)YOtlen(t_);
  olenF366 = T1;
  T5 = (P)YOA(olenF366,YPint((P)2));
  xF367 = T5;
  xF368 = xF367;
  T7 = (P)YPiGG(xF368,(P)2);
  T6 = T7;
  T4 = T6;
  T3 = (P)YPtup(T4,VARREF(Ynul));
  resF369 = T3;
  T8 = FUNSHELL(1,fun_copy_463,4);
  copyF370 = T8;
  FUNINIT(copyF370, 4,olenF366,t_,resF369,copyF370);
  T9 = CALL1(0,copyF370,YPint((P)0));
  (P)YOtelt_setter(k_,resF369,olenF366);
  T10 = (P)YOA(olenF366,YPint((P)1));
  (P)YOtelt_setter(v_,resF369,T10);
  T2 = resF369;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_465) {
  P j_;
  P vF382;
  P yF381;
  P xF380;
  P valF379;
  P tagF378;
  P xF377;
  P xF376;
  P tmpF375;
  P yF374;
  P xF373;
  P yF372;
  P xF371;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1;
LINK_STACK();
  ARG(j_, 0);
loop:
  xF371 = j_;
  T2 = (P)YOtlen(FREEREF(0));
  yF372 = T2;
  T4 = (P)YPiE(xF371,yF372);
  T3 = (P)YPbb(T4);
  T1 = T3;
  if (T1 != YPfalse) {
    xF373 = FREEREF(1);
    yF374 = VARREF(YOgen_cache_classes);
    T9 = (P)YPeqQ(xF373,yF374);
    T8 = (P)YPbb(T9);
    T7 = T8;
    tmpF375 = T7;
    if (tmpF375 != YPfalse) {
      T12 = BOXVAL(FREEREF(2));
      T11 = (P)YPclass_forward(T12);
      T10 = T11;
    } else {
      T10 = YPfalse;
    }
    T6 = T10;
    if (T6 != YPfalse) {
      CALL1(1,VARREF(Yupdate_instance_for_changed_class),FREEREF(3));
      xF376 = FREEREF(3);
      xF377 = xF376;
      T16 = (P)YPiB(xF377,(P)3);
      T15 = T16;
      tagF378 = T15;
      T19 = (P)YPiE(tagF378,(P)0);
      T18 = (P)YPbb(T19);
      if (T18 != YPfalse) {
        T20 = (P)YPobject_class(xF376);
        T17 = T20;
      } else {
        T21 = (P)YPelt(VARREF(YDdirect_object_class),tagF378);
        T17 = T21;
      }
      T14 = T17;
      T13 = T14;
      BOXVAL(FREEREF(2)) = T13;
      T23 = CALL1(1,FREEREF(1),FREEREF(4));
      a1 = T23;
      j_ = a1;
      goto loop;
      T5 = T22;
    } else {
      T26 = (P)YOA(FREEREF(9),YPint((P)1));
      T25 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,FREEREF(6),YPfalse,FREEREF(7),FREEREF(8),T26,FREEREF(10));
      valF379 = T25;
      T29 = BOXVAL(FREEREF(2));
      T28 = CALL3(1,VARREF(YOcache_add),FREEREF(0),T29,valF379);
      T27 = CALL2(1,FREEREF(11),T28,FREEREF(4));
      T24 = T27;
      T5 = T24;
    }
    T0 = T5;
  } else {
    T32 = (P)YOtelt(FREEREF(0),j_);
    xF380 = T32;
    T33 = BOXVAL(FREEREF(2));
    yF381 = T33;
    T35 = (P)YPeqQ(xF380,yF381);
    T34 = (P)YPbb(T35);
    T31 = T34;
    if (T31 != YPfalse) {
      T38 = (P)YOA(j_,YPint((P)1));
      T37 = (P)YOtelt(FREEREF(0),T38);
      vF382 = T37;
      T40 = (P)YOA(FREEREF(9),YPint((P)1));
      T39 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,FREEREF(6),vF382,FREEREF(7),FREEREF(8),T40,FREEREF(10));
      T36 = T39;
      T30 = T36;
    } else {
      T42 = (P)YOA(j_,YPint((P)2));
      a1 = T42;
      j_ = a1;
      goto loop;
      T30 = T41;
    }
    T0 = T30;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss_1_using) {
  P key_,instance_,all_assocs_,all_assocs_setter_,gen_,cache_,mets_,sorted_mets_,i_,args_;
  P loopF386;
  P assocsF385;
  P cacheF384;
  P tmpF383;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
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
loop:
  key_ = BOXFAB(key_);
  tmpF383 = cache_;
  if (tmpF383 != YPfalse) {
    T3 = tmpF383;
  } else {
    T4 = (P)YPgen_cache(YPtrue,i_,VARREF(YDnul_assocs),VARREF(YDnul_assocs),(P)0);
    T3 = T4;
  }
  T2 = T3;
  cacheF384 = T2;
  T6 = CALL1(1,all_assocs_,cacheF384);
  assocsF385 = T6;
  T7 = FUNSHELL(1,fun_loop_465,12);
  loopF386 = T7;
  FUNINIT(loopF386, 12,assocsF385,all_assocs_,key_,instance_,cacheF384,loopF386,gen_,mets_,sorted_mets_,i_,args_,all_assocs_setter_);
  T8 = CALL1(0,loopF386,YPint((P)0));
  T5 = cacheF384;
  T1 = T5;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_copy_467) {
  P k_;
  P xF400;
  P xF399;
  P iF398;
  P xF397;
  P zF396;
  P xF395;
  P xF394;
  P iF393;
  P xF392;
  P yF391;
  P xF390;
  P yF389;
  P xF388;
  P xF387;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(k_, 0);
loop:
  xF387 = FREEREF(0);
  T3 = (P)YPopts_count(xF387);
  T2 = T3;
  xF388 = T2;
  yF389 = k_;
  T5 = (P)YPeqQ(xF388,yF389);
  T4 = (P)YPbb(T5);
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    xF390 = k_;
    yF391 = FREEREF(2);
    T9 = (P)YPeqQ(xF390,yF391);
    T8 = (P)YPbb(T9);
    T7 = T8;
    if (T7 != YPfalse) {
      T6 = FREEREF(3);
    } else {
      xF392 = FREEREF(0);
      iF393 = k_;
      T12 = (P)YPopts_location(xF392);
      xF394 = iF393;
      xF395 = xF394;
      T16 = (P)YPiGG(xF395,(P)2);
      T15 = T16;
      T14 = T15;
      T13 = (P)YPi_((P)0,T14);
      T11 = (P)YPloc_off(T12,T13);
      T10 = T11;
      T6 = T10;
    }
    zF396 = T6;
    xF397 = FREEREF(1);
    iF398 = k_;
    T18 = (P)YPopts_location(xF397);
    xF399 = iF398;
    xF400 = xF399;
    T22 = (P)YPiGG(xF400,(P)2);
    T21 = T22;
    T20 = T21;
    T19 = (P)YPi_((P)0,T20);
    T17 = (P)YPloc_off_setter(zF396,T18,T19);
    T24 = (P)YOA(k_,YPint((P)1));
    a1 = T24;
    k_ = a1;
    goto loop;
    T0 = T23;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOspecd_args) {
  P args_,i_,arg_;
  P copyF410;
  P rF409;
  P tF408;
  P xF407;
  P xF406;
  P xF405;
  P vF404;
  P xF403;
  P xF402;
  P xF401;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2,a3;
LINK_STACK();
  ARG(args_, 0);
  ARG(i_, 1);
  ARG(arg_, 2);
loop:
  xF401 = args_;
  T4 = (P)YPopts_count(xF401);
  T3 = T4;
  xF402 = T3;
  xF403 = xF402;
  T6 = (P)YPiGG(xF403,(P)2);
  T5 = T6;
  T2 = T5;
  T1 = (P)YPtup(T2,VARREF(Ynul));
  vF404 = T1;
  T11 = (P)YPtlen(vF404);
  T10 = (P)YPprop_dat_at(vF404,T11);
  xF405 = T10;
  T12 = (P)YPtag_into(xF405,(P)3);
  T9 = T12;
  T14 = (P)YPtlen(vF404);
  xF406 = T14;
  xF407 = xF406;
  tF408 = (P)1;
  T17 = (P)YPiLL(xF407,(P)2);
  T16 = (P)YPiv(T17,tF408);
  T15 = T16;
  T13 = T15;
  T8 = (P)YPopts_tup(T9,T13,vF404);
  rF409 = T8;
  T19 = FUNSHELL(1,fun_copy_467,5);
  copyF410 = T19;
  FUNINIT(copyF410, 5,args_,rF409,i_,arg_,copyF410);
  T20 = CALL1(0,copyF410,YPint((P)0));
  T18 = T20;
  T7 = T18;
  T0 = T7;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yrequires_singleton_prec) {
  P mets_,pos_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
loop:
  T2 = CALL2(1,VARREF(YOmets_subclasses_at),mets_,pos_);
  T1 = (P)YOemptyQ(T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_470) {
  P singletons_;
  P app_metsF415;
  P smetsF414;
  P argsF413;
  P argF412;
  P singF411;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(singletons_, 0);
loop:
  T1 = (P)YOemptyQ(singletons_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T3 = (P)YOhead(singletons_);
    singF411 = T3;
    T5 = (P)YPtype_object(singF411);
    argF412 = T5;
    T7 = CALL3(1,VARREF(YOspecd_args),FREEREF(1),FREEREF(2),argF412);
    argsF413 = T7;
    T9 = CALL2(1,VARREF(Ychoose_methods),FREEREF(3),argsF413);
    smetsF414 = T9;
    T11 = CALL3(1,VARREF(YOprune_mets_by_type_at),FREEREF(4),singF411,FREEREF(2));
    app_metsF415 = T11;
    CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,argF412,argF412,VARREF(YOgen_cache_singletons),VARREF(YOgen_cache_singletons_setter),FREEREF(3),FREEREF(0),FREEREF(4),smetsF414,FREEREF(2),argsF413);
    T13 = (P)YOtail(singletons_);
    a1 = T13;
    singletons_ = a1;
    goto loop;
    T10 = T12;
    T8 = T10;
    T6 = T8;
    T4 = T6;
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yensure_singleton_cache) {
  P gen_,cache_,mets_,sorted_mets_,i_,args_;
  P loopF419;
  P cacheF418;
  P singletonsF417;
  P tmpF416;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4,a5,a6;
LINK_STACK();
  ARG(gen_, 0);
  ARG(cache_, 1);
  ARG(mets_, 2);
  ARG(sorted_mets_, 3);
  ARG(i_, 4);
  ARG(args_, 5);
loop:
  tmpF416 = cache_;
  if (tmpF416 != YPfalse) {
    T1 = tmpF416;
  } else {
    T3 = CALL2(1,VARREF(Yrequires_singleton_prec),mets_,i_);
    if (T3 != YPfalse) {
      T4 = (P)YPgen_cache(YPfalse,i_,VARREF(YDnul_assocs),VARREF(YDnul_assocs),(P)0);
      T2 = T4;
    } else {
      T6 = CALL2(1,VARREF(YOmets_singletons_at),mets_,i_);
      singletonsF417 = T6;
      T8 = (P)YOemptyQ(singletonsF417);
      if (T8 != YPfalse) {
        T7 = YPfalse;
      } else {
        T10 = (P)YPgen_cache(YPtrue,i_,VARREF(YDnul_assocs),VARREF(YDnul_assocs),(P)0);
        cacheF418 = T10;
        T12 = FUNSHELL(1,fun_loop_470,6);
        loopF419 = T12;
        FUNINIT(loopF419, 6,cacheF418,args_,i_,gen_,mets_,loopF419);
        T13 = CALL1(0,loopF419,singletonsF417);
        T11 = T13;
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
  P app_metsF448;
  P classF447;
  P tagF446;
  P xF445;
  P xF444;
  P metsF443;
  P tmpF442;
  P tmpF441;
  P yF440;
  P xF439;
  P tmpF438;
  P singQF437;
  P cacheF436;
  P argF435;
  P xF434;
  P xF433;
  P iF432;
  P xF431;
  P tmpF430;
  P xF429;
  P xF428;
  P xF427;
  P xF426;
  P yF425;
  P xF424;
  P tmpF423;
  P tmpF422;
  P yF421;
  P xF420;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71;
  P a1,a2,a3,a4,a5,a6;
LINK_STACK();
  ARG(gen_, 0);
  ARG(ocache_, 1);
  ARG(mets_, 2);
  ARG(sorted_mets_, 3);
  ARG(i_, 4);
  ARG(args_, 5);
loop:
  xF420 = i_;
  T2 = CALL1(1,VARREF(YOfun_arity),gen_);
  yF421 = T2;
  T4 = (P)YPiE(xF420,yF421);
  T3 = (P)YPbb(T4);
  T1 = T3;
  if (T1 != YPfalse) {
    T7 = (P)YOhead(sorted_mets_);
    T6 = CALL3(1,VARREF(Ymethod_accessor_offset),gen_,T7,args_);
    tmpF422 = T6;
    if (tmpF422 != YPfalse) {
      T8 = tmpF422;
    } else {
      T8 = sorted_mets_;
    }
    T5 = T8;
    T0 = T5;
  } else {
    tmpF423 = ocache_;
    if (tmpF423 != YPfalse) {
      xF424 = i_;
      T14 = (P)YPgen_cache_arg_pos(ocache_);
      yF425 = T14;
      xF426 = xF424;
      xF427 = xF426;
      T19 = (P)YPiGG(xF427,(P)2);
      T18 = T19;
      T17 = T18;
      xF428 = yF425;
      xF429 = xF428;
      T22 = (P)YPiGG(xF429,(P)2);
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
    tmpF430 = T11;
    if (tmpF430 != YPfalse) {
      T23 = tmpF430;
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
        xF431 = args_;
        iF432 = i_;
        T31 = (P)YPopts_location(xF431);
        xF433 = iF432;
        xF434 = xF433;
        T35 = (P)YPiGG(xF434,(P)2);
        T34 = T35;
        T33 = T34;
        T32 = (P)YPi_((P)0,T33);
        T30 = (P)YPloc_off(T31,T32);
        T29 = T30;
        argF435 = T29;
        T37 = CALLN(1,VARREF(Yensure_singleton_cache),6,gen_,ocache_,mets_,sorted_mets_,i_,args_);
        cacheF436 = T37;
        T41 = (P)YOhead(sorted_mets_);
        T40 = CALL2(1,VARREF(Yfun_spec),T41,i_);
        T39 = CALL1(1,VARREF(YOsingleton_specQ),T40);
        singQF437 = T39;
        tmpF438 = singQF437;
        if (tmpF438 != YPfalse) {
          xF439 = ocache_;
          yF440 = cacheF436;
          T48 = (P)YPeqQ(xF439,yF440);
          T47 = (P)YPbb(T48);
          T46 = T47;
          T45 = T46;
        } else {
          T45 = YPfalse;
        }
        T44 = T45;
        tmpF441 = T44;
        if (tmpF441 != YPfalse) {
          T49 = tmpF441;
        } else {
          tmpF442 = cacheF436;
          if (tmpF442 != YPfalse) {
            T53 = (P)YPgen_cache_missableQ(cacheF436);
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
          T56 = (P)YPsingleton(argF435);
          T55 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,T56,i_);
          metsF443 = T55;
          T57 = CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,argF435,argF435,VARREF(YOgen_cache_singletons),VARREF(YOgen_cache_singletons_setter),gen_,cacheF436,metsF443,sorted_mets_,i_,args_);
          T54 = T57;
          T42 = T54;
        } else {
          if (singQF437 != YPfalse) {
            T58 = cacheF436;
          } else {
            xF444 = argF435;
            xF445 = xF444;
            T63 = (P)YPiB(xF445,(P)3);
            T62 = T63;
            tagF446 = T62;
            T66 = (P)YPiE(tagF446,(P)0);
            T65 = (P)YPbb(T66);
            if (T65 != YPfalse) {
              T67 = (P)YPobject_class(xF444);
              T64 = T67;
            } else {
              T68 = (P)YPelt(VARREF(YDdirect_object_class),tagF446);
              T64 = T68;
            }
            T61 = T64;
            T60 = T61;
            classF447 = T60;
            T70 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,classF447,i_);
            app_metsF448 = T70;
            T71 = CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,classF447,argF435,VARREF(YOgen_cache_classes),VARREF(YOgen_cache_classes_setter),gen_,cacheF436,app_metsF448,sorted_mets_,i_,args_);
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
  P metsF449;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Ychoose_methods),gen_,args_);
  metsF449 = T1;
  T3 = (P)YPfun_cache(gen_);
  T4 = (P)YPgen_mets(gen_);
  T2 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,gen_,T3,T4,metsF449,YPint((P)0),args_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

INLINE P Ygen_lookup(P gen_,P args_) {
  P cF451;
  P tmpF450;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
DEFCREGS();
loop:
  T2 = (P)YPfun_cache(gen_);
  tmpF450 = T2;
  if (tmpF450 != YPfalse) {
    T3 = tmpF450;
  } else {
    T5 = XCALL2(1,VARREF(Ygen_lookup_miss),gen_,args_);
    T4 = (P)YPfun_cache_setter(T5,gen_);
    T3 = T4;
  }
  T1 = T3;
  cF451 = T1;
  T6 = (P)Ygen_lookup_1(gen_,cF451,args_);
  T0 = T6;
  return T0;
}

INLINE P Yprop_value_at(P object_,P offset_) {
  P xF459;
  P xF458;
  P propsF457;
  P yF456;
  P xF455;
  P valF454;
  P xF453;
  P xF452;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1,a2;
DEFCREGS();
loop:
  xF452 = offset_;
  xF453 = xF452;
  T4 = (P)YPiGG(xF453,(P)2);
  T3 = T4;
  T2 = T3;
  T1 = (P)YPprop_elt(object_,T2);
  valF454 = T1;
  xF455 = valF454;
  yF456 = VARREF(Ynul_prop);
  T8 = (P)YPeqQ(xF455,yF456);
  T7 = (P)YPbb(T8);
  T6 = T7;
  if (T6 != YPfalse) {
    T10 = XCALL1(1,VARREF(Yobject_props),object_);
    propsF457 = T10;
    T14 = XCALL2(1,VARREF(YOelt),propsF457,offset_);
    T13 = (P)YPprop_init(T14);
    T12 = XCALL1(1,T13,object_);
    xF458 = offset_;
    xF459 = xF458;
    T17 = (P)YPiGG(xF459,(P)2);
    T16 = T17;
    T15 = T16;
    T11 = (P)YPprop_elt_setter(T12,object_,T15);
    T9 = T11;
    T5 = T9;
  } else {
    T5 = valF454;
  }
  T0 = T5;
  return T0;
}

P Yprop_bound_atQ(P object_,P offset_) {
  P yF467;
  P xF466;
  P propsF465;
  P yF464;
  P xF463;
  P valF462;
  P xF461;
  P xF460;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
DEFCREGS();
loop:
  xF460 = offset_;
  xF461 = xF460;
  T4 = (P)YPiGG(xF461,(P)2);
  T3 = T4;
  T2 = T3;
  T1 = (P)YPprop_elt(object_,T2);
  valF462 = T1;
  xF463 = valF462;
  yF464 = VARREF(Ynul_prop);
  T8 = (P)YPeqQ(xF463,yF464);
  T7 = (P)YPbb(T8);
  T6 = T7;
  if (T6 != YPfalse) {
    T10 = XCALL1(1,VARREF(Yobject_props),object_);
    propsF465 = T10;
    T14 = XCALL2(1,VARREF(YOelt),propsF465,offset_);
    T13 = (P)YPprop_init(T14);
    xF466 = T13;
    yF467 = VARREF(YPprop_unbound_error);
    T16 = (P)YPeqQ(xF466,yF467);
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
  P xF469;
  P xF468;
  P T0,T1,T2,T3;
  P a1,a2,a3;
DEFCREGS();
loop:
  xF468 = offset_;
  xF469 = xF468;
  T3 = (P)YPiGG(xF469,(P)2);
  T2 = T3;
  T1 = T2;
  T0 = (P)YPprop_elt_setter(z_,object_,T1);
  return T0;
}

INLINE P Ygen_lookup_1_using(P key_,P i_,P len_,P assocs_,P missableQ_,P gen_,P args_) {
  P yF471;
  P xF470;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2,a3,a4,a5,a6,a7;
DEFCREGS();
loop:
  T2 = (P)YPiE(i_,len_);
  T1 = (P)YPbb(T2);
  if (T1 != YPfalse) {
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
    T8 = (P)YPtelt(assocs_,i_);
    xF470 = T8;
    yF471 = key_;
    T10 = (P)YPeqQ(xF470,yF471);
    T9 = (P)YPbb(T10);
    T7 = T9;
    if (T7 != YPfalse) {
      T13 = (P)YPiA(i_,(P)1);
      T12 = (P)YPtelt(assocs_,T13);
      T11 = (P)Ygen_lookup_1(gen_,T12,args_);
      T6 = T11;
    } else {
      T15 = (P)YPiA(i_,(P)2);
      a1 = key_;
      a2 = T15;
      a3 = len_;
      a4 = assocs_;
      a5 = missableQ_;
      a6 = gen_;
      a7 = args_;
      key_ = a1;
      i_ = a2;
      len_ = a3;
      assocs_ = a4;
      missableQ_ = a5;
      gen_ = a6;
      args_ = a7;
      goto loop;
      T6 = T14;
    }
    T0 = T6;
  }
  return T0;
}

P Ygen_lookup_1(P gen_,P cache_,P args_) {
  P tagF489;
  P xF488;
  P xF487;
  P assocsF486;
  P yF485;
  P xF484;
  P valF483;
  P assocsF482;
  P argF481;
  P xF480;
  P xF479;
  P iF478;
  P xF477;
  P yF476;
  P xF475;
  P tagF474;
  P xF473;
  P xF472;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1,a2,a3;
DEFCREGS();
loop:
  xF472 = cache_;
  xF473 = xF472;
  T5 = (P)YPiB(xF473,(P)3);
  T4 = T5;
  tagF474 = T4;
  T8 = (P)YPiE(tagF474,(P)0);
  T7 = (P)YPbb(T8);
  if (T7 != YPfalse) {
    T9 = (P)YPobject_class(xF472);
    T6 = T9;
  } else {
    T10 = (P)YPelt(VARREF(YDdirect_object_class),tagF474);
    T6 = T10;
  }
  T3 = T6;
  T2 = T3;
  xF475 = T2;
  yF476 = VARREF(YLgen_cacheG);
  T12 = (P)YPeqQ(xF475,yF476);
  T11 = (P)YPbb(T12);
  T1 = T11;
  if (T1 != YPfalse) {
    xF477 = args_;
    T15 = (P)YPgen_cache_arg_pos(cache_);
    iF478 = T15;
    T17 = (P)YPopts_location(xF477);
    xF479 = iF478;
    xF480 = xF479;
    T21 = (P)YPiGG(xF480,(P)2);
    T20 = T21;
    T19 = T20;
    T18 = (P)YPi_((P)0,T19);
    T16 = (P)YPloc_off(T17,T18);
    T14 = T16;
    argF481 = T14;
    T24 = (P)YPgen_cache_singletons(cache_);
    assocsF482 = T24;
    T26 = (P)YPtlen(assocsF482);
    T27 = (P)YPgen_cache_missableQ(cache_);
    T25 = (P)Ygen_lookup_1_using(argF481,(P)0,T26,assocsF482,T27,gen_,args_);
    T23 = T25;
    valF483 = T23;
    xF484 = valF483;
    yF485 = VARREF(YDmissed_dispatch);
    T31 = (P)YPeqQ(xF484,yF485);
    T30 = (P)YPbb(T31);
    T29 = T30;
    if (T29 != YPfalse) {
      T33 = (P)YPgen_cache_classes(cache_);
      assocsF486 = T33;
      xF487 = argF481;
      xF488 = xF487;
      T38 = (P)YPiB(xF488,(P)3);
      T37 = T38;
      tagF489 = T37;
      T41 = (P)YPiE(tagF489,(P)0);
      T40 = (P)YPbb(T41);
      if (T40 != YPfalse) {
        T42 = (P)YPobject_class(xF487);
        T39 = T42;
      } else {
        T43 = (P)YPelt(VARREF(YDdirect_object_class),tagF489);
        T39 = T43;
      }
      T36 = T39;
      T35 = T36;
      T44 = (P)YPtlen(assocsF486);
      T34 = (P)Ygen_lookup_1_using(T35,(P)0,T44,assocsF486,YPfalse,gen_,args_);
      T32 = T34;
      T28 = T32;
    } else {
      T28 = valF483;
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
  P ambiguous_metsF492;
  P sorted_metsF491;
  P ord_amb_metsF490;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yord_app_metsT),gen_,args_);
  ord_amb_metsF490 = T1;
  T3 = (P)YOtelt(ord_amb_metsF490,YPint((P)0));
  sorted_metsF491 = T3;
  T5 = (P)YOtelt(ord_amb_metsF490,YPint((P)1));
  ambiguous_metsF492 = T5;
  T7 = (P)YOemptyQ(sorted_metsF491);
  if (T7 != YPfalse) {
    T8 = CALL2(1,VARREF(Yno_applicable_methods_error),gen_,args_);
    T6 = T8;
  } else {
    T6 = sorted_metsF491;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPdispatch) {
  P args_;
  P resF514;
  P xF513;
  P xF512;
  P iF511;
  P xF510;
  P xF509;
  P xF508;
  P iF507;
  P xF506;
  P xF505;
  P xF504;
  P iF503;
  P xF502;
  P yF501;
  P xF500;
  P xF499;
  P yF498;
  P xF497;
  P tagF496;
  P xF495;
  P xF494;
  P resultF493;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T2 = (P)YPfun_reg();
  T1 = (P)Ygen_lookup(T2,args_);
  resultF493 = T1;
  xF494 = resultF493;
  xF495 = xF494;
  T8 = (P)YPiB(xF495,(P)3);
  T7 = T8;
  tagF496 = T7;
  T11 = (P)YPiE(tagF496,(P)0);
  T10 = (P)YPbb(T11);
  if (T10 != YPfalse) {
    T12 = (P)YPobject_class(xF494);
    T9 = T12;
  } else {
    T13 = (P)YPelt(VARREF(YDdirect_object_class),tagF496);
    T9 = T13;
  }
  T6 = T9;
  T5 = T6;
  xF497 = T5;
  yF498 = VARREF(YLfixnumG);
  T15 = (P)YPeqQ(xF497,yF498);
  T14 = (P)YPbb(T15);
  T4 = T14;
  if (T4 != YPfalse) {
    xF499 = args_;
    T20 = (P)YPopts_count(xF499);
    T19 = T20;
    xF500 = T19;
    yF501 = YPint((P)1);
    T22 = (P)YPiE(xF500,yF501);
    T21 = (P)YPbb(T22);
    T18 = T21;
    if (T18 != YPfalse) {
      xF502 = args_;
      iF503 = YPint((P)0);
      T26 = (P)YPopts_location(xF502);
      xF504 = iF503;
      xF505 = xF504;
      T30 = (P)YPiGG(xF505,(P)2);
      T29 = T30;
      T28 = T29;
      T27 = (P)YPi_((P)0,T28);
      T25 = (P)YPloc_off(T26,T27);
      T24 = T25;
      T23 = (P)Yprop_value_at(T24,resultF493);
      T17 = T23;
    } else {
      xF506 = args_;
      iF507 = YPint((P)0);
      T34 = (P)YPopts_location(xF506);
      xF508 = iF507;
      xF509 = xF508;
      T38 = (P)YPiGG(xF509,(P)2);
      T37 = T38;
      T36 = T37;
      T35 = (P)YPi_((P)0,T36);
      T33 = (P)YPloc_off(T34,T35);
      T32 = T33;
      xF510 = args_;
      iF511 = YPint((P)1);
      T41 = (P)YPopts_location(xF510);
      xF512 = iF511;
      xF513 = xF512;
      T45 = (P)YPiGG(xF513,(P)2);
      T44 = T45;
      T43 = T44;
      T42 = (P)YPi_((P)0,T43);
      T40 = (P)YPloc_off(T41,T42);
      T39 = T40;
      T31 = (P)Yprop_value_at_setter(T32,T39,resultF493);
      T17 = T31;
    }
    resF514 = T17;
    (P)YPunlink_stack();
    T16 = resF514;
    T3 = T16;
  } else {
    T47 = (P)YPhead(resultF493);
    T48 = (P)YPtail(resultF493);
    T46 = (P)YPraw_met_call(T47,T48);
    T3 = T46;
  }
  T0 = T3;
  QRET(T0);
}

FUNCODEDEF(YPpatch_early_generic) {
  P generic_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(generic_, 0);
loop:
  T1 = (P)YPmet_code(VARREF(YPdispatch));
  T0 = (P)YPgen_code_setter(T1,generic_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_names) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_names),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_names_setter) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_names_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_specs) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_specs),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_specs_setter) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_specs_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_naryQ) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_naryQ),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_naryQ_setter) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_naryQ_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_arity) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_arity),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_arity_setter) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_arity_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_val) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_val),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_val_setter) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_val_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_unification_vars) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_unification_vars),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_unification_vars_setter) {
  P z_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_unification_vars_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yobject_class) {
  P x_;
  P tagF517;
  P xF516;
  P xF515;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  xF515 = x_;
  xF516 = xF515;
  T3 = (P)YPiB(xF516,(P)3);
  T2 = T3;
  tagF517 = T2;
  T6 = (P)YPiE(tagF517,(P)0);
  T5 = (P)YPbb(T6);
  if (T5 != YPfalse) {
    T7 = (P)YPobject_class(xF515);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF517);
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
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPclass_ancestors(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_tailQ_497) {
  P l_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = (P)YOtail(l_);
  T0 = CALL2(1,VARREF(YOmemQ),T1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_candidate_498) {
  P c_;
  P tmpF519;
  P tailQF518;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(0,fun_tailQ_497,1);
  tailQF518 = T1;
  FUNINIT(tailQF518, 1,c_);
  T4 = CALL2(1,VARREF(YOanyQ),tailQF518,FREEREF(0));
  T3 = CALL1(1,VARREF(Ynot),T4);
  tmpF519 = T3;
  if (tmpF519 != YPfalse) {
    T5 = c_;
  } else {
    T5 = YPfalse;
  }
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_candidate_at_head_499) {
  P l_;
  P tmpF520;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T2 = (P)YOemptyQ(l_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  tmpF520 = T1;
  if (tmpF520 != YPfalse) {
    T5 = (P)YOhead(l_);
    T4 = CALL1(0,FREEREF(0),T5);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_next_500) {
  P l_;
  P yF522;
  P xF521;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T2 = (P)YOhead(l_);
  xF521 = T2;
  yF522 = FREEREF(0);
  T4 = (P)YPeqQ(xF521,yF522);
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

FUNCODEDEF(fun_merge_lists_501) {
  P partial_cpl_,remaining_lists_;
  P del_nextF526;
  P nextF525;
  P candidate_at_headF524;
  P candidateF523;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(partial_cpl_, 0);
  ARG(remaining_lists_, 1);
loop:
  T1 = CALL2(1,VARREF(YOallQ),VARREF(YOOemptyQ),remaining_lists_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YOrevX),partial_cpl_);
    T0 = T2;
  } else {
    T4 = FUNSHELL(1,fun_candidate_498,1);
    candidateF523 = T4;
    T5 = FUNSHELL(0,fun_candidate_at_head_499,1);
    candidate_at_headF524 = T5;
    FUNINIT(candidateF523, 1,remaining_lists_);
    FUNINIT(candidate_at_headF524, 1,candidateF523);
    T7 = CALL2(1,VARREF(YOanyQ),candidate_at_headF524,remaining_lists_);
    nextF525 = T7;
    if (nextF525 != YPfalse) {
      T10 = FUNSHELL(0,fun_del_next_500,1);
      del_nextF526 = T10;
      FUNINIT(del_nextF526, 1,nextF525);
      T12 = (P)YOpair(nextF525,partial_cpl_);
      T13 = CALL2(1,VARREF(YOmap),del_nextF526,remaining_lists_);
      a1 = T12;
      a2 = T13;
      partial_cpl_ = a1;
      remaining_lists_ = a2;
      goto loop;
      T9 = T11;
      T8 = T9;
    } else {
      T14 = CALL1(1,VARREF(Ycpl_error),LITREF(lit_573));
      T8 = T14;
    }
    T6 = T8;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yclass_ordered_ancestors) {
  P c_;
  P merge_listsF528;
  P parentsF527;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = (P)YPclass_parents(c_);
  parentsF527 = T1;
  T3 = FUNSHELL(1,fun_merge_lists_501,1);
  merge_listsF528 = T3;
  FUNINIT(merge_listsF528, 1,merge_listsF528);
  T5 = CALL1(1,VARREF(YOlst),c_);
  T7 = CALL2(1,VARREF(YOmap),VARREF(YOclass_ancestors),parentsF527);
  T6 = (P)YOadd(T7,parentsF527);
  T4 = CALL2(1,merge_listsF528,T5,T6);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOclass_direct_props) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPclass_direct_props(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yclass_ordered_props) {
  P x_;
  P propsF529;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T5 = (P)YPclass_ancestors(x_);
  T4 = CALL1(1,VARREF(YOrev),T5);
  T3 = CALL2(1,VARREF(YOmap),VARREF(YOclass_direct_props),T4);
  T2 = CALL3(1,VARREF(YOfold),VARREF(YOcat2),Ynil,T3);
  T1 = CALL1(1,VARREF(YOdel_dups),T2);
  propsF529 = T1;
  T6 = (P)YOlen(propsF529);
  (P)YPclass_prop_len_setter(T6,x_);
  T0 = propsF529;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Ydel_class) {
  P class_;
  P a1;
LINK_STACK();
  ARG(class_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_506) {
  P parent_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(parent_, 0);
loop:
  T2 = (P)YPclass_children(parent_);
  T1 = (P)YOadd_new(T2,FREEREF(0));
  T0 = (P)YPclass_children_setter(T1,parent_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_507) {
  P ancestor_;
  P xF533;
  P xF532;
  P xF531;
  P xF530;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(ancestor_, 0);
loop:
  xF530 = YPint((P)1);
  xF531 = xF530;
  T3 = (P)YPiGG(xF531,(P)2);
  T2 = T3;
  T1 = T2;
  T5 = (P)YPclass_id(ancestor_);
  xF532 = T5;
  xF533 = xF532;
  T7 = (P)YPiGG(xF533,(P)2);
  T6 = T7;
  T4 = T6;
  T0 = (P)YPselt_setter(T1,FREEREF(0),T4);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yinit_class) {
  P x_;
  P rowF548;
  P xF547;
  P xF546;
  P xF545;
  P xF544;
  P yF543;
  P xF542;
  P yF541;
  P xF540;
  P xF539;
  P xF538;
  P xF537;
  P xF536;
  P yF535;
  P xF534;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  xF534 = VARREF(YDmax_classes);
  yF535 = VARREF(YTnext_class_idT);
  xF536 = xF534;
  xF537 = xF536;
  T5 = (P)YPiGG(xF537,(P)2);
  T4 = T5;
  T3 = T4;
  xF538 = yF535;
  xF539 = xF538;
  T8 = (P)YPiGG(xF539,(P)2);
  T7 = T8;
  T6 = T7;
  T2 = (P)YPiL(T3,T6);
  T1 = (P)YPbb(T2);
  T0 = T1;
  if (T0 != YPfalse) {
    T9 = CALL2(1,VARREF(Yinternal_error),LITREF(lit_582),VARREF(YDmax_classes));
  } else {
  }
  T12 = (P)YPclass_parents(x_);
  T11 = (P)YOlen(T12);
  xF540 = T11;
  yF541 = YPint((P)0);
  T14 = (P)YPeqQ(xF540,yF541);
  T13 = (P)YPbb(T14);
  T10 = T13;
  if (T10 != YPfalse) {
    T15 = CALL1(1,VARREF(Yinternal_error),LITREF(lit_583));
  } else {
  }
  (P)YPclass_id_setter(VARREF(YTnext_class_idT),x_);
  T16 = (P)YOA(VARREF(YTnext_class_idT),YPint((P)1));
  VARSET(YTnext_class_idT,T16);
  xF542 = x_;
  yF543 = VARREF(YLanyG);
  T20 = (P)YPeqQ(xF542,yF543);
  T19 = (P)YPbb(T20);
  T18 = T19;
  T17 = CALL1(1,VARREF(Ynot),T18);
  if (T17 != YPfalse) {
    T21 = FUNFAB(fun_506,1,x_);
    T22 = (P)YPclass_parents(x_);
    CALL2(1,VARREF(YOdo),T21,T22);
    T24 = CALL1(1,VARREF(Yclass_ordered_ancestors),x_);
    T23 = (P)YPclass_ancestors_setter(T24,x_);
  } else {
  }
  xF544 = VARREF(YDmax_classes);
  xF545 = xF544;
  T29 = (P)YPiGG(xF545,(P)2);
  T28 = T29;
  T27 = T28;
  xF546 = YPint((P)0);
  xF547 = xF546;
  T32 = (P)YPiGG(xF547,(P)2);
  T31 = T32;
  T30 = T31;
  T26 = (P)YPstr(T27,T30);
  rowF548 = T26;
  (P)YPclass_row_setter(rowF548,x_);
  T33 = FUNFAB(fun_507,1,rowF548);
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
  P xF549;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(parents_, 1);
loop:
  T1 = (P)YPclass(YPint((P)0),name_,parents_,Ynil,Ynil,Ynil,Ynil,Ynil,Ynil,YPfalse,YPfalse,YPint((P)-1),VARREF(Ynul));
  xF549 = T1;
  CALL1(1,VARREF(Yinit_class),xF549);
  T0 = xF549;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yrefab_class) {
  P old_class_,parents_;
  P new_classF550;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(old_class_, 0);
  ARG(parents_, 1);
loop:
  T2 = (P)YPclass_direct_props(old_class_);
  T1 = CALL2(1,VARREF(Yfab_class),parents_,T2);
  new_classF550 = T1;
  (P)YPclass_forward_setter(new_classF550,old_class_);
  T0 = new_classF550;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yobject_props) {
  P x_;
  P tagF553;
  P xF552;
  P xF551;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  xF551 = x_;
  xF552 = xF551;
  T4 = (P)YPiB(xF552,(P)3);
  T3 = T4;
  tagF553 = T3;
  T7 = (P)YPiE(tagF553,(P)0);
  T6 = (P)YPbb(T7);
  if (T6 != YPfalse) {
    T8 = (P)YPobject_class(xF551);
    T5 = T8;
  } else {
    T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF553);
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
  P tagF556;
  P xF555;
  P xF554;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  xF554 = x_;
  xF555 = xF554;
  T4 = (P)YPiB(xF555,(P)3);
  T3 = T4;
  tagF556 = T3;
  T7 = (P)YPiE(tagF556,(P)0);
  T6 = (P)YPbb(T7);
  if (T6 != YPfalse) {
    T8 = (P)YPobject_class(xF554);
    T5 = T8;
  } else {
    T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF556);
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
  P tagF559;
  P xF558;
  P xF557;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  xF557 = x_;
  xF558 = xF557;
  T5 = (P)YPiB(xF558,(P)3);
  T4 = T5;
  tagF559 = T4;
  T8 = (P)YPiE(tagF559,(P)0);
  T7 = (P)YPbb(T8);
  if (T7 != YPfalse) {
    T9 = (P)YPobject_class(xF557);
    T6 = T9;
  } else {
    T10 = (P)YPelt(VARREF(YDdirect_object_class),tagF559);
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

FUNCODEDEF(fun_loop_514) {
  P i_,props_;
  P yF561;
  P xF560;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(props_, 1);
loop:
  T1 = (P)YOemptyQ(props_);
  if (T1 != YPfalse) {
    T0 = VARREF(YDgetter_not_found);
  } else {
    T5 = (P)YOhead(props_);
    T4 = (P)YPprop_getter(T5);
    xF560 = T4;
    yF561 = FREEREF(0);
    T7 = (P)YPeqQ(xF560,yF561);
    T6 = (P)YPbb(T7);
    T3 = T6;
    if (T3 != YPfalse) {
      T2 = i_;
    } else {
      T9 = (P)YOA(i_,YPint((P)1));
      T10 = (P)YOtail(props_);
      a1 = T9;
      a2 = T10;
      i_ = a1;
      props_ = a2;
      goto loop;
      T2 = T8;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_offset) {
  P object_,getter_;
  P loopF562;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_514,2);
  loopF562 = T1;
  FUNINIT(loopF562, 2,getter_,loopF562);
  T3 = CALL1(1,VARREF(Yobject_props),object_);
  T2 = CALL2(0,loopF562,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPprop_unbound_error) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
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
  P yF565;
  P xF564;
  P offsetF563;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
loop:
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T1 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF563 = T1;
  xF564 = offsetF563;
  yF565 = VARREF(YDgetter_not_found);
  T5 = (P)YPiE(xF564,yF565);
  T4 = (P)YPbb(T5);
  T3 = T4;
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
    T2 = T6;
  } else {
    T7 = (P)Yprop_value_at(object_,offsetF563);
    T2 = T7;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_boundQ) {
  P object_,getter_;
  P yF568;
  P xF567;
  P offsetF566;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
loop:
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T1 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF566 = T1;
  xF567 = offsetF566;
  yF568 = VARREF(YDgetter_not_found);
  T5 = (P)YPiE(xF567,yF568);
  T4 = (P)YPbb(T5);
  T3 = T4;
  if (T3 != YPfalse) {
    T6 = CALL2(1,VARREF(Yproperty_not_found_error),getter_,object_);
    T2 = T6;
  } else {
    T7 = (P)Yprop_bound_atQ(object_,offsetF566);
    T2 = T7;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_519) {
  P i_,props_;
  P yF571;
  P xF570;
  P propF569;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(props_, 1);
loop:
  T1 = (P)YOemptyQ(props_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yproperty_not_found_error),FREEREF(0),FREEREF(1));
    T0 = T2;
  } else {
    T4 = (P)YOhead(props_);
    propF569 = T4;
    T7 = (P)YPprop_getter(propF569);
    xF570 = T7;
    yF571 = FREEREF(0);
    T9 = (P)YPeqQ(xF570,yF571);
    T8 = (P)YPbb(T9);
    T6 = T8;
    if (T6 != YPfalse) {
      T12 = (P)YPprop_type(propF569);
      T11 = CALL2(1,VARREF(YOisaQ),FREEREF(2),T12);
      if (T11 != YPfalse) {
        T13 = (P)Yprop_value_at_setter(FREEREF(2),FREEREF(1),i_);
        T10 = T13;
      } else {
        T15 = (P)YPprop_type(propF569);
        T14 = CALL3(1,VARREF(Yproperty_type_error),FREEREF(0),FREEREF(2),T15);
        T10 = T14;
      }
      T5 = T10;
    } else {
      T17 = (P)YOA(i_,YPint((P)1));
      T18 = (P)YOtail(props_);
      a1 = T17;
      a2 = T18;
      i_ = a1;
      props_ = a2;
      goto loop;
      T5 = T16;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_value_setter) {
  P z_,object_,getter_;
  P loopF572;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(object_, 1);
  ARG(getter_, 2);
loop:
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T1 = FUNSHELL(1,fun_loop_519,4);
  loopF572 = T1;
  FUNINIT(loopF572, 4,getter_,object_,z_,loopF572);
  T3 = CALL1(1,VARREF(Yobject_props),object_);
  T2 = CALL2(0,loopF572,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_521) {
  P mets_;
  P yF575;
  P xF574;
  P metF573;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(mets_, 0);
loop:
  T1 = (P)YOemptyQ(mets_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yproperty_not_found_error),FREEREF(0),FREEREF(1));
    T0 = T2;
  } else {
    T4 = (P)YOhead(mets_);
    metF573 = T4;
    T7 = CALL2(1,VARREF(Yfun_spec),metF573,YPint((P)0));
    xF574 = T7;
    yF575 = FREEREF(1);
    T9 = (P)YPeqQ(xF574,yF575);
    T8 = (P)YPbb(T9);
    T6 = T8;
    if (T6 != YPfalse) {
      T5 = metF573;
    } else {
      T11 = (P)YOtail(mets_);
      a1 = T11;
      mets_ = a1;
      goto loop;
      T5 = T10;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfind_getter) {
  P owner_,getter_;
  P loopF576;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_521,3);
  loopF576 = T1;
  FUNINIT(loopF576, 3,getter_,owner_,loopF576);
  T3 = CALL1(1,VARREF(YOfun_mets),getter_);
  T2 = CALL1(0,loopF576,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_523) {
  P mets_;
  P tmpF580;
  P yF579;
  P xF578;
  P metF577;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(mets_, 0);
loop:
  T1 = (P)YOemptyQ(mets_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yproperty_not_found_error),FREEREF(0),FREEREF(1));
    T0 = T2;
  } else {
    T4 = (P)YOhead(mets_);
    metF577 = T4;
    T8 = CALL2(1,VARREF(Yfun_spec),metF577,YPint((P)1));
    xF578 = T8;
    yF579 = FREEREF(1);
    T10 = (P)YPeqQ(xF578,yF579);
    T9 = (P)YPbb(T10);
    T7 = T9;
    tmpF580 = T7;
    if (tmpF580 != YPfalse) {
      T13 = CALL2(1,VARREF(Yfun_spec),metF577,YPint((P)0));
      T12 = CALL2(1,VARREF(YOtype_equalQ),T13,FREEREF(2));
      T11 = T12;
    } else {
      T11 = YPfalse;
    }
    T6 = T11;
    if (T6 != YPfalse) {
      T5 = metF577;
    } else {
      T15 = (P)YOtail(mets_);
      a1 = T15;
      mets_ = a1;
      goto loop;
      T5 = T14;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfind_setter) {
  P owner_,type_,zetter_;
  P loopF581;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(owner_, 0);
  ARG(type_, 1);
  ARG(zetter_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_523,4);
  loopF581 = T1;
  FUNINIT(loopF581, 4,zetter_,owner_,type_,loopF581);
  T3 = CALL1(1,VARREF(YOfun_mets),zetter_);
  T2 = CALL1(0,loopF581,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_525) {
  P g_;
  P T0;
  P a1;
LINK_STACK();
  ARG(g_, 0);
loop:
  T0 = (P)YPfun_cache_setter(YPfalse,g_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yforward_class) {
  P old_class_;
  P new_classF582;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(old_class_, 0);
loop:
  T1 = (P)YPclone(old_class_);
  new_classF582 = T1;
  T2 = fun_525;
  T3 = (P)YPclass_gens(old_class_);
  CALL2(1,VARREF(YOdo),T2,T3);
  T4 = (P)YPclass_forward_setter(new_classF582,old_class_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yclone) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPclone(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_visit_528) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YOmemQ),T3,x_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = BOXVAL(FREEREF(0));
    T4 = (P)YOadd(T5,x_);
    BOXVAL(FREEREF(0)) = T4;
    CALL1(1,FREEREF(1),x_);
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
  P visitF584;
  P visitedF583;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  visitedF583 = Ynil;
  visitedF583 = BOXFAB(visitedF583);
  T3 = FUNSHELL(0,fun_visit_528,3);
  visitF584 = T3;
  FUNINIT(visitF584, 3,visitedF583,f_,visitF584);
  T4 = CALL1(0,visitF584,x_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_530) {
  P prop_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(prop_, 0);
loop:
  T1 = (P)YPprop_getter(prop_);
  T0 = (P)YPfun_cache_setter(YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfinalize_props) {
  P class_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(class_, 0);
loop:
  T0 = CALL1(1,VARREF(Yclass_ordered_props),class_);
  (P)YPclass_props_setter(T0,class_);
  T2 = fun_530;
  T3 = (P)YPclass_props(class_);
  T1 = CALL2(1,VARREF(YOdo),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YPprop) {
  P owner_,getter_,setter_,type_,init_;
  P setter_metF588;
  P getter_metF587;
  P propF586;
  P classF585;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  ARG(setter_, 2);
  ARG(type_, 3);
  ARG(init_, 4);
loop:
  classF585 = owner_;
  T2 = CALLN(1,VARREF(YOnew),11,VARREF(YLpropG),VARREF(Yprop_owner),owner_,VARREF(Yprop_getter),getter_,VARREF(Yprop_setter),setter_,VARREF(Yprop_type),type_,VARREF(Yprop_init),init_);
  propF586 = T2;
  T4 = CALL2(1,VARREF(Yfind_getter),owner_,getter_);
  getter_metF587 = T4;
  T6 = CALL3(1,VARREF(Yfind_setter),owner_,type_,setter_);
  setter_metF588 = T6;
  (P)YPmet_env_setter(propF586,getter_metF587);
  (P)YPmet_env_setter(propF586,setter_metF588);
  T8 = (P)YPclass_direct_props(classF585);
  T9 = CALL1(1,VARREF(YOlst),propF586);
  T7 = CALL2(1,VARREF(YOcat2),T8,T9);
  (P)YPclass_direct_props_setter(T7,classF585);
  CALL2(1,VARREF(YOdo_descendents),VARREF(Yfinalize_props),owner_);
  T5 = propF586;
  T3 = T5;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

P YPupdate_instance_for_changed_class(P new_object_) {
  P a1;
DEFCREGS();
loop:
  return new_object_;
}

FUNCODEDEF(Yupdate_instance_for_changed_class) {
  P object_;
  P T0;
  P a1;
LINK_STACK();
  ARG(object_, 0);
loop:
  T0 = (P)YPupdate_instance_for_changed_class(object_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ypatch_early_classes) {
  P T0,T1;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YOrevX),VARREF(YTearly_classesT));
  VARSET(YTearly_classesT,T0);
  CALL2(1,VARREF(YOdo),VARREF(Yinit_class),VARREF(YTearly_classesT));
  T1 = VARSET(YPclasses_readyQ,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(Yfab_gen) {
  P name_,names_,specs_,naryQ_,val_,mets_;
  P gF589;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4,a5,a6;
LINK_STACK();
  ARG(name_, 0);
  ARG(names_, 1);
  ARG(specs_, 2);
  ARG(naryQ_, 3);
  ARG(val_, 4);
  ARG(mets_, 5);
loop:
  T3 = (P)YOlen(specs_);
  T2 = CALLN(1,VARREF(YOnew),11,VARREF(YLsigG),VARREF(Ysig_names),names_,VARREF(Ysig_specs),specs_,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),T3,VARREF(Ysig_val),val_);
  T1 = CALLN(1,VARREF(YOnew),7,VARREF(YLgenG),VARREF(Yfun_name),name_,VARREF(Yfun_sig),T2,VARREF(Yfun_mets),mets_);
  gF589 = T1;
  T4 = (P)YPmet_code(VARREF(YPdispatch));
  (P)YPgen_code_setter(T4,gF589);
  T0 = gF589;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_537) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

FUNCODEDEF(Ygen_from_met) {
  P x_;
  P specsF590;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = fun_537;
  T3 = CALL1(1,VARREF(YOfun_specs),x_);
  T1 = CALL2(1,VARREF(YOmap),T2,T3);
  specsF590 = T1;
  T5 = CALL1(1,VARREF(Yfun_name),x_);
  T6 = CALL1(1,VARREF(YOfun_naryQ),x_);
  T4 = CALLN(1,VARREF(Yfab_gen),6,T5,Ynil,specsF590,T6,VARREF(YLanyG),Ynil);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPdefine_method) {
  P gen_,met_;
  P tmpF591;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
loop:
  tmpF591 = gen_;
  if (tmpF591 != YPfalse) {
    T2 = tmpF591;
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
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(fun_, 1);
loop:
  VARSET(YPTstart_running_atT,fun_);
  T1 = (P)YPsu(name_);
  T0 = (P)YPunexec(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_541) {
  P i_;
  P valF607;
  P xF606;
  P xF605;
  P iF604;
  P xF603;
  P getterF602;
  P xF601;
  P xF600;
  P iF599;
  P xF598;
  P xF597;
  P xF596;
  P xF595;
  P xF594;
  P yF593;
  P xF592;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  xF592 = i_;
  yF593 = FREEREF(0);
  xF594 = xF592;
  xF595 = xF594;
  T6 = (P)YPiGG(xF595,(P)2);
  T5 = T6;
  T4 = T5;
  xF596 = yF593;
  xF597 = xF596;
  T9 = (P)YPiGG(xF597,(P)2);
  T8 = T9;
  T7 = T8;
  T3 = (P)YPiL(T4,T7);
  T2 = (P)YPbb(T3);
  T1 = T2;
  if (T1 != YPfalse) {
    xF598 = FREEREF(1);
    iF599 = i_;
    T13 = (P)YPopts_location(xF598);
    xF600 = iF599;
    xF601 = xF600;
    T17 = (P)YPiGG(xF601,(P)2);
    T16 = T17;
    T15 = T16;
    T14 = (P)YPi_((P)0,T15);
    T12 = (P)YPloc_off(T13,T14);
    T11 = T12;
    getterF602 = T11;
    xF603 = FREEREF(1);
    T20 = (P)YOA(i_,YPint((P)1));
    iF604 = T20;
    T22 = (P)YPopts_location(xF603);
    xF605 = iF604;
    xF606 = xF605;
    T26 = (P)YPiGG(xF606,(P)2);
    T25 = T26;
    T24 = T25;
    T23 = (P)YPi_((P)0,T24);
    T21 = (P)YPloc_off(T22,T23);
    T19 = T21;
    valF607 = T19;
    CALL3(1,VARREF(Yprop_value_setter),valF607,FREEREF(2),getterF602);
    T28 = (P)YOA(i_,YPint((P)2));
    a1 = T28;
    i_ = a1;
    goto loop;
    T18 = T27;
    T10 = T18;
    T0 = T10;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

INLINE P YPnew(P parent_,P inits_) {
  P loopF613;
  P numF612;
  P xF611;
  P objectF610;
  P xF609;
  P xF608;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
DEFCREGS();
loop:
  T3 = (P)YPclass_prop_len(parent_);
  xF608 = T3;
  xF609 = xF608;
  T5 = (P)YPiGG(xF609,(P)2);
  T4 = T5;
  T2 = T4;
  T1 = (P)YPobject_of(parent_,T2);
  objectF610 = T1;
  xF611 = inits_;
  T8 = (P)YPopts_count(xF611);
  T7 = T8;
  numF612 = T7;
  T9 = FUNSHELL(1,fun_loop_541,4);
  loopF613 = T9;
  FUNINIT(loopF613, 4,numF612,inits_,objectF610,loopF613);
  T10 = XCALL1(0,loopF613,YPint((P)0));
  T6 = objectF610;
  T0 = T6;
  return T0;
}

FUNCODEDEF(YOnew) {
  P parent_,inits_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(parent_, 0);
  NARGS(inits_, 1);
loop:
  T0 = (P)YPnew(parent_,inits_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_544) {
  P parent_,inits_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(parent_, 0);
  NARGS(inits_, 1);
loop:
  T0 = (P)YPnew(parent_,inits_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_545) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T0 = CALL2(1,VARREF(YOsubtypeQ),t_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_subtypeQ_546) {
  P t1_,t2_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = FUNFAB(fun_545,1,t2_);
  T2 = (P)YPunion_elts(t1_);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_547) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T0 = CALL2(1,VARREF(YOsubtypeQ),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_subtypeQ_548) {
  P t1_,t2_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = FUNFAB(fun_547,1,t1_);
  T2 = (P)YPunion_elts(t2_);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_549) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T0 = CALL2(1,VARREF(YOsubtypeQ),t_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_subtypeQ_550) {
  P t1_,t2_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = FUNFAB(fun_549,1,t2_);
  T2 = (P)YPunion_elts(t1_);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_551) {
  P t1_,t2_;
  P xF619;
  P xF618;
  P xF617;
  P xF616;
  P c2F615;
  P c1F614;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  c1F614 = t1_;
  c2F615 = t2_;
  T4 = (P)YPclass_row(c1F614);
  T6 = (P)YPclass_id(c2F615);
  xF616 = T6;
  xF617 = xF616;
  T8 = (P)YPiGG(xF617,(P)2);
  T7 = T8;
  T5 = T7;
  T3 = (P)YPselt(T4,T5);
  xF618 = YPint((P)1);
  xF619 = xF618;
  T11 = (P)YPiGG(xF619,(P)2);
  T10 = T11;
  T9 = T10;
  T2 = (P)YPiE(T3,T9);
  T1 = (P)YPbb(T2);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_552) {
  P t1_,t2_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YPtype_object(t1_);
  T0 = CALL2(1,VARREF(YOisaQ),T1,t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_553) {
  P t1_,t2_;
  P xF625;
  P xF624;
  P xF623;
  P xF622;
  P c2F621;
  P c1F620;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  c1F620 = VARREF(YLclassG);
  c2F621 = t2_;
  T4 = (P)YPclass_row(c1F620);
  T6 = (P)YPclass_id(c2F621);
  xF622 = T6;
  xF623 = xF622;
  T8 = (P)YPiGG(xF623,(P)2);
  T7 = T8;
  T5 = T7;
  T3 = (P)YPselt(T4,T5);
  xF624 = YPint((P)1);
  xF625 = xF624;
  T11 = (P)YPiGG(xF625,(P)2);
  T10 = T11;
  T9 = T10;
  T2 = (P)YPiE(T3,T9);
  T1 = (P)YPbb(T2);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_554) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_555) {
  P t1_,t2_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YPtype_object(t1_);
  T0 = (P)YOsingleton_isaQ(T1,t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_556) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_557) {
  P t1_,t2_;
  P yF630;
  P xF629;
  P tmpF628;
  P yF627;
  P xF626;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  xF626 = t1_;
  yF627 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF626,yF627);
  T2 = (P)YPbb(T3);
  T1 = T2;
  tmpF628 = T1;
  if (tmpF628 != YPfalse) {
    T6 = (P)YPtype_class(t2_);
    xF629 = T6;
    yF630 = VARREF(YLclassG);
    T8 = (P)YPeqQ(xF629,yF630);
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

FUNCODEDEF(fun_subtypeQ_558) {
  P t1_,t2_;
  P xF636;
  P xF635;
  P xF634;
  P xF633;
  P c2F632;
  P c1F631;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YPtype_class(t1_);
  c1F631 = T1;
  T2 = (P)YPtype_class(t2_);
  c2F632 = T2;
  T6 = (P)YPclass_row(c1F631);
  T8 = (P)YPclass_id(c2F632);
  xF633 = T8;
  xF634 = xF633;
  T10 = (P)YPiGG(xF634,(P)2);
  T9 = T10;
  T7 = T9;
  T5 = (P)YPselt(T6,T7);
  xF635 = YPint((P)1);
  xF636 = xF635;
  T13 = (P)YPiGG(xF636,(P)2);
  T12 = T13;
  T11 = T12;
  T4 = (P)YPiE(T5,T11);
  T3 = (P)YPbb(T4);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_559) {
  P t1_,t2_;
  P xF643;
  P xF642;
  P xF641;
  P xF640;
  P c2F639;
  P c1F638;
  P tmpF637;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T2 = (P)YPtype_object(t1_);
  T1 = CALL2(1,VARREF(YOisaQ),T2,VARREF(YLclassG));
  tmpF637 = T1;
  if (tmpF637 != YPfalse) {
    T5 = (P)YPtype_object(t1_);
    c1F638 = T5;
    T6 = (P)YPtype_class(t2_);
    c2F639 = T6;
    T10 = (P)YPclass_row(c1F638);
    T12 = (P)YPclass_id(c2F639);
    xF640 = T12;
    xF641 = xF640;
    T14 = (P)YPiGG(xF641,(P)2);
    T13 = T14;
    T11 = T13;
    T9 = (P)YPselt(T10,T11);
    xF642 = YPint((P)1);
    xF643 = xF642;
    T17 = (P)YPiGG(xF643,(P)2);
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

FUNCODEDEF(fun_subtypeQ_560) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_561) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_562) {
  P t1_,t2_;
  P tmpF648;
  P yF647;
  P xF646;
  P teT2F645;
  P teT1F644;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YPproduct_elts(t1_);
  teT1F644 = T1;
  T3 = (P)YPproduct_elts(t2_);
  teT2F645 = T3;
  T6 = (P)YOtlen(teT1F644);
  xF646 = T6;
  T7 = (P)YOtlen(teT2F645);
  yF647 = T7;
  T9 = (P)YPeqQ(xF646,yF647);
  T8 = (P)YPbb(T9);
  T5 = T8;
  tmpF648 = T5;
  if (tmpF648 != YPfalse) {
    T11 = CALL3(1,VARREF(YOtall2Q),VARREF(YsubtypeQ),teT1F644,teT2F645);
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

FUNCODEDEF(fun_subtypeQ_563) {
  P t1_,t2_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T0 = CALL2(1,VARREF(YsubtypeQ),VARREF(YLtupG),t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isaQ_564) {
  P o_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T0 = (P)YOclass_isaQ(o_,t_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isaQ_565) {
  P o_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T0 = (P)YOsingleton_isaQ(o_,t_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isaQ_566) {
  P o_,t_;
  P xF655;
  P xF654;
  P xF653;
  P xF652;
  P c2F651;
  P c1F650;
  P tmpF649;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YOisaQ),o_,VARREF(YLclassG));
  tmpF649 = T1;
  if (tmpF649 != YPfalse) {
    c1F650 = o_;
    T4 = (P)YPtype_class(t_);
    c2F651 = T4;
    T8 = (P)YPclass_row(c1F650);
    T10 = (P)YPclass_id(c2F651);
    xF652 = T10;
    xF653 = xF652;
    T12 = (P)YPiGG(xF653,(P)2);
    T11 = T12;
    T9 = T11;
    T7 = (P)YPselt(T8,T9);
    xF654 = YPint((P)1);
    xF655 = xF654;
    T15 = (P)YPiGG(xF655,(P)2);
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

FUNCODEDEF(fun_567) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T0 = CALL2(1,VARREF(YOisaQ),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_isaQ_568) {
  P o_,u_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(u_, 1);
loop:
  T1 = FUNFAB(fun_567,1,o_);
  T2 = (P)YPunion_elts(u_);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isaQ_569) {
  P o_,t_;
  P tmpF660;
  P yF659;
  P xF658;
  P tmpF657;
  P teTF656;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T1 = (P)YPproduct_elts(t_);
  teTF656 = T1;
  T3 = CALL2(1,VARREF(YisaQ),o_,VARREF(YLtupG));
  tmpF657 = T3;
  if (tmpF657 != YPfalse) {
    T7 = (P)YOtlen(o_);
    xF658 = T7;
    T8 = (P)YOtlen(teTF656);
    yF659 = T8;
    T10 = (P)YPeqQ(xF658,yF659);
    T9 = (P)YPbb(T10);
    T6 = T9;
    tmpF660 = T6;
    if (tmpF660 != YPfalse) {
      T12 = CALL3(1,VARREF(YOtall2Q),VARREF(YisaQ),o_,teTF656);
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

FUNCODEDEF(fun_order_specs_570) {
  P t1_,t2_,arg_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_440),t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_571) {
  P t1_,t2_,arg_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_441),t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_572) {
  P t1_,t2_,arg_;
  P yF664;
  P xF663;
  P c2F662;
  P c1F661;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T1 = (P)YPtype_class(t1_);
  c1F661 = T1;
  T3 = (P)YPtype_class(t2_);
  c2F662 = T3;
  xF663 = c1F661;
  yF664 = c2F662;
  T7 = (P)YPeqQ(xF663,yF664);
  T6 = (P)YPbb(T7);
  T5 = T6;
  if (T5 != YPfalse) {
    T8 = CALL2(1,VARREF(YOtup),LITREF(lit_440),t1_);
    T4 = T8;
  } else {
    T10 = CALL3(1,VARREF(YOclassL),c1F661,c2F662,arg_);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YOtup),LITREF(lit_441),t1_);
      T9 = T11;
    } else {
      if (YPtrue != YPfalse) {
        T13 = CALL2(1,VARREF(YOtup),LITREF(lit_442),t2_);
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

FUNCODEDEF(fun_order_specs_573) {
  P t1_,t2_,arg_;
  P yF666;
  P xF665;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T2 = CALL2(1,VARREF(YOsubtypeQ),VARREF(YLclassG),t2_);
  if (T2 != YPfalse) {
    xF665 = t1_;
    yF666 = VARREF(YLanyG);
    T6 = (P)YPeqQ(xF665,yF666);
    T5 = (P)YPbb(T6);
    T4 = T5;
    if (T4 != YPfalse) {
      T7 = CALL3(1,VARREF(Yorder_specs),VARREF(YLclassG),t2_,arg_);
      T3 = T7;
    } else {
      T3 = LITREF(lit_441);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_448);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_574) {
  P t1_,t2_,arg_;
  P yF668;
  P xF667;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T2 = CALL2(1,VARREF(YOsubtypeQ),VARREF(YLclassG),t1_);
  if (T2 != YPfalse) {
    xF667 = t2_;
    yF668 = VARREF(YLanyG);
    T6 = (P)YPeqQ(xF667,yF668);
    T5 = (P)YPbb(T6);
    T4 = T5;
    if (T4 != YPfalse) {
      T7 = CALL3(1,VARREF(Yorder_specs),t1_,VARREF(YLclassG),arg_);
      T3 = T7;
    } else {
      T3 = LITREF(lit_442);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_448);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_575) {
  P t1_,t2_,arg_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T0 = CALL3(1,VARREF(YOorder_specs_class),t1_,t2_,arg_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_576) {
  P t1_,t2_,arg_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T1 = CALL2(1,VARREF(YOsubtypeQ),t1_,t2_);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YOsubtypeQ),t2_,t1_);
    if (T4 != YPfalse) {
      T3 = LITREF(lit_440);
    } else {
      T3 = LITREF(lit_441);
    }
    T2 = CALL2(1,VARREF(YOtup),T3,t1_);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YOsubtypeQ),t2_,t1_);
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YOtup),LITREF(lit_442),t2_);
      T5 = T7;
    } else {
      T8 = CALL2(1,VARREF(YOtup),LITREF(lit_448),VARREF(YLanyG));
      T5 = T8;
    }
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_577) {
  P c_,t_;
  P xF674;
  P xF673;
  P xF672;
  P xF671;
  P c2F670;
  P c1F669;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  c1F669 = c_;
  c2F670 = t_;
  T5 = (P)YPclass_row(c1F669);
  T7 = (P)YPclass_id(c2F670);
  xF671 = T7;
  xF672 = xF671;
  T9 = (P)YPiGG(xF672,(P)2);
  T8 = T9;
  T6 = T8;
  T4 = (P)YPselt(T5,T6);
  xF673 = YPint((P)1);
  xF674 = xF673;
  T12 = (P)YPiGG(xF674,(P)2);
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

FUNCODEDEF(fun_may_isaQ_578) {
  P c_,t_;
  P tagF677;
  P xF676;
  P xF675;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T3 = (P)YPtype_object(t_);
  xF675 = T3;
  xF676 = xF675;
  T6 = (P)YPiB(xF676,(P)3);
  T5 = T6;
  tagF677 = T5;
  T9 = (P)YPiE(tagF677,(P)0);
  T8 = (P)YPbb(T9);
  if (T8 != YPfalse) {
    T10 = (P)YPobject_class(xF675);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF677);
    T7 = T11;
  }
  T4 = T7;
  T2 = T4;
  T1 = CALL2(1,VARREF(YOmay_isaQ),T2,c_);
  T0 = CALL2(1,VARREF(YOtup),T1,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_579) {
  P c_,t_;
  P yF681;
  P xF680;
  P tmpF679;
  P classQF678;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YOsubtypeQ),c_,VARREF(YLclassG));
  classQF678 = T1;
  tmpF679 = classQF678;
  if (tmpF679 != YPfalse) {
    T6 = (P)YPtype_class(c_);
    xF680 = T6;
    yF681 = VARREF(YLanyG);
    T8 = (P)YPeqQ(xF680,yF681);
    T7 = (P)YPbb(T8);
    T5 = T7;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  T2 = CALL2(1,VARREF(YOtup),classQF678,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_580) {
  P someQ_,allQ_,elts_;
  P tmpF686;
  P tmpF685;
  P elt_allQF684;
  P elt_someQF683;
  P elt_some_allQF682;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2,a3;
LINK_STACK();
  ARG(someQ_, 0);
  ARG(allQ_, 1);
  ARG(elts_, 2);
loop:
  T1 = (P)YOemptyQ(elts_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YOtup),someQ_,allQ_);
    T0 = T2;
  } else {
    T5 = (P)YOhead(elts_);
    T4 = CALL2(1,VARREF(YOmay_isaQ),FREEREF(0),T5);
    elt_some_allQF682 = T4;
    T7 = (P)YOtelt(elt_some_allQF682,YPint((P)0));
    elt_someQF683 = T7;
    T9 = (P)YOtelt(elt_some_allQF682,YPint((P)1));
    elt_allQF684 = T9;
    tmpF685 = elt_someQF683;
    if (tmpF685 != YPfalse) {
      T12 = tmpF685;
    } else {
      T12 = someQ_;
    }
    T11 = T12;
    tmpF686 = elt_allQF684;
    if (tmpF686 != YPfalse) {
      T14 = tmpF686;
    } else {
      T14 = allQ_;
    }
    T13 = T14;
    T15 = (P)YOtail(elts_);
    a1 = T11;
    a2 = T13;
    a3 = T15;
    someQ_ = a1;
    allQ_ = a2;
    elts_ = a3;
    goto loop;
    T8 = T10;
    T6 = T8;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_may_isaQ_581) {
  P c_,t_;
  P loopF687;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_580,2);
  loopF687 = T1;
  FUNINIT(loopF687, 2,c_,loopF687);
  T3 = (P)YPunion_elts(t_);
  T2 = CALL3(0,loopF687,YPfalse,YPfalse,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_582) {
  P t_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T1 = CALL2(1,VARREF(Ymay_isaQ),VARREF(YLanyG),t_);
  T0 = (P)YOtelt(T1,YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_may_isaQ_583) {
  P c_,t_;
  P someQF692;
  P tmpF691;
  P tupQF690;
  P yF689;
  P xF688;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  xF688 = c_;
  yF689 = VARREF(YLtupG);
  T3 = (P)YPeqQ(xF688,yF689);
  T2 = (P)YPbb(T3);
  T1 = T2;
  tupQF690 = T1;
  tmpF691 = tupQF690;
  if (tmpF691 != YPfalse) {
    T8 = fun_582;
    T9 = (P)YPproduct_elts(t_);
    T7 = CALL2(1,VARREF(YOtanyQ),T8,T9);
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  someQF692 = T5;
  T10 = CALL2(1,VARREF(Ytup),tupQF690,someQF692);
  T4 = T10;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

P YPmacro(P modname_,P name_,P expander_) {
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
DEFCREGS();
loop:
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
loop:
  T0 = YPfalse;
  return T0;
}

P Y___main_1___() {
  P T0;
DEFCREGS();
loop:
  T0 = YPfalse;
  return T0;
}

P Y___main_2___() {
  P T0;
DEFCREGS();
loop:
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
loop:
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
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLintG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLfixnumG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLfloG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLlocG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLrepG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLcolG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLcolIG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLcolXG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLseqG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLseqIG));
  T40 = (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLseqXG));
  T39 = T40;
  return T39;
}

P Y___main_4___() {
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
loop:
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
  P xF719;
  P xF718;
  P tF717;
  P xF716;
  P xF715;
  P xF714;
  P xF713;
  P xF712;
  P xF711;
  P xF710;
  P xF709;
  P tF708;
  P xF707;
  P xF706;
  P xF705;
  P xF704;
  P xF703;
  P xF702;
  P xF701;
  P xF700;
  P xF699;
  P xF698;
  P tF697;
  P xF696;
  P xF695;
  P xF694;
  P xF693;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61;
DEFCREGS();
loop:
  VARSET(YPmet_prop_len,(P)4);
  VARSET(YPsymbols_readyQ,YPfalse);
  VARSET(YPTstart_running_atT,VARREF(Ynil));
  T0 = (P)YPraw_alloc((P)4);
  VARSET(YDdirect_object_class,T0);
  (P)YPelt_setter(VARREF(YLfixnumG),VARREF(YDdirect_object_class),(P)1);
  (P)YPelt_setter(VARREF(YLchrG),VARREF(YDdirect_object_class),(P)2);
  (P)YPelt_setter(VARREF(YLlocG),VARREF(YDdirect_object_class),(P)3);
  xF693 = YPint((P)32);
  xF694 = xF693;
  T5 = (P)YPiGG(xF694,(P)2);
  T4 = T5;
  T3 = T4;
  T2 = (P)YPi_(T3,(P)2);
  xF695 = T2;
  xF696 = xF695;
  tF697 = (P)1;
  T8 = (P)YPiLL(xF696,(P)2);
  T7 = (P)YPiv(T8,tF697);
  T6 = T7;
  T1 = T6;
  VARSET(YDnum_int_bits,T1);
  xF698 = YPint((P)1);
  xF699 = xF698;
  T14 = (P)YPiGG(xF699,(P)2);
  T13 = T14;
  T12 = T13;
  xF700 = VARREF(YDnum_int_bits);
  xF701 = xF700;
  T18 = (P)YPiGG(xF701,(P)2);
  T17 = T18;
  T16 = T17;
  xF702 = YPint((P)1);
  xF703 = xF702;
  T21 = (P)YPiGG(xF703,(P)2);
  T20 = T21;
  T19 = T20;
  T15 = (P)YPi_(T16,T19);
  T11 = (P)YPiLL(T12,T15);
  xF704 = YPint((P)1);
  xF705 = xF704;
  T24 = (P)YPiGG(xF705,(P)2);
  T23 = T24;
  T22 = T23;
  T10 = (P)YPi_(T11,T22);
  xF706 = T10;
  xF707 = xF706;
  tF708 = (P)1;
  T27 = (P)YPiLL(xF707,(P)2);
  T26 = (P)YPiv(T27,tF708);
  T25 = T26;
  T9 = T25;
  VARSET(YDmax_int,T9);
  xF709 = YPint((P)1);
  xF710 = xF709;
  T32 = (P)YPiGG(xF710,(P)2);
  T31 = T32;
  T30 = T31;
  xF711 = VARREF(YDnum_int_bits);
  xF712 = xF711;
  T36 = (P)YPiGG(xF712,(P)2);
  T35 = T36;
  T34 = T35;
  xF713 = YPint((P)1);
  xF714 = xF713;
  T39 = (P)YPiGG(xF714,(P)2);
  T38 = T39;
  T37 = T38;
  T33 = (P)YPi_(T34,T37);
  T29 = (P)YPiLL(T30,T33);
  xF715 = T29;
  xF716 = xF715;
  tF717 = (P)1;
  T42 = (P)YPiLL(xF716,(P)2);
  T41 = (P)YPiv(T42,tF717);
  T40 = T41;
  T28 = T40;
  VARSET(YDmin_int,T28);
  xF718 = YPchr((P)32);
  xF719 = xF718;
  T46 = (P)YPiGG(xF719,(P)2);
  T45 = T46;
  T44 = T45;
  T43 = (P)YPstrX((P)0,T44);
  VARSET(YPsnul,T43);
  T47 = (P)YPtupX((P)0,VARREF(Ynul));
  VARSET(YPtnul,T47);
  T48 = (P)YPrepX((P)0,VARREF(Ynul));
  VARSET(YPrnul,T48);
  VARSET(YTearly_classesT,VARREF(Ynil));
  T49 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLanyG),T49);
  T50 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLlogG),T50);
  T51 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLmagG),T51);
  T52 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLchrG),T52);
  T53 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLsrc_locG),T53);
  T54 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLnumG),T54);
  T55 = (P)YPpair(VARREF(YLnumG),Ynil);
  (P)YPdefine_parents(VARREF(YLintG),T55);
  T56 = (P)YPpair(VARREF(YLintG),Ynil);
  (P)YPdefine_parents(VARREF(YLfixnumG),T56);
  T57 = (P)YPpair(VARREF(YLnumG),Ynil);
  (P)YPdefine_parents(VARREF(YLfloG),T57);
  T58 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLlocG),T58);
  T61 = (P)YPpair(VARREF(YLanyG),Ynil);
  T60 = (P)YPdefine_parents(VARREF(YLrepG),T61);
  T59 = T60;
  return T59;
}

P Y___main_6___() {
  P tF722;
  P xF721;
  P xF720;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50;
DEFCREGS();
loop:
  T0 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolG),T0);
  T1 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolIG),T1);
  T2 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolXG),T2);
  T3 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLseqG),T3);
  T5 = (P)YPpair(VARREF(YLcolIG),Ynil);
  T4 = (P)YPpair(VARREF(YLseqG),T5);
  (P)YPdefine_parents(VARREF(YLseqIG),T4);
  T7 = (P)YPpair(VARREF(YLcolXG),Ynil);
  T6 = (P)YPpair(VARREF(YLseqG),T7);
  (P)YPdefine_parents(VARREF(YLseqXG),T6);
  T8 = (P)YPpair(VARREF(YLseqXG),Ynil);
  (P)YPdefine_parents(VARREF(YLlstG),T8);
  T9 = (P)YPpair(VARREF(YLseqG),Ynil);
  (P)YPdefine_parents(VARREF(YLflatG),T9);
  T11 = (P)YPpair(VARREF(YLseqIG),Ynil);
  T10 = (P)YPpair(VARREF(YLflatG),T11);
  (P)YPdefine_parents(VARREF(YLtupG),T10);
  T14 = (P)YPpair(VARREF(YLmagG),Ynil);
  T13 = (P)YPpair(VARREF(YLseqIG),T14);
  T12 = (P)YPpair(VARREF(YLflatG),T13);
  (P)YPdefine_parents(VARREF(YLstrG),T12);
  T15 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLsymG),T15);
  T16 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLtypeG),T16);
  T17 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLclassG),T17);
  T18 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsingletonG),T18);
  T19 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsubclassG),T19);
  T20 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLunionG),T20);
  T21 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLproductG),T21);
  T22 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLpropG),T22);
  T23 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLgen_cacheG),T23);
  T24 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLsigG),T24);
  T25 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLfunG),T25);
  T26 = (P)YPpair(VARREF(YLfunG),Ynil);
  (P)YPdefine_parents(VARREF(YLmetG),T26);
  T27 = (P)YPpair(VARREF(YLfunG),Ynil);
  (P)YPdefine_parents(VARREF(YLgenG),T27);
  T29 = (P)YPpair(VARREF(YLseqIG),Ynil);
  T28 = (P)YPpair(VARREF(YLflatG),T29);
  (P)YPdefine_parents(VARREF(YLoptsG),T28);
  T30 = (P)YPpair(VARREF(YLoptsG),Ynil);
  (P)YPdefine_parents(VARREF(YLopts_tupG),T30);
  T31 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  (P)YPclass_ancestors_setter(T31,VARREF(YLanyG));
  VARSET(YPsymbols,VARREF(Ynil));
  lit_0 = YPsb((P)"Warning: symbols were created in the boot image before the symbol-creation was setup. (Probably from a df or rep)\n");
  T33 = (P)YPeqQ(VARREF(YPTused_symbols_too_earlyT),YPtrue);
  T32 = (P)YPbb(T33);
  if (T32 != YPfalse) {
    T35 = (P)YPcurrent_out_port();
    T36 = (P)YPsu(LITREF(lit_0));
    T34 = (P)YPputs(T35,T36);
  } else {
  }
  lit_1 = YPPlist(1,YPPsym((P)"name"));
  lit_2 = YPPsym((P)"lookup");
  lit_3 = YPPlist(1,YPPsym((P)"s"));
  T38 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lookup_110 = YPmet(FUNCODEREF(fun_lookup_110),LITREF(lit_2),T38,ENVNUL,PNUL,sloc(582));
  T37 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T37,ENVNUL,PNUL,sloc(581));
  T39 = fun_111;
  VARSET(Yfab_sym,T39);
  VARSET(YPsymbols_readyQ,YPtrue);
  lit_4 = YPPsym((P)"fab-sym");
  lit_5 = YPPlist(1,YPPsym((P)"name"));
  lit_6 = YPPlist(1,YPPsym((P)"s"));
  T41 = YPsig(LITREF(lit_6),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lookup_112 = YPmet(FUNCODEREF(fun_lookup_112),LITREF(lit_2),T41,ENVNUL,PNUL,sloc(596));
  T40 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfab_sym = YPmet(FUNCODEREF(Yfab_sym),LITREF(lit_4),T40,ENVNUL,PNUL,sloc(595));
  T42 = Yfab_sym;
  VARSET(Yfab_sym,T42);
  xF720 = VARREF(YPmet_prop_len);
  xF721 = xF720;
  tF722 = (P)1;
  T46 = (P)YPiLL(xF721,(P)2);
  T45 = (P)YPiv(T46,tF722);
  T44 = T45;
  T43 = T44;
  (P)YPclass_prop_len_setter(T43,VARREF(YLmetG));
  lit_7 = YPPsym((P)"loop");
  lit_8 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"r"));
  T47 = YPsig(LITREF(lit_8),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_114 = YPmet(FUNCODEREF(fun_loop_114),LITREF(lit_7),T47,ENVNUL,PNUL,sloc(616));
  lit_9 = YPPsym((P)"colx");
  lit_10 = YPPlist(2,YPPsym((P)"lx"),YPPsym((P)"x"));
  lit_11 = YPPsym((P)"coly");
  lit_12 = YPPlist(2,YPPsym((P)"lxy"),YPPsym((P)"y"));
  T49 = YPsig(LITREF(lit_12),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_coly_116 = YPmet(FUNCODEREF(fun_coly_116),LITREF(lit_11),T49,ENVNUL,PNUL,sloc(626));
  T48 = YPsig(LITREF(lit_10),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_colx_117 = YPmet(FUNCODEREF(fun_colx_117),LITREF(lit_9),T48,ENVNUL,PNUL,sloc(624));
  T50 = YPfalse;
  return T50;
}

P Y___main_7___() {
  P propF842;
  P setterF841;
  P accessorF840;
  P getterF839;
  P accessorF838;
  P propF837;
  P setterF836;
  P accessorF835;
  P getterF834;
  P accessorF833;
  P propF832;
  P setterF831;
  P accessorF830;
  P getterF829;
  P accessorF828;
  P propF827;
  P setterF826;
  P accessorF825;
  P getterF824;
  P accessorF823;
  P propF822;
  P setterF821;
  P accessorF820;
  P getterF819;
  P accessorF818;
  P propF817;
  P setterF816;
  P accessorF815;
  P getterF814;
  P accessorF813;
  P propF812;
  P setterF811;
  P accessorF810;
  P getterF809;
  P accessorF808;
  P propF807;
  P setterF806;
  P accessorF805;
  P getterF804;
  P accessorF803;
  P propF802;
  P setterF801;
  P accessorF800;
  P getterF799;
  P accessorF798;
  P propF797;
  P setterF796;
  P accessorF795;
  P getterF794;
  P accessorF793;
  P propF792;
  P setterF791;
  P accessorF790;
  P getterF789;
  P accessorF788;
  P propF787;
  P setterF786;
  P accessorF785;
  P getterF784;
  P accessorF783;
  P propF782;
  P setterF781;
  P accessorF780;
  P getterF779;
  P accessorF778;
  P propF777;
  P setterF776;
  P accessorF775;
  P getterF774;
  P accessorF773;
  P propF772;
  P setterF771;
  P accessorF770;
  P getterF769;
  P accessorF768;
  P propF767;
  P setterF766;
  P accessorF765;
  P getterF764;
  P accessorF763;
  P propF762;
  P setterF761;
  P accessorF760;
  P getterF759;
  P accessorF758;
  P propF757;
  P setterF756;
  P accessorF755;
  P getterF754;
  P accessorF753;
  P propF752;
  P setterF751;
  P accessorF750;
  P getterF749;
  P accessorF748;
  P propF747;
  P setterF746;
  P accessorF745;
  P getterF744;
  P accessorF743;
  P propF742;
  P setterF741;
  P accessorF740;
  P getterF739;
  P accessorF738;
  P propF737;
  P setterF736;
  P accessorF735;
  P getterF734;
  P accessorF733;
  P propF732;
  P setterF731;
  P accessorF730;
  P getterF729;
  P accessorF728;
  P propF727;
  P setterF726;
  P accessorF725;
  P getterF724;
  P accessorF723;
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
  P T464,T465,T466,T467,T468,T469;
DEFCREGS();
loop:
  VARSET(YDgen_cache_singletons_offset,YPint((P)2));
  VARSET(YDgen_cache_classes_offset,YPint((P)3));
  lit_13 = YPPsym((P)"%prop-offset");
  lit_14 = YPPlist(2,YPPsym((P)"owner"),YPPsym((P)"getter"));
  lit_15 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"props"));
  T1 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_173 = YPmet(FUNCODEREF(fun_loop_173),LITREF(lit_7),T1,ENVNUL,PNUL,sloc(687));
  T0 = YPsig(LITREF(lit_14),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPprop_offset = YPmet(FUNCODEREF(YPprop_offset),LITREF(lit_13),T0,ENVNUL,PNUL,sloc(686));
  T2 = YPprop_offset;
  VARSET(YPprop_offset,T2);
  lit_16 = YPPsym((P)"%early-dispatch");
  lit_17 = YPPlist(1,YPPsym((P)"args"));
  lit_18 = YPsb((P)"ERROR: Generic function dispatch called before it existed.");
  T3 = YPsig(LITREF(lit_17),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YPearly_dispatch = YPmet(FUNCODEREF(YPearly_dispatch),LITREF(lit_16),T3,ENVNUL,PNUL,sloc(704));
  T4 = YPearly_dispatch;
  VARSET(YPearly_dispatch,T4);
  lit_19 = YPPsym((P)"%add-met");
  lit_20 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T5 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPadd_met = YPmet(FUNCODEREF(YPadd_met),LITREF(lit_19),T5,ENVNUL,PNUL,sloc(712));
  T6 = YPadd_met;
  VARSET(YPadd_met,T6);
  lit_21 = YPPsym((P)"%add-prop");
  lit_22 = YPPlist(2,YPPsym((P)"class"),YPPsym((P)"prop"));
  T7 = YPsig(LITREF(lit_22),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPadd_prop = YPmet(FUNCODEREF(YPadd_prop),LITREF(lit_21),T7,ENVNUL,PNUL,sloc(738));
  T8 = YPadd_prop;
  VARSET(YPadd_prop,T8);
  lit_23 = YPPsym((P)"src-loc-line");
  lit_24 = YPPlist(1,YPPsym((P)"x"));
  lit_25 = YPPsym((P)"src-loc-line-setter");
  lit_26 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_27 = YPPlist(1,YPPsym((P)"x"));
  T11 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YLsrc_locG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T11,ENVNUL,PNUL,sloc(757));
  T10 = YPsig(LITREF(lit_26),YPPlist(2,VARREF(YLintG),VARREF(YLsrc_locG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_179 = YPmet(FUNCODEREF(fun_179),YPfalse,T10,ENVNUL,PNUL,sloc(757));
  T9 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T9,ENVNUL,PNUL,sloc(757));
  T14 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T13 = (P)YPsig(Ynil,T14,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T12 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_23),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysrc_loc_line,T12);
  T16 = fun_178;
  accessorF723 = T16;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_line),accessorF723);
  (P)YPmet_name_setter(VARREF(Ysrc_loc_line),accessorF723);
  T15 = accessorF723;
  getterF724 = T15;
  T21 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T20 = (P)YPpair(VARREF(YLanyG),T21);
  T19 = (P)YPsig(Ynil,T20,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T18 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_25),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysrc_loc_line_setter,T18);
  T23 = fun_179;
  accessorF725 = T23;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_line_setter),accessorF725);
  (P)YPmet_name_setter(VARREF(Ysrc_loc_line_setter),accessorF725);
  T22 = accessorF725;
  setterF726 = T22;
  T26 = fun_180;
  T25 = (P)YPPprop(VARREF(YLsrc_locG),VARREF(Ysrc_loc_line),VARREF(Ysrc_loc_line_setter),VARREF(YLintG),T26);
  propF727 = T25;
  (P)YPmet_env_setter(propF727,getterF724);
  (P)YPmet_env_setter(propF727,setterF726);
  T27 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsrc_locG),propF727);
  T24 = T27;
  T17 = T24;
  lit_28 = YPPsym((P)"src-loc-file");
  lit_29 = YPPlist(1,YPPsym((P)"x"));
  lit_30 = YPPsym((P)"src-loc-file-setter");
  lit_31 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_32 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLsrc_locG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_181 = YPmet(FUNCODEREF(fun_181),YPfalse,T30,ENVNUL,PNUL,sloc(757));
  T29 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLstrG),VARREF(YLsrc_locG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T29,ENVNUL,PNUL,sloc(757));
  T28 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_183 = YPmet(FUNCODEREF(fun_183),YPfalse,T28,ENVNUL,PNUL,sloc(757));
  T33 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T32 = (P)YPsig(Ynil,T33,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T31 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_28),T32,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysrc_loc_file,T31);
  T35 = fun_181;
  accessorF728 = T35;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_file),accessorF728);
  (P)YPmet_name_setter(VARREF(Ysrc_loc_file),accessorF728);
  T34 = accessorF728;
  getterF729 = T34;
  T40 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T39 = (P)YPpair(VARREF(YLanyG),T40);
  T38 = (P)YPsig(Ynil,T39,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T37 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_30),T38,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysrc_loc_file_setter,T37);
  T42 = fun_182;
  accessorF730 = T42;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_file_setter),accessorF730);
  (P)YPmet_name_setter(VARREF(Ysrc_loc_file_setter),accessorF730);
  T41 = accessorF730;
  setterF731 = T41;
  T45 = fun_183;
  T44 = (P)YPPprop(VARREF(YLsrc_locG),VARREF(Ysrc_loc_file),VARREF(Ysrc_loc_file_setter),VARREF(YLstrG),T45);
  propF732 = T44;
  (P)YPmet_env_setter(propF732,getterF729);
  (P)YPmet_env_setter(propF732,setterF731);
  T46 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsrc_locG),propF732);
  T43 = T46;
  T36 = T43;
  lit_33 = YPPsym((P)"head");
  lit_34 = YPPlist(1,YPPsym((P)"x"));
  lit_35 = YPPsym((P)"head-setter");
  lit_36 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_37 = YPPlist(1,YPPsym((P)"x"));
  T49 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_184 = YPmet(FUNCODEREF(fun_184),YPfalse,T49,ENVNUL,PNUL,sloc(757));
  T48 = YPsig(LITREF(lit_36),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_185 = YPmet(FUNCODEREF(fun_185),YPfalse,T48,ENVNUL,PNUL,sloc(757));
  T47 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_186 = YPmet(FUNCODEREF(fun_186),YPfalse,T47,ENVNUL,PNUL,sloc(757));
  T52 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T51 = (P)YPsig(Ynil,T52,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T50 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_33),T51,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yhead,T50);
  T54 = fun_184;
  accessorF733 = T54;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yhead),accessorF733);
  (P)YPmet_name_setter(VARREF(Yhead),accessorF733);
  T53 = accessorF733;
  getterF734 = T53;
  T59 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T58 = (P)YPpair(VARREF(YLanyG),T59);
  T57 = (P)YPsig(Ynil,T58,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T56 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_35),T57,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yhead_setter,T56);
  T61 = fun_185;
  accessorF735 = T61;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yhead_setter),accessorF735);
  (P)YPmet_name_setter(VARREF(Yhead_setter),accessorF735);
  T60 = accessorF735;
  setterF736 = T60;
  T64 = fun_186;
  T63 = (P)YPPprop(VARREF(YLlstG),VARREF(Yhead),VARREF(Yhead_setter),VARREF(YLanyG),T64);
  propF737 = T63;
  (P)YPmet_env_setter(propF737,getterF734);
  (P)YPmet_env_setter(propF737,setterF736);
  T65 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF737);
  T62 = T65;
  T55 = T62;
  lit_38 = YPPsym((P)"tail");
  lit_39 = YPPlist(1,YPPsym((P)"x"));
  lit_40 = YPPsym((P)"tail-setter");
  lit_41 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_42 = YPPlist(1,YPPsym((P)"x"));
  T68 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_187 = YPmet(FUNCODEREF(fun_187),YPfalse,T68,ENVNUL,PNUL,sloc(757));
  T67 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T67,ENVNUL,PNUL,sloc(757));
  T66 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_189 = YPmet(FUNCODEREF(fun_189),YPfalse,T66,ENVNUL,PNUL,sloc(757));
  T71 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T70 = (P)YPsig(Ynil,T71,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T69 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_38),T70,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytail,T69);
  T73 = fun_187;
  accessorF738 = T73;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytail),accessorF738);
  (P)YPmet_name_setter(VARREF(Ytail),accessorF738);
  T72 = accessorF738;
  getterF739 = T72;
  T78 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T77 = (P)YPpair(VARREF(YLanyG),T78);
  T76 = (P)YPsig(Ynil,T77,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T75 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_40),T76,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytail_setter,T75);
  T80 = fun_188;
  accessorF740 = T80;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytail_setter),accessorF740);
  (P)YPmet_name_setter(VARREF(Ytail_setter),accessorF740);
  T79 = accessorF740;
  setterF741 = T79;
  T83 = fun_189;
  T82 = (P)YPPprop(VARREF(YLlstG),VARREF(Ytail),VARREF(Ytail_setter),VARREF(YLlstG),T83);
  propF742 = T82;
  (P)YPmet_env_setter(propF742,getterF739);
  (P)YPmet_env_setter(propF742,setterF741);
  T84 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF742);
  T81 = T84;
  T74 = T81;
  lit_43 = YPPsym((P)"sym-name");
  lit_44 = YPPlist(1,YPPsym((P)"x"));
  lit_45 = YPPsym((P)"sym-name-setter");
  lit_46 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_47 = YPPlist(1,YPPsym((P)"x"));
  T87 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_190 = YPmet(FUNCODEREF(fun_190),YPfalse,T87,ENVNUL,PNUL,sloc(757));
  T86 = YPsig(LITREF(lit_46),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T86,ENVNUL,PNUL,sloc(757));
  T85 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_192 = YPmet(FUNCODEREF(fun_192),YPfalse,T85,ENVNUL,PNUL,sloc(757));
  T90 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T89 = (P)YPsig(Ynil,T90,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T88 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_43),T89,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysym_name,T88);
  T92 = fun_190;
  accessorF743 = T92;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysym_name),accessorF743);
  (P)YPmet_name_setter(VARREF(Ysym_name),accessorF743);
  T91 = accessorF743;
  getterF744 = T91;
  T97 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T96 = (P)YPpair(VARREF(YLanyG),T97);
  T95 = (P)YPsig(Ynil,T96,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T94 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_45),T95,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysym_name_setter,T94);
  T99 = fun_191;
  accessorF745 = T99;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysym_name_setter),accessorF745);
  (P)YPmet_name_setter(VARREF(Ysym_name_setter),accessorF745);
  T98 = accessorF745;
  setterF746 = T98;
  T102 = fun_192;
  T101 = (P)YPPprop(VARREF(YLsymG),VARREF(Ysym_name),VARREF(Ysym_name_setter),VARREF(YLstrG),T102);
  propF747 = T101;
  (P)YPmet_env_setter(propF747,getterF744);
  (P)YPmet_env_setter(propF747,setterF746);
  T103 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsymG),propF747);
  T100 = T103;
  T93 = T100;
  lit_48 = YPPsym((P)"class-prop-len");
  lit_49 = YPPlist(1,YPPsym((P)"x"));
  lit_50 = YPPsym((P)"class-prop-len-setter");
  lit_51 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_52 = YPPlist(1,YPPsym((P)"x"));
  T106 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T106,ENVNUL,PNUL,sloc(757));
  T105 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YLfixnumG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_194 = YPmet(FUNCODEREF(fun_194),YPfalse,T105,ENVNUL,PNUL,sloc(757));
  T104 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_195 = YPmet(FUNCODEREF(fun_195),YPfalse,T104,ENVNUL,PNUL,sloc(757));
  T109 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T108 = (P)YPsig(Ynil,T109,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T107 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_48),T108,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_prop_len,T107);
  T111 = fun_193;
  accessorF748 = T111;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len),accessorF748);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len),accessorF748);
  T110 = accessorF748;
  getterF749 = T110;
  T116 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T115 = (P)YPpair(VARREF(YLanyG),T116);
  T114 = (P)YPsig(Ynil,T115,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T113 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_50),T114,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_prop_len_setter,T113);
  T118 = fun_194;
  accessorF750 = T118;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len_setter),accessorF750);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len_setter),accessorF750);
  T117 = accessorF750;
  setterF751 = T117;
  T121 = fun_195;
  T120 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_prop_len),VARREF(Yclass_prop_len_setter),VARREF(YLfixnumG),T121);
  propF752 = T120;
  (P)YPmet_env_setter(propF752,getterF749);
  (P)YPmet_env_setter(propF752,setterF751);
  T122 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF752);
  T119 = T122;
  T112 = T119;
  lit_53 = YPPsym((P)"class-name");
  lit_54 = YPPlist(1,YPPsym((P)"x"));
  lit_55 = YPPsym((P)"class-name-setter");
  lit_56 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_57 = YPPlist(1,YPPsym((P)"x"));
  T125 = YPsig(LITREF(lit_54),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_196 = YPmet(FUNCODEREF(fun_196),YPfalse,T125,ENVNUL,PNUL,sloc(757));
  T124 = YPsig(LITREF(lit_56),YPPlist(2,VARREF(YLsymG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T124,ENVNUL,PNUL,sloc(757));
  T123 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_198 = YPmet(FUNCODEREF(fun_198),YPfalse,T123,ENVNUL,PNUL,sloc(757));
  T128 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T127 = (P)YPsig(Ynil,T128,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T126 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_53),T127,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_name,T126);
  T130 = fun_196;
  accessorF753 = T130;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_name),accessorF753);
  (P)YPmet_name_setter(VARREF(Yclass_name),accessorF753);
  T129 = accessorF753;
  getterF754 = T129;
  T135 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T134 = (P)YPpair(VARREF(YLanyG),T135);
  T133 = (P)YPsig(Ynil,T134,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T132 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_55),T133,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_name_setter,T132);
  T137 = fun_197;
  accessorF755 = T137;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_name_setter),accessorF755);
  (P)YPmet_name_setter(VARREF(Yclass_name_setter),accessorF755);
  T136 = accessorF755;
  setterF756 = T136;
  T140 = fun_198;
  T139 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_name),VARREF(Yclass_name_setter),VARREF(YLsymG),T140);
  propF757 = T139;
  (P)YPmet_env_setter(propF757,getterF754);
  (P)YPmet_env_setter(propF757,setterF756);
  T141 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF757);
  T138 = T141;
  T131 = T138;
  lit_58 = YPPsym((P)"class-parents");
  lit_59 = YPPlist(1,YPPsym((P)"x"));
  lit_60 = YPPsym((P)"class-parents-setter");
  lit_61 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_62 = YPPlist(1,YPPsym((P)"x"));
  T144 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_199 = YPmet(FUNCODEREF(fun_199),YPfalse,T144,ENVNUL,PNUL,sloc(757));
  T143 = YPsig(LITREF(lit_61),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_200 = YPmet(FUNCODEREF(fun_200),YPfalse,T143,ENVNUL,PNUL,sloc(757));
  T142 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_201 = YPmet(FUNCODEREF(fun_201),YPfalse,T142,ENVNUL,PNUL,sloc(757));
  T147 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T146 = (P)YPsig(Ynil,T147,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T145 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_58),T146,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_parents,T145);
  T149 = fun_199;
  accessorF758 = T149;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents),accessorF758);
  (P)YPmet_name_setter(VARREF(Yclass_parents),accessorF758);
  T148 = accessorF758;
  getterF759 = T148;
  T154 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T153 = (P)YPpair(VARREF(YLanyG),T154);
  T152 = (P)YPsig(Ynil,T153,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T151 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_60),T152,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_parents_setter,T151);
  T156 = fun_200;
  accessorF760 = T156;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents_setter),accessorF760);
  (P)YPmet_name_setter(VARREF(Yclass_parents_setter),accessorF760);
  T155 = accessorF760;
  setterF761 = T155;
  T159 = fun_201;
  T158 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_parents),VARREF(Yclass_parents_setter),VARREF(YLlstG),T159);
  propF762 = T158;
  (P)YPmet_env_setter(propF762,getterF759);
  (P)YPmet_env_setter(propF762,setterF761);
  T160 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF762);
  T157 = T160;
  T150 = T157;
  lit_63 = YPPsym((P)"class-direct-props");
  lit_64 = YPPlist(1,YPPsym((P)"x"));
  lit_65 = YPPsym((P)"class-direct-props-setter");
  lit_66 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_67 = YPPlist(1,YPPsym((P)"x"));
  T163 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T163,ENVNUL,PNUL,sloc(757));
  T162 = YPsig(LITREF(lit_66),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_203 = YPmet(FUNCODEREF(fun_203),YPfalse,T162,ENVNUL,PNUL,sloc(757));
  T161 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_204 = YPmet(FUNCODEREF(fun_204),YPfalse,T161,ENVNUL,PNUL,sloc(757));
  T166 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T165 = (P)YPsig(Ynil,T166,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T164 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_63),T165,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_direct_props,T164);
  T168 = fun_202;
  accessorF763 = T168;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props),accessorF763);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props),accessorF763);
  T167 = accessorF763;
  getterF764 = T167;
  T173 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T172 = (P)YPpair(VARREF(YLanyG),T173);
  T171 = (P)YPsig(Ynil,T172,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T170 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_65),T171,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_direct_props_setter,T170);
  T175 = fun_203;
  accessorF765 = T175;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props_setter),accessorF765);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props_setter),accessorF765);
  T174 = accessorF765;
  setterF766 = T174;
  T178 = fun_204;
  T177 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_direct_props),VARREF(Yclass_direct_props_setter),VARREF(YLlstG),T178);
  propF767 = T177;
  (P)YPmet_env_setter(propF767,getterF764);
  (P)YPmet_env_setter(propF767,setterF766);
  T179 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF767);
  T176 = T179;
  T169 = T176;
  lit_68 = YPPsym((P)"class-ancestors");
  lit_69 = YPPlist(1,YPPsym((P)"x"));
  lit_70 = YPPsym((P)"class-ancestors-setter");
  lit_71 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_72 = YPPlist(1,YPPsym((P)"x"));
  T182 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_205 = YPmet(FUNCODEREF(fun_205),YPfalse,T182,ENVNUL,PNUL,sloc(757));
  T181 = YPsig(LITREF(lit_71),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T181,ENVNUL,PNUL,sloc(757));
  T180 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_207 = YPmet(FUNCODEREF(fun_207),YPfalse,T180,ENVNUL,PNUL,sloc(757));
  T185 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T184 = (P)YPsig(Ynil,T185,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T183 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_68),T184,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_ancestors,T183);
  T187 = fun_205;
  accessorF768 = T187;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors),accessorF768);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors),accessorF768);
  T186 = accessorF768;
  getterF769 = T186;
  T192 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T191 = (P)YPpair(VARREF(YLanyG),T192);
  T190 = (P)YPsig(Ynil,T191,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T189 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_70),T190,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_ancestors_setter,T189);
  T194 = fun_206;
  accessorF770 = T194;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors_setter),accessorF770);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors_setter),accessorF770);
  T193 = accessorF770;
  setterF771 = T193;
  T197 = fun_207;
  T196 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_ancestors),VARREF(Yclass_ancestors_setter),VARREF(YLlstG),T197);
  propF772 = T196;
  (P)YPmet_env_setter(propF772,getterF769);
  (P)YPmet_env_setter(propF772,setterF771);
  T198 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF772);
  T195 = T198;
  T188 = T195;
  lit_73 = YPPsym((P)"class-props");
  lit_74 = YPPlist(1,YPPsym((P)"x"));
  lit_75 = YPPsym((P)"class-props-setter");
  lit_76 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_77 = YPPlist(1,YPPsym((P)"x"));
  T201 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_208 = YPmet(FUNCODEREF(fun_208),YPfalse,T201,ENVNUL,PNUL,sloc(757));
  T200 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T200,ENVNUL,PNUL,sloc(757));
  T199 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T199,ENVNUL,PNUL,sloc(757));
  T204 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T203 = (P)YPsig(Ynil,T204,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T202 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_73),T203,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_props,T202);
  T206 = fun_208;
  accessorF773 = T206;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_props),accessorF773);
  (P)YPmet_name_setter(VARREF(Yclass_props),accessorF773);
  T205 = accessorF773;
  getterF774 = T205;
  T211 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T210 = (P)YPpair(VARREF(YLanyG),T211);
  T209 = (P)YPsig(Ynil,T210,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T208 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_75),T209,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_props_setter,T208);
  T213 = fun_209;
  accessorF775 = T213;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_props_setter),accessorF775);
  (P)YPmet_name_setter(VARREF(Yclass_props_setter),accessorF775);
  T212 = accessorF775;
  setterF776 = T212;
  T216 = fun_210;
  T215 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_props),VARREF(Yclass_props_setter),VARREF(YLlstG),T216);
  propF777 = T215;
  (P)YPmet_env_setter(propF777,getterF774);
  (P)YPmet_env_setter(propF777,setterF776);
  T217 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF777);
  T214 = T217;
  T207 = T214;
  lit_78 = YPPsym((P)"class-children");
  lit_79 = YPPlist(1,YPPsym((P)"x"));
  lit_80 = YPPsym((P)"class-children-setter");
  lit_81 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_82 = YPPlist(1,YPPsym((P)"x"));
  T220 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_211 = YPmet(FUNCODEREF(fun_211),YPfalse,T220,ENVNUL,PNUL,sloc(757));
  T219 = YPsig(LITREF(lit_81),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_212 = YPmet(FUNCODEREF(fun_212),YPfalse,T219,ENVNUL,PNUL,sloc(757));
  T218 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_213 = YPmet(FUNCODEREF(fun_213),YPfalse,T218,ENVNUL,PNUL,sloc(757));
  T223 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T222 = (P)YPsig(Ynil,T223,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T221 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_78),T222,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_children,T221);
  T225 = fun_211;
  accessorF778 = T225;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_children),accessorF778);
  (P)YPmet_name_setter(VARREF(Yclass_children),accessorF778);
  T224 = accessorF778;
  getterF779 = T224;
  T230 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T229 = (P)YPpair(VARREF(YLanyG),T230);
  T228 = (P)YPsig(Ynil,T229,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T227 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_80),T228,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_children_setter,T227);
  T232 = fun_212;
  accessorF780 = T232;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_children_setter),accessorF780);
  (P)YPmet_name_setter(VARREF(Yclass_children_setter),accessorF780);
  T231 = accessorF780;
  setterF781 = T231;
  T235 = fun_213;
  T234 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_children),VARREF(Yclass_children_setter),VARREF(YLlstG),T235);
  propF782 = T234;
  (P)YPmet_env_setter(propF782,getterF779);
  (P)YPmet_env_setter(propF782,setterF781);
  T236 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF782);
  T233 = T236;
  T226 = T233;
  lit_83 = YPPsym((P)"class-gens");
  lit_84 = YPPlist(1,YPPsym((P)"x"));
  lit_85 = YPPsym((P)"class-gens-setter");
  lit_86 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_87 = YPPlist(1,YPPsym((P)"x"));
  T239 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_214 = YPmet(FUNCODEREF(fun_214),YPfalse,T239,ENVNUL,PNUL,sloc(757));
  T238 = YPsig(LITREF(lit_86),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T238,ENVNUL,PNUL,sloc(757));
  T237 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T237,ENVNUL,PNUL,sloc(757));
  T242 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T241 = (P)YPsig(Ynil,T242,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T240 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_83),T241,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_gens,T240);
  T244 = fun_214;
  accessorF783 = T244;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens),accessorF783);
  (P)YPmet_name_setter(VARREF(Yclass_gens),accessorF783);
  T243 = accessorF783;
  getterF784 = T243;
  T249 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T248 = (P)YPpair(VARREF(YLanyG),T249);
  T247 = (P)YPsig(Ynil,T248,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T246 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_85),T247,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_gens_setter,T246);
  T251 = fun_215;
  accessorF785 = T251;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens_setter),accessorF785);
  (P)YPmet_name_setter(VARREF(Yclass_gens_setter),accessorF785);
  T250 = accessorF785;
  setterF786 = T250;
  T254 = fun_216;
  T253 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_gens),VARREF(Yclass_gens_setter),VARREF(YLlstG),T254);
  propF787 = T253;
  (P)YPmet_env_setter(propF787,getterF784);
  (P)YPmet_env_setter(propF787,setterF786);
  T255 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF787);
  T252 = T255;
  T245 = T252;
  lit_88 = YPPsym((P)"class-mets");
  lit_89 = YPPlist(1,YPPsym((P)"x"));
  lit_90 = YPPsym((P)"class-mets-setter");
  lit_91 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_92 = YPPlist(1,YPPsym((P)"x"));
  T258 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_217 = YPmet(FUNCODEREF(fun_217),YPfalse,T258,ENVNUL,PNUL,sloc(757));
  T257 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_218 = YPmet(FUNCODEREF(fun_218),YPfalse,T257,ENVNUL,PNUL,sloc(757));
  T256 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T256,ENVNUL,PNUL,sloc(757));
  T261 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T260 = (P)YPsig(Ynil,T261,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T259 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_88),T260,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_mets,T259);
  T263 = fun_217;
  accessorF788 = T263;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets),accessorF788);
  (P)YPmet_name_setter(VARREF(Yclass_mets),accessorF788);
  T262 = accessorF788;
  getterF789 = T262;
  T268 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T267 = (P)YPpair(VARREF(YLanyG),T268);
  T266 = (P)YPsig(Ynil,T267,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T265 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_90),T266,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_mets_setter,T265);
  T270 = fun_218;
  accessorF790 = T270;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets_setter),accessorF790);
  (P)YPmet_name_setter(VARREF(Yclass_mets_setter),accessorF790);
  T269 = accessorF790;
  setterF791 = T269;
  T273 = fun_219;
  T272 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_mets),VARREF(Yclass_mets_setter),VARREF(YLlstG),T273);
  propF792 = T272;
  (P)YPmet_env_setter(propF792,getterF789);
  (P)YPmet_env_setter(propF792,setterF791);
  T274 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF792);
  T271 = T274;
  T264 = T271;
  lit_93 = YPPsym((P)"class-forward");
  lit_94 = YPPlist(1,YPPsym((P)"x"));
  lit_95 = YPPsym((P)"class-forward-setter");
  lit_96 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_97 = YPPlist(1,YPPsym((P)"x"));
  T277 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T277,ENVNUL,PNUL,sloc(757));
  T276 = YPsig(LITREF(lit_96),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T276,ENVNUL,PNUL,sloc(757));
  T275 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T275,ENVNUL,PNUL,sloc(757));
  T280 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T279 = (P)YPsig(Ynil,T280,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T278 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_93),T279,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_forward,T278);
  T282 = fun_220;
  accessorF793 = T282;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward),accessorF793);
  (P)YPmet_name_setter(VARREF(Yclass_forward),accessorF793);
  T281 = accessorF793;
  getterF794 = T281;
  T287 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T286 = (P)YPpair(VARREF(YLanyG),T287);
  T285 = (P)YPsig(Ynil,T286,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T284 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_95),T285,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_forward_setter,T284);
  T289 = fun_221;
  accessorF795 = T289;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward_setter),accessorF795);
  (P)YPmet_name_setter(VARREF(Yclass_forward_setter),accessorF795);
  T288 = accessorF795;
  setterF796 = T288;
  T292 = fun_222;
  T291 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_forward),VARREF(Yclass_forward_setter),VARREF(YLanyG),T292);
  propF797 = T291;
  (P)YPmet_env_setter(propF797,getterF794);
  (P)YPmet_env_setter(propF797,setterF796);
  T293 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF797);
  T290 = T293;
  T283 = T290;
  lit_98 = YPPsym((P)"class-type-cache");
  lit_99 = YPPlist(1,YPPsym((P)"x"));
  lit_100 = YPPsym((P)"class-type-cache-setter");
  lit_101 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_102 = YPPlist(1,YPPsym((P)"x"));
  T296 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_223 = YPmet(FUNCODEREF(fun_223),YPfalse,T296,ENVNUL,PNUL,sloc(757));
  T295 = YPsig(LITREF(lit_101),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_224 = YPmet(FUNCODEREF(fun_224),YPfalse,T295,ENVNUL,PNUL,sloc(757));
  T294 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T294,ENVNUL,PNUL,sloc(757));
  T299 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T298 = (P)YPsig(Ynil,T299,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T297 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_98),T298,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_type_cache,T297);
  T301 = fun_223;
  accessorF798 = T301;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_type_cache),accessorF798);
  (P)YPmet_name_setter(VARREF(Yclass_type_cache),accessorF798);
  T300 = accessorF798;
  getterF799 = T300;
  T306 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T305 = (P)YPpair(VARREF(YLanyG),T306);
  T304 = (P)YPsig(Ynil,T305,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T303 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_100),T304,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_type_cache_setter,T303);
  T308 = fun_224;
  accessorF800 = T308;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_type_cache_setter),accessorF800);
  (P)YPmet_name_setter(VARREF(Yclass_type_cache_setter),accessorF800);
  T307 = accessorF800;
  setterF801 = T307;
  T311 = fun_225;
  T310 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_type_cache),VARREF(Yclass_type_cache_setter),VARREF(YLanyG),T311);
  propF802 = T310;
  (P)YPmet_env_setter(propF802,getterF799);
  (P)YPmet_env_setter(propF802,setterF801);
  T312 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF802);
  T309 = T312;
  T302 = T309;
  lit_103 = YPPsym((P)"class-id");
  lit_104 = YPPlist(1,YPPsym((P)"x"));
  lit_105 = YPPsym((P)"class-id-setter");
  lit_106 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_107 = YPPlist(1,YPPsym((P)"x"));
  T315 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_226 = YPmet(FUNCODEREF(fun_226),YPfalse,T315,ENVNUL,PNUL,sloc(757));
  T314 = YPsig(LITREF(lit_106),YPPlist(2,VARREF(YLfixnumG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_227 = YPmet(FUNCODEREF(fun_227),YPfalse,T314,ENVNUL,PNUL,sloc(757));
  T313 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_228 = YPmet(FUNCODEREF(fun_228),YPfalse,T313,ENVNUL,PNUL,sloc(757));
  T318 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T317 = (P)YPsig(Ynil,T318,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T316 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_103),T317,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_id,T316);
  T320 = fun_226;
  accessorF803 = T320;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_id),accessorF803);
  (P)YPmet_name_setter(VARREF(Yclass_id),accessorF803);
  T319 = accessorF803;
  getterF804 = T319;
  T325 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T324 = (P)YPpair(VARREF(YLanyG),T325);
  T323 = (P)YPsig(Ynil,T324,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T322 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_105),T323,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_id_setter,T322);
  T327 = fun_227;
  accessorF805 = T327;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_id_setter),accessorF805);
  (P)YPmet_name_setter(VARREF(Yclass_id_setter),accessorF805);
  T326 = accessorF805;
  setterF806 = T326;
  T330 = fun_228;
  T329 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_id),VARREF(Yclass_id_setter),VARREF(YLfixnumG),T330);
  propF807 = T329;
  (P)YPmet_env_setter(propF807,getterF804);
  (P)YPmet_env_setter(propF807,setterF806);
  T331 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF807);
  T328 = T331;
  T321 = T328;
  lit_108 = YPPsym((P)"class-row");
  lit_109 = YPPlist(1,YPPsym((P)"x"));
  lit_110 = YPPsym((P)"class-row-setter");
  lit_111 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_112 = YPPlist(1,YPPsym((P)"x"));
  T334 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_229 = YPmet(FUNCODEREF(fun_229),YPfalse,T334,ENVNUL,PNUL,sloc(757));
  T333 = YPsig(LITREF(lit_111),YPPlist(2,VARREF(YLtupG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_230 = YPmet(FUNCODEREF(fun_230),YPfalse,T333,ENVNUL,PNUL,sloc(757));
  T332 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_231 = YPmet(FUNCODEREF(fun_231),YPfalse,T332,ENVNUL,PNUL,sloc(757));
  T337 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T336 = (P)YPsig(Ynil,T337,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T335 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_108),T336,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_row,T335);
  T339 = fun_229;
  accessorF808 = T339;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_row),accessorF808);
  (P)YPmet_name_setter(VARREF(Yclass_row),accessorF808);
  T338 = accessorF808;
  getterF809 = T338;
  T344 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T343 = (P)YPpair(VARREF(YLanyG),T344);
  T342 = (P)YPsig(Ynil,T343,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T341 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_110),T342,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_row_setter,T341);
  T346 = fun_230;
  accessorF810 = T346;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_row_setter),accessorF810);
  (P)YPmet_name_setter(VARREF(Yclass_row_setter),accessorF810);
  T345 = accessorF810;
  setterF811 = T345;
  T349 = fun_231;
  T348 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_row),VARREF(Yclass_row_setter),VARREF(YLtupG),T349);
  propF812 = T348;
  (P)YPmet_env_setter(propF812,getterF809);
  (P)YPmet_env_setter(propF812,setterF811);
  T350 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF812);
  T347 = T350;
  T340 = T347;
  lit_113 = YPPsym((P)"type-object");
  lit_114 = YPPlist(1,YPPsym((P)"x"));
  lit_115 = YPPsym((P)"type-object-setter");
  lit_116 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_117 = YPPlist(1,YPPsym((P)"x"));
  T353 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLsingletonG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T353,ENVNUL,PNUL,sloc(757));
  T352 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_233 = YPmet(FUNCODEREF(fun_233),YPfalse,T352,ENVNUL,PNUL,sloc(757));
  T351 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_234 = YPmet(FUNCODEREF(fun_234),YPfalse,T351,ENVNUL,PNUL,sloc(757));
  T356 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T355 = (P)YPsig(Ynil,T356,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T354 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_113),T355,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_object,T354);
  T358 = fun_232;
  accessorF813 = T358;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_object),accessorF813);
  (P)YPmet_name_setter(VARREF(Ytype_object),accessorF813);
  T357 = accessorF813;
  getterF814 = T357;
  T363 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T362 = (P)YPpair(VARREF(YLanyG),T363);
  T361 = (P)YPsig(Ynil,T362,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T360 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_115),T361,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_object_setter,T360);
  T365 = fun_233;
  accessorF815 = T365;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_object_setter),accessorF815);
  (P)YPmet_name_setter(VARREF(Ytype_object_setter),accessorF815);
  T364 = accessorF815;
  setterF816 = T364;
  T368 = fun_234;
  T367 = (P)YPPprop(VARREF(YLsingletonG),VARREF(Ytype_object),VARREF(Ytype_object_setter),VARREF(YLanyG),T368);
  propF817 = T367;
  (P)YPmet_env_setter(propF817,getterF814);
  (P)YPmet_env_setter(propF817,setterF816);
  T369 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsingletonG),propF817);
  T366 = T369;
  T359 = T366;
  lit_118 = YPPsym((P)"type-class");
  lit_119 = YPPlist(1,YPPsym((P)"x"));
  lit_120 = YPPsym((P)"type-class-setter");
  lit_121 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_122 = YPPlist(1,YPPsym((P)"x"));
  T372 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YLsubclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_235 = YPmet(FUNCODEREF(fun_235),YPfalse,T372,ENVNUL,PNUL,sloc(757));
  T371 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T371,ENVNUL,PNUL,sloc(757));
  T370 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_237 = YPmet(FUNCODEREF(fun_237),YPfalse,T370,ENVNUL,PNUL,sloc(757));
  T375 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T374 = (P)YPsig(Ynil,T375,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T373 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_118),T374,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_class,T373);
  T377 = fun_235;
  accessorF818 = T377;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_class),accessorF818);
  (P)YPmet_name_setter(VARREF(Ytype_class),accessorF818);
  T376 = accessorF818;
  getterF819 = T376;
  T382 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T381 = (P)YPpair(VARREF(YLanyG),T382);
  T380 = (P)YPsig(Ynil,T381,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T379 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_120),T380,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_class_setter,T379);
  T384 = fun_236;
  accessorF820 = T384;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_class_setter),accessorF820);
  (P)YPmet_name_setter(VARREF(Ytype_class_setter),accessorF820);
  T383 = accessorF820;
  setterF821 = T383;
  T387 = fun_237;
  T386 = (P)YPPprop(VARREF(YLsubclassG),VARREF(Ytype_class),VARREF(Ytype_class_setter),VARREF(YLclassG),T387);
  propF822 = T386;
  (P)YPmet_env_setter(propF822,getterF819);
  (P)YPmet_env_setter(propF822,setterF821);
  T388 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsubclassG),propF822);
  T385 = T388;
  T378 = T385;
  lit_123 = YPPsym((P)"union-elts");
  lit_124 = YPPlist(1,YPPsym((P)"x"));
  lit_125 = YPPsym((P)"union-elts-setter");
  lit_126 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_127 = YPPlist(1,YPPsym((P)"x"));
  T391 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLunionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_238 = YPmet(FUNCODEREF(fun_238),YPfalse,T391,ENVNUL,PNUL,sloc(757));
  T390 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLlstG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_239 = YPmet(FUNCODEREF(fun_239),YPfalse,T390,ENVNUL,PNUL,sloc(757));
  T389 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_240 = YPmet(FUNCODEREF(fun_240),YPfalse,T389,ENVNUL,PNUL,sloc(757));
  T394 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T393 = (P)YPsig(Ynil,T394,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T392 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_123),T393,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yunion_elts,T392);
  T396 = fun_238;
  accessorF823 = T396;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yunion_elts),accessorF823);
  (P)YPmet_name_setter(VARREF(Yunion_elts),accessorF823);
  T395 = accessorF823;
  getterF824 = T395;
  T401 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T400 = (P)YPpair(VARREF(YLanyG),T401);
  T399 = (P)YPsig(Ynil,T400,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T398 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_125),T399,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yunion_elts_setter,T398);
  T403 = fun_239;
  accessorF825 = T403;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yunion_elts_setter),accessorF825);
  (P)YPmet_name_setter(VARREF(Yunion_elts_setter),accessorF825);
  T402 = accessorF825;
  setterF826 = T402;
  T406 = fun_240;
  T405 = (P)YPPprop(VARREF(YLunionG),VARREF(Yunion_elts),VARREF(Yunion_elts_setter),VARREF(YLlstG),T406);
  propF827 = T405;
  (P)YPmet_env_setter(propF827,getterF824);
  (P)YPmet_env_setter(propF827,setterF826);
  T407 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLunionG),propF827);
  T404 = T407;
  T397 = T404;
  lit_128 = YPPsym((P)"product-elts");
  lit_129 = YPPlist(1,YPPsym((P)"x"));
  lit_130 = YPPsym((P)"product-elts-setter");
  lit_131 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_132 = YPPlist(1,YPPsym((P)"x"));
  T410 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YLproductG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_241 = YPmet(FUNCODEREF(fun_241),YPfalse,T410,ENVNUL,PNUL,sloc(757));
  T409 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YLtupG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_242 = YPmet(FUNCODEREF(fun_242),YPfalse,T409,ENVNUL,PNUL,sloc(757));
  T408 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_243 = YPmet(FUNCODEREF(fun_243),YPfalse,T408,ENVNUL,PNUL,sloc(757));
  T413 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T412 = (P)YPsig(Ynil,T413,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T411 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_128),T412,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yproduct_elts,T411);
  T415 = fun_241;
  accessorF828 = T415;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yproduct_elts),accessorF828);
  (P)YPmet_name_setter(VARREF(Yproduct_elts),accessorF828);
  T414 = accessorF828;
  getterF829 = T414;
  T420 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T419 = (P)YPpair(VARREF(YLanyG),T420);
  T418 = (P)YPsig(Ynil,T419,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T417 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_130),T418,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yproduct_elts_setter,T417);
  T422 = fun_242;
  accessorF830 = T422;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yproduct_elts_setter),accessorF830);
  (P)YPmet_name_setter(VARREF(Yproduct_elts_setter),accessorF830);
  T421 = accessorF830;
  setterF831 = T421;
  T425 = fun_243;
  T424 = (P)YPPprop(VARREF(YLproductG),VARREF(Yproduct_elts),VARREF(Yproduct_elts_setter),VARREF(YLtupG),T425);
  propF832 = T424;
  (P)YPmet_env_setter(propF832,getterF829);
  (P)YPmet_env_setter(propF832,setterF831);
  T426 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLproductG),propF832);
  T423 = T426;
  T416 = T423;
  lit_133 = YPPsym((P)"prop-owner");
  lit_134 = YPPlist(1,YPPsym((P)"x"));
  lit_135 = YPPsym((P)"prop-owner-setter");
  lit_136 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_137 = YPPlist(1,YPPsym((P)"x"));
  T429 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_244 = YPmet(FUNCODEREF(fun_244),YPfalse,T429,ENVNUL,PNUL,sloc(757));
  T428 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YLanyG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_245 = YPmet(FUNCODEREF(fun_245),YPfalse,T428,ENVNUL,PNUL,sloc(757));
  T427 = YPsig(LITREF(lit_137),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_246 = YPmet(FUNCODEREF(fun_246),YPfalse,T427,ENVNUL,PNUL,sloc(757));
  T432 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T431 = (P)YPsig(Ynil,T432,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T430 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_133),T431,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_owner,T430);
  T434 = fun_244;
  accessorF833 = T434;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner),accessorF833);
  (P)YPmet_name_setter(VARREF(Yprop_owner),accessorF833);
  T433 = accessorF833;
  getterF834 = T433;
  T439 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T438 = (P)YPpair(VARREF(YLanyG),T439);
  T437 = (P)YPsig(Ynil,T438,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T436 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_135),T437,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_owner_setter,T436);
  T441 = fun_245;
  accessorF835 = T441;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner_setter),accessorF835);
  (P)YPmet_name_setter(VARREF(Yprop_owner_setter),accessorF835);
  T440 = accessorF835;
  setterF836 = T440;
  T444 = fun_246;
  T443 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_owner),VARREF(Yprop_owner_setter),VARREF(YLanyG),T444);
  propF837 = T443;
  (P)YPmet_env_setter(propF837,getterF834);
  (P)YPmet_env_setter(propF837,setterF836);
  T445 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF837);
  T442 = T445;
  T435 = T442;
  lit_138 = YPPsym((P)"prop-getter");
  lit_139 = YPPlist(1,YPPsym((P)"x"));
  lit_140 = YPPsym((P)"prop-getter-setter");
  lit_141 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_142 = YPPlist(1,YPPsym((P)"x"));
  T452 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T451 = fun_247 = YPmet(FUNCODEREF(fun_247),YPfalse,T452,ENVNUL,PNUL,sloc(757));
  T450 = YPsig(LITREF(lit_141),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T449 = fun_248 = YPmet(FUNCODEREF(fun_248),YPfalse,T450,ENVNUL,PNUL,sloc(757));
  T448 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T447 = fun_249 = YPmet(FUNCODEREF(fun_249),YPfalse,T448,ENVNUL,PNUL,sloc(757));
  T456 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T455 = (P)YPsig(Ynil,T456,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T454 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_138),T455,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_getter,T454);
  T458 = fun_247;
  accessorF838 = T458;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter),accessorF838);
  (P)YPmet_name_setter(VARREF(Yprop_getter),accessorF838);
  T457 = accessorF838;
  getterF839 = T457;
  T463 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T462 = (P)YPpair(VARREF(YLanyG),T463);
  T461 = (P)YPsig(Ynil,T462,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T460 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_140),T461,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_getter_setter,T460);
  T465 = fun_248;
  accessorF840 = T465;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter_setter),accessorF840);
  (P)YPmet_name_setter(VARREF(Yprop_getter_setter),accessorF840);
  T464 = accessorF840;
  setterF841 = T464;
  T468 = fun_249;
  T467 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_getter),VARREF(Yprop_getter_setter),VARREF(YLfunG),T468);
  propF842 = T467;
  (P)YPmet_env_setter(propF842,getterF839);
  (P)YPmet_env_setter(propF842,setterF841);
  T469 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF842);
  T466 = T469;
  T459 = T466;
  T453 = T459;
  T446 = T453;
  return T446;
}

P Y___main_8___() {
  P propF972;
  P setterF971;
  P accessorF970;
  P getterF969;
  P accessorF968;
  P propF967;
  P setterF966;
  P accessorF965;
  P getterF964;
  P accessorF963;
  P propF962;
  P setterF961;
  P accessorF960;
  P getterF959;
  P accessorF958;
  P propF957;
  P setterF956;
  P accessorF955;
  P getterF954;
  P accessorF953;
  P propF952;
  P setterF951;
  P accessorF950;
  P getterF949;
  P accessorF948;
  P propF947;
  P setterF946;
  P accessorF945;
  P getterF944;
  P accessorF943;
  P propF942;
  P setterF941;
  P accessorF940;
  P getterF939;
  P accessorF938;
  P propF937;
  P setterF936;
  P accessorF935;
  P getterF934;
  P accessorF933;
  P propF932;
  P setterF931;
  P accessorF930;
  P getterF929;
  P accessorF928;
  P propF927;
  P setterF926;
  P accessorF925;
  P getterF924;
  P accessorF923;
  P propF922;
  P setterF921;
  P accessorF920;
  P getterF919;
  P accessorF918;
  P propF917;
  P setterF916;
  P accessorF915;
  P getterF914;
  P accessorF913;
  P propF912;
  P setterF911;
  P accessorF910;
  P getterF909;
  P accessorF908;
  P propF907;
  P setterF906;
  P accessorF905;
  P getterF904;
  P accessorF903;
  P propF902;
  P setterF901;
  P accessorF900;
  P getterF899;
  P accessorF898;
  P propF897;
  P setterF896;
  P accessorF895;
  P getterF894;
  P accessorF893;
  P propF892;
  P setterF891;
  P accessorF890;
  P getterF889;
  P accessorF888;
  P propF887;
  P setterF886;
  P accessorF885;
  P getterF884;
  P accessorF883;
  P propF882;
  P setterF881;
  P accessorF880;
  P getterF879;
  P accessorF878;
  P propF877;
  P setterF876;
  P accessorF875;
  P getterF874;
  P accessorF873;
  P propF872;
  P setterF871;
  P accessorF870;
  P getterF869;
  P accessorF868;
  P propF867;
  P setterF866;
  P accessorF865;
  P getterF864;
  P accessorF863;
  P propF862;
  P setterF861;
  P accessorF860;
  P getterF859;
  P accessorF858;
  P propF857;
  P setterF856;
  P accessorF855;
  P getterF854;
  P accessorF853;
  P propF852;
  P setterF851;
  P accessorF850;
  P getterF849;
  P accessorF848;
  P propF847;
  P setterF846;
  P accessorF845;
  P getterF844;
  P accessorF843;
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
  P T496,T497,T498,T499,T500;
DEFCREGS();
loop:
  lit_143 = YPPsym((P)"prop-setter");
  lit_144 = YPPlist(1,YPPsym((P)"x"));
  lit_145 = YPPsym((P)"prop-setter-setter");
  lit_146 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_147 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_250 = YPmet(FUNCODEREF(fun_250),YPfalse,T2,ENVNUL,PNUL,sloc(757));
  T1 = YPsig(LITREF(lit_146),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_251 = YPmet(FUNCODEREF(fun_251),YPfalse,T1,ENVNUL,PNUL,sloc(757));
  T0 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_252 = YPmet(FUNCODEREF(fun_252),YPfalse,T0,ENVNUL,PNUL,sloc(757));
  T5 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T4 = (P)YPsig(Ynil,T5,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T3 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_143),T4,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_setter,T3);
  T7 = fun_250;
  accessorF843 = T7;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter),accessorF843);
  (P)YPmet_name_setter(VARREF(Yprop_setter),accessorF843);
  T6 = accessorF843;
  getterF844 = T6;
  T12 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T11 = (P)YPpair(VARREF(YLanyG),T12);
  T10 = (P)YPsig(Ynil,T11,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T9 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_145),T10,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_setter_setter,T9);
  T14 = fun_251;
  accessorF845 = T14;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter_setter),accessorF845);
  (P)YPmet_name_setter(VARREF(Yprop_setter_setter),accessorF845);
  T13 = accessorF845;
  setterF846 = T13;
  T17 = fun_252;
  T16 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_setter),VARREF(Yprop_setter_setter),VARREF(YLfunG),T17);
  propF847 = T16;
  (P)YPmet_env_setter(propF847,getterF844);
  (P)YPmet_env_setter(propF847,setterF846);
  T18 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF847);
  T15 = T18;
  T8 = T15;
  lit_148 = YPPsym((P)"prop-type");
  lit_149 = YPPlist(1,YPPsym((P)"x"));
  lit_150 = YPPsym((P)"prop-type-setter");
  lit_151 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_152 = YPPlist(1,YPPsym((P)"x"));
  T21 = YPsig(LITREF(lit_149),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_253 = YPmet(FUNCODEREF(fun_253),YPfalse,T21,ENVNUL,PNUL,sloc(757));
  T20 = YPsig(LITREF(lit_151),YPPlist(2,VARREF(YLtypeG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_254 = YPmet(FUNCODEREF(fun_254),YPfalse,T20,ENVNUL,PNUL,sloc(757));
  T19 = YPsig(LITREF(lit_152),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_255 = YPmet(FUNCODEREF(fun_255),YPfalse,T19,ENVNUL,PNUL,sloc(757));
  T24 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T23 = (P)YPsig(Ynil,T24,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T22 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_148),T23,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_type,T22);
  T26 = fun_253;
  accessorF848 = T26;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_type),accessorF848);
  (P)YPmet_name_setter(VARREF(Yprop_type),accessorF848);
  T25 = accessorF848;
  getterF849 = T25;
  T31 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T30 = (P)YPpair(VARREF(YLanyG),T31);
  T29 = (P)YPsig(Ynil,T30,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T28 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_150),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_type_setter,T28);
  T33 = fun_254;
  accessorF850 = T33;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_type_setter),accessorF850);
  (P)YPmet_name_setter(VARREF(Yprop_type_setter),accessorF850);
  T32 = accessorF850;
  setterF851 = T32;
  T36 = fun_255;
  T35 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_type),VARREF(Yprop_type_setter),VARREF(YLtypeG),T36);
  propF852 = T35;
  (P)YPmet_env_setter(propF852,getterF849);
  (P)YPmet_env_setter(propF852,setterF851);
  T37 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF852);
  T34 = T37;
  T27 = T34;
  lit_153 = YPPsym((P)"prop-init");
  lit_154 = YPPlist(1,YPPsym((P)"x"));
  lit_155 = YPPsym((P)"prop-init-setter");
  lit_156 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_157 = YPPlist(1,YPPsym((P)"x"));
  lit_158 = YPPlist(1,YPPsym((P)"x"));
  T41 = YPsig(LITREF(lit_154),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_256 = YPmet(FUNCODEREF(fun_256),YPfalse,T41,ENVNUL,PNUL,sloc(757));
  T40 = YPsig(LITREF(lit_156),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_257 = YPmet(FUNCODEREF(fun_257),YPfalse,T40,ENVNUL,PNUL,sloc(757));
  T39 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_258 = YPmet(FUNCODEREF(fun_258),YPfalse,T39,ENVNUL,PNUL,sloc(188));
  T38 = YPsig(LITREF(lit_157),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_259 = YPmet(FUNCODEREF(fun_259),YPfalse,T38,ENVNUL,PNUL,sloc(757));
  T44 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T43 = (P)YPsig(Ynil,T44,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T42 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_153),T43,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_init,T42);
  T46 = fun_256;
  accessorF853 = T46;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_init),accessorF853);
  (P)YPmet_name_setter(VARREF(Yprop_init),accessorF853);
  T45 = accessorF853;
  getterF854 = T45;
  T51 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T50 = (P)YPpair(VARREF(YLanyG),T51);
  T49 = (P)YPsig(Ynil,T50,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T48 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_155),T49,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_init_setter,T48);
  T53 = fun_257;
  accessorF855 = T53;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_init_setter),accessorF855);
  (P)YPmet_name_setter(VARREF(Yprop_init_setter),accessorF855);
  T52 = accessorF855;
  setterF856 = T52;
  T56 = fun_259;
  T55 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_init),VARREF(Yprop_init_setter),VARREF(YLfunG),T56);
  propF857 = T55;
  (P)YPmet_env_setter(propF857,getterF854);
  (P)YPmet_env_setter(propF857,setterF856);
  T57 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF857);
  T54 = T57;
  T47 = T54;
  lit_159 = YPPsym((P)"gen-cache-missable?");
  lit_160 = YPPlist(1,YPPsym((P)"x"));
  lit_161 = YPPsym((P)"gen-cache-missable?-setter");
  lit_162 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_163 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPsig(LITREF(lit_160),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_260 = YPmet(FUNCODEREF(fun_260),YPfalse,T60,ENVNUL,PNUL,sloc(757));
  T59 = YPsig(LITREF(lit_162),YPPlist(2,VARREF(YLlogG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_261 = YPmet(FUNCODEREF(fun_261),YPfalse,T59,ENVNUL,PNUL,sloc(757));
  T58 = YPsig(LITREF(lit_163),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_262 = YPmet(FUNCODEREF(fun_262),YPfalse,T58,ENVNUL,PNUL,sloc(757));
  T63 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T62 = (P)YPsig(Ynil,T63,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T61 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_159),T62,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_missableQ,T61);
  T65 = fun_260;
  accessorF858 = T65;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ),accessorF858);
  (P)YPmet_name_setter(VARREF(Ygen_cache_missableQ),accessorF858);
  T64 = accessorF858;
  getterF859 = T64;
  T70 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T69 = (P)YPpair(VARREF(YLanyG),T70);
  T68 = (P)YPsig(Ynil,T69,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T67 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_161),T68,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_missableQ_setter,T67);
  T72 = fun_261;
  accessorF860 = T72;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ_setter),accessorF860);
  (P)YPmet_name_setter(VARREF(Ygen_cache_missableQ_setter),accessorF860);
  T71 = accessorF860;
  setterF861 = T71;
  T75 = fun_262;
  T74 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ),VARREF(Ygen_cache_missableQ_setter),VARREF(YLlogG),T75);
  propF862 = T74;
  (P)YPmet_env_setter(propF862,getterF859);
  (P)YPmet_env_setter(propF862,setterF861);
  T76 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF862);
  T73 = T76;
  T66 = T73;
  lit_164 = YPPsym((P)"gen-cache-arg-pos");
  lit_165 = YPPlist(1,YPPsym((P)"x"));
  lit_166 = YPPsym((P)"gen-cache-arg-pos-setter");
  lit_167 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_168 = YPPlist(1,YPPsym((P)"x"));
  T79 = YPsig(LITREF(lit_165),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_263 = YPmet(FUNCODEREF(fun_263),YPfalse,T79,ENVNUL,PNUL,sloc(757));
  T78 = YPsig(LITREF(lit_167),YPPlist(2,VARREF(YLfixnumG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_264 = YPmet(FUNCODEREF(fun_264),YPfalse,T78,ENVNUL,PNUL,sloc(757));
  T77 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_265 = YPmet(FUNCODEREF(fun_265),YPfalse,T77,ENVNUL,PNUL,sloc(757));
  T82 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T81 = (P)YPsig(Ynil,T82,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T80 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_164),T81,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_arg_pos,T80);
  T84 = fun_263;
  accessorF863 = T84;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos),accessorF863);
  (P)YPmet_name_setter(VARREF(Ygen_cache_arg_pos),accessorF863);
  T83 = accessorF863;
  getterF864 = T83;
  T89 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T88 = (P)YPpair(VARREF(YLanyG),T89);
  T87 = (P)YPsig(Ynil,T88,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T86 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_166),T87,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_arg_pos_setter,T86);
  T91 = fun_264;
  accessorF865 = T91;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos_setter),accessorF865);
  (P)YPmet_name_setter(VARREF(Ygen_cache_arg_pos_setter),accessorF865);
  T90 = accessorF865;
  setterF866 = T90;
  T94 = fun_265;
  T93 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos),VARREF(Ygen_cache_arg_pos_setter),VARREF(YLfixnumG),T94);
  propF867 = T93;
  (P)YPmet_env_setter(propF867,getterF864);
  (P)YPmet_env_setter(propF867,setterF866);
  T95 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF867);
  T92 = T95;
  T85 = T92;
  lit_169 = YPPsym((P)"gen-cache-singletons");
  lit_170 = YPPlist(1,YPPsym((P)"x"));
  lit_171 = YPPsym((P)"gen-cache-singletons-setter");
  lit_172 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_173 = YPPlist(1,YPPsym((P)"x"));
  T98 = YPsig(LITREF(lit_170),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_266 = YPmet(FUNCODEREF(fun_266),YPfalse,T98,ENVNUL,PNUL,sloc(757));
  T97 = YPsig(LITREF(lit_172),YPPlist(2,VARREF(YLlstG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_267 = YPmet(FUNCODEREF(fun_267),YPfalse,T97,ENVNUL,PNUL,sloc(757));
  T96 = YPsig(LITREF(lit_173),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_268 = YPmet(FUNCODEREF(fun_268),YPfalse,T96,ENVNUL,PNUL,sloc(757));
  T101 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T100 = (P)YPsig(Ynil,T101,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T99 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_169),T100,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_singletons,T99);
  T103 = fun_266;
  accessorF868 = T103;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons),accessorF868);
  (P)YPmet_name_setter(VARREF(Ygen_cache_singletons),accessorF868);
  T102 = accessorF868;
  getterF869 = T102;
  T108 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T107 = (P)YPpair(VARREF(YLanyG),T108);
  T106 = (P)YPsig(Ynil,T107,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T105 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_171),T106,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_singletons_setter,T105);
  T110 = fun_267;
  accessorF870 = T110;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons_setter),accessorF870);
  (P)YPmet_name_setter(VARREF(Ygen_cache_singletons_setter),accessorF870);
  T109 = accessorF870;
  setterF871 = T109;
  T113 = fun_268;
  T112 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons),VARREF(Ygen_cache_singletons_setter),VARREF(YLlstG),T113);
  propF872 = T112;
  (P)YPmet_env_setter(propF872,getterF869);
  (P)YPmet_env_setter(propF872,setterF871);
  T114 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF872);
  T111 = T114;
  T104 = T111;
  lit_174 = YPPsym((P)"gen-cache-classes");
  lit_175 = YPPlist(1,YPPsym((P)"x"));
  lit_176 = YPPsym((P)"gen-cache-classes-setter");
  lit_177 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_178 = YPPlist(1,YPPsym((P)"x"));
  T117 = YPsig(LITREF(lit_175),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_269 = YPmet(FUNCODEREF(fun_269),YPfalse,T117,ENVNUL,PNUL,sloc(757));
  T116 = YPsig(LITREF(lit_177),YPPlist(2,VARREF(YLlstG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_270 = YPmet(FUNCODEREF(fun_270),YPfalse,T116,ENVNUL,PNUL,sloc(757));
  T115 = YPsig(LITREF(lit_178),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_271 = YPmet(FUNCODEREF(fun_271),YPfalse,T115,ENVNUL,PNUL,sloc(757));
  T120 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T119 = (P)YPsig(Ynil,T120,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T118 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_174),T119,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_classes,T118);
  T122 = fun_269;
  accessorF873 = T122;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes),accessorF873);
  (P)YPmet_name_setter(VARREF(Ygen_cache_classes),accessorF873);
  T121 = accessorF873;
  getterF874 = T121;
  T127 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T126 = (P)YPpair(VARREF(YLanyG),T127);
  T125 = (P)YPsig(Ynil,T126,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T124 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_176),T125,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_classes_setter,T124);
  T129 = fun_270;
  accessorF875 = T129;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes_setter),accessorF875);
  (P)YPmet_name_setter(VARREF(Ygen_cache_classes_setter),accessorF875);
  T128 = accessorF875;
  setterF876 = T128;
  T132 = fun_271;
  T131 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes),VARREF(Ygen_cache_classes_setter),VARREF(YLlstG),T132);
  propF877 = T131;
  (P)YPmet_env_setter(propF877,getterF874);
  (P)YPmet_env_setter(propF877,setterF876);
  T133 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF877);
  T130 = T133;
  T123 = T130;
  lit_179 = YPPsym((P)"sig-names");
  lit_180 = YPPlist(1,YPPsym((P)"x"));
  lit_181 = YPPsym((P)"sig-names-setter");
  lit_182 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_183 = YPPlist(1,YPPsym((P)"x"));
  T136 = YPsig(LITREF(lit_180),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_272 = YPmet(FUNCODEREF(fun_272),YPfalse,T136,ENVNUL,PNUL,sloc(757));
  T135 = YPsig(LITREF(lit_182),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_273 = YPmet(FUNCODEREF(fun_273),YPfalse,T135,ENVNUL,PNUL,sloc(757));
  T134 = YPsig(LITREF(lit_183),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_274 = YPmet(FUNCODEREF(fun_274),YPfalse,T134,ENVNUL,PNUL,sloc(757));
  T139 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T138 = (P)YPsig(Ynil,T139,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T137 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_179),T138,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names,T137);
  T141 = fun_272;
  accessorF878 = T141;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_names),accessorF878);
  (P)YPmet_name_setter(VARREF(Ysig_names),accessorF878);
  T140 = accessorF878;
  getterF879 = T140;
  T146 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T145 = (P)YPpair(VARREF(YLanyG),T146);
  T144 = (P)YPsig(Ynil,T145,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T143 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_181),T144,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names_setter,T143);
  T148 = fun_273;
  accessorF880 = T148;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_names_setter),accessorF880);
  (P)YPmet_name_setter(VARREF(Ysig_names_setter),accessorF880);
  T147 = accessorF880;
  setterF881 = T147;
  T151 = fun_274;
  T150 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_names),VARREF(Ysig_names_setter),VARREF(YLlstG),T151);
  propF882 = T150;
  (P)YPmet_env_setter(propF882,getterF879);
  (P)YPmet_env_setter(propF882,setterF881);
  T152 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF882);
  T149 = T152;
  T142 = T149;
  lit_184 = YPPsym((P)"sig-specs");
  lit_185 = YPPlist(1,YPPsym((P)"x"));
  lit_186 = YPPsym((P)"sig-specs-setter");
  lit_187 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_188 = YPPlist(1,YPPsym((P)"x"));
  T155 = YPsig(LITREF(lit_185),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_275 = YPmet(FUNCODEREF(fun_275),YPfalse,T155,ENVNUL,PNUL,sloc(757));
  T154 = YPsig(LITREF(lit_187),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_276 = YPmet(FUNCODEREF(fun_276),YPfalse,T154,ENVNUL,PNUL,sloc(757));
  T153 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_277 = YPmet(FUNCODEREF(fun_277),YPfalse,T153,ENVNUL,PNUL,sloc(757));
  T158 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T157 = (P)YPsig(Ynil,T158,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T156 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_184),T157,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs,T156);
  T160 = fun_275;
  accessorF883 = T160;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs),accessorF883);
  (P)YPmet_name_setter(VARREF(Ysig_specs),accessorF883);
  T159 = accessorF883;
  getterF884 = T159;
  T165 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T164 = (P)YPpair(VARREF(YLanyG),T165);
  T163 = (P)YPsig(Ynil,T164,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T162 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_186),T163,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs_setter,T162);
  T167 = fun_276;
  accessorF885 = T167;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs_setter),accessorF885);
  (P)YPmet_name_setter(VARREF(Ysig_specs_setter),accessorF885);
  T166 = accessorF885;
  setterF886 = T166;
  T170 = fun_277;
  T169 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_specs),VARREF(Ysig_specs_setter),VARREF(YLlstG),T170);
  propF887 = T169;
  (P)YPmet_env_setter(propF887,getterF884);
  (P)YPmet_env_setter(propF887,setterF886);
  T171 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF887);
  T168 = T171;
  T161 = T168;
  lit_189 = YPPsym((P)"sig-nary?");
  lit_190 = YPPlist(1,YPPsym((P)"x"));
  lit_191 = YPPsym((P)"sig-nary?-setter");
  lit_192 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_193 = YPPlist(1,YPPsym((P)"x"));
  T174 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_278 = YPmet(FUNCODEREF(fun_278),YPfalse,T174,ENVNUL,PNUL,sloc(757));
  T173 = YPsig(LITREF(lit_192),YPPlist(2,VARREF(YLlogG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_279 = YPmet(FUNCODEREF(fun_279),YPfalse,T173,ENVNUL,PNUL,sloc(757));
  T172 = YPsig(LITREF(lit_193),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_280 = YPmet(FUNCODEREF(fun_280),YPfalse,T172,ENVNUL,PNUL,sloc(757));
  T177 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T176 = (P)YPsig(Ynil,T177,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T175 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_189),T176,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ,T175);
  T179 = fun_278;
  accessorF888 = T179;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ),accessorF888);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ),accessorF888);
  T178 = accessorF888;
  getterF889 = T178;
  T184 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T183 = (P)YPpair(VARREF(YLanyG),T184);
  T182 = (P)YPsig(Ynil,T183,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T181 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_191),T182,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ_setter,T181);
  T186 = fun_279;
  accessorF890 = T186;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ_setter),accessorF890);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ_setter),accessorF890);
  T185 = accessorF890;
  setterF891 = T185;
  T189 = fun_280;
  T188 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_naryQ),VARREF(Ysig_naryQ_setter),VARREF(YLlogG),T189);
  propF892 = T188;
  (P)YPmet_env_setter(propF892,getterF889);
  (P)YPmet_env_setter(propF892,setterF891);
  T190 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF892);
  T187 = T190;
  T180 = T187;
  lit_194 = YPPsym((P)"sig-arity");
  lit_195 = YPPlist(1,YPPsym((P)"x"));
  lit_196 = YPPsym((P)"sig-arity-setter");
  lit_197 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_198 = YPPlist(1,YPPsym((P)"x"));
  T193 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_281 = YPmet(FUNCODEREF(fun_281),YPfalse,T193,ENVNUL,PNUL,sloc(757));
  T192 = YPsig(LITREF(lit_197),YPPlist(2,VARREF(YLfixnumG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_282 = YPmet(FUNCODEREF(fun_282),YPfalse,T192,ENVNUL,PNUL,sloc(757));
  T191 = YPsig(LITREF(lit_198),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_283 = YPmet(FUNCODEREF(fun_283),YPfalse,T191,ENVNUL,PNUL,sloc(757));
  T196 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T195 = (P)YPsig(Ynil,T196,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T194 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_194),T195,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity,T194);
  T198 = fun_281;
  accessorF893 = T198;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity),accessorF893);
  (P)YPmet_name_setter(VARREF(Ysig_arity),accessorF893);
  T197 = accessorF893;
  getterF894 = T197;
  T203 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T202 = (P)YPpair(VARREF(YLanyG),T203);
  T201 = (P)YPsig(Ynil,T202,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T200 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_196),T201,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity_setter,T200);
  T205 = fun_282;
  accessorF895 = T205;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity_setter),accessorF895);
  (P)YPmet_name_setter(VARREF(Ysig_arity_setter),accessorF895);
  T204 = accessorF895;
  setterF896 = T204;
  T208 = fun_283;
  T207 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_arity),VARREF(Ysig_arity_setter),VARREF(YLfixnumG),T208);
  propF897 = T207;
  (P)YPmet_env_setter(propF897,getterF894);
  (P)YPmet_env_setter(propF897,setterF896);
  T209 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF897);
  T206 = T209;
  T199 = T206;
  lit_199 = YPPsym((P)"sig-val");
  lit_200 = YPPlist(1,YPPsym((P)"x"));
  lit_201 = YPPsym((P)"sig-val-setter");
  lit_202 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_203 = YPPlist(1,YPPsym((P)"x"));
  T212 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_284 = YPmet(FUNCODEREF(fun_284),YPfalse,T212,ENVNUL,PNUL,sloc(757));
  T211 = YPsig(LITREF(lit_202),YPPlist(2,VARREF(YLanyG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_285 = YPmet(FUNCODEREF(fun_285),YPfalse,T211,ENVNUL,PNUL,sloc(757));
  T210 = YPsig(LITREF(lit_203),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_286 = YPmet(FUNCODEREF(fun_286),YPfalse,T210,ENVNUL,PNUL,sloc(757));
  T215 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T214 = (P)YPsig(Ynil,T215,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T213 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_199),T214,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val,T213);
  T217 = fun_284;
  accessorF898 = T217;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_val),accessorF898);
  (P)YPmet_name_setter(VARREF(Ysig_val),accessorF898);
  T216 = accessorF898;
  getterF899 = T216;
  T222 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T221 = (P)YPpair(VARREF(YLanyG),T222);
  T220 = (P)YPsig(Ynil,T221,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T219 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_201),T220,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val_setter,T219);
  T224 = fun_285;
  accessorF900 = T224;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_val_setter),accessorF900);
  (P)YPmet_name_setter(VARREF(Ysig_val_setter),accessorF900);
  T223 = accessorF900;
  setterF901 = T223;
  T227 = fun_286;
  T226 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_val),VARREF(Ysig_val_setter),VARREF(YLanyG),T227);
  propF902 = T226;
  (P)YPmet_env_setter(propF902,getterF899);
  (P)YPmet_env_setter(propF902,setterF901);
  T228 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF902);
  T225 = T228;
  T218 = T225;
  lit_204 = YPPsym((P)"sig-unification-vars");
  lit_205 = YPPlist(1,YPPsym((P)"x"));
  lit_206 = YPPsym((P)"sig-unification-vars-setter");
  lit_207 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_208 = YPPlist(1,YPPsym((P)"x"));
  T231 = YPsig(LITREF(lit_205),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_287 = YPmet(FUNCODEREF(fun_287),YPfalse,T231,ENVNUL,PNUL,sloc(757));
  T230 = YPsig(LITREF(lit_207),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_288 = YPmet(FUNCODEREF(fun_288),YPfalse,T230,ENVNUL,PNUL,sloc(757));
  T229 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_289 = YPmet(FUNCODEREF(fun_289),YPfalse,T229,ENVNUL,PNUL,sloc(757));
  T234 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T233 = (P)YPsig(Ynil,T234,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T232 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_204),T233,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars,T232);
  T236 = fun_287;
  accessorF903 = T236;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars),accessorF903);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars),accessorF903);
  T235 = accessorF903;
  getterF904 = T235;
  T241 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T240 = (P)YPpair(VARREF(YLanyG),T241);
  T239 = (P)YPsig(Ynil,T240,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T238 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_206),T239,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars_setter,T238);
  T243 = fun_288;
  accessorF905 = T243;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars_setter),accessorF905);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars_setter),accessorF905);
  T242 = accessorF905;
  setterF906 = T242;
  T246 = fun_289;
  T245 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_unification_vars),VARREF(Ysig_unification_vars_setter),VARREF(YLlstG),T246);
  propF907 = T245;
  (P)YPmet_env_setter(propF907,getterF904);
  (P)YPmet_env_setter(propF907,setterF906);
  T247 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF907);
  T244 = T247;
  T237 = T244;
  lit_209 = YPPsym((P)"fun-code");
  lit_210 = YPPlist(1,YPPsym((P)"x"));
  lit_211 = YPPsym((P)"fun-code-setter");
  lit_212 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_213 = YPPlist(1,YPPsym((P)"x"));
  T250 = YPsig(LITREF(lit_210),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_290 = YPmet(FUNCODEREF(fun_290),YPfalse,T250,ENVNUL,PNUL,sloc(757));
  T249 = YPsig(LITREF(lit_212),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_291 = YPmet(FUNCODEREF(fun_291),YPfalse,T249,ENVNUL,PNUL,sloc(757));
  T248 = YPsig(LITREF(lit_213),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_292 = YPmet(FUNCODEREF(fun_292),YPfalse,T248,ENVNUL,PNUL,sloc(757));
  T253 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T252 = (P)YPsig(Ynil,T253,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T251 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_209),T252,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_code,T251);
  T255 = fun_290;
  accessorF908 = T255;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_code),accessorF908);
  (P)YPmet_name_setter(VARREF(Yfun_code),accessorF908);
  T254 = accessorF908;
  getterF909 = T254;
  T260 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T259 = (P)YPpair(VARREF(YLanyG),T260);
  T258 = (P)YPsig(Ynil,T259,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T257 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_211),T258,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_code_setter,T257);
  T262 = fun_291;
  accessorF910 = T262;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_code_setter),accessorF910);
  (P)YPmet_name_setter(VARREF(Yfun_code_setter),accessorF910);
  T261 = accessorF910;
  setterF911 = T261;
  T265 = fun_292;
  T264 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_code),VARREF(Yfun_code_setter),VARREF(YLanyG),T265);
  propF912 = T264;
  (P)YPmet_env_setter(propF912,getterF909);
  (P)YPmet_env_setter(propF912,setterF911);
  T266 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF912);
  T263 = T266;
  T256 = T263;
  lit_214 = YPPsym((P)"fun-name");
  lit_215 = YPPlist(1,YPPsym((P)"x"));
  lit_216 = YPPsym((P)"fun-name-setter");
  lit_217 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_218 = YPPlist(1,YPPsym((P)"x"));
  T269 = YPsig(LITREF(lit_215),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_293 = YPmet(FUNCODEREF(fun_293),YPfalse,T269,ENVNUL,PNUL,sloc(757));
  T268 = YPsig(LITREF(lit_217),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_294 = YPmet(FUNCODEREF(fun_294),YPfalse,T268,ENVNUL,PNUL,sloc(757));
  T267 = YPsig(LITREF(lit_218),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_295 = YPmet(FUNCODEREF(fun_295),YPfalse,T267,ENVNUL,PNUL,sloc(757));
  T272 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T271 = (P)YPsig(Ynil,T272,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T270 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_214),T271,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name,T270);
  T274 = fun_293;
  accessorF913 = T274;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_name),accessorF913);
  (P)YPmet_name_setter(VARREF(Yfun_name),accessorF913);
  T273 = accessorF913;
  getterF914 = T273;
  T279 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T278 = (P)YPpair(VARREF(YLanyG),T279);
  T277 = (P)YPsig(Ynil,T278,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T276 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_216),T277,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name_setter,T276);
  T281 = fun_294;
  accessorF915 = T281;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_name_setter),accessorF915);
  (P)YPmet_name_setter(VARREF(Yfun_name_setter),accessorF915);
  T280 = accessorF915;
  setterF916 = T280;
  T284 = fun_295;
  T283 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_name),VARREF(Yfun_name_setter),VARREF(YLanyG),T284);
  propF917 = T283;
  (P)YPmet_env_setter(propF917,getterF914);
  (P)YPmet_env_setter(propF917,setterF916);
  T285 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF917);
  T282 = T285;
  T275 = T282;
  lit_219 = YPPsym((P)"fun-sig");
  lit_220 = YPPlist(1,YPPsym((P)"x"));
  lit_221 = YPPsym((P)"fun-sig-setter");
  lit_222 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_223 = YPPlist(1,YPPsym((P)"x"));
  T288 = YPsig(LITREF(lit_220),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_296 = YPmet(FUNCODEREF(fun_296),YPfalse,T288,ENVNUL,PNUL,sloc(757));
  T287 = YPsig(LITREF(lit_222),YPPlist(2,VARREF(YLsigG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_297 = YPmet(FUNCODEREF(fun_297),YPfalse,T287,ENVNUL,PNUL,sloc(757));
  T286 = YPsig(LITREF(lit_223),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_298 = YPmet(FUNCODEREF(fun_298),YPfalse,T286,ENVNUL,PNUL,sloc(757));
  T291 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T290 = (P)YPsig(Ynil,T291,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T289 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_219),T290,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig,T289);
  T293 = fun_296;
  accessorF918 = T293;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig),accessorF918);
  (P)YPmet_name_setter(VARREF(Yfun_sig),accessorF918);
  T292 = accessorF918;
  getterF919 = T292;
  T298 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T297 = (P)YPpair(VARREF(YLanyG),T298);
  T296 = (P)YPsig(Ynil,T297,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T295 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_221),T296,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig_setter,T295);
  T300 = fun_297;
  accessorF920 = T300;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig_setter),accessorF920);
  (P)YPmet_name_setter(VARREF(Yfun_sig_setter),accessorF920);
  T299 = accessorF920;
  setterF921 = T299;
  T303 = fun_298;
  T302 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_sig),VARREF(Yfun_sig_setter),VARREF(YLsigG),T303);
  propF922 = T302;
  (P)YPmet_env_setter(propF922,getterF919);
  (P)YPmet_env_setter(propF922,setterF921);
  T304 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF922);
  T301 = T304;
  T294 = T301;
  lit_224 = YPPsym((P)"fun-env");
  lit_225 = YPPlist(1,YPPsym((P)"x"));
  lit_226 = YPPsym((P)"fun-env-setter");
  lit_227 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_228 = YPPlist(1,YPPsym((P)"x"));
  T307 = YPsig(LITREF(lit_225),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_299 = YPmet(FUNCODEREF(fun_299),YPfalse,T307,ENVNUL,PNUL,sloc(757));
  T306 = YPsig(LITREF(lit_227),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_300 = YPmet(FUNCODEREF(fun_300),YPfalse,T306,ENVNUL,PNUL,sloc(757));
  T305 = YPsig(LITREF(lit_228),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_301 = YPmet(FUNCODEREF(fun_301),YPfalse,T305,ENVNUL,PNUL,sloc(757));
  T310 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T309 = (P)YPsig(Ynil,T310,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T308 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_224),T309,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_env,T308);
  T312 = fun_299;
  accessorF923 = T312;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_env),accessorF923);
  (P)YPmet_name_setter(VARREF(Yfun_env),accessorF923);
  T311 = accessorF923;
  getterF924 = T311;
  T317 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T316 = (P)YPpair(VARREF(YLanyG),T317);
  T315 = (P)YPsig(Ynil,T316,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T314 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_226),T315,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_env_setter,T314);
  T319 = fun_300;
  accessorF925 = T319;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_env_setter),accessorF925);
  (P)YPmet_name_setter(VARREF(Yfun_env_setter),accessorF925);
  T318 = accessorF925;
  setterF926 = T318;
  T322 = fun_301;
  T321 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_env),VARREF(Yfun_env_setter),VARREF(YLanyG),T322);
  propF927 = T321;
  (P)YPmet_env_setter(propF927,getterF924);
  (P)YPmet_env_setter(propF927,setterF926);
  T323 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF927);
  T320 = T323;
  T313 = T320;
  lit_229 = YPPsym((P)"fun-refs");
  lit_230 = YPPlist(1,YPPsym((P)"x"));
  lit_231 = YPPsym((P)"fun-refs-setter");
  lit_232 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_233 = YPPlist(1,YPPsym((P)"x"));
  T326 = YPsig(LITREF(lit_230),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_302 = YPmet(FUNCODEREF(fun_302),YPfalse,T326,ENVNUL,PNUL,sloc(757));
  T325 = YPsig(LITREF(lit_232),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_303 = YPmet(FUNCODEREF(fun_303),YPfalse,T325,ENVNUL,PNUL,sloc(757));
  T324 = YPsig(LITREF(lit_233),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_304 = YPmet(FUNCODEREF(fun_304),YPfalse,T324,ENVNUL,PNUL,sloc(757));
  T329 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T328 = (P)YPsig(Ynil,T329,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T327 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_229),T328,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_refs,T327);
  T331 = fun_302;
  accessorF928 = T331;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_refs),accessorF928);
  (P)YPmet_name_setter(VARREF(Yfun_refs),accessorF928);
  T330 = accessorF928;
  getterF929 = T330;
  T336 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T335 = (P)YPpair(VARREF(YLanyG),T336);
  T334 = (P)YPsig(Ynil,T335,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T333 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_231),T334,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_refs_setter,T333);
  T338 = fun_303;
  accessorF930 = T338;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_refs_setter),accessorF930);
  (P)YPmet_name_setter(VARREF(Yfun_refs_setter),accessorF930);
  T337 = accessorF930;
  setterF931 = T337;
  T341 = fun_304;
  T340 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_refs),VARREF(Yfun_refs_setter),VARREF(YLanyG),T341);
  propF932 = T340;
  (P)YPmet_env_setter(propF932,getterF929);
  (P)YPmet_env_setter(propF932,setterF931);
  T342 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF932);
  T339 = T342;
  T332 = T339;
  lit_234 = YPPsym((P)"fun-src");
  lit_235 = YPPlist(1,YPPsym((P)"x"));
  lit_236 = YPPsym((P)"fun-src-setter");
  lit_237 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_238 = YPPlist(1,YPPsym((P)"x"));
  T345 = YPsig(LITREF(lit_235),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_305 = YPmet(FUNCODEREF(fun_305),YPfalse,T345,ENVNUL,PNUL,sloc(757));
  T344 = YPsig(LITREF(lit_237),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_306 = YPmet(FUNCODEREF(fun_306),YPfalse,T344,ENVNUL,PNUL,sloc(757));
  T343 = YPsig(LITREF(lit_238),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_307 = YPmet(FUNCODEREF(fun_307),YPfalse,T343,ENVNUL,PNUL,sloc(757));
  T348 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T347 = (P)YPsig(Ynil,T348,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T346 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_234),T347,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src,T346);
  T350 = fun_305;
  accessorF933 = T350;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_src),accessorF933);
  (P)YPmet_name_setter(VARREF(Yfun_src),accessorF933);
  T349 = accessorF933;
  getterF934 = T349;
  T355 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T354 = (P)YPpair(VARREF(YLanyG),T355);
  T353 = (P)YPsig(Ynil,T354,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T352 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_236),T353,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src_setter,T352);
  T357 = fun_306;
  accessorF935 = T357;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_src_setter),accessorF935);
  (P)YPmet_name_setter(VARREF(Yfun_src_setter),accessorF935);
  T356 = accessorF935;
  setterF936 = T356;
  T360 = fun_307;
  T359 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_src),VARREF(Yfun_src_setter),VARREF(YLanyG),T360);
  propF937 = T359;
  (P)YPmet_env_setter(propF937,getterF934);
  (P)YPmet_env_setter(propF937,setterF936);
  T361 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF937);
  T358 = T361;
  T351 = T358;
  lit_239 = YPPsym((P)"fun-mets");
  lit_240 = YPPlist(1,YPPsym((P)"x"));
  lit_241 = YPPsym((P)"fun-mets-setter");
  lit_242 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_243 = YPPlist(1,YPPsym((P)"x"));
  T364 = YPsig(LITREF(lit_240),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_308 = YPmet(FUNCODEREF(fun_308),YPfalse,T364,ENVNUL,PNUL,sloc(757));
  T363 = YPsig(LITREF(lit_242),YPPlist(2,VARREF(YLlstG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_309 = YPmet(FUNCODEREF(fun_309),YPfalse,T363,ENVNUL,PNUL,sloc(757));
  T362 = YPsig(LITREF(lit_243),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_310 = YPmet(FUNCODEREF(fun_310),YPfalse,T362,ENVNUL,PNUL,sloc(757));
  T367 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T366 = (P)YPsig(Ynil,T367,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T365 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_239),T366,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets,T365);
  T369 = fun_308;
  accessorF938 = T369;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets),accessorF938);
  (P)YPmet_name_setter(VARREF(Yfun_mets),accessorF938);
  T368 = accessorF938;
  getterF939 = T368;
  T374 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T373 = (P)YPpair(VARREF(YLanyG),T374);
  T372 = (P)YPsig(Ynil,T373,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T371 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_241),T372,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets_setter,T371);
  T376 = fun_309;
  accessorF940 = T376;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets_setter),accessorF940);
  (P)YPmet_name_setter(VARREF(Yfun_mets_setter),accessorF940);
  T375 = accessorF940;
  setterF941 = T375;
  T379 = fun_310;
  T378 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_mets),VARREF(Yfun_mets_setter),VARREF(YLlstG),T379);
  propF942 = T378;
  (P)YPmet_env_setter(propF942,getterF939);
  (P)YPmet_env_setter(propF942,setterF941);
  T380 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF942);
  T377 = T380;
  T370 = T377;
  lit_244 = YPPsym((P)"fun-cache");
  lit_245 = YPPlist(1,YPPsym((P)"x"));
  lit_246 = YPPsym((P)"fun-cache-setter");
  lit_247 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_248 = YPPlist(1,YPPsym((P)"x"));
  T383 = YPsig(LITREF(lit_245),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_311 = YPmet(FUNCODEREF(fun_311),YPfalse,T383,ENVNUL,PNUL,sloc(757));
  T382 = YPsig(LITREF(lit_247),YPPlist(2,VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_312 = YPmet(FUNCODEREF(fun_312),YPfalse,T382,ENVNUL,PNUL,sloc(757));
  T381 = YPsig(LITREF(lit_248),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_313 = YPmet(FUNCODEREF(fun_313),YPfalse,T381,ENVNUL,PNUL,sloc(757));
  T386 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T385 = (P)YPsig(Ynil,T386,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T384 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_244),T385,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_cache,T384);
  T388 = fun_311;
  accessorF943 = T388;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache),accessorF943);
  (P)YPmet_name_setter(VARREF(Yfun_cache),accessorF943);
  T387 = accessorF943;
  getterF944 = T387;
  T393 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T392 = (P)YPpair(VARREF(YLanyG),T393);
  T391 = (P)YPsig(Ynil,T392,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T390 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_246),T391,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_cache_setter,T390);
  T395 = fun_312;
  accessorF945 = T395;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache_setter),accessorF945);
  (P)YPmet_name_setter(VARREF(Yfun_cache_setter),accessorF945);
  T394 = accessorF945;
  setterF946 = T394;
  T398 = fun_313;
  T397 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_cache),VARREF(Yfun_cache_setter),VARREF(YLanyG),T398);
  propF947 = T397;
  (P)YPmet_env_setter(propF947,getterF944);
  (P)YPmet_env_setter(propF947,setterF946);
  T399 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF947);
  T396 = T399;
  T389 = T396;
  lit_249 = YPPsym((P)"gen-refs");
  lit_250 = YPPlist(1,YPPsym((P)"x"));
  lit_251 = YPPsym((P)"gen-refs-setter");
  lit_252 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_253 = YPPlist(1,YPPsym((P)"x"));
  T402 = YPsig(LITREF(lit_250),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_314 = YPmet(FUNCODEREF(fun_314),YPfalse,T402,ENVNUL,PNUL,sloc(757));
  T401 = YPsig(LITREF(lit_252),YPPlist(2,VARREF(YLtupG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_315 = YPmet(FUNCODEREF(fun_315),YPfalse,T401,ENVNUL,PNUL,sloc(757));
  T400 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_316 = YPmet(FUNCODEREF(fun_316),YPfalse,T400,ENVNUL,PNUL,sloc(757));
  T405 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T404 = (P)YPsig(Ynil,T405,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T403 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_249),T404,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_refs,T403);
  T407 = fun_314;
  accessorF948 = T407;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_refs),accessorF948);
  (P)YPmet_name_setter(VARREF(Ygen_refs),accessorF948);
  T406 = accessorF948;
  getterF949 = T406;
  T412 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T411 = (P)YPpair(VARREF(YLanyG),T412);
  T410 = (P)YPsig(Ynil,T411,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T409 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_251),T410,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_refs_setter,T409);
  T414 = fun_315;
  accessorF950 = T414;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_refs_setter),accessorF950);
  (P)YPmet_name_setter(VARREF(Ygen_refs_setter),accessorF950);
  T413 = accessorF950;
  setterF951 = T413;
  T417 = fun_316;
  T416 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_refs),VARREF(Ygen_refs_setter),VARREF(YLtupG),T417);
  propF952 = T416;
  (P)YPmet_env_setter(propF952,getterF949);
  (P)YPmet_env_setter(propF952,setterF951);
  T418 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF952);
  T415 = T418;
  T408 = T415;
  lit_254 = YPPsym((P)"gen-src");
  lit_255 = YPPlist(1,YPPsym((P)"x"));
  lit_256 = YPPsym((P)"gen-src-setter");
  lit_257 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_258 = YPPlist(1,YPPsym((P)"x"));
  T421 = YPsig(LITREF(lit_255),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_317 = YPmet(FUNCODEREF(fun_317),YPfalse,T421,ENVNUL,PNUL,sloc(757));
  T420 = YPsig(LITREF(lit_257),YPPlist(2,VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_318 = YPmet(FUNCODEREF(fun_318),YPfalse,T420,ENVNUL,PNUL,sloc(757));
  T419 = YPsig(LITREF(lit_258),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_319 = YPmet(FUNCODEREF(fun_319),YPfalse,T419,ENVNUL,PNUL,sloc(757));
  T424 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T423 = (P)YPsig(Ynil,T424,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T422 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_254),T423,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src,T422);
  T426 = fun_317;
  accessorF953 = T426;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_src),accessorF953);
  (P)YPmet_name_setter(VARREF(Ygen_src),accessorF953);
  T425 = accessorF953;
  getterF954 = T425;
  T431 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T430 = (P)YPpair(VARREF(YLanyG),T431);
  T429 = (P)YPsig(Ynil,T430,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T428 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_256),T429,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src_setter,T428);
  T433 = fun_318;
  accessorF955 = T433;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_src_setter),accessorF955);
  (P)YPmet_name_setter(VARREF(Ygen_src_setter),accessorF955);
  T432 = accessorF955;
  setterF956 = T432;
  T436 = fun_319;
  T435 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_src),VARREF(Ygen_src_setter),VARREF(YLanyG),T436);
  propF957 = T435;
  (P)YPmet_env_setter(propF957,getterF954);
  (P)YPmet_env_setter(propF957,setterF956);
  T437 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF957);
  T434 = T437;
  T427 = T434;
  lit_259 = YPPsym((P)"opts-location");
  lit_260 = YPPlist(1,YPPsym((P)"x"));
  lit_261 = YPPsym((P)"opts-location-setter");
  lit_262 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_263 = YPPlist(1,YPPsym((P)"x"));
  T440 = YPsig(LITREF(lit_260),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_320 = YPmet(FUNCODEREF(fun_320),YPfalse,T440,ENVNUL,PNUL,sloc(757));
  T439 = YPsig(LITREF(lit_262),YPPlist(2,VARREF(YLlocG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_321 = YPmet(FUNCODEREF(fun_321),YPfalse,T439,ENVNUL,PNUL,sloc(757));
  T438 = YPsig(LITREF(lit_263),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_322 = YPmet(FUNCODEREF(fun_322),YPfalse,T438,ENVNUL,PNUL,sloc(757));
  T443 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T442 = (P)YPsig(Ynil,T443,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T441 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_259),T442,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_location,T441);
  T445 = fun_320;
  accessorF958 = T445;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_location),accessorF958);
  (P)YPmet_name_setter(VARREF(Yopts_location),accessorF958);
  T444 = accessorF958;
  getterF959 = T444;
  T450 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T449 = (P)YPpair(VARREF(YLanyG),T450);
  T448 = (P)YPsig(Ynil,T449,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T447 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_261),T448,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_location_setter,T447);
  T452 = fun_321;
  accessorF960 = T452;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_location_setter),accessorF960);
  (P)YPmet_name_setter(VARREF(Yopts_location_setter),accessorF960);
  T451 = accessorF960;
  setterF961 = T451;
  T455 = fun_322;
  T454 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_location),VARREF(Yopts_location_setter),VARREF(YLlocG),T455);
  propF962 = T454;
  (P)YPmet_env_setter(propF962,getterF959);
  (P)YPmet_env_setter(propF962,setterF961);
  T456 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF962);
  T453 = T456;
  T446 = T453;
  lit_264 = YPPsym((P)"opts-count");
  lit_265 = YPPlist(1,YPPsym((P)"x"));
  lit_266 = YPPsym((P)"opts-count-setter");
  lit_267 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_268 = YPPlist(1,YPPsym((P)"x"));
  T459 = YPsig(LITREF(lit_265),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_323 = YPmet(FUNCODEREF(fun_323),YPfalse,T459,ENVNUL,PNUL,sloc(757));
  T458 = YPsig(LITREF(lit_267),YPPlist(2,VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_324 = YPmet(FUNCODEREF(fun_324),YPfalse,T458,ENVNUL,PNUL,sloc(757));
  T457 = YPsig(LITREF(lit_268),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_325 = YPmet(FUNCODEREF(fun_325),YPfalse,T457,ENVNUL,PNUL,sloc(757));
  T462 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T461 = (P)YPsig(Ynil,T462,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T460 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_264),T461,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_count,T460);
  T464 = fun_323;
  accessorF963 = T464;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_count),accessorF963);
  (P)YPmet_name_setter(VARREF(Yopts_count),accessorF963);
  T463 = accessorF963;
  getterF964 = T463;
  T469 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T468 = (P)YPpair(VARREF(YLanyG),T469);
  T467 = (P)YPsig(Ynil,T468,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T466 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_266),T467,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_count_setter,T466);
  T471 = fun_324;
  accessorF965 = T471;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_count_setter),accessorF965);
  (P)YPmet_name_setter(VARREF(Yopts_count_setter),accessorF965);
  T470 = accessorF965;
  setterF966 = T470;
  T474 = fun_325;
  T473 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_count),VARREF(Yopts_count_setter),VARREF(YLfixnumG),T474);
  propF967 = T473;
  (P)YPmet_env_setter(propF967,getterF964);
  (P)YPmet_env_setter(propF967,setterF966);
  T475 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF967);
  T472 = T475;
  T465 = T472;
  lit_269 = YPPsym((P)"opts-tup-storage");
  lit_270 = YPPlist(1,YPPsym((P)"x"));
  lit_271 = YPPsym((P)"opts-tup-storage-setter");
  lit_272 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_273 = YPPlist(1,YPPsym((P)"x"));
  T478 = YPsig(LITREF(lit_270),YPPlist(1,VARREF(YLopts_tupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_326 = YPmet(FUNCODEREF(fun_326),YPfalse,T478,ENVNUL,PNUL,sloc(757));
  T477 = YPsig(LITREF(lit_272),YPPlist(2,VARREF(YLtupG),VARREF(YLopts_tupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_327 = YPmet(FUNCODEREF(fun_327),YPfalse,T477,ENVNUL,PNUL,sloc(757));
  T476 = YPsig(LITREF(lit_273),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_328 = YPmet(FUNCODEREF(fun_328),YPfalse,T476,ENVNUL,PNUL,sloc(757));
  T481 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T480 = (P)YPsig(Ynil,T481,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T479 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_269),T480,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_tup_storage,T479);
  T483 = fun_326;
  accessorF968 = T483;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_tup_storage),accessorF968);
  (P)YPmet_name_setter(VARREF(Yopts_tup_storage),accessorF968);
  T482 = accessorF968;
  getterF969 = T482;
  T488 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T487 = (P)YPpair(VARREF(YLanyG),T488);
  T486 = (P)YPsig(Ynil,T487,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T485 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_271),T486,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_tup_storage_setter,T485);
  T490 = fun_327;
  accessorF970 = T490;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_tup_storage_setter),accessorF970);
  (P)YPmet_name_setter(VARREF(Yopts_tup_storage_setter),accessorF970);
  T489 = accessorF970;
  setterF971 = T489;
  T493 = fun_328;
  T492 = (P)YPPprop(VARREF(YLopts_tupG),VARREF(Yopts_tup_storage),VARREF(Yopts_tup_storage_setter),VARREF(YLtupG),T493);
  propF972 = T492;
  (P)YPmet_env_setter(propF972,getterF969);
  (P)YPmet_env_setter(propF972,setterF971);
  T494 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLopts_tupG),propF972);
  T491 = T494;
  T484 = T491;
  lit_274 = YPPsym((P)"%collect-direct-props");
  lit_275 = YPPlist(1,YPPsym((P)"class"));
  T495 = YPsig(LITREF(lit_275),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPcollect_direct_props = YPmet(FUNCODEREF(YPcollect_direct_props),LITREF(lit_274),T495,ENVNUL,PNUL,sloc(765));
  T496 = YPcollect_direct_props;
  VARSET(YPcollect_direct_props,T496);
  lit_276 = YPPsym((P)"%finalize-props!");
  lit_277 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"class"));
  T497 = YPsig(LITREF(lit_277),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPfinalize_propsX = YPmet(FUNCODEREF(YPfinalize_propsX),LITREF(lit_276),T497,ENVNUL,PNUL,sloc(769));
  T498 = YPfinalize_propsX;
  VARSET(YPfinalize_propsX,T498);
  lit_278 = YPPsym((P)"<any>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_278),VARREF(YLanyG));
  lit_279 = YPPsym((P)"<log>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_279),VARREF(YLlogG));
  lit_280 = YPPsym((P)"<mag>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_280),VARREF(YLmagG));
  lit_281 = YPPsym((P)"<chr>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_281),VARREF(YLchrG));
  lit_282 = YPPsym((P)"<src-loc>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_282),VARREF(YLsrc_locG));
  lit_283 = YPPsym((P)"<num>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_283),VARREF(YLnumG));
  lit_284 = YPPsym((P)"<int>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_284),VARREF(YLintG));
  lit_285 = YPPsym((P)"<fixnum>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_285),VARREF(YLfixnumG));
  lit_286 = YPPsym((P)"<flo>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_286),VARREF(YLfloG));
  lit_287 = YPPsym((P)"<loc>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_287),VARREF(YLlocG));
  lit_288 = YPPsym((P)"<rep>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_288),VARREF(YLrepG));
  lit_289 = YPPsym((P)"<col>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_289),VARREF(YLcolG));
  lit_290 = YPPsym((P)"<col.>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_290),VARREF(YLcolIG));
  lit_291 = YPPsym((P)"<col!>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_291),VARREF(YLcolXG));
  lit_292 = YPPsym((P)"<seq>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_292),VARREF(YLseqG));
  lit_293 = YPPsym((P)"<seq.>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_293),VARREF(YLseqIG));
  lit_294 = YPPsym((P)"<seq!>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_294),VARREF(YLseqXG));
  lit_295 = YPPsym((P)"<lst>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_295),VARREF(YLlstG));
  lit_296 = YPPsym((P)"<flat>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_296),VARREF(YLflatG));
  lit_297 = YPPsym((P)"<tup>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_297),VARREF(YLtupG));
  lit_298 = YPPsym((P)"<str>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_298),VARREF(YLstrG));
  lit_299 = YPPsym((P)"<sym>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_299),VARREF(YLsymG));
  lit_300 = YPPsym((P)"<type>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_300),VARREF(YLtypeG));
  lit_301 = YPPsym((P)"<class>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_301),VARREF(YLclassG));
  lit_302 = YPPsym((P)"<singleton>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_302),VARREF(YLsingletonG));
  lit_303 = YPPsym((P)"<subclass>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_303),VARREF(YLsubclassG));
  lit_304 = YPPsym((P)"<union>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_304),VARREF(YLunionG));
  lit_305 = YPPsym((P)"<product>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_305),VARREF(YLproductG));
  lit_306 = YPPsym((P)"<prop>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_306),VARREF(YLpropG));
  lit_307 = YPPsym((P)"<gen-cache>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_307),VARREF(YLgen_cacheG));
  lit_308 = YPPsym((P)"<sig>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_308),VARREF(YLsigG));
  lit_309 = YPPsym((P)"<fun>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_309),VARREF(YLfunG));
  lit_310 = YPPsym((P)"<met>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_310),VARREF(YLmetG));
  lit_311 = YPPsym((P)"<gen>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_311),VARREF(YLgenG));
  lit_312 = YPPsym((P)"<opts>");
  T500 = XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_312),VARREF(YLoptsG));
  T499 = T500;
  return T499;
}

P Y___main_9___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93;
DEFCREGS();
loop:
  lit_313 = YPPsym((P)"<opts-tup>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_313),VARREF(YLopts_tupG));
  lit_314 = YPPsym((P)"@@==");
  lit_315 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T0 = YPsig(LITREF(lit_315),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOOEE = YPmet(FUNCODEREF(YOOEE),LITREF(lit_314),T0,ENVNUL,PNUL,sloc(811));
  T1 = YOOEE;
  VARSET(YOOEE,T1);
  lit_316 = YPPsym((P)"not");
  lit_317 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_317),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  Ynot = YPmet(FUNCODEREF(Ynot),LITREF(lit_316),T2,ENVNUL,PNUL,sloc(813));
  T3 = Ynot;
  VARSET(Ynot,T3);
  lit_318 = YPPsym((P)"@@empty?");
  lit_319 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_319),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOOemptyQ = YPmet(FUNCODEREF(YOOemptyQ),LITREF(lit_318),T4,ENVNUL,PNUL,sloc(819));
  T5 = YOOemptyQ;
  VARSET(YOOemptyQ,T5);
  lit_320 = YPPsym((P)"@rev!");
  lit_321 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_321),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrevX = YPmet(FUNCODEREF(YOrevX),LITREF(lit_320),T6,ENVNUL,PNUL,sloc(821));
  T7 = YOrevX;
  VARSET(YOrevX,T7);
  lit_322 = YPPsym((P)"@all?");
  lit_323 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  lit_324 = YPPsym((P)"fnd");
  lit_325 = YPPlist(1,YPPsym((P)"p"));
  T9 = YPsig(LITREF(lit_325),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_349 = YPmet(FUNCODEREF(fun_fnd_349),LITREF(lit_324),T9,ENVNUL,PNUL,sloc(832));
  T8 = YPsig(LITREF(lit_323),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOallQ = YPmet(FUNCODEREF(YOallQ),LITREF(lit_322),T8,ENVNUL,PNUL,sloc(831));
  T10 = YOallQ;
  VARSET(YOallQ,T10);
  lit_326 = YPPsym((P)"@all2?");
  lit_327 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  lit_328 = YPPlist(2,YPPsym((P)"px"),YPPsym((P)"py"));
  T12 = YPsig(LITREF(lit_328),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_351 = YPmet(FUNCODEREF(fun_fnd_351),LITREF(lit_324),T12,ENVNUL,PNUL,sloc(836));
  T11 = YPsig(LITREF(lit_327),YPPlist(3,VARREF(YLfunG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOall2Q = YPmet(FUNCODEREF(YOall2Q),LITREF(lit_326),T11,ENVNUL,PNUL,sloc(835));
  T13 = YOall2Q;
  VARSET(YOall2Q,T13);
  lit_329 = YPPsym((P)"@elt");
  lit_330 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  lit_331 = YPPlist(2,YPPsym((P)"count"),YPPsym((P)"x"));
  T15 = YPsig(LITREF(lit_331),YPPlist(2,VARREF(YLfixnumG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_353 = YPmet(FUNCODEREF(fun_fnd_353),LITREF(lit_324),T15,ENVNUL,PNUL,sloc(846));
  T14 = YPsig(LITREF(lit_330),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOelt = YPmet(FUNCODEREF(YOelt),LITREF(lit_329),T14,ENVNUL,PNUL,sloc(845));
  T16 = YOelt;
  VARSET(YOelt,T16);
  lit_332 = YPPsym((P)"@fill");
  lit_333 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"f"));
  lit_334 = YPPlist(1,YPPsym((P)"p"));
  T18 = YPsig(LITREF(lit_334),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_355 = YPmet(FUNCODEREF(fun_loop_355),LITREF(lit_7),T18,ENVNUL,PNUL,sloc(852));
  T17 = YPsig(LITREF(lit_333),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfill = YPmet(FUNCODEREF(YOfill),LITREF(lit_332),T17,ENVNUL,PNUL,sloc(851));
  T19 = YOfill;
  VARSET(YOfill,T19);
  lit_335 = YPPsym((P)"@any?");
  lit_336 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  lit_337 = YPPlist(1,YPPsym((P)"p"));
  T21 = YPsig(LITREF(lit_337),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_357 = YPmet(FUNCODEREF(fun_fnd_357),LITREF(lit_324),T21,ENVNUL,PNUL,sloc(856));
  T20 = YPsig(LITREF(lit_336),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOanyQ = YPmet(FUNCODEREF(YOanyQ),LITREF(lit_335),T20,ENVNUL,PNUL,sloc(855));
  T22 = YOanyQ;
  VARSET(YOanyQ,T22);
  lit_338 = YPPsym((P)"@map");
  lit_339 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  lit_340 = YPPsym((P)"do");
  lit_341 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"res"));
  T24 = YPsig(LITREF(lit_341),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_362 = YPmet(FUNCODEREF(fun_do_362),LITREF(lit_340),T24,ENVNUL,PNUL,sloc(867));
  T23 = YPsig(LITREF(lit_339),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmap = YPmet(FUNCODEREF(YOmap),LITREF(lit_338),T23,ENVNUL,PNUL,sloc(866));
  T25 = YOmap;
  VARSET(YOmap,T25);
  lit_342 = YPPsym((P)"@pick");
  lit_343 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  lit_344 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"res"));
  T27 = YPsig(LITREF(lit_344),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_364 = YPmet(FUNCODEREF(fun_do_364),LITREF(lit_340),T27,ENVNUL,PNUL,sloc(873));
  T26 = YPsig(LITREF(lit_343),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOpick = YPmet(FUNCODEREF(YOpick),LITREF(lit_342),T26,ENVNUL,PNUL,sloc(872));
  T28 = YOpick;
  VARSET(YOpick,T28);
  lit_345 = YPPsym((P)"@do");
  lit_346 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  lit_347 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPsig(LITREF(lit_347),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_366 = YPmet(FUNCODEREF(fun_do_366),LITREF(lit_340),T30,ENVNUL,PNUL,sloc(879));
  T29 = YPsig(LITREF(lit_346),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo = YPmet(FUNCODEREF(YOdo),LITREF(lit_345),T29,ENVNUL,PNUL,sloc(878));
  T31 = YOdo;
  VARSET(YOdo,T31);
  lit_348 = YPPsym((P)"@alter");
  lit_349 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  lit_350 = YPPsym((P)"in");
  lit_351 = YPPlist(2,YPPsym((P)"ds"),YPPsym((P)"ss"));
  T33 = YPsig(LITREF(lit_351),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_in_368 = YPmet(FUNCODEREF(fun_in_368),LITREF(lit_350),T33,ENVNUL,PNUL,sloc(885));
  T32 = YPsig(LITREF(lit_349),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOalter = YPmet(FUNCODEREF(YOalter),LITREF(lit_348),T32,ENVNUL,PNUL,sloc(884));
  T34 = YOalter;
  VARSET(YOalter,T34);
  lit_352 = YPPsym((P)"@fab");
  lit_353 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  lit_354 = YPPsym((P)"fab");
  lit_355 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"res"));
  T36 = YPsig(LITREF(lit_355),YPPlist(2,VARREF(YLfixnumG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fab_370 = YPmet(FUNCODEREF(fun_fab_370),LITREF(lit_354),T36,ENVNUL,PNUL,sloc(892));
  T35 = YPsig(LITREF(lit_353),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfab = YPmet(FUNCODEREF(YOfab),LITREF(lit_352),T35,ENVNUL,PNUL,sloc(891));
  T37 = YOfab;
  VARSET(YOfab,T37);
  lit_356 = YPPsym((P)"@fold");
  lit_357 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"c"));
  lit_358 = YPPsym((P)"red");
  lit_359 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"c"));
  T39 = YPsig(LITREF(lit_359),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_red_372 = YPmet(FUNCODEREF(fun_red_372),LITREF(lit_358),T39,ENVNUL,PNUL,sloc(896));
  T38 = YPsig(LITREF(lit_357),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  YOfold = YPmet(FUNCODEREF(YOfold),LITREF(lit_356),T38,ENVNUL,PNUL,sloc(895));
  T40 = YOfold;
  VARSET(YOfold,T40);
  lit_360 = YPPsym((P)"@rev");
  lit_361 = YPPlist(1,YPPsym((P)"x"));
  lit_362 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"r"));
  T42 = YPsig(LITREF(lit_362),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_374 = YPmet(FUNCODEREF(fun_loop_374),LITREF(lit_7),T42,ENVNUL,PNUL,sloc(902));
  T41 = YPsig(LITREF(lit_361),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrev = YPmet(FUNCODEREF(YOrev),LITREF(lit_360),T41,ENVNUL,PNUL,sloc(901));
  T43 = YOrev;
  VARSET(YOrev,T43);
  lit_363 = YPPsym((P)"@cat2");
  lit_364 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T44 = YPsig(LITREF(lit_364),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOcat2 = YPmet(FUNCODEREF(YOcat2),LITREF(lit_363),T44,ENVNUL,PNUL,sloc(907));
  T45 = YOcat2;
  VARSET(YOcat2,T45);
  lit_365 = YPPsym((P)"@find");
  lit_366 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  lit_367 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"i"));
  T47 = YPsig(LITREF(lit_367),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_377 = YPmet(FUNCODEREF(fun_fnd_377),LITREF(lit_324),T47,ENVNUL,PNUL,sloc(911));
  T46 = YPsig(LITREF(lit_366),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfind = YPmet(FUNCODEREF(YOfind),LITREF(lit_365),T46,ENVNUL,PNUL,sloc(910));
  T48 = YOfind;
  VARSET(YOfind,T48);
  lit_368 = YPPsym((P)"@mem?");
  lit_369 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  lit_370 = YPPlist(1,YPPsym((P)"y"));
  T50 = YPsig(LITREF(lit_370),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_379 = YPmet(FUNCODEREF(fun_379),YPfalse,T50,ENVNUL,PNUL,sloc(919));
  T49 = YPsig(LITREF(lit_369),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmemQ = YPmet(FUNCODEREF(YOmemQ),LITREF(lit_368),T49,ENVNUL,PNUL,sloc(918));
  T51 = YOmemQ;
  VARSET(YOmemQ,T51);
  lit_371 = YPPsym((P)"@del-dups");
  lit_372 = YPPlist(1,YPPsym((P)"x"));
  lit_373 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"e"));
  T53 = YPsig(LITREF(lit_373),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_381 = YPmet(FUNCODEREF(fun_381),YPfalse,T53,ENVNUL,PNUL,sloc(924));
  T52 = YPsig(LITREF(lit_372),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOdel_dups = YPmet(FUNCODEREF(YOdel_dups),LITREF(lit_371),T52,ENVNUL,PNUL,sloc(923));
  T54 = YOdel_dups;
  VARSET(YOdel_dups,T54);
  lit_374 = YPPsym((P)"@lst-helper");
  lit_375 = YPPlist(3,YPPsym((P)"objects"),YPPsym((P)"i"),YPPsym((P)"l"));
  T55 = YPsig(LITREF(lit_375),YPPlist(3,VARREF(YLoptsG),VARREF(YLfixnumG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOlst_helper = YPmet(FUNCODEREF(YOlst_helper),LITREF(lit_374),T55,ENVNUL,PNUL,sloc(926));
  T56 = YOlst_helper;
  VARSET(YOlst_helper,T56);
  lit_376 = YPPsym((P)"@opts-as-lst");
  lit_377 = YPPlist(1,YPPsym((P)"x"));
  T57 = YPsig(LITREF(lit_377),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOopts_as_lst = YPmet(FUNCODEREF(YOopts_as_lst),LITREF(lit_376),T57,ENVNUL,PNUL,sloc(931));
  T58 = YOopts_as_lst;
  VARSET(YOopts_as_lst,T58);
  lit_378 = YPPsym((P)"@lst");
  lit_379 = YPPlist(1,YPPsym((P)"objects"));
  T59 = YPsig(LITREF(lit_379),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOlst = YPmet(FUNCODEREF(YOlst),LITREF(lit_378),T59,ENVNUL,PNUL,sloc(934));
  T60 = YOlst;
  VARSET(YOlst,T60);
  lit_380 = YPPsym((P)"@tany?");
  lit_381 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  lit_382 = YPPlist(1,YPPsym((P)"i"));
  T62 = YPsig(LITREF(lit_382),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_389 = YPmet(FUNCODEREF(fun_fnd_389),LITREF(lit_324),T62,ENVNUL,PNUL,sloc(946));
  T61 = YPsig(LITREF(lit_381),YPPlist(2,VARREF(YLfunG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtanyQ = YPmet(FUNCODEREF(YOtanyQ),LITREF(lit_380),T61,ENVNUL,PNUL,sloc(945));
  T63 = YOtanyQ;
  VARSET(YOtanyQ,T63);
  lit_383 = YPPsym((P)"@tall2?");
  lit_384 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"c1"),YPPsym((P)"c2"));
  lit_385 = YPPlist(1,YPPsym((P)"i"));
  T65 = YPsig(LITREF(lit_385),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_391 = YPmet(FUNCODEREF(fun_fnd_391),LITREF(lit_324),T65,ENVNUL,PNUL,sloc(950));
  T64 = YPsig(LITREF(lit_384),YPPlist(3,VARREF(YLfunG),VARREF(YLtupG),VARREF(YLtupG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOtall2Q = YPmet(FUNCODEREF(YOtall2Q),LITREF(lit_383),T64,ENVNUL,PNUL,sloc(949));
  T66 = YOtall2Q;
  VARSET(YOtall2Q,T66);
  lit_386 = YPPsym((P)"into");
  lit_387 = YPPlist(1,YPPsym((P)"k"));
  T67 = YPsig(LITREF(lit_387),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_into_393 = YPmet(FUNCODEREF(fun_into_393),LITREF(lit_386),T67,ENVNUL,PNUL,sloc(960));
  lit_388 = YPPsym((P)"@tup");
  lit_389 = YPPlist(1,YPPsym((P)"args"));
  T68 = YPsig(LITREF(lit_389),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOtup = YPmet(FUNCODEREF(YOtup),LITREF(lit_388),T68,ENVNUL,PNUL,sloc(966));
  T69 = YOtup;
  VARSET(YOtup,T69);
  lit_390 = YPPsym((P)"@fun-names");
  lit_391 = YPPlist(1,YPPsym((P)"x"));
  T70 = YPsig(LITREF(lit_391),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_names = YPmet(FUNCODEREF(YOfun_names),LITREF(lit_390),T70,ENVNUL,PNUL,sloc(968));
  T71 = YOfun_names;
  VARSET(YOfun_names,T71);
  lit_392 = YPPsym((P)"@fun-specs");
  lit_393 = YPPlist(1,YPPsym((P)"x"));
  T72 = YPsig(LITREF(lit_393),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_specs = YPmet(FUNCODEREF(YOfun_specs),LITREF(lit_392),T72,ENVNUL,PNUL,sloc(970));
  T73 = YOfun_specs;
  VARSET(YOfun_specs,T73);
  lit_394 = YPPsym((P)"@fun-nary?");
  lit_395 = YPPlist(1,YPPsym((P)"x"));
  T74 = YPsig(LITREF(lit_395),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOfun_naryQ = YPmet(FUNCODEREF(YOfun_naryQ),LITREF(lit_394),T74,ENVNUL,PNUL,sloc(972));
  T75 = YOfun_naryQ;
  VARSET(YOfun_naryQ,T75);
  lit_396 = YPPsym((P)"@fun-arity");
  lit_397 = YPPlist(1,YPPsym((P)"x"));
  T76 = YPsig(LITREF(lit_397),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  YOfun_arity = YPmet(FUNCODEREF(YOfun_arity),LITREF(lit_396),T76,ENVNUL,PNUL,sloc(974));
  T77 = YOfun_arity;
  VARSET(YOfun_arity,T77);
  lit_398 = YPPsym((P)"@fun-val");
  lit_399 = YPPlist(1,YPPsym((P)"x"));
  T78 = YPsig(LITREF(lit_399),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOfun_val = YPmet(FUNCODEREF(YOfun_val),LITREF(lit_398),T78,ENVNUL,PNUL,sloc(976));
  T79 = YOfun_val;
  VARSET(YOfun_val,T79);
  lit_400 = YPPsym((P)"@fun-unification-vars");
  lit_401 = YPPlist(1,YPPsym((P)"x"));
  T80 = YPsig(LITREF(lit_401),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_unification_vars = YPmet(FUNCODEREF(YOfun_unification_vars),LITREF(lit_400),T80,ENVNUL,PNUL,sloc(978));
  T81 = YOfun_unification_vars;
  VARSET(YOfun_unification_vars,T81);
  lit_402 = YPPsym((P)"@fun-mets");
  lit_403 = YPPlist(1,YPPsym((P)"x"));
  T82 = YPsig(LITREF(lit_403),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_mets = YPmet(FUNCODEREF(YOfun_mets),LITREF(lit_402),T82,ENVNUL,PNUL,sloc(980));
  T83 = YOfun_mets;
  VARSET(YOfun_mets,T83);
  lit_404 = YPPsym((P)"@fun-mets-setter");
  lit_405 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T84 = YPsig(LITREF(lit_405),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfun_mets_setter = YPmet(FUNCODEREF(YOfun_mets_setter),LITREF(lit_404),T84,ENVNUL,PNUL,sloc(982));
  T85 = YOfun_mets_setter;
  VARSET(YOfun_mets_setter,T85);
  VARSET(YLenvG,VARREF(YLanyG));
  VARSET(YLspecsG,VARREF(YLlstG));
  VARSET(YLbodyG,VARREF(YLanyG));
  lit_406 = YPPsym((P)"fun-spec");
  lit_407 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T86 = YPsig(LITREF(lit_407),YPPlist(2,VARREF(YLmetG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_spec = YPmet(FUNCODEREF(Yfun_spec),LITREF(lit_406),T86,ENVNUL,PNUL,sloc(992));
  T87 = Yfun_spec;
  VARSET(Yfun_spec,T87);
  VARSET(YLmetsG,VARREF(YLlstG));
  lit_408 = YPPsym((P)"fun-same-met?");
  lit_409 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T88 = YPsig(LITREF(lit_409),YPPlist(2,VARREF(YLmetG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yfun_same_metQ = YPmet(FUNCODEREF(Yfun_same_metQ),LITREF(lit_408),T88,ENVNUL,PNUL,sloc(997));
  T89 = Yfun_same_metQ;
  VARSET(Yfun_same_metQ,T89);
  lit_410 = YPPsym((P)"fun-congruent?");
  lit_411 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T90 = YPsig(LITREF(lit_411),YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yfun_congruentQ = YPmet(FUNCODEREF(Yfun_congruentQ),LITREF(lit_410),T90,ENVNUL,PNUL,sloc(1000));
  T91 = Yfun_congruentQ;
  VARSET(Yfun_congruentQ,T91);
  T93 = VARSET(YTrestarts_okQT,YPfalse);
  T92 = T93;
  return T92;
}

P Y___main_10___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112;
DEFCREGS();
loop:
  lit_412 = YPPsym((P)"gen-add-met");
  lit_413 = YPPlist(2,YPPsym((P)"g"),YPPsym((P)"m"));
  lit_414 = YPPlist(1,YPPsym((P)"return"));
  lit_415 = YPsb((P)"Replace %= with an empty generic congruent with %=");
  lit_416 = Ynil;
  lit_417 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  lit_418 = YPPsym((P)"lop");
  lit_419 = YPPlist(1,YPPsym((P)"specs"));
  lit_420 = YPPsym((P)"col");
  lit_421 = YPPlist(3,YPPsym((P)"mets"),YPPsym((P)"same?"),YPPsym((P)"gms"));
  T6 = YPsig(LITREF(lit_416),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_407 = YPmet(FUNCODEREF(fun_407),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(LITREF(lit_417),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_408 = YPmet(FUNCODEREF(fun_408),YPfalse,T5,ENVNUL,PNUL,sloc(1022));
  T4 = YPsig(LITREF(lit_416),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_409 = YPmet(FUNCODEREF(fun_409),YPfalse,T4,ENVNUL,PNUL,sloc(1024));
  T3 = YPsig(LITREF(lit_414),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_410 = YPmet(FUNCODEREF(fun_410),YPfalse,T3,ENVNUL,PNUL,sloc(1018));
  T2 = YPsig(LITREF(lit_419),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lop_411 = YPmet(FUNCODEREF(fun_lop_411),LITREF(lit_418),T2,ENVNUL,PNUL,sloc(1029));
  T1 = YPsig(LITREF(lit_421),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLmetsG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_col_412 = YPmet(FUNCODEREF(fun_col_412),LITREF(lit_420),T1,ENVNUL,PNUL,sloc(1042));
  T0 = YPsig(LITREF(lit_413),YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  Ygen_add_met = YPmet(FUNCODEREF(Ygen_add_met),LITREF(lit_412),T0,ENVNUL,PNUL,sloc(1011));
  T7 = Ygen_add_met;
  VARSET(Ygen_add_met,T7);
  lit_422 = YPPsym((P)"@isa?");
  lit_423 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T8 = YPsig(LITREF(lit_423),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOisaQ = YPmet(FUNCODEREF(YOisaQ),LITREF(lit_422),T8,ENVNUL,PNUL,sloc(1080));
  T9 = YOisaQ;
  VARSET(YOisaQ,T9);
  lit_424 = YPPsym((P)"@class<");
  lit_425 = YPPlist(3,YPPsym((P)"c1"),YPPsym((P)"c2"),YPPsym((P)"wrt"));
  lit_426 = YPPsym((P)"find");
  lit_427 = YPPlist(1,YPPsym((P)"ps"));
  lit_428 = YPsb((P)"can't order specializers - arg/reference object %= is ");
  lit_429 = YPsb((P)"neither %= nor %=");
  T11 = YPsig(LITREF(lit_427),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_418 = YPmet(FUNCODEREF(fun_find_418),LITREF(lit_426),T11,ENVNUL,PNUL,sloc(1086));
  T10 = YPsig(LITREF(lit_425),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOclassL = YPmet(FUNCODEREF(YOclassL),LITREF(lit_424),T10,ENVNUL,PNUL,sloc(1085));
  T12 = YOclassL;
  VARSET(YOclassL,T12);
  VARSET(Ytup,VARREF(YOtup));
  lit_430 = YPPsym((P)"t*");
  lit_431 = YPPlist(1,YPPsym((P)"args"));
  T13 = YPsig(LITREF(lit_431),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YtT = YPmet(FUNCODEREF(YtT),LITREF(lit_430),T13,ENVNUL,PNUL,sloc(1099));
  T14 = YtT;
  VARSET(YtT,T14);
  lit_432 = YPPsym((P)"@type-equal?");
  lit_433 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T15 = YPsig(LITREF(lit_433),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtype_equalQ = YPmet(FUNCODEREF(YOtype_equalQ),LITREF(lit_432),T15,ENVNUL,PNUL,sloc(1103));
  T16 = YOtype_equalQ;
  VARSET(YOtype_equalQ,T16);
  lit_434 = YPPsym((P)"@subtype?");
  lit_435 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T17 = YPsig(LITREF(lit_435),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOsubtypeQ = YPmet(FUNCODEREF(YOsubtypeQ),LITREF(lit_434),T17,ENVNUL,PNUL,sloc(1108));
  T18 = YOsubtypeQ;
  VARSET(YOsubtypeQ,T18);
  lit_436 = YPPsym((P)"@may-isa?");
  lit_437 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T20 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T19 = YPsig(LITREF(lit_437),YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),T20,Ynil);
  YOmay_isaQ = YPmet(FUNCODEREF(YOmay_isaQ),LITREF(lit_436),T19,ENVNUL,PNUL,sloc(1113));
  T21 = YOmay_isaQ;
  VARSET(YOmay_isaQ,T21);
  lit_438 = YPPsym((P)"@order-specs-class");
  lit_439 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_440 = YPPsym((P)"=");
  lit_441 = YPPsym((P)"<");
  lit_442 = YPPsym((P)">");
  T22 = YPsig(LITREF(lit_439),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOorder_specs_class = YPmet(FUNCODEREF(YOorder_specs_class),LITREF(lit_438),T22,ENVNUL,PNUL,sloc(1118));
  T23 = YOorder_specs_class;
  VARSET(YOorder_specs_class,T23);
  lit_443 = YPPsym((P)"@order-specs");
  lit_444 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T24 = YPsig(LITREF(lit_444),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOorder_specs = YPmet(FUNCODEREF(YOorder_specs),LITREF(lit_443),T24,ENVNUL,PNUL,sloc(1125));
  T25 = YOorder_specs;
  VARSET(YOorder_specs,T25);
  lit_445 = YPPsym((P)"order-mets");
  lit_446 = YPPlist(3,YPPsym((P)"m1"),YPPsym((P)"m2"),YPPsym((P)"args"));
  lit_447 = YPPlist(2,YPPsym((P)"state"),YPPsym((P)"idx"));
  lit_448 = YPPsym((P)"<>");
  T27 = YPsig(LITREF(lit_447),YPPlist(2,VARREF(YLsymG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_426 = YPmet(FUNCODEREF(fun_loop_426),LITREF(lit_7),T27,ENVNUL,PNUL,sloc(1132));
  T26 = YPsig(LITREF(lit_446),YPPlist(3,VARREF(YLmetG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLsymG),Ynil);
  Yorder_mets = YPmet(FUNCODEREF(Yorder_mets),LITREF(lit_445),T26,ENVNUL,PNUL,sloc(1130));
  T28 = Yorder_mets;
  VARSET(Yorder_mets,T28);
  lit_449 = YPPsym((P)"ord-app-mets-1");
  lit_450 = YPPlist(3,YPPsym((P)"mets"),YPPsym((P)"args"),YPPsym((P)"order-mets"));
  lit_451 = YPPlist(1,YPPsym((P)"mets"));
  lit_452 = YPPsym((P)"make-ambiguous");
  lit_453 = YPPlist(1,YPPsym((P)"headed-list"));
  lit_454 = YPPlist(1,YPPsym((P)"l"));
  lit_455 = YPPsym((P)"precedes-all?");
  lit_456 = YPPlist(1,YPPsym((P)"l"));
  lit_457 = YPPlist(1,YPPsym((P)"l"));
  lit_458 = YPPsym((P)"check-subsequent-ambiguities");
  lit_459 = YPPlist(1,YPPsym((P)"oprev"));
  lit_460 = YPPsym((P)"insert");
  lit_461 = YPPlist(2,YPPsym((P)"oprev"),YPPsym((P)"osub"));
  T36 = YPsig(LITREF(lit_454),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_428 = YPmet(FUNCODEREF(fun_loop_428),LITREF(lit_7),T36,ENVNUL,PNUL,sloc(1156));
  T35 = YPsig(LITREF(lit_453),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_ambiguous_429 = YPmet(FUNCODEREF(fun_make_ambiguous_429),LITREF(lit_452),T35,ENVNUL,PNUL,sloc(1155));
  T34 = YPsig(LITREF(lit_457),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_430 = YPmet(FUNCODEREF(fun_loop_430),LITREF(lit_7),T34,ENVNUL,PNUL,sloc(1165));
  T33 = YPsig(LITREF(lit_456),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_precedes_allQ_431 = YPmet(FUNCODEREF(fun_precedes_allQ_431),LITREF(lit_455),T33,ENVNUL,PNUL,sloc(1164));
  T32 = YPsig(LITREF(lit_459),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_check_subsequent_ambiguities_432 = YPmet(FUNCODEREF(fun_check_subsequent_ambiguities_432),LITREF(lit_458),T32,ENVNUL,PNUL,sloc(1171));
  T31 = YPsig(LITREF(lit_461),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_433 = YPmet(FUNCODEREF(fun_insert_433),LITREF(lit_460),T31,ENVNUL,PNUL,sloc(1176));
  T30 = YPsig(LITREF(lit_451),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_434 = YPmet(FUNCODEREF(fun_loop_434),LITREF(lit_7),T30,ENVNUL,PNUL,sloc(1152));
  T29 = YPsig(LITREF(lit_450),YPPlist(3,VARREF(YLlstG),VARREF(YLoptsG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  Yord_app_mets_1 = YPmet(FUNCODEREF(Yord_app_mets_1),LITREF(lit_449),T29,ENVNUL,PNUL,sloc(1147));
  T37 = Yord_app_mets_1;
  VARSET(Yord_app_mets_1,T37);
  lit_462 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T38 = YPsig(LITREF(lit_462),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_436 = YPmet(FUNCODEREF(fun_436),YPfalse,T38,ENVNUL,PNUL,sloc(1189));
  T39 = fun_436;
  VARSET(Ymet_app_unify,T39);
  lit_463 = YPPsym((P)"met-app?");
  lit_464 = YPPlist(2,YPPsym((P)"met"),YPPsym((P)"args"));
  lit_465 = YPPlist(1,YPPsym((P)"i"));
  T41 = YPsig(LITREF(lit_465),YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_437 = YPmet(FUNCODEREF(fun_loop_437),LITREF(lit_7),T41,ENVNUL,PNUL,sloc(1195));
  T40 = YPsig(LITREF(lit_464),YPPlist(2,VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Ymet_appQ = YPmet(FUNCODEREF(Ymet_appQ),LITREF(lit_463),T40,ENVNUL,PNUL,sloc(1191));
  T42 = Ymet_appQ;
  VARSET(Ymet_appQ,T42);
  lit_466 = YPPsym((P)"ord-app-mets*");
  lit_467 = YPPlist(2,YPPsym((P)"gf"),YPPsym((P)"args"));
  lit_468 = YPPlist(2,YPPsym((P)"ans"),YPPsym((P)"ms"));
  T44 = YPsig(LITREF(lit_468),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_439 = YPmet(FUNCODEREF(fun_col_439),LITREF(lit_420),T44,ENVNUL,PNUL,sloc(1205));
  T43 = YPsig(LITREF(lit_467),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  Yord_app_metsT = YPmet(FUNCODEREF(Yord_app_metsT),LITREF(lit_466),T43,ENVNUL,PNUL,sloc(1202));
  T45 = Yord_app_metsT;
  VARSET(Yord_app_metsT,T45);
  lit_469 = YPPsym((P)"ord-app-mets");
  lit_470 = YPPlist(2,YPPsym((P)"gf"),YPPsym((P)"args"));
  T47 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T46 = YPsig(LITREF(lit_470),YPPlist(1,VARREF(YLgenG)),YPtrue,YPint((P)1),T47,Ynil);
  Yord_app_mets = YPmet(FUNCODEREF(Yord_app_mets),LITREF(lit_469),T46,ENVNUL,PNUL,sloc(1213));
  T48 = Yord_app_mets;
  VARSET(Yord_app_mets,T48);
  lit_471 = YPPsym((P)"@gen-cache-arg-pos");
  lit_472 = YPPlist(1,YPPsym((P)"x"));
  T49 = YPsig(LITREF(lit_472),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_arg_pos = YPmet(FUNCODEREF(YOgen_cache_arg_pos),LITREF(lit_471),T49,ENVNUL,PNUL,sloc(1224));
  T50 = YOgen_cache_arg_pos;
  VARSET(YOgen_cache_arg_pos,T50);
  lit_473 = YPPsym((P)"@gen-cache-arg-pos-setter");
  lit_474 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T51 = YPsig(LITREF(lit_474),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_arg_pos_setter = YPmet(FUNCODEREF(YOgen_cache_arg_pos_setter),LITREF(lit_473),T51,ENVNUL,PNUL,sloc(1225));
  T52 = YOgen_cache_arg_pos_setter;
  VARSET(YOgen_cache_arg_pos_setter,T52);
  lit_475 = YPPsym((P)"@gen-cache-singletons");
  lit_476 = YPPlist(1,YPPsym((P)"x"));
  T53 = YPsig(LITREF(lit_476),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_singletons = YPmet(FUNCODEREF(YOgen_cache_singletons),LITREF(lit_475),T53,ENVNUL,PNUL,sloc(1226));
  T54 = YOgen_cache_singletons;
  VARSET(YOgen_cache_singletons,T54);
  lit_477 = YPPsym((P)"@gen-cache-singletons-setter");
  lit_478 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T55 = YPsig(LITREF(lit_478),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_singletons_setter = YPmet(FUNCODEREF(YOgen_cache_singletons_setter),LITREF(lit_477),T55,ENVNUL,PNUL,sloc(1227));
  T56 = YOgen_cache_singletons_setter;
  VARSET(YOgen_cache_singletons_setter,T56);
  lit_479 = YPPsym((P)"@gen-cache-classes");
  lit_480 = YPPlist(1,YPPsym((P)"x"));
  T57 = YPsig(LITREF(lit_480),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_classes = YPmet(FUNCODEREF(YOgen_cache_classes),LITREF(lit_479),T57,ENVNUL,PNUL,sloc(1228));
  T58 = YOgen_cache_classes;
  VARSET(YOgen_cache_classes,T58);
  lit_481 = YPPsym((P)"@gen-cache-classes-setter");
  lit_482 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T59 = YPsig(LITREF(lit_482),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_classes_setter = YPmet(FUNCODEREF(YOgen_cache_classes_setter),LITREF(lit_481),T59,ENVNUL,PNUL,sloc(1229));
  T60 = YOgen_cache_classes_setter;
  VARSET(YOgen_cache_classes_setter,T60);
  lit_483 = YPPsym((P)"method-accessor-offset");
  lit_484 = YPPlist(3,YPPsym((P)"gen"),YPPsym((P)"met"),YPPsym((P)"args"));
  T61 = YPsig(LITREF(lit_484),YPPlist(3,VARREF(YLgenG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Ymethod_accessor_offset = YPmet(FUNCODEREF(Ymethod_accessor_offset),LITREF(lit_483),T61,ENVNUL,PNUL,sloc(1233));
  T62 = Ymethod_accessor_offset;
  VARSET(Ymethod_accessor_offset,T62);
  lit_485 = YPPsym((P)"@singleton-spec?");
  lit_486 = YPPlist(1,YPPsym((P)"x"));
  T63 = YPsig(LITREF(lit_486),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOsingleton_specQ = YPmet(FUNCODEREF(YOsingleton_specQ),LITREF(lit_485),T63,ENVNUL,PNUL,sloc(1242));
  T64 = YOsingleton_specQ;
  VARSET(YOsingleton_specQ,T64);
  lit_487 = YPPsym((P)"@subclass-spec?");
  lit_488 = YPPlist(1,YPPsym((P)"x"));
  T65 = YPsig(LITREF(lit_488),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOsubclass_specQ = YPmet(FUNCODEREF(YOsubclass_specQ),LITREF(lit_487),T65,ENVNUL,PNUL,sloc(1245));
  T66 = YOsubclass_specQ;
  VARSET(YOsubclass_specQ,T66);
  lit_489 = YPPsym((P)"@union-spec?");
  lit_490 = YPPlist(1,YPPsym((P)"x"));
  T67 = YPsig(LITREF(lit_490),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOunion_specQ = YPmet(FUNCODEREF(YOunion_specQ),LITREF(lit_489),T67,ENVNUL,PNUL,sloc(1248));
  T68 = YOunion_specQ;
  VARSET(YOunion_specQ,T68);
  lit_491 = YPPsym((P)"@precise-spec?");
  lit_492 = YPPlist(1,YPPsym((P)"x"));
  T69 = YPsig(LITREF(lit_492),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOprecise_specQ = YPmet(FUNCODEREF(YOprecise_specQ),LITREF(lit_491),T69,ENVNUL,PNUL,sloc(1251));
  T70 = YOprecise_specQ;
  VARSET(YOprecise_specQ,T70);
  lit_493 = YPPsym((P)"@mets-unspecialized-at?");
  lit_494 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_495 = YPPlist(1,YPPsym((P)"met"));
  T72 = YPsig(LITREF(lit_495),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_453 = YPmet(FUNCODEREF(fun_453),YPfalse,T72,ENVNUL,PNUL,sloc(1256));
  T71 = YPsig(LITREF(lit_494),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmets_unspecialized_atQ = YPmet(FUNCODEREF(YOmets_unspecialized_atQ),LITREF(lit_493),T71,ENVNUL,PNUL,sloc(1255));
  T73 = YOmets_unspecialized_atQ;
  VARSET(YOmets_unspecialized_atQ,T73);
  lit_496 = YPPsym((P)"@prune-mets-by-type-at");
  lit_497 = YPPlist(3,YPPsym((P)"mets"),YPPsym((P)"type"),YPPsym((P)"pos"));
  lit_498 = YPPlist(1,YPPsym((P)"met"));
  T75 = YPsig(LITREF(lit_498),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_455 = YPmet(FUNCODEREF(fun_455),YPfalse,T75,ENVNUL,PNUL,sloc(1260));
  T74 = YPsig(LITREF(lit_497),YPPlist(3,VARREF(YLlstG),VARREF(YLtypeG),VARREF(YLfixnumG)),YPfalse,YPint((P)3),VARREF(YLmetsG),Ynil);
  YOprune_mets_by_type_at = YPmet(FUNCODEREF(YOprune_mets_by_type_at),LITREF(lit_496),T74,ENVNUL,PNUL,sloc(1258));
  T76 = YOprune_mets_by_type_at;
  VARSET(YOprune_mets_by_type_at,T76);
  lit_499 = YPPsym((P)"@mets-specs-at");
  lit_500 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_501 = YPPlist(1,YPPsym((P)"met"));
  T78 = YPsig(LITREF(lit_501),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_457 = YPmet(FUNCODEREF(fun_457),YPfalse,T78,ENVNUL,PNUL,sloc(1263));
  T77 = YPsig(LITREF(lit_500),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_specs_at = YPmet(FUNCODEREF(YOmets_specs_at),LITREF(lit_499),T77,ENVNUL,PNUL,sloc(1262));
  T79 = YOmets_specs_at;
  VARSET(YOmets_specs_at,T79);
  lit_502 = YPPsym((P)"@mets-singletons-at");
  lit_503 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_504 = YPPlist(1,YPPsym((P)"spec"));
  T81 = YPsig(LITREF(lit_504),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_459 = YPmet(FUNCODEREF(fun_459),YPfalse,T81,ENVNUL,PNUL,sloc(1268));
  T80 = YPsig(LITREF(lit_503),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_singletons_at = YPmet(FUNCODEREF(YOmets_singletons_at),LITREF(lit_502),T80,ENVNUL,PNUL,sloc(1267));
  T82 = YOmets_singletons_at;
  VARSET(YOmets_singletons_at,T82);
  lit_505 = YPPsym((P)"@mets-subclasses-at");
  lit_506 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_507 = YPPlist(1,YPPsym((P)"spec"));
  T84 = YPsig(LITREF(lit_507),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_461 = YPmet(FUNCODEREF(fun_461),YPfalse,T84,ENVNUL,PNUL,sloc(1271));
  T83 = YPsig(LITREF(lit_506),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_subclasses_at = YPmet(FUNCODEREF(YOmets_subclasses_at),LITREF(lit_505),T83,ENVNUL,PNUL,sloc(1270));
  T85 = YOmets_subclasses_at;
  VARSET(YOmets_subclasses_at,T85);
  VARSET(YDnul_assocs,VARREF(YPtnul));
  lit_508 = YPPsym((P)"@cache-add");
  lit_509 = YPPlist(3,YPPsym((P)"t"),YPPsym((P)"k"),YPPsym((P)"v"));
  lit_510 = YPPsym((P)"copy");
  lit_511 = YPPlist(1,YPPsym((P)"i"));
  T87 = YPsig(LITREF(lit_511),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_copy_463 = YPmet(FUNCODEREF(fun_copy_463),LITREF(lit_510),T87,ENVNUL,PNUL,sloc(1278));
  T86 = YPsig(LITREF(lit_509),YPPlist(3,VARREF(YLtupG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOcache_add = YPmet(FUNCODEREF(YOcache_add),LITREF(lit_508),T86,ENVNUL,PNUL,sloc(1275));
  T88 = YOcache_add;
  VARSET(YOcache_add,T88);
  lit_512 = YPPsym((P)"gen-lookup-miss-1-using");
  lit_513 = YPPlist(10,YPPsym((P)"key"),YPPsym((P)"instance"),YPPsym((P)"all-assocs"),YPPsym((P)"all-assocs-setter"),YPPsym((P)"gen"),YPPsym((P)"cache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  lit_514 = YPPlist(1,YPPsym((P)"j"));
  T90 = YPsig(LITREF(lit_514),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_465 = YPmet(FUNCODEREF(fun_loop_465),LITREF(lit_7),T90,ENVNUL,PNUL,sloc(1296));
  T89 = YPsig(LITREF(lit_513),YPPlist(10,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)10),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss_1_using = YPmet(FUNCODEREF(Ygen_lookup_miss_1_using),LITREF(lit_512),T89,ENVNUL,PNUL,sloc(1288));
  T91 = Ygen_lookup_miss_1_using;
  VARSET(Ygen_lookup_miss_1_using,T91);
  lit_515 = YPPsym((P)"@specd-args");
  lit_516 = YPPlist(3,YPPsym((P)"args"),YPPsym((P)"i"),YPPsym((P)"arg"));
  lit_517 = YPPlist(1,YPPsym((P)"k"));
  T93 = YPsig(LITREF(lit_517),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_copy_467 = YPmet(FUNCODEREF(fun_copy_467),LITREF(lit_510),T93,ENVNUL,PNUL,sloc(1316));
  T92 = YPsig(LITREF(lit_516),YPPlist(3,VARREF(YLoptsG),VARREF(YLfixnumG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLoptsG),Ynil);
  YOspecd_args = YPmet(FUNCODEREF(YOspecd_args),LITREF(lit_515),T92,ENVNUL,PNUL,sloc(1313));
  T94 = YOspecd_args;
  VARSET(YOspecd_args,T94);
  lit_518 = YPPsym((P)"requires-singleton-prec");
  lit_519 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  T95 = YPsig(LITREF(lit_519),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yrequires_singleton_prec = YPmet(FUNCODEREF(Yrequires_singleton_prec),LITREF(lit_518),T95,ENVNUL,PNUL,sloc(1323));
  T96 = Yrequires_singleton_prec;
  VARSET(Yrequires_singleton_prec,T96);
  lit_520 = YPPsym((P)"ensure-singleton-cache");
  lit_521 = YPPlist(6,YPPsym((P)"gen"),YPPsym((P)"cache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  lit_522 = YPPlist(1,YPPsym((P)"singletons"));
  T98 = YPsig(LITREF(lit_522),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_470 = YPmet(FUNCODEREF(fun_loop_470),LITREF(lit_7),T98,ENVNUL,PNUL,sloc(1348));
  T97 = YPsig(LITREF(lit_521),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  Yensure_singleton_cache = YPmet(FUNCODEREF(Yensure_singleton_cache),LITREF(lit_520),T97,ENVNUL,PNUL,sloc(1338));
  T99 = Yensure_singleton_cache;
  VARSET(Yensure_singleton_cache,T99);
  lit_523 = YPPsym((P)"gen-lookup-miss-1");
  lit_524 = YPPlist(6,YPPsym((P)"gen"),YPPsym((P)"ocache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T100 = YPsig(LITREF(lit_524),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss_1 = YPmet(FUNCODEREF(Ygen_lookup_miss_1),LITREF(lit_523),T100,ENVNUL,PNUL,sloc(1361));
  T101 = Ygen_lookup_miss_1;
  VARSET(Ygen_lookup_miss_1,T101);
  lit_525 = YPPsym((P)"gen-lookup-miss");
  lit_526 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T102 = YPsig(LITREF(lit_526),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss = YPmet(FUNCODEREF(Ygen_lookup_miss),LITREF(lit_525),T102,ENVNUL,PNUL,sloc(1387));
  T103 = Ygen_lookup_miss;
  VARSET(Ygen_lookup_miss,T103);
  T104 = (P)YPpair(VARREF(Ynil),VARREF(Ynil));
  VARSET(YDmissed_dispatch,T104);
  lit_527 = YPPsym((P)"choose-methods");
  lit_528 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T105 = YPsig(LITREF(lit_528),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  Ychoose_methods = YPmet(FUNCODEREF(Ychoose_methods),LITREF(lit_527),T105,ENVNUL,PNUL,sloc(1456));
  T106 = Ychoose_methods;
  VARSET(Ychoose_methods,T106);
  lit_529 = YPPsym((P)"%dispatch");
  lit_530 = YPPlist(1,YPPsym((P)"args"));
  T107 = YPsig(LITREF(lit_530),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YPdispatch = YPmet(FUNCODEREF(YPdispatch),LITREF(lit_529),T107,ENVNUL,PNUL,sloc(1470));
  T108 = YPdispatch;
  VARSET(YPdispatch,T108);
  lit_531 = YPPsym((P)"%patch-early-generic");
  lit_532 = YPPlist(1,YPPsym((P)"generic"));
  T109 = YPsig(LITREF(lit_532),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPpatch_early_generic = YPmet(FUNCODEREF(YPpatch_early_generic),LITREF(lit_531),T109,ENVNUL,PNUL,sloc(1484));
  T110 = YPpatch_early_generic;
  VARSET(YPpatch_early_generic,T110);
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysrc_loc_line));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysrc_loc_line_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysrc_loc_file));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysrc_loc_file_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yhead));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yhead_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytail));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytail_setter));
  T112 = XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysym_name));
  T111 = T112;
  return T111;
}

P Y___main_11___() {
  P T0,T1;
DEFCREGS();
loop:
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
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_classes_setter));
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
  T1 = XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_unification_vars));
  T0 = T1;
  return T0;
}

P Y___main_12___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66;
DEFCREGS();
loop:
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
  lit_533 = YPPsym((P)"fun-names");
  lit_534 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_534),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_names = YPmet(FUNCODEREF(Yfun_names),LITREF(lit_533),T0,ENVNUL,PNUL,sloc(1504));
  T1 = Yfun_names;
  VARSET(Yfun_names,T1);
  lit_535 = YPPsym((P)"fun-names-setter");
  lit_536 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_536),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_names_setter = YPmet(FUNCODEREF(Yfun_names_setter),LITREF(lit_535),T2,ENVNUL,PNUL,sloc(1504));
  T3 = Yfun_names_setter;
  VARSET(Yfun_names_setter,T3);
  lit_537 = YPPsym((P)"fun-specs");
  lit_538 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_538),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_specs = YPmet(FUNCODEREF(Yfun_specs),LITREF(lit_537),T4,ENVNUL,PNUL,sloc(1505));
  T5 = Yfun_specs;
  VARSET(Yfun_specs,T5);
  lit_539 = YPPsym((P)"fun-specs-setter");
  lit_540 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_540),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_specs_setter = YPmet(FUNCODEREF(Yfun_specs_setter),LITREF(lit_539),T6,ENVNUL,PNUL,sloc(1505));
  T7 = Yfun_specs_setter;
  VARSET(Yfun_specs_setter,T7);
  lit_541 = YPPsym((P)"fun-nary?");
  lit_542 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPsig(LITREF(lit_542),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_naryQ = YPmet(FUNCODEREF(Yfun_naryQ),LITREF(lit_541),T8,ENVNUL,PNUL,sloc(1506));
  T9 = Yfun_naryQ;
  VARSET(Yfun_naryQ,T9);
  lit_543 = YPPsym((P)"fun-nary?-setter");
  lit_544 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T10 = YPsig(LITREF(lit_544),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_naryQ_setter = YPmet(FUNCODEREF(Yfun_naryQ_setter),LITREF(lit_543),T10,ENVNUL,PNUL,sloc(1506));
  T11 = Yfun_naryQ_setter;
  VARSET(Yfun_naryQ_setter,T11);
  lit_545 = YPPsym((P)"fun-arity");
  lit_546 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPsig(LITREF(lit_546),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_arity = YPmet(FUNCODEREF(Yfun_arity),LITREF(lit_545),T12,ENVNUL,PNUL,sloc(1507));
  T13 = Yfun_arity;
  VARSET(Yfun_arity,T13);
  lit_547 = YPPsym((P)"fun-arity-setter");
  lit_548 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T14 = YPsig(LITREF(lit_548),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_arity_setter = YPmet(FUNCODEREF(Yfun_arity_setter),LITREF(lit_547),T14,ENVNUL,PNUL,sloc(1507));
  T15 = Yfun_arity_setter;
  VARSET(Yfun_arity_setter,T15);
  lit_549 = YPPsym((P)"fun-val");
  lit_550 = YPPlist(1,YPPsym((P)"x"));
  T16 = YPsig(LITREF(lit_550),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_val = YPmet(FUNCODEREF(Yfun_val),LITREF(lit_549),T16,ENVNUL,PNUL,sloc(1508));
  T17 = Yfun_val;
  VARSET(Yfun_val,T17);
  lit_551 = YPPsym((P)"fun-val-setter");
  lit_552 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T18 = YPsig(LITREF(lit_552),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_val_setter = YPmet(FUNCODEREF(Yfun_val_setter),LITREF(lit_551),T18,ENVNUL,PNUL,sloc(1508));
  T19 = Yfun_val_setter;
  VARSET(Yfun_val_setter,T19);
  lit_553 = YPPsym((P)"fun-unification-vars");
  lit_554 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_554),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_unification_vars = YPmet(FUNCODEREF(Yfun_unification_vars),LITREF(lit_553),T20,ENVNUL,PNUL,sloc(1509));
  T21 = Yfun_unification_vars;
  VARSET(Yfun_unification_vars,T21);
  lit_555 = YPPsym((P)"fun-unification-vars-setter");
  lit_556 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T22 = YPsig(LITREF(lit_556),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_unification_vars_setter = YPmet(FUNCODEREF(Yfun_unification_vars_setter),LITREF(lit_555),T22,ENVNUL,PNUL,sloc(1509));
  T23 = Yfun_unification_vars_setter;
  VARSET(Yfun_unification_vars_setter,T23);
  VARSET(YLparentsG,VARREF(YLlstG));
  VARSET(YLpropsG,VARREF(YLlstG));
  lit_557 = YPPsym((P)"object-class");
  lit_558 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPsig(LITREF(lit_558),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_class = YPmet(FUNCODEREF(Yobject_class),LITREF(lit_557),T24,ENVNUL,PNUL,sloc(1518));
  T25 = Yobject_class;
  VARSET(Yobject_class,T25);
  VARSET(Yclass_of,VARREF(Yobject_class));
  lit_559 = YPPsym((P)"@class-ancestors");
  lit_560 = YPPlist(1,YPPsym((P)"x"));
  T26 = YPsig(LITREF(lit_560),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOclass_ancestors = YPmet(FUNCODEREF(YOclass_ancestors),LITREF(lit_559),T26,ENVNUL,PNUL,sloc(1520));
  T27 = YOclass_ancestors;
  VARSET(YOclass_ancestors,T27);
  lit_561 = YPPsym((P)"class-ordered-ancestors");
  lit_562 = YPPlist(1,YPPsym((P)"c"));
  lit_563 = YPPsym((P)"merge-lists");
  lit_564 = YPPlist(2,YPPsym((P)"partial-cpl"),YPPsym((P)"remaining-lists"));
  lit_565 = YPPsym((P)"candidate");
  lit_566 = YPPlist(1,YPPsym((P)"c"));
  lit_567 = YPPsym((P)"tail?");
  lit_568 = YPPlist(1,YPPsym((P)"l"));
  lit_569 = YPPsym((P)"candidate-at-head");
  lit_570 = YPPlist(1,YPPsym((P)"l"));
  lit_571 = YPPsym((P)"del-next");
  lit_572 = YPPlist(1,YPPsym((P)"l"));
  lit_573 = YPsb((P)"inconsistent precedence graph");
  T33 = YPsig(LITREF(lit_568),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tailQ_497 = YPmet(FUNCODEREF(fun_tailQ_497),LITREF(lit_567),T33,ENVNUL,PNUL,sloc(1562));
  T32 = YPsig(LITREF(lit_566),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_candidate_498 = YPmet(FUNCODEREF(fun_candidate_498),LITREF(lit_565),T32,ENVNUL,PNUL,sloc(1561));
  T31 = YPsig(LITREF(lit_570),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_candidate_at_head_499 = YPmet(FUNCODEREF(fun_candidate_at_head_499),LITREF(lit_569),T31,ENVNUL,PNUL,sloc(1564));
  T30 = YPsig(LITREF(lit_572),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_del_next_500 = YPmet(FUNCODEREF(fun_del_next_500),LITREF(lit_571),T30,ENVNUL,PNUL,sloc(1568));
  T29 = YPsig(LITREF(lit_564),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_merge_lists_501 = YPmet(FUNCODEREF(fun_merge_lists_501),LITREF(lit_563),T29,ENVNUL,PNUL,sloc(1555));
  T28 = YPsig(LITREF(lit_562),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLparentsG),Ynil);
  Yclass_ordered_ancestors = YPmet(FUNCODEREF(Yclass_ordered_ancestors),LITREF(lit_561),T28,ENVNUL,PNUL,sloc(1553));
  T34 = Yclass_ordered_ancestors;
  VARSET(Yclass_ordered_ancestors,T34);
  lit_574 = YPPsym((P)"@class-direct-props");
  lit_575 = YPPlist(1,YPPsym((P)"x"));
  T35 = YPsig(LITREF(lit_575),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOclass_direct_props = YPmet(FUNCODEREF(YOclass_direct_props),LITREF(lit_574),T35,ENVNUL,PNUL,sloc(1573));
  T36 = YOclass_direct_props;
  VARSET(YOclass_direct_props,T36);
  lit_576 = YPPsym((P)"class-ordered-props");
  lit_577 = YPPlist(1,YPPsym((P)"x"));
  T37 = YPsig(LITREF(lit_577),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLpropsG),Ynil);
  Yclass_ordered_props = YPmet(FUNCODEREF(Yclass_ordered_props),LITREF(lit_576),T37,ENVNUL,PNUL,sloc(1575));
  T38 = Yclass_ordered_props;
  VARSET(Yclass_ordered_props,T38);
  lit_578 = YPPsym((P)"del-class");
  lit_579 = YPPlist(1,YPPsym((P)"class"));
  T39 = YPsig(LITREF(lit_579),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Ydel_class = YPmet(FUNCODEREF(Ydel_class),LITREF(lit_578),T39,ENVNUL,PNUL,sloc(1582));
  T40 = Ydel_class;
  VARSET(Ydel_class,T40);
  VARSET(YTnext_class_idT,YPint((P)0));
  VARSET(YDmax_classes,YPint((P)500));
  lit_580 = YPPsym((P)"init-class");
  lit_581 = YPPlist(1,YPPsym((P)"x"));
  lit_582 = YPsb((P)"Too many classes %=");
  lit_583 = YPsb((P)"Need at least one parent in class definition");
  lit_584 = YPPlist(1,YPPsym((P)"parent"));
  lit_585 = YPPlist(1,YPPsym((P)"ancestor"));
  T43 = YPsig(LITREF(lit_584),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_506 = YPmet(FUNCODEREF(fun_506),YPfalse,T43,ENVNUL,PNUL,sloc(1599));
  T42 = YPsig(LITREF(lit_585),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_507 = YPmet(FUNCODEREF(fun_507),YPfalse,T42,ENVNUL,PNUL,sloc(1606));
  T41 = YPsig(LITREF(lit_581),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yinit_class = YPmet(FUNCODEREF(Yinit_class),LITREF(lit_580),T41,ENVNUL,PNUL,sloc(1591));
  T44 = Yinit_class;
  VARSET(Yinit_class,T44);
  lit_586 = YPPsym((P)"fab-class");
  lit_587 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"parents"));
  T45 = YPsig(LITREF(lit_587),YPPlist(2,VARREF(YLsymG),VARREF(YLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  Yfab_class = YPmet(FUNCODEREF(Yfab_class),LITREF(lit_586),T45,ENVNUL,PNUL,sloc(1611));
  T46 = Yfab_class;
  VARSET(Yfab_class,T46);
  lit_588 = YPPsym((P)"refab-class");
  lit_589 = YPPlist(2,YPPsym((P)"old-class"),YPPsym((P)"parents"));
  T47 = YPsig(LITREF(lit_589),YPPlist(2,VARREF(YLclassG),VARREF(YLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  Yrefab_class = YPmet(FUNCODEREF(Yrefab_class),LITREF(lit_588),T47,ENVNUL,PNUL,sloc(1616));
  T48 = Yrefab_class;
  VARSET(Yrefab_class,T48);
  lit_590 = YPPsym((P)"object-props");
  lit_591 = YPPlist(1,YPPsym((P)"x"));
  T49 = YPsig(LITREF(lit_591),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_props = YPmet(FUNCODEREF(Yobject_props),LITREF(lit_590),T49,ENVNUL,PNUL,sloc(1631));
  T50 = Yobject_props;
  VARSET(Yobject_props,T50);
  lit_592 = YPPsym((P)"object-parents");
  lit_593 = YPPlist(1,YPPsym((P)"x"));
  T51 = YPsig(LITREF(lit_593),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_parents = YPmet(FUNCODEREF(Yobject_parents),LITREF(lit_592),T51,ENVNUL,PNUL,sloc(1632));
  T52 = Yobject_parents;
  VARSET(Yobject_parents,T52);
  VARSET(YDgetter_not_found,YPint((P)-1));
  lit_594 = YPPsym((P)"ensure-fresh-object");
  lit_595 = YPPlist(1,YPPsym((P)"x"));
  T53 = YPsig(LITREF(lit_595),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yensure_fresh_object = YPmet(FUNCODEREF(Yensure_fresh_object),LITREF(lit_594),T53,ENVNUL,PNUL,sloc(1640));
  T54 = Yensure_fresh_object;
  VARSET(Yensure_fresh_object,T54);
  lit_596 = YPPsym((P)"prop-offset");
  lit_597 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  lit_598 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"props"));
  T56 = YPsig(LITREF(lit_598),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_514 = YPmet(FUNCODEREF(fun_loop_514),LITREF(lit_7),T56,ENVNUL,PNUL,sloc(1645));
  T55 = YPsig(LITREF(lit_597),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  Yprop_offset = YPmet(FUNCODEREF(Yprop_offset),LITREF(lit_596),T55,ENVNUL,PNUL,sloc(1644));
  T57 = Yprop_offset;
  VARSET(Yprop_offset,T57);
  VARSET(YTreport_prop_unbound_errorsQT,YPtrue);
  lit_599 = YPPsym((P)"%prop-unbound-error");
  lit_600 = YPPlist(1,YPPsym((P)"x"));
  T58 = YPsig(LITREF(lit_600),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPprop_unbound_error = YPmet(FUNCODEREF(YPprop_unbound_error),LITREF(lit_599),T58,ENVNUL,PNUL,sloc(1654));
  T59 = YPprop_unbound_error;
  VARSET(YPprop_unbound_error,T59);
  lit_601 = YPPsym((P)"prop-value");
  lit_602 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T60 = YPsig(LITREF(lit_602),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yprop_value = YPmet(FUNCODEREF(Yprop_value),LITREF(lit_601),T60,ENVNUL,PNUL,sloc(1659));
  T61 = Yprop_value;
  VARSET(Yprop_value,T61);
  lit_603 = YPPsym((P)"prop-bound?");
  lit_604 = YPPlist(2,YPPsym((P)"object"),YPPsym((P)"getter"));
  T64 = YPsig(LITREF(lit_604),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T63 = Yprop_boundQ = YPmet(FUNCODEREF(Yprop_boundQ),LITREF(lit_603),T64,ENVNUL,PNUL,sloc(1666));
  T66 = Yprop_boundQ;
  T65 = VARSET(Yprop_boundQ,T66);
  T62 = T65;
  return T62;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238;
DEFCREGS();
loop:
  lit_605 = YPPsym((P)"prop-value-setter");
  lit_606 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"object"),YPPsym((P)"getter"));
  lit_607 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"props"));
  T1 = YPsig(LITREF(lit_607),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_519 = YPmet(FUNCODEREF(fun_loop_519),LITREF(lit_7),T1,ENVNUL,PNUL,sloc(1675));
  T0 = YPsig(LITREF(lit_606),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yprop_value_setter = YPmet(FUNCODEREF(Yprop_value_setter),LITREF(lit_605),T0,ENVNUL,PNUL,sloc(1673));
  T2 = Yprop_value_setter;
  VARSET(Yprop_value_setter,T2);
  lit_608 = YPPsym((P)"find-getter");
  lit_609 = YPPlist(2,YPPsym((P)"owner"),YPPsym((P)"getter"));
  lit_610 = YPPlist(1,YPPsym((P)"mets"));
  T4 = YPsig(LITREF(lit_610),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_521 = YPmet(FUNCODEREF(fun_loop_521),LITREF(lit_7),T4,ENVNUL,PNUL,sloc(1686));
  T3 = YPsig(LITREF(lit_609),YPPlist(2,VARREF(YLclassG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLmetG),Ynil);
  Yfind_getter = YPmet(FUNCODEREF(Yfind_getter),LITREF(lit_608),T3,ENVNUL,PNUL,sloc(1685));
  T5 = Yfind_getter;
  VARSET(Yfind_getter,T5);
  lit_611 = YPPsym((P)"find-setter");
  lit_612 = YPPlist(3,YPPsym((P)"owner"),YPPsym((P)"type"),YPPsym((P)"zetter"));
  lit_613 = YPPlist(1,YPPsym((P)"mets"));
  T7 = YPsig(LITREF(lit_613),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_523 = YPmet(FUNCODEREF(fun_loop_523),LITREF(lit_7),T7,ENVNUL,PNUL,sloc(1695));
  T6 = YPsig(LITREF(lit_612),YPPlist(3,VARREF(YLclassG),VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)3),VARREF(YLmetG),Ynil);
  Yfind_setter = YPmet(FUNCODEREF(Yfind_setter),LITREF(lit_611),T6,ENVNUL,PNUL,sloc(1694));
  T8 = Yfind_setter;
  VARSET(Yfind_setter,T8);
  lit_614 = YPPsym((P)"forward-class");
  lit_615 = YPPlist(1,YPPsym((P)"old-class"));
  lit_616 = YPPlist(1,YPPsym((P)"g"));
  T10 = YPsig(LITREF(lit_616),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_525 = YPmet(FUNCODEREF(fun_525),YPfalse,T10,ENVNUL,PNUL,sloc(1709));
  T9 = YPsig(LITREF(lit_615),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yforward_class = YPmet(FUNCODEREF(Yforward_class),LITREF(lit_614),T9,ENVNUL,PNUL,sloc(1707));
  T11 = Yforward_class;
  VARSET(Yforward_class,T11);
  lit_617 = YPPsym((P)"clone");
  lit_618 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPsig(LITREF(lit_618),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yclone = YPmet(FUNCODEREF(Yclone),LITREF(lit_617),T12,ENVNUL,PNUL,sloc(1712));
  T13 = Yclone;
  VARSET(Yclone,T13);
  lit_619 = YPPsym((P)"@do-descendents");
  lit_620 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  lit_621 = YPPsym((P)"visit");
  lit_622 = YPPlist(1,YPPsym((P)"x"));
  T15 = YPsig(LITREF(lit_622),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_visit_528 = YPmet(FUNCODEREF(fun_visit_528),LITREF(lit_621),T15,ENVNUL,PNUL,sloc(1716));
  T14 = YPsig(LITREF(lit_620),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo_descendents = YPmet(FUNCODEREF(YOdo_descendents),LITREF(lit_619),T14,ENVNUL,PNUL,sloc(1714));
  T16 = YOdo_descendents;
  VARSET(YOdo_descendents,T16);
  lit_623 = YPPsym((P)"finalize-props");
  lit_624 = YPPlist(1,YPPsym((P)"class"));
  lit_625 = YPPlist(1,YPPsym((P)"prop"));
  T18 = YPsig(LITREF(lit_625),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_530 = YPmet(FUNCODEREF(fun_530),YPfalse,T18,ENVNUL,PNUL,sloc(1726));
  T17 = YPsig(LITREF(lit_624),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfinalize_props = YPmet(FUNCODEREF(Yfinalize_props),LITREF(lit_623),T17,ENVNUL,PNUL,sloc(1722));
  T19 = Yfinalize_props;
  VARSET(Yfinalize_props,T19);
  lit_626 = YPPsym((P)"%prop");
  lit_627 = YPPlist(5,YPPsym((P)"owner"),YPPsym((P)"getter"),YPPsym((P)"setter"),YPPsym((P)"type"),YPPsym((P)"init"));
  T20 = YPsig(LITREF(lit_627),YPPlist(5,VARREF(YLclassG),VARREF(YLgenG),VARREF(YLgenG),VARREF(YLtypeG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YPprop = YPmet(FUNCODEREF(YPprop),LITREF(lit_626),T20,ENVNUL,PNUL,sloc(1729));
  T21 = YPprop;
  VARSET(YPprop,T21);
  lit_628 = YPPsym((P)"update-instance-for-changed-class");
  lit_629 = YPPlist(1,YPPsym((P)"object"));
  T22 = YPsig(LITREF(lit_629),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yupdate_instance_for_changed_class = YPmet(FUNCODEREF(Yupdate_instance_for_changed_class),LITREF(lit_628),T22,ENVNUL,PNUL,sloc(1767));
  T23 = Yupdate_instance_for_changed_class;
  VARSET(Yupdate_instance_for_changed_class,T23);
  VARSET(Yadd_prop,VARREF(YPprop));
  lit_630 = YPPsym((P)"patch-early-classes");
  T24 = YPsig(LITREF(lit_416),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ypatch_early_classes = YPmet(FUNCODEREF(Ypatch_early_classes),LITREF(lit_630),T24,ENVNUL,PNUL,sloc(1773));
  T25 = Ypatch_early_classes;
  VARSET(Ypatch_early_classes,T25);
  XCALL0(1,VARREF(Ypatch_early_classes));
  lit_631 = YPPsym((P)"fab-gen");
  lit_632 = YPPlist(6,YPPsym((P)"name"),YPPsym((P)"names"),YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"val"),YPPsym((P)"mets"));
  T26 = YPsig(LITREF(lit_632),YPPlist(6,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLlogG),VARREF(YLtypeG),VARREF(YLlstG)),YPfalse,YPint((P)6),VARREF(YLgenG),Ynil);
  Yfab_gen = YPmet(FUNCODEREF(Yfab_gen),LITREF(lit_631),T26,ENVNUL,PNUL,sloc(1782));
  T27 = Yfab_gen;
  VARSET(Yfab_gen,T27);
  lit_633 = YPPsym((P)"gen-from-met");
  lit_634 = YPPlist(1,YPPsym((P)"x"));
  lit_635 = YPPlist(1,YPPsym((P)"x"));
  T29 = YPsig(LITREF(lit_635),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_537 = YPmet(FUNCODEREF(fun_537),YPfalse,T29,ENVNUL,PNUL,sloc(1797));
  T28 = YPsig(LITREF(lit_634),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLgenG),Ynil);
  Ygen_from_met = YPmet(FUNCODEREF(Ygen_from_met),LITREF(lit_633),T28,ENVNUL,PNUL,sloc(1796));
  T30 = Ygen_from_met;
  VARSET(Ygen_from_met,T30);
  lit_636 = YPPsym((P)"%define-method");
  lit_637 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T31 = YPsig(LITREF(lit_637),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  YPdefine_method = YPmet(FUNCODEREF(YPdefine_method),LITREF(lit_636),T31,ENVNUL,PNUL,sloc(1802));
  T32 = YPdefine_method;
  VARSET(YPdefine_method,T32);
  lit_638 = YPPsym((P)"unexec");
  lit_639 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"fun"));
  T33 = YPsig(LITREF(lit_639),YPPlist(2,VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yunexec = YPmet(FUNCODEREF(Yunexec),LITREF(lit_638),T33,ENVNUL,PNUL,sloc(1805));
  T34 = Yunexec;
  VARSET(Yunexec,T34);
  lit_640 = YPPsym((P)"new");
  lit_641 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T36 = YPsig(LITREF(lit_641),YPPlist(1,VARREF(YLtypeG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T35 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_640),T36,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ynew,T35);
  lit_642 = YPPlist(1,YPPsym((P)"i"));
  T37 = YPsig(LITREF(lit_642),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_541 = YPmet(FUNCODEREF(fun_loop_541),LITREF(lit_7),T37,ENVNUL,PNUL,sloc(1814));
  lit_643 = YPPsym((P)"@new");
  lit_644 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T38 = YPsig(LITREF(lit_644),YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YOnew = YPmet(FUNCODEREF(YOnew),LITREF(lit_643),T38,ENVNUL,PNUL,sloc(1821));
  T39 = YOnew;
  VARSET(YOnew,T39);
  lit_645 = YPPlist(2,YPPsym((P)"parent"),YPPsym((P)"inits"));
  T40 = YPsig(LITREF(lit_645),YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_544 = YPmet(FUNCODEREF(fun_new_544),LITREF(lit_640),T40,ENVNUL,PNUL,sloc(1824));
  T43 = BOUNDP(Ynew);
  if (T43 != YPfalse) {
    T42 = VARREF(Ynew);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_new_544;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(Ynew,T41);
  lit_646 = YPPsym((P)"subtype?");
  lit_647 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T46 = YPsig(LITREF(lit_647),YPPlist(2,VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T45 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_646),T46,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YsubtypeQ,T45);
  lit_648 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_649 = YPPlist(1,YPPsym((P)"t"));
  T48 = YPsig(LITREF(lit_649),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_545 = YPmet(FUNCODEREF(fun_545),YPfalse,T48,ENVNUL,PNUL,sloc(1833));
  T47 = YPsig(LITREF(lit_648),YPPlist(2,VARREF(YLunionG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_546 = YPmet(FUNCODEREF(fun_subtypeQ_546),LITREF(lit_646),T47,ENVNUL,PNUL,sloc(1832));
  T51 = BOUNDP(YsubtypeQ);
  if (T51 != YPfalse) {
    T50 = VARREF(YsubtypeQ);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_subtypeQ_546;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YsubtypeQ,T49);
  lit_650 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_651 = YPPlist(1,YPPsym((P)"t"));
  T54 = YPsig(LITREF(lit_651),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_547 = YPmet(FUNCODEREF(fun_547),YPfalse,T54,ENVNUL,PNUL,sloc(1835));
  T53 = YPsig(LITREF(lit_650),YPPlist(2,VARREF(YLtypeG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_548 = YPmet(FUNCODEREF(fun_subtypeQ_548),LITREF(lit_646),T53,ENVNUL,PNUL,sloc(1834));
  T57 = BOUNDP(YsubtypeQ);
  if (T57 != YPfalse) {
    T56 = VARREF(YsubtypeQ);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_subtypeQ_548;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YsubtypeQ,T55);
  lit_652 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  lit_653 = YPPlist(1,YPPsym((P)"t"));
  T60 = YPsig(LITREF(lit_653),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_549 = YPmet(FUNCODEREF(fun_549),YPfalse,T60,ENVNUL,PNUL,sloc(1838));
  T59 = YPsig(LITREF(lit_652),YPPlist(2,VARREF(YLunionG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_550 = YPmet(FUNCODEREF(fun_subtypeQ_550),LITREF(lit_646),T59,ENVNUL,PNUL,sloc(1837));
  T63 = BOUNDP(YsubtypeQ);
  if (T63 != YPfalse) {
    T62 = VARREF(YsubtypeQ);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_subtypeQ_550;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YsubtypeQ,T61);
  lit_654 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T65 = YPsig(LITREF(lit_654),YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_551 = YPmet(FUNCODEREF(fun_subtypeQ_551),LITREF(lit_646),T65,ENVNUL,PNUL,sloc(1840));
  T68 = BOUNDP(YsubtypeQ);
  if (T68 != YPfalse) {
    T67 = VARREF(YsubtypeQ);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_subtypeQ_551;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YsubtypeQ,T66);
  lit_655 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T70 = YPsig(LITREF(lit_655),YPPlist(2,VARREF(YLsingletonG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_552 = YPmet(FUNCODEREF(fun_subtypeQ_552),LITREF(lit_646),T70,ENVNUL,PNUL,sloc(1842));
  T73 = BOUNDP(YsubtypeQ);
  if (T73 != YPfalse) {
    T72 = VARREF(YsubtypeQ);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_subtypeQ_552;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YsubtypeQ,T71);
  lit_656 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T75 = YPsig(LITREF(lit_656),YPPlist(2,VARREF(YLsubclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_553 = YPmet(FUNCODEREF(fun_subtypeQ_553),LITREF(lit_646),T75,ENVNUL,PNUL,sloc(1844));
  T78 = BOUNDP(YsubtypeQ);
  if (T78 != YPfalse) {
    T77 = VARREF(YsubtypeQ);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_subtypeQ_553;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YsubtypeQ,T76);
  lit_657 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T80 = YPsig(LITREF(lit_657),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_554 = YPmet(FUNCODEREF(fun_subtypeQ_554),LITREF(lit_646),T80,ENVNUL,PNUL,sloc(1847));
  T83 = BOUNDP(YsubtypeQ);
  if (T83 != YPfalse) {
    T82 = VARREF(YsubtypeQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_subtypeQ_554;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YsubtypeQ,T81);
  lit_658 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T85 = YPsig(LITREF(lit_658),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_555 = YPmet(FUNCODEREF(fun_subtypeQ_555),LITREF(lit_646),T85,ENVNUL,PNUL,sloc(1849));
  T88 = BOUNDP(YsubtypeQ);
  if (T88 != YPfalse) {
    T87 = VARREF(YsubtypeQ);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_subtypeQ_555;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YsubtypeQ,T86);
  lit_659 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T90 = YPsig(LITREF(lit_659),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_556 = YPmet(FUNCODEREF(fun_subtypeQ_556),LITREF(lit_646),T90,ENVNUL,PNUL,sloc(1851));
  T93 = BOUNDP(YsubtypeQ);
  if (T93 != YPfalse) {
    T92 = VARREF(YsubtypeQ);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_subtypeQ_556;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YsubtypeQ,T91);
  lit_660 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T95 = YPsig(LITREF(lit_660),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_557 = YPmet(FUNCODEREF(fun_subtypeQ_557),LITREF(lit_646),T95,ENVNUL,PNUL,sloc(1854));
  T98 = BOUNDP(YsubtypeQ);
  if (T98 != YPfalse) {
    T97 = VARREF(YsubtypeQ);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_subtypeQ_557;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YsubtypeQ,T96);
  lit_661 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T100 = YPsig(LITREF(lit_661),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_558 = YPmet(FUNCODEREF(fun_subtypeQ_558),LITREF(lit_646),T100,ENVNUL,PNUL,sloc(1856));
  T103 = BOUNDP(YsubtypeQ);
  if (T103 != YPfalse) {
    T102 = VARREF(YsubtypeQ);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_subtypeQ_558;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YsubtypeQ,T101);
  lit_662 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T105 = YPsig(LITREF(lit_662),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_559 = YPmet(FUNCODEREF(fun_subtypeQ_559),LITREF(lit_646),T105,ENVNUL,PNUL,sloc(1858));
  T108 = BOUNDP(YsubtypeQ);
  if (T108 != YPfalse) {
    T107 = VARREF(YsubtypeQ);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_subtypeQ_559;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YsubtypeQ,T106);
  lit_663 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T110 = YPsig(LITREF(lit_663),YPPlist(2,VARREF(YLproductG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_560 = YPmet(FUNCODEREF(fun_subtypeQ_560),LITREF(lit_646),T110,ENVNUL,PNUL,sloc(1861));
  T113 = BOUNDP(YsubtypeQ);
  if (T113 != YPfalse) {
    T112 = VARREF(YsubtypeQ);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_subtypeQ_560;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YsubtypeQ,T111);
  lit_664 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T115 = YPsig(LITREF(lit_664),YPPlist(2,VARREF(YLtypeG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_561 = YPmet(FUNCODEREF(fun_subtypeQ_561),LITREF(lit_646),T115,ENVNUL,PNUL,sloc(1863));
  T118 = BOUNDP(YsubtypeQ);
  if (T118 != YPfalse) {
    T117 = VARREF(YsubtypeQ);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_subtypeQ_561;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YsubtypeQ,T116);
  lit_665 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T120 = YPsig(LITREF(lit_665),YPPlist(2,VARREF(YLproductG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_562 = YPmet(FUNCODEREF(fun_subtypeQ_562),LITREF(lit_646),T120,ENVNUL,PNUL,sloc(1865));
  T123 = BOUNDP(YsubtypeQ);
  if (T123 != YPfalse) {
    T122 = VARREF(YsubtypeQ);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_subtypeQ_562;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YsubtypeQ,T121);
  lit_666 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T125 = YPsig(LITREF(lit_666),YPPlist(2,VARREF(YLproductG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_563 = YPmet(FUNCODEREF(fun_subtypeQ_563),LITREF(lit_646),T125,ENVNUL,PNUL,sloc(1870));
  T128 = BOUNDP(YsubtypeQ);
  if (T128 != YPfalse) {
    T127 = VARREF(YsubtypeQ);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_subtypeQ_563;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YsubtypeQ,T126);
  lit_667 = YPPsym((P)"isa?");
  lit_668 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"t"));
  T131 = YPsig(LITREF(lit_668),YPPlist(2,VARREF(YLanyG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T130 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_667),T131,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YisaQ,T130);
  lit_669 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T132 = YPsig(LITREF(lit_669),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_564 = YPmet(FUNCODEREF(fun_isaQ_564),LITREF(lit_667),T132,ENVNUL,PNUL,sloc(1877));
  T135 = BOUNDP(YisaQ);
  if (T135 != YPfalse) {
    T134 = VARREF(YisaQ);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_isaQ_564;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YisaQ,T133);
  lit_670 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T137 = YPsig(LITREF(lit_670),YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_565 = YPmet(FUNCODEREF(fun_isaQ_565),LITREF(lit_667),T137,ENVNUL,PNUL,sloc(1879));
  T140 = BOUNDP(YisaQ);
  if (T140 != YPfalse) {
    T139 = VARREF(YisaQ);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_isaQ_565;
  T138 = XCALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YisaQ,T138);
  lit_671 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T142 = YPsig(LITREF(lit_671),YPPlist(2,VARREF(YLanyG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_566 = YPmet(FUNCODEREF(fun_isaQ_566),LITREF(lit_667),T142,ENVNUL,PNUL,sloc(1881));
  T145 = BOUNDP(YisaQ);
  if (T145 != YPfalse) {
    T144 = VARREF(YisaQ);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_isaQ_566;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YisaQ,T143);
  lit_672 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"u"));
  lit_673 = YPPlist(1,YPPsym((P)"t"));
  T148 = YPsig(LITREF(lit_673),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_567 = YPmet(FUNCODEREF(fun_567),YPfalse,T148,ENVNUL,PNUL,sloc(1885));
  T147 = YPsig(LITREF(lit_672),YPPlist(2,VARREF(YLanyG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_568 = YPmet(FUNCODEREF(fun_isaQ_568),LITREF(lit_667),T147,ENVNUL,PNUL,sloc(1884));
  T151 = BOUNDP(YisaQ);
  if (T151 != YPfalse) {
    T150 = VARREF(YisaQ);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_isaQ_568;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YisaQ,T149);
  lit_674 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"t"));
  T153 = YPsig(LITREF(lit_674),YPPlist(2,VARREF(YLanyG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_569 = YPmet(FUNCODEREF(fun_isaQ_569),LITREF(lit_667),T153,ENVNUL,PNUL,sloc(1886));
  T156 = BOUNDP(YisaQ);
  if (T156 != YPfalse) {
    T155 = VARREF(YisaQ);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_isaQ_569;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YisaQ,T154);
  lit_675 = YPPsym((P)"order-specs");
  lit_676 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T160 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T159 = YPsig(LITREF(lit_676),YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T160,Ynil);
  T158 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_675),T159,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yorder_specs,T158);
  lit_677 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T162 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T161 = YPsig(LITREF(lit_677),YPPlist(3,VARREF(YLsingletonG),VARREF(YLsingletonG),VARREF(YLanyG)),YPfalse,YPint((P)3),T162,Ynil);
  fun_order_specs_570 = YPmet(FUNCODEREF(fun_order_specs_570),LITREF(lit_675),T161,ENVNUL,PNUL,sloc(1896));
  T165 = BOUNDP(Yorder_specs);
  if (T165 != YPfalse) {
    T164 = VARREF(Yorder_specs);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_order_specs_570;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(Yorder_specs,T163);
  lit_678 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T168 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T167 = YPsig(LITREF(lit_678),YPPlist(3,VARREF(YLsingletonG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T168,Ynil);
  fun_order_specs_571 = YPmet(FUNCODEREF(fun_order_specs_571),LITREF(lit_675),T167,ENVNUL,PNUL,sloc(1900));
  T171 = BOUNDP(Yorder_specs);
  if (T171 != YPfalse) {
    T170 = VARREF(Yorder_specs);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_order_specs_571;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(Yorder_specs,T169);
  lit_679 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T174 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T173 = YPsig(LITREF(lit_679),YPPlist(3,VARREF(YLsubclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T174,Ynil);
  fun_order_specs_572 = YPmet(FUNCODEREF(fun_order_specs_572),LITREF(lit_675),T173,ENVNUL,PNUL,sloc(1904));
  T177 = BOUNDP(Yorder_specs);
  if (T177 != YPfalse) {
    T176 = VARREF(Yorder_specs);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_order_specs_572;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(Yorder_specs,T175);
  lit_680 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T180 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T179 = YPsig(LITREF(lit_680),YPPlist(3,VARREF(YLsubclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T180,Ynil);
  fun_order_specs_573 = YPmet(FUNCODEREF(fun_order_specs_573),LITREF(lit_675),T179,ENVNUL,PNUL,sloc(1913));
  T183 = BOUNDP(Yorder_specs);
  if (T183 != YPfalse) {
    T182 = VARREF(Yorder_specs);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_order_specs_573;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(Yorder_specs,T181);
  lit_681 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T186 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T185 = YPsig(LITREF(lit_681),YPPlist(3,VARREF(YLclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T186,Ynil);
  fun_order_specs_574 = YPmet(FUNCODEREF(fun_order_specs_574),LITREF(lit_675),T185,ENVNUL,PNUL,sloc(1922));
  T189 = BOUNDP(Yorder_specs);
  if (T189 != YPfalse) {
    T188 = VARREF(Yorder_specs);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_order_specs_574;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(Yorder_specs,T187);
  lit_682 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T192 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T191 = YPsig(LITREF(lit_682),YPPlist(3,VARREF(YLclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T192,Ynil);
  fun_order_specs_575 = YPmet(FUNCODEREF(fun_order_specs_575),LITREF(lit_675),T191,ENVNUL,PNUL,sloc(1931));
  T195 = BOUNDP(Yorder_specs);
  if (T195 != YPfalse) {
    T194 = VARREF(Yorder_specs);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_order_specs_575;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(Yorder_specs,T193);
  lit_683 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T198 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T197 = YPsig(LITREF(lit_683),YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T198,Ynil);
  fun_order_specs_576 = YPmet(FUNCODEREF(fun_order_specs_576),LITREF(lit_675),T197,ENVNUL,PNUL,sloc(1935));
  T201 = BOUNDP(Yorder_specs);
  if (T201 != YPfalse) {
    T200 = VARREF(Yorder_specs);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_order_specs_576;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(Yorder_specs,T199);
  lit_684 = YPPsym((P)"may-isa?");
  lit_685 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T205 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T204 = YPsig(LITREF(lit_685),YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),T205,Ynil);
  T203 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_684),T204,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ymay_isaQ,T203);
  lit_686 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T207 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T206 = YPsig(LITREF(lit_686),YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),T207,Ynil);
  fun_may_isaQ_577 = YPmet(FUNCODEREF(fun_may_isaQ_577),LITREF(lit_684),T206,ENVNUL,PNUL,sloc(1946));
  T210 = BOUNDP(Ymay_isaQ);
  if (T210 != YPfalse) {
    T209 = VARREF(Ymay_isaQ);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_may_isaQ_577;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(Ymay_isaQ,T208);
  lit_687 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T213 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T212 = YPsig(LITREF(lit_687),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),T213,Ynil);
  fun_may_isaQ_578 = YPmet(FUNCODEREF(fun_may_isaQ_578),LITREF(lit_684),T212,ENVNUL,PNUL,sloc(1948));
  T216 = BOUNDP(Ymay_isaQ);
  if (T216 != YPfalse) {
    T215 = VARREF(Ymay_isaQ);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_may_isaQ_578;
  T214 = XCALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(Ymay_isaQ,T214);
  lit_688 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T219 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T218 = YPsig(LITREF(lit_688),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),T219,Ynil);
  fun_may_isaQ_579 = YPmet(FUNCODEREF(fun_may_isaQ_579),LITREF(lit_684),T218,ENVNUL,PNUL,sloc(1950));
  T222 = BOUNDP(Ymay_isaQ);
  if (T222 != YPfalse) {
    T221 = VARREF(Ymay_isaQ);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_may_isaQ_579;
  T220 = XCALL2(1,VARREF(YPdefine_method),T221,T223);
  VARSET(Ymay_isaQ,T220);
  lit_689 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  lit_690 = YPPlist(3,YPPsym((P)"some?"),YPPsym((P)"all?"),YPPsym((P)"elts"));
  T226 = YPsig(LITREF(lit_690),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_580 = YPmet(FUNCODEREF(fun_loop_580),LITREF(lit_7),T226,ENVNUL,PNUL,sloc(1954));
  T225 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T224 = YPsig(LITREF(lit_689),YPPlist(2,VARREF(YLclassG),VARREF(YLunionG)),YPfalse,YPint((P)2),T225,Ynil);
  fun_may_isaQ_581 = YPmet(FUNCODEREF(fun_may_isaQ_581),LITREF(lit_684),T224,ENVNUL,PNUL,sloc(1953));
  T229 = BOUNDP(Ymay_isaQ);
  if (T229 != YPfalse) {
    T228 = VARREF(Ymay_isaQ);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_may_isaQ_581;
  T227 = XCALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(Ymay_isaQ,T227);
  lit_691 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  lit_692 = YPPlist(1,YPPsym((P)"t"));
  T233 = YPsig(LITREF(lit_692),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_582 = YPmet(FUNCODEREF(fun_582),YPfalse,T233,ENVNUL,PNUL,sloc(1963));
  T232 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T231 = YPsig(LITREF(lit_691),YPPlist(2,VARREF(YLclassG),VARREF(YLproductG)),YPfalse,YPint((P)2),T232,Ynil);
  fun_may_isaQ_583 = YPmet(FUNCODEREF(fun_may_isaQ_583),LITREF(lit_684),T231,ENVNUL,PNUL,sloc(1961));
  T236 = BOUNDP(Ymay_isaQ);
  if (T236 != YPfalse) {
    T235 = VARREF(Ymay_isaQ);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_may_isaQ_583;
  T234 = XCALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(Ymay_isaQ,T234);
  VARSET(YTboot_macro_module_namesT,Ynil);
  VARSET(YTboot_macro_namesT,Ynil);
  VARSET(YTboot_macro_expandersT,Ynil);
  VARSET(YTmacros_okQT,YPfalse);
  T238 = YPfalse;
  return T238;
}

P Y___main_14___() {
  P T0;
DEFCREGS();
loop:
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
  {"%head-setter", PVAR, NULL},
  {"%class-mets-setter", PVAR, NULL},
  {"@union-spec?", CVAR, &YOunion_specQ},
  {"%fi2f", PVAR, NULL},
  {"class-parents-setter", CVAR, &Yclass_parents_setter},
  {"type-object", CVAR, &Ytype_object},
  {"gen-lookup", PVAR, NULL},
  {"src-loc-line-setter", CVAR, &Ysrc_loc_line_setter},
  {"%class-props", PVAR, NULL},
  {"<sym>", CVAR, &YLsymG},
  {"%gen-cache", PVAR, NULL},
  {"sig-specs-setter", CVAR, &Ysig_specs_setter},
  {"forward-class", CVAR, &Yforward_class},
  {"arity-error", CVAR, &Yarity_error},
  {"%define-primitives", PVAR, NULL},
  {"%define-repeated-structure", PVAR, NULL},
  {"%collect-direct-props", CVAR, &YPcollect_direct_props},
  {"file-opening-error", CVAR, &Yfile_opening_error},
  {"prop-type-setter", CVAR, &Yprop_type_setter},
  {"%gen-code-setter", PVAR, NULL},
  {"object-parents", CVAR, &Yobject_parents},
  {"%class-children-setter", PVAR, NULL},
  {"%sig", PVAR, NULL},
  {"%sig-val-setter", PVAR, NULL},
  {"fun-specs-setter", CVAR, &Yfun_specs_setter},
  {"*boot-macro-expanders*", CVAR, &YTboot_macro_expandersT},
  {"%with-monitor", CVAR, &YPwith_monitor},
  {"%%prop", PVAR, NULL},
  {"%gen-cache-arg-pos-setter", PVAR, NULL},
  {"@do", CVAR, &YOdo},
  {"%%sfab", PVAR, NULL},
  {"%head", PVAR, NULL},
  {"%singleton", PVAR, NULL},
  {"%rep", PVAR, NULL},
  {"%finalize-props", PVAR, NULL},
  {"fun-congruent?", CVAR, &Yfun_congruentQ},
  {"%tup", PVAR, NULL},
  {"%fu", PVAR, NULL},
  {"%unlink-stack", PVAR, NULL},
  {"use/include", PVAR, NULL},
  {"@cat2", CVAR, &YOcat2},
  {"%relt-setter", PVAR, NULL},
  {"%src-loc-file", PVAR, NULL},
  {"%rep!", PVAR, NULL},
  {"class-parents", CVAR, &Yclass_parents},
  {"%opts-tup-tup", PVAR, NULL},
  {"$gen-cache-classes-offset", CVAR, &YDgen_cache_classes_offset},
  {"%loc", PVAR, NULL},
  {"src-loc-line", CVAR, &Ysrc_loc_line},
  {"%rnul", CVAR, &YPrnul},
  {"sig-specs", CVAR, &Ysig_specs},
  {"$getter-not-found", CVAR, &YDgetter_not_found},
  {"%met-prop-len", CVAR, &YPmet_prop_len},
  {"@subclass-spec?", CVAR, &YOsubclass_specQ},
  {"%pairize", PVAR, NULL},
  {"prop-type", CVAR, &Yprop_type},
  {"ord-app-mets*", CVAR, &Yord_app_metsT},
  {"def-object-class-accessor", PVAR, NULL},
  {"%time", PVAR, NULL},
  {"%prop-elt", PVAR, NULL},
  {"%fb", PVAR, NULL},
  {"fun-sig-setter", CVAR, &Yfun_sig_setter},
  {"%prop-init", PVAR, NULL},
  {"%fp-reg", PVAR, NULL},
  {"%dyn-var-val-setter", PVAR, NULL},
  {"%vm-box-val", PVAR, NULL},
  {"object-props", CVAR, &Yobject_props},
  {"%gen-cache-missable?", PVAR, NULL},
  {"may-isa?", CVAR, &Ymay_isaQ},
  {"class-forward-setter", CVAR, &Yclass_forward_setter},
  {"%class-type-cache", PVAR, NULL},
  {"%type-class", PVAR, NULL},
  {"ensure-singleton-cache", CVAR, &Yensure_singleton_cache},
  {"fun-specs", CVAR, &Yfun_specs},
  {"%untag", PVAR, NULL},
  {"%%apply", PVAR, NULL},
  {"$gen-cache-singletons-offset", CVAR, &YDgen_cache_singletons_offset},
  {"%iv", PVAR, NULL},
  {"gen-src-setter", CVAR, &Ygen_src_setter},
  {"<met>", CVAR, &YLmetG},
  {"%opts-count-setter", PVAR, NULL},
  {"fun", PVAR, NULL},
  {"%product", PVAR, NULL},
  {"%class-of", PVAR, NULL},
  {"%met-code", PVAR, NULL},
  {"%patch-early-generics", PVAR, NULL},
  {"%su", PVAR, NULL},
  {"%gen-cache-count", PVAR, NULL},
  {"@+", PVAR, NULL},
  {"product-elts-setter", CVAR, &Yproduct_elts_setter},
  {"syntax-error", CVAR, &Ysyntax_error},
  {"%gen-refs", PVAR, NULL},
  {"fun-sig", CVAR, &Yfun_sig},
  {"@tall2?", CVAR, &YOtall2Q},
  {"@cache-add", CVAR, &YOcache_add},
  {"@rev", CVAR, &YOrev},
  {"@singleton-spec?", CVAR, &YOsingleton_specQ},
  {"%class-gens-setter", PVAR, NULL},
  {"%gen-mets", PVAR, NULL},
  {"%fun-cache-setter", PVAR, NULL},
  {"tail-setter", CVAR, &Ytail_setter},
  {"class-forward", CVAR, &Yclass_forward},
  {"fun-same-met?", CVAR, &Yfun_same_metQ},
  {"%opts", PVAR, NULL},
  {"unexec", CVAR, &Yunexec},
  {"ct-also", PVAR, NULL},
  {"%object-class-setter", PVAR, NULL},
  {"%prop-getter-setter", PVAR, NULL},
  {"%define-structure-accessors", PVAR, NULL},
  {"%gen-refs-setter", PVAR, NULL},
  {"find-setter", CVAR, &Yfind_setter},
  {"mif", PVAR, NULL},
  {"%src-loc-line", PVAR, NULL},
  {"gen-src", CVAR, &Ygen_src},
  {"export", PVAR, NULL},
  {"class-props-setter", CVAR, &Yclass_props_setter},
  {"%i>>", PVAR, NULL},
  {"%false", CVAR, &YPfalse},
  {"nil", CVAR, &Ynil},
  {"%break", PVAR, NULL},
  {"%opts-tup-count-setter", PVAR, NULL},
  {"%tag-into", PVAR, NULL},
  {"@all2?", CVAR, &YOall2Q},
  {"fun-name", CVAR, &Yfun_name},
  {"%os-val", PVAR, NULL},
  {"%met-code-setter", PVAR, NULL},
  {"$max-classes", CVAR, &YDmax_classes},
  {"sig-val-setter", CVAR, &Ysig_val_setter},
  {"$missed-dispatch", CVAR, &YDmissed_dispatch},
  {"@empty?", PVAR, NULL},
  {"%fc", PVAR, NULL},
  {"<str>", CVAR, &YLstrG},
  {"@fun-mets", CVAR, &YOfun_mets},
  {"%pair", PVAR, NULL},
  {"%os-name", PVAR, NULL},
  {"tail", CVAR, &Ytail},
  {"%subclass", PVAR, NULL},
  {"<fun>", CVAR, &YLfunG},
  {"%lb", PVAR, NULL},
  {"%class-parents-setter", PVAR, NULL},
  {"class-ordered-ancestors", CVAR, &Yclass_ordered_ancestors},
  {"%gen-sig", PVAR, NULL},
  {"requires-singleton-prec", CVAR, &Yrequires_singleton_prec},
  {"%chr", PVAR, NULL},
  {"fun-names-setter", CVAR, &Yfun_names_setter},
  {"%met-sig", PVAR, NULL},
  {"---main-13---", PVAR, NULL},
  {"%str-eq?-loop", PVAR, NULL},
  {"gen-cache-arg-pos", CVAR, &Ygen_cache_arg_pos},
  {"ddv", PVAR, NULL},
  {"@pick", CVAR, &YOpick},
  {"%flo-bits", PVAR, NULL},
  {"%type-object-setter", PVAR, NULL},
  {"@class<", CVAR, &YOclassL},
  {"---main-0---", PVAR, NULL},
  {"%define-setter", PVAR, NULL},
  {"%do-stack-frames", PVAR, NULL},
  {"%ff", PVAR, NULL},
  {"<tup>", CVAR, &YLtupG},
  {"class-props", CVAR, &Yclass_props},
  {"%ft", PVAR, NULL},
  {"%fsinh", PVAR, NULL},
  {"%check-call-types", PVAR, NULL},
  {"%i<<", PVAR, NULL},
  {"$max-int", CVAR, &YDmax_int},
  {"refab-class", CVAR, &Yrefab_class},
  {"%i-", PVAR, NULL},
  {"%class-type-cache-setter", PVAR, NULL},
  {"%add-prop", CVAR, &YPadd_prop},
  {"sig-val", CVAR, &Ysig_val},
  {"%sig-unification-vars-setter", PVAR, NULL},
  {"%ready", PVAR, NULL},
  {"%fun-reg", PVAR, NULL},
  {"no-applicable-methods-error", CVAR, &Yno_applicable_methods_error},
  {"fab-sym", CVAR, &Yfab_sym},
  {"handler-info-message", CVAR, &Yhandler_info_message},
  {"class-of", CVAR, &Yclass_of},
  {"fun-src-setter", CVAR, &Yfun_src_setter},
  {"fun-spec", CVAR, &Yfun_spec},
  {"*boot-macro-module-names*", CVAR, &YTboot_macro_module_namesT},
  {"%define-method", CVAR, &YPdefine_method},
  {"%flog", PVAR, NULL},
  {"%cb", PVAR, NULL},
  {"<flat>", CVAR, &YLflatG},
  {"---main-1---", PVAR, NULL},
  {"%gen-mets-setter", PVAR, NULL},
  {"%im", PVAR, NULL},
  {"@telt-setter", PVAR, NULL},
  {"%src-loc-file-setter", PVAR, NULL},
  {"class-row-setter", CVAR, &Yclass_row_setter},
  {"%product-elts", PVAR, NULL},
  {"@class-ancestors", CVAR, &YOclass_ancestors},
  {"%lst", PVAR, NULL},
  {"%opts-tup", PVAR, NULL},
  {"@tany?", CVAR, &YOtanyQ},
  {"fun-names", CVAR, &Yfun_names},
  {"@mets-subclasses-at", CVAR, &YOmets_subclasses_at},
  {"@isa?", CVAR, &YOisaQ},
  {"<parents>", CVAR, &YLparentsG},
  {"method-accessor-offset", CVAR, &Ymethod_accessor_offset},
  {"%sp-reg-setter", PVAR, NULL},
  {"no-next-methods-error", CVAR, &Yno_next_methods_error},
  {"opts-tup-storage-setter", CVAR, &Yopts_tup_storage_setter},
  {"%c=", PVAR, NULL},
  {"%unexec", PVAR, NULL},
  {"$min-int", CVAR, &YDmin_int},
  {"%def-regs", PVAR, NULL},
  {"%opts-location", PVAR, NULL},
  {"gen-cache-arg-pos-setter", CVAR, &Ygen_cache_arg_pos_setter},
  {"%class-gens", PVAR, NULL},
  {"%vm-fun-env-elt-setter", PVAR, NULL},
  {"sig-nary?-setter", CVAR, &Ysig_naryQ_setter},
  {"%cu", PVAR, NULL},
  {"fun-code-setter", CVAR, &Yfun_code_setter},
  {"prop-setter-setter", CVAR, &Yprop_setter_setter},
  {"find-getter", CVAR, &Yfind_getter},
  {"%f+", PVAR, NULL},
  {"loc", PVAR, NULL},
  {"%prop-type-setter", PVAR, NULL},
  {"%puts", PVAR, NULL},
  {"fun-src", CVAR, &Yfun_src},
  {"%true", CVAR, &YPtrue},
  {"property-unbound-error", CVAR, &Yproperty_unbound_error},
  {"ensure-fresh-object", CVAR, &Yensure_fresh_object},
  {"%empty?", PVAR, NULL},
  {"%current-in-port", PVAR, NULL},
  {"%sig-unification-vars", PVAR, NULL},
  {"%define-tagged-structure", PVAR, NULL},
  {"%selt-setter", PVAR, NULL},
  {"class-name-setter", CVAR, &Yclass_name_setter},
  {"class-row", CVAR, &Yclass_row},
  {"*macros-ok?*", CVAR, &YTmacros_okQT},
  {"%update-instance-for-changed-class", PVAR, NULL},
  {"@lst", CVAR, &YOlst},
  {"%%sym", PVAR, NULL},
  {"sig-names-setter", CVAR, &Ysig_names_setter},
  {"@oelt-setter", PVAR, NULL},
  {"fun-nary?", CVAR, &Yfun_naryQ},
  {"<lst>", CVAR, &YLlstG},
  {"---main-11---", PVAR, NULL},
  {"%class-shells", PVAR, NULL},
  {"opts-tup-storage", CVAR, &Yopts_tup_storage},
  {"<sig>", CVAR, &YLsigG},
  {"object-class", CVAR, &Yobject_class},
  {"%c<", PVAR, NULL},
  {"@class-isa?", PVAR, NULL},
  {"class-direct-props-setter", CVAR, &Yclass_direct_props_setter},
  {"%opts-location-setter", PVAR, NULL},
  {"prop-setter", CVAR, &Yprop_setter},
  {"rep", PVAR, NULL},
  {"quote", PVAR, NULL},
  {"%fasin", PVAR, NULL},
  {"prop-value-at-setter", PVAR, NULL},
  {"fun-name-setter", CVAR, &Yfun_name_setter},
  {"gen-lookup-1", PVAR, NULL},
  {"@fun-mets-setter", CVAR, &YOfun_mets_setter},
  {"gen-from-met", CVAR, &Ygen_from_met},
  {"patch-early-classes", CVAR, &Ypatch_early_classes},
  {"%fapply", PVAR, NULL},
  {"property-type-error", CVAR, &Yproperty_type_error},
  {"%met-env", PVAR, NULL},
  {"<seq!>", CVAR, &YLseqXG},
  {"%gen-cache-singletons-setter", PVAR, NULL},
  {"%f<", PVAR, NULL},
  {"class-name", CVAR, &Yclass_name},
  {"@subclass?", PVAR, NULL},
  {"%open-out-file", PVAR, NULL},
  {"<env>", CVAR, &YLenvG},
  {"fab-class", CVAR, &Yfab_class},
  {"error", CVAR, &Yerror},
  {"dp", PVAR, NULL},
  {"$adr-tag", PVAR, NULL},
  {"%prop-getter", PVAR, NULL},
  {"@specd-args", CVAR, &YOspecd_args},
  {"%patch-early-generic", CVAR, &YPpatch_early_generic},
  {"%macro", PVAR, NULL},
  {"sig-names", CVAR, &Ysig_names},
  {"%sig-specs", PVAR, NULL},
  {"@gen-cache-classes-setter", CVAR, &YOgen_cache_classes_setter},
  {"@==", PVAR, NULL},
  {"%relt", PVAR, NULL},
  {"gen-add-met", CVAR, &Ygen_add_met},
  {"*report-prop-unbound-errors?*", CVAR, &YTreport_prop_unbound_errorsQT},
  {"@opts-as-lst", CVAR, &YOopts_as_lst},
  {"<seq.>", CVAR, &YLseqIG},
  {"---main-9---", PVAR, NULL},
  {"%gen-cache-singletons", PVAR, NULL},
  {"df", PVAR, NULL},
  {"%%rfab", PVAR, NULL},
  {"%add-met", CVAR, &YPadd_met},
  {"class-mets-setter", CVAR, &Yclass_mets_setter},
  {"use/mangle", PVAR, NULL},
  {"%fp-reg-setter", PVAR, NULL},
  {"%os-val-setter", PVAR, NULL},
  {"tup", CVAR, &Ytup},
  {"%i&", PVAR, NULL},
  {"%class-row-setter", PVAR, NULL},
  {"@not", PVAR, NULL},
  {"%force-out", PVAR, NULL},
  {"gen-refs-setter", CVAR, &Ygen_refs_setter},
  {"%to-tup", PVAR, NULL},
  {"%app-args", PVAR, NULL},
  {"use/export", PVAR, NULL},
  {"%symbols-ready?", CVAR, &YPsymbols_readyQ},
  {"%opts-tup-count", PVAR, NULL},
  {"update-instance-for-changed-class", CVAR, &Yupdate_instance_for_changed_class},
  {"%dispatch", CVAR, &YPdispatch},
  {"return-type-error", CVAR, &Yreturn_type_error},
  {"<seq>", CVAR, &YLseqG},
  {"%sig-nary?-setter", PVAR, NULL},
  {"union-elts-setter", CVAR, &Yunion_elts_setter},
  {"%process-module", PVAR, NULL},
  {"dg", PVAR, NULL},
  {"<gen-cache>", CVAR, &YLgen_cacheG},
  {"fun-unification-vars-setter", CVAR, &Yfun_unification_vars_setter},
  {"or", PVAR, NULL},
  {"%class-id", PVAR, NULL},
  {"product-elts", CVAR, &Yproduct_elts},
  {"%fun-cache", PVAR, NULL},
  {"%define-getter", PVAR, NULL},
  {"@type-equal?", CVAR, &YOtype_equalQ},
  {"@mets-singletons-at", CVAR, &YOmets_singletons_at},
  {"set", PVAR, NULL},
  {"%open-in-file", PVAR, NULL},
  {"@gen-cache-classes", CVAR, &YOgen_cache_classes},
  {"stack-overflow-error", CVAR, &Ystack_overflow_error},
  {"and", PVAR, NULL},
  {"@map", CVAR, &YOmap},
  {"@all?", CVAR, &YOallQ},
  {"head-setter", CVAR, &Yhead_setter},
  {"$tag-msk", PVAR, NULL},
  {"%current-out-port", PVAR, NULL},
  {"%rlen", PVAR, NULL},
  {"class-mets", CVAR, &Yclass_mets},
  {"---main-2---", PVAR, NULL},
  {"%sig-val", PVAR, NULL},
  {"<col!>", CVAR, &YLcolXG},
  {"lst", CVAR, &Ylst},
  {"gen-cache-missable?-setter", CVAR, &Ygen_cache_missableQ_setter},
  {"%str!", PVAR, NULL},
  {"isa?", CVAR, &YisaQ},
  {"%new", PVAR, NULL},
  {"%ib", PVAR, NULL},
  {"gen-refs", CVAR, &Ygen_refs},
  {"%class-forward-setter", PVAR, NULL},
  {"dc", PVAR, NULL},
  {"@tlen", PVAR, NULL},
  {"%met-src", PVAR, NULL},
  {"%symbols", CVAR, &YPsymbols},
  {"%gen-name", PVAR, NULL},
  {"%sig-arity-setter", PVAR, NULL},
  {"class-ancestors-setter", CVAR, &Yclass_ancestors_setter},
  {"%loc-off", PVAR, NULL},
  {"if", PVAR, NULL},
  {"%vm-box-val-setter", PVAR, NULL},
  {"union-elts", CVAR, &Yunion_elts},
  {"*early-classes*", CVAR, &YTearly_classesT},
  {"%early-dispatch", CVAR, &YPearly_dispatch},
  {"%it/", PVAR, NULL},
  {"new", CVAR, &Ynew},
  {"%elt", PVAR, NULL},
  {"sig-arity-setter", CVAR, &Ysig_arity_setter},
  {"%*start-running-at*", CVAR, &YPTstart_running_atT},
  {"%%macro", CVAR, &YPPmacro},
  {"%fab-dyn-var", PVAR, NULL},
  {"<col.>", CVAR, &YLcolIG},
  {"order-specs", CVAR, &Yorder_specs},
  {"%ft/", PVAR, NULL},
  {"%class-name", PVAR, NULL},
  {"prop-value-setter", CVAR, &Yprop_value_setter},
  {"%fixnum", PVAR, NULL},
  {"%met-refs", PVAR, NULL},
  {"head", CVAR, &Yhead},
  {"@singleton-isa?", PVAR, NULL},
  {"fun-unification-vars", CVAR, &Yfun_unification_vars},
  {"%vm-box-fab", PVAR, NULL},
  {"%ir", PVAR, NULL},
  {"%raw-call", PVAR, NULL},
  {"ct", PVAR, NULL},
  {"%class-ancestors", PVAR, NULL},
  {"%sym", PVAR, NULL},
  {"gen-cache-missable?", CVAR, &Ygen_cache_missableQ},
  {"%next-methods", PVAR, NULL},
  {"handler-info-arguments", CVAR, &Yhandler_info_arguments},
  {"@rev!", CVAR, &YOrevX},
  {"%dyn-var-val", PVAR, NULL},
  {"narity-error", CVAR, &Ynarity_error},
  {"%tu", PVAR, NULL},
  {"%untag-into", PVAR, NULL},
  {"choose-methods", CVAR, &Ychoose_methods},
  {"%fab-code-refs", PVAR, NULL},
  {"<col>", CVAR, &YLcolG},
  {"class-ancestors", CVAR, &Yclass_ancestors},
  {"%sig-nary?", PVAR, NULL},
  {"%define-hierarchy", PVAR, NULL},
  {"%class-prop-len", PVAR, NULL},
  {"%gen-code", PVAR, NULL},
  {"---main-3---", PVAR, NULL},
  {"---main-6---", PVAR, NULL},
  {"%sym-nam", PVAR, NULL},
  {"sig-arity", CVAR, &Ysig_arity},
  {"<mets>", CVAR, &YLmetsG},
  {"%*used-symbols-too-early*", CVAR, &YPTused_symbols_too_earlyT},
  {"%f-", PVAR, NULL},
  {"@gen-cache-singletons-setter", CVAR, &YOgen_cache_singletons_setter},
  {"%app-filename", PVAR, NULL},
  {"%ready?", PVAR, NULL},
  {"%i>>>", PVAR, NULL},
  {"<prop>", CVAR, &YLpropG},
  {"fun-refs-setter", CVAR, &Yfun_refs_setter},
  {"@fun-val", CVAR, &YOfun_val},
  {"%tail", PVAR, NULL},
  {"@lst-helper", CVAR, &YOlst_helper},
  {"<rep>", CVAR, &YLrepG},
  {"%allocate-stack", PVAR, NULL},
  {"class-id-setter", CVAR, &Yclass_id_setter},
  {"init-class", CVAR, &Yinit_class},
  {"cond", PVAR, NULL},
  {"@head", PVAR, NULL},
  {"%flo-dat", PVAR, NULL},
  {"%str", PVAR, NULL},
  {"%indirect-object?", PVAR, NULL},
  {"@mets-specs-at", CVAR, &YOmets_specs_at},
  {"*next-class-id*", CVAR, &YTnext_class_idT},
  {"let", PVAR, NULL},
  {"@any?", CVAR, &YOanyQ},
  {"nul-prop", CVAR, &Ynul_prop},
  {"opts-count-setter", CVAR, &Yopts_count_setter},
  {"%vm-with-exit", PVAR, NULL},
  {"@@empty?", CVAR, &YOOemptyQ},
  {"as-error", CVAR, &Yas_error},
  {"%flo-dat-setter", PVAR, NULL},
  {"*boot-macro-names*", CVAR, &YTboot_macro_namesT},
  {"argument-type-error", CVAR, &Yargument_type_error},
  {"<loc>", CVAR, &YLlocG},
  {"prop-getter-setter", CVAR, &Yprop_getter_setter},
  {"%define-structure", PVAR, NULL},
  {"prop-bound?", CVAR, &Yprop_boundQ},
  {"%prop-owner", PVAR, NULL},
  {"<product>", CVAR, &YLproductG},
  {"fun-refs", CVAR, &Yfun_refs},
  {"fun-val-setter", CVAR, &Yfun_val_setter},
  {"%peek", PVAR, NULL},
  {"%rev!", PVAR, NULL},
  {"macro-expand", PVAR, NULL},
  {"@gen-cache-singletons", CVAR, &YOgen_cache_singletons},
  {"class-prop-len-setter", CVAR, &Yclass_prop_len_setter},
  {"%prop-type", PVAR, NULL},
  {"%met-refs-setter", PVAR, NULL},
  {"class-id", CVAR, &Yclass_id},
  {"---main-4---", PVAR, NULL},
  {"@fun-arity", CVAR, &YOfun_arity},
  {"arithmetic-error", CVAR, &Yarithmetic_error},
  {"---main-12---", PVAR, NULL},
  {"%fcosh", PVAR, NULL},
  {"%type-object", PVAR, NULL},
  {"gen-cache-classes-setter", CVAR, &Ygen_cache_classes_setter},
  {"%invoke-debugger", PVAR, NULL},
  {"<flo>", CVAR, &YLfloG},
  {"range-error", CVAR, &Yrange_error},
  {"opts-count", CVAR, &Yopts_count},
  {"property-not-found-error", CVAR, &Yproperty_not_found_error},
  {"---main-7---", PVAR, NULL},
  {"del-class", CVAR, &Ydel_class},
  {"%%len", PVAR, NULL},
  {"%prop-elt-setter", PVAR, NULL},
  {"%fatan", PVAR, NULL},
  {"%prop-owner-setter", PVAR, NULL},
  {"%telt", PVAR, NULL},
  {"%cat2", PVAR, NULL},
  {"@tail-setter", PVAR, NULL},
  {"%met-src-setter", PVAR, NULL},
  {"@fab", CVAR, &YOfab},
  {"%opts-tup-tup-setter", PVAR, NULL},
  {"prop-getter", CVAR, &Yprop_getter},
  {"%class-forward", PVAR, NULL},
  {"not", CVAR, &Ynot},
  {"fab-gen", CVAR, &Yfab_gen},
  {"<union>", CVAR, &YLunionG},
  {"nul", CVAR, &Ynul},
  {"%tail-setter", PVAR, NULL},
  {"internal-error", CVAR, &Yinternal_error},
  {"%create-directory", PVAR, NULL},
  {"%prop", CVAR, &YPprop},
  {"%opts-count", PVAR, NULL},
  {"%class", PVAR, NULL},
  {"<fixnum>", CVAR, &YLfixnumG},
  {"%object-shells", PVAR, NULL},
  {"class-prop-len", CVAR, &Yclass_prop_len},
  {"%loc-off-setter", PVAR, NULL},
  {"gen-lookup-miss", CVAR, &Ygen_lookup_miss},
  {"@class-direct-props", CVAR, &YOclass_direct_props},
  {"class-ordered-props", CVAR, &Yclass_ordered_props},
  {"%tup!", PVAR, NULL},
  {"prop-offset", CVAR, &Yprop_offset},
  {"fun-val", CVAR, &Yfun_val},
  {"when", PVAR, NULL},
  {"%gen-cache-count-setter", PVAR, NULL},
  {"gen-cache-classes", CVAR, &Ygen_cache_classes},
  {"%put", PVAR, NULL},
  {"%close-in-port", PVAR, NULL},
  {"met-app?", CVAR, &Ymet_appQ},
  {"@prune-mets-by-type-at", CVAR, &YOprune_mets_by_type_at},
  {"@fun-nary?", CVAR, &YOfun_naryQ},
  {"dm", PVAR, NULL},
  {"order-mets", CVAR, &Yorder_mets},
  {"%met-name-setter", PVAR, NULL},
  {"dss", PVAR, NULL},
  {"<int>", CVAR, &YLintG},
  {"@telt", PVAR, NULL},
  {"unknown-function-error", CVAR, &Yunknown_function_error},
  {"@may-isa?", CVAR, &YOmay_isaQ},
  {"prop-value", CVAR, &Yprop_value},
  {"%object-of", PVAR, NULL},
  {"%newline", PVAR, NULL},
  {"%type-class-setter", PVAR, NULL},
  {"@fun-unification-vars", CVAR, &YOfun_unification_vars},
  {"<subclass>", CVAR, &YLsubclassG},
  {"fun-code", CVAR, &Yfun_code},
  {"class-gens-setter", CVAR, &Yclass_gens_setter},
  {"@order-specs-class", CVAR, &YOorder_specs_class},
  {"@order-specs", CVAR, &YOorder_specs},
  {"esc", PVAR, NULL},
  {"%gen-src", PVAR, NULL},
  {"@gen-cache-arg-pos-setter", CVAR, &YOgen_cache_arg_pos_setter},
  {"fun-cache-setter", CVAR, &Yfun_cache_setter},
  {"prop-bound-at?", PVAR, NULL},
  {"use", PVAR, NULL},
  {"subtype?", CVAR, &YsubtypeQ},
  {"%bb", PVAR, NULL},
  {"force-names-into-boot-module", PVAR, NULL},
  {"dv", PVAR, NULL},
  {"@del-dups", CVAR, &YOdel_dups},
  {"%snul", CVAR, &YPsnul},
  {"<num>", CVAR, &YLnumG},
  {"%met-env-setter", PVAR, NULL},
  {"%prop-init-setter", PVAR, NULL},
  {"%loc-val-setter", PVAR, NULL},
  {"@fold", CVAR, &YOfold},
  {"type-class-setter", CVAR, &Ytype_class_setter},
  {"%met-sig-setter", PVAR, NULL},
  {"%ru", PVAR, NULL},
  {"%tag", PVAR, NULL},
  {"@len", PVAR, NULL},
  {"---main-14---", PVAR, NULL},
  {"%sig-names-setter", PVAR, NULL},
  {"%met-name", PVAR, NULL},
  {"@fill", CVAR, &YOfill},
  {"type-error", CVAR, &Ytype_error},
  {"%eof-object", PVAR, NULL},
  {"@@==", CVAR, &YOOEE},
  {"src-loc-file-setter", CVAR, &Ysrc_loc_file_setter},
  {"%i<", PVAR, NULL},
  {"<singleton>", CVAR, &YLsingletonG},
  {"class-gens", CVAR, &Yclass_gens},
  {"@fun-specs", CVAR, &YOfun_specs},
  {"%vm-with-cleanup", PVAR, NULL},
  {"finalize-props", CVAR, &Yfinalize_props},
  {"%prop-unbound-error", CVAR, &YPprop_unbound_error},
  {"%class-row", PVAR, NULL},
  {"@head-setter", PVAR, NULL},
  {"%iu", PVAR, NULL},
  {"fun-cache", CVAR, &Yfun_cache},
  {"use/library", PVAR, NULL},
  {"fun-arity-setter", CVAR, &Yfun_arity_setter},
  {"%eq?", PVAR, NULL},
  {"%elt-setter", PVAR, NULL},
  {"%i+", PVAR, NULL},
  {"%trace-on", PVAR, NULL},
  {"ds", PVAR, NULL},
  {"%i=", PVAR, NULL},
  {"%compute-ancestors", PVAR, NULL},
  {"%str-eq?", PVAR, NULL},
  {"@gen-cache-arg-pos", CVAR, &YOgen_cache_arg_pos},
  {"type-class", CVAR, &Ytype_class},
  {"%define-accessor", PVAR, NULL},
  {"%prop-offset", CVAR, &YPprop_offset},
  {"%telt-setter", PVAR, NULL},
  {"%file-type", PVAR, NULL},
  {"prop-owner-setter", CVAR, &Yprop_owner_setter},
  {"%prop-dat-at", PVAR, NULL},
  {"<src-loc>", CVAR, &YLsrc_locG},
  {"prop-init-setter", CVAR, &Yprop_init_setter},
  {"@subtype?", CVAR, &YOsubtypeQ},
  {"bound?", PVAR, NULL},
  {"%class-props-setter", PVAR, NULL},
  {"src-loc-file", CVAR, &Ysrc_loc_file},
  {"%sym-nam-setter", PVAR, NULL},
  {"%met", PVAR, NULL},
  {"%fatan2", PVAR, NULL},
  {"add-prop", CVAR, &Yadd_prop},
  {"*restarts-ok?*", CVAR, &YTrestarts_okQT},
  {"ambiguous-method-error", CVAR, &Yambiguous_method_error},
  {"%sb", PVAR, NULL},
  {"@fun-names", CVAR, &YOfun_names},
  {"%gen-cache-classes-setter", PVAR, NULL},
  {"%i^", PVAR, NULL},
  {"%i?", PVAR, NULL},
  {"%gen-sig-setter", PVAR, NULL},
  {"%union-elts-setter", PVAR, NULL},
  {"<body>", CVAR, &YLbodyG},
  {"<chr>", CVAR, &YLchrG},
  {"class-direct-props", CVAR, &Yclass_direct_props},
  {"<opts-tup>", CVAR, &YLopts_tupG},
  {"%tnul", CVAR, &YPtnul},
  {"%gen-cache-arg-pos", PVAR, NULL},
  {"fun-arity", CVAR, &Yfun_arity},
  {"sig-nary?", CVAR, &Ysig_naryQ},
  {"%i*", PVAR, NULL},
  {"met-app-unify", CVAR, &Ymet_app_unify},
  {"%union-elts", PVAR, NULL},
  {"%class-mets", PVAR, NULL},
  {"prop-init", CVAR, &Yprop_init},
  {"%build-runtime-modules", PVAR, NULL},
  {"fun-env-setter", CVAR, &Yfun_env_setter},
  {"@mem?", CVAR, &YOmemQ},
  {"<mag>", CVAR, &YLmagG},
  {"assert-error", CVAR, &Yassert_error},
  {"%opts-tup-location-setter", PVAR, NULL},
  {"%gen-cache-classes", PVAR, NULL},
  {"%loc-val", PVAR, NULL},
  {"%trace-off", PVAR, NULL},
  {"%define-boxed-structure", PVAR, NULL},
  {"class-type-cache-setter", CVAR, &Yclass_type_cache_setter},
  {"<simple-handler-info>", CVAR, &YLsimple_handler_infoG},
  {"%facos", PVAR, NULL},
  {"%sig-names", PVAR, NULL},
  {"@tup", CVAR, &YOtup},
  {"dl", PVAR, NULL},
  {"%class-id-setter", PVAR, NULL},
  {"%get", PVAR, NULL},
  {"%raw-met-call", PVAR, NULL},
  {"%flo", PVAR, NULL},
  {"ord-app-mets", CVAR, &Yord_app_mets},
  {"def", PVAR, NULL},
  {"%opts-tup-location", PVAR, NULL},
  {"opts-location-setter", CVAR, &Yopts_location_setter},
  {"%product-elts-setter", PVAR, NULL},
  {"%@subclass?", PVAR, NULL},
  {"%slen", PVAR, NULL},
  {"%selt", PVAR, NULL},
  {"%class-children", PVAR, NULL},
  {"<log>", CVAR, &YLlogG},
  {"%define-props", PVAR, NULL},
  {"<opts>", CVAR, &YLoptsG},
  {"%class-ancestors-setter", PVAR, NULL},
  {"%lu", PVAR, NULL},
  {"keyboard-interrupt", CVAR, &Ykeyboard_interrupt},
  {"%src-loc-line-setter", PVAR, NULL},
  {"fun-env", CVAR, &Yfun_env},
  {"seq", PVAR, NULL},
  {"@<", PVAR, NULL},
  {"%clone", PVAR, NULL},
  {"%int", PVAR, NULL},
  {"gen-lookup-miss-1", CVAR, &Ygen_lookup_miss_1},
  {"one-nil", CVAR, &Yone_nil},
  {"%raw", PVAR, NULL},
  {"gen-lookup-1-using", PVAR, NULL},
  {"sym-name-setter", CVAR, &Ysym_name_setter},
  {"ord-app-mets-1", CVAR, &Yord_app_mets_1},
  {"%fsin", PVAR, NULL},
  {"class-type-cache", CVAR, &Yclass_type_cache},
  {"@do-descendents", CVAR, &YOdo_descendents},
  {"gen-cache-singletons-setter", CVAR, &Ygen_cache_singletons_setter},
  {"%sig-specs-setter", PVAR, NULL},
  {"<any>", CVAR, &YLanyG},
  {"%class-parents", PVAR, NULL},
  {"%binding-name", PVAR, NULL},
  {"opts-location", CVAR, &Yopts_location},
  {"@new", CVAR, &YOnew},
  {"fun-nary?-setter", CVAR, &Yfun_naryQ_setter},
  {"unless", PVAR, NULL},
  {"$nul-assocs", CVAR, &YDnul_assocs},
  {"%class-name-setter", PVAR, NULL},
  {"---main-8---", PVAR, NULL},
  {"@mets-unspecialized-at?", CVAR, &YOmets_unspecialized_atQ},
  {"prop-owner", CVAR, &Yprop_owner},
  {"prop-value-at", PVAR, NULL},
  {"sig-unification-vars-setter", CVAR, &Ysig_unification_vars_setter},
  {"<specs>", CVAR, &YLspecsG},
  {"%prop-setter", PVAR, NULL},
  {"$num-int-bits", CVAR, &YDnum_int_bits},
  {"---main-10---", PVAR, NULL},
  {"%gen-src-setter", PVAR, NULL},
  {"%vm-fun-env-elt", PVAR, NULL},
  {"%ftanh", PVAR, NULL},
  {"%class-direct-props", PVAR, NULL},
  {"sym-name", CVAR, &Ysym_name},
  {"@tail", PVAR, NULL},
  {"%f/", PVAR, NULL},
  {"%sig-arity", PVAR, NULL},
  {"%f*", PVAR, NULL},
  {"cpl-error", CVAR, &Ycpl_error},
  {"%define-parents", PVAR, NULL},
  {"%@class-of", PVAR, NULL},
  {"gen-lookup-miss-1-using", CVAR, &Ygen_lookup_miss_1_using},
  {"%close-out-port", PVAR, NULL},
  {"gen-cache-singletons", CVAR, &Ygen_cache_singletons},
  {"%fsqrt", PVAR, NULL},
  {"@alter", CVAR, &YOalter},
  {"quasiquote", PVAR, NULL},
  {"@elt", CVAR, &YOelt},
  {"%raw-alloc", PVAR, NULL},
  {"@olen", PVAR, NULL},
  {"@add", PVAR, NULL},
  {"%tlen", PVAR, NULL},
  {"%fcos", PVAR, NULL},
  {"---main-5---", PVAR, NULL},
  {"%code-ref", PVAR, NULL},
  {"@=", PVAR, NULL},
  {"%%tfab", PVAR, NULL},
  {"clone", CVAR, &Yclone},
  {"try", PVAR, NULL},
  {"%tag-bits", PVAR, NULL},
  {"<class>", CVAR, &YLclassG},
  {"sig-unification-vars", CVAR, &Ysig_unification_vars},
  {"%object-class", PVAR, NULL},
  {"class-children-setter", CVAR, &Yclass_children_setter},
  {"%f=", PVAR, NULL},
  {"%prop-setter-setter", PVAR, NULL},
  {"@precise-spec?", CVAR, &YOprecise_specQ},
  {"%fpow", PVAR, NULL},
  {"%gen-cache-missable?-setter", PVAR, NULL},
  {"t*", CVAR, &YtT},
  {"%file-mtime", PVAR, NULL},
  {"%%mep-apply", PVAR, NULL},
  {"fun-mets-setter", CVAR, &Yfun_mets_setter},
  {"%i<<<", PVAR, NULL},
  {"%class-prop-len-setter", PVAR, NULL},
  {"%reparent-class-shells", PVAR, NULL},
  {"@find", CVAR, &YOfind},
  {"%src-loc", PVAR, NULL},
  {"@add-new", PVAR, NULL},
  {"%finalize-props!", CVAR, &YPfinalize_propsX},
  {"%gen", PVAR, NULL},
  {"type-object-setter", CVAR, &Ytype_object_setter},
  {"incongruent-method-error", CVAR, &Yincongruent_method_error},
  {"<replace-generic-restart>", CVAR, &YLreplace_generic_restartG},
  {"<type>", CVAR, &YLtypeG},
  {"%sp-reg", PVAR, NULL},
  {"$direct-object-class", CVAR, &YDdirect_object_class},
  {"%ftan", PVAR, NULL},
  {"%classes-ready?", CVAR, &YPclasses_readyQ},
  {"%i!", PVAR, NULL},
  {"%vm-fun-env-fab", PVAR, NULL},
  {"%class-direct-props-setter", PVAR, NULL},
  {"%file-exists?", PVAR, NULL},
  {"<gen>", CVAR, &YLgenG},
  {"@oelt", PVAR, NULL},
  {"%union", PVAR, NULL},
  {"$tag-len", PVAR, NULL},
  {"class-children", CVAR, &Yclass_children},
  {"fin", PVAR, NULL},
  {"<props>", CVAR, &YLpropsG},
  {"@pair", PVAR, NULL},
  {"def-fun/sig-accessor", PVAR, NULL},
  {"fun-mets", CVAR, &Yfun_mets},
  {"%gen-name-setter", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%fi2f", NULL},
  {"type-object", NULL},
  {"<sym>", NULL},
  {"arity-error", NULL},
  {"%gen-code-setter", NULL},
  {"object-parents", NULL},
  {"%with-monitor", NULL},
  {"%rep", NULL},
  {"%fu", NULL},
  {"%unlink-stack", NULL},
  {"use/include", NULL},
  {"%relt-setter", NULL},
  {"class-parents", NULL},
  {"src-loc-line", NULL},
  {"%rnul", NULL},
  {"sig-specs", NULL},
  {"prop-type", NULL},
  {"met-app?", NULL},
  {"%time", NULL},
  {"%fb", NULL},
  {"fun-sig-setter", NULL},
  {"%vm-box-val", NULL},
  {"object-props", NULL},
  {"may-isa?", NULL},
  {"fun-specs", NULL},
  {"%untag", NULL},
  {"%iv", NULL},
  {"gen-src-setter", NULL},
  {"<met>", NULL},
  {"fun", NULL},
  {"%class-of", NULL},
  {"%met-code", NULL},
  {"%su", NULL},
  {"gen-refs-setter", NULL},
  {"@+", NULL},
  {"syntax-error", NULL},
  {"%gen-refs", NULL},
  {"fun-sig", NULL},
  {"%open-in-file", NULL},
  {"unexec", NULL},
  {"ct-also", NULL},
  {"find-setter", NULL},
  {"mif", NULL},
  {"gen-src", NULL},
  {"export", NULL},
  {"%i>>", NULL},
  {"nil", NULL},
  {"product-elts", NULL},
  {"@all2?", NULL},
  {"fun-name", NULL},
  {"%os-val", NULL},
  {"@oelt", NULL},
  {"<str>", NULL},
  {"%cb", NULL},
  {"%pair", NULL},
  {"%os-name", NULL},
  {"<fun>", NULL},
  {"lst", NULL},
  {"%flo-bits", NULL},
  {"%do-stack-frames", NULL},
  {"%check-call-types", NULL},
  {"<tup>", NULL},
  {"%ft", NULL},
  {"%fsinh", NULL},
  {"%i<<", NULL},
  {"%i-", NULL},
  {"sig-val", NULL},
  {"nul", NULL},
  {"%fun-reg", NULL},
  {"no-applicable-methods-error", NULL},
  {"handler-info-message", NULL},
  {"class-of", NULL},
  {"fun-src-setter", NULL},
  {"*boot-macro-module-names*", NULL},
  {"%define-method", NULL},
  {"subtype?", NULL},
  {"%flog", NULL},
  {"<flat>", NULL},
  {"%im", NULL},
  {"fun-src", NULL},
  {"gen-refs", NULL},
  {"fun-names", NULL},
  {"<num>", NULL},
  {"@tlen", NULL},
  {"no-next-methods-error", NULL},
  {"%c=", NULL},
  {"$min-int", NULL},
  {"range-error", NULL},
  {"%vm-fun-env-elt-setter", NULL},
  {"%cu", NULL},
  {"find-getter", NULL},
  {"%f+", NULL},
  {"loc", NULL},
  {"%puts", NULL},
  {"property-unbound-error", NULL},
  {"union-elts", NULL},
  {"%current-in-port", NULL},
  {"%selt-setter", NULL},
  {"%os-val-setter", NULL},
  {"@lst", NULL},
  {"%%sym", NULL},
  {"@subclass?", NULL},
  {"<lst>", NULL},
  {"@<", NULL},
  {"<sig>", NULL},
  {"object-class", NULL},
  {"%c<", NULL},
  {"head-setter", NULL},
  {"sym-name", NULL},
  {"class-direct-props", NULL},
  {"prop-setter", NULL},
  {"rep", NULL},
  {"quote", NULL},
  {"%fasin", NULL},
  {"fun-name-setter", NULL},
  {"*boot-macro-expanders*", NULL},
  {"%lb", NULL},
  {"property-type-error", NULL},
  {"<seq!>", NULL},
  {"%f<", NULL},
  {"class-name", NULL},
  {"%open-out-file", NULL},
  {"fab-class", NULL},
  {"error", NULL},
  {"dp", NULL},
  {"sig-names", NULL},
  {"@==", NULL},
  {"@isa?", NULL},
  {"%tup", NULL},
  {"@opts-as-lst", NULL},
  {"<seq.>", NULL},
  {"df", NULL},
  {"use/mangle", NULL},
  {"tup", NULL},
  {"%i&", NULL},
  {"@not", NULL},
  {"%force-out", NULL},
  {"%to-tup", NULL},
  {"%app-args", NULL},
  {"use/export", NULL},
  {"%dispatch", NULL},
  {"return-type-error", NULL},
  {"<seq>", NULL},
  {"%process-module", NULL},
  {"dg", NULL},
  {"*report-prop-unbound-errors?*", NULL},
  {"set", NULL},
  {"stack-overflow-error", NULL},
  {"ddv", NULL},
  {"%current-out-port", NULL},
  {"%rlen", NULL},
  {"<col!>", NULL},
  {"class-props", NULL},
  {"isa?", NULL},
  {"%ib", NULL},
  {"dc", NULL},
  {"%symbols", NULL},
  {"%loc-off", NULL},
  {"if", NULL},
  {"%vm-box-val-setter", NULL},
  {"tail", NULL},
  {"%it/", NULL},
  {"%%macro", NULL},
  {"%fab-dyn-var", NULL},
  {"<col.>", NULL},
  {"prop-value-setter", NULL},
  {"head", NULL},
  {"%vm-box-fab", NULL},
  {"%raw-call", NULL},
  {"ct", NULL},
  {"%next-methods", NULL},
  {"handler-info-arguments", NULL},
  {"%dyn-var-val", NULL},
  {"narity-error", NULL},
  {"<col>", NULL},
  {"tail-setter", NULL},
  {"%gen-code", NULL},
  {"sig-arity", NULL},
  {"%f-", NULL},
  {"%app-filename", NULL},
  {"%ready?", NULL},
  {"%i>>>", NULL},
  {"%relt", NULL},
  {"<prop>", NULL},
  {"fun-refs-setter", NULL},
  {"<rep>", NULL},
  {"%allocate-stack", NULL},
  {"%str", NULL},
  {"let", NULL},
  {"%vm-with-exit", NULL},
  {"%sp-reg-setter", NULL},
  {"as-error", NULL},
  {"*boot-macro-names*", NULL},
  {"argument-type-error", NULL},
  {"<loc>", NULL},
  {"prop-bound?", NULL},
  {"<product>", NULL},
  {"fun-refs", NULL},
  {"%peek", NULL},
  {"macro-expand", NULL},
  {"arithmetic-error", NULL},
  {"%fcosh", NULL},
  {"%invoke-debugger", NULL},
  {"<flo>", NULL},
  {"%prop", NULL},
  {"property-not-found-error", NULL},
  {"%fatan", NULL},
  {"%telt", NULL},
  {"%i^", NULL},
  {"prop-getter", NULL},
  {"sig-unification-vars", NULL},
  {"not", NULL},
  {"fab-gen", NULL},
  {"<union>", NULL},
  {"internal-error", NULL},
  {"%create-directory", NULL},
  {"<fixnum>", NULL},
  {"%loc-off-setter", NULL},
  {"fun-val", NULL},
  {"%put", NULL},
  {"%close-in-port", NULL},
  {"dm", NULL},
  {"dss", NULL},
  {"<int>", NULL},
  {"@telt", NULL},
  {"unknown-function-error", NULL},
  {"prop-value", NULL},
  {"<subclass>", NULL},
  {"esc", NULL},
  {"%gen-src", NULL},
  {"use", NULL},
  {"%bb", NULL},
  {"<singleton>", NULL},
  {"dv", NULL},
  {"<gen>", NULL},
  {"%snul", NULL},
  {"%met-env-setter", NULL},
  {"%loc-val-setter", NULL},
  {"@len", NULL},
  {"*macros-ok?*", NULL},
  {"type-error", NULL},
  {"%eof-object", NULL},
  {"%i<", NULL},
  {"%vm-with-cleanup", NULL},
  {"%prop-unbound-error", NULL},
  {"%iu", NULL},
  {"use/library", NULL},
  {"%eq?", NULL},
  {"%i+", NULL},
  {"ds", NULL},
  {"%i=", NULL},
  {"fab-sym", NULL},
  {"type-class", NULL},
  {"%telt-setter", NULL},
  {"%file-type", NULL},
  {"<src-loc>", NULL},
  {"bound?", NULL},
  {"src-loc-file", NULL},
  {"%met", NULL},
  {"%fatan2", NULL},
  {"add-prop", NULL},
  {"*restarts-ok?*", NULL},
  {"ambiguous-method-error", NULL},
  {"%sb", NULL},
  {"%i?", NULL},
  {"%raw-met-call", NULL},
  {"<chr>", NULL},
  {"%tnul", NULL},
  {"fun-arity", NULL},
  {"sig-nary?", NULL},
  {"%i*", NULL},
  {"prop-init", NULL},
  {"%build-runtime-modules", NULL},
  {"<mag>", NULL},
  {"assert-error", NULL},
  {"%loc-val", NULL},
  {"<simple-handler-info>", NULL},
  {"%facos", NULL},
  {"dl", NULL},
  {"@any?", NULL},
  {"%get", NULL},
  {"ord-app-mets", NULL},
  {"def", NULL},
  {"%@subclass?", NULL},
  {"%slen", NULL},
  {"%selt", NULL},
  {"<log>", NULL},
  {"<opts>", NULL},
  {"keyboard-interrupt", NULL},
  {"seq", NULL},
  {"%raw", NULL},
  {"fun-cache", NULL},
  {"%fsin", NULL},
  {"<any>", NULL},
  {"%binding-name", NULL},
  {"prop-owner", NULL},
  {"new", NULL},
  {"%vm-fun-env-elt", NULL},
  {"%ftanh", NULL},
  {"file-opening-error", NULL},
  {"%f/", NULL},
  {"%f*", NULL},
  {"cpl-error", NULL},
  {"%@class-of", NULL},
  {"%close-out-port", NULL},
  {"%fsqrt", NULL},
  {"quasiquote", NULL},
  {"@olen", NULL},
  {"%tlen", NULL},
  {"%fcos", NULL},
  {"clone", NULL},
  {"try", NULL},
  {"<class>", NULL},
  {"fun-nary?", NULL},
  {"%f=", NULL},
  {"%fpow", NULL},
  {"t*", NULL},
  {"%file-mtime", NULL},
  {"gen-add-met", NULL},
  {"%i<<<", NULL},
  {"%src-loc", NULL},
  {"incongruent-method-error", NULL},
  {"<replace-generic-restart>", NULL},
  {"<type>", NULL},
  {"%sp-reg", NULL},
  {"class-ancestors", NULL},
  {"%ftan", NULL},
  {"%i!", NULL},
  {"%vm-fun-env-fab", NULL},
  {"%file-exists?", NULL},
  {"$max-int", NULL},
  {"class-children", NULL},
  {"fin", NULL},
  {"%dyn-var-val-setter", NULL},
  {"%lu", NULL},
  {"fun-mets", NULL},
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

}

/* END OF GENERATED CODE. */
