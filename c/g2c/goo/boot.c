/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/boot */

DEF(Yfun_cache,"goo/boot","fun-cache");
DEF(Yclass_mets_setter,"goo/boot","class-mets-setter");
DEF(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(YLparentsG,"goo/boot","<parents>");
DEF(Yopts_location_setter,"goo/boot","opts-location-setter");
DEF(YPadd_met,"goo/boot","%add-met");
DEF(Yensure_fresh_object,"goo/boot","ensure-fresh-object");
DEF(YOmemQ,"goo/boot","@mem?");
DEF(Ysig_names,"goo/boot","sig-names");
DEF(YPfinalize_propsX,"goo/boot","%finalize-props!");
DEF(Ychoose_methods,"goo/boot","choose-methods");
DEF(Yclass_mets,"goo/boot","class-mets");
DEF(YLsymG,"goo/boot","<sym>");
DEF(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(YPTstart_running_atT,"goo/boot","%*start-running-at*");
DEF(Ymet_appQ,"goo/boot","met-app?");
DEF(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(Yopts_location,"goo/boot","opts-location");
DEF(Yclass_row_setter,"goo/boot","class-row-setter");
DEF(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
DEF(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YPsymbols,"goo/boot","%symbols");
DEF(YOisaQ,"goo/boot","@isa?");
DEF(YLcolG,"goo/boot","<col>");
DEF(Ytail_setter,"goo/boot","tail-setter");
DEF(Yfun_congruentQ,"goo/boot","fun-congruent?");
DEF(YOmets_specs_at,"goo/boot","@mets-specs-at");
DEF(YOgen_cache_classes_setter,"goo/boot","@gen-cache-classes-setter");
DEF(Ysig_arity,"goo/boot","sig-arity");
DEF(Yfab_gen,"goo/boot","fab-gen");
DEF(Yclass_row,"goo/boot","class-row");
DEF(YLpropG,"goo/boot","<prop>");
DEF(Yfun_code_setter,"goo/boot","fun-code-setter");
DEF(Yobject_parents,"goo/boot","object-parents");
DEF(YTearly_classesT,"goo/boot","*early-classes*");
DEF(YOsubtypeQ,"goo/boot","@subtype?");
DEF(YPcollect_direct_props,"goo/boot","%collect-direct-props");
DEF(Ytype_elts_setter,"goo/boot","type-elts-setter");
DEF(YLgenG,"goo/boot","<gen>");
DEF(Ymet_app_unify,"goo/boot","met-app-unify");
DEF(Ytail,"goo/boot","tail");
DEF(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(YPearly_dispatch,"goo/boot","%early-dispatch");
DEF(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(Yclass_name_setter,"goo/boot","class-name-setter");
DEF(YOmap,"goo/boot","@map");
DEF(Yfun_code,"goo/boot","fun-code");
DEF(Ygen_lookup_miss,"goo/boot","gen-lookup-miss");
DEF(Ytype_elts,"goo/boot","type-elts");
DEF(YLstrG,"goo/boot","<str>");
DEF(YOgen_cache_classes,"goo/boot","@gen-cache-classes");
DEF(Ynul_prop,"goo/boot","nul-prop");
DEF(Yfun_arity,"goo/boot","fun-arity");
DEF(Yvec,"goo/boot","vec");
DEF(Yprop_setter_setter,"goo/boot","prop-setter-setter");
DEF(YPprop,"goo/boot","%prop");
DEF(YOall2Q,"goo/boot","@all2?");
DEF(YOvec,"goo/boot","@vec");
DEF(Yobject_props,"goo/boot","object-props");
DEF(Yclass_name,"goo/boot","class-name");
DEF(Ynil,"goo/boot","nil");
DEF(YPisa,"goo/boot","%isa");
DEF(Yfun_same_metQ,"goo/boot","fun-same-met?");
DEF(Yfun_env_setter,"goo/boot","fun-env-setter");
DEF(YLmagG,"goo/boot","<mag>");
DEF(YDgen_cache_singletons_offset,"goo/boot","$gen-cache-singletons-offset");
DEF(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
DEF(YLlocG,"goo/boot","<loc>");
DEF(YLspecsG,"goo/boot","<specs>");
DEF(YOfind,"goo/boot","@find");
DEF(Yprop_setter,"goo/boot","prop-setter");
DEF(YPvnul,"goo/boot","%vnul");
DEF(Ygen_cache_missableQ_setter,"goo/boot","gen-cache-missable?-setter");
DEF(YLunionG,"goo/boot","<union>");
DEF(Yfun_env,"goo/boot","fun-env");
DEF(Yfun_val,"goo/boot","fun-val");
DEF(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(Yfun_mets_setter,"goo/boot","fun-mets-setter");
DEF(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YOgen_cache_singletons_setter,"goo/boot","@gen-cache-singletons-setter");
DEF(Yfun_naryQ_setter,"goo/boot","fun-nary?-setter");
DEF(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YLvecG,"goo/boot","<vec>");
DEF(Ygen_cache_classes_setter,"goo/boot","gen-cache-classes-setter");
DEF(YOanyQ,"goo/boot","@any?");
DEF(Yfun_spec,"goo/boot","fun-spec");
DEF(Yfun_mets,"goo/boot","fun-mets");
DEF(Yclass_gens,"goo/boot","class-gens");
DEF(Yclass_gens_setter,"goo/boot","class-gens-setter");
DEF(YPsymbols_readyQ,"goo/boot","%symbols-ready?");
DEF(YOtelt,"goo/boot","@telt");
DEF(YLtupG,"goo/boot","<tup>");
DEF(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YOprune_mets_by_type_at,"goo/boot","@prune-mets-by-type-at");
DEF(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YLfloG,"goo/boot","<flo>");
DEF(YPPmacro,"goo/boot","%%macro");
DEF(YLmetG,"goo/boot","<met>");
DEF(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YOvelt_setter,"goo/boot","@velt-setter");
DEF(Yrefab_class,"goo/boot","refab-class");
DEF(YOcat2,"goo/boot","@cat2");
DEF(Ygen_cache_classes,"goo/boot","gen-cache-classes");
DEF(YOtype_equalQ,"goo/boot","@type-equal?");
DEF(Ynew,"goo/boot","new");
DEF(YPTused_symbols_too_earlyT,"goo/boot","%*used-symbols-too-early*");
DEF(YOgen_cache_singletons,"goo/boot","@gen-cache-singletons");
DEF(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(Ygen_src,"goo/boot","gen-src");
DEF(YDmax_int,"goo/boot","$max-int");
DEF(YLsubclassG,"goo/boot","<subclass>");
DEF(Yopts_vec_storage_setter,"goo/boot","opts-vec-storage-setter");
DEF(Yfun_arity_setter,"goo/boot","fun-arity-setter");
DEF(Yorder_mets,"goo/boot","order-mets");
DEF(YOdo_children,"goo/boot","@do-children");
DEF(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YDgen_cache_classes_offset,"goo/boot","$gen-cache-classes-offset");
DEF(YLintG,"goo/boot","<int>");
DEF(YisaQ,"goo/boot","isa?");
DEF(YOfun_mets_setter,"goo/boot","@fun-mets-setter");
DEF(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(Yclass_id,"goo/boot","class-id");
DEF(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(YLflatG,"goo/boot","<flat>");
DEF(Yopts_vec_storage,"goo/boot","opts-vec-storage");
DEF(Ytype_class_setter,"goo/boot","type-class-setter");
DEF(YPsnul,"goo/boot","%snul");
DEF(Ylst,"goo/boot","lst");
DEF(Ynot,"goo/boot","not");
DEF(YOvelt,"goo/boot","@velt");
DEF(YLmetsG,"goo/boot","<mets>");
DEF(Yclass_ordered_ancestors,"goo/boot","class-ordered-ancestors");
DEF(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DEF(Ygen_lookup_miss_1,"goo/boot","gen-lookup-miss-1");
DEF(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YOgen_cache_arg_pos_setter,"goo/boot","@gen-cache-arg-pos-setter");
DEF(Yfun_specs_setter,"goo/boot","fun-specs-setter");
DEF(Yhead_setter,"goo/boot","head-setter");
DEF(Ytype_class,"goo/boot","type-class");
DEF(Ynul,"goo/boot","nul");
DEF(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YOalter,"goo/boot","@alter");
DEF(Yprop_getter_setter,"goo/boot","prop-getter-setter");
DEF(YOfun_mets,"goo/boot","@fun-mets");
DEF(YLsingletonG,"goo/boot","<singleton>");
DEF(Yclass_prop_len,"goo/boot","class-prop-len");
DEF(Yforward_class,"goo/boot","forward-class");
DEF(YLfunG,"goo/boot","<fun>");
DEF(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
DEF(Ytup,"goo/boot","tup");
DEF(YOfill,"goo/boot","@fill");
DEF(Yhead,"goo/boot","head");
DEF(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(Yfun_sig,"goo/boot","fun-sig");
DEF(YOmets_unspecialized_atQ,"goo/boot","@mets-unspecialized-at?");
DEF(YOlst,"goo/boot","@lst");
DEF(YOclass_ancestors,"goo/boot","@class-ancestors");
DEF(YLnumG,"goo/boot","<num>");
DEF(Yprop_getter,"goo/boot","prop-getter");
DEF(YOorder_specs,"goo/boot","@order-specs");
DEF(Yunexec,"goo/boot","unexec");
DEF(YOgen_cache_arg_pos,"goo/boot","@gen-cache-arg-pos");
DEF(Yprop_init_setter,"goo/boot","prop-init-setter");
DEF(Yfun_specs,"goo/boot","fun-specs");
DEF(YOOEE,"goo/boot","@@==");
DEF(YOfun_unification_vars,"goo/boot","@fun-unification-vars");
DEF(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(Yclass_descendents_setter,"goo/boot","class-descendents-setter");
DEF(YLlstG,"goo/boot","<lst>");
DEF(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YOallQ,"goo/boot","@all?");
DEF(YDmin_int,"goo/boot","$min-int");
DEF(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(Yprop_init,"goo/boot","prop-init");
DEF(YOprecise_specQ,"goo/boot","@precise-spec?");
DEF(Ygen_cache_singletons_setter,"goo/boot","gen-cache-singletons-setter");
DEF(Yfun_src,"goo/boot","fun-src");
DEF(Yclass_descendents,"goo/boot","class-descendents");
DEF(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(Yprop_value,"goo/boot","prop-value");
DEF(YOdo,"goo/boot","@do");
DEF(Ygen_lookup_miss_1_using,"goo/boot","gen-lookup-miss-1-using");
DEF(YOfun_val,"goo/boot","@fun-val");
DEF(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YLchrG,"goo/boot","<chr>");
DEF(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(Yfun_names_setter,"goo/boot","fun-names-setter");
DEF(YPdefine_method,"goo/boot","%define-method");
DEF(YLenvG,"goo/boot","<env>");
DEF(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(Ydel_class,"goo/boot","del-class");
DEF(Ysig_specs_setter,"goo/boot","sig-specs-setter");
DEF(Ygen_refs,"goo/boot","gen-refs");
DEF(YOrevX,"goo/boot","@rev!");
DEF(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(YOunion_specQ,"goo/boot","@union-spec?");
DEF(Yopts_count_setter,"goo/boot","opts-count-setter");
DEF(Yone_nil,"goo/boot","one-nil");
DEF(YLseqXG,"goo/boot","<seq!>");
DEF(YPtrue,"goo/boot","%true");
DEF(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(Ysig_specs,"goo/boot","sig-specs");
DEF(Yfun_unification_vars_setter,"goo/boot","fun-unification-vars-setter");
DEF(Yadd_prop,"goo/boot","add-prop");
DEF(Yfab_sym,"goo/boot","fab-sym");
DEF(YLsigG,"goo/boot","<sig>");
DEF(YOfun_arity,"goo/boot","@fun-arity");
DEF(Yclass_forward,"goo/boot","class-forward");
DEF(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YOlst_helper,"goo/boot","@lst-helper");
DEF(YDgetter_not_found,"goo/boot","$getter-not-found");
DEF(YOfold,"goo/boot","@fold");
DEF(YsubtypeQ,"goo/boot","subtype?");
DEF(Yopts_count,"goo/boot","opts-count");
DEF(Yfun_names,"goo/boot","fun-names");
DEF(YLopts_vecG,"goo/boot","<opts-vec>");
DEF(Yobject_class,"goo/boot","object-class");
DEF(Yfind_setter,"goo/boot","find-setter");
DEF(Ytype_object_setter,"goo/boot","type-object-setter");
DEF(Yclass_ordered_props,"goo/boot","class-ordered-props");
DEF(YOsubclass_specQ,"goo/boot","@subclass-spec?");
DEF(Ysym_name_setter,"goo/boot","sym-name-setter");
DEF(Ygen_from_met,"goo/boot","gen-from-met");
DEF(Yensure_singleton_cache,"goo/boot","ensure-singleton-cache");
DEF(YPadd_prop,"goo/boot","%add-prop");
DEF(YOOemptyQ,"goo/boot","@@empty?");
DEF(YOfun_specs,"goo/boot","@fun-specs");
DEF(Ysig_val,"goo/boot","sig-val");
DEF(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YLlogG,"goo/boot","<log>");
DEF(Ytype_object,"goo/boot","type-object");
DEF(YOmets_subclasses_at,"goo/boot","@mets-subclasses-at");
DEF(Yclass_id_setter,"goo/boot","class-id-setter");
DEF(YLclassG,"goo/boot","<class>");
DEF(Yprop_type,"goo/boot","prop-type");
DEF(Yerror,"goo/boot","error");
DEF(Yfun_unification_vars,"goo/boot","fun-unification-vars");
DEF(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YOelt,"goo/boot","@elt");
DEF(Ypatch_early_classes,"goo/boot","patch-early-classes");
DEF(Yprop_owner_setter,"goo/boot","prop-owner-setter");
DEF(Ytype_error,"goo/boot","type-error");
DEF(YOfun_naryQ,"goo/boot","@fun-nary?");
DEF(Ysym_name,"goo/boot","sym-name");
DEF(YDnum_int_bits,"goo/boot","$num-int-bits");
DEF(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YOclass_direct_props,"goo/boot","@class-direct-props");
DEF(YLseqG,"goo/boot","<seq>");
DEF(Yclass_parents_setter,"goo/boot","class-parents-setter");
DEF(YOpick,"goo/boot","@pick");
DEF(YOclassL,"goo/boot","@class<");
DEF(Yfab_class,"goo/boot","fab-class");
DEF(Yfun_name,"goo/boot","fun-name");
DEF(YOsingleton_specQ,"goo/boot","@singleton-spec?");
DEF(Yorder_specs,"goo/boot","order-specs");
DEF(Yprop_owner,"goo/boot","prop-owner");
DEF(YPfalse,"goo/boot","%false");
DEF(YLbodyG,"goo/boot","<body>");
DEF(YPprop_offset,"goo/boot","%prop-offset");
DEF(Yprop_type_setter,"goo/boot","prop-type-setter");
DEF(YPpatch_early_generic,"goo/boot","%patch-early-generic");
DEF(Yclass_parents,"goo/boot","class-parents");
DEF(Yord_app_mets_1,"goo/boot","ord-app-mets-1");
DEF(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(YLoptsG,"goo/boot","<opts>");
DEF(Yfind_getter,"goo/boot","find-getter");
DEF(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(Yfun_refs_setter,"goo/boot","fun-refs-setter");
DEF(YOdel_dups,"goo/boot","@del-dups");
DEF(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(YOorder_specs_class,"goo/boot","@order-specs-class");
DEF(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YLtypeG,"goo/boot","<type>");
DEF(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(Yfun_val_setter,"goo/boot","fun-val-setter");
DEF(YLanyG,"goo/boot","<any>");
DEF(YOtup,"goo/boot","@tup");
DEF(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YLpropsG,"goo/boot","<props>");
DEF(Ygen_cache_arg_pos_setter,"goo/boot","gen-cache-arg-pos-setter");
DEF(YPdispatch,"goo/boot","%dispatch");
DEF(YDmissed_dispatch,"goo/boot","$missed-dispatch");
DEF(Yfun_refs,"goo/boot","fun-refs");
DEF(Yclass_props,"goo/boot","class-props");
DEF(YOspecd_args,"goo/boot","@specd-args");
DEF(Yfun_cache_setter,"goo/boot","fun-cache-setter");
DEF(YOmets_singletons_at,"goo/boot","@mets-singletons-at");
DEF(Yprop_offset,"goo/boot","prop-offset");
DEF(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YLcolXG,"goo/boot","<col!>");
DEF(YOfun_names,"goo/boot","@fun-names");
DEF(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(Ygen_add_met,"goo/boot","gen-add-met");
DEF(Ymethod_accessor_offset,"goo/boot","method-accessor-offset");
DEF(Ysig_names_setter,"goo/boot","sig-names-setter");
DEF(YOfab,"goo/boot","@fab");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_109);
DEFLIT(lit_52);
DEFLIT(lit_237);
DEFLIT(lit_223);
DEFLIT(lit_116);
DEFLIT(lit_296);
DEFLIT(lit_22);
DEFLIT(lit_172);
DEFLIT(lit_334);
DEFLIT(lit_189);
DEFLIT(lit_83);
DEFLIT(lit_13);
DEFLIT(lit_122);
DEFLIT(lit_295);
DEFLIT(lit_362);
DEFLIT(lit_51);
DEFLIT(lit_138);
DEFLIT(lit_90);
DEFLIT(lit_258);
DEFLIT(lit_115);
DEFLIT(lit_163);
DEFLIT(lit_58);
DEFLIT(lit_199);
DEFLIT(lit_206);
DEFLIT(lit_222);
DEFLIT(lit_231);
DEFLIT(lit_20);
DEFLIT(lit_287);
DEFLIT(lit_322);
DEFLIT(lit_315);
DEFLIT(lit_130);
DEFLIT(lit_370);
DEFLIT(lit_249);
DEFLIT(lit_171);
DEFLIT(lit_32);
DEFLIT(lit_330);
DEFLIT(lit_348);
DEFLIT(lit_278);
DEFLIT(lit_268);
DEFLIT(lit_89);
DEFLIT(lit_307);
DEFLIT(lit_12);
DEFLIT(lit_340);
DEFLIT(lit_361);
DEFLIT(lit_57);
DEFLIT(lit_144);
DEFLIT(lit_96);
DEFLIT(lit_3);
DEFLIT(lit_236);
DEFLIT(lit_121);
DEFLIT(lit_358);
DEFLIT(lit_64);
DEFLIT(lit_149);
DEFLIT(lit_304);
DEFLIT(lit_198);
DEFLIT(lit_321);
DEFLIT(lit_316);
DEFLIT(lit_350);
DEFLIT(lit_31);
DEFLIT(lit_215);
DEFLIT(lit_19);
DEFLIT(lit_288);
DEFLIT(lit_21);
DEFLIT(lit_38);
DEFLIT(lit_248);
DEFLIT(lit_221);
DEFLIT(lit_347);
DEFLIT(lit_87);
DEFLIT(lit_95);
DEFLIT(lit_210);
DEFLIT(lit_11);
DEFLIT(lit_294);
DEFLIT(lit_63);
DEFLIT(lit_267);
DEFLIT(lit_320);
DEFLIT(lit_180);
DEFLIT(lit_70);
DEFLIT(lit_357);
DEFLIT(lit_161);
DEFLIT(lit_197);
DEFLIT(lit_37);
DEFLIT(lit_346);
DEFLIT(lit_102);
DEFLIT(lit_44);
DEFLIT(lit_129);
DEFLIT(lit_247);
DEFLIT(lit_188);
DEFLIT(lit_10);
DEFLIT(lit_69);
DEFLIT(lit_323);
DEFLIT(lit_1);
DEFLIT(lit_179);
DEFLIT(lit_76);
DEFLIT(lit_332);
DEFLIT(lit_143);
DEFLIT(lit_101);
DEFLIT(lit_43);
DEFLIT(lit_82);
DEFLIT(lit_232);
DEFLIT(lit_108);
DEFLIT(lit_277);
DEFLIT(lit_318);
DEFLIT(lit_319);
DEFLIT(lit_246);
DEFLIT(lit_374);
DEFLIT(lit_234);
DEFLIT(lit_266);
DEFLIT(lit_305);
DEFLIT(lit_9);
DEFLIT(lit_75);
DEFLIT(lit_2);
DEFLIT(lit_331);
DEFLIT(lit_136);
DEFLIT(lit_178);
DEFLIT(lit_169);
DEFLIT(lit_137);
DEFLIT(lit_208);
DEFLIT(lit_107);
DEFLIT(lit_49);
DEFLIT(lit_317);
DEFLIT(lit_114);
DEFLIT(lit_18);
DEFLIT(lit_276);
DEFLIT(lit_128);
DEFLIT(lit_245);
DEFLIT(lit_356);
DEFLIT(lit_160);
DEFLIT(lit_196);
DEFLIT(lit_187);
DEFLIT(lit_81);
DEFLIT(lit_233);
DEFLIT(lit_368);
DEFLIT(lit_265);
DEFLIT(lit_88);
DEFLIT(lit_177);
DEFLIT(lit_113);
DEFLIT(lit_56);
DEFLIT(lit_142);
DEFLIT(lit_349);
DEFLIT(lit_120);
DEFLIT(lit_372);
DEFLIT(lit_244);
DEFLIT(lit_293);
DEFLIT(lit_355);
DEFLIT(lit_159);
DEFLIT(lit_345);
DEFLIT(lit_127);
DEFLIT(lit_377);
DEFLIT(lit_30);
DEFLIT(lit_207);
DEFLIT(lit_55);
DEFLIT(lit_94);
DEFLIT(lit_135);
DEFLIT(lit_297);
DEFLIT(lit_176);
DEFLIT(lit_119);
DEFLIT(lit_62);
DEFLIT(lit_344);
DEFLIT(lit_376);
DEFLIT(lit_153);
DEFLIT(lit_286);
DEFLIT(lit_195);
DEFLIT(lit_314);
DEFLIT(lit_170);
DEFLIT(lit_36);
DEFLIT(lit_292);
DEFLIT(lit_158);
DEFLIT(lit_275);
DEFLIT(lit_93);
DEFLIT(lit_264);
DEFLIT(lit_303);
DEFLIT(lit_7);
DEFLIT(lit_367);
DEFLIT(lit_220);
DEFLIT(lit_61);
DEFLIT(lit_100);
DEFLIT(lit_329);
DEFLIT(lit_175);
DEFLIT(lit_68);
DEFLIT(lit_308);
DEFLIT(lit_141);
DEFLIT(lit_375);
DEFLIT(lit_257);
DEFLIT(lit_35);
DEFLIT(lit_354);
DEFLIT(lit_147);
DEFLIT(lit_42);
DEFLIT(lit_369);
DEFLIT(lit_230);
DEFLIT(lit_167);
DEFLIT(lit_28);
DEFLIT(lit_157);
DEFLIT(lit_341);
DEFLIT(lit_274);
DEFLIT(lit_194);
DEFLIT(lit_313);
DEFLIT(lit_126);
DEFLIT(lit_6);
DEFLIT(lit_67);
DEFLIT(lit_366);
DEFLIT(lit_219);
DEFLIT(lit_336);
DEFLIT(lit_328);
DEFLIT(lit_263);
DEFLIT(lit_74);
DEFLIT(lit_148);
DEFLIT(lit_16);
DEFLIT(lit_284);
DEFLIT(lit_186);
DEFLIT(lit_41);
DEFLIT(lit_256);
DEFLIT(lit_152);
DEFLIT(lit_371);
DEFLIT(lit_205);
DEFLIT(lit_106);
DEFLIT(lit_48);
DEFLIT(lit_134);
DEFLIT(lit_229);
DEFLIT(lit_156);
DEFLIT(lit_327);
DEFLIT(lit_324);
DEFLIT(lit_73);
DEFLIT(lit_5);
DEFLIT(lit_218);
DEFLIT(lit_283);
DEFLIT(lit_273);
DEFLIT(lit_312);
DEFLIT(lit_80);
DEFLIT(lit_181);
DEFLIT(lit_105);
DEFLIT(lit_47);
DEFLIT(lit_185);
DEFLIT(lit_255);
DEFLIT(lit_112);
DEFLIT(lit_339);
DEFLIT(lit_174);
DEFLIT(lit_228);
DEFLIT(lit_27);
DEFLIT(lit_282);
DEFLIT(lit_204);
DEFLIT(lit_125);
DEFLIT(lit_301);
DEFLIT(lit_365);
DEFLIT(lit_217);
DEFLIT(lit_326);
DEFLIT(lit_86);
DEFLIT(lit_17);
DEFLIT(lit_242);
DEFLIT(lit_352);
DEFLIT(lit_111);
DEFLIT(lit_155);
DEFLIT(lit_54);
DEFLIT(lit_272);
DEFLIT(lit_193);
DEFLIT(lit_184);
DEFLIT(lit_254);
DEFLIT(lit_118);
DEFLIT(lit_290);
DEFLIT(lit_133);
DEFLIT(lit_227);
DEFLIT(lit_166);
DEFLIT(lit_26);
DEFLIT(lit_333);
DEFLIT(lit_337);
DEFLIT(lit_343);
DEFLIT(lit_262);
DEFLIT(lit_311);
DEFLIT(lit_4);
DEFLIT(lit_291);
DEFLIT(lit_216);
DEFLIT(lit_146);
DEFLIT(lit_203);
DEFLIT(lit_53);
DEFLIT(lit_192);
DEFLIT(lit_252);
DEFLIT(lit_285);
DEFLIT(lit_253);
DEFLIT(lit_300);
DEFLIT(lit_117);
DEFLIT(lit_151);
DEFLIT(lit_351);
DEFLIT(lit_60);
DEFLIT(lit_325);
DEFLIT(lit_50);
DEFLIT(lit_241);
DEFLIT(lit_260);
DEFLIT(lit_271);
DEFLIT(lit_34);
DEFLIT(lit_364);
DEFLIT(lit_25);
DEFLIT(lit_154);
DEFLIT(lit_79);
DEFLIT(lit_209);
DEFLIT(lit_85);
DEFLIT(lit_91);
DEFLIT(lit_92);
DEFLIT(lit_261);
DEFLIT(lit_99);
DEFLIT(lit_124);
DEFLIT(lit_66);
DEFLIT(lit_214);
DEFLIT(lit_59);
DEFLIT(lit_281);
DEFLIT(lit_98);
DEFLIT(lit_140);
DEFLIT(lit_71);
DEFLIT(lit_310);
DEFLIT(lit_162);
DEFLIT(lit_168);
DEFLIT(lit_360);
DEFLIT(lit_240);
DEFLIT(lit_183);
DEFLIT(lit_202);
DEFLIT(lit_226);
DEFLIT(lit_29);
DEFLIT(lit_299);
DEFLIT(lit_33);
DEFLIT(lit_338);
DEFLIT(lit_191);
DEFLIT(lit_132);
DEFLIT(lit_0);
DEFLIT(lit_40);
DEFLIT(lit_251);
DEFLIT(lit_173);
DEFLIT(lit_225);
DEFLIT(lit_164);
DEFLIT(lit_97);
DEFLIT(lit_270);
DEFLIT(lit_353);
DEFLIT(lit_373);
DEFLIT(lit_65);
DEFLIT(lit_213);
DEFLIT(lit_165);
DEFLIT(lit_14);
DEFLIT(lit_72);
DEFLIT(lit_298);
DEFLIT(lit_239);
DEFLIT(lit_306);
DEFLIT(lit_39);
DEFLIT(lit_250);
DEFLIT(lit_359);
DEFLIT(lit_150);
DEFLIT(lit_24);
DEFLIT(lit_280);
DEFLIT(lit_201);
DEFLIT(lit_104);
DEFLIT(lit_190);
DEFLIT(lit_46);
DEFLIT(lit_238);
DEFLIT(lit_235);
DEFLIT(lit_139);
DEFLIT(lit_259);
DEFLIT(lit_309);
DEFLIT(lit_123);
DEFLIT(lit_212);
DEFLIT(lit_145);
DEFLIT(lit_182);
DEFLIT(lit_78);
DEFLIT(lit_302);
DEFLIT(lit_103);
DEFLIT(lit_45);
DEFLIT(lit_8);
DEFLIT(lit_15);
DEFLIT(lit_224);
DEFLIT(lit_289);
DEFLIT(lit_23);
DEFLIT(lit_110);
DEFLIT(lit_279);
DEFLIT(lit_335);
DEFLIT(lit_131);
DEFLIT(lit_200);
DEFLIT(lit_342);
DEFLIT(lit_77);
DEFLIT(lit_363);
DEFLIT(lit_211);
DEFLIT(lit_269);
DEFLIT(lit_243);
DEFLIT(lit_84);

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
extern P YPclass_id_setter (P,P);
extern P YPclass_id (P);
extern P YPclass_row_setter (P,P);
extern P YPclass_row (P);
extern P YPclass (P,P,P,P,P,P,P,P,P,P,P,P);
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
extern P YPstrX (P);
extern P YPstr (P);
extern P YPvecX (P);
extern P YPvec (P);
extern P YPstr_eqQ_loop (P,P,P,P);
extern P YPstr_eqQ (P,P);
extern P YPcompute_ancestors (P);
extern P YPdefine_parents (P,P);
extern P YPPsym (P);
extern P YPsym_nam_setter (P,P);
extern P YPsym_nam (P);
extern P YPsym (P);
LOCFOR(fun_lookup_97);
LOCFOR(fun_98);
LOCFOR(fun_lookup_99);
FUNFOR(Yfab_sym);
LOCFOR(fun_loop_101);
extern P YPrevX (P);
LOCFOR(fun_coly_103);
LOCFOR(fun_colx_104);
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
extern P YPopts_vec_location_setter (P,P);
extern P YPopts_vec_location (P);
extern P YPopts_vec_count_setter (P,P);
extern P YPopts_vec_count (P);
extern P YPopts_vec_vec_setter (P,P);
extern P YPopts_vec_vec (P);
extern P YPopts_vec (P,P,P);
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
extern P YPgen_cache (P,P,P,P);
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
LOCFOR(fun_loop_158);
FUNFOR(YPprop_offset);
FUNFOR(YPearly_dispatch);
FUNFOR(YPadd_met);
FUNFOR(YPadd_prop);
LOCFOR(fun_163);
LOCFOR(fun_164);
LOCFOR(fun_165);
LOCFOR(fun_166);
LOCFOR(fun_167);
LOCFOR(fun_168);
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
LOCFOR(fun_fnd_322);
FUNFOR(YOallQ);
LOCFOR(fun_fnd_324);
FUNFOR(YOall2Q);
LOCFOR(fun_fnd_326);
FUNFOR(YOelt);
LOCFOR(fun_loop_328);
FUNFOR(YOfill);
LOCFOR(fun_fnd_330);
FUNFOR(YOanyQ);
extern P YOpair (P,P);
extern P YOadd (P,P);
extern P YOadd_new (P,P);
LOCFOR(fun_do_335);
FUNFOR(YOmap);
LOCFOR(fun_do_337);
FUNFOR(YOpick);
LOCFOR(fun_do_339);
FUNFOR(YOdo);
LOCFOR(fun_in_341);
FUNFOR(YOalter);
LOCFOR(fun_fab_343);
FUNFOR(YOfab);
LOCFOR(fun_red_345);
FUNFOR(YOfold);
FUNFOR(YOcat2);
LOCFOR(fun_fnd_348);
FUNFOR(YOfind);
LOCFOR(fun_350);
FUNFOR(YOmemQ);
LOCFOR(fun_352);
FUNFOR(YOdel_dups);
FUNFOR(YOlst_helper);
FUNFOR(YOlst);
FUNFOR(YOvelt);
FUNFOR(YOvelt_setter);
LOCFOR(fun_copy_358);
FUNFOR(YOvec);
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
LOCFOR(fun_371);
LOCFOR(fun_372);
LOCFOR(fun_373);
LOCFOR(fun_374);
LOCFOR(fun_lop_375);
LOCFOR(fun_col_376);
FUNFOR(Ygen_add_met);
extern P YOclass_inQ (P,P);
extern P YOsubclassQ (P,P);
extern P YOclass_isaQ (P,P);
extern P YOsingleton_isaQ (P,P);
FUNFOR(YOisaQ);
LOCFOR(fun_find_383);
FUNFOR(YOclassL);
FUNFOR(YOtype_equalQ);
FUNFOR(YOsubtypeQ);
FUNFOR(YOmay_isaQ);
FUNFOR(YOorder_specs_class);
FUNFOR(YOorder_specs);
LOCFOR(fun_loop_390);
FUNFOR(Yorder_mets);
LOCFOR(fun_loop_392);
LOCFOR(fun_make_ambiguous_393);
LOCFOR(fun_loop_394);
LOCFOR(fun_precedes_allQ_395);
LOCFOR(fun_check_subsequent_ambiguities_396);
LOCFOR(fun_insert_397);
LOCFOR(fun_loop_398);
FUNFOR(Yord_app_mets_1);
LOCFOR(fun_400);
LOCFOR(fun_loop_401);
FUNFOR(Ymet_appQ);
LOCFOR(fun_col_403);
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
LOCFOR(fun_416);
FUNFOR(YOmets_unspecialized_atQ);
LOCFOR(fun_418);
FUNFOR(YOprune_mets_by_type_at);
LOCFOR(fun_420);
FUNFOR(YOmets_specs_at);
LOCFOR(fun_422);
FUNFOR(YOmets_singletons_at);
LOCFOR(fun_424);
FUNFOR(YOmets_subclasses_at);
LOCFOR(fun_loop_426);
FUNFOR(Ygen_lookup_miss_1_using);
LOCFOR(fun_copy_428);
FUNFOR(YOspecd_args);
LOCFOR(fun_loop_430);
FUNFOR(Yensure_singleton_cache);
FUNFOR(Ygen_lookup_miss_1);
FUNFOR(Ygen_lookup_miss);
extern P Ygen_lookup (P,P);
extern P Yprop_value_at (P,P);
extern P Yprop_bound_atQ (P,P);
extern P Yprop_value_at_setter (P,P,P);
extern P Ygen_lookup_1_using (P,P,P,P,P,P,P,P);
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
LOCFOR(fun_p_in_and_unconstrained_inQ_457);
LOCFOR(fun_p_unconstrained_inQ_458);
LOCFOR(fun_unconstrained_class_459);
LOCFOR(fun_unconstrained_class_in_parents_460);
LOCFOR(fun_remove_next_461);
LOCFOR(fun_merge_lists_462);
FUNFOR(Yclass_ordered_ancestors);
FUNFOR(YOclass_direct_props);
FUNFOR(Yclass_ordered_props);
FUNFOR(Ydel_class);
LOCFOR(fun_467);
FUNFOR(Yfab_class);
FUNFOR(Yrefab_class);
FUNFOR(Yobject_props);
FUNFOR(Yobject_parents);
FUNFOR(Yensure_fresh_object);
LOCFOR(fun_loop_473);
FUNFOR(Yprop_offset);
FUNFOR(YPprop_unbound_error);
FUNFOR(Yprop_value);
FUNFOR(Yprop_boundQ);
LOCFOR(fun_loop_478);
FUNFOR(Yprop_value_setter);
LOCFOR(fun_loop_480);
FUNFOR(YPisa);
LOCFOR(fun_loop_482);
FUNFOR(Yfind_getter);
LOCFOR(fun_loop_484);
FUNFOR(Yfind_setter);
LOCFOR(fun_486);
FUNFOR(Yforward_class);
LOCFOR(fun_visit_488);
FUNFOR(YOdo_children);
LOCFOR(fun_490);
FUNFOR(YPprop);
extern P YPupdate_instance_for_changed_class (P);
FUNFOR(Yupdate_instance_for_changed_class);
LOCFOR(fun_494);
LOCFOR(fun_495);
FUNFOR(Ypatch_early_classes);
FUNFOR(Yfab_gen);
LOCFOR(fun_498);
FUNFOR(Ygen_from_met);
FUNFOR(YPdefine_method);
FUNFOR(Yunexec);
LOCFOR(fun_loop_502);
LOCFOR(fun_new_503);
LOCFOR(fun_504);
LOCFOR(fun_subtypeQ_505);
LOCFOR(fun_506);
LOCFOR(fun_subtypeQ_507);
LOCFOR(fun_508);
LOCFOR(fun_subtypeQ_509);
LOCFOR(fun_subtypeQ_510);
LOCFOR(fun_subtypeQ_511);
LOCFOR(fun_subtypeQ_512);
LOCFOR(fun_subtypeQ_513);
LOCFOR(fun_subtypeQ_514);
LOCFOR(fun_subtypeQ_515);
LOCFOR(fun_subtypeQ_516);
LOCFOR(fun_subtypeQ_517);
LOCFOR(fun_subtypeQ_518);
LOCFOR(fun_isaQ_519);
LOCFOR(fun_isaQ_520);
LOCFOR(fun_isaQ_521);
LOCFOR(fun_522);
LOCFOR(fun_isaQ_523);
LOCFOR(fun_order_specs_524);
LOCFOR(fun_order_specs_525);
LOCFOR(fun_order_specs_526);
LOCFOR(fun_order_specs_527);
LOCFOR(fun_order_specs_528);
LOCFOR(fun_order_specs_529);
LOCFOR(fun_order_specs_530);
LOCFOR(fun_may_isaQ_531);
LOCFOR(fun_may_isaQ_532);
LOCFOR(fun_may_isaQ_533);
LOCFOR(fun_loop_534);
LOCFOR(fun_may_isaQ_535);
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

/* FUNCTION CODES: */

P YPallocate_stack(P num_) {
  P retF1;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
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

P YPclass_ancestors(P x_) {
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

P YPclass_id_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)10);
  return T0;
}

P YPclass_id(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)10);
  return T0;
}

P YPclass_row_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)11);
  return T0;
}

P YPclass_row(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)11);
  return T0;
}

P YPclass(P class_prop_len_,P class_name_,P class_parents_,P class_direct_props_,P class_ancestors_,P class_props_,P class_descendents_,P class_gens_,P class_mets_,P class_forward_,P class_id_,P class_row_) {
  P classF2;
  P T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12;
loop:
  T1 = (P)YPobject_of(VARREF(YLclassG),(P)12);
  classF2 = T1;
  (P)YPprop_elt_setter(class_row_,classF2,(P)11);
  (P)YPprop_elt_setter(class_id_,classF2,(P)10);
  (P)YPprop_elt_setter(class_forward_,classF2,(P)9);
  (P)YPprop_elt_setter(class_mets_,classF2,(P)8);
  (P)YPprop_elt_setter(class_gens_,classF2,(P)7);
  (P)YPprop_elt_setter(class_descendents_,classF2,(P)6);
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
  P classF3;
  P T1,T0;
  P a1;
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
  P classF4;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(VARREF(YLsubclassG),(P)1);
  classF4 = T1;
  (P)YPprop_elt_setter(type_class_,classF4,(P)0);
  T0 = classF4;
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
  P classF5;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(VARREF(YLunionG),(P)1);
  classF5 = T1;
  (P)YPprop_elt_setter(type_elts_,classF5,(P)0);
  T0 = classF5;
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
  P classF6;
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPobject_of(VARREF(YLlstG),(P)2);
  classF6 = T1;
  (P)YPprop_elt_setter(tail_,classF6,(P)1);
  (P)YPprop_elt_setter(head_,classF6,(P)0);
  T0 = classF6;
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
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPeqQ(x_,VARREF(Ynil));
  T0 = (P)YPbb(T1);
  return T0;
}

P YPPlen(P x_) {
  P T4,T3,T2,T1,T0;
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
  P classF7;
  P T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T1 = (P)YPobject_of(VARREF(YLsigG),(P)6);
  classF7 = T1;
  (P)YPprop_elt_setter(sig_unification_vars_,classF7,(P)5);
  (P)YPprop_elt_setter(sig_val_,classF7,(P)4);
  (P)YPprop_elt_setter(sig_arity_,classF7,(P)3);
  (P)YPprop_elt_setter(sig_naryQ_,classF7,(P)2);
  (P)YPprop_elt_setter(sig_specs_,classF7,(P)1);
  (P)YPprop_elt_setter(sig_names_,classF7,(P)0);
  T0 = classF7;
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
  P classF8;
  P T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T1 = (P)YPobject_of(VARREF(YLmetG),(P)6);
  classF8 = T1;
  (P)YPprop_elt_setter(met_src_,classF8,(P)5);
  (P)YPprop_elt_setter(met_refs_,classF8,(P)4);
  (P)YPprop_elt_setter(met_env_,classF8,(P)3);
  (P)YPprop_elt_setter(met_sig_,classF8,(P)2);
  (P)YPprop_elt_setter(met_name_,classF8,(P)1);
  (P)YPprop_elt_setter(met_code_,classF8,(P)0);
  T0 = classF8;
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
  P T1,T0;
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
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPuntag(x_);
  T0 = (P)YPtag(T1,t_);
  return T0;
}

P YPuntag_into(P x_) {
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPuntag(x_);
  T0 = (P)YPtag(T1,(P)0);
  return T0;
}

P YPindirect_objectQ(P x_) {
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPtag_bits(x_);
  T0 = (P)YPiE(T1,(P)0);
  return T0;
}

INLINE P YPclass_of(P x_) {
  P tagF9;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T1 = (P)YPtag_bits(x_);
  tagF9 = T1;
  T4 = (P)YPiE(tagF9,(P)0);
  T3 = (P)YPbb(T4);
  if (T3 != YPfalse) {
    T5 = (P)YPobject_class(x_);
    T2 = T5;
  } else {
    T6 = (P)YPelt(VARREF(YDdirect_object_class),tagF9);
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

P YPstrX(P len_) {
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPcu(YPchr((P)32));
  T0 = (P)YPPsfab(len_,T1);
  return T0;
}

P YPstr(P len_) {
  P T3,T2,T1,T0;
  P a1;
loop:
  T2 = (P)YPiE(len_,(P)0);
  T1 = (P)YPbb(T2);
  if (T1 != YPfalse) {
    T0 = VARREF(YPsnul);
  } else {
    T3 = (P)YPstrX(len_);
    T0 = T3;
  }
  return T0;
}

P YPvecX(P len_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPPvfab(len_,VARREF(Ynul));
  return T0;
}

P YPvec(P len_) {
  P T3,T2,T1,T0;
  P a1;
loop:
  T2 = (P)YPiE(len_,(P)0);
  T1 = (P)YPbb(T2);
  if (T1 != YPfalse) {
    T0 = VARREF(YPvnul);
  } else {
    T3 = (P)YPvecX(len_);
    T0 = T3;
  }
  return T0;
}

P YPstr_eqQ_loop(P s1_,P s2_,P len_,P i_) {
  P tmpF13;
  P c2F12;
  P c1F11;
  P tmpF10;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T2 = (P)YPiE(i_,len_);
  T1 = (P)YPbb(T2);
  tmpF10 = T1;
  if (tmpF10 != YPfalse) {
    T3 = tmpF10;
  } else {
    T5 = (P)YPselt(s1_,i_);
    c1F11 = T5;
    T7 = (P)YPselt(s2_,i_);
    c2F12 = T7;
    T10 = (P)YPcE(c1F11,c2F12);
    T9 = (P)YPbb(T10);
    tmpF13 = T9;
    if (tmpF13 != YPfalse) {
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
  P tmpF15;
  P lenF14;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPslen(s1_);
  lenF14 = T1;
  T5 = (P)YPslen(s2_);
  T4 = (P)YPiE(lenF14,T5);
  T3 = (P)YPbb(T4);
  tmpF15 = T3;
  if (tmpF15 != YPfalse) {
    T7 = (P)YPstr_eqQ_loop(s1_,s2_,lenF14,(P)0);
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T2 = T6;
  T0 = T2;
  return T0;
}

P YPcompute_ancestors(P parent_) {
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
  P T3,T2,T1,T0;
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
  P classF16;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(VARREF(YLsymG),(P)1);
  classF16 = T1;
  (P)YPprop_elt_setter(sym_nam_,classF16,(P)0);
  T0 = classF16;
  return T0;
}

FUNCODEDEF(fun_lookup_97) {
  P s_;
  P symF18;
  P symF17;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T1 = (P)YPemptyQ(s_);
  if (T1 != YPfalse) {
    T3 = (P)YPsym(FREEREF(0));
    symF17 = T3;
    T4 = (P)YPpair(symF17,VARREF(YPsymbols));
    VARSET(YPsymbols,T4);
    T2 = symF17;
    T0 = T2;
  } else {
    T6 = (P)YPhead(s_);
    symF18 = T6;
    T9 = (P)YPsym_nam(symF18);
    T8 = (P)YPstr_eqQ(T9,FREEREF(0));
    if (T8 != YPfalse) {
      T7 = symF18;
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

FUNCODEDEF(fun_98) {
  P name_;
  P lookupF19;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = FUNSHELL(1,fun_lookup_97,2);
  lookupF19 = T1;
  FUNINIT(lookupF19, 2,name_,lookupF19);
  T2 = CALL1(0,lookupF19,VARREF(YPsymbols));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lookup_99) {
  P s_;
  P symF21;
  P symF20;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T1 = (P)YPemptyQ(s_);
  if (T1 != YPfalse) {
    T3 = (P)YPsym(FREEREF(0));
    symF20 = T3;
    T4 = (P)YPpair(symF20,VARREF(YPsymbols));
    VARSET(YPsymbols,T4);
    T2 = symF20;
    T0 = T2;
  } else {
    T6 = (P)YPhead(s_);
    symF21 = T6;
    T9 = (P)YPsym_nam(symF21);
    T8 = (P)YPstr_eqQ(T9,FREEREF(0));
    if (T8 != YPfalse) {
      T7 = symF21;
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
  P lookupF22;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = FUNSHELL(1,fun_lookup_99,2);
  lookupF22 = T1;
  FUNINIT(lookupF22, 2,name_,lookupF22);
  T2 = CALL1(0,lookupF22,VARREF(YPsymbols));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_101) {
  P l_,r_;
  P tF23;
  P T4,T3,T2,T1,T0;
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
    tF23 = T3;
    (P)YPtail_setter(r_,l_);
    a1 = tF23;
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
  P loopF24;
  P T2,T1,T0;
  P a1;
loop:
  T1 = FUNSHELL(1,fun_loop_101,1);
  loopF24 = T1;
  FUNINIT(loopF24, 1,loopF24);
  T2 = CALL2(0,loopF24,c_,Ynil);
  T0 = T2;
  return T0;
}

FUNCODEDEF(fun_coly_103) {
  P lxy_,y_;
  P T6,T5,T4,T3,T2,T1,T0;
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

FUNCODEDEF(fun_colx_104) {
  P lx_,x_;
  P colyF25;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(lx_, 0);
  ARG(x_, 1);
loop:
  T1 = (P)YPemptyQ(x_);
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_coly_103,1);
    colyF25 = T3;
    FUNINIT(colyF25, 1,colyF25);
    T4 = CALL2(0,colyF25,lx_,FREEREF(0));
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
  P colxF26;
  P T2,T1,T0;
  P a1,a2;
loop:
  T1 = FUNSHELL(1,fun_colx_104,2);
  colxF26 = T1;
  FUNINIT(colxF26, 2,y_,colxF26);
  T2 = CALL2(0,colxF26,VARREF(Ynil),x_);
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
  P classF27;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(VARREF(YLfloG),(P)1);
  classF27 = T1;
  (P)YPprop_elt_setter(flo_dat_,classF27,(P)0);
  T0 = classF27;
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

P YPopts_location(P x_) {
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

P YPopts_count(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPopts(P opts_location_,P opts_count_) {
  P classF28;
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPobject_of(VARREF(YLoptsG),(P)2);
  classF28 = T1;
  (P)YPprop_elt_setter(opts_count_,classF28,(P)1);
  (P)YPprop_elt_setter(opts_location_,classF28,(P)0);
  T0 = classF28;
  return T0;
}

P YPopts_vec_location_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPopts_vec_location(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPopts_vec_count_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

P YPopts_vec_count(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPopts_vec_vec_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

P YPopts_vec_vec(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPopts_vec(P opts_vec_location_,P opts_vec_count_,P opts_vec_vec_) {
  P classF29;
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = (P)YPobject_of(VARREF(YLopts_vecG),(P)3);
  classF29 = T1;
  (P)YPprop_elt_setter(opts_vec_vec_,classF29,(P)2);
  (P)YPprop_elt_setter(opts_vec_count_,classF29,(P)1);
  (P)YPprop_elt_setter(opts_vec_location_,classF29,(P)0);
  T0 = classF29;
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
  P classF30;
  P T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T1 = (P)YPobject_of(VARREF(YLpropG),(P)5);
  classF30 = T1;
  (P)YPprop_elt_setter(prop_init_,classF30,(P)4);
  (P)YPprop_elt_setter(prop_type_,classF30,(P)3);
  (P)YPprop_elt_setter(prop_setter_,classF30,(P)2);
  (P)YPprop_elt_setter(prop_getter_,classF30,(P)1);
  (P)YPprop_elt_setter(prop_owner_,classF30,(P)0);
  T0 = classF30;
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

P YPgen_cache(P gen_cache_missableQ_,P gen_cache_arg_pos_,P gen_cache_singletons_,P gen_cache_classes_) {
  P classF31;
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  T1 = (P)YPobject_of(VARREF(YLgen_cacheG),(P)4);
  classF31 = T1;
  (P)YPprop_elt_setter(gen_cache_classes_,classF31,(P)3);
  (P)YPprop_elt_setter(gen_cache_singletons_,classF31,(P)2);
  (P)YPprop_elt_setter(gen_cache_arg_pos_,classF31,(P)1);
  (P)YPprop_elt_setter(gen_cache_missableQ_,classF31,(P)0);
  T0 = classF31;
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
  P classF32;
  P T1,T0;
  P a1,a2,a3,a4,a5,a6,a7;
loop:
  T1 = (P)YPobject_of(VARREF(YLgenG),(P)7);
  classF32 = T1;
  (P)YPprop_elt_setter(gen_src_,classF32,(P)6);
  (P)YPprop_elt_setter(gen_refs_,classF32,(P)5);
  (P)YPprop_elt_setter(fun_cache_,classF32,(P)4);
  (P)YPprop_elt_setter(gen_mets_,classF32,(P)3);
  (P)YPprop_elt_setter(gen_sig_,classF32,(P)2);
  (P)YPprop_elt_setter(gen_name_,classF32,(P)1);
  (P)YPprop_elt_setter(gen_code_,classF32,(P)0);
  T0 = classF32;
  return T0;
}

FUNCODEDEF(fun_loop_158) {
  P i_,props_;
  P propF33;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    propF33 = T4;
    T8 = (P)YPprop_getter(propF33);
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
  P loopF34;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_158,2);
  loopF34 = T1;
  FUNINIT(loopF34, 2,getter_,loopF34);
  T4 = (P)YPobject_class(owner_);
  T3 = (P)YPclass_props(T4);
  T2 = CALL2(0,loopF34,(P)0,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPearly_dispatch) {
  P args_;
  P genF35;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T1 = (P)YPfun_reg();
  genF35 = T1;
  T2 = (P)YPcurrent_out_port();
  T3 = (P)YPsu(LITREF(lit_21));
  (P)YPputs(T2,T3);
  T4 = CALL0(1,(P)0);
  T0 = T4;
  QRET(T0);
}

FUNCODEDEF(YPadd_met) {
  P gen_,met_;
  P T2,T1,T0;
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
  P T2,T1,T0;
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

FUNCODEDEF(fun_163) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Yhead));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_164) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_165) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_166) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Ytail));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_167) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_168) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_169) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsymG),VARREF(Ysym_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_170) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_171) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_172) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_prop_len));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_173) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_174) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_175) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_176) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_parents));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_179) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_180) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_181) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_direct_props));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_182) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_183) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_184) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_ancestors));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_185) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_props));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_188) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_descendents));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_191) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_gens));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_194) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_mets));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_197) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_forward));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_200) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_201) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_202) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_id));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_203) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_204) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)-1));
}

FUNCODEDEF(fun_205) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_row));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_206) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_207) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_208) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsingletonG),VARREF(Ytype_object));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_209) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_210) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_211) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsubclassG),VARREF(Ytype_class));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_212) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_213) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_214) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLunionG),VARREF(Ytype_elts));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_215) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_owner));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_218) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_getter));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_221) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_setter));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_224) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_225) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_226) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_type));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_227) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_init));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_230) {
  P z_,x_;
  P T1,T0;
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
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = fun_231;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_233) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_234) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_235) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_236) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_237) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_238) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_239) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_240) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_241) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_242) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_243) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_244) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_245) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_names));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_246) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_247) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_248) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_specs));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_249) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_naryQ));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_252) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_253) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_254) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_arity));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_255) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_256) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_257) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_val));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_258) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_259) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

FUNCODEDEF(fun_260) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_unification_vars));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_261) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_262) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_263) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_code));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_264) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_265) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_266) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_267) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_268) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_269) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_sig));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_270) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_271) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_272) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_env));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_273) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_refs));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_276) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_src));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_279) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_mets));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_282) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_283) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_284) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_cache));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_285) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Ygen_refs));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_288) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_289) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_290) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Ygen_src));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_291) {
  P z_,x_;
  P T1,T0;
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_location));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_294) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_295) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_296) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_count));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_297) {
  P z_,x_;
  P T1,T0;
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

FUNCODEDEF(fun_298) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_299) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLopts_vecG),VARREF(Yopts_vec_storage));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_300) {
  P z_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLopts_vecG),VARREF(Yopts_vec_storage));
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
  QRET(VARREF(Ynul));
}

FUNCODEDEF(YPcollect_direct_props) {
  P class_;
  P parentF36;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(class_, 0);
loop:
  T2 = (P)YPclass_parents(class_);
  T1 = (P)YPhead(T2);
  parentF36 = T1;
  T4 = (P)YPclass_props(parentF36);
  T5 = (P)YPclass_direct_props(class_);
  T3 = (P)YPcat2(T4,T5);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPfinalize_propsX) {
  P name_,class_;
  P T5,T4,T3,T2,T1,T0;
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
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPiE(x_,y_);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOL(P x_,P y_) {
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOA(P x_,P y_) {
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPiu(x_);
  T3 = (P)YPiu(y_);
  T1 = (P)YPiA(T2,T3);
  T0 = (P)YPib(T1);
  return T0;
}

INLINE P YOEE(P x_,P y_) {
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPeqQ(x_,y_);
  T0 = (P)YPbb(T1);
  return T0;
}

FUNCODEDEF(YOOEE) {
  P x_,y_;
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPPlen(x_);
  T0 = (P)YPib(T1);
  return T0;
}

INLINE P YOoelt(P x_,P i_) {
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPopts_location(x_);
  T3 = (P)YPiu(i_);
  T2 = (P)YPi_((P)0,T3);
  T0 = (P)YPloc_off(T1,T2);
  return T0;
}

INLINE P YOoelt_setter(P z_,P x_,P i_) {
  P T3,T2,T1,T0;
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

FUNCODEDEF(fun_fnd_322) {
  P p_;
  P T6,T5,T4,T3,T2,T1,T0;
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
  P fndF37;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_322,2);
  fndF37 = T1;
  FUNINIT(fndF37, 2,test_,fndF37);
  T2 = CALL1(0,fndF37,c_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_324) {
  P px_,py_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
  P fndF38;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_324,2);
  fndF38 = T1;
  FUNINIT(fndF38, 2,test_,fndF38);
  T2 = CALL2(0,fndF38,x_,y_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_326) {
  P count_,x_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
  P fndF39;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_326,2);
  fndF39 = T1;
  FUNINIT(fndF39, 2,key_,fndF39);
  T2 = CALL2(1,fndF39,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_328) {
  P p_;
  P T3,T2,T1,T0;
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
  P loopF40;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(f_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_328,3);
  loopF40 = T1;
  FUNINIT(loopF40, 3,x_,f_,loopF40);
  T2 = CALL1(0,loopF40,x_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_330) {
  P p_;
  P tmpF41;
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
    tmpF41 = T3;
    if (tmpF41 != YPfalse) {
      T5 = tmpF41;
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
  P fndF42;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_330,2);
  fndF42 = T1;
  FUNINIT(fndF42, 2,test_,fndF42);
  T2 = CALL1(0,fndF42,c_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YOpair(P h_,P t_) {
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPpair(VARREF(Ytail),Ynil);
  T1 = (P)YPpair(VARREF(Yhead),T2);
  T4 = (P)YPpair(t_,Ynil);
  T3 = (P)YPpair(h_,T4);
  T0 = CALL3(1,VARREF(YPisa),VARREF(YLlstG),T1,T3);
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
  P T2,T1,T0;
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

FUNCODEDEF(fun_do_335) {
  P x_,res_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
    T6 = CALL1(1,FREEREF(1),T7);
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
  P doF43;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_do_335,2);
  doF43 = T1;
  FUNINIT(doF43, 2,doF43,f_);
  T2 = CALL2(0,doF43,x_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_337) {
  P x_,res_;
  P hF44;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    hF44 = T4;
    T6 = (P)YOtail(x_);
    T8 = CALL1(1,FREEREF(1),hF44);
    if (T8 != YPfalse) {
      T9 = (P)YOpair(hF44,res_);
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
  P doF45;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_do_337,2);
  doF45 = T1;
  FUNINIT(doF45, 2,doF45,f_);
  T2 = CALL2(0,doF45,x_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_339) {
  P x_;
  P T4,T3,T2,T1,T0;
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
  P doF46;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_do_339,2);
  doF46 = T1;
  FUNINIT(doF46, 2,f_,doF46);
  T2 = CALL1(0,doF46,x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_in_341) {
  P ds_,ss_;
  P tmpF47;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ds_, 0);
  ARG(ss_, 1);
loop:
  T2 = (P)YOemptyQ(ds_);
  tmpF47 = T2;
  if (tmpF47 != YPfalse) {
    T3 = tmpF47;
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
  P inF48;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_341,2);
  inF48 = T1;
  FUNINIT(inF48, 2,dst_,inF48);
  T2 = CALL2(0,inF48,dst_,src_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_343) {
  P i_,res_;
  P T4,T3,T2,T1,T0;
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
  P fabF49;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_fab_343,1);
  fabF49 = T1;
  FUNINIT(fabF49, 1,fabF49);
  T2 = CALL2(1,fabF49,s_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_red_345) {
  P res_,c_;
  P T5,T4,T3,T2,T1,T0;
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
    T3 = CALL2(1,FREEREF(1),res_,T4);
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
  P redF50;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
loop:
  T1 = FUNSHELL(1,fun_red_345,2);
  redF50 = T1;
  FUNINIT(redF50, 2,redF50,combine_);
  T2 = CALL2(0,redF50,init_,c_);
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

FUNCODEDEF(fun_fnd_348) {
  P c_,i_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
  P fndF51;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_348,2);
  fndF51 = T1;
  FUNINIT(fndF51, 2,f_,fndF51);
  T2 = CALL2(0,fndF51,c_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_350) {
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
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T3 = FUNFAB(fun_350,1,x_);
  T2 = CALL2(1,VARREF(YOfind),T3,c_);
  T1 = (P)YOEE(T2,VARREF(Ynul));
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_352) {
  P s_,e_;
  P T2,T1,T0;
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
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = fun_352;
  T1 = CALL3(1,VARREF(YOfold),T2,Ynil,x_);
  T0 = CALL1(1,VARREF(YOrevX),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOlst_helper) {
  P objects_,i_,l_;
  P T5,T4,T3,T2,T1,T0;
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

FUNCODEDEF(YOlst) {
  P objects_;
  P T2,T1,T0;
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

FUNCODEDEF(YOvelt) {
  P x_,i_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPvelt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOvelt_setter) {
  P z_,x_,i_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = (P)YPiu(i_);
  T0 = (P)YPvelt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_copy_358) {
  P k_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(k_, 0);
loop:
  T1 = (P)YOE(k_,YPint((P)-1));
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T2 = (P)YOoelt(FREEREF(1),k_);
    CALL3(1,VARREF(YOvelt_setter),T2,FREEREF(0),k_);
    T4 = (P)YOA(k_,YPint((P)-1));
    a1 = T4;
    k_ = a1;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOvec) {
  P objects_;
  P copyF53;
  P vF52;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(objects_, 0);
loop:
  T3 = (P)YOolen(objects_);
  T2 = (P)YPiu(T3);
  T1 = (P)YPvec(T2);
  vF52 = T1;
  T5 = FUNSHELL(1,fun_copy_358,3);
  copyF53 = T5;
  FUNINIT(copyF53, 3,vF52,objects_,copyF53);
  T8 = (P)YOolen(objects_);
  T7 = (P)YOA(T8,YPint((P)-1));
  T6 = CALL1(0,copyF53,T7);
  T4 = T6;
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOfun_names) {
  P x_;
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T2,T1,T0;
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
  P tmpF56;
  P tmpF55;
  P tmpF54;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = CALL1(1,VARREF(YOfun_arity),x_);
  T3 = CALL1(1,VARREF(YOfun_arity),y_);
  T1 = (P)YOE(T2,T3);
  tmpF54 = T1;
  if (tmpF54 != YPfalse) {
    T7 = CALL1(1,VARREF(YOfun_naryQ),x_);
    T8 = CALL1(1,VARREF(YOfun_naryQ),y_);
    T6 = (P)YOEE(T7,T8);
    tmpF55 = T6;
    if (tmpF55 != YPfalse) {
      T12 = CALL1(1,VARREF(YOfun_specs),x_);
      T13 = CALL1(1,VARREF(YOfun_specs),y_);
      T11 = CALL3(1,VARREF(YOall2Q),VARREF(YOsubtypeQ),T12,T13);
      tmpF56 = T11;
      if (tmpF56 != YPfalse) {
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

FUNCODEDEF(fun_371) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_372) {
  P c_,r_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T2 = CALL1(1,VARREF(Ygen_from_met),FREEREF(1));
  T1 = CALL2(1,VARREF(Ygen_add_met),T2,FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_373) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(Yincongruent_method_error),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_374) {
  P return_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T2 = CALL2(1,VARREF(Ylst),FREEREF(0),FREEREF(1));
  T1 = CALLN(1,VARREF(Ynew),5,VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_215),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_371;
  T4 = FUNFAB(fun_372,2,return_,FREEREF(1));
  T5 = FUNFAB(fun_373,2,FREEREF(0),FREEREF(1));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YLreplace_generic_restartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lop_375) {
  P specs_;
  P spec_classF59;
  P tmpF58;
  P specF57;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(specs_, 0);
loop:
  T2 = (P)YOemptyQ(specs_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = (P)YOhead(specs_);
    specF57 = T4;
    T8 = CALL1(1,VARREF(YOsingleton_specQ),specF57);
    tmpF58 = T8;
    if (tmpF58 != YPfalse) {
      T9 = tmpF58;
    } else {
      T10 = (P)YOEE(specF57,VARREF(YLanyG));
      T9 = T10;
    }
    T7 = T9;
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T12 = (P)YPobject_class(specF57);
      spec_classF59 = T12;
      T14 = (P)YPclass_gens(spec_classF59);
      T13 = (P)YOadd_new(T14,FREEREF(0));
      (P)YPclass_gens_setter(T13,spec_classF59);
      T16 = (P)YPclass_mets(spec_classF59);
      T15 = (P)YOadd_new(T16,FREEREF(1));
      (P)YPclass_mets_setter(T15,spec_classF59);
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

FUNCODEDEF(fun_col_376) {
  P mets_,sameQ_,gms_;
  P tmpF62;
  P now_sameQF61;
  P gmF60;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    gmF60 = T7;
    T9 = CALL2(1,VARREF(Yfun_same_metQ),gmF60,FREEREF(0));
    now_sameQF61 = T9;
    if (now_sameQF61 != YPfalse) {
      T12 = FREEREF(0);
    } else {
      T12 = gmF60;
    }
    T11 = (P)YOadd(mets_,T12);
    tmpF62 = now_sameQF61;
    if (tmpF62 != YPfalse) {
      T14 = tmpF62;
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
  P colF64;
  P lopF63;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
      T5 = FUNFAB(fun_374,2,g_,m_);
      T4 = with_exit(T5);
      T3 = T4;
    } else {
      T6 = CALL2(1,VARREF(Yincongruent_method_error),g_,m_);
      T3 = T6;
    }
    T0 = T3;
  } else {
    T7 = FUNSHELL(1,fun_lop_375,3);
    lopF63 = T7;
    FUNINIT(lopF63, 3,g_,m_,lopF63);
    T9 = CALL1(1,VARREF(YOfun_specs),m_);
    T8 = CALL1(0,lopF63,T9);
    T10 = FUNSHELL(1,fun_col_376,3);
    colF64 = T10;
    FUNINIT(colF64, 3,m_,g_,colF64);
    T12 = CALL1(1,VARREF(YOfun_mets),g_);
    T11 = CALL3(1,colF64,Ynil,YPfalse,T12);
    T0 = g_;
  }
UNLINK_STACK();
  RET(T0);
}

P YOclass_inQ(P c_,P cs_) {
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPemptyQ(cs_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T4 = (P)YPhead(cs_);
    T3 = (P)YOEE(T4,c_);
    if (T3 != YPfalse) {
      T2 = YPtrue;
    } else {
      T6 = (P)YPtail(cs_);
      a1 = c_;
      a2 = T6;
      c_ = a1;
      cs_ = a2;
      goto loop;
      T2 = T5;
    }
    T0 = T2;
  }
  return T0;
}

P YOsubclassQ(P c1_,P c2_) {
  P tmpF66;
  P tmpF65;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)YOEE(c2_,VARREF(YLanyG));
  tmpF65 = T1;
  if (tmpF65 != YPfalse) {
    T2 = tmpF65;
  } else {
    T4 = (P)YOEE(c1_,c2_);
    tmpF66 = T4;
    if (tmpF66 != YPfalse) {
      T5 = tmpF66;
    } else {
      T7 = (P)YPclass_ancestors(c1_);
      T6 = (P)YOclass_inQ(c2_,T7);
      T5 = T6;
    }
    T3 = T5;
    T2 = T3;
  }
  T0 = T2;
  return T0;
}

P YOclass_isaQ(P o_,P c_) {
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPclass_of(o_);
  T0 = (P)YOsubclassQ(T1,c_);
  return T0;
}

P YOsingleton_isaQ(P o_,P t_) {
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPtype_object(t_);
  T0 = (P)YOEE(T1,o_);
  return T0;
}

FUNCODEDEF(YOisaQ) {
  P o_,t_;
  P T4,T3,T2,T1,T0;
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

FUNCODEDEF(fun_find_383) {
  P ps_;
  P cF67;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(ps_, 0);
loop:
  T1 = (P)YOemptyQ(ps_);
  if (T1 != YPfalse) {
    T2 = CALLN(1,VARREF(Yerror),5,LITREF(lit_231),LITREF(lit_232),FREEREF(0),FREEREF(1),FREEREF(2));
    T0 = T2;
  } else {
    T4 = (P)YOhead(ps_);
    cF67 = T4;
    T6 = (P)YOEE(cF67,FREEREF(1));
    if (T6 != YPfalse) {
      T5 = YPtrue;
    } else {
      T8 = (P)YOEE(cF67,FREEREF(2));
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
  P findF68;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  ARG(wrt_, 2);
loop:
  T1 = FUNSHELL(1,fun_find_383,4);
  findF68 = T1;
  FUNINIT(findF68, 4,wrt_,c1_,c2_,findF68);
  T3 = (P)YPclass_ancestors(wrt_);
  T2 = CALL1(0,findF68,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOtype_equalQ) {
  P t1_,t2_;
  P tmpF72;
  P tmpF71;
  P tmpF70;
  P tmpF69;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YOEE(t1_,t2_);
  tmpF69 = T1;
  if (tmpF69 != YPfalse) {
    T2 = tmpF69;
  } else {
    T6 = (P)YPclass_of(t1_);
    T5 = (P)YOEE(T6,VARREF(YLclassG));
    T4 = CALL1(1,VARREF(Ynot),T5);
    tmpF70 = T4;
    if (tmpF70 != YPfalse) {
      T11 = (P)YPclass_of(t2_);
      T10 = (P)YOEE(T11,VARREF(YLclassG));
      T9 = CALL1(1,VARREF(Ynot),T10);
      tmpF71 = T9;
      if (tmpF71 != YPfalse) {
        T14 = CALL2(1,VARREF(YOsubtypeQ),t1_,t2_);
        tmpF72 = T14;
        if (tmpF72 != YPfalse) {
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
  P tmpF73;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T3 = (P)YPclass_of(t2_);
  T2 = (P)YOEE(T3,VARREF(YLclassG));
  tmpF73 = T2;
  if (tmpF73 != YPfalse) {
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
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T1 = (P)YOEE(t1_,t2_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YOtup),LITREF(lit_240),t1_);
    T0 = T2;
  } else {
    T5 = (P)YPclass_of(arg_);
    T4 = CALL3(1,VARREF(YOclassL),t1_,t2_,T5);
    if (T4 != YPfalse) {
      T6 = CALL2(1,VARREF(YOtup),LITREF(lit_241),t1_);
      T3 = T6;
    } else {
      T7 = CALL2(1,VARREF(YOtup),LITREF(lit_242),t2_);
      T3 = T7;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOorder_specs) {
  P t1_,t2_,arg_;
  P tmpF74;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T3 = (P)YPclass_of(t1_);
  T2 = (P)YOEE(T3,VARREF(YLclassG));
  tmpF74 = T2;
  if (tmpF74 != YPfalse) {
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

FUNCODEDEF(fun_loop_390) {
  P state_,idx_;
  P tmpF81;
  P tmpF80;
  P idxF79;
  P cmpF78;
  P cmpAtypF77;
  P m2specF76;
  P m1specF75;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    m1specF75 = T3;
    T5 = CALL2(1,VARREF(Yfun_spec),FREEREF(2),idx_);
    m2specF76 = T5;
    T8 = (P)YOoelt(FREEREF(3),idx_);
    T7 = CALL3(1,VARREF(YOorder_specs),m1specF75,m2specF76,T8);
    check_type(T7,VARREF(YLtupG));
    cmpAtypF77 = T7;
    T10 = CALL2(1,VARREF(YOtelt),cmpAtypF77,YPint((P)0));
    check_type(T10,VARREF(YLsymG));
    cmpF78 = T10;
    T12 = (P)YOA(idx_,YPint((P)1));
    check_type(T12,VARREF(YLintG));
    idxF79 = T12;
    T14 = (P)YOEE(cmpF78,LITREF(lit_240));
    if (T14 != YPfalse) {
      a1 = state_;
      a2 = idxF79;
      state_ = a1;
      idx_ = a2;
      goto loop;
      T13 = T15;
    } else {
      T19 = (P)YOEE(cmpF78,LITREF(lit_249));
      T18 = CALL1(1,VARREF(Ynot),T19);
      tmpF80 = T18;
      if (tmpF80 != YPfalse) {
        T22 = (P)YOEE(state_,LITREF(lit_240));
        tmpF81 = T22;
        if (tmpF81 != YPfalse) {
          T23 = tmpF81;
        } else {
          T24 = (P)YOEE(cmpF78,state_);
          T23 = T24;
        }
        T21 = T23;
        T20 = T21;
      } else {
        T20 = YPfalse;
      }
      T17 = T20;
      if (T17 != YPfalse) {
        a1 = cmpF78;
        a2 = idxF79;
        state_ = a1;
        idx_ = a2;
        goto loop;
        T16 = T25;
      } else {
        T16 = LITREF(lit_249);
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
  P loopF83;
  P arityF82;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(args_, 2);
loop:
  T1 = CALL1(1,VARREF(YOfun_arity),m1_);
  check_type(T1,VARREF(YLintG));
  arityF82 = T1;
  T3 = FUNSHELL(1,fun_loop_390,5);
  loopF83 = T3;
  FUNINIT(loopF83, 5,arityF82,m1_,m2_,args_,loopF83);
  T4 = CALL2(1,loopF83,LITREF(lit_240),YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_392) {
  P l_;
  P t1F85;
  P tmpF84;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = (P)YOEE(l_,Ynil);
  tmpF84 = T1;
  if (tmpF84 != YPfalse) {
    T2 = tmpF84;
  } else {
    T4 = (P)YOtail(l_);
    t1F85 = T4;
    T5 = (P)YOtail(FREEREF(0));
    (P)YOtail_setter(T5,l_);
    (P)YOtail_setter(l_,FREEREF(0));
    a1 = t1F85;
    l_ = a1;
    goto loop;
    T3 = T6;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_make_ambiguous_393) {
  P headed_list_;
  P loopF86;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(headed_list_, 0);
loop:
  T0 = FUNSHELL(1,fun_loop_392,2);
  loopF86 = T0;
  FUNINIT(loopF86, 2,FREEREF(0),loopF86);
  T2 = (P)YOtail(headed_list_);
  T1 = CALL1(1,loopF86,T2);
  (P)YOtail_setter(Ynil,headed_list_);
  T5 = (P)YOtail(FREEREF(0));
  T4 = (P)YOpair(FREEREF(1),T5);
  T3 = (P)YOtail_setter(T4,FREEREF(0));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_loop_394) {
  P l_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = (P)YOEE(l_,Ynil);
  if (T1 != YPfalse) {
    T0 = YPtrue;
  } else {
    T5 = (P)YOhead(l_);
    T4 = CALL3(1,FREEREF(0),FREEREF(1),T5,FREEREF(2));
    T3 = (P)YOEE(T4,LITREF(lit_241));
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

FUNCODEDEF(fun_precedes_allQ_395) {
  P l_;
  P loopF87;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_394,4);
  loopF87 = T1;
  FUNINIT(loopF87, 4,FREEREF(0),FREEREF(1),FREEREF(2),loopF87);
  T2 = CALL1(1,loopF87,l_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_subsequent_ambiguities_396) {
  P oprev_;
  P tmpF88;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(oprev_, 0);
loop:
  T4 = (P)YOtail(oprev_);
  T3 = CALL1(1,FREEREF(0),T4);
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF88 = T2;
  if (tmpF88 != YPfalse) {
    T5 = tmpF88;
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

FUNCODEDEF(fun_insert_397) {
  P oprev_,osub_;
  P indicF89;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    T4 = CALL3(1,FREEREF(1),FREEREF(2),T5,FREEREF(3));
    indicF89 = T4;
    T7 = (P)YOEE(indicF89,LITREF(lit_241));
    if (T7 != YPfalse) {
      T8 = CALL1(1,FREEREF(0),oprev_);
      T6 = T8;
    } else {
      T10 = (P)YOEE(indicF89,LITREF(lit_242));
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

FUNCODEDEF(fun_loop_398) {
  P mets_;
  P insertF94;
  P check_subsequent_ambiguitiesF93;
  P precedes_allQF92;
  P make_ambiguousF91;
  P metF90;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mets_, 0);
loop:
  T2 = (P)YOEE(mets_,Ynil);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = (P)YOhead(mets_);
    check_type(T4,VARREF(YLmetG));
    metF90 = T4;
    T6 = FUNSHELL(1,fun_make_ambiguous_393,2);
    make_ambiguousF91 = T6;
    T7 = FUNSHELL(1,fun_precedes_allQ_395,3);
    precedes_allQF92 = T7;
    T8 = FUNSHELL(1,fun_check_subsequent_ambiguities_396,4);
    check_subsequent_ambiguitiesF93 = T8;
    T9 = FUNSHELL(1,fun_insert_397,6);
    insertF94 = T9;
    FUNINIT(make_ambiguousF91, 2,FREEREF(0),metF90);
    FUNINIT(precedes_allQF92, 3,FREEREF(1),metF90,FREEREF(2));
    FUNINIT(check_subsequent_ambiguitiesF93, 4,precedes_allQF92,FREEREF(0),make_ambiguousF91,metF90);
    FUNINIT(insertF94, 6,check_subsequent_ambiguitiesF93,FREEREF(1),metF90,FREEREF(2),insertF94,make_ambiguousF91);
    T10 = (P)YOtail(FREEREF(3));
    CALL2(1,insertF94,FREEREF(3),T10);
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
  P loopF97;
  P aheadF96;
  P oheadF95;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(mets_, 0);
  ARG(args_, 1);
  ARG(order_mets_, 2);
loop:
  T1 = (P)YOpair(YPfalse,Ynil);
  check_type(T1,VARREF(YLlstG));
  oheadF95 = T1;
  T3 = (P)YOpair(YPfalse,Ynil);
  check_type(T3,VARREF(YLlstG));
  aheadF96 = T3;
  T4 = FUNSHELL(1,fun_loop_398,5);
  loopF97 = T4;
  FUNINIT(loopF97, 5,aheadF96,order_mets_,args_,oheadF95,loopF97);
  T5 = CALL1(1,loopF97,mets_);
  T7 = (P)YOtail(oheadF95);
  T8 = (P)YOtail(aheadF96);
  T6 = CALL2(1,VARREF(YOtup),T7,T8);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_400) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_loop_401) {
  P i_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
  P loopF99;
  P nF98;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    nF98 = T6;
    T8 = FUNSHELL(1,fun_loop_401,4);
    loopF99 = T8;
    FUNINIT(loopF99, 4,nF98,args_,met_,loopF99);
    T9 = CALL1(1,loopF99,YPint((P)0));
    T7 = T9;
    T5 = T7;
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_403) {
  P ans_,ms_;
  P ansF101;
  P mF100;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    mF100 = T3;
    T6 = CALL2(1,VARREF(Ymet_appQ),mF100,FREEREF(0));
    if (T6 != YPfalse) {
      T7 = (P)YOpair(mF100,ans_);
      T5 = T7;
    } else {
      T5 = ans_;
    }
    ansF101 = T5;
    T9 = (P)YOtail(ms_);
    a1 = ansF101;
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

FUNCODEDEF(Yord_app_mets) {
  P gf_,args_;
  P considered_metsF103;
  P colF102;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(gf_, 0);
  ARG(args_, 1);
loop:
  T2 = FUNSHELL(1,fun_col_403,2);
  colF102 = T2;
  FUNINIT(colF102, 2,args_,colF102);
  T4 = CALL1(1,VARREF(YOfun_mets),gf_);
  T3 = CALL2(0,colF102,Ynil,T4);
  T1 = T3;
  considered_metsF103 = T1;
  T5 = CALL3(1,VARREF(Yord_app_mets_1),considered_metsF103,args_,VARREF(Yorder_mets));
  T0 = T5;
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
  P tmpF108;
  P nF107;
  P propQF106;
  P tmpF105;
  P propF104;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  ARG(args_, 2);
loop:
  T1 = (P)YPmet_env(met_);
  propF104 = T1;
  tmpF105 = propF104;
  if (tmpF105 != YPfalse) {
    T6 = (P)YPclass_of(propF104);
    T5 = (P)YOEE(T6,VARREF(YLpropG));
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  propQF106 = T3;
  T8 = (P)YOolen(args_);
  nF107 = T8;
  tmpF108 = propQF106;
  if (tmpF108 != YPfalse) {
    T12 = (P)YOE(nF107,YPint((P)1));
    if (T12 != YPfalse) {
      T14 = (P)YOoelt(args_,YPint((P)0));
      T13 = CALL2(1,VARREF(Yprop_offset),T14,gen_);
      T11 = T13;
    } else {
      T16 = (P)YOoelt(args_,YPint((P)1));
      T17 = (P)YPprop_getter(propF104);
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
  P tmpF111;
  P tmpF110;
  P tmpF109;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YOsingleton_specQ),x_);
  tmpF109 = T1;
  if (tmpF109 != YPfalse) {
    T2 = tmpF109;
  } else {
    T4 = CALL1(1,VARREF(YOsubclass_specQ),x_);
    tmpF110 = T4;
    if (tmpF110 != YPfalse) {
      T5 = tmpF110;
    } else {
      T7 = CALL1(1,VARREF(YOunion_specQ),x_);
      tmpF111 = T7;
      if (tmpF111 != YPfalse) {
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

FUNCODEDEF(fun_416) {
  P met_;
  P T1,T0;
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
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
loop:
  T1 = FUNFAB(fun_416,1,pos_);
  T0 = CALL2(1,VARREF(YOallQ),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_418) {
  P met_;
  P T1,T0;
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
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(mets_, 0);
  ARG(type_, 1);
  ARG(pos_, 2);
loop:
  T1 = FUNFAB(fun_418,2,type_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_420) {
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
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
loop:
  T1 = FUNFAB(fun_420,1,pos_);
  T0 = CALL2(1,VARREF(YOmap),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_422) {
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
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
loop:
  T1 = fun_422;
  T2 = CALL2(1,VARREF(YOmets_specs_at),mets_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_424) {
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
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
loop:
  T1 = fun_424;
  T2 = CALL2(1,VARREF(YOmets_specs_at),mets_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_426) {
  P assocs_;
  P vF115;
  P kF114;
  P valF113;
  P tmpF112;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(assocs_, 0);
loop:
  T1 = (P)YOemptyQ(assocs_);
  if (T1 != YPfalse) {
    T4 = (P)YOEE(FREEREF(0),VARREF(YOgen_cache_classes));
    tmpF112 = T4;
    if (tmpF112 != YPfalse) {
      T7 = BOXVAL(FREEREF(1));
      T6 = (P)YPclass_forward(T7);
      T5 = T6;
    } else {
      T5 = YPfalse;
    }
    T3 = T5;
    if (T3 != YPfalse) {
      CALL1(1,VARREF(Yupdate_instance_for_changed_class),FREEREF(2));
      T8 = (P)YPclass_of(FREEREF(2));
      BOXVAL(FREEREF(1)) = T8;
      T10 = CALL1(1,FREEREF(0),FREEREF(4));
      a1 = T10;
      assocs_ = a1;
      goto loop;
      T2 = T9;
    } else {
      T13 = (P)YOA(FREEREF(8),YPint((P)1));
      T12 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,FREEREF(5),YPfalse,FREEREF(6),FREEREF(7),T13,FREEREF(9));
      valF113 = T12;
      T16 = BOXVAL(FREEREF(1));
      T18 = CALL1(1,FREEREF(0),FREEREF(4));
      T17 = (P)YOpair(valF113,T18);
      T15 = (P)YOpair(T16,T17);
      T14 = CALL2(1,FREEREF(10),T15,FREEREF(4));
      T11 = T14;
      T2 = T11;
    }
    T0 = T2;
  } else {
    T20 = (P)YOhead(assocs_);
    kF114 = T20;
    T23 = BOXVAL(FREEREF(1));
    T22 = (P)YOEE(kF114,T23);
    if (T22 != YPfalse) {
      T26 = (P)YOtail(assocs_);
      T25 = (P)YOhead(T26);
      vF115 = T25;
      T28 = (P)YOA(FREEREF(8),YPint((P)1));
      T27 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,FREEREF(5),vF115,FREEREF(6),FREEREF(7),T28,FREEREF(9));
      T24 = T27;
      T21 = T24;
    } else {
      T31 = (P)YOtail(assocs_);
      T30 = (P)YOtail(T31);
      a1 = T30;
      assocs_ = a1;
      goto loop;
      T21 = T29;
    }
    T19 = T21;
    T0 = T19;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss_1_using) {
  P key_,instance_,all_assocs_,all_assocs_setter_,gen_,cache_,mets_,sorted_mets_,i_,args_;
  P loopF118;
  P cacheF117;
  P tmpF116;
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
  tmpF116 = cache_;
  if (tmpF116 != YPfalse) {
    T3 = tmpF116;
  } else {
    T4 = (P)YPgen_cache(YPtrue,i_,VARREF(Ynil),VARREF(Ynil));
    T3 = T4;
  }
  T2 = T3;
  cacheF117 = T2;
  T5 = FUNSHELL(1,fun_loop_426,11);
  loopF118 = T5;
  FUNINIT(loopF118, 11,all_assocs_,key_,instance_,loopF118,cacheF117,gen_,mets_,sorted_mets_,i_,args_,all_assocs_setter_);
  T7 = CALL1(1,all_assocs_,cacheF117);
  T6 = CALL1(0,loopF118,T7);
  T1 = cacheF117;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_copy_428) {
  P k_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
  P copyF121;
  P rF120;
  P vF119;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(args_, 0);
  ARG(i_, 1);
  ARG(arg_, 2);
loop:
  T3 = (P)YOolen(args_);
  T2 = (P)YPiu(T3);
  T1 = (P)YPvec(T2);
  vF119 = T1;
  T8 = (P)YPvlen(vF119);
  T7 = (P)YPprop_dat_at(vF119,T8);
  T6 = (P)YPlb(T7);
  T10 = (P)YPvlen(vF119);
  T9 = (P)YPib(T10);
  T5 = (P)YPopts_vec(T6,T9,vF119);
  rF120 = T5;
  T12 = FUNSHELL(1,fun_copy_428,5);
  copyF121 = T12;
  FUNINIT(copyF121, 5,args_,rF120,i_,arg_,copyF121);
  T13 = CALL1(0,copyF121,YPint((P)0));
  T11 = T13;
  T4 = T11;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_430) {
  P singletons_;
  P app_metsF126;
  P smetsF125;
  P argsF124;
  P argF123;
  P singF122;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(singletons_, 0);
loop:
  T1 = (P)YOemptyQ(singletons_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T3 = (P)YOhead(singletons_);
    singF122 = T3;
    T5 = (P)YPtype_object(singF122);
    argF123 = T5;
    T7 = CALL3(1,VARREF(YOspecd_args),FREEREF(1),FREEREF(2),argF123);
    argsF124 = T7;
    T9 = CALL2(1,VARREF(Ychoose_methods),FREEREF(3),argsF124);
    smetsF125 = T9;
    T11 = CALL3(1,VARREF(YOprune_mets_by_type_at),FREEREF(4),singF122,FREEREF(2));
    app_metsF126 = T11;
    CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,argF123,argF123,VARREF(YOgen_cache_singletons),VARREF(YOgen_cache_singletons_setter),FREEREF(3),FREEREF(0),FREEREF(4),smetsF125,FREEREF(2),argsF124);
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
  P loopF131;
  P cacheF130;
  P singletonsF129;
  P subclassesF128;
  P tmpF127;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
LINK_STACK();
  ARG(gen_, 0);
  ARG(cache_, 1);
  ARG(mets_, 2);
  ARG(sorted_mets_, 3);
  ARG(i_, 4);
  ARG(args_, 5);
loop:
  tmpF127 = cache_;
  if (tmpF127 != YPfalse) {
    T1 = tmpF127;
  } else {
    T3 = CALL2(1,VARREF(YOmets_subclasses_at),mets_,i_);
    subclassesF128 = T3;
    T5 = (P)YOemptyQ(subclassesF128);
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(YOmets_singletons_at),mets_,i_);
      singletonsF129 = T7;
      T9 = (P)YOemptyQ(singletonsF129);
      if (T9 != YPfalse) {
        T8 = YPfalse;
      } else {
        T11 = (P)YPgen_cache(YPtrue,i_,VARREF(Ynil),VARREF(Ynil));
        cacheF130 = T11;
        T13 = FUNSHELL(1,fun_loop_430,6);
        loopF131 = T13;
        FUNINIT(loopF131, 6,cacheF130,args_,i_,gen_,mets_,loopF131);
        T14 = CALL1(0,loopF131,singletonsF129);
        T12 = T14;
        T10 = T12;
        T8 = T10;
      }
      T6 = T8;
      T4 = T6;
    } else {
      T15 = (P)YPgen_cache(YPfalse,i_,VARREF(Ynil),VARREF(Ynil));
      T4 = T15;
    }
    T2 = T4;
    T1 = T2;
  }
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss_1) {
  P gen_,ocache_,mets_,sorted_mets_,i_,args_;
  P app_metsF141;
  P classF140;
  P metsF139;
  P tmpF138;
  P tmpF137;
  P tmpF136;
  P singQF135;
  P cacheF134;
  P argF133;
  P tmpF132;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
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
    tmpF132 = T4;
    if (tmpF132 != YPfalse) {
      T6 = tmpF132;
    } else {
      T6 = sorted_mets_;
    }
    T3 = T6;
    T0 = T3;
  } else {
    T8 = (P)YOoelt(args_,i_);
    argF133 = T8;
    T10 = CALLN(1,VARREF(Yensure_singleton_cache),6,gen_,ocache_,mets_,sorted_mets_,i_,args_);
    cacheF134 = T10;
    T14 = (P)YOhead(sorted_mets_);
    T13 = CALL2(1,VARREF(Yfun_spec),T14,i_);
    T12 = CALL1(1,VARREF(YOsingleton_specQ),T13);
    singQF135 = T12;
    tmpF136 = singQF135;
    if (tmpF136 != YPfalse) {
      T19 = (P)YOEE(ocache_,cacheF134);
      T18 = T19;
    } else {
      T18 = YPfalse;
    }
    T17 = T18;
    tmpF137 = T17;
    if (tmpF137 != YPfalse) {
      T20 = tmpF137;
    } else {
      tmpF138 = cacheF134;
      if (tmpF138 != YPfalse) {
        T24 = (P)YPgen_cache_missableQ(cacheF134);
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
      T27 = (P)YPsingleton(argF133);
      T26 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,T27,i_);
      metsF139 = T26;
      T28 = CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,argF133,argF133,VARREF(YOgen_cache_singletons),VARREF(YOgen_cache_singletons_setter),gen_,cacheF134,metsF139,sorted_mets_,i_,args_);
      T25 = T28;
      T15 = T25;
    } else {
      if (singQF135 != YPfalse) {
        T29 = cacheF134;
      } else {
        T31 = (P)YPclass_of(argF133);
        classF140 = T31;
        T33 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,classF140,i_);
        app_metsF141 = T33;
        T34 = CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,classF140,argF133,VARREF(YOgen_cache_classes),VARREF(YOgen_cache_classes_setter),gen_,cacheF134,app_metsF141,sorted_mets_,i_,args_);
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
  P metsF142;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Ychoose_methods),gen_,args_);
  metsF142 = T1;
  T3 = (P)YPfun_cache(gen_);
  T4 = (P)YPgen_mets(gen_);
  T2 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,gen_,T3,T4,metsF142,YPint((P)0),args_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

INLINE P Ygen_lookup(P gen_,P args_) {
  P cF144;
  P tmpF143;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPfun_cache(gen_);
  tmpF143 = T2;
  if (tmpF143 != YPfalse) {
    T3 = tmpF143;
  } else {
    T5 = CALL2(1,VARREF(Ygen_lookup_miss),gen_,args_);
    T4 = (P)YPfun_cache_setter(T5,gen_);
    T3 = T4;
  }
  T1 = T3;
  cF144 = T1;
  T6 = (P)Ygen_lookup_1(gen_,cF144,args_);
  T0 = T6;
  return T0;
}

INLINE P Yprop_value_at(P object_,P offset_) {
  P propsF146;
  P valF145;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPiu(offset_);
  T1 = (P)YPprop_elt(object_,T2);
  valF145 = T1;
  T4 = (P)YOEE(valF145,VARREF(Ynul_prop));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yobject_props),object_);
    propsF146 = T6;
    T10 = CALL2(1,VARREF(YOelt),propsF146,offset_);
    T9 = (P)YPprop_init(T10);
    T8 = CALL1(1,T9,object_);
    T11 = (P)YPiu(offset_);
    T7 = (P)YPprop_elt_setter(T8,object_,T11);
    T5 = T7;
    T3 = T5;
  } else {
    T3 = valF145;
  }
  T0 = T3;
  return T0;
}

P Yprop_bound_atQ(P object_,P offset_) {
  P propsF148;
  P valF147;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPiu(offset_);
  T1 = (P)YPprop_elt(object_,T2);
  valF147 = T1;
  T4 = (P)YOEE(valF147,VARREF(Ynul_prop));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yobject_props),object_);
    propsF148 = T6;
    T10 = CALL2(1,VARREF(YOelt),propsF148,offset_);
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
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = (P)YPiu(offset_);
  T0 = (P)YPprop_elt_setter(z_,object_,T1);
  return T0;
}

INLINE P Ygen_lookup_1_using(P key_,P prev_assocs_,P assocs_,P missableQ_,P cache_offset_,P gen_,P cache_,P args_) {
  P nxt_assocsF153;
  P old_assocsF152;
  P vF151;
  P tail_assocsF150;
  P kF149;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8;
loop:
  T1 = (P)YOemptyQ(assocs_);
  if (T1 != YPfalse) {
    if (missableQ_ != YPfalse) {
      T2 = VARREF(YDmissed_dispatch);
    } else {
      T3 = CALL2(1,VARREF(Ygen_lookup_miss),gen_,args_);
      (P)YPfun_cache_setter(T3,gen_);
      T4 = (P)Ygen_lookup(gen_,args_);
      T2 = T4;
    }
    T0 = T2;
  } else {
    T6 = (P)YPhead(assocs_);
    kF149 = T6;
    T8 = (P)YPtail(assocs_);
    tail_assocsF150 = T8;
    T10 = (P)YOEE(kF149,key_);
    if (T10 != YPfalse) {
      T12 = (P)YPhead(tail_assocsF150);
      vF151 = T12;
      T15 = (P)YPiu(cache_offset_);
      T14 = (P)YPprop_elt(cache_,T15);
      old_assocsF152 = T14;
      T16 = (P)YOEE(old_assocsF152,assocs_);
      if (T16 != YPfalse) {
      } else {
        T18 = (P)YPtail(tail_assocsF150);
        nxt_assocsF153 = T18;
        T19 = (P)YPiu(cache_offset_);
        (P)YPprop_elt_setter(assocs_,cache_,T19);
        (P)YPtail_setter(old_assocsF152,tail_assocsF150);
        T21 = (P)YPtail(prev_assocs_);
        T20 = (P)YPtail_setter(nxt_assocsF153,T21);
        T17 = T20;
      }
      T22 = (P)Ygen_lookup_1(gen_,vF151,args_);
      T13 = T22;
      T11 = T13;
      T9 = T11;
    } else {
      T24 = (P)YPtail(tail_assocsF150);
      a1 = key_;
      a2 = assocs_;
      a3 = T24;
      a4 = missableQ_;
      a5 = cache_offset_;
      a6 = gen_;
      a7 = cache_;
      a8 = args_;
      key_ = a1;
      prev_assocs_ = a2;
      assocs_ = a3;
      missableQ_ = a4;
      cache_offset_ = a5;
      gen_ = a6;
      cache_ = a7;
      args_ = a8;
      goto loop;
      T9 = T23;
    }
    T7 = T9;
    T5 = T7;
    T0 = T5;
  }
  return T0;
}

P Ygen_lookup_1(P gen_,P cache_,P args_) {
  P assocsF157;
  P valF156;
  P assocsF155;
  P argF154;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3;
loop:
  T2 = (P)YPclass_of(cache_);
  T1 = (P)YOEE(T2,VARREF(YLgen_cacheG));
  if (T1 != YPfalse) {
    T5 = (P)YPgen_cache_arg_pos(cache_);
    T4 = (P)YOoelt(args_,T5);
    argF154 = T4;
    T8 = (P)YPgen_cache_singletons(cache_);
    assocsF155 = T8;
    T10 = (P)YPgen_cache_missableQ(cache_);
    T9 = (P)Ygen_lookup_1_using(argF154,assocsF155,assocsF155,T10,VARREF(YDgen_cache_singletons_offset),gen_,cache_,args_);
    T7 = T9;
    valF156 = T7;
    T12 = (P)YOEE(valF156,VARREF(YDmissed_dispatch));
    if (T12 != YPfalse) {
      T14 = (P)YPgen_cache_classes(cache_);
      assocsF157 = T14;
      T16 = (P)YPclass_of(argF154);
      T15 = (P)Ygen_lookup_1_using(T16,assocsF157,assocsF157,YPfalse,VARREF(YDgen_cache_classes_offset),gen_,cache_,args_);
      T13 = T15;
      T11 = T13;
    } else {
      T11 = valF156;
    }
    T6 = T11;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = cache_;
  }
  return T0;
}

FUNCODEDEF(Ychoose_methods) {
  P gen_,args_;
  P ambiguous_metsF160;
  P sorted_metsF159;
  P ord_amb_metsF158;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yord_app_mets),gen_,args_);
  ord_amb_metsF158 = T1;
  T3 = CALL2(1,VARREF(YOtelt),ord_amb_metsF158,YPint((P)0));
  sorted_metsF159 = T3;
  T5 = CALL2(1,VARREF(YOtelt),ord_amb_metsF158,YPint((P)1));
  ambiguous_metsF160 = T5;
  T7 = (P)YOemptyQ(sorted_metsF159);
  if (T7 != YPfalse) {
    T8 = CALL3(1,VARREF(Yerror),LITREF(lit_296),gen_,args_);
    T6 = T8;
  } else {
    T6 = sorted_metsF159;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPdispatch) {
  P args_;
  P resF162;
  P resultF161;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T2 = (P)YPfun_reg();
  T1 = (P)Ygen_lookup(T2,args_);
  resultF161 = T1;
  T5 = (P)YPclass_of(resultF161);
  T4 = (P)YOEE(T5,VARREF(YLintG));
  if (T4 != YPfalse) {
    T9 = (P)YOolen(args_);
    T8 = (P)YOE(T9,YPint((P)1));
    if (T8 != YPfalse) {
      T11 = (P)YOoelt(args_,YPint((P)0));
      T10 = (P)Yprop_value_at(T11,resultF161);
      T7 = T10;
    } else {
      T13 = (P)YOoelt(args_,YPint((P)0));
      T14 = (P)YOoelt(args_,YPint((P)1));
      T12 = (P)Yprop_value_at_setter(T13,T14,resultF161);
      T7 = T12;
    }
    resF162 = T7;
    (P)YPunlink_stack();
    T6 = resF162;
    T3 = T6;
  } else {
    (P)YPunlink_stack();
    T16 = (P)YPhead(resultF161);
    T17 = (P)YPtail(resultF161);
    T15 = (P)YPraw_call(T16,T17);
    T3 = T15;
  }
  T0 = T3;
  QRET(T0);
}

FUNCODEDEF(YPpatch_early_generic) {
  P generic_;
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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
  P T1,T0;
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

FUNCODEDEF(fun_p_in_and_unconstrained_inQ_457) {
  P l_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = (P)YOhead(l_);
  T0 = (P)YOEE(T1,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_p_unconstrained_inQ_458) {
  P l_;
  P tmpF163;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T2 = (P)YOhead(l_);
  T1 = (P)YOEE(T2,FREEREF(0));
  tmpF163 = T1;
  if (tmpF163 != YPfalse) {
    T3 = tmpF163;
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

FUNCODEDEF(fun_unconstrained_class_459) {
  P p_;
  P tmpF167;
  P tmpF166;
  P p_unconstrained_inQF165;
  P p_in_and_unconstrained_inQF164;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(p_, 0);
loop:
  T1 = FUNSHELL(0,fun_p_in_and_unconstrained_inQ_457,1);
  p_in_and_unconstrained_inQF164 = T1;
  T2 = FUNSHELL(0,fun_p_unconstrained_inQ_458,1);
  p_unconstrained_inQF165 = T2;
  FUNINIT(p_in_and_unconstrained_inQF164, 1,p_);
  FUNINIT(p_unconstrained_inQF165, 1,p_);
  T4 = CALL2(1,VARREF(YOanyQ),p_in_and_unconstrained_inQF164,FREEREF(0));
  tmpF166 = T4;
  if (tmpF166 != YPfalse) {
    T7 = CALL2(1,VARREF(YOallQ),p_unconstrained_inQF165,FREEREF(0));
    tmpF167 = T7;
    if (tmpF167 != YPfalse) {
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

FUNCODEDEF(fun_unconstrained_class_in_parents_460) {
  P c_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = (P)YPclass_parents(c_);
  T0 = CALL2(1,VARREF(YOanyQ),FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_remove_next_461) {
  P l_;
  P T3,T2,T1,T0;
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

FUNCODEDEF(fun_merge_lists_462) {
  P partial_cpl_,remaining_lists_;
  P remove_nextF171;
  P nextF170;
  P unconstrained_class_in_parentsF169;
  P unconstrained_classF168;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    T4 = FUNSHELL(0,fun_unconstrained_class_459,1);
    unconstrained_classF168 = T4;
    T5 = FUNSHELL(0,fun_unconstrained_class_in_parents_460,1);
    unconstrained_class_in_parentsF169 = T5;
    FUNINIT(unconstrained_classF168, 1,remaining_lists_);
    FUNINIT(unconstrained_class_in_parentsF169, 1,unconstrained_classF168);
    T7 = CALL2(1,VARREF(YOanyQ),unconstrained_class_in_parentsF169,partial_cpl_);
    nextF170 = T7;
    if (nextF170 != YPfalse) {
      T10 = FUNSHELL(0,fun_remove_next_461,1);
      remove_nextF171 = T10;
      FUNINIT(remove_nextF171, 1,nextF170);
      T12 = (P)YOpair(nextF170,partial_cpl_);
      T13 = CALL2(1,VARREF(YOmap),remove_nextF171,remaining_lists_);
      a1 = T12;
      a2 = T13;
      partial_cpl_ = a1;
      remaining_lists_ = a2;
      goto loop;
      T9 = T11;
      T8 = T9;
    } else {
      T14 = CALL1(1,VARREF(Yerror),LITREF(lit_323));
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
  P parentsF173;
  P merge_listsF172;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_merge_lists_462,1);
  merge_listsF172 = T1;
  FUNINIT(merge_listsF172, 1,merge_listsF172);
  T3 = (P)YPclass_parents(c_);
  parentsF173 = T3;
  T5 = CALL1(1,VARREF(YOlst),c_);
  T7 = CALL2(1,VARREF(YOmap),VARREF(YOclass_ancestors),parentsF173);
  T6 = (P)YOadd(T7,parentsF173);
  T4 = CALL2(1,merge_listsF172,T5,T6);
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
  P propsF174;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T4 = (P)YPclass_ancestors(x_);
  T3 = CALL2(1,VARREF(YOmap),VARREF(YOclass_direct_props),T4);
  T2 = CALL3(1,VARREF(YOfold),VARREF(YOcat2),Ynil,T3);
  T1 = CALL1(1,VARREF(YOdel_dups),T2);
  propsF174 = T1;
  T5 = (P)YOlen(propsF174);
  (P)YPclass_prop_len_setter(T5,x_);
  T0 = propsF174;
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

FUNCODEDEF(fun_467) {
  P parent_;
  P T2,T1,T0;
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

FUNCODEDEF(Yfab_class) {
  P name_,parents_;
  P xF175;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(parents_, 1);
loop:
  T1 = (P)YPclass(YPint((P)0),name_,parents_,Ynil,Ynil,Ynil,Ynil,Ynil,Ynil,YPfalse,YPint((P)-1),VARREF(Ynul));
  xF175 = T1;
  T3 = (P)YPclass_parents(xF175);
  T2 = (P)YOemptyQ(T3);
  if (T2 != YPfalse) {
    T5 = CALL1(1,VARREF(YOlst),xF175);
    T4 = (P)YPclass_parents_setter(T5,xF175);
  } else {
  }
  T6 = FUNFAB(fun_467,1,xF175);
  T7 = (P)YPclass_parents(xF175);
  CALL2(1,VARREF(YOdo),T6,T7);
  T8 = CALL1(1,VARREF(Yclass_ordered_ancestors),xF175);
  (P)YPclass_ancestors_setter(T8,xF175);
  T9 = CALL1(1,VARREF(Yclass_ordered_props),xF175);
  (P)YPclass_props_setter(T9,xF175);
  T0 = xF175;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yrefab_class) {
  P old_class_,parents_;
  P new_classF176;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(old_class_, 0);
  ARG(parents_, 1);
loop:
  T2 = (P)YPclass_direct_props(old_class_);
  T1 = CALL2(1,VARREF(Yfab_class),parents_,T2);
  new_classF176 = T1;
  (P)YPclass_forward_setter(new_classF176,old_class_);
  T0 = new_classF176;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yobject_props) {
  P x_;
  P T1,T0;
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
  P T1,T0;
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
  P T3,T2,T1,T0;
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

FUNCODEDEF(fun_loop_473) {
  P i_,props_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
  P loopF177;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_473,2);
  loopF177 = T1;
  FUNINIT(loopF177, 2,getter_,loopF177);
  T3 = CALL1(1,VARREF(Yobject_props),object_);
  T2 = CALL2(0,loopF177,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPprop_unbound_error) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  if (VARREF(YTreport_prop_unbound_errorsQT) != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_338));
    T0 = T1;
  } else {
    T0 = VARREF(Ynul);
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_value) {
  P object_,getter_;
  P offsetF178;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
loop:
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T1 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF178 = T1;
  T3 = (P)YOE(offsetF178,VARREF(YDgetter_not_found));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(Yerror),LITREF(lit_340),getter_,object_);
    T2 = T4;
  } else {
    T5 = (P)Yprop_value_at(object_,offsetF178);
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yprop_boundQ) {
  P object_,getter_;
  P offsetF179;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
loop:
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T1 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF179 = T1;
  T3 = (P)YOE(offsetF179,VARREF(YDgetter_not_found));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(Yerror),LITREF(lit_342),getter_,object_);
    T2 = T4;
  } else {
    T5 = (P)Yprop_bound_atQ(object_,offsetF179);
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_478) {
  P i_,props_;
  P propF180;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(props_, 1);
loop:
  T1 = (P)YOemptyQ(props_);
  if (T1 != YPfalse) {
    T2 = CALL3(1,VARREF(Yerror),LITREF(lit_344),FREEREF(0),FREEREF(1));
    T0 = T2;
  } else {
    T4 = (P)YOhead(props_);
    propF180 = T4;
    T7 = (P)YPprop_getter(propF180);
    T6 = (P)YOEE(T7,FREEREF(0));
    if (T6 != YPfalse) {
      T10 = (P)YPprop_type(propF180);
      T9 = CALL2(1,VARREF(YOisaQ),FREEREF(2),T10);
      if (T9 != YPfalse) {
        T11 = (P)Yprop_value_at_setter(FREEREF(2),FREEREF(1),i_);
        T8 = T11;
      } else {
        T12 = CALL1(1,VARREF(Yerror),LITREF(lit_345));
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
  P loopF181;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(object_, 1);
  ARG(getter_, 2);
loop:
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T1 = FUNSHELL(1,fun_loop_478,4);
  loopF181 = T1;
  FUNINIT(loopF181, 4,getter_,object_,z_,loopF181);
  T3 = CALL1(1,VARREF(Yobject_props),object_);
  T2 = CALL2(0,loopF181,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_480) {
  P getters_,vals_;
  P tmpF182;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(getters_, 0);
  ARG(vals_, 1);
loop:
  T3 = (P)YOEE(getters_,Ynil);
  tmpF182 = T3;
  if (tmpF182 != YPfalse) {
    T4 = tmpF182;
  } else {
    T5 = (P)YOEE(vals_,Ynil);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T6 = (P)YOhead(vals_);
    T7 = (P)YOhead(getters_);
    CALL3(1,VARREF(Yprop_value_setter),T6,FREEREF(0),T7);
    T9 = (P)YOtail(getters_);
    T10 = (P)YOtail(vals_);
    a1 = T9;
    a2 = T10;
    getters_ = a1;
    vals_ = a2;
    goto loop;
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPisa) {
  P parent_,getters_,vals_;
  P loopF184;
  P objectF183;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(parent_, 0);
  ARG(getters_, 1);
  ARG(vals_, 2);
loop:
  T3 = (P)YPclass_prop_len(parent_);
  T2 = (P)YPiu(T3);
  T1 = (P)YPobject_of(parent_,T2);
  objectF183 = T1;
  T4 = FUNSHELL(1,fun_loop_480,2);
  loopF184 = T4;
  FUNINIT(loopF184, 2,objectF183,loopF184);
  T5 = CALL2(0,loopF184,getters_,vals_);
  T0 = objectF183;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_482) {
  P mets_;
  P metF185;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mets_, 0);
loop:
  T1 = (P)YOemptyQ(mets_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Yerror),LITREF(lit_350));
    T0 = T2;
  } else {
    T4 = (P)YOhead(mets_);
    metF185 = T4;
    T7 = CALL2(1,VARREF(Yfun_spec),metF185,YPint((P)0));
    T6 = (P)YOEE(T7,FREEREF(0));
    if (T6 != YPfalse) {
      T5 = metF185;
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
  P loopF186;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_482,2);
  loopF186 = T1;
  FUNINIT(loopF186, 2,owner_,loopF186);
  T3 = CALL1(1,VARREF(YOfun_mets),getter_);
  T2 = CALL1(0,loopF186,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_484) {
  P mets_;
  P tmpF188;
  P metF187;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mets_, 0);
loop:
  T1 = (P)YOemptyQ(mets_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Yerror),LITREF(lit_353));
    T0 = T2;
  } else {
    T4 = (P)YOhead(mets_);
    metF187 = T4;
    T8 = CALL2(1,VARREF(Yfun_spec),metF187,YPint((P)1));
    T7 = (P)YOEE(T8,FREEREF(0));
    tmpF188 = T7;
    if (tmpF188 != YPfalse) {
      T11 = CALL2(1,VARREF(Yfun_spec),metF187,YPint((P)0));
      T10 = CALL2(1,VARREF(YOtype_equalQ),T11,FREEREF(1));
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T6 = T9;
    if (T6 != YPfalse) {
      T5 = metF187;
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
  P loopF189;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(owner_, 0);
  ARG(type_, 1);
  ARG(zetter_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_484,3);
  loopF189 = T1;
  FUNINIT(loopF189, 3,owner_,type_,loopF189);
  T3 = CALL1(1,VARREF(YOfun_mets),zetter_);
  T2 = CALL1(0,loopF189,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_486) {
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
  P new_classF190;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(old_class_, 0);
loop:
  T1 = (P)YPclone(old_class_);
  new_classF190 = T1;
  T2 = fun_486;
  T3 = (P)YPclass_gens(old_class_);
  CALL2(1,VARREF(YOdo),T2,T3);
  T4 = (P)YPclass_forward_setter(new_classF190,old_class_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_visit_488) {
  P x_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
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
  P visitF192;
  P visitedF191;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  visitedF191 = Ynil;
  visitedF191 = BOXFAB(visitedF191);
  T3 = FUNSHELL(0,fun_visit_488,3);
  visitF192 = T3;
  FUNINIT(visitF192, 3,visitedF191,f_,visitF192);
  T4 = CALL1(0,visitF192,x_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_490) {
  P prop_;
  P T1,T0;
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
  P setter_metF196;
  P getter_metF195;
  P propF194;
  P classF193;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  ARG(setter_, 2);
  ARG(type_, 3);
  ARG(init_, 4);
loop:
  classF193 = owner_;
  T7 = (P)YPpair(VARREF(Yprop_init),Ynil);
  T6 = (P)YPpair(VARREF(Yprop_type),T7);
  T5 = (P)YPpair(VARREF(Yprop_setter),T6);
  T4 = (P)YPpair(VARREF(Yprop_getter),T5);
  T3 = (P)YPpair(VARREF(Yprop_owner),T4);
  T12 = (P)YPpair(init_,Ynil);
  T11 = (P)YPpair(type_,T12);
  T10 = (P)YPpair(setter_,T11);
  T9 = (P)YPpair(getter_,T10);
  T8 = (P)YPpair(owner_,T9);
  T2 = CALL3(1,VARREF(YPisa),VARREF(YLpropG),T3,T8);
  propF194 = T2;
  T14 = CALL2(1,VARREF(Yfind_getter),owner_,getter_);
  getter_metF195 = T14;
  T16 = CALL3(1,VARREF(Yfind_setter),owner_,type_,setter_);
  setter_metF196 = T16;
  (P)YPmet_env_setter(propF194,getter_metF195);
  (P)YPmet_env_setter(propF194,setter_metF196);
  T18 = (P)YPclass_direct_props(classF193);
  T19 = CALL1(1,VARREF(YOlst),propF194);
  T17 = CALL2(1,VARREF(YOcat2),T18,T19);
  (P)YPclass_direct_props_setter(T17,classF193);
  T20 = CALL1(1,VARREF(Yclass_ordered_props),classF193);
  (P)YPclass_props_setter(T20,classF193);
  T21 = fun_490;
  T22 = (P)YPclass_props(classF193);
  CALL2(1,VARREF(YOdo),T21,T22);
  T15 = propF194;
  T13 = T15;
  T1 = T13;
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

FUNCODEDEF(fun_494) {
  P parent_;
  P T2,T1,T0;
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

FUNCODEDEF(fun_495) {
  P x_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(Yclass_ordered_ancestors),x_);
  (P)YPclass_ancestors_setter(T0,x_);
  T2 = FUNFAB(fun_494,1,x_);
  T3 = (P)YPclass_parents(x_);
  T1 = CALL2(1,VARREF(YOdo),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(Ypatch_early_classes) {
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YOrevX),VARREF(YTearly_classesT));
  VARSET(YTearly_classesT,T0);
  T2 = fun_495;
  T3 = (P)YOtail(VARREF(YTearly_classesT));
  T1 = CALL2(1,VARREF(YOdo),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(Yfab_gen) {
  P name_,names_,specs_,naryQ_,mets_;
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(name_, 0);
  ARG(names_, 1);
  ARG(specs_, 2);
  ARG(naryQ_, 3);
  ARG(mets_, 4);
loop:
  T4 = (P)YPpair(VARREF(Yfun_mets),Ynil);
  T3 = (P)YPpair(VARREF(Yfun_sig),T4);
  T2 = (P)YPpair(VARREF(Yfun_name),T3);
  T1 = (P)YPpair(VARREF(Yfun_code),T2);
  T6 = CALL1(1,VARREF(Yfun_code),VARREF(YPdispatch));
  T14 = (P)YPpair(VARREF(Ysig_val),Ynil);
  T13 = (P)YPpair(VARREF(Ysig_arity),T14);
  T12 = (P)YPpair(VARREF(Ysig_naryQ),T13);
  T11 = (P)YPpair(VARREF(Ysig_specs),T12);
  T10 = (P)YPpair(VARREF(Ysig_names),T11);
  T19 = (P)YOlen(specs_);
  T20 = (P)YPpair(VARREF(YLanyG),Ynil);
  T18 = (P)YPpair(T19,T20);
  T17 = (P)YPpair(naryQ_,T18);
  T16 = (P)YPpair(specs_,T17);
  T15 = (P)YPpair(names_,T16);
  T9 = CALL3(1,VARREF(YPisa),VARREF(YLsigG),T10,T15);
  T21 = (P)YPpair(mets_,Ynil);
  T8 = (P)YPpair(T9,T21);
  T7 = (P)YPpair(name_,T8);
  T5 = (P)YPpair(T6,T7);
  T0 = CALL3(1,VARREF(YPisa),VARREF(YLgenG),T1,T5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_498) {
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
  P specsF197;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = fun_498;
  T3 = CALL1(1,VARREF(YOfun_specs),x_);
  T1 = CALL2(1,VARREF(YOmap),T2,T3);
  specsF197 = T1;
  T5 = CALL1(1,VARREF(Yfun_name),x_);
  T6 = CALL1(1,VARREF(YOfun_naryQ),x_);
  T4 = CALLN(1,VARREF(Yfab_gen),5,T5,Ynil,specsF197,T6,Ynil);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPdefine_method) {
  P gen_,met_;
  P tmpF198;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
loop:
  tmpF198 = gen_;
  if (tmpF198 != YPfalse) {
    T2 = tmpF198;
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
  P T1,T0;
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

FUNCODEDEF(fun_loop_502) {
  P i_;
  P valF200;
  P getterF199;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = (P)YOL(i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = (P)YOoelt(FREEREF(1),i_);
    getterF199 = T3;
    T6 = (P)YOA(i_,YPint((P)1));
    T5 = (P)YOoelt(FREEREF(1),T6);
    valF200 = T5;
    CALL3(1,VARREF(Yprop_value_setter),valF200,FREEREF(2),getterF199);
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

FUNCODEDEF(fun_new_503) {
  P parent_,inits_;
  P loopF203;
  P numF202;
  P objectF201;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(parent_, 0);
  NARGS(inits_, 1);
loop:
  T3 = (P)YPclass_prop_len(parent_);
  T2 = (P)YPiu(T3);
  T1 = (P)YPobject_of(parent_,T2);
  objectF201 = T1;
  T5 = (P)YOolen(inits_);
  numF202 = T5;
  T6 = FUNSHELL(1,fun_loop_502,4);
  loopF203 = T6;
  FUNINIT(loopF203, 4,numF202,inits_,objectF201,loopF203);
  T7 = CALL1(0,loopF203,YPint((P)0));
  T4 = objectF201;
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_504) {
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

FUNCODEDEF(fun_subtypeQ_505) {
  P t1_,t2_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = FUNFAB(fun_504,1,t2_);
  T2 = (P)YPtype_elts(t1_);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_506) {
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

FUNCODEDEF(fun_subtypeQ_507) {
  P t1_,t2_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = FUNFAB(fun_506,1,t1_);
  T2 = (P)YPtype_elts(t2_);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_508) {
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

FUNCODEDEF(fun_subtypeQ_509) {
  P t1_,t2_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = FUNFAB(fun_508,1,t2_);
  T2 = (P)YPtype_elts(t1_);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subtypeQ_510) {
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

FUNCODEDEF(fun_subtypeQ_511) {
  P t1_,t2_;
  P T1,T0;
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

FUNCODEDEF(fun_subtypeQ_512) {
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

FUNCODEDEF(fun_subtypeQ_513) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_514) {
  P t1_,t2_;
  P T1,T0;
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

FUNCODEDEF(fun_subtypeQ_515) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_516) {
  P t1_,t2_;
  P tmpF204;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YOEE(t1_,VARREF(YLclassG));
  tmpF204 = T1;
  if (tmpF204 != YPfalse) {
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

FUNCODEDEF(fun_subtypeQ_517) {
  P t1_,t2_;
  P T2,T1,T0;
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

FUNCODEDEF(fun_subtypeQ_518) {
  P t1_,t2_;
  P tmpF205;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T2 = (P)YPtype_object(t1_);
  T1 = CALL2(1,VARREF(YOisaQ),T2,VARREF(YLclassG));
  tmpF205 = T1;
  if (tmpF205 != YPfalse) {
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

FUNCODEDEF(fun_isaQ_519) {
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

FUNCODEDEF(fun_isaQ_520) {
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

FUNCODEDEF(fun_isaQ_521) {
  P o_,t_;
  P tmpF206;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YOisaQ),o_,VARREF(YLclassG));
  tmpF206 = T1;
  if (tmpF206 != YPfalse) {
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

FUNCODEDEF(fun_522) {
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

FUNCODEDEF(fun_isaQ_523) {
  P o_,u_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(u_, 1);
loop:
  T1 = FUNFAB(fun_522,1,o_);
  T2 = (P)YPtype_elts(u_);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_524) {
  P t1_,t2_,arg_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_240),t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_525) {
  P t1_,t2_,arg_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_241),t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_526) {
  P t1_,t2_,arg_;
  P c2F208;
  P c1F207;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T1 = (P)YPtype_class(t1_);
  c1F207 = T1;
  T3 = (P)YPtype_class(t2_);
  c2F208 = T3;
  T5 = (P)YOEE(c1F207,c2F208);
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(YOtup),LITREF(lit_240),t1_);
    T4 = T6;
  } else {
    T8 = CALL3(1,VARREF(YOclassL),c1F207,c2F208,arg_);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YOtup),LITREF(lit_241),t1_);
      T7 = T9;
    } else {
      if (YPtrue != YPfalse) {
        T11 = CALL2(1,VARREF(YOtup),LITREF(lit_242),t2_);
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

FUNCODEDEF(fun_order_specs_527) {
  P t1_,t2_,arg_;
  P T5,T4,T3,T2,T1,T0;
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
      T3 = LITREF(lit_241);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_249);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_528) {
  P t1_,t2_,arg_;
  P T5,T4,T3,T2,T1,T0;
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
      T3 = LITREF(lit_242);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_249);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_529) {
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

FUNCODEDEF(fun_order_specs_530) {
  P t1_,t2_,arg_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
      T3 = LITREF(lit_240);
    } else {
      T3 = LITREF(lit_241);
    }
    T2 = CALL2(1,VARREF(YOtup),T3,t1_);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YOsubtypeQ),t2_,t1_);
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YOtup),LITREF(lit_242),t2_);
      T5 = T7;
    } else {
      T8 = CALL2(1,VARREF(YOtup),LITREF(lit_249),VARREF(YLanyG));
      T5 = T8;
    }
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_531) {
  P c_,t_;
  P T3,T2,T1,T0;
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

FUNCODEDEF(fun_may_isaQ_532) {
  P c_,t_;
  P T3,T2,T1,T0;
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

FUNCODEDEF(fun_may_isaQ_533) {
  P c_,t_;
  P tmpF210;
  P classQF209;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YOsubtypeQ),c_,VARREF(YLclassG));
  classQF209 = T1;
  tmpF210 = classQF209;
  if (tmpF210 != YPfalse) {
    T6 = (P)YPtype_class(c_);
    T5 = (P)YOEE(T6,VARREF(YLanyG));
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  T2 = CALL2(1,VARREF(YOtup),classQF209,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_534) {
  P someQ_,allQ_,elts_;
  P tmpF215;
  P tmpF214;
  P elt_allQF213;
  P elt_someQF212;
  P elt_some_allQF211;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    elt_some_allQF211 = T4;
    T7 = CALL2(1,VARREF(YOtelt),elt_some_allQF211,YPint((P)0));
    elt_someQF212 = T7;
    T9 = CALL2(1,VARREF(YOtelt),elt_some_allQF211,YPint((P)1));
    elt_allQF213 = T9;
    tmpF214 = elt_someQF212;
    if (tmpF214 != YPfalse) {
      T12 = tmpF214;
    } else {
      T12 = someQ_;
    }
    T11 = T12;
    tmpF215 = elt_allQF213;
    if (tmpF215 != YPfalse) {
      T14 = tmpF215;
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

FUNCODEDEF(fun_may_isaQ_535) {
  P c_,t_;
  P loopF216;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_534,2);
  loopF216 = T1;
  FUNINIT(loopF216, 2,c_,loopF216);
  T3 = (P)YPtype_elts(t_);
  T2 = CALL3(0,loopF216,YPfalse,YPfalse,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

P YPmacro(P modname_,P name_,P expander_) {
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  if (VARREF(YTmacros_okQT) != YPfalse) {
    T1 = CALLN(1,VARREF(YPPmacro),4,modname_,name_,expander_,YPfalse);
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
  P T0;
loop:
  VARSET(YPfalse,(P)0);
  VARSET(YPtrue,(P)1);
  VARSET(YPTused_symbols_too_earlyT,(P)0);
  T0 = YPfalse;
  return T0;
}

P Y___main_2___() {
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
loop:
  T0 = (P)YPobject_of((P)0,(P)10);
  VARSET(YLclassG,T0);
  T1 = (P)YPobject_of(VARREF(YLclassG),(P)10);
  VARSET(YLlstG,T1);
  T2 = (P)YPobject_of(VARREF(YLlstG),(P)2);
  VARSET(Ynil,T2);
  VARSET(Yone_nil,VARREF(Ynil));
  T3 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLanyG,T3);
  T4 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlogG,T4);
  T5 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLchrG,T5);
  T6 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLnumG,T6);
  T7 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLintG,T7);
  T8 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfloG,T8);
  T9 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlocG,T9);
  T10 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolG,T10);
  T11 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolXG,T11);
  T12 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqG,T12);
  T13 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqXG,T13);
  T14 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlstG,T14);
  T15 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLflatG,T15);
  T16 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLvecG,T16);
  T17 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLstrG,T17);
  T18 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsymG,T18);
  T21 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  T20 = VARSET(YLtypeG,T21);
  T19 = T20;
  return T19;
}

P Y___main_3___() {
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
loop:
  T0 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLclassG,T0);
  T1 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsingletonG,T1);
  T2 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsubclassG,T2);
  T3 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLunionG,T3);
  T4 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLpropG,T4);
  T5 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLgen_cacheG,T5);
  T6 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsigG,T6);
  T7 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfunG,T7);
  T8 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLmetG,T8);
  T9 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLgenG,T9);
  T10 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLoptsG,T10);
  T11 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLopts_vecG,T11);
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLanyG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLlogG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLchrG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLnumG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLintG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLfloG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLlocG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLcolG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLcolXG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLseqG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLseqXG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLlstG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLflatG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLvecG));
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
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLopts_vecG));
  (P)YPobject_class_setter(VARREF(YLlstG),VARREF(Ynil));
  T12 = (P)YPobject_of(VARREF(YLanyG),(P)0);
  VARSET(Ynul,T12);
  T13 = (P)YPobject_of(VARREF(YLanyG),(P)0);
  VARSET(Ynul_prop,T13);
  T14 = (P)YPobject_of(VARREF(YLlogG),(P)0);
  VARSET(YPtrue,T14);
  T15 = (P)YPobject_of(VARREF(YLlogG),(P)0);
  VARSET(YPfalse,T15);
  T16 = (P)YPobject_of(VARREF(YLlstG),(P)0);
  VARSET(Ynil,T16);
  VARSET(Ynil,VARREF(Yone_nil));
  (P)YPhead_setter(VARREF(Ynil),VARREF(Ynil));
  (P)YPtail_setter(VARREF(Ynil),VARREF(Ynil));
  T17 = YPfalse;
  return T17;
}

P Y___main_4___() {
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  VARSET(YPmet_prop_len,(P)4);
  VARSET(YPsymbols_readyQ,YPfalse);
  VARSET(YPTstart_running_atT,VARREF(Ynil));
  T0 = (P)YPraw_alloc((P)4);
  VARSET(YDdirect_object_class,T0);
  (P)YPelt_setter(VARREF(YLintG),VARREF(YDdirect_object_class),(P)1);
  (P)YPelt_setter(VARREF(YLchrG),VARREF(YDdirect_object_class),(P)2);
  (P)YPelt_setter(VARREF(YLlocG),VARREF(YDdirect_object_class),(P)3);
  T3 = (P)YPiu(YPint((P)32));
  T2 = (P)YPi_(T3,(P)2);
  T1 = (P)YPib(T2);
  VARSET(YDnum_int_bits,T1);
  T7 = (P)YPiu(YPint((P)1));
  T9 = (P)YPiu(VARREF(YDnum_int_bits));
  T10 = (P)YPiu(YPint((P)1));
  T8 = (P)YPi_(T9,T10);
  T6 = (P)YPiLL(T7,T8);
  T11 = (P)YPiu(YPint((P)1));
  T5 = (P)YPi_(T6,T11);
  T4 = (P)YPib(T5);
  VARSET(YDmax_int,T4);
  T14 = (P)YPiu(YPint((P)1));
  T16 = (P)YPiu(VARREF(YDnum_int_bits));
  T17 = (P)YPiu(YPint((P)1));
  T15 = (P)YPi_(T16,T17);
  T13 = (P)YPiLL(T14,T15);
  T12 = (P)YPib(T13);
  VARSET(YDmin_int,T12);
  T18 = (P)YPstrX((P)0);
  VARSET(YPsnul,T18);
  T19 = (P)YPvecX((P)0);
  VARSET(YPvnul,T19);
  VARSET(YTearly_classesT,VARREF(Ynil));
  T20 = YPfalse;
  return T20;
}

P Y___main_5___() {
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLanyG),T0);
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLlogG),T1);
  T2 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLchrG),T2);
  T3 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLnumG),T3);
  T4 = (P)YPpair(VARREF(YLnumG),Ynil);
  (P)YPdefine_parents(VARREF(YLintG),T4);
  T5 = (P)YPpair(VARREF(YLnumG),Ynil);
  (P)YPdefine_parents(VARREF(YLfloG),T5);
  T6 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLlocG),T6);
  T7 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolG),T7);
  T8 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolXG),T8);
  T9 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLseqG),T9);
  T11 = (P)YPpair(VARREF(YLcolXG),Ynil);
  T10 = (P)YPpair(VARREF(YLseqG),T11);
  (P)YPdefine_parents(VARREF(YLseqXG),T10);
  T12 = (P)YPpair(VARREF(YLseqXG),Ynil);
  (P)YPdefine_parents(VARREF(YLlstG),T12);
  T13 = (P)YPpair(VARREF(YLseqG),Ynil);
  (P)YPdefine_parents(VARREF(YLflatG),T13);
  T14 = (P)YPpair(VARREF(YLflatG),Ynil);
  (P)YPdefine_parents(VARREF(YLvecG),T14);
  T15 = (P)YPpair(VARREF(YLflatG),Ynil);
  (P)YPdefine_parents(VARREF(YLstrG),T15);
  T16 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLsymG),T16);
  T17 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLtypeG),T17);
  T18 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLclassG),T18);
  T19 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsingletonG),T19);
  T20 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsubclassG),T20);
  T21 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLunionG),T21);
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
  T28 = (P)YPpair(VARREF(YLflatG),Ynil);
  (P)YPdefine_parents(VARREF(YLoptsG),T28);
  T29 = (P)YPpair(VARREF(YLoptsG),Ynil);
  (P)YPdefine_parents(VARREF(YLopts_vecG),T29);
  T30 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  (P)YPclass_ancestors_setter(T30,VARREF(YLanyG));
  VARSET(YPsymbols,VARREF(Ynil));
  lit_0 = YPsb((P)"Warning: symbols were created in the boot image before the symbol-creation was setup. (Probably from a df or rep)\n");
  T32 = (P)YPeqQ(VARREF(YPTused_symbols_too_earlyT),YPtrue);
  T31 = (P)YPbb(T32);
  if (T31 != YPfalse) {
    T34 = (P)YPcurrent_out_port();
    T35 = (P)YPsu(LITREF(lit_0));
    T33 = (P)YPputs(T34,T35);
  } else {
  }
  lit_1 = YPPsym((P)"name");
  lit_2 = YPPsym((P)"lookup");
  lit_3 = YPPsym((P)"s");
  T37 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lookup_97 = YPmet(FUNCODEREF(fun_lookup_97),LITREF(lit_2),T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T36,ENVNUL,PNUL,YPfalse);
  T38 = fun_98;
  VARSET(Yfab_sym,T38);
  VARSET(YPsymbols_readyQ,YPtrue);
  lit_4 = YPPsym((P)"fab-sym");
  T40 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lookup_99 = YPmet(FUNCODEREF(fun_lookup_99),LITREF(lit_2),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfab_sym = YPmet(FUNCODEREF(Yfab_sym),LITREF(lit_4),T39,ENVNUL,PNUL,YPfalse);
  T41 = Yfab_sym;
  VARSET(Yfab_sym,T41);
  T42 = (P)YPib(VARREF(YPmet_prop_len));
  (P)YPclass_prop_len_setter(T42,VARREF(YLmetG));
  lit_5 = YPPsym((P)"loop");
  lit_6 = YPPsym((P)"l");
  lit_7 = YPPsym((P)"r");
  T43 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_101 = YPmet(FUNCODEREF(fun_loop_101),LITREF(lit_5),T43,ENVNUL,PNUL,YPfalse);
  lit_8 = YPPsym((P)"colx");
  lit_9 = YPPsym((P)"lx");
  lit_10 = YPPsym((P)"x");
  lit_11 = YPPsym((P)"coly");
  lit_12 = YPPsym((P)"lxy");
  lit_13 = YPPsym((P)"y");
  T45 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_coly_103 = YPmet(FUNCODEREF(fun_coly_103),LITREF(lit_11),T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_colx_104 = YPmet(FUNCODEREF(fun_colx_104),LITREF(lit_8),T44,ENVNUL,PNUL,YPfalse);
  T46 = YPfalse;
  return T46;
}

P Y___main_6___() {
  P propF316;
  P setterF315;
  P accessorF314;
  P getterF313;
  P accessorF312;
  P propF311;
  P setterF310;
  P accessorF309;
  P getterF308;
  P accessorF307;
  P propF306;
  P setterF305;
  P accessorF304;
  P getterF303;
  P accessorF302;
  P propF301;
  P setterF300;
  P accessorF299;
  P getterF298;
  P accessorF297;
  P propF296;
  P setterF295;
  P accessorF294;
  P getterF293;
  P accessorF292;
  P propF291;
  P setterF290;
  P accessorF289;
  P getterF288;
  P accessorF287;
  P propF286;
  P setterF285;
  P accessorF284;
  P getterF283;
  P accessorF282;
  P propF281;
  P setterF280;
  P accessorF279;
  P getterF278;
  P accessorF277;
  P propF276;
  P setterF275;
  P accessorF274;
  P getterF273;
  P accessorF272;
  P propF271;
  P setterF270;
  P accessorF269;
  P getterF268;
  P accessorF267;
  P propF266;
  P setterF265;
  P accessorF264;
  P getterF263;
  P accessorF262;
  P propF261;
  P setterF260;
  P accessorF259;
  P getterF258;
  P accessorF257;
  P propF256;
  P setterF255;
  P accessorF254;
  P getterF253;
  P accessorF252;
  P propF251;
  P setterF250;
  P accessorF249;
  P getterF248;
  P accessorF247;
  P propF246;
  P setterF245;
  P accessorF244;
  P getterF243;
  P accessorF242;
  P propF241;
  P setterF240;
  P accessorF239;
  P getterF238;
  P accessorF237;
  P propF236;
  P setterF235;
  P accessorF234;
  P getterF233;
  P accessorF232;
  P propF231;
  P setterF230;
  P accessorF229;
  P getterF228;
  P accessorF227;
  P propF226;
  P setterF225;
  P accessorF224;
  P getterF223;
  P accessorF222;
  P propF221;
  P setterF220;
  P accessorF219;
  P getterF218;
  P accessorF217;
  P T393,T392,T391,T390,T389,T388,T387,T386,T385,T384,T383,T382,T381,T380,T379,T378;
  P T377,T376,T375,T374,T373,T372,T371,T370,T369,T368,T367,T366,T365,T364,T363,T362;
  P T361,T360,T359,T358,T357,T356,T355,T354,T353,T352,T351,T350,T349,T348,T347,T346;
  P T345,T344,T343,T342,T341,T340,T339,T338,T337,T336,T335,T334,T333,T332,T331,T330;
  P T329,T328,T327,T326,T325,T324,T323,T322,T321,T320,T319,T318,T317,T316,T315,T314;
  P T313,T312,T311,T310,T309,T308,T307,T306,T305,T304,T303,T302,T301,T300,T299,T298;
  P T297,T296,T295,T294,T293,T292,T291,T290,T289,T288,T287,T286,T285,T284,T283,T282;
  P T281,T280,T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266;
  P T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250;
  P T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234;
  P T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218;
  P T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202;
  P T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186;
  P T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170;
  P T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154;
  P T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138;
  P T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122;
  P T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106;
  P T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90;
  P T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74;
  P T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  VARSET(YDgen_cache_singletons_offset,YPint((P)2));
  VARSET(YDgen_cache_classes_offset,YPint((P)3));
  lit_14 = YPPsym((P)"%prop-offset");
  lit_15 = YPPsym((P)"owner");
  lit_16 = YPPsym((P)"getter");
  lit_17 = YPPsym((P)"i");
  lit_18 = YPPsym((P)"props");
  T1 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_18)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_158 = YPmet(FUNCODEREF(fun_loop_158),LITREF(lit_5),T1,ENVNUL,PNUL,YPfalse);
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
  fun_163 = YPmet(FUNCODEREF(fun_163),YPfalse,T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_164 = YPmet(FUNCODEREF(fun_164),YPfalse,T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_165 = YPmet(FUNCODEREF(fun_165),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T14 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T13 = (P)YPsig(Ynil,T14,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T12 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_28),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yhead,T12);
  T16 = fun_163;
  accessorF217 = T16;
  CALL2(1,VARREF(YPadd_met),VARREF(Yhead),accessorF217);
  (P)YPmet_name_setter(VARREF(Yhead),accessorF217);
  T15 = accessorF217;
  getterF218 = T15;
  T21 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T20 = (P)YPpair(VARREF(YLanyG),T21);
  T19 = (P)YPsig(Ynil,T20,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T18 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_29),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yhead_setter,T18);
  T23 = fun_164;
  accessorF219 = T23;
  CALL2(1,VARREF(YPadd_met),VARREF(Yhead_setter),accessorF219);
  (P)YPmet_name_setter(VARREF(Yhead_setter),accessorF219);
  T22 = accessorF219;
  setterF220 = T22;
  T26 = fun_165;
  T25 = (P)YPPprop(VARREF(YLlstG),VARREF(Yhead),VARREF(Yhead_setter),VARREF(YLanyG),T26);
  propF221 = T25;
  (P)YPmet_env_setter(propF221,getterF218);
  (P)YPmet_env_setter(propF221,setterF220);
  T27 = CALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF221);
  T24 = T27;
  T17 = T24;
  lit_31 = YPPsym((P)"tail");
  lit_32 = YPPsym((P)"tail-setter");
  T30 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_166 = YPmet(FUNCODEREF(fun_166),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_167 = YPmet(FUNCODEREF(fun_167),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_168 = YPmet(FUNCODEREF(fun_168),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T33 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T32 = (P)YPsig(Ynil,T33,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T31 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_31),T32,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytail,T31);
  T35 = fun_166;
  accessorF222 = T35;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytail),accessorF222);
  (P)YPmet_name_setter(VARREF(Ytail),accessorF222);
  T34 = accessorF222;
  getterF223 = T34;
  T40 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T39 = (P)YPpair(VARREF(YLanyG),T40);
  T38 = (P)YPsig(Ynil,T39,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T37 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_32),T38,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytail_setter,T37);
  T42 = fun_167;
  accessorF224 = T42;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytail_setter),accessorF224);
  (P)YPmet_name_setter(VARREF(Ytail_setter),accessorF224);
  T41 = accessorF224;
  setterF225 = T41;
  T45 = fun_168;
  T44 = (P)YPPprop(VARREF(YLlstG),VARREF(Ytail),VARREF(Ytail_setter),VARREF(YLlstG),T45);
  propF226 = T44;
  (P)YPmet_env_setter(propF226,getterF223);
  (P)YPmet_env_setter(propF226,setterF225);
  T46 = CALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF226);
  T43 = T46;
  T36 = T43;
  lit_33 = YPPsym((P)"sym-name");
  lit_34 = YPPsym((P)"sym-name-setter");
  T49 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_169 = YPmet(FUNCODEREF(fun_169),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_170 = YPmet(FUNCODEREF(fun_170),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_171 = YPmet(FUNCODEREF(fun_171),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T52 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T51 = (P)YPsig(Ynil,T52,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T50 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_33),T51,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysym_name,T50);
  T54 = fun_169;
  accessorF227 = T54;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysym_name),accessorF227);
  (P)YPmet_name_setter(VARREF(Ysym_name),accessorF227);
  T53 = accessorF227;
  getterF228 = T53;
  T59 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T58 = (P)YPpair(VARREF(YLanyG),T59);
  T57 = (P)YPsig(Ynil,T58,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T56 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_34),T57,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysym_name_setter,T56);
  T61 = fun_170;
  accessorF229 = T61;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysym_name_setter),accessorF229);
  (P)YPmet_name_setter(VARREF(Ysym_name_setter),accessorF229);
  T60 = accessorF229;
  setterF230 = T60;
  T64 = fun_171;
  T63 = (P)YPPprop(VARREF(YLsymG),VARREF(Ysym_name),VARREF(Ysym_name_setter),VARREF(YLstrG),T64);
  propF231 = T63;
  (P)YPmet_env_setter(propF231,getterF228);
  (P)YPmet_env_setter(propF231,setterF230);
  T65 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsymG),propF231);
  T62 = T65;
  T55 = T62;
  lit_35 = YPPsym((P)"class-prop-len");
  lit_36 = YPPsym((P)"class-prop-len-setter");
  T68 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_172 = YPmet(FUNCODEREF(fun_172),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_173 = YPmet(FUNCODEREF(fun_173),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_174 = YPmet(FUNCODEREF(fun_174),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T71 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T70 = (P)YPsig(Ynil,T71,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T69 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_35),T70,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_prop_len,T69);
  T73 = fun_172;
  accessorF232 = T73;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len),accessorF232);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len),accessorF232);
  T72 = accessorF232;
  getterF233 = T72;
  T78 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T77 = (P)YPpair(VARREF(YLanyG),T78);
  T76 = (P)YPsig(Ynil,T77,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T75 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_36),T76,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_prop_len_setter,T75);
  T80 = fun_173;
  accessorF234 = T80;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len_setter),accessorF234);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len_setter),accessorF234);
  T79 = accessorF234;
  setterF235 = T79;
  T83 = fun_174;
  T82 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_prop_len),VARREF(Yclass_prop_len_setter),VARREF(YLintG),T83);
  propF236 = T82;
  (P)YPmet_env_setter(propF236,getterF233);
  (P)YPmet_env_setter(propF236,setterF235);
  T84 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF236);
  T81 = T84;
  T74 = T81;
  lit_37 = YPPsym((P)"class-name");
  lit_38 = YPPsym((P)"class-name-setter");
  T87 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLsymG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_176 = YPmet(FUNCODEREF(fun_176),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_177 = YPmet(FUNCODEREF(fun_177),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T90 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T89 = (P)YPsig(Ynil,T90,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T88 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_37),T89,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_name,T88);
  T92 = fun_175;
  accessorF237 = T92;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_name),accessorF237);
  (P)YPmet_name_setter(VARREF(Yclass_name),accessorF237);
  T91 = accessorF237;
  getterF238 = T91;
  T97 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T96 = (P)YPpair(VARREF(YLanyG),T97);
  T95 = (P)YPsig(Ynil,T96,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T94 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_38),T95,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_name_setter,T94);
  T99 = fun_176;
  accessorF239 = T99;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_name_setter),accessorF239);
  (P)YPmet_name_setter(VARREF(Yclass_name_setter),accessorF239);
  T98 = accessorF239;
  setterF240 = T98;
  T102 = fun_177;
  T101 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_name),VARREF(Yclass_name_setter),VARREF(YLsymG),T102);
  propF241 = T101;
  (P)YPmet_env_setter(propF241,getterF238);
  (P)YPmet_env_setter(propF241,setterF240);
  T103 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF241);
  T100 = T103;
  T93 = T100;
  lit_39 = YPPsym((P)"class-parents");
  lit_40 = YPPsym((P)"class-parents-setter");
  T106 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_179 = YPmet(FUNCODEREF(fun_179),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T109 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T108 = (P)YPsig(Ynil,T109,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T107 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_39),T108,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_parents,T107);
  T111 = fun_178;
  accessorF242 = T111;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents),accessorF242);
  (P)YPmet_name_setter(VARREF(Yclass_parents),accessorF242);
  T110 = accessorF242;
  getterF243 = T110;
  T116 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T115 = (P)YPpair(VARREF(YLanyG),T116);
  T114 = (P)YPsig(Ynil,T115,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T113 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_40),T114,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_parents_setter,T113);
  T118 = fun_179;
  accessorF244 = T118;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents_setter),accessorF244);
  (P)YPmet_name_setter(VARREF(Yclass_parents_setter),accessorF244);
  T117 = accessorF244;
  setterF245 = T117;
  T121 = fun_180;
  T120 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_parents),VARREF(Yclass_parents_setter),VARREF(YLlstG),T121);
  propF246 = T120;
  (P)YPmet_env_setter(propF246,getterF243);
  (P)YPmet_env_setter(propF246,setterF245);
  T122 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF246);
  T119 = T122;
  T112 = T119;
  lit_41 = YPPsym((P)"class-direct-props");
  lit_42 = YPPsym((P)"class-direct-props-setter");
  T125 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_181 = YPmet(FUNCODEREF(fun_181),YPfalse,T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_183 = YPmet(FUNCODEREF(fun_183),YPfalse,T123,ENVNUL,PNUL,YPfalse);
  T128 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T127 = (P)YPsig(Ynil,T128,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T126 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_41),T127,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_direct_props,T126);
  T130 = fun_181;
  accessorF247 = T130;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props),accessorF247);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props),accessorF247);
  T129 = accessorF247;
  getterF248 = T129;
  T135 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T134 = (P)YPpair(VARREF(YLanyG),T135);
  T133 = (P)YPsig(Ynil,T134,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T132 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_42),T133,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_direct_props_setter,T132);
  T137 = fun_182;
  accessorF249 = T137;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props_setter),accessorF249);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props_setter),accessorF249);
  T136 = accessorF249;
  setterF250 = T136;
  T140 = fun_183;
  T139 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_direct_props),VARREF(Yclass_direct_props_setter),VARREF(YLlstG),T140);
  propF251 = T139;
  (P)YPmet_env_setter(propF251,getterF248);
  (P)YPmet_env_setter(propF251,setterF250);
  T141 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF251);
  T138 = T141;
  T131 = T138;
  lit_43 = YPPsym((P)"class-ancestors");
  lit_44 = YPPsym((P)"class-ancestors-setter");
  T144 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_184 = YPmet(FUNCODEREF(fun_184),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_185 = YPmet(FUNCODEREF(fun_185),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_186 = YPmet(FUNCODEREF(fun_186),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T147 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T146 = (P)YPsig(Ynil,T147,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T145 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_43),T146,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_ancestors,T145);
  T149 = fun_184;
  accessorF252 = T149;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors),accessorF252);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors),accessorF252);
  T148 = accessorF252;
  getterF253 = T148;
  T154 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T153 = (P)YPpair(VARREF(YLanyG),T154);
  T152 = (P)YPsig(Ynil,T153,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T151 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_44),T152,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_ancestors_setter,T151);
  T156 = fun_185;
  accessorF254 = T156;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors_setter),accessorF254);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors_setter),accessorF254);
  T155 = accessorF254;
  setterF255 = T155;
  T159 = fun_186;
  T158 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_ancestors),VARREF(Yclass_ancestors_setter),VARREF(YLlstG),T159);
  propF256 = T158;
  (P)YPmet_env_setter(propF256,getterF253);
  (P)YPmet_env_setter(propF256,setterF255);
  T160 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF256);
  T157 = T160;
  T150 = T157;
  lit_45 = YPPsym((P)"class-props");
  lit_46 = YPPsym((P)"class-props-setter");
  T163 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_187 = YPmet(FUNCODEREF(fun_187),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_189 = YPmet(FUNCODEREF(fun_189),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T166 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T165 = (P)YPsig(Ynil,T166,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T164 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_45),T165,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_props,T164);
  T168 = fun_187;
  accessorF257 = T168;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_props),accessorF257);
  (P)YPmet_name_setter(VARREF(Yclass_props),accessorF257);
  T167 = accessorF257;
  getterF258 = T167;
  T173 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T172 = (P)YPpair(VARREF(YLanyG),T173);
  T171 = (P)YPsig(Ynil,T172,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T170 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_46),T171,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_props_setter,T170);
  T175 = fun_188;
  accessorF259 = T175;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_props_setter),accessorF259);
  (P)YPmet_name_setter(VARREF(Yclass_props_setter),accessorF259);
  T174 = accessorF259;
  setterF260 = T174;
  T178 = fun_189;
  T177 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_props),VARREF(Yclass_props_setter),VARREF(YLlstG),T178);
  propF261 = T177;
  (P)YPmet_env_setter(propF261,getterF258);
  (P)YPmet_env_setter(propF261,setterF260);
  T179 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF261);
  T176 = T179;
  T169 = T176;
  lit_47 = YPPsym((P)"class-descendents");
  lit_48 = YPPsym((P)"class-descendents-setter");
  T182 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_190 = YPmet(FUNCODEREF(fun_190),YPfalse,T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_192 = YPmet(FUNCODEREF(fun_192),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T185 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T184 = (P)YPsig(Ynil,T185,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T183 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_47),T184,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_descendents,T183);
  T187 = fun_190;
  accessorF262 = T187;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_descendents),accessorF262);
  (P)YPmet_name_setter(VARREF(Yclass_descendents),accessorF262);
  T186 = accessorF262;
  getterF263 = T186;
  T192 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T191 = (P)YPpair(VARREF(YLanyG),T192);
  T190 = (P)YPsig(Ynil,T191,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T189 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_48),T190,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_descendents_setter,T189);
  T194 = fun_191;
  accessorF264 = T194;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_descendents_setter),accessorF264);
  (P)YPmet_name_setter(VARREF(Yclass_descendents_setter),accessorF264);
  T193 = accessorF264;
  setterF265 = T193;
  T197 = fun_192;
  T196 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_descendents),VARREF(Yclass_descendents_setter),VARREF(YLlstG),T197);
  propF266 = T196;
  (P)YPmet_env_setter(propF266,getterF263);
  (P)YPmet_env_setter(propF266,setterF265);
  T198 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF266);
  T195 = T198;
  T188 = T195;
  lit_49 = YPPsym((P)"class-gens");
  lit_50 = YPPsym((P)"class-gens-setter");
  T201 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T201,ENVNUL,PNUL,YPfalse);
  T200 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_194 = YPmet(FUNCODEREF(fun_194),YPfalse,T200,ENVNUL,PNUL,YPfalse);
  T199 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_195 = YPmet(FUNCODEREF(fun_195),YPfalse,T199,ENVNUL,PNUL,YPfalse);
  T204 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T203 = (P)YPsig(Ynil,T204,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T202 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_49),T203,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_gens,T202);
  T206 = fun_193;
  accessorF267 = T206;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens),accessorF267);
  (P)YPmet_name_setter(VARREF(Yclass_gens),accessorF267);
  T205 = accessorF267;
  getterF268 = T205;
  T211 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T210 = (P)YPpair(VARREF(YLanyG),T211);
  T209 = (P)YPsig(Ynil,T210,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T208 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_50),T209,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_gens_setter,T208);
  T213 = fun_194;
  accessorF269 = T213;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens_setter),accessorF269);
  (P)YPmet_name_setter(VARREF(Yclass_gens_setter),accessorF269);
  T212 = accessorF269;
  setterF270 = T212;
  T216 = fun_195;
  T215 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_gens),VARREF(Yclass_gens_setter),VARREF(YLlstG),T216);
  propF271 = T215;
  (P)YPmet_env_setter(propF271,getterF268);
  (P)YPmet_env_setter(propF271,setterF270);
  T217 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF271);
  T214 = T217;
  T207 = T214;
  lit_51 = YPPsym((P)"class-mets");
  lit_52 = YPPsym((P)"class-mets-setter");
  T220 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_196 = YPmet(FUNCODEREF(fun_196),YPfalse,T220,ENVNUL,PNUL,YPfalse);
  T219 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T219,ENVNUL,PNUL,YPfalse);
  T218 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_198 = YPmet(FUNCODEREF(fun_198),YPfalse,T218,ENVNUL,PNUL,YPfalse);
  T223 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T222 = (P)YPsig(Ynil,T223,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T221 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_51),T222,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_mets,T221);
  T225 = fun_196;
  accessorF272 = T225;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets),accessorF272);
  (P)YPmet_name_setter(VARREF(Yclass_mets),accessorF272);
  T224 = accessorF272;
  getterF273 = T224;
  T230 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T229 = (P)YPpair(VARREF(YLanyG),T230);
  T228 = (P)YPsig(Ynil,T229,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T227 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_52),T228,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_mets_setter,T227);
  T232 = fun_197;
  accessorF274 = T232;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets_setter),accessorF274);
  (P)YPmet_name_setter(VARREF(Yclass_mets_setter),accessorF274);
  T231 = accessorF274;
  setterF275 = T231;
  T235 = fun_198;
  T234 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_mets),VARREF(Yclass_mets_setter),VARREF(YLlstG),T235);
  propF276 = T234;
  (P)YPmet_env_setter(propF276,getterF273);
  (P)YPmet_env_setter(propF276,setterF275);
  T236 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF276);
  T233 = T236;
  T226 = T233;
  lit_53 = YPPsym((P)"class-forward");
  lit_54 = YPPsym((P)"class-forward-setter");
  T239 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_199 = YPmet(FUNCODEREF(fun_199),YPfalse,T239,ENVNUL,PNUL,YPfalse);
  T238 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_200 = YPmet(FUNCODEREF(fun_200),YPfalse,T238,ENVNUL,PNUL,YPfalse);
  T237 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_201 = YPmet(FUNCODEREF(fun_201),YPfalse,T237,ENVNUL,PNUL,YPfalse);
  T242 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T241 = (P)YPsig(Ynil,T242,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T240 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_53),T241,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_forward,T240);
  T244 = fun_199;
  accessorF277 = T244;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward),accessorF277);
  (P)YPmet_name_setter(VARREF(Yclass_forward),accessorF277);
  T243 = accessorF277;
  getterF278 = T243;
  T249 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T248 = (P)YPpair(VARREF(YLanyG),T249);
  T247 = (P)YPsig(Ynil,T248,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T246 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_54),T247,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_forward_setter,T246);
  T251 = fun_200;
  accessorF279 = T251;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward_setter),accessorF279);
  (P)YPmet_name_setter(VARREF(Yclass_forward_setter),accessorF279);
  T250 = accessorF279;
  setterF280 = T250;
  T254 = fun_201;
  T253 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_forward),VARREF(Yclass_forward_setter),VARREF(YLanyG),T254);
  propF281 = T253;
  (P)YPmet_env_setter(propF281,getterF278);
  (P)YPmet_env_setter(propF281,setterF280);
  T255 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF281);
  T252 = T255;
  T245 = T252;
  lit_55 = YPPsym((P)"class-id");
  lit_56 = YPPsym((P)"class-id-setter");
  T258 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T258,ENVNUL,PNUL,YPfalse);
  T257 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_203 = YPmet(FUNCODEREF(fun_203),YPfalse,T257,ENVNUL,PNUL,YPfalse);
  T256 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_204 = YPmet(FUNCODEREF(fun_204),YPfalse,T256,ENVNUL,PNUL,YPfalse);
  T261 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T260 = (P)YPsig(Ynil,T261,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T259 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_55),T260,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_id,T259);
  T263 = fun_202;
  accessorF282 = T263;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_id),accessorF282);
  (P)YPmet_name_setter(VARREF(Yclass_id),accessorF282);
  T262 = accessorF282;
  getterF283 = T262;
  T268 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T267 = (P)YPpair(VARREF(YLanyG),T268);
  T266 = (P)YPsig(Ynil,T267,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T265 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_56),T266,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_id_setter,T265);
  T270 = fun_203;
  accessorF284 = T270;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_id_setter),accessorF284);
  (P)YPmet_name_setter(VARREF(Yclass_id_setter),accessorF284);
  T269 = accessorF284;
  setterF285 = T269;
  T273 = fun_204;
  T272 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_id),VARREF(Yclass_id_setter),VARREF(YLintG),T273);
  propF286 = T272;
  (P)YPmet_env_setter(propF286,getterF283);
  (P)YPmet_env_setter(propF286,setterF285);
  T274 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF286);
  T271 = T274;
  T264 = T271;
  lit_57 = YPPsym((P)"class-row");
  lit_58 = YPPsym((P)"class-row-setter");
  T277 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_205 = YPmet(FUNCODEREF(fun_205),YPfalse,T277,ENVNUL,PNUL,YPfalse);
  T276 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLvecG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T276,ENVNUL,PNUL,YPfalse);
  T275 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_207 = YPmet(FUNCODEREF(fun_207),YPfalse,T275,ENVNUL,PNUL,YPfalse);
  T280 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T279 = (P)YPsig(Ynil,T280,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T278 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_57),T279,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_row,T278);
  T282 = fun_205;
  accessorF287 = T282;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_row),accessorF287);
  (P)YPmet_name_setter(VARREF(Yclass_row),accessorF287);
  T281 = accessorF287;
  getterF288 = T281;
  T287 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T286 = (P)YPpair(VARREF(YLanyG),T287);
  T285 = (P)YPsig(Ynil,T286,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T284 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_58),T285,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_row_setter,T284);
  T289 = fun_206;
  accessorF289 = T289;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_row_setter),accessorF289);
  (P)YPmet_name_setter(VARREF(Yclass_row_setter),accessorF289);
  T288 = accessorF289;
  setterF290 = T288;
  T292 = fun_207;
  T291 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_row),VARREF(Yclass_row_setter),VARREF(YLvecG),T292);
  propF291 = T291;
  (P)YPmet_env_setter(propF291,getterF288);
  (P)YPmet_env_setter(propF291,setterF290);
  T293 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF291);
  T290 = T293;
  T283 = T290;
  lit_59 = YPPsym((P)"type-object");
  lit_60 = YPPsym((P)"type-object-setter");
  T296 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsingletonG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_208 = YPmet(FUNCODEREF(fun_208),YPfalse,T296,ENVNUL,PNUL,YPfalse);
  T295 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T295,ENVNUL,PNUL,YPfalse);
  T294 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T294,ENVNUL,PNUL,YPfalse);
  T299 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T298 = (P)YPsig(Ynil,T299,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T297 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_59),T298,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_object,T297);
  T301 = fun_208;
  accessorF292 = T301;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_object),accessorF292);
  (P)YPmet_name_setter(VARREF(Ytype_object),accessorF292);
  T300 = accessorF292;
  getterF293 = T300;
  T306 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T305 = (P)YPpair(VARREF(YLanyG),T306);
  T304 = (P)YPsig(Ynil,T305,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T303 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_60),T304,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_object_setter,T303);
  T308 = fun_209;
  accessorF294 = T308;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_object_setter),accessorF294);
  (P)YPmet_name_setter(VARREF(Ytype_object_setter),accessorF294);
  T307 = accessorF294;
  setterF295 = T307;
  T311 = fun_210;
  T310 = (P)YPPprop(VARREF(YLsingletonG),VARREF(Ytype_object),VARREF(Ytype_object_setter),VARREF(YLanyG),T311);
  propF296 = T310;
  (P)YPmet_env_setter(propF296,getterF293);
  (P)YPmet_env_setter(propF296,setterF295);
  T312 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsingletonG),propF296);
  T309 = T312;
  T302 = T309;
  lit_61 = YPPsym((P)"type-class");
  lit_62 = YPPsym((P)"type-class-setter");
  T315 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsubclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_211 = YPmet(FUNCODEREF(fun_211),YPfalse,T315,ENVNUL,PNUL,YPfalse);
  T314 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_212 = YPmet(FUNCODEREF(fun_212),YPfalse,T314,ENVNUL,PNUL,YPfalse);
  T313 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_213 = YPmet(FUNCODEREF(fun_213),YPfalse,T313,ENVNUL,PNUL,YPfalse);
  T318 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T317 = (P)YPsig(Ynil,T318,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T316 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_61),T317,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_class,T316);
  T320 = fun_211;
  accessorF297 = T320;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_class),accessorF297);
  (P)YPmet_name_setter(VARREF(Ytype_class),accessorF297);
  T319 = accessorF297;
  getterF298 = T319;
  T325 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T324 = (P)YPpair(VARREF(YLanyG),T325);
  T323 = (P)YPsig(Ynil,T324,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T322 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_62),T323,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_class_setter,T322);
  T327 = fun_212;
  accessorF299 = T327;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_class_setter),accessorF299);
  (P)YPmet_name_setter(VARREF(Ytype_class_setter),accessorF299);
  T326 = accessorF299;
  setterF300 = T326;
  T330 = fun_213;
  T329 = (P)YPPprop(VARREF(YLsubclassG),VARREF(Ytype_class),VARREF(Ytype_class_setter),VARREF(YLclassG),T330);
  propF301 = T329;
  (P)YPmet_env_setter(propF301,getterF298);
  (P)YPmet_env_setter(propF301,setterF300);
  T331 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsubclassG),propF301);
  T328 = T331;
  T321 = T328;
  lit_63 = YPPsym((P)"type-elts");
  lit_64 = YPPsym((P)"type-elts-setter");
  T334 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLunionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_214 = YPmet(FUNCODEREF(fun_214),YPfalse,T334,ENVNUL,PNUL,YPfalse);
  T333 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T333,ENVNUL,PNUL,YPfalse);
  T332 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T332,ENVNUL,PNUL,YPfalse);
  T337 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T336 = (P)YPsig(Ynil,T337,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T335 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_63),T336,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_elts,T335);
  T339 = fun_214;
  accessorF302 = T339;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_elts),accessorF302);
  (P)YPmet_name_setter(VARREF(Ytype_elts),accessorF302);
  T338 = accessorF302;
  getterF303 = T338;
  T344 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T343 = (P)YPpair(VARREF(YLanyG),T344);
  T342 = (P)YPsig(Ynil,T343,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T341 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_64),T342,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_elts_setter,T341);
  T346 = fun_215;
  accessorF304 = T346;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_elts_setter),accessorF304);
  (P)YPmet_name_setter(VARREF(Ytype_elts_setter),accessorF304);
  T345 = accessorF304;
  setterF305 = T345;
  T349 = fun_216;
  T348 = (P)YPPprop(VARREF(YLunionG),VARREF(Ytype_elts),VARREF(Ytype_elts_setter),VARREF(YLlstG),T349);
  propF306 = T348;
  (P)YPmet_env_setter(propF306,getterF303);
  (P)YPmet_env_setter(propF306,setterF305);
  T350 = CALL2(1,VARREF(YPadd_prop),VARREF(YLunionG),propF306);
  T347 = T350;
  T340 = T347;
  lit_65 = YPPsym((P)"prop-owner");
  lit_66 = YPPsym((P)"prop-owner-setter");
  T353 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_217 = YPmet(FUNCODEREF(fun_217),YPfalse,T353,ENVNUL,PNUL,YPfalse);
  T352 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_218 = YPmet(FUNCODEREF(fun_218),YPfalse,T352,ENVNUL,PNUL,YPfalse);
  T351 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T351,ENVNUL,PNUL,YPfalse);
  T356 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T355 = (P)YPsig(Ynil,T356,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T354 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_65),T355,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_owner,T354);
  T358 = fun_217;
  accessorF307 = T358;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner),accessorF307);
  (P)YPmet_name_setter(VARREF(Yprop_owner),accessorF307);
  T357 = accessorF307;
  getterF308 = T357;
  T363 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T362 = (P)YPpair(VARREF(YLanyG),T363);
  T361 = (P)YPsig(Ynil,T362,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T360 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_66),T361,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_owner_setter,T360);
  T365 = fun_218;
  accessorF309 = T365;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner_setter),accessorF309);
  (P)YPmet_name_setter(VARREF(Yprop_owner_setter),accessorF309);
  T364 = accessorF309;
  setterF310 = T364;
  T368 = fun_219;
  T367 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_owner),VARREF(Yprop_owner_setter),VARREF(YLanyG),T368);
  propF311 = T367;
  (P)YPmet_env_setter(propF311,getterF308);
  (P)YPmet_env_setter(propF311,setterF310);
  T369 = CALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF311);
  T366 = T369;
  T359 = T366;
  lit_67 = YPPsym((P)"prop-getter");
  lit_68 = YPPsym((P)"prop-getter-setter");
  T376 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T375 = fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T376,ENVNUL,PNUL,YPfalse);
  T374 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T373 = fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T374,ENVNUL,PNUL,YPfalse);
  T372 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T371 = fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T372,ENVNUL,PNUL,YPfalse);
  T380 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T379 = (P)YPsig(Ynil,T380,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T378 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_67),T379,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_getter,T378);
  T382 = fun_220;
  accessorF312 = T382;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter),accessorF312);
  (P)YPmet_name_setter(VARREF(Yprop_getter),accessorF312);
  T381 = accessorF312;
  getterF313 = T381;
  T387 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T386 = (P)YPpair(VARREF(YLanyG),T387);
  T385 = (P)YPsig(Ynil,T386,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T384 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_68),T385,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_getter_setter,T384);
  T389 = fun_221;
  accessorF314 = T389;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter_setter),accessorF314);
  (P)YPmet_name_setter(VARREF(Yprop_getter_setter),accessorF314);
  T388 = accessorF314;
  setterF315 = T388;
  T392 = fun_222;
  T391 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_getter),VARREF(Yprop_getter_setter),VARREF(YLfunG),T392);
  propF316 = T391;
  (P)YPmet_env_setter(propF316,getterF313);
  (P)YPmet_env_setter(propF316,setterF315);
  T393 = CALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF316);
  T390 = T393;
  T383 = T390;
  T377 = T383;
  T370 = T377;
  return T370;
}

P Y___main_7___() {
  P propF446;
  P setterF445;
  P accessorF444;
  P getterF443;
  P accessorF442;
  P propF441;
  P setterF440;
  P accessorF439;
  P getterF438;
  P accessorF437;
  P propF436;
  P setterF435;
  P accessorF434;
  P getterF433;
  P accessorF432;
  P propF431;
  P setterF430;
  P accessorF429;
  P getterF428;
  P accessorF427;
  P propF426;
  P setterF425;
  P accessorF424;
  P getterF423;
  P accessorF422;
  P propF421;
  P setterF420;
  P accessorF419;
  P getterF418;
  P accessorF417;
  P propF416;
  P setterF415;
  P accessorF414;
  P getterF413;
  P accessorF412;
  P propF411;
  P setterF410;
  P accessorF409;
  P getterF408;
  P accessorF407;
  P propF406;
  P setterF405;
  P accessorF404;
  P getterF403;
  P accessorF402;
  P propF401;
  P setterF400;
  P accessorF399;
  P getterF398;
  P accessorF397;
  P propF396;
  P setterF395;
  P accessorF394;
  P getterF393;
  P accessorF392;
  P propF391;
  P setterF390;
  P accessorF389;
  P getterF388;
  P accessorF387;
  P propF386;
  P setterF385;
  P accessorF384;
  P getterF383;
  P accessorF382;
  P propF381;
  P setterF380;
  P accessorF379;
  P getterF378;
  P accessorF377;
  P propF376;
  P setterF375;
  P accessorF374;
  P getterF373;
  P accessorF372;
  P propF371;
  P setterF370;
  P accessorF369;
  P getterF368;
  P accessorF367;
  P propF366;
  P setterF365;
  P accessorF364;
  P getterF363;
  P accessorF362;
  P propF361;
  P setterF360;
  P accessorF359;
  P getterF358;
  P accessorF357;
  P propF356;
  P setterF355;
  P accessorF354;
  P getterF353;
  P accessorF352;
  P propF351;
  P setterF350;
  P accessorF349;
  P getterF348;
  P accessorF347;
  P propF346;
  P setterF345;
  P accessorF344;
  P getterF343;
  P accessorF342;
  P propF341;
  P setterF340;
  P accessorF339;
  P getterF338;
  P accessorF337;
  P propF336;
  P setterF335;
  P accessorF334;
  P getterF333;
  P accessorF332;
  P propF331;
  P setterF330;
  P accessorF329;
  P getterF328;
  P accessorF327;
  P propF326;
  P setterF325;
  P accessorF324;
  P getterF323;
  P accessorF322;
  P propF321;
  P setterF320;
  P accessorF319;
  P getterF318;
  P accessorF317;
  P T499,T498,T497,T496,T495,T494,T493,T492,T491,T490,T489,T488,T487,T486,T485,T484;
  P T483,T482,T481,T480,T479,T478,T477,T476,T475,T474,T473,T472,T471,T470,T469,T468;
  P T467,T466,T465,T464,T463,T462,T461,T460,T459,T458,T457,T456,T455,T454,T453,T452;
  P T451,T450,T449,T448,T447,T446,T445,T444,T443,T442,T441,T440,T439,T438,T437,T436;
  P T435,T434,T433,T432,T431,T430,T429,T428,T427,T426,T425,T424,T423,T422,T421,T420;
  P T419,T418,T417,T416,T415,T414,T413,T412,T411,T410,T409,T408,T407,T406,T405,T404;
  P T403,T402,T401,T400,T399,T398,T397,T396,T395,T394,T393,T392,T391,T390,T389,T388;
  P T387,T386,T385,T384,T383,T382,T381,T380,T379,T378,T377,T376,T375,T374,T373,T372;
  P T371,T370,T369,T368,T367,T366,T365,T364,T363,T362,T361,T360,T359,T358,T357,T356;
  P T355,T354,T353,T352,T351,T350,T349,T348,T347,T346,T345,T344,T343,T342,T341,T340;
  P T339,T338,T337,T336,T335,T334,T333,T332,T331,T330,T329,T328,T327,T326,T325,T324;
  P T323,T322,T321,T320,T319,T318,T317,T316,T315,T314,T313,T312,T311,T310,T309,T308;
  P T307,T306,T305,T304,T303,T302,T301,T300,T299,T298,T297,T296,T295,T294,T293,T292;
  P T291,T290,T289,T288,T287,T286,T285,T284,T283,T282,T281,T280,T279,T278,T277,T276;
  P T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260;
  P T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244;
  P T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228;
  P T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212;
  P T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196;
  P T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180;
  P T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164;
  P T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148;
  P T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132;
  P T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116;
  P T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100;
  P T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84;
  P T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68;
  P T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
loop:
  lit_69 = YPPsym((P)"prop-setter");
  lit_70 = YPPsym((P)"prop-setter-setter");
  T2 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_223 = YPmet(FUNCODEREF(fun_223),YPfalse,T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_224 = YPmet(FUNCODEREF(fun_224),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T5 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T4 = (P)YPsig(Ynil,T5,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T3 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_69),T4,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_setter,T3);
  T7 = fun_223;
  accessorF317 = T7;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter),accessorF317);
  (P)YPmet_name_setter(VARREF(Yprop_setter),accessorF317);
  T6 = accessorF317;
  getterF318 = T6;
  T12 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T11 = (P)YPpair(VARREF(YLanyG),T12);
  T10 = (P)YPsig(Ynil,T11,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T9 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_70),T10,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_setter_setter,T9);
  T14 = fun_224;
  accessorF319 = T14;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter_setter),accessorF319);
  (P)YPmet_name_setter(VARREF(Yprop_setter_setter),accessorF319);
  T13 = accessorF319;
  setterF320 = T13;
  T17 = fun_225;
  T16 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_setter),VARREF(Yprop_setter_setter),VARREF(YLfunG),T17);
  propF321 = T16;
  (P)YPmet_env_setter(propF321,getterF318);
  (P)YPmet_env_setter(propF321,setterF320);
  T18 = CALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF321);
  T15 = T18;
  T8 = T15;
  lit_71 = YPPsym((P)"prop-type");
  lit_72 = YPPsym((P)"prop-type-setter");
  T21 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_226 = YPmet(FUNCODEREF(fun_226),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLtypeG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_227 = YPmet(FUNCODEREF(fun_227),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T19 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_228 = YPmet(FUNCODEREF(fun_228),YPfalse,T19,ENVNUL,PNUL,YPfalse);
  T24 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T23 = (P)YPsig(Ynil,T24,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T22 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_71),T23,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_type,T22);
  T26 = fun_226;
  accessorF322 = T26;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_type),accessorF322);
  (P)YPmet_name_setter(VARREF(Yprop_type),accessorF322);
  T25 = accessorF322;
  getterF323 = T25;
  T31 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T30 = (P)YPpair(VARREF(YLanyG),T31);
  T29 = (P)YPsig(Ynil,T30,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T28 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_72),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_type_setter,T28);
  T33 = fun_227;
  accessorF324 = T33;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_type_setter),accessorF324);
  (P)YPmet_name_setter(VARREF(Yprop_type_setter),accessorF324);
  T32 = accessorF324;
  setterF325 = T32;
  T36 = fun_228;
  T35 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_type),VARREF(Yprop_type_setter),VARREF(YLtypeG),T36);
  propF326 = T35;
  (P)YPmet_env_setter(propF326,getterF323);
  (P)YPmet_env_setter(propF326,setterF325);
  T37 = CALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF326);
  T34 = T37;
  T27 = T34;
  lit_73 = YPPsym((P)"prop-init");
  lit_74 = YPPsym((P)"prop-init-setter");
  T41 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_229 = YPmet(FUNCODEREF(fun_229),YPfalse,T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_230 = YPmet(FUNCODEREF(fun_230),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_231 = YPmet(FUNCODEREF(fun_231),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T44 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T43 = (P)YPsig(Ynil,T44,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T42 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_73),T43,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_init,T42);
  T46 = fun_229;
  accessorF327 = T46;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_init),accessorF327);
  (P)YPmet_name_setter(VARREF(Yprop_init),accessorF327);
  T45 = accessorF327;
  getterF328 = T45;
  T51 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T50 = (P)YPpair(VARREF(YLanyG),T51);
  T49 = (P)YPsig(Ynil,T50,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T48 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_74),T49,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_init_setter,T48);
  T53 = fun_230;
  accessorF329 = T53;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_init_setter),accessorF329);
  (P)YPmet_name_setter(VARREF(Yprop_init_setter),accessorF329);
  T52 = accessorF329;
  setterF330 = T52;
  T56 = fun_232;
  T55 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_init),VARREF(Yprop_init_setter),VARREF(YLfunG),T56);
  propF331 = T55;
  (P)YPmet_env_setter(propF331,getterF328);
  (P)YPmet_env_setter(propF331,setterF330);
  T57 = CALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF331);
  T54 = T57;
  T47 = T54;
  lit_75 = YPPsym((P)"gen-cache-missable?");
  lit_76 = YPPsym((P)"gen-cache-missable?-setter");
  T60 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_233 = YPmet(FUNCODEREF(fun_233),YPfalse,T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlogG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_234 = YPmet(FUNCODEREF(fun_234),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_235 = YPmet(FUNCODEREF(fun_235),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T63 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T62 = (P)YPsig(Ynil,T63,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T61 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_75),T62,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_missableQ,T61);
  T65 = fun_233;
  accessorF332 = T65;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ),accessorF332);
  (P)YPmet_name_setter(VARREF(Ygen_cache_missableQ),accessorF332);
  T64 = accessorF332;
  getterF333 = T64;
  T70 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T69 = (P)YPpair(VARREF(YLanyG),T70);
  T68 = (P)YPsig(Ynil,T69,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T67 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_76),T68,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_missableQ_setter,T67);
  T72 = fun_234;
  accessorF334 = T72;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ_setter),accessorF334);
  (P)YPmet_name_setter(VARREF(Ygen_cache_missableQ_setter),accessorF334);
  T71 = accessorF334;
  setterF335 = T71;
  T75 = fun_235;
  T74 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ),VARREF(Ygen_cache_missableQ_setter),VARREF(YLlogG),T75);
  propF336 = T74;
  (P)YPmet_env_setter(propF336,getterF333);
  (P)YPmet_env_setter(propF336,setterF335);
  T76 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF336);
  T73 = T76;
  T66 = T73;
  lit_77 = YPPsym((P)"gen-cache-arg-pos");
  lit_78 = YPPsym((P)"gen-cache-arg-pos-setter");
  T79 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_237 = YPmet(FUNCODEREF(fun_237),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_238 = YPmet(FUNCODEREF(fun_238),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T82 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T81 = (P)YPsig(Ynil,T82,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T80 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_77),T81,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_arg_pos,T80);
  T84 = fun_236;
  accessorF337 = T84;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos),accessorF337);
  (P)YPmet_name_setter(VARREF(Ygen_cache_arg_pos),accessorF337);
  T83 = accessorF337;
  getterF338 = T83;
  T89 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T88 = (P)YPpair(VARREF(YLanyG),T89);
  T87 = (P)YPsig(Ynil,T88,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T86 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_78),T87,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_arg_pos_setter,T86);
  T91 = fun_237;
  accessorF339 = T91;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos_setter),accessorF339);
  (P)YPmet_name_setter(VARREF(Ygen_cache_arg_pos_setter),accessorF339);
  T90 = accessorF339;
  setterF340 = T90;
  T94 = fun_238;
  T93 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos),VARREF(Ygen_cache_arg_pos_setter),VARREF(YLintG),T94);
  propF341 = T93;
  (P)YPmet_env_setter(propF341,getterF338);
  (P)YPmet_env_setter(propF341,setterF340);
  T95 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF341);
  T92 = T95;
  T85 = T92;
  lit_79 = YPPsym((P)"gen-cache-singletons");
  lit_80 = YPPsym((P)"gen-cache-singletons-setter");
  T98 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_239 = YPmet(FUNCODEREF(fun_239),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_240 = YPmet(FUNCODEREF(fun_240),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_241 = YPmet(FUNCODEREF(fun_241),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T101 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T100 = (P)YPsig(Ynil,T101,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T99 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_79),T100,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_singletons,T99);
  T103 = fun_239;
  accessorF342 = T103;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons),accessorF342);
  (P)YPmet_name_setter(VARREF(Ygen_cache_singletons),accessorF342);
  T102 = accessorF342;
  getterF343 = T102;
  T108 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T107 = (P)YPpair(VARREF(YLanyG),T108);
  T106 = (P)YPsig(Ynil,T107,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T105 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_80),T106,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_singletons_setter,T105);
  T110 = fun_240;
  accessorF344 = T110;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons_setter),accessorF344);
  (P)YPmet_name_setter(VARREF(Ygen_cache_singletons_setter),accessorF344);
  T109 = accessorF344;
  setterF345 = T109;
  T113 = fun_241;
  T112 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons),VARREF(Ygen_cache_singletons_setter),VARREF(YLlstG),T113);
  propF346 = T112;
  (P)YPmet_env_setter(propF346,getterF343);
  (P)YPmet_env_setter(propF346,setterF345);
  T114 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF346);
  T111 = T114;
  T104 = T111;
  lit_81 = YPPsym((P)"gen-cache-classes");
  lit_82 = YPPsym((P)"gen-cache-classes-setter");
  T117 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_242 = YPmet(FUNCODEREF(fun_242),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_243 = YPmet(FUNCODEREF(fun_243),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_244 = YPmet(FUNCODEREF(fun_244),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T120 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T119 = (P)YPsig(Ynil,T120,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T118 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_81),T119,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_classes,T118);
  T122 = fun_242;
  accessorF347 = T122;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes),accessorF347);
  (P)YPmet_name_setter(VARREF(Ygen_cache_classes),accessorF347);
  T121 = accessorF347;
  getterF348 = T121;
  T127 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T126 = (P)YPpair(VARREF(YLanyG),T127);
  T125 = (P)YPsig(Ynil,T126,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T124 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_82),T125,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_classes_setter,T124);
  T129 = fun_243;
  accessorF349 = T129;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes_setter),accessorF349);
  (P)YPmet_name_setter(VARREF(Ygen_cache_classes_setter),accessorF349);
  T128 = accessorF349;
  setterF350 = T128;
  T132 = fun_244;
  T131 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes),VARREF(Ygen_cache_classes_setter),VARREF(YLlstG),T132);
  propF351 = T131;
  (P)YPmet_env_setter(propF351,getterF348);
  (P)YPmet_env_setter(propF351,setterF350);
  T133 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF351);
  T130 = T133;
  T123 = T130;
  lit_83 = YPPsym((P)"sig-names");
  lit_84 = YPPsym((P)"sig-names-setter");
  T136 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_245 = YPmet(FUNCODEREF(fun_245),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_246 = YPmet(FUNCODEREF(fun_246),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_247 = YPmet(FUNCODEREF(fun_247),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T139 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T138 = (P)YPsig(Ynil,T139,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T137 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_83),T138,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names,T137);
  T141 = fun_245;
  accessorF352 = T141;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_names),accessorF352);
  (P)YPmet_name_setter(VARREF(Ysig_names),accessorF352);
  T140 = accessorF352;
  getterF353 = T140;
  T146 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T145 = (P)YPpair(VARREF(YLanyG),T146);
  T144 = (P)YPsig(Ynil,T145,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T143 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_84),T144,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names_setter,T143);
  T148 = fun_246;
  accessorF354 = T148;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_names_setter),accessorF354);
  (P)YPmet_name_setter(VARREF(Ysig_names_setter),accessorF354);
  T147 = accessorF354;
  setterF355 = T147;
  T151 = fun_247;
  T150 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_names),VARREF(Ysig_names_setter),VARREF(YLlstG),T151);
  propF356 = T150;
  (P)YPmet_env_setter(propF356,getterF353);
  (P)YPmet_env_setter(propF356,setterF355);
  T152 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF356);
  T149 = T152;
  T142 = T149;
  lit_85 = YPPsym((P)"sig-specs");
  lit_86 = YPPsym((P)"sig-specs-setter");
  T155 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_248 = YPmet(FUNCODEREF(fun_248),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_249 = YPmet(FUNCODEREF(fun_249),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_250 = YPmet(FUNCODEREF(fun_250),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T158 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T157 = (P)YPsig(Ynil,T158,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T156 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_85),T157,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs,T156);
  T160 = fun_248;
  accessorF357 = T160;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs),accessorF357);
  (P)YPmet_name_setter(VARREF(Ysig_specs),accessorF357);
  T159 = accessorF357;
  getterF358 = T159;
  T165 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T164 = (P)YPpair(VARREF(YLanyG),T165);
  T163 = (P)YPsig(Ynil,T164,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T162 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_86),T163,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs_setter,T162);
  T167 = fun_249;
  accessorF359 = T167;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs_setter),accessorF359);
  (P)YPmet_name_setter(VARREF(Ysig_specs_setter),accessorF359);
  T166 = accessorF359;
  setterF360 = T166;
  T170 = fun_250;
  T169 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_specs),VARREF(Ysig_specs_setter),VARREF(YLlstG),T170);
  propF361 = T169;
  (P)YPmet_env_setter(propF361,getterF358);
  (P)YPmet_env_setter(propF361,setterF360);
  T171 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF361);
  T168 = T171;
  T161 = T168;
  lit_87 = YPPsym((P)"sig-nary?");
  lit_88 = YPPsym((P)"sig-nary?-setter");
  T174 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_251 = YPmet(FUNCODEREF(fun_251),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlogG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_252 = YPmet(FUNCODEREF(fun_252),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_253 = YPmet(FUNCODEREF(fun_253),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T177 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T176 = (P)YPsig(Ynil,T177,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T175 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_87),T176,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ,T175);
  T179 = fun_251;
  accessorF362 = T179;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ),accessorF362);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ),accessorF362);
  T178 = accessorF362;
  getterF363 = T178;
  T184 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T183 = (P)YPpair(VARREF(YLanyG),T184);
  T182 = (P)YPsig(Ynil,T183,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T181 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_88),T182,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ_setter,T181);
  T186 = fun_252;
  accessorF364 = T186;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ_setter),accessorF364);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ_setter),accessorF364);
  T185 = accessorF364;
  setterF365 = T185;
  T189 = fun_253;
  T188 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_naryQ),VARREF(Ysig_naryQ_setter),VARREF(YLlogG),T189);
  propF366 = T188;
  (P)YPmet_env_setter(propF366,getterF363);
  (P)YPmet_env_setter(propF366,setterF365);
  T190 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF366);
  T187 = T190;
  T180 = T187;
  lit_89 = YPPsym((P)"sig-arity");
  lit_90 = YPPsym((P)"sig-arity-setter");
  T193 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_254 = YPmet(FUNCODEREF(fun_254),YPfalse,T193,ENVNUL,PNUL,YPfalse);
  T192 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_255 = YPmet(FUNCODEREF(fun_255),YPfalse,T192,ENVNUL,PNUL,YPfalse);
  T191 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_256 = YPmet(FUNCODEREF(fun_256),YPfalse,T191,ENVNUL,PNUL,YPfalse);
  T196 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T195 = (P)YPsig(Ynil,T196,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T194 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_89),T195,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity,T194);
  T198 = fun_254;
  accessorF367 = T198;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity),accessorF367);
  (P)YPmet_name_setter(VARREF(Ysig_arity),accessorF367);
  T197 = accessorF367;
  getterF368 = T197;
  T203 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T202 = (P)YPpair(VARREF(YLanyG),T203);
  T201 = (P)YPsig(Ynil,T202,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T200 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_90),T201,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity_setter,T200);
  T205 = fun_255;
  accessorF369 = T205;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity_setter),accessorF369);
  (P)YPmet_name_setter(VARREF(Ysig_arity_setter),accessorF369);
  T204 = accessorF369;
  setterF370 = T204;
  T208 = fun_256;
  T207 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_arity),VARREF(Ysig_arity_setter),VARREF(YLintG),T208);
  propF371 = T207;
  (P)YPmet_env_setter(propF371,getterF368);
  (P)YPmet_env_setter(propF371,setterF370);
  T209 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF371);
  T206 = T209;
  T199 = T206;
  lit_91 = YPPsym((P)"sig-val");
  lit_92 = YPPsym((P)"sig-val-setter");
  T212 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_257 = YPmet(FUNCODEREF(fun_257),YPfalse,T212,ENVNUL,PNUL,YPfalse);
  T211 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_258 = YPmet(FUNCODEREF(fun_258),YPfalse,T211,ENVNUL,PNUL,YPfalse);
  T210 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_259 = YPmet(FUNCODEREF(fun_259),YPfalse,T210,ENVNUL,PNUL,YPfalse);
  T215 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T214 = (P)YPsig(Ynil,T215,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T213 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_91),T214,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val,T213);
  T217 = fun_257;
  accessorF372 = T217;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_val),accessorF372);
  (P)YPmet_name_setter(VARREF(Ysig_val),accessorF372);
  T216 = accessorF372;
  getterF373 = T216;
  T222 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T221 = (P)YPpair(VARREF(YLanyG),T222);
  T220 = (P)YPsig(Ynil,T221,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T219 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_92),T220,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val_setter,T219);
  T224 = fun_258;
  accessorF374 = T224;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_val_setter),accessorF374);
  (P)YPmet_name_setter(VARREF(Ysig_val_setter),accessorF374);
  T223 = accessorF374;
  setterF375 = T223;
  T227 = fun_259;
  T226 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_val),VARREF(Ysig_val_setter),VARREF(YLanyG),T227);
  propF376 = T226;
  (P)YPmet_env_setter(propF376,getterF373);
  (P)YPmet_env_setter(propF376,setterF375);
  T228 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF376);
  T225 = T228;
  T218 = T225;
  lit_93 = YPPsym((P)"sig-unification-vars");
  lit_94 = YPPsym((P)"sig-unification-vars-setter");
  T231 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_260 = YPmet(FUNCODEREF(fun_260),YPfalse,T231,ENVNUL,PNUL,YPfalse);
  T230 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_261 = YPmet(FUNCODEREF(fun_261),YPfalse,T230,ENVNUL,PNUL,YPfalse);
  T229 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_262 = YPmet(FUNCODEREF(fun_262),YPfalse,T229,ENVNUL,PNUL,YPfalse);
  T234 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T233 = (P)YPsig(Ynil,T234,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T232 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_93),T233,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars,T232);
  T236 = fun_260;
  accessorF377 = T236;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars),accessorF377);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars),accessorF377);
  T235 = accessorF377;
  getterF378 = T235;
  T241 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T240 = (P)YPpair(VARREF(YLanyG),T241);
  T239 = (P)YPsig(Ynil,T240,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T238 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_94),T239,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars_setter,T238);
  T243 = fun_261;
  accessorF379 = T243;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars_setter),accessorF379);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars_setter),accessorF379);
  T242 = accessorF379;
  setterF380 = T242;
  T246 = fun_262;
  T245 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_unification_vars),VARREF(Ysig_unification_vars_setter),VARREF(YLlstG),T246);
  propF381 = T245;
  (P)YPmet_env_setter(propF381,getterF378);
  (P)YPmet_env_setter(propF381,setterF380);
  T247 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF381);
  T244 = T247;
  T237 = T244;
  lit_95 = YPPsym((P)"fun-code");
  lit_96 = YPPsym((P)"fun-code-setter");
  T250 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_263 = YPmet(FUNCODEREF(fun_263),YPfalse,T250,ENVNUL,PNUL,YPfalse);
  T249 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_264 = YPmet(FUNCODEREF(fun_264),YPfalse,T249,ENVNUL,PNUL,YPfalse);
  T248 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_265 = YPmet(FUNCODEREF(fun_265),YPfalse,T248,ENVNUL,PNUL,YPfalse);
  T253 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T252 = (P)YPsig(Ynil,T253,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T251 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_95),T252,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_code,T251);
  T255 = fun_263;
  accessorF382 = T255;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_code),accessorF382);
  (P)YPmet_name_setter(VARREF(Yfun_code),accessorF382);
  T254 = accessorF382;
  getterF383 = T254;
  T260 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T259 = (P)YPpair(VARREF(YLanyG),T260);
  T258 = (P)YPsig(Ynil,T259,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T257 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_96),T258,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_code_setter,T257);
  T262 = fun_264;
  accessorF384 = T262;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_code_setter),accessorF384);
  (P)YPmet_name_setter(VARREF(Yfun_code_setter),accessorF384);
  T261 = accessorF384;
  setterF385 = T261;
  T265 = fun_265;
  T264 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_code),VARREF(Yfun_code_setter),VARREF(YLanyG),T265);
  propF386 = T264;
  (P)YPmet_env_setter(propF386,getterF383);
  (P)YPmet_env_setter(propF386,setterF385);
  T266 = CALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF386);
  T263 = T266;
  T256 = T263;
  lit_97 = YPPsym((P)"fun-name");
  lit_98 = YPPsym((P)"fun-name-setter");
  T269 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_266 = YPmet(FUNCODEREF(fun_266),YPfalse,T269,ENVNUL,PNUL,YPfalse);
  T268 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_267 = YPmet(FUNCODEREF(fun_267),YPfalse,T268,ENVNUL,PNUL,YPfalse);
  T267 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_268 = YPmet(FUNCODEREF(fun_268),YPfalse,T267,ENVNUL,PNUL,YPfalse);
  T272 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T271 = (P)YPsig(Ynil,T272,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T270 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_97),T271,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name,T270);
  T274 = fun_266;
  accessorF387 = T274;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_name),accessorF387);
  (P)YPmet_name_setter(VARREF(Yfun_name),accessorF387);
  T273 = accessorF387;
  getterF388 = T273;
  T279 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T278 = (P)YPpair(VARREF(YLanyG),T279);
  T277 = (P)YPsig(Ynil,T278,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T276 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_98),T277,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name_setter,T276);
  T281 = fun_267;
  accessorF389 = T281;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_name_setter),accessorF389);
  (P)YPmet_name_setter(VARREF(Yfun_name_setter),accessorF389);
  T280 = accessorF389;
  setterF390 = T280;
  T284 = fun_268;
  T283 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_name),VARREF(Yfun_name_setter),VARREF(YLanyG),T284);
  propF391 = T283;
  (P)YPmet_env_setter(propF391,getterF388);
  (P)YPmet_env_setter(propF391,setterF390);
  T285 = CALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF391);
  T282 = T285;
  T275 = T282;
  lit_99 = YPPsym((P)"fun-sig");
  lit_100 = YPPsym((P)"fun-sig-setter");
  T288 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_269 = YPmet(FUNCODEREF(fun_269),YPfalse,T288,ENVNUL,PNUL,YPfalse);
  T287 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLsigG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_270 = YPmet(FUNCODEREF(fun_270),YPfalse,T287,ENVNUL,PNUL,YPfalse);
  T286 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_271 = YPmet(FUNCODEREF(fun_271),YPfalse,T286,ENVNUL,PNUL,YPfalse);
  T291 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T290 = (P)YPsig(Ynil,T291,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T289 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_99),T290,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig,T289);
  T293 = fun_269;
  accessorF392 = T293;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig),accessorF392);
  (P)YPmet_name_setter(VARREF(Yfun_sig),accessorF392);
  T292 = accessorF392;
  getterF393 = T292;
  T298 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T297 = (P)YPpair(VARREF(YLanyG),T298);
  T296 = (P)YPsig(Ynil,T297,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T295 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_100),T296,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig_setter,T295);
  T300 = fun_270;
  accessorF394 = T300;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig_setter),accessorF394);
  (P)YPmet_name_setter(VARREF(Yfun_sig_setter),accessorF394);
  T299 = accessorF394;
  setterF395 = T299;
  T303 = fun_271;
  T302 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_sig),VARREF(Yfun_sig_setter),VARREF(YLsigG),T303);
  propF396 = T302;
  (P)YPmet_env_setter(propF396,getterF393);
  (P)YPmet_env_setter(propF396,setterF395);
  T304 = CALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF396);
  T301 = T304;
  T294 = T301;
  lit_101 = YPPsym((P)"fun-env");
  lit_102 = YPPsym((P)"fun-env-setter");
  T307 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_272 = YPmet(FUNCODEREF(fun_272),YPfalse,T307,ENVNUL,PNUL,YPfalse);
  T306 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_273 = YPmet(FUNCODEREF(fun_273),YPfalse,T306,ENVNUL,PNUL,YPfalse);
  T305 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_274 = YPmet(FUNCODEREF(fun_274),YPfalse,T305,ENVNUL,PNUL,YPfalse);
  T310 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T309 = (P)YPsig(Ynil,T310,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T308 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_101),T309,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_env,T308);
  T312 = fun_272;
  accessorF397 = T312;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_env),accessorF397);
  (P)YPmet_name_setter(VARREF(Yfun_env),accessorF397);
  T311 = accessorF397;
  getterF398 = T311;
  T317 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T316 = (P)YPpair(VARREF(YLanyG),T317);
  T315 = (P)YPsig(Ynil,T316,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T314 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_102),T315,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_env_setter,T314);
  T319 = fun_273;
  accessorF399 = T319;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_env_setter),accessorF399);
  (P)YPmet_name_setter(VARREF(Yfun_env_setter),accessorF399);
  T318 = accessorF399;
  setterF400 = T318;
  T322 = fun_274;
  T321 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_env),VARREF(Yfun_env_setter),VARREF(YLanyG),T322);
  propF401 = T321;
  (P)YPmet_env_setter(propF401,getterF398);
  (P)YPmet_env_setter(propF401,setterF400);
  T323 = CALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF401);
  T320 = T323;
  T313 = T320;
  lit_103 = YPPsym((P)"fun-refs");
  lit_104 = YPPsym((P)"fun-refs-setter");
  T326 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_275 = YPmet(FUNCODEREF(fun_275),YPfalse,T326,ENVNUL,PNUL,YPfalse);
  T325 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_276 = YPmet(FUNCODEREF(fun_276),YPfalse,T325,ENVNUL,PNUL,YPfalse);
  T324 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_277 = YPmet(FUNCODEREF(fun_277),YPfalse,T324,ENVNUL,PNUL,YPfalse);
  T329 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T328 = (P)YPsig(Ynil,T329,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T327 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_103),T328,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_refs,T327);
  T331 = fun_275;
  accessorF402 = T331;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_refs),accessorF402);
  (P)YPmet_name_setter(VARREF(Yfun_refs),accessorF402);
  T330 = accessorF402;
  getterF403 = T330;
  T336 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T335 = (P)YPpair(VARREF(YLanyG),T336);
  T334 = (P)YPsig(Ynil,T335,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T333 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_104),T334,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_refs_setter,T333);
  T338 = fun_276;
  accessorF404 = T338;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_refs_setter),accessorF404);
  (P)YPmet_name_setter(VARREF(Yfun_refs_setter),accessorF404);
  T337 = accessorF404;
  setterF405 = T337;
  T341 = fun_277;
  T340 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_refs),VARREF(Yfun_refs_setter),VARREF(YLanyG),T341);
  propF406 = T340;
  (P)YPmet_env_setter(propF406,getterF403);
  (P)YPmet_env_setter(propF406,setterF405);
  T342 = CALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF406);
  T339 = T342;
  T332 = T339;
  lit_105 = YPPsym((P)"fun-src");
  lit_106 = YPPsym((P)"fun-src-setter");
  T345 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_278 = YPmet(FUNCODEREF(fun_278),YPfalse,T345,ENVNUL,PNUL,YPfalse);
  T344 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_279 = YPmet(FUNCODEREF(fun_279),YPfalse,T344,ENVNUL,PNUL,YPfalse);
  T343 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_280 = YPmet(FUNCODEREF(fun_280),YPfalse,T343,ENVNUL,PNUL,YPfalse);
  T348 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T347 = (P)YPsig(Ynil,T348,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T346 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_105),T347,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src,T346);
  T350 = fun_278;
  accessorF407 = T350;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_src),accessorF407);
  (P)YPmet_name_setter(VARREF(Yfun_src),accessorF407);
  T349 = accessorF407;
  getterF408 = T349;
  T355 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T354 = (P)YPpair(VARREF(YLanyG),T355);
  T353 = (P)YPsig(Ynil,T354,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T352 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_106),T353,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src_setter,T352);
  T357 = fun_279;
  accessorF409 = T357;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_src_setter),accessorF409);
  (P)YPmet_name_setter(VARREF(Yfun_src_setter),accessorF409);
  T356 = accessorF409;
  setterF410 = T356;
  T360 = fun_280;
  T359 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_src),VARREF(Yfun_src_setter),VARREF(YLanyG),T360);
  propF411 = T359;
  (P)YPmet_env_setter(propF411,getterF408);
  (P)YPmet_env_setter(propF411,setterF410);
  T361 = CALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF411);
  T358 = T361;
  T351 = T358;
  lit_107 = YPPsym((P)"fun-mets");
  lit_108 = YPPsym((P)"fun-mets-setter");
  T364 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_281 = YPmet(FUNCODEREF(fun_281),YPfalse,T364,ENVNUL,PNUL,YPfalse);
  T363 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_282 = YPmet(FUNCODEREF(fun_282),YPfalse,T363,ENVNUL,PNUL,YPfalse);
  T362 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_283 = YPmet(FUNCODEREF(fun_283),YPfalse,T362,ENVNUL,PNUL,YPfalse);
  T367 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T366 = (P)YPsig(Ynil,T367,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T365 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_107),T366,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets,T365);
  T369 = fun_281;
  accessorF412 = T369;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets),accessorF412);
  (P)YPmet_name_setter(VARREF(Yfun_mets),accessorF412);
  T368 = accessorF412;
  getterF413 = T368;
  T374 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T373 = (P)YPpair(VARREF(YLanyG),T374);
  T372 = (P)YPsig(Ynil,T373,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T371 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_108),T372,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets_setter,T371);
  T376 = fun_282;
  accessorF414 = T376;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets_setter),accessorF414);
  (P)YPmet_name_setter(VARREF(Yfun_mets_setter),accessorF414);
  T375 = accessorF414;
  setterF415 = T375;
  T379 = fun_283;
  T378 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_mets),VARREF(Yfun_mets_setter),VARREF(YLlstG),T379);
  propF416 = T378;
  (P)YPmet_env_setter(propF416,getterF413);
  (P)YPmet_env_setter(propF416,setterF415);
  T380 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF416);
  T377 = T380;
  T370 = T377;
  lit_109 = YPPsym((P)"fun-cache");
  lit_110 = YPPsym((P)"fun-cache-setter");
  T383 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_284 = YPmet(FUNCODEREF(fun_284),YPfalse,T383,ENVNUL,PNUL,YPfalse);
  T382 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_285 = YPmet(FUNCODEREF(fun_285),YPfalse,T382,ENVNUL,PNUL,YPfalse);
  T381 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_286 = YPmet(FUNCODEREF(fun_286),YPfalse,T381,ENVNUL,PNUL,YPfalse);
  T386 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T385 = (P)YPsig(Ynil,T386,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T384 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_109),T385,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_cache,T384);
  T388 = fun_284;
  accessorF417 = T388;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache),accessorF417);
  (P)YPmet_name_setter(VARREF(Yfun_cache),accessorF417);
  T387 = accessorF417;
  getterF418 = T387;
  T393 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T392 = (P)YPpair(VARREF(YLanyG),T393);
  T391 = (P)YPsig(Ynil,T392,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T390 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_110),T391,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_cache_setter,T390);
  T395 = fun_285;
  accessorF419 = T395;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache_setter),accessorF419);
  (P)YPmet_name_setter(VARREF(Yfun_cache_setter),accessorF419);
  T394 = accessorF419;
  setterF420 = T394;
  T398 = fun_286;
  T397 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_cache),VARREF(Yfun_cache_setter),VARREF(YLanyG),T398);
  propF421 = T397;
  (P)YPmet_env_setter(propF421,getterF418);
  (P)YPmet_env_setter(propF421,setterF420);
  T399 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF421);
  T396 = T399;
  T389 = T396;
  lit_111 = YPPsym((P)"gen-refs");
  lit_112 = YPPsym((P)"gen-refs-setter");
  T402 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_287 = YPmet(FUNCODEREF(fun_287),YPfalse,T402,ENVNUL,PNUL,YPfalse);
  T401 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLvecG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_288 = YPmet(FUNCODEREF(fun_288),YPfalse,T401,ENVNUL,PNUL,YPfalse);
  T400 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_289 = YPmet(FUNCODEREF(fun_289),YPfalse,T400,ENVNUL,PNUL,YPfalse);
  T405 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T404 = (P)YPsig(Ynil,T405,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T403 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_111),T404,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_refs,T403);
  T407 = fun_287;
  accessorF422 = T407;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_refs),accessorF422);
  (P)YPmet_name_setter(VARREF(Ygen_refs),accessorF422);
  T406 = accessorF422;
  getterF423 = T406;
  T412 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T411 = (P)YPpair(VARREF(YLanyG),T412);
  T410 = (P)YPsig(Ynil,T411,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T409 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_112),T410,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_refs_setter,T409);
  T414 = fun_288;
  accessorF424 = T414;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_refs_setter),accessorF424);
  (P)YPmet_name_setter(VARREF(Ygen_refs_setter),accessorF424);
  T413 = accessorF424;
  setterF425 = T413;
  T417 = fun_289;
  T416 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_refs),VARREF(Ygen_refs_setter),VARREF(YLvecG),T417);
  propF426 = T416;
  (P)YPmet_env_setter(propF426,getterF423);
  (P)YPmet_env_setter(propF426,setterF425);
  T418 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF426);
  T415 = T418;
  T408 = T415;
  lit_113 = YPPsym((P)"gen-src");
  lit_114 = YPPsym((P)"gen-src-setter");
  T421 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_290 = YPmet(FUNCODEREF(fun_290),YPfalse,T421,ENVNUL,PNUL,YPfalse);
  T420 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_291 = YPmet(FUNCODEREF(fun_291),YPfalse,T420,ENVNUL,PNUL,YPfalse);
  T419 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_292 = YPmet(FUNCODEREF(fun_292),YPfalse,T419,ENVNUL,PNUL,YPfalse);
  T424 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T423 = (P)YPsig(Ynil,T424,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T422 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_113),T423,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src,T422);
  T426 = fun_290;
  accessorF427 = T426;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_src),accessorF427);
  (P)YPmet_name_setter(VARREF(Ygen_src),accessorF427);
  T425 = accessorF427;
  getterF428 = T425;
  T431 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T430 = (P)YPpair(VARREF(YLanyG),T431);
  T429 = (P)YPsig(Ynil,T430,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T428 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_114),T429,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src_setter,T428);
  T433 = fun_291;
  accessorF429 = T433;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_src_setter),accessorF429);
  (P)YPmet_name_setter(VARREF(Ygen_src_setter),accessorF429);
  T432 = accessorF429;
  setterF430 = T432;
  T436 = fun_292;
  T435 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_src),VARREF(Ygen_src_setter),VARREF(YLanyG),T436);
  propF431 = T435;
  (P)YPmet_env_setter(propF431,getterF428);
  (P)YPmet_env_setter(propF431,setterF430);
  T437 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF431);
  T434 = T437;
  T427 = T434;
  lit_115 = YPPsym((P)"opts-location");
  lit_116 = YPPsym((P)"opts-location-setter");
  T440 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_293 = YPmet(FUNCODEREF(fun_293),YPfalse,T440,ENVNUL,PNUL,YPfalse);
  T439 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlocG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_294 = YPmet(FUNCODEREF(fun_294),YPfalse,T439,ENVNUL,PNUL,YPfalse);
  T438 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_295 = YPmet(FUNCODEREF(fun_295),YPfalse,T438,ENVNUL,PNUL,YPfalse);
  T443 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T442 = (P)YPsig(Ynil,T443,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T441 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_115),T442,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_location,T441);
  T445 = fun_293;
  accessorF432 = T445;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_location),accessorF432);
  (P)YPmet_name_setter(VARREF(Yopts_location),accessorF432);
  T444 = accessorF432;
  getterF433 = T444;
  T450 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T449 = (P)YPpair(VARREF(YLanyG),T450);
  T448 = (P)YPsig(Ynil,T449,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T447 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_116),T448,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_location_setter,T447);
  T452 = fun_294;
  accessorF434 = T452;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_location_setter),accessorF434);
  (P)YPmet_name_setter(VARREF(Yopts_location_setter),accessorF434);
  T451 = accessorF434;
  setterF435 = T451;
  T455 = fun_295;
  T454 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_location),VARREF(Yopts_location_setter),VARREF(YLlocG),T455);
  propF436 = T454;
  (P)YPmet_env_setter(propF436,getterF433);
  (P)YPmet_env_setter(propF436,setterF435);
  T456 = CALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF436);
  T453 = T456;
  T446 = T453;
  lit_117 = YPPsym((P)"opts-count");
  lit_118 = YPPsym((P)"opts-count-setter");
  T459 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_296 = YPmet(FUNCODEREF(fun_296),YPfalse,T459,ENVNUL,PNUL,YPfalse);
  T458 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_297 = YPmet(FUNCODEREF(fun_297),YPfalse,T458,ENVNUL,PNUL,YPfalse);
  T457 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_298 = YPmet(FUNCODEREF(fun_298),YPfalse,T457,ENVNUL,PNUL,YPfalse);
  T462 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T461 = (P)YPsig(Ynil,T462,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T460 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_117),T461,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_count,T460);
  T464 = fun_296;
  accessorF437 = T464;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_count),accessorF437);
  (P)YPmet_name_setter(VARREF(Yopts_count),accessorF437);
  T463 = accessorF437;
  getterF438 = T463;
  T469 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T468 = (P)YPpair(VARREF(YLanyG),T469);
  T467 = (P)YPsig(Ynil,T468,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T466 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_118),T467,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_count_setter,T466);
  T471 = fun_297;
  accessorF439 = T471;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_count_setter),accessorF439);
  (P)YPmet_name_setter(VARREF(Yopts_count_setter),accessorF439);
  T470 = accessorF439;
  setterF440 = T470;
  T474 = fun_298;
  T473 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_count),VARREF(Yopts_count_setter),VARREF(YLintG),T474);
  propF441 = T473;
  (P)YPmet_env_setter(propF441,getterF438);
  (P)YPmet_env_setter(propF441,setterF440);
  T475 = CALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF441);
  T472 = T475;
  T465 = T472;
  lit_119 = YPPsym((P)"opts-vec-storage");
  lit_120 = YPPsym((P)"opts-vec-storage-setter");
  T478 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLopts_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_299 = YPmet(FUNCODEREF(fun_299),YPfalse,T478,ENVNUL,PNUL,YPfalse);
  T477 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLvecG),VARREF(YLopts_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_300 = YPmet(FUNCODEREF(fun_300),YPfalse,T477,ENVNUL,PNUL,YPfalse);
  T476 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_301 = YPmet(FUNCODEREF(fun_301),YPfalse,T476,ENVNUL,PNUL,YPfalse);
  T481 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T480 = (P)YPsig(Ynil,T481,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T479 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_119),T480,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_vec_storage,T479);
  T483 = fun_299;
  accessorF442 = T483;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_vec_storage),accessorF442);
  (P)YPmet_name_setter(VARREF(Yopts_vec_storage),accessorF442);
  T482 = accessorF442;
  getterF443 = T482;
  T488 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T487 = (P)YPpair(VARREF(YLanyG),T488);
  T486 = (P)YPsig(Ynil,T487,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T485 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_120),T486,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_vec_storage_setter,T485);
  T490 = fun_300;
  accessorF444 = T490;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_vec_storage_setter),accessorF444);
  (P)YPmet_name_setter(VARREF(Yopts_vec_storage_setter),accessorF444);
  T489 = accessorF444;
  setterF445 = T489;
  T493 = fun_301;
  T492 = (P)YPPprop(VARREF(YLopts_vecG),VARREF(Yopts_vec_storage),VARREF(Yopts_vec_storage_setter),VARREF(YLvecG),T493);
  propF446 = T492;
  (P)YPmet_env_setter(propF446,getterF443);
  (P)YPmet_env_setter(propF446,setterF445);
  T494 = CALL2(1,VARREF(YPadd_prop),VARREF(YLopts_vecG),propF446);
  T491 = T494;
  T484 = T491;
  lit_121 = YPPsym((P)"%collect-direct-props");
  T495 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPcollect_direct_props = YPmet(FUNCODEREF(YPcollect_direct_props),LITREF(lit_121),T495,ENVNUL,PNUL,YPfalse);
  T496 = YPcollect_direct_props;
  VARSET(YPcollect_direct_props,T496);
  lit_122 = YPPsym((P)"%finalize-props!");
  T497 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPfinalize_propsX = YPmet(FUNCODEREF(YPfinalize_propsX),LITREF(lit_122),T497,ENVNUL,PNUL,YPfalse);
  T498 = YPfinalize_propsX;
  VARSET(YPfinalize_propsX,T498);
  lit_123 = YPPsym((P)"<any>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_123),VARREF(YLanyG));
  lit_124 = YPPsym((P)"<log>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_124),VARREF(YLlogG));
  lit_125 = YPPsym((P)"<chr>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_125),VARREF(YLchrG));
  lit_126 = YPPsym((P)"<num>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_126),VARREF(YLnumG));
  lit_127 = YPPsym((P)"<int>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_127),VARREF(YLintG));
  lit_128 = YPPsym((P)"<flo>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_128),VARREF(YLfloG));
  lit_129 = YPPsym((P)"<loc>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_129),VARREF(YLlocG));
  lit_130 = YPPsym((P)"<col>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_130),VARREF(YLcolG));
  lit_131 = YPPsym((P)"<col!>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_131),VARREF(YLcolXG));
  lit_132 = YPPsym((P)"<seq>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_132),VARREF(YLseqG));
  lit_133 = YPPsym((P)"<seq!>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_133),VARREF(YLseqXG));
  lit_134 = YPPsym((P)"<lst>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_134),VARREF(YLlstG));
  lit_135 = YPPsym((P)"<flat>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_135),VARREF(YLflatG));
  lit_136 = YPPsym((P)"<vec>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_136),VARREF(YLvecG));
  lit_137 = YPPsym((P)"<str>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_137),VARREF(YLstrG));
  lit_138 = YPPsym((P)"<sym>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_138),VARREF(YLsymG));
  lit_139 = YPPsym((P)"<type>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_139),VARREF(YLtypeG));
  lit_140 = YPPsym((P)"<class>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_140),VARREF(YLclassG));
  lit_141 = YPPsym((P)"<singleton>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_141),VARREF(YLsingletonG));
  lit_142 = YPPsym((P)"<subclass>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_142),VARREF(YLsubclassG));
  lit_143 = YPPsym((P)"<union>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_143),VARREF(YLunionG));
  lit_144 = YPPsym((P)"<prop>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_144),VARREF(YLpropG));
  lit_145 = YPPsym((P)"<gen-cache>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_145),VARREF(YLgen_cacheG));
  lit_146 = YPPsym((P)"<sig>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_146),VARREF(YLsigG));
  lit_147 = YPPsym((P)"<fun>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_147),VARREF(YLfunG));
  lit_148 = YPPsym((P)"<met>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_148),VARREF(YLmetG));
  lit_149 = YPPsym((P)"<gen>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_149),VARREF(YLgenG));
  lit_150 = YPPsym((P)"<opts>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_150),VARREF(YLoptsG));
  lit_151 = YPPsym((P)"<opts-vec>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_151),VARREF(YLopts_vecG));
  T499 = YPfalse;
  return T499;
}

P Y___main_8___() {
  P T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89;
  P T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73;
  P T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57;
  P T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_152 = YPPsym((P)"@@==");
  T0 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOOEE = YPmet(FUNCODEREF(YOOEE),LITREF(lit_152),T0,ENVNUL,PNUL,YPfalse);
  T1 = YOOEE;
  VARSET(YOOEE,T1);
  lit_153 = YPPsym((P)"not");
  T2 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  Ynot = YPmet(FUNCODEREF(Ynot),LITREF(lit_153),T2,ENVNUL,PNUL,YPfalse);
  T3 = Ynot;
  VARSET(Ynot,T3);
  lit_154 = YPPsym((P)"@@empty?");
  T4 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOOemptyQ = YPmet(FUNCODEREF(YOOemptyQ),LITREF(lit_154),T4,ENVNUL,PNUL,YPfalse);
  T5 = YOOemptyQ;
  VARSET(YOOemptyQ,T5);
  lit_155 = YPPsym((P)"@rev!");
  T6 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrevX = YPmet(FUNCODEREF(YOrevX),LITREF(lit_155),T6,ENVNUL,PNUL,YPfalse);
  T7 = YOrevX;
  VARSET(YOrevX,T7);
  lit_156 = YPPsym((P)"@all?");
  lit_157 = YPPsym((P)"test");
  lit_158 = YPPsym((P)"c");
  lit_159 = YPPsym((P)"fnd");
  lit_160 = YPPsym((P)"p");
  T9 = YPsig(YPPlist(1,LITREF(lit_160)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_322 = YPmet(FUNCODEREF(fun_fnd_322),LITREF(lit_159),T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(2,LITREF(lit_157),LITREF(lit_158)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOallQ = YPmet(FUNCODEREF(YOallQ),LITREF(lit_156),T8,ENVNUL,PNUL,YPfalse);
  T10 = YOallQ;
  VARSET(YOallQ,T10);
  lit_161 = YPPsym((P)"@all2?");
  lit_162 = YPPsym((P)"px");
  lit_163 = YPPsym((P)"py");
  T12 = YPsig(YPPlist(2,LITREF(lit_162),LITREF(lit_163)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_324 = YPmet(FUNCODEREF(fun_fnd_324),LITREF(lit_159),T12,ENVNUL,PNUL,YPfalse);
  T11 = YPsig(YPPlist(3,LITREF(lit_157),LITREF(lit_10),LITREF(lit_13)),YPPlist(3,VARREF(YLfunG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOall2Q = YPmet(FUNCODEREF(YOall2Q),LITREF(lit_161),T11,ENVNUL,PNUL,YPfalse);
  T13 = YOall2Q;
  VARSET(YOall2Q,T13);
  lit_164 = YPPsym((P)"@elt");
  lit_165 = YPPsym((P)"key");
  lit_166 = YPPsym((P)"count");
  T15 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_326 = YPmet(FUNCODEREF(fun_fnd_326),LITREF(lit_159),T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_165)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOelt = YPmet(FUNCODEREF(YOelt),LITREF(lit_164),T14,ENVNUL,PNUL,YPfalse);
  T16 = YOelt;
  VARSET(YOelt,T16);
  lit_167 = YPPsym((P)"@fill");
  lit_168 = YPPsym((P)"f");
  T18 = YPsig(YPPlist(1,LITREF(lit_160)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_328 = YPmet(FUNCODEREF(fun_loop_328),LITREF(lit_5),T18,ENVNUL,PNUL,YPfalse);
  T17 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_168)),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfill = YPmet(FUNCODEREF(YOfill),LITREF(lit_167),T17,ENVNUL,PNUL,YPfalse);
  T19 = YOfill;
  VARSET(YOfill,T19);
  lit_169 = YPPsym((P)"@any?");
  T21 = YPsig(YPPlist(1,LITREF(lit_160)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_330 = YPmet(FUNCODEREF(fun_fnd_330),LITREF(lit_159),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(2,LITREF(lit_157),LITREF(lit_158)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOanyQ = YPmet(FUNCODEREF(YOanyQ),LITREF(lit_169),T20,ENVNUL,PNUL,YPfalse);
  T22 = YOanyQ;
  VARSET(YOanyQ,T22);
  lit_170 = YPPsym((P)"@map");
  lit_171 = YPPsym((P)"do");
  lit_172 = YPPsym((P)"res");
  T24 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_172)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_335 = YPmet(FUNCODEREF(fun_do_335),LITREF(lit_171),T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmap = YPmet(FUNCODEREF(YOmap),LITREF(lit_170),T23,ENVNUL,PNUL,YPfalse);
  T25 = YOmap;
  VARSET(YOmap,T25);
  lit_173 = YPPsym((P)"@pick");
  T27 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_172)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_337 = YPmet(FUNCODEREF(fun_do_337),LITREF(lit_171),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOpick = YPmet(FUNCODEREF(YOpick),LITREF(lit_173),T26,ENVNUL,PNUL,YPfalse);
  T28 = YOpick;
  VARSET(YOpick,T28);
  lit_174 = YPPsym((P)"@do");
  T30 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_339 = YPmet(FUNCODEREF(fun_do_339),LITREF(lit_171),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo = YPmet(FUNCODEREF(YOdo),LITREF(lit_174),T29,ENVNUL,PNUL,YPfalse);
  T31 = YOdo;
  VARSET(YOdo,T31);
  lit_175 = YPPsym((P)"@alter");
  lit_176 = YPPsym((P)"dst");
  lit_177 = YPPsym((P)"src");
  lit_178 = YPPsym((P)"in");
  lit_179 = YPPsym((P)"ds");
  lit_180 = YPPsym((P)"ss");
  T33 = YPsig(YPPlist(2,LITREF(lit_179),LITREF(lit_180)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_in_341 = YPmet(FUNCODEREF(fun_in_341),LITREF(lit_178),T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(2,LITREF(lit_176),LITREF(lit_177)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOalter = YPmet(FUNCODEREF(YOalter),LITREF(lit_175),T32,ENVNUL,PNUL,YPfalse);
  T34 = YOalter;
  VARSET(YOalter,T34);
  lit_181 = YPPsym((P)"@fab");
  lit_182 = YPPsym((P)"fab");
  T36 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_172)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fab_343 = YPmet(FUNCODEREF(fun_fab_343),LITREF(lit_182),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_3)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfab = YPmet(FUNCODEREF(YOfab),LITREF(lit_181),T35,ENVNUL,PNUL,YPfalse);
  T37 = YOfab;
  VARSET(YOfab,T37);
  lit_183 = YPPsym((P)"@fold");
  lit_184 = YPPsym((P)"combine");
  lit_185 = YPPsym((P)"init");
  lit_186 = YPPsym((P)"red");
  T39 = YPsig(YPPlist(2,LITREF(lit_172),LITREF(lit_158)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_red_345 = YPmet(FUNCODEREF(fun_red_345),LITREF(lit_186),T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(3,LITREF(lit_184),LITREF(lit_185),LITREF(lit_158)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  YOfold = YPmet(FUNCODEREF(YOfold),LITREF(lit_183),T38,ENVNUL,PNUL,YPfalse);
  T40 = YOfold;
  VARSET(YOfold,T40);
  lit_187 = YPPsym((P)"@cat2");
  T41 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOcat2 = YPmet(FUNCODEREF(YOcat2),LITREF(lit_187),T41,ENVNUL,PNUL,YPfalse);
  T42 = YOcat2;
  VARSET(YOcat2,T42);
  lit_188 = YPPsym((P)"@find");
  T44 = YPsig(YPPlist(2,LITREF(lit_158),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_348 = YPmet(FUNCODEREF(fun_fnd_348),LITREF(lit_159),T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_158)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfind = YPmet(FUNCODEREF(YOfind),LITREF(lit_188),T43,ENVNUL,PNUL,YPfalse);
  T45 = YOfind;
  VARSET(YOfind,T45);
  lit_189 = YPPsym((P)"@mem?");
  T47 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_350 = YPmet(FUNCODEREF(fun_350),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(YPPlist(2,LITREF(lit_158),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmemQ = YPmet(FUNCODEREF(YOmemQ),LITREF(lit_189),T46,ENVNUL,PNUL,YPfalse);
  T48 = YOmemQ;
  VARSET(YOmemQ,T48);
  lit_190 = YPPsym((P)"@del-dups");
  lit_191 = YPPsym((P)"e");
  T50 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_191)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_352 = YPmet(FUNCODEREF(fun_352),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOdel_dups = YPmet(FUNCODEREF(YOdel_dups),LITREF(lit_190),T49,ENVNUL,PNUL,YPfalse);
  T51 = YOdel_dups;
  VARSET(YOdel_dups,T51);
  lit_192 = YPPsym((P)"@lst-helper");
  lit_193 = YPPsym((P)"objects");
  T52 = YPsig(YPPlist(3,LITREF(lit_193),LITREF(lit_17),LITREF(lit_6)),YPPlist(3,VARREF(YLoptsG),VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOlst_helper = YPmet(FUNCODEREF(YOlst_helper),LITREF(lit_192),T52,ENVNUL,PNUL,YPfalse);
  T53 = YOlst_helper;
  VARSET(YOlst_helper,T53);
  lit_194 = YPPsym((P)"@lst");
  T54 = YPsig(YPPlist(1,LITREF(lit_193)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOlst = YPmet(FUNCODEREF(YOlst),LITREF(lit_194),T54,ENVNUL,PNUL,YPfalse);
  T55 = YOlst;
  VARSET(YOlst,T55);
  lit_195 = YPPsym((P)"@velt");
  T56 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_17)),YPPlist(2,VARREF(YLvecG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOvelt = YPmet(FUNCODEREF(YOvelt),LITREF(lit_195),T56,ENVNUL,PNUL,YPfalse);
  T57 = YOvelt;
  VARSET(YOvelt,T57);
  lit_196 = YPPsym((P)"@velt-setter");
  T58 = YPsig(YPPlist(3,LITREF(lit_30),LITREF(lit_10),LITREF(lit_17)),YPPlist(3,VARREF(YLanyG),VARREF(YLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOvelt_setter = YPmet(FUNCODEREF(YOvelt_setter),LITREF(lit_196),T58,ENVNUL,PNUL,YPfalse);
  T59 = YOvelt_setter;
  VARSET(YOvelt_setter,T59);
  lit_197 = YPPsym((P)"@vec");
  lit_198 = YPPsym((P)"copy");
  lit_199 = YPPsym((P)"k");
  T61 = YPsig(YPPlist(1,LITREF(lit_199)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_copy_358 = YPmet(FUNCODEREF(fun_copy_358),LITREF(lit_198),T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(1,LITREF(lit_193)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOvec = YPmet(FUNCODEREF(YOvec),LITREF(lit_197),T60,ENVNUL,PNUL,YPfalse);
  T62 = YOvec;
  VARSET(YOvec,T62);
  lit_200 = YPPsym((P)"@fun-names");
  T63 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_names = YPmet(FUNCODEREF(YOfun_names),LITREF(lit_200),T63,ENVNUL,PNUL,YPfalse);
  T64 = YOfun_names;
  VARSET(YOfun_names,T64);
  lit_201 = YPPsym((P)"@fun-specs");
  T65 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_specs = YPmet(FUNCODEREF(YOfun_specs),LITREF(lit_201),T65,ENVNUL,PNUL,YPfalse);
  T66 = YOfun_specs;
  VARSET(YOfun_specs,T66);
  lit_202 = YPPsym((P)"@fun-nary?");
  T67 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOfun_naryQ = YPmet(FUNCODEREF(YOfun_naryQ),LITREF(lit_202),T67,ENVNUL,PNUL,YPfalse);
  T68 = YOfun_naryQ;
  VARSET(YOfun_naryQ,T68);
  lit_203 = YPPsym((P)"@fun-arity");
  T69 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YOfun_arity = YPmet(FUNCODEREF(YOfun_arity),LITREF(lit_203),T69,ENVNUL,PNUL,YPfalse);
  T70 = YOfun_arity;
  VARSET(YOfun_arity,T70);
  lit_204 = YPPsym((P)"@fun-val");
  T71 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOfun_val = YPmet(FUNCODEREF(YOfun_val),LITREF(lit_204),T71,ENVNUL,PNUL,YPfalse);
  T72 = YOfun_val;
  VARSET(YOfun_val,T72);
  lit_205 = YPPsym((P)"@fun-unification-vars");
  T73 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_unification_vars = YPmet(FUNCODEREF(YOfun_unification_vars),LITREF(lit_205),T73,ENVNUL,PNUL,YPfalse);
  T74 = YOfun_unification_vars;
  VARSET(YOfun_unification_vars,T74);
  lit_206 = YPPsym((P)"@fun-mets");
  T75 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_mets = YPmet(FUNCODEREF(YOfun_mets),LITREF(lit_206),T75,ENVNUL,PNUL,YPfalse);
  T76 = YOfun_mets;
  VARSET(YOfun_mets,T76);
  lit_207 = YPPsym((P)"@fun-mets-setter");
  T77 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfun_mets_setter = YPmet(FUNCODEREF(YOfun_mets_setter),LITREF(lit_207),T77,ENVNUL,PNUL,YPfalse);
  T78 = YOfun_mets_setter;
  VARSET(YOfun_mets_setter,T78);
  VARSET(YLenvG,VARREF(YLanyG));
  VARSET(YLspecsG,VARREF(YLlstG));
  VARSET(YLbodyG,VARREF(YLanyG));
  lit_208 = YPPsym((P)"fun-spec");
  T79 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_17)),YPPlist(2,VARREF(YLmetG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_spec = YPmet(FUNCODEREF(Yfun_spec),LITREF(lit_208),T79,ENVNUL,PNUL,YPfalse);
  T80 = Yfun_spec;
  VARSET(Yfun_spec,T80);
  VARSET(YLmetsG,VARREF(YLlstG));
  lit_209 = YPPsym((P)"fun-same-met?");
  T81 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLmetG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yfun_same_metQ = YPmet(FUNCODEREF(Yfun_same_metQ),LITREF(lit_209),T81,ENVNUL,PNUL,YPfalse);
  T82 = Yfun_same_metQ;
  VARSET(Yfun_same_metQ,T82);
  lit_210 = YPPsym((P)"fun-congruent?");
  T83 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yfun_congruentQ = YPmet(FUNCODEREF(Yfun_congruentQ),LITREF(lit_210),T83,ENVNUL,PNUL,YPfalse);
  T84 = Yfun_congruentQ;
  VARSET(Yfun_congruentQ,T84);
  VARSET(YTrestarts_okQT,YPfalse);
  lit_211 = YPPsym((P)"gen-add-met");
  lit_212 = YPPsym((P)"g");
  lit_213 = YPPsym((P)"m");
  lit_214 = YPPsym((P)"return");
  lit_215 = YPsb((P)"Replace %= with an empty generic congruent with %=");
  lit_216 = YPPsym((P)"lop");
  lit_217 = YPPsym((P)"specs");
  lit_218 = YPPsym((P)"col");
  lit_219 = YPPsym((P)"mets");
  lit_220 = YPPsym((P)"same?");
  lit_221 = YPPsym((P)"gms");
  T91 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_371 = YPmet(FUNCODEREF(fun_371),YPfalse,T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(2,LITREF(lit_158),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_372 = YPmet(FUNCODEREF(fun_372),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_373 = YPmet(FUNCODEREF(fun_373),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(YPPlist(1,LITREF(lit_214)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_374 = YPmet(FUNCODEREF(fun_374),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(1,LITREF(lit_217)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lop_375 = YPmet(FUNCODEREF(fun_lop_375),LITREF(lit_216),T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(YPPlist(3,LITREF(lit_219),LITREF(lit_220),LITREF(lit_221)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLmetsG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_col_376 = YPmet(FUNCODEREF(fun_col_376),LITREF(lit_218),T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(YPPlist(2,LITREF(lit_212),LITREF(lit_213)),YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  Ygen_add_met = YPmet(FUNCODEREF(Ygen_add_met),LITREF(lit_211),T85,ENVNUL,PNUL,YPfalse);
  T92 = Ygen_add_met;
  VARSET(Ygen_add_met,T92);
  lit_222 = YPPsym((P)"@isa?");
  lit_223 = YPPsym((P)"o");
  lit_224 = YPPsym((P)"t");
  T93 = YPsig(YPPlist(2,LITREF(lit_223),LITREF(lit_224)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOisaQ = YPmet(FUNCODEREF(YOisaQ),LITREF(lit_222),T93,ENVNUL,PNUL,YPfalse);
  T94 = YOisaQ;
  VARSET(YOisaQ,T94);
  lit_225 = YPPsym((P)"@class<");
  lit_226 = YPPsym((P)"c1");
  lit_227 = YPPsym((P)"c2");
  lit_228 = YPPsym((P)"wrt");
  lit_229 = YPPsym((P)"find");
  lit_230 = YPPsym((P)"ps");
  lit_231 = YPsb((P)"can't order specializers - arg/reference object %= is ");
  lit_232 = YPsb((P)"neither %= nor %=");
  T96 = YPsig(YPPlist(1,LITREF(lit_230)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_383 = YPmet(FUNCODEREF(fun_find_383),LITREF(lit_229),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(3,LITREF(lit_226),LITREF(lit_227),LITREF(lit_228)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOclassL = YPmet(FUNCODEREF(YOclassL),LITREF(lit_225),T95,ENVNUL,PNUL,YPfalse);
  T97 = YOclassL;
  VARSET(YOclassL,T97);
  VARSET(YLtupG,VARREF(YLvecG));
  VARSET(YOtup,VARREF(YOvec));
  VARSET(Ytup,VARREF(YOvec));
  VARSET(YOtelt,VARREF(YOvelt));
  lit_233 = YPPsym((P)"@type-equal?");
  lit_234 = YPPsym((P)"t1");
  lit_235 = YPPsym((P)"t2");
  T98 = YPsig(YPPlist(2,LITREF(lit_234),LITREF(lit_235)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtype_equalQ = YPmet(FUNCODEREF(YOtype_equalQ),LITREF(lit_233),T98,ENVNUL,PNUL,YPfalse);
  T99 = YOtype_equalQ;
  VARSET(YOtype_equalQ,T99);
  lit_236 = YPPsym((P)"@subtype?");
  T102 = YPsig(YPPlist(2,LITREF(lit_234),LITREF(lit_235)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T101 = YOsubtypeQ = YPmet(FUNCODEREF(YOsubtypeQ),LITREF(lit_236),T102,ENVNUL,PNUL,YPfalse);
  T104 = YOsubtypeQ;
  T103 = VARSET(YOsubtypeQ,T104);
  T100 = T103;
  return T100;
}

P Y___main_9___() {
  P T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69;
  P T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53;
  P T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  lit_237 = YPPsym((P)"@may-isa?");
  T0 = YPsig(YPPlist(2,LITREF(lit_158),LITREF(lit_224)),YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  YOmay_isaQ = YPmet(FUNCODEREF(YOmay_isaQ),LITREF(lit_237),T0,ENVNUL,PNUL,YPfalse);
  T1 = YOmay_isaQ;
  VARSET(YOmay_isaQ,T1);
  lit_238 = YPPsym((P)"@order-specs-class");
  lit_239 = YPPsym((P)"arg");
  lit_240 = YPPsym((P)"=");
  lit_241 = YPPsym((P)"<");
  lit_242 = YPPsym((P)">");
  T2 = YPsig(YPPlist(3,LITREF(lit_234),LITREF(lit_235),LITREF(lit_239)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOorder_specs_class = YPmet(FUNCODEREF(YOorder_specs_class),LITREF(lit_238),T2,ENVNUL,PNUL,YPfalse);
  T3 = YOorder_specs_class;
  VARSET(YOorder_specs_class,T3);
  lit_243 = YPPsym((P)"@order-specs");
  T4 = YPsig(YPPlist(3,LITREF(lit_234),LITREF(lit_235),LITREF(lit_239)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOorder_specs = YPmet(FUNCODEREF(YOorder_specs),LITREF(lit_243),T4,ENVNUL,PNUL,YPfalse);
  T5 = YOorder_specs;
  VARSET(YOorder_specs,T5);
  lit_244 = YPPsym((P)"order-mets");
  lit_245 = YPPsym((P)"m1");
  lit_246 = YPPsym((P)"m2");
  lit_247 = YPPsym((P)"state");
  lit_248 = YPPsym((P)"idx");
  lit_249 = YPPsym((P)"<>");
  T7 = YPsig(YPPlist(2,LITREF(lit_247),LITREF(lit_248)),YPPlist(2,VARREF(YLsymG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_390 = YPmet(FUNCODEREF(fun_loop_390),LITREF(lit_5),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(3,LITREF(lit_245),LITREF(lit_246),LITREF(lit_20)),YPPlist(3,VARREF(YLmetG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLsymG),Ynil);
  Yorder_mets = YPmet(FUNCODEREF(Yorder_mets),LITREF(lit_244),T6,ENVNUL,PNUL,YPfalse);
  T8 = Yorder_mets;
  VARSET(Yorder_mets,T8);
  lit_250 = YPPsym((P)"ord-app-mets-1");
  lit_251 = YPPsym((P)"make-ambiguous");
  lit_252 = YPPsym((P)"headed-list");
  lit_253 = YPPsym((P)"precedes-all?");
  lit_254 = YPPsym((P)"check-subsequent-ambiguities");
  lit_255 = YPPsym((P)"oprev");
  lit_256 = YPPsym((P)"insert");
  lit_257 = YPPsym((P)"osub");
  T16 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_392 = YPmet(FUNCODEREF(fun_loop_392),LITREF(lit_5),T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(YPPlist(1,LITREF(lit_252)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_ambiguous_393 = YPmet(FUNCODEREF(fun_make_ambiguous_393),LITREF(lit_251),T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_394 = YPmet(FUNCODEREF(fun_loop_394),LITREF(lit_5),T14,ENVNUL,PNUL,YPfalse);
  T13 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_precedes_allQ_395 = YPmet(FUNCODEREF(fun_precedes_allQ_395),LITREF(lit_253),T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(YPPlist(1,LITREF(lit_255)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_check_subsequent_ambiguities_396 = YPmet(FUNCODEREF(fun_check_subsequent_ambiguities_396),LITREF(lit_254),T12,ENVNUL,PNUL,YPfalse);
  T11 = YPsig(YPPlist(2,LITREF(lit_255),LITREF(lit_257)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_397 = YPmet(FUNCODEREF(fun_insert_397),LITREF(lit_256),T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(YPPlist(1,LITREF(lit_219)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_398 = YPmet(FUNCODEREF(fun_loop_398),LITREF(lit_5),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(3,LITREF(lit_219),LITREF(lit_20),LITREF(lit_244)),YPPlist(3,VARREF(YLlstG),VARREF(YLoptsG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  Yord_app_mets_1 = YPmet(FUNCODEREF(Yord_app_mets_1),LITREF(lit_250),T9,ENVNUL,PNUL,YPfalse);
  T17 = Yord_app_mets_1;
  VARSET(Yord_app_mets_1,T17);
  T18 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_400 = YPmet(FUNCODEREF(fun_400),YPfalse,T18,ENVNUL,PNUL,YPfalse);
  T19 = fun_400;
  VARSET(Ymet_app_unify,T19);
  lit_258 = YPPsym((P)"met-app?");
  T21 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_401 = YPmet(FUNCODEREF(fun_loop_401),LITREF(lit_5),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_20)),YPPlist(2,VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Ymet_appQ = YPmet(FUNCODEREF(Ymet_appQ),LITREF(lit_258),T20,ENVNUL,PNUL,YPfalse);
  T22 = Ymet_appQ;
  VARSET(Ymet_appQ,T22);
  lit_259 = YPPsym((P)"ord-app-mets");
  lit_260 = YPPsym((P)"gf");
  lit_261 = YPPsym((P)"ans");
  lit_262 = YPPsym((P)"ms");
  T24 = YPsig(YPPlist(2,LITREF(lit_261),LITREF(lit_262)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_403 = YPmet(FUNCODEREF(fun_col_403),LITREF(lit_218),T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(2,LITREF(lit_260),LITREF(lit_20)),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  Yord_app_mets = YPmet(FUNCODEREF(Yord_app_mets),LITREF(lit_259),T23,ENVNUL,PNUL,YPfalse);
  T25 = Yord_app_mets;
  VARSET(Yord_app_mets,T25);
  lit_263 = YPPsym((P)"@gen-cache-arg-pos");
  T26 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_arg_pos = YPmet(FUNCODEREF(YOgen_cache_arg_pos),LITREF(lit_263),T26,ENVNUL,PNUL,YPfalse);
  T27 = YOgen_cache_arg_pos;
  VARSET(YOgen_cache_arg_pos,T27);
  lit_264 = YPPsym((P)"@gen-cache-arg-pos-setter");
  T28 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_arg_pos_setter = YPmet(FUNCODEREF(YOgen_cache_arg_pos_setter),LITREF(lit_264),T28,ENVNUL,PNUL,YPfalse);
  T29 = YOgen_cache_arg_pos_setter;
  VARSET(YOgen_cache_arg_pos_setter,T29);
  lit_265 = YPPsym((P)"@gen-cache-singletons");
  T30 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_singletons = YPmet(FUNCODEREF(YOgen_cache_singletons),LITREF(lit_265),T30,ENVNUL,PNUL,YPfalse);
  T31 = YOgen_cache_singletons;
  VARSET(YOgen_cache_singletons,T31);
  lit_266 = YPPsym((P)"@gen-cache-singletons-setter");
  T32 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_singletons_setter = YPmet(FUNCODEREF(YOgen_cache_singletons_setter),LITREF(lit_266),T32,ENVNUL,PNUL,YPfalse);
  T33 = YOgen_cache_singletons_setter;
  VARSET(YOgen_cache_singletons_setter,T33);
  lit_267 = YPPsym((P)"@gen-cache-classes");
  T34 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_classes = YPmet(FUNCODEREF(YOgen_cache_classes),LITREF(lit_267),T34,ENVNUL,PNUL,YPfalse);
  T35 = YOgen_cache_classes;
  VARSET(YOgen_cache_classes,T35);
  lit_268 = YPPsym((P)"@gen-cache-classes-setter");
  T36 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_classes_setter = YPmet(FUNCODEREF(YOgen_cache_classes_setter),LITREF(lit_268),T36,ENVNUL,PNUL,YPfalse);
  T37 = YOgen_cache_classes_setter;
  VARSET(YOgen_cache_classes_setter,T37);
  lit_269 = YPPsym((P)"method-accessor-offset");
  T38 = YPsig(YPPlist(3,LITREF(lit_23),LITREF(lit_24),LITREF(lit_20)),YPPlist(3,VARREF(YLgenG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Ymethod_accessor_offset = YPmet(FUNCODEREF(Ymethod_accessor_offset),LITREF(lit_269),T38,ENVNUL,PNUL,YPfalse);
  T39 = Ymethod_accessor_offset;
  VARSET(Ymethod_accessor_offset,T39);
  lit_270 = YPPsym((P)"@singleton-spec?");
  T40 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOsingleton_specQ = YPmet(FUNCODEREF(YOsingleton_specQ),LITREF(lit_270),T40,ENVNUL,PNUL,YPfalse);
  T41 = YOsingleton_specQ;
  VARSET(YOsingleton_specQ,T41);
  lit_271 = YPPsym((P)"@subclass-spec?");
  T42 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOsubclass_specQ = YPmet(FUNCODEREF(YOsubclass_specQ),LITREF(lit_271),T42,ENVNUL,PNUL,YPfalse);
  T43 = YOsubclass_specQ;
  VARSET(YOsubclass_specQ,T43);
  lit_272 = YPPsym((P)"@union-spec?");
  T44 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOunion_specQ = YPmet(FUNCODEREF(YOunion_specQ),LITREF(lit_272),T44,ENVNUL,PNUL,YPfalse);
  T45 = YOunion_specQ;
  VARSET(YOunion_specQ,T45);
  lit_273 = YPPsym((P)"@precise-spec?");
  T46 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOprecise_specQ = YPmet(FUNCODEREF(YOprecise_specQ),LITREF(lit_273),T46,ENVNUL,PNUL,YPfalse);
  T47 = YOprecise_specQ;
  VARSET(YOprecise_specQ,T47);
  lit_274 = YPPsym((P)"@mets-unspecialized-at?");
  lit_275 = YPPsym((P)"pos");
  T49 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_416 = YPmet(FUNCODEREF(fun_416),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(2,LITREF(lit_219),LITREF(lit_275)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmets_unspecialized_atQ = YPmet(FUNCODEREF(YOmets_unspecialized_atQ),LITREF(lit_274),T48,ENVNUL,PNUL,YPfalse);
  T50 = YOmets_unspecialized_atQ;
  VARSET(YOmets_unspecialized_atQ,T50);
  lit_276 = YPPsym((P)"@prune-mets-by-type-at");
  lit_277 = YPPsym((P)"type");
  T52 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_418 = YPmet(FUNCODEREF(fun_418),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(YPPlist(3,LITREF(lit_219),LITREF(lit_277),LITREF(lit_275)),YPPlist(3,VARREF(YLlstG),VARREF(YLtypeG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLmetsG),Ynil);
  YOprune_mets_by_type_at = YPmet(FUNCODEREF(YOprune_mets_by_type_at),LITREF(lit_276),T51,ENVNUL,PNUL,YPfalse);
  T53 = YOprune_mets_by_type_at;
  VARSET(YOprune_mets_by_type_at,T53);
  lit_278 = YPPsym((P)"@mets-specs-at");
  T55 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_420 = YPmet(FUNCODEREF(fun_420),YPfalse,T55,ENVNUL,PNUL,YPfalse);
  T54 = YPsig(YPPlist(2,LITREF(lit_219),LITREF(lit_275)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_specs_at = YPmet(FUNCODEREF(YOmets_specs_at),LITREF(lit_278),T54,ENVNUL,PNUL,YPfalse);
  T56 = YOmets_specs_at;
  VARSET(YOmets_specs_at,T56);
  lit_279 = YPPsym((P)"@mets-singletons-at");
  lit_280 = YPPsym((P)"spec");
  T58 = YPsig(YPPlist(1,LITREF(lit_280)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_422 = YPmet(FUNCODEREF(fun_422),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(2,LITREF(lit_219),LITREF(lit_275)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_singletons_at = YPmet(FUNCODEREF(YOmets_singletons_at),LITREF(lit_279),T57,ENVNUL,PNUL,YPfalse);
  T59 = YOmets_singletons_at;
  VARSET(YOmets_singletons_at,T59);
  lit_281 = YPPsym((P)"@mets-subclasses-at");
  T61 = YPsig(YPPlist(1,LITREF(lit_280)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_424 = YPmet(FUNCODEREF(fun_424),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(2,LITREF(lit_219),LITREF(lit_275)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_subclasses_at = YPmet(FUNCODEREF(YOmets_subclasses_at),LITREF(lit_281),T60,ENVNUL,PNUL,YPfalse);
  T62 = YOmets_subclasses_at;
  VARSET(YOmets_subclasses_at,T62);
  lit_282 = YPPsym((P)"gen-lookup-miss-1-using");
  lit_283 = YPPsym((P)"instance");
  lit_284 = YPPsym((P)"all-assocs");
  lit_285 = YPPsym((P)"all-assocs-setter");
  lit_286 = YPPsym((P)"cache");
  lit_287 = YPPsym((P)"sorted-mets");
  lit_288 = YPPsym((P)"assocs");
  T64 = YPsig(YPPlist(1,LITREF(lit_288)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_426 = YPmet(FUNCODEREF(fun_loop_426),LITREF(lit_5),T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(YPPlist(10,LITREF(lit_165),LITREF(lit_283),LITREF(lit_284),LITREF(lit_285),LITREF(lit_23),LITREF(lit_286),LITREF(lit_219),LITREF(lit_287),LITREF(lit_17),LITREF(lit_20)),YPPlist(10,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLoptsG)),YPfalse,YPint((P)10),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss_1_using = YPmet(FUNCODEREF(Ygen_lookup_miss_1_using),LITREF(lit_282),T63,ENVNUL,PNUL,YPfalse);
  T65 = Ygen_lookup_miss_1_using;
  VARSET(Ygen_lookup_miss_1_using,T65);
  lit_289 = YPPsym((P)"@specd-args");
  T67 = YPsig(YPPlist(1,LITREF(lit_199)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_copy_428 = YPmet(FUNCODEREF(fun_copy_428),LITREF(lit_198),T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(3,LITREF(lit_20),LITREF(lit_17),LITREF(lit_239)),YPPlist(3,VARREF(YLoptsG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLoptsG),Ynil);
  YOspecd_args = YPmet(FUNCODEREF(YOspecd_args),LITREF(lit_289),T66,ENVNUL,PNUL,YPfalse);
  T68 = YOspecd_args;
  VARSET(YOspecd_args,T68);
  lit_290 = YPPsym((P)"ensure-singleton-cache");
  lit_291 = YPPsym((P)"singletons");
  T70 = YPsig(YPPlist(1,LITREF(lit_291)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_430 = YPmet(FUNCODEREF(fun_loop_430),LITREF(lit_5),T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(YPPlist(6,LITREF(lit_23),LITREF(lit_286),LITREF(lit_219),LITREF(lit_287),LITREF(lit_17),LITREF(lit_20)),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  Yensure_singleton_cache = YPmet(FUNCODEREF(Yensure_singleton_cache),LITREF(lit_290),T69,ENVNUL,PNUL,YPfalse);
  T71 = Yensure_singleton_cache;
  VARSET(Yensure_singleton_cache,T71);
  lit_292 = YPPsym((P)"gen-lookup-miss-1");
  lit_293 = YPPsym((P)"ocache");
  T72 = YPsig(YPPlist(6,LITREF(lit_23),LITREF(lit_293),LITREF(lit_219),LITREF(lit_287),LITREF(lit_17),LITREF(lit_20)),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss_1 = YPmet(FUNCODEREF(Ygen_lookup_miss_1),LITREF(lit_292),T72,ENVNUL,PNUL,YPfalse);
  T73 = Ygen_lookup_miss_1;
  VARSET(Ygen_lookup_miss_1,T73);
  lit_294 = YPPsym((P)"gen-lookup-miss");
  T74 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_20)),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss = YPmet(FUNCODEREF(Ygen_lookup_miss),LITREF(lit_294),T74,ENVNUL,PNUL,YPfalse);
  T75 = Ygen_lookup_miss;
  VARSET(Ygen_lookup_miss,T75);
  T76 = (P)YPpair(VARREF(Ynil),VARREF(Ynil));
  VARSET(YDmissed_dispatch,T76);
  lit_295 = YPPsym((P)"choose-methods");
  lit_296 = YPsb((P)"No Applicable Methods Error when calling %= on %=");
  T77 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_20)),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  Ychoose_methods = YPmet(FUNCODEREF(Ychoose_methods),LITREF(lit_295),T77,ENVNUL,PNUL,YPfalse);
  T78 = Ychoose_methods;
  VARSET(Ychoose_methods,T78);
  lit_297 = YPPsym((P)"%dispatch");
  T79 = YPsig(YPPlist(1,LITREF(lit_20)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YPdispatch = YPmet(FUNCODEREF(YPdispatch),LITREF(lit_297),T79,ENVNUL,PNUL,YPfalse);
  T80 = YPdispatch;
  VARSET(YPdispatch,T80);
  lit_298 = YPPsym((P)"%patch-early-generic");
  lit_299 = YPPsym((P)"generic");
  T81 = YPsig(YPPlist(1,LITREF(lit_299)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPpatch_early_generic = YPmet(FUNCODEREF(YPpatch_early_generic),LITREF(lit_298),T81,ENVNUL,PNUL,YPfalse);
  T82 = YPpatch_early_generic;
  VARSET(YPpatch_early_generic,T82);
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
  T84 = CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_mets));
  T83 = T84;
  return T83;
}

P Y___main_10___() {
  P T1,T0;
loop:
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_mets_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_forward));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_forward_setter));
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
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_arg_pos_setter));
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
  T1 = CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_location));
  T0 = T1;
  return T0;
}

P Y___main_11___() {
  P T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133;
  P T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117;
  P T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101;
  P T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85;
  P T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69;
  P T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53;
  P T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_location_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_count));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_count_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_vec_storage));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_vec_storage_setter));
  lit_300 = YPPsym((P)"fun-names");
  T0 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_names = YPmet(FUNCODEREF(Yfun_names),LITREF(lit_300),T0,ENVNUL,PNUL,YPfalse);
  T1 = Yfun_names;
  VARSET(Yfun_names,T1);
  lit_301 = YPPsym((P)"fun-names-setter");
  T2 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_names_setter = YPmet(FUNCODEREF(Yfun_names_setter),LITREF(lit_301),T2,ENVNUL,PNUL,YPfalse);
  T3 = Yfun_names_setter;
  VARSET(Yfun_names_setter,T3);
  lit_302 = YPPsym((P)"fun-specs");
  T4 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_specs = YPmet(FUNCODEREF(Yfun_specs),LITREF(lit_302),T4,ENVNUL,PNUL,YPfalse);
  T5 = Yfun_specs;
  VARSET(Yfun_specs,T5);
  lit_303 = YPPsym((P)"fun-specs-setter");
  T6 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_specs_setter = YPmet(FUNCODEREF(Yfun_specs_setter),LITREF(lit_303),T6,ENVNUL,PNUL,YPfalse);
  T7 = Yfun_specs_setter;
  VARSET(Yfun_specs_setter,T7);
  lit_304 = YPPsym((P)"fun-nary?");
  T8 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_naryQ = YPmet(FUNCODEREF(Yfun_naryQ),LITREF(lit_304),T8,ENVNUL,PNUL,YPfalse);
  T9 = Yfun_naryQ;
  VARSET(Yfun_naryQ,T9);
  lit_305 = YPPsym((P)"fun-nary?-setter");
  T10 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_naryQ_setter = YPmet(FUNCODEREF(Yfun_naryQ_setter),LITREF(lit_305),T10,ENVNUL,PNUL,YPfalse);
  T11 = Yfun_naryQ_setter;
  VARSET(Yfun_naryQ_setter,T11);
  lit_306 = YPPsym((P)"fun-arity");
  T12 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_arity = YPmet(FUNCODEREF(Yfun_arity),LITREF(lit_306),T12,ENVNUL,PNUL,YPfalse);
  T13 = Yfun_arity;
  VARSET(Yfun_arity,T13);
  lit_307 = YPPsym((P)"fun-arity-setter");
  T14 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_arity_setter = YPmet(FUNCODEREF(Yfun_arity_setter),LITREF(lit_307),T14,ENVNUL,PNUL,YPfalse);
  T15 = Yfun_arity_setter;
  VARSET(Yfun_arity_setter,T15);
  lit_308 = YPPsym((P)"fun-val");
  T16 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_val = YPmet(FUNCODEREF(Yfun_val),LITREF(lit_308),T16,ENVNUL,PNUL,YPfalse);
  T17 = Yfun_val;
  VARSET(Yfun_val,T17);
  lit_309 = YPPsym((P)"fun-val-setter");
  T18 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_val_setter = YPmet(FUNCODEREF(Yfun_val_setter),LITREF(lit_309),T18,ENVNUL,PNUL,YPfalse);
  T19 = Yfun_val_setter;
  VARSET(Yfun_val_setter,T19);
  lit_310 = YPPsym((P)"fun-unification-vars");
  T20 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_unification_vars = YPmet(FUNCODEREF(Yfun_unification_vars),LITREF(lit_310),T20,ENVNUL,PNUL,YPfalse);
  T21 = Yfun_unification_vars;
  VARSET(Yfun_unification_vars,T21);
  lit_311 = YPPsym((P)"fun-unification-vars-setter");
  T22 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_unification_vars_setter = YPmet(FUNCODEREF(Yfun_unification_vars_setter),LITREF(lit_311),T22,ENVNUL,PNUL,YPfalse);
  T23 = Yfun_unification_vars_setter;
  VARSET(Yfun_unification_vars_setter,T23);
  VARSET(YLparentsG,VARREF(YLlstG));
  VARSET(YLpropsG,VARREF(YLlstG));
  lit_312 = YPPsym((P)"object-class");
  T24 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_class = YPmet(FUNCODEREF(Yobject_class),LITREF(lit_312),T24,ENVNUL,PNUL,YPfalse);
  T25 = Yobject_class;
  VARSET(Yobject_class,T25);
  lit_313 = YPPsym((P)"@class-ancestors");
  T26 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOclass_ancestors = YPmet(FUNCODEREF(YOclass_ancestors),LITREF(lit_313),T26,ENVNUL,PNUL,YPfalse);
  T27 = YOclass_ancestors;
  VARSET(YOclass_ancestors,T27);
  lit_314 = YPPsym((P)"class-ordered-ancestors");
  lit_315 = YPPsym((P)"merge-lists");
  lit_316 = YPPsym((P)"partial-cpl");
  lit_317 = YPPsym((P)"remaining-lists");
  lit_318 = YPPsym((P)"unconstrained-class");
  lit_319 = YPPsym((P)"p-in-and-unconstrained-in?");
  lit_320 = YPPsym((P)"p-unconstrained-in?");
  lit_321 = YPPsym((P)"unconstrained-class-in-parents");
  lit_322 = YPPsym((P)"remove-next");
  lit_323 = YPsb((P)"inconsistent precedence graph");
  T34 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_p_in_and_unconstrained_inQ_457 = YPmet(FUNCODEREF(fun_p_in_and_unconstrained_inQ_457),LITREF(lit_319),T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_p_unconstrained_inQ_458 = YPmet(FUNCODEREF(fun_p_unconstrained_inQ_458),LITREF(lit_320),T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(1,LITREF(lit_160)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unconstrained_class_459 = YPmet(FUNCODEREF(fun_unconstrained_class_459),LITREF(lit_318),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(YPPlist(1,LITREF(lit_158)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unconstrained_class_in_parents_460 = YPmet(FUNCODEREF(fun_unconstrained_class_in_parents_460),LITREF(lit_321),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_remove_next_461 = YPmet(FUNCODEREF(fun_remove_next_461),LITREF(lit_322),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(2,LITREF(lit_316),LITREF(lit_317)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_merge_lists_462 = YPmet(FUNCODEREF(fun_merge_lists_462),LITREF(lit_315),T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(YPPlist(1,LITREF(lit_158)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLparentsG),Ynil);
  Yclass_ordered_ancestors = YPmet(FUNCODEREF(Yclass_ordered_ancestors),LITREF(lit_314),T28,ENVNUL,PNUL,YPfalse);
  T35 = Yclass_ordered_ancestors;
  VARSET(Yclass_ordered_ancestors,T35);
  lit_324 = YPPsym((P)"@class-direct-props");
  T36 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOclass_direct_props = YPmet(FUNCODEREF(YOclass_direct_props),LITREF(lit_324),T36,ENVNUL,PNUL,YPfalse);
  T37 = YOclass_direct_props;
  VARSET(YOclass_direct_props,T37);
  lit_325 = YPPsym((P)"class-ordered-props");
  T38 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLpropsG),Ynil);
  Yclass_ordered_props = YPmet(FUNCODEREF(Yclass_ordered_props),LITREF(lit_325),T38,ENVNUL,PNUL,YPfalse);
  T39 = Yclass_ordered_props;
  VARSET(Yclass_ordered_props,T39);
  lit_326 = YPPsym((P)"del-class");
  T40 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Ydel_class = YPmet(FUNCODEREF(Ydel_class),LITREF(lit_326),T40,ENVNUL,PNUL,YPfalse);
  T41 = Ydel_class;
  VARSET(Ydel_class,T41);
  lit_327 = YPPsym((P)"fab-class");
  lit_328 = YPPsym((P)"parents");
  lit_329 = YPPsym((P)"parent");
  T43 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_467 = YPmet(FUNCODEREF(fun_467),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_328)),YPPlist(2,VARREF(YLsymG),VARREF(YLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  Yfab_class = YPmet(FUNCODEREF(Yfab_class),LITREF(lit_327),T42,ENVNUL,PNUL,YPfalse);
  T44 = Yfab_class;
  VARSET(Yfab_class,T44);
  lit_330 = YPPsym((P)"refab-class");
  lit_331 = YPPsym((P)"old-class");
  T45 = YPsig(YPPlist(2,LITREF(lit_331),LITREF(lit_328)),YPPlist(2,VARREF(YLclassG),VARREF(YLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  Yrefab_class = YPmet(FUNCODEREF(Yrefab_class),LITREF(lit_330),T45,ENVNUL,PNUL,YPfalse);
  T46 = Yrefab_class;
  VARSET(Yrefab_class,T46);
  lit_332 = YPPsym((P)"object-props");
  T47 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_props = YPmet(FUNCODEREF(Yobject_props),LITREF(lit_332),T47,ENVNUL,PNUL,YPfalse);
  T48 = Yobject_props;
  VARSET(Yobject_props,T48);
  lit_333 = YPPsym((P)"object-parents");
  T49 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_parents = YPmet(FUNCODEREF(Yobject_parents),LITREF(lit_333),T49,ENVNUL,PNUL,YPfalse);
  T50 = Yobject_parents;
  VARSET(Yobject_parents,T50);
  VARSET(YDgetter_not_found,YPint((P)-1));
  lit_334 = YPPsym((P)"ensure-fresh-object");
  T51 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yensure_fresh_object = YPmet(FUNCODEREF(Yensure_fresh_object),LITREF(lit_334),T51,ENVNUL,PNUL,YPfalse);
  T52 = Yensure_fresh_object;
  VARSET(Yensure_fresh_object,T52);
  lit_335 = YPPsym((P)"prop-offset");
  lit_336 = YPPsym((P)"object");
  T54 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_18)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_473 = YPmet(FUNCODEREF(fun_loop_473),LITREF(lit_5),T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(YPPlist(2,LITREF(lit_336),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  Yprop_offset = YPmet(FUNCODEREF(Yprop_offset),LITREF(lit_335),T53,ENVNUL,PNUL,YPfalse);
  T55 = Yprop_offset;
  VARSET(Yprop_offset,T55);
  VARSET(YTreport_prop_unbound_errorsQT,YPtrue);
  lit_337 = YPPsym((P)"%prop-unbound-error");
  lit_338 = YPsb((P)"property unbound");
  T56 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPprop_unbound_error = YPmet(FUNCODEREF(YPprop_unbound_error),LITREF(lit_337),T56,ENVNUL,PNUL,YPfalse);
  T57 = YPprop_unbound_error;
  VARSET(YPprop_unbound_error,T57);
  lit_339 = YPPsym((P)"prop-value");
  lit_340 = YPsb((P)"prop %s not found in %=");
  T58 = YPsig(YPPlist(2,LITREF(lit_336),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yprop_value = YPmet(FUNCODEREF(Yprop_value),LITREF(lit_339),T58,ENVNUL,PNUL,YPfalse);
  T59 = Yprop_value;
  VARSET(Yprop_value,T59);
  lit_341 = YPPsym((P)"prop-bound?");
  lit_342 = YPsb((P)"prop %s not found in %=");
  T60 = YPsig(YPPlist(2,LITREF(lit_336),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yprop_boundQ = YPmet(FUNCODEREF(Yprop_boundQ),LITREF(lit_341),T60,ENVNUL,PNUL,YPfalse);
  T61 = Yprop_boundQ;
  VARSET(Yprop_boundQ,T61);
  lit_343 = YPPsym((P)"prop-value-setter");
  lit_344 = YPsb((P)"prop %s not found in %=");
  lit_345 = YPsb((P)"Prop type error");
  T63 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_18)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_478 = YPmet(FUNCODEREF(fun_loop_478),LITREF(lit_5),T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(YPPlist(3,LITREF(lit_30),LITREF(lit_336),LITREF(lit_16)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yprop_value_setter = YPmet(FUNCODEREF(Yprop_value_setter),LITREF(lit_343),T62,ENVNUL,PNUL,YPfalse);
  T64 = Yprop_value_setter;
  VARSET(Yprop_value_setter,T64);
  lit_346 = YPPsym((P)"%isa");
  lit_347 = YPPsym((P)"getters");
  lit_348 = YPPsym((P)"vals");
  T66 = YPsig(YPPlist(2,LITREF(lit_347),LITREF(lit_348)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_480 = YPmet(FUNCODEREF(fun_loop_480),LITREF(lit_5),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(YPPlist(3,LITREF(lit_329),LITREF(lit_347),LITREF(lit_348)),YPPlist(3,VARREF(YLclassG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YPisa = YPmet(FUNCODEREF(YPisa),LITREF(lit_346),T65,ENVNUL,PNUL,YPfalse);
  T67 = YPisa;
  VARSET(YPisa,T67);
  lit_349 = YPPsym((P)"find-getter");
  lit_350 = YPsb((P)"COULDN'T FIND GETTER");
  T69 = YPsig(YPPlist(1,LITREF(lit_219)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_482 = YPmet(FUNCODEREF(fun_loop_482),LITREF(lit_5),T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_16)),YPPlist(2,VARREF(YLclassG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLmetG),Ynil);
  Yfind_getter = YPmet(FUNCODEREF(Yfind_getter),LITREF(lit_349),T68,ENVNUL,PNUL,YPfalse);
  T70 = Yfind_getter;
  VARSET(Yfind_getter,T70);
  lit_351 = YPPsym((P)"find-setter");
  lit_352 = YPPsym((P)"zetter");
  lit_353 = YPsb((P)"COULDN'T FIND SETTER");
  T72 = YPsig(YPPlist(1,LITREF(lit_219)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_484 = YPmet(FUNCODEREF(fun_loop_484),LITREF(lit_5),T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(YPPlist(3,LITREF(lit_15),LITREF(lit_277),LITREF(lit_352)),YPPlist(3,VARREF(YLclassG),VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)3),VARREF(YLmetG),Ynil);
  Yfind_setter = YPmet(FUNCODEREF(Yfind_setter),LITREF(lit_351),T71,ENVNUL,PNUL,YPfalse);
  T73 = Yfind_setter;
  VARSET(Yfind_setter,T73);
  lit_354 = YPPsym((P)"forward-class");
  T75 = YPsig(YPPlist(1,LITREF(lit_212)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_486 = YPmet(FUNCODEREF(fun_486),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(YPPlist(1,LITREF(lit_331)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yforward_class = YPmet(FUNCODEREF(Yforward_class),LITREF(lit_354),T74,ENVNUL,PNUL,YPfalse);
  T76 = Yforward_class;
  VARSET(Yforward_class,T76);
  lit_355 = YPPsym((P)"@do-children");
  lit_356 = YPPsym((P)"visit");
  T78 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_visit_488 = YPmet(FUNCODEREF(fun_visit_488),LITREF(lit_356),T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(2,LITREF(lit_168),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo_children = YPmet(FUNCODEREF(YOdo_children),LITREF(lit_355),T77,ENVNUL,PNUL,YPfalse);
  T79 = YOdo_children;
  VARSET(YOdo_children,T79);
  lit_357 = YPPsym((P)"%prop");
  lit_358 = YPPsym((P)"setter");
  T81 = YPsig(YPPlist(1,LITREF(lit_27)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_490 = YPmet(FUNCODEREF(fun_490),YPfalse,T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(YPPlist(5,LITREF(lit_15),LITREF(lit_16),LITREF(lit_358),LITREF(lit_277),LITREF(lit_185)),YPPlist(5,VARREF(YLclassG),VARREF(YLgenG),VARREF(YLgenG),VARREF(YLtypeG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YPprop = YPmet(FUNCODEREF(YPprop),LITREF(lit_357),T80,ENVNUL,PNUL,YPfalse);
  T82 = YPprop;
  VARSET(YPprop,T82);
  lit_359 = YPPsym((P)"update-instance-for-changed-class");
  T83 = YPsig(YPPlist(1,LITREF(lit_336)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yupdate_instance_for_changed_class = YPmet(FUNCODEREF(Yupdate_instance_for_changed_class),LITREF(lit_359),T83,ENVNUL,PNUL,YPfalse);
  T84 = Yupdate_instance_for_changed_class;
  VARSET(Yupdate_instance_for_changed_class,T84);
  VARSET(Yadd_prop,VARREF(YPprop));
  lit_360 = YPPsym((P)"patch-early-classes");
  T87 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_494 = YPmet(FUNCODEREF(fun_494),YPfalse,T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_495 = YPmet(FUNCODEREF(fun_495),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ypatch_early_classes = YPmet(FUNCODEREF(Ypatch_early_classes),LITREF(lit_360),T85,ENVNUL,PNUL,YPfalse);
  T88 = Ypatch_early_classes;
  VARSET(Ypatch_early_classes,T88);
  CALL0(1,VARREF(Ypatch_early_classes));
  lit_361 = YPPsym((P)"fab-gen");
  lit_362 = YPPsym((P)"names");
  lit_363 = YPPsym((P)"nary?");
  T89 = YPsig(YPPlist(5,LITREF(lit_1),LITREF(lit_362),LITREF(lit_217),LITREF(lit_363),LITREF(lit_219)),YPPlist(5,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLlogG),VARREF(YLlstG)),YPfalse,YPint((P)5),VARREF(YLgenG),Ynil);
  Yfab_gen = YPmet(FUNCODEREF(Yfab_gen),LITREF(lit_361),T89,ENVNUL,PNUL,YPfalse);
  T90 = Yfab_gen;
  VARSET(Yfab_gen,T90);
  lit_364 = YPPsym((P)"gen-from-met");
  T92 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_498 = YPmet(FUNCODEREF(fun_498),YPfalse,T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLgenG),Ynil);
  Ygen_from_met = YPmet(FUNCODEREF(Ygen_from_met),LITREF(lit_364),T91,ENVNUL,PNUL,YPfalse);
  T93 = Ygen_from_met;
  VARSET(Ygen_from_met,T93);
  lit_365 = YPPsym((P)"%define-method");
  T94 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  YPdefine_method = YPmet(FUNCODEREF(YPdefine_method),LITREF(lit_365),T94,ENVNUL,PNUL,YPfalse);
  T95 = YPdefine_method;
  VARSET(YPdefine_method,T95);
  lit_366 = YPPsym((P)"unexec");
  lit_367 = YPPsym((P)"fun");
  T96 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_367)),YPPlist(2,VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yunexec = YPmet(FUNCODEREF(Yunexec),LITREF(lit_366),T96,ENVNUL,PNUL,YPfalse);
  T97 = Yunexec;
  VARSET(Yunexec,T97);
  lit_368 = YPPsym((P)"new");
  lit_369 = YPPsym((P)"inits");
  T99 = YPsig(YPPlist(2,LITREF(lit_329),LITREF(lit_369)),YPPlist(1,VARREF(YLtypeG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T98 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_368),T99,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ynew,T98);
  T101 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_502 = YPmet(FUNCODEREF(fun_loop_502),LITREF(lit_5),T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(YPPlist(2,LITREF(lit_329),LITREF(lit_369)),YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_503 = YPmet(FUNCODEREF(fun_new_503),LITREF(lit_368),T100,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(Ynew);
  if (T104 != YPfalse) {
    T103 = VARREF(Ynew);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_new_503;
  T102 = CALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(Ynew,T102);
  lit_370 = YPPsym((P)"subtype?");
  T107 = YPsig(YPPlist(2,LITREF(lit_234),LITREF(lit_235)),YPPlist(2,VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T106 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_370),T107,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YsubtypeQ,T106);
  T109 = YPsig(YPPlist(1,LITREF(lit_224)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_504 = YPmet(FUNCODEREF(fun_504),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(2,LITREF(lit_234),LITREF(lit_235)),YPPlist(2,VARREF(YLunionG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_505 = YPmet(FUNCODEREF(fun_subtypeQ_505),LITREF(lit_370),T108,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YsubtypeQ);
  if (T112 != YPfalse) {
    T111 = VARREF(YsubtypeQ);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_subtypeQ_505;
  T110 = CALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YsubtypeQ,T110);
  T115 = YPsig(YPPlist(1,LITREF(lit_224)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_506 = YPmet(FUNCODEREF(fun_506),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(2,LITREF(lit_234),LITREF(lit_235)),YPPlist(2,VARREF(YLtypeG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_507 = YPmet(FUNCODEREF(fun_subtypeQ_507),LITREF(lit_370),T114,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YsubtypeQ);
  if (T118 != YPfalse) {
    T117 = VARREF(YsubtypeQ);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_subtypeQ_507;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YsubtypeQ,T116);
  T121 = YPsig(YPPlist(1,LITREF(lit_224)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_508 = YPmet(FUNCODEREF(fun_508),YPfalse,T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(YPPlist(2,LITREF(lit_234),LITREF(lit_235)),YPPlist(2,VARREF(YLunionG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_509 = YPmet(FUNCODEREF(fun_subtypeQ_509),LITREF(lit_370),T120,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YsubtypeQ);
  if (T124 != YPfalse) {
    T123 = VARREF(YsubtypeQ);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_subtypeQ_509;
  T122 = CALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YsubtypeQ,T122);
  T126 = YPsig(YPPlist(2,LITREF(lit_234),LITREF(lit_235)),YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_510 = YPmet(FUNCODEREF(fun_subtypeQ_510),LITREF(lit_370),T126,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YsubtypeQ);
  if (T129 != YPfalse) {
    T128 = VARREF(YsubtypeQ);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_subtypeQ_510;
  T127 = CALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YsubtypeQ,T127);
  T131 = YPsig(YPPlist(2,LITREF(lit_234),LITREF(lit_235)),YPPlist(2,VARREF(YLsingletonG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_511 = YPmet(FUNCODEREF(fun_subtypeQ_511),LITREF(lit_370),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YsubtypeQ);
  if (T134 != YPfalse) {
    T133 = VARREF(YsubtypeQ);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_subtypeQ_511;
  T132 = CALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YsubtypeQ,T132);
  T136 = YPsig(YPPlist(2,LITREF(lit_234),LITREF(lit_235)),YPPlist(2,VARREF(YLsubclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_512 = YPmet(FUNCODEREF(fun_subtypeQ_512),LITREF(lit_370),T136,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YsubtypeQ);
  if (T139 != YPfalse) {
    T138 = VARREF(YsubtypeQ);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_subtypeQ_512;
  T137 = CALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YsubtypeQ,T137);
  T143 = YPsig(YPPlist(2,LITREF(lit_234),LITREF(lit_235)),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T142 = fun_subtypeQ_513 = YPmet(FUNCODEREF(fun_subtypeQ_513),LITREF(lit_370),T143,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YsubtypeQ);
  if (T147 != YPfalse) {
    T146 = VARREF(YsubtypeQ);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_subtypeQ_513;
  T145 = CALL2(1,VARREF(YPdefine_method),T146,T148);
  T144 = VARSET(YsubtypeQ,T145);
  T141 = T144;
  return T141;
}

P Y___main_12___() {
  P T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93;
  P T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77;
  P T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61;
  P T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45;
  P T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(2,LITREF(lit_234),LITREF(lit_235)),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_514 = YPmet(FUNCODEREF(fun_subtypeQ_514),LITREF(lit_370),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YsubtypeQ);
  if (T3 != YPfalse) {
    T2 = VARREF(YsubtypeQ);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_subtypeQ_514;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YsubtypeQ,T1);
  T5 = YPsig(YPPlist(2,LITREF(lit_234),LITREF(lit_235)),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_515 = YPmet(FUNCODEREF(fun_subtypeQ_515),LITREF(lit_370),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YsubtypeQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YsubtypeQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_subtypeQ_515;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YsubtypeQ,T6);
  T10 = YPsig(YPPlist(2,LITREF(lit_234),LITREF(lit_235)),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_516 = YPmet(FUNCODEREF(fun_subtypeQ_516),LITREF(lit_370),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YsubtypeQ);
  if (T13 != YPfalse) {
    T12 = VARREF(YsubtypeQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_subtypeQ_516;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YsubtypeQ,T11);
  T15 = YPsig(YPPlist(2,LITREF(lit_234),LITREF(lit_235)),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_517 = YPmet(FUNCODEREF(fun_subtypeQ_517),LITREF(lit_370),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YsubtypeQ);
  if (T18 != YPfalse) {
    T17 = VARREF(YsubtypeQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_subtypeQ_517;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YsubtypeQ,T16);
  T20 = YPsig(YPPlist(2,LITREF(lit_234),LITREF(lit_235)),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_518 = YPmet(FUNCODEREF(fun_subtypeQ_518),LITREF(lit_370),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YsubtypeQ);
  if (T23 != YPfalse) {
    T22 = VARREF(YsubtypeQ);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_subtypeQ_518;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YsubtypeQ,T21);
  lit_371 = YPPsym((P)"isa?");
  T26 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_224)),YPPlist(2,VARREF(YLanyG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T25 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_371),T26,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YisaQ,T25);
  T27 = YPsig(YPPlist(2,LITREF(lit_223),LITREF(lit_224)),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_519 = YPmet(FUNCODEREF(fun_isaQ_519),LITREF(lit_371),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YisaQ);
  if (T30 != YPfalse) {
    T29 = VARREF(YisaQ);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_isaQ_519;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YisaQ,T28);
  T32 = YPsig(YPPlist(2,LITREF(lit_223),LITREF(lit_224)),YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_520 = YPmet(FUNCODEREF(fun_isaQ_520),LITREF(lit_371),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YisaQ);
  if (T35 != YPfalse) {
    T34 = VARREF(YisaQ);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_isaQ_520;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YisaQ,T33);
  T37 = YPsig(YPPlist(2,LITREF(lit_223),LITREF(lit_224)),YPPlist(2,VARREF(YLanyG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_521 = YPmet(FUNCODEREF(fun_isaQ_521),LITREF(lit_371),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YisaQ);
  if (T40 != YPfalse) {
    T39 = VARREF(YisaQ);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_isaQ_521;
  T38 = CALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YisaQ,T38);
  lit_372 = YPPsym((P)"u");
  T43 = YPsig(YPPlist(1,LITREF(lit_224)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_522 = YPmet(FUNCODEREF(fun_522),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(2,LITREF(lit_223),LITREF(lit_372)),YPPlist(2,VARREF(YLanyG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_523 = YPmet(FUNCODEREF(fun_isaQ_523),LITREF(lit_371),T42,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YisaQ);
  if (T46 != YPfalse) {
    T45 = VARREF(YisaQ);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_isaQ_523;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YisaQ,T44);
  lit_373 = YPPsym((P)"order-specs");
  T49 = YPsig(YPPlist(3,LITREF(lit_234),LITREF(lit_235),LITREF(lit_239)),YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  T48 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_373),T49,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yorder_specs,T48);
  T50 = YPsig(YPPlist(3,LITREF(lit_234),LITREF(lit_235),LITREF(lit_239)),YPPlist(3,VARREF(YLsingletonG),VARREF(YLsingletonG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  fun_order_specs_524 = YPmet(FUNCODEREF(fun_order_specs_524),LITREF(lit_373),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(Yorder_specs);
  if (T53 != YPfalse) {
    T52 = VARREF(Yorder_specs);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_order_specs_524;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(Yorder_specs,T51);
  T55 = YPsig(YPPlist(3,LITREF(lit_234),LITREF(lit_235),LITREF(lit_239)),YPPlist(3,VARREF(YLsingletonG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  fun_order_specs_525 = YPmet(FUNCODEREF(fun_order_specs_525),LITREF(lit_373),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(Yorder_specs);
  if (T58 != YPfalse) {
    T57 = VARREF(Yorder_specs);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_order_specs_525;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(Yorder_specs,T56);
  T60 = YPsig(YPPlist(3,LITREF(lit_234),LITREF(lit_235),LITREF(lit_239)),YPPlist(3,VARREF(YLsubclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  fun_order_specs_526 = YPmet(FUNCODEREF(fun_order_specs_526),LITREF(lit_373),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(Yorder_specs);
  if (T63 != YPfalse) {
    T62 = VARREF(Yorder_specs);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_order_specs_526;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(Yorder_specs,T61);
  T65 = YPsig(YPPlist(3,LITREF(lit_234),LITREF(lit_235),LITREF(lit_239)),YPPlist(3,VARREF(YLsubclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  fun_order_specs_527 = YPmet(FUNCODEREF(fun_order_specs_527),LITREF(lit_373),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(Yorder_specs);
  if (T68 != YPfalse) {
    T67 = VARREF(Yorder_specs);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_order_specs_527;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(Yorder_specs,T66);
  T70 = YPsig(YPPlist(3,LITREF(lit_234),LITREF(lit_235),LITREF(lit_239)),YPPlist(3,VARREF(YLclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  fun_order_specs_528 = YPmet(FUNCODEREF(fun_order_specs_528),LITREF(lit_373),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(Yorder_specs);
  if (T73 != YPfalse) {
    T72 = VARREF(Yorder_specs);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_order_specs_528;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(Yorder_specs,T71);
  T75 = YPsig(YPPlist(3,LITREF(lit_234),LITREF(lit_235),LITREF(lit_239)),YPPlist(3,VARREF(YLclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  fun_order_specs_529 = YPmet(FUNCODEREF(fun_order_specs_529),LITREF(lit_373),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(Yorder_specs);
  if (T78 != YPfalse) {
    T77 = VARREF(Yorder_specs);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_order_specs_529;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(Yorder_specs,T76);
  T80 = YPsig(YPPlist(3,LITREF(lit_234),LITREF(lit_235),LITREF(lit_239)),YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  fun_order_specs_530 = YPmet(FUNCODEREF(fun_order_specs_530),LITREF(lit_373),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(Yorder_specs);
  if (T83 != YPfalse) {
    T82 = VARREF(Yorder_specs);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_order_specs_530;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(Yorder_specs,T81);
  lit_374 = YPPsym((P)"may-isa?");
  T86 = YPsig(YPPlist(2,LITREF(lit_158),LITREF(lit_224)),YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  T85 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_374),T86,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ymay_isaQ,T85);
  T87 = YPsig(YPPlist(2,LITREF(lit_158),LITREF(lit_224)),YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_may_isaQ_531 = YPmet(FUNCODEREF(fun_may_isaQ_531),LITREF(lit_374),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(Ymay_isaQ);
  if (T90 != YPfalse) {
    T89 = VARREF(Ymay_isaQ);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_may_isaQ_531;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(Ymay_isaQ,T88);
  T92 = YPsig(YPPlist(2,LITREF(lit_158),LITREF(lit_224)),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_may_isaQ_532 = YPmet(FUNCODEREF(fun_may_isaQ_532),LITREF(lit_374),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(Ymay_isaQ);
  if (T95 != YPfalse) {
    T94 = VARREF(Ymay_isaQ);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_may_isaQ_532;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(Ymay_isaQ,T93);
  T97 = YPsig(YPPlist(2,LITREF(lit_158),LITREF(lit_224)),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_may_isaQ_533 = YPmet(FUNCODEREF(fun_may_isaQ_533),LITREF(lit_374),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(Ymay_isaQ);
  if (T100 != YPfalse) {
    T99 = VARREF(Ymay_isaQ);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_may_isaQ_533;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(Ymay_isaQ,T98);
  lit_375 = YPPsym((P)"some?");
  lit_376 = YPPsym((P)"all?");
  lit_377 = YPPsym((P)"elts");
  T103 = YPsig(YPPlist(3,LITREF(lit_375),LITREF(lit_376),LITREF(lit_377)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_534 = YPmet(FUNCODEREF(fun_loop_534),LITREF(lit_5),T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(YPPlist(2,LITREF(lit_158),LITREF(lit_224)),YPPlist(2,VARREF(YLclassG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_may_isaQ_535 = YPmet(FUNCODEREF(fun_may_isaQ_535),LITREF(lit_374),T102,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(Ymay_isaQ);
  if (T106 != YPfalse) {
    T105 = VARREF(Ymay_isaQ);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_may_isaQ_535;
  T104 = CALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(Ymay_isaQ,T104);
  VARSET(YTboot_macro_module_namesT,Ynil);
  VARSET(YTboot_macro_namesT,Ynil);
  VARSET(YTboot_macro_expandersT,Ynil);
  VARSET(YTmacros_okQT,YPfalse);
  VARSET(YLmagG,VARREF(YLanyG));
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
  T108 = YPfalse;
  return T108;
}

/* MODULE ENVIRONMENT INFORMATION */


static USE_INFO use_infos[] = {
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"fun-cache", &Yfun_cache},
  {"@class-in?", NULL},
  {"%ft/", NULL},
  {"class-mets-setter", &Yclass_mets_setter},
  {"gen-lookup-1", NULL},
  {"%%prop", NULL},
  {"%fasin", NULL},
  {"dp", NULL},
  {"@may-isa?", &YOmay_isaQ},
  {"<parents>", &YLparentsG},
  {"%met-env", NULL},
  {"opts-location-setter", &Yopts_location_setter},
  {"%gen-cache-singletons-setter", NULL},
  {"%add-met", &YPadd_met},
  {"%class", NULL},
  {"%gen-cache-arg-pos-setter", NULL},
  {"%loc", NULL},
  {"%i-", NULL},
  {"%class-of", NULL},
  {"%reparent-class-shells", NULL},
  {"%%len", NULL},
  {"ensure-fresh-object", &Yensure_fresh_object},
  {"%define-boxed-structure", NULL},
  {"@mem?", &YOmemQ},
  {"prop-value-at", NULL},
  {"%indirect-object?", NULL},
  {"sig-names", &Ysig_names},
  {"%finalize-props!", &YPfinalize_propsX},
  {"choose-methods", &Ychoose_methods},
  {"%prop-elt", NULL},
  {"%sig-val", NULL},
  {"or", NULL},
  {"%put", NULL},
  {"class-mets", &Yclass_mets},
  {"%it/", NULL},
  {"<sym>", &YLsymG},
  {"sig-arity-setter", &Ysig_arity_setter},
  {"if", NULL},
  {"%*start-running-at*", &YPTstart_running_atT},
  {"met-app?", &Ymet_appQ},
  {"force-names-into-boot-module", NULL},
  {"%gen-mets", NULL},
  {"%met-prop-len", &YPmet_prop_len},
  {"opts-location", &Yopts_location},
  {"%opts-vec-vec-setter", NULL},
  {"def-fun/sig-accessor", NULL},
  {"%sig-specs-setter", NULL},
  {"class-row-setter", &Yclass_row_setter},
  {"wrong-number-arguments-error", &Ywrong_number_arguments_error},
  {"*boot-macro-names*", &YTboot_macro_namesT},
  {"%i&", NULL},
  {"$tag-len", NULL},
  {"%symbols", &YPsymbols},
  {"%gen", NULL},
  {"@isa?", &YOisaQ},
  {"%define-props", NULL},
  {"<col>", &YLcolG},
  {"%file-exists?", NULL},
  {"%do-stack-frames", NULL},
  {"%class-id-setter", NULL},
  {"%define-getter", NULL},
  {"tail-setter", &Ytail_setter},
  {"fun-congruent?", &Yfun_congruentQ},
  {"%class-descendents-setter", NULL},
  {"@mets-specs-at", &YOmets_specs_at},
  {"%bb", NULL},
  {"@gen-cache-classes-setter", &YOgen_cache_classes_setter},
  {"sig-arity", &Ysig_arity},
  {"mif", NULL},
  {"%fun-cache-setter", NULL},
  {"%velt-setter", NULL},
  {"%type-elts", NULL},
  {"%fun-cache", NULL},
  {"%ready?", NULL},
  {"%met-code-setter", NULL},
  {"%clone", NULL},
  {"fab-gen", &Yfab_gen},
  {"class-row", &Yclass_row},
  {"<prop>", &YLpropG},
  {"fun-code-setter", &Yfun_code_setter},
  {"object-parents", &Yobject_parents},
  {"%ready", NULL},
  {"%peek", NULL},
  {"*early-classes*", &YTearly_classesT},
  {"%next-methods", NULL},
  {"@subtype?", &YOsubtypeQ},
  {"---main-9---", NULL},
  {"%collect-direct-props", &YPcollect_direct_props},
  {"type-elts-setter", &Ytype_elts_setter},
  {"<gen>", &YLgenG},
  {"quasiquote", NULL},
  {"%met-name-setter", NULL},
  {"%i<<<", NULL},
  {"met-app-unify", &Ymet_app_unify},
  {"gen-lookup-1-using", NULL},
  {"---main-4---", NULL},
  {"%patch-early-generics", NULL},
  {"tail", &Ytail},
  {"<replace-generic-restart>", &YLreplace_generic_restartG},
  {"%early-dispatch", &YPearly_dispatch},
  {"@<", NULL},
  {"%gen-refs-setter", NULL},
  {"%sig-specs", NULL},
  {"<simple-handler-info>", &YLsimple_handler_infoG},
  {"%fsinh", NULL},
  {"class-name-setter", &Yclass_name_setter},
  {"@map", &YOmap},
  {"fun-code", &Yfun_code},
  {"gen-lookup-miss", &Ygen_lookup_miss},
  {"type-elts", &Ytype_elts},
  {"%class-ancestors-setter", NULL},
  {"%create-directory", NULL},
  {"seq", NULL},
  {"<str>", &YLstrG},
  {"@gen-cache-classes", &YOgen_cache_classes},
  {"nul-prop", &Ynul_prop},
  {"%gen-src", NULL},
  {"fun-arity", &Yfun_arity},
  {"vec", &Yvec},
  {"prop-setter-setter", &Yprop_setter_setter},
  {"%prop", &YPprop},
  {"and", NULL},
  {"@=", NULL},
  {"@all2?", &YOall2Q},
  {"%get", NULL},
  {"@vec", &YOvec},
  {"object-props", &Yobject_props},
  {"fin", NULL},
  {"%type-object", NULL},
  {"%current-out-port", NULL},
  {"%eof-object", NULL},
  {"%class-prop-len-setter", NULL},
  {"class-name", &Yclass_name},
  {"nil", &Ynil},
  {"%%sym", NULL},
  {"%isa", &YPisa},
  {"fun-same-met?", &Yfun_same_metQ},
  {"%c=", NULL},
  {"%current-in-port", NULL},
  {"fun-env-setter", &Yfun_env_setter},
  {"<mag>", &YLmagG},
  {"$gen-cache-singletons-offset", &YDgen_cache_singletons_offset},
  {"let", NULL},
  {"class-ancestors-setter", &Yclass_ancestors_setter},
  {"<loc>", &YLlocG},
  {"%unlink-stack", NULL},
  {"%class-row", NULL},
  {"%prop-init-setter", NULL},
  {"<specs>", &YLspecsG},
  {"%gen-cache-classes-setter", NULL},
  {"@oelt-setter", NULL},
  {"@find", &YOfind},
  {"prop-setter", &Yprop_setter},
  {"%vnul", &YPvnul},
  {"%sig-nary?", NULL},
  {"%fp-reg", NULL},
  {"%open-in-file", NULL},
  {"%sig-nary?-setter", NULL},
  {"%opts-vec-vec", NULL},
  {"ds", NULL},
  {"gen-cache-missable?-setter", &Ygen_cache_missableQ_setter},
  {"@add", NULL},
  {"<union>", &YLunionG},
  {"%str", NULL},
  {"fun-env", &Yfun_env},
  {"fun-val", &Yfun_val},
  {"%class-forward", NULL},
  {"class-ancestors", &Yclass_ancestors},
  {"---main-12---", NULL},
  {"macro-expand", NULL},
  {"%lu", NULL},
  {"%iu", NULL},
  {"fun-mets-setter", &Yfun_mets_setter},
  {"%build-runtime-modules", NULL},
  {"unless", NULL},
  {"@subclass?", NULL},
  {"%pair", NULL},
  {"may-isa?", &Ymay_isaQ},
  {"%i+", NULL},
  {"%sig-names-setter", NULL},
  {"%ir", NULL},
  {"%fp-reg-setter", NULL},
  {"%eq?", NULL},
  {"@gen-cache-singletons-setter", &YOgen_cache_singletons_setter},
  {"fun-nary?-setter", &Yfun_naryQ_setter},
  {"%class-direct-props", NULL},
  {"gen-cache-missable?", &Ygen_cache_missableQ},
  {"*boot-macro-module-names*", &YTboot_macro_module_namesT},
  {"%im", NULL},
  {"%break", NULL},
  {"%cu", NULL},
  {"<vec>", &YLvecG},
  {"gen-lookup", NULL},
  {"%prop-type-setter", NULL},
  {"gen-cache-classes-setter", &Ygen_cache_classes_setter},
  {"%selt", NULL},
  {"@==", NULL},
  {"@any?", &YOanyQ},
  {"%f+", NULL},
  {"%loc-off-setter", NULL},
  {"fun-spec", &Yfun_spec},
  {"%opts", NULL},
  {"fun-mets", &Yfun_mets},
  {"class-gens", &Yclass_gens},
  {"class-gens-setter", &Yclass_gens_setter},
  {"%symbols-ready?", &YPsymbols_readyQ},
  {"%class-direct-props-setter", NULL},
  {"@telt", &YOtelt},
  {"<tup>", &YLtupG},
  {"%f=", NULL},
  {"dc", NULL},
  {"%object-class-setter", NULL},
  {"gen-src-setter", &Ygen_src_setter},
  {"%fi2f", NULL},
  {"@prune-mets-by-type-at", &YOprune_mets_by_type_at},
  {"def-object-class-accessor", NULL},
  {"%with-monitor", &YPwith_monitor},
  {"%flo-dat-setter", NULL},
  {"%fun-reg", NULL},
  {"%i*", NULL},
  {"<flo>", &YLfloG},
  {"cond", NULL},
  {"%i=", NULL},
  {"%tag-bits", NULL},
  {"%%macro", &YPPmacro},
  {"<met>", &YLmetG},
  {"%cb", NULL},
  {"%process-module", NULL},
  {"%rev!", NULL},
  {"%prop-init", NULL},
  {"handler-info-arguments", &Yhandler_info_arguments},
  {"@velt-setter", &YOvelt_setter},
  {"refab-class", &Yrefab_class},
  {"@cat2", &YOcat2},
  {"%trace-on", NULL},
  {"gen-cache-classes", &Ygen_cache_classes},
  {"@type-equal?", &YOtype_equalQ},
  {"new", &Ynew},
  {"%*used-symbols-too-early*", &YPTused_symbols_too_earlyT},
  {"%macro", NULL},
  {"%gen-refs", NULL},
  {"%%apply", NULL},
  {"%sp-reg-setter", NULL},
  {"@add-new", NULL},
  {"@gen-cache-singletons", &YOgen_cache_singletons},
  {"%fc", NULL},
  {"sig-nary?-setter", &Ysig_naryQ_setter},
  {"%gen-cache-missable?-setter", NULL},
  {"%selt-setter", NULL},
  {"%flo-bits", NULL},
  {"fun-nary?", &Yfun_naryQ},
  {"%opts-vec-count", NULL},
  {"%sig", NULL},
  {"%head", NULL},
  {"gen-src", &Ygen_src},
  {"$max-int", &YDmax_int},
  {"%prop-getter", NULL},
  {"<subclass>", &YLsubclassG},
  {"%class-prop-len", NULL},
  {"df", NULL},
  {"%define-repeated-structure", NULL},
  {"%file-mtime", NULL},
  {"opts-vec-storage-setter", &Yopts_vec_storage_setter},
  {"%fab-code-refs", NULL},
  {"%close-in-port", NULL},
  {"fun-arity-setter", &Yfun_arity_setter},
  {"%i>>>", NULL},
  {"%puts", NULL},
  {"%f-", NULL},
  {"%class-props", NULL},
  {"%met-name", NULL},
  {"bound?", NULL},
  {"@tail", NULL},
  {"%met-env-setter", NULL},
  {"order-mets", &Yorder_mets},
  {"@do-children", &YOdo_children},
  {"%i>>", NULL},
  {"$tag-msk", NULL},
  {"%tag", NULL},
  {"%raw-alloc", NULL},
  {"@head-setter", NULL},
  {"sig-nary?", &Ysig_naryQ},
  {"$gen-cache-classes-offset", &YDgen_cache_classes_offset},
  {"dv", NULL},
  {"<int>", &YLintG},
  {"def", NULL},
  {"isa?", &YisaQ},
  {"@fun-mets-setter", &YOfun_mets_setter},
  {"prop-value-setter", &Yprop_value_setter},
  {"%class-row-setter", NULL},
  {"class-id", &Yclass_id},
  {"%define-primitives", NULL},
  {"%os-val", NULL},
  {"sig-unification-vars-setter", &Ysig_unification_vars_setter},
  {"%invoke-debugger", NULL},
  {"<flat>", &YLflatG},
  {"opts-vec-storage", &Yopts_vec_storage},
  {"set", NULL},
  {"type-class-setter", &Ytype_class_setter},
  {"%snul", &YPsnul},
  {"%str-eq?", NULL},
  {"%define-setter", NULL},
  {"%met-src-setter", NULL},
  {"lst", &Ylst},
  {"not", &Ynot},
  {"%fsqrt", NULL},
  {"%iv", NULL},
  {"%pairize", NULL},
  {"rep", NULL},
  {"%class-name-setter", NULL},
  {"@empty?", NULL},
  {"@velt", &YOvelt},
  {"<mets>", &YLmetsG},
  {"---main-0---", NULL},
  {"class-ordered-ancestors", &Yclass_ordered_ancestors},
  {"%force-out", NULL},
  {"class-prop-len-setter", &Yclass_prop_len_setter},
  {"gen-lookup-miss-1", &Ygen_lookup_miss_1},
  {"$direct-object-class", &YDdirect_object_class},
  {"sig-unification-vars", &Ysig_unification_vars},
  {"@gen-cache-arg-pos-setter", &YOgen_cache_arg_pos_setter},
  {"fun-specs-setter", &Yfun_specs_setter},
  {"fun", NULL},
  {"head-setter", &Yhead_setter},
  {"type-class", &Ytype_class},
  {"dm", NULL},
  {"nul", &Ynul},
  {"%sym-nam", NULL},
  {"fun-sig-setter", &Yfun_sig_setter},
  {"%raw", NULL},
  {"%i!", NULL},
  {"%i^", NULL},
  {"@alter", &YOalter},
  {"prop-getter-setter", &Yprop_getter_setter},
  {"%met-sig-setter", NULL},
  {"%compute-ancestors", NULL},
  {"@fun-mets", &YOfun_mets},
  {"---main-10---", NULL},
  {"<singleton>", &YLsingletonG},
  {"%type-elts-setter", NULL},
  {"%fapply", NULL},
  {"ct", NULL},
  {"class-prop-len", &Yclass_prop_len},
  {"%define-tagged-structure", NULL},
  {"%opts-location", NULL},
  {"forward-class", &Yforward_class},
  {"<fun>", &YLfunG},
  {"%tail", NULL},
  {"class-direct-props-setter", &Yclass_direct_props_setter},
  {"tup", &Ytup},
  {"%class-props-setter", NULL},
  {"@fill", &YOfill},
  {"head", &Yhead},
  {"handler-info-message", &Yhandler_info_message},
  {"%object-of", NULL},
  {"fun-sig", &Yfun_sig},
  {"%vec", NULL},
  {"@mets-unspecialized-at?", &YOmets_unspecialized_atQ},
  {"esc", NULL},
  {"@lst", &YOlst},
  {"%flo", NULL},
  {"@class-ancestors", &YOclass_ancestors},
  {"<num>", &YLnumG},
  {"try", NULL},
  {"dss", NULL},
  {"%define-parents", NULL},
  {"prop-getter", &Yprop_getter},
  {"@order-specs", &YOorder_specs},
  {"unexec", &Yunexec},
  {"%gen-cache-classes", NULL},
  {"%binding-name", NULL},
  {"%prop-owner", NULL},
  {"@gen-cache-arg-pos", &YOgen_cache_arg_pos},
  {"prop-init-setter", &Yprop_init_setter},
  {"fun-specs", &Yfun_specs},
  {"%singleton", NULL},
  {"%class-id", NULL},
  {"%object-class", NULL},
  {"@singleton-isa?", NULL},
  {"%%mep-apply", NULL},
  {"%sig-arity", NULL},
  {"%f<", NULL},
  {"%raw-call", NULL},
  {"%ftan", NULL},
  {"%define-accessor", NULL},
  {"%fatan", NULL},
  {"@@==", &YOOEE},
  {"@fun-unification-vars", &YOfun_unification_vars},
  {"fun-src-setter", &Yfun_src_setter},
  {"%fsin", NULL},
  {"%prop-elt-setter", NULL},
  {"%opts-vec-count-setter", NULL},
  {"%gen-code", NULL},
  {"class-descendents-setter", &Yclass_descendents_setter},
  {"<lst>", &YLlstG},
  {"*boot-macro-expanders*", &YTboot_macro_expandersT},
  {"%app-filename", NULL},
  {"@all?", &YOallQ},
  {"%sp-reg", NULL},
  {"@not", NULL},
  {"%fpow", NULL},
  {"$min-int", &YDmin_int},
  {"*restarts-ok?*", &YTrestarts_okQT},
  {"%ft", NULL},
  {"%%vfab", NULL},
  {"%flog", NULL},
  {"prop-init", &Yprop_init},
  {"%facos", NULL},
  {"%class-forward-setter", NULL},
  {"%class-shells", NULL},
  {"when", NULL},
  {"%fu", NULL},
  {"%fatan2", NULL},
  {"@precise-spec?", &YOprecise_specQ},
  {"%sig-unification-vars", NULL},
  {"@head", NULL},
  {"gen-cache-singletons-setter", &Ygen_cache_singletons_setter},
  {"%opts-count", NULL},
  {"@oelt", NULL},
  {"fun-src", &Yfun_src},
  {"---main-2---", NULL},
  {"%prop-type", NULL},
  {"class-descendents", &Yclass_descendents},
  {"%loc-val", NULL},
  {"%class-parents-setter", NULL},
  {"%sig-arity-setter", NULL},
  {"%untag", NULL},
  {"%sig-val-setter", NULL},
  {"%ib", NULL},
  {"@tail-setter", NULL},
  {"gen-refs-setter", &Ygen_refs_setter},
  {"prop-value", &Yprop_value},
  {"@do", &YOdo},
  {"%int", NULL},
  {"%empty?", NULL},
  {"gen-lookup-miss-1-using", &Ygen_lookup_miss_1_using},
  {"@fun-val", &YOfun_val},
  {"file-opening-error", &Yfile_opening_error},
  {"%code-ref", NULL},
  {"%prop-setter-setter", NULL},
  {"%opts-vec-location", NULL},
  {"<chr>", &YLchrG},
  {"gen-cache-singletons", &Ygen_cache_singletons},
  {"fun-names-setter", &Yfun_names_setter},
  {"%define-method", &YPdefine_method},
  {"<env>", &YLenvG},
  {"incongruent-method-error", &Yincongruent_method_error},
  {"%fb", NULL},
  {"---main-6---", NULL},
  {"del-class", &Ydel_class},
  {"%gen-name", NULL},
  {"---main-1---", NULL},
  {"sig-specs-setter", &Ysig_specs_setter},
  {"%unexec", NULL},
  {"%object-shells", NULL},
  {"gen-refs", &Ygen_refs},
  {"@rev!", &YOrevX},
  {"class-forward-setter", &Yclass_forward_setter},
  {"%union", NULL},
  {"@union-spec?", &YOunion_specQ},
  {"@olen", NULL},
  {"prop-bound-at?", NULL},
  {"%c<", NULL},
  {"opts-count-setter", &Yopts_count_setter},
  {"%app-args", NULL},
  {"dl", NULL},
  {"one-nil", &Yone_nil},
  {"<seq!>", &YLseqXG},
  {"%true", &YPtrue},
  {"%type-class", NULL},
  {"%loc-off", NULL},
  {"%fcos", NULL},
  {"%trace-off", NULL},
  {"%opts-location-setter", NULL},
  {"%opts-vec", NULL},
  {"%prop-unbound-error", &YPprop_unbound_error},
  {"prop-bound?", &Yprop_boundQ},
  {"%met-src", NULL},
  {"sig-specs", &Ysig_specs},
  {"fun-unification-vars-setter", &Yfun_unification_vars_setter},
  {"add-prop", &Yadd_prop},
  {"fab-sym", &Yfab_sym},
  {"%fcosh", NULL},
  {"%sym", NULL},
  {"<sig>", &YLsigG},
  {"@fun-arity", &YOfun_arity},
  {"class-forward", &Yclass_forward},
  {"%class-name", NULL},
  {"%prop-owner-setter", NULL},
  {"sig-val-setter", &Ysig_val_setter},
  {"@lst-helper", &YOlst_helper},
  {"$getter-not-found", &YDgetter_not_found},
  {"@fold", &YOfold},
  {"%opts-count-setter", NULL},
  {"%f*", NULL},
  {"subtype?", &YsubtypeQ},
  {"opts-count", &Yopts_count},
  {"fun-names", &Yfun_names},
  {"<opts-vec>", &YLopts_vecG},
  {"object-class", &Yobject_class},
  {"find-setter", &Yfind_setter},
  {"%class-mets-setter", NULL},
  {"type-object-setter", &Ytype_object_setter},
  {"%update-instance-for-changed-class", NULL},
  {"%class-descendents", NULL},
  {"class-ordered-props", &Yclass_ordered_props},
  {"%type-class-setter", NULL},
  {"%tag-into", NULL},
  {"---main-11---", NULL},
  {"$adr-tag", NULL},
  {"@subclass-spec?", &YOsubclass_specQ},
  {"%sig-names", NULL},
  {"sym-name-setter", &Ysym_name_setter},
  {"gen-from-met", &Ygen_from_met},
  {"ensure-singleton-cache", &Yensure_singleton_cache},
  {"%add-prop", &YPadd_prop},
  {"@@empty?", &YOOemptyQ},
  {"@fun-specs", &YOfun_specs},
  {"%str!", NULL},
  {"sig-val", &Ysig_val},
  {"fun-name-setter", &Yfun_name_setter},
  {"%met", NULL},
  {"use/export", NULL},
  {"<log>", &YLlogG},
  {"%prop-dat-at", NULL},
  {"type-object", &Ytype_object},
  {"@mets-subclasses-at", &YOmets_subclasses_at},
  {"%velt", NULL},
  {"class-id-setter", &Yclass_id_setter},
  {"%i?", NULL},
  {"<class>", &YLclassG},
  {"prop-type", &Yprop_type},
  {"error", &Yerror},
  {"%f/", NULL},
  {"fun-unification-vars", &Yfun_unification_vars},
  {"keyboard-interrupt", &Ykeyboard_interrupt},
  {"%met-refs", NULL},
  {"@elt", &YOelt},
  {"patch-early-classes", &Ypatch_early_classes},
  {"%gen-code-setter", NULL},
  {"prop-owner-setter", &Yprop_owner_setter},
  {"type-error", &Ytype_error},
  {"@fun-nary?", &YOfun_naryQ},
  {"prop-value-at-setter", NULL},
  {"%vu", NULL},
  {"%class-mets", NULL},
  {"sym-name", &Ysym_name},
  {"$num-int-bits", &YDnum_int_bits},
  {"class-direct-props", &Yclass_direct_props},
  {"export", NULL},
  {"%i<", NULL},
  {"%met-code", NULL},
  {"%gen-sig", NULL},
  {"@class-direct-props", &YOclass_direct_props},
  {"%cat2", NULL},
  {"<seq>", &YLseqG},
  {"%su", NULL},
  {"class-parents-setter", &Yclass_parents_setter},
  {"%subclass", NULL},
  {"@pick", &YOpick},
  {"@class<", &YOclassL},
  {"fab-class", &Yfab_class},
  {"%open-out-file", NULL},
  {"%file-type", NULL},
  {"%ff", NULL},
  {"fun-name", &Yfun_name},
  {"@singleton-spec?", &YOsingleton_specQ},
  {"%gen-src-setter", NULL},
  {"%elt-setter", NULL},
  {"order-specs", &Yorder_specs},
  {"@pair", NULL},
  {"dg", NULL},
  {"prop-owner", &Yprop_owner},
  {"%allocate-stack", NULL},
  {"%false", &YPfalse},
  {"use", NULL},
  {"@len", NULL},
  {"<body>", &YLbodyG},
  {"ct-also", NULL},
  {"quote", NULL},
  {"%elt", NULL},
  {"%prop-offset", &YPprop_offset},
  {"prop-type-setter", &Yprop_type_setter},
  {"%patch-early-generic", &YPpatch_early_generic},
  {"%class-parents", NULL},
  {"---main-8---", NULL},
  {"%%sfab", NULL},
  {"%opts-vec-location-setter", NULL},
  {"%finalize-props", NULL},
  {"%gen-cache-singletons", NULL},
  {"class-parents", &Yclass_parents},
  {"ord-app-mets-1", &Yord_app_mets_1},
  {"update-instance-for-changed-class", &Yupdate_instance_for_changed_class},
  {"%met-refs-setter", NULL},
  {"<opts>", &YLoptsG},
  {"find-getter", &Yfind_getter},
  {"unknown-function-error", &Yunknown_function_error},
  {"%type-object-setter", NULL},
  {"@+", NULL},
  {"fun-refs-setter", &Yfun_refs_setter},
  {"---main-5---", NULL},
  {"---main-7---", NULL},
  {"@del-dups", &YOdel_dups},
  {"class-props-setter", &Yclass_props_setter},
  {"@order-specs-class", &YOorder_specs_class},
  {"%gen-cache-arg-pos", NULL},
  {"%sig-unification-vars-setter", NULL},
  {"*macros-ok?*", &YTmacros_okQT},
  {"%class-gens-setter", NULL},
  {"<type>", &YLtypeG},
  {"%flo-dat", NULL},
  {"@class-isa?", NULL},
  {"%class-gens", NULL},
  {"ord-app-mets", &Yord_app_mets},
  {"fun-val-setter", &Yfun_val_setter},
  {"%slen", NULL},
  {"<any>", &YLanyG},
  {"@tup", &YOtup},
  {"---main-3---", NULL},
  {"%ftanh", NULL},
  {"%os-val-setter", NULL},
  {"%str-eq?-loop", NULL},
  {"<gen-cache>", &YLgen_cacheG},
  {"%define-structure-accessors", NULL},
  {"<props>", &YLpropsG},
  {"%lst", NULL},
  {"%vec!", NULL},
  {"%loc-val-setter", NULL},
  {"%lb", NULL},
  {"%sb", NULL},
  {"gen-cache-arg-pos-setter", &Ygen_cache_arg_pos_setter},
  {"%dispatch", &YPdispatch},
  {"%gen-cache-missable?", NULL},
  {"%class-ancestors", NULL},
  {"$missed-dispatch", &YDmissed_dispatch},
  {"fun-refs", &Yfun_refs},
  {"%gen-sig-setter", NULL},
  {"class-props", &Yclass_props},
  {"%check-call-types", NULL},
  {"%sym-nam-setter", NULL},
  {"%head-setter", NULL},
  {"%chr", NULL},
  {"@specd-args", &YOspecd_args},
  {"fun-cache-setter", &Yfun_cache_setter},
  {"%define-structure", NULL},
  {"@mets-singletons-at", &YOmets_singletons_at},
  {"prop-offset", &Yprop_offset},
  {"*report-prop-unbound-errors?*", &YTreport_prop_unbound_errorsQT},
  {"%gen-name-setter", NULL},
  {"<col!>", &YLcolXG},
  {"%i<<", NULL},
  {"%close-out-port", NULL},
  {"loc", NULL},
  {"%met-sig", NULL},
  {"%prop-setter", NULL},
  {"%prop-getter-setter", NULL},
  {"@fun-names", &YOfun_names},
  {"%gen-cache", NULL},
  {"%tail-setter", NULL},
  {"gen-cache-arg-pos", &Ygen_cache_arg_pos},
  {"%gen-mets-setter", NULL},
  {"%untag-into", NULL},
  {"gen-add-met", &Ygen_add_met},
  {"%define-hierarchy", NULL},
  {"method-accessor-offset", &Ymethod_accessor_offset},
  {"%vlen", NULL},
  {"sig-names-setter", &Ysig_names_setter},
  {"@fab", &YOfab},
  {"isa", NULL},
  {"%newline", NULL},
  {"%os-name", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"prop-init", "prop-init"},
  {"%fasin", "%fasin"},
  {"dp", "dp"},
  {"%i-", "%i-"},
  {"sig-names", "sig-names"},
  {"%put", "%put"},
  {"%it/", "%it/"},
  {"if", "if"},
  {"met-app?", "met-app?"},
  {"wrong-number-arguments-error", "wrong-number-arguments-error"},
  {"*boot-macro-names*", "*boot-macro-names*"},
  {"%i&", "%i&"},
  {"%symbols", "%symbols"},
  {"@isa?", "@isa?"},
  {"<col>", "<col>"},
  {"%file-exists?", "%file-exists?"},
  {"%do-stack-frames", "%do-stack-frames"},
  {"tail-setter", "tail-setter"},
  {"%loc-off-setter", "%loc-off-setter"},
  {"%bb", "%bb"},
  {"sig-arity", "sig-arity"},
  {"mif", "mif"},
  {"%velt-setter", "%velt-setter"},
  {"%ready?", "%ready?"},
  {"fab-gen", "fab-gen"},
  {"<prop>", "<prop>"},
  {"object-parents", "object-parents"},
  {"%peek", "%peek"},
  {"%next-methods", "%next-methods"},
  {"<gen>", "<gen>"},
  {"quasiquote", "quasiquote"},
  {"%i<<<", "%i<<<"},
  {"nul", "nul"},
  {"tail", "tail"},
  {"@<", "@<"},
  {"%allocate-stack", "%allocate-stack"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"%fsinh", "%fsinh"},
  {"type-elts", "type-elts"},
  {"%create-directory", "%create-directory"},
  {"seq", "seq"},
  {"<str>", "<str>"},
  {"%gen-src", "%gen-src"},
  {"fun-arity", "fun-arity"},
  {"vec", "vec"},
  {"%prop", "%prop"},
  {"@all2?", "@all2?"},
  {"%get", "%get"},
  {"object-props", "object-props"},
  {"fin", "fin"},
  {"%current-out-port", "%current-out-port"},
  {"%eof-object", "%eof-object"},
  {"class-name", "class-name"},
  {"%%sym", "%%sym"},
  {"%isa", "%isa"},
  {"%c=", "%c="},
  {"<mag>", "<mag>"},
  {"let", "let"},
  {"<loc>", "<loc>"},
  {"%unlink-stack", "%unlink-stack"},
  {"prop-setter", "prop-setter"},
  {"%vnul", "%vnul"},
  {"%open-in-file", "%open-in-file"},
  {"ds", "ds"},
  {"<union>", "<union>"},
  {"class-ancestors", "class-ancestors"},
  {"macro-expand", "macro-expand"},
  {"%iu", "%iu"},
  {"%build-runtime-modules", "%build-runtime-modules"},
  {"%pair", "%pair"},
  {"%i+", "%i+"},
  {"file-opening-error", "file-opening-error"},
  {"%raw-call", "%raw-call"},
  {"%eq?", "%eq?"},
  {"*boot-macro-module-names*", "*boot-macro-module-names*"},
  {"%im", "%im"},
  {"%cu", "%cu"},
  {"<vec>", "<vec>"},
  {"%selt", "%selt"},
  {"@any?", "@any?"},
  {"%f+", "%f+"},
  {"fun-mets", "fun-mets"},
  {"%cb", "%cb"},
  {"<tup>", "<tup>"},
  {"%f=", "%f="},
  {"dc", "dc"},
  {"gen-src-setter", "gen-src-setter"},
  {"%fi2f", "%fi2f"},
  {"%with-monitor", "%with-monitor"},
  {"%i<<", "%i<<"},
  {"%fun-reg", "%fun-reg"},
  {"%i*", "%i*"},
  {"<flo>", "<flo>"},
  {"%i=", "%i="},
  {"%%macro", "%%macro"},
  {"<met>", "<met>"},
  {"%process-module", "%process-module"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"new", "new"},
  {"%gen-refs", "%gen-refs"},
  {"%sp-reg-setter", "%sp-reg-setter"},
  {"%selt-setter", "%selt-setter"},
  {"%flo-bits", "%flo-bits"},
  {"gen-src", "gen-src"},
  {"$max-int", "$max-int"},
  {"<subclass>", "<subclass>"},
  {"df", "df"},
  {"%file-mtime", "%file-mtime"},
  {"%close-in-port", "%close-in-port"},
  {"%i>>>", "%i>>>"},
  {"%puts", "%puts"},
  {"%f-", "%f-"},
  {"bound?", "bound?"},
  {"%i>>", "%i>>"},
  {"sig-nary?", "sig-nary?"},
  {"quote", "quote"},
  {"dv", "dv"},
  {"def", "def"},
  {"isa?", "isa?"},
  {"prop-value-setter", "prop-value-setter"},
  {"%os-val", "%os-val"},
  {"%invoke-debugger", "%invoke-debugger"},
  {"<flat>", "<flat>"},
  {"%open-out-file", "%open-out-file"},
  {"may-isa?", "may-isa?"},
  {"set", "set"},
  {"%snul", "%snul"},
  {"lst", "lst"},
  {"not", "not"},
  {"%fsqrt", "%fsqrt"},
  {"%iv", "%iv"},
  {"rep", "rep"},
  {"%force-out", "%force-out"},
  {"%sp-reg", "%sp-reg"},
  {"sig-unification-vars", "sig-unification-vars"},
  {"fun", "fun"},
  {"head-setter", "head-setter"},
  {"type-class", "type-class"},
  {"dm", "dm"},
  {"fun-sig-setter", "fun-sig-setter"},
  {"%raw", "%raw"},
  {"%i!", "%i!"},
  {"%i^", "%i^"},
  {"<singleton>", "<singleton>"},
  {"ct", "ct"},
  {"<fun>", "<fun>"},
  {"tup", "tup"},
  {"subtype?", "subtype?"},
  {"handler-info-message", "handler-info-message"},
  {"prop-bound?", "prop-bound?"},
  {"%vec", "%vec"},
  {"esc", "esc"},
  {"<num>", "<num>"},
  {"try", "try"},
  {"dss", "dss"},
  {"prop-getter", "prop-getter"},
  {"unexec", "unexec"},
  {"%binding-name", "%binding-name"},
  {"fun-specs", "fun-specs"},
  {"%slen", "%slen"},
  {"%f<", "%f<"},
  {"%ftan", "%ftan"},
  {"%fatan", "%fatan"},
  {"%fsin", "%fsin"},
  {"%gen-code", "%gen-code"},
  {"<lst>", "<lst>"},
  {"%app-filename", "%app-filename"},
  {"fab-class", "fab-class"},
  {"%fpow", "%fpow"},
  {"$min-int", "$min-int"},
  {"%ft", "%ft"},
  {"<replace-generic-restart>", "<replace-generic-restart>"},
  {"%facos", "%facos"},
  {"%fu", "%fu"},
  {"%fatan2", "%fatan2"},
  {"object-class", "object-class"},
  {"@oelt", "@oelt"},
  {"class-descendents", "class-descendents"},
  {"%loc-val", "%loc-val"},
  {"%untag", "%untag"},
  {"%ib", "%ib"},
  {"gen-refs-setter", "gen-refs-setter"},
  {"prop-value", "prop-value"},
  {"<chr>", "<chr>"},
  {"%define-method", "%define-method"},
  {"incongruent-method-error", "incongruent-method-error"},
  {"%str", "%str"},
  {"%fb", "%fb"},
  {"gen-refs", "gen-refs"},
  {"prop-type", "prop-type"},
  {"@olen", "@olen"},
  {"%flog", "%flog"},
  {"%c<", "%c<"},
  {"%app-args", "%app-args"},
  {"dl", "dl"},
  {"<seq!>", "<seq!>"},
  {"%loc-off", "%loc-off"},
  {"%fcos", "%fcos"},
  {"%prop-unbound-error", "%prop-unbound-error"},
  {"sig-specs", "sig-specs"},
  {"add-prop", "add-prop"},
  {"fab-sym", "fab-sym"},
  {"%fcosh", "%fcosh"},
  {"*boot-macro-expanders*", "*boot-macro-expanders*"},
  {"<sig>", "<sig>"},
  {"<sym>", "<sym>"},
  {"%f*", "%f*"},
  {"fun-names", "fun-names"},
  {"find-setter", "find-setter"},
  {"nil", "nil"},
  {"<log>", "<log>"},
  {"<int>", "<int>"},
  {"@lst", "@lst"},
  {"sig-val", "sig-val"},
  {"fun-name-setter", "fun-name-setter"},
  {"use/export", "use/export"},
  {"%current-in-port", "%current-in-port"},
  {"type-object", "type-object"},
  {"%velt", "%velt"},
  {"%i?", "%i?"},
  {"<class>", "<class>"},
  {"error", "error"},
  {"%f/", "%f/"},
  {"keyboard-interrupt", "keyboard-interrupt"},
  {"%gen-code-setter", "%gen-code-setter"},
  {"type-error", "type-error"},
  {"head", "head"},
  {"sym-name", "sym-name"},
  {"class-direct-props", "class-direct-props"},
  {"export", "export"},
  {"%i<", "%i<"},
  {"%met-code", "%met-code"},
  {"<seq>", "<seq>"},
  {"%su", "%su"},
  {"%file-type", "%file-type"},
  {"fun-name", "fun-name"},
  {"dg", "dg"},
  {"%lu", "%lu"},
  {"prop-owner", "prop-owner"},
  {"%lb", "%lb"},
  {"use", "use"},
  {"@len", "@len"},
  {"ct-also", "ct-also"},
  {"fun-nary?", "fun-nary?"},
  {"class-parents", "class-parents"},
  {"<opts>", "<opts>"},
  {"find-getter", "find-getter"},
  {"unknown-function-error", "unknown-function-error"},
  {"@+", "@+"},
  {"@==", "@=="},
  {"*macros-ok?*", "*macros-ok?*"},
  {"<type>", "<type>"},
  {"ord-app-mets", "ord-app-mets"},
  {"<any>", "<any>"},
  {"%ftanh", "%ftanh"},
  {"%os-val-setter", "%os-val-setter"},
  {"*restarts-ok?*", "*restarts-ok?*"},
  {"%loc-val-setter", "%loc-val-setter"},
  {"%sb", "%sb"},
  {"class-props", "class-props"},
  {"%check-call-types", "%check-call-types"},
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"<col!>", "<col!>"},
  {"%close-out-port", "%close-out-port"},
  {"loc", "loc"},
  {"gen-add-met", "gen-add-met"},
  {"%vlen", "%vlen"},
  {"fun-val", "fun-val"},
  {"isa", "isa"},
  {"%os-name", "%os-name"},
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

}

/* END OF GENERATED CODE. */
