/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/boot */

DEF(YOrevX,"goo/boot","@rev!");
DEF(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YLclassG,"goo/boot","<class>");
DEF(YDmax_classes,"goo/boot","$max-classes");
DEF(Yproduct_elts_setter,"goo/boot","product-elts-setter");
DEF(YOgen_cache_singletons_setter,"goo/boot","@gen-cache-singletons-setter");
DEF(Yclass_forward,"goo/boot","class-forward");
DEF(YOfun_val,"goo/boot","@fun-val");
DEF(Ytup,"goo/boot","tup");
DEF(Ytail_setter,"goo/boot","tail-setter");
DEF(Ygen_src,"goo/boot","gen-src");
DEF(Yinit_class,"goo/boot","init-class");
DEF(YLtypeG,"goo/boot","<type>");
DEF(Ygen_cache_arg_pos_setter,"goo/boot","gen-cache-arg-pos-setter");
DEF(YOmets_specs_at,"goo/boot","@mets-specs-at");
DEF(Yproduct_elts,"goo/boot","product-elts");
DEF(YOrev,"goo/boot","@rev");
DEF(YOorder_specs_class,"goo/boot","@order-specs-class");
DEF(YPsymbols_readyQ,"goo/boot","%symbols-ready?");
DEF(YPprop_offset,"goo/boot","%prop-offset");
DEF(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(YOanyQ,"goo/boot","@any?");
DEF(Ynew,"goo/boot","new");
DEF(Yfab_sym,"goo/boot","fab-sym");
DEF(YOOemptyQ,"goo/boot","@@empty?");
DEF(Ytail,"goo/boot","tail");
DEF(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(Ygen_lookup_miss,"goo/boot","gen-lookup-miss");
DEF(Yfun_val_setter,"goo/boot","fun-val-setter");
DEF(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YOgen_cache_singletons,"goo/boot","@gen-cache-singletons");
DEF(YLspecsG,"goo/boot","<specs>");
DEF(YPfalse,"goo/boot","%false");
DEF(Ynul,"goo/boot","nul");
DEF(YOfun_arity,"goo/boot","@fun-arity");
DEF(YLsymG,"goo/boot","<sym>");
DEF(Yclass_props,"goo/boot","class-props");
DEF(Ydel_class,"goo/boot","del-class");
DEF(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(Ysig_val,"goo/boot","sig-val");
DEF(YOfab,"goo/boot","@fab");
DEF(YLstrG,"goo/boot","<str>");
DEF(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YPprop,"goo/boot","%prop");
DEF(Ynot,"goo/boot","not");
DEF(YPtnul,"goo/boot","%tnul");
DEF(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(Yfun_val,"goo/boot","fun-val");
DEF(Yforward_class,"goo/boot","forward-class");
DEF(YTearly_classesT,"goo/boot","*early-classes*");
DEF(Yclass_row_setter,"goo/boot","class-row-setter");
DEF(YOdel_dups,"goo/boot","@del-dups");
DEF(YisaQ,"goo/boot","isa?");
DEF(YLtupG,"goo/boot","<tup>");
DEF(Yopts_tup_storage_setter,"goo/boot","opts-tup-storage-setter");
DEF(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(Yprop_value,"goo/boot","prop-value");
DEF(Yfun_src,"goo/boot","fun-src");
DEF(Yprop_setter_setter,"goo/boot","prop-setter-setter");
DEF(YDgen_cache_singletons_offset,"goo/boot","$gen-cache-singletons-offset");
DEF(YOgen_cache_arg_pos_setter,"goo/boot","@gen-cache-arg-pos-setter");
DEF(Yclass_row,"goo/boot","class-row");
DEF(YLflatG,"goo/boot","<flat>");
DEF(Yunexec,"goo/boot","unexec");
DEF(Yclass_name_setter,"goo/boot","class-name-setter");
DEF(Ysig_names_setter,"goo/boot","sig-names-setter");
DEF(Yprop_setter,"goo/boot","prop-setter");
DEF(YOfun_specs,"goo/boot","@fun-specs");
DEF(YOfill,"goo/boot","@fill");
DEF(Yclass_name,"goo/boot","class-name");
DEF(Yfinalize_props,"goo/boot","finalize-props");
DEF(YOOEE,"goo/boot","@@==");
DEF(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YOclass_direct_props,"goo/boot","@class-direct-props");
DEF(Yfun_arity_setter,"goo/boot","fun-arity-setter");
DEF(Ysig_names,"goo/boot","sig-names");
DEF(YOprune_mets_by_type_at,"goo/boot","@prune-mets-by-type-at");
DEF(Yadd_prop,"goo/boot","add-prop");
DEF(YOgen_cache_arg_pos,"goo/boot","@gen-cache-arg-pos");
DEF(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(Yclass_mets,"goo/boot","class-mets");
DEF(YLlstG,"goo/boot","<lst>");
DEF(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YOsubtypeQ,"goo/boot","@subtype?");
DEF(Yfun_name,"goo/boot","fun-name");
DEF(Yclass_mets_setter,"goo/boot","class-mets-setter");
DEF(YOmemQ,"goo/boot","@mem?");
DEF(YOfun_names,"goo/boot","@fun-names");
DEF(YLbodyG,"goo/boot","<body>");
DEF(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YLseqXG,"goo/boot","<seq!>");
DEF(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YPdefine_method,"goo/boot","%define-method");
DEF(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(Yfun_arity,"goo/boot","fun-arity");
DEF(Ygen_cache_missableQ_setter,"goo/boot","gen-cache-missable?-setter");
DEF(Yunion_elts_setter,"goo/boot","union-elts-setter");
DEF(YLopts_tupG,"goo/boot","<opts-tup>");
DEF(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(YLseqIG,"goo/boot","<seq.>");
DEF(Ygen_refs,"goo/boot","gen-refs");
DEF(Ygen_lookup_miss_1,"goo/boot","gen-lookup-miss-1");
DEF(YOtup,"goo/boot","@tup");
DEF(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(Yunion_elts,"goo/boot","union-elts");
DEF(Yord_app_mets_1,"goo/boot","ord-app-mets-1");
DEF(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
DEF(YLseqG,"goo/boot","<seq>");
DEF(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
DEF(Yhead_setter,"goo/boot","head-setter");
DEF(YDgen_cache_classes_offset,"goo/boot","$gen-cache-classes-offset");
DEF(YLoptsG,"goo/boot","<opts>");
DEF(YLcolXG,"goo/boot","<col!>");
DEF(Ygen_from_met,"goo/boot","gen-from-met");
DEF(YOdo_descendents,"goo/boot","@do-descendents");
DEF(Yfun_refs_setter,"goo/boot","fun-refs-setter");
DEF(Ysig_arity,"goo/boot","sig-arity");
DEF(Yfun_naryQ_setter,"goo/boot","fun-nary?-setter");
DEF(YLsigG,"goo/boot","<sig>");
DEF(YOmets_unspecialized_atQ,"goo/boot","@mets-unspecialized-at?");
DEF(YLcolIG,"goo/boot","<col.>");
DEF(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(Yfun_refs,"goo/boot","fun-refs");
DEF(YOtype_equalQ,"goo/boot","@type-equal?");
DEF(Yprop_offset,"goo/boot","prop-offset");
DEF(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YPrnul,"goo/boot","%rnul");
DEF(Ygen_lookup_miss_1_using,"goo/boot","gen-lookup-miss-1-using");
DEF(Yclass_id_setter,"goo/boot","class-id-setter");
DEF(YOfind,"goo/boot","@find");
DEF(YPPmacro,"goo/boot","%%macro");
DEF(YOalter,"goo/boot","@alter");
DEF(YLcolG,"goo/boot","<col>");
DEF(YOelt,"goo/boot","@elt");
DEF(YDnum_int_bits,"goo/boot","$num-int-bits");
DEF(Yopts_count_setter,"goo/boot","opts-count-setter");
DEF(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(Ynil,"goo/boot","nil");
DEF(Ynul_prop,"goo/boot","nul-prop");
DEF(Yprop_getter_setter,"goo/boot","prop-getter-setter");
DEF(YOprecise_specQ,"goo/boot","@precise-spec?");
DEF(YTnext_class_idT,"goo/boot","*next-class-id*");
DEF(Yclass_id,"goo/boot","class-id");
DEF(YtT,"goo/boot","t*");
DEF(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YDmissed_dispatch,"goo/boot","$missed-dispatch");
DEF(YLrepG,"goo/boot","<rep>");
DEF(YPsnul,"goo/boot","%snul");
DEF(YPclasses_readyQ,"goo/boot","%classes-ready?");
DEF(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DEF(Yopts_count,"goo/boot","opts-count");
DEF(YPTstart_running_atT,"goo/boot","%*start-running-at*");
DEF(Yensure_fresh_object,"goo/boot","ensure-fresh-object");
DEF(YLmetsG,"goo/boot","<mets>");
DEF(YDmin_int,"goo/boot","$min-int");
DEF(Yorder_specs,"goo/boot","order-specs");
DEF(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(Ygen_cache_classes_setter,"goo/boot","gen-cache-classes-setter");
DEF(Yprop_getter,"goo/boot","prop-getter");
DEF(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(Yclass_gens_setter,"goo/boot","class-gens-setter");
DEF(YLlocG,"goo/boot","<loc>");
DEF(YPTused_symbols_too_earlyT,"goo/boot","%*used-symbols-too-early*");
DEF(Yclass_prop_len,"goo/boot","class-prop-len");
DEF(YLgenG,"goo/boot","<gen>");
DEF(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YPwith_monitor,"goo/boot","%with-monitor");
DEF(Yfun_code_setter,"goo/boot","fun-code-setter");
DEF(Ygen_cache_classes,"goo/boot","gen-cache-classes");
DEF(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YOcat2,"goo/boot","@cat2");
DEF(Yclass_gens,"goo/boot","class-gens");
DEF(YLfloG,"goo/boot","<flo>");
DEF(YPadd_prop,"goo/boot","%add-prop");
DEF(Yobject_parents,"goo/boot","object-parents");
DEF(Yfun_code,"goo/boot","fun-code");
DEF(Yfun_specs_setter,"goo/boot","fun-specs-setter");
DEF(Yfun_congruentQ,"goo/boot","fun-congruent?");
DEF(YLprim_intG,"goo/boot","<prim-int>");
DEF(Yfun_cache_setter,"goo/boot","fun-cache-setter");
DEF(YOsubclass_specQ,"goo/boot","@subclass-spec?");
DEF(Ytype_class_setter,"goo/boot","type-class-setter");
DEF(Yord_app_metsT,"goo/boot","ord-app-mets*");
DEF(YLpropG,"goo/boot","<prop>");
DEF(YLintG,"goo/boot","<int>");
DEF(Yfun_cache,"goo/boot","fun-cache");
DEF(Yobject_props,"goo/boot","object-props");
DEF(Yensure_singleton_cache,"goo/boot","ensure-singleton-cache");
DEF(Yfun_specs,"goo/boot","fun-specs");
DEF(Ytype_class,"goo/boot","type-class");
DEF(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YLpropsG,"goo/boot","<props>");
DEF(YLnumG,"goo/boot","<num>");
DEF(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
DEF(YLmetG,"goo/boot","<met>");
DEF(YDnul_assocs,"goo/boot","$nul-assocs");
DEF(Yerror,"goo/boot","error");
DEF(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(YOtall2Q,"goo/boot","@tall2?");
DEF(YLproductG,"goo/boot","<product>");
DEF(Yprop_init,"goo/boot","prop-init");
DEF(YOcache_add,"goo/boot","@cache-add");
DEF(YOsingleton_specQ,"goo/boot","@singleton-spec?");
DEF(YDmax_int,"goo/boot","$max-int");
DEF(Yfun_same_metQ,"goo/boot","fun-same-met?");
DEF(YPtrue,"goo/boot","%true");
DEF(YLchrG,"goo/boot","<chr>");
DEF(Yfind_setter,"goo/boot","find-setter");
DEF(Yfun_env_setter,"goo/boot","fun-env-setter");
DEF(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(Yorder_mets,"goo/boot","order-mets");
DEF(YDgetter_not_found,"goo/boot","$getter-not-found");
DEF(YLunionG,"goo/boot","<union>");
DEF(YLmagG,"goo/boot","<mag>");
DEF(Yfab_gen,"goo/boot","fab-gen");
DEF(Yfun_env,"goo/boot","fun-env");
DEF(YPadd_met,"goo/boot","%add-met");
DEF(Yclass_ordered_ancestors,"goo/boot","class-ordered-ancestors");
DEF(Yrequires_singleton_prec,"goo/boot","requires-singleton-prec");
DEF(YLfunG,"goo/boot","<fun>");
DEF(Yclass_type_cache_setter,"goo/boot","class-type-cache-setter");
DEF(YOclassL,"goo/boot","@class<");
DEF(Ymet_app_unify,"goo/boot","met-app-unify");
DEF(YOpick,"goo/boot","@pick");
DEF(YsubtypeQ,"goo/boot","subtype?");
DEF(YLlogG,"goo/boot","<log>");
DEF(Ypatch_early_classes,"goo/boot","patch-early-classes");
DEF(Yopts_location_setter,"goo/boot","opts-location-setter");
DEF(Yrefab_class,"goo/boot","refab-class");
DEF(YLsubclassG,"goo/boot","<subclass>");
DEF(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(Yprop_owner_setter,"goo/boot","prop-owner-setter");
DEF(Yclass_type_cache,"goo/boot","class-type-cache");
DEF(YLanyG,"goo/boot","<any>");
DEF(Ysym_name_setter,"goo/boot","sym-name-setter");
DEF(Yopts_location,"goo/boot","opts-location");
DEF(Ylst,"goo/boot","lst");
DEF(YOclass_ancestors,"goo/boot","@class-ancestors");
DEF(YOtanyQ,"goo/boot","@tany?");
DEF(Ygen_cache_singletons_setter,"goo/boot","gen-cache-singletons-setter");
DEF(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(Yprop_owner,"goo/boot","prop-owner");
DEF(Ymethod_accessor_offset,"goo/boot","method-accessor-offset");
DEF(YPearly_dispatch,"goo/boot","%early-dispatch");
DEF(YOlst,"goo/boot","@lst");
DEF(YLsingletonG,"goo/boot","<singleton>");
DEF(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(Ysym_name,"goo/boot","sym-name");
DEF(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(Yfun_names,"goo/boot","fun-names");
DEF(Yfun_names_setter,"goo/boot","fun-names-setter");
DEF(Yclass_ordered_props,"goo/boot","class-ordered-props");
DEF(Yfab_class,"goo/boot","fab-class");
DEF(YOorder_specs,"goo/boot","@order-specs");
DEF(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(Yfind_getter,"goo/boot","find-getter");
DEF(Yopts_tup_storage,"goo/boot","opts-tup-storage");
DEF(YPcollect_direct_props,"goo/boot","%collect-direct-props");
DEF(Yclass_children,"goo/boot","class-children");
DEF(Ymet_appQ,"goo/boot","met-app?");
DEF(YOunion_specQ,"goo/boot","@union-spec?");
DEF(YPpatch_early_generic,"goo/boot","%patch-early-generic");
DEF(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(Yobject_class,"goo/boot","object-class");
DEF(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(YOfun_naryQ,"goo/boot","@fun-nary?");
DEF(Yfun_spec,"goo/boot","fun-spec");
DEF(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YOfun_mets_setter,"goo/boot","@fun-mets-setter");
DEF(Ytype_error,"goo/boot","type-error");
DEF(Yprop_init_setter,"goo/boot","prop-init-setter");
DEF(YPfinalize_propsX,"goo/boot","%finalize-props!");
DEF(YOall2Q,"goo/boot","@all2?");
DEF(YOdo,"goo/boot","@do");
DEF(Yfun_mets_setter,"goo/boot","fun-mets-setter");
DEF(YOspecd_args,"goo/boot","@specd-args");
DEF(YOgen_cache_classes_setter,"goo/boot","@gen-cache-classes-setter");
DEF(Ytype_object_setter,"goo/boot","type-object-setter");
DEF(YPsymbols,"goo/boot","%symbols");
DEF(YOisaQ,"goo/boot","@isa?");
DEF(YPdispatch,"goo/boot","%dispatch");
DEF(Yhead,"goo/boot","head");
DEF(YOmets_subclasses_at,"goo/boot","@mets-subclasses-at");
DEF(Yclass_parents_setter,"goo/boot","class-parents-setter");
DEF(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(Yclass_children_setter,"goo/boot","class-children-setter");
DEF(Yfun_mets,"goo/boot","fun-mets");
DEF(Yprop_type_setter,"goo/boot","prop-type-setter");
DEF(Ytype_object,"goo/boot","type-object");
DEF(YOfun_mets,"goo/boot","@fun-mets");
DEF(YLparentsG,"goo/boot","<parents>");
DEF(Yone_nil,"goo/boot","one-nil");
DEF(Yfun_unification_vars_setter,"goo/boot","fun-unification-vars-setter");
DEF(Ysig_specs_setter,"goo/boot","sig-specs-setter");
DEF(Yprop_type,"goo/boot","prop-type");
DEF(YOmets_singletons_at,"goo/boot","@mets-singletons-at");
DEF(YOnew,"goo/boot","@new");
DEF(YOgen_cache_classes,"goo/boot","@gen-cache-classes");
DEF(YOfold,"goo/boot","@fold");
DEF(YOmap,"goo/boot","@map");
DEF(Yclass_parents,"goo/boot","class-parents");
DEF(YOallQ,"goo/boot","@all?");
DEF(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(Ysig_specs,"goo/boot","sig-specs");
DEF(Ychoose_methods,"goo/boot","choose-methods");
DEF(YOfun_unification_vars,"goo/boot","@fun-unification-vars");
DEF(YLenvG,"goo/boot","<env>");
DEF(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(Yfun_sig,"goo/boot","fun-sig");
DEF(Yfun_unification_vars,"goo/boot","fun-unification-vars");
DEF(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(YOlst_helper,"goo/boot","@lst-helper");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_20);
DEFLIT(lit_165);
DEFLIT(lit_353);
DEFLIT(lit_118);
DEFLIT(lit_229);
DEFLIT(lit_347);
DEFLIT(lit_149);
DEFLIT(lit_68);
DEFLIT(lit_280);
DEFLIT(lit_252);
DEFLIT(lit_15);
DEFLIT(lit_218);
DEFLIT(lit_389);
DEFLIT(lit_366);
DEFLIT(lit_32);
DEFLIT(lit_344);
DEFLIT(lit_33);
DEFLIT(lit_22);
DEFLIT(lit_148);
DEFLIT(lit_82);
DEFLIT(lit_67);
DEFLIT(lit_251);
DEFLIT(lit_14);
DEFLIT(lit_259);
DEFLIT(lit_46);
DEFLIT(lit_179);
DEFLIT(lit_388);
DEFLIT(lit_4);
DEFLIT(lit_164);
DEFLIT(lit_362);
DEFLIT(lit_96);
DEFLIT(lit_327);
DEFLIT(lit_81);
DEFLIT(lit_279);
DEFLIT(lit_66);
DEFLIT(lit_363);
DEFLIT(lit_217);
DEFLIT(lit_41);
DEFLIT(lit_192);
DEFLIT(lit_147);
DEFLIT(lit_377);
DEFLIT(lit_343);
DEFLIT(lit_95);
DEFLIT(lit_34);
DEFLIT(lit_270);
DEFLIT(lit_202);
DEFLIT(lit_191);
DEFLIT(lit_146);
DEFLIT(lit_376);
DEFLIT(lit_163);
DEFLIT(lit_355);
DEFLIT(lit_110);
DEFLIT(lit_326);
DEFLIT(lit_269);
DEFLIT(lit_60);
DEFLIT(lit_201);
DEFLIT(lit_216);
DEFLIT(lit_145);
DEFLIT(lit_387);
DEFLIT(lit_124);
DEFLIT(lit_360);
DEFLIT(lit_342);
DEFLIT(lit_395);
DEFLIT(lit_74);
DEFLIT(lit_268);
DEFLIT(lit_278);
DEFLIT(lit_59);
DEFLIT(lit_235);
DEFLIT(lit_144);
DEFLIT(lit_178);
DEFLIT(lit_386);
DEFLIT(lit_38);
DEFLIT(lit_88);
DEFLIT(lit_25);
DEFLIT(lit_73);
DEFLIT(lit_291);
DEFLIT(lit_267);
DEFLIT(lit_245);
DEFLIT(lit_234);
DEFLIT(lit_215);
DEFLIT(lit_177);
DEFLIT(lit_37);
DEFLIT(lit_162);
DEFLIT(lit_358);
DEFLIT(lit_102);
DEFLIT(lit_341);
DEFLIT(lit_359);
DEFLIT(lit_325);
DEFLIT(lit_87);
DEFLIT(lit_290);
DEFLIT(lit_266);
DEFLIT(lit_277);
DEFLIT(lit_233);
DEFLIT(lit_51);
DEFLIT(lit_143);
DEFLIT(lit_246);
DEFLIT(lit_249);
DEFLIT(lit_101);
DEFLIT(lit_304);
DEFLIT(lit_265);
DEFLIT(lit_232);
DEFLIT(lit_200);
DEFLIT(lit_214);
DEFLIT(lit_190);
DEFLIT(lit_142);
DEFLIT(lit_385);
DEFLIT(lit_123);
DEFLIT(lit_247);
DEFLIT(lit_116);
DEFLIT(lit_361);
DEFLIT(lit_311);
DEFLIT(lit_324);
DEFLIT(lit_80);
DEFLIT(lit_303);
DEFLIT(lit_264);
DEFLIT(lit_161);
DEFLIT(lit_231);
DEFLIT(lit_189);
DEFLIT(lit_141);
DEFLIT(lit_115);
DEFLIT(lit_310);
DEFLIT(lit_213);
DEFLIT(lit_79);
DEFLIT(lit_302);
DEFLIT(lit_263);
DEFLIT(lit_276);
DEFLIT(lit_230);
DEFLIT(lit_188);
DEFLIT(lit_260);
DEFLIT(lit_140);
DEFLIT(lit_374);
DEFLIT(lit_248);
DEFLIT(lit_94);
DEFLIT(lit_301);
DEFLIT(lit_289);
DEFLIT(lit_160);
DEFLIT(lit_228);
DEFLIT(lit_2);
DEFLIT(lit_43);
DEFLIT(lit_187);
DEFLIT(lit_139);
DEFLIT(lit_176);
DEFLIT(lit_384);
DEFLIT(lit_373);
DEFLIT(lit_108);
DEFLIT(lit_28);
DEFLIT(lit_93);
DEFLIT(lit_323);
DEFLIT(lit_156);
DEFLIT(lit_300);
DEFLIT(lit_29);
DEFLIT(lit_288);
DEFLIT(lit_398);
DEFLIT(lit_227);
DEFLIT(lit_186);
DEFLIT(lit_138);
DEFLIT(lit_175);
DEFLIT(lit_107);
DEFLIT(lit_356);
DEFLIT(lit_211);
DEFLIT(lit_299);
DEFLIT(lit_30);
DEFLIT(lit_58);
DEFLIT(lit_397);
DEFLIT(lit_226);
DEFLIT(lit_199);
DEFLIT(lit_185);
DEFLIT(lit_137);
DEFLIT(lit_174);
DEFLIT(lit_122);
DEFLIT(lit_322);
DEFLIT(lit_72);
DEFLIT(lit_287);
DEFLIT(lit_57);
DEFLIT(lit_396);
DEFLIT(lit_225);
DEFLIT(lit_372);
DEFLIT(lit_136);
DEFLIT(lit_36);
DEFLIT(lit_27);
DEFLIT(lit_365);
DEFLIT(lit_394);
DEFLIT(lit_155);
DEFLIT(lit_86);
DEFLIT(lit_71);
DEFLIT(lit_275);
DEFLIT(lit_368);
DEFLIT(lit_12);
DEFLIT(lit_50);
DEFLIT(lit_135);
DEFLIT(lit_35);
DEFLIT(lit_159);
DEFLIT(lit_250);
DEFLIT(lit_26);
DEFLIT(lit_100);
DEFLIT(lit_338);
DEFLIT(lit_85);
DEFLIT(lit_286);
DEFLIT(lit_262);
DEFLIT(lit_274);
DEFLIT(lit_198);
DEFLIT(lit_49);
DEFLIT(lit_134);
DEFLIT(lit_354);
DEFLIT(lit_99);
DEFLIT(lit_337);
DEFLIT(lit_321);
DEFLIT(lit_261);
DEFLIT(lit_273);
DEFLIT(lit_224);
DEFLIT(lit_184);
DEFLIT(lit_133);
DEFLIT(lit_312);
DEFLIT(lit_114);
DEFLIT(lit_3);
DEFLIT(lit_336);
DEFLIT(lit_309);
DEFLIT(lit_210);
DEFLIT(lit_298);
DEFLIT(lit_285);
DEFLIT(lit_64);
DEFLIT(lit_272);
DEFLIT(lit_154);
DEFLIT(lit_132);
DEFLIT(lit_378);
DEFLIT(lit_113);
DEFLIT(lit_335);
DEFLIT(lit_308);
DEFLIT(lit_209);
DEFLIT(lit_78);
DEFLIT(lit_297);
DEFLIT(lit_63);
DEFLIT(lit_242);
DEFLIT(lit_42);
DEFLIT(lit_173);
DEFLIT(lit_382);
DEFLIT(lit_370);
DEFLIT(lit_158);
DEFLIT(lit_24);
DEFLIT(lit_334);
DEFLIT(lit_92);
DEFLIT(lit_208);
DEFLIT(lit_77);
DEFLIT(lit_296);
DEFLIT(lit_284);
DEFLIT(lit_258);
DEFLIT(lit_241);
DEFLIT(lit_53);
DEFLIT(lit_223);
DEFLIT(lit_197);
DEFLIT(lit_45);
DEFLIT(lit_130);
DEFLIT(lit_172);
DEFLIT(lit_381);
DEFLIT(lit_369);
DEFLIT(lit_106);
DEFLIT(lit_23);
DEFLIT(lit_333);
DEFLIT(lit_91);
DEFLIT(lit_383);
DEFLIT(lit_257);
DEFLIT(lit_313);
DEFLIT(lit_240);
DEFLIT(lit_54);
DEFLIT(lit_152);
DEFLIT(lit_392);
DEFLIT(lit_129);
DEFLIT(lit_171);
DEFLIT(lit_380);
DEFLIT(lit_105);
DEFLIT(lit_352);
DEFLIT(lit_332);
DEFLIT(lit_307);
DEFLIT(lit_319);
DEFLIT(lit_271);
DEFLIT(lit_104);
DEFLIT(lit_56);
DEFLIT(lit_183);
DEFLIT(lit_391);
DEFLIT(lit_11);
DEFLIT(lit_379);
DEFLIT(lit_120);
DEFLIT(lit_351);
DEFLIT(lit_151);
DEFLIT(lit_70);
DEFLIT(lit_39);
DEFLIT(lit_55);
DEFLIT(lit_1);
DEFLIT(lit_222);
DEFLIT(lit_349);
DEFLIT(lit_10);
DEFLIT(lit_119);
DEFLIT(lit_331);
DEFLIT(lit_318);
DEFLIT(lit_84);
DEFLIT(lit_69);
DEFLIT(lit_283);
DEFLIT(lit_19);
DEFLIT(lit_206);
DEFLIT(lit_48);
DEFLIT(lit_9);
DEFLIT(lit_367);
DEFLIT(lit_98);
DEFLIT(lit_83);
DEFLIT(lit_320);
DEFLIT(lit_40);
DEFLIT(lit_339);
DEFLIT(lit_256);
DEFLIT(lit_357);
DEFLIT(lit_244);
DEFLIT(lit_109);
DEFLIT(lit_117);
DEFLIT(lit_121);
DEFLIT(lit_393);
DEFLIT(lit_47);
DEFLIT(lit_153);
DEFLIT(lit_8);
DEFLIT(lit_170);
DEFLIT(lit_292);
DEFLIT(lit_305);
DEFLIT(lit_350);
DEFLIT(lit_316);
DEFLIT(lit_330);
DEFLIT(lit_317);
DEFLIT(lit_97);
DEFLIT(lit_212);
DEFLIT(lit_346);
DEFLIT(lit_239);
DEFLIT(lit_237);
DEFLIT(lit_52);
DEFLIT(lit_205);
DEFLIT(lit_221);
DEFLIT(lit_196);
DEFLIT(lit_169);
DEFLIT(lit_126);
DEFLIT(lit_150);
DEFLIT(lit_182);
DEFLIT(lit_112);
DEFLIT(lit_306);
DEFLIT(lit_65);
DEFLIT(lit_282);
DEFLIT(lit_238);
DEFLIT(lit_62);
DEFLIT(lit_236);
DEFLIT(lit_13);
DEFLIT(lit_315);
DEFLIT(lit_31);
DEFLIT(lit_295);
DEFLIT(lit_195);
DEFLIT(lit_44);
DEFLIT(lit_21);
DEFLIT(lit_371);
DEFLIT(lit_168);
DEFLIT(lit_314);
DEFLIT(lit_111);
DEFLIT(lit_76);
DEFLIT(lit_294);
DEFLIT(lit_61);
DEFLIT(lit_207);
DEFLIT(lit_7);
DEFLIT(lit_220);
DEFLIT(lit_128);
DEFLIT(lit_194);
DEFLIT(lit_181);
DEFLIT(lit_125);
DEFLIT(lit_167);
DEFLIT(lit_329);
DEFLIT(lit_90);
DEFLIT(lit_75);
DEFLIT(lit_293);
DEFLIT(lit_390);
DEFLIT(lit_281);
DEFLIT(lit_255);
DEFLIT(lit_18);
DEFLIT(lit_127);
DEFLIT(lit_193);
DEFLIT(lit_180);
DEFLIT(lit_6);
DEFLIT(lit_166);
DEFLIT(lit_243);
DEFLIT(lit_89);
DEFLIT(lit_254);
DEFLIT(lit_17);
DEFLIT(lit_204);
DEFLIT(lit_219);
DEFLIT(lit_375);
DEFLIT(lit_5);
DEFLIT(lit_0);
DEFLIT(lit_364);
DEFLIT(lit_103);
DEFLIT(lit_348);
DEFLIT(lit_345);
DEFLIT(lit_328);
DEFLIT(lit_157);
DEFLIT(lit_340);
DEFLIT(lit_253);
DEFLIT(lit_16);
DEFLIT(lit_203);
DEFLIT(lit_131);

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
extern P YPprim_int (P);
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
LOCFOR(fun_lookup_105);
LOCFOR(fun_106);
LOCFOR(fun_lookup_107);
FUNFOR(Yfab_sym);
LOCFOR(fun_loop_109);
extern P YPrevX (P);
LOCFOR(fun_coly_111);
LOCFOR(fun_colx_112);
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
LOCFOR(fun_loop_168);
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
LOCFOR(fun_fnd_338);
FUNFOR(YOallQ);
LOCFOR(fun_fnd_340);
FUNFOR(YOall2Q);
LOCFOR(fun_fnd_342);
FUNFOR(YOelt);
LOCFOR(fun_loop_344);
FUNFOR(YOfill);
LOCFOR(fun_fnd_346);
FUNFOR(YOanyQ);
extern P YOpair (P,P);
extern P YOadd (P,P);
extern P YOadd_new (P,P);
LOCFOR(fun_do_351);
FUNFOR(YOmap);
LOCFOR(fun_do_353);
FUNFOR(YOpick);
LOCFOR(fun_do_355);
FUNFOR(YOdo);
LOCFOR(fun_in_357);
FUNFOR(YOalter);
LOCFOR(fun_fab_359);
FUNFOR(YOfab);
LOCFOR(fun_red_361);
FUNFOR(YOfold);
LOCFOR(fun_loop_363);
FUNFOR(YOrev);
FUNFOR(YOcat2);
LOCFOR(fun_fnd_366);
FUNFOR(YOfind);
LOCFOR(fun_368);
FUNFOR(YOmemQ);
LOCFOR(fun_370);
FUNFOR(YOdel_dups);
FUNFOR(YOlst_helper);
FUNFOR(YOopts_as_lst);
FUNFOR(YOlst);
extern P YOtlen (P);
extern P YOtelt (P,P);
extern P YOtelt_setter (P,P,P);
LOCFOR(fun_fnd_378);
FUNFOR(YOtanyQ);
LOCFOR(fun_fnd_380);
FUNFOR(YOtall2Q);
LOCFOR(fun_into_382);
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
LOCFOR(fun_396);
LOCFOR(fun_397);
LOCFOR(fun_398);
LOCFOR(fun_399);
LOCFOR(fun_lop_400);
LOCFOR(fun_col_401);
FUNFOR(Ygen_add_met);
extern P YOsubclassQ (P,P);
extern P YOclass_isaQ (P,P);
extern P YOsingleton_isaQ (P,P);
FUNFOR(YOisaQ);
LOCFOR(fun_find_407);
FUNFOR(YOclassL);
FUNFOR(YtT);
FUNFOR(YOtype_equalQ);
FUNFOR(YOsubtypeQ);
FUNFOR(YOmay_isaQ);
FUNFOR(YOorder_specs_class);
FUNFOR(YOorder_specs);
LOCFOR(fun_loop_415);
FUNFOR(Yorder_mets);
LOCFOR(fun_loop_417);
LOCFOR(fun_make_ambiguous_418);
LOCFOR(fun_loop_419);
LOCFOR(fun_precedes_allQ_420);
LOCFOR(fun_check_subsequent_ambiguities_421);
LOCFOR(fun_insert_422);
LOCFOR(fun_loop_423);
FUNFOR(Yord_app_mets_1);
LOCFOR(fun_425);
LOCFOR(fun_loop_426);
FUNFOR(Ymet_appQ);
LOCFOR(fun_col_428);
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
LOCFOR(fun_442);
FUNFOR(YOmets_unspecialized_atQ);
LOCFOR(fun_444);
FUNFOR(YOprune_mets_by_type_at);
LOCFOR(fun_446);
FUNFOR(YOmets_specs_at);
LOCFOR(fun_448);
FUNFOR(YOmets_singletons_at);
LOCFOR(fun_450);
FUNFOR(YOmets_subclasses_at);
LOCFOR(fun_copy_452);
FUNFOR(YOcache_add);
LOCFOR(fun_loop_454);
FUNFOR(Ygen_lookup_miss_1_using);
LOCFOR(fun_copy_456);
FUNFOR(YOspecd_args);
FUNFOR(Yrequires_singleton_prec);
LOCFOR(fun_loop_459);
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
LOCFOR(fun_tailQ_486);
LOCFOR(fun_candidate_487);
LOCFOR(fun_candidate_at_head_488);
LOCFOR(fun_del_next_489);
LOCFOR(fun_merge_lists_490);
FUNFOR(Yclass_ordered_ancestors);
FUNFOR(YOclass_direct_props);
FUNFOR(Yclass_ordered_props);
FUNFOR(Ydel_class);
LOCFOR(fun_495);
LOCFOR(fun_496);
FUNFOR(Yinit_class);
FUNFOR(Yfab_class);
FUNFOR(Yrefab_class);
FUNFOR(Yobject_props);
FUNFOR(Yobject_parents);
FUNFOR(Yensure_fresh_object);
LOCFOR(fun_loop_503);
FUNFOR(Yprop_offset);
FUNFOR(YPprop_unbound_error);
FUNFOR(Yprop_value);
FUNFOR(Yprop_boundQ);
LOCFOR(fun_loop_508);
FUNFOR(Yprop_value_setter);
LOCFOR(fun_loop_510);
FUNFOR(Yfind_getter);
LOCFOR(fun_loop_512);
FUNFOR(Yfind_setter);
LOCFOR(fun_514);
FUNFOR(Yforward_class);
LOCFOR(fun_visit_516);
FUNFOR(YOdo_descendents);
LOCFOR(fun_518);
FUNFOR(Yfinalize_props);
FUNFOR(YPprop);
extern P YPupdate_instance_for_changed_class (P);
FUNFOR(Yupdate_instance_for_changed_class);
FUNFOR(Ypatch_early_classes);
FUNFOR(Yfab_gen);
LOCFOR(fun_525);
FUNFOR(Ygen_from_met);
FUNFOR(YPdefine_method);
FUNFOR(Yunexec);
LOCFOR(fun_loop_529);
extern P YPnew (P,P);
FUNFOR(YOnew);
LOCFOR(fun_new_532);
LOCFOR(fun_533);
LOCFOR(fun_subtypeQ_534);
LOCFOR(fun_535);
LOCFOR(fun_subtypeQ_536);
LOCFOR(fun_537);
LOCFOR(fun_subtypeQ_538);
LOCFOR(fun_subtypeQ_539);
LOCFOR(fun_subtypeQ_540);
LOCFOR(fun_subtypeQ_541);
LOCFOR(fun_subtypeQ_542);
LOCFOR(fun_subtypeQ_543);
LOCFOR(fun_subtypeQ_544);
LOCFOR(fun_subtypeQ_545);
LOCFOR(fun_subtypeQ_546);
LOCFOR(fun_subtypeQ_547);
LOCFOR(fun_subtypeQ_548);
LOCFOR(fun_subtypeQ_549);
LOCFOR(fun_subtypeQ_550);
LOCFOR(fun_subtypeQ_551);
LOCFOR(fun_isaQ_552);
LOCFOR(fun_isaQ_553);
LOCFOR(fun_isaQ_554);
LOCFOR(fun_555);
LOCFOR(fun_isaQ_556);
LOCFOR(fun_isaQ_557);
LOCFOR(fun_order_specs_558);
LOCFOR(fun_order_specs_559);
LOCFOR(fun_order_specs_560);
LOCFOR(fun_order_specs_561);
LOCFOR(fun_order_specs_562);
LOCFOR(fun_order_specs_563);
LOCFOR(fun_order_specs_564);
LOCFOR(fun_may_isaQ_565);
LOCFOR(fun_may_isaQ_566);
LOCFOR(fun_may_isaQ_567);
LOCFOR(fun_loop_568);
LOCFOR(fun_may_isaQ_569);
LOCFOR(fun_570);
LOCFOR(fun_may_isaQ_571);
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

P YPclass_prop_len(P x_) {
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

P YPclass_name(P x_) {
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

P YPclass_parents(P x_) {
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

P YPclass_direct_props(P x_) {
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

P YPclass_props(P x_) {
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

P YPclass_children(P x_) {
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

P YPclass_gens(P x_) {
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

P YPclass_mets(P x_) {
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

P YPclass_forward(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)9);
  return T0;
}

INLINE P YPclass_type_cache_setter(P z_,P x_) {
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

P YPtype_object(P x_) {
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

P YPtype_class(P x_) {
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

P YPunion_elts(P x_) {
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

P YPproduct_elts(P x_) {
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

P YPsig_names(P x_) {
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

P YPsig_specs(P x_) {
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

P YPsig_naryQ(P x_) {
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

P YPsig_arity(P x_) {
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

P YPsig_val(P x_) {
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

P YPsig_unification_vars(P x_) {
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
  (P)YPprop_elt_setter(sig_unification_vars_,classF8,(P)5);
  (P)YPprop_elt_setter(sig_val_,classF8,(P)4);
  (P)YPprop_elt_setter(sig_arity_,classF8,(P)3);
  (P)YPprop_elt_setter(sig_naryQ_,classF8,(P)2);
  (P)YPprop_elt_setter(sig_specs_,classF8,(P)1);
  (P)YPprop_elt_setter(sig_names_,classF8,(P)0);
  T0 = classF8;
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

P YPmet_code(P x_) {
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

P YPmet_name(P x_) {
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

P YPmet_sig(P x_) {
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

P YPmet_env(P x_) {
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

P YPmet_refs(P x_) {
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

P YPmet_src(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPmet(P met_code_,P met_name_,P met_sig_,P met_env_,P met_refs_,P met_src_) {
  P classF9;
  P T0,T1;
  P a1,a2,a3,a4,a5,a6;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLmetG),(P)6);
  classF9 = T1;
  (P)YPprop_elt_setter(met_src_,classF9,(P)5);
  (P)YPprop_elt_setter(met_refs_,classF9,(P)4);
  (P)YPprop_elt_setter(met_env_,classF9,(P)3);
  (P)YPprop_elt_setter(met_sig_,classF9,(P)2);
  (P)YPprop_elt_setter(met_name_,classF9,(P)1);
  (P)YPprop_elt_setter(met_code_,classF9,(P)0);
  T0 = classF9;
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
  P T0,T1;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YPuntag(x_);
  T0 = (P)YPtag(T1,t_);
  return T0;
}

P YPuntag_into(P x_) {
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPuntag(x_);
  T0 = (P)YPtag(T1,(P)0);
  return T0;
}

P YPindirect_objectQ(P x_) {
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPtag_bits(x_);
  T0 = (P)YPiE(T1,(P)0);
  return T0;
}

INLINE P YPclass_of(P x_) {
  P tagF10;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPtag_bits(x_);
  tagF10 = T1;
  T4 = (P)YPiE(tagF10,(P)0);
  T3 = (P)YPbb(T4);
  if (T3 != YPfalse) {
    T5 = (P)YPobject_class(x_);
    T2 = T5;
  } else {
    T6 = (P)YPelt(VARREF(YDdirect_object_class),tagF10);
    T2 = T6;
  }
  T0 = T2;
  return T0;
}

INLINE P YPib(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPtag(x_,(P)1);
  return T0;
}

P YPprim_int(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPib(x_);
  return T0;
}

INLINE P YPiu(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPuntag(x_);
  return T0;
}

INLINE P YPint(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPib(x_);
  return T0;
}

INLINE P YPcb(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPtag(x_,(P)2);
  return T0;
}

INLINE P YPchr(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPcb(x_);
  return T0;
}

INLINE P YPcu(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPuntag(x_);
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
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPlb(x_);
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
  P tmpF14;
  P c2F13;
  P c1F12;
  P tmpF11;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
DEFCREGS();
loop:
  T2 = (P)YPiE(i_,len_);
  T1 = (P)YPbb(T2);
  tmpF11 = T1;
  if (tmpF11 != YPfalse) {
    T3 = tmpF11;
  } else {
    T5 = (P)YPselt(s1_,i_);
    c1F12 = T5;
    T7 = (P)YPselt(s2_,i_);
    c2F13 = T7;
    T10 = (P)YPcE(c1F12,c2F13);
    T9 = (P)YPbb(T10);
    tmpF14 = T9;
    if (tmpF14 != YPfalse) {
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
  P tmpF16;
  P lenF15;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YPslen(s1_);
  lenF15 = T1;
  T5 = (P)YPslen(s2_);
  T4 = (P)YPiE(lenF15,T5);
  T3 = (P)YPbb(T4);
  tmpF16 = T3;
  if (tmpF16 != YPfalse) {
    T7 = (P)YPstr_eqQ_loop(s1_,s2_,lenF15,(P)0);
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

P YPsym_nam(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsym(P sym_nam_) {
  P classF17;
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLsymG),(P)1);
  classF17 = T1;
  (P)YPprop_elt_setter(sym_nam_,classF17,(P)0);
  T0 = classF17;
  return T0;
}

FUNCODEDEF(fun_lookup_105) {
  P s_;
  P symF19;
  P symF18;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T1 = (P)YPemptyQ(s_);
  if (T1 != YPfalse) {
    T3 = (P)YPsym(FREEREF(0));
    symF18 = T3;
    T4 = (P)YPpair(symF18,VARREF(YPsymbols));
    VARSET(YPsymbols,T4);
    T2 = symF18;
    T0 = T2;
  } else {
    T6 = (P)YPhead(s_);
    symF19 = T6;
    T9 = (P)YPsym_nam(symF19);
    T8 = (P)YPstr_eqQ(T9,FREEREF(0));
    if (T8 != YPfalse) {
      T7 = symF19;
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

FUNCODEDEF(fun_106) {
  P name_;
  P lookupF20;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = FUNSHELL(1,fun_lookup_105,2);
  lookupF20 = T1;
  FUNINIT(lookupF20, 2,name_,lookupF20);
  T2 = CALL1(0,lookupF20,VARREF(YPsymbols));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lookup_107) {
  P s_;
  P symF22;
  P symF21;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T1 = (P)YPemptyQ(s_);
  if (T1 != YPfalse) {
    T3 = (P)YPsym(FREEREF(0));
    symF21 = T3;
    T4 = (P)YPpair(symF21,VARREF(YPsymbols));
    VARSET(YPsymbols,T4);
    T2 = symF21;
    T0 = T2;
  } else {
    T6 = (P)YPhead(s_);
    symF22 = T6;
    T9 = (P)YPsym_nam(symF22);
    T8 = (P)YPstr_eqQ(T9,FREEREF(0));
    if (T8 != YPfalse) {
      T7 = symF22;
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
  P lookupF23;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = FUNSHELL(1,fun_lookup_107,2);
  lookupF23 = T1;
  FUNINIT(lookupF23, 2,name_,lookupF23);
  T2 = CALL1(0,lookupF23,VARREF(YPsymbols));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_109) {
  P l_,r_;
  P tF24;
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
    tF24 = T3;
    (P)YPtail_setter(r_,l_);
    a1 = tF24;
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
  P loopF25;
  P T0,T1,T2;
  P a1;
DEFCREGS();
loop:
  T1 = FUNSHELL(1,fun_loop_109,1);
  loopF25 = T1;
  FUNINIT(loopF25, 1,loopF25);
  T2 = XCALL2(0,loopF25,c_,Ynil);
  T0 = T2;
  return T0;
}

FUNCODEDEF(fun_coly_111) {
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

FUNCODEDEF(fun_colx_112) {
  P lx_,x_;
  P colyF26;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(lx_, 0);
  ARG(x_, 1);
loop:
  T1 = (P)YPemptyQ(x_);
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_coly_111,1);
    colyF26 = T3;
    FUNINIT(colyF26, 1,colyF26);
    T4 = CALL2(0,colyF26,lx_,FREEREF(0));
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
  P colxF27;
  P T0,T1,T2;
  P a1,a2;
DEFCREGS();
loop:
  T1 = FUNSHELL(1,fun_colx_112,2);
  colxF27 = T1;
  FUNINIT(colxF27, 2,y_,colxF27);
  T2 = XCALL2(0,colxF27,VARREF(Ynil),x_);
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

P YPflo_dat(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPflo(P flo_dat_) {
  P classF28;
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLfloG),(P)1);
  classF28 = T1;
  (P)YPprop_elt_setter(flo_dat_,classF28,(P)0);
  T0 = classF28;
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
  P classF29;
  P T0,T1;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLoptsG),(P)2);
  classF29 = T1;
  (P)YPprop_elt_setter(opts_count_,classF29,(P)1);
  (P)YPprop_elt_setter(opts_location_,classF29,(P)0);
  T0 = classF29;
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

P YPopts_tup_location(P x_) {
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

P YPopts_tup_count(P x_) {
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

P YPopts_tup_tup(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPopts_tup(P opts_tup_location_,P opts_tup_count_,P opts_tup_tup_) {
  P classF30;
  P T0,T1;
  P a1,a2,a3;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLopts_tupG),(P)3);
  classF30 = T1;
  (P)YPprop_elt_setter(opts_tup_tup_,classF30,(P)2);
  (P)YPprop_elt_setter(opts_tup_count_,classF30,(P)1);
  (P)YPprop_elt_setter(opts_tup_location_,classF30,(P)0);
  T0 = classF30;
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

P YPprop_owner(P x_) {
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

P YPprop_getter(P x_) {
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

P YPprop_setter(P x_) {
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

P YPprop_type(P x_) {
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

P YPprop_init(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPPprop(P prop_owner_,P prop_getter_,P prop_setter_,P prop_type_,P prop_init_) {
  P classF31;
  P T0,T1;
  P a1,a2,a3,a4,a5;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLpropG),(P)5);
  classF31 = T1;
  (P)YPprop_elt_setter(prop_init_,classF31,(P)4);
  (P)YPprop_elt_setter(prop_type_,classF31,(P)3);
  (P)YPprop_elt_setter(prop_setter_,classF31,(P)2);
  (P)YPprop_elt_setter(prop_getter_,classF31,(P)1);
  (P)YPprop_elt_setter(prop_owner_,classF31,(P)0);
  T0 = classF31;
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

P YPgen_cache_count(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPgen_cache(P gen_cache_missableQ_,P gen_cache_arg_pos_,P gen_cache_singletons_,P gen_cache_classes_,P gen_cache_count_) {
  P classF32;
  P T0,T1;
  P a1,a2,a3,a4,a5;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLgen_cacheG),(P)5);
  classF32 = T1;
  (P)YPprop_elt_setter(gen_cache_count_,classF32,(P)4);
  (P)YPprop_elt_setter(gen_cache_classes_,classF32,(P)3);
  (P)YPprop_elt_setter(gen_cache_singletons_,classF32,(P)2);
  (P)YPprop_elt_setter(gen_cache_arg_pos_,classF32,(P)1);
  (P)YPprop_elt_setter(gen_cache_missableQ_,classF32,(P)0);
  T0 = classF32;
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

P YPgen_code(P x_) {
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

P YPgen_name(P x_) {
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

P YPgen_sig(P x_) {
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

P YPgen_mets(P x_) {
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

P YPfun_cache(P x_) {
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

P YPgen_refs(P x_) {
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

P YPgen_src(P x_) {
  P T0;
  P a1;
DEFCREGS();
loop:
  T0 = (P)YPprop_elt(x_,(P)6);
  return T0;
}

P YPgen(P gen_code_,P gen_name_,P gen_sig_,P gen_mets_,P fun_cache_,P gen_refs_,P gen_src_) {
  P classF33;
  P T0,T1;
  P a1,a2,a3,a4,a5,a6,a7;
DEFCREGS();
loop:
  T1 = (P)YPobject_of(VARREF(YLgenG),(P)7);
  classF33 = T1;
  (P)YPprop_elt_setter(gen_src_,classF33,(P)6);
  (P)YPprop_elt_setter(gen_refs_,classF33,(P)5);
  (P)YPprop_elt_setter(fun_cache_,classF33,(P)4);
  (P)YPprop_elt_setter(gen_mets_,classF33,(P)3);
  (P)YPprop_elt_setter(gen_sig_,classF33,(P)2);
  (P)YPprop_elt_setter(gen_name_,classF33,(P)1);
  (P)YPprop_elt_setter(gen_code_,classF33,(P)0);
  T0 = classF33;
  return T0;
}

FUNCODEDEF(fun_loop_168) {
  P i_,props_;
  P propF34;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(props_, 1);
loop:
  T1 = (P)YPemptyQ(props_);
  if (T1 != YPfalse) {
    T2 = (P)YPiu(YPint((P)-1));
    T0 = T2;
  } else {
    T4 = (P)YPhead(props_);
    propF34 = T4;
    T8 = (P)YPprop_getter(propF34);
    T7 = (P)YPeqQ(T8,FREEREF(0));
    T6 = (P)YPbb(T7);
    if (T6 != YPfalse) {
      T5 = i_;
    } else {
      T10 = (P)YPiA(i_,(P)1);
      T11 = (P)YPtail(props_);
      a1 = T10;
      a2 = T11;
      i_ = a1;
      props_ = a2;
      goto loop;
      T5 = T9;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPprop_offset) {
  P owner_,getter_;
  P loopF35;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_168,2);
  loopF35 = T1;
  FUNINIT(loopF35, 2,getter_,loopF35);
  T4 = (P)YPobject_class(owner_);
  T3 = (P)YPclass_props(T4);
  T2 = CALL2(0,loopF35,(P)0,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPearly_dispatch) {
  P args_;
  P genF36;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = (P)YPfun_reg();
  genF36 = T1;
  T2 = (P)YPcurrent_out_port();
  T3 = (P)YPsu(LITREF(lit_21));
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

FUNCODEDEF(fun_173) {
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

FUNCODEDEF(fun_174) {
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

FUNCODEDEF(fun_175) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_176) {
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

FUNCODEDEF(fun_177) {
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

FUNCODEDEF(fun_178) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_179) {
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

FUNCODEDEF(fun_180) {
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

FUNCODEDEF(fun_181) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_182) {
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

FUNCODEDEF(fun_183) {
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

FUNCODEDEF(fun_184) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_185) {
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

FUNCODEDEF(fun_186) {
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

FUNCODEDEF(fun_187) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_188) {
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

FUNCODEDEF(fun_189) {
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

FUNCODEDEF(fun_190) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_191) {
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

FUNCODEDEF(fun_192) {
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

FUNCODEDEF(fun_193) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_194) {
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

FUNCODEDEF(fun_195) {
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

FUNCODEDEF(fun_196) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_197) {
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

FUNCODEDEF(fun_198) {
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

FUNCODEDEF(fun_199) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_200) {
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

FUNCODEDEF(fun_201) {
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

FUNCODEDEF(fun_202) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_203) {
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

FUNCODEDEF(fun_204) {
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

FUNCODEDEF(fun_205) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_206) {
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

FUNCODEDEF(fun_207) {
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

FUNCODEDEF(fun_208) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_209) {
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

FUNCODEDEF(fun_210) {
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

FUNCODEDEF(fun_211) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_212) {
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

FUNCODEDEF(fun_213) {
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

FUNCODEDEF(fun_214) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_215) {
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

FUNCODEDEF(fun_216) {
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

FUNCODEDEF(fun_217) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)-1));
}

FUNCODEDEF(fun_218) {
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

FUNCODEDEF(fun_219) {
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

FUNCODEDEF(fun_220) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_221) {
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

FUNCODEDEF(fun_222) {
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

FUNCODEDEF(fun_223) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_224) {
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

FUNCODEDEF(fun_225) {
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

FUNCODEDEF(fun_226) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_227) {
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

FUNCODEDEF(fun_228) {
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

FUNCODEDEF(fun_229) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_230) {
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

FUNCODEDEF(fun_231) {
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

FUNCODEDEF(fun_232) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_233) {
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

FUNCODEDEF(fun_234) {
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

FUNCODEDEF(fun_235) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_236) {
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

FUNCODEDEF(fun_237) {
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

FUNCODEDEF(fun_238) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_239) {
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

FUNCODEDEF(fun_240) {
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

FUNCODEDEF(fun_241) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_242) {
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

FUNCODEDEF(fun_243) {
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

FUNCODEDEF(fun_244) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_245) {
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

FUNCODEDEF(fun_246) {
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

FUNCODEDEF(fun_247) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_248) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = fun_247;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_249) {
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

FUNCODEDEF(fun_250) {
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

FUNCODEDEF(fun_251) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_252) {
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

FUNCODEDEF(fun_253) {
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

FUNCODEDEF(fun_254) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_255) {
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

FUNCODEDEF(fun_256) {
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

FUNCODEDEF(fun_257) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_258) {
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

FUNCODEDEF(fun_259) {
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

FUNCODEDEF(fun_260) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_261) {
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

FUNCODEDEF(fun_262) {
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

FUNCODEDEF(fun_263) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_264) {
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

FUNCODEDEF(fun_265) {
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

FUNCODEDEF(fun_266) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_267) {
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

FUNCODEDEF(fun_268) {
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

FUNCODEDEF(fun_269) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_270) {
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

FUNCODEDEF(fun_271) {
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

FUNCODEDEF(fun_272) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_273) {
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

FUNCODEDEF(fun_274) {
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

FUNCODEDEF(fun_275) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

FUNCODEDEF(fun_276) {
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

FUNCODEDEF(fun_277) {
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

FUNCODEDEF(fun_278) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_279) {
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

FUNCODEDEF(fun_280) {
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

FUNCODEDEF(fun_281) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_282) {
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

FUNCODEDEF(fun_283) {
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

FUNCODEDEF(fun_284) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_285) {
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

FUNCODEDEF(fun_286) {
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

FUNCODEDEF(fun_287) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_288) {
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

FUNCODEDEF(fun_289) {
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

FUNCODEDEF(fun_290) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_291) {
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

FUNCODEDEF(fun_292) {
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

FUNCODEDEF(fun_293) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_294) {
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

FUNCODEDEF(fun_295) {
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

FUNCODEDEF(fun_296) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_297) {
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

FUNCODEDEF(fun_298) {
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

FUNCODEDEF(fun_299) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_300) {
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

FUNCODEDEF(fun_301) {
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

FUNCODEDEF(fun_302) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_303) {
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

FUNCODEDEF(fun_304) {
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

FUNCODEDEF(fun_305) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_306) {
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

FUNCODEDEF(fun_307) {
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

FUNCODEDEF(fun_308) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_309) {
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

FUNCODEDEF(fun_310) {
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

FUNCODEDEF(fun_311) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_312) {
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

FUNCODEDEF(fun_313) {
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

FUNCODEDEF(fun_314) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_315) {
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

FUNCODEDEF(fun_316) {
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

FUNCODEDEF(fun_317) {
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
  P parentF37;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(class_, 0);
loop:
  T2 = (P)YPclass_parents(class_);
  T1 = (P)YPhead(T2);
  parentF37 = T1;
  T4 = (P)YPclass_props(parentF37);
  T5 = (P)YPclass_direct_props(class_);
  T3 = (P)YPcat2(T4,T5);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPfinalize_propsX) {
  P name_,class_;
  P T0,T1,T2,T3,T4,T5;
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
  T3 = (P)YPib(T4);
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
  P T0,T1,T2,T3;
  P a1,a2;
DEFCREGS();
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOA(P x_,P y_) {
  P T0,T1,T2,T3;
  P a1,a2;
DEFCREGS();
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiA(T2,T3);
  T0 = (P)YPib(T1);
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

P YOnot(P x_) {
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
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPPlen(x_);
  T0 = (P)YPib(T1);
  return T0;
}

INLINE P YOoelt(P x_,P i_) {
  P T0,T1,T2,T3;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YPopts_location(x_);
  T3 = (P)YPiu(i_);
  T2 = (P)YPi_((P)0,T3);
  T0 = (P)YPloc_off(T1,T2);
  return T0;
}

INLINE P YOoelt_setter(P z_,P x_,P i_) {
  P T0,T1,T2,T3;
  P a1,a2,a3;
DEFCREGS();
loop:
  T1 = (P)YPopts_location(x_);
  T3 = (P)YPiu(i_);
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

FUNCODEDEF(fun_fnd_338) {
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
  P fndF38;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_338,2);
  fndF38 = T1;
  FUNINIT(fndF38, 2,test_,fndF38);
  T2 = CALL1(0,fndF38,c_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_340) {
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
  P fndF39;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_340,2);
  fndF39 = T1;
  FUNINIT(fndF39, 2,test_,fndF39);
  T2 = CALL2(0,fndF39,x_,y_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_342) {
  P count_,x_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  T1 = (P)YOEE(x_,Ynil);
  if (T1 != YPfalse) {
    T0 = VARREF(Ynul);
  } else {
    T3 = (P)YOE(count_,FREEREF(0));
    if (T3 != YPfalse) {
      T4 = (P)YOhead(x_);
      T2 = T4;
    } else {
      T6 = (P)YOA(count_,YPint((P)1));
      T7 = (P)YOtail(x_);
      a1 = T6;
      a2 = T7;
      count_ = a1;
      x_ = a2;
      goto loop;
      T2 = T5;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOelt) {
  P x_,key_;
  P fndF40;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_342,2);
  fndF40 = T1;
  FUNINIT(fndF40, 2,key_,fndF40);
  T2 = CALL2(1,fndF40,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_344) {
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
  P loopF41;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(f_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_344,3);
  loopF41 = T1;
  FUNINIT(loopF41, 3,x_,f_,loopF41);
  T2 = CALL1(0,loopF41,x_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_346) {
  P p_;
  P tmpF42;
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
    tmpF42 = T3;
    if (tmpF42 != YPfalse) {
      T5 = tmpF42;
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
  P fndF43;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_346,2);
  fndF43 = T1;
  FUNINIT(fndF43, 2,test_,fndF43);
  T2 = CALL1(0,fndF43,c_);
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

FUNCODEDEF(fun_do_351) {
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
  P doF44;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_do_351,2);
  doF44 = T1;
  FUNINIT(doF44, 2,f_,doF44);
  T2 = CALL2(0,doF44,x_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_353) {
  P x_,res_;
  P hF45;
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
    hF45 = T4;
    T6 = (P)YOtail(x_);
    T8 = CALL1(1,FREEREF(0),hF45);
    if (T8 != YPfalse) {
      T9 = (P)YOpair(hF45,res_);
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
  P doF46;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_do_353,2);
  doF46 = T1;
  FUNINIT(doF46, 2,f_,doF46);
  T2 = CALL2(0,doF46,x_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_355) {
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
  P doF47;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_do_355,2);
  doF47 = T1;
  FUNINIT(doF47, 2,f_,doF47);
  T2 = CALL1(0,doF47,x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_in_357) {
  P ds_,ss_;
  P tmpF48;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(ds_, 0);
  ARG(ss_, 1);
loop:
  T2 = (P)YOemptyQ(ds_);
  tmpF48 = T2;
  if (tmpF48 != YPfalse) {
    T3 = tmpF48;
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
  P inF49;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_357,2);
  inF49 = T1;
  FUNINIT(inF49, 2,dst_,inF49);
  T2 = CALL2(0,inF49,dst_,src_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_359) {
  P i_,res_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(res_, 1);
loop:
  T1 = (P)YOL(i_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = res_;
  } else {
    T3 = (P)YOA(i_,YPint((P)-1));
    T4 = (P)YOpair(VARREF(Ynul),res_);
    a1 = T3;
    a2 = T4;
    i_ = a1;
    res_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOfab) {
  P x_,s_;
  P fabF50;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_fab_359,1);
  fabF50 = T1;
  FUNINIT(fabF50, 1,fabF50);
  T2 = CALL2(1,fabF50,s_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_red_361) {
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
  P redF51;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
loop:
  T1 = FUNSHELL(1,fun_red_361,2);
  redF51 = T1;
  FUNINIT(redF51, 2,combine_,redF51);
  T2 = CALL2(0,redF51,init_,c_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_363) {
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
  P loopF52;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_363,1);
  loopF52 = T1;
  FUNINIT(loopF52, 1,loopF52);
  T2 = CALL2(0,loopF52,x_,Ynil);
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

FUNCODEDEF(fun_fnd_366) {
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
  P fndF53;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_366,2);
  fndF53 = T1;
  FUNINIT(fndF53, 2,f_,fndF53);
  T2 = CALL2(0,fndF53,c_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_368) {
  P y_;
  P T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T0 = (P)YOEE(FREEREF(0),y_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmemQ) {
  P c_,x_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T3 = FUNFAB(fun_368,1,x_);
  T2 = CALL2(1,VARREF(YOfind),T3,c_);
  T1 = (P)YOEE(T2,VARREF(Ynul));
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_370) {
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
  T2 = fun_370;
  T1 = CALL3(1,VARREF(YOfold),T2,Ynil,x_);
  T0 = CALL1(1,VARREF(YOrevX),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOlst_helper) {
  P objects_,i_,l_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(objects_, 0);
  ARG(i_, 1);
  ARG(l_, 2);
loop:
  T1 = (P)YOEE(i_,YPint((P)-1));
  if (T1 != YPfalse) {
    T0 = l_;
  } else {
    T3 = (P)YOA(i_,YPint((P)-1));
    T5 = (P)YOoelt(objects_,i_);
    T4 = (P)YOpair(T5,l_);
    T2 = CALL3(1,VARREF(YOlst_helper),objects_,T3,T4);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOopts_as_lst) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YOolen(x_);
  T1 = (P)YOA(T2,YPint((P)-1));
  T0 = CALL3(1,VARREF(YOlst_helper),x_,T1,Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOlst) {
  P objects_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  NARGS(objects_, 0);
loop:
  T2 = (P)YOolen(objects_);
  T1 = (P)YOA(T2,YPint((P)-1));
  T0 = CALL3(1,VARREF(YOlst_helper),objects_,T1,Ynil);
UNLINK_STACK();
  QRET(T0);
}

INLINE P YOtlen(P x_) {
  P T0,T1;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YPtlen(x_);
  T0 = (P)YPib(T1);
  return T0;
}

INLINE P YOtelt(P x_,P i_) {
  P T0,T1;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPtelt(x_,T1);
  return T0;
}

INLINE P YOtelt_setter(P z_,P x_,P i_) {
  P T0,T1;
  P a1,a2,a3;
DEFCREGS();
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPtelt_setter(z_,x_,T1);
  return T0;
}

FUNCODEDEF(fun_fnd_378) {
  P i_;
  P tmpF54;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = (P)YOL(i_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T4 = (P)YOtelt(FREEREF(0),i_);
    T3 = CALL1(1,FREEREF(1),T4);
    tmpF54 = T3;
    if (tmpF54 != YPfalse) {
      T5 = tmpF54;
    } else {
      T7 = (P)YOA(i_,YPint((P)-1));
      a1 = T7;
      i_ = a1;
      goto loop;
      T5 = T6;
    }
    T2 = T5;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOtanyQ) {
  P test_,c_;
  P fndF55;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_378,3);
  fndF55 = T1;
  FUNINIT(fndF55, 3,c_,test_,fndF55);
  T4 = (P)YOtlen(c_);
  T3 = (P)YOA(T4,YPint((P)-1));
  T2 = CALL1(0,fndF55,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_380) {
  P i_;
  P tmpF57;
  P tmpF56;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = (P)YOL(i_,YPint((P)0));
  tmpF56 = T1;
  if (tmpF56 != YPfalse) {
    T2 = tmpF56;
  } else {
    T5 = (P)YOtelt(FREEREF(0),i_);
    T6 = (P)YOtelt(FREEREF(1),i_);
    T4 = CALL2(1,FREEREF(2),T5,T6);
    tmpF57 = T4;
    if (tmpF57 != YPfalse) {
      T9 = (P)YOA(i_,YPint((P)-1));
      a1 = T9;
      i_ = a1;
      goto loop;
      T7 = T8;
    } else {
      T7 = YPfalse;
    }
    T3 = T7;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOtall2Q) {
  P test_,c1_,c2_;
  P fndF59;
  P tmpF58;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(c1_, 1);
  ARG(c2_, 2);
loop:
  T2 = (P)YOtlen(c1_);
  T3 = (P)YOtlen(c2_);
  T1 = (P)YOEE(T2,T3);
  tmpF58 = T1;
  if (tmpF58 != YPfalse) {
    T6 = FUNSHELL(1,fun_fnd_380,4);
    fndF59 = T6;
    FUNINIT(fndF59, 4,c1_,c2_,test_,fndF59);
    T9 = (P)YOtlen(c1_);
    T8 = (P)YOA(T9,YPint((P)-1));
    T7 = CALL1(0,fndF59,T8);
    T5 = T7;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_into_382) {
  P k_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(k_, 0);
loop:
  T2 = (P)YOE(k_,YPint((P)-1));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = (P)YOoelt(FREEREF(0),k_);
    (P)YOtelt_setter(T3,FREEREF(1),k_);
    T5 = (P)YOA(k_,YPint((P)-1));
    a1 = T5;
    k_ = a1;
    goto loop;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

INLINE P YPto_tup(P args_) {
  P intoF62;
  P tF61;
  P lF60;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
DEFCREGS();
loop:
  T1 = (P)YOolen(args_);
  lF60 = T1;
  T4 = (P)YPiu(lF60);
  T3 = (P)YPtup(T4,VARREF(Ynul));
  tF61 = T3;
  T5 = (P)YOE(lF60,YPint((P)2));
  if (T5 != YPfalse) {
    T6 = (P)YOoelt(args_,YPint((P)0));
    (P)YOtelt_setter(T6,tF61,YPint((P)0));
    T8 = (P)YOoelt(args_,YPint((P)1));
    T7 = (P)YOtelt_setter(T8,tF61,YPint((P)1));
  } else {
    T10 = FUNSHELL(1,fun_into_382,3);
    intoF62 = T10;
    FUNINIT(intoF62, 3,args_,tF61,intoF62);
    T12 = (P)YOA(lF60,YPint((P)-1));
    T11 = XCALL1(0,intoF62,T12);
    T9 = T11;
  }
  T2 = tF61;
  T0 = T2;
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
  P tmpF65;
  P tmpF64;
  P tmpF63;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = CALL1(1,VARREF(YOfun_arity),x_);
  T3 = CALL1(1,VARREF(YOfun_arity),y_);
  T1 = (P)YOE(T2,T3);
  tmpF63 = T1;
  if (tmpF63 != YPfalse) {
    T7 = CALL1(1,VARREF(YOfun_naryQ),x_);
    T8 = CALL1(1,VARREF(YOfun_naryQ),y_);
    T6 = (P)YOEE(T7,T8);
    tmpF64 = T6;
    if (tmpF64 != YPfalse) {
      T12 = CALL1(1,VARREF(YOfun_specs),x_);
      T13 = CALL1(1,VARREF(YOfun_specs),y_);
      T11 = CALL3(1,VARREF(YOall2Q),VARREF(YOsubtypeQ),T12,T13);
      tmpF65 = T11;
      if (tmpF65 != YPfalse) {
        T16 = CALL1(1,VARREF(YOfun_val),x_);
        T17 = CALL1(1,VARREF(YOfun_val),y_);
        T15 = CALL2(1,VARREF(YOsubtypeQ),T16,T17);
        T14 = T15;
      } else {
        T14 = YPfalse;
      }
      T10 = T14;
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T5 = T9;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_396) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_397) {
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

FUNCODEDEF(fun_398) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(Yincongruent_method_error),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_399) {
  P return_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T2 = CALL2(1,VARREF(Ylst),FREEREF(0),FREEREF(1));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_229),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_396;
  T4 = FUNFAB(fun_397,2,FREEREF(1),return_);
  T5 = FUNFAB(fun_398,2,FREEREF(0),FREEREF(1));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YLreplace_generic_restartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lop_400) {
  P specs_;
  P spec_classF68;
  P tmpF67;
  P specF66;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(specs_, 0);
loop:
  T2 = (P)YOemptyQ(specs_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = (P)YOhead(specs_);
    specF66 = T4;
    T8 = CALL1(1,VARREF(YOsingleton_specQ),specF66);
    tmpF67 = T8;
    if (tmpF67 != YPfalse) {
      T9 = tmpF67;
    } else {
      T10 = (P)YOEE(specF66,VARREF(YLanyG));
      T9 = T10;
    }
    T7 = T9;
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T12 = (P)YPobject_class(specF66);
      spec_classF68 = T12;
      T14 = (P)YPclass_gens(spec_classF68);
      T13 = (P)YOadd_new(T14,FREEREF(0));
      (P)YPclass_gens_setter(T13,spec_classF68);
      T16 = (P)YPclass_mets(spec_classF68);
      T15 = (P)YOadd_new(T16,FREEREF(1));
      (P)YPclass_mets_setter(T15,spec_classF68);
      T18 = (P)YOtail(specs_);
      a1 = T18;
      specs_ = a1;
      goto loop;
      T11 = T17;
      T5 = T11;
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

FUNCODEDEF(fun_col_401) {
  P mets_,sameQ_,gms_;
  P tmpF71;
  P now_sameQF70;
  P gmF69;
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
    gmF69 = T7;
    T9 = CALL2(1,VARREF(Yfun_same_metQ),gmF69,FREEREF(0));
    now_sameQF70 = T9;
    if (now_sameQF70 != YPfalse) {
      T12 = FREEREF(0);
    } else {
      T12 = gmF69;
    }
    T11 = (P)YOadd(mets_,T12);
    tmpF71 = now_sameQF70;
    if (tmpF71 != YPfalse) {
      T14 = tmpF71;
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
  P colF73;
  P lopF72;
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
      T5 = FUNFAB(fun_399,2,g_,m_);
      T4 = with_exit(T5);
      T3 = T4;
    } else {
      T6 = CALL2(1,VARREF(Yincongruent_method_error),g_,m_);
      T3 = T6;
    }
    T0 = T3;
  } else {
    T7 = FUNSHELL(1,fun_lop_400,3);
    lopF72 = T7;
    FUNINIT(lopF72, 3,g_,m_,lopF72);
    T9 = CALL1(1,VARREF(YOfun_specs),m_);
    T8 = CALL1(0,lopF72,T9);
    T10 = FUNSHELL(1,fun_col_401,3);
    colF73 = T10;
    FUNINIT(colF73, 3,m_,g_,colF73);
    T12 = CALL1(1,VARREF(YOfun_mets),g_);
    T11 = CALL3(1,colF73,Ynil,YPfalse,T12);
    T0 = g_;
  }
UNLINK_STACK();
  RET(T0);
}

INLINE P YOsubclassQ(P c1_,P c2_) {
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
DEFCREGS();
loop:
  T3 = (P)YPclass_row(c1_);
  T5 = (P)YPclass_id(c2_);
  T4 = (P)YPiu(T5);
  T2 = (P)YPselt(T3,T4);
  T6 = (P)YPiu(YPint((P)1));
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
  return T0;
}

P YOclass_isaQ(P o_,P c_) {
  P T0,T1;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YPclass_of(o_);
  T0 = (P)YOsubclassQ(T1,c_);
  return T0;
}

P YOsingleton_isaQ(P o_,P t_) {
  P T0,T1;
  P a1,a2;
DEFCREGS();
loop:
  T1 = (P)YPtype_object(t_);
  T0 = (P)YOEE(T1,o_);
  return T0;
}

FUNCODEDEF(YOisaQ) {
  P o_,t_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T2 = (P)YPclass_of(t_);
  T1 = (P)YOEE(T2,VARREF(YLclassG));
  if (T1 != YPfalse) {
    T3 = (P)YOclass_isaQ(o_,t_);
    T0 = T3;
  } else {
    T4 = CALL2(1,VARREF(YisaQ),o_,t_);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_407) {
  P ps_;
  P cF74;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(ps_, 0);
loop:
  T1 = (P)YOemptyQ(ps_);
  if (T1 != YPfalse) {
    T2 = CALL5(1,VARREF(Yerror),LITREF(lit_243),LITREF(lit_244),FREEREF(0),FREEREF(1),FREEREF(2));
    T0 = T2;
  } else {
    T4 = (P)YOhead(ps_);
    cF74 = T4;
    T6 = (P)YOEE(cF74,FREEREF(1));
    if (T6 != YPfalse) {
      T5 = YPtrue;
    } else {
      T8 = (P)YOEE(cF74,FREEREF(2));
      if (T8 != YPfalse) {
        T7 = YPfalse;
      } else {
        T10 = (P)YOtail(ps_);
        a1 = T10;
        ps_ = a1;
        goto loop;
        T7 = T9;
      }
      T5 = T7;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOclassL) {
  P c1_,c2_,wrt_;
  P findF75;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  ARG(wrt_, 2);
loop:
  T1 = FUNSHELL(1,fun_find_407,4);
  findF75 = T1;
  FUNINIT(findF75, 4,wrt_,c1_,c2_,findF75);
  T3 = (P)YPclass_ancestors(wrt_);
  T2 = CALL1(0,findF75,T3);
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
  P tmpF79;
  P tmpF78;
  P tmpF77;
  P tmpF76;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YOEE(t1_,t2_);
  tmpF76 = T1;
  if (tmpF76 != YPfalse) {
    T2 = tmpF76;
  } else {
    T6 = (P)YPclass_of(t1_);
    T5 = (P)YOEE(T6,VARREF(YLclassG));
    T4 = CALL1(1,VARREF(Ynot),T5);
    tmpF77 = T4;
    if (tmpF77 != YPfalse) {
      T11 = (P)YPclass_of(t2_);
      T10 = (P)YOEE(T11,VARREF(YLclassG));
      T9 = CALL1(1,VARREF(Ynot),T10);
      tmpF78 = T9;
      if (tmpF78 != YPfalse) {
        T14 = CALL2(1,VARREF(YOsubtypeQ),t1_,t2_);
        tmpF79 = T14;
        if (tmpF79 != YPfalse) {
          T16 = CALL2(1,VARREF(YOsubtypeQ),t2_,t1_);
          T15 = T16;
        } else {
          T15 = YPfalse;
        }
        T13 = T15;
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T8 = T12;
      T7 = T8;
    } else {
      T7 = YPfalse;
    }
    T3 = T7;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOsubtypeQ) {
  P t1_,t2_;
  P tmpF80;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T3 = (P)YPclass_of(t2_);
  T2 = (P)YOEE(T3,VARREF(YLclassG));
  tmpF80 = T2;
  if (tmpF80 != YPfalse) {
    T6 = (P)YPclass_of(t1_);
    T5 = (P)YOEE(T6,VARREF(YLclassG));
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T7 = (P)YOsubclassQ(t1_,t2_);
    T0 = T7;
  } else {
    T8 = CALL2(1,VARREF(YsubtypeQ),t1_,t2_);
    T0 = T8;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOmay_isaQ) {
  P c_,t_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T2 = (P)YPclass_of(t_);
  T1 = (P)YOEE(T2,VARREF(YLclassG));
  if (T1 != YPfalse) {
    T4 = (P)YOsubclassQ(c_,t_);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YOtup),YPtrue,YPtrue);
      T3 = T5;
    } else {
      T6 = CALL2(1,VARREF(YOtup),YPfalse,YPfalse);
      T3 = T6;
    }
    T0 = T3;
  } else {
    T7 = CALL2(1,VARREF(Ymay_isaQ),c_,t_);
    T0 = T7;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOorder_specs_class) {
  P t1_,t2_,arg_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T1 = (P)YOEE(t1_,t2_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YOtup),LITREF(lit_253),t1_);
    T0 = T2;
  } else {
    T5 = (P)YPclass_of(arg_);
    T4 = CALL3(1,VARREF(YOclassL),t1_,t2_,T5);
    if (T4 != YPfalse) {
      T6 = CALL2(1,VARREF(YOtup),LITREF(lit_254),t1_);
      T3 = T6;
    } else {
      T7 = CALL2(1,VARREF(YOtup),LITREF(lit_255),t2_);
      T3 = T7;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOorder_specs) {
  P t1_,t2_,arg_;
  P tmpF81;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T3 = (P)YPclass_of(t1_);
  T2 = (P)YOEE(T3,VARREF(YLclassG));
  tmpF81 = T2;
  if (tmpF81 != YPfalse) {
    T6 = (P)YPclass_of(t2_);
    T5 = (P)YOEE(T6,VARREF(YLclassG));
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T7 = CALL3(1,VARREF(YOorder_specs_class),t1_,t2_,arg_);
    T0 = T7;
  } else {
    T8 = CALL3(1,VARREF(Yorder_specs),t1_,t2_,arg_);
    T0 = T8;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_415) {
  P state_,idx_;
  P tmpF88;
  P tmpF87;
  P idxF86;
  P cmpF85;
  P cmpAtypF84;
  P m2specF83;
  P m1specF82;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(state_, 0);
  ARG(idx_, 1);
loop:
  T1 = (P)YOE(idx_,FREEREF(0));
  if (T1 != YPfalse) {
    T0 = state_;
  } else {
    T3 = CALL2(1,VARREF(Yfun_spec),FREEREF(1),idx_);
    m1specF82 = T3;
    T5 = CALL2(1,VARREF(Yfun_spec),FREEREF(2),idx_);
    m2specF83 = T5;
    T8 = (P)YOoelt(FREEREF(3),idx_);
    T7 = CALL3(1,VARREF(YOorder_specs),m1specF82,m2specF83,T8);
    check_type(T7,VARREF(YLtupG));
    cmpAtypF84 = T7;
    T10 = (P)YOtelt(cmpAtypF84,YPint((P)0));
    check_type(T10,VARREF(YLsymG));
    cmpF85 = T10;
    T12 = (P)YOA(idx_,YPint((P)1));
    check_type(T12,VARREF(YLprim_intG));
    idxF86 = T12;
    T14 = (P)YOEE(cmpF85,LITREF(lit_253));
    if (T14 != YPfalse) {
      a1 = state_;
      a2 = idxF86;
      state_ = a1;
      idx_ = a2;
      goto loop;
      T13 = T15;
    } else {
      T19 = (P)YOEE(cmpF85,LITREF(lit_262));
      T18 = CALL1(1,VARREF(Ynot),T19);
      tmpF87 = T18;
      if (tmpF87 != YPfalse) {
        T22 = (P)YOEE(state_,LITREF(lit_253));
        tmpF88 = T22;
        if (tmpF88 != YPfalse) {
          T23 = tmpF88;
        } else {
          T24 = (P)YOEE(cmpF85,state_);
          T23 = T24;
        }
        T21 = T23;
        T20 = T21;
      } else {
        T20 = YPfalse;
      }
      T17 = T20;
      if (T17 != YPfalse) {
        a1 = cmpF85;
        a2 = idxF86;
        state_ = a1;
        idx_ = a2;
        goto loop;
        T16 = T25;
      } else {
        T16 = LITREF(lit_262);
      }
      T13 = T16;
    }
    T11 = T13;
    T9 = T11;
    T6 = T9;
    T4 = T6;
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yorder_mets) {
  P m1_,m2_,args_;
  P loopF90;
  P arityF89;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(args_, 2);
loop:
  T1 = CALL1(1,VARREF(YOfun_arity),m1_);
  check_type(T1,VARREF(YLprim_intG));
  arityF89 = T1;
  T3 = FUNSHELL(1,fun_loop_415,5);
  loopF90 = T3;
  FUNINIT(loopF90, 5,arityF89,m1_,m2_,args_,loopF90);
  T4 = CALL2(1,loopF90,LITREF(lit_253),YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_417) {
  P l_;
  P t1F92;
  P tmpF91;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = (P)YOEE(l_,Ynil);
  tmpF91 = T1;
  if (tmpF91 != YPfalse) {
    T2 = tmpF91;
  } else {
    T4 = (P)YOtail(l_);
    t1F92 = T4;
    T5 = (P)YOtail(FREEREF(0));
    (P)YOtail_setter(T5,l_);
    (P)YOtail_setter(l_,FREEREF(0));
    a1 = t1F92;
    l_ = a1;
    goto loop;
    T3 = T6;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_make_ambiguous_418) {
  P headed_list_;
  P loopF93;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(headed_list_, 0);
loop:
  T0 = FUNSHELL(1,fun_loop_417,2);
  loopF93 = T0;
  FUNINIT(loopF93, 2,FREEREF(0),loopF93);
  T2 = (P)YOtail(headed_list_);
  T1 = CALL1(1,loopF93,T2);
  (P)YOtail_setter(Ynil,headed_list_);
  T5 = (P)YOtail(FREEREF(0));
  T4 = (P)YOpair(FREEREF(1),T5);
  T3 = (P)YOtail_setter(T4,FREEREF(0));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_loop_419) {
  P l_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = (P)YOEE(l_,Ynil);
  if (T1 != YPfalse) {
    T0 = YPtrue;
  } else {
    T5 = (P)YOhead(l_);
    T4 = CALL3(1,FREEREF(2),FREEREF(0),T5,FREEREF(1));
    T3 = (P)YOEE(T4,LITREF(lit_254));
    if (T3 != YPfalse) {
      T7 = (P)YOtail(l_);
      a1 = T7;
      l_ = a1;
      goto loop;
      T2 = T6;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_precedes_allQ_420) {
  P l_;
  P loopF94;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_419,4);
  loopF94 = T1;
  FUNINIT(loopF94, 4,FREEREF(0),FREEREF(1),FREEREF(2),loopF94);
  T2 = CALL1(1,loopF94,l_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_subsequent_ambiguities_421) {
  P oprev_;
  P tmpF95;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(oprev_, 0);
loop:
  T4 = (P)YOtail(oprev_);
  T3 = CALL1(1,FREEREF(0),T4);
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF95 = T2;
  if (tmpF95 != YPfalse) {
    T5 = tmpF95;
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

FUNCODEDEF(fun_insert_422) {
  P oprev_,osub_;
  P indicF96;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
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
    indicF96 = T4;
    T7 = (P)YOEE(indicF96,LITREF(lit_254));
    if (T7 != YPfalse) {
      T8 = CALL1(1,FREEREF(0),oprev_);
      T6 = T8;
    } else {
      T10 = (P)YOEE(indicF96,LITREF(lit_255));
      if (T10 != YPfalse) {
        T12 = (P)YOtail(osub_);
        a1 = osub_;
        a2 = T12;
        oprev_ = a1;
        osub_ = a2;
        goto loop;
        T9 = T11;
      } else {
        T13 = CALL1(1,FREEREF(5),oprev_);
        T9 = T13;
      }
      T6 = T9;
    }
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_423) {
  P mets_;
  P insertF101;
  P check_subsequent_ambiguitiesF100;
  P precedes_allQF99;
  P make_ambiguousF98;
  P metF97;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(mets_, 0);
loop:
  T2 = (P)YOEE(mets_,Ynil);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = (P)YOhead(mets_);
    check_type(T4,VARREF(YLmetG));
    metF97 = T4;
    T6 = FUNSHELL(1,fun_make_ambiguous_418,2);
    make_ambiguousF98 = T6;
    T7 = FUNSHELL(1,fun_precedes_allQ_420,3);
    precedes_allQF99 = T7;
    T8 = FUNSHELL(1,fun_check_subsequent_ambiguities_421,4);
    check_subsequent_ambiguitiesF100 = T8;
    T9 = FUNSHELL(1,fun_insert_422,6);
    insertF101 = T9;
    FUNINIT(make_ambiguousF98, 2,FREEREF(0),metF97);
    FUNINIT(precedes_allQF99, 3,metF97,FREEREF(1),FREEREF(2));
    FUNINIT(check_subsequent_ambiguitiesF100, 4,precedes_allQF99,FREEREF(0),make_ambiguousF98,metF97);
    FUNINIT(insertF101, 6,check_subsequent_ambiguitiesF100,metF97,FREEREF(1),FREEREF(2),insertF101,make_ambiguousF98);
    T10 = (P)YOtail(FREEREF(3));
    CALL2(1,insertF101,FREEREF(3),T10);
    T12 = (P)YOtail(mets_);
    a1 = T12;
    mets_ = a1;
    goto loop;
    T5 = T11;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yord_app_mets_1) {
  P mets_,args_,order_mets_;
  P loopF104;
  P aheadF103;
  P oheadF102;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(mets_, 0);
  ARG(args_, 1);
  ARG(order_mets_, 2);
loop:
  T1 = (P)YOpair(YPfalse,Ynil);
  check_type(T1,VARREF(YLlstG));
  oheadF102 = T1;
  T3 = (P)YOpair(YPfalse,Ynil);
  check_type(T3,VARREF(YLlstG));
  aheadF103 = T3;
  T4 = FUNSHELL(1,fun_loop_423,5);
  loopF104 = T4;
  FUNINIT(loopF104, 5,aheadF103,args_,order_mets_,oheadF102,loopF104);
  T5 = CALL1(1,loopF104,mets_);
  T7 = (P)YOtail(oheadF102);
  T8 = (P)YOtail(aheadF103);
  T6 = CALL2(1,VARREF(YOtup),T7,T8);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_425) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_loop_426) {
  P i_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = (P)YOE(i_,FREEREF(0));
  if (T1 != YPfalse) {
    T0 = YPtrue;
  } else {
    T4 = (P)YOoelt(FREEREF(1),i_);
    T5 = CALL2(1,VARREF(Yfun_spec),FREEREF(2),i_);
    T3 = CALL2(1,VARREF(YOisaQ),T4,T5);
    if (T3 != YPfalse) {
      T7 = (P)YOA(i_,YPint((P)1));
      a1 = T7;
      i_ = a1;
      goto loop;
      T2 = T6;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ymet_appQ) {
  P met_,args_;
  P loopF106;
  P nF105;
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
    check_type(T6,VARREF(YLprim_intG));
    nF105 = T6;
    T8 = FUNSHELL(1,fun_loop_426,4);
    loopF106 = T8;
    FUNINIT(loopF106, 4,nF105,args_,met_,loopF106);
    T9 = CALL1(1,loopF106,YPint((P)0));
    T7 = T9;
    T5 = T7;
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_428) {
  P ans_,ms_;
  P ansF108;
  P mF107;
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
    mF107 = T3;
    T6 = CALL2(1,VARREF(Ymet_appQ),mF107,FREEREF(0));
    if (T6 != YPfalse) {
      T7 = (P)YOpair(mF107,ans_);
      T5 = T7;
    } else {
      T5 = ans_;
    }
    ansF108 = T5;
    T9 = (P)YOtail(ms_);
    a1 = ansF108;
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
  P considered_metsF110;
  P colF109;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(gf_, 0);
  ARG(args_, 1);
loop:
  T2 = FUNSHELL(1,fun_col_428,2);
  colF109 = T2;
  FUNINIT(colF109, 2,args_,colF109);
  T4 = CALL1(1,VARREF(YOfun_mets),gf_);
  T3 = CALL2(0,colF109,Ynil,T4);
  T1 = T3;
  considered_metsF110 = T1;
  T5 = CALL3(1,VARREF(Yord_app_mets_1),considered_metsF110,args_,VARREF(Yorder_mets));
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
  P tmpF115;
  P nF114;
  P propQF113;
  P tmpF112;
  P propF111;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1,a2,a3;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  ARG(args_, 2);
loop:
  T1 = (P)YPmet_env(met_);
  propF111 = T1;
  tmpF112 = propF111;
  if (tmpF112 != YPfalse) {
    T6 = (P)YPclass_of(propF111);
    T5 = (P)YOEE(T6,VARREF(YLpropG));
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  propQF113 = T3;
  T8 = (P)YOolen(args_);
  nF114 = T8;
  tmpF115 = propQF113;
  if (tmpF115 != YPfalse) {
    T12 = (P)YOE(nF114,YPint((P)1));
    if (T12 != YPfalse) {
      T14 = (P)YOoelt(args_,YPint((P)0));
      T13 = CALL2(1,VARREF(Yprop_offset),T14,gen_);
      T11 = T13;
    } else {
      T16 = (P)YOoelt(args_,YPint((P)1));
      T17 = (P)YPprop_getter(propF111);
      T15 = CALL2(1,VARREF(Yprop_offset),T16,T17);
      T11 = T15;
    }
    T10 = T11;
  } else {
    T10 = YPfalse;
  }
  T9 = T10;
  T7 = T9;
  T2 = T7;
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
  P tmpF118;
  P tmpF117;
  P tmpF116;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YOsingleton_specQ),x_);
  tmpF116 = T1;
  if (tmpF116 != YPfalse) {
    T2 = tmpF116;
  } else {
    T4 = CALL1(1,VARREF(YOsubclass_specQ),x_);
    tmpF117 = T4;
    if (tmpF117 != YPfalse) {
      T5 = tmpF117;
    } else {
      T7 = CALL1(1,VARREF(YOunion_specQ),x_);
      tmpF118 = T7;
      if (tmpF118 != YPfalse) {
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

FUNCODEDEF(fun_442) {
  P met_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(met_, 0);
loop:
  T1 = CALL2(1,VARREF(Yfun_spec),met_,FREEREF(0));
  T0 = (P)YOE(T1,VARREF(YLanyG));
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
  T1 = FUNFAB(fun_442,1,pos_);
  T0 = CALL2(1,VARREF(YOallQ),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_444) {
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
  T1 = FUNFAB(fun_444,2,type_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_446) {
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
  T1 = FUNFAB(fun_446,1,pos_);
  T0 = CALL2(1,VARREF(YOmap),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_448) {
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
  T1 = fun_448;
  T2 = CALL2(1,VARREF(YOmets_specs_at),mets_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_450) {
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
  T1 = fun_450;
  T2 = CALL2(1,VARREF(YOmets_specs_at),mets_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_copy_452) {
  P i_;
  P iF119;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T2 = (P)YOE(i_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = (P)YOtelt(FREEREF(1),i_);
    (P)YOtelt_setter(T3,FREEREF(2),i_);
    T5 = (P)YOA(i_,YPint((P)1));
    iF119 = T5;
    T6 = (P)YOtelt(FREEREF(1),iF119);
    (P)YOtelt_setter(T6,FREEREF(2),iF119);
    T8 = (P)YOA(iF119,YPint((P)1));
    a1 = T8;
    i_ = a1;
    goto loop;
    T4 = T7;
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOcache_add) {
  P t_,k_,v_;
  P copyF122;
  P resF121;
  P olenF120;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(t_, 0);
  ARG(k_, 1);
  ARG(v_, 2);
loop:
  T1 = (P)YOtlen(t_);
  olenF120 = T1;
  T5 = (P)YOA(olenF120,YPint((P)2));
  T4 = (P)YPiu(T5);
  T3 = (P)YPtup(T4,VARREF(Ynul));
  resF121 = T3;
  T6 = FUNSHELL(1,fun_copy_452,4);
  copyF122 = T6;
  FUNINIT(copyF122, 4,olenF120,t_,resF121,copyF122);
  T7 = CALL1(0,copyF122,YPint((P)0));
  (P)YOtelt_setter(k_,resF121,olenF120);
  T8 = (P)YOA(olenF120,YPint((P)1));
  (P)YOtelt_setter(v_,resF121,T8);
  T2 = resF121;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_454) {
  P j_;
  P vF125;
  P valF124;
  P tmpF123;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(j_, 0);
loop:
  T2 = (P)YOtlen(FREEREF(0));
  T1 = (P)YOE(j_,T2);
  if (T1 != YPfalse) {
    T5 = (P)YOEE(FREEREF(1),VARREF(YOgen_cache_classes));
    tmpF123 = T5;
    if (tmpF123 != YPfalse) {
      T8 = BOXVAL(FREEREF(2));
      T7 = (P)YPclass_forward(T8);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T4 = T6;
    if (T4 != YPfalse) {
      CALL1(1,VARREF(Yupdate_instance_for_changed_class),FREEREF(3));
      T9 = (P)YPclass_of(FREEREF(3));
      BOXVAL(FREEREF(2)) = T9;
      T11 = CALL1(1,FREEREF(1),FREEREF(4));
      a1 = T11;
      j_ = a1;
      goto loop;
      T3 = T10;
    } else {
      T14 = (P)YOA(FREEREF(9),YPint((P)1));
      T13 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,FREEREF(6),YPfalse,FREEREF(7),FREEREF(8),T14,FREEREF(10));
      valF124 = T13;
      T17 = BOXVAL(FREEREF(2));
      T16 = CALL3(1,VARREF(YOcache_add),FREEREF(0),T17,valF124);
      T15 = CALL2(1,FREEREF(11),T16,FREEREF(4));
      T12 = T15;
      T3 = T12;
    }
    T0 = T3;
  } else {
    T20 = (P)YOtelt(FREEREF(0),j_);
    T21 = BOXVAL(FREEREF(2));
    T19 = (P)YOEE(T20,T21);
    if (T19 != YPfalse) {
      T24 = (P)YOA(j_,YPint((P)1));
      T23 = (P)YOtelt(FREEREF(0),T24);
      vF125 = T23;
      T26 = (P)YOA(FREEREF(9),YPint((P)1));
      T25 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,FREEREF(6),vF125,FREEREF(7),FREEREF(8),T26,FREEREF(10));
      T22 = T25;
      T18 = T22;
    } else {
      T28 = (P)YOA(j_,YPint((P)2));
      a1 = T28;
      j_ = a1;
      goto loop;
      T18 = T27;
    }
    T0 = T18;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss_1_using) {
  P key_,instance_,all_assocs_,all_assocs_setter_,gen_,cache_,mets_,sorted_mets_,i_,args_;
  P loopF129;
  P assocsF128;
  P cacheF127;
  P tmpF126;
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
  tmpF126 = cache_;
  if (tmpF126 != YPfalse) {
    T3 = tmpF126;
  } else {
    T4 = (P)YPgen_cache(YPtrue,i_,VARREF(YDnul_assocs),VARREF(YDnul_assocs),(P)0);
    T3 = T4;
  }
  T2 = T3;
  cacheF127 = T2;
  T6 = CALL1(1,all_assocs_,cacheF127);
  assocsF128 = T6;
  T7 = FUNSHELL(1,fun_loop_454,12);
  loopF129 = T7;
  FUNINIT(loopF129, 12,assocsF128,all_assocs_,key_,instance_,cacheF127,loopF129,gen_,mets_,sorted_mets_,i_,args_,all_assocs_setter_);
  T8 = CALL1(0,loopF129,YPint((P)0));
  T5 = cacheF127;
  T1 = T5;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_copy_456) {
  P k_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(k_, 0);
loop:
  T2 = (P)YOolen(FREEREF(0));
  T1 = (P)YOEE(T2,k_);
  if (T1 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T4 = (P)YOEE(k_,FREEREF(2));
    if (T4 != YPfalse) {
      T3 = FREEREF(3);
    } else {
      T5 = (P)YOoelt(FREEREF(0),k_);
      T3 = T5;
    }
    (P)YOoelt_setter(T3,FREEREF(1),k_);
    T7 = (P)YOA(k_,YPint((P)1));
    a1 = T7;
    k_ = a1;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOspecd_args) {
  P args_,i_,arg_;
  P copyF132;
  P rF131;
  P vF130;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(args_, 0);
  ARG(i_, 1);
  ARG(arg_, 2);
loop:
  T3 = (P)YOolen(args_);
  T2 = (P)YPiu(T3);
  T1 = (P)YPtup(T2,VARREF(Ynul));
  vF130 = T1;
  T8 = (P)YPtlen(vF130);
  T7 = (P)YPprop_dat_at(vF130,T8);
  T6 = (P)YPlb(T7);
  T10 = (P)YPtlen(vF130);
  T9 = (P)YPib(T10);
  T5 = (P)YPopts_tup(T6,T9,vF130);
  rF131 = T5;
  T12 = FUNSHELL(1,fun_copy_456,5);
  copyF132 = T12;
  FUNINIT(copyF132, 5,args_,rF131,i_,arg_,copyF132);
  T13 = CALL1(0,copyF132,YPint((P)0));
  T11 = T13;
  T4 = T11;
  T0 = T4;
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

FUNCODEDEF(fun_loop_459) {
  P singletons_;
  P app_metsF137;
  P smetsF136;
  P argsF135;
  P argF134;
  P singF133;
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
    singF133 = T3;
    T5 = (P)YPtype_object(singF133);
    argF134 = T5;
    T7 = CALL3(1,VARREF(YOspecd_args),FREEREF(1),FREEREF(2),argF134);
    argsF135 = T7;
    T9 = CALL2(1,VARREF(Ychoose_methods),FREEREF(3),argsF135);
    smetsF136 = T9;
    T11 = CALL3(1,VARREF(YOprune_mets_by_type_at),FREEREF(4),singF133,FREEREF(2));
    app_metsF137 = T11;
    CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,argF134,argF134,VARREF(YOgen_cache_singletons),VARREF(YOgen_cache_singletons_setter),FREEREF(3),FREEREF(0),FREEREF(4),smetsF136,FREEREF(2),argsF135);
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
  P loopF141;
  P cacheF140;
  P singletonsF139;
  P tmpF138;
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
  tmpF138 = cache_;
  if (tmpF138 != YPfalse) {
    T1 = tmpF138;
  } else {
    T3 = CALL2(1,VARREF(Yrequires_singleton_prec),mets_,i_);
    if (T3 != YPfalse) {
      T4 = (P)YPgen_cache(YPfalse,i_,VARREF(YDnul_assocs),VARREF(YDnul_assocs),(P)0);
      T2 = T4;
    } else {
      T6 = CALL2(1,VARREF(YOmets_singletons_at),mets_,i_);
      singletonsF139 = T6;
      T8 = (P)YOemptyQ(singletonsF139);
      if (T8 != YPfalse) {
        T7 = YPfalse;
      } else {
        T10 = (P)YPgen_cache(YPtrue,i_,VARREF(YDnul_assocs),VARREF(YDnul_assocs),(P)0);
        cacheF140 = T10;
        T12 = FUNSHELL(1,fun_loop_459,6);
        loopF141 = T12;
        FUNINIT(loopF141, 6,cacheF140,args_,i_,gen_,mets_,loopF141);
        T13 = CALL1(0,loopF141,singletonsF139);
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
  P app_metsF153;
  P classF152;
  P metsF151;
  P tmpF150;
  P tmpF149;
  P tmpF148;
  P singQF147;
  P cacheF146;
  P argF145;
  P tmpF144;
  P tmpF143;
  P tmpF142;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45;
  P a1,a2,a3,a4,a5,a6;
LINK_STACK();
  ARG(gen_, 0);
  ARG(ocache_, 1);
  ARG(mets_, 2);
  ARG(sorted_mets_, 3);
  ARG(i_, 4);
  ARG(args_, 5);
loop:
  T2 = CALL1(1,VARREF(YOfun_arity),gen_);
  T1 = (P)YOE(i_,T2);
  if (T1 != YPfalse) {
    T5 = (P)YOhead(sorted_mets_);
    T4 = CALL3(1,VARREF(Ymethod_accessor_offset),gen_,T5,args_);
    tmpF142 = T4;
    if (tmpF142 != YPfalse) {
      T6 = tmpF142;
    } else {
      T6 = sorted_mets_;
    }
    T3 = T6;
    T0 = T3;
  } else {
    tmpF143 = ocache_;
    if (tmpF143 != YPfalse) {
      T12 = (P)YPgen_cache_arg_pos(ocache_);
      T11 = (P)YOL(i_,T12);
      T10 = T11;
    } else {
      T10 = YPfalse;
    }
    T9 = T10;
    tmpF144 = T9;
    if (tmpF144 != YPfalse) {
      T13 = tmpF144;
    } else {
      T14 = CALL2(1,VARREF(YOmets_unspecialized_atQ),mets_,i_);
      T13 = T14;
    }
    T8 = T13;
    if (T8 != YPfalse) {
      T16 = (P)YOA(i_,YPint((P)1));
      T15 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,gen_,ocache_,mets_,sorted_mets_,T16,args_);
      T7 = T15;
    } else {
      if (YPtrue != YPfalse) {
        T19 = (P)YOoelt(args_,i_);
        argF145 = T19;
        T21 = CALLN(1,VARREF(Yensure_singleton_cache),6,gen_,ocache_,mets_,sorted_mets_,i_,args_);
        cacheF146 = T21;
        T25 = (P)YOhead(sorted_mets_);
        T24 = CALL2(1,VARREF(Yfun_spec),T25,i_);
        T23 = CALL1(1,VARREF(YOsingleton_specQ),T24);
        singQF147 = T23;
        tmpF148 = singQF147;
        if (tmpF148 != YPfalse) {
          T30 = (P)YOEE(ocache_,cacheF146);
          T29 = T30;
        } else {
          T29 = YPfalse;
        }
        T28 = T29;
        tmpF149 = T28;
        if (tmpF149 != YPfalse) {
          T31 = tmpF149;
        } else {
          tmpF150 = cacheF146;
          if (tmpF150 != YPfalse) {
            T35 = (P)YPgen_cache_missableQ(cacheF146);
            T34 = CALL1(1,VARREF(Ynot),T35);
            T33 = T34;
          } else {
            T33 = YPfalse;
          }
          T32 = T33;
          T31 = T32;
        }
        T27 = T31;
        if (T27 != YPfalse) {
          T38 = (P)YPsingleton(argF145);
          T37 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,T38,i_);
          metsF151 = T37;
          T39 = CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,argF145,argF145,VARREF(YOgen_cache_singletons),VARREF(YOgen_cache_singletons_setter),gen_,cacheF146,metsF151,sorted_mets_,i_,args_);
          T36 = T39;
          T26 = T36;
        } else {
          if (singQF147 != YPfalse) {
            T40 = cacheF146;
          } else {
            T42 = (P)YPclass_of(argF145);
            classF152 = T42;
            T44 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,classF152,i_);
            app_metsF153 = T44;
            T45 = CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,classF152,argF145,VARREF(YOgen_cache_classes),VARREF(YOgen_cache_classes_setter),gen_,cacheF146,app_metsF153,sorted_mets_,i_,args_);
            T43 = T45;
            T41 = T43;
            T40 = T41;
          }
          T26 = T40;
        }
        T22 = T26;
        T20 = T22;
        T18 = T20;
        T17 = T18;
      } else {
        T17 = YPfalse;
      }
      T7 = T17;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss) {
  P gen_,args_;
  P metsF154;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Ychoose_methods),gen_,args_);
  metsF154 = T1;
  T3 = (P)YPfun_cache(gen_);
  T4 = (P)YPgen_mets(gen_);
  T2 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,gen_,T3,T4,metsF154,YPint((P)0),args_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

INLINE P Ygen_lookup(P gen_,P args_) {
  P cF156;
  P tmpF155;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
DEFCREGS();
loop:
  T2 = (P)YPfun_cache(gen_);
  tmpF155 = T2;
  if (tmpF155 != YPfalse) {
    T3 = tmpF155;
  } else {
    T5 = XCALL2(1,VARREF(Ygen_lookup_miss),gen_,args_);
    T4 = (P)YPfun_cache_setter(T5,gen_);
    T3 = T4;
  }
  T1 = T3;
  cF156 = T1;
  T6 = (P)Ygen_lookup_1(gen_,cF156,args_);
  T0 = T6;
  return T0;
}

INLINE P Yprop_value_at(P object_,P offset_) {
  P propsF158;
  P valF157;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
DEFCREGS();
loop:
  T2 = (P)YPiu(offset_);
  T1 = (P)YPprop_elt(object_,T2);
  valF157 = T1;
  T4 = (P)YOEE(valF157,VARREF(Ynul_prop));
  if (T4 != YPfalse) {
    T6 = XCALL1(1,VARREF(Yobject_props),object_);
    propsF158 = T6;
    T10 = XCALL2(1,VARREF(YOelt),propsF158,offset_);
    T9 = (P)YPprop_init(T10);
    T8 = XCALL1(1,T9,object_);
    T11 = (P)YPiu(offset_);
    T7 = (P)YPprop_elt_setter(T8,object_,T11);
    T5 = T7;
    T3 = T5;
  } else {
    T3 = valF157;
  }
  T0 = T3;
  return T0;
}

P Yprop_bound_atQ(P object_,P offset_) {
  P propsF160;
  P valF159;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
DEFCREGS();
loop:
  T2 = (P)YPiu(offset_);
  T1 = (P)YPprop_elt(object_,T2);
  valF159 = T1;
  T4 = (P)YOEE(valF159,VARREF(Ynul_prop));
  if (T4 != YPfalse) {
    T6 = XCALL1(1,VARREF(Yobject_props),object_);
    propsF160 = T6;
    T10 = XCALL2(1,VARREF(YOelt),propsF160,offset_);
    T9 = (P)YPprop_init(T10);
    T8 = (P)YOEE(T9,VARREF(YPprop_unbound_error));
    T7 = XCALL1(1,VARREF(Ynot),T8);
    T5 = T7;
    T3 = T5;
  } else {
    T3 = YPtrue;
  }
  T0 = T3;
  return T0;
}

INLINE P Yprop_value_at_setter(P z_,P object_,P offset_) {
  P T0,T1;
  P a1,a2,a3;
DEFCREGS();
loop:
  T1 = (P)YPiu(offset_);
  T0 = (P)YPprop_elt_setter(z_,object_,T1);
  return T0;
}

INLINE P Ygen_lookup_1_using(P key_,P i_,P len_,P assocs_,P missableQ_,P gen_,P args_) {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
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
    T7 = (P)YOEE(T8,key_);
    if (T7 != YPfalse) {
      T11 = (P)YPiA(i_,(P)1);
      T10 = (P)YPtelt(assocs_,T11);
      T9 = (P)Ygen_lookup_1(gen_,T10,args_);
      T6 = T9;
    } else {
      T13 = (P)YPiA(i_,(P)2);
      a1 = key_;
      a2 = T13;
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
      T6 = T12;
    }
    T0 = T6;
  }
  return T0;
}

P Ygen_lookup_1(P gen_,P cache_,P args_) {
  P assocsF164;
  P valF163;
  P assocsF162;
  P argF161;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2,a3;
DEFCREGS();
loop:
  T2 = (P)YPclass_of(cache_);
  T1 = (P)YOEE(T2,VARREF(YLgen_cacheG));
  if (T1 != YPfalse) {
    T5 = (P)YPgen_cache_arg_pos(cache_);
    T4 = (P)YOoelt(args_,T5);
    argF161 = T4;
    T8 = (P)YPgen_cache_singletons(cache_);
    assocsF162 = T8;
    T10 = (P)YPtlen(assocsF162);
    T11 = (P)YPgen_cache_missableQ(cache_);
    T9 = (P)Ygen_lookup_1_using(argF161,(P)0,T10,assocsF162,T11,gen_,args_);
    T7 = T9;
    valF163 = T7;
    T13 = (P)YOEE(valF163,VARREF(YDmissed_dispatch));
    if (T13 != YPfalse) {
      T15 = (P)YPgen_cache_classes(cache_);
      assocsF164 = T15;
      T17 = (P)YPclass_of(argF161);
      T18 = (P)YPtlen(assocsF164);
      T16 = (P)Ygen_lookup_1_using(T17,(P)0,T18,assocsF164,YPfalse,gen_,args_);
      T14 = T16;
      T12 = T14;
    } else {
      T12 = valF163;
    }
    T6 = T12;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = cache_;
  }
  return T0;
}

FUNCODEDEF(Ychoose_methods) {
  P gen_,args_;
  P ambiguous_metsF167;
  P sorted_metsF166;
  P ord_amb_metsF165;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yord_app_metsT),gen_,args_);
  ord_amb_metsF165 = T1;
  T3 = (P)YOtelt(ord_amb_metsF165,YPint((P)0));
  sorted_metsF166 = T3;
  T5 = (P)YOtelt(ord_amb_metsF165,YPint((P)1));
  ambiguous_metsF167 = T5;
  T7 = (P)YOemptyQ(sorted_metsF166);
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(YOopts_as_lst),args_);
    T8 = CALL3(1,VARREF(Yerror),LITREF(lit_314),gen_,T9);
    T6 = T8;
  } else {
    T6 = sorted_metsF166;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPdispatch) {
  P args_;
  P resF169;
  P resultF168;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T2 = (P)YPfun_reg();
  T1 = (P)Ygen_lookup(T2,args_);
  resultF168 = T1;
  T5 = (P)YPclass_of(resultF168);
  T4 = (P)YOEE(T5,VARREF(YLprim_intG));
  if (T4 != YPfalse) {
    T9 = (P)YOolen(args_);
    T8 = (P)YOE(T9,YPint((P)1));
    if (T8 != YPfalse) {
      T11 = (P)YOoelt(args_,YPint((P)0));
      T10 = (P)Yprop_value_at(T11,resultF168);
      T7 = T10;
    } else {
      T13 = (P)YOoelt(args_,YPint((P)0));
      T14 = (P)YOoelt(args_,YPint((P)1));
      T12 = (P)Yprop_value_at_setter(T13,T14,resultF168);
      T7 = T12;
    }
    resF169 = T7;
    (P)YPunlink_stack();
    T6 = resF169;
    T3 = T6;
  } else {
    T16 = (P)YPhead(resultF168);
    T17 = (P)YPtail(resultF168);
    T15 = (P)YPraw_met_call(T16,T17);
    T3 = T15;
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
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPclass_of(x_);
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

FUNCODEDEF(fun_tailQ_486) {
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

FUNCODEDEF(fun_candidate_487) {
  P c_;
  P tmpF171;
  P tailQF170;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(0,fun_tailQ_486,1);
  tailQF170 = T1;
  FUNINIT(tailQF170, 1,c_);
  T4 = CALL2(1,VARREF(YOanyQ),tailQF170,FREEREF(0));
  T3 = CALL1(1,VARREF(Ynot),T4);
  tmpF171 = T3;
  if (tmpF171 != YPfalse) {
    T5 = c_;
  } else {
    T5 = YPfalse;
  }
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_candidate_at_head_488) {
  P l_;
  P tmpF172;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T2 = (P)YOemptyQ(l_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  tmpF172 = T1;
  if (tmpF172 != YPfalse) {
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

FUNCODEDEF(fun_del_next_489) {
  P l_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T2 = (P)YOhead(l_);
  T1 = (P)YOEE(T2,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = (P)YOtail(l_);
    T0 = T3;
  } else {
    T0 = l_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_merge_lists_490) {
  P partial_cpl_,remaining_lists_;
  P del_nextF176;
  P nextF175;
  P candidate_at_headF174;
  P candidateF173;
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
    T4 = FUNSHELL(1,fun_candidate_487,1);
    candidateF173 = T4;
    T5 = FUNSHELL(0,fun_candidate_at_head_488,1);
    candidate_at_headF174 = T5;
    FUNINIT(candidateF173, 1,remaining_lists_);
    FUNINIT(candidate_at_headF174, 1,candidateF173);
    T7 = CALL2(1,VARREF(YOanyQ),candidate_at_headF174,remaining_lists_);
    nextF175 = T7;
    if (nextF175 != YPfalse) {
      T10 = FUNSHELL(0,fun_del_next_489,1);
      del_nextF176 = T10;
      FUNINIT(del_nextF176, 1,nextF175);
      T12 = (P)YOpair(nextF175,partial_cpl_);
      T13 = CALL2(1,VARREF(YOmap),del_nextF176,remaining_lists_);
      a1 = T12;
      a2 = T13;
      partial_cpl_ = a1;
      remaining_lists_ = a2;
      goto loop;
      T9 = T11;
      T8 = T9;
    } else {
      T14 = CALL1(1,VARREF(Yerror),LITREF(lit_340));
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
  P merge_listsF178;
  P parentsF177;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = (P)YPclass_parents(c_);
  parentsF177 = T1;
  T3 = FUNSHELL(1,fun_merge_lists_490,1);
  merge_listsF178 = T3;
  FUNINIT(merge_listsF178, 1,merge_listsF178);
  T5 = CALL1(1,VARREF(YOlst),c_);
  T7 = CALL2(1,VARREF(YOmap),VARREF(YOclass_ancestors),parentsF177);
  T6 = (P)YOadd(T7,parentsF177);
  T4 = CALL2(1,merge_listsF178,T5,T6);
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
  P propsF179;
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
  propsF179 = T1;
  T6 = (P)YOlen(propsF179);
  (P)YPclass_prop_len_setter(T6,x_);
  T0 = propsF179;
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

FUNCODEDEF(fun_495) {
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

FUNCODEDEF(fun_496) {
  P ancestor_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(ancestor_, 0);
loop:
  T1 = (P)YPiu(YPint((P)1));
  T3 = (P)YPclass_id(ancestor_);
  T2 = (P)YPiu(T3);
  T0 = (P)YPselt_setter(T1,FREEREF(0),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yinit_class) {
  P x_;
  P rowF180;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YOL(VARREF(YDmax_classes),VARREF(YTnext_class_idT));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(Yerror),LITREF(lit_345),VARREF(YDmax_classes));
  } else {
  }
  T4 = (P)YPclass_parents(x_);
  T3 = (P)YOlen(T4);
  T2 = (P)YOEE(T3,YPint((P)0));
  if (T2 != YPfalse) {
    T5 = CALL1(1,VARREF(Yerror),LITREF(lit_346));
  } else {
  }
  (P)YPclass_id_setter(VARREF(YTnext_class_idT),x_);
  T6 = (P)YOA(VARREF(YTnext_class_idT),YPint((P)1));
  VARSET(YTnext_class_idT,T6);
  T8 = (P)YOEE(x_,VARREF(YLanyG));
  T7 = CALL1(1,VARREF(Ynot),T8);
  if (T7 != YPfalse) {
    T9 = FUNFAB(fun_495,1,x_);
    T10 = (P)YPclass_parents(x_);
    CALL2(1,VARREF(YOdo),T9,T10);
    T12 = CALL1(1,VARREF(Yclass_ordered_ancestors),x_);
    T11 = (P)YPclass_ancestors_setter(T12,x_);
  } else {
  }
  T15 = (P)YPiu(VARREF(YDmax_classes));
  T16 = (P)YPiu(YPint((P)0));
  T14 = (P)YPstr(T15,T16);
  rowF180 = T14;
  (P)YPclass_row_setter(rowF180,x_);
  T17 = FUNFAB(fun_496,1,rowF180);
  T18 = (P)YPclass_ancestors(x_);
  CALL2(1,VARREF(YOdo),T17,T18);
  T19 = CALL1(1,VARREF(Yclass_ordered_props),x_);
  (P)YPclass_props_setter(T19,x_);
  T13 = x_;
UNLINK_STACK();
  QRET(T13);
}

FUNCODEDEF(Yfab_class) {
  P name_,parents_;
  P xF181;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(parents_, 1);
loop:
  T1 = (P)YPclass(YPint((P)0),name_,parents_,Ynil,Ynil,Ynil,Ynil,Ynil,Ynil,YPfalse,YPfalse,YPint((P)-1),VARREF(Ynul));
  xF181 = T1;
  CALL1(1,VARREF(Yinit_class),xF181);
  T0 = xF181;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yrefab_class) {
  P old_class_,parents_;
  P new_classF182;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(old_class_, 0);
  ARG(parents_, 1);
loop:
  T2 = (P)YPclass_direct_props(old_class_);
  T1 = CALL2(1,VARREF(Yfab_class),parents_,T2);
  new_classF182 = T1;
  (P)YPclass_forward_setter(new_classF182,old_class_);
  T0 = new_classF182;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yobject_props) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPclass_of(x_);
  T0 = (P)YPclass_props(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yobject_parents) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPclass_of(x_);
  T0 = (P)YPclass_parents(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yensure_fresh_object) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = (P)YPclass_of(x_);
  T1 = (P)YPclass_forward(T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yupdate_instance_for_changed_class),x_);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_503) {
  P i_,props_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
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
    T3 = (P)YOEE(T4,FREEREF(0));
    if (T3 != YPfalse) {
      T2 = i_;
    } else {
      T7 = (P)YOA(i_,YPint((P)1));
      T8 = (P)YOtail(props_);
      a1 = T7;
      a2 = T8;
      i_ = a1;
      props_ = a2;
      goto loop;
      T2 = T6;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_offset) {
  P object_,getter_;
  P loopF183;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_503,2);
  loopF183 = T1;
  FUNINIT(loopF183, 2,getter_,loopF183);
  T3 = CALL1(1,VARREF(Yobject_props),object_);
  T2 = CALL2(0,loopF183,YPint((P)0),T3);
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
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_359));
    T0 = T1;
  } else {
    T0 = VARREF(Ynul);
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_value) {
  P object_,getter_;
  P offsetF184;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
loop:
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T1 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF184 = T1;
  T3 = (P)YOE(offsetF184,VARREF(YDgetter_not_found));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(Yerror),LITREF(lit_361),getter_,object_);
    T2 = T4;
  } else {
    T5 = (P)Yprop_value_at(object_,offsetF184);
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_boundQ) {
  P object_,getter_;
  P offsetF185;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
loop:
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T1 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF185 = T1;
  T3 = (P)YOE(offsetF185,VARREF(YDgetter_not_found));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(Yerror),LITREF(lit_363),getter_,object_);
    T2 = T4;
  } else {
    T5 = (P)Yprop_bound_atQ(object_,offsetF185);
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_508) {
  P i_,props_;
  P propF186;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(props_, 1);
loop:
  T1 = (P)YOemptyQ(props_);
  if (T1 != YPfalse) {
    T2 = CALL3(1,VARREF(Yerror),LITREF(lit_365),FREEREF(0),FREEREF(1));
    T0 = T2;
  } else {
    T4 = (P)YOhead(props_);
    propF186 = T4;
    T7 = (P)YPprop_getter(propF186);
    T6 = (P)YOEE(T7,FREEREF(0));
    if (T6 != YPfalse) {
      T10 = (P)YPprop_type(propF186);
      T9 = CALL2(1,VARREF(YOisaQ),FREEREF(2),T10);
      if (T9 != YPfalse) {
        T11 = (P)Yprop_value_at_setter(FREEREF(2),FREEREF(1),i_);
        T8 = T11;
      } else {
        T12 = CALL1(1,VARREF(Yerror),LITREF(lit_366));
        T8 = T12;
      }
      T5 = T8;
    } else {
      T14 = (P)YOA(i_,YPint((P)1));
      T15 = (P)YOtail(props_);
      a1 = T14;
      a2 = T15;
      i_ = a1;
      props_ = a2;
      goto loop;
      T5 = T13;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_value_setter) {
  P z_,object_,getter_;
  P loopF187;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(object_, 1);
  ARG(getter_, 2);
loop:
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T1 = FUNSHELL(1,fun_loop_508,4);
  loopF187 = T1;
  FUNINIT(loopF187, 4,getter_,object_,z_,loopF187);
  T3 = CALL1(1,VARREF(Yobject_props),object_);
  T2 = CALL2(0,loopF187,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_510) {
  P mets_;
  P metF188;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(mets_, 0);
loop:
  T1 = (P)YOemptyQ(mets_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Yerror),LITREF(lit_368));
    T0 = T2;
  } else {
    T4 = (P)YOhead(mets_);
    metF188 = T4;
    T7 = CALL2(1,VARREF(Yfun_spec),metF188,YPint((P)0));
    T6 = (P)YOEE(T7,FREEREF(0));
    if (T6 != YPfalse) {
      T5 = metF188;
    } else {
      T9 = (P)YOtail(mets_);
      a1 = T9;
      mets_ = a1;
      goto loop;
      T5 = T8;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfind_getter) {
  P owner_,getter_;
  P loopF189;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_510,2);
  loopF189 = T1;
  FUNINIT(loopF189, 2,owner_,loopF189);
  T3 = CALL1(1,VARREF(YOfun_mets),getter_);
  T2 = CALL1(0,loopF189,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_512) {
  P mets_;
  P tmpF191;
  P metF190;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(mets_, 0);
loop:
  T1 = (P)YOemptyQ(mets_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Yerror),LITREF(lit_371));
    T0 = T2;
  } else {
    T4 = (P)YOhead(mets_);
    metF190 = T4;
    T8 = CALL2(1,VARREF(Yfun_spec),metF190,YPint((P)1));
    T7 = (P)YOEE(T8,FREEREF(0));
    tmpF191 = T7;
    if (tmpF191 != YPfalse) {
      T11 = CALL2(1,VARREF(Yfun_spec),metF190,YPint((P)0));
      T10 = CALL2(1,VARREF(YOtype_equalQ),T11,FREEREF(1));
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T6 = T9;
    if (T6 != YPfalse) {
      T5 = metF190;
    } else {
      T13 = (P)YOtail(mets_);
      a1 = T13;
      mets_ = a1;
      goto loop;
      T5 = T12;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfind_setter) {
  P owner_,type_,zetter_;
  P loopF192;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(owner_, 0);
  ARG(type_, 1);
  ARG(zetter_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_512,3);
  loopF192 = T1;
  FUNINIT(loopF192, 3,owner_,type_,loopF192);
  T3 = CALL1(1,VARREF(YOfun_mets),zetter_);
  T2 = CALL1(0,loopF192,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_514) {
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
  P new_classF193;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(old_class_, 0);
loop:
  T1 = (P)YPclone(old_class_);
  new_classF193 = T1;
  T2 = fun_514;
  T3 = (P)YPclass_gens(old_class_);
  CALL2(1,VARREF(YOdo),T2,T3);
  T4 = (P)YPclass_forward_setter(new_classF193,old_class_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_visit_516) {
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
  P visitF195;
  P visitedF194;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  visitedF194 = Ynil;
  visitedF194 = BOXFAB(visitedF194);
  T3 = FUNSHELL(0,fun_visit_516,3);
  visitF195 = T3;
  FUNINIT(visitF195, 3,visitedF194,f_,visitF195);
  T4 = CALL1(0,visitF195,x_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_518) {
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
  T2 = fun_518;
  T3 = (P)YPclass_props(class_);
  T1 = CALL2(1,VARREF(YOdo),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YPprop) {
  P owner_,getter_,setter_,type_,init_;
  P setter_metF199;
  P getter_metF198;
  P propF197;
  P classF196;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  ARG(setter_, 2);
  ARG(type_, 3);
  ARG(init_, 4);
loop:
  classF196 = owner_;
  T2 = CALLN(1,VARREF(YOnew),11,VARREF(YLpropG),VARREF(Yprop_owner),owner_,VARREF(Yprop_getter),getter_,VARREF(Yprop_setter),setter_,VARREF(Yprop_type),type_,VARREF(Yprop_init),init_);
  propF197 = T2;
  T4 = CALL2(1,VARREF(Yfind_getter),owner_,getter_);
  getter_metF198 = T4;
  T6 = CALL3(1,VARREF(Yfind_setter),owner_,type_,setter_);
  setter_metF199 = T6;
  (P)YPmet_env_setter(propF197,getter_metF198);
  (P)YPmet_env_setter(propF197,setter_metF199);
  T8 = (P)YPclass_direct_props(classF196);
  T9 = CALL1(1,VARREF(YOlst),propF197);
  T7 = CALL2(1,VARREF(YOcat2),T8,T9);
  (P)YPclass_direct_props_setter(T7,classF196);
  CALL2(1,VARREF(YOdo_descendents),VARREF(Yfinalize_props),owner_);
  T5 = propF197;
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
  P gF200;
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
  gF200 = T1;
  T4 = (P)YPmet_code(VARREF(YPdispatch));
  (P)YPgen_code_setter(T4,gF200);
  T0 = gF200;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_525) {
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
  P specsF201;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = fun_525;
  T3 = CALL1(1,VARREF(YOfun_specs),x_);
  T1 = CALL2(1,VARREF(YOmap),T2,T3);
  specsF201 = T1;
  T5 = CALL1(1,VARREF(Yfun_name),x_);
  T6 = CALL1(1,VARREF(YOfun_naryQ),x_);
  T4 = CALLN(1,VARREF(Yfab_gen),6,T5,Ynil,specsF201,T6,VARREF(YLanyG),Ynil);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPdefine_method) {
  P gen_,met_;
  P tmpF202;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
loop:
  tmpF202 = gen_;
  if (tmpF202 != YPfalse) {
    T2 = tmpF202;
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

FUNCODEDEF(fun_loop_529) {
  P i_;
  P valF204;
  P getterF203;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = (P)YOL(i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = (P)YOoelt(FREEREF(1),i_);
    getterF203 = T3;
    T6 = (P)YOA(i_,YPint((P)1));
    T5 = (P)YOoelt(FREEREF(1),T6);
    valF204 = T5;
    CALL3(1,VARREF(Yprop_value_setter),valF204,FREEREF(2),getterF203);
    T8 = (P)YOA(i_,YPint((P)2));
    a1 = T8;
    i_ = a1;
    goto loop;
    T4 = T7;
    T2 = T4;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

INLINE P YPnew(P parent_,P inits_) {
  P loopF207;
  P numF206;
  P objectF205;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
DEFCREGS();
loop:
  T3 = (P)YPclass_prop_len(parent_);
  T2 = (P)YPiu(T3);
  T1 = (P)YPobject_of(parent_,T2);
  objectF205 = T1;
  T5 = (P)YOolen(inits_);
  numF206 = T5;
  T6 = FUNSHELL(1,fun_loop_529,4);
  loopF207 = T6;
  FUNINIT(loopF207, 4,numF206,inits_,objectF205,loopF207);
  T7 = XCALL1(0,loopF207,YPint((P)0));
  T4 = objectF205;
  T0 = T4;
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

FUNCODEDEF(fun_new_532) {
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

FUNCODEDEF(fun_533) {
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

FUNCODEDEF(fun_subtypeQ_534) {
  P t1_,t2_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = FUNFAB(fun_533,1,t2_);
  T2 = (P)YPunion_elts(t1_);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_535) {
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

FUNCODEDEF(fun_subtypeQ_536) {
  P t1_,t2_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = FUNFAB(fun_535,1,t1_);
  T2 = (P)YPunion_elts(t2_);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_537) {
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

FUNCODEDEF(fun_subtypeQ_538) {
  P t1_,t2_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = FUNFAB(fun_537,1,t2_);
  T2 = (P)YPunion_elts(t1_);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_539) {
  P t1_,t2_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T0 = (P)YOsubclassQ(t1_,t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_540) {
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

FUNCODEDEF(fun_subtypeQ_541) {
  P t1_,t2_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T0 = (P)YOsubclassQ(VARREF(YLclassG),t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_542) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_543) {
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

FUNCODEDEF(fun_subtypeQ_544) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_545) {
  P t1_,t2_;
  P tmpF208;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YOEE(t1_,VARREF(YLclassG));
  tmpF208 = T1;
  if (tmpF208 != YPfalse) {
    T4 = (P)YPtype_class(t2_);
    T3 = (P)YOEE(T4,VARREF(YLclassG));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_546) {
  P t1_,t2_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YPtype_class(t1_);
  T2 = (P)YPtype_class(t2_);
  T0 = (P)YOsubclassQ(T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_547) {
  P t1_,t2_;
  P tmpF209;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T2 = (P)YPtype_object(t1_);
  T1 = CALL2(1,VARREF(YOisaQ),T2,VARREF(YLclassG));
  tmpF209 = T1;
  if (tmpF209 != YPfalse) {
    T5 = (P)YPtype_object(t1_);
    T6 = (P)YPtype_class(t2_);
    T4 = (P)YOsubclassQ(T5,T6);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_548) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_549) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_550) {
  P t1_,t2_;
  P tmpF212;
  P teT2F211;
  P teT1F210;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YPproduct_elts(t1_);
  teT1F210 = T1;
  T3 = (P)YPproduct_elts(t2_);
  teT2F211 = T3;
  T6 = (P)YOtlen(teT1F210);
  T7 = (P)YOtlen(teT2F211);
  T5 = (P)YOEE(T6,T7);
  tmpF212 = T5;
  if (tmpF212 != YPfalse) {
    T9 = CALL3(1,VARREF(YOtall2Q),VARREF(YsubtypeQ),teT1F210,teT2F211);
    T8 = T9;
  } else {
    T8 = YPfalse;
  }
  T4 = T8;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_551) {
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

FUNCODEDEF(fun_isaQ_552) {
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

FUNCODEDEF(fun_isaQ_553) {
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

FUNCODEDEF(fun_isaQ_554) {
  P o_,t_;
  P tmpF213;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YOisaQ),o_,VARREF(YLclassG));
  tmpF213 = T1;
  if (tmpF213 != YPfalse) {
    T4 = (P)YPtype_class(t_);
    T3 = (P)YOsubclassQ(o_,T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_555) {
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

FUNCODEDEF(fun_isaQ_556) {
  P o_,u_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(u_, 1);
loop:
  T1 = FUNFAB(fun_555,1,o_);
  T2 = (P)YPunion_elts(u_);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isaQ_557) {
  P o_,t_;
  P tmpF216;
  P tmpF215;
  P teTF214;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T1 = (P)YPproduct_elts(t_);
  teTF214 = T1;
  T3 = CALL2(1,VARREF(YisaQ),o_,VARREF(YLtupG));
  tmpF215 = T3;
  if (tmpF215 != YPfalse) {
    T7 = (P)YOtlen(o_);
    T8 = (P)YOtlen(teTF214);
    T6 = (P)YOEE(T7,T8);
    tmpF216 = T6;
    if (tmpF216 != YPfalse) {
      T10 = CALL3(1,VARREF(YOtall2Q),VARREF(YisaQ),o_,teTF214);
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T5 = T9;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_558) {
  P t1_,t2_,arg_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_253),t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_559) {
  P t1_,t2_,arg_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_254),t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_560) {
  P t1_,t2_,arg_;
  P c2F218;
  P c1F217;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T1 = (P)YPtype_class(t1_);
  c1F217 = T1;
  T3 = (P)YPtype_class(t2_);
  c2F218 = T3;
  T5 = (P)YOEE(c1F217,c2F218);
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(YOtup),LITREF(lit_253),t1_);
    T4 = T6;
  } else {
    T8 = CALL3(1,VARREF(YOclassL),c1F217,c2F218,arg_);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YOtup),LITREF(lit_254),t1_);
      T7 = T9;
    } else {
      if (YPtrue != YPfalse) {
        T11 = CALL2(1,VARREF(YOtup),LITREF(lit_255),t2_);
        T10 = T11;
      } else {
        T10 = YPfalse;
      }
      T7 = T10;
    }
    T4 = T7;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_561) {
  P t1_,t2_,arg_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T2 = CALL2(1,VARREF(YOsubtypeQ),VARREF(YLclassG),t2_);
  if (T2 != YPfalse) {
    T4 = (P)YOEE(t1_,VARREF(YLanyG));
    if (T4 != YPfalse) {
      T5 = CALL3(1,VARREF(Yorder_specs),VARREF(YLclassG),t2_,arg_);
      T3 = T5;
    } else {
      T3 = LITREF(lit_254);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_262);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_562) {
  P t1_,t2_,arg_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T2 = CALL2(1,VARREF(YOsubtypeQ),VARREF(YLclassG),t1_);
  if (T2 != YPfalse) {
    T4 = (P)YOEE(t2_,VARREF(YLanyG));
    if (T4 != YPfalse) {
      T5 = CALL3(1,VARREF(Yorder_specs),t1_,VARREF(YLclassG),arg_);
      T3 = T5;
    } else {
      T3 = LITREF(lit_255);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_262);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_563) {
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

FUNCODEDEF(fun_order_specs_564) {
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
      T3 = LITREF(lit_253);
    } else {
      T3 = LITREF(lit_254);
    }
    T2 = CALL2(1,VARREF(YOtup),T3,t1_);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YOsubtypeQ),t2_,t1_);
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YOtup),LITREF(lit_255),t2_);
      T5 = T7;
    } else {
      T8 = CALL2(1,VARREF(YOtup),LITREF(lit_262),VARREF(YLanyG));
      T5 = T8;
    }
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_565) {
  P c_,t_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = (P)YOsubclassQ(c_,t_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YOtup),YPtrue,YPtrue);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(YOtup),YPfalse,YPfalse);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_566) {
  P c_,t_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T3 = (P)YPtype_object(t_);
  T2 = (P)YPclass_of(T3);
  T1 = CALL2(1,VARREF(YOmay_isaQ),T2,c_);
  T0 = CALL2(1,VARREF(YOtup),T1,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_567) {
  P c_,t_;
  P tmpF220;
  P classQF219;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YOsubtypeQ),c_,VARREF(YLclassG));
  classQF219 = T1;
  tmpF220 = classQF219;
  if (tmpF220 != YPfalse) {
    T6 = (P)YPtype_class(c_);
    T5 = (P)YOEE(T6,VARREF(YLanyG));
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  T2 = CALL2(1,VARREF(YOtup),classQF219,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_568) {
  P someQ_,allQ_,elts_;
  P tmpF225;
  P tmpF224;
  P elt_allQF223;
  P elt_someQF222;
  P elt_some_allQF221;
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
    elt_some_allQF221 = T4;
    T7 = (P)YOtelt(elt_some_allQF221,YPint((P)0));
    elt_someQF222 = T7;
    T9 = (P)YOtelt(elt_some_allQF221,YPint((P)1));
    elt_allQF223 = T9;
    tmpF224 = elt_someQF222;
    if (tmpF224 != YPfalse) {
      T12 = tmpF224;
    } else {
      T12 = someQ_;
    }
    T11 = T12;
    tmpF225 = elt_allQF223;
    if (tmpF225 != YPfalse) {
      T14 = tmpF225;
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

FUNCODEDEF(fun_may_isaQ_569) {
  P c_,t_;
  P loopF226;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_568,2);
  loopF226 = T1;
  FUNINIT(loopF226, 2,c_,loopF226);
  T3 = (P)YPunion_elts(t_);
  T2 = CALL3(0,loopF226,YPfalse,YPfalse,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_570) {
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

FUNCODEDEF(fun_may_isaQ_571) {
  P c_,t_;
  P someQF229;
  P tmpF228;
  P tupQF227;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = (P)YOEE(c_,VARREF(YLtupG));
  tupQF227 = T1;
  tmpF228 = tupQF227;
  if (tmpF228 != YPfalse) {
    T6 = fun_570;
    T7 = (P)YPproduct_elts(t_);
    T5 = CALL2(1,VARREF(YOtanyQ),T6,T7);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  someQF229 = T3;
  T8 = CALL2(1,VARREF(Ytup),tupQF227,someQF229);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

P YPmacro(P modname_,P name_,P expander_) {
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
DEFCREGS();
loop:
  if (VARREF(YTmacros_okQT) != YPfalse) {
    T1 = XCALL4(1,VARREF(YPPmacro),modname_,name_,expander_,YPfalse);
    T0 = T1;
  } else {
    T2 = (P)YOpair(modname_,VARREF(YTboot_macro_module_namesT));
    VARSET(YTboot_macro_module_namesT,T2);
    T3 = (P)YOpair(name_,VARREF(YTboot_macro_namesT));
    VARSET(YTboot_macro_namesT,T3);
    T5 = (P)YOpair(expander_,VARREF(YTboot_macro_expandersT));
    T4 = VARSET(YTboot_macro_expandersT,T5);
    T0 = T4;
  }
  return T0;
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
  P T0,T1,T2,T3,T4;
DEFCREGS();
loop:
  VARSET(YPfalse,(P)0);
  VARSET(YPtrue,(P)1);
  VARSET(YPTused_symbols_too_earlyT,(P)0);
  T0 = (P)YPobject_of((P)0,(P)10);
  VARSET(YLclassG,T0);
  T1 = (P)YPobject_of(VARREF(YLclassG),(P)10);
  VARSET(YLlstG,T1);
  T4 = (P)YPobject_of(VARREF(YLlstG),(P)2);
  T3 = VARSET(Ynil,T4);
  T2 = T3;
  return T2;
}

P Y___main_3___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
DEFCREGS();
loop:
  VARSET(Yone_nil,VARREF(Ynil));
  T0 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLanyG,T0);
  T1 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlogG,T1);
  T2 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLmagG,T2);
  T3 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLchrG,T3);
  T4 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLnumG,T4);
  T5 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLintG,T5);
  T6 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLprim_intG,T6);
  T7 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfloG,T7);
  T8 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlocG,T8);
  T9 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLrepG,T9);
  T10 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolG,T10);
  T11 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolIG,T11);
  T12 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolXG,T12);
  T13 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqG,T13);
  T14 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqIG,T14);
  T15 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqXG,T15);
  T16 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlstG,T16);
  T17 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLflatG,T17);
  T18 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLtupG,T18);
  T19 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLstrG,T19);
  T20 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsymG,T20);
  T21 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLtypeG,T21);
  T22 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLclassG,T22);
  T23 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsingletonG,T23);
  T24 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsubclassG,T24);
  T25 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLunionG,T25);
  T26 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLproductG,T26);
  T27 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLpropG,T27);
  T28 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLgen_cacheG,T28);
  T29 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsigG,T29);
  T30 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfunG,T30);
  T31 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLmetG,T31);
  T32 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLgenG,T32);
  T33 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLoptsG,T33);
  T34 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLopts_tupG,T34);
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLanyG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLlogG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLmagG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLchrG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLnumG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLintG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLprim_intG));
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
  T36 = (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLunionG));
  T35 = T36;
  return T35;
}

P Y___main_4___() {
  P T0,T1,T2,T3,T4,T5,T6;
DEFCREGS();
loop:
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
  VARSET(YPmet_prop_len,(P)4);
  VARSET(YPsymbols_readyQ,YPfalse);
  VARSET(YPTstart_running_atT,VARREF(Ynil));
  T5 = (P)YPraw_alloc((P)4);
  VARSET(YDdirect_object_class,T5);
  T6 = YPfalse;
  return T6;
}

P Y___main_5___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53;
DEFCREGS();
loop:
  (P)YPelt_setter(VARREF(YLprim_intG),VARREF(YDdirect_object_class),(P)1);
  (P)YPelt_setter(VARREF(YLchrG),VARREF(YDdirect_object_class),(P)2);
  (P)YPelt_setter(VARREF(YLlocG),VARREF(YDdirect_object_class),(P)3);
  T2 = (P)YPiu(YPint((P)32));
  T1 = (P)YPi_(T2,(P)2);
  T0 = (P)YPib(T1);
  VARSET(YDnum_int_bits,T0);
  T6 = (P)YPiu(YPint((P)1));
  T8 = (P)YPiu(VARREF(YDnum_int_bits));
  T9 = (P)YPiu(YPint((P)1));
  T7 = (P)YPi_(T8,T9);
  T5 = (P)YPiLL(T6,T7);
  T10 = (P)YPiu(YPint((P)1));
  T4 = (P)YPi_(T5,T10);
  T3 = (P)YPib(T4);
  VARSET(YDmax_int,T3);
  T13 = (P)YPiu(YPint((P)1));
  T15 = (P)YPiu(VARREF(YDnum_int_bits));
  T16 = (P)YPiu(YPint((P)1));
  T14 = (P)YPi_(T15,T16);
  T12 = (P)YPiLL(T13,T14);
  T11 = (P)YPib(T12);
  VARSET(YDmin_int,T11);
  T18 = (P)YPcu(YPchr((P)32));
  T17 = (P)YPstrX((P)0,T18);
  VARSET(YPsnul,T17);
  T19 = (P)YPtupX((P)0,VARREF(Ynul));
  VARSET(YPtnul,T19);
  T20 = (P)YPrepX((P)0,VARREF(Ynul));
  VARSET(YPrnul,T20);
  VARSET(YTearly_classesT,VARREF(Ynil));
  T21 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLanyG),T21);
  T22 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLlogG),T22);
  T23 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLmagG),T23);
  T24 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLchrG),T24);
  T25 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLnumG),T25);
  T26 = (P)YPpair(VARREF(YLnumG),Ynil);
  (P)YPdefine_parents(VARREF(YLintG),T26);
  T27 = (P)YPpair(VARREF(YLintG),Ynil);
  (P)YPdefine_parents(VARREF(YLprim_intG),T27);
  T28 = (P)YPpair(VARREF(YLnumG),Ynil);
  (P)YPdefine_parents(VARREF(YLfloG),T28);
  T29 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLlocG),T29);
  T30 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLrepG),T30);
  T31 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolG),T31);
  T32 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolIG),T32);
  T33 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolXG),T33);
  T34 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLseqG),T34);
  T36 = (P)YPpair(VARREF(YLcolIG),Ynil);
  T35 = (P)YPpair(VARREF(YLseqG),T36);
  (P)YPdefine_parents(VARREF(YLseqIG),T35);
  T38 = (P)YPpair(VARREF(YLcolXG),Ynil);
  T37 = (P)YPpair(VARREF(YLseqG),T38);
  (P)YPdefine_parents(VARREF(YLseqXG),T37);
  T39 = (P)YPpair(VARREF(YLseqXG),Ynil);
  (P)YPdefine_parents(VARREF(YLlstG),T39);
  T40 = (P)YPpair(VARREF(YLseqG),Ynil);
  (P)YPdefine_parents(VARREF(YLflatG),T40);
  T42 = (P)YPpair(VARREF(YLseqIG),Ynil);
  T41 = (P)YPpair(VARREF(YLflatG),T42);
  (P)YPdefine_parents(VARREF(YLtupG),T41);
  T45 = (P)YPpair(VARREF(YLmagG),Ynil);
  T44 = (P)YPpair(VARREF(YLseqIG),T45);
  T43 = (P)YPpair(VARREF(YLflatG),T44);
  (P)YPdefine_parents(VARREF(YLstrG),T43);
  T46 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLsymG),T46);
  T47 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLtypeG),T47);
  T48 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLclassG),T48);
  T49 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsingletonG),T49);
  T50 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsubclassG),T50);
  T53 = (P)YPpair(VARREF(YLtypeG),Ynil);
  T52 = (P)YPdefine_parents(VARREF(YLunionG),T53);
  T51 = T52;
  return T51;
}

P Y___main_6___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
DEFCREGS();
loop:
  T0 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLproductG),T0);
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLpropG),T1);
  T2 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLgen_cacheG),T2);
  T3 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLsigG),T3);
  T4 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLfunG),T4);
  T5 = (P)YPpair(VARREF(YLfunG),Ynil);
  (P)YPdefine_parents(VARREF(YLmetG),T5);
  T6 = (P)YPpair(VARREF(YLfunG),Ynil);
  (P)YPdefine_parents(VARREF(YLgenG),T6);
  T8 = (P)YPpair(VARREF(YLseqIG),Ynil);
  T7 = (P)YPpair(VARREF(YLflatG),T8);
  (P)YPdefine_parents(VARREF(YLoptsG),T7);
  T9 = (P)YPpair(VARREF(YLoptsG),Ynil);
  (P)YPdefine_parents(VARREF(YLopts_tupG),T9);
  T10 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  (P)YPclass_ancestors_setter(T10,VARREF(YLanyG));
  VARSET(YPsymbols,VARREF(Ynil));
  lit_0 = YPsb((P)"Warning: symbols were created in the boot image before the symbol-creation was setup. (Probably from a df or rep)\n");
  T12 = (P)YPeqQ(VARREF(YPTused_symbols_too_earlyT),YPtrue);
  T11 = (P)YPbb(T12);
  if (T11 != YPfalse) {
    T14 = (P)YPcurrent_out_port();
    T15 = (P)YPsu(LITREF(lit_0));
    T13 = (P)YPputs(T14,T15);
  } else {
  }
  lit_1 = YPPsym((P)"name");
  lit_2 = YPPsym((P)"lookup");
  lit_3 = YPPsym((P)"s");
  T17 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lookup_105 = YPmet(FUNCODEREF(fun_lookup_105),LITREF(lit_2),T17,ENVNUL,PNUL,YPfalse);
  T16 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T18 = fun_106;
  VARSET(Yfab_sym,T18);
  VARSET(YPsymbols_readyQ,YPtrue);
  lit_4 = YPPsym((P)"fab-sym");
  T20 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lookup_107 = YPmet(FUNCODEREF(fun_lookup_107),LITREF(lit_2),T20,ENVNUL,PNUL,YPfalse);
  T19 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfab_sym = YPmet(FUNCODEREF(Yfab_sym),LITREF(lit_4),T19,ENVNUL,PNUL,YPfalse);
  T21 = Yfab_sym;
  VARSET(Yfab_sym,T21);
  T22 = (P)YPib(VARREF(YPmet_prop_len));
  (P)YPclass_prop_len_setter(T22,VARREF(YLmetG));
  lit_5 = YPPsym((P)"loop");
  lit_6 = YPPsym((P)"l");
  lit_7 = YPPsym((P)"r");
  T23 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_109 = YPmet(FUNCODEREF(fun_loop_109),LITREF(lit_5),T23,ENVNUL,PNUL,YPfalse);
  lit_8 = YPPsym((P)"colx");
  lit_9 = YPPsym((P)"lx");
  lit_10 = YPPsym((P)"x");
  lit_11 = YPPsym((P)"coly");
  lit_12 = YPPsym((P)"lxy");
  lit_13 = YPPsym((P)"y");
  T25 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_coly_111 = YPmet(FUNCODEREF(fun_coly_111),LITREF(lit_11),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_colx_112 = YPmet(FUNCODEREF(fun_colx_112),LITREF(lit_8),T24,ENVNUL,PNUL,YPfalse);
  VARSET(YDgen_cache_singletons_offset,YPint((P)2));
  T27 = VARSET(YDgen_cache_classes_offset,YPint((P)3));
  T26 = T27;
  return T26;
}

P Y___main_7___() {
  P propF429;
  P setterF428;
  P accessorF427;
  P getterF426;
  P accessorF425;
  P propF424;
  P setterF423;
  P accessorF422;
  P getterF421;
  P accessorF420;
  P propF419;
  P setterF418;
  P accessorF417;
  P getterF416;
  P accessorF415;
  P propF414;
  P setterF413;
  P accessorF412;
  P getterF411;
  P accessorF410;
  P propF409;
  P setterF408;
  P accessorF407;
  P getterF406;
  P accessorF405;
  P propF404;
  P setterF403;
  P accessorF402;
  P getterF401;
  P accessorF400;
  P propF399;
  P setterF398;
  P accessorF397;
  P getterF396;
  P accessorF395;
  P propF394;
  P setterF393;
  P accessorF392;
  P getterF391;
  P accessorF390;
  P propF389;
  P setterF388;
  P accessorF387;
  P getterF386;
  P accessorF385;
  P propF384;
  P setterF383;
  P accessorF382;
  P getterF381;
  P accessorF380;
  P propF379;
  P setterF378;
  P accessorF377;
  P getterF376;
  P accessorF375;
  P propF374;
  P setterF373;
  P accessorF372;
  P getterF371;
  P accessorF370;
  P propF369;
  P setterF368;
  P accessorF367;
  P getterF366;
  P accessorF365;
  P propF364;
  P setterF363;
  P accessorF362;
  P getterF361;
  P accessorF360;
  P propF359;
  P setterF358;
  P accessorF357;
  P getterF356;
  P accessorF355;
  P propF354;
  P setterF353;
  P accessorF352;
  P getterF351;
  P accessorF350;
  P propF349;
  P setterF348;
  P accessorF347;
  P getterF346;
  P accessorF345;
  P propF344;
  P setterF343;
  P accessorF342;
  P getterF341;
  P accessorF340;
  P propF339;
  P setterF338;
  P accessorF337;
  P getterF336;
  P accessorF335;
  P propF334;
  P setterF333;
  P accessorF332;
  P getterF331;
  P accessorF330;
  P propF329;
  P setterF328;
  P accessorF327;
  P getterF326;
  P accessorF325;
  P propF324;
  P setterF323;
  P accessorF322;
  P getterF321;
  P accessorF320;
  P propF319;
  P setterF318;
  P accessorF317;
  P getterF316;
  P accessorF315;
  P propF314;
  P setterF313;
  P accessorF312;
  P getterF311;
  P accessorF310;
  P propF309;
  P setterF308;
  P accessorF307;
  P getterF306;
  P accessorF305;
  P propF304;
  P setterF303;
  P accessorF302;
  P getterF301;
  P accessorF300;
  P propF299;
  P setterF298;
  P accessorF297;
  P getterF296;
  P accessorF295;
  P propF294;
  P setterF293;
  P accessorF292;
  P getterF291;
  P accessorF290;
  P propF289;
  P setterF288;
  P accessorF287;
  P getterF286;
  P accessorF285;
  P propF284;
  P setterF283;
  P accessorF282;
  P getterF281;
  P accessorF280;
  P propF279;
  P setterF278;
  P accessorF277;
  P getterF276;
  P accessorF275;
  P propF274;
  P setterF273;
  P accessorF272;
  P getterF271;
  P accessorF270;
  P propF269;
  P setterF268;
  P accessorF267;
  P getterF266;
  P accessorF265;
  P propF264;
  P setterF263;
  P accessorF262;
  P getterF261;
  P accessorF260;
  P propF259;
  P setterF258;
  P accessorF257;
  P getterF256;
  P accessorF255;
  P propF254;
  P setterF253;
  P accessorF252;
  P getterF251;
  P accessorF250;
  P propF249;
  P setterF248;
  P accessorF247;
  P getterF246;
  P accessorF245;
  P propF244;
  P setterF243;
  P accessorF242;
  P getterF241;
  P accessorF240;
  P propF239;
  P setterF238;
  P accessorF237;
  P getterF236;
  P accessorF235;
  P propF234;
  P setterF233;
  P accessorF232;
  P getterF231;
  P accessorF230;
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
  P T704,T705,T706,T707,T708,T709,T710,T711,T712,T713,T714,T715,T716,T717,T718,T719;
  P T720,T721,T722,T723,T724,T725,T726,T727,T728,T729,T730,T731,T732,T733,T734,T735;
  P T736,T737,T738,T739,T740,T741,T742,T743,T744,T745,T746,T747,T748,T749,T750,T751;
  P T752,T753,T754,T755,T756,T757,T758,T759,T760,T761,T762,T763,T764,T765,T766,T767;
  P T768,T769,T770,T771,T772,T773,T774;
DEFCREGS();
loop:
  lit_14 = YPPsym((P)"%prop-offset");
  lit_15 = YPPsym((P)"owner");
  lit_16 = YPPsym((P)"getter");
  lit_17 = YPPsym((P)"i");
  lit_18 = YPPsym((P)"props");
  T1 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_18)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_168 = YPmet(FUNCODEREF(fun_loop_168),LITREF(lit_5),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPprop_offset = YPmet(FUNCODEREF(YPprop_offset),LITREF(lit_14),T0,ENVNUL,PNUL,YPfalse);
  T2 = YPprop_offset;
  VARSET(YPprop_offset,T2);
  lit_19 = YPPsym((P)"%early-dispatch");
  lit_20 = YPPsym((P)"args");
  lit_21 = YPsb((P)"ERROR: Generic function dispatch called before it existed.");
  T3 = YPsig(YPPlist(1,LITREF(lit_20)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YPearly_dispatch = YPmet(FUNCODEREF(YPearly_dispatch),LITREF(lit_19),T3,ENVNUL,PNUL,YPfalse);
  T4 = YPearly_dispatch;
  VARSET(YPearly_dispatch,T4);
  lit_22 = YPPsym((P)"%add-met");
  lit_23 = YPPsym((P)"gen");
  lit_24 = YPPsym((P)"met");
  T5 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPadd_met = YPmet(FUNCODEREF(YPadd_met),LITREF(lit_22),T5,ENVNUL,PNUL,YPfalse);
  T6 = YPadd_met;
  VARSET(YPadd_met,T6);
  lit_25 = YPPsym((P)"%add-prop");
  lit_26 = YPPsym((P)"class");
  lit_27 = YPPsym((P)"prop");
  T7 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPadd_prop = YPmet(FUNCODEREF(YPadd_prop),LITREF(lit_25),T7,ENVNUL,PNUL,YPfalse);
  T8 = YPadd_prop;
  VARSET(YPadd_prop,T8);
  lit_28 = YPPsym((P)"head");
  lit_29 = YPPsym((P)"head-setter");
  lit_30 = YPPsym((P)"z");
  T11 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_173 = YPmet(FUNCODEREF(fun_173),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_174 = YPmet(FUNCODEREF(fun_174),YPfalse,T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T14 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T13 = (P)YPsig(Ynil,T14,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T12 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_28),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yhead,T12);
  T16 = fun_173;
  accessorF230 = T16;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yhead),accessorF230);
  (P)YPmet_name_setter(VARREF(Yhead),accessorF230);
  T15 = accessorF230;
  getterF231 = T15;
  T21 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T20 = (P)YPpair(VARREF(YLanyG),T21);
  T19 = (P)YPsig(Ynil,T20,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T18 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_29),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yhead_setter,T18);
  T23 = fun_174;
  accessorF232 = T23;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yhead_setter),accessorF232);
  (P)YPmet_name_setter(VARREF(Yhead_setter),accessorF232);
  T22 = accessorF232;
  setterF233 = T22;
  T26 = fun_175;
  T25 = (P)YPPprop(VARREF(YLlstG),VARREF(Yhead),VARREF(Yhead_setter),VARREF(YLanyG),T26);
  propF234 = T25;
  (P)YPmet_env_setter(propF234,getterF231);
  (P)YPmet_env_setter(propF234,setterF233);
  T27 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF234);
  T24 = T27;
  T17 = T24;
  lit_31 = YPPsym((P)"tail");
  lit_32 = YPPsym((P)"tail-setter");
  T30 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_176 = YPmet(FUNCODEREF(fun_176),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_177 = YPmet(FUNCODEREF(fun_177),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T33 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T32 = (P)YPsig(Ynil,T33,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T31 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_31),T32,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytail,T31);
  T35 = fun_176;
  accessorF235 = T35;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytail),accessorF235);
  (P)YPmet_name_setter(VARREF(Ytail),accessorF235);
  T34 = accessorF235;
  getterF236 = T34;
  T40 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T39 = (P)YPpair(VARREF(YLanyG),T40);
  T38 = (P)YPsig(Ynil,T39,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T37 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_32),T38,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytail_setter,T37);
  T42 = fun_177;
  accessorF237 = T42;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytail_setter),accessorF237);
  (P)YPmet_name_setter(VARREF(Ytail_setter),accessorF237);
  T41 = accessorF237;
  setterF238 = T41;
  T45 = fun_178;
  T44 = (P)YPPprop(VARREF(YLlstG),VARREF(Ytail),VARREF(Ytail_setter),VARREF(YLlstG),T45);
  propF239 = T44;
  (P)YPmet_env_setter(propF239,getterF236);
  (P)YPmet_env_setter(propF239,setterF238);
  T46 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF239);
  T43 = T46;
  T36 = T43;
  lit_33 = YPPsym((P)"sym-name");
  lit_34 = YPPsym((P)"sym-name-setter");
  T49 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_179 = YPmet(FUNCODEREF(fun_179),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_181 = YPmet(FUNCODEREF(fun_181),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T52 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T51 = (P)YPsig(Ynil,T52,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T50 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_33),T51,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysym_name,T50);
  T54 = fun_179;
  accessorF240 = T54;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysym_name),accessorF240);
  (P)YPmet_name_setter(VARREF(Ysym_name),accessorF240);
  T53 = accessorF240;
  getterF241 = T53;
  T59 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T58 = (P)YPpair(VARREF(YLanyG),T59);
  T57 = (P)YPsig(Ynil,T58,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T56 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_34),T57,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysym_name_setter,T56);
  T61 = fun_180;
  accessorF242 = T61;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysym_name_setter),accessorF242);
  (P)YPmet_name_setter(VARREF(Ysym_name_setter),accessorF242);
  T60 = accessorF242;
  setterF243 = T60;
  T64 = fun_181;
  T63 = (P)YPPprop(VARREF(YLsymG),VARREF(Ysym_name),VARREF(Ysym_name_setter),VARREF(YLstrG),T64);
  propF244 = T63;
  (P)YPmet_env_setter(propF244,getterF241);
  (P)YPmet_env_setter(propF244,setterF243);
  T65 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsymG),propF244);
  T62 = T65;
  T55 = T62;
  lit_35 = YPPsym((P)"class-prop-len");
  lit_36 = YPPsym((P)"class-prop-len-setter");
  T68 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLprim_intG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_183 = YPmet(FUNCODEREF(fun_183),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_184 = YPmet(FUNCODEREF(fun_184),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T71 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T70 = (P)YPsig(Ynil,T71,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T69 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_35),T70,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_prop_len,T69);
  T73 = fun_182;
  accessorF245 = T73;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len),accessorF245);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len),accessorF245);
  T72 = accessorF245;
  getterF246 = T72;
  T78 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T77 = (P)YPpair(VARREF(YLanyG),T78);
  T76 = (P)YPsig(Ynil,T77,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T75 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_36),T76,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_prop_len_setter,T75);
  T80 = fun_183;
  accessorF247 = T80;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len_setter),accessorF247);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len_setter),accessorF247);
  T79 = accessorF247;
  setterF248 = T79;
  T83 = fun_184;
  T82 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_prop_len),VARREF(Yclass_prop_len_setter),VARREF(YLprim_intG),T83);
  propF249 = T82;
  (P)YPmet_env_setter(propF249,getterF246);
  (P)YPmet_env_setter(propF249,setterF248);
  T84 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF249);
  T81 = T84;
  T74 = T81;
  lit_37 = YPPsym((P)"class-name");
  lit_38 = YPPsym((P)"class-name-setter");
  T87 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_185 = YPmet(FUNCODEREF(fun_185),YPfalse,T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLsymG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_186 = YPmet(FUNCODEREF(fun_186),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_187 = YPmet(FUNCODEREF(fun_187),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T90 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T89 = (P)YPsig(Ynil,T90,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T88 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_37),T89,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_name,T88);
  T92 = fun_185;
  accessorF250 = T92;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_name),accessorF250);
  (P)YPmet_name_setter(VARREF(Yclass_name),accessorF250);
  T91 = accessorF250;
  getterF251 = T91;
  T97 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T96 = (P)YPpair(VARREF(YLanyG),T97);
  T95 = (P)YPsig(Ynil,T96,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T94 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_38),T95,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_name_setter,T94);
  T99 = fun_186;
  accessorF252 = T99;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_name_setter),accessorF252);
  (P)YPmet_name_setter(VARREF(Yclass_name_setter),accessorF252);
  T98 = accessorF252;
  setterF253 = T98;
  T102 = fun_187;
  T101 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_name),VARREF(Yclass_name_setter),VARREF(YLsymG),T102);
  propF254 = T101;
  (P)YPmet_env_setter(propF254,getterF251);
  (P)YPmet_env_setter(propF254,setterF253);
  T103 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF254);
  T100 = T103;
  T93 = T100;
  lit_39 = YPPsym((P)"class-parents");
  lit_40 = YPPsym((P)"class-parents-setter");
  T106 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_189 = YPmet(FUNCODEREF(fun_189),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_190 = YPmet(FUNCODEREF(fun_190),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T109 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T108 = (P)YPsig(Ynil,T109,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T107 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_39),T108,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_parents,T107);
  T111 = fun_188;
  accessorF255 = T111;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents),accessorF255);
  (P)YPmet_name_setter(VARREF(Yclass_parents),accessorF255);
  T110 = accessorF255;
  getterF256 = T110;
  T116 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T115 = (P)YPpair(VARREF(YLanyG),T116);
  T114 = (P)YPsig(Ynil,T115,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T113 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_40),T114,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_parents_setter,T113);
  T118 = fun_189;
  accessorF257 = T118;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents_setter),accessorF257);
  (P)YPmet_name_setter(VARREF(Yclass_parents_setter),accessorF257);
  T117 = accessorF257;
  setterF258 = T117;
  T121 = fun_190;
  T120 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_parents),VARREF(Yclass_parents_setter),VARREF(YLlstG),T121);
  propF259 = T120;
  (P)YPmet_env_setter(propF259,getterF256);
  (P)YPmet_env_setter(propF259,setterF258);
  T122 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF259);
  T119 = T122;
  T112 = T119;
  lit_41 = YPPsym((P)"class-direct-props");
  lit_42 = YPPsym((P)"class-direct-props-setter");
  T125 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_192 = YPmet(FUNCODEREF(fun_192),YPfalse,T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T123,ENVNUL,PNUL,YPfalse);
  T128 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T127 = (P)YPsig(Ynil,T128,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T126 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_41),T127,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_direct_props,T126);
  T130 = fun_191;
  accessorF260 = T130;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props),accessorF260);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props),accessorF260);
  T129 = accessorF260;
  getterF261 = T129;
  T135 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T134 = (P)YPpair(VARREF(YLanyG),T135);
  T133 = (P)YPsig(Ynil,T134,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T132 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_42),T133,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_direct_props_setter,T132);
  T137 = fun_192;
  accessorF262 = T137;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props_setter),accessorF262);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props_setter),accessorF262);
  T136 = accessorF262;
  setterF263 = T136;
  T140 = fun_193;
  T139 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_direct_props),VARREF(Yclass_direct_props_setter),VARREF(YLlstG),T140);
  propF264 = T139;
  (P)YPmet_env_setter(propF264,getterF261);
  (P)YPmet_env_setter(propF264,setterF263);
  T141 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF264);
  T138 = T141;
  T131 = T138;
  lit_43 = YPPsym((P)"class-ancestors");
  lit_44 = YPPsym((P)"class-ancestors-setter");
  T144 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_194 = YPmet(FUNCODEREF(fun_194),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_195 = YPmet(FUNCODEREF(fun_195),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_196 = YPmet(FUNCODEREF(fun_196),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T147 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T146 = (P)YPsig(Ynil,T147,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T145 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_43),T146,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_ancestors,T145);
  T149 = fun_194;
  accessorF265 = T149;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors),accessorF265);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors),accessorF265);
  T148 = accessorF265;
  getterF266 = T148;
  T154 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T153 = (P)YPpair(VARREF(YLanyG),T154);
  T152 = (P)YPsig(Ynil,T153,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T151 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_44),T152,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_ancestors_setter,T151);
  T156 = fun_195;
  accessorF267 = T156;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors_setter),accessorF267);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors_setter),accessorF267);
  T155 = accessorF267;
  setterF268 = T155;
  T159 = fun_196;
  T158 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_ancestors),VARREF(Yclass_ancestors_setter),VARREF(YLlstG),T159);
  propF269 = T158;
  (P)YPmet_env_setter(propF269,getterF266);
  (P)YPmet_env_setter(propF269,setterF268);
  T160 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF269);
  T157 = T160;
  T150 = T157;
  lit_45 = YPPsym((P)"class-props");
  lit_46 = YPPsym((P)"class-props-setter");
  T163 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_198 = YPmet(FUNCODEREF(fun_198),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_199 = YPmet(FUNCODEREF(fun_199),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T166 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T165 = (P)YPsig(Ynil,T166,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T164 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_45),T165,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_props,T164);
  T168 = fun_197;
  accessorF270 = T168;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_props),accessorF270);
  (P)YPmet_name_setter(VARREF(Yclass_props),accessorF270);
  T167 = accessorF270;
  getterF271 = T167;
  T173 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T172 = (P)YPpair(VARREF(YLanyG),T173);
  T171 = (P)YPsig(Ynil,T172,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T170 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_46),T171,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_props_setter,T170);
  T175 = fun_198;
  accessorF272 = T175;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_props_setter),accessorF272);
  (P)YPmet_name_setter(VARREF(Yclass_props_setter),accessorF272);
  T174 = accessorF272;
  setterF273 = T174;
  T178 = fun_199;
  T177 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_props),VARREF(Yclass_props_setter),VARREF(YLlstG),T178);
  propF274 = T177;
  (P)YPmet_env_setter(propF274,getterF271);
  (P)YPmet_env_setter(propF274,setterF273);
  T179 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF274);
  T176 = T179;
  T169 = T176;
  lit_47 = YPPsym((P)"class-children");
  lit_48 = YPPsym((P)"class-children-setter");
  T182 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_200 = YPmet(FUNCODEREF(fun_200),YPfalse,T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_201 = YPmet(FUNCODEREF(fun_201),YPfalse,T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T185 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T184 = (P)YPsig(Ynil,T185,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T183 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_47),T184,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_children,T183);
  T187 = fun_200;
  accessorF275 = T187;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_children),accessorF275);
  (P)YPmet_name_setter(VARREF(Yclass_children),accessorF275);
  T186 = accessorF275;
  getterF276 = T186;
  T192 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T191 = (P)YPpair(VARREF(YLanyG),T192);
  T190 = (P)YPsig(Ynil,T191,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T189 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_48),T190,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_children_setter,T189);
  T194 = fun_201;
  accessorF277 = T194;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_children_setter),accessorF277);
  (P)YPmet_name_setter(VARREF(Yclass_children_setter),accessorF277);
  T193 = accessorF277;
  setterF278 = T193;
  T197 = fun_202;
  T196 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_children),VARREF(Yclass_children_setter),VARREF(YLlstG),T197);
  propF279 = T196;
  (P)YPmet_env_setter(propF279,getterF276);
  (P)YPmet_env_setter(propF279,setterF278);
  T198 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF279);
  T195 = T198;
  T188 = T195;
  lit_49 = YPPsym((P)"class-gens");
  lit_50 = YPPsym((P)"class-gens-setter");
  T201 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_203 = YPmet(FUNCODEREF(fun_203),YPfalse,T201,ENVNUL,PNUL,YPfalse);
  T200 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_204 = YPmet(FUNCODEREF(fun_204),YPfalse,T200,ENVNUL,PNUL,YPfalse);
  T199 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_205 = YPmet(FUNCODEREF(fun_205),YPfalse,T199,ENVNUL,PNUL,YPfalse);
  T204 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T203 = (P)YPsig(Ynil,T204,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T202 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_49),T203,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_gens,T202);
  T206 = fun_203;
  accessorF280 = T206;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens),accessorF280);
  (P)YPmet_name_setter(VARREF(Yclass_gens),accessorF280);
  T205 = accessorF280;
  getterF281 = T205;
  T211 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T210 = (P)YPpair(VARREF(YLanyG),T211);
  T209 = (P)YPsig(Ynil,T210,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T208 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_50),T209,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_gens_setter,T208);
  T213 = fun_204;
  accessorF282 = T213;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens_setter),accessorF282);
  (P)YPmet_name_setter(VARREF(Yclass_gens_setter),accessorF282);
  T212 = accessorF282;
  setterF283 = T212;
  T216 = fun_205;
  T215 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_gens),VARREF(Yclass_gens_setter),VARREF(YLlstG),T216);
  propF284 = T215;
  (P)YPmet_env_setter(propF284,getterF281);
  (P)YPmet_env_setter(propF284,setterF283);
  T217 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF284);
  T214 = T217;
  T207 = T214;
  lit_51 = YPPsym((P)"class-mets");
  lit_52 = YPPsym((P)"class-mets-setter");
  T220 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T220,ENVNUL,PNUL,YPfalse);
  T219 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_207 = YPmet(FUNCODEREF(fun_207),YPfalse,T219,ENVNUL,PNUL,YPfalse);
  T218 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_208 = YPmet(FUNCODEREF(fun_208),YPfalse,T218,ENVNUL,PNUL,YPfalse);
  T223 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T222 = (P)YPsig(Ynil,T223,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T221 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_51),T222,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_mets,T221);
  T225 = fun_206;
  accessorF285 = T225;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets),accessorF285);
  (P)YPmet_name_setter(VARREF(Yclass_mets),accessorF285);
  T224 = accessorF285;
  getterF286 = T224;
  T230 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T229 = (P)YPpair(VARREF(YLanyG),T230);
  T228 = (P)YPsig(Ynil,T229,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T227 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_52),T228,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_mets_setter,T227);
  T232 = fun_207;
  accessorF287 = T232;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets_setter),accessorF287);
  (P)YPmet_name_setter(VARREF(Yclass_mets_setter),accessorF287);
  T231 = accessorF287;
  setterF288 = T231;
  T235 = fun_208;
  T234 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_mets),VARREF(Yclass_mets_setter),VARREF(YLlstG),T235);
  propF289 = T234;
  (P)YPmet_env_setter(propF289,getterF286);
  (P)YPmet_env_setter(propF289,setterF288);
  T236 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF289);
  T233 = T236;
  T226 = T233;
  lit_53 = YPPsym((P)"class-forward");
  lit_54 = YPPsym((P)"class-forward-setter");
  T239 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T239,ENVNUL,PNUL,YPfalse);
  T238 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T238,ENVNUL,PNUL,YPfalse);
  T237 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_211 = YPmet(FUNCODEREF(fun_211),YPfalse,T237,ENVNUL,PNUL,YPfalse);
  T242 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T241 = (P)YPsig(Ynil,T242,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T240 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_53),T241,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_forward,T240);
  T244 = fun_209;
  accessorF290 = T244;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward),accessorF290);
  (P)YPmet_name_setter(VARREF(Yclass_forward),accessorF290);
  T243 = accessorF290;
  getterF291 = T243;
  T249 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T248 = (P)YPpair(VARREF(YLanyG),T249);
  T247 = (P)YPsig(Ynil,T248,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T246 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_54),T247,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_forward_setter,T246);
  T251 = fun_210;
  accessorF292 = T251;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward_setter),accessorF292);
  (P)YPmet_name_setter(VARREF(Yclass_forward_setter),accessorF292);
  T250 = accessorF292;
  setterF293 = T250;
  T254 = fun_211;
  T253 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_forward),VARREF(Yclass_forward_setter),VARREF(YLanyG),T254);
  propF294 = T253;
  (P)YPmet_env_setter(propF294,getterF291);
  (P)YPmet_env_setter(propF294,setterF293);
  T255 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF294);
  T252 = T255;
  T245 = T252;
  lit_55 = YPPsym((P)"class-type-cache");
  lit_56 = YPPsym((P)"class-type-cache-setter");
  T258 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_212 = YPmet(FUNCODEREF(fun_212),YPfalse,T258,ENVNUL,PNUL,YPfalse);
  T257 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_213 = YPmet(FUNCODEREF(fun_213),YPfalse,T257,ENVNUL,PNUL,YPfalse);
  T256 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_214 = YPmet(FUNCODEREF(fun_214),YPfalse,T256,ENVNUL,PNUL,YPfalse);
  T261 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T260 = (P)YPsig(Ynil,T261,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T259 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_55),T260,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_type_cache,T259);
  T263 = fun_212;
  accessorF295 = T263;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_type_cache),accessorF295);
  (P)YPmet_name_setter(VARREF(Yclass_type_cache),accessorF295);
  T262 = accessorF295;
  getterF296 = T262;
  T268 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T267 = (P)YPpair(VARREF(YLanyG),T268);
  T266 = (P)YPsig(Ynil,T267,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T265 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_56),T266,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_type_cache_setter,T265);
  T270 = fun_213;
  accessorF297 = T270;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_type_cache_setter),accessorF297);
  (P)YPmet_name_setter(VARREF(Yclass_type_cache_setter),accessorF297);
  T269 = accessorF297;
  setterF298 = T269;
  T273 = fun_214;
  T272 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_type_cache),VARREF(Yclass_type_cache_setter),VARREF(YLanyG),T273);
  propF299 = T272;
  (P)YPmet_env_setter(propF299,getterF296);
  (P)YPmet_env_setter(propF299,setterF298);
  T274 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF299);
  T271 = T274;
  T264 = T271;
  lit_57 = YPPsym((P)"class-id");
  lit_58 = YPPsym((P)"class-id-setter");
  T277 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T277,ENVNUL,PNUL,YPfalse);
  T276 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLprim_intG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T276,ENVNUL,PNUL,YPfalse);
  T275 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_217 = YPmet(FUNCODEREF(fun_217),YPfalse,T275,ENVNUL,PNUL,YPfalse);
  T280 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T279 = (P)YPsig(Ynil,T280,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T278 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_57),T279,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_id,T278);
  T282 = fun_215;
  accessorF300 = T282;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_id),accessorF300);
  (P)YPmet_name_setter(VARREF(Yclass_id),accessorF300);
  T281 = accessorF300;
  getterF301 = T281;
  T287 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T286 = (P)YPpair(VARREF(YLanyG),T287);
  T285 = (P)YPsig(Ynil,T286,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T284 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_58),T285,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_id_setter,T284);
  T289 = fun_216;
  accessorF302 = T289;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_id_setter),accessorF302);
  (P)YPmet_name_setter(VARREF(Yclass_id_setter),accessorF302);
  T288 = accessorF302;
  setterF303 = T288;
  T292 = fun_217;
  T291 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_id),VARREF(Yclass_id_setter),VARREF(YLprim_intG),T292);
  propF304 = T291;
  (P)YPmet_env_setter(propF304,getterF301);
  (P)YPmet_env_setter(propF304,setterF303);
  T293 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF304);
  T290 = T293;
  T283 = T290;
  lit_59 = YPPsym((P)"class-row");
  lit_60 = YPPsym((P)"class-row-setter");
  T296 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_218 = YPmet(FUNCODEREF(fun_218),YPfalse,T296,ENVNUL,PNUL,YPfalse);
  T295 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLtupG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T295,ENVNUL,PNUL,YPfalse);
  T294 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T294,ENVNUL,PNUL,YPfalse);
  T299 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T298 = (P)YPsig(Ynil,T299,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T297 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_59),T298,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_row,T297);
  T301 = fun_218;
  accessorF305 = T301;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_row),accessorF305);
  (P)YPmet_name_setter(VARREF(Yclass_row),accessorF305);
  T300 = accessorF305;
  getterF306 = T300;
  T306 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T305 = (P)YPpair(VARREF(YLanyG),T306);
  T304 = (P)YPsig(Ynil,T305,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T303 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_60),T304,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_row_setter,T303);
  T308 = fun_219;
  accessorF307 = T308;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_row_setter),accessorF307);
  (P)YPmet_name_setter(VARREF(Yclass_row_setter),accessorF307);
  T307 = accessorF307;
  setterF308 = T307;
  T311 = fun_220;
  T310 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_row),VARREF(Yclass_row_setter),VARREF(YLtupG),T311);
  propF309 = T310;
  (P)YPmet_env_setter(propF309,getterF306);
  (P)YPmet_env_setter(propF309,setterF308);
  T312 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF309);
  T309 = T312;
  T302 = T309;
  lit_61 = YPPsym((P)"type-object");
  lit_62 = YPPsym((P)"type-object-setter");
  T315 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsingletonG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T315,ENVNUL,PNUL,YPfalse);
  T314 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T314,ENVNUL,PNUL,YPfalse);
  T313 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_223 = YPmet(FUNCODEREF(fun_223),YPfalse,T313,ENVNUL,PNUL,YPfalse);
  T318 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T317 = (P)YPsig(Ynil,T318,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T316 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_61),T317,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_object,T316);
  T320 = fun_221;
  accessorF310 = T320;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_object),accessorF310);
  (P)YPmet_name_setter(VARREF(Ytype_object),accessorF310);
  T319 = accessorF310;
  getterF311 = T319;
  T325 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T324 = (P)YPpair(VARREF(YLanyG),T325);
  T323 = (P)YPsig(Ynil,T324,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T322 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_62),T323,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_object_setter,T322);
  T327 = fun_222;
  accessorF312 = T327;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_object_setter),accessorF312);
  (P)YPmet_name_setter(VARREF(Ytype_object_setter),accessorF312);
  T326 = accessorF312;
  setterF313 = T326;
  T330 = fun_223;
  T329 = (P)YPPprop(VARREF(YLsingletonG),VARREF(Ytype_object),VARREF(Ytype_object_setter),VARREF(YLanyG),T330);
  propF314 = T329;
  (P)YPmet_env_setter(propF314,getterF311);
  (P)YPmet_env_setter(propF314,setterF313);
  T331 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsingletonG),propF314);
  T328 = T331;
  T321 = T328;
  lit_63 = YPPsym((P)"type-class");
  lit_64 = YPPsym((P)"type-class-setter");
  T334 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsubclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_224 = YPmet(FUNCODEREF(fun_224),YPfalse,T334,ENVNUL,PNUL,YPfalse);
  T333 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T333,ENVNUL,PNUL,YPfalse);
  T332 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_226 = YPmet(FUNCODEREF(fun_226),YPfalse,T332,ENVNUL,PNUL,YPfalse);
  T337 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T336 = (P)YPsig(Ynil,T337,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T335 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_63),T336,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_class,T335);
  T339 = fun_224;
  accessorF315 = T339;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_class),accessorF315);
  (P)YPmet_name_setter(VARREF(Ytype_class),accessorF315);
  T338 = accessorF315;
  getterF316 = T338;
  T344 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T343 = (P)YPpair(VARREF(YLanyG),T344);
  T342 = (P)YPsig(Ynil,T343,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T341 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_64),T342,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_class_setter,T341);
  T346 = fun_225;
  accessorF317 = T346;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_class_setter),accessorF317);
  (P)YPmet_name_setter(VARREF(Ytype_class_setter),accessorF317);
  T345 = accessorF317;
  setterF318 = T345;
  T349 = fun_226;
  T348 = (P)YPPprop(VARREF(YLsubclassG),VARREF(Ytype_class),VARREF(Ytype_class_setter),VARREF(YLclassG),T349);
  propF319 = T348;
  (P)YPmet_env_setter(propF319,getterF316);
  (P)YPmet_env_setter(propF319,setterF318);
  T350 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsubclassG),propF319);
  T347 = T350;
  T340 = T347;
  lit_65 = YPPsym((P)"union-elts");
  lit_66 = YPPsym((P)"union-elts-setter");
  T353 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLunionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_227 = YPmet(FUNCODEREF(fun_227),YPfalse,T353,ENVNUL,PNUL,YPfalse);
  T352 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_228 = YPmet(FUNCODEREF(fun_228),YPfalse,T352,ENVNUL,PNUL,YPfalse);
  T351 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_229 = YPmet(FUNCODEREF(fun_229),YPfalse,T351,ENVNUL,PNUL,YPfalse);
  T356 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T355 = (P)YPsig(Ynil,T356,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T354 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_65),T355,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yunion_elts,T354);
  T358 = fun_227;
  accessorF320 = T358;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yunion_elts),accessorF320);
  (P)YPmet_name_setter(VARREF(Yunion_elts),accessorF320);
  T357 = accessorF320;
  getterF321 = T357;
  T363 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T362 = (P)YPpair(VARREF(YLanyG),T363);
  T361 = (P)YPsig(Ynil,T362,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T360 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_66),T361,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yunion_elts_setter,T360);
  T365 = fun_228;
  accessorF322 = T365;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yunion_elts_setter),accessorF322);
  (P)YPmet_name_setter(VARREF(Yunion_elts_setter),accessorF322);
  T364 = accessorF322;
  setterF323 = T364;
  T368 = fun_229;
  T367 = (P)YPPprop(VARREF(YLunionG),VARREF(Yunion_elts),VARREF(Yunion_elts_setter),VARREF(YLlstG),T368);
  propF324 = T367;
  (P)YPmet_env_setter(propF324,getterF321);
  (P)YPmet_env_setter(propF324,setterF323);
  T369 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLunionG),propF324);
  T366 = T369;
  T359 = T366;
  lit_67 = YPPsym((P)"product-elts");
  lit_68 = YPPsym((P)"product-elts-setter");
  T372 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLproductG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_230 = YPmet(FUNCODEREF(fun_230),YPfalse,T372,ENVNUL,PNUL,YPfalse);
  T371 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLtupG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_231 = YPmet(FUNCODEREF(fun_231),YPfalse,T371,ENVNUL,PNUL,YPfalse);
  T370 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T370,ENVNUL,PNUL,YPfalse);
  T375 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T374 = (P)YPsig(Ynil,T375,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T373 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_67),T374,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yproduct_elts,T373);
  T377 = fun_230;
  accessorF325 = T377;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yproduct_elts),accessorF325);
  (P)YPmet_name_setter(VARREF(Yproduct_elts),accessorF325);
  T376 = accessorF325;
  getterF326 = T376;
  T382 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T381 = (P)YPpair(VARREF(YLanyG),T382);
  T380 = (P)YPsig(Ynil,T381,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T379 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_68),T380,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yproduct_elts_setter,T379);
  T384 = fun_231;
  accessorF327 = T384;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yproduct_elts_setter),accessorF327);
  (P)YPmet_name_setter(VARREF(Yproduct_elts_setter),accessorF327);
  T383 = accessorF327;
  setterF328 = T383;
  T387 = fun_232;
  T386 = (P)YPPprop(VARREF(YLproductG),VARREF(Yproduct_elts),VARREF(Yproduct_elts_setter),VARREF(YLtupG),T387);
  propF329 = T386;
  (P)YPmet_env_setter(propF329,getterF326);
  (P)YPmet_env_setter(propF329,setterF328);
  T388 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLproductG),propF329);
  T385 = T388;
  T378 = T385;
  lit_69 = YPPsym((P)"prop-owner");
  lit_70 = YPPsym((P)"prop-owner-setter");
  T391 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_233 = YPmet(FUNCODEREF(fun_233),YPfalse,T391,ENVNUL,PNUL,YPfalse);
  T390 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_234 = YPmet(FUNCODEREF(fun_234),YPfalse,T390,ENVNUL,PNUL,YPfalse);
  T389 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_235 = YPmet(FUNCODEREF(fun_235),YPfalse,T389,ENVNUL,PNUL,YPfalse);
  T394 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T393 = (P)YPsig(Ynil,T394,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T392 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_69),T393,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_owner,T392);
  T396 = fun_233;
  accessorF330 = T396;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner),accessorF330);
  (P)YPmet_name_setter(VARREF(Yprop_owner),accessorF330);
  T395 = accessorF330;
  getterF331 = T395;
  T401 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T400 = (P)YPpair(VARREF(YLanyG),T401);
  T399 = (P)YPsig(Ynil,T400,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T398 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_70),T399,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_owner_setter,T398);
  T403 = fun_234;
  accessorF332 = T403;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner_setter),accessorF332);
  (P)YPmet_name_setter(VARREF(Yprop_owner_setter),accessorF332);
  T402 = accessorF332;
  setterF333 = T402;
  T406 = fun_235;
  T405 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_owner),VARREF(Yprop_owner_setter),VARREF(YLanyG),T406);
  propF334 = T405;
  (P)YPmet_env_setter(propF334,getterF331);
  (P)YPmet_env_setter(propF334,setterF333);
  T407 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF334);
  T404 = T407;
  T397 = T404;
  lit_71 = YPPsym((P)"prop-getter");
  lit_72 = YPPsym((P)"prop-getter-setter");
  T410 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T410,ENVNUL,PNUL,YPfalse);
  T409 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_237 = YPmet(FUNCODEREF(fun_237),YPfalse,T409,ENVNUL,PNUL,YPfalse);
  T408 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_238 = YPmet(FUNCODEREF(fun_238),YPfalse,T408,ENVNUL,PNUL,YPfalse);
  T413 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T412 = (P)YPsig(Ynil,T413,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T411 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_71),T412,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_getter,T411);
  T415 = fun_236;
  accessorF335 = T415;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter),accessorF335);
  (P)YPmet_name_setter(VARREF(Yprop_getter),accessorF335);
  T414 = accessorF335;
  getterF336 = T414;
  T420 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T419 = (P)YPpair(VARREF(YLanyG),T420);
  T418 = (P)YPsig(Ynil,T419,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T417 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_72),T418,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_getter_setter,T417);
  T422 = fun_237;
  accessorF337 = T422;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter_setter),accessorF337);
  (P)YPmet_name_setter(VARREF(Yprop_getter_setter),accessorF337);
  T421 = accessorF337;
  setterF338 = T421;
  T425 = fun_238;
  T424 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_getter),VARREF(Yprop_getter_setter),VARREF(YLfunG),T425);
  propF339 = T424;
  (P)YPmet_env_setter(propF339,getterF336);
  (P)YPmet_env_setter(propF339,setterF338);
  T426 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF339);
  T423 = T426;
  T416 = T423;
  lit_73 = YPPsym((P)"prop-setter");
  lit_74 = YPPsym((P)"prop-setter-setter");
  T429 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_239 = YPmet(FUNCODEREF(fun_239),YPfalse,T429,ENVNUL,PNUL,YPfalse);
  T428 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_240 = YPmet(FUNCODEREF(fun_240),YPfalse,T428,ENVNUL,PNUL,YPfalse);
  T427 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_241 = YPmet(FUNCODEREF(fun_241),YPfalse,T427,ENVNUL,PNUL,YPfalse);
  T432 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T431 = (P)YPsig(Ynil,T432,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T430 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_73),T431,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_setter,T430);
  T434 = fun_239;
  accessorF340 = T434;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter),accessorF340);
  (P)YPmet_name_setter(VARREF(Yprop_setter),accessorF340);
  T433 = accessorF340;
  getterF341 = T433;
  T439 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T438 = (P)YPpair(VARREF(YLanyG),T439);
  T437 = (P)YPsig(Ynil,T438,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T436 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_74),T437,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_setter_setter,T436);
  T441 = fun_240;
  accessorF342 = T441;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter_setter),accessorF342);
  (P)YPmet_name_setter(VARREF(Yprop_setter_setter),accessorF342);
  T440 = accessorF342;
  setterF343 = T440;
  T444 = fun_241;
  T443 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_setter),VARREF(Yprop_setter_setter),VARREF(YLfunG),T444);
  propF344 = T443;
  (P)YPmet_env_setter(propF344,getterF341);
  (P)YPmet_env_setter(propF344,setterF343);
  T445 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF344);
  T442 = T445;
  T435 = T442;
  lit_75 = YPPsym((P)"prop-type");
  lit_76 = YPPsym((P)"prop-type-setter");
  T448 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_242 = YPmet(FUNCODEREF(fun_242),YPfalse,T448,ENVNUL,PNUL,YPfalse);
  T447 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLtypeG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_243 = YPmet(FUNCODEREF(fun_243),YPfalse,T447,ENVNUL,PNUL,YPfalse);
  T446 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_244 = YPmet(FUNCODEREF(fun_244),YPfalse,T446,ENVNUL,PNUL,YPfalse);
  T451 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T450 = (P)YPsig(Ynil,T451,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T449 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_75),T450,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_type,T449);
  T453 = fun_242;
  accessorF345 = T453;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_type),accessorF345);
  (P)YPmet_name_setter(VARREF(Yprop_type),accessorF345);
  T452 = accessorF345;
  getterF346 = T452;
  T458 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T457 = (P)YPpair(VARREF(YLanyG),T458);
  T456 = (P)YPsig(Ynil,T457,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T455 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_76),T456,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_type_setter,T455);
  T460 = fun_243;
  accessorF347 = T460;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_type_setter),accessorF347);
  (P)YPmet_name_setter(VARREF(Yprop_type_setter),accessorF347);
  T459 = accessorF347;
  setterF348 = T459;
  T463 = fun_244;
  T462 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_type),VARREF(Yprop_type_setter),VARREF(YLtypeG),T463);
  propF349 = T462;
  (P)YPmet_env_setter(propF349,getterF346);
  (P)YPmet_env_setter(propF349,setterF348);
  T464 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF349);
  T461 = T464;
  T454 = T461;
  lit_77 = YPPsym((P)"prop-init");
  lit_78 = YPPsym((P)"prop-init-setter");
  T468 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_245 = YPmet(FUNCODEREF(fun_245),YPfalse,T468,ENVNUL,PNUL,YPfalse);
  T467 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_246 = YPmet(FUNCODEREF(fun_246),YPfalse,T467,ENVNUL,PNUL,YPfalse);
  T466 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_247 = YPmet(FUNCODEREF(fun_247),YPfalse,T466,ENVNUL,PNUL,YPfalse);
  T465 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_248 = YPmet(FUNCODEREF(fun_248),YPfalse,T465,ENVNUL,PNUL,YPfalse);
  T471 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T470 = (P)YPsig(Ynil,T471,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T469 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_77),T470,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_init,T469);
  T473 = fun_245;
  accessorF350 = T473;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_init),accessorF350);
  (P)YPmet_name_setter(VARREF(Yprop_init),accessorF350);
  T472 = accessorF350;
  getterF351 = T472;
  T478 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T477 = (P)YPpair(VARREF(YLanyG),T478);
  T476 = (P)YPsig(Ynil,T477,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T475 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_78),T476,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_init_setter,T475);
  T480 = fun_246;
  accessorF352 = T480;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_init_setter),accessorF352);
  (P)YPmet_name_setter(VARREF(Yprop_init_setter),accessorF352);
  T479 = accessorF352;
  setterF353 = T479;
  T483 = fun_248;
  T482 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_init),VARREF(Yprop_init_setter),VARREF(YLfunG),T483);
  propF354 = T482;
  (P)YPmet_env_setter(propF354,getterF351);
  (P)YPmet_env_setter(propF354,setterF353);
  T484 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF354);
  T481 = T484;
  T474 = T481;
  lit_79 = YPPsym((P)"gen-cache-missable?");
  lit_80 = YPPsym((P)"gen-cache-missable?-setter");
  T487 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_249 = YPmet(FUNCODEREF(fun_249),YPfalse,T487,ENVNUL,PNUL,YPfalse);
  T486 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlogG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_250 = YPmet(FUNCODEREF(fun_250),YPfalse,T486,ENVNUL,PNUL,YPfalse);
  T485 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_251 = YPmet(FUNCODEREF(fun_251),YPfalse,T485,ENVNUL,PNUL,YPfalse);
  T490 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T489 = (P)YPsig(Ynil,T490,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T488 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_79),T489,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_missableQ,T488);
  T492 = fun_249;
  accessorF355 = T492;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ),accessorF355);
  (P)YPmet_name_setter(VARREF(Ygen_cache_missableQ),accessorF355);
  T491 = accessorF355;
  getterF356 = T491;
  T497 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T496 = (P)YPpair(VARREF(YLanyG),T497);
  T495 = (P)YPsig(Ynil,T496,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T494 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_80),T495,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_missableQ_setter,T494);
  T499 = fun_250;
  accessorF357 = T499;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ_setter),accessorF357);
  (P)YPmet_name_setter(VARREF(Ygen_cache_missableQ_setter),accessorF357);
  T498 = accessorF357;
  setterF358 = T498;
  T502 = fun_251;
  T501 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ),VARREF(Ygen_cache_missableQ_setter),VARREF(YLlogG),T502);
  propF359 = T501;
  (P)YPmet_env_setter(propF359,getterF356);
  (P)YPmet_env_setter(propF359,setterF358);
  T503 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF359);
  T500 = T503;
  T493 = T500;
  lit_81 = YPPsym((P)"gen-cache-arg-pos");
  lit_82 = YPPsym((P)"gen-cache-arg-pos-setter");
  T506 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_252 = YPmet(FUNCODEREF(fun_252),YPfalse,T506,ENVNUL,PNUL,YPfalse);
  T505 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLprim_intG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_253 = YPmet(FUNCODEREF(fun_253),YPfalse,T505,ENVNUL,PNUL,YPfalse);
  T504 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_254 = YPmet(FUNCODEREF(fun_254),YPfalse,T504,ENVNUL,PNUL,YPfalse);
  T509 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T508 = (P)YPsig(Ynil,T509,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T507 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_81),T508,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_arg_pos,T507);
  T511 = fun_252;
  accessorF360 = T511;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos),accessorF360);
  (P)YPmet_name_setter(VARREF(Ygen_cache_arg_pos),accessorF360);
  T510 = accessorF360;
  getterF361 = T510;
  T516 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T515 = (P)YPpair(VARREF(YLanyG),T516);
  T514 = (P)YPsig(Ynil,T515,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T513 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_82),T514,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_arg_pos_setter,T513);
  T518 = fun_253;
  accessorF362 = T518;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos_setter),accessorF362);
  (P)YPmet_name_setter(VARREF(Ygen_cache_arg_pos_setter),accessorF362);
  T517 = accessorF362;
  setterF363 = T517;
  T521 = fun_254;
  T520 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos),VARREF(Ygen_cache_arg_pos_setter),VARREF(YLprim_intG),T521);
  propF364 = T520;
  (P)YPmet_env_setter(propF364,getterF361);
  (P)YPmet_env_setter(propF364,setterF363);
  T522 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF364);
  T519 = T522;
  T512 = T519;
  lit_83 = YPPsym((P)"gen-cache-singletons");
  lit_84 = YPPsym((P)"gen-cache-singletons-setter");
  T525 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_255 = YPmet(FUNCODEREF(fun_255),YPfalse,T525,ENVNUL,PNUL,YPfalse);
  T524 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_256 = YPmet(FUNCODEREF(fun_256),YPfalse,T524,ENVNUL,PNUL,YPfalse);
  T523 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_257 = YPmet(FUNCODEREF(fun_257),YPfalse,T523,ENVNUL,PNUL,YPfalse);
  T528 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T527 = (P)YPsig(Ynil,T528,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T526 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_83),T527,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_singletons,T526);
  T530 = fun_255;
  accessorF365 = T530;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons),accessorF365);
  (P)YPmet_name_setter(VARREF(Ygen_cache_singletons),accessorF365);
  T529 = accessorF365;
  getterF366 = T529;
  T535 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T534 = (P)YPpair(VARREF(YLanyG),T535);
  T533 = (P)YPsig(Ynil,T534,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T532 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_84),T533,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_singletons_setter,T532);
  T537 = fun_256;
  accessorF367 = T537;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons_setter),accessorF367);
  (P)YPmet_name_setter(VARREF(Ygen_cache_singletons_setter),accessorF367);
  T536 = accessorF367;
  setterF368 = T536;
  T540 = fun_257;
  T539 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons),VARREF(Ygen_cache_singletons_setter),VARREF(YLlstG),T540);
  propF369 = T539;
  (P)YPmet_env_setter(propF369,getterF366);
  (P)YPmet_env_setter(propF369,setterF368);
  T541 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF369);
  T538 = T541;
  T531 = T538;
  lit_85 = YPPsym((P)"gen-cache-classes");
  lit_86 = YPPsym((P)"gen-cache-classes-setter");
  T544 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_258 = YPmet(FUNCODEREF(fun_258),YPfalse,T544,ENVNUL,PNUL,YPfalse);
  T543 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_259 = YPmet(FUNCODEREF(fun_259),YPfalse,T543,ENVNUL,PNUL,YPfalse);
  T542 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_260 = YPmet(FUNCODEREF(fun_260),YPfalse,T542,ENVNUL,PNUL,YPfalse);
  T547 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T546 = (P)YPsig(Ynil,T547,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T545 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_85),T546,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_classes,T545);
  T549 = fun_258;
  accessorF370 = T549;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes),accessorF370);
  (P)YPmet_name_setter(VARREF(Ygen_cache_classes),accessorF370);
  T548 = accessorF370;
  getterF371 = T548;
  T554 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T553 = (P)YPpair(VARREF(YLanyG),T554);
  T552 = (P)YPsig(Ynil,T553,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T551 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_86),T552,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_classes_setter,T551);
  T556 = fun_259;
  accessorF372 = T556;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes_setter),accessorF372);
  (P)YPmet_name_setter(VARREF(Ygen_cache_classes_setter),accessorF372);
  T555 = accessorF372;
  setterF373 = T555;
  T559 = fun_260;
  T558 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes),VARREF(Ygen_cache_classes_setter),VARREF(YLlstG),T559);
  propF374 = T558;
  (P)YPmet_env_setter(propF374,getterF371);
  (P)YPmet_env_setter(propF374,setterF373);
  T560 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF374);
  T557 = T560;
  T550 = T557;
  lit_87 = YPPsym((P)"sig-names");
  lit_88 = YPPsym((P)"sig-names-setter");
  T563 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_261 = YPmet(FUNCODEREF(fun_261),YPfalse,T563,ENVNUL,PNUL,YPfalse);
  T562 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_262 = YPmet(FUNCODEREF(fun_262),YPfalse,T562,ENVNUL,PNUL,YPfalse);
  T561 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_263 = YPmet(FUNCODEREF(fun_263),YPfalse,T561,ENVNUL,PNUL,YPfalse);
  T566 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T565 = (P)YPsig(Ynil,T566,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T564 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_87),T565,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names,T564);
  T568 = fun_261;
  accessorF375 = T568;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_names),accessorF375);
  (P)YPmet_name_setter(VARREF(Ysig_names),accessorF375);
  T567 = accessorF375;
  getterF376 = T567;
  T573 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T572 = (P)YPpair(VARREF(YLanyG),T573);
  T571 = (P)YPsig(Ynil,T572,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T570 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_88),T571,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names_setter,T570);
  T575 = fun_262;
  accessorF377 = T575;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_names_setter),accessorF377);
  (P)YPmet_name_setter(VARREF(Ysig_names_setter),accessorF377);
  T574 = accessorF377;
  setterF378 = T574;
  T578 = fun_263;
  T577 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_names),VARREF(Ysig_names_setter),VARREF(YLlstG),T578);
  propF379 = T577;
  (P)YPmet_env_setter(propF379,getterF376);
  (P)YPmet_env_setter(propF379,setterF378);
  T579 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF379);
  T576 = T579;
  T569 = T576;
  lit_89 = YPPsym((P)"sig-specs");
  lit_90 = YPPsym((P)"sig-specs-setter");
  T582 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_264 = YPmet(FUNCODEREF(fun_264),YPfalse,T582,ENVNUL,PNUL,YPfalse);
  T581 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_265 = YPmet(FUNCODEREF(fun_265),YPfalse,T581,ENVNUL,PNUL,YPfalse);
  T580 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_266 = YPmet(FUNCODEREF(fun_266),YPfalse,T580,ENVNUL,PNUL,YPfalse);
  T585 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T584 = (P)YPsig(Ynil,T585,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T583 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_89),T584,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs,T583);
  T587 = fun_264;
  accessorF380 = T587;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs),accessorF380);
  (P)YPmet_name_setter(VARREF(Ysig_specs),accessorF380);
  T586 = accessorF380;
  getterF381 = T586;
  T592 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T591 = (P)YPpair(VARREF(YLanyG),T592);
  T590 = (P)YPsig(Ynil,T591,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T589 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_90),T590,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs_setter,T589);
  T594 = fun_265;
  accessorF382 = T594;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs_setter),accessorF382);
  (P)YPmet_name_setter(VARREF(Ysig_specs_setter),accessorF382);
  T593 = accessorF382;
  setterF383 = T593;
  T597 = fun_266;
  T596 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_specs),VARREF(Ysig_specs_setter),VARREF(YLlstG),T597);
  propF384 = T596;
  (P)YPmet_env_setter(propF384,getterF381);
  (P)YPmet_env_setter(propF384,setterF383);
  T598 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF384);
  T595 = T598;
  T588 = T595;
  lit_91 = YPPsym((P)"sig-nary?");
  lit_92 = YPPsym((P)"sig-nary?-setter");
  T601 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_267 = YPmet(FUNCODEREF(fun_267),YPfalse,T601,ENVNUL,PNUL,YPfalse);
  T600 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlogG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_268 = YPmet(FUNCODEREF(fun_268),YPfalse,T600,ENVNUL,PNUL,YPfalse);
  T599 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_269 = YPmet(FUNCODEREF(fun_269),YPfalse,T599,ENVNUL,PNUL,YPfalse);
  T604 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T603 = (P)YPsig(Ynil,T604,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T602 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_91),T603,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ,T602);
  T606 = fun_267;
  accessorF385 = T606;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ),accessorF385);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ),accessorF385);
  T605 = accessorF385;
  getterF386 = T605;
  T611 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T610 = (P)YPpair(VARREF(YLanyG),T611);
  T609 = (P)YPsig(Ynil,T610,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T608 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_92),T609,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ_setter,T608);
  T613 = fun_268;
  accessorF387 = T613;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ_setter),accessorF387);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ_setter),accessorF387);
  T612 = accessorF387;
  setterF388 = T612;
  T616 = fun_269;
  T615 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_naryQ),VARREF(Ysig_naryQ_setter),VARREF(YLlogG),T616);
  propF389 = T615;
  (P)YPmet_env_setter(propF389,getterF386);
  (P)YPmet_env_setter(propF389,setterF388);
  T617 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF389);
  T614 = T617;
  T607 = T614;
  lit_93 = YPPsym((P)"sig-arity");
  lit_94 = YPPsym((P)"sig-arity-setter");
  T620 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_270 = YPmet(FUNCODEREF(fun_270),YPfalse,T620,ENVNUL,PNUL,YPfalse);
  T619 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLprim_intG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_271 = YPmet(FUNCODEREF(fun_271),YPfalse,T619,ENVNUL,PNUL,YPfalse);
  T618 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_272 = YPmet(FUNCODEREF(fun_272),YPfalse,T618,ENVNUL,PNUL,YPfalse);
  T623 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T622 = (P)YPsig(Ynil,T623,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T621 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_93),T622,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity,T621);
  T625 = fun_270;
  accessorF390 = T625;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity),accessorF390);
  (P)YPmet_name_setter(VARREF(Ysig_arity),accessorF390);
  T624 = accessorF390;
  getterF391 = T624;
  T630 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T629 = (P)YPpair(VARREF(YLanyG),T630);
  T628 = (P)YPsig(Ynil,T629,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T627 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_94),T628,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity_setter,T627);
  T632 = fun_271;
  accessorF392 = T632;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity_setter),accessorF392);
  (P)YPmet_name_setter(VARREF(Ysig_arity_setter),accessorF392);
  T631 = accessorF392;
  setterF393 = T631;
  T635 = fun_272;
  T634 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_arity),VARREF(Ysig_arity_setter),VARREF(YLprim_intG),T635);
  propF394 = T634;
  (P)YPmet_env_setter(propF394,getterF391);
  (P)YPmet_env_setter(propF394,setterF393);
  T636 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF394);
  T633 = T636;
  T626 = T633;
  lit_95 = YPPsym((P)"sig-val");
  lit_96 = YPPsym((P)"sig-val-setter");
  T639 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_273 = YPmet(FUNCODEREF(fun_273),YPfalse,T639,ENVNUL,PNUL,YPfalse);
  T638 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_274 = YPmet(FUNCODEREF(fun_274),YPfalse,T638,ENVNUL,PNUL,YPfalse);
  T637 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_275 = YPmet(FUNCODEREF(fun_275),YPfalse,T637,ENVNUL,PNUL,YPfalse);
  T642 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T641 = (P)YPsig(Ynil,T642,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T640 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_95),T641,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val,T640);
  T644 = fun_273;
  accessorF395 = T644;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_val),accessorF395);
  (P)YPmet_name_setter(VARREF(Ysig_val),accessorF395);
  T643 = accessorF395;
  getterF396 = T643;
  T649 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T648 = (P)YPpair(VARREF(YLanyG),T649);
  T647 = (P)YPsig(Ynil,T648,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T646 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_96),T647,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val_setter,T646);
  T651 = fun_274;
  accessorF397 = T651;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_val_setter),accessorF397);
  (P)YPmet_name_setter(VARREF(Ysig_val_setter),accessorF397);
  T650 = accessorF397;
  setterF398 = T650;
  T654 = fun_275;
  T653 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_val),VARREF(Ysig_val_setter),VARREF(YLanyG),T654);
  propF399 = T653;
  (P)YPmet_env_setter(propF399,getterF396);
  (P)YPmet_env_setter(propF399,setterF398);
  T655 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF399);
  T652 = T655;
  T645 = T652;
  lit_97 = YPPsym((P)"sig-unification-vars");
  lit_98 = YPPsym((P)"sig-unification-vars-setter");
  T658 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_276 = YPmet(FUNCODEREF(fun_276),YPfalse,T658,ENVNUL,PNUL,YPfalse);
  T657 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_277 = YPmet(FUNCODEREF(fun_277),YPfalse,T657,ENVNUL,PNUL,YPfalse);
  T656 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_278 = YPmet(FUNCODEREF(fun_278),YPfalse,T656,ENVNUL,PNUL,YPfalse);
  T661 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T660 = (P)YPsig(Ynil,T661,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T659 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_97),T660,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars,T659);
  T663 = fun_276;
  accessorF400 = T663;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars),accessorF400);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars),accessorF400);
  T662 = accessorF400;
  getterF401 = T662;
  T668 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T667 = (P)YPpair(VARREF(YLanyG),T668);
  T666 = (P)YPsig(Ynil,T667,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T665 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_98),T666,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars_setter,T665);
  T670 = fun_277;
  accessorF402 = T670;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars_setter),accessorF402);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars_setter),accessorF402);
  T669 = accessorF402;
  setterF403 = T669;
  T673 = fun_278;
  T672 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_unification_vars),VARREF(Ysig_unification_vars_setter),VARREF(YLlstG),T673);
  propF404 = T672;
  (P)YPmet_env_setter(propF404,getterF401);
  (P)YPmet_env_setter(propF404,setterF403);
  T674 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF404);
  T671 = T674;
  T664 = T671;
  lit_99 = YPPsym((P)"fun-code");
  lit_100 = YPPsym((P)"fun-code-setter");
  T677 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_279 = YPmet(FUNCODEREF(fun_279),YPfalse,T677,ENVNUL,PNUL,YPfalse);
  T676 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_280 = YPmet(FUNCODEREF(fun_280),YPfalse,T676,ENVNUL,PNUL,YPfalse);
  T675 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_281 = YPmet(FUNCODEREF(fun_281),YPfalse,T675,ENVNUL,PNUL,YPfalse);
  T680 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T679 = (P)YPsig(Ynil,T680,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T678 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_99),T679,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_code,T678);
  T682 = fun_279;
  accessorF405 = T682;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_code),accessorF405);
  (P)YPmet_name_setter(VARREF(Yfun_code),accessorF405);
  T681 = accessorF405;
  getterF406 = T681;
  T687 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T686 = (P)YPpair(VARREF(YLanyG),T687);
  T685 = (P)YPsig(Ynil,T686,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T684 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_100),T685,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_code_setter,T684);
  T689 = fun_280;
  accessorF407 = T689;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_code_setter),accessorF407);
  (P)YPmet_name_setter(VARREF(Yfun_code_setter),accessorF407);
  T688 = accessorF407;
  setterF408 = T688;
  T692 = fun_281;
  T691 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_code),VARREF(Yfun_code_setter),VARREF(YLanyG),T692);
  propF409 = T691;
  (P)YPmet_env_setter(propF409,getterF406);
  (P)YPmet_env_setter(propF409,setterF408);
  T693 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF409);
  T690 = T693;
  T683 = T690;
  lit_101 = YPPsym((P)"fun-name");
  lit_102 = YPPsym((P)"fun-name-setter");
  T696 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_282 = YPmet(FUNCODEREF(fun_282),YPfalse,T696,ENVNUL,PNUL,YPfalse);
  T695 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_283 = YPmet(FUNCODEREF(fun_283),YPfalse,T695,ENVNUL,PNUL,YPfalse);
  T694 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_284 = YPmet(FUNCODEREF(fun_284),YPfalse,T694,ENVNUL,PNUL,YPfalse);
  T699 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T698 = (P)YPsig(Ynil,T699,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T697 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_101),T698,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name,T697);
  T701 = fun_282;
  accessorF410 = T701;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_name),accessorF410);
  (P)YPmet_name_setter(VARREF(Yfun_name),accessorF410);
  T700 = accessorF410;
  getterF411 = T700;
  T706 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T705 = (P)YPpair(VARREF(YLanyG),T706);
  T704 = (P)YPsig(Ynil,T705,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T703 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_102),T704,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name_setter,T703);
  T708 = fun_283;
  accessorF412 = T708;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_name_setter),accessorF412);
  (P)YPmet_name_setter(VARREF(Yfun_name_setter),accessorF412);
  T707 = accessorF412;
  setterF413 = T707;
  T711 = fun_284;
  T710 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_name),VARREF(Yfun_name_setter),VARREF(YLanyG),T711);
  propF414 = T710;
  (P)YPmet_env_setter(propF414,getterF411);
  (P)YPmet_env_setter(propF414,setterF413);
  T712 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF414);
  T709 = T712;
  T702 = T709;
  lit_103 = YPPsym((P)"fun-sig");
  lit_104 = YPPsym((P)"fun-sig-setter");
  T715 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_285 = YPmet(FUNCODEREF(fun_285),YPfalse,T715,ENVNUL,PNUL,YPfalse);
  T714 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLsigG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_286 = YPmet(FUNCODEREF(fun_286),YPfalse,T714,ENVNUL,PNUL,YPfalse);
  T713 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_287 = YPmet(FUNCODEREF(fun_287),YPfalse,T713,ENVNUL,PNUL,YPfalse);
  T718 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T717 = (P)YPsig(Ynil,T718,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T716 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_103),T717,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig,T716);
  T720 = fun_285;
  accessorF415 = T720;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig),accessorF415);
  (P)YPmet_name_setter(VARREF(Yfun_sig),accessorF415);
  T719 = accessorF415;
  getterF416 = T719;
  T725 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T724 = (P)YPpair(VARREF(YLanyG),T725);
  T723 = (P)YPsig(Ynil,T724,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T722 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_104),T723,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig_setter,T722);
  T727 = fun_286;
  accessorF417 = T727;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig_setter),accessorF417);
  (P)YPmet_name_setter(VARREF(Yfun_sig_setter),accessorF417);
  T726 = accessorF417;
  setterF418 = T726;
  T730 = fun_287;
  T729 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_sig),VARREF(Yfun_sig_setter),VARREF(YLsigG),T730);
  propF419 = T729;
  (P)YPmet_env_setter(propF419,getterF416);
  (P)YPmet_env_setter(propF419,setterF418);
  T731 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF419);
  T728 = T731;
  T721 = T728;
  lit_105 = YPPsym((P)"fun-env");
  lit_106 = YPPsym((P)"fun-env-setter");
  T734 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_288 = YPmet(FUNCODEREF(fun_288),YPfalse,T734,ENVNUL,PNUL,YPfalse);
  T733 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_289 = YPmet(FUNCODEREF(fun_289),YPfalse,T733,ENVNUL,PNUL,YPfalse);
  T732 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_290 = YPmet(FUNCODEREF(fun_290),YPfalse,T732,ENVNUL,PNUL,YPfalse);
  T737 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T736 = (P)YPsig(Ynil,T737,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T735 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_105),T736,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_env,T735);
  T739 = fun_288;
  accessorF420 = T739;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_env),accessorF420);
  (P)YPmet_name_setter(VARREF(Yfun_env),accessorF420);
  T738 = accessorF420;
  getterF421 = T738;
  T744 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T743 = (P)YPpair(VARREF(YLanyG),T744);
  T742 = (P)YPsig(Ynil,T743,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T741 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_106),T742,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_env_setter,T741);
  T746 = fun_289;
  accessorF422 = T746;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_env_setter),accessorF422);
  (P)YPmet_name_setter(VARREF(Yfun_env_setter),accessorF422);
  T745 = accessorF422;
  setterF423 = T745;
  T749 = fun_290;
  T748 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_env),VARREF(Yfun_env_setter),VARREF(YLanyG),T749);
  propF424 = T748;
  (P)YPmet_env_setter(propF424,getterF421);
  (P)YPmet_env_setter(propF424,setterF423);
  T750 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF424);
  T747 = T750;
  T740 = T747;
  lit_107 = YPPsym((P)"fun-refs");
  lit_108 = YPPsym((P)"fun-refs-setter");
  T757 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T756 = fun_291 = YPmet(FUNCODEREF(fun_291),YPfalse,T757,ENVNUL,PNUL,YPfalse);
  T755 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T754 = fun_292 = YPmet(FUNCODEREF(fun_292),YPfalse,T755,ENVNUL,PNUL,YPfalse);
  T753 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T752 = fun_293 = YPmet(FUNCODEREF(fun_293),YPfalse,T753,ENVNUL,PNUL,YPfalse);
  T761 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T760 = (P)YPsig(Ynil,T761,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T759 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_107),T760,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_refs,T759);
  T763 = fun_291;
  accessorF425 = T763;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_refs),accessorF425);
  (P)YPmet_name_setter(VARREF(Yfun_refs),accessorF425);
  T762 = accessorF425;
  getterF426 = T762;
  T768 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T767 = (P)YPpair(VARREF(YLanyG),T768);
  T766 = (P)YPsig(Ynil,T767,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T765 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_108),T766,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_refs_setter,T765);
  T770 = fun_292;
  accessorF427 = T770;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_refs_setter),accessorF427);
  (P)YPmet_name_setter(VARREF(Yfun_refs_setter),accessorF427);
  T769 = accessorF427;
  setterF428 = T769;
  T773 = fun_293;
  T772 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_refs),VARREF(Yfun_refs_setter),VARREF(YLanyG),T773);
  propF429 = T772;
  (P)YPmet_env_setter(propF429,getterF426);
  (P)YPmet_env_setter(propF429,setterF428);
  T774 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF429);
  T771 = T774;
  T764 = T771;
  T758 = T764;
  T751 = T758;
  return T751;
}

P Y___main_8___() {
  P propF469;
  P setterF468;
  P accessorF467;
  P getterF466;
  P accessorF465;
  P propF464;
  P setterF463;
  P accessorF462;
  P getterF461;
  P accessorF460;
  P propF459;
  P setterF458;
  P accessorF457;
  P getterF456;
  P accessorF455;
  P propF454;
  P setterF453;
  P accessorF452;
  P getterF451;
  P accessorF450;
  P propF449;
  P setterF448;
  P accessorF447;
  P getterF446;
  P accessorF445;
  P propF444;
  P setterF443;
  P accessorF442;
  P getterF441;
  P accessorF440;
  P propF439;
  P setterF438;
  P accessorF437;
  P getterF436;
  P accessorF435;
  P propF434;
  P setterF433;
  P accessorF432;
  P getterF431;
  P accessorF430;
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
  P T160,T161,T162,T163,T164;
DEFCREGS();
loop:
  lit_109 = YPPsym((P)"fun-src");
  lit_110 = YPPsym((P)"fun-src-setter");
  T2 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_294 = YPmet(FUNCODEREF(fun_294),YPfalse,T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_295 = YPmet(FUNCODEREF(fun_295),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_296 = YPmet(FUNCODEREF(fun_296),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T5 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T4 = (P)YPsig(Ynil,T5,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T3 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_109),T4,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src,T3);
  T7 = fun_294;
  accessorF430 = T7;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_src),accessorF430);
  (P)YPmet_name_setter(VARREF(Yfun_src),accessorF430);
  T6 = accessorF430;
  getterF431 = T6;
  T12 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T11 = (P)YPpair(VARREF(YLanyG),T12);
  T10 = (P)YPsig(Ynil,T11,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T9 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_110),T10,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src_setter,T9);
  T14 = fun_295;
  accessorF432 = T14;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_src_setter),accessorF432);
  (P)YPmet_name_setter(VARREF(Yfun_src_setter),accessorF432);
  T13 = accessorF432;
  setterF433 = T13;
  T17 = fun_296;
  T16 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_src),VARREF(Yfun_src_setter),VARREF(YLanyG),T17);
  propF434 = T16;
  (P)YPmet_env_setter(propF434,getterF431);
  (P)YPmet_env_setter(propF434,setterF433);
  T18 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF434);
  T15 = T18;
  T8 = T15;
  lit_111 = YPPsym((P)"fun-mets");
  lit_112 = YPPsym((P)"fun-mets-setter");
  T21 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_297 = YPmet(FUNCODEREF(fun_297),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_298 = YPmet(FUNCODEREF(fun_298),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T19 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_299 = YPmet(FUNCODEREF(fun_299),YPfalse,T19,ENVNUL,PNUL,YPfalse);
  T24 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T23 = (P)YPsig(Ynil,T24,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T22 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_111),T23,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets,T22);
  T26 = fun_297;
  accessorF435 = T26;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets),accessorF435);
  (P)YPmet_name_setter(VARREF(Yfun_mets),accessorF435);
  T25 = accessorF435;
  getterF436 = T25;
  T31 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T30 = (P)YPpair(VARREF(YLanyG),T31);
  T29 = (P)YPsig(Ynil,T30,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T28 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_112),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets_setter,T28);
  T33 = fun_298;
  accessorF437 = T33;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets_setter),accessorF437);
  (P)YPmet_name_setter(VARREF(Yfun_mets_setter),accessorF437);
  T32 = accessorF437;
  setterF438 = T32;
  T36 = fun_299;
  T35 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_mets),VARREF(Yfun_mets_setter),VARREF(YLlstG),T36);
  propF439 = T35;
  (P)YPmet_env_setter(propF439,getterF436);
  (P)YPmet_env_setter(propF439,setterF438);
  T37 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF439);
  T34 = T37;
  T27 = T34;
  lit_113 = YPPsym((P)"fun-cache");
  lit_114 = YPPsym((P)"fun-cache-setter");
  T40 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_300 = YPmet(FUNCODEREF(fun_300),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_301 = YPmet(FUNCODEREF(fun_301),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_302 = YPmet(FUNCODEREF(fun_302),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T43 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T42 = (P)YPsig(Ynil,T43,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T41 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_113),T42,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_cache,T41);
  T45 = fun_300;
  accessorF440 = T45;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache),accessorF440);
  (P)YPmet_name_setter(VARREF(Yfun_cache),accessorF440);
  T44 = accessorF440;
  getterF441 = T44;
  T50 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T49 = (P)YPpair(VARREF(YLanyG),T50);
  T48 = (P)YPsig(Ynil,T49,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T47 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_114),T48,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_cache_setter,T47);
  T52 = fun_301;
  accessorF442 = T52;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache_setter),accessorF442);
  (P)YPmet_name_setter(VARREF(Yfun_cache_setter),accessorF442);
  T51 = accessorF442;
  setterF443 = T51;
  T55 = fun_302;
  T54 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_cache),VARREF(Yfun_cache_setter),VARREF(YLanyG),T55);
  propF444 = T54;
  (P)YPmet_env_setter(propF444,getterF441);
  (P)YPmet_env_setter(propF444,setterF443);
  T56 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF444);
  T53 = T56;
  T46 = T53;
  lit_115 = YPPsym((P)"gen-refs");
  lit_116 = YPPsym((P)"gen-refs-setter");
  T59 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_303 = YPmet(FUNCODEREF(fun_303),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLtupG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_304 = YPmet(FUNCODEREF(fun_304),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_305 = YPmet(FUNCODEREF(fun_305),YPfalse,T57,ENVNUL,PNUL,YPfalse);
  T62 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T61 = (P)YPsig(Ynil,T62,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T60 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_115),T61,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_refs,T60);
  T64 = fun_303;
  accessorF445 = T64;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_refs),accessorF445);
  (P)YPmet_name_setter(VARREF(Ygen_refs),accessorF445);
  T63 = accessorF445;
  getterF446 = T63;
  T69 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T68 = (P)YPpair(VARREF(YLanyG),T69);
  T67 = (P)YPsig(Ynil,T68,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T66 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_116),T67,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_refs_setter,T66);
  T71 = fun_304;
  accessorF447 = T71;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_refs_setter),accessorF447);
  (P)YPmet_name_setter(VARREF(Ygen_refs_setter),accessorF447);
  T70 = accessorF447;
  setterF448 = T70;
  T74 = fun_305;
  T73 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_refs),VARREF(Ygen_refs_setter),VARREF(YLtupG),T74);
  propF449 = T73;
  (P)YPmet_env_setter(propF449,getterF446);
  (P)YPmet_env_setter(propF449,setterF448);
  T75 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF449);
  T72 = T75;
  T65 = T72;
  lit_117 = YPPsym((P)"gen-src");
  lit_118 = YPPsym((P)"gen-src-setter");
  T78 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_306 = YPmet(FUNCODEREF(fun_306),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_307 = YPmet(FUNCODEREF(fun_307),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_308 = YPmet(FUNCODEREF(fun_308),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T81 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T80 = (P)YPsig(Ynil,T81,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T79 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_117),T80,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src,T79);
  T83 = fun_306;
  accessorF450 = T83;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_src),accessorF450);
  (P)YPmet_name_setter(VARREF(Ygen_src),accessorF450);
  T82 = accessorF450;
  getterF451 = T82;
  T88 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T87 = (P)YPpair(VARREF(YLanyG),T88);
  T86 = (P)YPsig(Ynil,T87,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T85 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_118),T86,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src_setter,T85);
  T90 = fun_307;
  accessorF452 = T90;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_src_setter),accessorF452);
  (P)YPmet_name_setter(VARREF(Ygen_src_setter),accessorF452);
  T89 = accessorF452;
  setterF453 = T89;
  T93 = fun_308;
  T92 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_src),VARREF(Ygen_src_setter),VARREF(YLanyG),T93);
  propF454 = T92;
  (P)YPmet_env_setter(propF454,getterF451);
  (P)YPmet_env_setter(propF454,setterF453);
  T94 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF454);
  T91 = T94;
  T84 = T91;
  lit_119 = YPPsym((P)"opts-location");
  lit_120 = YPPsym((P)"opts-location-setter");
  T97 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_309 = YPmet(FUNCODEREF(fun_309),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlocG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_310 = YPmet(FUNCODEREF(fun_310),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_311 = YPmet(FUNCODEREF(fun_311),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T100 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T99 = (P)YPsig(Ynil,T100,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T98 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_119),T99,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_location,T98);
  T102 = fun_309;
  accessorF455 = T102;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_location),accessorF455);
  (P)YPmet_name_setter(VARREF(Yopts_location),accessorF455);
  T101 = accessorF455;
  getterF456 = T101;
  T107 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T106 = (P)YPpair(VARREF(YLanyG),T107);
  T105 = (P)YPsig(Ynil,T106,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T104 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_120),T105,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_location_setter,T104);
  T109 = fun_310;
  accessorF457 = T109;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_location_setter),accessorF457);
  (P)YPmet_name_setter(VARREF(Yopts_location_setter),accessorF457);
  T108 = accessorF457;
  setterF458 = T108;
  T112 = fun_311;
  T111 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_location),VARREF(Yopts_location_setter),VARREF(YLlocG),T112);
  propF459 = T111;
  (P)YPmet_env_setter(propF459,getterF456);
  (P)YPmet_env_setter(propF459,setterF458);
  T113 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF459);
  T110 = T113;
  T103 = T110;
  lit_121 = YPPsym((P)"opts-count");
  lit_122 = YPPsym((P)"opts-count-setter");
  T116 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_312 = YPmet(FUNCODEREF(fun_312),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLprim_intG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_313 = YPmet(FUNCODEREF(fun_313),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_314 = YPmet(FUNCODEREF(fun_314),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T119 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T118 = (P)YPsig(Ynil,T119,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T117 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_121),T118,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_count,T117);
  T121 = fun_312;
  accessorF460 = T121;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_count),accessorF460);
  (P)YPmet_name_setter(VARREF(Yopts_count),accessorF460);
  T120 = accessorF460;
  getterF461 = T120;
  T126 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T125 = (P)YPpair(VARREF(YLanyG),T126);
  T124 = (P)YPsig(Ynil,T125,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T123 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_122),T124,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_count_setter,T123);
  T128 = fun_313;
  accessorF462 = T128;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_count_setter),accessorF462);
  (P)YPmet_name_setter(VARREF(Yopts_count_setter),accessorF462);
  T127 = accessorF462;
  setterF463 = T127;
  T131 = fun_314;
  T130 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_count),VARREF(Yopts_count_setter),VARREF(YLprim_intG),T131);
  propF464 = T130;
  (P)YPmet_env_setter(propF464,getterF461);
  (P)YPmet_env_setter(propF464,setterF463);
  T132 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF464);
  T129 = T132;
  T122 = T129;
  lit_123 = YPPsym((P)"opts-tup-storage");
  lit_124 = YPPsym((P)"opts-tup-storage-setter");
  T135 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLopts_tupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_315 = YPmet(FUNCODEREF(fun_315),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLtupG),VARREF(YLopts_tupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_316 = YPmet(FUNCODEREF(fun_316),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_317 = YPmet(FUNCODEREF(fun_317),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T138 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T137 = (P)YPsig(Ynil,T138,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T136 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_123),T137,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_tup_storage,T136);
  T140 = fun_315;
  accessorF465 = T140;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_tup_storage),accessorF465);
  (P)YPmet_name_setter(VARREF(Yopts_tup_storage),accessorF465);
  T139 = accessorF465;
  getterF466 = T139;
  T145 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T144 = (P)YPpair(VARREF(YLanyG),T145);
  T143 = (P)YPsig(Ynil,T144,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T142 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_124),T143,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_tup_storage_setter,T142);
  T147 = fun_316;
  accessorF467 = T147;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_tup_storage_setter),accessorF467);
  (P)YPmet_name_setter(VARREF(Yopts_tup_storage_setter),accessorF467);
  T146 = accessorF467;
  setterF468 = T146;
  T150 = fun_317;
  T149 = (P)YPPprop(VARREF(YLopts_tupG),VARREF(Yopts_tup_storage),VARREF(Yopts_tup_storage_setter),VARREF(YLtupG),T150);
  propF469 = T149;
  (P)YPmet_env_setter(propF469,getterF466);
  (P)YPmet_env_setter(propF469,setterF468);
  T151 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLopts_tupG),propF469);
  T148 = T151;
  T141 = T148;
  lit_125 = YPPsym((P)"%collect-direct-props");
  T152 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPcollect_direct_props = YPmet(FUNCODEREF(YPcollect_direct_props),LITREF(lit_125),T152,ENVNUL,PNUL,YPfalse);
  T153 = YPcollect_direct_props;
  VARSET(YPcollect_direct_props,T153);
  lit_126 = YPPsym((P)"%finalize-props!");
  T154 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPfinalize_propsX = YPmet(FUNCODEREF(YPfinalize_propsX),LITREF(lit_126),T154,ENVNUL,PNUL,YPfalse);
  T155 = YPfinalize_propsX;
  VARSET(YPfinalize_propsX,T155);
  lit_127 = YPPsym((P)"<any>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_127),VARREF(YLanyG));
  lit_128 = YPPsym((P)"<log>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_128),VARREF(YLlogG));
  lit_129 = YPPsym((P)"<mag>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_129),VARREF(YLmagG));
  lit_130 = YPPsym((P)"<chr>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_130),VARREF(YLchrG));
  lit_131 = YPPsym((P)"<num>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_131),VARREF(YLnumG));
  lit_132 = YPPsym((P)"<int>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_132),VARREF(YLintG));
  lit_133 = YPPsym((P)"<prim-int>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_133),VARREF(YLprim_intG));
  lit_134 = YPPsym((P)"<flo>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_134),VARREF(YLfloG));
  lit_135 = YPPsym((P)"<loc>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_135),VARREF(YLlocG));
  lit_136 = YPPsym((P)"<rep>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_136),VARREF(YLrepG));
  lit_137 = YPPsym((P)"<col>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_137),VARREF(YLcolG));
  lit_138 = YPPsym((P)"<col.>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_138),VARREF(YLcolIG));
  lit_139 = YPPsym((P)"<col!>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_139),VARREF(YLcolXG));
  lit_140 = YPPsym((P)"<seq>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_140),VARREF(YLseqG));
  lit_141 = YPPsym((P)"<seq.>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_141),VARREF(YLseqIG));
  lit_142 = YPPsym((P)"<seq!>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_142),VARREF(YLseqXG));
  lit_143 = YPPsym((P)"<lst>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_143),VARREF(YLlstG));
  lit_144 = YPPsym((P)"<flat>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_144),VARREF(YLflatG));
  lit_145 = YPPsym((P)"<tup>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_145),VARREF(YLtupG));
  lit_146 = YPPsym((P)"<str>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_146),VARREF(YLstrG));
  lit_147 = YPPsym((P)"<sym>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_147),VARREF(YLsymG));
  lit_148 = YPPsym((P)"<type>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_148),VARREF(YLtypeG));
  lit_149 = YPPsym((P)"<class>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_149),VARREF(YLclassG));
  lit_150 = YPPsym((P)"<singleton>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_150),VARREF(YLsingletonG));
  lit_151 = YPPsym((P)"<subclass>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_151),VARREF(YLsubclassG));
  lit_152 = YPPsym((P)"<union>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_152),VARREF(YLunionG));
  lit_153 = YPPsym((P)"<product>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_153),VARREF(YLproductG));
  lit_154 = YPPsym((P)"<prop>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_154),VARREF(YLpropG));
  lit_155 = YPPsym((P)"<gen-cache>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_155),VARREF(YLgen_cacheG));
  lit_156 = YPPsym((P)"<sig>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_156),VARREF(YLsigG));
  lit_157 = YPPsym((P)"<fun>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_157),VARREF(YLfunG));
  lit_158 = YPPsym((P)"<met>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_158),VARREF(YLmetG));
  lit_159 = YPPsym((P)"<gen>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_159),VARREF(YLgenG));
  lit_160 = YPPsym((P)"<opts>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_160),VARREF(YLoptsG));
  lit_161 = YPPsym((P)"<opts-tup>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_161),VARREF(YLopts_tupG));
  lit_162 = YPPsym((P)"@@==");
  T156 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOOEE = YPmet(FUNCODEREF(YOOEE),LITREF(lit_162),T156,ENVNUL,PNUL,YPfalse);
  T157 = YOOEE;
  VARSET(YOOEE,T157);
  lit_163 = YPPsym((P)"not");
  T158 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  Ynot = YPmet(FUNCODEREF(Ynot),LITREF(lit_163),T158,ENVNUL,PNUL,YPfalse);
  T159 = Ynot;
  VARSET(Ynot,T159);
  lit_164 = YPPsym((P)"@@empty?");
  T160 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOOemptyQ = YPmet(FUNCODEREF(YOOemptyQ),LITREF(lit_164),T160,ENVNUL,PNUL,YPfalse);
  T161 = YOOemptyQ;
  VARSET(YOOemptyQ,T161);
  lit_165 = YPPsym((P)"@rev!");
  T162 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrevX = YPmet(FUNCODEREF(YOrevX),LITREF(lit_165),T162,ENVNUL,PNUL,YPfalse);
  T163 = YOrevX;
  VARSET(YOrevX,T163);
  T164 = YPfalse;
  return T164;
}

P Y___main_9___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135;
DEFCREGS();
loop:
  lit_166 = YPPsym((P)"@all?");
  lit_167 = YPPsym((P)"test");
  lit_168 = YPPsym((P)"c");
  lit_169 = YPPsym((P)"fnd");
  lit_170 = YPPsym((P)"p");
  T1 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_338 = YPmet(FUNCODEREF(fun_fnd_338),LITREF(lit_169),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(2,LITREF(lit_167),LITREF(lit_168)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOallQ = YPmet(FUNCODEREF(YOallQ),LITREF(lit_166),T0,ENVNUL,PNUL,YPfalse);
  T2 = YOallQ;
  VARSET(YOallQ,T2);
  lit_171 = YPPsym((P)"@all2?");
  lit_172 = YPPsym((P)"px");
  lit_173 = YPPsym((P)"py");
  T4 = YPsig(YPPlist(2,LITREF(lit_172),LITREF(lit_173)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_340 = YPmet(FUNCODEREF(fun_fnd_340),LITREF(lit_169),T4,ENVNUL,PNUL,YPfalse);
  T3 = YPsig(YPPlist(3,LITREF(lit_167),LITREF(lit_10),LITREF(lit_13)),YPPlist(3,VARREF(YLfunG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOall2Q = YPmet(FUNCODEREF(YOall2Q),LITREF(lit_171),T3,ENVNUL,PNUL,YPfalse);
  T5 = YOall2Q;
  VARSET(YOall2Q,T5);
  lit_174 = YPPsym((P)"@elt");
  lit_175 = YPPsym((P)"key");
  lit_176 = YPPsym((P)"count");
  T7 = YPsig(YPPlist(2,LITREF(lit_176),LITREF(lit_10)),YPPlist(2,VARREF(YLprim_intG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_342 = YPmet(FUNCODEREF(fun_fnd_342),LITREF(lit_169),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_175)),YPPlist(2,VARREF(YLlstG),VARREF(YLprim_intG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOelt = YPmet(FUNCODEREF(YOelt),LITREF(lit_174),T6,ENVNUL,PNUL,YPfalse);
  T8 = YOelt;
  VARSET(YOelt,T8);
  lit_177 = YPPsym((P)"@fill");
  lit_178 = YPPsym((P)"f");
  T10 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_344 = YPmet(FUNCODEREF(fun_loop_344),LITREF(lit_5),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_178)),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfill = YPmet(FUNCODEREF(YOfill),LITREF(lit_177),T9,ENVNUL,PNUL,YPfalse);
  T11 = YOfill;
  VARSET(YOfill,T11);
  lit_179 = YPPsym((P)"@any?");
  T13 = YPsig(YPPlist(1,LITREF(lit_170)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_346 = YPmet(FUNCODEREF(fun_fnd_346),LITREF(lit_169),T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(YPPlist(2,LITREF(lit_167),LITREF(lit_168)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOanyQ = YPmet(FUNCODEREF(YOanyQ),LITREF(lit_179),T12,ENVNUL,PNUL,YPfalse);
  T14 = YOanyQ;
  VARSET(YOanyQ,T14);
  lit_180 = YPPsym((P)"@map");
  lit_181 = YPPsym((P)"do");
  lit_182 = YPPsym((P)"res");
  T16 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_182)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_351 = YPmet(FUNCODEREF(fun_do_351),LITREF(lit_181),T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(YPPlist(2,LITREF(lit_178),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmap = YPmet(FUNCODEREF(YOmap),LITREF(lit_180),T15,ENVNUL,PNUL,YPfalse);
  T17 = YOmap;
  VARSET(YOmap,T17);
  lit_183 = YPPsym((P)"@pick");
  T19 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_182)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_353 = YPmet(FUNCODEREF(fun_do_353),LITREF(lit_181),T19,ENVNUL,PNUL,YPfalse);
  T18 = YPsig(YPPlist(2,LITREF(lit_178),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOpick = YPmet(FUNCODEREF(YOpick),LITREF(lit_183),T18,ENVNUL,PNUL,YPfalse);
  T20 = YOpick;
  VARSET(YOpick,T20);
  lit_184 = YPPsym((P)"@do");
  T22 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_355 = YPmet(FUNCODEREF(fun_do_355),LITREF(lit_181),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(2,LITREF(lit_178),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo = YPmet(FUNCODEREF(YOdo),LITREF(lit_184),T21,ENVNUL,PNUL,YPfalse);
  T23 = YOdo;
  VARSET(YOdo,T23);
  lit_185 = YPPsym((P)"@alter");
  lit_186 = YPPsym((P)"dst");
  lit_187 = YPPsym((P)"src");
  lit_188 = YPPsym((P)"in");
  lit_189 = YPPsym((P)"ds");
  lit_190 = YPPsym((P)"ss");
  T25 = YPsig(YPPlist(2,LITREF(lit_189),LITREF(lit_190)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_in_357 = YPmet(FUNCODEREF(fun_in_357),LITREF(lit_188),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(2,LITREF(lit_186),LITREF(lit_187)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOalter = YPmet(FUNCODEREF(YOalter),LITREF(lit_185),T24,ENVNUL,PNUL,YPfalse);
  T26 = YOalter;
  VARSET(YOalter,T26);
  lit_191 = YPPsym((P)"@fab");
  lit_192 = YPPsym((P)"fab");
  T28 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_182)),YPPlist(2,VARREF(YLprim_intG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fab_359 = YPmet(FUNCODEREF(fun_fab_359),LITREF(lit_192),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_3)),YPPlist(2,VARREF(YLlstG),VARREF(YLprim_intG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfab = YPmet(FUNCODEREF(YOfab),LITREF(lit_191),T27,ENVNUL,PNUL,YPfalse);
  T29 = YOfab;
  VARSET(YOfab,T29);
  lit_193 = YPPsym((P)"@fold");
  lit_194 = YPPsym((P)"combine");
  lit_195 = YPPsym((P)"init");
  lit_196 = YPPsym((P)"red");
  T31 = YPsig(YPPlist(2,LITREF(lit_182),LITREF(lit_168)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_red_361 = YPmet(FUNCODEREF(fun_red_361),LITREF(lit_196),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(3,LITREF(lit_194),LITREF(lit_195),LITREF(lit_168)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  YOfold = YPmet(FUNCODEREF(YOfold),LITREF(lit_193),T30,ENVNUL,PNUL,YPfalse);
  T32 = YOfold;
  VARSET(YOfold,T32);
  lit_197 = YPPsym((P)"@rev");
  T34 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_363 = YPmet(FUNCODEREF(fun_loop_363),LITREF(lit_5),T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrev = YPmet(FUNCODEREF(YOrev),LITREF(lit_197),T33,ENVNUL,PNUL,YPfalse);
  T35 = YOrev;
  VARSET(YOrev,T35);
  lit_198 = YPPsym((P)"@cat2");
  T36 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOcat2 = YPmet(FUNCODEREF(YOcat2),LITREF(lit_198),T36,ENVNUL,PNUL,YPfalse);
  T37 = YOcat2;
  VARSET(YOcat2,T37);
  lit_199 = YPPsym((P)"@find");
  T39 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_366 = YPmet(FUNCODEREF(fun_fnd_366),LITREF(lit_169),T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(2,LITREF(lit_178),LITREF(lit_168)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfind = YPmet(FUNCODEREF(YOfind),LITREF(lit_199),T38,ENVNUL,PNUL,YPfalse);
  T40 = YOfind;
  VARSET(YOfind,T40);
  lit_200 = YPPsym((P)"@mem?");
  T42 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_368 = YPmet(FUNCODEREF(fun_368),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmemQ = YPmet(FUNCODEREF(YOmemQ),LITREF(lit_200),T41,ENVNUL,PNUL,YPfalse);
  T43 = YOmemQ;
  VARSET(YOmemQ,T43);
  lit_201 = YPPsym((P)"@del-dups");
  lit_202 = YPPsym((P)"e");
  T45 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_202)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_370 = YPmet(FUNCODEREF(fun_370),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOdel_dups = YPmet(FUNCODEREF(YOdel_dups),LITREF(lit_201),T44,ENVNUL,PNUL,YPfalse);
  T46 = YOdel_dups;
  VARSET(YOdel_dups,T46);
  lit_203 = YPPsym((P)"@lst-helper");
  lit_204 = YPPsym((P)"objects");
  T47 = YPsig(YPPlist(3,LITREF(lit_204),LITREF(lit_17),LITREF(lit_6)),YPPlist(3,VARREF(YLoptsG),VARREF(YLprim_intG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOlst_helper = YPmet(FUNCODEREF(YOlst_helper),LITREF(lit_203),T47,ENVNUL,PNUL,YPfalse);
  T48 = YOlst_helper;
  VARSET(YOlst_helper,T48);
  lit_205 = YPPsym((P)"@opts-as-lst");
  T49 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOopts_as_lst = YPmet(FUNCODEREF(YOopts_as_lst),LITREF(lit_205),T49,ENVNUL,PNUL,YPfalse);
  T50 = YOopts_as_lst;
  VARSET(YOopts_as_lst,T50);
  lit_206 = YPPsym((P)"@lst");
  T51 = YPsig(YPPlist(1,LITREF(lit_204)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOlst = YPmet(FUNCODEREF(YOlst),LITREF(lit_206),T51,ENVNUL,PNUL,YPfalse);
  T52 = YOlst;
  VARSET(YOlst,T52);
  lit_207 = YPPsym((P)"@tany?");
  T54 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_378 = YPmet(FUNCODEREF(fun_fnd_378),LITREF(lit_169),T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(YPPlist(2,LITREF(lit_167),LITREF(lit_168)),YPPlist(2,VARREF(YLfunG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtanyQ = YPmet(FUNCODEREF(YOtanyQ),LITREF(lit_207),T53,ENVNUL,PNUL,YPfalse);
  T55 = YOtanyQ;
  VARSET(YOtanyQ,T55);
  lit_208 = YPPsym((P)"@tall2?");
  lit_209 = YPPsym((P)"c1");
  lit_210 = YPPsym((P)"c2");
  T57 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_380 = YPmet(FUNCODEREF(fun_fnd_380),LITREF(lit_169),T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(YPPlist(3,LITREF(lit_167),LITREF(lit_209),LITREF(lit_210)),YPPlist(3,VARREF(YLfunG),VARREF(YLtupG),VARREF(YLtupG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOtall2Q = YPmet(FUNCODEREF(YOtall2Q),LITREF(lit_208),T56,ENVNUL,PNUL,YPfalse);
  T58 = YOtall2Q;
  VARSET(YOtall2Q,T58);
  lit_211 = YPPsym((P)"into");
  lit_212 = YPPsym((P)"k");
  T59 = YPsig(YPPlist(1,LITREF(lit_212)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_into_382 = YPmet(FUNCODEREF(fun_into_382),LITREF(lit_211),T59,ENVNUL,PNUL,YPfalse);
  lit_213 = YPPsym((P)"@tup");
  T60 = YPsig(YPPlist(1,LITREF(lit_20)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOtup = YPmet(FUNCODEREF(YOtup),LITREF(lit_213),T60,ENVNUL,PNUL,YPfalse);
  T61 = YOtup;
  VARSET(YOtup,T61);
  lit_214 = YPPsym((P)"@fun-names");
  T62 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_names = YPmet(FUNCODEREF(YOfun_names),LITREF(lit_214),T62,ENVNUL,PNUL,YPfalse);
  T63 = YOfun_names;
  VARSET(YOfun_names,T63);
  lit_215 = YPPsym((P)"@fun-specs");
  T64 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_specs = YPmet(FUNCODEREF(YOfun_specs),LITREF(lit_215),T64,ENVNUL,PNUL,YPfalse);
  T65 = YOfun_specs;
  VARSET(YOfun_specs,T65);
  lit_216 = YPPsym((P)"@fun-nary?");
  T66 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOfun_naryQ = YPmet(FUNCODEREF(YOfun_naryQ),LITREF(lit_216),T66,ENVNUL,PNUL,YPfalse);
  T67 = YOfun_naryQ;
  VARSET(YOfun_naryQ,T67);
  lit_217 = YPPsym((P)"@fun-arity");
  T68 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLprim_intG),Ynil);
  YOfun_arity = YPmet(FUNCODEREF(YOfun_arity),LITREF(lit_217),T68,ENVNUL,PNUL,YPfalse);
  T69 = YOfun_arity;
  VARSET(YOfun_arity,T69);
  lit_218 = YPPsym((P)"@fun-val");
  T70 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOfun_val = YPmet(FUNCODEREF(YOfun_val),LITREF(lit_218),T70,ENVNUL,PNUL,YPfalse);
  T71 = YOfun_val;
  VARSET(YOfun_val,T71);
  lit_219 = YPPsym((P)"@fun-unification-vars");
  T72 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_unification_vars = YPmet(FUNCODEREF(YOfun_unification_vars),LITREF(lit_219),T72,ENVNUL,PNUL,YPfalse);
  T73 = YOfun_unification_vars;
  VARSET(YOfun_unification_vars,T73);
  lit_220 = YPPsym((P)"@fun-mets");
  T74 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_mets = YPmet(FUNCODEREF(YOfun_mets),LITREF(lit_220),T74,ENVNUL,PNUL,YPfalse);
  T75 = YOfun_mets;
  VARSET(YOfun_mets,T75);
  lit_221 = YPPsym((P)"@fun-mets-setter");
  T76 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfun_mets_setter = YPmet(FUNCODEREF(YOfun_mets_setter),LITREF(lit_221),T76,ENVNUL,PNUL,YPfalse);
  T77 = YOfun_mets_setter;
  VARSET(YOfun_mets_setter,T77);
  VARSET(YLenvG,VARREF(YLanyG));
  VARSET(YLspecsG,VARREF(YLlstG));
  VARSET(YLbodyG,VARREF(YLanyG));
  lit_222 = YPPsym((P)"fun-spec");
  T78 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_17)),YPPlist(2,VARREF(YLmetG),VARREF(YLprim_intG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_spec = YPmet(FUNCODEREF(Yfun_spec),LITREF(lit_222),T78,ENVNUL,PNUL,YPfalse);
  T79 = Yfun_spec;
  VARSET(Yfun_spec,T79);
  VARSET(YLmetsG,VARREF(YLlstG));
  lit_223 = YPPsym((P)"fun-same-met?");
  T80 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLmetG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yfun_same_metQ = YPmet(FUNCODEREF(Yfun_same_metQ),LITREF(lit_223),T80,ENVNUL,PNUL,YPfalse);
  T81 = Yfun_same_metQ;
  VARSET(Yfun_same_metQ,T81);
  lit_224 = YPPsym((P)"fun-congruent?");
  T82 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yfun_congruentQ = YPmet(FUNCODEREF(Yfun_congruentQ),LITREF(lit_224),T82,ENVNUL,PNUL,YPfalse);
  T83 = Yfun_congruentQ;
  VARSET(Yfun_congruentQ,T83);
  VARSET(YTrestarts_okQT,YPfalse);
  lit_225 = YPPsym((P)"gen-add-met");
  lit_226 = YPPsym((P)"g");
  lit_227 = YPPsym((P)"m");
  lit_228 = YPPsym((P)"return");
  lit_229 = YPsb((P)"Replace %= with an empty generic congruent with %=");
  lit_230 = YPPsym((P)"lop");
  lit_231 = YPPsym((P)"specs");
  lit_232 = YPPsym((P)"col");
  lit_233 = YPPsym((P)"mets");
  lit_234 = YPPsym((P)"same?");
  lit_235 = YPPsym((P)"gms");
  T90 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_396 = YPmet(FUNCODEREF(fun_396),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_397 = YPmet(FUNCODEREF(fun_397),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_398 = YPmet(FUNCODEREF(fun_398),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(1,LITREF(lit_228)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_399 = YPmet(FUNCODEREF(fun_399),YPfalse,T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(YPPlist(1,LITREF(lit_231)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lop_400 = YPmet(FUNCODEREF(fun_lop_400),LITREF(lit_230),T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(YPPlist(3,LITREF(lit_233),LITREF(lit_234),LITREF(lit_235)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLmetsG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_col_401 = YPmet(FUNCODEREF(fun_col_401),LITREF(lit_232),T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(YPPlist(2,LITREF(lit_226),LITREF(lit_227)),YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  Ygen_add_met = YPmet(FUNCODEREF(Ygen_add_met),LITREF(lit_225),T84,ENVNUL,PNUL,YPfalse);
  T91 = Ygen_add_met;
  VARSET(Ygen_add_met,T91);
  lit_236 = YPPsym((P)"@isa?");
  lit_237 = YPPsym((P)"o");
  lit_238 = YPPsym((P)"t");
  T92 = YPsig(YPPlist(2,LITREF(lit_237),LITREF(lit_238)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOisaQ = YPmet(FUNCODEREF(YOisaQ),LITREF(lit_236),T92,ENVNUL,PNUL,YPfalse);
  T93 = YOisaQ;
  VARSET(YOisaQ,T93);
  lit_239 = YPPsym((P)"@class<");
  lit_240 = YPPsym((P)"wrt");
  lit_241 = YPPsym((P)"find");
  lit_242 = YPPsym((P)"ps");
  lit_243 = YPsb((P)"can't order specializers - arg/reference object %= is ");
  lit_244 = YPsb((P)"neither %= nor %=");
  T95 = YPsig(YPPlist(1,LITREF(lit_242)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_407 = YPmet(FUNCODEREF(fun_find_407),LITREF(lit_241),T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(3,LITREF(lit_209),LITREF(lit_210),LITREF(lit_240)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOclassL = YPmet(FUNCODEREF(YOclassL),LITREF(lit_239),T94,ENVNUL,PNUL,YPfalse);
  T96 = YOclassL;
  VARSET(YOclassL,T96);
  VARSET(Ytup,VARREF(YOtup));
  lit_245 = YPPsym((P)"t*");
  T97 = YPsig(YPPlist(1,LITREF(lit_20)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YtT = YPmet(FUNCODEREF(YtT),LITREF(lit_245),T97,ENVNUL,PNUL,YPfalse);
  T98 = YtT;
  VARSET(YtT,T98);
  lit_246 = YPPsym((P)"@type-equal?");
  lit_247 = YPPsym((P)"t1");
  lit_248 = YPPsym((P)"t2");
  T99 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtype_equalQ = YPmet(FUNCODEREF(YOtype_equalQ),LITREF(lit_246),T99,ENVNUL,PNUL,YPfalse);
  T100 = YOtype_equalQ;
  VARSET(YOtype_equalQ,T100);
  lit_249 = YPPsym((P)"@subtype?");
  T101 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOsubtypeQ = YPmet(FUNCODEREF(YOsubtypeQ),LITREF(lit_249),T101,ENVNUL,PNUL,YPfalse);
  T102 = YOsubtypeQ;
  VARSET(YOsubtypeQ,T102);
  lit_250 = YPPsym((P)"@may-isa?");
  T104 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T103 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_238)),YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),T104,Ynil);
  YOmay_isaQ = YPmet(FUNCODEREF(YOmay_isaQ),LITREF(lit_250),T103,ENVNUL,PNUL,YPfalse);
  T105 = YOmay_isaQ;
  VARSET(YOmay_isaQ,T105);
  lit_251 = YPPsym((P)"@order-specs-class");
  lit_252 = YPPsym((P)"arg");
  lit_253 = YPPsym((P)"=");
  lit_254 = YPPsym((P)"<");
  lit_255 = YPPsym((P)">");
  T106 = YPsig(YPPlist(3,LITREF(lit_247),LITREF(lit_248),LITREF(lit_252)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOorder_specs_class = YPmet(FUNCODEREF(YOorder_specs_class),LITREF(lit_251),T106,ENVNUL,PNUL,YPfalse);
  T107 = YOorder_specs_class;
  VARSET(YOorder_specs_class,T107);
  lit_256 = YPPsym((P)"@order-specs");
  T108 = YPsig(YPPlist(3,LITREF(lit_247),LITREF(lit_248),LITREF(lit_252)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOorder_specs = YPmet(FUNCODEREF(YOorder_specs),LITREF(lit_256),T108,ENVNUL,PNUL,YPfalse);
  T109 = YOorder_specs;
  VARSET(YOorder_specs,T109);
  lit_257 = YPPsym((P)"order-mets");
  lit_258 = YPPsym((P)"m1");
  lit_259 = YPPsym((P)"m2");
  lit_260 = YPPsym((P)"state");
  lit_261 = YPPsym((P)"idx");
  lit_262 = YPPsym((P)"<>");
  T111 = YPsig(YPPlist(2,LITREF(lit_260),LITREF(lit_261)),YPPlist(2,VARREF(YLsymG),VARREF(YLprim_intG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_415 = YPmet(FUNCODEREF(fun_loop_415),LITREF(lit_5),T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(YPPlist(3,LITREF(lit_258),LITREF(lit_259),LITREF(lit_20)),YPPlist(3,VARREF(YLmetG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLsymG),Ynil);
  Yorder_mets = YPmet(FUNCODEREF(Yorder_mets),LITREF(lit_257),T110,ENVNUL,PNUL,YPfalse);
  T112 = Yorder_mets;
  VARSET(Yorder_mets,T112);
  lit_263 = YPPsym((P)"ord-app-mets-1");
  lit_264 = YPPsym((P)"make-ambiguous");
  lit_265 = YPPsym((P)"headed-list");
  lit_266 = YPPsym((P)"precedes-all?");
  lit_267 = YPPsym((P)"check-subsequent-ambiguities");
  lit_268 = YPPsym((P)"oprev");
  lit_269 = YPPsym((P)"insert");
  lit_270 = YPPsym((P)"osub");
  T120 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_417 = YPmet(FUNCODEREF(fun_loop_417),LITREF(lit_5),T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(1,LITREF(lit_265)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_ambiguous_418 = YPmet(FUNCODEREF(fun_make_ambiguous_418),LITREF(lit_264),T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_419 = YPmet(FUNCODEREF(fun_loop_419),LITREF(lit_5),T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_precedes_allQ_420 = YPmet(FUNCODEREF(fun_precedes_allQ_420),LITREF(lit_266),T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(1,LITREF(lit_268)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_check_subsequent_ambiguities_421 = YPmet(FUNCODEREF(fun_check_subsequent_ambiguities_421),LITREF(lit_267),T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(2,LITREF(lit_268),LITREF(lit_270)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_422 = YPmet(FUNCODEREF(fun_insert_422),LITREF(lit_269),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(1,LITREF(lit_233)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_423 = YPmet(FUNCODEREF(fun_loop_423),LITREF(lit_5),T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(YPPlist(3,LITREF(lit_233),LITREF(lit_20),LITREF(lit_257)),YPPlist(3,VARREF(YLlstG),VARREF(YLoptsG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  Yord_app_mets_1 = YPmet(FUNCODEREF(Yord_app_mets_1),LITREF(lit_263),T113,ENVNUL,PNUL,YPfalse);
  T121 = Yord_app_mets_1;
  VARSET(Yord_app_mets_1,T121);
  T122 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_425 = YPmet(FUNCODEREF(fun_425),YPfalse,T122,ENVNUL,PNUL,YPfalse);
  T123 = fun_425;
  VARSET(Ymet_app_unify,T123);
  lit_271 = YPPsym((P)"met-app?");
  T125 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLprim_intG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_426 = YPmet(FUNCODEREF(fun_loop_426),LITREF(lit_5),T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_20)),YPPlist(2,VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Ymet_appQ = YPmet(FUNCODEREF(Ymet_appQ),LITREF(lit_271),T124,ENVNUL,PNUL,YPfalse);
  T126 = Ymet_appQ;
  VARSET(Ymet_appQ,T126);
  lit_272 = YPPsym((P)"ord-app-mets*");
  lit_273 = YPPsym((P)"gf");
  lit_274 = YPPsym((P)"ans");
  lit_275 = YPPsym((P)"ms");
  T128 = YPsig(YPPlist(2,LITREF(lit_274),LITREF(lit_275)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_428 = YPmet(FUNCODEREF(fun_col_428),LITREF(lit_232),T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(YPPlist(2,LITREF(lit_273),LITREF(lit_20)),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  Yord_app_metsT = YPmet(FUNCODEREF(Yord_app_metsT),LITREF(lit_272),T127,ENVNUL,PNUL,YPfalse);
  T129 = Yord_app_metsT;
  VARSET(Yord_app_metsT,T129);
  lit_276 = YPPsym((P)"ord-app-mets");
  T133 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T132 = YPsig(YPPlist(2,LITREF(lit_273),LITREF(lit_20)),YPPlist(1,VARREF(YLgenG)),YPtrue,YPint((P)1),T133,Ynil);
  T131 = Yord_app_mets = YPmet(FUNCODEREF(Yord_app_mets),LITREF(lit_276),T132,ENVNUL,PNUL,YPfalse);
  T135 = Yord_app_mets;
  T134 = VARSET(Yord_app_mets,T135);
  T130 = T134;
  return T130;
}

P Y___main_10___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
DEFCREGS();
loop:
  lit_277 = YPPsym((P)"@gen-cache-arg-pos");
  T0 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_arg_pos = YPmet(FUNCODEREF(YOgen_cache_arg_pos),LITREF(lit_277),T0,ENVNUL,PNUL,YPfalse);
  T1 = YOgen_cache_arg_pos;
  VARSET(YOgen_cache_arg_pos,T1);
  lit_278 = YPPsym((P)"@gen-cache-arg-pos-setter");
  T2 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_arg_pos_setter = YPmet(FUNCODEREF(YOgen_cache_arg_pos_setter),LITREF(lit_278),T2,ENVNUL,PNUL,YPfalse);
  T3 = YOgen_cache_arg_pos_setter;
  VARSET(YOgen_cache_arg_pos_setter,T3);
  lit_279 = YPPsym((P)"@gen-cache-singletons");
  T4 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_singletons = YPmet(FUNCODEREF(YOgen_cache_singletons),LITREF(lit_279),T4,ENVNUL,PNUL,YPfalse);
  T5 = YOgen_cache_singletons;
  VARSET(YOgen_cache_singletons,T5);
  lit_280 = YPPsym((P)"@gen-cache-singletons-setter");
  T6 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_singletons_setter = YPmet(FUNCODEREF(YOgen_cache_singletons_setter),LITREF(lit_280),T6,ENVNUL,PNUL,YPfalse);
  T7 = YOgen_cache_singletons_setter;
  VARSET(YOgen_cache_singletons_setter,T7);
  lit_281 = YPPsym((P)"@gen-cache-classes");
  T8 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_classes = YPmet(FUNCODEREF(YOgen_cache_classes),LITREF(lit_281),T8,ENVNUL,PNUL,YPfalse);
  T9 = YOgen_cache_classes;
  VARSET(YOgen_cache_classes,T9);
  lit_282 = YPPsym((P)"@gen-cache-classes-setter");
  T10 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_classes_setter = YPmet(FUNCODEREF(YOgen_cache_classes_setter),LITREF(lit_282),T10,ENVNUL,PNUL,YPfalse);
  T11 = YOgen_cache_classes_setter;
  VARSET(YOgen_cache_classes_setter,T11);
  lit_283 = YPPsym((P)"method-accessor-offset");
  T12 = YPsig(YPPlist(3,LITREF(lit_23),LITREF(lit_24),LITREF(lit_20)),YPPlist(3,VARREF(YLgenG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Ymethod_accessor_offset = YPmet(FUNCODEREF(Ymethod_accessor_offset),LITREF(lit_283),T12,ENVNUL,PNUL,YPfalse);
  T13 = Ymethod_accessor_offset;
  VARSET(Ymethod_accessor_offset,T13);
  lit_284 = YPPsym((P)"@singleton-spec?");
  T14 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOsingleton_specQ = YPmet(FUNCODEREF(YOsingleton_specQ),LITREF(lit_284),T14,ENVNUL,PNUL,YPfalse);
  T15 = YOsingleton_specQ;
  VARSET(YOsingleton_specQ,T15);
  lit_285 = YPPsym((P)"@subclass-spec?");
  T16 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOsubclass_specQ = YPmet(FUNCODEREF(YOsubclass_specQ),LITREF(lit_285),T16,ENVNUL,PNUL,YPfalse);
  T17 = YOsubclass_specQ;
  VARSET(YOsubclass_specQ,T17);
  lit_286 = YPPsym((P)"@union-spec?");
  T18 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOunion_specQ = YPmet(FUNCODEREF(YOunion_specQ),LITREF(lit_286),T18,ENVNUL,PNUL,YPfalse);
  T19 = YOunion_specQ;
  VARSET(YOunion_specQ,T19);
  lit_287 = YPPsym((P)"@precise-spec?");
  T20 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOprecise_specQ = YPmet(FUNCODEREF(YOprecise_specQ),LITREF(lit_287),T20,ENVNUL,PNUL,YPfalse);
  T21 = YOprecise_specQ;
  VARSET(YOprecise_specQ,T21);
  lit_288 = YPPsym((P)"@mets-unspecialized-at?");
  lit_289 = YPPsym((P)"pos");
  T23 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_442 = YPmet(FUNCODEREF(fun_442),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(YPPlist(2,LITREF(lit_233),LITREF(lit_289)),YPPlist(2,VARREF(YLlstG),VARREF(YLprim_intG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmets_unspecialized_atQ = YPmet(FUNCODEREF(YOmets_unspecialized_atQ),LITREF(lit_288),T22,ENVNUL,PNUL,YPfalse);
  T24 = YOmets_unspecialized_atQ;
  VARSET(YOmets_unspecialized_atQ,T24);
  lit_290 = YPPsym((P)"@prune-mets-by-type-at");
  lit_291 = YPPsym((P)"type");
  T26 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_444 = YPmet(FUNCODEREF(fun_444),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(YPPlist(3,LITREF(lit_233),LITREF(lit_291),LITREF(lit_289)),YPPlist(3,VARREF(YLlstG),VARREF(YLtypeG),VARREF(YLprim_intG)),YPfalse,YPint((P)3),VARREF(YLmetsG),Ynil);
  YOprune_mets_by_type_at = YPmet(FUNCODEREF(YOprune_mets_by_type_at),LITREF(lit_290),T25,ENVNUL,PNUL,YPfalse);
  T27 = YOprune_mets_by_type_at;
  VARSET(YOprune_mets_by_type_at,T27);
  lit_292 = YPPsym((P)"@mets-specs-at");
  T29 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_446 = YPmet(FUNCODEREF(fun_446),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(2,LITREF(lit_233),LITREF(lit_289)),YPPlist(2,VARREF(YLlstG),VARREF(YLprim_intG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_specs_at = YPmet(FUNCODEREF(YOmets_specs_at),LITREF(lit_292),T28,ENVNUL,PNUL,YPfalse);
  T30 = YOmets_specs_at;
  VARSET(YOmets_specs_at,T30);
  lit_293 = YPPsym((P)"@mets-singletons-at");
  lit_294 = YPPsym((P)"spec");
  T32 = YPsig(YPPlist(1,LITREF(lit_294)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_448 = YPmet(FUNCODEREF(fun_448),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(YPPlist(2,LITREF(lit_233),LITREF(lit_289)),YPPlist(2,VARREF(YLlstG),VARREF(YLprim_intG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_singletons_at = YPmet(FUNCODEREF(YOmets_singletons_at),LITREF(lit_293),T31,ENVNUL,PNUL,YPfalse);
  T33 = YOmets_singletons_at;
  VARSET(YOmets_singletons_at,T33);
  lit_295 = YPPsym((P)"@mets-subclasses-at");
  T35 = YPsig(YPPlist(1,LITREF(lit_294)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_450 = YPmet(FUNCODEREF(fun_450),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(YPPlist(2,LITREF(lit_233),LITREF(lit_289)),YPPlist(2,VARREF(YLlstG),VARREF(YLprim_intG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_subclasses_at = YPmet(FUNCODEREF(YOmets_subclasses_at),LITREF(lit_295),T34,ENVNUL,PNUL,YPfalse);
  T36 = YOmets_subclasses_at;
  VARSET(YOmets_subclasses_at,T36);
  VARSET(YDnul_assocs,VARREF(YPtnul));
  lit_296 = YPPsym((P)"@cache-add");
  lit_297 = YPPsym((P)"v");
  lit_298 = YPPsym((P)"copy");
  T38 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_copy_452 = YPmet(FUNCODEREF(fun_copy_452),LITREF(lit_298),T38,ENVNUL,PNUL,YPfalse);
  T37 = YPsig(YPPlist(3,LITREF(lit_238),LITREF(lit_212),LITREF(lit_297)),YPPlist(3,VARREF(YLtupG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOcache_add = YPmet(FUNCODEREF(YOcache_add),LITREF(lit_296),T37,ENVNUL,PNUL,YPfalse);
  T39 = YOcache_add;
  VARSET(YOcache_add,T39);
  lit_299 = YPPsym((P)"gen-lookup-miss-1-using");
  lit_300 = YPPsym((P)"instance");
  lit_301 = YPPsym((P)"all-assocs");
  lit_302 = YPPsym((P)"all-assocs-setter");
  lit_303 = YPPsym((P)"cache");
  lit_304 = YPPsym((P)"sorted-mets");
  lit_305 = YPPsym((P)"j");
  T41 = YPsig(YPPlist(1,LITREF(lit_305)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_454 = YPmet(FUNCODEREF(fun_loop_454),LITREF(lit_5),T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(10,LITREF(lit_175),LITREF(lit_300),LITREF(lit_301),LITREF(lit_302),LITREF(lit_23),LITREF(lit_303),LITREF(lit_233),LITREF(lit_304),LITREF(lit_17),LITREF(lit_20)),YPPlist(10,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLprim_intG),VARREF(YLoptsG)),YPfalse,YPint((P)10),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss_1_using = YPmet(FUNCODEREF(Ygen_lookup_miss_1_using),LITREF(lit_299),T40,ENVNUL,PNUL,YPfalse);
  T42 = Ygen_lookup_miss_1_using;
  VARSET(Ygen_lookup_miss_1_using,T42);
  lit_306 = YPPsym((P)"@specd-args");
  T44 = YPsig(YPPlist(1,LITREF(lit_212)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_copy_456 = YPmet(FUNCODEREF(fun_copy_456),LITREF(lit_298),T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(3,LITREF(lit_20),LITREF(lit_17),LITREF(lit_252)),YPPlist(3,VARREF(YLoptsG),VARREF(YLprim_intG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLoptsG),Ynil);
  YOspecd_args = YPmet(FUNCODEREF(YOspecd_args),LITREF(lit_306),T43,ENVNUL,PNUL,YPfalse);
  T45 = YOspecd_args;
  VARSET(YOspecd_args,T45);
  lit_307 = YPPsym((P)"requires-singleton-prec");
  T46 = YPsig(YPPlist(2,LITREF(lit_233),LITREF(lit_289)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yrequires_singleton_prec = YPmet(FUNCODEREF(Yrequires_singleton_prec),LITREF(lit_307),T46,ENVNUL,PNUL,YPfalse);
  T47 = Yrequires_singleton_prec;
  VARSET(Yrequires_singleton_prec,T47);
  lit_308 = YPPsym((P)"ensure-singleton-cache");
  lit_309 = YPPsym((P)"singletons");
  T49 = YPsig(YPPlist(1,LITREF(lit_309)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_459 = YPmet(FUNCODEREF(fun_loop_459),LITREF(lit_5),T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(6,LITREF(lit_23),LITREF(lit_303),LITREF(lit_233),LITREF(lit_304),LITREF(lit_17),LITREF(lit_20)),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLprim_intG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  Yensure_singleton_cache = YPmet(FUNCODEREF(Yensure_singleton_cache),LITREF(lit_308),T48,ENVNUL,PNUL,YPfalse);
  T50 = Yensure_singleton_cache;
  VARSET(Yensure_singleton_cache,T50);
  lit_310 = YPPsym((P)"gen-lookup-miss-1");
  lit_311 = YPPsym((P)"ocache");
  T51 = YPsig(YPPlist(6,LITREF(lit_23),LITREF(lit_311),LITREF(lit_233),LITREF(lit_304),LITREF(lit_17),LITREF(lit_20)),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLprim_intG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss_1 = YPmet(FUNCODEREF(Ygen_lookup_miss_1),LITREF(lit_310),T51,ENVNUL,PNUL,YPfalse);
  T52 = Ygen_lookup_miss_1;
  VARSET(Ygen_lookup_miss_1,T52);
  lit_312 = YPPsym((P)"gen-lookup-miss");
  T53 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_20)),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss = YPmet(FUNCODEREF(Ygen_lookup_miss),LITREF(lit_312),T53,ENVNUL,PNUL,YPfalse);
  T54 = Ygen_lookup_miss;
  VARSET(Ygen_lookup_miss,T54);
  T55 = (P)YPpair(VARREF(Ynil),VARREF(Ynil));
  VARSET(YDmissed_dispatch,T55);
  lit_313 = YPPsym((P)"choose-methods");
  lit_314 = YPsb((P)"No applicable methods error when calling %= on %=");
  T56 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_20)),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  Ychoose_methods = YPmet(FUNCODEREF(Ychoose_methods),LITREF(lit_313),T56,ENVNUL,PNUL,YPfalse);
  T57 = Ychoose_methods;
  VARSET(Ychoose_methods,T57);
  lit_315 = YPPsym((P)"%dispatch");
  T58 = YPsig(YPPlist(1,LITREF(lit_20)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YPdispatch = YPmet(FUNCODEREF(YPdispatch),LITREF(lit_315),T58,ENVNUL,PNUL,YPfalse);
  T59 = YPdispatch;
  VARSET(YPdispatch,T59);
  lit_316 = YPPsym((P)"%patch-early-generic");
  lit_317 = YPPsym((P)"generic");
  T60 = YPsig(YPPlist(1,LITREF(lit_317)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPpatch_early_generic = YPmet(FUNCODEREF(YPpatch_early_generic),LITREF(lit_316),T60,ENVNUL,PNUL,YPfalse);
  T61 = YPpatch_early_generic;
  VARSET(YPpatch_early_generic,T61);
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
  T63 = XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_type_cache_setter));
  T62 = T63;
  return T62;
}

P Y___main_11___() {
  P T0,T1;
DEFCREGS();
loop:
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
  T1 = XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_location_setter));
  T0 = T1;
  return T0;
}

P Y___main_12___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130;
DEFCREGS();
loop:
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_count));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_count_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_tup_storage));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_tup_storage_setter));
  lit_318 = YPPsym((P)"fun-names");
  T0 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_names = YPmet(FUNCODEREF(Yfun_names),LITREF(lit_318),T0,ENVNUL,PNUL,YPfalse);
  T1 = Yfun_names;
  VARSET(Yfun_names,T1);
  lit_319 = YPPsym((P)"fun-names-setter");
  T2 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_names_setter = YPmet(FUNCODEREF(Yfun_names_setter),LITREF(lit_319),T2,ENVNUL,PNUL,YPfalse);
  T3 = Yfun_names_setter;
  VARSET(Yfun_names_setter,T3);
  lit_320 = YPPsym((P)"fun-specs");
  T4 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_specs = YPmet(FUNCODEREF(Yfun_specs),LITREF(lit_320),T4,ENVNUL,PNUL,YPfalse);
  T5 = Yfun_specs;
  VARSET(Yfun_specs,T5);
  lit_321 = YPPsym((P)"fun-specs-setter");
  T6 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_specs_setter = YPmet(FUNCODEREF(Yfun_specs_setter),LITREF(lit_321),T6,ENVNUL,PNUL,YPfalse);
  T7 = Yfun_specs_setter;
  VARSET(Yfun_specs_setter,T7);
  lit_322 = YPPsym((P)"fun-nary?");
  T8 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_naryQ = YPmet(FUNCODEREF(Yfun_naryQ),LITREF(lit_322),T8,ENVNUL,PNUL,YPfalse);
  T9 = Yfun_naryQ;
  VARSET(Yfun_naryQ,T9);
  lit_323 = YPPsym((P)"fun-nary?-setter");
  T10 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_naryQ_setter = YPmet(FUNCODEREF(Yfun_naryQ_setter),LITREF(lit_323),T10,ENVNUL,PNUL,YPfalse);
  T11 = Yfun_naryQ_setter;
  VARSET(Yfun_naryQ_setter,T11);
  lit_324 = YPPsym((P)"fun-arity");
  T12 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_arity = YPmet(FUNCODEREF(Yfun_arity),LITREF(lit_324),T12,ENVNUL,PNUL,YPfalse);
  T13 = Yfun_arity;
  VARSET(Yfun_arity,T13);
  lit_325 = YPPsym((P)"fun-arity-setter");
  T14 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_arity_setter = YPmet(FUNCODEREF(Yfun_arity_setter),LITREF(lit_325),T14,ENVNUL,PNUL,YPfalse);
  T15 = Yfun_arity_setter;
  VARSET(Yfun_arity_setter,T15);
  lit_326 = YPPsym((P)"fun-val");
  T16 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_val = YPmet(FUNCODEREF(Yfun_val),LITREF(lit_326),T16,ENVNUL,PNUL,YPfalse);
  T17 = Yfun_val;
  VARSET(Yfun_val,T17);
  lit_327 = YPPsym((P)"fun-val-setter");
  T18 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_val_setter = YPmet(FUNCODEREF(Yfun_val_setter),LITREF(lit_327),T18,ENVNUL,PNUL,YPfalse);
  T19 = Yfun_val_setter;
  VARSET(Yfun_val_setter,T19);
  lit_328 = YPPsym((P)"fun-unification-vars");
  T20 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_unification_vars = YPmet(FUNCODEREF(Yfun_unification_vars),LITREF(lit_328),T20,ENVNUL,PNUL,YPfalse);
  T21 = Yfun_unification_vars;
  VARSET(Yfun_unification_vars,T21);
  lit_329 = YPPsym((P)"fun-unification-vars-setter");
  T22 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_unification_vars_setter = YPmet(FUNCODEREF(Yfun_unification_vars_setter),LITREF(lit_329),T22,ENVNUL,PNUL,YPfalse);
  T23 = Yfun_unification_vars_setter;
  VARSET(Yfun_unification_vars_setter,T23);
  VARSET(YLparentsG,VARREF(YLlstG));
  VARSET(YLpropsG,VARREF(YLlstG));
  lit_330 = YPPsym((P)"object-class");
  T24 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_class = YPmet(FUNCODEREF(Yobject_class),LITREF(lit_330),T24,ENVNUL,PNUL,YPfalse);
  T25 = Yobject_class;
  VARSET(Yobject_class,T25);
  lit_331 = YPPsym((P)"@class-ancestors");
  T26 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOclass_ancestors = YPmet(FUNCODEREF(YOclass_ancestors),LITREF(lit_331),T26,ENVNUL,PNUL,YPfalse);
  T27 = YOclass_ancestors;
  VARSET(YOclass_ancestors,T27);
  lit_332 = YPPsym((P)"class-ordered-ancestors");
  lit_333 = YPPsym((P)"merge-lists");
  lit_334 = YPPsym((P)"partial-cpl");
  lit_335 = YPPsym((P)"remaining-lists");
  lit_336 = YPPsym((P)"candidate");
  lit_337 = YPPsym((P)"tail?");
  lit_338 = YPPsym((P)"candidate-at-head");
  lit_339 = YPPsym((P)"del-next");
  lit_340 = YPsb((P)"inconsistent precedence graph");
  T33 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_tailQ_486 = YPmet(FUNCODEREF(fun_tailQ_486),LITREF(lit_337),T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_candidate_487 = YPmet(FUNCODEREF(fun_candidate_487),LITREF(lit_336),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_candidate_at_head_488 = YPmet(FUNCODEREF(fun_candidate_at_head_488),LITREF(lit_338),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_del_next_489 = YPmet(FUNCODEREF(fun_del_next_489),LITREF(lit_339),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(2,LITREF(lit_334),LITREF(lit_335)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_merge_lists_490 = YPmet(FUNCODEREF(fun_merge_lists_490),LITREF(lit_333),T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(1,LITREF(lit_168)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLparentsG),Ynil);
  Yclass_ordered_ancestors = YPmet(FUNCODEREF(Yclass_ordered_ancestors),LITREF(lit_332),T28,ENVNUL,PNUL,YPfalse);
  T34 = Yclass_ordered_ancestors;
  VARSET(Yclass_ordered_ancestors,T34);
  lit_341 = YPPsym((P)"@class-direct-props");
  T35 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOclass_direct_props = YPmet(FUNCODEREF(YOclass_direct_props),LITREF(lit_341),T35,ENVNUL,PNUL,YPfalse);
  T36 = YOclass_direct_props;
  VARSET(YOclass_direct_props,T36);
  lit_342 = YPPsym((P)"class-ordered-props");
  T37 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLpropsG),Ynil);
  Yclass_ordered_props = YPmet(FUNCODEREF(Yclass_ordered_props),LITREF(lit_342),T37,ENVNUL,PNUL,YPfalse);
  T38 = Yclass_ordered_props;
  VARSET(Yclass_ordered_props,T38);
  lit_343 = YPPsym((P)"del-class");
  T39 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Ydel_class = YPmet(FUNCODEREF(Ydel_class),LITREF(lit_343),T39,ENVNUL,PNUL,YPfalse);
  T40 = Ydel_class;
  VARSET(Ydel_class,T40);
  VARSET(YTnext_class_idT,YPint((P)0));
  VARSET(YDmax_classes,YPint((P)500));
  lit_344 = YPPsym((P)"init-class");
  lit_345 = YPsb((P)"Too many classes %=");
  lit_346 = YPsb((P)"Need at least one parent in class definition");
  lit_347 = YPPsym((P)"parent");
  lit_348 = YPPsym((P)"ancestor");
  T43 = YPsig(YPPlist(1,LITREF(lit_347)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_495 = YPmet(FUNCODEREF(fun_495),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(1,LITREF(lit_348)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_496 = YPmet(FUNCODEREF(fun_496),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yinit_class = YPmet(FUNCODEREF(Yinit_class),LITREF(lit_344),T41,ENVNUL,PNUL,YPfalse);
  T44 = Yinit_class;
  VARSET(Yinit_class,T44);
  lit_349 = YPPsym((P)"fab-class");
  lit_350 = YPPsym((P)"parents");
  T45 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_350)),YPPlist(2,VARREF(YLsymG),VARREF(YLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  Yfab_class = YPmet(FUNCODEREF(Yfab_class),LITREF(lit_349),T45,ENVNUL,PNUL,YPfalse);
  T46 = Yfab_class;
  VARSET(Yfab_class,T46);
  lit_351 = YPPsym((P)"refab-class");
  lit_352 = YPPsym((P)"old-class");
  T47 = YPsig(YPPlist(2,LITREF(lit_352),LITREF(lit_350)),YPPlist(2,VARREF(YLclassG),VARREF(YLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  Yrefab_class = YPmet(FUNCODEREF(Yrefab_class),LITREF(lit_351),T47,ENVNUL,PNUL,YPfalse);
  T48 = Yrefab_class;
  VARSET(Yrefab_class,T48);
  lit_353 = YPPsym((P)"object-props");
  T49 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_props = YPmet(FUNCODEREF(Yobject_props),LITREF(lit_353),T49,ENVNUL,PNUL,YPfalse);
  T50 = Yobject_props;
  VARSET(Yobject_props,T50);
  lit_354 = YPPsym((P)"object-parents");
  T51 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_parents = YPmet(FUNCODEREF(Yobject_parents),LITREF(lit_354),T51,ENVNUL,PNUL,YPfalse);
  T52 = Yobject_parents;
  VARSET(Yobject_parents,T52);
  VARSET(YDgetter_not_found,YPint((P)-1));
  lit_355 = YPPsym((P)"ensure-fresh-object");
  T53 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yensure_fresh_object = YPmet(FUNCODEREF(Yensure_fresh_object),LITREF(lit_355),T53,ENVNUL,PNUL,YPfalse);
  T54 = Yensure_fresh_object;
  VARSET(Yensure_fresh_object,T54);
  lit_356 = YPPsym((P)"prop-offset");
  lit_357 = YPPsym((P)"object");
  T56 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_18)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_503 = YPmet(FUNCODEREF(fun_loop_503),LITREF(lit_5),T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(2,LITREF(lit_357),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLprim_intG),Ynil);
  Yprop_offset = YPmet(FUNCODEREF(Yprop_offset),LITREF(lit_356),T55,ENVNUL,PNUL,YPfalse);
  T57 = Yprop_offset;
  VARSET(Yprop_offset,T57);
  VARSET(YTreport_prop_unbound_errorsQT,YPtrue);
  lit_358 = YPPsym((P)"%prop-unbound-error");
  lit_359 = YPsb((P)"property unbound");
  T58 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPprop_unbound_error = YPmet(FUNCODEREF(YPprop_unbound_error),LITREF(lit_358),T58,ENVNUL,PNUL,YPfalse);
  T59 = YPprop_unbound_error;
  VARSET(YPprop_unbound_error,T59);
  lit_360 = YPPsym((P)"prop-value");
  lit_361 = YPsb((P)"prop %s not found in %=");
  T60 = YPsig(YPPlist(2,LITREF(lit_357),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yprop_value = YPmet(FUNCODEREF(Yprop_value),LITREF(lit_360),T60,ENVNUL,PNUL,YPfalse);
  T61 = Yprop_value;
  VARSET(Yprop_value,T61);
  lit_362 = YPPsym((P)"prop-bound?");
  lit_363 = YPsb((P)"prop %s not found in %=");
  T62 = YPsig(YPPlist(2,LITREF(lit_357),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yprop_boundQ = YPmet(FUNCODEREF(Yprop_boundQ),LITREF(lit_362),T62,ENVNUL,PNUL,YPfalse);
  T63 = Yprop_boundQ;
  VARSET(Yprop_boundQ,T63);
  lit_364 = YPPsym((P)"prop-value-setter");
  lit_365 = YPsb((P)"prop %s not found in %=");
  lit_366 = YPsb((P)"Prop type error");
  T65 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_18)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_508 = YPmet(FUNCODEREF(fun_loop_508),LITREF(lit_5),T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(3,LITREF(lit_30),LITREF(lit_357),LITREF(lit_16)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yprop_value_setter = YPmet(FUNCODEREF(Yprop_value_setter),LITREF(lit_364),T64,ENVNUL,PNUL,YPfalse);
  T66 = Yprop_value_setter;
  VARSET(Yprop_value_setter,T66);
  lit_367 = YPPsym((P)"find-getter");
  lit_368 = YPsb((P)"COULDN'T FIND GETTER");
  T68 = YPsig(YPPlist(1,LITREF(lit_233)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_510 = YPmet(FUNCODEREF(fun_loop_510),LITREF(lit_5),T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_16)),YPPlist(2,VARREF(YLclassG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLmetG),Ynil);
  Yfind_getter = YPmet(FUNCODEREF(Yfind_getter),LITREF(lit_367),T67,ENVNUL,PNUL,YPfalse);
  T69 = Yfind_getter;
  VARSET(Yfind_getter,T69);
  lit_369 = YPPsym((P)"find-setter");
  lit_370 = YPPsym((P)"zetter");
  lit_371 = YPsb((P)"COULDN'T FIND SETTER");
  T71 = YPsig(YPPlist(1,LITREF(lit_233)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_512 = YPmet(FUNCODEREF(fun_loop_512),LITREF(lit_5),T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(YPPlist(3,LITREF(lit_15),LITREF(lit_291),LITREF(lit_370)),YPPlist(3,VARREF(YLclassG),VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)3),VARREF(YLmetG),Ynil);
  Yfind_setter = YPmet(FUNCODEREF(Yfind_setter),LITREF(lit_369),T70,ENVNUL,PNUL,YPfalse);
  T72 = Yfind_setter;
  VARSET(Yfind_setter,T72);
  lit_372 = YPPsym((P)"forward-class");
  T74 = YPsig(YPPlist(1,LITREF(lit_226)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_514 = YPmet(FUNCODEREF(fun_514),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(1,LITREF(lit_352)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yforward_class = YPmet(FUNCODEREF(Yforward_class),LITREF(lit_372),T73,ENVNUL,PNUL,YPfalse);
  T75 = Yforward_class;
  VARSET(Yforward_class,T75);
  lit_373 = YPPsym((P)"@do-descendents");
  lit_374 = YPPsym((P)"visit");
  T77 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_visit_516 = YPmet(FUNCODEREF(fun_visit_516),LITREF(lit_374),T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(2,LITREF(lit_178),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo_descendents = YPmet(FUNCODEREF(YOdo_descendents),LITREF(lit_373),T76,ENVNUL,PNUL,YPfalse);
  T78 = YOdo_descendents;
  VARSET(YOdo_descendents,T78);
  lit_375 = YPPsym((P)"finalize-props");
  T80 = YPsig(YPPlist(1,LITREF(lit_27)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_518 = YPmet(FUNCODEREF(fun_518),YPfalse,T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfinalize_props = YPmet(FUNCODEREF(Yfinalize_props),LITREF(lit_375),T79,ENVNUL,PNUL,YPfalse);
  T81 = Yfinalize_props;
  VARSET(Yfinalize_props,T81);
  lit_376 = YPPsym((P)"%prop");
  lit_377 = YPPsym((P)"setter");
  T82 = YPsig(YPPlist(5,LITREF(lit_15),LITREF(lit_16),LITREF(lit_377),LITREF(lit_291),LITREF(lit_195)),YPPlist(5,VARREF(YLclassG),VARREF(YLgenG),VARREF(YLgenG),VARREF(YLtypeG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YPprop = YPmet(FUNCODEREF(YPprop),LITREF(lit_376),T82,ENVNUL,PNUL,YPfalse);
  T83 = YPprop;
  VARSET(YPprop,T83);
  lit_378 = YPPsym((P)"update-instance-for-changed-class");
  T84 = YPsig(YPPlist(1,LITREF(lit_357)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yupdate_instance_for_changed_class = YPmet(FUNCODEREF(Yupdate_instance_for_changed_class),LITREF(lit_378),T84,ENVNUL,PNUL,YPfalse);
  T85 = Yupdate_instance_for_changed_class;
  VARSET(Yupdate_instance_for_changed_class,T85);
  VARSET(Yadd_prop,VARREF(YPprop));
  lit_379 = YPPsym((P)"patch-early-classes");
  T86 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ypatch_early_classes = YPmet(FUNCODEREF(Ypatch_early_classes),LITREF(lit_379),T86,ENVNUL,PNUL,YPfalse);
  T87 = Ypatch_early_classes;
  VARSET(Ypatch_early_classes,T87);
  XCALL0(1,VARREF(Ypatch_early_classes));
  lit_380 = YPPsym((P)"fab-gen");
  lit_381 = YPPsym((P)"names");
  lit_382 = YPPsym((P)"nary?");
  lit_383 = YPPsym((P)"val");
  T88 = YPsig(YPPlist(6,LITREF(lit_1),LITREF(lit_381),LITREF(lit_231),LITREF(lit_382),LITREF(lit_383),LITREF(lit_233)),YPPlist(6,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLlogG),VARREF(YLtypeG),VARREF(YLlstG)),YPfalse,YPint((P)6),VARREF(YLgenG),Ynil);
  Yfab_gen = YPmet(FUNCODEREF(Yfab_gen),LITREF(lit_380),T88,ENVNUL,PNUL,YPfalse);
  T89 = Yfab_gen;
  VARSET(Yfab_gen,T89);
  lit_384 = YPPsym((P)"gen-from-met");
  T91 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_525 = YPmet(FUNCODEREF(fun_525),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLgenG),Ynil);
  Ygen_from_met = YPmet(FUNCODEREF(Ygen_from_met),LITREF(lit_384),T90,ENVNUL,PNUL,YPfalse);
  T92 = Ygen_from_met;
  VARSET(Ygen_from_met,T92);
  lit_385 = YPPsym((P)"%define-method");
  T93 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  YPdefine_method = YPmet(FUNCODEREF(YPdefine_method),LITREF(lit_385),T93,ENVNUL,PNUL,YPfalse);
  T94 = YPdefine_method;
  VARSET(YPdefine_method,T94);
  lit_386 = YPPsym((P)"unexec");
  lit_387 = YPPsym((P)"fun");
  T95 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_387)),YPPlist(2,VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yunexec = YPmet(FUNCODEREF(Yunexec),LITREF(lit_386),T95,ENVNUL,PNUL,YPfalse);
  T96 = Yunexec;
  VARSET(Yunexec,T96);
  lit_388 = YPPsym((P)"new");
  lit_389 = YPPsym((P)"inits");
  T98 = YPsig(YPPlist(2,LITREF(lit_347),LITREF(lit_389)),YPPlist(1,VARREF(YLtypeG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T97 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_388),T98,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ynew,T97);
  T99 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_529 = YPmet(FUNCODEREF(fun_loop_529),LITREF(lit_5),T99,ENVNUL,PNUL,YPfalse);
  lit_390 = YPPsym((P)"@new");
  T100 = YPsig(YPPlist(2,LITREF(lit_347),LITREF(lit_389)),YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YOnew = YPmet(FUNCODEREF(YOnew),LITREF(lit_390),T100,ENVNUL,PNUL,YPfalse);
  T101 = YOnew;
  VARSET(YOnew,T101);
  T102 = YPsig(YPPlist(2,LITREF(lit_347),LITREF(lit_389)),YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_532 = YPmet(FUNCODEREF(fun_new_532),LITREF(lit_388),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(Ynew);
  if (T105 != YPfalse) {
    T104 = VARREF(Ynew);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_new_532;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(Ynew,T103);
  lit_391 = YPPsym((P)"subtype?");
  T108 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T107 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_391),T108,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YsubtypeQ,T107);
  T110 = YPsig(YPPlist(1,LITREF(lit_238)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_533 = YPmet(FUNCODEREF(fun_533),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLunionG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_534 = YPmet(FUNCODEREF(fun_subtypeQ_534),LITREF(lit_391),T109,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YsubtypeQ);
  if (T113 != YPfalse) {
    T112 = VARREF(YsubtypeQ);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_subtypeQ_534;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YsubtypeQ,T111);
  T116 = YPsig(YPPlist(1,LITREF(lit_238)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_535 = YPmet(FUNCODEREF(fun_535),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLtypeG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_536 = YPmet(FUNCODEREF(fun_subtypeQ_536),LITREF(lit_391),T115,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(YsubtypeQ);
  if (T119 != YPfalse) {
    T118 = VARREF(YsubtypeQ);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_subtypeQ_536;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YsubtypeQ,T117);
  T125 = YPsig(YPPlist(1,LITREF(lit_238)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T124 = fun_537 = YPmet(FUNCODEREF(fun_537),YPfalse,T125,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLunionG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T122 = fun_subtypeQ_538 = YPmet(FUNCODEREF(fun_subtypeQ_538),LITREF(lit_391),T123,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YsubtypeQ);
  if (T129 != YPfalse) {
    T128 = VARREF(YsubtypeQ);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_subtypeQ_538;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  T126 = VARSET(YsubtypeQ,T127);
  T121 = T126;
  return T121;
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173;
DEFCREGS();
loop:
  T0 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_539 = YPmet(FUNCODEREF(fun_subtypeQ_539),LITREF(lit_391),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YsubtypeQ);
  if (T3 != YPfalse) {
    T2 = VARREF(YsubtypeQ);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_subtypeQ_539;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YsubtypeQ,T1);
  T5 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLsingletonG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_540 = YPmet(FUNCODEREF(fun_subtypeQ_540),LITREF(lit_391),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YsubtypeQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YsubtypeQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_subtypeQ_540;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YsubtypeQ,T6);
  T10 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLsubclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_541 = YPmet(FUNCODEREF(fun_subtypeQ_541),LITREF(lit_391),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YsubtypeQ);
  if (T13 != YPfalse) {
    T12 = VARREF(YsubtypeQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_subtypeQ_541;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YsubtypeQ,T11);
  T15 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_542 = YPmet(FUNCODEREF(fun_subtypeQ_542),LITREF(lit_391),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YsubtypeQ);
  if (T18 != YPfalse) {
    T17 = VARREF(YsubtypeQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_subtypeQ_542;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YsubtypeQ,T16);
  T20 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_543 = YPmet(FUNCODEREF(fun_subtypeQ_543),LITREF(lit_391),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YsubtypeQ);
  if (T23 != YPfalse) {
    T22 = VARREF(YsubtypeQ);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_subtypeQ_543;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YsubtypeQ,T21);
  T25 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_544 = YPmet(FUNCODEREF(fun_subtypeQ_544),LITREF(lit_391),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YsubtypeQ);
  if (T28 != YPfalse) {
    T27 = VARREF(YsubtypeQ);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_subtypeQ_544;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YsubtypeQ,T26);
  T30 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_545 = YPmet(FUNCODEREF(fun_subtypeQ_545),LITREF(lit_391),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YsubtypeQ);
  if (T33 != YPfalse) {
    T32 = VARREF(YsubtypeQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_subtypeQ_545;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YsubtypeQ,T31);
  T35 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_546 = YPmet(FUNCODEREF(fun_subtypeQ_546),LITREF(lit_391),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YsubtypeQ);
  if (T38 != YPfalse) {
    T37 = VARREF(YsubtypeQ);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_subtypeQ_546;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YsubtypeQ,T36);
  T40 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_547 = YPmet(FUNCODEREF(fun_subtypeQ_547),LITREF(lit_391),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YsubtypeQ);
  if (T43 != YPfalse) {
    T42 = VARREF(YsubtypeQ);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_subtypeQ_547;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YsubtypeQ,T41);
  T45 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLproductG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_548 = YPmet(FUNCODEREF(fun_subtypeQ_548),LITREF(lit_391),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YsubtypeQ);
  if (T48 != YPfalse) {
    T47 = VARREF(YsubtypeQ);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_subtypeQ_548;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YsubtypeQ,T46);
  T50 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLtypeG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_549 = YPmet(FUNCODEREF(fun_subtypeQ_549),LITREF(lit_391),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YsubtypeQ);
  if (T53 != YPfalse) {
    T52 = VARREF(YsubtypeQ);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_subtypeQ_549;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YsubtypeQ,T51);
  T55 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLproductG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_550 = YPmet(FUNCODEREF(fun_subtypeQ_550),LITREF(lit_391),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YsubtypeQ);
  if (T58 != YPfalse) {
    T57 = VARREF(YsubtypeQ);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_subtypeQ_550;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YsubtypeQ,T56);
  T60 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLproductG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_551 = YPmet(FUNCODEREF(fun_subtypeQ_551),LITREF(lit_391),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YsubtypeQ);
  if (T63 != YPfalse) {
    T62 = VARREF(YsubtypeQ);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_subtypeQ_551;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YsubtypeQ,T61);
  lit_392 = YPPsym((P)"isa?");
  T66 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_238)),YPPlist(2,VARREF(YLanyG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T65 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_392),T66,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YisaQ,T65);
  T67 = YPsig(YPPlist(2,LITREF(lit_237),LITREF(lit_238)),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_552 = YPmet(FUNCODEREF(fun_isaQ_552),LITREF(lit_392),T67,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(YisaQ);
  if (T70 != YPfalse) {
    T69 = VARREF(YisaQ);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_isaQ_552;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YisaQ,T68);
  T72 = YPsig(YPPlist(2,LITREF(lit_237),LITREF(lit_238)),YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_553 = YPmet(FUNCODEREF(fun_isaQ_553),LITREF(lit_392),T72,ENVNUL,PNUL,YPfalse);
  T75 = BOUNDP(YisaQ);
  if (T75 != YPfalse) {
    T74 = VARREF(YisaQ);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_isaQ_553;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YisaQ,T73);
  T77 = YPsig(YPPlist(2,LITREF(lit_237),LITREF(lit_238)),YPPlist(2,VARREF(YLanyG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_554 = YPmet(FUNCODEREF(fun_isaQ_554),LITREF(lit_392),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YisaQ);
  if (T80 != YPfalse) {
    T79 = VARREF(YisaQ);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_isaQ_554;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YisaQ,T78);
  lit_393 = YPPsym((P)"u");
  T83 = YPsig(YPPlist(1,LITREF(lit_238)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_555 = YPmet(FUNCODEREF(fun_555),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(YPPlist(2,LITREF(lit_237),LITREF(lit_393)),YPPlist(2,VARREF(YLanyG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_556 = YPmet(FUNCODEREF(fun_isaQ_556),LITREF(lit_392),T82,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(YisaQ);
  if (T86 != YPfalse) {
    T85 = VARREF(YisaQ);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_isaQ_556;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YisaQ,T84);
  T88 = YPsig(YPPlist(2,LITREF(lit_237),LITREF(lit_238)),YPPlist(2,VARREF(YLanyG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_557 = YPmet(FUNCODEREF(fun_isaQ_557),LITREF(lit_392),T88,ENVNUL,PNUL,YPfalse);
  T91 = BOUNDP(YisaQ);
  if (T91 != YPfalse) {
    T90 = VARREF(YisaQ);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_isaQ_557;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(YisaQ,T89);
  lit_394 = YPPsym((P)"order-specs");
  T95 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T94 = YPsig(YPPlist(3,LITREF(lit_247),LITREF(lit_248),LITREF(lit_252)),YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T95,Ynil);
  T93 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_394),T94,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yorder_specs,T93);
  T97 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T96 = YPsig(YPPlist(3,LITREF(lit_247),LITREF(lit_248),LITREF(lit_252)),YPPlist(3,VARREF(YLsingletonG),VARREF(YLsingletonG),VARREF(YLanyG)),YPfalse,YPint((P)3),T97,Ynil);
  fun_order_specs_558 = YPmet(FUNCODEREF(fun_order_specs_558),LITREF(lit_394),T96,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(Yorder_specs);
  if (T100 != YPfalse) {
    T99 = VARREF(Yorder_specs);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_order_specs_558;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(Yorder_specs,T98);
  T103 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T102 = YPsig(YPPlist(3,LITREF(lit_247),LITREF(lit_248),LITREF(lit_252)),YPPlist(3,VARREF(YLsingletonG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T103,Ynil);
  fun_order_specs_559 = YPmet(FUNCODEREF(fun_order_specs_559),LITREF(lit_394),T102,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(Yorder_specs);
  if (T106 != YPfalse) {
    T105 = VARREF(Yorder_specs);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_order_specs_559;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(Yorder_specs,T104);
  T109 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T108 = YPsig(YPPlist(3,LITREF(lit_247),LITREF(lit_248),LITREF(lit_252)),YPPlist(3,VARREF(YLsubclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T109,Ynil);
  fun_order_specs_560 = YPmet(FUNCODEREF(fun_order_specs_560),LITREF(lit_394),T108,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(Yorder_specs);
  if (T112 != YPfalse) {
    T111 = VARREF(Yorder_specs);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_order_specs_560;
  T110 = XCALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(Yorder_specs,T110);
  T115 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T114 = YPsig(YPPlist(3,LITREF(lit_247),LITREF(lit_248),LITREF(lit_252)),YPPlist(3,VARREF(YLsubclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T115,Ynil);
  fun_order_specs_561 = YPmet(FUNCODEREF(fun_order_specs_561),LITREF(lit_394),T114,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(Yorder_specs);
  if (T118 != YPfalse) {
    T117 = VARREF(Yorder_specs);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_order_specs_561;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(Yorder_specs,T116);
  T121 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T120 = YPsig(YPPlist(3,LITREF(lit_247),LITREF(lit_248),LITREF(lit_252)),YPPlist(3,VARREF(YLclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T121,Ynil);
  fun_order_specs_562 = YPmet(FUNCODEREF(fun_order_specs_562),LITREF(lit_394),T120,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(Yorder_specs);
  if (T124 != YPfalse) {
    T123 = VARREF(Yorder_specs);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_order_specs_562;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(Yorder_specs,T122);
  T127 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T126 = YPsig(YPPlist(3,LITREF(lit_247),LITREF(lit_248),LITREF(lit_252)),YPPlist(3,VARREF(YLclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),T127,Ynil);
  fun_order_specs_563 = YPmet(FUNCODEREF(fun_order_specs_563),LITREF(lit_394),T126,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(Yorder_specs);
  if (T130 != YPfalse) {
    T129 = VARREF(Yorder_specs);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_order_specs_563;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(Yorder_specs,T128);
  T133 = XCALL2(1,VARREF(YtT),VARREF(YLsymG),VARREF(YLtypeG));
  T132 = YPsig(YPPlist(3,LITREF(lit_247),LITREF(lit_248),LITREF(lit_252)),YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),T133,Ynil);
  fun_order_specs_564 = YPmet(FUNCODEREF(fun_order_specs_564),LITREF(lit_394),T132,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(Yorder_specs);
  if (T136 != YPfalse) {
    T135 = VARREF(Yorder_specs);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_order_specs_564;
  T134 = XCALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(Yorder_specs,T134);
  lit_395 = YPPsym((P)"may-isa?");
  T140 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T139 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_238)),YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),T140,Ynil);
  T138 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_395),T139,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ymay_isaQ,T138);
  T142 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T141 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_238)),YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),T142,Ynil);
  fun_may_isaQ_565 = YPmet(FUNCODEREF(fun_may_isaQ_565),LITREF(lit_395),T141,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(Ymay_isaQ);
  if (T145 != YPfalse) {
    T144 = VARREF(Ymay_isaQ);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_may_isaQ_565;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(Ymay_isaQ,T143);
  T148 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T147 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_238)),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),T148,Ynil);
  fun_may_isaQ_566 = YPmet(FUNCODEREF(fun_may_isaQ_566),LITREF(lit_395),T147,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(Ymay_isaQ);
  if (T151 != YPfalse) {
    T150 = VARREF(Ymay_isaQ);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_may_isaQ_566;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(Ymay_isaQ,T149);
  T154 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T153 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_238)),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),T154,Ynil);
  fun_may_isaQ_567 = YPmet(FUNCODEREF(fun_may_isaQ_567),LITREF(lit_395),T153,ENVNUL,PNUL,YPfalse);
  T157 = BOUNDP(Ymay_isaQ);
  if (T157 != YPfalse) {
    T156 = VARREF(Ymay_isaQ);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_may_isaQ_567;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(Ymay_isaQ,T155);
  lit_396 = YPPsym((P)"some?");
  lit_397 = YPPsym((P)"all?");
  lit_398 = YPPsym((P)"elts");
  T161 = YPsig(YPPlist(3,LITREF(lit_396),LITREF(lit_397),LITREF(lit_398)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_568 = YPmet(FUNCODEREF(fun_loop_568),LITREF(lit_5),T161,ENVNUL,PNUL,YPfalse);
  T160 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T159 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_238)),YPPlist(2,VARREF(YLclassG),VARREF(YLunionG)),YPfalse,YPint((P)2),T160,Ynil);
  fun_may_isaQ_569 = YPmet(FUNCODEREF(fun_may_isaQ_569),LITREF(lit_395),T159,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(Ymay_isaQ);
  if (T164 != YPfalse) {
    T163 = VARREF(Ymay_isaQ);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_may_isaQ_569;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(Ymay_isaQ,T162);
  T168 = YPsig(YPPlist(1,LITREF(lit_238)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_570 = YPmet(FUNCODEREF(fun_570),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T167 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T166 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_238)),YPPlist(2,VARREF(YLclassG),VARREF(YLproductG)),YPfalse,YPint((P)2),T167,Ynil);
  fun_may_isaQ_571 = YPmet(FUNCODEREF(fun_may_isaQ_571),LITREF(lit_395),T166,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(Ymay_isaQ);
  if (T171 != YPfalse) {
    T170 = VARREF(Ymay_isaQ);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_may_isaQ_571;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(Ymay_isaQ,T169);
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
  T173 = YPfalse;
  return T173;
}

/* MODULE ENVIRONMENT INFORMATION */


static USE_INFO use_infos[] = {
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"fin", PVAR, NULL},
  {"@rev!", CVAR, &YOrevX},
  {"gen-src-setter", CVAR, &Ygen_src_setter},
  {"%class-prop-len-setter", PVAR, NULL},
  {"%raw-met-call", PVAR, NULL},
  {"<class>", CVAR, &YLclassG},
  {"$max-classes", CVAR, &YDmax_classes},
  {"%current-in-port", PVAR, NULL},
  {"%class-ancestors", PVAR, NULL},
  {"%gen-sig", PVAR, NULL},
  {"product-elts-setter", CVAR, &Yproduct_elts_setter},
  {"@gen-cache-singletons-setter", CVAR, &YOgen_cache_singletons_setter},
  {"ct-also", PVAR, NULL},
  {"%singleton", PVAR, NULL},
  {"%ru", PVAR, NULL},
  {"%lst", PVAR, NULL},
  {"class-forward", CVAR, &Yclass_forward},
  {"@fun-val", CVAR, &YOfun_val},
  {"export", PVAR, NULL},
  {"%prop-init", PVAR, NULL},
  {"@telt", PVAR, NULL},
  {"tup", CVAR, &Ytup},
  {"%met-env-setter", PVAR, NULL},
  {"tail-setter", CVAR, &Ytail_setter},
  {"gen-src", CVAR, &Ygen_src},
  {"init-class", CVAR, &Yinit_class},
  {"%sp-reg-setter", PVAR, NULL},
  {"%dyn-var-val", PVAR, NULL},
  {"<type>", CVAR, &YLtypeG},
  {"gen-cache-arg-pos-setter", CVAR, &Ygen_cache_arg_pos_setter},
  {"@mets-specs-at", CVAR, &YOmets_specs_at},
  {"%break", PVAR, NULL},
  {"product-elts", CVAR, &Yproduct_elts},
  {"@rev", CVAR, &YOrev},
  {"%i<<", PVAR, NULL},
  {"@order-specs-class", CVAR, &YOorder_specs_class},
  {"%symbols-ready?", CVAR, &YPsymbols_readyQ},
  {"%prop-offset", CVAR, &YPprop_offset},
  {"%ir", PVAR, NULL},
  {"$tag-msk", PVAR, NULL},
  {"%def-regs", PVAR, NULL},
  {"%f=", PVAR, NULL},
  {"or", PVAR, NULL},
  {"class-props-setter", CVAR, &Yclass_props_setter},
  {"@any?", CVAR, &YOanyQ},
  {"new", CVAR, &Ynew},
  {"%class", PVAR, NULL},
  {"fab-sym", CVAR, &Yfab_sym},
  {"%new", PVAR, NULL},
  {"@@empty?", CVAR, &YOOemptyQ},
  {"tail", CVAR, &Ytail},
  {"prop-bound?", CVAR, &Yprop_boundQ},
  {"%sym-nam-setter", PVAR, NULL},
  {"%sig-names", PVAR, NULL},
  {"sig-val-setter", CVAR, &Ysig_val_setter},
  {"gen-lookup-miss", CVAR, &Ygen_lookup_miss},
  {"fun-val-setter", CVAR, &Yfun_val_setter},
  {"%i>>>", PVAR, NULL},
  {"%head", PVAR, NULL},
  {"%prop-type", PVAR, NULL},
  {"incongruent-method-error", CVAR, &Yincongruent_method_error},
  {"@gen-cache-singletons", CVAR, &YOgen_cache_singletons},
  {"<specs>", CVAR, &YLspecsG},
  {"%slen", PVAR, NULL},
  {"%false", CVAR, &YPfalse},
  {"nul", CVAR, &Ynul},
  {"@fun-arity", CVAR, &YOfun_arity},
  {"%i>>", PVAR, NULL},
  {"%ib", PVAR, NULL},
  {"<sym>", CVAR, &YLsymG},
  {"class-props", CVAR, &Yclass_props},
  {"%opts-tup-count", PVAR, NULL},
  {"%str", PVAR, NULL},
  {"mif", PVAR, NULL},
  {"%gen-src", PVAR, NULL},
  {"del-class", CVAR, &Ydel_class},
  {"@not", PVAR, NULL},
  {"keyboard-interrupt", CVAR, &Ykeyboard_interrupt},
  {"sig-val", CVAR, &Ysig_val},
  {"%fp-reg-setter", PVAR, NULL},
  {"%define-repeated-structure", PVAR, NULL},
  {"%%sfab", PVAR, NULL},
  {"%fatan2", PVAR, NULL},
  {"%%tfab", PVAR, NULL},
  {"%define-tagged-structure", PVAR, NULL},
  {"%ready?", PVAR, NULL},
  {"%@subclass?", PVAR, NULL},
  {"---main-4---", PVAR, NULL},
  {"%fcosh", PVAR, NULL},
  {"%union", PVAR, NULL},
  {"%union-elts-setter", PVAR, NULL},
  {"@fab", CVAR, &YOfab},
  {"<str>", CVAR, &YLstrG},
  {"%i+", PVAR, NULL},
  {"%loc-off", PVAR, NULL},
  {"may-isa?", CVAR, &Ymay_isaQ},
  {"%prop", CVAR, &YPprop},
  {"not", CVAR, &Ynot},
  {"%prop-setter-setter", PVAR, NULL},
  {"%tup!", PVAR, NULL},
  {"%tnul", CVAR, &YPtnul},
  {"fun-src-setter", CVAR, &Yfun_src_setter},
  {"fun-val", CVAR, &Yfun_val},
  {"forward-class", CVAR, &Yforward_class},
  {"@telt-setter", PVAR, NULL},
  {"%prop-elt-setter", PVAR, NULL},
  {"*early-classes*", CVAR, &YTearly_classesT},
  {"class-row-setter", CVAR, &Yclass_row_setter},
  {"@del-dups", CVAR, &YOdel_dups},
  {"isa?", CVAR, &YisaQ},
  {"use/export", PVAR, NULL},
  {"%fab-dyn-var", PVAR, NULL},
  {"cond", PVAR, NULL},
  {"<tup>", CVAR, &YLtupG},
  {"fun", PVAR, NULL},
  {"%gen-sig-setter", PVAR, NULL},
  {"opts-tup-storage-setter", CVAR, &Yopts_tup_storage_setter},
  {"@may-isa?", CVAR, &YOmay_isaQ},
  {"prop-value", CVAR, &Yprop_value},
  {"%flog", PVAR, NULL},
  {"fun-src", CVAR, &Yfun_src},
  {"%sig-arity-setter", PVAR, NULL},
  {"%app-filename", PVAR, NULL},
  {"prop-setter-setter", CVAR, &Yprop_setter_setter},
  {"%opts-tup-tup", PVAR, NULL},
  {"%class-props", PVAR, NULL},
  {"$gen-cache-singletons-offset", CVAR, &YDgen_cache_singletons_offset},
  {"%class-id", PVAR, NULL},
  {"@gen-cache-arg-pos-setter", CVAR, &YOgen_cache_arg_pos_setter},
  {"class-row", CVAR, &Yclass_row},
  {"%sig-arity", PVAR, NULL},
  {"%loc-val-setter", PVAR, NULL},
  {"%prim-int", PVAR, NULL},
  {"%f+", PVAR, NULL},
  {"%loc-val", PVAR, NULL},
  {"<flat>", CVAR, &YLflatG},
  {"%tail", PVAR, NULL},
  {"def-fun/sig-accessor", PVAR, NULL},
  {"%gen-mets-setter", PVAR, NULL},
  {"unexec", CVAR, &Yunexec},
  {"%opts-count-setter", PVAR, NULL},
  {"class-name-setter", CVAR, &Yclass_name_setter},
  {"%met", PVAR, NULL},
  {"%iu", PVAR, NULL},
  {"sig-names-setter", CVAR, &Ysig_names_setter},
  {"%opts-tup-location", PVAR, NULL},
  {"prop-setter", CVAR, &Yprop_setter},
  {"%@class-of", PVAR, NULL},
  {"%i^", PVAR, NULL},
  {"%prop-owner", PVAR, NULL},
  {"%app-args", PVAR, NULL},
  {"%flo-dat-setter", PVAR, NULL},
  {"%ff", PVAR, NULL},
  {"%sb", PVAR, NULL},
  {"@fun-specs", CVAR, &YOfun_specs},
  {"%gen-src-setter", PVAR, NULL},
  {"%tag-into", PVAR, NULL},
  {"@fill", CVAR, &YOfill},
  {"class-name", CVAR, &Yclass_name},
  {"finalize-props", CVAR, &Yfinalize_props},
  {"@@==", CVAR, &YOOEE},
  {"%prop-unbound-error", CVAR, &YPprop_unbound_error},
  {"fun-name-setter", CVAR, &Yfun_name_setter},
  {"@class-direct-props", CVAR, &YOclass_direct_props},
  {"fun-arity-setter", CVAR, &Yfun_arity_setter},
  {"sig-names", CVAR, &Ysig_names},
  {"@prune-mets-by-type-at", CVAR, &YOprune_mets_by_type_at},
  {"@subclass?", PVAR, NULL},
  {"add-prop", CVAR, &Yadd_prop},
  {"@gen-cache-arg-pos", CVAR, &YOgen_cache_arg_pos},
  {"unknown-function-error", CVAR, &Yunknown_function_error},
  {"%define-boxed-structure", PVAR, NULL},
  {"%%len", PVAR, NULL},
  {"class-mets", CVAR, &Yclass_mets},
  {"%sig-nary?-setter", PVAR, NULL},
  {"@tlen", PVAR, NULL},
  {"<lst>", CVAR, &YLlstG},
  {"*boot-macro-names*", CVAR, &YTboot_macro_namesT},
  {"%gen", PVAR, NULL},
  {"@subtype?", CVAR, &YOsubtypeQ},
  {"try", PVAR, NULL},
  {"%relt", PVAR, NULL},
  {"fun-name", CVAR, &Yfun_name},
  {"%fp-reg", PVAR, NULL},
  {"%type-object-setter", PVAR, NULL},
  {"%invoke-debugger", PVAR, NULL},
  {"%object-shells", PVAR, NULL},
  {"%f*", PVAR, NULL},
  {"%met-code-setter", PVAR, NULL},
  {"$tag-len", PVAR, NULL},
  {"gen-lookup-1", PVAR, NULL},
  {"class-mets-setter", CVAR, &Yclass_mets_setter},
  {"@mem?", CVAR, &YOmemQ},
  {"@fun-names", CVAR, &YOfun_names},
  {"<body>", CVAR, &YLbodyG},
  {"*report-prop-unbound-errors?*", CVAR, &YTreport_prop_unbound_errorsQT},
  {"%raw-alloc", PVAR, NULL},
  {"when", PVAR, NULL},
  {"<seq!>", CVAR, &YLseqXG},
  {"%gen-cache-classes-setter", PVAR, NULL},
  {"handler-info-message", CVAR, &Yhandler_info_message},
  {"%define-method", CVAR, &YPdefine_method},
  {"---main-9---", PVAR, NULL},
  {"%class-row", PVAR, NULL},
  {"%subclass", PVAR, NULL},
  {"%fsqrt", PVAR, NULL},
  {"gen-refs-setter", CVAR, &Ygen_refs_setter},
  {"macro-expand", PVAR, NULL},
  {"fun-arity", CVAR, &Yfun_arity},
  {"%sig-nary?", PVAR, NULL},
  {"gen-cache-missable?-setter", CVAR, &Ygen_cache_missableQ_setter},
  {"@empty?", PVAR, NULL},
  {"%tu", PVAR, NULL},
  {"union-elts-setter", CVAR, &Yunion_elts_setter},
  {"<opts-tup>", CVAR, &YLopts_tupG},
  {"$direct-object-class", CVAR, &YDdirect_object_class},
  {"%define-structure-accessors", PVAR, NULL},
  {"ds", PVAR, NULL},
  {"%chr", PVAR, NULL},
  {"%clone", PVAR, NULL},
  {"<seq.>", CVAR, &YLseqIG},
  {"rep", PVAR, NULL},
  {"%fun-cache", PVAR, NULL},
  {"%gen-name", PVAR, NULL},
  {"gen-refs", CVAR, &Ygen_refs},
  {"%prop-getter", PVAR, NULL},
  {"%met-refs-setter", PVAR, NULL},
  {"%opts-location-setter", PVAR, NULL},
  {"gen-lookup-miss-1", CVAR, &Ygen_lookup_miss_1},
  {"@tup", CVAR, &YOtup},
  {"gen-cache-missable?", CVAR, &Ygen_cache_missableQ},
  {"%gen-cache-arg-pos-setter", PVAR, NULL},
  {"%%apply", PVAR, NULL},
  {"%update-instance-for-changed-class", PVAR, NULL},
  {"union-elts", CVAR, &Yunion_elts},
  {"ord-app-mets-1", CVAR, &Yord_app_mets_1},
  {"ord-app-mets", CVAR, &Yord_app_mets},
  {"wrong-number-arguments-error", CVAR, &Ywrong_number_arguments_error},
  {"%force-out", PVAR, NULL},
  {"%indirect-object?", PVAR, NULL},
  {"<seq>", CVAR, &YLseqG},
  {"class-ancestors-setter", CVAR, &Yclass_ancestors_setter},
  {"%fatan", PVAR, NULL},
  {"prop-value-at", PVAR, NULL},
  {"ct", PVAR, NULL},
  {"%define-getter", PVAR, NULL},
  {"%fu", PVAR, NULL},
  {"head-setter", CVAR, &Yhead_setter},
  {"$gen-cache-classes-offset", CVAR, &YDgen_cache_classes_offset},
  {"%ready", PVAR, NULL},
  {"%object-class", PVAR, NULL},
  {"%allocate-stack", PVAR, NULL},
  {"%%prop", PVAR, NULL},
  {"%opts-tup", PVAR, NULL},
  {"@head-setter", PVAR, NULL},
  {"%rev!", PVAR, NULL},
  {"%to-tup", PVAR, NULL},
  {"<opts>", CVAR, &YLoptsG},
  {"%class-name-setter", PVAR, NULL},
  {"%int", PVAR, NULL},
  {"dss", PVAR, NULL},
  {"<col!>", CVAR, &YLcolXG},
  {"%gen-cache-singletons-setter", PVAR, NULL},
  {"%sym-nam", PVAR, NULL},
  {"gen-from-met", CVAR, &Ygen_from_met},
  {"%class-shells", PVAR, NULL},
  {"@do-descendents", CVAR, &YOdo_descendents},
  {"fun-refs-setter", CVAR, &Yfun_refs_setter},
  {"%fb", PVAR, NULL},
  {"%gen-cache", PVAR, NULL},
  {"%get", PVAR, NULL},
  {"%loc-off-setter", PVAR, NULL},
  {"%fun-cache-setter", PVAR, NULL},
  {"%%mep-apply", PVAR, NULL},
  {"sig-arity", CVAR, &Ysig_arity},
  {"fun-nary?-setter", CVAR, &Yfun_naryQ_setter},
  {"<sig>", CVAR, &YLsigG},
  {"@mets-unspecialized-at?", CVAR, &YOmets_unspecialized_atQ},
  {"%gen-cache-arg-pos", PVAR, NULL},
  {"loc", PVAR, NULL},
  {"%raw-call", PVAR, NULL},
  {"<col.>", CVAR, &YLcolIG},
  {"@head", PVAR, NULL},
  {"*boot-macro-expanders*", CVAR, &YTboot_macro_expandersT},
  {"%class-name", PVAR, NULL},
  {"%close-out-port", PVAR, NULL},
  {"fun-refs", CVAR, &Yfun_refs},
  {"@type-equal?", CVAR, &YOtype_equalQ},
  {"prop-offset", CVAR, &Yprop_offset},
  {"%build-runtime-modules", PVAR, NULL},
  {"*boot-macro-module-names*", CVAR, &YTboot_macro_module_namesT},
  {"%put", PVAR, NULL},
  {"%rnul", CVAR, &YPrnul},
  {"%cb", PVAR, NULL},
  {"gen-lookup-miss-1-using", CVAR, &Ygen_lookup_miss_1_using},
  {"%pairize", PVAR, NULL},
  {"%facos", PVAR, NULL},
  {"%f-", PVAR, NULL},
  {"class-id-setter", CVAR, &Yclass_id_setter},
  {"%met-src", PVAR, NULL},
  {"%define-parents", PVAR, NULL},
  {"@find", CVAR, &YOfind},
  {"%%macro", CVAR, &YPPmacro},
  {"@alter", CVAR, &YOalter},
  {"<col>", CVAR, &YLcolG},
  {"@elt", CVAR, &YOelt},
  {"$num-int-bits", CVAR, &YDnum_int_bits},
  {"opts-count-setter", CVAR, &Yopts_count_setter},
  {"%product-elts-setter", PVAR, NULL},
  {"%i=", PVAR, NULL},
  {"%gen-cache-missable?-setter", PVAR, NULL},
  {"fun-nary?", CVAR, &Yfun_naryQ},
  {"nil", CVAR, &Ynil},
  {"%f/", PVAR, NULL},
  {"nul-prop", CVAR, &Ynul_prop},
  {"prop-getter-setter", CVAR, &Yprop_getter_setter},
  {"@precise-spec?", CVAR, &YOprecise_specQ},
  {"prop-value-at-setter", PVAR, NULL},
  {"*next-class-id*", CVAR, &YTnext_class_idT},
  {"class-id", CVAR, &Yclass_id},
  {"t*", CVAR, &YtT},
  {"%do-stack-frames", PVAR, NULL},
  {"gen-add-met", CVAR, &Ygen_add_met},
  {"$missed-dispatch", CVAR, &YDmissed_dispatch},
  {"%i<", PVAR, NULL},
  {"@oelt", PVAR, NULL},
  {"<rep>", CVAR, &YLrepG},
  {"%snul", CVAR, &YPsnul},
  {"%classes-ready?", CVAR, &YPclasses_readyQ},
  {"class-prop-len-setter", CVAR, &Yclass_prop_len_setter},
  {"opts-count", CVAR, &Yopts_count},
  {"%*start-running-at*", CVAR, &YPTstart_running_atT},
  {"%str!", PVAR, NULL},
  {"ensure-fresh-object", CVAR, &Yensure_fresh_object},
  {"%gen-code-setter", PVAR, NULL},
  {"<mets>", CVAR, &YLmetsG},
  {"$min-int", CVAR, &YDmin_int},
  {"%gen-cache-singletons", PVAR, NULL},
  {"order-specs", CVAR, &Yorder_specs},
  {"%class-mets-setter", PVAR, NULL},
  {"<gen-cache>", CVAR, &YLgen_cacheG},
  {"%fpow", PVAR, NULL},
  {"gen-cache-classes-setter", CVAR, &Ygen_cache_classes_setter},
  {"prop-getter", CVAR, &Yprop_getter},
  {"%untag-into", PVAR, NULL},
  {"%finalize-props", PVAR, NULL},
  {"%opts-tup-location-setter", PVAR, NULL},
  {"%peek", PVAR, NULL},
  {"%gen-cache-count-setter", PVAR, NULL},
  {"<replace-generic-restart>", CVAR, &YLreplace_generic_restartG},
  {"dp", PVAR, NULL},
  {"class-gens-setter", CVAR, &Yclass_gens_setter},
  {"seq", PVAR, NULL},
  {"<loc>", CVAR, &YLlocG},
  {"%*used-symbols-too-early*", CVAR, &YPTused_symbols_too_earlyT},
  {"class-prop-len", CVAR, &Yclass_prop_len},
  {"<gen>", CVAR, &YLgenG},
  {"*restarts-ok?*", CVAR, &YTrestarts_okQT},
  {"quote", PVAR, NULL},
  {"%with-monitor", CVAR, &YPwith_monitor},
  {"fun-code-setter", CVAR, &Yfun_code_setter},
  {"%fsin", PVAR, NULL},
  {"gen-cache-classes", CVAR, &Ygen_cache_classes},
  {"file-opening-error", CVAR, &Yfile_opening_error},
  {"%gen-cache-count", PVAR, NULL},
  {"%su", PVAR, NULL},
  {"@tail", PVAR, NULL},
  {"%gen-name-setter", PVAR, NULL},
  {"@singleton-isa?", PVAR, NULL},
  {"%i?", PVAR, NULL},
  {"%sig-specs-setter", PVAR, NULL},
  {"%fasin", PVAR, NULL},
  {"%pair", PVAR, NULL},
  {"%telt", PVAR, NULL},
  {"%union-elts", PVAR, NULL},
  {"df", PVAR, NULL},
  {"@cat2", CVAR, &YOcat2},
  {"class-gens", CVAR, &Yclass_gens},
  {"%cu", PVAR, NULL},
  {"%rep!", PVAR, NULL},
  {"unless", PVAR, NULL},
  {"<flo>", CVAR, &YLfloG},
  {"%prop-setter", PVAR, NULL},
  {"%eq?", PVAR, NULL},
  {"%add-prop", CVAR, &YPadd_prop},
  {"object-parents", CVAR, &Yobject_parents},
  {"fun-code", CVAR, &Yfun_code},
  {"%tag-bits", PVAR, NULL},
  {"fun-specs-setter", CVAR, &Yfun_specs_setter},
  {"%patch-early-generics", PVAR, NULL},
  {"%flo-bits", PVAR, NULL},
  {"%trace-off", PVAR, NULL},
  {"fun-congruent?", CVAR, &Yfun_congruentQ},
  {"dg", PVAR, NULL},
  {"%class-ancestors-setter", PVAR, NULL},
  {"%eof-object", PVAR, NULL},
  {"%ftan", PVAR, NULL},
  {"dm", PVAR, NULL},
  {"%prop-type-setter", PVAR, NULL},
  {"<prim-int>", CVAR, &YLprim_intG},
  {"dl", PVAR, NULL},
  {"gen-lookup", PVAR, NULL},
  {"%it/", PVAR, NULL},
  {"if", PVAR, NULL},
  {"fun-cache-setter", CVAR, &Yfun_cache_setter},
  {"%current-out-port", PVAR, NULL},
  {"%compute-ancestors", PVAR, NULL},
  {"%class-gens-setter", PVAR, NULL},
  {"@oelt-setter", PVAR, NULL},
  {"%class-parents-setter", PVAR, NULL},
  {"@subclass-spec?", CVAR, &YOsubclass_specQ},
  {"%code-ref", PVAR, NULL},
  {"type-class-setter", CVAR, &Ytype_class_setter},
  {"ord-app-mets*", CVAR, &Yord_app_metsT},
  {"%sig-unification-vars-setter", PVAR, NULL},
  {"%prop-elt", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"%class-direct-props-setter", PVAR, NULL},
  {"%sig", PVAR, NULL},
  {"dc", PVAR, NULL},
  {"%gen-cache-classes", PVAR, NULL},
  {"and", PVAR, NULL},
  {"<prop>", CVAR, &YLpropG},
  {"dv", PVAR, NULL},
  {"%selt", PVAR, NULL},
  {"---main-6---", PVAR, NULL},
  {"<int>", CVAR, &YLintG},
  {"%next-methods", PVAR, NULL},
  {"fun-cache", CVAR, &Yfun_cache},
  {"object-props", CVAR, &Yobject_props},
  {"ensure-singleton-cache", CVAR, &Yensure_singleton_cache},
  {"%class-direct-props", PVAR, NULL},
  {"fun-specs", CVAR, &Yfun_specs},
  {"%iv", PVAR, NULL},
  {"%met-code", PVAR, NULL},
  {"%%rfab", PVAR, NULL},
  {"%fi2f", PVAR, NULL},
  {"%fab-code-refs", PVAR, NULL},
  {"type-class", CVAR, &Ytype_class},
  {"*macros-ok?*", CVAR, &YTmacros_okQT},
  {"%sig-specs", PVAR, NULL},
  {"%class-children", PVAR, NULL},
  {"<props>", CVAR, &YLpropsG},
  {"<num>", CVAR, &YLnumG},
  {"class-direct-props-setter", CVAR, &Yclass_direct_props_setter},
  {"@==", PVAR, NULL},
  {"%object-class-setter", PVAR, NULL},
  {"<met>", CVAR, &YLmetG},
  {"%selt-setter", PVAR, NULL},
  {"$nul-assocs", CVAR, &YDnul_assocs},
  {"error", CVAR, &Yerror},
  {"sig-nary?-setter", CVAR, &Ysig_naryQ_setter},
  {"use/mangle", PVAR, NULL},
  {"@tall2?", CVAR, &YOtall2Q},
  {"<product>", CVAR, &YLproductG},
  {"prop-init", CVAR, &Yprop_init},
  {"%loc", PVAR, NULL},
  {"@cache-add", CVAR, &YOcache_add},
  {"@singleton-spec?", CVAR, &YOsingleton_specQ},
  {"%object-of", PVAR, NULL},
  {"%type-class-setter", PVAR, NULL},
  {"%unexec", PVAR, NULL},
  {"$max-int", CVAR, &YDmax_int},
  {"%class-id-setter", PVAR, NULL},
  {"fun-same-met?", CVAR, &Yfun_same_metQ},
  {"esc", PVAR, NULL},
  {"%define-accessor", PVAR, NULL},
  {"%os-val-setter", PVAR, NULL},
  {"%tag", PVAR, NULL},
  {"%relt-setter", PVAR, NULL},
  {"%true", CVAR, &YPtrue},
  {"%os-name", PVAR, NULL},
  {"<chr>", CVAR, &YLchrG},
  {"%met-src-setter", PVAR, NULL},
  {"find-setter", CVAR, &Yfind_setter},
  {"let", PVAR, NULL},
  {"fun-env-setter", CVAR, &Yfun_env_setter},
  {"sig-nary?", CVAR, &Ysig_naryQ},
  {"%sp-reg", PVAR, NULL},
  {"%newline", PVAR, NULL},
  {"gen-lookup-1-using", PVAR, NULL},
  {"order-mets", CVAR, &Yorder_mets},
  {"prop-bound-at?", PVAR, NULL},
  {"bound?", PVAR, NULL},
  {"%define-setter", PVAR, NULL},
  {"$getter-not-found", CVAR, &YDgetter_not_found},
  {"<union>", CVAR, &YLunionG},
  {"---main-11---", PVAR, NULL},
  {"@olen", PVAR, NULL},
  {"<mag>", CVAR, &YLmagG},
  {"%class-gens", PVAR, NULL},
  {"%class-row-setter", PVAR, NULL},
  {"fab-gen", CVAR, &Yfab_gen},
  {"%gen-mets", PVAR, NULL},
  {"fun-env", CVAR, &Yfun_env},
  {"%add-met", CVAR, &YPadd_met},
  {"%i&", PVAR, NULL},
  {"class-ordered-ancestors", CVAR, &Yclass_ordered_ancestors},
  {"requires-singleton-prec", CVAR, &Yrequires_singleton_prec},
  {"%gen-cache-missable?", PVAR, NULL},
  {"%define-props", PVAR, NULL},
  {"%process-module", PVAR, NULL},
  {"%define-structure", PVAR, NULL},
  {"%met-refs", PVAR, NULL},
  {"%class-parents", PVAR, NULL},
  {"<fun>", CVAR, &YLfunG},
  {"class-type-cache-setter", CVAR, &Yclass_type_cache_setter},
  {"@class<", CVAR, &YOclassL},
  {"---main-1---", PVAR, NULL},
  {"%i-", PVAR, NULL},
  {"met-app-unify", CVAR, &Ymet_app_unify},
  {"@pick", CVAR, &YOpick},
  {"---main-7---", PVAR, NULL},
  {"subtype?", CVAR, &YsubtypeQ},
  {"<log>", CVAR, &YLlogG},
  {"set", PVAR, NULL},
  {"patch-early-classes", CVAR, &Ypatch_early_classes},
  {"opts-location-setter", CVAR, &Yopts_location_setter},
  {"%head-setter", PVAR, NULL},
  {"refab-class", CVAR, &Yrefab_class},
  {"%puts", PVAR, NULL},
  {"%close-in-port", PVAR, NULL},
  {"<subclass>", CVAR, &YLsubclassG},
  {"handler-info-arguments", CVAR, &Yhandler_info_arguments},
  {"prop-owner-setter", CVAR, &Yprop_owner_setter},
  {"@=", PVAR, NULL},
  {"%class-prop-len", PVAR, NULL},
  {"%opts-tup-count-setter", PVAR, NULL},
  {"class-type-cache", CVAR, &Yclass_type_cache},
  {"%elt", PVAR, NULL},
  {"@add-new", PVAR, NULL},
  {"force-names-into-boot-module", PVAR, NULL},
  {"%lb", PVAR, NULL},
  {"<any>", CVAR, &YLanyG},
  {"%str-eq?-loop", PVAR, NULL},
  {"sym-name-setter", CVAR, &Ysym_name_setter},
  {"opts-location", CVAR, &Yopts_location},
  {"%sig-unification-vars", PVAR, NULL},
  {"lst", CVAR, &Ylst},
  {"@class-ancestors", CVAR, &YOclass_ancestors},
  {"---main-3---", PVAR, NULL},
  {"%file-exists?", PVAR, NULL},
  {"%met-name-setter", PVAR, NULL},
  {"%untag", PVAR, NULL},
  {"%i*", PVAR, NULL},
  {"@tany?", CVAR, &YOtanyQ},
  {"%fcos", PVAR, NULL},
  {"gen-cache-singletons-setter", CVAR, &Ygen_cache_singletons_setter},
  {"%met-prop-len", CVAR, &YPmet_prop_len},
  {"prop-owner", CVAR, &Yprop_owner},
  {"method-accessor-offset", CVAR, &Ymethod_accessor_offset},
  {"%early-dispatch", CVAR, &YPearly_dispatch},
  {"%binding-name", PVAR, NULL},
  {"@lst", CVAR, &YOlst},
  {"%file-mtime", PVAR, NULL},
  {"%flo", PVAR, NULL},
  {"<singleton>", CVAR, &YLsingletonG},
  {"%reparent-class-shells", PVAR, NULL},
  {"@class-isa?", PVAR, NULL},
  {"<simple-handler-info>", CVAR, &YLsimple_handler_infoG},
  {"---main-13---", PVAR, NULL},
  {"%elt-setter", PVAR, NULL},
  {"sym-name", CVAR, &Ysym_name},
  {"%gen-refs", PVAR, NULL},
  {"sig-unification-vars-setter", CVAR, &Ysig_unification_vars_setter},
  {"def-object-class-accessor", PVAR, NULL},
  {"%opts-tup-tup-setter", PVAR, NULL},
  {"gen-cache-singletons", CVAR, &Ygen_cache_singletons},
  {"%opts-location", PVAR, NULL},
  {"fun-names", CVAR, &Yfun_names},
  {"fun-names-setter", CVAR, &Yfun_names_setter},
  {"class-ordered-props", CVAR, &Yclass_ordered_props},
  {"fab-class", CVAR, &Yfab_class},
  {"@order-specs", CVAR, &YOorder_specs},
  {"%tlen", PVAR, NULL},
  {"update-instance-for-changed-class", CVAR, &Yupdate_instance_for_changed_class},
  {"find-getter", CVAR, &Yfind_getter},
  {"opts-tup-storage", CVAR, &Yopts_tup_storage},
  {"%collect-direct-props", CVAR, &YPcollect_direct_props},
  {"%i<<<", PVAR, NULL},
  {"%class-type-cache", PVAR, NULL},
  {"%ft", PVAR, NULL},
  {"class-children", CVAR, &Yclass_children},
  {"%im", PVAR, NULL},
  {"met-app?", CVAR, &Ymet_appQ},
  {"%ftanh", PVAR, NULL},
  {"@union-spec?", CVAR, &YOunion_specQ},
  {"%open-out-file", PVAR, NULL},
  {"%gen-code", PVAR, NULL},
  {"@pair", PVAR, NULL},
  {"%fun-reg", PVAR, NULL},
  {"%patch-early-generic", CVAR, &YPpatch_early_generic},
  {"gen-cache-arg-pos", CVAR, &Ygen_cache_arg_pos},
  {"%fapply", PVAR, NULL},
  {"sig-unification-vars", CVAR, &Ysig_unification_vars},
  {"object-class", CVAR, &Yobject_class},
  {"sig-arity-setter", CVAR, &Ysig_arity_setter},
  {"def", PVAR, NULL},
  {"%met-name", PVAR, NULL},
  {"@fun-nary?", CVAR, &YOfun_naryQ},
  {"%class-forward", PVAR, NULL},
  {"fun-spec", CVAR, &Yfun_spec},
  {"@opts-as-lst", CVAR, &YOopts_as_lst},
  {"@fun-mets-setter", CVAR, &YOfun_mets_setter},
  {"type-error", CVAR, &Ytype_error},
  {"prop-init-setter", CVAR, &Yprop_init_setter},
  {"%c=", PVAR, NULL},
  {"%finalize-props!", CVAR, &YPfinalize_propsX},
  {"@+", PVAR, NULL},
  {"@all2?", CVAR, &YOall2Q},
  {"%macro", PVAR, NULL},
  {"@do", CVAR, &YOdo},
  {"fun-mets-setter", CVAR, &Yfun_mets_setter},
  {"@tail-setter", PVAR, NULL},
  {"%create-directory", PVAR, NULL},
  {"%product-elts", PVAR, NULL},
  {"%check-call-types", PVAR, NULL},
  {"---main-12---", PVAR, NULL},
  {"%rlen", PVAR, NULL},
  {"@specd-args", CVAR, &YOspecd_args},
  {"%opts", PVAR, NULL},
  {"%f<", PVAR, NULL},
  {"%lu", PVAR, NULL},
  {"%dyn-var-val-setter", PVAR, NULL},
  {"%prop-owner-setter", PVAR, NULL},
  {"%prop-getter-setter", PVAR, NULL},
  {"@gen-cache-classes-setter", CVAR, &YOgen_cache_classes_setter},
  {"type-object-setter", CVAR, &Ytype_object_setter},
  {"%symbols", CVAR, &YPsymbols},
  {"@isa?", CVAR, &YOisaQ},
  {"%dispatch", CVAR, &YPdispatch},
  {"head", CVAR, &Yhead},
  {"@mets-subclasses-at", CVAR, &YOmets_subclasses_at},
  {"%class-of", PVAR, NULL},
  {"class-parents-setter", CVAR, &Yclass_parents_setter},
  {"class-direct-props", CVAR, &Yclass_direct_props},
  {"class-ancestors", CVAR, &Yclass_ancestors},
  {"%prop-dat-at", PVAR, NULL},
  {"class-children-setter", CVAR, &Yclass_children_setter},
  {"---main-8---", PVAR, NULL},
  {"%met-sig", PVAR, NULL},
  {"%gen-refs-setter", PVAR, NULL},
  {"%sym", PVAR, NULL},
  {"---main-5---", PVAR, NULL},
  {"fun-mets", CVAR, &Yfun_mets},
  {"%rep", PVAR, NULL},
  {"prop-type-setter", CVAR, &Yprop_type_setter},
  {"%class-children-setter", PVAR, NULL},
  {"$adr-tag", PVAR, NULL},
  {"type-object", CVAR, &Ytype_object},
  {"%flo-dat", PVAR, NULL},
  {"@fun-mets", CVAR, &YOfun_mets},
  {"%time", PVAR, NULL},
  {"%fsinh", PVAR, NULL},
  {"<parents>", CVAR, &YLparentsG},
  {"---main-2---", PVAR, NULL},
  {"%opts-count", PVAR, NULL},
  {"%class-props-setter", PVAR, NULL},
  {"%sig-val", PVAR, NULL},
  {"%type-object", PVAR, NULL},
  {"%c<", PVAR, NULL},
  {"%prop-init-setter", PVAR, NULL},
  {"one-nil", CVAR, &Yone_nil},
  {"fun-unification-vars-setter", CVAR, &Yfun_unification_vars_setter},
  {"sig-specs-setter", CVAR, &Ysig_specs_setter},
  {"%class-type-cache-setter", PVAR, NULL},
  {"prop-type", CVAR, &Yprop_type},
  {"%product", PVAR, NULL},
  {"@mets-singletons-at", CVAR, &YOmets_singletons_at},
  {"@new", CVAR, &YOnew},
  {"@gen-cache-classes", CVAR, &YOgen_cache_classes},
  {"%tail-setter", PVAR, NULL},
  {"%sig-val-setter", PVAR, NULL},
  {"@fold", CVAR, &YOfold},
  {"---main-10---", PVAR, NULL},
  {"@map", CVAR, &YOmap},
  {"class-parents", CVAR, &Yclass_parents},
  {"@all?", CVAR, &YOallQ},
  {"%bb", PVAR, NULL},
  {"%os-val", PVAR, NULL},
  {"%i!", PVAR, NULL},
  {"fun-sig-setter", CVAR, &Yfun_sig_setter},
  {"@len", PVAR, NULL},
  {"@add", PVAR, NULL},
  {"%%sym", PVAR, NULL},
  {"sig-specs", CVAR, &Ysig_specs},
  {"%fc", PVAR, NULL},
  {"%file-type", PVAR, NULL},
  {"@<", PVAR, NULL},
  {"%met-env", PVAR, NULL},
  {"%type-class", PVAR, NULL},
  {"%tup", PVAR, NULL},
  {"choose-methods", CVAR, &Ychoose_methods},
  {"@fun-unification-vars", CVAR, &YOfun_unification_vars},
  {"%sig-names-setter", PVAR, NULL},
  {"use", PVAR, NULL},
  {"%trace-on", PVAR, NULL},
  {"quasiquote", PVAR, NULL},
  {"%empty?", PVAR, NULL},
  {"%class-forward-setter", PVAR, NULL},
  {"<env>", CVAR, &YLenvG},
  {"%str-eq?", PVAR, NULL},
  {"prop-value-setter", CVAR, &Yprop_value_setter},
  {"fun-sig", CVAR, &Yfun_sig},
  {"%open-in-file", PVAR, NULL},
  {"%raw", PVAR, NULL},
  {"%cat2", PVAR, NULL},
  {"fun-unification-vars", CVAR, &Yfun_unification_vars},
  {"%define-hierarchy", PVAR, NULL},
  {"%unlink-stack", PVAR, NULL},
  {"%met-sig-setter", PVAR, NULL},
  {"%class-mets", PVAR, NULL},
  {"%ft/", PVAR, NULL},
  {"%define-primitives", PVAR, NULL},
  {"ddv", PVAR, NULL},
  {"class-forward-setter", CVAR, &Yclass_forward_setter},
  {"%telt-setter", PVAR, NULL},
  {"@lst-helper", CVAR, &YOlst_helper},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"fin", "fin"},
  {"gen-src-setter", "gen-src-setter"},
  {"*boot-macro-names*", "*boot-macro-names*"},
  {"<class>", "<class>"},
  {"%current-in-port", "%current-in-port"},
  {"ct-also", "ct-also"},
  {"export", "export"},
  {"@telt", "@telt"},
  {"tup", "tup"},
  {"gen-src", "gen-src"},
  {"%sp-reg-setter", "%sp-reg-setter"},
  {"<type>", "<type>"},
  {"product-elts", "product-elts"},
  {"%i<<", "%i<<"},
  {"%f=", "%f="},
  {"@any?", "@any?"},
  {"new", "new"},
  {"fab-sym", "fab-sym"},
  {"prop-bound?", "prop-bound?"},
  {"%i>>>", "%i>>>"},
  {"incongruent-method-error", "incongruent-method-error"},
  {"%slen", "%slen"},
  {"nul", "nul"},
  {"%i>>", "%i>>"},
  {"%ib", "%ib"},
  {"<sym>", "<sym>"},
  {"%str", "%str"},
  {"mif", "mif"},
  {"%gen-src", "%gen-src"},
  {"keyboard-interrupt", "keyboard-interrupt"},
  {"sig-val", "sig-val"},
  {"%fatan2", "%fatan2"},
  {"%ready?", "%ready?"},
  {"%fcosh", "%fcosh"},
  {"<loc>", "<loc>"},
  {"<str>", "<str>"},
  {"%i+", "%i+"},
  {"may-isa?", "may-isa?"},
  {"not", "not"},
  {"%tnul", "%tnul"},
  {"fun-val", "fun-val"},
  {"isa?", "isa?"},
  {"use/export", "use/export"},
  {"<tup>", "<tup>"},
  {"fun", "fun"},
  {"prop-value", "prop-value"},
  {"%flog", "%flog"},
  {"%app-filename", "%app-filename"},
  {"type-error", "type-error"},
  {"%loc-val-setter", "%loc-val-setter"},
  {"%f+", "%f+"},
  {"%loc-val", "%loc-val"},
  {"<flat>", "<flat>"},
  {"unexec", "unexec"},
  {"%iu", "%iu"},
  {"prop-setter", "prop-setter"},
  {"%@class-of", "%@class-of"},
  {"%i^", "%i^"},
  {"%app-args", "%app-args"},
  {"%sb", "%sb"},
  {"class-name", "class-name"},
  {"%prop-unbound-error", "%prop-unbound-error"},
  {"fun-name-setter", "fun-name-setter"},
  {"sig-names", "sig-names"},
  {"@subclass?", "@subclass?"},
  {"add-prop", "add-prop"},
  {"unknown-function-error", "unknown-function-error"},
  {"@tlen", "@tlen"},
  {"<lst>", "<lst>"},
  {"try", "try"},
  {"%relt", "%relt"},
  {"%invoke-debugger", "%invoke-debugger"},
  {"%f*", "%f*"},
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"<seq!>", "<seq!>"},
  {"handler-info-message", "handler-info-message"},
  {"%fsqrt", "%fsqrt"},
  {"macro-expand", "macro-expand"},
  {"%met-code", "%met-code"},
  {"ord-app-mets", "ord-app-mets"},
  {"ds", "ds"},
  {"<seq.>", "<seq.>"},
  {"rep", "rep"},
  {"gen-refs", "gen-refs"},
  {"union-elts", "union-elts"},
  {"wrong-number-arguments-error", "wrong-number-arguments-error"},
  {"%force-out", "%force-out"},
  {"<seq>", "<seq>"},
  {"%fatan", "%fatan"},
  {"ct", "ct"},
  {"%fu", "%fu"},
  {"%allocate-stack", "%allocate-stack"},
  {"%to-tup", "%to-tup"},
  {"<opts>", "<opts>"},
  {"%lu", "%lu"},
  {"%class-of", "%class-of"},
  {"dss", "dss"},
  {"<col!>", "<col!>"},
  {"%fb", "%fb"},
  {"%get", "%get"},
  {"%loc-off-setter", "%loc-off-setter"},
  {"sig-arity", "sig-arity"},
  {"<sig>", "<sig>"},
  {"head-setter", "head-setter"},
  {"loc", "loc"},
  {"<col.>", "<col.>"},
  {"*boot-macro-expanders*", "*boot-macro-expanders*"},
  {"%close-out-port", "%close-out-port"},
  {"%build-runtime-modules", "%build-runtime-modules"},
  {"*boot-macro-module-names*", "*boot-macro-module-names*"},
  {"%put", "%put"},
  {"%cb", "%cb"},
  {"%facos", "%facos"},
  {"%f-", "%f-"},
  {"%%macro", "%%macro"},
  {"<col>", "<col>"},
  {"%i=", "%i="},
  {"fun-nary?", "fun-nary?"},
  {"nil", "nil"},
  {"%f/", "%f/"},
  {"t*", "t*"},
  {"%do-stack-frames", "%do-stack-frames"},
  {"gen-add-met", "gen-add-met"},
  {"%i<", "%i<"},
  {"@oelt", "@oelt"},
  {"<rep>", "<rep>"},
  {"error", "error"},
  {"%gen-code-setter", "%gen-code-setter"},
  {"$min-int", "$min-int"},
  {"%prop", "%prop"},
  {"%fpow", "%fpow"},
  {"prop-getter", "prop-getter"},
  {"%peek", "%peek"},
  {"<replace-generic-restart>", "<replace-generic-restart>"},
  {"dp", "dp"},
  {"%raw-call", "%raw-call"},
  {"seq", "seq"},
  {"<gen>", "<gen>"},
  {"quote", "quote"},
  {"%with-monitor", "%with-monitor"},
  {"%fsin", "%fsin"},
  {"file-opening-error", "file-opening-error"},
  {"%su", "%su"},
  {"%i?", "%i?"},
  {"%fasin", "%fasin"},
  {"%telt", "%telt"},
  {"df", "df"},
  {"%cu", "%cu"},
  {"<flo>", "<flo>"},
  {"%eq?", "%eq?"},
  {"object-parents", "object-parents"},
  {"%flo-bits", "%flo-bits"},
  {"dg", "dg"},
  {"%eof-object", "%eof-object"},
  {"%ftan", "%ftan"},
  {"dm", "dm"},
  {"<prim-int>", "<prim-int>"},
  {"dl", "dl"},
  {"%it/", "%it/"},
  {"if", "if"},
  {"%current-out-port", "%current-out-port"},
  {"dc", "dc"},
  {"<prop>", "<prop>"},
  {"dv", "dv"},
  {"%selt", "%selt"},
  {"<int>", "<int>"},
  {"%next-methods", "%next-methods"},
  {"fun-cache", "fun-cache"},
  {"fun-specs", "fun-specs"},
  {"%iv", "%iv"},
  {"%fi2f", "%fi2f"},
  {"type-class", "type-class"},
  {"*macros-ok?*", "*macros-ok?*"},
  {"<num>", "<num>"},
  {"@==", "@=="},
  {"<met>", "<met>"},
  {"%selt-setter", "%selt-setter"},
  {"use/mangle", "use/mangle"},
  {"<product>", "<product>"},
  {"$max-int", "$max-int"},
  {"esc", "esc"},
  {"%os-val-setter", "%os-val-setter"},
  {"%relt-setter", "%relt-setter"},
  {"class-props", "class-props"},
  {"%os-name", "%os-name"},
  {"<chr>", "<chr>"},
  {"find-setter", "find-setter"},
  {"let", "let"},
  {"sig-nary?", "sig-nary?"},
  {"%define-method", "%define-method"},
  {"%sp-reg", "%sp-reg"},
  {"tail", "tail"},
  {"bound?", "bound?"},
  {"<union>", "<union>"},
  {"@olen", "@olen"},
  {"<mag>", "<mag>"},
  {"@all2?", "@all2?"},
  {"fab-gen", "fab-gen"},
  {"sig-specs", "sig-specs"},
  {"%i&", "%i&"},
  {"%process-module", "%process-module"},
  {"tail-setter", "tail-setter"},
  {"<fun>", "<fun>"},
  {"%dyn-var-val", "%dyn-var-val"},
  {"%i-", "%i-"},
  {"subtype?", "subtype?"},
  {"<log>", "<log>"},
  {"set", "set"},
  {"%puts", "%puts"},
  {"%close-in-port", "%close-in-port"},
  {"<subclass>", "<subclass>"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"%lb", "%lb"},
  {"<any>", "<any>"},
  {"lst", "lst"},
  {"%snul", "%snul"},
  {"%file-exists?", "%file-exists?"},
  {"%untag", "%untag"},
  {"%i*", "%i*"},
  {"%fcos", "%fcos"},
  {"prop-owner", "prop-owner"},
  {"%binding-name", "%binding-name"},
  {"@lst", "@lst"},
  {"%file-mtime", "%file-mtime"},
  {"<singleton>", "<singleton>"},
  {"%raw-met-call", "%raw-met-call"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"%rnul", "%rnul"},
  {"%gen-refs", "%gen-refs"},
  {"fun-arity", "fun-arity"},
  {"%@subclass?", "%@subclass?"},
  {"object-props", "object-props"},
  {"%tlen", "%tlen"},
  {"find-getter", "find-getter"},
  {"gen-refs-setter", "gen-refs-setter"},
  {"%i<<<", "%i<<<"},
  {"%ft", "%ft"},
  {"%im", "%im"},
  {"met-app?", "met-app?"},
  {"%ftanh", "%ftanh"},
  {"%open-out-file", "%open-out-file"},
  {"%gen-code", "%gen-code"},
  {"%fun-reg", "%fun-reg"},
  {"sig-unification-vars", "sig-unification-vars"},
  {"object-class", "object-class"},
  {"fun-name", "fun-name"},
  {"def", "def"},
  {"fun-names", "fun-names"},
  {"%loc-off", "%loc-off"},
  {"prop-init", "prop-init"},
  {"%c=", "%c="},
  {"@+", "@+"},
  {"fab-class", "fab-class"},
  {"%create-directory", "%create-directory"},
  {"%check-call-types", "%check-call-types"},
  {"%rlen", "%rlen"},
  {"%f<", "%f<"},
  {"%dyn-var-val-setter", "%dyn-var-val-setter"},
  {"*restarts-ok?*", "*restarts-ok?*"},
  {"%symbols", "%symbols"},
  {"@isa?", "@isa?"},
  {"head", "head"},
  {"class-ancestors", "class-ancestors"},
  {"%os-val", "%os-val"},
  {"class-direct-props", "class-direct-props"},
  {"class-children", "class-children"},
  {"fun-mets", "fun-mets"},
  {"%rep", "%rep"},
  {"type-object", "type-object"},
  {"%time", "%time"},
  {"%fsinh", "%fsinh"},
  {"%fab-dyn-var", "%fab-dyn-var"},
  {"%c<", "%c<"},
  {"%pair", "%pair"},
  {"prop-type", "prop-type"},
  {"class-parents", "class-parents"},
  {"%bb", "%bb"},
  {"%i!", "%i!"},
  {"fun-sig-setter", "fun-sig-setter"},
  {"@len", "@len"},
  {"%%sym", "%%sym"},
  {"%file-type", "%file-type"},
  {"@<", "@<"},
  {"sym-name", "sym-name"},
  {"%tup", "%tup"},
  {"use", "use"},
  {"quasiquote", "quasiquote"},
  {"prop-value-setter", "prop-value-setter"},
  {"%open-in-file", "%open-in-file"},
  {"%raw", "%raw"},
  {"%unlink-stack", "%unlink-stack"},
  {"ddv", "ddv"},
  {"%telt-setter", "%telt-setter"},
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

}

/* END OF GENERATED CODE. */
