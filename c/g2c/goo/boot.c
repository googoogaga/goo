/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/boot */

DEF(Yclass_props,"goo/boot","class-props");
DEF(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(YOfun_arity,"goo/boot","@fun-arity");
DEF(YLpropsG,"goo/boot","<props>");
DEF(Yclass_forward,"goo/boot","class-forward");
DEF(YOOemptyQ,"goo/boot","@@empty?");
DEF(Ynew,"goo/boot","new");
DEF(YOdel_dups,"goo/boot","@del-dups");
DEF(YOfold,"goo/boot","@fold");
DEF(YLclassG,"goo/boot","<class>");
DEF(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(YOsingleton_specQ,"goo/boot","@singleton-spec?");
DEF(YTnext_class_idT,"goo/boot","*next-class-id*");
DEF(Ygen_cache_classes_setter,"goo/boot","gen-cache-classes-setter");
DEF(Yfun_mets,"goo/boot","fun-mets");
DEF(Yclass_mets_setter,"goo/boot","class-mets-setter");
DEF(YLseqIG,"goo/boot","<seq.>");
DEF(YLintG,"goo/boot","<int>");
DEF(YDgen_cache_singletons_offset,"goo/boot","$gen-cache-singletons-offset");
DEF(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(Yfun_naryQ_setter,"goo/boot","fun-nary?-setter");
DEF(YPadd_met,"goo/boot","%add-met");
DEF(YOpick,"goo/boot","@pick");
DEF(YOelt,"goo/boot","@elt");
DEF(Yfab_class,"goo/boot","fab-class");
DEF(YOfun_naryQ,"goo/boot","@fun-nary?");
DEF(Yrequires_singleton_prec,"goo/boot","requires-singleton-prec");
DEF(Ygen_cache_classes,"goo/boot","gen-cache-classes");
DEF(Ynot,"goo/boot","not");
DEF(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(Yclass_mets,"goo/boot","class-mets");
DEF(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(YPTused_symbols_too_earlyT,"goo/boot","%*used-symbols-too-early*");
DEF(YLmetsG,"goo/boot","<mets>");
DEF(Ygen_src,"goo/boot","gen-src");
DEF(Yclass_id_setter,"goo/boot","class-id-setter");
DEF(YPprop,"goo/boot","%prop");
DEF(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YOclassL,"goo/boot","@class<");
DEF(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YLtypeG,"goo/boot","<type>");
DEF(YPrnul,"goo/boot","%rnul");
DEF(Yord_app_mets_1,"goo/boot","ord-app-mets-1");
DEF(Ytail_setter,"goo/boot","tail-setter");
DEF(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(YOmets_singletons_at,"goo/boot","@mets-singletons-at");
DEF(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YOfun_specs,"goo/boot","@fun-specs");
DEF(YLfunG,"goo/boot","<fun>");
DEF(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(YOmemQ,"goo/boot","@mem?");
DEF(Yclass_id,"goo/boot","class-id");
DEF(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(Yord_app_metsT,"goo/boot","ord-app-mets*");
DEF(Yopts_tup_storage,"goo/boot","opts-tup-storage");
DEF(Ytype_class_setter,"goo/boot","type-class-setter");
DEF(Ymethod_accessor_offset,"goo/boot","method-accessor-offset");
DEF(YLseqG,"goo/boot","<seq>");
DEF(YOorder_specs_class,"goo/boot","@order-specs-class");
DEF(YLnumG,"goo/boot","<num>");
DEF(Ytail,"goo/boot","tail");
DEF(YPearly_dispatch,"goo/boot","%early-dispatch");
DEF(Yclass_name_setter,"goo/boot","class-name-setter");
DEF(Ygen_lookup_miss_1,"goo/boot","gen-lookup-miss-1");
DEF(Yunexec,"goo/boot","unexec");
DEF(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(Yprop_value,"goo/boot","prop-value");
DEF(YOOEE,"goo/boot","@@==");
DEF(YPsymbols_readyQ,"goo/boot","%symbols-ready?");
DEF(Yprop_getter_setter,"goo/boot","prop-getter-setter");
DEF(YOfun_names,"goo/boot","@fun-names");
DEF(YLbodyG,"goo/boot","<body>");
DEF(Ymet_app_unify,"goo/boot","met-app-unify");
DEF(Ygen_add_met,"goo/boot","gen-add-met");
DEF(Yclass_name,"goo/boot","class-name");
DEF(Yfun_specs_setter,"goo/boot","fun-specs-setter");
DEF(YPsymbols,"goo/boot","%symbols");
DEF(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
DEF(YisaQ,"goo/boot","isa?");
DEF(YOfab,"goo/boot","@fab");
DEF(YDmissed_dispatch,"goo/boot","$missed-dispatch");
DEF(YLsymG,"goo/boot","<sym>");
DEF(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(Yprop_getter,"goo/boot","prop-getter");
DEF(YDnul_assocs,"goo/boot","$nul-assocs");
DEF(YOmets_specs_at,"goo/boot","@mets-specs-at");
DEF(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YOgen_cache_classes_setter,"goo/boot","@gen-cache-classes-setter");
DEF(Ynul_prop,"goo/boot","nul-prop");
DEF(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(Ytype_error,"goo/boot","type-error");
DEF(YTearly_classesT,"goo/boot","*early-classes*");
DEF(Yfun_sig,"goo/boot","fun-sig");
DEF(Ymet_appQ,"goo/boot","met-app?");
DEF(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YLcolXG,"goo/boot","<col!>");
DEF(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YOclass_ancestors,"goo/boot","@class-ancestors");
DEF(YLchrG,"goo/boot","<chr>");
DEF(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YLpropG,"goo/boot","<prop>");
DEF(Yinit_class,"goo/boot","init-class");
DEF(Yprop_init_setter,"goo/boot","prop-init-setter");
DEF(Yfun_specs,"goo/boot","fun-specs");
DEF(YPdefine_method,"goo/boot","%define-method");
DEF(Yfun_val,"goo/boot","fun-val");
DEF(YOdo_children,"goo/boot","@do-children");
DEF(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(Yclass_ordered_ancestors,"goo/boot","class-ordered-ancestors");
DEF(Yobject_props,"goo/boot","object-props");
DEF(YLspecsG,"goo/boot","<specs>");
DEF(YOfind,"goo/boot","@find");
DEF(YPTstart_running_atT,"goo/boot","%*start-running-at*");
DEF(YOgen_cache_classes,"goo/boot","@gen-cache-classes");
DEF(YOunion_specQ,"goo/boot","@union-spec?");
DEF(YOprecise_specQ,"goo/boot","@precise-spec?");
DEF(Ygen_cache_singletons_setter,"goo/boot","gen-cache-singletons-setter");
DEF(Yfun_congruentQ,"goo/boot","fun-congruent?");
DEF(YOisaQ,"goo/boot","@isa?");
DEF(Yfun_src,"goo/boot","fun-src");
DEF(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(Yfun_refs_setter,"goo/boot","fun-refs-setter");
DEF(Yorder_mets,"goo/boot","order-mets");
DEF(Yfun_mets_setter,"goo/boot","fun-mets-setter");
DEF(YOgen_cache_arg_pos_setter,"goo/boot","@gen-cache-arg-pos-setter");
DEF(Yprop_init,"goo/boot","prop-init");
DEF(YPsnul,"goo/boot","%snul");
DEF(YLsigG,"goo/boot","<sig>");
DEF(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(YOfun_mets_setter,"goo/boot","@fun-mets-setter");
DEF(Yfun_same_metQ,"goo/boot","fun-same-met?");
DEF(Yerror,"goo/boot","error");
DEF(Yprop_type_setter,"goo/boot","prop-type-setter");
DEF(YOmap,"goo/boot","@map");
DEF(YLopts_tupG,"goo/boot","<opts-tup>");
DEF(Yobject_class,"goo/boot","object-class");
DEF(YLstrG,"goo/boot","<str>");
DEF(Ytype_object_setter,"goo/boot","type-object-setter");
DEF(Ydel_class,"goo/boot","del-class");
DEF(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(Ytype_class,"goo/boot","type-class");
DEF(YOsubtypeQ,"goo/boot","@subtype?");
DEF(Yclass_gens,"goo/boot","class-gens");
DEF(Ysig_specs_setter,"goo/boot","sig-specs-setter");
DEF(YOall2Q,"goo/boot","@all2?");
DEF(Ygen_refs,"goo/boot","gen-refs");
DEF(Yclass_type_cache_setter,"goo/boot","class-type-cache-setter");
DEF(Yclass_gens_setter,"goo/boot","class-gens-setter");
DEF(YLcolIG,"goo/boot","<col.>");
DEF(Yorder_specs,"goo/boot","order-specs");
DEF(Yopts_count_setter,"goo/boot","opts-count-setter");
DEF(YLmagG,"goo/boot","<mag>");
DEF(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(Ygen_from_met,"goo/boot","gen-from-met");
DEF(Yfun_names_setter,"goo/boot","fun-names-setter");
DEF(Yforward_class,"goo/boot","forward-class");
DEF(YPwith_monitor,"goo/boot","%with-monitor");
DEF(Yadd_prop,"goo/boot","add-prop");
DEF(YOtup,"goo/boot","@tup");
DEF(YLunionG,"goo/boot","<union>");
DEF(Ysig_specs,"goo/boot","sig-specs");
DEF(YOcat2,"goo/boot","@cat2");
DEF(Yclass_type_cache,"goo/boot","class-type-cache");
DEF(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YOgen_cache_singletons_setter,"goo/boot","@gen-cache-singletons-setter");
DEF(Yclass_ordered_props,"goo/boot","class-ordered-props");
DEF(Yopts_count,"goo/boot","opts-count");
DEF(YPtrue,"goo/boot","%true");
DEF(Yfun_unification_vars_setter,"goo/boot","fun-unification-vars-setter");
DEF(Ygen_lookup_miss_1_using,"goo/boot","gen-lookup-miss-1-using");
DEF(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DEF(Yensure_singleton_cache,"goo/boot","ensure-singleton-cache");
DEF(Yfun_names,"goo/boot","fun-names");
DEF(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YOgen_cache_singletons,"goo/boot","@gen-cache-singletons");
DEF(Ysig_val,"goo/boot","sig-val");
DEF(YOprune_mets_by_type_at,"goo/boot","@prune-mets-by-type-at");
DEF(Yprop_offset,"goo/boot","prop-offset");
DEF(YLtupG,"goo/boot","<tup>");
DEF(YLoptsG,"goo/boot","<opts>");
DEF(YsubtypeQ,"goo/boot","subtype?");
DEF(YOlst,"goo/boot","@lst");
DEF(Yhead_setter,"goo/boot","head-setter");
DEF(Ytype_object,"goo/boot","type-object");
DEF(Ynil,"goo/boot","nil");
DEF(YOanyQ,"goo/boot","@any?");
DEF(Yprop_owner_setter,"goo/boot","prop-owner-setter");
DEF(YOclass_direct_props,"goo/boot","@class-direct-props");
DEF(YLcolG,"goo/boot","<col>");
DEF(Yclass_prop_len,"goo/boot","class-prop-len");
DEF(YLlogG,"goo/boot","<log>");
DEF(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
DEF(YLparentsG,"goo/boot","<parents>");
DEF(Yfun_spec,"goo/boot","fun-spec");
DEF(Yfun_unification_vars,"goo/boot","fun-unification-vars");
DEF(Yhead,"goo/boot","head");
DEF(YLsubclassG,"goo/boot","<subclass>");
DEF(Yprop_owner,"goo/boot","prop-owner");
DEF(Yensure_fresh_object,"goo/boot","ensure-fresh-object");
DEF(YPpatch_early_generic,"goo/boot","%patch-early-generic");
DEF(YPprop_offset,"goo/boot","%prop-offset");
DEF(Yfun_name,"goo/boot","fun-name");
DEF(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(Yopts_tup_storage_setter,"goo/boot","opts-tup-storage-setter");
DEF(YOrev,"goo/boot","@rev");
DEF(YDmax_classes,"goo/boot","$max-classes");
DEF(YOtype_equalQ,"goo/boot","@type-equal?");
DEF(Yfind_setter,"goo/boot","find-setter");
DEF(YLflatG,"goo/boot","<flat>");
DEF(Ygen_cache_arg_pos_setter,"goo/boot","gen-cache-arg-pos-setter");
DEF(YPdispatch,"goo/boot","%dispatch");
DEF(YDmax_int,"goo/boot","$max-int");
DEF(Yfun_refs,"goo/boot","fun-refs");
DEF(Yclass_descendents_setter,"goo/boot","class-descendents-setter");
DEF(Ymay_isaQ,"goo/boot","may-isa?");
DEF(Yobject_parents,"goo/boot","object-parents");
DEF(YLrepG,"goo/boot","<rep>");
DEF(YDnum_int_bits,"goo/boot","$num-int-bits");
DEF(YDmin_int,"goo/boot","$min-int");
DEF(Yfun_val_setter,"goo/boot","fun-val-setter");
DEF(YLanyG,"goo/boot","<any>");
DEF(Yprop_type,"goo/boot","prop-type");
DEF(Yfun_cache_setter,"goo/boot","fun-cache-setter");
DEF(YOgen_cache_arg_pos,"goo/boot","@gen-cache-arg-pos");
DEF(YLsingletonG,"goo/boot","<singleton>");
DEF(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(Ytup,"goo/boot","tup");
DEF(YOalter,"goo/boot","@alter");
DEF(YOmets_unspecialized_atQ,"goo/boot","@mets-unspecialized-at?");
DEF(Yclass_descendents,"goo/boot","class-descendents");
DEF(YLenvG,"goo/boot","<env>");
DEF(Ysig_names_setter,"goo/boot","sig-names-setter");
DEF(Yone_nil,"goo/boot","one-nil");
DEF(Yfun_cache,"goo/boot","fun-cache");
DEF(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(Ypatch_early_classes,"goo/boot","patch-early-classes");
DEF(Yopts_location_setter,"goo/boot","opts-location-setter");
DEF(Ylst,"goo/boot","lst");
DEF(YOfill,"goo/boot","@fill");
DEF(YOfun_mets,"goo/boot","@fun-mets");
DEF(YLgenG,"goo/boot","<gen>");
DEF(Ysig_names,"goo/boot","sig-names");
DEF(Yfab_sym,"goo/boot","fab-sym");
DEF(Ychoose_methods,"goo/boot","choose-methods");
DEF(Yfind_getter,"goo/boot","find-getter");
DEF(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(YOorder_specs,"goo/boot","@order-specs");
DEF(Yopts_location,"goo/boot","opts-location");
DEF(YOspecd_args,"goo/boot","@specd-args");
DEF(Yclass_row_setter,"goo/boot","class-row-setter");
DEF(YOcache_add,"goo/boot","@cache-add");
DEF(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YLlstG,"goo/boot","<lst>");
DEF(YLlocG,"goo/boot","<loc>");
DEF(YOnew,"goo/boot","@new");
DEF(YPfinalize_propsX,"goo/boot","%finalize-props!");
DEF(YOlst_helper,"goo/boot","@lst-helper");
DEF(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(YOallQ,"goo/boot","@all?");
DEF(Ysym_name_setter,"goo/boot","sym-name-setter");
DEF(YPadd_prop,"goo/boot","%add-prop");
DEF(Ysig_arity,"goo/boot","sig-arity");
DEF(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YOfun_unification_vars,"goo/boot","@fun-unification-vars");
DEF(Yclass_row,"goo/boot","class-row");
DEF(YPtnul,"goo/boot","%tnul");
DEF(YPclasses_readyQ,"goo/boot","%classes-ready?");
DEF(Ytype_elts_setter,"goo/boot","type-elts-setter");
DEF(Yfab_gen,"goo/boot","fab-gen");
DEF(Ysym_name,"goo/boot","sym-name");
DEF(Yfun_arity_setter,"goo/boot","fun-arity-setter");
DEF(YOdo,"goo/boot","@do");
DEF(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(Yfun_code_setter,"goo/boot","fun-code-setter");
DEF(Ynul,"goo/boot","nul");
DEF(Yclass_parents_setter,"goo/boot","class-parents-setter");
DEF(YPcollect_direct_props,"goo/boot","%collect-direct-props");
DEF(Ygen_lookup_miss,"goo/boot","gen-lookup-miss");
DEF(Ytype_elts,"goo/boot","type-elts");
DEF(Yrefab_class,"goo/boot","refab-class");
DEF(YOrevX,"goo/boot","@rev!");
DEF(YOfun_val,"goo/boot","@fun-val");
DEF(Yclass_parents,"goo/boot","class-parents");
DEF(Yfun_code,"goo/boot","fun-code");
DEF(YLseqXG,"goo/boot","<seq!>");
DEF(YLfloG,"goo/boot","<flo>");
DEF(YDgen_cache_classes_offset,"goo/boot","$gen-cache-classes-offset");
DEF(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
DEF(YOmets_subclasses_at,"goo/boot","@mets-subclasses-at");
DEF(Yfun_env_setter,"goo/boot","fun-env-setter");
DEF(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(Yfun_arity,"goo/boot","fun-arity");
DEF(Yprop_setter_setter,"goo/boot","prop-setter-setter");
DEF(YOsubclass_specQ,"goo/boot","@subclass-spec?");
DEF(Yprop_setter,"goo/boot","prop-setter");
DEF(YPfalse,"goo/boot","%false");
DEF(YDgetter_not_found,"goo/boot","$getter-not-found");
DEF(Ygen_cache_missableQ_setter,"goo/boot","gen-cache-missable?-setter");
DEF(YLmetG,"goo/boot","<met>");
DEF(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YPPmacro,"goo/boot","%%macro");
DEF(Yfun_env,"goo/boot","fun-env");
DEF(Yprop_value_setter,"goo/boot","prop-value-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_45);
DEFLIT(lit_259);
DEFLIT(lit_222);
DEFLIT(lit_247);
DEFLIT(lit_209);
DEFLIT(lit_233);
DEFLIT(lit_23);
DEFLIT(lit_110);
DEFLIT(lit_171);
DEFLIT(lit_160);
DEFLIT(lit_380);
DEFLIT(lit_197);
DEFLIT(lit_307);
DEFLIT(lit_189);
DEFLIT(lit_146);
DEFLIT(lit_343);
DEFLIT(lit_77);
DEFLIT(lit_1);
DEFLIT(lit_267);
DEFLIT(lit_277);
DEFLIT(lit_258);
DEFLIT(lit_84);
DEFLIT(lit_329);
DEFLIT(lit_173);
DEFLIT(lit_387);
DEFLIT(lit_109);
DEFLIT(lit_52);
DEFLIT(lit_369);
DEFLIT(lit_220);
DEFLIT(lit_246);
DEFLIT(lit_130);
DEFLIT(lit_316);
DEFLIT(lit_22);
DEFLIT(lit_385);
DEFLIT(lit_179);
DEFLIT(lit_170);
DEFLIT(lit_213);
DEFLIT(lit_208);
DEFLIT(lit_4);
DEFLIT(lit_287);
DEFLIT(lit_381);
DEFLIT(lit_257);
DEFLIT(lit_83);
DEFLIT(lit_159);
DEFLIT(lit_51);
DEFLIT(lit_355);
DEFLIT(lit_90);
DEFLIT(lit_115);
DEFLIT(lit_238);
DEFLIT(lit_58);
DEFLIT(lit_368);
DEFLIT(lit_219);
DEFLIT(lit_122);
DEFLIT(lit_231);
DEFLIT(lit_20);
DEFLIT(lit_151);
DEFLIT(lit_145);
DEFLIT(lit_256);
DEFLIT(lit_327);
DEFLIT(lit_32);
DEFLIT(lit_315);
DEFLIT(lit_3);
DEFLIT(lit_286);
DEFLIT(lit_89);
DEFLIT(lit_207);
DEFLIT(lit_153);
DEFLIT(lit_196);
DEFLIT(lit_57);
DEFLIT(lit_96);
DEFLIT(lit_265);
DEFLIT(lit_121);
DEFLIT(lit_64);
DEFLIT(lit_276);
DEFLIT(lit_137);
DEFLIT(lit_358);
DEFLIT(lit_129);
DEFLIT(lit_31);
DEFLIT(lit_298);
DEFLIT(lit_336);
DEFLIT(lit_38);
DEFLIT(lit_303);
DEFLIT(lit_378);
DEFLIT(lit_188);
DEFLIT(lit_95);
DEFLIT(lit_353);
DEFLIT(lit_341);
DEFLIT(lit_11);
DEFLIT(lit_352);
DEFLIT(lit_63);
DEFLIT(lit_70);
DEFLIT(lit_206);
DEFLIT(lit_230);
DEFLIT(lit_302);
DEFLIT(lit_217);
DEFLIT(lit_37);
DEFLIT(lit_314);
DEFLIT(lit_297);
DEFLIT(lit_237);
DEFLIT(lit_178);
DEFLIT(lit_44);
DEFLIT(lit_340);
DEFLIT(lit_384);
DEFLIT(lit_187);
DEFLIT(lit_367);
DEFLIT(lit_10);
DEFLIT(lit_69);
DEFLIT(lit_356);
DEFLIT(lit_323);
DEFLIT(lit_285);
DEFLIT(lit_351);
DEFLIT(lit_275);
DEFLIT(lit_169);
DEFLIT(lit_243);
DEFLIT(lit_229);
DEFLIT(lit_296);
DEFLIT(lit_354);
DEFLIT(lit_101);
DEFLIT(lit_264);
DEFLIT(lit_43);
DEFLIT(lit_136);
DEFLIT(lit_324);
DEFLIT(lit_128);
DEFLIT(lit_108);
DEFLIT(lit_365);
DEFLIT(lit_177);
DEFLIT(lit_338);
DEFLIT(lit_76);
DEFLIT(lit_313);
DEFLIT(lit_318);
DEFLIT(lit_366);
DEFLIT(lit_326);
DEFLIT(lit_255);
DEFLIT(lit_342);
DEFLIT(lit_9);
DEFLIT(lit_195);
DEFLIT(lit_124);
DEFLIT(lit_138);
DEFLIT(lit_82);
DEFLIT(lit_149);
DEFLIT(lit_310);
DEFLIT(lit_150);
DEFLIT(lit_228);
DEFLIT(lit_295);
DEFLIT(lit_107);
DEFLIT(lit_114);
DEFLIT(lit_50);
DEFLIT(lit_232);
DEFLIT(lit_274);
DEFLIT(lit_254);
DEFLIT(lit_113);
DEFLIT(lit_263);
DEFLIT(lit_116);
DEFLIT(lit_266);
DEFLIT(lit_75);
DEFLIT(lit_152);
DEFLIT(lit_198);
DEFLIT(lit_204);
DEFLIT(lit_216);
DEFLIT(lit_73);
DEFLIT(lit_176);
DEFLIT(lit_93);
DEFLIT(lit_157);
DEFLIT(lit_203);
DEFLIT(lit_155);
DEFLIT(lit_143);
DEFLIT(lit_158);
DEFLIT(lit_337);
DEFLIT(lit_81);
DEFLIT(lit_8);
DEFLIT(lit_242);
DEFLIT(lit_294);
DEFLIT(lit_49);
DEFLIT(lit_88);
DEFLIT(lit_167);
DEFLIT(lit_359);
DEFLIT(lit_18);
DEFLIT(lit_17);
DEFLIT(lit_56);
DEFLIT(lit_374);
DEFLIT(lit_135);
DEFLIT(lit_120);
DEFLIT(lit_127);
DEFLIT(lit_312);
DEFLIT(lit_325);
DEFLIT(lit_21);
DEFLIT(lit_168);
DEFLIT(lit_205);
DEFLIT(lit_293);
DEFLIT(lit_186);
DEFLIT(lit_284);
DEFLIT(lit_350);
DEFLIT(lit_87);
DEFLIT(lit_253);
DEFLIT(lit_215);
DEFLIT(lit_30);
DEFLIT(lit_389);
DEFLIT(lit_194);
DEFLIT(lit_55);
DEFLIT(lit_185);
DEFLIT(lit_94);
DEFLIT(lit_273);
DEFLIT(lit_102);
DEFLIT(lit_119);
DEFLIT(lit_62);
DEFLIT(lit_16);
DEFLIT(lit_322);
DEFLIT(lit_292);
DEFLIT(lit_36);
DEFLIT(lit_241);
DEFLIT(lit_301);
DEFLIT(lit_311);
DEFLIT(lit_272);
DEFLIT(lit_283);
DEFLIT(lit_349);
DEFLIT(lit_142);
DEFLIT(lit_252);
DEFLIT(lit_7);
DEFLIT(lit_156);
DEFLIT(lit_202);
DEFLIT(lit_29);
DEFLIT(lit_61);
DEFLIT(lit_184);
DEFLIT(lit_175);
DEFLIT(lit_68);
DEFLIT(lit_15);
DEFLIT(lit_244);
DEFLIT(lit_335);
DEFLIT(lit_134);
DEFLIT(lit_35);
DEFLIT(lit_126);
DEFLIT(lit_390);
DEFLIT(lit_100);
DEFLIT(lit_42);
DEFLIT(lit_166);
DEFLIT(lit_214);
DEFLIT(lit_321);
DEFLIT(lit_28);
DEFLIT(lit_363);
DEFLIT(lit_148);
DEFLIT(lit_251);
DEFLIT(lit_6);
DEFLIT(lit_67);
DEFLIT(lit_183);
DEFLIT(lit_348);
DEFLIT(lit_144);
DEFLIT(lit_309);
DEFLIT(lit_25);
DEFLIT(lit_14);
DEFLIT(lit_245);
DEFLIT(lit_99);
DEFLIT(lit_41);
DEFLIT(lit_201);
DEFLIT(lit_300);
DEFLIT(lit_193);
DEFLIT(lit_106);
DEFLIT(lit_271);
DEFLIT(lit_382);
DEFLIT(lit_165);
DEFLIT(lit_239);
DEFLIT(lit_74);
DEFLIT(lit_362);
DEFLIT(lit_141);
DEFLIT(lit_373);
DEFLIT(lit_250);
DEFLIT(lit_5);
DEFLIT(lit_19);
DEFLIT(lit_182);
DEFLIT(lit_282);
DEFLIT(lit_80);
DEFLIT(lit_308);
DEFLIT(lit_375);
DEFLIT(lit_291);
DEFLIT(lit_105);
DEFLIT(lit_330);
DEFLIT(lit_48);
DEFLIT(lit_347);
DEFLIT(lit_227);
DEFLIT(lit_133);
DEFLIT(lit_320);
DEFLIT(lit_125);
DEFLIT(lit_112);
DEFLIT(lit_388);
DEFLIT(lit_174);
DEFLIT(lit_386);
DEFLIT(lit_164);
DEFLIT(lit_27);
DEFLIT(lit_270);
DEFLIT(lit_147);
DEFLIT(lit_79);
DEFLIT(lit_334);
DEFLIT(lit_181);
DEFLIT(lit_281);
DEFLIT(lit_47);
DEFLIT(lit_376);
DEFLIT(lit_86);
DEFLIT(lit_111);
DEFLIT(lit_290);
DEFLIT(lit_54);
DEFLIT(lit_371);
DEFLIT(lit_226);
DEFLIT(lit_118);
DEFLIT(lit_383);
DEFLIT(lit_346);
DEFLIT(lit_163);
DEFLIT(lit_212);
DEFLIT(lit_319);
DEFLIT(lit_200);
DEFLIT(lit_26);
DEFLIT(lit_85);
DEFLIT(lit_218);
DEFLIT(lit_306);
DEFLIT(lit_13);
DEFLIT(lit_53);
DEFLIT(lit_360);
DEFLIT(lit_92);
DEFLIT(lit_364);
DEFLIT(lit_304);
DEFLIT(lit_249);
DEFLIT(lit_117);
DEFLIT(lit_234);
DEFLIT(lit_299);
DEFLIT(lit_60);
DEFLIT(lit_289);
DEFLIT(lit_269);
DEFLIT(lit_280);
DEFLIT(lit_140);
DEFLIT(lit_132);
DEFLIT(lit_236);
DEFLIT(lit_199);
DEFLIT(lit_370);
DEFLIT(lit_262);
DEFLIT(lit_162);
DEFLIT(lit_34);
DEFLIT(lit_223);
DEFLIT(lit_328);
DEFLIT(lit_91);
DEFLIT(lit_377);
DEFLIT(lit_211);
DEFLIT(lit_59);
DEFLIT(lit_192);
DEFLIT(lit_12);
DEFLIT(lit_333);
DEFLIT(lit_172);
DEFLIT(lit_66);
DEFLIT(lit_372);
DEFLIT(lit_345);
DEFLIT(lit_224);
DEFLIT(lit_33);
DEFLIT(lit_235);
DEFLIT(lit_180);
DEFLIT(lit_279);
DEFLIT(lit_98);
DEFLIT(lit_261);
DEFLIT(lit_40);
DEFLIT(lit_123);
DEFLIT(lit_332);
DEFLIT(lit_221);
DEFLIT(lit_305);
DEFLIT(lit_65);
DEFLIT(lit_191);
DEFLIT(lit_344);
DEFLIT(lit_161);
DEFLIT(lit_210);
DEFLIT(lit_97);
DEFLIT(lit_139);
DEFLIT(lit_39);
DEFLIT(lit_248);
DEFLIT(lit_131);
DEFLIT(lit_0);
DEFLIT(lit_24);
DEFLIT(lit_288);
DEFLIT(lit_104);
DEFLIT(lit_46);
DEFLIT(lit_260);
DEFLIT(lit_240);
DEFLIT(lit_331);
DEFLIT(lit_317);
DEFLIT(lit_72);
DEFLIT(lit_225);
DEFLIT(lit_361);
DEFLIT(lit_278);
DEFLIT(lit_71);
DEFLIT(lit_379);
DEFLIT(lit_190);
DEFLIT(lit_2);
DEFLIT(lit_268);
DEFLIT(lit_339);
DEFLIT(lit_78);
DEFLIT(lit_154);
DEFLIT(lit_103);
DEFLIT(lit_357);

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
extern P YPclass_descendents_setter (P,P);
extern P YPclass_descendents (P);
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
extern P YPtype_elts_setter (P,P);
extern P YPtype_elts (P);
extern P YPunion (P);
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
extern P YPint (P);
extern P YPiu (P);
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
LOCFOR(fun_lookup_101);
LOCFOR(fun_102);
LOCFOR(fun_lookup_103);
FUNFOR(Yfab_sym);
LOCFOR(fun_loop_105);
extern P YPrevX (P);
LOCFOR(fun_coly_107);
LOCFOR(fun_colx_108);
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
LOCFOR(fun_loop_164);
FUNFOR(YPprop_offset);
FUNFOR(YPearly_dispatch);
FUNFOR(YPadd_met);
FUNFOR(YPadd_prop);
LOCFOR(fun_169);
LOCFOR(fun_170);
LOCFOR(fun_171);
LOCFOR(fun_172);
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
LOCFOR(fun_fnd_331);
FUNFOR(YOallQ);
LOCFOR(fun_fnd_333);
FUNFOR(YOall2Q);
LOCFOR(fun_fnd_335);
FUNFOR(YOelt);
LOCFOR(fun_loop_337);
FUNFOR(YOfill);
LOCFOR(fun_fnd_339);
FUNFOR(YOanyQ);
extern P YOpair (P,P);
extern P YOadd (P,P);
extern P YOadd_new (P,P);
LOCFOR(fun_do_344);
FUNFOR(YOmap);
LOCFOR(fun_do_346);
FUNFOR(YOpick);
LOCFOR(fun_do_348);
FUNFOR(YOdo);
LOCFOR(fun_in_350);
FUNFOR(YOalter);
LOCFOR(fun_fab_352);
FUNFOR(YOfab);
LOCFOR(fun_red_354);
FUNFOR(YOfold);
LOCFOR(fun_loop_356);
FUNFOR(YOrev);
FUNFOR(YOcat2);
LOCFOR(fun_fnd_359);
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
LOCFOR(fun_into_371);
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
LOCFOR(fun_385);
LOCFOR(fun_386);
LOCFOR(fun_387);
LOCFOR(fun_388);
LOCFOR(fun_lop_389);
LOCFOR(fun_col_390);
FUNFOR(Ygen_add_met);
extern P YOsubclassQ (P,P);
extern P YOclass_isaQ (P,P);
extern P YOsingleton_isaQ (P,P);
FUNFOR(YOisaQ);
LOCFOR(fun_find_396);
FUNFOR(YOclassL);
FUNFOR(YOtype_equalQ);
FUNFOR(YOsubtypeQ);
FUNFOR(YOmay_isaQ);
FUNFOR(YOorder_specs_class);
FUNFOR(YOorder_specs);
LOCFOR(fun_loop_403);
FUNFOR(Yorder_mets);
LOCFOR(fun_loop_405);
LOCFOR(fun_make_ambiguous_406);
LOCFOR(fun_loop_407);
LOCFOR(fun_precedes_allQ_408);
LOCFOR(fun_check_subsequent_ambiguities_409);
LOCFOR(fun_insert_410);
LOCFOR(fun_loop_411);
FUNFOR(Yord_app_mets_1);
LOCFOR(fun_413);
LOCFOR(fun_loop_414);
FUNFOR(Ymet_appQ);
LOCFOR(fun_col_416);
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
LOCFOR(fun_430);
FUNFOR(YOmets_unspecialized_atQ);
LOCFOR(fun_432);
FUNFOR(YOprune_mets_by_type_at);
LOCFOR(fun_434);
FUNFOR(YOmets_specs_at);
LOCFOR(fun_436);
FUNFOR(YOmets_singletons_at);
LOCFOR(fun_438);
FUNFOR(YOmets_subclasses_at);
LOCFOR(fun_copy_440);
FUNFOR(YOcache_add);
LOCFOR(fun_loop_442);
FUNFOR(Ygen_lookup_miss_1_using);
LOCFOR(fun_copy_444);
FUNFOR(YOspecd_args);
FUNFOR(Yrequires_singleton_prec);
LOCFOR(fun_loop_447);
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
LOCFOR(fun_p_in_and_unconstrained_inQ_474);
LOCFOR(fun_p_unconstrained_inQ_475);
LOCFOR(fun_unconstrained_class_476);
LOCFOR(fun_unconstrained_class_in_parents_477);
LOCFOR(fun_remove_next_478);
LOCFOR(fun_merge_lists_479);
FUNFOR(Yclass_ordered_ancestors);
FUNFOR(YOclass_direct_props);
FUNFOR(Yclass_ordered_props);
FUNFOR(Ydel_class);
LOCFOR(fun_484);
LOCFOR(fun_485);
FUNFOR(Yinit_class);
FUNFOR(Yfab_class);
FUNFOR(Yrefab_class);
FUNFOR(Yobject_props);
FUNFOR(Yobject_parents);
FUNFOR(Yensure_fresh_object);
LOCFOR(fun_loop_492);
FUNFOR(Yprop_offset);
FUNFOR(YPprop_unbound_error);
FUNFOR(Yprop_value);
FUNFOR(Yprop_boundQ);
LOCFOR(fun_loop_497);
FUNFOR(Yprop_value_setter);
LOCFOR(fun_loop_499);
FUNFOR(Yfind_getter);
LOCFOR(fun_loop_501);
FUNFOR(Yfind_setter);
LOCFOR(fun_503);
FUNFOR(Yforward_class);
LOCFOR(fun_visit_505);
FUNFOR(YOdo_children);
LOCFOR(fun_507);
FUNFOR(YPprop);
extern P YPupdate_instance_for_changed_class (P);
FUNFOR(Yupdate_instance_for_changed_class);
FUNFOR(Ypatch_early_classes);
FUNFOR(Yfab_gen);
LOCFOR(fun_513);
FUNFOR(Ygen_from_met);
FUNFOR(YPdefine_method);
FUNFOR(Yunexec);
LOCFOR(fun_loop_517);
extern P YPnew (P,P);
FUNFOR(YOnew);
LOCFOR(fun_new_520);
LOCFOR(fun_521);
LOCFOR(fun_subtypeQ_522);
LOCFOR(fun_523);
LOCFOR(fun_subtypeQ_524);
LOCFOR(fun_525);
LOCFOR(fun_subtypeQ_526);
LOCFOR(fun_subtypeQ_527);
LOCFOR(fun_subtypeQ_528);
LOCFOR(fun_subtypeQ_529);
LOCFOR(fun_subtypeQ_530);
LOCFOR(fun_subtypeQ_531);
LOCFOR(fun_subtypeQ_532);
LOCFOR(fun_subtypeQ_533);
LOCFOR(fun_subtypeQ_534);
LOCFOR(fun_subtypeQ_535);
LOCFOR(fun_isaQ_536);
LOCFOR(fun_isaQ_537);
LOCFOR(fun_isaQ_538);
LOCFOR(fun_539);
LOCFOR(fun_isaQ_540);
LOCFOR(fun_order_specs_541);
LOCFOR(fun_order_specs_542);
LOCFOR(fun_order_specs_543);
LOCFOR(fun_order_specs_544);
LOCFOR(fun_order_specs_545);
LOCFOR(fun_order_specs_546);
LOCFOR(fun_order_specs_547);
LOCFOR(fun_may_isaQ_548);
LOCFOR(fun_may_isaQ_549);
LOCFOR(fun_may_isaQ_550);
LOCFOR(fun_loop_551);
LOCFOR(fun_may_isaQ_552);
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
  P retF22461;
  P T0,T1,T2,T3,T4;
  P a1;
loop:
  T1 = (P)YPsp_reg();
  retF22461 = T1;
  T3 = (P)YPsp_reg();
  T4 = (P)YPiT((P)4,num_);
  T2 = (P)YPiA(T3,T4);
  (P)YPsp_reg_setter(T2);
  T0 = retF22461;
  return T0;
}

P YPclass_prop_len_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPclass_prop_len(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPclass_name_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

P YPclass_name(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPclass_parents_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

P YPclass_parents(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPclass_direct_props_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

P YPclass_direct_props(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPclass_ancestors_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPclass_ancestors(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPclass_props_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

P YPclass_props(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPclass_descendents_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)6);
  return T0;
}

P YPclass_descendents(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)6);
  return T0;
}

P YPclass_gens_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)7);
  return T0;
}

P YPclass_gens(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)7);
  return T0;
}

P YPclass_mets_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)8);
  return T0;
}

P YPclass_mets(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)8);
  return T0;
}

P YPclass_forward_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)9);
  return T0;
}

P YPclass_forward(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)9);
  return T0;
}

INLINE P YPclass_type_cache_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)10);
  return T0;
}

INLINE P YPclass_type_cache(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)10);
  return T0;
}

P YPclass_id_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)11);
  return T0;
}

P YPclass_id(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)11);
  return T0;
}

P YPclass_row_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)12);
  return T0;
}

P YPclass_row(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)12);
  return T0;
}

P YPclass(P class_prop_len_,P class_name_,P class_parents_,P class_direct_props_,P class_ancestors_,P class_props_,P class_descendents_,P class_gens_,P class_mets_,P class_forward_,P class_type_cache_,P class_id_,P class_row_) {
  P classF22462;
  P T0,T1;
  P a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13;
loop:
  T1 = (P)YPobject_of(VARREF(YLclassG),(P)13);
  classF22462 = T1;
  (P)YPprop_elt_setter(class_row_,classF22462,(P)12);
  (P)YPprop_elt_setter(class_id_,classF22462,(P)11);
  (P)YPprop_elt_setter(class_type_cache_,classF22462,(P)10);
  (P)YPprop_elt_setter(class_forward_,classF22462,(P)9);
  (P)YPprop_elt_setter(class_mets_,classF22462,(P)8);
  (P)YPprop_elt_setter(class_gens_,classF22462,(P)7);
  (P)YPprop_elt_setter(class_descendents_,classF22462,(P)6);
  (P)YPprop_elt_setter(class_props_,classF22462,(P)5);
  (P)YPprop_elt_setter(class_ancestors_,classF22462,(P)4);
  (P)YPprop_elt_setter(class_direct_props_,classF22462,(P)3);
  (P)YPprop_elt_setter(class_parents_,classF22462,(P)2);
  (P)YPprop_elt_setter(class_name_,classF22462,(P)1);
  (P)YPprop_elt_setter(class_prop_len_,classF22462,(P)0);
  T0 = classF22462;
  return T0;
}

P YPtype_object_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPtype_object(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsingleton(P type_object_) {
  P classF22463;
  P T0,T1;
  P a1;
loop:
  T1 = (P)YPobject_of(VARREF(YLsingletonG),(P)1);
  classF22463 = T1;
  (P)YPprop_elt_setter(type_object_,classF22463,(P)0);
  T0 = classF22463;
  return T0;
}

P YPtype_class_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPtype_class(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsubclass(P type_class_) {
  P classF22464;
  P T0,T1;
  P a1;
loop:
  T1 = (P)YPobject_of(VARREF(YLsubclassG),(P)1);
  classF22464 = T1;
  (P)YPprop_elt_setter(type_class_,classF22464,(P)0);
  T0 = classF22464;
  return T0;
}

P YPtype_elts_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPtype_elts(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPunion(P type_elts_) {
  P classF22465;
  P T0,T1;
  P a1;
loop:
  T1 = (P)YPobject_of(VARREF(YLunionG),(P)1);
  classF22465 = T1;
  (P)YPprop_elt_setter(type_elts_,classF22465,(P)0);
  T0 = classF22465;
  return T0;
}

P YPhead_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPhead(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPtail_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPtail(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPlst(P head_,P tail_) {
  P classF22466;
  P T0,T1;
  P a1,a2;
loop:
  T1 = (P)YPobject_of(VARREF(YLlstG),(P)2);
  classF22466 = T1;
  (P)YPprop_elt_setter(tail_,classF22466,(P)1);
  (P)YPprop_elt_setter(head_,classF22466,(P)0);
  T0 = classF22466;
  return T0;
}

P YPpair(P head_,P tail_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPlst(head_,tail_);
  return T0;
}

INLINE P YPemptyQ(P x_) {
  P T0,T1;
  P a1;
loop:
  T1 = (P)YPeqQ(x_,VARREF(Ynil));
  T0 = (P)YPbb(T1);
  return T0;
}

P YPPlen(P x_) {
  P T0,T1,T2,T3,T4;
  P a1;
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
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPsig_names(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsig_specs_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

P YPsig_specs(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPsig_naryQ_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

P YPsig_naryQ(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPsig_arity_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

P YPsig_arity(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPsig_val_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

P YPsig_val(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPsig_unification_vars_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

P YPsig_unification_vars(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPsig(P sig_names_,P sig_specs_,P sig_naryQ_,P sig_arity_,P sig_val_,P sig_unification_vars_) {
  P classF22467;
  P T0,T1;
  P a1,a2,a3,a4,a5,a6;
loop:
  T1 = (P)YPobject_of(VARREF(YLsigG),(P)6);
  classF22467 = T1;
  (P)YPprop_elt_setter(sig_unification_vars_,classF22467,(P)5);
  (P)YPprop_elt_setter(sig_val_,classF22467,(P)4);
  (P)YPprop_elt_setter(sig_arity_,classF22467,(P)3);
  (P)YPprop_elt_setter(sig_naryQ_,classF22467,(P)2);
  (P)YPprop_elt_setter(sig_specs_,classF22467,(P)1);
  (P)YPprop_elt_setter(sig_names_,classF22467,(P)0);
  T0 = classF22467;
  return T0;
}

P YPmet_code_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPmet_code(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPmet_name_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

P YPmet_name(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPmet_sig_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

P YPmet_sig(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPmet_env_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

P YPmet_env(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPmet_refs_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

P YPmet_refs(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPmet_src_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

P YPmet_src(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPmet(P met_code_,P met_name_,P met_sig_,P met_env_,P met_refs_,P met_src_) {
  P classF22468;
  P T0,T1;
  P a1,a2,a3,a4,a5,a6;
loop:
  T1 = (P)YPobject_of(VARREF(YLmetG),(P)6);
  classF22468 = T1;
  (P)YPprop_elt_setter(met_src_,classF22468,(P)5);
  (P)YPprop_elt_setter(met_refs_,classF22468,(P)4);
  (P)YPprop_elt_setter(met_env_,classF22468,(P)3);
  (P)YPprop_elt_setter(met_sig_,classF22468,(P)2);
  (P)YPprop_elt_setter(met_name_,classF22468,(P)1);
  (P)YPprop_elt_setter(met_code_,classF22468,(P)0);
  T0 = classF22468;
  return T0;
}

INLINE P YPtag_bits(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPiB(x_,(P)3);
  return T0;
}

INLINE P YPtag(P x_,P t_) {
  P T0,T1;
  P a1,a2;
loop:
  T1 = (P)YPiLL(x_,(P)2);
  T0 = (P)YPiv(T1,t_);
  return T0;
}

INLINE P YPuntag(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPiGG(x_,(P)2);
  return T0;
}

P YPtag_into(P x_,P t_) {
  P T0,T1;
  P a1,a2;
loop:
  T1 = (P)YPuntag(x_);
  T0 = (P)YPtag(T1,t_);
  return T0;
}

P YPuntag_into(P x_) {
  P T0,T1;
  P a1;
loop:
  T1 = (P)YPuntag(x_);
  T0 = (P)YPtag(T1,(P)0);
  return T0;
}

P YPindirect_objectQ(P x_) {
  P T0,T1;
  P a1;
loop:
  T1 = (P)YPtag_bits(x_);
  T0 = (P)YPiE(T1,(P)0);
  return T0;
}

INLINE P YPclass_of(P x_) {
  P tagF22469;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
loop:
  T1 = (P)YPtag_bits(x_);
  tagF22469 = T1;
  T4 = (P)YPiE(tagF22469,(P)0);
  T3 = (P)YPbb(T4);
  if (T3 != YPfalse) {
    T5 = (P)YPobject_class(x_);
    T2 = T5;
  } else {
    T6 = (P)YPelt(VARREF(YDdirect_object_class),tagF22469);
    T2 = T6;
  }
  T0 = T2;
  return T0;
}

INLINE P YPib(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPtag(x_,(P)1);
  return T0;
}

INLINE P YPint(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPib(x_);
  return T0;
}

INLINE P YPiu(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPuntag(x_);
  return T0;
}

INLINE P YPcb(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPtag(x_,(P)2);
  return T0;
}

INLINE P YPchr(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPcb(x_);
  return T0;
}

INLINE P YPcu(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPuntag(x_);
  return T0;
}

INLINE P YPlb(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPtag_into(x_,(P)3);
  return T0;
}

INLINE P YPloc(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPlb(x_);
  return T0;
}

INLINE P YPlu(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPuntag_into(x_);
  return T0;
}

P YPstrX(P len_,P e_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPPsfab(len_,e_);
  return T0;
}

P YPstr(P len_,P e_) {
  P T0,T1,T2,T3;
  P a1,a2;
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
loop:
  T0 = (P)YPPtfab(len_,e_);
  return T0;
}

P YPtup(P len_,P e_) {
  P T0,T1,T2,T3;
  P a1,a2;
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
loop:
  T0 = (P)YPPrfab(len_,e_);
  return T0;
}

P YPrep(P len_,P e_) {
  P T0,T1,T2,T3;
  P a1,a2;
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
  P tmpF22473;
  P c2F22472;
  P c1F22471;
  P tmpF22470;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
loop:
  T2 = (P)YPiE(i_,len_);
  T1 = (P)YPbb(T2);
  tmpF22470 = T1;
  if (tmpF22470 != YPfalse) {
    T3 = tmpF22470;
  } else {
    T5 = (P)YPselt(s1_,i_);
    c1F22471 = T5;
    T7 = (P)YPselt(s2_,i_);
    c2F22472 = T7;
    T10 = (P)YPcE(c1F22471,c2F22472);
    T9 = (P)YPbb(T10);
    tmpF22473 = T9;
    if (tmpF22473 != YPfalse) {
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
  P tmpF22475;
  P lenF22474;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
loop:
  T1 = (P)YPslen(s1_);
  lenF22474 = T1;
  T5 = (P)YPslen(s2_);
  T4 = (P)YPiE(lenF22474,T5);
  T3 = (P)YPbb(T4);
  tmpF22475 = T3;
  if (tmpF22475 != YPfalse) {
    T7 = (P)YPstr_eqQ_loop(s1_,s2_,lenF22474,(P)0);
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
  T6 = (P)YPclass_descendents(T7);
  T5 = (P)YPpair(class_,T6);
  T8 = (P)YPhead(parents_);
  T4 = (P)YPclass_descendents_setter(T5,T8);
  return T4;
}

P YPPsym(P raw_str_) {
  P T0,T1,T2,T3;
  P a1;
loop:
  if (VARREF(YPsymbols_readyQ) != YPfalse) {
    T2 = (P)YPsb(raw_str_);
    T1 = CALL1(1,VARREF(Yfab_sym),T2);
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
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPsym_nam(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsym(P sym_nam_) {
  P classF22476;
  P T0,T1;
  P a1;
loop:
  T1 = (P)YPobject_of(VARREF(YLsymG),(P)1);
  classF22476 = T1;
  (P)YPprop_elt_setter(sym_nam_,classF22476,(P)0);
  T0 = classF22476;
  return T0;
}

FUNCODEDEF(fun_lookup_101) {
  P s_;
  P symF22478;
  P symF22477;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T1 = (P)YPemptyQ(s_);
  if (T1 != YPfalse) {
    T3 = (P)YPsym(FREEREF(0));
    symF22477 = T3;
    T4 = (P)YPpair(symF22477,VARREF(YPsymbols));
    VARSET(YPsymbols,T4);
    T2 = symF22477;
    T0 = T2;
  } else {
    T6 = (P)YPhead(s_);
    symF22478 = T6;
    T9 = (P)YPsym_nam(symF22478);
    T8 = (P)YPstr_eqQ(T9,FREEREF(0));
    if (T8 != YPfalse) {
      T7 = symF22478;
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

FUNCODEDEF(fun_102) {
  P name_;
  P lookupF22479;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = FUNSHELL(1,fun_lookup_101,2);
  lookupF22479 = T1;
  FUNINIT(lookupF22479, 2,name_,lookupF22479);
  T2 = CALL1(0,lookupF22479,VARREF(YPsymbols));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lookup_103) {
  P s_;
  P symF22481;
  P symF22480;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T1 = (P)YPemptyQ(s_);
  if (T1 != YPfalse) {
    T3 = (P)YPsym(FREEREF(0));
    symF22480 = T3;
    T4 = (P)YPpair(symF22480,VARREF(YPsymbols));
    VARSET(YPsymbols,T4);
    T2 = symF22480;
    T0 = T2;
  } else {
    T6 = (P)YPhead(s_);
    symF22481 = T6;
    T9 = (P)YPsym_nam(symF22481);
    T8 = (P)YPstr_eqQ(T9,FREEREF(0));
    if (T8 != YPfalse) {
      T7 = symF22481;
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
  P lookupF22482;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = FUNSHELL(1,fun_lookup_103,2);
  lookupF22482 = T1;
  FUNINIT(lookupF22482, 2,name_,lookupF22482);
  T2 = CALL1(0,lookupF22482,VARREF(YPsymbols));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_105) {
  P l_,r_;
  P tF22483;
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
    tF22483 = T3;
    (P)YPtail_setter(r_,l_);
    a1 = tF22483;
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
  P loopF22484;
  P T0,T1,T2;
  P a1;
loop:
  T1 = FUNSHELL(1,fun_loop_105,1);
  loopF22484 = T1;
  FUNINIT(loopF22484, 1,loopF22484);
  T2 = CALL2(0,loopF22484,c_,Ynil);
  T0 = T2;
  return T0;
}

FUNCODEDEF(fun_coly_107) {
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

FUNCODEDEF(fun_colx_108) {
  P lx_,x_;
  P colyF22485;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(lx_, 0);
  ARG(x_, 1);
loop:
  T1 = (P)YPemptyQ(x_);
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_coly_107,1);
    colyF22485 = T3;
    FUNINIT(colyF22485, 1,colyF22485);
    T4 = CALL2(0,colyF22485,lx_,FREEREF(0));
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
  P colxF22486;
  P T0,T1,T2;
  P a1,a2;
loop:
  T1 = FUNSHELL(1,fun_colx_108,2);
  colxF22486 = T1;
  FUNINIT(colxF22486, 2,y_,colxF22486);
  T2 = CALL2(0,colxF22486,VARREF(Ynil),x_);
  T0 = T2;
  return T0;
}

P YPflo_dat_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPflo_dat(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPflo(P flo_dat_) {
  P classF22487;
  P T0,T1;
  P a1;
loop:
  T1 = (P)YPobject_of(VARREF(YLfloG),(P)1);
  classF22487 = T1;
  (P)YPprop_elt_setter(flo_dat_,classF22487,(P)0);
  T0 = classF22487;
  return T0;
}

P YPfb(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPflo(x_);
  return T0;
}

P YPfu(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPopts_location_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPopts_location(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPopts_count_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPopts_count(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPopts(P opts_location_,P opts_count_) {
  P classF22488;
  P T0,T1;
  P a1,a2;
loop:
  T1 = (P)YPobject_of(VARREF(YLoptsG),(P)2);
  classF22488 = T1;
  (P)YPprop_elt_setter(opts_count_,classF22488,(P)1);
  (P)YPprop_elt_setter(opts_location_,classF22488,(P)0);
  T0 = classF22488;
  return T0;
}

P YPopts_tup_location_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPopts_tup_location(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPopts_tup_count_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

P YPopts_tup_count(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPopts_tup_tup_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

P YPopts_tup_tup(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPopts_tup(P opts_tup_location_,P opts_tup_count_,P opts_tup_tup_) {
  P classF22489;
  P T0,T1;
  P a1,a2,a3;
loop:
  T1 = (P)YPobject_of(VARREF(YLopts_tupG),(P)3);
  classF22489 = T1;
  (P)YPprop_elt_setter(opts_tup_tup_,classF22489,(P)2);
  (P)YPprop_elt_setter(opts_tup_count_,classF22489,(P)1);
  (P)YPprop_elt_setter(opts_tup_location_,classF22489,(P)0);
  T0 = classF22489;
  return T0;
}

P YPprop_owner_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPprop_owner(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPprop_getter_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

P YPprop_getter(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPprop_setter_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

P YPprop_setter(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPprop_type_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

P YPprop_type(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPprop_init_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

P YPprop_init(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPPprop(P prop_owner_,P prop_getter_,P prop_setter_,P prop_type_,P prop_init_) {
  P classF22490;
  P T0,T1;
  P a1,a2,a3,a4,a5;
loop:
  T1 = (P)YPobject_of(VARREF(YLpropG),(P)5);
  classF22490 = T1;
  (P)YPprop_elt_setter(prop_init_,classF22490,(P)4);
  (P)YPprop_elt_setter(prop_type_,classF22490,(P)3);
  (P)YPprop_elt_setter(prop_setter_,classF22490,(P)2);
  (P)YPprop_elt_setter(prop_getter_,classF22490,(P)1);
  (P)YPprop_elt_setter(prop_owner_,classF22490,(P)0);
  T0 = classF22490;
  return T0;
}

P YPgen_cache_missableQ_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPgen_cache_missableQ(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPgen_cache_arg_pos_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPgen_cache_arg_pos(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPgen_cache_singletons_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPgen_cache_singletons(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPgen_cache_classes_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPgen_cache_classes(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPgen_cache_count_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

P YPgen_cache_count(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPgen_cache(P gen_cache_missableQ_,P gen_cache_arg_pos_,P gen_cache_singletons_,P gen_cache_classes_,P gen_cache_count_) {
  P classF22491;
  P T0,T1;
  P a1,a2,a3,a4,a5;
loop:
  T1 = (P)YPobject_of(VARREF(YLgen_cacheG),(P)5);
  classF22491 = T1;
  (P)YPprop_elt_setter(gen_cache_count_,classF22491,(P)4);
  (P)YPprop_elt_setter(gen_cache_classes_,classF22491,(P)3);
  (P)YPprop_elt_setter(gen_cache_singletons_,classF22491,(P)2);
  (P)YPprop_elt_setter(gen_cache_arg_pos_,classF22491,(P)1);
  (P)YPprop_elt_setter(gen_cache_missableQ_,classF22491,(P)0);
  T0 = classF22491;
  return T0;
}

P YPgen_code_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPgen_code(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPgen_name_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

P YPgen_name(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPgen_sig_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

P YPgen_sig(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPgen_mets_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

P YPgen_mets(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPfun_cache_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

P YPfun_cache(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPgen_refs_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

P YPgen_refs(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPgen_src_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)6);
  return T0;
}

P YPgen_src(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)6);
  return T0;
}

P YPgen(P gen_code_,P gen_name_,P gen_sig_,P gen_mets_,P fun_cache_,P gen_refs_,P gen_src_) {
  P classF22492;
  P T0,T1;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T1 = (P)YPobject_of(VARREF(YLgenG),(P)7);
  classF22492 = T1;
  (P)YPprop_elt_setter(gen_src_,classF22492,(P)6);
  (P)YPprop_elt_setter(gen_refs_,classF22492,(P)5);
  (P)YPprop_elt_setter(fun_cache_,classF22492,(P)4);
  (P)YPprop_elt_setter(gen_mets_,classF22492,(P)3);
  (P)YPprop_elt_setter(gen_sig_,classF22492,(P)2);
  (P)YPprop_elt_setter(gen_name_,classF22492,(P)1);
  (P)YPprop_elt_setter(gen_code_,classF22492,(P)0);
  T0 = classF22492;
  return T0;
}

FUNCODEDEF(fun_loop_164) {
  P i_,props_;
  P propF22493;
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
    propF22493 = T4;
    T8 = (P)YPprop_getter(propF22493);
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
  P loopF22494;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_164,2);
  loopF22494 = T1;
  FUNINIT(loopF22494, 2,getter_,loopF22494);
  T4 = (P)YPobject_class(owner_);
  T3 = (P)YPclass_props(T4);
  T2 = CALL2(0,loopF22494,(P)0,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPearly_dispatch) {
  P args_;
  P genF22495;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = (P)YPfun_reg();
  genF22495 = T1;
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

FUNCODEDEF(fun_169) {
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

FUNCODEDEF(fun_170) {
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

FUNCODEDEF(fun_171) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_172) {
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

FUNCODEDEF(fun_173) {
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

FUNCODEDEF(fun_174) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_175) {
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

FUNCODEDEF(fun_176) {
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

FUNCODEDEF(fun_177) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_178) {
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

FUNCODEDEF(fun_179) {
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

FUNCODEDEF(fun_180) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_181) {
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

FUNCODEDEF(fun_182) {
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_parents));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_parents));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_direct_props));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_direct_props));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_ancestors));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_ancestors));
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
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_193) {
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

FUNCODEDEF(fun_194) {
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

FUNCODEDEF(fun_195) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_196) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_descendents));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_descendents));
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
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_199) {
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

FUNCODEDEF(fun_200) {
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_mets));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_mets));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_forward));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_forward));
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
  QRET(YPfalse);
}

FUNCODEDEF(fun_208) {
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

FUNCODEDEF(fun_209) {
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

FUNCODEDEF(fun_210) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_211) {
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

FUNCODEDEF(fun_212) {
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

FUNCODEDEF(fun_213) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)-1));
}

FUNCODEDEF(fun_214) {
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

FUNCODEDEF(fun_215) {
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

FUNCODEDEF(fun_216) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_217) {
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

FUNCODEDEF(fun_218) {
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

FUNCODEDEF(fun_219) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_220) {
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

FUNCODEDEF(fun_221) {
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

FUNCODEDEF(fun_222) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_223) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLunionG),VARREF(Ytype_elts));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLunionG),VARREF(Ytype_elts));
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
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_226) {
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

FUNCODEDEF(fun_227) {
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

FUNCODEDEF(fun_228) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_229) {
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

FUNCODEDEF(fun_230) {
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

FUNCODEDEF(fun_231) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_232) {
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

FUNCODEDEF(fun_233) {
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_type));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_type));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_init));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_init));
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
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_241) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = fun_240;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_242) {
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

FUNCODEDEF(fun_243) {
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

FUNCODEDEF(fun_244) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_245) {
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

FUNCODEDEF(fun_246) {
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

FUNCODEDEF(fun_247) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_248) {
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

FUNCODEDEF(fun_249) {
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

FUNCODEDEF(fun_250) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_251) {
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

FUNCODEDEF(fun_252) {
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

FUNCODEDEF(fun_253) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_254) {
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

FUNCODEDEF(fun_255) {
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

FUNCODEDEF(fun_256) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_257) {
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

FUNCODEDEF(fun_258) {
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

FUNCODEDEF(fun_259) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_260) {
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

FUNCODEDEF(fun_261) {
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

FUNCODEDEF(fun_262) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_263) {
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

FUNCODEDEF(fun_264) {
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_val));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_val));
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
  QRET(VARREF(YLanyG));
}

FUNCODEDEF(fun_269) {
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

FUNCODEDEF(fun_270) {
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_code));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_code));
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
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_275) {
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

FUNCODEDEF(fun_276) {
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

FUNCODEDEF(fun_277) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_278) {
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

FUNCODEDEF(fun_279) {
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

FUNCODEDEF(fun_280) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_281) {
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

FUNCODEDEF(fun_282) {
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

FUNCODEDEF(fun_283) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_284) {
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

FUNCODEDEF(fun_285) {
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

FUNCODEDEF(fun_286) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_287) {
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

FUNCODEDEF(fun_288) {
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

FUNCODEDEF(fun_289) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_290) {
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

FUNCODEDEF(fun_291) {
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

FUNCODEDEF(fun_292) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_293) {
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

FUNCODEDEF(fun_294) {
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Ygen_refs));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Ygen_refs));
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
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_299) {
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

FUNCODEDEF(fun_300) {
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_location));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_location));
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
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_305) {
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

FUNCODEDEF(fun_306) {
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

FUNCODEDEF(fun_307) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_308) {
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

FUNCODEDEF(fun_309) {
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

FUNCODEDEF(fun_310) {
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
  P parentF22496;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(class_, 0);
loop:
  T2 = (P)YPclass_parents(class_);
  T1 = (P)YPhead(T2);
  parentF22496 = T1;
  T4 = (P)YPclass_props(parentF22496);
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
loop:
  T0 = (P)YPhead(x_);
  return T0;
}

P YOhead_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPhead_setter(z_,x_);
  return T0;
}

INLINE P YOtail(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPtail(x_);
  return T0;
}

P YOtail_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPtail_setter(z_,x_);
  return T0;
}

INLINE P YOE(P x_,P y_) {
  P T0,T1;
  P a1,a2;
loop:
  T1 = (P)YPiE(x_,y_);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOL(P x_,P y_) {
  P T0,T1,T2,T3;
  P a1,a2;
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
loop:
  T1 = (P)YPeqQ(x_,YPfalse);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOemptyQ(P x_) {
  P T0;
  P a1;
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
loop:
  T1 = (P)YPPlen(x_);
  T0 = (P)YPib(T1);
  return T0;
}

INLINE P YOoelt(P x_,P i_) {
  P T0,T1,T2,T3;
  P a1,a2;
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
loop:
  T0 = (P)YPopts_count(x_);
  return T0;
}

FUNCODEDEF(fun_fnd_331) {
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
  P fndF22497;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_331,2);
  fndF22497 = T1;
  FUNINIT(fndF22497, 2,test_,fndF22497);
  T2 = CALL1(0,fndF22497,c_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_333) {
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
  P fndF22498;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_333,2);
  fndF22498 = T1;
  FUNINIT(fndF22498, 2,test_,fndF22498);
  T2 = CALL2(0,fndF22498,x_,y_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_335) {
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
  P fndF22499;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_335,2);
  fndF22499 = T1;
  FUNINIT(fndF22499, 2,key_,fndF22499);
  T2 = CALL2(1,fndF22499,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_337) {
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
  P loopF22500;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(f_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_337,3);
  loopF22500 = T1;
  FUNINIT(loopF22500, 3,x_,f_,loopF22500);
  T2 = CALL1(0,loopF22500,x_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_339) {
  P p_;
  P tmpF22501;
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
    tmpF22501 = T3;
    if (tmpF22501 != YPfalse) {
      T5 = tmpF22501;
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
  P fndF22502;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_339,2);
  fndF22502 = T1;
  FUNINIT(fndF22502, 2,test_,fndF22502);
  T2 = CALL1(0,fndF22502,c_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YOpair(P h_,P t_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPpair(h_,t_);
  return T0;
}

P YOadd(P c_,P e_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YOpair(e_,c_);
  return T0;
}

P YOadd_new(P c_,P e_) {
  P T0,T1,T2;
  P a1,a2;
loop:
  T1 = CALL2(1,VARREF(YOmemQ),c_,e_);
  if (T1 != YPfalse) {
    T0 = c_;
  } else {
    T2 = (P)YOpair(e_,c_);
    T0 = T2;
  }
  return T0;
}

FUNCODEDEF(fun_do_344) {
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
  P doF22503;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_do_344,2);
  doF22503 = T1;
  FUNINIT(doF22503, 2,f_,doF22503);
  T2 = CALL2(0,doF22503,x_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_346) {
  P x_,res_;
  P hF22504;
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
    hF22504 = T4;
    T6 = (P)YOtail(x_);
    T8 = CALL1(1,FREEREF(0),hF22504);
    if (T8 != YPfalse) {
      T9 = (P)YOpair(hF22504,res_);
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
  P doF22505;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_do_346,2);
  doF22505 = T1;
  FUNINIT(doF22505, 2,f_,doF22505);
  T2 = CALL2(0,doF22505,x_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_348) {
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
  P doF22506;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_do_348,2);
  doF22506 = T1;
  FUNINIT(doF22506, 2,f_,doF22506);
  T2 = CALL1(0,doF22506,x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_in_350) {
  P ds_,ss_;
  P tmpF22507;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(ds_, 0);
  ARG(ss_, 1);
loop:
  T2 = (P)YOemptyQ(ds_);
  tmpF22507 = T2;
  if (tmpF22507 != YPfalse) {
    T3 = tmpF22507;
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
  P inF22508;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_350,2);
  inF22508 = T1;
  FUNINIT(inF22508, 2,dst_,inF22508);
  T2 = CALL2(0,inF22508,dst_,src_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_352) {
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
  P fabF22509;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_fab_352,1);
  fabF22509 = T1;
  FUNINIT(fabF22509, 1,fabF22509);
  T2 = CALL2(1,fabF22509,s_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_red_354) {
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
  P redF22510;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
loop:
  T1 = FUNSHELL(1,fun_red_354,2);
  redF22510 = T1;
  FUNINIT(redF22510, 2,combine_,redF22510);
  T2 = CALL2(0,redF22510,init_,c_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_356) {
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
  P loopF22511;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_356,1);
  loopF22511 = T1;
  FUNINIT(loopF22511, 1,loopF22511);
  T2 = CALL2(0,loopF22511,x_,Ynil);
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

FUNCODEDEF(fun_fnd_359) {
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
  P fndF22512;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_359,2);
  fndF22512 = T1;
  FUNINIT(fndF22512, 2,f_,fndF22512);
  T2 = CALL2(0,fndF22512,c_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_361) {
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
  T3 = FUNFAB(fun_361,1,x_);
  T2 = CALL2(1,VARREF(YOfind),T3,c_);
  T1 = (P)YOEE(T2,VARREF(Ynul));
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_363) {
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
  T2 = fun_363;
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
loop:
  T1 = (P)YPtlen(x_);
  T0 = (P)YPib(T1);
  return T0;
}

INLINE P YOtelt(P x_,P i_) {
  P T0,T1;
  P a1,a2;
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPtelt(x_,T1);
  return T0;
}

INLINE P YOtelt_setter(P z_,P x_,P i_) {
  P T0,T1;
  P a1,a2,a3;
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPtelt_setter(z_,x_,T1);
  return T0;
}

FUNCODEDEF(fun_into_371) {
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
  P intoF22515;
  P tF22514;
  P lF22513;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
loop:
  T1 = (P)YOolen(args_);
  lF22513 = T1;
  T4 = (P)YPiu(lF22513);
  T3 = (P)YPtup(T4,VARREF(Ynul));
  tF22514 = T3;
  T5 = (P)YOE(lF22513,YPint((P)2));
  if (T5 != YPfalse) {
    T6 = (P)YOoelt(args_,YPint((P)0));
    (P)YOtelt_setter(T6,tF22514,YPint((P)0));
    T8 = (P)YOoelt(args_,YPint((P)1));
    T7 = (P)YOtelt_setter(T8,tF22514,YPint((P)1));
  } else {
    T10 = FUNSHELL(1,fun_into_371,3);
    intoF22515 = T10;
    FUNINIT(intoF22515, 3,args_,tF22514,intoF22515);
    T12 = (P)YOA(lF22513,YPint((P)-1));
    T11 = CALL1(0,intoF22515,T12);
    T9 = T11;
  }
  T2 = tF22514;
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
  P tmpF22518;
  P tmpF22517;
  P tmpF22516;
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
  tmpF22516 = T1;
  if (tmpF22516 != YPfalse) {
    T7 = CALL1(1,VARREF(YOfun_naryQ),x_);
    T8 = CALL1(1,VARREF(YOfun_naryQ),y_);
    T6 = (P)YOEE(T7,T8);
    tmpF22517 = T6;
    if (tmpF22517 != YPfalse) {
      T12 = CALL1(1,VARREF(YOfun_specs),x_);
      T13 = CALL1(1,VARREF(YOfun_specs),y_);
      T11 = CALL3(1,VARREF(YOall2Q),VARREF(YOsubtypeQ),T12,T13);
      tmpF22518 = T11;
      if (tmpF22518 != YPfalse) {
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

FUNCODEDEF(fun_385) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_386) {
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

FUNCODEDEF(fun_387) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(Yincongruent_method_error),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_388) {
  P return_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T2 = CALL2(1,VARREF(Ylst),FREEREF(0),FREEREF(1));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_221),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_385;
  T4 = FUNFAB(fun_386,2,FREEREF(1),return_);
  T5 = FUNFAB(fun_387,2,FREEREF(0),FREEREF(1));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YLreplace_generic_restartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lop_389) {
  P specs_;
  P spec_classF22521;
  P tmpF22520;
  P specF22519;
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
    specF22519 = T4;
    T8 = CALL1(1,VARREF(YOsingleton_specQ),specF22519);
    tmpF22520 = T8;
    if (tmpF22520 != YPfalse) {
      T9 = tmpF22520;
    } else {
      T10 = (P)YOEE(specF22519,VARREF(YLanyG));
      T9 = T10;
    }
    T7 = T9;
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T12 = (P)YPobject_class(specF22519);
      spec_classF22521 = T12;
      T14 = (P)YPclass_gens(spec_classF22521);
      T13 = (P)YOadd_new(T14,FREEREF(0));
      (P)YPclass_gens_setter(T13,spec_classF22521);
      T16 = (P)YPclass_mets(spec_classF22521);
      T15 = (P)YOadd_new(T16,FREEREF(1));
      (P)YPclass_mets_setter(T15,spec_classF22521);
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

FUNCODEDEF(fun_col_390) {
  P mets_,sameQ_,gms_;
  P tmpF22524;
  P now_sameQF22523;
  P gmF22522;
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
    gmF22522 = T7;
    T9 = CALL2(1,VARREF(Yfun_same_metQ),gmF22522,FREEREF(0));
    now_sameQF22523 = T9;
    if (now_sameQF22523 != YPfalse) {
      T12 = FREEREF(0);
    } else {
      T12 = gmF22522;
    }
    T11 = (P)YOadd(mets_,T12);
    tmpF22524 = now_sameQF22523;
    if (tmpF22524 != YPfalse) {
      T14 = tmpF22524;
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
  P colF22526;
  P lopF22525;
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
      T5 = FUNFAB(fun_388,2,g_,m_);
      T4 = with_exit(T5);
      T3 = T4;
    } else {
      T6 = CALL2(1,VARREF(Yincongruent_method_error),g_,m_);
      T3 = T6;
    }
    T0 = T3;
  } else {
    T7 = FUNSHELL(1,fun_lop_389,3);
    lopF22525 = T7;
    FUNINIT(lopF22525, 3,g_,m_,lopF22525);
    T9 = CALL1(1,VARREF(YOfun_specs),m_);
    T8 = CALL1(0,lopF22525,T9);
    T10 = FUNSHELL(1,fun_col_390,3);
    colF22526 = T10;
    FUNINIT(colF22526, 3,m_,g_,colF22526);
    T12 = CALL1(1,VARREF(YOfun_mets),g_);
    T11 = CALL3(1,colF22526,Ynil,YPfalse,T12);
    T0 = g_;
  }
UNLINK_STACK();
  RET(T0);
}

INLINE P YOsubclassQ(P c1_,P c2_) {
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
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
loop:
  T1 = (P)YPclass_of(o_);
  T0 = (P)YOsubclassQ(T1,c_);
  return T0;
}

P YOsingleton_isaQ(P o_,P t_) {
  P T0,T1;
  P a1,a2;
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

FUNCODEDEF(fun_find_396) {
  P ps_;
  P cF22527;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(ps_, 0);
loop:
  T1 = (P)YOemptyQ(ps_);
  if (T1 != YPfalse) {
    T2 = CALL5(1,VARREF(Yerror),LITREF(lit_237),LITREF(lit_238),FREEREF(0),FREEREF(1),FREEREF(2));
    T0 = T2;
  } else {
    T4 = (P)YOhead(ps_);
    cF22527 = T4;
    T6 = (P)YOEE(cF22527,FREEREF(1));
    if (T6 != YPfalse) {
      T5 = YPtrue;
    } else {
      T8 = (P)YOEE(cF22527,FREEREF(2));
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
  P findF22528;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  ARG(wrt_, 2);
loop:
  T1 = FUNSHELL(1,fun_find_396,4);
  findF22528 = T1;
  FUNINIT(findF22528, 4,wrt_,c1_,c2_,findF22528);
  T3 = (P)YPclass_ancestors(wrt_);
  T2 = CALL1(0,findF22528,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOtype_equalQ) {
  P t1_,t2_;
  P tmpF22532;
  P tmpF22531;
  P tmpF22530;
  P tmpF22529;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YOEE(t1_,t2_);
  tmpF22529 = T1;
  if (tmpF22529 != YPfalse) {
    T2 = tmpF22529;
  } else {
    T6 = (P)YPclass_of(t1_);
    T5 = (P)YOEE(T6,VARREF(YLclassG));
    T4 = CALL1(1,VARREF(Ynot),T5);
    tmpF22530 = T4;
    if (tmpF22530 != YPfalse) {
      T11 = (P)YPclass_of(t2_);
      T10 = (P)YOEE(T11,VARREF(YLclassG));
      T9 = CALL1(1,VARREF(Ynot),T10);
      tmpF22531 = T9;
      if (tmpF22531 != YPfalse) {
        T14 = CALL2(1,VARREF(YOsubtypeQ),t1_,t2_);
        tmpF22532 = T14;
        if (tmpF22532 != YPfalse) {
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
  P tmpF22533;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T3 = (P)YPclass_of(t2_);
  T2 = (P)YOEE(T3,VARREF(YLclassG));
  tmpF22533 = T2;
  if (tmpF22533 != YPfalse) {
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
  QRET(T0);
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
    T2 = CALL2(1,VARREF(YOtup),LITREF(lit_246),t1_);
    T0 = T2;
  } else {
    T5 = (P)YPclass_of(arg_);
    T4 = CALL3(1,VARREF(YOclassL),t1_,t2_,T5);
    if (T4 != YPfalse) {
      T6 = CALL2(1,VARREF(YOtup),LITREF(lit_247),t1_);
      T3 = T6;
    } else {
      T7 = CALL2(1,VARREF(YOtup),LITREF(lit_248),t2_);
      T3 = T7;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOorder_specs) {
  P t1_,t2_,arg_;
  P tmpF22534;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T3 = (P)YPclass_of(t1_);
  T2 = (P)YOEE(T3,VARREF(YLclassG));
  tmpF22534 = T2;
  if (tmpF22534 != YPfalse) {
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

FUNCODEDEF(fun_loop_403) {
  P state_,idx_;
  P tmpF22541;
  P tmpF22540;
  P idxF22539;
  P cmpF22538;
  P cmpAtypF22537;
  P m2specF22536;
  P m1specF22535;
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
    m1specF22535 = T3;
    T5 = CALL2(1,VARREF(Yfun_spec),FREEREF(2),idx_);
    m2specF22536 = T5;
    T8 = (P)YOoelt(FREEREF(3),idx_);
    T7 = CALL3(1,VARREF(YOorder_specs),m1specF22535,m2specF22536,T8);
    check_type(T7,VARREF(YLtupG));
    cmpAtypF22537 = T7;
    T10 = (P)YOtelt(cmpAtypF22537,YPint((P)0));
    check_type(T10,VARREF(YLsymG));
    cmpF22538 = T10;
    T12 = (P)YOA(idx_,YPint((P)1));
    check_type(T12,VARREF(YLintG));
    idxF22539 = T12;
    T14 = (P)YOEE(cmpF22538,LITREF(lit_246));
    if (T14 != YPfalse) {
      a1 = state_;
      a2 = idxF22539;
      state_ = a1;
      idx_ = a2;
      goto loop;
      T13 = T15;
    } else {
      T19 = (P)YOEE(cmpF22538,LITREF(lit_255));
      T18 = CALL1(1,VARREF(Ynot),T19);
      tmpF22540 = T18;
      if (tmpF22540 != YPfalse) {
        T22 = (P)YOEE(state_,LITREF(lit_246));
        tmpF22541 = T22;
        if (tmpF22541 != YPfalse) {
          T23 = tmpF22541;
        } else {
          T24 = (P)YOEE(cmpF22538,state_);
          T23 = T24;
        }
        T21 = T23;
        T20 = T21;
      } else {
        T20 = YPfalse;
      }
      T17 = T20;
      if (T17 != YPfalse) {
        a1 = cmpF22538;
        a2 = idxF22539;
        state_ = a1;
        idx_ = a2;
        goto loop;
        T16 = T25;
      } else {
        T16 = LITREF(lit_255);
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
  P loopF22543;
  P arityF22542;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(args_, 2);
loop:
  T1 = CALL1(1,VARREF(YOfun_arity),m1_);
  check_type(T1,VARREF(YLintG));
  arityF22542 = T1;
  T3 = FUNSHELL(1,fun_loop_403,5);
  loopF22543 = T3;
  FUNINIT(loopF22543, 5,arityF22542,m1_,m2_,args_,loopF22543);
  T4 = CALL2(1,loopF22543,LITREF(lit_246),YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_405) {
  P l_;
  P t1F22545;
  P tmpF22544;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = (P)YOEE(l_,Ynil);
  tmpF22544 = T1;
  if (tmpF22544 != YPfalse) {
    T2 = tmpF22544;
  } else {
    T4 = (P)YOtail(l_);
    t1F22545 = T4;
    T5 = (P)YOtail(FREEREF(0));
    (P)YOtail_setter(T5,l_);
    (P)YOtail_setter(l_,FREEREF(0));
    a1 = t1F22545;
    l_ = a1;
    goto loop;
    T3 = T6;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_make_ambiguous_406) {
  P headed_list_;
  P loopF22546;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(headed_list_, 0);
loop:
  T0 = FUNSHELL(1,fun_loop_405,2);
  loopF22546 = T0;
  FUNINIT(loopF22546, 2,FREEREF(0),loopF22546);
  T2 = (P)YOtail(headed_list_);
  T1 = CALL1(1,loopF22546,T2);
  (P)YOtail_setter(Ynil,headed_list_);
  T5 = (P)YOtail(FREEREF(0));
  T4 = (P)YOpair(FREEREF(1),T5);
  T3 = (P)YOtail_setter(T4,FREEREF(0));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_loop_407) {
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
    T3 = (P)YOEE(T4,LITREF(lit_247));
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

FUNCODEDEF(fun_precedes_allQ_408) {
  P l_;
  P loopF22547;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_407,4);
  loopF22547 = T1;
  FUNINIT(loopF22547, 4,FREEREF(0),FREEREF(1),FREEREF(2),loopF22547);
  T2 = CALL1(1,loopF22547,l_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_subsequent_ambiguities_409) {
  P oprev_;
  P tmpF22548;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(oprev_, 0);
loop:
  T4 = (P)YOtail(oprev_);
  T3 = CALL1(1,FREEREF(0),T4);
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF22548 = T2;
  if (tmpF22548 != YPfalse) {
    T5 = tmpF22548;
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

FUNCODEDEF(fun_insert_410) {
  P oprev_,osub_;
  P indicF22549;
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
    indicF22549 = T4;
    T7 = (P)YOEE(indicF22549,LITREF(lit_247));
    if (T7 != YPfalse) {
      T8 = CALL1(1,FREEREF(0),oprev_);
      T6 = T8;
    } else {
      T10 = (P)YOEE(indicF22549,LITREF(lit_248));
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

FUNCODEDEF(fun_loop_411) {
  P mets_;
  P insertF22554;
  P check_subsequent_ambiguitiesF22553;
  P precedes_allQF22552;
  P make_ambiguousF22551;
  P metF22550;
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
    metF22550 = T4;
    T6 = FUNSHELL(1,fun_make_ambiguous_406,2);
    make_ambiguousF22551 = T6;
    T7 = FUNSHELL(1,fun_precedes_allQ_408,3);
    precedes_allQF22552 = T7;
    T8 = FUNSHELL(1,fun_check_subsequent_ambiguities_409,4);
    check_subsequent_ambiguitiesF22553 = T8;
    T9 = FUNSHELL(1,fun_insert_410,6);
    insertF22554 = T9;
    FUNINIT(make_ambiguousF22551, 2,FREEREF(0),metF22550);
    FUNINIT(precedes_allQF22552, 3,metF22550,FREEREF(1),FREEREF(2));
    FUNINIT(check_subsequent_ambiguitiesF22553, 4,precedes_allQF22552,FREEREF(0),make_ambiguousF22551,metF22550);
    FUNINIT(insertF22554, 6,check_subsequent_ambiguitiesF22553,metF22550,FREEREF(1),FREEREF(2),insertF22554,make_ambiguousF22551);
    T10 = (P)YOtail(FREEREF(3));
    CALL2(1,insertF22554,FREEREF(3),T10);
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
  P loopF22557;
  P aheadF22556;
  P oheadF22555;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(mets_, 0);
  ARG(args_, 1);
  ARG(order_mets_, 2);
loop:
  T1 = (P)YOpair(YPfalse,Ynil);
  check_type(T1,VARREF(YLlstG));
  oheadF22555 = T1;
  T3 = (P)YOpair(YPfalse,Ynil);
  check_type(T3,VARREF(YLlstG));
  aheadF22556 = T3;
  T4 = FUNSHELL(1,fun_loop_411,5);
  loopF22557 = T4;
  FUNINIT(loopF22557, 5,aheadF22556,args_,order_mets_,oheadF22555,loopF22557);
  T5 = CALL1(1,loopF22557,mets_);
  T7 = (P)YOtail(oheadF22555);
  T8 = (P)YOtail(aheadF22556);
  T6 = CALL2(1,VARREF(YOtup),T7,T8);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_413) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_loop_414) {
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
  P loopF22559;
  P nF22558;
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
    check_type(T6,VARREF(YLintG));
    nF22558 = T6;
    T8 = FUNSHELL(1,fun_loop_414,4);
    loopF22559 = T8;
    FUNINIT(loopF22559, 4,nF22558,args_,met_,loopF22559);
    T9 = CALL1(1,loopF22559,YPint((P)0));
    T7 = T9;
    T5 = T7;
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_416) {
  P ans_,ms_;
  P ansF22561;
  P mF22560;
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
    mF22560 = T3;
    T6 = CALL2(1,VARREF(Ymet_appQ),mF22560,FREEREF(0));
    if (T6 != YPfalse) {
      T7 = (P)YOpair(mF22560,ans_);
      T5 = T7;
    } else {
      T5 = ans_;
    }
    ansF22561 = T5;
    T9 = (P)YOtail(ms_);
    a1 = ansF22561;
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
  P considered_metsF22563;
  P colF22562;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(gf_, 0);
  ARG(args_, 1);
loop:
  T2 = FUNSHELL(1,fun_col_416,2);
  colF22562 = T2;
  FUNINIT(colF22562, 2,args_,colF22562);
  T4 = CALL1(1,VARREF(YOfun_mets),gf_);
  T3 = CALL2(0,colF22562,Ynil,T4);
  T1 = T3;
  considered_metsF22563 = T1;
  T5 = CALL3(1,VARREF(Yord_app_mets_1),considered_metsF22563,args_,VARREF(Yorder_mets));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
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
  QRET(T0);
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
  P tmpF22568;
  P nF22567;
  P propQF22566;
  P tmpF22565;
  P propF22564;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1,a2,a3;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  ARG(args_, 2);
loop:
  T1 = (P)YPmet_env(met_);
  propF22564 = T1;
  tmpF22565 = propF22564;
  if (tmpF22565 != YPfalse) {
    T6 = (P)YPclass_of(propF22564);
    T5 = (P)YOEE(T6,VARREF(YLpropG));
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  propQF22566 = T3;
  T8 = (P)YOolen(args_);
  nF22567 = T8;
  tmpF22568 = propQF22566;
  if (tmpF22568 != YPfalse) {
    T12 = (P)YOE(nF22567,YPint((P)1));
    if (T12 != YPfalse) {
      T14 = (P)YOoelt(args_,YPint((P)0));
      T13 = CALL2(1,VARREF(Yprop_offset),T14,gen_);
      T11 = T13;
    } else {
      T16 = (P)YOoelt(args_,YPint((P)1));
      T17 = (P)YPprop_getter(propF22564);
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
  P tmpF22571;
  P tmpF22570;
  P tmpF22569;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YOsingleton_specQ),x_);
  tmpF22569 = T1;
  if (tmpF22569 != YPfalse) {
    T2 = tmpF22569;
  } else {
    T4 = CALL1(1,VARREF(YOsubclass_specQ),x_);
    tmpF22570 = T4;
    if (tmpF22570 != YPfalse) {
      T5 = tmpF22570;
    } else {
      T7 = CALL1(1,VARREF(YOunion_specQ),x_);
      tmpF22571 = T7;
      if (tmpF22571 != YPfalse) {
        T10 = (P)YPtype_elts(x_);
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

FUNCODEDEF(fun_430) {
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
  T1 = FUNFAB(fun_430,1,pos_);
  T0 = CALL2(1,VARREF(YOallQ),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_432) {
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
  T1 = FUNFAB(fun_432,2,type_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_434) {
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
  T1 = FUNFAB(fun_434,1,pos_);
  T0 = CALL2(1,VARREF(YOmap),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_436) {
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
  T1 = fun_436;
  T2 = CALL2(1,VARREF(YOmets_specs_at),mets_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_438) {
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
  T1 = fun_438;
  T2 = CALL2(1,VARREF(YOmets_specs_at),mets_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_copy_440) {
  P i_;
  P iF22572;
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
    iF22572 = T5;
    T6 = (P)YOtelt(FREEREF(1),iF22572);
    (P)YOtelt_setter(T6,FREEREF(2),iF22572);
    T8 = (P)YOA(iF22572,YPint((P)1));
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
  P copyF22575;
  P resF22574;
  P olenF22573;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(t_, 0);
  ARG(k_, 1);
  ARG(v_, 2);
loop:
  T1 = (P)YOtlen(t_);
  olenF22573 = T1;
  T5 = (P)YOA(olenF22573,YPint((P)2));
  T4 = (P)YPiu(T5);
  T3 = (P)YPtup(T4,VARREF(Ynul));
  resF22574 = T3;
  T6 = FUNSHELL(1,fun_copy_440,4);
  copyF22575 = T6;
  FUNINIT(copyF22575, 4,olenF22573,t_,resF22574,copyF22575);
  T7 = CALL1(0,copyF22575,YPint((P)0));
  (P)YOtelt_setter(k_,resF22574,olenF22573);
  T8 = (P)YOA(olenF22573,YPint((P)1));
  (P)YOtelt_setter(v_,resF22574,T8);
  T2 = resF22574;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_442) {
  P j_;
  P vF22578;
  P valF22577;
  P tmpF22576;
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
    tmpF22576 = T5;
    if (tmpF22576 != YPfalse) {
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
      valF22577 = T13;
      T17 = BOXVAL(FREEREF(2));
      T16 = CALL3(1,VARREF(YOcache_add),FREEREF(0),T17,valF22577);
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
      vF22578 = T23;
      T26 = (P)YOA(FREEREF(9),YPint((P)1));
      T25 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,FREEREF(6),vF22578,FREEREF(7),FREEREF(8),T26,FREEREF(10));
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
  P loopF22582;
  P assocsF22581;
  P cacheF22580;
  P tmpF22579;
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
  tmpF22579 = cache_;
  if (tmpF22579 != YPfalse) {
    T3 = tmpF22579;
  } else {
    T4 = (P)YPgen_cache(YPtrue,i_,VARREF(YDnul_assocs),VARREF(YDnul_assocs),(P)0);
    T3 = T4;
  }
  T2 = T3;
  cacheF22580 = T2;
  T6 = CALL1(1,all_assocs_,cacheF22580);
  assocsF22581 = T6;
  T7 = FUNSHELL(1,fun_loop_442,12);
  loopF22582 = T7;
  FUNINIT(loopF22582, 12,assocsF22581,all_assocs_,key_,instance_,cacheF22580,loopF22582,gen_,mets_,sorted_mets_,i_,args_,all_assocs_setter_);
  T8 = CALL1(0,loopF22582,YPint((P)0));
  T5 = cacheF22580;
  T1 = T5;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_copy_444) {
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
  P copyF22585;
  P rF22584;
  P vF22583;
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
  vF22583 = T1;
  T8 = (P)YPtlen(vF22583);
  T7 = (P)YPprop_dat_at(vF22583,T8);
  T6 = (P)YPlb(T7);
  T10 = (P)YPtlen(vF22583);
  T9 = (P)YPib(T10);
  T5 = (P)YPopts_tup(T6,T9,vF22583);
  rF22584 = T5;
  T12 = FUNSHELL(1,fun_copy_444,5);
  copyF22585 = T12;
  FUNINIT(copyF22585, 5,args_,rF22584,i_,arg_,copyF22585);
  T13 = CALL1(0,copyF22585,YPint((P)0));
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

FUNCODEDEF(fun_loop_447) {
  P singletons_;
  P app_metsF22590;
  P smetsF22589;
  P argsF22588;
  P argF22587;
  P singF22586;
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
    singF22586 = T3;
    T5 = (P)YPtype_object(singF22586);
    argF22587 = T5;
    T7 = CALL3(1,VARREF(YOspecd_args),FREEREF(1),FREEREF(2),argF22587);
    argsF22588 = T7;
    T9 = CALL2(1,VARREF(Ychoose_methods),FREEREF(3),argsF22588);
    smetsF22589 = T9;
    T11 = CALL3(1,VARREF(YOprune_mets_by_type_at),FREEREF(4),singF22586,FREEREF(2));
    app_metsF22590 = T11;
    CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,argF22587,argF22587,VARREF(YOgen_cache_singletons),VARREF(YOgen_cache_singletons_setter),FREEREF(3),FREEREF(0),FREEREF(4),smetsF22589,FREEREF(2),argsF22588);
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
  P loopF22594;
  P cacheF22593;
  P singletonsF22592;
  P tmpF22591;
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
  tmpF22591 = cache_;
  if (tmpF22591 != YPfalse) {
    T1 = tmpF22591;
  } else {
    T3 = CALL2(1,VARREF(Yrequires_singleton_prec),mets_,i_);
    if (T3 != YPfalse) {
      T4 = (P)YPgen_cache(YPfalse,i_,VARREF(YDnul_assocs),VARREF(YDnul_assocs),(P)0);
      T2 = T4;
    } else {
      T6 = CALL2(1,VARREF(YOmets_singletons_at),mets_,i_);
      singletonsF22592 = T6;
      T8 = (P)YOemptyQ(singletonsF22592);
      if (T8 != YPfalse) {
        T7 = YPfalse;
      } else {
        T10 = (P)YPgen_cache(YPtrue,i_,VARREF(YDnul_assocs),VARREF(YDnul_assocs),(P)0);
        cacheF22593 = T10;
        T12 = FUNSHELL(1,fun_loop_447,6);
        loopF22594 = T12;
        FUNINIT(loopF22594, 6,cacheF22593,args_,i_,gen_,mets_,loopF22594);
        T13 = CALL1(0,loopF22594,singletonsF22592);
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
  P app_metsF22604;
  P classF22603;
  P metsF22602;
  P tmpF22601;
  P tmpF22600;
  P tmpF22599;
  P singQF22598;
  P cacheF22597;
  P argF22596;
  P tmpF22595;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
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
    tmpF22595 = T4;
    if (tmpF22595 != YPfalse) {
      T6 = tmpF22595;
    } else {
      T6 = sorted_mets_;
    }
    T3 = T6;
    T0 = T3;
  } else {
    T8 = (P)YOoelt(args_,i_);
    argF22596 = T8;
    T10 = CALLN(1,VARREF(Yensure_singleton_cache),6,gen_,ocache_,mets_,sorted_mets_,i_,args_);
    cacheF22597 = T10;
    T14 = (P)YOhead(sorted_mets_);
    T13 = CALL2(1,VARREF(Yfun_spec),T14,i_);
    T12 = CALL1(1,VARREF(YOsingleton_specQ),T13);
    singQF22598 = T12;
    tmpF22599 = singQF22598;
    if (tmpF22599 != YPfalse) {
      T19 = (P)YOEE(ocache_,cacheF22597);
      T18 = T19;
    } else {
      T18 = YPfalse;
    }
    T17 = T18;
    tmpF22600 = T17;
    if (tmpF22600 != YPfalse) {
      T20 = tmpF22600;
    } else {
      tmpF22601 = cacheF22597;
      if (tmpF22601 != YPfalse) {
        T24 = (P)YPgen_cache_missableQ(cacheF22597);
        T23 = CALL1(1,VARREF(Ynot),T24);
        T22 = T23;
      } else {
        T22 = YPfalse;
      }
      T21 = T22;
      T20 = T21;
    }
    T16 = T20;
    if (T16 != YPfalse) {
      T27 = (P)YPsingleton(argF22596);
      T26 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,T27,i_);
      metsF22602 = T26;
      T28 = CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,argF22596,argF22596,VARREF(YOgen_cache_singletons),VARREF(YOgen_cache_singletons_setter),gen_,cacheF22597,metsF22602,sorted_mets_,i_,args_);
      T25 = T28;
      T15 = T25;
    } else {
      if (singQF22598 != YPfalse) {
        T29 = cacheF22597;
      } else {
        T31 = (P)YPclass_of(argF22596);
        classF22603 = T31;
        T33 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,classF22603,i_);
        app_metsF22604 = T33;
        T34 = CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,classF22603,argF22596,VARREF(YOgen_cache_classes),VARREF(YOgen_cache_classes_setter),gen_,cacheF22597,app_metsF22604,sorted_mets_,i_,args_);
        T32 = T34;
        T30 = T32;
        T29 = T30;
      }
      T15 = T29;
    }
    T11 = T15;
    T9 = T11;
    T7 = T9;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss) {
  P gen_,args_;
  P metsF22605;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Ychoose_methods),gen_,args_);
  metsF22605 = T1;
  T3 = (P)YPfun_cache(gen_);
  T4 = (P)YPgen_mets(gen_);
  T2 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,gen_,T3,T4,metsF22605,YPint((P)0),args_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

INLINE P Ygen_lookup(P gen_,P args_) {
  P cF22607;
  P tmpF22606;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
loop:
  T2 = (P)YPfun_cache(gen_);
  tmpF22606 = T2;
  if (tmpF22606 != YPfalse) {
    T3 = tmpF22606;
  } else {
    T5 = CALL2(1,VARREF(Ygen_lookup_miss),gen_,args_);
    T4 = (P)YPfun_cache_setter(T5,gen_);
    T3 = T4;
  }
  T1 = T3;
  cF22607 = T1;
  T6 = (P)Ygen_lookup_1(gen_,cF22607,args_);
  T0 = T6;
  return T0;
}

INLINE P Yprop_value_at(P object_,P offset_) {
  P propsF22609;
  P valF22608;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
loop:
  T2 = (P)YPiu(offset_);
  T1 = (P)YPprop_elt(object_,T2);
  valF22608 = T1;
  T4 = (P)YOEE(valF22608,VARREF(Ynul_prop));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yobject_props),object_);
    propsF22609 = T6;
    T10 = CALL2(1,VARREF(YOelt),propsF22609,offset_);
    T9 = (P)YPprop_init(T10);
    T8 = CALL1(1,T9,object_);
    T11 = (P)YPiu(offset_);
    T7 = (P)YPprop_elt_setter(T8,object_,T11);
    T5 = T7;
    T3 = T5;
  } else {
    T3 = valF22608;
  }
  T0 = T3;
  return T0;
}

P Yprop_bound_atQ(P object_,P offset_) {
  P propsF22611;
  P valF22610;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
loop:
  T2 = (P)YPiu(offset_);
  T1 = (P)YPprop_elt(object_,T2);
  valF22610 = T1;
  T4 = (P)YOEE(valF22610,VARREF(Ynul_prop));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yobject_props),object_);
    propsF22611 = T6;
    T10 = CALL2(1,VARREF(YOelt),propsF22611,offset_);
    T9 = (P)YPprop_init(T10);
    T8 = (P)YOEE(T9,VARREF(YPprop_unbound_error));
    T7 = CALL1(1,VARREF(Ynot),T8);
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
loop:
  T1 = (P)YPiu(offset_);
  T0 = (P)YPprop_elt_setter(z_,object_,T1);
  return T0;
}

INLINE P Ygen_lookup_1_using(P key_,P i_,P len_,P assocs_,P missableQ_,P gen_,P args_) {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T2 = (P)YPiE(i_,len_);
  T1 = (P)YPbb(T2);
  if (T1 != YPfalse) {
    if (missableQ_ != YPfalse) {
      T3 = VARREF(YDmissed_dispatch);
    } else {
      T4 = CALL2(1,VARREF(Ygen_lookup_miss),gen_,args_);
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
  P assocsF22615;
  P valF22614;
  P assocsF22613;
  P argF22612;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2,a3;
loop:
  T2 = (P)YPclass_of(cache_);
  T1 = (P)YOEE(T2,VARREF(YLgen_cacheG));
  if (T1 != YPfalse) {
    T5 = (P)YPgen_cache_arg_pos(cache_);
    T4 = (P)YOoelt(args_,T5);
    argF22612 = T4;
    T8 = (P)YPgen_cache_singletons(cache_);
    assocsF22613 = T8;
    T10 = (P)YPtlen(assocsF22613);
    T11 = (P)YPgen_cache_missableQ(cache_);
    T9 = (P)Ygen_lookup_1_using(argF22612,(P)0,T10,assocsF22613,T11,gen_,args_);
    T7 = T9;
    valF22614 = T7;
    T13 = (P)YOEE(valF22614,VARREF(YDmissed_dispatch));
    if (T13 != YPfalse) {
      T15 = (P)YPgen_cache_classes(cache_);
      assocsF22615 = T15;
      T17 = (P)YPclass_of(argF22612);
      T18 = (P)YPtlen(assocsF22615);
      T16 = (P)Ygen_lookup_1_using(T17,(P)0,T18,assocsF22615,YPfalse,gen_,args_);
      T14 = T16;
      T12 = T14;
    } else {
      T12 = valF22614;
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
  P ambiguous_metsF22618;
  P sorted_metsF22617;
  P ord_amb_metsF22616;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yord_app_metsT),gen_,args_);
  ord_amb_metsF22616 = T1;
  T3 = (P)YOtelt(ord_amb_metsF22616,YPint((P)0));
  sorted_metsF22617 = T3;
  T5 = (P)YOtelt(ord_amb_metsF22616,YPint((P)1));
  ambiguous_metsF22618 = T5;
  T7 = (P)YOemptyQ(sorted_metsF22617);
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(YOopts_as_lst),args_);
    T8 = CALL3(1,VARREF(Yerror),LITREF(lit_307),gen_,T9);
    T6 = T8;
  } else {
    T6 = sorted_metsF22617;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPdispatch) {
  P args_;
  P mF22621;
  P resF22620;
  P resultF22619;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T2 = (P)YPfun_reg();
  T1 = (P)Ygen_lookup(T2,args_);
  resultF22619 = T1;
  T5 = (P)YPclass_of(resultF22619);
  T4 = (P)YOEE(T5,VARREF(YLintG));
  if (T4 != YPfalse) {
    T9 = (P)YOolen(args_);
    T8 = (P)YOE(T9,YPint((P)1));
    if (T8 != YPfalse) {
      T11 = (P)YOoelt(args_,YPint((P)0));
      T10 = (P)Yprop_value_at(T11,resultF22619);
      T7 = T10;
    } else {
      T13 = (P)YOoelt(args_,YPint((P)0));
      T14 = (P)YOoelt(args_,YPint((P)1));
      T12 = (P)Yprop_value_at_setter(T13,T14,resultF22619);
      T7 = T12;
    }
    resF22620 = T7;
    (P)YPunlink_stack();
    T6 = resF22620;
    T3 = T6;
  } else {
    T16 = (P)YPhead(resultF22619);
    mF22621 = T16;
    (P)YPunlink_stack();
    T17 = (P)YPsp_reg();
    (P)YPloc_off_setter(mF22621,T17,(P)-1);
    T19 = (P)YPtail(resultF22619);
    T18 = (P)YPraw_call(mF22621,T19);
    T15 = T18;
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

FUNCODEDEF(fun_p_in_and_unconstrained_inQ_474) {
  P l_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = (P)YOhead(l_);
  T0 = (P)YOEE(T1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_p_unconstrained_inQ_475) {
  P l_;
  P tmpF22622;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T2 = (P)YOhead(l_);
  T1 = (P)YOEE(T2,FREEREF(0));
  tmpF22622 = T1;
  if (tmpF22622 != YPfalse) {
    T3 = tmpF22622;
  } else {
    T6 = (P)YOtail(l_);
    T5 = CALL2(1,VARREF(YOmemQ),T6,FREEREF(0));
    T4 = CALL1(1,VARREF(Ynot),T5);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unconstrained_class_476) {
  P p_;
  P tmpF22626;
  P tmpF22625;
  P p_unconstrained_inQF22624;
  P p_in_and_unconstrained_inQF22623;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(p_, 0);
loop:
  T1 = FUNSHELL(0,fun_p_in_and_unconstrained_inQ_474,1);
  p_in_and_unconstrained_inQF22623 = T1;
  T2 = FUNSHELL(0,fun_p_unconstrained_inQ_475,1);
  p_unconstrained_inQF22624 = T2;
  FUNINIT(p_in_and_unconstrained_inQF22623, 1,p_);
  FUNINIT(p_unconstrained_inQF22624, 1,p_);
  T4 = CALL2(1,VARREF(YOanyQ),p_in_and_unconstrained_inQF22623,FREEREF(0));
  tmpF22625 = T4;
  if (tmpF22625 != YPfalse) {
    T7 = CALL2(1,VARREF(YOallQ),p_unconstrained_inQF22624,FREEREF(0));
    tmpF22626 = T7;
    if (tmpF22626 != YPfalse) {
      T8 = p_;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unconstrained_class_in_parents_477) {
  P c_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = (P)YPclass_parents(c_);
  T0 = CALL2(1,VARREF(YOanyQ),FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_remove_next_478) {
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

FUNCODEDEF(fun_merge_lists_479) {
  P partial_cpl_,remaining_lists_;
  P remove_nextF22630;
  P nextF22629;
  P unconstrained_class_in_parentsF22628;
  P unconstrained_classF22627;
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
    T4 = FUNSHELL(0,fun_unconstrained_class_476,1);
    unconstrained_classF22627 = T4;
    T5 = FUNSHELL(0,fun_unconstrained_class_in_parents_477,1);
    unconstrained_class_in_parentsF22628 = T5;
    FUNINIT(unconstrained_classF22627, 1,remaining_lists_);
    FUNINIT(unconstrained_class_in_parentsF22628, 1,unconstrained_classF22627);
    T7 = CALL2(1,VARREF(YOanyQ),unconstrained_class_in_parentsF22628,partial_cpl_);
    nextF22629 = T7;
    if (nextF22629 != YPfalse) {
      T10 = FUNSHELL(0,fun_remove_next_478,1);
      remove_nextF22630 = T10;
      FUNINIT(remove_nextF22630, 1,nextF22629);
      T12 = (P)YOpair(nextF22629,partial_cpl_);
      T13 = CALL2(1,VARREF(YOmap),remove_nextF22630,remaining_lists_);
      a1 = T12;
      a2 = T13;
      partial_cpl_ = a1;
      remaining_lists_ = a2;
      goto loop;
      T9 = T11;
      T8 = T9;
    } else {
      T14 = CALL1(1,VARREF(Yerror),LITREF(lit_334));
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
  P parentsF22632;
  P merge_listsF22631;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_merge_lists_479,1);
  merge_listsF22631 = T1;
  FUNINIT(merge_listsF22631, 1,merge_listsF22631);
  T3 = (P)YPclass_parents(c_);
  parentsF22632 = T3;
  T5 = CALL1(1,VARREF(YOlst),c_);
  T7 = CALL2(1,VARREF(YOmap),VARREF(YOclass_ancestors),parentsF22632);
  T6 = (P)YOadd(T7,parentsF22632);
  T4 = CALL2(1,merge_listsF22631,T5,T6);
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
  P propsF22633;
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
  propsF22633 = T1;
  T6 = (P)YOlen(propsF22633);
  (P)YPclass_prop_len_setter(T6,x_);
  T0 = propsF22633;
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

FUNCODEDEF(fun_484) {
  P parent_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(parent_, 0);
loop:
  T2 = (P)YPclass_descendents(parent_);
  T1 = (P)YOadd_new(T2,FREEREF(0));
  T0 = (P)YPclass_descendents_setter(T1,parent_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_485) {
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
  P rowF22634;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YOL(VARREF(YDmax_classes),VARREF(YTnext_class_idT));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(Yerror),LITREF(lit_339),VARREF(YDmax_classes));
  } else {
  }
  (P)YPclass_id_setter(VARREF(YTnext_class_idT),x_);
  T2 = (P)YOA(VARREF(YTnext_class_idT),YPint((P)1));
  VARSET(YTnext_class_idT,T2);
  T4 = (P)YOEE(x_,VARREF(YLanyG));
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = FUNFAB(fun_484,1,x_);
    T6 = (P)YPclass_parents(x_);
    CALL2(1,VARREF(YOdo),T5,T6);
    T8 = CALL1(1,VARREF(Yclass_ordered_ancestors),x_);
    T7 = (P)YPclass_ancestors_setter(T8,x_);
  } else {
  }
  T11 = (P)YPiu(VARREF(YDmax_classes));
  T12 = (P)YPiu(YPint((P)0));
  T10 = (P)YPstr(T11,T12);
  rowF22634 = T10;
  (P)YPclass_row_setter(rowF22634,x_);
  T13 = FUNFAB(fun_485,1,rowF22634);
  T14 = (P)YPclass_ancestors(x_);
  CALL2(1,VARREF(YOdo),T13,T14);
  T15 = CALL1(1,VARREF(Yclass_ordered_props),x_);
  (P)YPclass_props_setter(T15,x_);
  T9 = x_;
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(Yfab_class) {
  P name_,parents_;
  P xF22635;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(parents_, 1);
loop:
  T1 = (P)YPclass(YPint((P)0),name_,parents_,Ynil,Ynil,Ynil,Ynil,Ynil,Ynil,YPfalse,YPfalse,YPint((P)-1),VARREF(Ynul));
  xF22635 = T1;
  CALL1(1,VARREF(Yinit_class),xF22635);
  T0 = xF22635;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yrefab_class) {
  P old_class_,parents_;
  P new_classF22636;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(old_class_, 0);
  ARG(parents_, 1);
loop:
  T2 = (P)YPclass_direct_props(old_class_);
  T1 = CALL2(1,VARREF(Yfab_class),parents_,T2);
  new_classF22636 = T1;
  (P)YPclass_forward_setter(new_classF22636,old_class_);
  T0 = new_classF22636;
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

FUNCODEDEF(fun_loop_492) {
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
  P loopF22637;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_492,2);
  loopF22637 = T1;
  FUNINIT(loopF22637, 2,getter_,loopF22637);
  T3 = CALL1(1,VARREF(Yobject_props),object_);
  T2 = CALL2(0,loopF22637,YPint((P)0),T3);
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
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_352));
    T0 = T1;
  } else {
    T0 = VARREF(Ynul);
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_value) {
  P object_,getter_;
  P offsetF22638;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
loop:
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T1 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF22638 = T1;
  T3 = (P)YOE(offsetF22638,VARREF(YDgetter_not_found));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(Yerror),LITREF(lit_354),getter_,object_);
    T2 = T4;
  } else {
    T5 = (P)Yprop_value_at(object_,offsetF22638);
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_boundQ) {
  P object_,getter_;
  P offsetF22639;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
loop:
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T1 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF22639 = T1;
  T3 = (P)YOE(offsetF22639,VARREF(YDgetter_not_found));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(Yerror),LITREF(lit_356),getter_,object_);
    T2 = T4;
  } else {
    T5 = (P)Yprop_bound_atQ(object_,offsetF22639);
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_497) {
  P i_,props_;
  P propF22640;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(props_, 1);
loop:
  T1 = (P)YOemptyQ(props_);
  if (T1 != YPfalse) {
    T2 = CALL3(1,VARREF(Yerror),LITREF(lit_358),FREEREF(0),FREEREF(1));
    T0 = T2;
  } else {
    T4 = (P)YOhead(props_);
    propF22640 = T4;
    T7 = (P)YPprop_getter(propF22640);
    T6 = (P)YOEE(T7,FREEREF(0));
    if (T6 != YPfalse) {
      T10 = (P)YPprop_type(propF22640);
      T9 = CALL2(1,VARREF(YOisaQ),FREEREF(2),T10);
      if (T9 != YPfalse) {
        T11 = (P)Yprop_value_at_setter(FREEREF(2),FREEREF(1),i_);
        T8 = T11;
      } else {
        T12 = CALL1(1,VARREF(Yerror),LITREF(lit_359));
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
  P loopF22641;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(object_, 1);
  ARG(getter_, 2);
loop:
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T1 = FUNSHELL(1,fun_loop_497,4);
  loopF22641 = T1;
  FUNINIT(loopF22641, 4,getter_,object_,z_,loopF22641);
  T3 = CALL1(1,VARREF(Yobject_props),object_);
  T2 = CALL2(0,loopF22641,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_499) {
  P mets_;
  P metF22642;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(mets_, 0);
loop:
  T1 = (P)YOemptyQ(mets_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Yerror),LITREF(lit_361));
    T0 = T2;
  } else {
    T4 = (P)YOhead(mets_);
    metF22642 = T4;
    T7 = CALL2(1,VARREF(Yfun_spec),metF22642,YPint((P)0));
    T6 = (P)YOEE(T7,FREEREF(0));
    if (T6 != YPfalse) {
      T5 = metF22642;
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
  P loopF22643;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_499,2);
  loopF22643 = T1;
  FUNINIT(loopF22643, 2,owner_,loopF22643);
  T3 = CALL1(1,VARREF(YOfun_mets),getter_);
  T2 = CALL1(0,loopF22643,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_501) {
  P mets_;
  P tmpF22645;
  P metF22644;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(mets_, 0);
loop:
  T1 = (P)YOemptyQ(mets_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Yerror),LITREF(lit_364));
    T0 = T2;
  } else {
    T4 = (P)YOhead(mets_);
    metF22644 = T4;
    T8 = CALL2(1,VARREF(Yfun_spec),metF22644,YPint((P)1));
    T7 = (P)YOEE(T8,FREEREF(0));
    tmpF22645 = T7;
    if (tmpF22645 != YPfalse) {
      T11 = CALL2(1,VARREF(Yfun_spec),metF22644,YPint((P)0));
      T10 = CALL2(1,VARREF(YOtype_equalQ),T11,FREEREF(1));
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T6 = T9;
    if (T6 != YPfalse) {
      T5 = metF22644;
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
  P loopF22646;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(owner_, 0);
  ARG(type_, 1);
  ARG(zetter_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_501,3);
  loopF22646 = T1;
  FUNINIT(loopF22646, 3,owner_,type_,loopF22646);
  T3 = CALL1(1,VARREF(YOfun_mets),zetter_);
  T2 = CALL1(0,loopF22646,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_503) {
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
  P new_classF22647;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(old_class_, 0);
loop:
  T1 = (P)YPclone(old_class_);
  new_classF22647 = T1;
  T2 = fun_503;
  T3 = (P)YPclass_gens(old_class_);
  CALL2(1,VARREF(YOdo),T2,T3);
  T4 = (P)YPclass_forward_setter(new_classF22647,old_class_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_visit_505) {
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
    T7 = (P)YPclass_descendents(x_);
    T6 = CALL2(1,VARREF(YOdo),FREEREF(2),T7);
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOdo_children) {
  P f_,x_;
  P visitF22649;
  P visitedF22648;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  visitedF22648 = Ynil;
  visitedF22648 = BOXFAB(visitedF22648);
  T3 = FUNSHELL(0,fun_visit_505,3);
  visitF22649 = T3;
  FUNINIT(visitF22649, 3,visitedF22648,f_,visitF22649);
  T4 = CALL1(0,visitF22649,x_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_507) {
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

FUNCODEDEF(YPprop) {
  P owner_,getter_,setter_,type_,init_;
  P setter_metF22653;
  P getter_metF22652;
  P propF22651;
  P classF22650;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  ARG(setter_, 2);
  ARG(type_, 3);
  ARG(init_, 4);
loop:
  classF22650 = owner_;
  T2 = CALLN(1,VARREF(YOnew),11,VARREF(YLpropG),VARREF(Yprop_owner),owner_,VARREF(Yprop_getter),getter_,VARREF(Yprop_setter),setter_,VARREF(Yprop_type),type_,VARREF(Yprop_init),init_);
  propF22651 = T2;
  T4 = CALL2(1,VARREF(Yfind_getter),owner_,getter_);
  getter_metF22652 = T4;
  T6 = CALL3(1,VARREF(Yfind_setter),owner_,type_,setter_);
  setter_metF22653 = T6;
  (P)YPmet_env_setter(propF22651,getter_metF22652);
  (P)YPmet_env_setter(propF22651,setter_metF22653);
  T8 = (P)YPclass_direct_props(classF22650);
  T9 = CALL1(1,VARREF(YOlst),propF22651);
  T7 = CALL2(1,VARREF(YOcat2),T8,T9);
  (P)YPclass_direct_props_setter(T7,classF22650);
  T10 = CALL1(1,VARREF(Yclass_ordered_props),classF22650);
  (P)YPclass_props_setter(T10,classF22650);
  T11 = fun_507;
  T12 = (P)YPclass_props(classF22650);
  CALL2(1,VARREF(YOdo),T11,T12);
  T5 = propF22651;
  T3 = T5;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

P YPupdate_instance_for_changed_class(P new_object_) {
  P a1;
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
  P gF22654;
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
  gF22654 = T1;
  T4 = (P)YPmet_code(VARREF(YPdispatch));
  (P)YPgen_code_setter(T4,gF22654);
  T0 = gF22654;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_513) {
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
  P specsF22655;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = fun_513;
  T3 = CALL1(1,VARREF(YOfun_specs),x_);
  T1 = CALL2(1,VARREF(YOmap),T2,T3);
  specsF22655 = T1;
  T5 = CALL1(1,VARREF(Yfun_name),x_);
  T6 = CALL1(1,VARREF(YOfun_naryQ),x_);
  T4 = CALLN(1,VARREF(Yfab_gen),6,T5,Ynil,specsF22655,T6,VARREF(YLanyG),Ynil);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPdefine_method) {
  P gen_,met_;
  P tmpF22656;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
loop:
  tmpF22656 = gen_;
  if (tmpF22656 != YPfalse) {
    T2 = tmpF22656;
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

FUNCODEDEF(fun_loop_517) {
  P i_;
  P valF22658;
  P getterF22657;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = (P)YOL(i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = (P)YOoelt(FREEREF(1),i_);
    getterF22657 = T3;
    T6 = (P)YOA(i_,YPint((P)1));
    T5 = (P)YOoelt(FREEREF(1),T6);
    valF22658 = T5;
    CALL3(1,VARREF(Yprop_value_setter),valF22658,FREEREF(2),getterF22657);
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
  P loopF22661;
  P numF22660;
  P objectF22659;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
loop:
  T3 = (P)YPclass_prop_len(parent_);
  T2 = (P)YPiu(T3);
  T1 = (P)YPobject_of(parent_,T2);
  objectF22659 = T1;
  T5 = (P)YOolen(inits_);
  numF22660 = T5;
  T6 = FUNSHELL(1,fun_loop_517,4);
  loopF22661 = T6;
  FUNINIT(loopF22661, 4,numF22660,inits_,objectF22659,loopF22661);
  T7 = CALL1(0,loopF22661,YPint((P)0));
  T4 = objectF22659;
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

FUNCODEDEF(fun_new_520) {
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

FUNCODEDEF(fun_521) {
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

FUNCODEDEF(fun_subtypeQ_522) {
  P t1_,t2_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = FUNFAB(fun_521,1,t2_);
  T2 = (P)YPtype_elts(t1_);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_523) {
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

FUNCODEDEF(fun_subtypeQ_524) {
  P t1_,t2_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = FUNFAB(fun_523,1,t1_);
  T2 = (P)YPtype_elts(t2_);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_525) {
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

FUNCODEDEF(fun_subtypeQ_526) {
  P t1_,t2_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = FUNFAB(fun_525,1,t2_);
  T2 = (P)YPtype_elts(t1_);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_527) {
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

FUNCODEDEF(fun_subtypeQ_528) {
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

FUNCODEDEF(fun_subtypeQ_529) {
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

FUNCODEDEF(fun_subtypeQ_530) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_531) {
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

FUNCODEDEF(fun_subtypeQ_532) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_533) {
  P t1_,t2_;
  P tmpF22662;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YOEE(t1_,VARREF(YLclassG));
  tmpF22662 = T1;
  if (tmpF22662 != YPfalse) {
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

FUNCODEDEF(fun_subtypeQ_534) {
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

FUNCODEDEF(fun_subtypeQ_535) {
  P t1_,t2_;
  P tmpF22663;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T2 = (P)YPtype_object(t1_);
  T1 = CALL2(1,VARREF(YOisaQ),T2,VARREF(YLclassG));
  tmpF22663 = T1;
  if (tmpF22663 != YPfalse) {
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

FUNCODEDEF(fun_isaQ_536) {
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

FUNCODEDEF(fun_isaQ_537) {
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

FUNCODEDEF(fun_isaQ_538) {
  P o_,t_;
  P tmpF22664;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YOisaQ),o_,VARREF(YLclassG));
  tmpF22664 = T1;
  if (tmpF22664 != YPfalse) {
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

FUNCODEDEF(fun_539) {
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

FUNCODEDEF(fun_isaQ_540) {
  P o_,u_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(u_, 1);
loop:
  T1 = FUNFAB(fun_539,1,o_);
  T2 = (P)YPtype_elts(u_);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_541) {
  P t1_,t2_,arg_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_246),t1_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_order_specs_542) {
  P t1_,t2_,arg_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_247),t1_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_order_specs_543) {
  P t1_,t2_,arg_;
  P c2F22666;
  P c1F22665;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T1 = (P)YPtype_class(t1_);
  c1F22665 = T1;
  T3 = (P)YPtype_class(t2_);
  c2F22666 = T3;
  T5 = (P)YOEE(c1F22665,c2F22666);
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(YOtup),LITREF(lit_246),t1_);
    T4 = T6;
  } else {
    T8 = CALL3(1,VARREF(YOclassL),c1F22665,c2F22666,arg_);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YOtup),LITREF(lit_247),t1_);
      T7 = T9;
    } else {
      if (YPtrue != YPfalse) {
        T11 = CALL2(1,VARREF(YOtup),LITREF(lit_248),t2_);
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
  QRET(T0);
}

FUNCODEDEF(fun_order_specs_544) {
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
      T3 = LITREF(lit_247);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_255);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t1_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_order_specs_545) {
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
      T3 = LITREF(lit_248);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_255);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t2_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_order_specs_546) {
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
  QRET(T0);
}

FUNCODEDEF(fun_order_specs_547) {
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
      T3 = LITREF(lit_246);
    } else {
      T3 = LITREF(lit_247);
    }
    T2 = CALL2(1,VARREF(YOtup),T3,t1_);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YOsubtypeQ),t2_,t1_);
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YOtup),LITREF(lit_248),t2_);
      T5 = T7;
    } else {
      T8 = CALL2(1,VARREF(YOtup),LITREF(lit_255),VARREF(YLanyG));
      T5 = T8;
    }
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_may_isaQ_548) {
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
  QRET(T0);
}

FUNCODEDEF(fun_may_isaQ_549) {
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
  QRET(T0);
}

FUNCODEDEF(fun_may_isaQ_550) {
  P c_,t_;
  P tmpF22668;
  P classQF22667;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YOsubtypeQ),c_,VARREF(YLclassG));
  classQF22667 = T1;
  tmpF22668 = classQF22667;
  if (tmpF22668 != YPfalse) {
    T6 = (P)YPtype_class(c_);
    T5 = (P)YOEE(T6,VARREF(YLanyG));
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  T2 = CALL2(1,VARREF(YOtup),classQF22667,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_551) {
  P someQ_,allQ_,elts_;
  P tmpF22673;
  P tmpF22672;
  P elt_allQF22671;
  P elt_someQF22670;
  P elt_some_allQF22669;
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
    elt_some_allQF22669 = T4;
    T7 = (P)YOtelt(elt_some_allQF22669,YPint((P)0));
    elt_someQF22670 = T7;
    T9 = (P)YOtelt(elt_some_allQF22669,YPint((P)1));
    elt_allQF22671 = T9;
    tmpF22672 = elt_someQF22670;
    if (tmpF22672 != YPfalse) {
      T12 = tmpF22672;
    } else {
      T12 = someQ_;
    }
    T11 = T12;
    tmpF22673 = elt_allQF22671;
    if (tmpF22673 != YPfalse) {
      T14 = tmpF22673;
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

FUNCODEDEF(fun_may_isaQ_552) {
  P c_,t_;
  P loopF22674;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_551,2);
  loopF22674 = T1;
  FUNINIT(loopF22674, 2,c_,loopF22674);
  T3 = (P)YPtype_elts(t_);
  T2 = CALL3(0,loopF22674,YPfalse,YPfalse,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YPmacro(P modname_,P name_,P expander_) {
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
loop:
  if (VARREF(YTmacros_okQT) != YPfalse) {
    T1 = CALL4(1,VARREF(YPPmacro),modname_,name_,expander_,YPfalse);
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
loop:
  T0 = YPfalse;
  return T0;
}

P Y___main_1___() {
  P T0,T1;
loop:
  T1 = VARSET(YPfalse,(P)0);
  T0 = T1;
  return T0;
}

P Y___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
loop:
  VARSET(YPtrue,(P)1);
  VARSET(YPTused_symbols_too_earlyT,(P)0);
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
  VARSET(YLnumG,T7);
  T8 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLintG,T8);
  T9 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfloG,T9);
  T10 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlocG,T10);
  T13 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  T12 = VARSET(YLrepG,T13);
  T11 = T12;
  return T11;
}

P Y___main_3___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
loop:
  T0 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolG,T0);
  T1 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolIG,T1);
  T2 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolXG,T2);
  T3 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqG,T3);
  T4 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqIG,T4);
  T5 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqXG,T5);
  T6 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlstG,T6);
  T7 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLflatG,T7);
  T8 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLtupG,T8);
  T9 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLstrG,T9);
  T10 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsymG,T10);
  T11 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLtypeG,T11);
  T12 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLclassG,T12);
  T13 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsingletonG,T13);
  T14 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsubclassG,T14);
  T15 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLunionG,T15);
  T16 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLpropG,T16);
  T17 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLgen_cacheG,T17);
  T18 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsigG,T18);
  T19 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfunG,T19);
  T20 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLmetG,T20);
  T21 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLgenG,T21);
  T22 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLoptsG,T22);
  T23 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLopts_tupG,T23);
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLanyG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLlogG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLmagG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLchrG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLnumG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLintG));
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
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLpropG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLgen_cacheG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLsigG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLfunG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLmetG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLgenG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLoptsG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLopts_tupG));
  (P)YPobject_class_setter(VARREF(YLlstG),VARREF(Ynil));
  T24 = (P)YPobject_of(VARREF(YLanyG),(P)0);
  VARSET(Ynul,T24);
  T25 = (P)YPobject_of(VARREF(YLanyG),(P)0);
  VARSET(Ynul_prop,T25);
  T26 = (P)YPobject_of(VARREF(YLlogG),(P)0);
  VARSET(YPtrue,T26);
  T29 = (P)YPobject_of(VARREF(YLlogG),(P)0);
  T28 = VARSET(YPfalse,T29);
  T27 = T28;
  return T27;
}

P Y___main_4___() {
  P T0,T1,T2;
loop:
  T0 = (P)YPobject_of(VARREF(YLlstG),(P)0);
  VARSET(Ynil,T0);
  VARSET(YPclasses_readyQ,YPfalse);
  VARSET(Ynil,VARREF(Yone_nil));
  (P)YPhead_setter(VARREF(Ynil),VARREF(Ynil));
  (P)YPtail_setter(VARREF(Ynil),VARREF(Ynil));
  VARSET(YPmet_prop_len,(P)4);
  VARSET(YPsymbols_readyQ,YPfalse);
  VARSET(YPTstart_running_atT,VARREF(Ynil));
  T1 = (P)YPraw_alloc((P)4);
  VARSET(YDdirect_object_class,T1);
  (P)YPelt_setter(VARREF(YLintG),VARREF(YDdirect_object_class),(P)1);
  (P)YPelt_setter(VARREF(YLchrG),VARREF(YDdirect_object_class),(P)2);
  T2 = YPfalse;
  return T2;
}

P Y___main_5___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70;
loop:
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
  T27 = (P)YPpair(VARREF(YLnumG),Ynil);
  (P)YPdefine_parents(VARREF(YLfloG),T27);
  T28 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLlocG),T28);
  T29 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLrepG),T29);
  T30 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolG),T30);
  T31 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolIG),T31);
  T32 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolXG),T32);
  T33 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLseqG),T33);
  T35 = (P)YPpair(VARREF(YLcolIG),Ynil);
  T34 = (P)YPpair(VARREF(YLseqG),T35);
  (P)YPdefine_parents(VARREF(YLseqIG),T34);
  T37 = (P)YPpair(VARREF(YLcolXG),Ynil);
  T36 = (P)YPpair(VARREF(YLseqG),T37);
  (P)YPdefine_parents(VARREF(YLseqXG),T36);
  T38 = (P)YPpair(VARREF(YLseqXG),Ynil);
  (P)YPdefine_parents(VARREF(YLlstG),T38);
  T39 = (P)YPpair(VARREF(YLseqG),Ynil);
  (P)YPdefine_parents(VARREF(YLflatG),T39);
  T41 = (P)YPpair(VARREF(YLseqIG),Ynil);
  T40 = (P)YPpair(VARREF(YLflatG),T41);
  (P)YPdefine_parents(VARREF(YLtupG),T40);
  T44 = (P)YPpair(VARREF(YLmagG),Ynil);
  T43 = (P)YPpair(VARREF(YLseqIG),T44);
  T42 = (P)YPpair(VARREF(YLflatG),T43);
  (P)YPdefine_parents(VARREF(YLstrG),T42);
  T45 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLsymG),T45);
  T46 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLtypeG),T46);
  T47 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLclassG),T47);
  T48 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsingletonG),T48);
  T49 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsubclassG),T49);
  T50 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLunionG),T50);
  T51 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLpropG),T51);
  T52 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLgen_cacheG),T52);
  T53 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLsigG),T53);
  T54 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLfunG),T54);
  T55 = (P)YPpair(VARREF(YLfunG),Ynil);
  (P)YPdefine_parents(VARREF(YLmetG),T55);
  T56 = (P)YPpair(VARREF(YLfunG),Ynil);
  (P)YPdefine_parents(VARREF(YLgenG),T56);
  T58 = (P)YPpair(VARREF(YLseqIG),Ynil);
  T57 = (P)YPpair(VARREF(YLflatG),T58);
  (P)YPdefine_parents(VARREF(YLoptsG),T57);
  T59 = (P)YPpair(VARREF(YLoptsG),Ynil);
  (P)YPdefine_parents(VARREF(YLopts_tupG),T59);
  T60 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  (P)YPclass_ancestors_setter(T60,VARREF(YLanyG));
  VARSET(YPsymbols,VARREF(Ynil));
  lit_0 = YPsb((P)"Warning: symbols were created in the boot image before the symbol-creation was setup. (Probably from a df or rep)\n");
  T62 = (P)YPeqQ(VARREF(YPTused_symbols_too_earlyT),YPtrue);
  T61 = (P)YPbb(T62);
  if (T61 != YPfalse) {
    T64 = (P)YPcurrent_out_port();
    T65 = (P)YPsu(LITREF(lit_0));
    T63 = (P)YPputs(T64,T65);
  } else {
  }
  lit_1 = YPPsym((P)"name");
  lit_2 = YPPsym((P)"lookup");
  lit_3 = YPPsym((P)"s");
  T67 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lookup_101 = YPmet(FUNCODEREF(fun_lookup_101),LITREF(lit_2),T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T68 = fun_102;
  VARSET(Yfab_sym,T68);
  T70 = VARSET(YPsymbols_readyQ,YPtrue);
  T69 = T70;
  return T69;
}

P Y___main_6___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
loop:
  lit_4 = YPPsym((P)"fab-sym");
  T1 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lookup_103 = YPmet(FUNCODEREF(fun_lookup_103),LITREF(lit_2),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfab_sym = YPmet(FUNCODEREF(Yfab_sym),LITREF(lit_4),T0,ENVNUL,PNUL,YPfalse);
  T2 = Yfab_sym;
  VARSET(Yfab_sym,T2);
  T3 = (P)YPib(VARREF(YPmet_prop_len));
  (P)YPclass_prop_len_setter(T3,VARREF(YLmetG));
  lit_5 = YPPsym((P)"loop");
  lit_6 = YPPsym((P)"l");
  lit_7 = YPPsym((P)"r");
  T4 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_105 = YPmet(FUNCODEREF(fun_loop_105),LITREF(lit_5),T4,ENVNUL,PNUL,YPfalse);
  lit_8 = YPPsym((P)"colx");
  lit_9 = YPPsym((P)"lx");
  lit_10 = YPPsym((P)"x");
  lit_11 = YPPsym((P)"coly");
  lit_12 = YPPsym((P)"lxy");
  lit_13 = YPPsym((P)"y");
  T6 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_coly_107 = YPmet(FUNCODEREF(fun_coly_107),LITREF(lit_11),T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_colx_108 = YPmet(FUNCODEREF(fun_colx_108),LITREF(lit_8),T5,ENVNUL,PNUL,YPfalse);
  VARSET(YDgen_cache_singletons_offset,YPint((P)2));
  VARSET(YDgen_cache_classes_offset,YPint((P)3));
  lit_14 = YPPsym((P)"%prop-offset");
  lit_15 = YPPsym((P)"owner");
  lit_16 = YPPsym((P)"getter");
  lit_17 = YPPsym((P)"i");
  lit_18 = YPPsym((P)"props");
  T8 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_18)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_164 = YPmet(FUNCODEREF(fun_loop_164),LITREF(lit_5),T8,ENVNUL,PNUL,YPfalse);
  T7 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPprop_offset = YPmet(FUNCODEREF(YPprop_offset),LITREF(lit_14),T7,ENVNUL,PNUL,YPfalse);
  T9 = YPprop_offset;
  VARSET(YPprop_offset,T9);
  lit_19 = YPPsym((P)"%early-dispatch");
  lit_20 = YPPsym((P)"args");
  lit_21 = YPsb((P)"ERROR: Generic function dispatch called before it existed.");
  T12 = YPsig(YPPlist(1,LITREF(lit_20)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  T11 = YPearly_dispatch = YPmet(FUNCODEREF(YPearly_dispatch),LITREF(lit_19),T12,ENVNUL,PNUL,YPfalse);
  T14 = YPearly_dispatch;
  T13 = VARSET(YPearly_dispatch,T14);
  T10 = T13;
  return T10;
}

P Y___main_7___() {
  P propF22909;
  P setterF22908;
  P accessorF22907;
  P getterF22906;
  P accessorF22905;
  P propF22904;
  P setterF22903;
  P accessorF22902;
  P getterF22901;
  P accessorF22900;
  P propF22899;
  P setterF22898;
  P accessorF22897;
  P getterF22896;
  P accessorF22895;
  P propF22894;
  P setterF22893;
  P accessorF22892;
  P getterF22891;
  P accessorF22890;
  P propF22889;
  P setterF22888;
  P accessorF22887;
  P getterF22886;
  P accessorF22885;
  P propF22884;
  P setterF22883;
  P accessorF22882;
  P getterF22881;
  P accessorF22880;
  P propF22879;
  P setterF22878;
  P accessorF22877;
  P getterF22876;
  P accessorF22875;
  P propF22874;
  P setterF22873;
  P accessorF22872;
  P getterF22871;
  P accessorF22870;
  P propF22869;
  P setterF22868;
  P accessorF22867;
  P getterF22866;
  P accessorF22865;
  P propF22864;
  P setterF22863;
  P accessorF22862;
  P getterF22861;
  P accessorF22860;
  P propF22859;
  P setterF22858;
  P accessorF22857;
  P getterF22856;
  P accessorF22855;
  P propF22854;
  P setterF22853;
  P accessorF22852;
  P getterF22851;
  P accessorF22850;
  P propF22849;
  P setterF22848;
  P accessorF22847;
  P getterF22846;
  P accessorF22845;
  P propF22844;
  P setterF22843;
  P accessorF22842;
  P getterF22841;
  P accessorF22840;
  P propF22839;
  P setterF22838;
  P accessorF22837;
  P getterF22836;
  P accessorF22835;
  P propF22834;
  P setterF22833;
  P accessorF22832;
  P getterF22831;
  P accessorF22830;
  P propF22829;
  P setterF22828;
  P accessorF22827;
  P getterF22826;
  P accessorF22825;
  P propF22824;
  P setterF22823;
  P accessorF22822;
  P getterF22821;
  P accessorF22820;
  P propF22819;
  P setterF22818;
  P accessorF22817;
  P getterF22816;
  P accessorF22815;
  P propF22814;
  P setterF22813;
  P accessorF22812;
  P getterF22811;
  P accessorF22810;
  P propF22809;
  P setterF22808;
  P accessorF22807;
  P getterF22806;
  P accessorF22805;
  P propF22804;
  P setterF22803;
  P accessorF22802;
  P getterF22801;
  P accessorF22800;
  P propF22799;
  P setterF22798;
  P accessorF22797;
  P getterF22796;
  P accessorF22795;
  P propF22794;
  P setterF22793;
  P accessorF22792;
  P getterF22791;
  P accessorF22790;
  P propF22789;
  P setterF22788;
  P accessorF22787;
  P getterF22786;
  P accessorF22785;
  P propF22784;
  P setterF22783;
  P accessorF22782;
  P getterF22781;
  P accessorF22780;
  P propF22779;
  P setterF22778;
  P accessorF22777;
  P getterF22776;
  P accessorF22775;
  P propF22774;
  P setterF22773;
  P accessorF22772;
  P getterF22771;
  P accessorF22770;
  P propF22769;
  P setterF22768;
  P accessorF22767;
  P getterF22766;
  P accessorF22765;
  P propF22764;
  P setterF22763;
  P accessorF22762;
  P getterF22761;
  P accessorF22760;
  P propF22759;
  P setterF22758;
  P accessorF22757;
  P getterF22756;
  P accessorF22755;
  P propF22754;
  P setterF22753;
  P accessorF22752;
  P getterF22751;
  P accessorF22750;
  P propF22749;
  P setterF22748;
  P accessorF22747;
  P getterF22746;
  P accessorF22745;
  P propF22744;
  P setterF22743;
  P accessorF22742;
  P getterF22741;
  P accessorF22740;
  P propF22739;
  P setterF22738;
  P accessorF22737;
  P getterF22736;
  P accessorF22735;
  P propF22734;
  P setterF22733;
  P accessorF22732;
  P getterF22731;
  P accessorF22730;
  P propF22729;
  P setterF22728;
  P accessorF22727;
  P getterF22726;
  P accessorF22725;
  P propF22724;
  P setterF22723;
  P accessorF22722;
  P getterF22721;
  P accessorF22720;
  P propF22719;
  P setterF22718;
  P accessorF22717;
  P getterF22716;
  P accessorF22715;
  P propF22714;
  P setterF22713;
  P accessorF22712;
  P getterF22711;
  P accessorF22710;
  P propF22709;
  P setterF22708;
  P accessorF22707;
  P getterF22706;
  P accessorF22705;
  P propF22704;
  P setterF22703;
  P accessorF22702;
  P getterF22701;
  P accessorF22700;
  P propF22699;
  P setterF22698;
  P accessorF22697;
  P getterF22696;
  P accessorF22695;
  P propF22694;
  P setterF22693;
  P accessorF22692;
  P getterF22691;
  P accessorF22690;
  P propF22689;
  P setterF22688;
  P accessorF22687;
  P getterF22686;
  P accessorF22685;
  P propF22684;
  P setterF22683;
  P accessorF22682;
  P getterF22681;
  P accessorF22680;
  P propF22679;
  P setterF22678;
  P accessorF22677;
  P getterF22676;
  P accessorF22675;
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
  P T768,T769,T770,T771,T772,T773,T774,T775,T776,T777,T778,T779,T780,T781,T782,T783;
  P T784,T785,T786,T787,T788,T789,T790,T791,T792,T793,T794,T795,T796,T797,T798,T799;
  P T800,T801,T802,T803,T804,T805,T806,T807,T808,T809,T810,T811,T812,T813,T814,T815;
  P T816,T817,T818,T819,T820,T821,T822,T823,T824,T825,T826,T827,T828,T829,T830,T831;
  P T832,T833,T834,T835,T836,T837,T838,T839,T840,T841,T842,T843,T844,T845,T846,T847;
  P T848,T849,T850,T851,T852,T853,T854,T855,T856,T857,T858,T859,T860,T861,T862,T863;
  P T864,T865,T866,T867,T868,T869,T870,T871,T872,T873,T874,T875,T876,T877,T878,T879;
  P T880,T881,T882,T883,T884,T885,T886,T887,T888,T889,T890,T891,T892,T893,T894,T895;
  P T896,T897,T898,T899,T900,T901,T902,T903;
loop:
  lit_22 = YPPsym((P)"%add-met");
  lit_23 = YPPsym((P)"gen");
  lit_24 = YPPsym((P)"met");
  T0 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPadd_met = YPmet(FUNCODEREF(YPadd_met),LITREF(lit_22),T0,ENVNUL,PNUL,YPfalse);
  T1 = YPadd_met;
  VARSET(YPadd_met,T1);
  lit_25 = YPPsym((P)"%add-prop");
  lit_26 = YPPsym((P)"class");
  lit_27 = YPPsym((P)"prop");
  T2 = YPsig(YPPlist(2,LITREF(lit_26),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPadd_prop = YPmet(FUNCODEREF(YPadd_prop),LITREF(lit_25),T2,ENVNUL,PNUL,YPfalse);
  T3 = YPadd_prop;
  VARSET(YPadd_prop,T3);
  lit_28 = YPPsym((P)"head");
  lit_29 = YPPsym((P)"head-setter");
  lit_30 = YPPsym((P)"z");
  T6 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_169 = YPmet(FUNCODEREF(fun_169),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_170 = YPmet(FUNCODEREF(fun_170),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_171 = YPmet(FUNCODEREF(fun_171),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T9 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T8 = (P)YPsig(Ynil,T9,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T7 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_28),T8,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yhead,T7);
  T11 = fun_169;
  accessorF22675 = T11;
  CALL2(1,VARREF(YPadd_met),VARREF(Yhead),accessorF22675);
  (P)YPmet_name_setter(VARREF(Yhead),accessorF22675);
  T10 = accessorF22675;
  getterF22676 = T10;
  T16 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T15 = (P)YPpair(VARREF(YLanyG),T16);
  T14 = (P)YPsig(Ynil,T15,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T13 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_29),T14,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yhead_setter,T13);
  T18 = fun_170;
  accessorF22677 = T18;
  CALL2(1,VARREF(YPadd_met),VARREF(Yhead_setter),accessorF22677);
  (P)YPmet_name_setter(VARREF(Yhead_setter),accessorF22677);
  T17 = accessorF22677;
  setterF22678 = T17;
  T21 = fun_171;
  T20 = (P)YPPprop(VARREF(YLlstG),VARREF(Yhead),VARREF(Yhead_setter),VARREF(YLanyG),T21);
  propF22679 = T20;
  (P)YPmet_env_setter(propF22679,getterF22676);
  (P)YPmet_env_setter(propF22679,setterF22678);
  T22 = CALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF22679);
  T19 = T22;
  T12 = T19;
  lit_31 = YPPsym((P)"tail");
  lit_32 = YPPsym((P)"tail-setter");
  T25 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_172 = YPmet(FUNCODEREF(fun_172),YPfalse,T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_173 = YPmet(FUNCODEREF(fun_173),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_174 = YPmet(FUNCODEREF(fun_174),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T28 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T27 = (P)YPsig(Ynil,T28,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T26 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_31),T27,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytail,T26);
  T30 = fun_172;
  accessorF22680 = T30;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytail),accessorF22680);
  (P)YPmet_name_setter(VARREF(Ytail),accessorF22680);
  T29 = accessorF22680;
  getterF22681 = T29;
  T35 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T34 = (P)YPpair(VARREF(YLanyG),T35);
  T33 = (P)YPsig(Ynil,T34,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T32 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_32),T33,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytail_setter,T32);
  T37 = fun_173;
  accessorF22682 = T37;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytail_setter),accessorF22682);
  (P)YPmet_name_setter(VARREF(Ytail_setter),accessorF22682);
  T36 = accessorF22682;
  setterF22683 = T36;
  T40 = fun_174;
  T39 = (P)YPPprop(VARREF(YLlstG),VARREF(Ytail),VARREF(Ytail_setter),VARREF(YLlstG),T40);
  propF22684 = T39;
  (P)YPmet_env_setter(propF22684,getterF22681);
  (P)YPmet_env_setter(propF22684,setterF22683);
  T41 = CALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF22684);
  T38 = T41;
  T31 = T38;
  lit_33 = YPPsym((P)"sym-name");
  lit_34 = YPPsym((P)"sym-name-setter");
  T44 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_176 = YPmet(FUNCODEREF(fun_176),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_177 = YPmet(FUNCODEREF(fun_177),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T47 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T46 = (P)YPsig(Ynil,T47,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T45 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_33),T46,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysym_name,T45);
  T49 = fun_175;
  accessorF22685 = T49;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysym_name),accessorF22685);
  (P)YPmet_name_setter(VARREF(Ysym_name),accessorF22685);
  T48 = accessorF22685;
  getterF22686 = T48;
  T54 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T53 = (P)YPpair(VARREF(YLanyG),T54);
  T52 = (P)YPsig(Ynil,T53,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T51 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_34),T52,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysym_name_setter,T51);
  T56 = fun_176;
  accessorF22687 = T56;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysym_name_setter),accessorF22687);
  (P)YPmet_name_setter(VARREF(Ysym_name_setter),accessorF22687);
  T55 = accessorF22687;
  setterF22688 = T55;
  T59 = fun_177;
  T58 = (P)YPPprop(VARREF(YLsymG),VARREF(Ysym_name),VARREF(Ysym_name_setter),VARREF(YLstrG),T59);
  propF22689 = T58;
  (P)YPmet_env_setter(propF22689,getterF22686);
  (P)YPmet_env_setter(propF22689,setterF22688);
  T60 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsymG),propF22689);
  T57 = T60;
  T50 = T57;
  lit_35 = YPPsym((P)"class-prop-len");
  lit_36 = YPPsym((P)"class-prop-len-setter");
  T63 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_179 = YPmet(FUNCODEREF(fun_179),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T66 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T65 = (P)YPsig(Ynil,T66,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T64 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_35),T65,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_prop_len,T64);
  T68 = fun_178;
  accessorF22690 = T68;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len),accessorF22690);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len),accessorF22690);
  T67 = accessorF22690;
  getterF22691 = T67;
  T73 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T72 = (P)YPpair(VARREF(YLanyG),T73);
  T71 = (P)YPsig(Ynil,T72,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T70 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_36),T71,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_prop_len_setter,T70);
  T75 = fun_179;
  accessorF22692 = T75;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len_setter),accessorF22692);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len_setter),accessorF22692);
  T74 = accessorF22692;
  setterF22693 = T74;
  T78 = fun_180;
  T77 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_prop_len),VARREF(Yclass_prop_len_setter),VARREF(YLintG),T78);
  propF22694 = T77;
  (P)YPmet_env_setter(propF22694,getterF22691);
  (P)YPmet_env_setter(propF22694,setterF22693);
  T79 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF22694);
  T76 = T79;
  T69 = T76;
  lit_37 = YPPsym((P)"class-name");
  lit_38 = YPPsym((P)"class-name-setter");
  T82 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_181 = YPmet(FUNCODEREF(fun_181),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLsymG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_183 = YPmet(FUNCODEREF(fun_183),YPfalse,T80,ENVNUL,PNUL,YPfalse);
  T85 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T84 = (P)YPsig(Ynil,T85,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T83 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_37),T84,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_name,T83);
  T87 = fun_181;
  accessorF22695 = T87;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_name),accessorF22695);
  (P)YPmet_name_setter(VARREF(Yclass_name),accessorF22695);
  T86 = accessorF22695;
  getterF22696 = T86;
  T92 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T91 = (P)YPpair(VARREF(YLanyG),T92);
  T90 = (P)YPsig(Ynil,T91,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T89 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_38),T90,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_name_setter,T89);
  T94 = fun_182;
  accessorF22697 = T94;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_name_setter),accessorF22697);
  (P)YPmet_name_setter(VARREF(Yclass_name_setter),accessorF22697);
  T93 = accessorF22697;
  setterF22698 = T93;
  T97 = fun_183;
  T96 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_name),VARREF(Yclass_name_setter),VARREF(YLsymG),T97);
  propF22699 = T96;
  (P)YPmet_env_setter(propF22699,getterF22696);
  (P)YPmet_env_setter(propF22699,setterF22698);
  T98 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF22699);
  T95 = T98;
  T88 = T95;
  lit_39 = YPPsym((P)"class-parents");
  lit_40 = YPPsym((P)"class-parents-setter");
  T101 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_184 = YPmet(FUNCODEREF(fun_184),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_185 = YPmet(FUNCODEREF(fun_185),YPfalse,T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_186 = YPmet(FUNCODEREF(fun_186),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T104 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T103 = (P)YPsig(Ynil,T104,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T102 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_39),T103,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_parents,T102);
  T106 = fun_184;
  accessorF22700 = T106;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents),accessorF22700);
  (P)YPmet_name_setter(VARREF(Yclass_parents),accessorF22700);
  T105 = accessorF22700;
  getterF22701 = T105;
  T111 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T110 = (P)YPpair(VARREF(YLanyG),T111);
  T109 = (P)YPsig(Ynil,T110,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T108 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_40),T109,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_parents_setter,T108);
  T113 = fun_185;
  accessorF22702 = T113;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents_setter),accessorF22702);
  (P)YPmet_name_setter(VARREF(Yclass_parents_setter),accessorF22702);
  T112 = accessorF22702;
  setterF22703 = T112;
  T116 = fun_186;
  T115 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_parents),VARREF(Yclass_parents_setter),VARREF(YLlstG),T116);
  propF22704 = T115;
  (P)YPmet_env_setter(propF22704,getterF22701);
  (P)YPmet_env_setter(propF22704,setterF22703);
  T117 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF22704);
  T114 = T117;
  T107 = T114;
  lit_41 = YPPsym((P)"class-direct-props");
  lit_42 = YPPsym((P)"class-direct-props-setter");
  T120 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_187 = YPmet(FUNCODEREF(fun_187),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_189 = YPmet(FUNCODEREF(fun_189),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T123 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T122 = (P)YPsig(Ynil,T123,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T121 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_41),T122,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_direct_props,T121);
  T125 = fun_187;
  accessorF22705 = T125;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props),accessorF22705);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props),accessorF22705);
  T124 = accessorF22705;
  getterF22706 = T124;
  T130 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T129 = (P)YPpair(VARREF(YLanyG),T130);
  T128 = (P)YPsig(Ynil,T129,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T127 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_42),T128,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_direct_props_setter,T127);
  T132 = fun_188;
  accessorF22707 = T132;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props_setter),accessorF22707);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props_setter),accessorF22707);
  T131 = accessorF22707;
  setterF22708 = T131;
  T135 = fun_189;
  T134 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_direct_props),VARREF(Yclass_direct_props_setter),VARREF(YLlstG),T135);
  propF22709 = T134;
  (P)YPmet_env_setter(propF22709,getterF22706);
  (P)YPmet_env_setter(propF22709,setterF22708);
  T136 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF22709);
  T133 = T136;
  T126 = T133;
  lit_43 = YPPsym((P)"class-ancestors");
  lit_44 = YPPsym((P)"class-ancestors-setter");
  T139 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_190 = YPmet(FUNCODEREF(fun_190),YPfalse,T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_192 = YPmet(FUNCODEREF(fun_192),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T142 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T141 = (P)YPsig(Ynil,T142,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T140 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_43),T141,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_ancestors,T140);
  T144 = fun_190;
  accessorF22710 = T144;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors),accessorF22710);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors),accessorF22710);
  T143 = accessorF22710;
  getterF22711 = T143;
  T149 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T148 = (P)YPpair(VARREF(YLanyG),T149);
  T147 = (P)YPsig(Ynil,T148,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T146 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_44),T147,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_ancestors_setter,T146);
  T151 = fun_191;
  accessorF22712 = T151;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors_setter),accessorF22712);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors_setter),accessorF22712);
  T150 = accessorF22712;
  setterF22713 = T150;
  T154 = fun_192;
  T153 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_ancestors),VARREF(Yclass_ancestors_setter),VARREF(YLlstG),T154);
  propF22714 = T153;
  (P)YPmet_env_setter(propF22714,getterF22711);
  (P)YPmet_env_setter(propF22714,setterF22713);
  T155 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF22714);
  T152 = T155;
  T145 = T152;
  lit_45 = YPPsym((P)"class-props");
  lit_46 = YPPsym((P)"class-props-setter");
  T158 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_194 = YPmet(FUNCODEREF(fun_194),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_195 = YPmet(FUNCODEREF(fun_195),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T161 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T160 = (P)YPsig(Ynil,T161,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T159 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_45),T160,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_props,T159);
  T163 = fun_193;
  accessorF22715 = T163;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_props),accessorF22715);
  (P)YPmet_name_setter(VARREF(Yclass_props),accessorF22715);
  T162 = accessorF22715;
  getterF22716 = T162;
  T168 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T167 = (P)YPpair(VARREF(YLanyG),T168);
  T166 = (P)YPsig(Ynil,T167,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T165 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_46),T166,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_props_setter,T165);
  T170 = fun_194;
  accessorF22717 = T170;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_props_setter),accessorF22717);
  (P)YPmet_name_setter(VARREF(Yclass_props_setter),accessorF22717);
  T169 = accessorF22717;
  setterF22718 = T169;
  T173 = fun_195;
  T172 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_props),VARREF(Yclass_props_setter),VARREF(YLlstG),T173);
  propF22719 = T172;
  (P)YPmet_env_setter(propF22719,getterF22716);
  (P)YPmet_env_setter(propF22719,setterF22718);
  T174 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF22719);
  T171 = T174;
  T164 = T171;
  lit_47 = YPPsym((P)"class-descendents");
  lit_48 = YPPsym((P)"class-descendents-setter");
  T177 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_196 = YPmet(FUNCODEREF(fun_196),YPfalse,T177,ENVNUL,PNUL,YPfalse);
  T176 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_198 = YPmet(FUNCODEREF(fun_198),YPfalse,T175,ENVNUL,PNUL,YPfalse);
  T180 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T179 = (P)YPsig(Ynil,T180,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T178 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_47),T179,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_descendents,T178);
  T182 = fun_196;
  accessorF22720 = T182;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_descendents),accessorF22720);
  (P)YPmet_name_setter(VARREF(Yclass_descendents),accessorF22720);
  T181 = accessorF22720;
  getterF22721 = T181;
  T187 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T186 = (P)YPpair(VARREF(YLanyG),T187);
  T185 = (P)YPsig(Ynil,T186,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T184 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_48),T185,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_descendents_setter,T184);
  T189 = fun_197;
  accessorF22722 = T189;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_descendents_setter),accessorF22722);
  (P)YPmet_name_setter(VARREF(Yclass_descendents_setter),accessorF22722);
  T188 = accessorF22722;
  setterF22723 = T188;
  T192 = fun_198;
  T191 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_descendents),VARREF(Yclass_descendents_setter),VARREF(YLlstG),T192);
  propF22724 = T191;
  (P)YPmet_env_setter(propF22724,getterF22721);
  (P)YPmet_env_setter(propF22724,setterF22723);
  T193 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF22724);
  T190 = T193;
  T183 = T190;
  lit_49 = YPPsym((P)"class-gens");
  lit_50 = YPPsym((P)"class-gens-setter");
  T196 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_199 = YPmet(FUNCODEREF(fun_199),YPfalse,T196,ENVNUL,PNUL,YPfalse);
  T195 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_200 = YPmet(FUNCODEREF(fun_200),YPfalse,T195,ENVNUL,PNUL,YPfalse);
  T194 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_201 = YPmet(FUNCODEREF(fun_201),YPfalse,T194,ENVNUL,PNUL,YPfalse);
  T199 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T198 = (P)YPsig(Ynil,T199,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T197 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_49),T198,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_gens,T197);
  T201 = fun_199;
  accessorF22725 = T201;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens),accessorF22725);
  (P)YPmet_name_setter(VARREF(Yclass_gens),accessorF22725);
  T200 = accessorF22725;
  getterF22726 = T200;
  T206 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T205 = (P)YPpair(VARREF(YLanyG),T206);
  T204 = (P)YPsig(Ynil,T205,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T203 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_50),T204,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_gens_setter,T203);
  T208 = fun_200;
  accessorF22727 = T208;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens_setter),accessorF22727);
  (P)YPmet_name_setter(VARREF(Yclass_gens_setter),accessorF22727);
  T207 = accessorF22727;
  setterF22728 = T207;
  T211 = fun_201;
  T210 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_gens),VARREF(Yclass_gens_setter),VARREF(YLlstG),T211);
  propF22729 = T210;
  (P)YPmet_env_setter(propF22729,getterF22726);
  (P)YPmet_env_setter(propF22729,setterF22728);
  T212 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF22729);
  T209 = T212;
  T202 = T209;
  lit_51 = YPPsym((P)"class-mets");
  lit_52 = YPPsym((P)"class-mets-setter");
  T215 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T215,ENVNUL,PNUL,YPfalse);
  T214 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_203 = YPmet(FUNCODEREF(fun_203),YPfalse,T214,ENVNUL,PNUL,YPfalse);
  T213 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_204 = YPmet(FUNCODEREF(fun_204),YPfalse,T213,ENVNUL,PNUL,YPfalse);
  T218 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T217 = (P)YPsig(Ynil,T218,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T216 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_51),T217,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_mets,T216);
  T220 = fun_202;
  accessorF22730 = T220;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets),accessorF22730);
  (P)YPmet_name_setter(VARREF(Yclass_mets),accessorF22730);
  T219 = accessorF22730;
  getterF22731 = T219;
  T225 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T224 = (P)YPpair(VARREF(YLanyG),T225);
  T223 = (P)YPsig(Ynil,T224,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T222 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_52),T223,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_mets_setter,T222);
  T227 = fun_203;
  accessorF22732 = T227;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets_setter),accessorF22732);
  (P)YPmet_name_setter(VARREF(Yclass_mets_setter),accessorF22732);
  T226 = accessorF22732;
  setterF22733 = T226;
  T230 = fun_204;
  T229 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_mets),VARREF(Yclass_mets_setter),VARREF(YLlstG),T230);
  propF22734 = T229;
  (P)YPmet_env_setter(propF22734,getterF22731);
  (P)YPmet_env_setter(propF22734,setterF22733);
  T231 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF22734);
  T228 = T231;
  T221 = T228;
  lit_53 = YPPsym((P)"class-forward");
  lit_54 = YPPsym((P)"class-forward-setter");
  T234 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_205 = YPmet(FUNCODEREF(fun_205),YPfalse,T234,ENVNUL,PNUL,YPfalse);
  T233 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T233,ENVNUL,PNUL,YPfalse);
  T232 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_207 = YPmet(FUNCODEREF(fun_207),YPfalse,T232,ENVNUL,PNUL,YPfalse);
  T237 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T236 = (P)YPsig(Ynil,T237,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T235 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_53),T236,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_forward,T235);
  T239 = fun_205;
  accessorF22735 = T239;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward),accessorF22735);
  (P)YPmet_name_setter(VARREF(Yclass_forward),accessorF22735);
  T238 = accessorF22735;
  getterF22736 = T238;
  T244 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T243 = (P)YPpair(VARREF(YLanyG),T244);
  T242 = (P)YPsig(Ynil,T243,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T241 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_54),T242,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_forward_setter,T241);
  T246 = fun_206;
  accessorF22737 = T246;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward_setter),accessorF22737);
  (P)YPmet_name_setter(VARREF(Yclass_forward_setter),accessorF22737);
  T245 = accessorF22737;
  setterF22738 = T245;
  T249 = fun_207;
  T248 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_forward),VARREF(Yclass_forward_setter),VARREF(YLanyG),T249);
  propF22739 = T248;
  (P)YPmet_env_setter(propF22739,getterF22736);
  (P)YPmet_env_setter(propF22739,setterF22738);
  T250 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF22739);
  T247 = T250;
  T240 = T247;
  lit_55 = YPPsym((P)"class-type-cache");
  lit_56 = YPPsym((P)"class-type-cache-setter");
  T253 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_208 = YPmet(FUNCODEREF(fun_208),YPfalse,T253,ENVNUL,PNUL,YPfalse);
  T252 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T252,ENVNUL,PNUL,YPfalse);
  T251 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T251,ENVNUL,PNUL,YPfalse);
  T256 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T255 = (P)YPsig(Ynil,T256,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T254 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_55),T255,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_type_cache,T254);
  T258 = fun_208;
  accessorF22740 = T258;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_type_cache),accessorF22740);
  (P)YPmet_name_setter(VARREF(Yclass_type_cache),accessorF22740);
  T257 = accessorF22740;
  getterF22741 = T257;
  T263 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T262 = (P)YPpair(VARREF(YLanyG),T263);
  T261 = (P)YPsig(Ynil,T262,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T260 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_56),T261,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_type_cache_setter,T260);
  T265 = fun_209;
  accessorF22742 = T265;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_type_cache_setter),accessorF22742);
  (P)YPmet_name_setter(VARREF(Yclass_type_cache_setter),accessorF22742);
  T264 = accessorF22742;
  setterF22743 = T264;
  T268 = fun_210;
  T267 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_type_cache),VARREF(Yclass_type_cache_setter),VARREF(YLanyG),T268);
  propF22744 = T267;
  (P)YPmet_env_setter(propF22744,getterF22741);
  (P)YPmet_env_setter(propF22744,setterF22743);
  T269 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF22744);
  T266 = T269;
  T259 = T266;
  lit_57 = YPPsym((P)"class-id");
  lit_58 = YPPsym((P)"class-id-setter");
  T272 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_211 = YPmet(FUNCODEREF(fun_211),YPfalse,T272,ENVNUL,PNUL,YPfalse);
  T271 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_212 = YPmet(FUNCODEREF(fun_212),YPfalse,T271,ENVNUL,PNUL,YPfalse);
  T270 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_213 = YPmet(FUNCODEREF(fun_213),YPfalse,T270,ENVNUL,PNUL,YPfalse);
  T275 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T274 = (P)YPsig(Ynil,T275,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T273 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_57),T274,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_id,T273);
  T277 = fun_211;
  accessorF22745 = T277;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_id),accessorF22745);
  (P)YPmet_name_setter(VARREF(Yclass_id),accessorF22745);
  T276 = accessorF22745;
  getterF22746 = T276;
  T282 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T281 = (P)YPpair(VARREF(YLanyG),T282);
  T280 = (P)YPsig(Ynil,T281,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T279 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_58),T280,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_id_setter,T279);
  T284 = fun_212;
  accessorF22747 = T284;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_id_setter),accessorF22747);
  (P)YPmet_name_setter(VARREF(Yclass_id_setter),accessorF22747);
  T283 = accessorF22747;
  setterF22748 = T283;
  T287 = fun_213;
  T286 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_id),VARREF(Yclass_id_setter),VARREF(YLintG),T287);
  propF22749 = T286;
  (P)YPmet_env_setter(propF22749,getterF22746);
  (P)YPmet_env_setter(propF22749,setterF22748);
  T288 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF22749);
  T285 = T288;
  T278 = T285;
  lit_59 = YPPsym((P)"class-row");
  lit_60 = YPPsym((P)"class-row-setter");
  T291 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_214 = YPmet(FUNCODEREF(fun_214),YPfalse,T291,ENVNUL,PNUL,YPfalse);
  T290 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLtupG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T290,ENVNUL,PNUL,YPfalse);
  T289 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T289,ENVNUL,PNUL,YPfalse);
  T294 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T293 = (P)YPsig(Ynil,T294,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T292 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_59),T293,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_row,T292);
  T296 = fun_214;
  accessorF22750 = T296;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_row),accessorF22750);
  (P)YPmet_name_setter(VARREF(Yclass_row),accessorF22750);
  T295 = accessorF22750;
  getterF22751 = T295;
  T301 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T300 = (P)YPpair(VARREF(YLanyG),T301);
  T299 = (P)YPsig(Ynil,T300,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T298 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_60),T299,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_row_setter,T298);
  T303 = fun_215;
  accessorF22752 = T303;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_row_setter),accessorF22752);
  (P)YPmet_name_setter(VARREF(Yclass_row_setter),accessorF22752);
  T302 = accessorF22752;
  setterF22753 = T302;
  T306 = fun_216;
  T305 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_row),VARREF(Yclass_row_setter),VARREF(YLtupG),T306);
  propF22754 = T305;
  (P)YPmet_env_setter(propF22754,getterF22751);
  (P)YPmet_env_setter(propF22754,setterF22753);
  T307 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF22754);
  T304 = T307;
  T297 = T304;
  lit_61 = YPPsym((P)"type-object");
  lit_62 = YPPsym((P)"type-object-setter");
  T310 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsingletonG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_217 = YPmet(FUNCODEREF(fun_217),YPfalse,T310,ENVNUL,PNUL,YPfalse);
  T309 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_218 = YPmet(FUNCODEREF(fun_218),YPfalse,T309,ENVNUL,PNUL,YPfalse);
  T308 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T308,ENVNUL,PNUL,YPfalse);
  T313 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T312 = (P)YPsig(Ynil,T313,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T311 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_61),T312,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_object,T311);
  T315 = fun_217;
  accessorF22755 = T315;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_object),accessorF22755);
  (P)YPmet_name_setter(VARREF(Ytype_object),accessorF22755);
  T314 = accessorF22755;
  getterF22756 = T314;
  T320 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T319 = (P)YPpair(VARREF(YLanyG),T320);
  T318 = (P)YPsig(Ynil,T319,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T317 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_62),T318,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_object_setter,T317);
  T322 = fun_218;
  accessorF22757 = T322;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_object_setter),accessorF22757);
  (P)YPmet_name_setter(VARREF(Ytype_object_setter),accessorF22757);
  T321 = accessorF22757;
  setterF22758 = T321;
  T325 = fun_219;
  T324 = (P)YPPprop(VARREF(YLsingletonG),VARREF(Ytype_object),VARREF(Ytype_object_setter),VARREF(YLanyG),T325);
  propF22759 = T324;
  (P)YPmet_env_setter(propF22759,getterF22756);
  (P)YPmet_env_setter(propF22759,setterF22758);
  T326 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsingletonG),propF22759);
  T323 = T326;
  T316 = T323;
  lit_63 = YPPsym((P)"type-class");
  lit_64 = YPPsym((P)"type-class-setter");
  T329 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsubclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T329,ENVNUL,PNUL,YPfalse);
  T328 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T328,ENVNUL,PNUL,YPfalse);
  T327 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T327,ENVNUL,PNUL,YPfalse);
  T332 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T331 = (P)YPsig(Ynil,T332,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T330 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_63),T331,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_class,T330);
  T334 = fun_220;
  accessorF22760 = T334;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_class),accessorF22760);
  (P)YPmet_name_setter(VARREF(Ytype_class),accessorF22760);
  T333 = accessorF22760;
  getterF22761 = T333;
  T339 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T338 = (P)YPpair(VARREF(YLanyG),T339);
  T337 = (P)YPsig(Ynil,T338,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T336 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_64),T337,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_class_setter,T336);
  T341 = fun_221;
  accessorF22762 = T341;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_class_setter),accessorF22762);
  (P)YPmet_name_setter(VARREF(Ytype_class_setter),accessorF22762);
  T340 = accessorF22762;
  setterF22763 = T340;
  T344 = fun_222;
  T343 = (P)YPPprop(VARREF(YLsubclassG),VARREF(Ytype_class),VARREF(Ytype_class_setter),VARREF(YLclassG),T344);
  propF22764 = T343;
  (P)YPmet_env_setter(propF22764,getterF22761);
  (P)YPmet_env_setter(propF22764,setterF22763);
  T345 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsubclassG),propF22764);
  T342 = T345;
  T335 = T342;
  lit_65 = YPPsym((P)"type-elts");
  lit_66 = YPPsym((P)"type-elts-setter");
  T348 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLunionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_223 = YPmet(FUNCODEREF(fun_223),YPfalse,T348,ENVNUL,PNUL,YPfalse);
  T347 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_224 = YPmet(FUNCODEREF(fun_224),YPfalse,T347,ENVNUL,PNUL,YPfalse);
  T346 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T346,ENVNUL,PNUL,YPfalse);
  T351 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T350 = (P)YPsig(Ynil,T351,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T349 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_65),T350,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_elts,T349);
  T353 = fun_223;
  accessorF22765 = T353;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_elts),accessorF22765);
  (P)YPmet_name_setter(VARREF(Ytype_elts),accessorF22765);
  T352 = accessorF22765;
  getterF22766 = T352;
  T358 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T357 = (P)YPpair(VARREF(YLanyG),T358);
  T356 = (P)YPsig(Ynil,T357,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T355 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_66),T356,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_elts_setter,T355);
  T360 = fun_224;
  accessorF22767 = T360;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_elts_setter),accessorF22767);
  (P)YPmet_name_setter(VARREF(Ytype_elts_setter),accessorF22767);
  T359 = accessorF22767;
  setterF22768 = T359;
  T363 = fun_225;
  T362 = (P)YPPprop(VARREF(YLunionG),VARREF(Ytype_elts),VARREF(Ytype_elts_setter),VARREF(YLlstG),T363);
  propF22769 = T362;
  (P)YPmet_env_setter(propF22769,getterF22766);
  (P)YPmet_env_setter(propF22769,setterF22768);
  T364 = CALL2(1,VARREF(YPadd_prop),VARREF(YLunionG),propF22769);
  T361 = T364;
  T354 = T361;
  lit_67 = YPPsym((P)"prop-owner");
  lit_68 = YPPsym((P)"prop-owner-setter");
  T367 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_226 = YPmet(FUNCODEREF(fun_226),YPfalse,T367,ENVNUL,PNUL,YPfalse);
  T366 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_227 = YPmet(FUNCODEREF(fun_227),YPfalse,T366,ENVNUL,PNUL,YPfalse);
  T365 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_228 = YPmet(FUNCODEREF(fun_228),YPfalse,T365,ENVNUL,PNUL,YPfalse);
  T370 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T369 = (P)YPsig(Ynil,T370,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T368 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_67),T369,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_owner,T368);
  T372 = fun_226;
  accessorF22770 = T372;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner),accessorF22770);
  (P)YPmet_name_setter(VARREF(Yprop_owner),accessorF22770);
  T371 = accessorF22770;
  getterF22771 = T371;
  T377 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T376 = (P)YPpair(VARREF(YLanyG),T377);
  T375 = (P)YPsig(Ynil,T376,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T374 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_68),T375,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_owner_setter,T374);
  T379 = fun_227;
  accessorF22772 = T379;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner_setter),accessorF22772);
  (P)YPmet_name_setter(VARREF(Yprop_owner_setter),accessorF22772);
  T378 = accessorF22772;
  setterF22773 = T378;
  T382 = fun_228;
  T381 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_owner),VARREF(Yprop_owner_setter),VARREF(YLanyG),T382);
  propF22774 = T381;
  (P)YPmet_env_setter(propF22774,getterF22771);
  (P)YPmet_env_setter(propF22774,setterF22773);
  T383 = CALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF22774);
  T380 = T383;
  T373 = T380;
  lit_69 = YPPsym((P)"prop-getter");
  lit_70 = YPPsym((P)"prop-getter-setter");
  T386 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_229 = YPmet(FUNCODEREF(fun_229),YPfalse,T386,ENVNUL,PNUL,YPfalse);
  T385 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_230 = YPmet(FUNCODEREF(fun_230),YPfalse,T385,ENVNUL,PNUL,YPfalse);
  T384 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_231 = YPmet(FUNCODEREF(fun_231),YPfalse,T384,ENVNUL,PNUL,YPfalse);
  T389 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T388 = (P)YPsig(Ynil,T389,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T387 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_69),T388,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_getter,T387);
  T391 = fun_229;
  accessorF22775 = T391;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter),accessorF22775);
  (P)YPmet_name_setter(VARREF(Yprop_getter),accessorF22775);
  T390 = accessorF22775;
  getterF22776 = T390;
  T396 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T395 = (P)YPpair(VARREF(YLanyG),T396);
  T394 = (P)YPsig(Ynil,T395,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T393 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_70),T394,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_getter_setter,T393);
  T398 = fun_230;
  accessorF22777 = T398;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter_setter),accessorF22777);
  (P)YPmet_name_setter(VARREF(Yprop_getter_setter),accessorF22777);
  T397 = accessorF22777;
  setterF22778 = T397;
  T401 = fun_231;
  T400 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_getter),VARREF(Yprop_getter_setter),VARREF(YLfunG),T401);
  propF22779 = T400;
  (P)YPmet_env_setter(propF22779,getterF22776);
  (P)YPmet_env_setter(propF22779,setterF22778);
  T402 = CALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF22779);
  T399 = T402;
  T392 = T399;
  lit_71 = YPPsym((P)"prop-setter");
  lit_72 = YPPsym((P)"prop-setter-setter");
  T405 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T405,ENVNUL,PNUL,YPfalse);
  T404 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_233 = YPmet(FUNCODEREF(fun_233),YPfalse,T404,ENVNUL,PNUL,YPfalse);
  T403 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_234 = YPmet(FUNCODEREF(fun_234),YPfalse,T403,ENVNUL,PNUL,YPfalse);
  T408 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T407 = (P)YPsig(Ynil,T408,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T406 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_71),T407,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_setter,T406);
  T410 = fun_232;
  accessorF22780 = T410;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter),accessorF22780);
  (P)YPmet_name_setter(VARREF(Yprop_setter),accessorF22780);
  T409 = accessorF22780;
  getterF22781 = T409;
  T415 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T414 = (P)YPpair(VARREF(YLanyG),T415);
  T413 = (P)YPsig(Ynil,T414,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T412 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_72),T413,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_setter_setter,T412);
  T417 = fun_233;
  accessorF22782 = T417;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter_setter),accessorF22782);
  (P)YPmet_name_setter(VARREF(Yprop_setter_setter),accessorF22782);
  T416 = accessorF22782;
  setterF22783 = T416;
  T420 = fun_234;
  T419 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_setter),VARREF(Yprop_setter_setter),VARREF(YLfunG),T420);
  propF22784 = T419;
  (P)YPmet_env_setter(propF22784,getterF22781);
  (P)YPmet_env_setter(propF22784,setterF22783);
  T421 = CALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF22784);
  T418 = T421;
  T411 = T418;
  lit_73 = YPPsym((P)"prop-type");
  lit_74 = YPPsym((P)"prop-type-setter");
  T424 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_235 = YPmet(FUNCODEREF(fun_235),YPfalse,T424,ENVNUL,PNUL,YPfalse);
  T423 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLtypeG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T423,ENVNUL,PNUL,YPfalse);
  T422 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_237 = YPmet(FUNCODEREF(fun_237),YPfalse,T422,ENVNUL,PNUL,YPfalse);
  T427 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T426 = (P)YPsig(Ynil,T427,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T425 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_73),T426,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_type,T425);
  T429 = fun_235;
  accessorF22785 = T429;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_type),accessorF22785);
  (P)YPmet_name_setter(VARREF(Yprop_type),accessorF22785);
  T428 = accessorF22785;
  getterF22786 = T428;
  T434 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T433 = (P)YPpair(VARREF(YLanyG),T434);
  T432 = (P)YPsig(Ynil,T433,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T431 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_74),T432,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_type_setter,T431);
  T436 = fun_236;
  accessorF22787 = T436;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_type_setter),accessorF22787);
  (P)YPmet_name_setter(VARREF(Yprop_type_setter),accessorF22787);
  T435 = accessorF22787;
  setterF22788 = T435;
  T439 = fun_237;
  T438 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_type),VARREF(Yprop_type_setter),VARREF(YLtypeG),T439);
  propF22789 = T438;
  (P)YPmet_env_setter(propF22789,getterF22786);
  (P)YPmet_env_setter(propF22789,setterF22788);
  T440 = CALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF22789);
  T437 = T440;
  T430 = T437;
  lit_75 = YPPsym((P)"prop-init");
  lit_76 = YPPsym((P)"prop-init-setter");
  T444 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_238 = YPmet(FUNCODEREF(fun_238),YPfalse,T444,ENVNUL,PNUL,YPfalse);
  T443 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_239 = YPmet(FUNCODEREF(fun_239),YPfalse,T443,ENVNUL,PNUL,YPfalse);
  T442 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_240 = YPmet(FUNCODEREF(fun_240),YPfalse,T442,ENVNUL,PNUL,YPfalse);
  T441 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_241 = YPmet(FUNCODEREF(fun_241),YPfalse,T441,ENVNUL,PNUL,YPfalse);
  T447 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T446 = (P)YPsig(Ynil,T447,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T445 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_75),T446,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_init,T445);
  T449 = fun_238;
  accessorF22790 = T449;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_init),accessorF22790);
  (P)YPmet_name_setter(VARREF(Yprop_init),accessorF22790);
  T448 = accessorF22790;
  getterF22791 = T448;
  T454 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T453 = (P)YPpair(VARREF(YLanyG),T454);
  T452 = (P)YPsig(Ynil,T453,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T451 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_76),T452,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_init_setter,T451);
  T456 = fun_239;
  accessorF22792 = T456;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_init_setter),accessorF22792);
  (P)YPmet_name_setter(VARREF(Yprop_init_setter),accessorF22792);
  T455 = accessorF22792;
  setterF22793 = T455;
  T459 = fun_241;
  T458 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_init),VARREF(Yprop_init_setter),VARREF(YLfunG),T459);
  propF22794 = T458;
  (P)YPmet_env_setter(propF22794,getterF22791);
  (P)YPmet_env_setter(propF22794,setterF22793);
  T460 = CALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF22794);
  T457 = T460;
  T450 = T457;
  lit_77 = YPPsym((P)"gen-cache-missable?");
  lit_78 = YPPsym((P)"gen-cache-missable?-setter");
  T463 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_242 = YPmet(FUNCODEREF(fun_242),YPfalse,T463,ENVNUL,PNUL,YPfalse);
  T462 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlogG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_243 = YPmet(FUNCODEREF(fun_243),YPfalse,T462,ENVNUL,PNUL,YPfalse);
  T461 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_244 = YPmet(FUNCODEREF(fun_244),YPfalse,T461,ENVNUL,PNUL,YPfalse);
  T466 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T465 = (P)YPsig(Ynil,T466,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T464 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_77),T465,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_missableQ,T464);
  T468 = fun_242;
  accessorF22795 = T468;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ),accessorF22795);
  (P)YPmet_name_setter(VARREF(Ygen_cache_missableQ),accessorF22795);
  T467 = accessorF22795;
  getterF22796 = T467;
  T473 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T472 = (P)YPpair(VARREF(YLanyG),T473);
  T471 = (P)YPsig(Ynil,T472,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T470 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_78),T471,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_missableQ_setter,T470);
  T475 = fun_243;
  accessorF22797 = T475;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ_setter),accessorF22797);
  (P)YPmet_name_setter(VARREF(Ygen_cache_missableQ_setter),accessorF22797);
  T474 = accessorF22797;
  setterF22798 = T474;
  T478 = fun_244;
  T477 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ),VARREF(Ygen_cache_missableQ_setter),VARREF(YLlogG),T478);
  propF22799 = T477;
  (P)YPmet_env_setter(propF22799,getterF22796);
  (P)YPmet_env_setter(propF22799,setterF22798);
  T479 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF22799);
  T476 = T479;
  T469 = T476;
  lit_79 = YPPsym((P)"gen-cache-arg-pos");
  lit_80 = YPPsym((P)"gen-cache-arg-pos-setter");
  T482 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_245 = YPmet(FUNCODEREF(fun_245),YPfalse,T482,ENVNUL,PNUL,YPfalse);
  T481 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_246 = YPmet(FUNCODEREF(fun_246),YPfalse,T481,ENVNUL,PNUL,YPfalse);
  T480 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_247 = YPmet(FUNCODEREF(fun_247),YPfalse,T480,ENVNUL,PNUL,YPfalse);
  T485 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T484 = (P)YPsig(Ynil,T485,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T483 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_79),T484,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_arg_pos,T483);
  T487 = fun_245;
  accessorF22800 = T487;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos),accessorF22800);
  (P)YPmet_name_setter(VARREF(Ygen_cache_arg_pos),accessorF22800);
  T486 = accessorF22800;
  getterF22801 = T486;
  T492 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T491 = (P)YPpair(VARREF(YLanyG),T492);
  T490 = (P)YPsig(Ynil,T491,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T489 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_80),T490,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_arg_pos_setter,T489);
  T494 = fun_246;
  accessorF22802 = T494;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos_setter),accessorF22802);
  (P)YPmet_name_setter(VARREF(Ygen_cache_arg_pos_setter),accessorF22802);
  T493 = accessorF22802;
  setterF22803 = T493;
  T497 = fun_247;
  T496 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos),VARREF(Ygen_cache_arg_pos_setter),VARREF(YLintG),T497);
  propF22804 = T496;
  (P)YPmet_env_setter(propF22804,getterF22801);
  (P)YPmet_env_setter(propF22804,setterF22803);
  T498 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF22804);
  T495 = T498;
  T488 = T495;
  lit_81 = YPPsym((P)"gen-cache-singletons");
  lit_82 = YPPsym((P)"gen-cache-singletons-setter");
  T501 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_248 = YPmet(FUNCODEREF(fun_248),YPfalse,T501,ENVNUL,PNUL,YPfalse);
  T500 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_249 = YPmet(FUNCODEREF(fun_249),YPfalse,T500,ENVNUL,PNUL,YPfalse);
  T499 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_250 = YPmet(FUNCODEREF(fun_250),YPfalse,T499,ENVNUL,PNUL,YPfalse);
  T504 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T503 = (P)YPsig(Ynil,T504,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T502 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_81),T503,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_singletons,T502);
  T506 = fun_248;
  accessorF22805 = T506;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons),accessorF22805);
  (P)YPmet_name_setter(VARREF(Ygen_cache_singletons),accessorF22805);
  T505 = accessorF22805;
  getterF22806 = T505;
  T511 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T510 = (P)YPpair(VARREF(YLanyG),T511);
  T509 = (P)YPsig(Ynil,T510,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T508 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_82),T509,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_singletons_setter,T508);
  T513 = fun_249;
  accessorF22807 = T513;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons_setter),accessorF22807);
  (P)YPmet_name_setter(VARREF(Ygen_cache_singletons_setter),accessorF22807);
  T512 = accessorF22807;
  setterF22808 = T512;
  T516 = fun_250;
  T515 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons),VARREF(Ygen_cache_singletons_setter),VARREF(YLlstG),T516);
  propF22809 = T515;
  (P)YPmet_env_setter(propF22809,getterF22806);
  (P)YPmet_env_setter(propF22809,setterF22808);
  T517 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF22809);
  T514 = T517;
  T507 = T514;
  lit_83 = YPPsym((P)"gen-cache-classes");
  lit_84 = YPPsym((P)"gen-cache-classes-setter");
  T520 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_251 = YPmet(FUNCODEREF(fun_251),YPfalse,T520,ENVNUL,PNUL,YPfalse);
  T519 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_252 = YPmet(FUNCODEREF(fun_252),YPfalse,T519,ENVNUL,PNUL,YPfalse);
  T518 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_253 = YPmet(FUNCODEREF(fun_253),YPfalse,T518,ENVNUL,PNUL,YPfalse);
  T523 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T522 = (P)YPsig(Ynil,T523,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T521 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_83),T522,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_classes,T521);
  T525 = fun_251;
  accessorF22810 = T525;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes),accessorF22810);
  (P)YPmet_name_setter(VARREF(Ygen_cache_classes),accessorF22810);
  T524 = accessorF22810;
  getterF22811 = T524;
  T530 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T529 = (P)YPpair(VARREF(YLanyG),T530);
  T528 = (P)YPsig(Ynil,T529,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T527 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_84),T528,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_classes_setter,T527);
  T532 = fun_252;
  accessorF22812 = T532;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes_setter),accessorF22812);
  (P)YPmet_name_setter(VARREF(Ygen_cache_classes_setter),accessorF22812);
  T531 = accessorF22812;
  setterF22813 = T531;
  T535 = fun_253;
  T534 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes),VARREF(Ygen_cache_classes_setter),VARREF(YLlstG),T535);
  propF22814 = T534;
  (P)YPmet_env_setter(propF22814,getterF22811);
  (P)YPmet_env_setter(propF22814,setterF22813);
  T536 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF22814);
  T533 = T536;
  T526 = T533;
  lit_85 = YPPsym((P)"sig-names");
  lit_86 = YPPsym((P)"sig-names-setter");
  T539 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_254 = YPmet(FUNCODEREF(fun_254),YPfalse,T539,ENVNUL,PNUL,YPfalse);
  T538 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_255 = YPmet(FUNCODEREF(fun_255),YPfalse,T538,ENVNUL,PNUL,YPfalse);
  T537 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_256 = YPmet(FUNCODEREF(fun_256),YPfalse,T537,ENVNUL,PNUL,YPfalse);
  T542 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T541 = (P)YPsig(Ynil,T542,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T540 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_85),T541,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names,T540);
  T544 = fun_254;
  accessorF22815 = T544;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_names),accessorF22815);
  (P)YPmet_name_setter(VARREF(Ysig_names),accessorF22815);
  T543 = accessorF22815;
  getterF22816 = T543;
  T549 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T548 = (P)YPpair(VARREF(YLanyG),T549);
  T547 = (P)YPsig(Ynil,T548,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T546 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_86),T547,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names_setter,T546);
  T551 = fun_255;
  accessorF22817 = T551;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_names_setter),accessorF22817);
  (P)YPmet_name_setter(VARREF(Ysig_names_setter),accessorF22817);
  T550 = accessorF22817;
  setterF22818 = T550;
  T554 = fun_256;
  T553 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_names),VARREF(Ysig_names_setter),VARREF(YLlstG),T554);
  propF22819 = T553;
  (P)YPmet_env_setter(propF22819,getterF22816);
  (P)YPmet_env_setter(propF22819,setterF22818);
  T555 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF22819);
  T552 = T555;
  T545 = T552;
  lit_87 = YPPsym((P)"sig-specs");
  lit_88 = YPPsym((P)"sig-specs-setter");
  T558 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_257 = YPmet(FUNCODEREF(fun_257),YPfalse,T558,ENVNUL,PNUL,YPfalse);
  T557 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_258 = YPmet(FUNCODEREF(fun_258),YPfalse,T557,ENVNUL,PNUL,YPfalse);
  T556 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_259 = YPmet(FUNCODEREF(fun_259),YPfalse,T556,ENVNUL,PNUL,YPfalse);
  T561 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T560 = (P)YPsig(Ynil,T561,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T559 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_87),T560,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs,T559);
  T563 = fun_257;
  accessorF22820 = T563;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs),accessorF22820);
  (P)YPmet_name_setter(VARREF(Ysig_specs),accessorF22820);
  T562 = accessorF22820;
  getterF22821 = T562;
  T568 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T567 = (P)YPpair(VARREF(YLanyG),T568);
  T566 = (P)YPsig(Ynil,T567,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T565 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_88),T566,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs_setter,T565);
  T570 = fun_258;
  accessorF22822 = T570;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs_setter),accessorF22822);
  (P)YPmet_name_setter(VARREF(Ysig_specs_setter),accessorF22822);
  T569 = accessorF22822;
  setterF22823 = T569;
  T573 = fun_259;
  T572 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_specs),VARREF(Ysig_specs_setter),VARREF(YLlstG),T573);
  propF22824 = T572;
  (P)YPmet_env_setter(propF22824,getterF22821);
  (P)YPmet_env_setter(propF22824,setterF22823);
  T574 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF22824);
  T571 = T574;
  T564 = T571;
  lit_89 = YPPsym((P)"sig-nary?");
  lit_90 = YPPsym((P)"sig-nary?-setter");
  T577 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_260 = YPmet(FUNCODEREF(fun_260),YPfalse,T577,ENVNUL,PNUL,YPfalse);
  T576 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlogG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_261 = YPmet(FUNCODEREF(fun_261),YPfalse,T576,ENVNUL,PNUL,YPfalse);
  T575 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_262 = YPmet(FUNCODEREF(fun_262),YPfalse,T575,ENVNUL,PNUL,YPfalse);
  T580 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T579 = (P)YPsig(Ynil,T580,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T578 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_89),T579,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ,T578);
  T582 = fun_260;
  accessorF22825 = T582;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ),accessorF22825);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ),accessorF22825);
  T581 = accessorF22825;
  getterF22826 = T581;
  T587 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T586 = (P)YPpair(VARREF(YLanyG),T587);
  T585 = (P)YPsig(Ynil,T586,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T584 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_90),T585,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ_setter,T584);
  T589 = fun_261;
  accessorF22827 = T589;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ_setter),accessorF22827);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ_setter),accessorF22827);
  T588 = accessorF22827;
  setterF22828 = T588;
  T592 = fun_262;
  T591 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_naryQ),VARREF(Ysig_naryQ_setter),VARREF(YLlogG),T592);
  propF22829 = T591;
  (P)YPmet_env_setter(propF22829,getterF22826);
  (P)YPmet_env_setter(propF22829,setterF22828);
  T593 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF22829);
  T590 = T593;
  T583 = T590;
  lit_91 = YPPsym((P)"sig-arity");
  lit_92 = YPPsym((P)"sig-arity-setter");
  T596 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_263 = YPmet(FUNCODEREF(fun_263),YPfalse,T596,ENVNUL,PNUL,YPfalse);
  T595 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_264 = YPmet(FUNCODEREF(fun_264),YPfalse,T595,ENVNUL,PNUL,YPfalse);
  T594 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_265 = YPmet(FUNCODEREF(fun_265),YPfalse,T594,ENVNUL,PNUL,YPfalse);
  T599 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T598 = (P)YPsig(Ynil,T599,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T597 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_91),T598,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity,T597);
  T601 = fun_263;
  accessorF22830 = T601;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity),accessorF22830);
  (P)YPmet_name_setter(VARREF(Ysig_arity),accessorF22830);
  T600 = accessorF22830;
  getterF22831 = T600;
  T606 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T605 = (P)YPpair(VARREF(YLanyG),T606);
  T604 = (P)YPsig(Ynil,T605,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T603 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_92),T604,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity_setter,T603);
  T608 = fun_264;
  accessorF22832 = T608;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity_setter),accessorF22832);
  (P)YPmet_name_setter(VARREF(Ysig_arity_setter),accessorF22832);
  T607 = accessorF22832;
  setterF22833 = T607;
  T611 = fun_265;
  T610 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_arity),VARREF(Ysig_arity_setter),VARREF(YLintG),T611);
  propF22834 = T610;
  (P)YPmet_env_setter(propF22834,getterF22831);
  (P)YPmet_env_setter(propF22834,setterF22833);
  T612 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF22834);
  T609 = T612;
  T602 = T609;
  lit_93 = YPPsym((P)"sig-val");
  lit_94 = YPPsym((P)"sig-val-setter");
  T615 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_266 = YPmet(FUNCODEREF(fun_266),YPfalse,T615,ENVNUL,PNUL,YPfalse);
  T614 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_267 = YPmet(FUNCODEREF(fun_267),YPfalse,T614,ENVNUL,PNUL,YPfalse);
  T613 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_268 = YPmet(FUNCODEREF(fun_268),YPfalse,T613,ENVNUL,PNUL,YPfalse);
  T618 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T617 = (P)YPsig(Ynil,T618,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T616 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_93),T617,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val,T616);
  T620 = fun_266;
  accessorF22835 = T620;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_val),accessorF22835);
  (P)YPmet_name_setter(VARREF(Ysig_val),accessorF22835);
  T619 = accessorF22835;
  getterF22836 = T619;
  T625 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T624 = (P)YPpair(VARREF(YLanyG),T625);
  T623 = (P)YPsig(Ynil,T624,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T622 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_94),T623,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val_setter,T622);
  T627 = fun_267;
  accessorF22837 = T627;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_val_setter),accessorF22837);
  (P)YPmet_name_setter(VARREF(Ysig_val_setter),accessorF22837);
  T626 = accessorF22837;
  setterF22838 = T626;
  T630 = fun_268;
  T629 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_val),VARREF(Ysig_val_setter),VARREF(YLanyG),T630);
  propF22839 = T629;
  (P)YPmet_env_setter(propF22839,getterF22836);
  (P)YPmet_env_setter(propF22839,setterF22838);
  T631 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF22839);
  T628 = T631;
  T621 = T628;
  lit_95 = YPPsym((P)"sig-unification-vars");
  lit_96 = YPPsym((P)"sig-unification-vars-setter");
  T634 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_269 = YPmet(FUNCODEREF(fun_269),YPfalse,T634,ENVNUL,PNUL,YPfalse);
  T633 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_270 = YPmet(FUNCODEREF(fun_270),YPfalse,T633,ENVNUL,PNUL,YPfalse);
  T632 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_271 = YPmet(FUNCODEREF(fun_271),YPfalse,T632,ENVNUL,PNUL,YPfalse);
  T637 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T636 = (P)YPsig(Ynil,T637,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T635 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_95),T636,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars,T635);
  T639 = fun_269;
  accessorF22840 = T639;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars),accessorF22840);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars),accessorF22840);
  T638 = accessorF22840;
  getterF22841 = T638;
  T644 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T643 = (P)YPpair(VARREF(YLanyG),T644);
  T642 = (P)YPsig(Ynil,T643,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T641 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_96),T642,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars_setter,T641);
  T646 = fun_270;
  accessorF22842 = T646;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars_setter),accessorF22842);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars_setter),accessorF22842);
  T645 = accessorF22842;
  setterF22843 = T645;
  T649 = fun_271;
  T648 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_unification_vars),VARREF(Ysig_unification_vars_setter),VARREF(YLlstG),T649);
  propF22844 = T648;
  (P)YPmet_env_setter(propF22844,getterF22841);
  (P)YPmet_env_setter(propF22844,setterF22843);
  T650 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF22844);
  T647 = T650;
  T640 = T647;
  lit_97 = YPPsym((P)"fun-code");
  lit_98 = YPPsym((P)"fun-code-setter");
  T653 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_272 = YPmet(FUNCODEREF(fun_272),YPfalse,T653,ENVNUL,PNUL,YPfalse);
  T652 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_273 = YPmet(FUNCODEREF(fun_273),YPfalse,T652,ENVNUL,PNUL,YPfalse);
  T651 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_274 = YPmet(FUNCODEREF(fun_274),YPfalse,T651,ENVNUL,PNUL,YPfalse);
  T656 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T655 = (P)YPsig(Ynil,T656,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T654 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_97),T655,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_code,T654);
  T658 = fun_272;
  accessorF22845 = T658;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_code),accessorF22845);
  (P)YPmet_name_setter(VARREF(Yfun_code),accessorF22845);
  T657 = accessorF22845;
  getterF22846 = T657;
  T663 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T662 = (P)YPpair(VARREF(YLanyG),T663);
  T661 = (P)YPsig(Ynil,T662,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T660 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_98),T661,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_code_setter,T660);
  T665 = fun_273;
  accessorF22847 = T665;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_code_setter),accessorF22847);
  (P)YPmet_name_setter(VARREF(Yfun_code_setter),accessorF22847);
  T664 = accessorF22847;
  setterF22848 = T664;
  T668 = fun_274;
  T667 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_code),VARREF(Yfun_code_setter),VARREF(YLanyG),T668);
  propF22849 = T667;
  (P)YPmet_env_setter(propF22849,getterF22846);
  (P)YPmet_env_setter(propF22849,setterF22848);
  T669 = CALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF22849);
  T666 = T669;
  T659 = T666;
  lit_99 = YPPsym((P)"fun-name");
  lit_100 = YPPsym((P)"fun-name-setter");
  T672 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_275 = YPmet(FUNCODEREF(fun_275),YPfalse,T672,ENVNUL,PNUL,YPfalse);
  T671 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_276 = YPmet(FUNCODEREF(fun_276),YPfalse,T671,ENVNUL,PNUL,YPfalse);
  T670 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_277 = YPmet(FUNCODEREF(fun_277),YPfalse,T670,ENVNUL,PNUL,YPfalse);
  T675 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T674 = (P)YPsig(Ynil,T675,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T673 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_99),T674,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name,T673);
  T677 = fun_275;
  accessorF22850 = T677;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_name),accessorF22850);
  (P)YPmet_name_setter(VARREF(Yfun_name),accessorF22850);
  T676 = accessorF22850;
  getterF22851 = T676;
  T682 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T681 = (P)YPpair(VARREF(YLanyG),T682);
  T680 = (P)YPsig(Ynil,T681,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T679 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_100),T680,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name_setter,T679);
  T684 = fun_276;
  accessorF22852 = T684;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_name_setter),accessorF22852);
  (P)YPmet_name_setter(VARREF(Yfun_name_setter),accessorF22852);
  T683 = accessorF22852;
  setterF22853 = T683;
  T687 = fun_277;
  T686 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_name),VARREF(Yfun_name_setter),VARREF(YLanyG),T687);
  propF22854 = T686;
  (P)YPmet_env_setter(propF22854,getterF22851);
  (P)YPmet_env_setter(propF22854,setterF22853);
  T688 = CALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF22854);
  T685 = T688;
  T678 = T685;
  lit_101 = YPPsym((P)"fun-sig");
  lit_102 = YPPsym((P)"fun-sig-setter");
  T691 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_278 = YPmet(FUNCODEREF(fun_278),YPfalse,T691,ENVNUL,PNUL,YPfalse);
  T690 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLsigG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_279 = YPmet(FUNCODEREF(fun_279),YPfalse,T690,ENVNUL,PNUL,YPfalse);
  T689 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_280 = YPmet(FUNCODEREF(fun_280),YPfalse,T689,ENVNUL,PNUL,YPfalse);
  T694 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T693 = (P)YPsig(Ynil,T694,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T692 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_101),T693,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig,T692);
  T696 = fun_278;
  accessorF22855 = T696;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig),accessorF22855);
  (P)YPmet_name_setter(VARREF(Yfun_sig),accessorF22855);
  T695 = accessorF22855;
  getterF22856 = T695;
  T701 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T700 = (P)YPpair(VARREF(YLanyG),T701);
  T699 = (P)YPsig(Ynil,T700,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T698 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_102),T699,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig_setter,T698);
  T703 = fun_279;
  accessorF22857 = T703;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig_setter),accessorF22857);
  (P)YPmet_name_setter(VARREF(Yfun_sig_setter),accessorF22857);
  T702 = accessorF22857;
  setterF22858 = T702;
  T706 = fun_280;
  T705 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_sig),VARREF(Yfun_sig_setter),VARREF(YLsigG),T706);
  propF22859 = T705;
  (P)YPmet_env_setter(propF22859,getterF22856);
  (P)YPmet_env_setter(propF22859,setterF22858);
  T707 = CALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF22859);
  T704 = T707;
  T697 = T704;
  lit_103 = YPPsym((P)"fun-env");
  lit_104 = YPPsym((P)"fun-env-setter");
  T710 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_281 = YPmet(FUNCODEREF(fun_281),YPfalse,T710,ENVNUL,PNUL,YPfalse);
  T709 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_282 = YPmet(FUNCODEREF(fun_282),YPfalse,T709,ENVNUL,PNUL,YPfalse);
  T708 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_283 = YPmet(FUNCODEREF(fun_283),YPfalse,T708,ENVNUL,PNUL,YPfalse);
  T713 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T712 = (P)YPsig(Ynil,T713,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T711 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_103),T712,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_env,T711);
  T715 = fun_281;
  accessorF22860 = T715;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_env),accessorF22860);
  (P)YPmet_name_setter(VARREF(Yfun_env),accessorF22860);
  T714 = accessorF22860;
  getterF22861 = T714;
  T720 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T719 = (P)YPpair(VARREF(YLanyG),T720);
  T718 = (P)YPsig(Ynil,T719,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T717 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_104),T718,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_env_setter,T717);
  T722 = fun_282;
  accessorF22862 = T722;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_env_setter),accessorF22862);
  (P)YPmet_name_setter(VARREF(Yfun_env_setter),accessorF22862);
  T721 = accessorF22862;
  setterF22863 = T721;
  T725 = fun_283;
  T724 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_env),VARREF(Yfun_env_setter),VARREF(YLanyG),T725);
  propF22864 = T724;
  (P)YPmet_env_setter(propF22864,getterF22861);
  (P)YPmet_env_setter(propF22864,setterF22863);
  T726 = CALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF22864);
  T723 = T726;
  T716 = T723;
  lit_105 = YPPsym((P)"fun-refs");
  lit_106 = YPPsym((P)"fun-refs-setter");
  T729 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_284 = YPmet(FUNCODEREF(fun_284),YPfalse,T729,ENVNUL,PNUL,YPfalse);
  T728 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_285 = YPmet(FUNCODEREF(fun_285),YPfalse,T728,ENVNUL,PNUL,YPfalse);
  T727 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_286 = YPmet(FUNCODEREF(fun_286),YPfalse,T727,ENVNUL,PNUL,YPfalse);
  T732 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T731 = (P)YPsig(Ynil,T732,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T730 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_105),T731,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_refs,T730);
  T734 = fun_284;
  accessorF22865 = T734;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_refs),accessorF22865);
  (P)YPmet_name_setter(VARREF(Yfun_refs),accessorF22865);
  T733 = accessorF22865;
  getterF22866 = T733;
  T739 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T738 = (P)YPpair(VARREF(YLanyG),T739);
  T737 = (P)YPsig(Ynil,T738,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T736 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_106),T737,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_refs_setter,T736);
  T741 = fun_285;
  accessorF22867 = T741;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_refs_setter),accessorF22867);
  (P)YPmet_name_setter(VARREF(Yfun_refs_setter),accessorF22867);
  T740 = accessorF22867;
  setterF22868 = T740;
  T744 = fun_286;
  T743 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_refs),VARREF(Yfun_refs_setter),VARREF(YLanyG),T744);
  propF22869 = T743;
  (P)YPmet_env_setter(propF22869,getterF22866);
  (P)YPmet_env_setter(propF22869,setterF22868);
  T745 = CALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF22869);
  T742 = T745;
  T735 = T742;
  lit_107 = YPPsym((P)"fun-src");
  lit_108 = YPPsym((P)"fun-src-setter");
  T748 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_287 = YPmet(FUNCODEREF(fun_287),YPfalse,T748,ENVNUL,PNUL,YPfalse);
  T747 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_288 = YPmet(FUNCODEREF(fun_288),YPfalse,T747,ENVNUL,PNUL,YPfalse);
  T746 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_289 = YPmet(FUNCODEREF(fun_289),YPfalse,T746,ENVNUL,PNUL,YPfalse);
  T751 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T750 = (P)YPsig(Ynil,T751,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T749 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_107),T750,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src,T749);
  T753 = fun_287;
  accessorF22870 = T753;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_src),accessorF22870);
  (P)YPmet_name_setter(VARREF(Yfun_src),accessorF22870);
  T752 = accessorF22870;
  getterF22871 = T752;
  T758 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T757 = (P)YPpair(VARREF(YLanyG),T758);
  T756 = (P)YPsig(Ynil,T757,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T755 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_108),T756,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src_setter,T755);
  T760 = fun_288;
  accessorF22872 = T760;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_src_setter),accessorF22872);
  (P)YPmet_name_setter(VARREF(Yfun_src_setter),accessorF22872);
  T759 = accessorF22872;
  setterF22873 = T759;
  T763 = fun_289;
  T762 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_src),VARREF(Yfun_src_setter),VARREF(YLanyG),T763);
  propF22874 = T762;
  (P)YPmet_env_setter(propF22874,getterF22871);
  (P)YPmet_env_setter(propF22874,setterF22873);
  T764 = CALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF22874);
  T761 = T764;
  T754 = T761;
  lit_109 = YPPsym((P)"fun-mets");
  lit_110 = YPPsym((P)"fun-mets-setter");
  T767 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_290 = YPmet(FUNCODEREF(fun_290),YPfalse,T767,ENVNUL,PNUL,YPfalse);
  T766 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_291 = YPmet(FUNCODEREF(fun_291),YPfalse,T766,ENVNUL,PNUL,YPfalse);
  T765 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_292 = YPmet(FUNCODEREF(fun_292),YPfalse,T765,ENVNUL,PNUL,YPfalse);
  T770 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T769 = (P)YPsig(Ynil,T770,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T768 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_109),T769,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets,T768);
  T772 = fun_290;
  accessorF22875 = T772;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets),accessorF22875);
  (P)YPmet_name_setter(VARREF(Yfun_mets),accessorF22875);
  T771 = accessorF22875;
  getterF22876 = T771;
  T777 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T776 = (P)YPpair(VARREF(YLanyG),T777);
  T775 = (P)YPsig(Ynil,T776,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T774 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_110),T775,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets_setter,T774);
  T779 = fun_291;
  accessorF22877 = T779;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets_setter),accessorF22877);
  (P)YPmet_name_setter(VARREF(Yfun_mets_setter),accessorF22877);
  T778 = accessorF22877;
  setterF22878 = T778;
  T782 = fun_292;
  T781 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_mets),VARREF(Yfun_mets_setter),VARREF(YLlstG),T782);
  propF22879 = T781;
  (P)YPmet_env_setter(propF22879,getterF22876);
  (P)YPmet_env_setter(propF22879,setterF22878);
  T783 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF22879);
  T780 = T783;
  T773 = T780;
  lit_111 = YPPsym((P)"fun-cache");
  lit_112 = YPPsym((P)"fun-cache-setter");
  T786 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_293 = YPmet(FUNCODEREF(fun_293),YPfalse,T786,ENVNUL,PNUL,YPfalse);
  T785 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_294 = YPmet(FUNCODEREF(fun_294),YPfalse,T785,ENVNUL,PNUL,YPfalse);
  T784 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_295 = YPmet(FUNCODEREF(fun_295),YPfalse,T784,ENVNUL,PNUL,YPfalse);
  T789 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T788 = (P)YPsig(Ynil,T789,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T787 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_111),T788,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_cache,T787);
  T791 = fun_293;
  accessorF22880 = T791;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache),accessorF22880);
  (P)YPmet_name_setter(VARREF(Yfun_cache),accessorF22880);
  T790 = accessorF22880;
  getterF22881 = T790;
  T796 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T795 = (P)YPpair(VARREF(YLanyG),T796);
  T794 = (P)YPsig(Ynil,T795,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T793 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_112),T794,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_cache_setter,T793);
  T798 = fun_294;
  accessorF22882 = T798;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache_setter),accessorF22882);
  (P)YPmet_name_setter(VARREF(Yfun_cache_setter),accessorF22882);
  T797 = accessorF22882;
  setterF22883 = T797;
  T801 = fun_295;
  T800 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_cache),VARREF(Yfun_cache_setter),VARREF(YLanyG),T801);
  propF22884 = T800;
  (P)YPmet_env_setter(propF22884,getterF22881);
  (P)YPmet_env_setter(propF22884,setterF22883);
  T802 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF22884);
  T799 = T802;
  T792 = T799;
  lit_113 = YPPsym((P)"gen-refs");
  lit_114 = YPPsym((P)"gen-refs-setter");
  T805 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_296 = YPmet(FUNCODEREF(fun_296),YPfalse,T805,ENVNUL,PNUL,YPfalse);
  T804 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLtupG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_297 = YPmet(FUNCODEREF(fun_297),YPfalse,T804,ENVNUL,PNUL,YPfalse);
  T803 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_298 = YPmet(FUNCODEREF(fun_298),YPfalse,T803,ENVNUL,PNUL,YPfalse);
  T808 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T807 = (P)YPsig(Ynil,T808,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T806 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_113),T807,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_refs,T806);
  T810 = fun_296;
  accessorF22885 = T810;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_refs),accessorF22885);
  (P)YPmet_name_setter(VARREF(Ygen_refs),accessorF22885);
  T809 = accessorF22885;
  getterF22886 = T809;
  T815 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T814 = (P)YPpair(VARREF(YLanyG),T815);
  T813 = (P)YPsig(Ynil,T814,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T812 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_114),T813,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_refs_setter,T812);
  T817 = fun_297;
  accessorF22887 = T817;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_refs_setter),accessorF22887);
  (P)YPmet_name_setter(VARREF(Ygen_refs_setter),accessorF22887);
  T816 = accessorF22887;
  setterF22888 = T816;
  T820 = fun_298;
  T819 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_refs),VARREF(Ygen_refs_setter),VARREF(YLtupG),T820);
  propF22889 = T819;
  (P)YPmet_env_setter(propF22889,getterF22886);
  (P)YPmet_env_setter(propF22889,setterF22888);
  T821 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF22889);
  T818 = T821;
  T811 = T818;
  lit_115 = YPPsym((P)"gen-src");
  lit_116 = YPPsym((P)"gen-src-setter");
  T824 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_299 = YPmet(FUNCODEREF(fun_299),YPfalse,T824,ENVNUL,PNUL,YPfalse);
  T823 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_300 = YPmet(FUNCODEREF(fun_300),YPfalse,T823,ENVNUL,PNUL,YPfalse);
  T822 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_301 = YPmet(FUNCODEREF(fun_301),YPfalse,T822,ENVNUL,PNUL,YPfalse);
  T827 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T826 = (P)YPsig(Ynil,T827,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T825 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_115),T826,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src,T825);
  T829 = fun_299;
  accessorF22890 = T829;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_src),accessorF22890);
  (P)YPmet_name_setter(VARREF(Ygen_src),accessorF22890);
  T828 = accessorF22890;
  getterF22891 = T828;
  T834 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T833 = (P)YPpair(VARREF(YLanyG),T834);
  T832 = (P)YPsig(Ynil,T833,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T831 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_116),T832,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src_setter,T831);
  T836 = fun_300;
  accessorF22892 = T836;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_src_setter),accessorF22892);
  (P)YPmet_name_setter(VARREF(Ygen_src_setter),accessorF22892);
  T835 = accessorF22892;
  setterF22893 = T835;
  T839 = fun_301;
  T838 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_src),VARREF(Ygen_src_setter),VARREF(YLanyG),T839);
  propF22894 = T838;
  (P)YPmet_env_setter(propF22894,getterF22891);
  (P)YPmet_env_setter(propF22894,setterF22893);
  T840 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF22894);
  T837 = T840;
  T830 = T837;
  lit_117 = YPPsym((P)"opts-location");
  lit_118 = YPPsym((P)"opts-location-setter");
  T843 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_302 = YPmet(FUNCODEREF(fun_302),YPfalse,T843,ENVNUL,PNUL,YPfalse);
  T842 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlocG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_303 = YPmet(FUNCODEREF(fun_303),YPfalse,T842,ENVNUL,PNUL,YPfalse);
  T841 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_304 = YPmet(FUNCODEREF(fun_304),YPfalse,T841,ENVNUL,PNUL,YPfalse);
  T846 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T845 = (P)YPsig(Ynil,T846,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T844 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_117),T845,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_location,T844);
  T848 = fun_302;
  accessorF22895 = T848;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_location),accessorF22895);
  (P)YPmet_name_setter(VARREF(Yopts_location),accessorF22895);
  T847 = accessorF22895;
  getterF22896 = T847;
  T853 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T852 = (P)YPpair(VARREF(YLanyG),T853);
  T851 = (P)YPsig(Ynil,T852,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T850 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_118),T851,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_location_setter,T850);
  T855 = fun_303;
  accessorF22897 = T855;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_location_setter),accessorF22897);
  (P)YPmet_name_setter(VARREF(Yopts_location_setter),accessorF22897);
  T854 = accessorF22897;
  setterF22898 = T854;
  T858 = fun_304;
  T857 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_location),VARREF(Yopts_location_setter),VARREF(YLlocG),T858);
  propF22899 = T857;
  (P)YPmet_env_setter(propF22899,getterF22896);
  (P)YPmet_env_setter(propF22899,setterF22898);
  T859 = CALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF22899);
  T856 = T859;
  T849 = T856;
  lit_119 = YPPsym((P)"opts-count");
  lit_120 = YPPsym((P)"opts-count-setter");
  T862 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_305 = YPmet(FUNCODEREF(fun_305),YPfalse,T862,ENVNUL,PNUL,YPfalse);
  T861 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_306 = YPmet(FUNCODEREF(fun_306),YPfalse,T861,ENVNUL,PNUL,YPfalse);
  T860 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_307 = YPmet(FUNCODEREF(fun_307),YPfalse,T860,ENVNUL,PNUL,YPfalse);
  T865 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T864 = (P)YPsig(Ynil,T865,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T863 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_119),T864,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_count,T863);
  T867 = fun_305;
  accessorF22900 = T867;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_count),accessorF22900);
  (P)YPmet_name_setter(VARREF(Yopts_count),accessorF22900);
  T866 = accessorF22900;
  getterF22901 = T866;
  T872 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T871 = (P)YPpair(VARREF(YLanyG),T872);
  T870 = (P)YPsig(Ynil,T871,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T869 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_120),T870,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_count_setter,T869);
  T874 = fun_306;
  accessorF22902 = T874;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_count_setter),accessorF22902);
  (P)YPmet_name_setter(VARREF(Yopts_count_setter),accessorF22902);
  T873 = accessorF22902;
  setterF22903 = T873;
  T877 = fun_307;
  T876 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_count),VARREF(Yopts_count_setter),VARREF(YLintG),T877);
  propF22904 = T876;
  (P)YPmet_env_setter(propF22904,getterF22901);
  (P)YPmet_env_setter(propF22904,setterF22903);
  T878 = CALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF22904);
  T875 = T878;
  T868 = T875;
  lit_121 = YPPsym((P)"opts-tup-storage");
  lit_122 = YPPsym((P)"opts-tup-storage-setter");
  T881 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLopts_tupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_308 = YPmet(FUNCODEREF(fun_308),YPfalse,T881,ENVNUL,PNUL,YPfalse);
  T880 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLtupG),VARREF(YLopts_tupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_309 = YPmet(FUNCODEREF(fun_309),YPfalse,T880,ENVNUL,PNUL,YPfalse);
  T879 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_310 = YPmet(FUNCODEREF(fun_310),YPfalse,T879,ENVNUL,PNUL,YPfalse);
  T884 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T883 = (P)YPsig(Ynil,T884,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T882 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_121),T883,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_tup_storage,T882);
  T886 = fun_308;
  accessorF22905 = T886;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_tup_storage),accessorF22905);
  (P)YPmet_name_setter(VARREF(Yopts_tup_storage),accessorF22905);
  T885 = accessorF22905;
  getterF22906 = T885;
  T891 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T890 = (P)YPpair(VARREF(YLanyG),T891);
  T889 = (P)YPsig(Ynil,T890,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T888 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_122),T889,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_tup_storage_setter,T888);
  T893 = fun_309;
  accessorF22907 = T893;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_tup_storage_setter),accessorF22907);
  (P)YPmet_name_setter(VARREF(Yopts_tup_storage_setter),accessorF22907);
  T892 = accessorF22907;
  setterF22908 = T892;
  T896 = fun_310;
  T895 = (P)YPPprop(VARREF(YLopts_tupG),VARREF(Yopts_tup_storage),VARREF(Yopts_tup_storage_setter),VARREF(YLtupG),T896);
  propF22909 = T895;
  (P)YPmet_env_setter(propF22909,getterF22906);
  (P)YPmet_env_setter(propF22909,setterF22908);
  T897 = CALL2(1,VARREF(YPadd_prop),VARREF(YLopts_tupG),propF22909);
  T894 = T897;
  T887 = T894;
  lit_123 = YPPsym((P)"%collect-direct-props");
  T898 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPcollect_direct_props = YPmet(FUNCODEREF(YPcollect_direct_props),LITREF(lit_123),T898,ENVNUL,PNUL,YPfalse);
  T899 = YPcollect_direct_props;
  VARSET(YPcollect_direct_props,T899);
  lit_124 = YPPsym((P)"%finalize-props!");
  T900 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPfinalize_propsX = YPmet(FUNCODEREF(YPfinalize_propsX),LITREF(lit_124),T900,ENVNUL,PNUL,YPfalse);
  T901 = YPfinalize_propsX;
  VARSET(YPfinalize_propsX,T901);
  lit_125 = YPPsym((P)"<any>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_125),VARREF(YLanyG));
  lit_126 = YPPsym((P)"<log>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_126),VARREF(YLlogG));
  lit_127 = YPPsym((P)"<mag>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_127),VARREF(YLmagG));
  lit_128 = YPPsym((P)"<chr>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_128),VARREF(YLchrG));
  lit_129 = YPPsym((P)"<num>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_129),VARREF(YLnumG));
  lit_130 = YPPsym((P)"<int>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_130),VARREF(YLintG));
  lit_131 = YPPsym((P)"<flo>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_131),VARREF(YLfloG));
  lit_132 = YPPsym((P)"<loc>");
  T903 = CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_132),VARREF(YLlocG));
  T902 = T903;
  return T902;
}

P Y___main_8___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61;
loop:
  lit_133 = YPPsym((P)"<rep>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_133),VARREF(YLrepG));
  lit_134 = YPPsym((P)"<col>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_134),VARREF(YLcolG));
  lit_135 = YPPsym((P)"<col.>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_135),VARREF(YLcolIG));
  lit_136 = YPPsym((P)"<col!>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_136),VARREF(YLcolXG));
  lit_137 = YPPsym((P)"<seq>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_137),VARREF(YLseqG));
  lit_138 = YPPsym((P)"<seq.>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_138),VARREF(YLseqIG));
  lit_139 = YPPsym((P)"<seq!>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_139),VARREF(YLseqXG));
  lit_140 = YPPsym((P)"<lst>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_140),VARREF(YLlstG));
  lit_141 = YPPsym((P)"<flat>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_141),VARREF(YLflatG));
  lit_142 = YPPsym((P)"<tup>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_142),VARREF(YLtupG));
  lit_143 = YPPsym((P)"<str>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_143),VARREF(YLstrG));
  lit_144 = YPPsym((P)"<sym>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_144),VARREF(YLsymG));
  lit_145 = YPPsym((P)"<type>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_145),VARREF(YLtypeG));
  lit_146 = YPPsym((P)"<class>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_146),VARREF(YLclassG));
  lit_147 = YPPsym((P)"<singleton>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_147),VARREF(YLsingletonG));
  lit_148 = YPPsym((P)"<subclass>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_148),VARREF(YLsubclassG));
  lit_149 = YPPsym((P)"<union>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_149),VARREF(YLunionG));
  lit_150 = YPPsym((P)"<prop>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_150),VARREF(YLpropG));
  lit_151 = YPPsym((P)"<gen-cache>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_151),VARREF(YLgen_cacheG));
  lit_152 = YPPsym((P)"<sig>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_152),VARREF(YLsigG));
  lit_153 = YPPsym((P)"<fun>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_153),VARREF(YLfunG));
  lit_154 = YPPsym((P)"<met>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_154),VARREF(YLmetG));
  lit_155 = YPPsym((P)"<gen>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_155),VARREF(YLgenG));
  lit_156 = YPPsym((P)"<opts>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_156),VARREF(YLoptsG));
  lit_157 = YPPsym((P)"<opts-tup>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_157),VARREF(YLopts_tupG));
  lit_158 = YPPsym((P)"@@==");
  T0 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOOEE = YPmet(FUNCODEREF(YOOEE),LITREF(lit_158),T0,ENVNUL,PNUL,YPfalse);
  T1 = YOOEE;
  VARSET(YOOEE,T1);
  lit_159 = YPPsym((P)"not");
  T2 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  Ynot = YPmet(FUNCODEREF(Ynot),LITREF(lit_159),T2,ENVNUL,PNUL,YPfalse);
  T3 = Ynot;
  VARSET(Ynot,T3);
  lit_160 = YPPsym((P)"@@empty?");
  T4 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOOemptyQ = YPmet(FUNCODEREF(YOOemptyQ),LITREF(lit_160),T4,ENVNUL,PNUL,YPfalse);
  T5 = YOOemptyQ;
  VARSET(YOOemptyQ,T5);
  lit_161 = YPPsym((P)"@rev!");
  T6 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrevX = YPmet(FUNCODEREF(YOrevX),LITREF(lit_161),T6,ENVNUL,PNUL,YPfalse);
  T7 = YOrevX;
  VARSET(YOrevX,T7);
  lit_162 = YPPsym((P)"@all?");
  lit_163 = YPPsym((P)"test");
  lit_164 = YPPsym((P)"c");
  lit_165 = YPPsym((P)"fnd");
  lit_166 = YPPsym((P)"p");
  T9 = YPsig(YPPlist(1,LITREF(lit_166)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_331 = YPmet(FUNCODEREF(fun_fnd_331),LITREF(lit_165),T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(2,LITREF(lit_163),LITREF(lit_164)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOallQ = YPmet(FUNCODEREF(YOallQ),LITREF(lit_162),T8,ENVNUL,PNUL,YPfalse);
  T10 = YOallQ;
  VARSET(YOallQ,T10);
  lit_167 = YPPsym((P)"@all2?");
  lit_168 = YPPsym((P)"px");
  lit_169 = YPPsym((P)"py");
  T12 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_169)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_333 = YPmet(FUNCODEREF(fun_fnd_333),LITREF(lit_165),T12,ENVNUL,PNUL,YPfalse);
  T11 = YPsig(YPPlist(3,LITREF(lit_163),LITREF(lit_10),LITREF(lit_13)),YPPlist(3,VARREF(YLfunG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOall2Q = YPmet(FUNCODEREF(YOall2Q),LITREF(lit_167),T11,ENVNUL,PNUL,YPfalse);
  T13 = YOall2Q;
  VARSET(YOall2Q,T13);
  lit_170 = YPPsym((P)"@elt");
  lit_171 = YPPsym((P)"key");
  lit_172 = YPPsym((P)"count");
  T15 = YPsig(YPPlist(2,LITREF(lit_172),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_335 = YPmet(FUNCODEREF(fun_fnd_335),LITREF(lit_165),T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_171)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOelt = YPmet(FUNCODEREF(YOelt),LITREF(lit_170),T14,ENVNUL,PNUL,YPfalse);
  T16 = YOelt;
  VARSET(YOelt,T16);
  lit_173 = YPPsym((P)"@fill");
  lit_174 = YPPsym((P)"f");
  T18 = YPsig(YPPlist(1,LITREF(lit_166)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_337 = YPmet(FUNCODEREF(fun_loop_337),LITREF(lit_5),T18,ENVNUL,PNUL,YPfalse);
  T17 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_174)),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfill = YPmet(FUNCODEREF(YOfill),LITREF(lit_173),T17,ENVNUL,PNUL,YPfalse);
  T19 = YOfill;
  VARSET(YOfill,T19);
  lit_175 = YPPsym((P)"@any?");
  T21 = YPsig(YPPlist(1,LITREF(lit_166)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_339 = YPmet(FUNCODEREF(fun_fnd_339),LITREF(lit_165),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(2,LITREF(lit_163),LITREF(lit_164)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOanyQ = YPmet(FUNCODEREF(YOanyQ),LITREF(lit_175),T20,ENVNUL,PNUL,YPfalse);
  T22 = YOanyQ;
  VARSET(YOanyQ,T22);
  lit_176 = YPPsym((P)"@map");
  lit_177 = YPPsym((P)"do");
  lit_178 = YPPsym((P)"res");
  T24 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_178)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_344 = YPmet(FUNCODEREF(fun_do_344),LITREF(lit_177),T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(2,LITREF(lit_174),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmap = YPmet(FUNCODEREF(YOmap),LITREF(lit_176),T23,ENVNUL,PNUL,YPfalse);
  T25 = YOmap;
  VARSET(YOmap,T25);
  lit_179 = YPPsym((P)"@pick");
  T27 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_178)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_346 = YPmet(FUNCODEREF(fun_do_346),LITREF(lit_177),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(2,LITREF(lit_174),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOpick = YPmet(FUNCODEREF(YOpick),LITREF(lit_179),T26,ENVNUL,PNUL,YPfalse);
  T28 = YOpick;
  VARSET(YOpick,T28);
  lit_180 = YPPsym((P)"@do");
  T30 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_348 = YPmet(FUNCODEREF(fun_do_348),LITREF(lit_177),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(2,LITREF(lit_174),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo = YPmet(FUNCODEREF(YOdo),LITREF(lit_180),T29,ENVNUL,PNUL,YPfalse);
  T31 = YOdo;
  VARSET(YOdo,T31);
  lit_181 = YPPsym((P)"@alter");
  lit_182 = YPPsym((P)"dst");
  lit_183 = YPPsym((P)"src");
  lit_184 = YPPsym((P)"in");
  lit_185 = YPPsym((P)"ds");
  lit_186 = YPPsym((P)"ss");
  T33 = YPsig(YPPlist(2,LITREF(lit_185),LITREF(lit_186)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_in_350 = YPmet(FUNCODEREF(fun_in_350),LITREF(lit_184),T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(2,LITREF(lit_182),LITREF(lit_183)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOalter = YPmet(FUNCODEREF(YOalter),LITREF(lit_181),T32,ENVNUL,PNUL,YPfalse);
  T34 = YOalter;
  VARSET(YOalter,T34);
  lit_187 = YPPsym((P)"@fab");
  lit_188 = YPPsym((P)"fab");
  T36 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_178)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fab_352 = YPmet(FUNCODEREF(fun_fab_352),LITREF(lit_188),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_3)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfab = YPmet(FUNCODEREF(YOfab),LITREF(lit_187),T35,ENVNUL,PNUL,YPfalse);
  T37 = YOfab;
  VARSET(YOfab,T37);
  lit_189 = YPPsym((P)"@fold");
  lit_190 = YPPsym((P)"combine");
  lit_191 = YPPsym((P)"init");
  lit_192 = YPPsym((P)"red");
  T39 = YPsig(YPPlist(2,LITREF(lit_178),LITREF(lit_164)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_red_354 = YPmet(FUNCODEREF(fun_red_354),LITREF(lit_192),T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(3,LITREF(lit_190),LITREF(lit_191),LITREF(lit_164)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  YOfold = YPmet(FUNCODEREF(YOfold),LITREF(lit_189),T38,ENVNUL,PNUL,YPfalse);
  T40 = YOfold;
  VARSET(YOfold,T40);
  lit_193 = YPPsym((P)"@rev");
  T42 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_356 = YPmet(FUNCODEREF(fun_loop_356),LITREF(lit_5),T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrev = YPmet(FUNCODEREF(YOrev),LITREF(lit_193),T41,ENVNUL,PNUL,YPfalse);
  T43 = YOrev;
  VARSET(YOrev,T43);
  lit_194 = YPPsym((P)"@cat2");
  T44 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOcat2 = YPmet(FUNCODEREF(YOcat2),LITREF(lit_194),T44,ENVNUL,PNUL,YPfalse);
  T45 = YOcat2;
  VARSET(YOcat2,T45);
  lit_195 = YPPsym((P)"@find");
  T47 = YPsig(YPPlist(2,LITREF(lit_164),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_359 = YPmet(FUNCODEREF(fun_fnd_359),LITREF(lit_165),T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(YPPlist(2,LITREF(lit_174),LITREF(lit_164)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfind = YPmet(FUNCODEREF(YOfind),LITREF(lit_195),T46,ENVNUL,PNUL,YPfalse);
  T48 = YOfind;
  VARSET(YOfind,T48);
  lit_196 = YPPsym((P)"@mem?");
  T50 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_361 = YPmet(FUNCODEREF(fun_361),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(2,LITREF(lit_164),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmemQ = YPmet(FUNCODEREF(YOmemQ),LITREF(lit_196),T49,ENVNUL,PNUL,YPfalse);
  T51 = YOmemQ;
  VARSET(YOmemQ,T51);
  lit_197 = YPPsym((P)"@del-dups");
  lit_198 = YPPsym((P)"e");
  T53 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_198)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_363 = YPmet(FUNCODEREF(fun_363),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOdel_dups = YPmet(FUNCODEREF(YOdel_dups),LITREF(lit_197),T52,ENVNUL,PNUL,YPfalse);
  T54 = YOdel_dups;
  VARSET(YOdel_dups,T54);
  lit_199 = YPPsym((P)"@lst-helper");
  lit_200 = YPPsym((P)"objects");
  T55 = YPsig(YPPlist(3,LITREF(lit_200),LITREF(lit_17),LITREF(lit_6)),YPPlist(3,VARREF(YLoptsG),VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOlst_helper = YPmet(FUNCODEREF(YOlst_helper),LITREF(lit_199),T55,ENVNUL,PNUL,YPfalse);
  T56 = YOlst_helper;
  VARSET(YOlst_helper,T56);
  lit_201 = YPPsym((P)"@opts-as-lst");
  T59 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  T58 = YOopts_as_lst = YPmet(FUNCODEREF(YOopts_as_lst),LITREF(lit_201),T59,ENVNUL,PNUL,YPfalse);
  T61 = YOopts_as_lst;
  T60 = VARSET(YOopts_as_lst,T61);
  T57 = T60;
  return T57;
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
  P T128,T129;
loop:
  lit_202 = YPPsym((P)"@lst");
  T0 = YPsig(YPPlist(1,LITREF(lit_200)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOlst = YPmet(FUNCODEREF(YOlst),LITREF(lit_202),T0,ENVNUL,PNUL,YPfalse);
  T1 = YOlst;
  VARSET(YOlst,T1);
  lit_203 = YPPsym((P)"into");
  lit_204 = YPPsym((P)"k");
  T2 = YPsig(YPPlist(1,LITREF(lit_204)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_into_371 = YPmet(FUNCODEREF(fun_into_371),LITREF(lit_203),T2,ENVNUL,PNUL,YPfalse);
  lit_205 = YPPsym((P)"@tup");
  T3 = YPsig(YPPlist(1,LITREF(lit_20)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOtup = YPmet(FUNCODEREF(YOtup),LITREF(lit_205),T3,ENVNUL,PNUL,YPfalse);
  T4 = YOtup;
  VARSET(YOtup,T4);
  lit_206 = YPPsym((P)"@fun-names");
  T5 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_names = YPmet(FUNCODEREF(YOfun_names),LITREF(lit_206),T5,ENVNUL,PNUL,YPfalse);
  T6 = YOfun_names;
  VARSET(YOfun_names,T6);
  lit_207 = YPPsym((P)"@fun-specs");
  T7 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_specs = YPmet(FUNCODEREF(YOfun_specs),LITREF(lit_207),T7,ENVNUL,PNUL,YPfalse);
  T8 = YOfun_specs;
  VARSET(YOfun_specs,T8);
  lit_208 = YPPsym((P)"@fun-nary?");
  T9 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOfun_naryQ = YPmet(FUNCODEREF(YOfun_naryQ),LITREF(lit_208),T9,ENVNUL,PNUL,YPfalse);
  T10 = YOfun_naryQ;
  VARSET(YOfun_naryQ,T10);
  lit_209 = YPPsym((P)"@fun-arity");
  T11 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YOfun_arity = YPmet(FUNCODEREF(YOfun_arity),LITREF(lit_209),T11,ENVNUL,PNUL,YPfalse);
  T12 = YOfun_arity;
  VARSET(YOfun_arity,T12);
  lit_210 = YPPsym((P)"@fun-val");
  T13 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOfun_val = YPmet(FUNCODEREF(YOfun_val),LITREF(lit_210),T13,ENVNUL,PNUL,YPfalse);
  T14 = YOfun_val;
  VARSET(YOfun_val,T14);
  lit_211 = YPPsym((P)"@fun-unification-vars");
  T15 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_unification_vars = YPmet(FUNCODEREF(YOfun_unification_vars),LITREF(lit_211),T15,ENVNUL,PNUL,YPfalse);
  T16 = YOfun_unification_vars;
  VARSET(YOfun_unification_vars,T16);
  lit_212 = YPPsym((P)"@fun-mets");
  T17 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_mets = YPmet(FUNCODEREF(YOfun_mets),LITREF(lit_212),T17,ENVNUL,PNUL,YPfalse);
  T18 = YOfun_mets;
  VARSET(YOfun_mets,T18);
  lit_213 = YPPsym((P)"@fun-mets-setter");
  T19 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfun_mets_setter = YPmet(FUNCODEREF(YOfun_mets_setter),LITREF(lit_213),T19,ENVNUL,PNUL,YPfalse);
  T20 = YOfun_mets_setter;
  VARSET(YOfun_mets_setter,T20);
  VARSET(YLenvG,VARREF(YLanyG));
  VARSET(YLspecsG,VARREF(YLlstG));
  VARSET(YLbodyG,VARREF(YLanyG));
  lit_214 = YPPsym((P)"fun-spec");
  T21 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_17)),YPPlist(2,VARREF(YLmetG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_spec = YPmet(FUNCODEREF(Yfun_spec),LITREF(lit_214),T21,ENVNUL,PNUL,YPfalse);
  T22 = Yfun_spec;
  VARSET(Yfun_spec,T22);
  VARSET(YLmetsG,VARREF(YLlstG));
  lit_215 = YPPsym((P)"fun-same-met?");
  T23 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLmetG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yfun_same_metQ = YPmet(FUNCODEREF(Yfun_same_metQ),LITREF(lit_215),T23,ENVNUL,PNUL,YPfalse);
  T24 = Yfun_same_metQ;
  VARSET(Yfun_same_metQ,T24);
  lit_216 = YPPsym((P)"fun-congruent?");
  T25 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yfun_congruentQ = YPmet(FUNCODEREF(Yfun_congruentQ),LITREF(lit_216),T25,ENVNUL,PNUL,YPfalse);
  T26 = Yfun_congruentQ;
  VARSET(Yfun_congruentQ,T26);
  VARSET(YTrestarts_okQT,YPfalse);
  lit_217 = YPPsym((P)"gen-add-met");
  lit_218 = YPPsym((P)"g");
  lit_219 = YPPsym((P)"m");
  lit_220 = YPPsym((P)"return");
  lit_221 = YPsb((P)"Replace %= with an empty generic congruent with %=");
  lit_222 = YPPsym((P)"lop");
  lit_223 = YPPsym((P)"specs");
  lit_224 = YPPsym((P)"col");
  lit_225 = YPPsym((P)"mets");
  lit_226 = YPPsym((P)"same?");
  lit_227 = YPPsym((P)"gms");
  T33 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_385 = YPmet(FUNCODEREF(fun_385),YPfalse,T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(2,LITREF(lit_164),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_386 = YPmet(FUNCODEREF(fun_386),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_387 = YPmet(FUNCODEREF(fun_387),YPfalse,T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(1,LITREF(lit_220)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_388 = YPmet(FUNCODEREF(fun_388),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(1,LITREF(lit_223)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lop_389 = YPmet(FUNCODEREF(fun_lop_389),LITREF(lit_222),T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(3,LITREF(lit_225),LITREF(lit_226),LITREF(lit_227)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLmetsG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_col_390 = YPmet(FUNCODEREF(fun_col_390),LITREF(lit_224),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(2,LITREF(lit_218),LITREF(lit_219)),YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  Ygen_add_met = YPmet(FUNCODEREF(Ygen_add_met),LITREF(lit_217),T27,ENVNUL,PNUL,YPfalse);
  T34 = Ygen_add_met;
  VARSET(Ygen_add_met,T34);
  lit_228 = YPPsym((P)"@isa?");
  lit_229 = YPPsym((P)"o");
  lit_230 = YPPsym((P)"t");
  T35 = YPsig(YPPlist(2,LITREF(lit_229),LITREF(lit_230)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOisaQ = YPmet(FUNCODEREF(YOisaQ),LITREF(lit_228),T35,ENVNUL,PNUL,YPfalse);
  T36 = YOisaQ;
  VARSET(YOisaQ,T36);
  lit_231 = YPPsym((P)"@class<");
  lit_232 = YPPsym((P)"c1");
  lit_233 = YPPsym((P)"c2");
  lit_234 = YPPsym((P)"wrt");
  lit_235 = YPPsym((P)"find");
  lit_236 = YPPsym((P)"ps");
  lit_237 = YPsb((P)"can't order specializers - arg/reference object %= is ");
  lit_238 = YPsb((P)"neither %= nor %=");
  T38 = YPsig(YPPlist(1,LITREF(lit_236)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_396 = YPmet(FUNCODEREF(fun_find_396),LITREF(lit_235),T38,ENVNUL,PNUL,YPfalse);
  T37 = YPsig(YPPlist(3,LITREF(lit_232),LITREF(lit_233),LITREF(lit_234)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOclassL = YPmet(FUNCODEREF(YOclassL),LITREF(lit_231),T37,ENVNUL,PNUL,YPfalse);
  T39 = YOclassL;
  VARSET(YOclassL,T39);
  VARSET(Ytup,VARREF(YOtup));
  lit_239 = YPPsym((P)"@type-equal?");
  lit_240 = YPPsym((P)"t1");
  lit_241 = YPPsym((P)"t2");
  T40 = YPsig(YPPlist(2,LITREF(lit_240),LITREF(lit_241)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtype_equalQ = YPmet(FUNCODEREF(YOtype_equalQ),LITREF(lit_239),T40,ENVNUL,PNUL,YPfalse);
  T41 = YOtype_equalQ;
  VARSET(YOtype_equalQ,T41);
  lit_242 = YPPsym((P)"@subtype?");
  T42 = YPsig(YPPlist(2,LITREF(lit_240),LITREF(lit_241)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOsubtypeQ = YPmet(FUNCODEREF(YOsubtypeQ),LITREF(lit_242),T42,ENVNUL,PNUL,YPfalse);
  T43 = YOsubtypeQ;
  VARSET(YOsubtypeQ,T43);
  lit_243 = YPPsym((P)"@may-isa?");
  T44 = YPsig(YPPlist(2,LITREF(lit_164),LITREF(lit_230)),YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOmay_isaQ = YPmet(FUNCODEREF(YOmay_isaQ),LITREF(lit_243),T44,ENVNUL,PNUL,YPfalse);
  T45 = YOmay_isaQ;
  VARSET(YOmay_isaQ,T45);
  lit_244 = YPPsym((P)"@order-specs-class");
  lit_245 = YPPsym((P)"arg");
  lit_246 = YPPsym((P)"=");
  lit_247 = YPPsym((P)"<");
  lit_248 = YPPsym((P)">");
  T46 = YPsig(YPPlist(3,LITREF(lit_240),LITREF(lit_241),LITREF(lit_245)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOorder_specs_class = YPmet(FUNCODEREF(YOorder_specs_class),LITREF(lit_244),T46,ENVNUL,PNUL,YPfalse);
  T47 = YOorder_specs_class;
  VARSET(YOorder_specs_class,T47);
  lit_249 = YPPsym((P)"@order-specs");
  T48 = YPsig(YPPlist(3,LITREF(lit_240),LITREF(lit_241),LITREF(lit_245)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOorder_specs = YPmet(FUNCODEREF(YOorder_specs),LITREF(lit_249),T48,ENVNUL,PNUL,YPfalse);
  T49 = YOorder_specs;
  VARSET(YOorder_specs,T49);
  lit_250 = YPPsym((P)"order-mets");
  lit_251 = YPPsym((P)"m1");
  lit_252 = YPPsym((P)"m2");
  lit_253 = YPPsym((P)"state");
  lit_254 = YPPsym((P)"idx");
  lit_255 = YPPsym((P)"<>");
  T51 = YPsig(YPPlist(2,LITREF(lit_253),LITREF(lit_254)),YPPlist(2,VARREF(YLsymG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_403 = YPmet(FUNCODEREF(fun_loop_403),LITREF(lit_5),T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(YPPlist(3,LITREF(lit_251),LITREF(lit_252),LITREF(lit_20)),YPPlist(3,VARREF(YLmetG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLsymG),Ynil);
  Yorder_mets = YPmet(FUNCODEREF(Yorder_mets),LITREF(lit_250),T50,ENVNUL,PNUL,YPfalse);
  T52 = Yorder_mets;
  VARSET(Yorder_mets,T52);
  lit_256 = YPPsym((P)"ord-app-mets-1");
  lit_257 = YPPsym((P)"make-ambiguous");
  lit_258 = YPPsym((P)"headed-list");
  lit_259 = YPPsym((P)"precedes-all?");
  lit_260 = YPPsym((P)"check-subsequent-ambiguities");
  lit_261 = YPPsym((P)"oprev");
  lit_262 = YPPsym((P)"insert");
  lit_263 = YPPsym((P)"osub");
  T60 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_405 = YPmet(FUNCODEREF(fun_loop_405),LITREF(lit_5),T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(YPPlist(1,LITREF(lit_258)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_ambiguous_406 = YPmet(FUNCODEREF(fun_make_ambiguous_406),LITREF(lit_257),T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_407 = YPmet(FUNCODEREF(fun_loop_407),LITREF(lit_5),T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_precedes_allQ_408 = YPmet(FUNCODEREF(fun_precedes_allQ_408),LITREF(lit_259),T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(YPPlist(1,LITREF(lit_261)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_check_subsequent_ambiguities_409 = YPmet(FUNCODEREF(fun_check_subsequent_ambiguities_409),LITREF(lit_260),T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(2,LITREF(lit_261),LITREF(lit_263)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_410 = YPmet(FUNCODEREF(fun_insert_410),LITREF(lit_262),T55,ENVNUL,PNUL,YPfalse);
  T54 = YPsig(YPPlist(1,LITREF(lit_225)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_411 = YPmet(FUNCODEREF(fun_loop_411),LITREF(lit_5),T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(YPPlist(3,LITREF(lit_225),LITREF(lit_20),LITREF(lit_250)),YPPlist(3,VARREF(YLlstG),VARREF(YLoptsG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yord_app_mets_1 = YPmet(FUNCODEREF(Yord_app_mets_1),LITREF(lit_256),T53,ENVNUL,PNUL,YPfalse);
  T61 = Yord_app_mets_1;
  VARSET(Yord_app_mets_1,T61);
  T62 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_413 = YPmet(FUNCODEREF(fun_413),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T63 = fun_413;
  VARSET(Ymet_app_unify,T63);
  lit_264 = YPPsym((P)"met-app?");
  T65 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_414 = YPmet(FUNCODEREF(fun_loop_414),LITREF(lit_5),T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_20)),YPPlist(2,VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Ymet_appQ = YPmet(FUNCODEREF(Ymet_appQ),LITREF(lit_264),T64,ENVNUL,PNUL,YPfalse);
  T66 = Ymet_appQ;
  VARSET(Ymet_appQ,T66);
  lit_265 = YPPsym((P)"ord-app-mets*");
  lit_266 = YPPsym((P)"gf");
  lit_267 = YPPsym((P)"ans");
  lit_268 = YPPsym((P)"ms");
  T68 = YPsig(YPPlist(2,LITREF(lit_267),LITREF(lit_268)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_416 = YPmet(FUNCODEREF(fun_col_416),LITREF(lit_224),T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(2,LITREF(lit_266),LITREF(lit_20)),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yord_app_metsT = YPmet(FUNCODEREF(Yord_app_metsT),LITREF(lit_265),T67,ENVNUL,PNUL,YPfalse);
  T69 = Yord_app_metsT;
  VARSET(Yord_app_metsT,T69);
  lit_269 = YPPsym((P)"ord-app-mets");
  T70 = YPsig(YPPlist(2,LITREF(lit_266),LITREF(lit_20)),YPPlist(1,VARREF(YLgenG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yord_app_mets = YPmet(FUNCODEREF(Yord_app_mets),LITREF(lit_269),T70,ENVNUL,PNUL,YPfalse);
  T71 = Yord_app_mets;
  VARSET(Yord_app_mets,T71);
  lit_270 = YPPsym((P)"@gen-cache-arg-pos");
  T72 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_arg_pos = YPmet(FUNCODEREF(YOgen_cache_arg_pos),LITREF(lit_270),T72,ENVNUL,PNUL,YPfalse);
  T73 = YOgen_cache_arg_pos;
  VARSET(YOgen_cache_arg_pos,T73);
  lit_271 = YPPsym((P)"@gen-cache-arg-pos-setter");
  T74 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_arg_pos_setter = YPmet(FUNCODEREF(YOgen_cache_arg_pos_setter),LITREF(lit_271),T74,ENVNUL,PNUL,YPfalse);
  T75 = YOgen_cache_arg_pos_setter;
  VARSET(YOgen_cache_arg_pos_setter,T75);
  lit_272 = YPPsym((P)"@gen-cache-singletons");
  T76 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_singletons = YPmet(FUNCODEREF(YOgen_cache_singletons),LITREF(lit_272),T76,ENVNUL,PNUL,YPfalse);
  T77 = YOgen_cache_singletons;
  VARSET(YOgen_cache_singletons,T77);
  lit_273 = YPPsym((P)"@gen-cache-singletons-setter");
  T78 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_singletons_setter = YPmet(FUNCODEREF(YOgen_cache_singletons_setter),LITREF(lit_273),T78,ENVNUL,PNUL,YPfalse);
  T79 = YOgen_cache_singletons_setter;
  VARSET(YOgen_cache_singletons_setter,T79);
  lit_274 = YPPsym((P)"@gen-cache-classes");
  T80 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_classes = YPmet(FUNCODEREF(YOgen_cache_classes),LITREF(lit_274),T80,ENVNUL,PNUL,YPfalse);
  T81 = YOgen_cache_classes;
  VARSET(YOgen_cache_classes,T81);
  lit_275 = YPPsym((P)"@gen-cache-classes-setter");
  T82 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_classes_setter = YPmet(FUNCODEREF(YOgen_cache_classes_setter),LITREF(lit_275),T82,ENVNUL,PNUL,YPfalse);
  T83 = YOgen_cache_classes_setter;
  VARSET(YOgen_cache_classes_setter,T83);
  lit_276 = YPPsym((P)"method-accessor-offset");
  T84 = YPsig(YPPlist(3,LITREF(lit_23),LITREF(lit_24),LITREF(lit_20)),YPPlist(3,VARREF(YLgenG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Ymethod_accessor_offset = YPmet(FUNCODEREF(Ymethod_accessor_offset),LITREF(lit_276),T84,ENVNUL,PNUL,YPfalse);
  T85 = Ymethod_accessor_offset;
  VARSET(Ymethod_accessor_offset,T85);
  lit_277 = YPPsym((P)"@singleton-spec?");
  T86 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOsingleton_specQ = YPmet(FUNCODEREF(YOsingleton_specQ),LITREF(lit_277),T86,ENVNUL,PNUL,YPfalse);
  T87 = YOsingleton_specQ;
  VARSET(YOsingleton_specQ,T87);
  lit_278 = YPPsym((P)"@subclass-spec?");
  T88 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOsubclass_specQ = YPmet(FUNCODEREF(YOsubclass_specQ),LITREF(lit_278),T88,ENVNUL,PNUL,YPfalse);
  T89 = YOsubclass_specQ;
  VARSET(YOsubclass_specQ,T89);
  lit_279 = YPPsym((P)"@union-spec?");
  T90 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOunion_specQ = YPmet(FUNCODEREF(YOunion_specQ),LITREF(lit_279),T90,ENVNUL,PNUL,YPfalse);
  T91 = YOunion_specQ;
  VARSET(YOunion_specQ,T91);
  lit_280 = YPPsym((P)"@precise-spec?");
  T92 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOprecise_specQ = YPmet(FUNCODEREF(YOprecise_specQ),LITREF(lit_280),T92,ENVNUL,PNUL,YPfalse);
  T93 = YOprecise_specQ;
  VARSET(YOprecise_specQ,T93);
  lit_281 = YPPsym((P)"@mets-unspecialized-at?");
  lit_282 = YPPsym((P)"pos");
  T95 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_430 = YPmet(FUNCODEREF(fun_430),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(2,LITREF(lit_225),LITREF(lit_282)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmets_unspecialized_atQ = YPmet(FUNCODEREF(YOmets_unspecialized_atQ),LITREF(lit_281),T94,ENVNUL,PNUL,YPfalse);
  T96 = YOmets_unspecialized_atQ;
  VARSET(YOmets_unspecialized_atQ,T96);
  lit_283 = YPPsym((P)"@prune-mets-by-type-at");
  lit_284 = YPPsym((P)"type");
  T98 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_432 = YPmet(FUNCODEREF(fun_432),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(3,LITREF(lit_225),LITREF(lit_284),LITREF(lit_282)),YPPlist(3,VARREF(YLlstG),VARREF(YLtypeG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLmetsG),Ynil);
  YOprune_mets_by_type_at = YPmet(FUNCODEREF(YOprune_mets_by_type_at),LITREF(lit_283),T97,ENVNUL,PNUL,YPfalse);
  T99 = YOprune_mets_by_type_at;
  VARSET(YOprune_mets_by_type_at,T99);
  lit_285 = YPPsym((P)"@mets-specs-at");
  T101 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_434 = YPmet(FUNCODEREF(fun_434),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(YPPlist(2,LITREF(lit_225),LITREF(lit_282)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_specs_at = YPmet(FUNCODEREF(YOmets_specs_at),LITREF(lit_285),T100,ENVNUL,PNUL,YPfalse);
  T102 = YOmets_specs_at;
  VARSET(YOmets_specs_at,T102);
  lit_286 = YPPsym((P)"@mets-singletons-at");
  lit_287 = YPPsym((P)"spec");
  T104 = YPsig(YPPlist(1,LITREF(lit_287)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_436 = YPmet(FUNCODEREF(fun_436),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(2,LITREF(lit_225),LITREF(lit_282)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_singletons_at = YPmet(FUNCODEREF(YOmets_singletons_at),LITREF(lit_286),T103,ENVNUL,PNUL,YPfalse);
  T105 = YOmets_singletons_at;
  VARSET(YOmets_singletons_at,T105);
  lit_288 = YPPsym((P)"@mets-subclasses-at");
  T107 = YPsig(YPPlist(1,LITREF(lit_287)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_438 = YPmet(FUNCODEREF(fun_438),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(2,LITREF(lit_225),LITREF(lit_282)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_subclasses_at = YPmet(FUNCODEREF(YOmets_subclasses_at),LITREF(lit_288),T106,ENVNUL,PNUL,YPfalse);
  T108 = YOmets_subclasses_at;
  VARSET(YOmets_subclasses_at,T108);
  VARSET(YDnul_assocs,VARREF(YPtnul));
  lit_289 = YPPsym((P)"@cache-add");
  lit_290 = YPPsym((P)"v");
  lit_291 = YPPsym((P)"copy");
  T110 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_copy_440 = YPmet(FUNCODEREF(fun_copy_440),LITREF(lit_291),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(3,LITREF(lit_230),LITREF(lit_204),LITREF(lit_290)),YPPlist(3,VARREF(YLtupG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOcache_add = YPmet(FUNCODEREF(YOcache_add),LITREF(lit_289),T109,ENVNUL,PNUL,YPfalse);
  T111 = YOcache_add;
  VARSET(YOcache_add,T111);
  lit_292 = YPPsym((P)"gen-lookup-miss-1-using");
  lit_293 = YPPsym((P)"instance");
  lit_294 = YPPsym((P)"all-assocs");
  lit_295 = YPPsym((P)"all-assocs-setter");
  lit_296 = YPPsym((P)"cache");
  lit_297 = YPPsym((P)"sorted-mets");
  lit_298 = YPPsym((P)"j");
  T113 = YPsig(YPPlist(1,LITREF(lit_298)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_442 = YPmet(FUNCODEREF(fun_loop_442),LITREF(lit_5),T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(10,LITREF(lit_171),LITREF(lit_293),LITREF(lit_294),LITREF(lit_295),LITREF(lit_23),LITREF(lit_296),LITREF(lit_225),LITREF(lit_297),LITREF(lit_17),LITREF(lit_20)),YPPlist(10,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLoptsG)),YPfalse,YPint((P)10),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss_1_using = YPmet(FUNCODEREF(Ygen_lookup_miss_1_using),LITREF(lit_292),T112,ENVNUL,PNUL,YPfalse);
  T114 = Ygen_lookup_miss_1_using;
  VARSET(Ygen_lookup_miss_1_using,T114);
  lit_299 = YPPsym((P)"@specd-args");
  T116 = YPsig(YPPlist(1,LITREF(lit_204)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_copy_444 = YPmet(FUNCODEREF(fun_copy_444),LITREF(lit_291),T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(3,LITREF(lit_20),LITREF(lit_17),LITREF(lit_245)),YPPlist(3,VARREF(YLoptsG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLoptsG),Ynil);
  YOspecd_args = YPmet(FUNCODEREF(YOspecd_args),LITREF(lit_299),T115,ENVNUL,PNUL,YPfalse);
  T117 = YOspecd_args;
  VARSET(YOspecd_args,T117);
  lit_300 = YPPsym((P)"requires-singleton-prec");
  T118 = YPsig(YPPlist(2,LITREF(lit_225),LITREF(lit_282)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yrequires_singleton_prec = YPmet(FUNCODEREF(Yrequires_singleton_prec),LITREF(lit_300),T118,ENVNUL,PNUL,YPfalse);
  T119 = Yrequires_singleton_prec;
  VARSET(Yrequires_singleton_prec,T119);
  lit_301 = YPPsym((P)"ensure-singleton-cache");
  lit_302 = YPPsym((P)"singletons");
  T121 = YPsig(YPPlist(1,LITREF(lit_302)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_447 = YPmet(FUNCODEREF(fun_loop_447),LITREF(lit_5),T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(6,LITREF(lit_23),LITREF(lit_296),LITREF(lit_225),LITREF(lit_297),LITREF(lit_17),LITREF(lit_20)),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  Yensure_singleton_cache = YPmet(FUNCODEREF(Yensure_singleton_cache),LITREF(lit_301),T120,ENVNUL,PNUL,YPfalse);
  T122 = Yensure_singleton_cache;
  VARSET(Yensure_singleton_cache,T122);
  lit_303 = YPPsym((P)"gen-lookup-miss-1");
  lit_304 = YPPsym((P)"ocache");
  T123 = YPsig(YPPlist(6,LITREF(lit_23),LITREF(lit_304),LITREF(lit_225),LITREF(lit_297),LITREF(lit_17),LITREF(lit_20)),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss_1 = YPmet(FUNCODEREF(Ygen_lookup_miss_1),LITREF(lit_303),T123,ENVNUL,PNUL,YPfalse);
  T124 = Ygen_lookup_miss_1;
  VARSET(Ygen_lookup_miss_1,T124);
  lit_305 = YPPsym((P)"gen-lookup-miss");
  T127 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_20)),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T126 = Ygen_lookup_miss = YPmet(FUNCODEREF(Ygen_lookup_miss),LITREF(lit_305),T127,ENVNUL,PNUL,YPfalse);
  T129 = Ygen_lookup_miss;
  T128 = VARSET(Ygen_lookup_miss,T129);
  T125 = T128;
  return T125;
}

P Y___main_10___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
loop:
  T0 = (P)YPpair(VARREF(Ynil),VARREF(Ynil));
  VARSET(YDmissed_dispatch,T0);
  lit_306 = YPPsym((P)"choose-methods");
  lit_307 = YPsb((P)"No applicable methods error when calling %= on %=");
  T1 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_20)),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  Ychoose_methods = YPmet(FUNCODEREF(Ychoose_methods),LITREF(lit_306),T1,ENVNUL,PNUL,YPfalse);
  T2 = Ychoose_methods;
  VARSET(Ychoose_methods,T2);
  lit_308 = YPPsym((P)"%dispatch");
  T3 = YPsig(YPPlist(1,LITREF(lit_20)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YPdispatch = YPmet(FUNCODEREF(YPdispatch),LITREF(lit_308),T3,ENVNUL,PNUL,YPfalse);
  T4 = YPdispatch;
  VARSET(YPdispatch,T4);
  lit_309 = YPPsym((P)"%patch-early-generic");
  lit_310 = YPPsym((P)"generic");
  T5 = YPsig(YPPlist(1,LITREF(lit_310)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPpatch_early_generic = YPmet(FUNCODEREF(YPpatch_early_generic),LITREF(lit_309),T5,ENVNUL,PNUL,YPfalse);
  T6 = YPpatch_early_generic;
  VARSET(YPpatch_early_generic,T6);
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yhead));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yhead_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytail));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytail_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysym_name));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysym_name_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_prop_len));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_prop_len_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_name));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_name_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_parents));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_parents_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_direct_props));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_direct_props_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_ancestors));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_ancestors_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_props));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_props_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_descendents));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_descendents_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_gens));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_gens_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_mets));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_mets_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_forward));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_forward_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_type_cache));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_type_cache_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_id));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_id_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_row));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_row_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytype_object));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytype_object_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytype_class));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytype_class_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytype_elts));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytype_elts_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_owner));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_owner_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_getter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_getter_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_setter_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_type));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_type_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_init));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_init_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_missableQ));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_missableQ_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_arg_pos));
  T8 = CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_arg_pos_setter));
  T7 = T8;
  return T7;
}

P Y___main_11___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
loop:
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_singletons));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_singletons_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_classes));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_classes_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_names));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_names_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_specs));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_specs_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_naryQ));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_naryQ_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_arity));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_arity_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_val));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_val_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_unification_vars));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysig_unification_vars_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_code));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_code_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_name));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_name_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_sig));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_sig_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_env));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_env_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_refs));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_refs_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_src));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_src_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_mets));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_mets_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_cache));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_cache_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_refs));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_refs_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_src));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_src_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_location));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_location_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_count));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_count_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_tup_storage));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_tup_storage_setter));
  lit_311 = YPPsym((P)"fun-names");
  T0 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_names = YPmet(FUNCODEREF(Yfun_names),LITREF(lit_311),T0,ENVNUL,PNUL,YPfalse);
  T1 = Yfun_names;
  VARSET(Yfun_names,T1);
  lit_312 = YPPsym((P)"fun-names-setter");
  T2 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_names_setter = YPmet(FUNCODEREF(Yfun_names_setter),LITREF(lit_312),T2,ENVNUL,PNUL,YPfalse);
  T3 = Yfun_names_setter;
  VARSET(Yfun_names_setter,T3);
  lit_313 = YPPsym((P)"fun-specs");
  T4 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_specs = YPmet(FUNCODEREF(Yfun_specs),LITREF(lit_313),T4,ENVNUL,PNUL,YPfalse);
  T5 = Yfun_specs;
  VARSET(Yfun_specs,T5);
  lit_314 = YPPsym((P)"fun-specs-setter");
  T6 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_specs_setter = YPmet(FUNCODEREF(Yfun_specs_setter),LITREF(lit_314),T6,ENVNUL,PNUL,YPfalse);
  T7 = Yfun_specs_setter;
  VARSET(Yfun_specs_setter,T7);
  lit_315 = YPPsym((P)"fun-nary?");
  T8 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_naryQ = YPmet(FUNCODEREF(Yfun_naryQ),LITREF(lit_315),T8,ENVNUL,PNUL,YPfalse);
  T9 = Yfun_naryQ;
  VARSET(Yfun_naryQ,T9);
  lit_316 = YPPsym((P)"fun-nary?-setter");
  T10 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_naryQ_setter = YPmet(FUNCODEREF(Yfun_naryQ_setter),LITREF(lit_316),T10,ENVNUL,PNUL,YPfalse);
  T11 = Yfun_naryQ_setter;
  VARSET(Yfun_naryQ_setter,T11);
  lit_317 = YPPsym((P)"fun-arity");
  T12 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_arity = YPmet(FUNCODEREF(Yfun_arity),LITREF(lit_317),T12,ENVNUL,PNUL,YPfalse);
  T13 = Yfun_arity;
  VARSET(Yfun_arity,T13);
  lit_318 = YPPsym((P)"fun-arity-setter");
  T14 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_arity_setter = YPmet(FUNCODEREF(Yfun_arity_setter),LITREF(lit_318),T14,ENVNUL,PNUL,YPfalse);
  T15 = Yfun_arity_setter;
  VARSET(Yfun_arity_setter,T15);
  lit_319 = YPPsym((P)"fun-val");
  T16 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_val = YPmet(FUNCODEREF(Yfun_val),LITREF(lit_319),T16,ENVNUL,PNUL,YPfalse);
  T17 = Yfun_val;
  VARSET(Yfun_val,T17);
  lit_320 = YPPsym((P)"fun-val-setter");
  T18 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_val_setter = YPmet(FUNCODEREF(Yfun_val_setter),LITREF(lit_320),T18,ENVNUL,PNUL,YPfalse);
  T19 = Yfun_val_setter;
  VARSET(Yfun_val_setter,T19);
  lit_321 = YPPsym((P)"fun-unification-vars");
  T20 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_unification_vars = YPmet(FUNCODEREF(Yfun_unification_vars),LITREF(lit_321),T20,ENVNUL,PNUL,YPfalse);
  T21 = Yfun_unification_vars;
  VARSET(Yfun_unification_vars,T21);
  lit_322 = YPPsym((P)"fun-unification-vars-setter");
  T22 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_unification_vars_setter = YPmet(FUNCODEREF(Yfun_unification_vars_setter),LITREF(lit_322),T22,ENVNUL,PNUL,YPfalse);
  T23 = Yfun_unification_vars_setter;
  VARSET(Yfun_unification_vars_setter,T23);
  VARSET(YLparentsG,VARREF(YLlstG));
  VARSET(YLpropsG,VARREF(YLlstG));
  lit_323 = YPPsym((P)"object-class");
  T24 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_class = YPmet(FUNCODEREF(Yobject_class),LITREF(lit_323),T24,ENVNUL,PNUL,YPfalse);
  T25 = Yobject_class;
  VARSET(Yobject_class,T25);
  lit_324 = YPPsym((P)"@class-ancestors");
  T26 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOclass_ancestors = YPmet(FUNCODEREF(YOclass_ancestors),LITREF(lit_324),T26,ENVNUL,PNUL,YPfalse);
  T27 = YOclass_ancestors;
  VARSET(YOclass_ancestors,T27);
  lit_325 = YPPsym((P)"class-ordered-ancestors");
  lit_326 = YPPsym((P)"merge-lists");
  lit_327 = YPPsym((P)"partial-cpl");
  lit_328 = YPPsym((P)"remaining-lists");
  lit_329 = YPPsym((P)"unconstrained-class");
  lit_330 = YPPsym((P)"p-in-and-unconstrained-in?");
  lit_331 = YPPsym((P)"p-unconstrained-in?");
  lit_332 = YPPsym((P)"unconstrained-class-in-parents");
  lit_333 = YPPsym((P)"remove-next");
  lit_334 = YPsb((P)"inconsistent precedence graph");
  T34 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_p_in_and_unconstrained_inQ_474 = YPmet(FUNCODEREF(fun_p_in_and_unconstrained_inQ_474),LITREF(lit_330),T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_p_unconstrained_inQ_475 = YPmet(FUNCODEREF(fun_p_unconstrained_inQ_475),LITREF(lit_331),T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(1,LITREF(lit_166)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unconstrained_class_476 = YPmet(FUNCODEREF(fun_unconstrained_class_476),LITREF(lit_329),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unconstrained_class_in_parents_477 = YPmet(FUNCODEREF(fun_unconstrained_class_in_parents_477),LITREF(lit_332),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_remove_next_478 = YPmet(FUNCODEREF(fun_remove_next_478),LITREF(lit_333),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(2,LITREF(lit_327),LITREF(lit_328)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_merge_lists_479 = YPmet(FUNCODEREF(fun_merge_lists_479),LITREF(lit_326),T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(1,LITREF(lit_164)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLparentsG),Ynil);
  Yclass_ordered_ancestors = YPmet(FUNCODEREF(Yclass_ordered_ancestors),LITREF(lit_325),T28,ENVNUL,PNUL,YPfalse);
  T35 = Yclass_ordered_ancestors;
  VARSET(Yclass_ordered_ancestors,T35);
  lit_335 = YPPsym((P)"@class-direct-props");
  T36 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOclass_direct_props = YPmet(FUNCODEREF(YOclass_direct_props),LITREF(lit_335),T36,ENVNUL,PNUL,YPfalse);
  T37 = YOclass_direct_props;
  VARSET(YOclass_direct_props,T37);
  lit_336 = YPPsym((P)"class-ordered-props");
  T38 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLpropsG),Ynil);
  Yclass_ordered_props = YPmet(FUNCODEREF(Yclass_ordered_props),LITREF(lit_336),T38,ENVNUL,PNUL,YPfalse);
  T39 = Yclass_ordered_props;
  VARSET(Yclass_ordered_props,T39);
  lit_337 = YPPsym((P)"del-class");
  T40 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Ydel_class = YPmet(FUNCODEREF(Ydel_class),LITREF(lit_337),T40,ENVNUL,PNUL,YPfalse);
  T41 = Ydel_class;
  VARSET(Ydel_class,T41);
  T43 = VARSET(YTnext_class_idT,YPint((P)0));
  T42 = T43;
  return T42;
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
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215;
loop:
  VARSET(YDmax_classes,YPint((P)500));
  lit_338 = YPPsym((P)"init-class");
  lit_339 = YPsb((P)"Too many classes %=\n");
  lit_340 = YPPsym((P)"parent");
  lit_341 = YPPsym((P)"ancestor");
  T2 = YPsig(YPPlist(1,LITREF(lit_340)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_484 = YPmet(FUNCODEREF(fun_484),YPfalse,T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(1,LITREF(lit_341)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_485 = YPmet(FUNCODEREF(fun_485),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yinit_class = YPmet(FUNCODEREF(Yinit_class),LITREF(lit_338),T0,ENVNUL,PNUL,YPfalse);
  T3 = Yinit_class;
  VARSET(Yinit_class,T3);
  lit_342 = YPPsym((P)"fab-class");
  lit_343 = YPPsym((P)"parents");
  T4 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_343)),YPPlist(2,VARREF(YLsymG),VARREF(YLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  Yfab_class = YPmet(FUNCODEREF(Yfab_class),LITREF(lit_342),T4,ENVNUL,PNUL,YPfalse);
  T5 = Yfab_class;
  VARSET(Yfab_class,T5);
  lit_344 = YPPsym((P)"refab-class");
  lit_345 = YPPsym((P)"old-class");
  T6 = YPsig(YPPlist(2,LITREF(lit_345),LITREF(lit_343)),YPPlist(2,VARREF(YLclassG),VARREF(YLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  Yrefab_class = YPmet(FUNCODEREF(Yrefab_class),LITREF(lit_344),T6,ENVNUL,PNUL,YPfalse);
  T7 = Yrefab_class;
  VARSET(Yrefab_class,T7);
  lit_346 = YPPsym((P)"object-props");
  T8 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_props = YPmet(FUNCODEREF(Yobject_props),LITREF(lit_346),T8,ENVNUL,PNUL,YPfalse);
  T9 = Yobject_props;
  VARSET(Yobject_props,T9);
  lit_347 = YPPsym((P)"object-parents");
  T10 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_parents = YPmet(FUNCODEREF(Yobject_parents),LITREF(lit_347),T10,ENVNUL,PNUL,YPfalse);
  T11 = Yobject_parents;
  VARSET(Yobject_parents,T11);
  VARSET(YDgetter_not_found,YPint((P)-1));
  lit_348 = YPPsym((P)"ensure-fresh-object");
  T12 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yensure_fresh_object = YPmet(FUNCODEREF(Yensure_fresh_object),LITREF(lit_348),T12,ENVNUL,PNUL,YPfalse);
  T13 = Yensure_fresh_object;
  VARSET(Yensure_fresh_object,T13);
  lit_349 = YPPsym((P)"prop-offset");
  lit_350 = YPPsym((P)"object");
  T15 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_18)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_492 = YPmet(FUNCODEREF(fun_loop_492),LITREF(lit_5),T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(YPPlist(2,LITREF(lit_350),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  Yprop_offset = YPmet(FUNCODEREF(Yprop_offset),LITREF(lit_349),T14,ENVNUL,PNUL,YPfalse);
  T16 = Yprop_offset;
  VARSET(Yprop_offset,T16);
  VARSET(YTreport_prop_unbound_errorsQT,YPtrue);
  lit_351 = YPPsym((P)"%prop-unbound-error");
  lit_352 = YPsb((P)"property unbound");
  T17 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPprop_unbound_error = YPmet(FUNCODEREF(YPprop_unbound_error),LITREF(lit_351),T17,ENVNUL,PNUL,YPfalse);
  T18 = YPprop_unbound_error;
  VARSET(YPprop_unbound_error,T18);
  lit_353 = YPPsym((P)"prop-value");
  lit_354 = YPsb((P)"prop %s not found in %=");
  T19 = YPsig(YPPlist(2,LITREF(lit_350),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yprop_value = YPmet(FUNCODEREF(Yprop_value),LITREF(lit_353),T19,ENVNUL,PNUL,YPfalse);
  T20 = Yprop_value;
  VARSET(Yprop_value,T20);
  lit_355 = YPPsym((P)"prop-bound?");
  lit_356 = YPsb((P)"prop %s not found in %=");
  T21 = YPsig(YPPlist(2,LITREF(lit_350),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yprop_boundQ = YPmet(FUNCODEREF(Yprop_boundQ),LITREF(lit_355),T21,ENVNUL,PNUL,YPfalse);
  T22 = Yprop_boundQ;
  VARSET(Yprop_boundQ,T22);
  lit_357 = YPPsym((P)"prop-value-setter");
  lit_358 = YPsb((P)"prop %s not found in %=");
  lit_359 = YPsb((P)"Prop type error");
  T24 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_18)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_497 = YPmet(FUNCODEREF(fun_loop_497),LITREF(lit_5),T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(3,LITREF(lit_30),LITREF(lit_350),LITREF(lit_16)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yprop_value_setter = YPmet(FUNCODEREF(Yprop_value_setter),LITREF(lit_357),T23,ENVNUL,PNUL,YPfalse);
  T25 = Yprop_value_setter;
  VARSET(Yprop_value_setter,T25);
  lit_360 = YPPsym((P)"find-getter");
  lit_361 = YPsb((P)"COULDN'T FIND GETTER");
  T27 = YPsig(YPPlist(1,LITREF(lit_225)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_499 = YPmet(FUNCODEREF(fun_loop_499),LITREF(lit_5),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_16)),YPPlist(2,VARREF(YLclassG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLmetG),Ynil);
  Yfind_getter = YPmet(FUNCODEREF(Yfind_getter),LITREF(lit_360),T26,ENVNUL,PNUL,YPfalse);
  T28 = Yfind_getter;
  VARSET(Yfind_getter,T28);
  lit_362 = YPPsym((P)"find-setter");
  lit_363 = YPPsym((P)"zetter");
  lit_364 = YPsb((P)"COULDN'T FIND SETTER");
  T30 = YPsig(YPPlist(1,LITREF(lit_225)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_501 = YPmet(FUNCODEREF(fun_loop_501),LITREF(lit_5),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(3,LITREF(lit_15),LITREF(lit_284),LITREF(lit_363)),YPPlist(3,VARREF(YLclassG),VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)3),VARREF(YLmetG),Ynil);
  Yfind_setter = YPmet(FUNCODEREF(Yfind_setter),LITREF(lit_362),T29,ENVNUL,PNUL,YPfalse);
  T31 = Yfind_setter;
  VARSET(Yfind_setter,T31);
  lit_365 = YPPsym((P)"forward-class");
  T33 = YPsig(YPPlist(1,LITREF(lit_218)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_503 = YPmet(FUNCODEREF(fun_503),YPfalse,T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(1,LITREF(lit_345)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yforward_class = YPmet(FUNCODEREF(Yforward_class),LITREF(lit_365),T32,ENVNUL,PNUL,YPfalse);
  T34 = Yforward_class;
  VARSET(Yforward_class,T34);
  lit_366 = YPPsym((P)"@do-children");
  lit_367 = YPPsym((P)"visit");
  T36 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_visit_505 = YPmet(FUNCODEREF(fun_visit_505),LITREF(lit_367),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(2,LITREF(lit_174),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo_children = YPmet(FUNCODEREF(YOdo_children),LITREF(lit_366),T35,ENVNUL,PNUL,YPfalse);
  T37 = YOdo_children;
  VARSET(YOdo_children,T37);
  lit_368 = YPPsym((P)"%prop");
  lit_369 = YPPsym((P)"setter");
  T39 = YPsig(YPPlist(1,LITREF(lit_27)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_507 = YPmet(FUNCODEREF(fun_507),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(5,LITREF(lit_15),LITREF(lit_16),LITREF(lit_369),LITREF(lit_284),LITREF(lit_191)),YPPlist(5,VARREF(YLclassG),VARREF(YLgenG),VARREF(YLgenG),VARREF(YLtypeG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YPprop = YPmet(FUNCODEREF(YPprop),LITREF(lit_368),T38,ENVNUL,PNUL,YPfalse);
  T40 = YPprop;
  VARSET(YPprop,T40);
  lit_370 = YPPsym((P)"update-instance-for-changed-class");
  T41 = YPsig(YPPlist(1,LITREF(lit_350)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yupdate_instance_for_changed_class = YPmet(FUNCODEREF(Yupdate_instance_for_changed_class),LITREF(lit_370),T41,ENVNUL,PNUL,YPfalse);
  T42 = Yupdate_instance_for_changed_class;
  VARSET(Yupdate_instance_for_changed_class,T42);
  VARSET(Yadd_prop,VARREF(YPprop));
  lit_371 = YPPsym((P)"patch-early-classes");
  T43 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ypatch_early_classes = YPmet(FUNCODEREF(Ypatch_early_classes),LITREF(lit_371),T43,ENVNUL,PNUL,YPfalse);
  T44 = Ypatch_early_classes;
  VARSET(Ypatch_early_classes,T44);
  CALL0(1,VARREF(Ypatch_early_classes));
  lit_372 = YPPsym((P)"fab-gen");
  lit_373 = YPPsym((P)"names");
  lit_374 = YPPsym((P)"nary?");
  lit_375 = YPPsym((P)"val");
  T45 = YPsig(YPPlist(6,LITREF(lit_1),LITREF(lit_373),LITREF(lit_223),LITREF(lit_374),LITREF(lit_375),LITREF(lit_225)),YPPlist(6,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLlogG),VARREF(YLtypeG),VARREF(YLlstG)),YPfalse,YPint((P)6),VARREF(YLgenG),Ynil);
  Yfab_gen = YPmet(FUNCODEREF(Yfab_gen),LITREF(lit_372),T45,ENVNUL,PNUL,YPfalse);
  T46 = Yfab_gen;
  VARSET(Yfab_gen,T46);
  lit_376 = YPPsym((P)"gen-from-met");
  T48 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_513 = YPmet(FUNCODEREF(fun_513),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLgenG),Ynil);
  Ygen_from_met = YPmet(FUNCODEREF(Ygen_from_met),LITREF(lit_376),T47,ENVNUL,PNUL,YPfalse);
  T49 = Ygen_from_met;
  VARSET(Ygen_from_met,T49);
  lit_377 = YPPsym((P)"%define-method");
  T50 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  YPdefine_method = YPmet(FUNCODEREF(YPdefine_method),LITREF(lit_377),T50,ENVNUL,PNUL,YPfalse);
  T51 = YPdefine_method;
  VARSET(YPdefine_method,T51);
  lit_378 = YPPsym((P)"unexec");
  lit_379 = YPPsym((P)"fun");
  T52 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_379)),YPPlist(2,VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yunexec = YPmet(FUNCODEREF(Yunexec),LITREF(lit_378),T52,ENVNUL,PNUL,YPfalse);
  T53 = Yunexec;
  VARSET(Yunexec,T53);
  lit_380 = YPPsym((P)"new");
  lit_381 = YPPsym((P)"inits");
  T55 = YPsig(YPPlist(2,LITREF(lit_340),LITREF(lit_381)),YPPlist(1,VARREF(YLtypeG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T54 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_380),T55,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ynew,T54);
  T56 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_517 = YPmet(FUNCODEREF(fun_loop_517),LITREF(lit_5),T56,ENVNUL,PNUL,YPfalse);
  lit_382 = YPPsym((P)"@new");
  T57 = YPsig(YPPlist(2,LITREF(lit_340),LITREF(lit_381)),YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YOnew = YPmet(FUNCODEREF(YOnew),LITREF(lit_382),T57,ENVNUL,PNUL,YPfalse);
  T58 = YOnew;
  VARSET(YOnew,T58);
  T59 = YPsig(YPPlist(2,LITREF(lit_340),LITREF(lit_381)),YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_520 = YPmet(FUNCODEREF(fun_new_520),LITREF(lit_380),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(Ynew);
  if (T62 != YPfalse) {
    T61 = VARREF(Ynew);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_new_520;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(Ynew,T60);
  lit_383 = YPPsym((P)"subtype?");
  T65 = YPsig(YPPlist(2,LITREF(lit_240),LITREF(lit_241)),YPPlist(2,VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T64 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_383),T65,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YsubtypeQ,T64);
  T67 = YPsig(YPPlist(1,LITREF(lit_230)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_521 = YPmet(FUNCODEREF(fun_521),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(2,LITREF(lit_240),LITREF(lit_241)),YPPlist(2,VARREF(YLunionG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_522 = YPmet(FUNCODEREF(fun_subtypeQ_522),LITREF(lit_383),T66,ENVNUL,PNUL,YPfalse);
  T70 = BOUNDP(YsubtypeQ);
  if (T70 != YPfalse) {
    T69 = VARREF(YsubtypeQ);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_subtypeQ_522;
  T68 = CALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YsubtypeQ,T68);
  T73 = YPsig(YPPlist(1,LITREF(lit_230)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_523 = YPmet(FUNCODEREF(fun_523),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(YPPlist(2,LITREF(lit_240),LITREF(lit_241)),YPPlist(2,VARREF(YLtypeG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_524 = YPmet(FUNCODEREF(fun_subtypeQ_524),LITREF(lit_383),T72,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(YsubtypeQ);
  if (T76 != YPfalse) {
    T75 = VARREF(YsubtypeQ);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_subtypeQ_524;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YsubtypeQ,T74);
  T79 = YPsig(YPPlist(1,LITREF(lit_230)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_525 = YPmet(FUNCODEREF(fun_525),YPfalse,T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(YPPlist(2,LITREF(lit_240),LITREF(lit_241)),YPPlist(2,VARREF(YLunionG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_526 = YPmet(FUNCODEREF(fun_subtypeQ_526),LITREF(lit_383),T78,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YsubtypeQ);
  if (T82 != YPfalse) {
    T81 = VARREF(YsubtypeQ);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_subtypeQ_526;
  T80 = CALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YsubtypeQ,T80);
  T84 = YPsig(YPPlist(2,LITREF(lit_240),LITREF(lit_241)),YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_527 = YPmet(FUNCODEREF(fun_subtypeQ_527),LITREF(lit_383),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YsubtypeQ);
  if (T87 != YPfalse) {
    T86 = VARREF(YsubtypeQ);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_subtypeQ_527;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YsubtypeQ,T85);
  T89 = YPsig(YPPlist(2,LITREF(lit_240),LITREF(lit_241)),YPPlist(2,VARREF(YLsingletonG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_528 = YPmet(FUNCODEREF(fun_subtypeQ_528),LITREF(lit_383),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YsubtypeQ);
  if (T92 != YPfalse) {
    T91 = VARREF(YsubtypeQ);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_subtypeQ_528;
  T90 = CALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YsubtypeQ,T90);
  T94 = YPsig(YPPlist(2,LITREF(lit_240),LITREF(lit_241)),YPPlist(2,VARREF(YLsubclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_529 = YPmet(FUNCODEREF(fun_subtypeQ_529),LITREF(lit_383),T94,ENVNUL,PNUL,YPfalse);
  T97 = BOUNDP(YsubtypeQ);
  if (T97 != YPfalse) {
    T96 = VARREF(YsubtypeQ);
  } else {
    T96 = YPfalse;
  }
  T98 = fun_subtypeQ_529;
  T95 = CALL2(1,VARREF(YPdefine_method),T96,T98);
  VARSET(YsubtypeQ,T95);
  T99 = YPsig(YPPlist(2,LITREF(lit_240),LITREF(lit_241)),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_530 = YPmet(FUNCODEREF(fun_subtypeQ_530),LITREF(lit_383),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(YsubtypeQ);
  if (T102 != YPfalse) {
    T101 = VARREF(YsubtypeQ);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_subtypeQ_530;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YsubtypeQ,T100);
  T104 = YPsig(YPPlist(2,LITREF(lit_240),LITREF(lit_241)),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_531 = YPmet(FUNCODEREF(fun_subtypeQ_531),LITREF(lit_383),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YsubtypeQ);
  if (T107 != YPfalse) {
    T106 = VARREF(YsubtypeQ);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_subtypeQ_531;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YsubtypeQ,T105);
  T109 = YPsig(YPPlist(2,LITREF(lit_240),LITREF(lit_241)),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_532 = YPmet(FUNCODEREF(fun_subtypeQ_532),LITREF(lit_383),T109,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YsubtypeQ);
  if (T112 != YPfalse) {
    T111 = VARREF(YsubtypeQ);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_subtypeQ_532;
  T110 = CALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YsubtypeQ,T110);
  T114 = YPsig(YPPlist(2,LITREF(lit_240),LITREF(lit_241)),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_533 = YPmet(FUNCODEREF(fun_subtypeQ_533),LITREF(lit_383),T114,ENVNUL,PNUL,YPfalse);
  T117 = BOUNDP(YsubtypeQ);
  if (T117 != YPfalse) {
    T116 = VARREF(YsubtypeQ);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_subtypeQ_533;
  T115 = CALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YsubtypeQ,T115);
  T119 = YPsig(YPPlist(2,LITREF(lit_240),LITREF(lit_241)),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_534 = YPmet(FUNCODEREF(fun_subtypeQ_534),LITREF(lit_383),T119,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YsubtypeQ);
  if (T122 != YPfalse) {
    T121 = VARREF(YsubtypeQ);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_subtypeQ_534;
  T120 = CALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YsubtypeQ,T120);
  T124 = YPsig(YPPlist(2,LITREF(lit_240),LITREF(lit_241)),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_535 = YPmet(FUNCODEREF(fun_subtypeQ_535),LITREF(lit_383),T124,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YsubtypeQ);
  if (T127 != YPfalse) {
    T126 = VARREF(YsubtypeQ);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_subtypeQ_535;
  T125 = CALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YsubtypeQ,T125);
  lit_384 = YPPsym((P)"isa?");
  T130 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_230)),YPPlist(2,VARREF(YLanyG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T129 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_384),T130,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YisaQ,T129);
  T131 = YPsig(YPPlist(2,LITREF(lit_229),LITREF(lit_230)),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_536 = YPmet(FUNCODEREF(fun_isaQ_536),LITREF(lit_384),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YisaQ);
  if (T134 != YPfalse) {
    T133 = VARREF(YisaQ);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_isaQ_536;
  T132 = CALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YisaQ,T132);
  T136 = YPsig(YPPlist(2,LITREF(lit_229),LITREF(lit_230)),YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_537 = YPmet(FUNCODEREF(fun_isaQ_537),LITREF(lit_384),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YisaQ);
  if (T139 != YPfalse) {
    T138 = VARREF(YisaQ);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_isaQ_537;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YisaQ,T137);
  T141 = YPsig(YPPlist(2,LITREF(lit_229),LITREF(lit_230)),YPPlist(2,VARREF(YLanyG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_538 = YPmet(FUNCODEREF(fun_isaQ_538),LITREF(lit_384),T141,ENVNUL,PNUL,YPfalse);
  T144 = BOUNDP(YisaQ);
  if (T144 != YPfalse) {
    T143 = VARREF(YisaQ);
  } else {
    T143 = YPfalse;
  }
  T145 = fun_isaQ_538;
  T142 = CALL2(1,VARREF(YPdefine_method),T143,T145);
  VARSET(YisaQ,T142);
  lit_385 = YPPsym((P)"u");
  T147 = YPsig(YPPlist(1,LITREF(lit_230)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_539 = YPmet(FUNCODEREF(fun_539),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(2,LITREF(lit_229),LITREF(lit_385)),YPPlist(2,VARREF(YLanyG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_540 = YPmet(FUNCODEREF(fun_isaQ_540),LITREF(lit_384),T146,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YisaQ);
  if (T150 != YPfalse) {
    T149 = VARREF(YisaQ);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_isaQ_540;
  T148 = CALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YisaQ,T148);
  lit_386 = YPPsym((P)"order-specs");
  T153 = YPsig(YPPlist(3,LITREF(lit_240),LITREF(lit_241),LITREF(lit_245)),YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T152 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_386),T153,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yorder_specs,T152);
  T154 = YPsig(YPPlist(3,LITREF(lit_240),LITREF(lit_241),LITREF(lit_245)),YPPlist(3,VARREF(YLsingletonG),VARREF(YLsingletonG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_order_specs_541 = YPmet(FUNCODEREF(fun_order_specs_541),LITREF(lit_386),T154,ENVNUL,PNUL,YPfalse);
  T157 = BOUNDP(Yorder_specs);
  if (T157 != YPfalse) {
    T156 = VARREF(Yorder_specs);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_order_specs_541;
  T155 = CALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(Yorder_specs,T155);
  T159 = YPsig(YPPlist(3,LITREF(lit_240),LITREF(lit_241),LITREF(lit_245)),YPPlist(3,VARREF(YLsingletonG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_order_specs_542 = YPmet(FUNCODEREF(fun_order_specs_542),LITREF(lit_386),T159,ENVNUL,PNUL,YPfalse);
  T162 = BOUNDP(Yorder_specs);
  if (T162 != YPfalse) {
    T161 = VARREF(Yorder_specs);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_order_specs_542;
  T160 = CALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(Yorder_specs,T160);
  T164 = YPsig(YPPlist(3,LITREF(lit_240),LITREF(lit_241),LITREF(lit_245)),YPPlist(3,VARREF(YLsubclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_order_specs_543 = YPmet(FUNCODEREF(fun_order_specs_543),LITREF(lit_386),T164,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(Yorder_specs);
  if (T167 != YPfalse) {
    T166 = VARREF(Yorder_specs);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_order_specs_543;
  T165 = CALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(Yorder_specs,T165);
  T169 = YPsig(YPPlist(3,LITREF(lit_240),LITREF(lit_241),LITREF(lit_245)),YPPlist(3,VARREF(YLsubclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_order_specs_544 = YPmet(FUNCODEREF(fun_order_specs_544),LITREF(lit_386),T169,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(Yorder_specs);
  if (T172 != YPfalse) {
    T171 = VARREF(Yorder_specs);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_order_specs_544;
  T170 = CALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(Yorder_specs,T170);
  T174 = YPsig(YPPlist(3,LITREF(lit_240),LITREF(lit_241),LITREF(lit_245)),YPPlist(3,VARREF(YLclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_order_specs_545 = YPmet(FUNCODEREF(fun_order_specs_545),LITREF(lit_386),T174,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(Yorder_specs);
  if (T177 != YPfalse) {
    T176 = VARREF(Yorder_specs);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_order_specs_545;
  T175 = CALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(Yorder_specs,T175);
  T179 = YPsig(YPPlist(3,LITREF(lit_240),LITREF(lit_241),LITREF(lit_245)),YPPlist(3,VARREF(YLclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_order_specs_546 = YPmet(FUNCODEREF(fun_order_specs_546),LITREF(lit_386),T179,ENVNUL,PNUL,YPfalse);
  T182 = BOUNDP(Yorder_specs);
  if (T182 != YPfalse) {
    T181 = VARREF(Yorder_specs);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_order_specs_546;
  T180 = CALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(Yorder_specs,T180);
  T184 = YPsig(YPPlist(3,LITREF(lit_240),LITREF(lit_241),LITREF(lit_245)),YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_order_specs_547 = YPmet(FUNCODEREF(fun_order_specs_547),LITREF(lit_386),T184,ENVNUL,PNUL,YPfalse);
  T187 = BOUNDP(Yorder_specs);
  if (T187 != YPfalse) {
    T186 = VARREF(Yorder_specs);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_order_specs_547;
  T185 = CALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(Yorder_specs,T185);
  lit_387 = YPPsym((P)"may-isa?");
  T190 = YPsig(YPPlist(2,LITREF(lit_164),LITREF(lit_230)),YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T189 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_387),T190,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ymay_isaQ,T189);
  T191 = YPsig(YPPlist(2,LITREF(lit_164),LITREF(lit_230)),YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_may_isaQ_548 = YPmet(FUNCODEREF(fun_may_isaQ_548),LITREF(lit_387),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(Ymay_isaQ);
  if (T194 != YPfalse) {
    T193 = VARREF(Ymay_isaQ);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_may_isaQ_548;
  T192 = CALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(Ymay_isaQ,T192);
  T196 = YPsig(YPPlist(2,LITREF(lit_164),LITREF(lit_230)),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_may_isaQ_549 = YPmet(FUNCODEREF(fun_may_isaQ_549),LITREF(lit_387),T196,ENVNUL,PNUL,YPfalse);
  T199 = BOUNDP(Ymay_isaQ);
  if (T199 != YPfalse) {
    T198 = VARREF(Ymay_isaQ);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_may_isaQ_549;
  T197 = CALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(Ymay_isaQ,T197);
  T201 = YPsig(YPPlist(2,LITREF(lit_164),LITREF(lit_230)),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_may_isaQ_550 = YPmet(FUNCODEREF(fun_may_isaQ_550),LITREF(lit_387),T201,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(Ymay_isaQ);
  if (T204 != YPfalse) {
    T203 = VARREF(Ymay_isaQ);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_may_isaQ_550;
  T202 = CALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(Ymay_isaQ,T202);
  lit_388 = YPPsym((P)"some?");
  lit_389 = YPPsym((P)"all?");
  lit_390 = YPPsym((P)"elts");
  T210 = YPsig(YPPlist(3,LITREF(lit_388),LITREF(lit_389),LITREF(lit_390)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T209 = fun_loop_551 = YPmet(FUNCODEREF(fun_loop_551),LITREF(lit_5),T210,ENVNUL,PNUL,YPfalse);
  T208 = YPsig(YPPlist(2,LITREF(lit_164),LITREF(lit_230)),YPPlist(2,VARREF(YLclassG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T207 = fun_may_isaQ_552 = YPmet(FUNCODEREF(fun_may_isaQ_552),LITREF(lit_387),T208,ENVNUL,PNUL,YPfalse);
  T214 = BOUNDP(Ymay_isaQ);
  if (T214 != YPfalse) {
    T213 = VARREF(Ymay_isaQ);
  } else {
    T213 = YPfalse;
  }
  T215 = fun_may_isaQ_552;
  T212 = CALL2(1,VARREF(YPdefine_method),T213,T215);
  T211 = VARSET(Ymay_isaQ,T212);
  T206 = T211;
  return T206;
}

P Y___main_13___() {
  P T0;
loop:
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
  {"%class-type-cache-setter", NULL},
  {"class-props", &Yclass_props},
  {"<replace-generic-restart>", &YLreplace_generic_restartG},
  {"%sig-unification-vars-setter", NULL},
  {"@fun-arity", &YOfun_arity},
  {"%define-tagged-structure", NULL},
  {"%prop-owner-setter", NULL},
  {"<props>", &YLpropsG},
  {"%define-repeated-structure", NULL},
  {"%define-structure", NULL},
  {"$tag-len", NULL},
  {"class-forward", &Yclass_forward},
  {"@@empty?", &YOOemptyQ},
  {"new", &Ynew},
  {"%force-out", NULL},
  {"@del-dups", &YOdel_dups},
  {"@pair", NULL},
  {"@fold", &YOfold},
  {"<class>", &YLclassG},
  {"%class-ancestors-setter", NULL},
  {"%class-forward-setter", NULL},
  {"gen-cache-missable?", &Ygen_cache_missableQ},
  {"%sig-val", NULL},
  {"%sym-nam-setter", NULL},
  {"%sig-val-setter", NULL},
  {"try", NULL},
  {"%fasin", NULL},
  {"%int", NULL},
  {"@singleton-spec?", &YOsingleton_specQ},
  {"*next-class-id*", &YTnext_class_idT},
  {"gen-cache-classes-setter", &Ygen_cache_classes_setter},
  {"%class-ancestors", NULL},
  {"%%rfab", NULL},
  {"%ready", NULL},
  {"%class-row-setter", NULL},
  {"fun-mets", &Yfun_mets},
  {"class-mets-setter", &Yclass_mets_setter},
  {"dc", NULL},
  {"%gen-cache-count-setter", NULL},
  {"<seq.>", &YLseqIG},
  {"<int>", &YLintG},
  {"$gen-cache-singletons-offset", &YDgen_cache_singletons_offset},
  {"gen-src-setter", &Ygen_src_setter},
  {"fun-nary?-setter", &Yfun_naryQ_setter},
  {"%add-met", &YPadd_met},
  {"%class-props-setter", NULL},
  {"@+", NULL},
  {"@pick", &YOpick},
  {"@elt", &YOelt},
  {"fab-class", &Yfab_class},
  {"%define-structure-accessors", NULL},
  {"%rev!", NULL},
  {"@fun-nary?", &YOfun_naryQ},
  {"%rlen", NULL},
  {"%slen", NULL},
  {"requires-singleton-prec", &Yrequires_singleton_prec},
  {"%current-in-port", NULL},
  {"%flo-dat-setter", NULL},
  {"gen-cache-classes", &Ygen_cache_classes},
  {"not", &Ynot},
  {"%subclass", NULL},
  {"%empty?", NULL},
  {"%met-prop-len", &YPmet_prop_len},
  {"---main-5---", NULL},
  {"class-mets", &Yclass_mets},
  {"prop-bound?", &Yprop_boundQ},
  {"sig-nary?-setter", &Ysig_naryQ_setter},
  {"%it/", NULL},
  {"%*used-symbols-too-early*", &YPTused_symbols_too_earlyT},
  {"%f=", NULL},
  {"%%tfab", NULL},
  {"<mets>", &YLmetsG},
  {"gen-src", &Ygen_src},
  {"prop-value-at", NULL},
  {"%class-descendents", NULL},
  {"class-id-setter", &Yclass_id_setter},
  {"%fcos", NULL},
  {"%sb", NULL},
  {"@singleton-isa?", NULL},
  {"%prop", &YPprop},
  {"*report-prop-unbound-errors?*", &YTreport_prop_unbound_errorsQT},
  {"fin", NULL},
  {"%selt-setter", NULL},
  {"%code-ref", NULL},
  {"@class<", &YOclassL},
  {"<gen-cache>", &YLgen_cacheG},
  {"<type>", &YLtypeG},
  {"%rnul", &YPrnul},
  {"ord-app-mets-1", &Yord_app_mets_1},
  {"%os-val-setter", NULL},
  {"tail-setter", &Ytail_setter},
  {"fun", NULL},
  {"fun-nary?", &Yfun_naryQ},
  {"%met-code", NULL},
  {"%sig-arity-setter", NULL},
  {"@mets-singletons-at", &YOmets_singletons_at},
  {"sig-nary?", &Ysig_naryQ},
  {"%head-setter", NULL},
  {"def", NULL},
  {"%gen-name", NULL},
  {"%class-name", NULL},
  {"@fun-specs", &YOfun_specs},
  {"%class-parents-setter", NULL},
  {"<fun>", &YLfunG},
  {"$direct-object-class", &YDdirect_object_class},
  {"@mem?", &YOmemQ},
  {"%class-prop-len", NULL},
  {"class-id", &Yclass_id},
  {"%gen", NULL},
  {"sig-unification-vars-setter", &Ysig_unification_vars_setter},
  {"%i=", NULL},
  {"%gen-sig-setter", NULL},
  {"ord-app-mets*", &Yord_app_metsT},
  {"%ib", NULL},
  {"%untag-into", NULL},
  {"%fi2f", NULL},
  {"opts-tup-storage", &Yopts_tup_storage},
  {"%ru", NULL},
  {"type-class-setter", &Ytype_class_setter},
  {"%type-class-setter", NULL},
  {"---main-9---", NULL},
  {"%close-in-port", NULL},
  {"method-accessor-offset", &Ymethod_accessor_offset},
  {"or", NULL},
  {"<seq>", &YLseqG},
  {"%trace-on", NULL},
  {"@order-specs-class", &YOorder_specs_class},
  {"---main-10---", NULL},
  {"<num>", &YLnumG},
  {"tail", &Ytail},
  {"%reparent-class-shells", NULL},
  {"%early-dispatch", &YPearly_dispatch},
  {"%prop-getter", NULL},
  {"%tu", NULL},
  {"@<", NULL},
  {"%gen-cache-missable?-setter", NULL},
  {"%indirect-object?", NULL},
  {"class-name-setter", &Yclass_name_setter},
  {"@head", NULL},
  {"%gen-src-setter", NULL},
  {"%sp-reg-setter", NULL},
  {"gen-lookup-miss-1", &Ygen_lookup_miss_1},
  {"unexec", &Yunexec},
  {"set", NULL},
  {"%fsinh", NULL},
  {"%head", NULL},
  {"sig-unification-vars", &Ysig_unification_vars},
  {"%prop-type", NULL},
  {"prop-value", &Yprop_value},
  {"%i^", NULL},
  {"@@==", &YOOEE},
  {"%symbols-ready?", &YPsymbols_readyQ},
  {"%iu", NULL},
  {"force-names-into-boot-module", NULL},
  {"@telt-setter", NULL},
  {"bound?", NULL},
  {"%puts", NULL},
  {"%build-runtime-modules", NULL},
  {"prop-getter-setter", &Yprop_getter_setter},
  {"@fun-names", &YOfun_names},
  {"<body>", &YLbodyG},
  {"@class-isa?", NULL},
  {"met-app-unify", &Ymet_app_unify},
  {"---main-2---", NULL},
  {"%define-parents", NULL},
  {"gen-add-met", &Ygen_add_met},
  {"class-name", &Yclass_name},
  {"fun-specs-setter", &Yfun_specs_setter},
  {"%symbols", &YPsymbols},
  {"%opts-tup-tup-setter", NULL},
  {"%str!", NULL},
  {"class-ancestors-setter", &Yclass_ancestors_setter},
  {"%sig-arity", NULL},
  {"%gen-code-setter", NULL},
  {"%define-accessor", NULL},
  {"%flog", NULL},
  {"isa?", &YisaQ},
  {"%open-in-file", NULL},
  {"%tlen", NULL},
  {"dl", NULL},
  {"@fab", &YOfab},
  {"%gen-cache-arg-pos-setter", NULL},
  {"$missed-dispatch", &YDmissed_dispatch},
  {"<sym>", &YLsymG},
  {"%loc-off-setter", NULL},
  {"file-opening-error", &Yfile_opening_error},
  {"prop-getter", &Yprop_getter},
  {"%opts-count-setter", NULL},
  {"$nul-assocs", &YDnul_assocs},
  {"%fsin", NULL},
  {"%elt-setter", NULL},
  {"%sp-reg", NULL},
  {"@mets-specs-at", &YOmets_specs_at},
  {"%prop-unbound-error", &YPprop_unbound_error},
  {"@gen-cache-classes-setter", &YOgen_cache_classes_setter},
  {"%elt", NULL},
  {"nul-prop", &Ynul_prop},
  {"@may-isa?", &YOmay_isaQ},
  {"%gen-code", NULL},
  {"type-error", &Ytype_error},
  {"%fu", NULL},
  {"*early-classes*", &YTearly_classesT},
  {"fun-sig", &Yfun_sig},
  {"met-app?", &Ymet_appQ},
  {"class-ancestors", &Yclass_ancestors},
  {"<col!>", &YLcolXG},
  {"keyboard-interrupt", &Ykeyboard_interrupt},
  {"%class-forward", NULL},
  {"%gen-mets", NULL},
  {"def-fun/sig-accessor", NULL},
  {"@class-ancestors", &YOclass_ancestors},
  {"<chr>", &YLchrG},
  {"%sig-names-setter", NULL},
  {"%bb", NULL},
  {"*restarts-ok?*", &YTrestarts_okQT},
  {"fun-src-setter", &Yfun_src_setter},
  {"*boot-macro-module-names*", &YTboot_macro_module_namesT},
  {"handler-info-arguments", &Yhandler_info_arguments},
  {"<prop>", &YLpropG},
  {"%newline", NULL},
  {"%new", NULL},
  {"%su", NULL},
  {"%sig-specs-setter", NULL},
  {"init-class", &Yinit_class},
  {"%sig-unification-vars", NULL},
  {"%gen-cache-classes-setter", NULL},
  {"prop-init-setter", &Yprop_init_setter},
  {"fun-specs", &Yfun_specs},
  {"%define-method", &YPdefine_method},
  {"%tail", NULL},
  {"%met-src-setter", NULL},
  {"fun-val", &Yfun_val},
  {"@do-children", &YOdo_children},
  {"*boot-macro-expanders*", &YTboot_macro_expandersT},
  {"@tlen", NULL},
  {"class-ordered-ancestors", &Yclass_ordered_ancestors},
  {"object-props", &Yobject_props},
  {"%class-mets-setter", NULL},
  {"<specs>", &YLspecsG},
  {"%opts-tup-count", NULL},
  {"%prop-init-setter", NULL},
  {"%chr", NULL},
  {"@find", &YOfind},
  {"%facos", NULL},
  {"%*start-running-at*", &YPTstart_running_atT},
  {"@gen-cache-classes", &YOgen_cache_classes},
  {"@head-setter", NULL},
  {"@union-spec?", &YOunion_specQ},
  {"@precise-spec?", &YOprecise_specQ},
  {"%compute-ancestors", NULL},
  {"gen-cache-singletons-setter", &Ygen_cache_singletons_setter},
  {"fun-congruent?", &Yfun_congruentQ},
  {"%ready?", NULL},
  {"@isa?", &YOisaQ},
  {"%fb", NULL},
  {"%fun-cache", NULL},
  {"fun-src", &Yfun_src},
  {"%tup!", NULL},
  {"%flo", NULL},
  {"%prop-type-setter", NULL},
  {"fun-sig-setter", &Yfun_sig_setter},
  {"fun-refs-setter", &Yfun_refs_setter},
  {"%invoke-debugger", NULL},
  {"order-mets", &Yorder_mets},
  {"fun-mets-setter", &Yfun_mets_setter},
  {"%prop-elt", NULL},
  {"@gen-cache-arg-pos-setter", &YOgen_cache_arg_pos_setter},
  {"%ft/", NULL},
  {"prop-init", &Yprop_init},
  {"%snul", &YPsnul},
  {"<sig>", &YLsigG},
  {"gen-refs-setter", &Ygen_refs_setter},
  {"%ir", NULL},
  {"%fcosh", NULL},
  {"@fun-mets-setter", &YOfun_mets_setter},
  {"fun-same-met?", &Yfun_same_metQ},
  {"%peek", NULL},
  {"error", &Yerror},
  {"use/export", NULL},
  {"prop-type-setter", &Yprop_type_setter},
  {"%f-", NULL},
  {"@map", &YOmap},
  {"%met-sig", NULL},
  {"%prop-owner", NULL},
  {"%class-id", NULL},
  {"<opts-tup>", &YLopts_tupG},
  {"object-class", &Yobject_class},
  {"%opts-tup", NULL},
  {"$tag-msk", NULL},
  {"%prop-elt-setter", NULL},
  {"---main-3---", NULL},
  {"%c=", NULL},
  {"<str>", &YLstrG},
  {"%class-row", NULL},
  {"%prop-setter-setter", NULL},
  {"type-object-setter", &Ytype_object_setter},
  {"del-class", &Ydel_class},
  {"gen-cache-singletons", &Ygen_cache_singletons},
  {"type-class", &Ytype_class},
  {"gen-lookup-1", NULL},
  {"@subtype?", &YOsubtypeQ},
  {"%ftanh", NULL},
  {"%met-refs-setter", NULL},
  {"class-gens", &Yclass_gens},
  {"sig-specs-setter", &Ysig_specs_setter},
  {"%selt", NULL},
  {"@all2?", &YOall2Q},
  {"%fab-code-refs", NULL},
  {"%file-exists?", NULL},
  {"gen-refs", &Ygen_refs},
  {"class-type-cache-setter", &Yclass_type_cache_setter},
  {"%class-direct-props-setter", NULL},
  {"%class", NULL},
  {"class-gens-setter", &Yclass_gens_setter},
  {"<col.>", &YLcolIG},
  {"order-specs", &Yorder_specs},
  {"opts-count-setter", &Yopts_count_setter},
  {"<mag>", &YLmagG},
  {"<simple-handler-info>", &YLsimple_handler_infoG},
  {"gen-from-met", &Ygen_from_met},
  {"fun-names-setter", &Yfun_names_setter},
  {"quote", NULL},
  {"%gen-cache-arg-pos", NULL},
  {"forward-class", &Yforward_class},
  {"%with-monitor", &YPwith_monitor},
  {"add-prop", &Yadd_prop},
  {"@tup", &YOtup},
  {"%loc-val", NULL},
  {"@empty?", NULL},
  {"<union>", &YLunionG},
  {"%met-sig-setter", NULL},
  {"%gen-refs-setter", NULL},
  {"sig-specs", &Ysig_specs},
  {"@oelt", NULL},
  {"rep", NULL},
  {"%eq?", NULL},
  {"%cb", NULL},
  {"@cat2", &YOcat2},
  {"class-type-cache", &Yclass_type_cache},
  {"ds", NULL},
  {"sig-val-setter", &Ysig_val_setter},
  {"%flo-dat", NULL},
  {"@gen-cache-singletons-setter", &YOgen_cache_singletons_setter},
  {"%cat2", NULL},
  {"class-ordered-props", &Yclass_ordered_props},
  {"%current-out-port", NULL},
  {"%pairize", NULL},
  {"opts-count", &Yopts_count},
  {"%app-filename", NULL},
  {"%app-args", NULL},
  {"%true", &YPtrue},
  {"%i>>", NULL},
  {"%opts-location-setter", NULL},
  {"%f*", NULL},
  {"%allocate-stack", NULL},
  {"%i<<<", NULL},
  {"%put", NULL},
  {"fun-unification-vars-setter", &Yfun_unification_vars_setter},
  {"---main-8---", NULL},
  {"gen-lookup-miss-1-using", &Ygen_lookup_miss_1_using},
  {"%get", NULL},
  {"%macro", NULL},
  {"%union", NULL},
  {"%sig-nary?-setter", NULL},
  {"and", NULL},
  {"when", NULL},
  {"class-prop-len-setter", &Yclass_prop_len_setter},
  {"ensure-singleton-cache", &Yensure_singleton_cache},
  {"%unexec", NULL},
  {"fun-names", &Yfun_names},
  {"unknown-function-error", &Yunknown_function_error},
  {"@gen-cache-singletons", &YOgen_cache_singletons},
  {"sig-val", &Ysig_val},
  {"@prune-mets-by-type-at", &YOprune_mets_by_type_at},
  {"prop-offset", &Yprop_offset},
  {"<tup>", &YLtupG},
  {"%class-mets", NULL},
  {"<opts>", &YLoptsG},
  {"subtype?", &YsubtypeQ},
  {"@lst", &YOlst},
  {"head-setter", &Yhead_setter},
  {"type-object", &Ytype_object},
  {"---main-7---", NULL},
  {"%os-val", NULL},
  {"nil", &Ynil},
  {"%prop-getter-setter", NULL},
  {"%type-object-setter", NULL},
  {"@any?", &YOanyQ},
  {"%process-module", NULL},
  {"%met-src", NULL},
  {"prop-bound-at?", NULL},
  {"%c<", NULL},
  {"%iv", NULL},
  {"%define-hierarchy", NULL},
  {"prop-owner-setter", &Yprop_owner_setter},
  {"%class-direct-props", NULL},
  {"%str-eq?-loop", NULL},
  {"---main-0---", NULL},
  {"%gen-cache-singletons", NULL},
  {"---main-6---", NULL},
  {"%i*", NULL},
  {"%file-mtime", NULL},
  {"dm", NULL},
  {"@class-direct-props", &YOclass_direct_props},
  {"<col>", &YLcolG},
  {"%class-prop-len-setter", NULL},
  {"class-prop-len", &Yclass_prop_len},
  {"<log>", &YLlogG},
  {"%f/", NULL},
  {"%flo-bits", NULL},
  {"%gen-cache-count", NULL},
  {"$adr-tag", NULL},
  {"%opts-tup-location", NULL},
  {"%tag-bits", NULL},
  {"gen-lookup", NULL},
  {"%sym-nam", NULL},
  {"fun-name-setter", &Yfun_name_setter},
  {"class-direct-props-setter", &Yclass_direct_props_setter},
  {"<parents>", &YLparentsG},
  {"%break", NULL},
  {"fun-spec", &Yfun_spec},
  {"fun-unification-vars", &Yfun_unification_vars},
  {"quasiquote", NULL},
  {"head", &Yhead},
  {"%met", NULL},
  {"@add", NULL},
  {"%tup", NULL},
  {"<subclass>", &YLsubclassG},
  {"%define-primitives", NULL},
  {"def-object-class-accessor", NULL},
  {"%class-props", NULL},
  {"@oelt-setter", NULL},
  {"%i>>>", NULL},
  {"%os-name", NULL},
  {"prop-owner", &Yprop_owner},
  {"%open-out-file", NULL},
  {"%update-instance-for-changed-class", NULL},
  {"%cu", NULL},
  {"@add-new", NULL},
  {"%to-tup", NULL},
  {"ensure-fresh-object", &Yensure_fresh_object},
  {"%ft", NULL},
  {"%patch-early-generic", &YPpatch_early_generic},
  {"%fapply", NULL},
  {"%%apply", NULL},
  {"%prop-offset", &YPprop_offset},
  {"ct-also", NULL},
  {"fun-name", &Yfun_name},
  {"%finalize-props", NULL},
  {"class-direct-props", &Yclass_direct_props},
  {"*macros-ok?*", &YTmacros_okQT},
  {"%relt", NULL},
  {"%binding-name", NULL},
  {"@opts-as-lst", &YOopts_as_lst},
  {"opts-tup-storage-setter", &Yopts_tup_storage_setter},
  {"@subclass?", NULL},
  {"@rev", &YOrev},
  {"%i!", NULL},
  {"%gen-sig", NULL},
  {"if", NULL},
  {"%rep!", NULL},
  {"%loc-off", NULL},
  {"$max-classes", &YDmax_classes},
  {"%i<", NULL},
  {"%close-out-port", NULL},
  {"%fun-cache-setter", NULL},
  {"dv", NULL},
  {"@type-equal?", &YOtype_equalQ},
  {"mif", NULL},
  {"%im", NULL},
  {"find-setter", &Yfind_setter},
  {"%ftan", NULL},
  {"<flat>", &YLflatG},
  {"%type-elts", NULL},
  {"esc", NULL},
  {"%define-boxed-structure", NULL},
  {"%loc-val-setter", NULL},
  {"%met-name", NULL},
  {"%prop-setter", NULL},
  {"%gen-cache-classes", NULL},
  {"gen-cache-arg-pos-setter", &Ygen_cache_arg_pos_setter},
  {"%dispatch", &YPdispatch},
  {"%sig-specs", NULL},
  {"$max-int", &YDmax_int},
  {"fun-refs", &Yfun_refs},
  {"%class-name-setter", NULL},
  {"%tag", NULL},
  {"class-descendents-setter", &Yclass_descendents_setter},
  {"may-isa?", &Ymay_isaQ},
  {"object-parents", &Yobject_parents},
  {"%object-of", NULL},
  {"<rep>", &YLrepG},
  {"$num-int-bits", &YDnum_int_bits},
  {"$min-int", &YDmin_int},
  {"fun-val-setter", &Yfun_val_setter},
  {"<any>", &YLanyG},
  {"prop-type", &Yprop_type},
  {"%i-", NULL},
  {"fun-cache-setter", &Yfun_cache_setter},
  {"%patch-early-generics", NULL},
  {"@tail", NULL},
  {"%next-methods", NULL},
  {"%met-env-setter", NULL},
  {"%fatan", NULL},
  {"%type-class", NULL},
  {"@olen", NULL},
  {"%type-object", NULL},
  {"loc", NULL},
  {"%define-getter", NULL},
  {"%check-call-types", NULL},
  {"%%sym", NULL},
  {"%class-gens", NULL},
  {"@gen-cache-arg-pos", &YOgen_cache_arg_pos},
  {"<singleton>", &YLsingletonG},
  {"---main-4---", NULL},
  {"gen-cache-arg-pos", &Ygen_cache_arg_pos},
  {"%clone", NULL},
  {"tup", &Ytup},
  {"%sig", NULL},
  {"%singleton", NULL},
  {"%loc", NULL},
  {"prop-value-at-setter", NULL},
  {"%%sfab", NULL},
  {"@alter", &YOalter},
  {"@mets-unspecialized-at?", &YOmets_unspecialized_atQ},
  {"class-descendents", &Yclass_descendents},
  {"%opts-tup-count-setter", NULL},
  {"<env>", &YLenvG},
  {"sig-names-setter", &Ysig_names_setter},
  {"one-nil", &Yone_nil},
  {"fun-cache", &Yfun_cache},
  {"class-forward-setter", &Yclass_forward_setter},
  {"patch-early-classes", &Ypatch_early_classes},
  {"%file-type", NULL},
  {"%i+", NULL},
  {"%opts-tup-tup", NULL},
  {"opts-location-setter", &Yopts_location_setter},
  {"%met-env", NULL},
  {"lst", &Ylst},
  {"%class-id-setter", NULL},
  {"%gen-refs", NULL},
  {"%tail-setter", NULL},
  {"export", NULL},
  {"@fill", &YOfill},
  {"dss", NULL},
  {"@fun-mets", &YOfun_mets},
  {"%tag-into", NULL},
  {"%prop-init", NULL},
  {"<gen>", &YLgenG},
  {"%gen-mets-setter", NULL},
  {"use", NULL},
  {"%gen-cache-missable?", NULL},
  {"%f<", NULL},
  {"sig-names", &Ysig_names},
  {"%sig-nary?", NULL},
  {"fab-sym", &Yfab_sym},
  {"choose-methods", &Ychoose_methods},
  {"%str", NULL},
  {"%telt", NULL},
  {"%class-shells", NULL},
  {"let", NULL},
  {"find-getter", &Yfind_getter},
  {"sig-arity-setter", &Ysig_arity_setter},
  {"%i?", NULL},
  {"%sym", NULL},
  {"%prop-dat-at", NULL},
  {"@order-specs", &YOorder_specs},
  {"opts-location", &Yopts_location},
  {"@specd-args", &YOspecd_args},
  {"class-row-setter", &Yclass_row_setter},
  {"%%len", NULL},
  {"@cache-add", &YOcache_add},
  {"ord-app-mets", &Yord_app_mets},
  {"%sig-names", NULL},
  {"%untag", NULL},
  {"---main-1---", NULL},
  {"<lst>", &YLlstG},
  {"<loc>", &YLlocG},
  {"%lst", NULL},
  {"%gen-src", NULL},
  {"%class-descendents-setter", NULL},
  {"@new", &YOnew},
  {"%finalize-props!", &YPfinalize_propsX},
  {"@lst-helper", &YOlst_helper},
  {"%raw-alloc", NULL},
  {"%opts", NULL},
  {"---main-11---", NULL},
  {"%i<<", NULL},
  {"@==", NULL},
  {"update-instance-for-changed-class", &Yupdate_instance_for_changed_class},
  {"@len", NULL},
  {"%opts-location", NULL},
  {"@all?", &YOallQ},
  {"sym-name-setter", &Ysym_name_setter},
  {"%met-refs", NULL},
  {"%add-prop", &YPadd_prop},
  {"sig-arity", &Ysig_arity},
  {"%eof-object", NULL},
  {"*boot-macro-names*", &YTboot_macro_namesT},
  {"seq", NULL},
  {"%type-elts-setter", NULL},
  {"@fun-unification-vars", &YOfun_unification_vars},
  {"%lb", NULL},
  {"class-row", &Yclass_row},
  {"%fp-reg-setter", NULL},
  {"%tnul", &YPtnul},
  {"%classes-ready?", &YPclasses_readyQ},
  {"%gen-cache-singletons-setter", NULL},
  {"type-elts-setter", &Ytype_elts_setter},
  {"%gen-cache", NULL},
  {"fab-gen", &Yfab_gen},
  {"%object-class", NULL},
  {"%relt-setter", NULL},
  {"dp", NULL},
  {"%fsqrt", NULL},
  {"%raw", NULL},
  {"sym-name", &Ysym_name},
  {"fun-arity-setter", &Yfun_arity_setter},
  {"macro-expand", NULL},
  {"%class-parents", NULL},
  {"@telt", NULL},
  {"@do", &YOdo},
  {"---main-13---", NULL},
  {"%trace-off", NULL},
  {"handler-info-message", &Yhandler_info_message},
  {"%class-type-cache", NULL},
  {"fun-code-setter", &Yfun_code_setter},
  {"nul", &Ynul},
  {"%pair", NULL},
  {"class-parents-setter", &Yclass_parents_setter},
  {"%%mep-apply", NULL},
  {"%i&", NULL},
  {"%collect-direct-props", &YPcollect_direct_props},
  {"%object-class-setter", NULL},
  {"%f+", NULL},
  {"cond", NULL},
  {"%fpow", NULL},
  {"gen-lookup-miss", &Ygen_lookup_miss},
  {"type-elts", &Ytype_elts},
  {"%class-gens-setter", NULL},
  {"refab-class", &Yrefab_class},
  {"%define-setter", NULL},
  {"@rev!", &YOrevX},
  {"@fun-val", &YOfun_val},
  {"class-parents", &Yclass_parents},
  {"df", NULL},
  {"%class-of", NULL},
  {"fun-code", &Yfun_code},
  {"<seq!>", &YLseqXG},
  {"unless", NULL},
  {"%opts-count", NULL},
  {"<flo>", &YLfloG},
  {"%met-name-setter", NULL},
  {"$gen-cache-classes-offset", &YDgen_cache_classes_offset},
  {"%opts-tup-location-setter", NULL},
  {"wrong-number-arguments-error", &Ywrong_number_arguments_error},
  {"@mets-subclasses-at", &YOmets_subclasses_at},
  {"fun-env-setter", &Yfun_env_setter},
  {"@=", NULL},
  {"ct", NULL},
  {"gen-lookup-1-using", NULL},
  {"%%prop", NULL},
  {"class-props-setter", &Yclass_props_setter},
  {"%rep", NULL},
  {"%define-props", NULL},
  {"%raw-call", NULL},
  {"fun-arity", &Yfun_arity},
  {"%create-directory", NULL},
  {"prop-setter-setter", &Yprop_setter_setter},
  {"%telt-setter", NULL},
  {"@not", NULL},
  {"%met-code-setter", NULL},
  {"@subclass-spec?", &YOsubclass_specQ},
  {"prop-setter", &Yprop_setter},
  {"%gen-name-setter", NULL},
  {"%false", &YPfalse},
  {"%unlink-stack", NULL},
  {"@tail-setter", NULL},
  {"%do-stack-frames", NULL},
  {"%lu", NULL},
  {"%fc", NULL},
  {"$getter-not-found", &YDgetter_not_found},
  {"%ff", NULL},
  {"%str-eq?", NULL},
  {"%object-shells", NULL},
  {"%fatan2", NULL},
  {"gen-cache-missable?-setter", &Ygen_cache_missableQ_setter},
  {"%fp-reg", NULL},
  {"<met>", &YLmetG},
  {"incongruent-method-error", &Yincongruent_method_error},
  {"---main-12---", NULL},
  {"%%macro", &YPPmacro},
  {"%fun-reg", NULL},
  {"fun-env", &Yfun_env},
  {"dg", NULL},
  {"prop-value-setter", &Yprop_value_setter},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"class-props", "class-props"},
  {"<replace-generic-restart>", "<replace-generic-restart>"},
  {"new", "new"},
  {"%force-out", "%force-out"},
  {"<class>", "<class>"},
  {"try", "try"},
  {"%loc-off-setter", "%loc-off-setter"},
  {"fun-mets", "fun-mets"},
  {"dc", "dc"},
  {"<seq.>", "<seq.>"},
  {"<int>", "<int>"},
  {"gen-src-setter", "gen-src-setter"},
  {"isa?", "isa?"},
  {"%check-call-types", "%check-call-types"},
  {"@+", "@+"},
  {"fab-class", "fab-class"},
  {"prop-type", "prop-type"},
  {"%rlen", "%rlen"},
  {"%slen", "%slen"},
  {"subtype?", "subtype?"},
  {"%current-in-port", "%current-in-port"},
  {"%fasin", "%fasin"},
  {"not", "not"},
  {"prop-bound?", "prop-bound?"},
  {"%it/", "%it/"},
  {"%f=", "%f="},
  {"gen-src", "gen-src"},
  {"%fcos", "%fcos"},
  {"%prop", "%prop"},
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"fin", "fin"},
  {"<type>", "<type>"},
  {"%os-val-setter", "%os-val-setter"},
  {"tail-setter", "tail-setter"},
  {"fun", "fun"},
  {"%met-code", "%met-code"},
  {"sig-nary?", "sig-nary?"},
  {"def", "def"},
  {"<fun>", "<fun>"},
  {"%i=", "%i="},
  {"%ib", "%ib"},
  {"%fi2f", "%fi2f"},
  {"%close-in-port", "%close-in-port"},
  {"<seq>", "<seq>"},
  {"<num>", "<num>"},
  {"tail", "tail"},
  {"%i*", "%i*"},
  {"@<", "@<"},
  {"%sp-reg-setter", "%sp-reg-setter"},
  {"unexec", "unexec"},
  {"set", "set"},
  {"%fsinh", "%fsinh"},
  {"sig-unification-vars", "sig-unification-vars"},
  {"prop-value", "prop-value"},
  {"%i^", "%i^"},
  {"%iu", "%iu"},
  {"bound?", "bound?"},
  {"%build-runtime-modules", "%build-runtime-modules"},
  {"gen-add-met", "gen-add-met"},
  {"class-name", "class-name"},
  {"fun-sig-setter", "fun-sig-setter"},
  {"%gen-code-setter", "%gen-code-setter"},
  {"%flog", "%flog"},
  {"head", "head"},
  {"%open-in-file", "%open-in-file"},
  {"%tlen", "%tlen"},
  {"dl", "dl"},
  {"<sym>", "<sym>"},
  {"file-opening-error", "file-opening-error"},
  {"prop-getter", "prop-getter"},
  {"%fsin", "%fsin"},
  {"%sp-reg", "%sp-reg"},
  {"%prop-unbound-error", "%prop-unbound-error"},
  {"%gen-code", "%gen-code"},
  {"type-error", "type-error"},
  {"%fu", "%fu"},
  {"met-app?", "met-app?"},
  {"class-ancestors", "class-ancestors"},
  {"keyboard-interrupt", "keyboard-interrupt"},
  {"<str>", "<str>"},
  {"<chr>", "<chr>"},
  {"%bb", "%bb"},
  {"*restarts-ok?*", "*restarts-ok?*"},
  {"%rnul", "%rnul"},
  {"*boot-macro-module-names*", "*boot-macro-module-names*"},
  {"<prop>", "<prop>"},
  {"%su", "%su"},
  {"%os-name", "%os-name"},
  {"%define-method", "%define-method"},
  {"fun-nary?", "fun-nary?"},
  {"*boot-macro-expanders*", "*boot-macro-expanders*"},
  {"@tlen", "@tlen"},
  {"object-props", "object-props"},
  {"find-getter", "find-getter"},
  {"fun-specs", "fun-specs"},
  {"%sb", "%sb"},
  {"%i<", "%i<"},
  {"%facos", "%facos"},
  {"<mag>", "<mag>"},
  {"<rep>", "<rep>"},
  {"<col!>", "<col!>"},
  {"%ready?", "%ready?"},
  {"@isa?", "@isa?"},
  {"%fb", "%fb"},
  {"gen-refs-setter", "gen-refs-setter"},
  {"%invoke-debugger", "%invoke-debugger"},
  {"gen-refs", "gen-refs"},
  {"prop-init", "prop-init"},
  {"%snul", "%snul"},
  {"<sig>", "<sig>"},
  {"%fcosh", "%fcosh"},
  {"error", "error"},
  {"use/export", "use/export"},
  {"%f-", "%f-"},
  {"sig-names", "sig-names"},
  {"object-class", "object-class"},
  {"%c=", "%c="},
  {"type-class", "type-class"},
  {"%ftanh", "%ftanh"},
  {"nil", "nil"},
  {"%selt", "%selt"},
  {"@all2?", "@all2?"},
  {"%file-exists?", "%file-exists?"},
  {"class-direct-props", "class-direct-props"},
  {"<col.>", "<col.>"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"quote", "quote"},
  {"%puts", "%puts"},
  {"%with-monitor", "%with-monitor"},
  {"add-prop", "add-prop"},
  {"%symbols", "%symbols"},
  {"%loc-val", "%loc-val"},
  {"<union>", "<union>"},
  {"sig-specs", "sig-specs"},
  {"@oelt", "@oelt"},
  {"rep", "rep"},
  {"%cb", "%cb"},
  {"ds", "ds"},
  {"%current-out-port", "%current-out-port"},
  {"%app-filename", "%app-filename"},
  {"%app-args", "%app-args"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"%f*", "%f*"},
  {"%allocate-stack", "%allocate-stack"},
  {"%i<<<", "%i<<<"},
  {"%put", "%put"},
  {"%i>>", "%i>>"},
  {"%get", "%get"},
  {"fun-names", "fun-names"},
  {"unknown-function-error", "unknown-function-error"},
  {"%fsqrt", "%fsqrt"},
  {"sig-val", "sig-val"},
  {"<tup>", "<tup>"},
  {"%peek", "%peek"},
  {"<opts>", "<opts>"},
  {"@lst", "@lst"},
  {"head-setter", "head-setter"},
  {"type-object", "type-object"},
  {"%os-val", "%os-val"},
  {"@any?", "@any?"},
  {"%process-module", "%process-module"},
  {"%c<", "%c<"},
  {"%iv", "%iv"},
  {"%file-mtime", "%file-mtime"},
  {"dm", "dm"},
  {"<col>", "<col>"},
  {"<log>", "<log>"},
  {"%f/", "%f/"},
  {"%flo-bits", "%flo-bits"},
  {"fun-name-setter", "fun-name-setter"},
  {"quasiquote", "quasiquote"},
  {"%selt-setter", "%selt-setter"},
  {"%tup", "%tup"},
  {"<subclass>", "<subclass>"},
  {"%i>>>", "%i>>>"},
  {"prop-owner", "prop-owner"},
  {"%open-out-file", "%open-out-file"},
  {"%cu", "%cu"},
  {"%to-tup", "%to-tup"},
  {"%ft", "%ft"},
  {"ct-also", "ct-also"},
  {"fun-name", "fun-name"},
  {"*macros-ok?*", "*macros-ok?*"},
  {"%relt", "%relt"},
  {"%binding-name", "%binding-name"},
  {"%i!", "%i!"},
  {"if", "if"},
  {"%loc-off", "%loc-off"},
  {"%close-out-port", "%close-out-port"},
  {"dv", "dv"},
  {"mif", "mif"},
  {"find-setter", "find-setter"},
  {"%ftan", "%ftan"},
  {"<flat>", "<flat>"},
  {"esc", "esc"},
  {"%im", "%im"},
  {"%loc-val-setter", "%loc-val-setter"},
  {"$max-int", "$max-int"},
  {"may-isa?", "may-isa?"},
  {"object-parents", "object-parents"},
  {"%eq?", "%eq?"},
  {"$min-int", "$min-int"},
  {"<any>", "<any>"},
  {"%i-", "%i-"},
  {"prop-value-setter", "prop-value-setter"},
  {"%next-methods", "%next-methods"},
  {"%fatan", "%fatan"},
  {"@olen", "@olen"},
  {"loc", "loc"},
  {"%%sym", "%%sym"},
  {"<singleton>", "<singleton>"},
  {"tup", "tup"},
  {"class-descendents", "class-descendents"},
  {"%file-type", "%file-type"},
  {"%i+", "%i+"},
  {"lst", "lst"},
  {"%gen-refs", "%gen-refs"},
  {"export", "export"},
  {"dss", "dss"},
  {"<gen>", "<gen>"},
  {"use", "use"},
  {"%f<", "%f<"},
  {"fab-sym", "fab-sym"},
  {"%str", "%str"},
  {"%telt", "%telt"},
  {"let", "let"},
  {"%i?", "%i?"},
  {"ord-app-mets", "ord-app-mets"},
  {"%untag", "%untag"},
  {"<lst>", "<lst>"},
  {"<loc>", "<loc>"},
  {"%gen-src", "%gen-src"},
  {"%i<<", "%i<<"},
  {"@==", "@=="},
  {"@len", "@len"},
  {"nul", "nul"},
  {"sig-arity", "sig-arity"},
  {"%eof-object", "%eof-object"},
  {"*boot-macro-names*", "*boot-macro-names*"},
  {"seq", "seq"},
  {"%lb", "%lb"},
  {"%tnul", "%tnul"},
  {"fab-gen", "fab-gen"},
  {"%relt-setter", "%relt-setter"},
  {"dp", "dp"},
  {"%raw", "%raw"},
  {"sym-name", "sym-name"},
  {"macro-expand", "macro-expand"},
  {"@telt", "@telt"},
  {"handler-info-message", "handler-info-message"},
  {"%lu", "%lu"},
  {"%pair", "%pair"},
  {"%i&", "%i&"},
  {"%f+", "%f+"},
  {"%fpow", "%fpow"},
  {"type-elts", "type-elts"},
  {"fun-val", "fun-val"},
  {"df", "df"},
  {"<seq!>", "<seq!>"},
  {"class-parents", "class-parents"},
  {"<flo>", "<flo>"},
  {"wrong-number-arguments-error", "wrong-number-arguments-error"},
  {"ct", "ct"},
  {"%rep", "%rep"},
  {"%raw-call", "%raw-call"},
  {"fun-arity", "fun-arity"},
  {"%create-directory", "%create-directory"},
  {"%telt-setter", "%telt-setter"},
  {"prop-setter", "prop-setter"},
  {"%unlink-stack", "%unlink-stack"},
  {"%do-stack-frames", "%do-stack-frames"},
  {"%fatan2", "%fatan2"},
  {"<met>", "<met>"},
  {"incongruent-method-error", "incongruent-method-error"},
  {"%%macro", "%%macro"},
  {"%fun-reg", "%fun-reg"},
  {"dg", "dg"},
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
