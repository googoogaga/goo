/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: boot */

DEF(Yclass_ordered_parents,"boot","class-ordered-parents");
DEF(Yopts_count_setter,"boot","opts-count-setter");
DEF(YOdo_children,"boot","@do-children");
DEF(YOmets_unspecialized_atQ,"boot","@mets-unspecialized-at?");
DEF(YOgen_cache_arg_pos_setter,"boot","@gen-cache-arg-pos-setter");
DEF(Yfun_specs_setter,"boot","fun-specs-setter");
DEF(Yfab_sym,"boot","fab-sym");
DEF(Yvec,"boot","vec");
DEF(Ygen_add_met,"boot","gen-add-met");
DEF(YOorder_specs,"boot","@order-specs");
DEF(Ysig_specs,"boot","sig-specs");
DEF(YOlst,"boot","@lst");
DEF(Yclass_forward_setter,"boot","class-forward-setter");
DEF(Ytype_elts,"boot","type-elts");
DEF(Yprop_type,"boot","prop-type");
DEF(YOfun_mets,"boot","@fun-mets");
DEF(YLsingletonG,"boot","<singleton>");
DEF(YPsymbols_readyQ,"boot","%symbols-ready?");
DEF(Yopts_count,"boot","opts-count");
DEF(YOalter,"boot","@alter");
DEF(Ytype_object_setter,"boot","type-object-setter");
DEF(YLfunG,"boot","<fun>");
DEF(YPTstart_running_atT,"boot","%*start-running-at*");
DEF(Yhandler_info_message,"boot","handler-info-message");
DEF(YOfill,"boot","@fill");
DEF(Yprop_boundQ,"boot","prop-bound?");
DEF(Ysym_name_setter,"boot","sym-name-setter");
DEF(YOclass_ancestors,"boot","@class-ancestors");
DEF(Ygen_from_met,"boot","gen-from-met");
DEF(Ysig_val,"boot","sig-val");
DEF(YLlstG,"boot","<lst>");
DEF(Yfab_class,"boot","fab-class");
DEF(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
DEF(YLlogG,"boot","<log>");
DEF(YOgen_cache_arg_pos,"boot","@gen-cache-arg-pos");
DEF(Ynul_prop,"boot","nul-prop");
DEF(Yfun_specs,"boot","fun-specs");
DEF(Ytype_object,"boot","type-object");
DEF(Yfun_name_setter,"boot","fun-name-setter");
DEF(Yprop_owner_setter,"boot","prop-owner-setter");
DEF(YOOEE,"boot","@@==");
DEF(Yforward_class,"boot","forward-class");
DEF(YOfun_unification_vars,"boot","@fun-unification-vars");
DEF(Ysym_name,"boot","sym-name");
DEF(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
DEF(Yclass_parents_setter,"boot","class-parents-setter");
DEF(YPwith_monitor,"boot","%with-monitor");
DEF(Yfun_name,"boot","fun-name");
DEF(Ygen_lookup_miss_1_using,"boot","gen-lookup-miss-1-using");
DEF(Yadd_prop,"boot","add-prop");
DEF(YOprecise_specQ,"boot","@precise-spec?");
DEF(Yobject_class,"boot","object-class");
DEF(YPprop_offset,"boot","%prop-offset");
DEF(Yprop_owner,"boot","prop-owner");
DEF(Yfun_refs_setter,"boot","fun-refs-setter");
DEF(Ydel_class,"boot","del-class");
DEF(Yprop_type_setter,"boot","prop-type-setter");
DEF(Yprop_value,"boot","prop-value");
DEF(Yclass_parents,"boot","class-parents");
DEF(YDmax_int,"boot","$max-int");
DEF(YOdo,"boot","@do");
DEF(Ymay_isaQ,"boot","may-isa?");
DEF(Yclass_props_setter,"boot","class-props-setter");
DEF(YOfun_val,"boot","@fun-val");
DEF(Ygen_cache_arg_pos_setter,"boot","gen-cache-arg-pos-setter");
DEF(Yfun_refs,"boot","fun-refs");
DEF(YLseqG,"boot","<seq>");
DEF(YLanyG,"boot","<any>");
DEF(Ynil,"boot","nil");
DEF(YDgen_cache_classes_offset,"boot","$gen-cache-classes-offset");
DEF(YOtup,"boot","@tup");
DEF(YOunion_specQ,"boot","@union-spec?");
DEF(YOlst_helper,"boot","@lst-helper");
DEF(Yclass_props,"boot","class-props");
DEF(Ygen_cache_arg_pos,"boot","gen-cache-arg-pos");
DEF(Yerror,"boot","error");
DEF(Yclass_ordered_props,"boot","class-ordered-props");
DEF(Yfun_cache_setter,"boot","fun-cache-setter");
DEF(Yclass_mets_setter,"boot","class-mets-setter");
DEF(YPprop_unbound_error,"boot","%prop-unbound-error");
DEF(YDgen_cache_singletons_offset,"boot","$gen-cache-singletons-offset");
DEF(Yfun_unification_vars_setter,"boot","fun-unification-vars-setter");
DEF(YLsigG,"boot","<sig>");
DEF(YOfun_arity,"boot","@fun-arity");
DEF(YOfold,"boot","@fold");
DEF(Yfun_names,"boot","fun-names");
DEF(YLopts_vecG,"boot","<opts-vec>");
DEF(YOmets_subclasses_at,"boot","@mets-subclasses-at");
DEF(Ysig_names_setter,"boot","sig-names-setter");
DEF(Yfun_cache,"boot","fun-cache");
DEF(Yclass_mets,"boot","class-mets");
DEF(Ysig_unification_vars_setter,"boot","sig-unification-vars-setter");
DEF(YOsubclass_specQ,"boot","@subclass-spec?");
DEF(Yopts_location_setter,"boot","opts-location-setter");
DEF(Yhandler_info_arguments,"boot","handler-info-arguments");
DEF(YOall2Q,"boot","@all2?");
DEF(Yensure_singleton_cache,"boot","ensure-singleton-cache");
DEF(YOclass_direct_props,"boot","@class-direct-props");
DEF(Yfile_opening_error,"boot","file-opening-error");
DEF(YLcolG,"boot","<col>");
DEF(YLclassG,"boot","<class>");
DEF(Ysig_names,"boot","sig-names");
DEF(YPfinalize_propsX,"boot","%finalize-props!");
DEF(Yfun_unification_vars,"boot","fun-unification-vars");
DEF(YTboot_macro_namesT,"boot","*boot-macro-names*");
DEF(Yfind_setter,"boot","find-setter");
DEF(Ysig_arity_setter,"boot","sig-arity-setter");
DEF(YOfun_naryQ,"boot","@fun-nary?");
DEF(Yopts_location,"boot","opts-location");
DEF(Yclass_row_setter,"boot","class-row-setter");
DEF(YPadd_prop,"boot","%add-prop");
DEF(YOpick,"boot","@pick");
DEF(YOclassL,"boot","@class<");
DEF(YOelt,"boot","@elt");
DEF(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
DEF(YOsingleton_specQ,"boot","@singleton-spec?");
DEF(Ytail_setter,"boot","tail-setter");
DEF(Ysig_arity,"boot","sig-arity");
DEF(YPpatch_early_generic,"boot","%patch-early-generic");
DEF(Yclass_row,"boot","class-row");
DEF(Yfab_gen,"boot","fab-gen");
DEF(Yfun_code_setter,"boot","fun-code-setter");
DEF(YPcollect_direct_props,"boot","%collect-direct-props");
DEF(Ytype_elts_setter,"boot","type-elts-setter");
DEF(Yord_app_mets_1,"boot","ord-app-mets-1");
DEF(YLoptsG,"boot","<opts>");
DEF(YOfun_specs,"boot","@fun-specs");
DEF(YOdel_dups,"boot","@del-dups");
DEF(Ytail,"boot","tail");
DEF(YOorder_specs_class,"boot","@order-specs-class");
DEF(YLtypeG,"boot","<type>");
DEF(Yclass_name_setter,"boot","class-name-setter");
DEF(Yincongruent_method_error,"boot","incongruent-method-error");
DEF(Yord_app_mets,"boot","ord-app-mets");
DEF(Yfun_val_setter,"boot","fun-val-setter");
DEF(Yfun_code,"boot","fun-code");
DEF(YLgen_cacheG,"boot","<gen-cache>");
DEF(YOfun_names,"boot","@fun-names");
DEF(YLlocG,"boot","<loc>");
DEF(Yfun_env_setter,"boot","fun-env-setter");
DEF(YPTused_symbols_too_earlyT,"boot","%*used-symbols-too-early*");
DEF(Yprop_setter_setter,"boot","prop-setter-setter");
DEF(YLenvG,"boot","<env>");
DEF(Yupdate_instance_for_changed_class,"boot","update-instance-for-changed-class");
DEF(YOspecd_args,"boot","@specd-args");
DEF(Yfind_getter,"boot","find-getter");
DEF(YOmets_singletons_at,"boot","@mets-singletons-at");
DEF(Yprop_offset,"boot","prop-offset");
DEF(Yclass_name,"boot","class-name");
DEF(Yclass_ancestors_setter,"boot","class-ancestors-setter");
DEF(Ygen_cache_missableQ_setter,"boot","gen-cache-missable?-setter");
DEF(Yfun_env,"boot","fun-env");
DEF(Ymethod_accessor_offset,"boot","method-accessor-offset");
DEF(Yprop_setter,"boot","prop-setter");
DEF(YOfab,"boot","@fab");
DEF(YLpropsG,"boot","<props>");
DEF(YOmay_isaQ,"boot","@may-isa?");
DEF(YDmin_int,"boot","$min-int");
DEF(Yclass_ancestors,"boot","class-ancestors");
DEF(Ygen_cache_missableQ,"boot","gen-cache-missable?");
DEF(YPtrue,"boot","%true");
DEF(Yfun_mets_setter,"boot","fun-mets-setter");
DEF(Yclass_gens_setter,"boot","class-gens-setter");
DEF(Yensure_fresh_object,"boot","ensure-fresh-object");
DEF(YOmemQ,"boot","@mem?");
DEF(Ychoose_methods,"boot","choose-methods");
DEF(YTmacros_okQT,"boot","*macros-ok?*");
DEF(YLfloG,"boot","<flo>");
DEF(YLsymG,"boot","<sym>");
DEF(Ymet_appQ,"boot","met-app?");
DEF(Yobject_parents,"boot","object-parents");
DEF(Ygen_cache_classes_setter,"boot","gen-cache-classes-setter");
DEF(YPadd_met,"boot","%add-met");
DEF(Yfun_mets,"boot","fun-mets");
DEF(YOisaQ,"boot","@isa?");
DEF(Yclass_gens,"boot","class-gens");
DEF(YPvnul,"boot","%vnul");
DEF(Ygen_src_setter,"boot","gen-src-setter");
DEF(YTreport_prop_unbound_errorsQT,"boot","*report-prop-unbound-errors?*");
DEF(Yfun_congruentQ,"boot","fun-congruent?");
DEF(YOmets_specs_at,"boot","@mets-specs-at");
DEF(YOgen_cache_classes_setter,"boot","@gen-cache-classes-setter");
DEF(Yfun_arity_setter,"boot","fun-arity-setter");
DEF(YOtelt,"boot","@telt");
DEF(YLpropG,"boot","<prop>");
DEF(Ygen_cache_classes,"boot","gen-cache-classes");
DEF(YPsymbols,"boot","%symbols");
DEF(YOsubtypeQ,"boot","@subtype?");
DEF(Ynew,"boot","new");
DEF(YLgenG,"boot","<gen>");
DEF(Ysig_naryQ_setter,"boot","sig-nary?-setter");
DEF(YTrestarts_okQT,"boot","*restarts-ok?*");
DEF(Ynul,"boot","nul");
DEF(Ygen_src,"boot","gen-src");
DEF(Yclass_id_setter,"boot","class-id-setter");
DEF(Yone_nil,"boot","one-nil");
DEF(YOvec,"boot","@vec");
DEF(Yobject_props,"boot","object-props");
DEF(YDgetter_not_found,"boot","$getter-not-found");
DEF(Yopts_vec_storage_setter,"boot","opts-vec-storage-setter");
DEF(YOmap,"boot","@map");
DEF(YPmet_prop_len,"boot","%met-prop-len");
DEF(Ytype_error,"boot","type-error");
DEF(YLsimple_handler_infoG,"boot","<simple-handler-info>");
DEF(Ygen_lookup_miss,"boot","gen-lookup-miss");
DEF(Ymet_app_unify,"boot","met-app-unify");
DEF(Ysig_naryQ,"boot","sig-nary?");
DEF(YLintG,"boot","<int>");
DEF(YLstrG,"boot","<str>");
DEF(YOgen_cache_classes,"boot","@gen-cache-classes");
DEF(Yfun_arity,"boot","fun-arity");
DEF(Yclass_id,"boot","class-id");
DEF(YPearly_dispatch,"boot","%early-dispatch");
DEF(Yopts_vec_storage,"boot","opts-vec-storage");
DEF(Ylst,"boot","lst");
DEF(Ytype_class_setter,"boot","type-class-setter");
DEF(YLbodyG,"boot","<body>");
DEF(Yfun_same_metQ,"boot","fun-same-met?");
DEF(YLtupG,"boot","<tup>");
DEF(Yclass_prop_len_setter,"boot","class-prop-len-setter");
DEF(YOfind,"boot","@find");
DEF(Ysig_unification_vars,"boot","sig-unification-vars");
DEF(Ytup,"boot","tup");
DEF(YisaQ,"boot","isa?");
DEF(Yunknown_function_error,"boot","unknown-function-error");
DEF(YPsnul,"boot","%snul");
DEF(Yhead_setter,"boot","head-setter");
DEF(Ytype_class,"boot","type-class");
DEF(Yfun_sig_setter,"boot","fun-sig-setter");
DEF(YPprop,"boot","%prop");
DEF(YLunionG,"boot","<union>");
DEF(Yprop_getter_setter,"boot","prop-getter-setter");
DEF(YPisa,"boot","%isa");
DEF(Yclass_prop_len,"boot","class-prop-len");
DEF(YOrevX,"boot","@rev!");
DEF(Yclass_direct_props_setter,"boot","class-direct-props-setter");
DEF(YOgen_cache_singletons_setter,"boot","@gen-cache-singletons-setter");
DEF(YDmissed_dispatch,"boot","$missed-dispatch");
DEF(YLspecsG,"boot","<specs>");
DEF(Yhead,"boot","head");
DEF(Yfun_naryQ_setter,"boot","fun-nary?-setter");
DEF(Yfun_sig,"boot","fun-sig");
DEF(YLmagG,"boot","<mag>");
DEF(YOvelt_setter,"boot","@velt-setter");
DEF(YLnumG,"boot","<num>");
DEF(YLvecG,"boot","<vec>");
DEF(Yprop_getter,"boot","prop-getter");
DEF(Yunexec,"boot","unexec");
DEF(YOanyQ,"boot","@any?");
DEF(Yfun_spec,"boot","fun-spec");
DEF(Yprop_init_setter,"boot","prop-init-setter");
DEF(YOprune_mets_by_type_at,"boot","@prune-mets-by-type-at");
DEF(Yclass_direct_props,"boot","class-direct-props");
DEF(Yfun_src_setter,"boot","fun-src-setter");
DEF(YLmetG,"boot","<met>");
DEF(Yclass_descendents_setter,"boot","class-descendents-setter");
DEF(YOcat2,"boot","@cat2");
DEF(YOtype_equalQ,"boot","@type-equal?");
DEF(Yorder_specs,"boot","order-specs");
DEF(YPPmacro,"boot","%%macro");
DEF(YLparentsG,"boot","<parents>");
DEF(Yprop_init,"boot","prop-init");
DEF(YOgen_cache_singletons,"boot","@gen-cache-singletons");
DEF(Yorder_mets,"boot","order-mets");
DEF(Yfun_naryQ,"boot","fun-nary?");
DEF(YOOemptyQ,"boot","@@empty?");
DEF(YLsubclassG,"boot","<subclass>");
DEF(Ygen_cache_singletons_setter,"boot","gen-cache-singletons-setter");
DEF(Yfun_src,"boot","fun-src");
DEF(Yclass_descendents,"boot","class-descendents");
DEF(YLmetsG,"boot","<mets>");
DEF(Ygen_refs_setter,"boot","gen-refs-setter");
DEF(Ysig_val_setter,"boot","sig-val-setter");
DEF(YPfalse,"boot","%false");
DEF(YDdirect_object_class,"boot","$direct-object-class");
DEF(YOvelt,"boot","@velt");
DEF(YsubtypeQ,"boot","subtype?");
DEF(YDnum_int_bits,"boot","$num-int-bits");
DEF(YOfun_mets_setter,"boot","@fun-mets-setter");
DEF(Yprop_value_setter,"boot","prop-value-setter");
DEF(YLchrG,"boot","<chr>");
DEF(YLflatG,"boot","<flat>");
DEF(Ygen_cache_singletons,"boot","gen-cache-singletons");
DEF(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
DEF(YPdefine_method,"boot","%define-method");
DEF(Ykeyboard_interrupt,"boot","keyboard-interrupt");
DEF(Ysig_specs_setter,"boot","sig-specs-setter");
DEF(Ygen_lookup_miss_1,"boot","gen-lookup-miss-1");
DEF(YPdispatch,"boot","%dispatch");
DEF(Yfun_names_setter,"boot","fun-names-setter");
DEF(Yfun_val,"boot","fun-val");
DEF(Ygen_refs,"boot","gen-refs");
DEF(YOallQ,"boot","@all?");
DEF(Yrefab_class,"boot","refab-class");
DEF(Ynot,"boot","not");
DEF(Yclass_forward,"boot","class-forward");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_107);
DEFLIT(lit_312);
DEFLIT(lit_118);
DEFLIT(lit_123);
DEFLIT(lit_252);
DEFLIT(lit_290);
DEFLIT(lit_352);
DEFLIT(lit_283);
DEFLIT(lit_273);
DEFLIT(lit_79);
DEFLIT(lit_262);
DEFLIT(lit_301);
DEFLIT(lit_4);
DEFLIT(lit_199);
DEFLIT(lit_218);
DEFLIT(lit_225);
DEFLIT(lit_234);
DEFLIT(lit_85);
DEFLIT(lit_242);
DEFLIT(lit_55);
DEFLIT(lit_61);
DEFLIT(lit_16);
DEFLIT(lit_342);
DEFLIT(lit_173);
DEFLIT(lit_92);
DEFLIT(lit_204);
DEFLIT(lit_139);
DEFLIT(lit_326);
DEFLIT(lit_172);
DEFLIT(lit_178);
DEFLIT(lit_255);
DEFLIT(lit_191);
DEFLIT(lit_60);
DEFLIT(lit_192);
DEFLIT(lit_30);
DEFLIT(lit_36);
DEFLIT(lit_282);
DEFLIT(lit_53);
DEFLIT(lit_302);
DEFLIT(lit_21);
DEFLIT(lit_228);
DEFLIT(lit_165);
DEFLIT(lit_339);
DEFLIT(lit_272);
DEFLIT(lit_338);
DEFLIT(lit_311);
DEFLIT(lit_372);
DEFLIT(lit_360);
DEFLIT(lit_217);
DEFLIT(lit_166);
DEFLIT(lit_91);
DEFLIT(lit_132);
DEFLIT(lit_325);
DEFLIT(lit_124);
DEFLIT(lit_261);
DEFLIT(lit_15);
DEFLIT(lit_300);
DEFLIT(lit_59);
DEFLIT(lit_98);
DEFLIT(lit_281);
DEFLIT(lit_184);
DEFLIT(lit_66);
DEFLIT(lit_254);
DEFLIT(lit_150);
DEFLIT(lit_351);
DEFLIT(lit_203);
DEFLIT(lit_33);
DEFLIT(lit_227);
DEFLIT(lit_70);
DEFLIT(lit_40);
DEFLIT(lit_303);
DEFLIT(lit_205);
DEFLIT(lit_371);
DEFLIT(lit_97);
DEFLIT(lit_216);
DEFLIT(lit_280);
DEFLIT(lit_271);
DEFLIT(lit_310);
DEFLIT(lit_65);
DEFLIT(lit_231);
DEFLIT(lit_104);
DEFLIT(lit_324);
DEFLIT(lit_72);
DEFLIT(lit_183);
DEFLIT(lit_253);
DEFLIT(lit_337);
DEFLIT(lit_39);
DEFLIT(lit_240);
DEFLIT(lit_161);
DEFLIT(lit_226);
DEFLIT(lit_370);
DEFLIT(lit_46);
DEFLIT(lit_78);
DEFLIT(lit_103);
DEFLIT(lit_317);
DEFLIT(lit_215);
DEFLIT(lit_243);
DEFLIT(lit_131);
DEFLIT(lit_71);
DEFLIT(lit_232);
DEFLIT(lit_270);
DEFLIT(lit_190);
DEFLIT(lit_182);
DEFLIT(lit_336);
DEFLIT(lit_14);
DEFLIT(lit_45);
DEFLIT(lit_77);
DEFLIT(lit_323);
DEFLIT(lit_304);
DEFLIT(lit_239);
DEFLIT(lit_160);
DEFLIT(lit_110);
DEFLIT(lit_164);
DEFLIT(lit_52);
DEFLIT(lit_292);
DEFLIT(lit_335);
DEFLIT(lit_260);
DEFLIT(lit_309);
DEFLIT(lit_119);
DEFLIT(lit_289);
DEFLIT(lit_214);
DEFLIT(lit_144);
DEFLIT(lit_201);
DEFLIT(lit_115);
DEFLIT(lit_181);
DEFLIT(lit_233);
DEFLIT(lit_298);
DEFLIT(lit_359);
DEFLIT(lit_149);
DEFLIT(lit_349);
DEFLIT(lit_279);
DEFLIT(lit_84);
DEFLIT(lit_330);
DEFLIT(lit_109);
DEFLIT(lit_51);
DEFLIT(lit_269);
DEFLIT(lit_26);
DEFLIT(lit_177);
DEFLIT(lit_238);
DEFLIT(lit_159);
DEFLIT(lit_224);
DEFLIT(lit_288);
DEFLIT(lit_322);
DEFLIT(lit_259);
DEFLIT(lit_13);
DEFLIT(lit_250);
DEFLIT(lit_1);
DEFLIT(lit_212);
DEFLIT(lit_130);
DEFLIT(lit_83);
DEFLIT(lit_122);
DEFLIT(lit_308);
DEFLIT(lit_358);
DEFLIT(lit_348);
DEFLIT(lit_90);
DEFLIT(lit_200);
DEFLIT(lit_347);
DEFLIT(lit_321);
DEFLIT(lit_297);
DEFLIT(lit_58);
DEFLIT(lit_116);
DEFLIT(lit_189);
DEFLIT(lit_25);
DEFLIT(lit_237);
DEFLIT(lit_249);
DEFLIT(lit_171);
DEFLIT(lit_223);
DEFLIT(lit_162);
DEFLIT(lit_268);
DEFLIT(lit_258);
DEFLIT(lit_32);
DEFLIT(lit_12);
DEFLIT(lit_211);
DEFLIT(lit_89);
DEFLIT(lit_296);
DEFLIT(lit_357);
DEFLIT(lit_96);
DEFLIT(lit_121);
DEFLIT(lit_64);
DEFLIT(lit_248);
DEFLIT(lit_148);
DEFLIT(lit_278);
DEFLIT(lit_334);
DEFLIT(lit_188);
DEFLIT(lit_31);
DEFLIT(lit_236);
DEFLIT(lit_137);
DEFLIT(lit_38);
DEFLIT(lit_257);
DEFLIT(lit_307);
DEFLIT(lit_11);
DEFLIT(lit_95);
DEFLIT(lit_210);
DEFLIT(lit_143);
DEFLIT(lit_198);
DEFLIT(lit_129);
DEFLIT(lit_180);
DEFLIT(lit_63);
DEFLIT(lit_102);
DEFLIT(lit_24);
DEFLIT(lit_222);
DEFLIT(lit_287);
DEFLIT(lit_346);
DEFLIT(lit_163);
DEFLIT(lit_277);
DEFLIT(lit_333);
DEFLIT(lit_37);
DEFLIT(lit_158);
DEFLIT(lit_44);
DEFLIT(lit_76);
DEFLIT(lit_135);
DEFLIT(lit_10);
DEFLIT(lit_101);
DEFLIT(lit_209);
DEFLIT(lit_267);
DEFLIT(lit_69);
DEFLIT(lit_179);
DEFLIT(lit_157);
DEFLIT(lit_197);
DEFLIT(lit_23);
DEFLIT(lit_235);
DEFLIT(lit_221);
DEFLIT(lit_43);
DEFLIT(lit_75);
DEFLIT(lit_170);
DEFLIT(lit_108);
DEFLIT(lit_50);
DEFLIT(lit_332);
DEFLIT(lit_187);
DEFLIT(lit_9);
DEFLIT(lit_293);
DEFLIT(lit_128);
DEFLIT(lit_136);
DEFLIT(lit_247);
DEFLIT(lit_256);
DEFLIT(lit_365);
DEFLIT(lit_156);
DEFLIT(lit_331);
DEFLIT(lit_82);
DEFLIT(lit_22);
DEFLIT(lit_340);
DEFLIT(lit_220);
DEFLIT(lit_368);
DEFLIT(lit_49);
DEFLIT(lit_196);
DEFLIT(lit_320);
DEFLIT(lit_114);
DEFLIT(lit_169);
DEFLIT(lit_208);
DEFLIT(lit_276);
DEFLIT(lit_266);
DEFLIT(lit_305);
DEFLIT(lit_8);
DEFLIT(lit_294);
DEFLIT(lit_57);
DEFLIT(lit_142);
DEFLIT(lit_81);
DEFLIT(lit_246);
DEFLIT(lit_364);
DEFLIT(lit_155);
DEFLIT(lit_147);
DEFLIT(lit_88);
DEFLIT(lit_319);
DEFLIT(lit_20);
DEFLIT(lit_113);
DEFLIT(lit_56);
DEFLIT(lit_195);
DEFLIT(lit_0);
DEFLIT(lit_120);
DEFLIT(lit_168);
DEFLIT(lit_345);
DEFLIT(lit_229);
DEFLIT(lit_87);
DEFLIT(lit_127);
DEFLIT(lit_265);
DEFLIT(lit_318);
DEFLIT(lit_245);
DEFLIT(lit_350);
DEFLIT(lit_154);
DEFLIT(lit_355);
DEFLIT(lit_251);
DEFLIT(lit_94);
DEFLIT(lit_19);
DEFLIT(lit_62);
DEFLIT(lit_207);
DEFLIT(lit_344);
DEFLIT(lit_299);
DEFLIT(lit_186);
DEFLIT(lit_7);
DEFLIT(lit_213);
DEFLIT(lit_93);
DEFLIT(lit_367);
DEFLIT(lit_2);
DEFLIT(lit_244);
DEFLIT(lit_29);
DEFLIT(lit_363);
DEFLIT(lit_100);
DEFLIT(lit_354);
DEFLIT(lit_141);
DEFLIT(lit_329);
DEFLIT(lit_68);
DEFLIT(lit_343);
DEFLIT(lit_275);
DEFLIT(lit_35);
DEFLIT(lit_153);
DEFLIT(lit_3);
DEFLIT(lit_42);
DEFLIT(lit_264);
DEFLIT(lit_28);
DEFLIT(lit_6);
DEFLIT(lit_99);
DEFLIT(lit_286);
DEFLIT(lit_194);
DEFLIT(lit_126);
DEFLIT(lit_134);
DEFLIT(lit_202);
DEFLIT(lit_67);
DEFLIT(lit_176);
DEFLIT(lit_362);
DEFLIT(lit_167);
DEFLIT(lit_206);
DEFLIT(lit_230);
DEFLIT(lit_74);
DEFLIT(lit_373);
DEFLIT(lit_315);
DEFLIT(lit_274);
DEFLIT(lit_41);
DEFLIT(lit_106);
DEFLIT(lit_146);
DEFLIT(lit_48);
DEFLIT(lit_185);
DEFLIT(lit_5);
DEFLIT(lit_369);
DEFLIT(lit_285);
DEFLIT(lit_73);
DEFLIT(lit_263);
DEFLIT(lit_314);
DEFLIT(lit_18);
DEFLIT(lit_175);
DEFLIT(lit_152);
DEFLIT(lit_140);
DEFLIT(lit_80);
DEFLIT(lit_105);
DEFLIT(lit_47);
DEFLIT(lit_241);
DEFLIT(lit_112);
DEFLIT(lit_291);
DEFLIT(lit_353);
DEFLIT(lit_284);
DEFLIT(lit_193);
DEFLIT(lit_117);
DEFLIT(lit_313);
DEFLIT(lit_366);
DEFLIT(lit_27);
DEFLIT(lit_219);
DEFLIT(lit_356);
DEFLIT(lit_341);
DEFLIT(lit_125);
DEFLIT(lit_133);
DEFLIT(lit_17);
DEFLIT(lit_174);
DEFLIT(lit_361);
DEFLIT(lit_34);
DEFLIT(lit_86);
DEFLIT(lit_327);
DEFLIT(lit_138);
DEFLIT(lit_295);
DEFLIT(lit_145);
DEFLIT(lit_306);
DEFLIT(lit_316);
DEFLIT(lit_111);
DEFLIT(lit_328);
DEFLIT(lit_151);
DEFLIT(lit_54);

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
extern P YPcompute_parents (P);
extern P YPdefine_parent (P,P);
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
FUNFOR(Yclass_ordered_parents);
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
FUNFOR(Yprop_value_setter);
LOCFOR(fun_loop_479);
FUNFOR(YPisa);
LOCFOR(fun_loop_481);
FUNFOR(Yfind_getter);
LOCFOR(fun_loop_483);
FUNFOR(Yfind_setter);
LOCFOR(fun_485);
FUNFOR(Yforward_class);
LOCFOR(fun_visit_487);
FUNFOR(YOdo_children);
LOCFOR(fun_489);
FUNFOR(YPprop);
extern P YPupdate_instance_for_changed_class (P);
FUNFOR(Yupdate_instance_for_changed_class);
FUNFOR(Yfab_gen);
LOCFOR(fun_494);
FUNFOR(Ygen_from_met);
FUNFOR(YPdefine_method);
FUNFOR(Yunexec);
LOCFOR(fun_loop_498);
LOCFOR(fun_new_499);
LOCFOR(fun_500);
LOCFOR(fun_subtypeQ_501);
LOCFOR(fun_502);
LOCFOR(fun_subtypeQ_503);
LOCFOR(fun_504);
LOCFOR(fun_subtypeQ_505);
LOCFOR(fun_subtypeQ_506);
LOCFOR(fun_subtypeQ_507);
LOCFOR(fun_subtypeQ_508);
LOCFOR(fun_subtypeQ_509);
LOCFOR(fun_subtypeQ_510);
LOCFOR(fun_subtypeQ_511);
LOCFOR(fun_subtypeQ_512);
LOCFOR(fun_subtypeQ_513);
LOCFOR(fun_subtypeQ_514);
LOCFOR(fun_isaQ_515);
LOCFOR(fun_isaQ_516);
LOCFOR(fun_isaQ_517);
LOCFOR(fun_518);
LOCFOR(fun_isaQ_519);
LOCFOR(fun_order_specs_520);
LOCFOR(fun_order_specs_521);
LOCFOR(fun_order_specs_522);
LOCFOR(fun_order_specs_523);
LOCFOR(fun_order_specs_524);
LOCFOR(fun_order_specs_525);
LOCFOR(fun_order_specs_526);
LOCFOR(fun_may_isaQ_527);
LOCFOR(fun_may_isaQ_528);
LOCFOR(fun_may_isaQ_529);
LOCFOR(fun_loop_530);
LOCFOR(fun_may_isaQ_531);
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

P YPcompute_parents(P parent_) {
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
    T5 = (P)YPcompute_parents(T6);
    T4 = (P)YPpair(parent_,T5);
    T0 = T4;
  }
  return T0;
}

P YPdefine_parent(P class_,P direct_parent_) {
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  (P)YPclass_prop_len_setter(YPint((P)0),class_);
  (P)YPclass_forward_setter(YPfalse,class_);
  T0 = (P)YPpair(direct_parent_,VARREF(Ynil));
  (P)YPclass_parents_setter(T0,class_);
  T2 = (P)YPcompute_parents(direct_parent_);
  T1 = (P)YPpair(class_,T2);
  (P)YPclass_ancestors_setter(T1,class_);
  T5 = (P)YPclass_descendents(direct_parent_);
  T4 = (P)YPpair(class_,T5);
  T3 = (P)YPclass_descendents_setter(T4,direct_parent_);
  return T3;
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
  P tmpF55;
  P tmpF54;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
      T11 = CALL1(1,VARREF(YOfun_specs),x_);
      T12 = CALL1(1,VARREF(YOfun_specs),y_);
      T10 = CALL3(1,VARREF(YOall2Q),VARREF(YOsubtypeQ),T11,T12);
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
  T1 = CALLN(1,VARREF(Ynew),5,VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_213),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_371;
  T4 = FUNFAB(fun_372,2,return_,FREEREF(1));
  T5 = FUNFAB(fun_373,2,FREEREF(0),FREEREF(1));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YLreplace_generic_restartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lop_375) {
  P specs_;
  P spec_classF58;
  P tmpF57;
  P specF56;
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
    specF56 = T4;
    T8 = CALL1(1,VARREF(YOsingleton_specQ),specF56);
    tmpF57 = T8;
    if (tmpF57 != YPfalse) {
      T9 = tmpF57;
    } else {
      T10 = (P)YOEE(specF56,VARREF(YLanyG));
      T9 = T10;
    }
    T7 = T9;
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T12 = (P)YPobject_class(specF56);
      spec_classF58 = T12;
      T14 = (P)YPclass_gens(spec_classF58);
      T13 = (P)YOadd_new(T14,FREEREF(0));
      (P)YPclass_gens_setter(T13,spec_classF58);
      T16 = (P)YPclass_mets(spec_classF58);
      T15 = (P)YOadd_new(T16,FREEREF(1));
      (P)YPclass_mets_setter(T15,spec_classF58);
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
  P tmpF61;
  P now_sameQF60;
  P gmF59;
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
    gmF59 = T7;
    T9 = CALL2(1,VARREF(Yfun_same_metQ),gmF59,FREEREF(0));
    now_sameQF60 = T9;
    if (now_sameQF60 != YPfalse) {
      T12 = FREEREF(0);
    } else {
      T12 = gmF59;
    }
    T11 = (P)YOadd(mets_,T12);
    tmpF61 = now_sameQF60;
    if (tmpF61 != YPfalse) {
      T14 = tmpF61;
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
  P colF63;
  P lopF62;
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
    lopF62 = T7;
    FUNINIT(lopF62, 3,g_,m_,lopF62);
    T9 = CALL1(1,VARREF(YOfun_specs),m_);
    T8 = CALL1(0,lopF62,T9);
    T10 = FUNSHELL(1,fun_col_376,3);
    colF63 = T10;
    FUNINIT(colF63, 3,m_,g_,colF63);
    T12 = CALL1(1,VARREF(YOfun_mets),g_);
    T11 = CALL3(1,colF63,Ynil,YPfalse,T12);
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
  P tmpF65;
  P tmpF64;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)YOEE(c2_,VARREF(YLanyG));
  tmpF64 = T1;
  if (tmpF64 != YPfalse) {
    T2 = tmpF64;
  } else {
    T4 = (P)YOEE(c1_,c2_);
    tmpF65 = T4;
    if (tmpF65 != YPfalse) {
      T5 = tmpF65;
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
  P cF66;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(ps_, 0);
loop:
  T1 = (P)YOemptyQ(ps_);
  if (T1 != YPfalse) {
    T2 = CALLN(1,VARREF(Yerror),5,LITREF(lit_229),LITREF(lit_230),FREEREF(0),FREEREF(1),FREEREF(2));
    T0 = T2;
  } else {
    T4 = (P)YOhead(ps_);
    cF66 = T4;
    T6 = (P)YOEE(cF66,FREEREF(1));
    if (T6 != YPfalse) {
      T5 = YPtrue;
    } else {
      T8 = (P)YOEE(cF66,FREEREF(2));
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
  P findF67;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  ARG(wrt_, 2);
loop:
  T1 = FUNSHELL(1,fun_find_383,4);
  findF67 = T1;
  FUNINIT(findF67, 4,wrt_,c1_,c2_,findF67);
  T3 = (P)YPclass_ancestors(wrt_);
  T2 = CALL1(0,findF67,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOtype_equalQ) {
  P t1_,t2_;
  P tmpF71;
  P tmpF70;
  P tmpF69;
  P tmpF68;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YOEE(t1_,t2_);
  tmpF68 = T1;
  if (tmpF68 != YPfalse) {
    T2 = tmpF68;
  } else {
    T6 = (P)YPclass_of(t1_);
    T5 = (P)YOEE(T6,VARREF(YLclassG));
    T4 = CALL1(1,VARREF(Ynot),T5);
    tmpF69 = T4;
    if (tmpF69 != YPfalse) {
      T11 = (P)YPclass_of(t2_);
      T10 = (P)YOEE(T11,VARREF(YLclassG));
      T9 = CALL1(1,VARREF(Ynot),T10);
      tmpF70 = T9;
      if (tmpF70 != YPfalse) {
        T14 = CALL2(1,VARREF(YOsubtypeQ),t1_,t2_);
        tmpF71 = T14;
        if (tmpF71 != YPfalse) {
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
  P tmpF72;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T3 = (P)YPclass_of(t2_);
  T2 = (P)YOEE(T3,VARREF(YLclassG));
  tmpF72 = T2;
  if (tmpF72 != YPfalse) {
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
    T2 = CALL2(1,VARREF(YOtup),LITREF(lit_238),t1_);
    T0 = T2;
  } else {
    T5 = (P)YPclass_of(arg_);
    T4 = CALL3(1,VARREF(YOclassL),t1_,t2_,T5);
    if (T4 != YPfalse) {
      T6 = CALL2(1,VARREF(YOtup),LITREF(lit_239),t1_);
      T3 = T6;
    } else {
      T7 = CALL2(1,VARREF(YOtup),LITREF(lit_240),t2_);
      T3 = T7;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOorder_specs) {
  P t1_,t2_,arg_;
  P tmpF73;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T3 = (P)YPclass_of(t1_);
  T2 = (P)YOEE(T3,VARREF(YLclassG));
  tmpF73 = T2;
  if (tmpF73 != YPfalse) {
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
  P tmpF80;
  P tmpF79;
  P idxF78;
  P cmpF77;
  P cmpAtypF76;
  P m2specF75;
  P m1specF74;
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
    m1specF74 = T3;
    T5 = CALL2(1,VARREF(Yfun_spec),FREEREF(2),idx_);
    m2specF75 = T5;
    T8 = (P)YOoelt(FREEREF(3),idx_);
    T7 = CALL3(1,VARREF(YOorder_specs),m1specF74,m2specF75,T8);
    check_type(T7,VARREF(YLtupG));
    cmpAtypF76 = T7;
    T10 = CALL2(1,VARREF(YOtelt),cmpAtypF76,YPint((P)0));
    check_type(T10,VARREF(YLsymG));
    cmpF77 = T10;
    T12 = (P)YOA(idx_,YPint((P)1));
    check_type(T12,VARREF(YLintG));
    idxF78 = T12;
    T14 = (P)YOEE(cmpF77,LITREF(lit_238));
    if (T14 != YPfalse) {
      a1 = state_;
      a2 = idxF78;
      state_ = a1;
      idx_ = a2;
      goto loop;
      T13 = T15;
    } else {
      T19 = (P)YOEE(cmpF77,LITREF(lit_247));
      T18 = CALL1(1,VARREF(Ynot),T19);
      tmpF79 = T18;
      if (tmpF79 != YPfalse) {
        T22 = (P)YOEE(state_,LITREF(lit_238));
        tmpF80 = T22;
        if (tmpF80 != YPfalse) {
          T23 = tmpF80;
        } else {
          T24 = (P)YOEE(cmpF77,state_);
          T23 = T24;
        }
        T21 = T23;
        T20 = T21;
      } else {
        T20 = YPfalse;
      }
      T17 = T20;
      if (T17 != YPfalse) {
        a1 = cmpF77;
        a2 = idxF78;
        state_ = a1;
        idx_ = a2;
        goto loop;
        T16 = T25;
      } else {
        T16 = LITREF(lit_247);
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
  P loopF82;
  P arityF81;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(args_, 2);
loop:
  T1 = CALL1(1,VARREF(YOfun_arity),m1_);
  check_type(T1,VARREF(YLintG));
  arityF81 = T1;
  T3 = FUNSHELL(1,fun_loop_390,5);
  loopF82 = T3;
  FUNINIT(loopF82, 5,arityF81,m1_,m2_,args_,loopF82);
  T4 = CALL2(1,loopF82,LITREF(lit_238),YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_392) {
  P l_;
  P t1F84;
  P tmpF83;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = (P)YOEE(l_,Ynil);
  tmpF83 = T1;
  if (tmpF83 != YPfalse) {
    T2 = tmpF83;
  } else {
    T4 = (P)YOtail(l_);
    t1F84 = T4;
    T5 = (P)YOtail(FREEREF(0));
    (P)YOtail_setter(T5,l_);
    (P)YOtail_setter(l_,FREEREF(0));
    a1 = t1F84;
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
  P loopF85;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(headed_list_, 0);
loop:
  T0 = FUNSHELL(1,fun_loop_392,2);
  loopF85 = T0;
  FUNINIT(loopF85, 2,FREEREF(0),loopF85);
  T2 = (P)YOtail(headed_list_);
  T1 = CALL1(1,loopF85,T2);
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
    T3 = (P)YOEE(T4,LITREF(lit_239));
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
  P loopF86;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_394,4);
  loopF86 = T1;
  FUNINIT(loopF86, 4,FREEREF(0),FREEREF(1),FREEREF(2),loopF86);
  T2 = CALL1(1,loopF86,l_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_subsequent_ambiguities_396) {
  P oprev_;
  P tmpF87;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(oprev_, 0);
loop:
  T4 = (P)YOtail(oprev_);
  T3 = CALL1(1,FREEREF(0),T4);
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF87 = T2;
  if (tmpF87 != YPfalse) {
    T5 = tmpF87;
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
  P indicF88;
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
    indicF88 = T4;
    T7 = (P)YOEE(indicF88,LITREF(lit_239));
    if (T7 != YPfalse) {
      T8 = CALL1(1,FREEREF(0),oprev_);
      T6 = T8;
    } else {
      T10 = (P)YOEE(indicF88,LITREF(lit_240));
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
  P insertF93;
  P check_subsequent_ambiguitiesF92;
  P precedes_allQF91;
  P make_ambiguousF90;
  P metF89;
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
    metF89 = T4;
    T6 = FUNSHELL(1,fun_make_ambiguous_393,2);
    make_ambiguousF90 = T6;
    T7 = FUNSHELL(1,fun_precedes_allQ_395,3);
    precedes_allQF91 = T7;
    T8 = FUNSHELL(1,fun_check_subsequent_ambiguities_396,4);
    check_subsequent_ambiguitiesF92 = T8;
    T9 = FUNSHELL(1,fun_insert_397,6);
    insertF93 = T9;
    FUNINIT(make_ambiguousF90, 2,FREEREF(0),metF89);
    FUNINIT(precedes_allQF91, 3,FREEREF(1),metF89,FREEREF(2));
    FUNINIT(check_subsequent_ambiguitiesF92, 4,precedes_allQF91,FREEREF(0),make_ambiguousF90,metF89);
    FUNINIT(insertF93, 6,check_subsequent_ambiguitiesF92,FREEREF(1),metF89,FREEREF(2),insertF93,make_ambiguousF90);
    T10 = (P)YOtail(FREEREF(3));
    CALL2(1,insertF93,FREEREF(3),T10);
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
  P loopF96;
  P aheadF95;
  P oheadF94;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(mets_, 0);
  ARG(args_, 1);
  ARG(order_mets_, 2);
loop:
  T1 = (P)YOpair(YPfalse,Ynil);
  check_type(T1,VARREF(YLlstG));
  oheadF94 = T1;
  T3 = (P)YOpair(YPfalse,Ynil);
  check_type(T3,VARREF(YLlstG));
  aheadF95 = T3;
  T4 = FUNSHELL(1,fun_loop_398,5);
  loopF96 = T4;
  FUNINIT(loopF96, 5,aheadF95,order_mets_,args_,oheadF94,loopF96);
  T5 = CALL1(1,loopF96,mets_);
  T7 = (P)YOtail(oheadF94);
  T8 = (P)YOtail(aheadF95);
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
  P loopF98;
  P nF97;
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
    nF97 = T6;
    T8 = FUNSHELL(1,fun_loop_401,4);
    loopF98 = T8;
    FUNINIT(loopF98, 4,nF97,args_,met_,loopF98);
    T9 = CALL1(1,loopF98,YPint((P)0));
    T7 = T9;
    T5 = T7;
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_403) {
  P ans_,ms_;
  P ansF100;
  P mF99;
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
    mF99 = T3;
    T6 = CALL2(1,VARREF(Ymet_appQ),mF99,FREEREF(0));
    if (T6 != YPfalse) {
      T7 = (P)YOpair(mF99,ans_);
      T5 = T7;
    } else {
      T5 = ans_;
    }
    ansF100 = T5;
    T9 = (P)YOtail(ms_);
    a1 = ansF100;
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
  P considered_metsF102;
  P colF101;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(gf_, 0);
  ARG(args_, 1);
loop:
  T2 = FUNSHELL(1,fun_col_403,2);
  colF101 = T2;
  FUNINIT(colF101, 2,args_,colF101);
  T4 = CALL1(1,VARREF(YOfun_mets),gf_);
  T3 = CALL2(0,colF101,Ynil,T4);
  T1 = T3;
  considered_metsF102 = T1;
  T5 = CALL3(1,VARREF(Yord_app_mets_1),considered_metsF102,args_,VARREF(Yorder_mets));
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
  P tmpF107;
  P nF106;
  P propQF105;
  P tmpF104;
  P propF103;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  ARG(args_, 2);
loop:
  T1 = (P)YPmet_env(met_);
  propF103 = T1;
  tmpF104 = propF103;
  if (tmpF104 != YPfalse) {
    T6 = (P)YPclass_of(propF103);
    T5 = (P)YOEE(T6,VARREF(YLpropG));
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  propQF105 = T3;
  T8 = (P)YOolen(args_);
  nF106 = T8;
  tmpF107 = propQF105;
  if (tmpF107 != YPfalse) {
    T12 = (P)YOE(nF106,YPint((P)1));
    if (T12 != YPfalse) {
      T14 = (P)YOoelt(args_,YPint((P)0));
      T13 = CALL2(1,VARREF(Yprop_offset),T14,gen_);
      T11 = T13;
    } else {
      T16 = (P)YOoelt(args_,YPint((P)1));
      T17 = (P)YPprop_getter(propF103);
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
  P tmpF110;
  P tmpF109;
  P tmpF108;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YOsingleton_specQ),x_);
  tmpF108 = T1;
  if (tmpF108 != YPfalse) {
    T2 = tmpF108;
  } else {
    T4 = CALL1(1,VARREF(YOsubclass_specQ),x_);
    tmpF109 = T4;
    if (tmpF109 != YPfalse) {
      T5 = tmpF109;
    } else {
      T7 = CALL1(1,VARREF(YOunion_specQ),x_);
      tmpF110 = T7;
      if (tmpF110 != YPfalse) {
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
  P vF114;
  P kF113;
  P valF112;
  P tmpF111;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(assocs_, 0);
loop:
  T1 = (P)YOemptyQ(assocs_);
  if (T1 != YPfalse) {
    T4 = (P)YOEE(FREEREF(0),VARREF(YOgen_cache_classes));
    tmpF111 = T4;
    if (tmpF111 != YPfalse) {
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
      valF112 = T12;
      T16 = BOXVAL(FREEREF(1));
      T18 = CALL1(1,FREEREF(0),FREEREF(4));
      T17 = (P)YOpair(valF112,T18);
      T15 = (P)YOpair(T16,T17);
      T14 = CALL2(1,FREEREF(10),T15,FREEREF(4));
      T11 = T14;
      T2 = T11;
    }
    T0 = T2;
  } else {
    T20 = (P)YOhead(assocs_);
    kF113 = T20;
    T23 = BOXVAL(FREEREF(1));
    T22 = (P)YOEE(kF113,T23);
    if (T22 != YPfalse) {
      T26 = (P)YOtail(assocs_);
      T25 = (P)YOhead(T26);
      vF114 = T25;
      T28 = (P)YOA(FREEREF(8),YPint((P)1));
      T27 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,FREEREF(5),vF114,FREEREF(6),FREEREF(7),T28,FREEREF(9));
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
  P loopF117;
  P cacheF116;
  P tmpF115;
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
  tmpF115 = cache_;
  if (tmpF115 != YPfalse) {
    T3 = tmpF115;
  } else {
    T4 = (P)YPgen_cache(YPtrue,i_,VARREF(Ynil),VARREF(Ynil));
    T3 = T4;
  }
  T2 = T3;
  cacheF116 = T2;
  T5 = FUNSHELL(1,fun_loop_426,11);
  loopF117 = T5;
  FUNINIT(loopF117, 11,all_assocs_,key_,instance_,loopF117,cacheF116,gen_,mets_,sorted_mets_,i_,args_,all_assocs_setter_);
  T7 = CALL1(1,all_assocs_,cacheF116);
  T6 = CALL1(0,loopF117,T7);
  T1 = cacheF116;
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
  P copyF120;
  P rF119;
  P vF118;
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
  vF118 = T1;
  T8 = (P)YPvlen(vF118);
  T7 = (P)YPprop_dat_at(vF118,T8);
  T6 = (P)YPlb(T7);
  T10 = (P)YPvlen(vF118);
  T9 = (P)YPib(T10);
  T5 = (P)YPopts_vec(T6,T9,vF118);
  rF119 = T5;
  T12 = FUNSHELL(1,fun_copy_428,5);
  copyF120 = T12;
  FUNINIT(copyF120, 5,args_,rF119,i_,arg_,copyF120);
  T13 = CALL1(0,copyF120,YPint((P)0));
  T11 = T13;
  T4 = T11;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_430) {
  P singletons_;
  P app_metsF125;
  P smetsF124;
  P argsF123;
  P argF122;
  P singF121;
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
    singF121 = T3;
    T5 = (P)YPtype_object(singF121);
    argF122 = T5;
    T7 = CALL3(1,VARREF(YOspecd_args),FREEREF(1),FREEREF(2),argF122);
    argsF123 = T7;
    T9 = CALL2(1,VARREF(Ychoose_methods),FREEREF(3),argsF123);
    smetsF124 = T9;
    T11 = CALL3(1,VARREF(YOprune_mets_by_type_at),FREEREF(4),singF121,FREEREF(2));
    app_metsF125 = T11;
    CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,argF122,argF122,VARREF(YOgen_cache_singletons),VARREF(YOgen_cache_singletons_setter),FREEREF(3),FREEREF(0),FREEREF(4),smetsF124,FREEREF(2),argsF123);
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
  P loopF130;
  P cacheF129;
  P singletonsF128;
  P subclassesF127;
  P tmpF126;
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
  tmpF126 = cache_;
  if (tmpF126 != YPfalse) {
    T1 = tmpF126;
  } else {
    T3 = CALL2(1,VARREF(YOmets_subclasses_at),mets_,i_);
    subclassesF127 = T3;
    T5 = (P)YOemptyQ(subclassesF127);
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(YOmets_singletons_at),mets_,i_);
      singletonsF128 = T7;
      T9 = (P)YOemptyQ(singletonsF128);
      if (T9 != YPfalse) {
        T8 = YPfalse;
      } else {
        T11 = (P)YPgen_cache(YPtrue,i_,VARREF(Ynil),VARREF(Ynil));
        cacheF129 = T11;
        T13 = FUNSHELL(1,fun_loop_430,6);
        loopF130 = T13;
        FUNINIT(loopF130, 6,cacheF129,args_,i_,gen_,mets_,loopF130);
        T14 = CALL1(0,loopF130,singletonsF128);
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
  P app_metsF140;
  P classF139;
  P metsF138;
  P tmpF137;
  P tmpF136;
  P tmpF135;
  P singQF134;
  P cacheF133;
  P argF132;
  P tmpF131;
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
    tmpF131 = T4;
    if (tmpF131 != YPfalse) {
      T6 = tmpF131;
    } else {
      T6 = sorted_mets_;
    }
    T3 = T6;
    T0 = T3;
  } else {
    T8 = (P)YOoelt(args_,i_);
    argF132 = T8;
    T10 = CALLN(1,VARREF(Yensure_singleton_cache),6,gen_,ocache_,mets_,sorted_mets_,i_,args_);
    cacheF133 = T10;
    T14 = (P)YOhead(sorted_mets_);
    T13 = CALL2(1,VARREF(Yfun_spec),T14,i_);
    T12 = CALL1(1,VARREF(YOsingleton_specQ),T13);
    singQF134 = T12;
    tmpF135 = singQF134;
    if (tmpF135 != YPfalse) {
      T19 = (P)YOEE(ocache_,cacheF133);
      T18 = T19;
    } else {
      T18 = YPfalse;
    }
    T17 = T18;
    tmpF136 = T17;
    if (tmpF136 != YPfalse) {
      T20 = tmpF136;
    } else {
      tmpF137 = cacheF133;
      if (tmpF137 != YPfalse) {
        T24 = (P)YPgen_cache_missableQ(cacheF133);
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
      T27 = (P)YPsingleton(argF132);
      T26 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,T27,i_);
      metsF138 = T26;
      T28 = CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,argF132,argF132,VARREF(YOgen_cache_singletons),VARREF(YOgen_cache_singletons_setter),gen_,cacheF133,metsF138,sorted_mets_,i_,args_);
      T25 = T28;
      T15 = T25;
    } else {
      if (singQF134 != YPfalse) {
        T29 = cacheF133;
      } else {
        T31 = (P)YPclass_of(argF132);
        classF139 = T31;
        T33 = CALL3(1,VARREF(YOprune_mets_by_type_at),mets_,classF139,i_);
        app_metsF140 = T33;
        T34 = CALLN(1,VARREF(Ygen_lookup_miss_1_using),10,classF139,argF132,VARREF(YOgen_cache_classes),VARREF(YOgen_cache_classes_setter),gen_,cacheF133,app_metsF140,sorted_mets_,i_,args_);
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
  P metsF141;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Ychoose_methods),gen_,args_);
  metsF141 = T1;
  T3 = (P)YPfun_cache(gen_);
  T4 = (P)YPgen_mets(gen_);
  T2 = CALLN(1,VARREF(Ygen_lookup_miss_1),6,gen_,T3,T4,metsF141,YPint((P)0),args_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

INLINE P Ygen_lookup(P gen_,P args_) {
  P cF143;
  P tmpF142;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPfun_cache(gen_);
  tmpF142 = T2;
  if (tmpF142 != YPfalse) {
    T3 = tmpF142;
  } else {
    T5 = CALL2(1,VARREF(Ygen_lookup_miss),gen_,args_);
    T4 = (P)YPfun_cache_setter(T5,gen_);
    T3 = T4;
  }
  T1 = T3;
  cF143 = T1;
  T6 = (P)Ygen_lookup_1(gen_,cF143,args_);
  T0 = T6;
  return T0;
}

INLINE P Yprop_value_at(P object_,P offset_) {
  P propsF145;
  P valF144;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPiu(offset_);
  T1 = (P)YPprop_elt(object_,T2);
  valF144 = T1;
  T4 = (P)YOEE(valF144,VARREF(Ynul_prop));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yobject_props),object_);
    propsF145 = T6;
    T10 = CALL2(1,VARREF(YOelt),propsF145,offset_);
    T9 = (P)YPprop_init(T10);
    T8 = CALL1(1,T9,object_);
    T11 = (P)YPiu(offset_);
    T7 = (P)YPprop_elt_setter(T8,object_,T11);
    T5 = T7;
    T3 = T5;
  } else {
    T3 = valF144;
  }
  T0 = T3;
  return T0;
}

P Yprop_bound_atQ(P object_,P offset_) {
  P propsF147;
  P valF146;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPiu(offset_);
  T1 = (P)YPprop_elt(object_,T2);
  valF146 = T1;
  T4 = (P)YOEE(valF146,VARREF(Ynul_prop));
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yobject_props),object_);
    propsF147 = T6;
    T10 = CALL2(1,VARREF(YOelt),propsF147,offset_);
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
  P nxt_assocsF152;
  P old_assocsF151;
  P vF150;
  P tail_assocsF149;
  P kF148;
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
    kF148 = T6;
    T8 = (P)YPtail(assocs_);
    tail_assocsF149 = T8;
    T10 = (P)YOEE(kF148,key_);
    if (T10 != YPfalse) {
      T12 = (P)YPhead(tail_assocsF149);
      vF150 = T12;
      T15 = (P)YPiu(cache_offset_);
      T14 = (P)YPprop_elt(cache_,T15);
      old_assocsF151 = T14;
      T16 = (P)YOEE(old_assocsF151,assocs_);
      if (T16 != YPfalse) {
      } else {
        T18 = (P)YPtail(tail_assocsF149);
        nxt_assocsF152 = T18;
        T19 = (P)YPiu(cache_offset_);
        (P)YPprop_elt_setter(assocs_,cache_,T19);
        (P)YPtail_setter(old_assocsF151,tail_assocsF149);
        T21 = (P)YPtail(prev_assocs_);
        T20 = (P)YPtail_setter(nxt_assocsF152,T21);
        T17 = T20;
      }
      T22 = (P)Ygen_lookup_1(gen_,vF150,args_);
      T13 = T22;
      T11 = T13;
      T9 = T11;
    } else {
      T24 = (P)YPtail(tail_assocsF149);
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
  P assocsF156;
  P valF155;
  P assocsF154;
  P argF153;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3;
loop:
  T2 = (P)YPclass_of(cache_);
  T1 = (P)YOEE(T2,VARREF(YLgen_cacheG));
  if (T1 != YPfalse) {
    T5 = (P)YPgen_cache_arg_pos(cache_);
    T4 = (P)YOoelt(args_,T5);
    argF153 = T4;
    T8 = (P)YPgen_cache_singletons(cache_);
    assocsF154 = T8;
    T10 = (P)YPgen_cache_missableQ(cache_);
    T9 = (P)Ygen_lookup_1_using(argF153,assocsF154,assocsF154,T10,VARREF(YDgen_cache_singletons_offset),gen_,cache_,args_);
    T7 = T9;
    valF155 = T7;
    T12 = (P)YOEE(valF155,VARREF(YDmissed_dispatch));
    if (T12 != YPfalse) {
      T14 = (P)YPgen_cache_classes(cache_);
      assocsF156 = T14;
      T16 = (P)YPclass_of(argF153);
      T15 = (P)Ygen_lookup_1_using(T16,assocsF156,assocsF156,YPfalse,VARREF(YDgen_cache_classes_offset),gen_,cache_,args_);
      T13 = T15;
      T11 = T13;
    } else {
      T11 = valF155;
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
  P ambiguous_metsF159;
  P sorted_metsF158;
  P ord_amb_metsF157;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Yord_app_mets),gen_,args_);
  ord_amb_metsF157 = T1;
  T3 = CALL2(1,VARREF(YOtelt),ord_amb_metsF157,YPint((P)0));
  sorted_metsF158 = T3;
  T5 = CALL2(1,VARREF(YOtelt),ord_amb_metsF157,YPint((P)1));
  ambiguous_metsF159 = T5;
  T7 = (P)YOemptyQ(sorted_metsF158);
  if (T7 != YPfalse) {
    T8 = CALL3(1,VARREF(Yerror),LITREF(lit_294),gen_,args_);
    T6 = T8;
  } else {
    T6 = sorted_metsF158;
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
  P nF161;
  P resultF160;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T2 = (P)YPfun_reg();
  T1 = (P)Ygen_lookup(T2,args_);
  resultF160 = T1;
  T5 = (P)YPclass_of(resultF160);
  T4 = (P)YOEE(T5,VARREF(YLintG));
  if (T4 != YPfalse) {
    T7 = (P)YOolen(args_);
    nF161 = T7;
    T10 = (P)YOE(nF161,YPint((P)1));
    if (T10 != YPfalse) {
      T12 = (P)YOoelt(args_,YPint((P)0));
      T11 = (P)Yprop_value_at(T12,resultF160);
      T9 = T11;
    } else {
      T14 = (P)YOoelt(args_,YPint((P)0));
      T15 = (P)YOoelt(args_,YPint((P)1));
      T13 = (P)Yprop_value_at_setter(T14,T15,resultF160);
      T9 = T13;
    }
    resF162 = T9;
    (P)YPunlink_stack();
    T8 = resF162;
    T6 = T8;
    T3 = T6;
  } else {
    (P)YPunlink_stack();
    T17 = (P)YPhead(resultF160);
    T18 = (P)YPtail(resultF160);
    T16 = (P)YPraw_call(T17,T18);
    T3 = T16;
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
      T14 = CALL1(1,VARREF(Yerror),LITREF(lit_321));
      T8 = T14;
    }
    T6 = T8;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yclass_ordered_parents) {
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
  T8 = CALL1(1,VARREF(Yclass_ordered_parents),xF175);
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
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_336));
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
    T4 = CALL3(1,VARREF(Yerror),LITREF(lit_338),getter_,object_);
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
    T4 = CALL3(1,VARREF(Yerror),LITREF(lit_340),getter_,object_);
    T2 = T4;
  } else {
    T5 = (P)Yprop_bound_atQ(object_,offsetF179);
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yprop_value_setter) {
  P z_,object_,getter_;
  P offsetF180;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(object_, 1);
  ARG(getter_, 2);
loop:
  CALL1(1,VARREF(Yensure_fresh_object),object_);
  T1 = CALL2(1,VARREF(Yprop_offset),object_,getter_);
  offsetF180 = T1;
  T3 = (P)YOE(offsetF180,VARREF(YDgetter_not_found));
  if (T3 != YPfalse) {
    T4 = CALL3(1,VARREF(Yerror),LITREF(lit_342),getter_,object_);
    T2 = T4;
  } else {
    T5 = (P)Yprop_value_at_setter(z_,object_,offsetF180);
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_479) {
  P getters_,vals_;
  P tmpF181;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(getters_, 0);
  ARG(vals_, 1);
loop:
  T3 = (P)YOEE(getters_,Ynil);
  tmpF181 = T3;
  if (tmpF181 != YPfalse) {
    T4 = tmpF181;
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
  P loopF183;
  P objectF182;
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
  objectF182 = T1;
  T4 = FUNSHELL(1,fun_loop_479,2);
  loopF183 = T4;
  FUNINIT(loopF183, 2,objectF182,loopF183);
  T5 = CALL2(0,loopF183,getters_,vals_);
  T0 = objectF182;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_481) {
  P mets_;
  P metF184;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mets_, 0);
loop:
  T1 = (P)YOemptyQ(mets_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Yerror),LITREF(lit_347));
    T0 = T2;
  } else {
    T4 = (P)YOhead(mets_);
    metF184 = T4;
    T7 = CALL2(1,VARREF(Yfun_spec),metF184,YPint((P)0));
    T6 = (P)YOEE(T7,FREEREF(0));
    if (T6 != YPfalse) {
      T5 = metF184;
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
  P loopF185;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_481,2);
  loopF185 = T1;
  FUNINIT(loopF185, 2,owner_,loopF185);
  T3 = CALL1(1,VARREF(YOfun_mets),getter_);
  T2 = CALL1(0,loopF185,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_483) {
  P mets_;
  P tmpF187;
  P metF186;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
    metF186 = T4;
    T8 = CALL2(1,VARREF(Yfun_spec),metF186,YPint((P)1));
    T7 = (P)YOEE(T8,FREEREF(0));
    tmpF187 = T7;
    if (tmpF187 != YPfalse) {
      T11 = CALL2(1,VARREF(Yfun_spec),metF186,YPint((P)0));
      T10 = CALL2(1,VARREF(YOtype_equalQ),T11,FREEREF(1));
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T6 = T9;
    if (T6 != YPfalse) {
      T5 = metF186;
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
  P loopF188;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(owner_, 0);
  ARG(type_, 1);
  ARG(zetter_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_483,3);
  loopF188 = T1;
  FUNINIT(loopF188, 3,owner_,type_,loopF188);
  T3 = CALL1(1,VARREF(YOfun_mets),zetter_);
  T2 = CALL1(0,loopF188,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_485) {
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
  P new_classF189;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(old_class_, 0);
loop:
  T1 = (P)YPclone(old_class_);
  new_classF189 = T1;
  T2 = fun_485;
  T3 = (P)YPclass_gens(old_class_);
  CALL2(1,VARREF(YOdo),T2,T3);
  T4 = (P)YPclass_forward_setter(new_classF189,old_class_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_visit_487) {
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
  P visitF191;
  P visitedF190;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  visitedF190 = Ynil;
  visitedF190 = BOXFAB(visitedF190);
  T3 = FUNSHELL(0,fun_visit_487,3);
  visitF191 = T3;
  FUNINIT(visitF191, 3,visitedF190,f_,visitF191);
  T4 = CALL1(0,visitF191,x_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_489) {
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
  P setter_metF195;
  P getter_metF194;
  P propF193;
  P classF192;
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
  classF192 = owner_;
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
  propF193 = T2;
  T14 = CALL2(1,VARREF(Yfind_getter),owner_,getter_);
  getter_metF194 = T14;
  T16 = CALL3(1,VARREF(Yfind_setter),owner_,type_,setter_);
  setter_metF195 = T16;
  (P)YPmet_env_setter(propF193,getter_metF194);
  (P)YPmet_env_setter(propF193,setter_metF195);
  T18 = (P)YPclass_direct_props(classF192);
  T19 = CALL1(1,VARREF(YOlst),propF193);
  T17 = CALL2(1,VARREF(YOcat2),T18,T19);
  (P)YPclass_direct_props_setter(T17,classF192);
  T20 = CALL1(1,VARREF(Yclass_ordered_props),classF192);
  (P)YPclass_props_setter(T20,classF192);
  T21 = fun_489;
  T22 = (P)YPclass_props(classF192);
  CALL2(1,VARREF(YOdo),T21,T22);
  T15 = propF193;
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

FUNCODEDEF(fun_494) {
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
  P specsF196;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = fun_494;
  T3 = CALL1(1,VARREF(YOfun_specs),x_);
  T1 = CALL2(1,VARREF(YOmap),T2,T3);
  specsF196 = T1;
  T5 = CALL1(1,VARREF(Yfun_name),x_);
  T6 = CALL1(1,VARREF(YOfun_naryQ),x_);
  T4 = CALLN(1,VARREF(Yfab_gen),5,T5,Ynil,specsF196,T6,Ynil);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPdefine_method) {
  P gen_,met_;
  P tmpF197;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
loop:
  tmpF197 = gen_;
  if (tmpF197 != YPfalse) {
    T2 = tmpF197;
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

FUNCODEDEF(fun_loop_498) {
  P i_;
  P valF199;
  P getterF198;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = (P)YOL(i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = (P)YOoelt(FREEREF(1),i_);
    getterF198 = T3;
    T6 = (P)YOA(i_,YPint((P)1));
    T5 = (P)YOoelt(FREEREF(1),T6);
    valF199 = T5;
    CALL3(1,VARREF(Yprop_value_setter),valF199,FREEREF(2),getterF198);
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

FUNCODEDEF(fun_new_499) {
  P parent_,inits_;
  P loopF202;
  P numF201;
  P objectF200;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(parent_, 0);
  NARGS(inits_, 1);
loop:
  T3 = (P)YPclass_prop_len(parent_);
  T2 = (P)YPiu(T3);
  T1 = (P)YPobject_of(parent_,T2);
  objectF200 = T1;
  T5 = (P)YOolen(inits_);
  numF201 = T5;
  T6 = FUNSHELL(1,fun_loop_498,4);
  loopF202 = T6;
  FUNINIT(loopF202, 4,numF201,inits_,objectF200,loopF202);
  T7 = CALL1(0,loopF202,YPint((P)0));
  T4 = objectF200;
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_500) {
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

FUNCODEDEF(fun_subtypeQ_501) {
  P t1_,t2_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = FUNFAB(fun_500,1,t2_);
  T2 = (P)YPtype_elts(t1_);
  T0 = CALL2(1,VARREF(YOallQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_502) {
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

FUNCODEDEF(fun_subtypeQ_503) {
  P t1_,t2_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = FUNFAB(fun_502,1,t1_);
  T2 = (P)YPtype_elts(t2_);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
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

FUNCODEDEF(fun_subtypeQ_506) {
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

FUNCODEDEF(fun_subtypeQ_507) {
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

FUNCODEDEF(fun_subtypeQ_508) {
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

FUNCODEDEF(fun_subtypeQ_509) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_510) {
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

FUNCODEDEF(fun_subtypeQ_511) {
  P t1_,t2_;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_subtypeQ_512) {
  P t1_,t2_;
  P tmpF203;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YOEE(t1_,VARREF(YLclassG));
  tmpF203 = T1;
  if (tmpF203 != YPfalse) {
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

FUNCODEDEF(fun_subtypeQ_513) {
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

FUNCODEDEF(fun_subtypeQ_514) {
  P t1_,t2_;
  P tmpF204;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T2 = (P)YPtype_object(t1_);
  T1 = CALL2(1,VARREF(YOisaQ),T2,VARREF(YLclassG));
  tmpF204 = T1;
  if (tmpF204 != YPfalse) {
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

FUNCODEDEF(fun_isaQ_515) {
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

FUNCODEDEF(fun_isaQ_516) {
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

FUNCODEDEF(fun_isaQ_517) {
  P o_,t_;
  P tmpF205;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YOisaQ),o_,VARREF(YLclassG));
  tmpF205 = T1;
  if (tmpF205 != YPfalse) {
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

FUNCODEDEF(fun_518) {
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

FUNCODEDEF(fun_isaQ_519) {
  P o_,u_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(u_, 1);
loop:
  T1 = FUNFAB(fun_518,1,o_);
  T2 = (P)YPtype_elts(u_);
  T0 = CALL2(1,VARREF(YOanyQ),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_520) {
  P t1_,t2_,arg_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_238),t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_521) {
  P t1_,t2_,arg_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T0 = CALL2(1,VARREF(YOtup),LITREF(lit_239),t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_522) {
  P t1_,t2_,arg_;
  P c2F207;
  P c1F206;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T1 = (P)YPtype_class(t1_);
  c1F206 = T1;
  T3 = (P)YPtype_class(t2_);
  c2F207 = T3;
  T5 = (P)YOEE(c1F206,c2F207);
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(YOtup),LITREF(lit_238),t1_);
    T4 = T6;
  } else {
    T8 = CALL3(1,VARREF(YOclassL),c1F206,c2F207,arg_);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YOtup),LITREF(lit_239),t1_);
      T7 = T9;
    } else {
      if (YPtrue != YPfalse) {
        T11 = CALL2(1,VARREF(YOtup),LITREF(lit_240),t2_);
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

FUNCODEDEF(fun_order_specs_523) {
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
      T3 = LITREF(lit_239);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_247);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t1_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_524) {
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
      T3 = LITREF(lit_240);
    }
    T1 = T3;
  } else {
    T1 = LITREF(lit_247);
  }
  T0 = CALL2(1,VARREF(YOtup),T1,t2_);
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
  T0 = CALL3(1,VARREF(YOorder_specs_class),t1_,t2_,arg_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_order_specs_526) {
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
      T3 = LITREF(lit_238);
    } else {
      T3 = LITREF(lit_239);
    }
    T2 = CALL2(1,VARREF(YOtup),T3,t1_);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YOsubtypeQ),t2_,t1_);
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YOtup),LITREF(lit_240),t2_);
      T5 = T7;
    } else {
      T8 = CALL2(1,VARREF(YOtup),LITREF(lit_247),VARREF(YLanyG));
      T5 = T8;
    }
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_527) {
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

FUNCODEDEF(fun_may_isaQ_528) {
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

FUNCODEDEF(fun_may_isaQ_529) {
  P c_,t_;
  P tmpF209;
  P classQF208;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL2(1,VARREF(YOsubtypeQ),c_,VARREF(YLclassG));
  classQF208 = T1;
  tmpF209 = classQF208;
  if (tmpF209 != YPfalse) {
    T6 = (P)YPtype_class(c_);
    T5 = (P)YOEE(T6,VARREF(YLanyG));
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  T2 = CALL2(1,VARREF(YOtup),classQF208,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_530) {
  P someQ_,allQ_,elts_;
  P tmpF214;
  P tmpF213;
  P elt_allQF212;
  P elt_someQF211;
  P elt_some_allQF210;
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
    elt_some_allQF210 = T4;
    T7 = CALL2(1,VARREF(YOtelt),elt_some_allQF210,YPint((P)0));
    elt_someQF211 = T7;
    T9 = CALL2(1,VARREF(YOtelt),elt_some_allQF210,YPint((P)1));
    elt_allQF212 = T9;
    tmpF213 = elt_someQF211;
    if (tmpF213 != YPfalse) {
      T12 = tmpF213;
    } else {
      T12 = someQ_;
    }
    T11 = T12;
    tmpF214 = elt_allQF212;
    if (tmpF214 != YPfalse) {
      T14 = tmpF214;
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

FUNCODEDEF(fun_may_isaQ_531) {
  P c_,t_;
  P loopF215;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_530,2);
  loopF215 = T1;
  FUNINIT(loopF215, 2,c_,loopF215);
  T3 = (P)YPtype_elts(t_);
  T2 = CALL3(0,loopF215,YPfalse,YPfalse,T3);
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
  VARSET(YLseqG,T11);
  T12 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlstG,T12);
  T13 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLflatG,T13);
  T14 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLvecG,T14);
  T15 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLstrG,T15);
  T16 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsymG,T16);
  T17 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLtypeG,T17);
  T18 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLclassG,T18);
  T21 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  T20 = VARSET(YLsingletonG,T21);
  T19 = T20;
  return T19;
}

P Y___main_3___() {
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsubclassG,T0);
  T1 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLunionG,T1);
  T2 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLpropG,T2);
  T3 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLgen_cacheG,T3);
  T4 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsigG,T4);
  T5 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfunG,T5);
  T6 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLmetG,T6);
  T7 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLgenG,T7);
  T8 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLoptsG,T8);
  T9 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLopts_vecG,T9);
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLanyG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLlogG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLchrG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLnumG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLintG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLfloG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLlocG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLcolG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLseqG));
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
  T10 = (P)YPobject_of(VARREF(YLanyG),(P)0);
  VARSET(Ynul,T10);
  T11 = (P)YPobject_of(VARREF(YLanyG),(P)0);
  VARSET(Ynul_prop,T11);
  T12 = (P)YPobject_of(VARREF(YLlogG),(P)0);
  VARSET(YPtrue,T12);
  T13 = (P)YPobject_of(VARREF(YLlogG),(P)0);
  VARSET(YPfalse,T13);
  T14 = (P)YPobject_of(VARREF(YLlstG),(P)0);
  VARSET(Ynil,T14);
  VARSET(Ynil,VARREF(Yone_nil));
  (P)YPhead_setter(VARREF(Ynil),VARREF(Ynil));
  (P)YPtail_setter(VARREF(Ynil),VARREF(Ynil));
  T15 = YPfalse;
  return T15;
}

P Y___main_4___() {
  P T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6;
  P T5,T4,T3,T2,T1,T0;
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
  (P)YPdefine_parent(VARREF(YLanyG),VARREF(YLanyG));
  (P)YPdefine_parent(VARREF(YLlogG),VARREF(YLanyG));
  (P)YPdefine_parent(VARREF(YLchrG),VARREF(YLanyG));
  T21 = (P)YPdefine_parent(VARREF(YLnumG),VARREF(YLanyG));
  T20 = T21;
  return T20;
}

P Y___main_5___() {
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
loop:
  (P)YPdefine_parent(VARREF(YLintG),VARREF(YLnumG));
  (P)YPdefine_parent(VARREF(YLfloG),VARREF(YLnumG));
  (P)YPdefine_parent(VARREF(YLlocG),VARREF(YLanyG));
  (P)YPdefine_parent(VARREF(YLcolG),VARREF(YLanyG));
  (P)YPdefine_parent(VARREF(YLseqG),VARREF(YLcolG));
  (P)YPdefine_parent(VARREF(YLlstG),VARREF(YLseqG));
  (P)YPdefine_parent(VARREF(YLflatG),VARREF(YLseqG));
  (P)YPdefine_parent(VARREF(YLvecG),VARREF(YLflatG));
  (P)YPdefine_parent(VARREF(YLstrG),VARREF(YLflatG));
  (P)YPdefine_parent(VARREF(YLsymG),VARREF(YLanyG));
  (P)YPdefine_parent(VARREF(YLtypeG),VARREF(YLanyG));
  (P)YPdefine_parent(VARREF(YLclassG),VARREF(YLtypeG));
  (P)YPdefine_parent(VARREF(YLsingletonG),VARREF(YLtypeG));
  (P)YPdefine_parent(VARREF(YLsubclassG),VARREF(YLtypeG));
  (P)YPdefine_parent(VARREF(YLunionG),VARREF(YLtypeG));
  (P)YPdefine_parent(VARREF(YLpropG),VARREF(YLanyG));
  (P)YPdefine_parent(VARREF(YLgen_cacheG),VARREF(YLanyG));
  (P)YPdefine_parent(VARREF(YLsigG),VARREF(YLanyG));
  (P)YPdefine_parent(VARREF(YLfunG),VARREF(YLanyG));
  (P)YPdefine_parent(VARREF(YLmetG),VARREF(YLfunG));
  (P)YPdefine_parent(VARREF(YLgenG),VARREF(YLfunG));
  (P)YPdefine_parent(VARREF(YLoptsG),VARREF(YLflatG));
  (P)YPdefine_parent(VARREF(YLopts_vecG),VARREF(YLoptsG));
  T0 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  (P)YPclass_ancestors_setter(T0,VARREF(YLanyG));
  VARSET(YPsymbols,VARREF(Ynil));
  lit_0 = YPsb((P)"Warning: symbols were created in the boot image before the symbol-creation was setup. (Probably from a df or rep)\n");
  T2 = (P)YPeqQ(VARREF(YPTused_symbols_too_earlyT),YPtrue);
  T1 = (P)YPbb(T2);
  if (T1 != YPfalse) {
    T4 = (P)YPcurrent_out_port();
    T5 = (P)YPsu(LITREF(lit_0));
    T3 = (P)YPputs(T4,T5);
  } else {
  }
  lit_1 = YPPsym((P)"name");
  lit_2 = YPPsym((P)"lookup");
  lit_3 = YPPsym((P)"s");
  T7 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lookup_97 = YPmet(FUNCODEREF(fun_lookup_97),LITREF(lit_2),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T8 = fun_98;
  VARSET(Yfab_sym,T8);
  VARSET(YPsymbols_readyQ,YPtrue);
  lit_4 = YPPsym((P)"fab-sym");
  T10 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lookup_99 = YPmet(FUNCODEREF(fun_lookup_99),LITREF(lit_2),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfab_sym = YPmet(FUNCODEREF(Yfab_sym),LITREF(lit_4),T9,ENVNUL,PNUL,YPfalse);
  T11 = Yfab_sym;
  VARSET(Yfab_sym,T11);
  T12 = (P)YPib(VARREF(YPmet_prop_len));
  (P)YPclass_prop_len_setter(T12,VARREF(YLmetG));
  lit_5 = YPPsym((P)"loop");
  lit_6 = YPPsym((P)"l");
  lit_7 = YPPsym((P)"r");
  T13 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_101 = YPmet(FUNCODEREF(fun_loop_101),LITREF(lit_5),T13,ENVNUL,PNUL,YPfalse);
  lit_8 = YPPsym((P)"colx");
  lit_9 = YPPsym((P)"lx");
  lit_10 = YPPsym((P)"x");
  lit_11 = YPPsym((P)"coly");
  lit_12 = YPPsym((P)"lxy");
  lit_13 = YPPsym((P)"y");
  T15 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_coly_103 = YPmet(FUNCODEREF(fun_coly_103),LITREF(lit_11),T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(YPPlist(2,LITREF(lit_9),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_colx_104 = YPmet(FUNCODEREF(fun_colx_104),LITREF(lit_8),T14,ENVNUL,PNUL,YPfalse);
  T16 = YPfalse;
  return T16;
}

P Y___main_6___() {
  P propF355;
  P setterF354;
  P accessorF353;
  P getterF352;
  P accessorF351;
  P propF350;
  P setterF349;
  P accessorF348;
  P getterF347;
  P accessorF346;
  P propF345;
  P setterF344;
  P accessorF343;
  P getterF342;
  P accessorF341;
  P propF340;
  P setterF339;
  P accessorF338;
  P getterF337;
  P accessorF336;
  P propF335;
  P setterF334;
  P accessorF333;
  P getterF332;
  P accessorF331;
  P propF330;
  P setterF329;
  P accessorF328;
  P getterF327;
  P accessorF326;
  P propF325;
  P setterF324;
  P accessorF323;
  P getterF322;
  P accessorF321;
  P propF320;
  P setterF319;
  P accessorF318;
  P getterF317;
  P accessorF316;
  P propF315;
  P setterF314;
  P accessorF313;
  P getterF312;
  P accessorF311;
  P propF310;
  P setterF309;
  P accessorF308;
  P getterF307;
  P accessorF306;
  P propF305;
  P setterF304;
  P accessorF303;
  P getterF302;
  P accessorF301;
  P propF300;
  P setterF299;
  P accessorF298;
  P getterF297;
  P accessorF296;
  P propF295;
  P setterF294;
  P accessorF293;
  P getterF292;
  P accessorF291;
  P propF290;
  P setterF289;
  P accessorF288;
  P getterF287;
  P accessorF286;
  P propF285;
  P setterF284;
  P accessorF283;
  P getterF282;
  P accessorF281;
  P propF280;
  P setterF279;
  P accessorF278;
  P getterF277;
  P accessorF276;
  P propF275;
  P setterF274;
  P accessorF273;
  P getterF272;
  P accessorF271;
  P propF270;
  P setterF269;
  P accessorF268;
  P getterF267;
  P accessorF266;
  P propF265;
  P setterF264;
  P accessorF263;
  P getterF262;
  P accessorF261;
  P propF260;
  P setterF259;
  P accessorF258;
  P getterF257;
  P accessorF256;
  P propF255;
  P setterF254;
  P accessorF253;
  P getterF252;
  P accessorF251;
  P propF250;
  P setterF249;
  P accessorF248;
  P getterF247;
  P accessorF246;
  P propF245;
  P setterF244;
  P accessorF243;
  P getterF242;
  P accessorF241;
  P propF240;
  P setterF239;
  P accessorF238;
  P getterF237;
  P accessorF236;
  P propF235;
  P setterF234;
  P accessorF233;
  P getterF232;
  P accessorF231;
  P propF230;
  P setterF229;
  P accessorF228;
  P getterF227;
  P accessorF226;
  P propF225;
  P setterF224;
  P accessorF223;
  P getterF222;
  P accessorF221;
  P propF220;
  P setterF219;
  P accessorF218;
  P getterF217;
  P accessorF216;
  P T546,T545,T544,T543,T542,T541,T540,T539,T538,T537,T536,T535,T534,T533,T532,T531;
  P T530,T529,T528,T527,T526,T525,T524,T523,T522,T521,T520,T519,T518,T517,T516,T515;
  P T514,T513,T512,T511,T510,T509,T508,T507,T506,T505,T504,T503,T502,T501,T500,T499;
  P T498,T497,T496,T495,T494,T493,T492,T491,T490,T489,T488,T487,T486,T485,T484,T483;
  P T482,T481,T480,T479,T478,T477,T476,T475,T474,T473,T472,T471,T470,T469,T468,T467;
  P T466,T465,T464,T463,T462,T461,T460,T459,T458,T457,T456,T455,T454,T453,T452,T451;
  P T450,T449,T448,T447,T446,T445,T444,T443,T442,T441,T440,T439,T438,T437,T436,T435;
  P T434,T433,T432,T431,T430,T429,T428,T427,T426,T425,T424,T423,T422,T421,T420,T419;
  P T418,T417,T416,T415,T414,T413,T412,T411,T410,T409,T408,T407,T406,T405,T404,T403;
  P T402,T401,T400,T399,T398,T397,T396,T395,T394,T393,T392,T391,T390,T389,T388,T387;
  P T386,T385,T384,T383,T382,T381,T380,T379,T378,T377,T376,T375,T374,T373,T372,T371;
  P T370,T369,T368,T367,T366,T365,T364,T363,T362,T361,T360,T359,T358,T357,T356,T355;
  P T354,T353,T352,T351,T350,T349,T348,T347,T346,T345,T344,T343,T342,T341,T340,T339;
  P T338,T337,T336,T335,T334,T333,T332,T331,T330,T329,T328,T327,T326,T325,T324,T323;
  P T322,T321,T320,T319,T318,T317,T316,T315,T314,T313,T312,T311,T310,T309,T308,T307;
  P T306,T305,T304,T303,T302,T301,T300,T299,T298,T297,T296,T295,T294,T293,T292,T291;
  P T290,T289,T288,T287,T286,T285,T284,T283,T282,T281,T280,T279,T278,T277,T276,T275;
  P T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260,T259;
  P T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243;
  P T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227;
  P T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211;
  P T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195;
  P T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179;
  P T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163;
  P T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147;
  P T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131;
  P T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115;
  P T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99;
  P T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83;
  P T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
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
  accessorF216 = T16;
  CALL2(1,VARREF(YPadd_met),VARREF(Yhead),accessorF216);
  (P)YPmet_name_setter(VARREF(Yhead),accessorF216);
  T15 = accessorF216;
  getterF217 = T15;
  T21 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T20 = (P)YPpair(VARREF(YLanyG),T21);
  T19 = (P)YPsig(Ynil,T20,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T18 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_29),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yhead_setter,T18);
  T23 = fun_164;
  accessorF218 = T23;
  CALL2(1,VARREF(YPadd_met),VARREF(Yhead_setter),accessorF218);
  (P)YPmet_name_setter(VARREF(Yhead_setter),accessorF218);
  T22 = accessorF218;
  setterF219 = T22;
  T26 = fun_165;
  T25 = (P)YPPprop(VARREF(YLlstG),VARREF(Yhead),VARREF(Yhead_setter),VARREF(YLanyG),T26);
  propF220 = T25;
  (P)YPmet_env_setter(propF220,getterF217);
  (P)YPmet_env_setter(propF220,setterF219);
  T27 = CALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF220);
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
  accessorF221 = T35;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytail),accessorF221);
  (P)YPmet_name_setter(VARREF(Ytail),accessorF221);
  T34 = accessorF221;
  getterF222 = T34;
  T40 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T39 = (P)YPpair(VARREF(YLanyG),T40);
  T38 = (P)YPsig(Ynil,T39,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T37 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_32),T38,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytail_setter,T37);
  T42 = fun_167;
  accessorF223 = T42;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytail_setter),accessorF223);
  (P)YPmet_name_setter(VARREF(Ytail_setter),accessorF223);
  T41 = accessorF223;
  setterF224 = T41;
  T45 = fun_168;
  T44 = (P)YPPprop(VARREF(YLlstG),VARREF(Ytail),VARREF(Ytail_setter),VARREF(YLlstG),T45);
  propF225 = T44;
  (P)YPmet_env_setter(propF225,getterF222);
  (P)YPmet_env_setter(propF225,setterF224);
  T46 = CALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF225);
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
  accessorF226 = T54;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysym_name),accessorF226);
  (P)YPmet_name_setter(VARREF(Ysym_name),accessorF226);
  T53 = accessorF226;
  getterF227 = T53;
  T59 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T58 = (P)YPpair(VARREF(YLanyG),T59);
  T57 = (P)YPsig(Ynil,T58,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T56 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_34),T57,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysym_name_setter,T56);
  T61 = fun_170;
  accessorF228 = T61;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysym_name_setter),accessorF228);
  (P)YPmet_name_setter(VARREF(Ysym_name_setter),accessorF228);
  T60 = accessorF228;
  setterF229 = T60;
  T64 = fun_171;
  T63 = (P)YPPprop(VARREF(YLsymG),VARREF(Ysym_name),VARREF(Ysym_name_setter),VARREF(YLstrG),T64);
  propF230 = T63;
  (P)YPmet_env_setter(propF230,getterF227);
  (P)YPmet_env_setter(propF230,setterF229);
  T65 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsymG),propF230);
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
  accessorF231 = T73;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len),accessorF231);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len),accessorF231);
  T72 = accessorF231;
  getterF232 = T72;
  T78 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T77 = (P)YPpair(VARREF(YLanyG),T78);
  T76 = (P)YPsig(Ynil,T77,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T75 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_36),T76,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_prop_len_setter,T75);
  T80 = fun_173;
  accessorF233 = T80;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len_setter),accessorF233);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len_setter),accessorF233);
  T79 = accessorF233;
  setterF234 = T79;
  T83 = fun_174;
  T82 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_prop_len),VARREF(Yclass_prop_len_setter),VARREF(YLintG),T83);
  propF235 = T82;
  (P)YPmet_env_setter(propF235,getterF232);
  (P)YPmet_env_setter(propF235,setterF234);
  T84 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF235);
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
  accessorF236 = T92;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_name),accessorF236);
  (P)YPmet_name_setter(VARREF(Yclass_name),accessorF236);
  T91 = accessorF236;
  getterF237 = T91;
  T97 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T96 = (P)YPpair(VARREF(YLanyG),T97);
  T95 = (P)YPsig(Ynil,T96,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T94 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_38),T95,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_name_setter,T94);
  T99 = fun_176;
  accessorF238 = T99;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_name_setter),accessorF238);
  (P)YPmet_name_setter(VARREF(Yclass_name_setter),accessorF238);
  T98 = accessorF238;
  setterF239 = T98;
  T102 = fun_177;
  T101 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_name),VARREF(Yclass_name_setter),VARREF(YLsymG),T102);
  propF240 = T101;
  (P)YPmet_env_setter(propF240,getterF237);
  (P)YPmet_env_setter(propF240,setterF239);
  T103 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF240);
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
  accessorF241 = T111;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents),accessorF241);
  (P)YPmet_name_setter(VARREF(Yclass_parents),accessorF241);
  T110 = accessorF241;
  getterF242 = T110;
  T116 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T115 = (P)YPpair(VARREF(YLanyG),T116);
  T114 = (P)YPsig(Ynil,T115,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T113 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_40),T114,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_parents_setter,T113);
  T118 = fun_179;
  accessorF243 = T118;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents_setter),accessorF243);
  (P)YPmet_name_setter(VARREF(Yclass_parents_setter),accessorF243);
  T117 = accessorF243;
  setterF244 = T117;
  T121 = fun_180;
  T120 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_parents),VARREF(Yclass_parents_setter),VARREF(YLlstG),T121);
  propF245 = T120;
  (P)YPmet_env_setter(propF245,getterF242);
  (P)YPmet_env_setter(propF245,setterF244);
  T122 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF245);
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
  accessorF246 = T130;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props),accessorF246);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props),accessorF246);
  T129 = accessorF246;
  getterF247 = T129;
  T135 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T134 = (P)YPpair(VARREF(YLanyG),T135);
  T133 = (P)YPsig(Ynil,T134,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T132 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_42),T133,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_direct_props_setter,T132);
  T137 = fun_182;
  accessorF248 = T137;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props_setter),accessorF248);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props_setter),accessorF248);
  T136 = accessorF248;
  setterF249 = T136;
  T140 = fun_183;
  T139 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_direct_props),VARREF(Yclass_direct_props_setter),VARREF(YLlstG),T140);
  propF250 = T139;
  (P)YPmet_env_setter(propF250,getterF247);
  (P)YPmet_env_setter(propF250,setterF249);
  T141 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF250);
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
  accessorF251 = T149;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors),accessorF251);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors),accessorF251);
  T148 = accessorF251;
  getterF252 = T148;
  T154 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T153 = (P)YPpair(VARREF(YLanyG),T154);
  T152 = (P)YPsig(Ynil,T153,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T151 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_44),T152,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_ancestors_setter,T151);
  T156 = fun_185;
  accessorF253 = T156;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors_setter),accessorF253);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors_setter),accessorF253);
  T155 = accessorF253;
  setterF254 = T155;
  T159 = fun_186;
  T158 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_ancestors),VARREF(Yclass_ancestors_setter),VARREF(YLlstG),T159);
  propF255 = T158;
  (P)YPmet_env_setter(propF255,getterF252);
  (P)YPmet_env_setter(propF255,setterF254);
  T160 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF255);
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
  accessorF256 = T168;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_props),accessorF256);
  (P)YPmet_name_setter(VARREF(Yclass_props),accessorF256);
  T167 = accessorF256;
  getterF257 = T167;
  T173 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T172 = (P)YPpair(VARREF(YLanyG),T173);
  T171 = (P)YPsig(Ynil,T172,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T170 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_46),T171,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_props_setter,T170);
  T175 = fun_188;
  accessorF258 = T175;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_props_setter),accessorF258);
  (P)YPmet_name_setter(VARREF(Yclass_props_setter),accessorF258);
  T174 = accessorF258;
  setterF259 = T174;
  T178 = fun_189;
  T177 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_props),VARREF(Yclass_props_setter),VARREF(YLlstG),T178);
  propF260 = T177;
  (P)YPmet_env_setter(propF260,getterF257);
  (P)YPmet_env_setter(propF260,setterF259);
  T179 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF260);
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
  accessorF261 = T187;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_descendents),accessorF261);
  (P)YPmet_name_setter(VARREF(Yclass_descendents),accessorF261);
  T186 = accessorF261;
  getterF262 = T186;
  T192 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T191 = (P)YPpair(VARREF(YLanyG),T192);
  T190 = (P)YPsig(Ynil,T191,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T189 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_48),T190,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_descendents_setter,T189);
  T194 = fun_191;
  accessorF263 = T194;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_descendents_setter),accessorF263);
  (P)YPmet_name_setter(VARREF(Yclass_descendents_setter),accessorF263);
  T193 = accessorF263;
  setterF264 = T193;
  T197 = fun_192;
  T196 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_descendents),VARREF(Yclass_descendents_setter),VARREF(YLlstG),T197);
  propF265 = T196;
  (P)YPmet_env_setter(propF265,getterF262);
  (P)YPmet_env_setter(propF265,setterF264);
  T198 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF265);
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
  accessorF266 = T206;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens),accessorF266);
  (P)YPmet_name_setter(VARREF(Yclass_gens),accessorF266);
  T205 = accessorF266;
  getterF267 = T205;
  T211 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T210 = (P)YPpair(VARREF(YLanyG),T211);
  T209 = (P)YPsig(Ynil,T210,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T208 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_50),T209,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_gens_setter,T208);
  T213 = fun_194;
  accessorF268 = T213;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens_setter),accessorF268);
  (P)YPmet_name_setter(VARREF(Yclass_gens_setter),accessorF268);
  T212 = accessorF268;
  setterF269 = T212;
  T216 = fun_195;
  T215 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_gens),VARREF(Yclass_gens_setter),VARREF(YLlstG),T216);
  propF270 = T215;
  (P)YPmet_env_setter(propF270,getterF267);
  (P)YPmet_env_setter(propF270,setterF269);
  T217 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF270);
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
  accessorF271 = T225;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets),accessorF271);
  (P)YPmet_name_setter(VARREF(Yclass_mets),accessorF271);
  T224 = accessorF271;
  getterF272 = T224;
  T230 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T229 = (P)YPpair(VARREF(YLanyG),T230);
  T228 = (P)YPsig(Ynil,T229,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T227 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_52),T228,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_mets_setter,T227);
  T232 = fun_197;
  accessorF273 = T232;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets_setter),accessorF273);
  (P)YPmet_name_setter(VARREF(Yclass_mets_setter),accessorF273);
  T231 = accessorF273;
  setterF274 = T231;
  T235 = fun_198;
  T234 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_mets),VARREF(Yclass_mets_setter),VARREF(YLlstG),T235);
  propF275 = T234;
  (P)YPmet_env_setter(propF275,getterF272);
  (P)YPmet_env_setter(propF275,setterF274);
  T236 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF275);
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
  accessorF276 = T244;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward),accessorF276);
  (P)YPmet_name_setter(VARREF(Yclass_forward),accessorF276);
  T243 = accessorF276;
  getterF277 = T243;
  T249 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T248 = (P)YPpair(VARREF(YLanyG),T249);
  T247 = (P)YPsig(Ynil,T248,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T246 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_54),T247,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_forward_setter,T246);
  T251 = fun_200;
  accessorF278 = T251;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward_setter),accessorF278);
  (P)YPmet_name_setter(VARREF(Yclass_forward_setter),accessorF278);
  T250 = accessorF278;
  setterF279 = T250;
  T254 = fun_201;
  T253 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_forward),VARREF(Yclass_forward_setter),VARREF(YLanyG),T254);
  propF280 = T253;
  (P)YPmet_env_setter(propF280,getterF277);
  (P)YPmet_env_setter(propF280,setterF279);
  T255 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF280);
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
  accessorF281 = T263;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_id),accessorF281);
  (P)YPmet_name_setter(VARREF(Yclass_id),accessorF281);
  T262 = accessorF281;
  getterF282 = T262;
  T268 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T267 = (P)YPpair(VARREF(YLanyG),T268);
  T266 = (P)YPsig(Ynil,T267,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T265 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_56),T266,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_id_setter,T265);
  T270 = fun_203;
  accessorF283 = T270;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_id_setter),accessorF283);
  (P)YPmet_name_setter(VARREF(Yclass_id_setter),accessorF283);
  T269 = accessorF283;
  setterF284 = T269;
  T273 = fun_204;
  T272 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_id),VARREF(Yclass_id_setter),VARREF(YLintG),T273);
  propF285 = T272;
  (P)YPmet_env_setter(propF285,getterF282);
  (P)YPmet_env_setter(propF285,setterF284);
  T274 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF285);
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
  accessorF286 = T282;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_row),accessorF286);
  (P)YPmet_name_setter(VARREF(Yclass_row),accessorF286);
  T281 = accessorF286;
  getterF287 = T281;
  T287 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T286 = (P)YPpair(VARREF(YLanyG),T287);
  T285 = (P)YPsig(Ynil,T286,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T284 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_58),T285,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_row_setter,T284);
  T289 = fun_206;
  accessorF288 = T289;
  CALL2(1,VARREF(YPadd_met),VARREF(Yclass_row_setter),accessorF288);
  (P)YPmet_name_setter(VARREF(Yclass_row_setter),accessorF288);
  T288 = accessorF288;
  setterF289 = T288;
  T292 = fun_207;
  T291 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_row),VARREF(Yclass_row_setter),VARREF(YLvecG),T292);
  propF290 = T291;
  (P)YPmet_env_setter(propF290,getterF287);
  (P)YPmet_env_setter(propF290,setterF289);
  T293 = CALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF290);
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
  accessorF291 = T301;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_object),accessorF291);
  (P)YPmet_name_setter(VARREF(Ytype_object),accessorF291);
  T300 = accessorF291;
  getterF292 = T300;
  T306 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T305 = (P)YPpair(VARREF(YLanyG),T306);
  T304 = (P)YPsig(Ynil,T305,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T303 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_60),T304,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_object_setter,T303);
  T308 = fun_209;
  accessorF293 = T308;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_object_setter),accessorF293);
  (P)YPmet_name_setter(VARREF(Ytype_object_setter),accessorF293);
  T307 = accessorF293;
  setterF294 = T307;
  T311 = fun_210;
  T310 = (P)YPPprop(VARREF(YLsingletonG),VARREF(Ytype_object),VARREF(Ytype_object_setter),VARREF(YLanyG),T311);
  propF295 = T310;
  (P)YPmet_env_setter(propF295,getterF292);
  (P)YPmet_env_setter(propF295,setterF294);
  T312 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsingletonG),propF295);
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
  accessorF296 = T320;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_class),accessorF296);
  (P)YPmet_name_setter(VARREF(Ytype_class),accessorF296);
  T319 = accessorF296;
  getterF297 = T319;
  T325 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T324 = (P)YPpair(VARREF(YLanyG),T325);
  T323 = (P)YPsig(Ynil,T324,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T322 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_62),T323,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_class_setter,T322);
  T327 = fun_212;
  accessorF298 = T327;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_class_setter),accessorF298);
  (P)YPmet_name_setter(VARREF(Ytype_class_setter),accessorF298);
  T326 = accessorF298;
  setterF299 = T326;
  T330 = fun_213;
  T329 = (P)YPPprop(VARREF(YLsubclassG),VARREF(Ytype_class),VARREF(Ytype_class_setter),VARREF(YLclassG),T330);
  propF300 = T329;
  (P)YPmet_env_setter(propF300,getterF297);
  (P)YPmet_env_setter(propF300,setterF299);
  T331 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsubclassG),propF300);
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
  accessorF301 = T339;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_elts),accessorF301);
  (P)YPmet_name_setter(VARREF(Ytype_elts),accessorF301);
  T338 = accessorF301;
  getterF302 = T338;
  T344 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T343 = (P)YPpair(VARREF(YLanyG),T344);
  T342 = (P)YPsig(Ynil,T343,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T341 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_64),T342,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_elts_setter,T341);
  T346 = fun_215;
  accessorF303 = T346;
  CALL2(1,VARREF(YPadd_met),VARREF(Ytype_elts_setter),accessorF303);
  (P)YPmet_name_setter(VARREF(Ytype_elts_setter),accessorF303);
  T345 = accessorF303;
  setterF304 = T345;
  T349 = fun_216;
  T348 = (P)YPPprop(VARREF(YLunionG),VARREF(Ytype_elts),VARREF(Ytype_elts_setter),VARREF(YLlstG),T349);
  propF305 = T348;
  (P)YPmet_env_setter(propF305,getterF302);
  (P)YPmet_env_setter(propF305,setterF304);
  T350 = CALL2(1,VARREF(YPadd_prop),VARREF(YLunionG),propF305);
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
  accessorF306 = T358;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner),accessorF306);
  (P)YPmet_name_setter(VARREF(Yprop_owner),accessorF306);
  T357 = accessorF306;
  getterF307 = T357;
  T363 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T362 = (P)YPpair(VARREF(YLanyG),T363);
  T361 = (P)YPsig(Ynil,T362,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T360 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_66),T361,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_owner_setter,T360);
  T365 = fun_218;
  accessorF308 = T365;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner_setter),accessorF308);
  (P)YPmet_name_setter(VARREF(Yprop_owner_setter),accessorF308);
  T364 = accessorF308;
  setterF309 = T364;
  T368 = fun_219;
  T367 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_owner),VARREF(Yprop_owner_setter),VARREF(YLanyG),T368);
  propF310 = T367;
  (P)YPmet_env_setter(propF310,getterF307);
  (P)YPmet_env_setter(propF310,setterF309);
  T369 = CALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF310);
  T366 = T369;
  T359 = T366;
  lit_67 = YPPsym((P)"prop-getter");
  lit_68 = YPPsym((P)"prop-getter-setter");
  T372 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T372,ENVNUL,PNUL,YPfalse);
  T371 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T371,ENVNUL,PNUL,YPfalse);
  T370 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T370,ENVNUL,PNUL,YPfalse);
  T375 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T374 = (P)YPsig(Ynil,T375,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T373 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_67),T374,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_getter,T373);
  T377 = fun_220;
  accessorF311 = T377;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter),accessorF311);
  (P)YPmet_name_setter(VARREF(Yprop_getter),accessorF311);
  T376 = accessorF311;
  getterF312 = T376;
  T382 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T381 = (P)YPpair(VARREF(YLanyG),T382);
  T380 = (P)YPsig(Ynil,T381,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T379 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_68),T380,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_getter_setter,T379);
  T384 = fun_221;
  accessorF313 = T384;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter_setter),accessorF313);
  (P)YPmet_name_setter(VARREF(Yprop_getter_setter),accessorF313);
  T383 = accessorF313;
  setterF314 = T383;
  T387 = fun_222;
  T386 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_getter),VARREF(Yprop_getter_setter),VARREF(YLfunG),T387);
  propF315 = T386;
  (P)YPmet_env_setter(propF315,getterF312);
  (P)YPmet_env_setter(propF315,setterF314);
  T388 = CALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF315);
  T385 = T388;
  T378 = T385;
  lit_69 = YPPsym((P)"prop-setter");
  lit_70 = YPPsym((P)"prop-setter-setter");
  T391 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_223 = YPmet(FUNCODEREF(fun_223),YPfalse,T391,ENVNUL,PNUL,YPfalse);
  T390 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_224 = YPmet(FUNCODEREF(fun_224),YPfalse,T390,ENVNUL,PNUL,YPfalse);
  T389 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T389,ENVNUL,PNUL,YPfalse);
  T394 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T393 = (P)YPsig(Ynil,T394,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T392 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_69),T393,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_setter,T392);
  T396 = fun_223;
  accessorF316 = T396;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter),accessorF316);
  (P)YPmet_name_setter(VARREF(Yprop_setter),accessorF316);
  T395 = accessorF316;
  getterF317 = T395;
  T401 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T400 = (P)YPpair(VARREF(YLanyG),T401);
  T399 = (P)YPsig(Ynil,T400,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T398 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_70),T399,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_setter_setter,T398);
  T403 = fun_224;
  accessorF318 = T403;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter_setter),accessorF318);
  (P)YPmet_name_setter(VARREF(Yprop_setter_setter),accessorF318);
  T402 = accessorF318;
  setterF319 = T402;
  T406 = fun_225;
  T405 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_setter),VARREF(Yprop_setter_setter),VARREF(YLfunG),T406);
  propF320 = T405;
  (P)YPmet_env_setter(propF320,getterF317);
  (P)YPmet_env_setter(propF320,setterF319);
  T407 = CALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF320);
  T404 = T407;
  T397 = T404;
  lit_71 = YPPsym((P)"prop-type");
  lit_72 = YPPsym((P)"prop-type-setter");
  T410 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_226 = YPmet(FUNCODEREF(fun_226),YPfalse,T410,ENVNUL,PNUL,YPfalse);
  T409 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLtypeG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_227 = YPmet(FUNCODEREF(fun_227),YPfalse,T409,ENVNUL,PNUL,YPfalse);
  T408 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_228 = YPmet(FUNCODEREF(fun_228),YPfalse,T408,ENVNUL,PNUL,YPfalse);
  T413 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T412 = (P)YPsig(Ynil,T413,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T411 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_71),T412,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_type,T411);
  T415 = fun_226;
  accessorF321 = T415;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_type),accessorF321);
  (P)YPmet_name_setter(VARREF(Yprop_type),accessorF321);
  T414 = accessorF321;
  getterF322 = T414;
  T420 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T419 = (P)YPpair(VARREF(YLanyG),T420);
  T418 = (P)YPsig(Ynil,T419,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T417 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_72),T418,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_type_setter,T417);
  T422 = fun_227;
  accessorF323 = T422;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_type_setter),accessorF323);
  (P)YPmet_name_setter(VARREF(Yprop_type_setter),accessorF323);
  T421 = accessorF323;
  setterF324 = T421;
  T425 = fun_228;
  T424 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_type),VARREF(Yprop_type_setter),VARREF(YLtypeG),T425);
  propF325 = T424;
  (P)YPmet_env_setter(propF325,getterF322);
  (P)YPmet_env_setter(propF325,setterF324);
  T426 = CALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF325);
  T423 = T426;
  T416 = T423;
  lit_73 = YPPsym((P)"prop-init");
  lit_74 = YPPsym((P)"prop-init-setter");
  T430 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_229 = YPmet(FUNCODEREF(fun_229),YPfalse,T430,ENVNUL,PNUL,YPfalse);
  T429 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLpropG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_230 = YPmet(FUNCODEREF(fun_230),YPfalse,T429,ENVNUL,PNUL,YPfalse);
  T428 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_231 = YPmet(FUNCODEREF(fun_231),YPfalse,T428,ENVNUL,PNUL,YPfalse);
  T427 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T427,ENVNUL,PNUL,YPfalse);
  T433 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T432 = (P)YPsig(Ynil,T433,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T431 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_73),T432,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_init,T431);
  T435 = fun_229;
  accessorF326 = T435;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_init),accessorF326);
  (P)YPmet_name_setter(VARREF(Yprop_init),accessorF326);
  T434 = accessorF326;
  getterF327 = T434;
  T440 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T439 = (P)YPpair(VARREF(YLanyG),T440);
  T438 = (P)YPsig(Ynil,T439,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T437 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_74),T438,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_init_setter,T437);
  T442 = fun_230;
  accessorF328 = T442;
  CALL2(1,VARREF(YPadd_met),VARREF(Yprop_init_setter),accessorF328);
  (P)YPmet_name_setter(VARREF(Yprop_init_setter),accessorF328);
  T441 = accessorF328;
  setterF329 = T441;
  T445 = fun_232;
  T444 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_init),VARREF(Yprop_init_setter),VARREF(YLfunG),T445);
  propF330 = T444;
  (P)YPmet_env_setter(propF330,getterF327);
  (P)YPmet_env_setter(propF330,setterF329);
  T446 = CALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF330);
  T443 = T446;
  T436 = T443;
  lit_75 = YPPsym((P)"gen-cache-missable?");
  lit_76 = YPPsym((P)"gen-cache-missable?-setter");
  T449 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_233 = YPmet(FUNCODEREF(fun_233),YPfalse,T449,ENVNUL,PNUL,YPfalse);
  T448 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlogG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_234 = YPmet(FUNCODEREF(fun_234),YPfalse,T448,ENVNUL,PNUL,YPfalse);
  T447 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_235 = YPmet(FUNCODEREF(fun_235),YPfalse,T447,ENVNUL,PNUL,YPfalse);
  T452 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T451 = (P)YPsig(Ynil,T452,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T450 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_75),T451,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_missableQ,T450);
  T454 = fun_233;
  accessorF331 = T454;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ),accessorF331);
  (P)YPmet_name_setter(VARREF(Ygen_cache_missableQ),accessorF331);
  T453 = accessorF331;
  getterF332 = T453;
  T459 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T458 = (P)YPpair(VARREF(YLanyG),T459);
  T457 = (P)YPsig(Ynil,T458,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T456 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_76),T457,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_missableQ_setter,T456);
  T461 = fun_234;
  accessorF333 = T461;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ_setter),accessorF333);
  (P)YPmet_name_setter(VARREF(Ygen_cache_missableQ_setter),accessorF333);
  T460 = accessorF333;
  setterF334 = T460;
  T464 = fun_235;
  T463 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ),VARREF(Ygen_cache_missableQ_setter),VARREF(YLlogG),T464);
  propF335 = T463;
  (P)YPmet_env_setter(propF335,getterF332);
  (P)YPmet_env_setter(propF335,setterF334);
  T465 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF335);
  T462 = T465;
  T455 = T462;
  lit_77 = YPPsym((P)"gen-cache-arg-pos");
  lit_78 = YPPsym((P)"gen-cache-arg-pos-setter");
  T468 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T468,ENVNUL,PNUL,YPfalse);
  T467 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_237 = YPmet(FUNCODEREF(fun_237),YPfalse,T467,ENVNUL,PNUL,YPfalse);
  T466 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_238 = YPmet(FUNCODEREF(fun_238),YPfalse,T466,ENVNUL,PNUL,YPfalse);
  T471 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T470 = (P)YPsig(Ynil,T471,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T469 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_77),T470,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_arg_pos,T469);
  T473 = fun_236;
  accessorF336 = T473;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos),accessorF336);
  (P)YPmet_name_setter(VARREF(Ygen_cache_arg_pos),accessorF336);
  T472 = accessorF336;
  getterF337 = T472;
  T478 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T477 = (P)YPpair(VARREF(YLanyG),T478);
  T476 = (P)YPsig(Ynil,T477,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T475 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_78),T476,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_arg_pos_setter,T475);
  T480 = fun_237;
  accessorF338 = T480;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos_setter),accessorF338);
  (P)YPmet_name_setter(VARREF(Ygen_cache_arg_pos_setter),accessorF338);
  T479 = accessorF338;
  setterF339 = T479;
  T483 = fun_238;
  T482 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos),VARREF(Ygen_cache_arg_pos_setter),VARREF(YLintG),T483);
  propF340 = T482;
  (P)YPmet_env_setter(propF340,getterF337);
  (P)YPmet_env_setter(propF340,setterF339);
  T484 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF340);
  T481 = T484;
  T474 = T481;
  lit_79 = YPPsym((P)"gen-cache-singletons");
  lit_80 = YPPsym((P)"gen-cache-singletons-setter");
  T487 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_239 = YPmet(FUNCODEREF(fun_239),YPfalse,T487,ENVNUL,PNUL,YPfalse);
  T486 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_240 = YPmet(FUNCODEREF(fun_240),YPfalse,T486,ENVNUL,PNUL,YPfalse);
  T485 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_241 = YPmet(FUNCODEREF(fun_241),YPfalse,T485,ENVNUL,PNUL,YPfalse);
  T490 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T489 = (P)YPsig(Ynil,T490,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T488 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_79),T489,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_singletons,T488);
  T492 = fun_239;
  accessorF341 = T492;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons),accessorF341);
  (P)YPmet_name_setter(VARREF(Ygen_cache_singletons),accessorF341);
  T491 = accessorF341;
  getterF342 = T491;
  T497 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T496 = (P)YPpair(VARREF(YLanyG),T497);
  T495 = (P)YPsig(Ynil,T496,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T494 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_80),T495,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_singletons_setter,T494);
  T499 = fun_240;
  accessorF343 = T499;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons_setter),accessorF343);
  (P)YPmet_name_setter(VARREF(Ygen_cache_singletons_setter),accessorF343);
  T498 = accessorF343;
  setterF344 = T498;
  T502 = fun_241;
  T501 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons),VARREF(Ygen_cache_singletons_setter),VARREF(YLlstG),T502);
  propF345 = T501;
  (P)YPmet_env_setter(propF345,getterF342);
  (P)YPmet_env_setter(propF345,setterF344);
  T503 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF345);
  T500 = T503;
  T493 = T500;
  lit_81 = YPPsym((P)"gen-cache-classes");
  lit_82 = YPPsym((P)"gen-cache-classes-setter");
  T506 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_242 = YPmet(FUNCODEREF(fun_242),YPfalse,T506,ENVNUL,PNUL,YPfalse);
  T505 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLgen_cacheG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_243 = YPmet(FUNCODEREF(fun_243),YPfalse,T505,ENVNUL,PNUL,YPfalse);
  T504 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_244 = YPmet(FUNCODEREF(fun_244),YPfalse,T504,ENVNUL,PNUL,YPfalse);
  T509 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T508 = (P)YPsig(Ynil,T509,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T507 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_81),T508,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_classes,T507);
  T511 = fun_242;
  accessorF346 = T511;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes),accessorF346);
  (P)YPmet_name_setter(VARREF(Ygen_cache_classes),accessorF346);
  T510 = accessorF346;
  getterF347 = T510;
  T516 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T515 = (P)YPpair(VARREF(YLanyG),T516);
  T514 = (P)YPsig(Ynil,T515,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T513 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_82),T514,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_classes_setter,T513);
  T518 = fun_243;
  accessorF348 = T518;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes_setter),accessorF348);
  (P)YPmet_name_setter(VARREF(Ygen_cache_classes_setter),accessorF348);
  T517 = accessorF348;
  setterF349 = T517;
  T521 = fun_244;
  T520 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes),VARREF(Ygen_cache_classes_setter),VARREF(YLlstG),T521);
  propF350 = T520;
  (P)YPmet_env_setter(propF350,getterF347);
  (P)YPmet_env_setter(propF350,setterF349);
  T522 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF350);
  T519 = T522;
  T512 = T519;
  lit_83 = YPPsym((P)"sig-names");
  lit_84 = YPPsym((P)"sig-names-setter");
  T529 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T528 = fun_245 = YPmet(FUNCODEREF(fun_245),YPfalse,T529,ENVNUL,PNUL,YPfalse);
  T527 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T526 = fun_246 = YPmet(FUNCODEREF(fun_246),YPfalse,T527,ENVNUL,PNUL,YPfalse);
  T525 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T524 = fun_247 = YPmet(FUNCODEREF(fun_247),YPfalse,T525,ENVNUL,PNUL,YPfalse);
  T533 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T532 = (P)YPsig(Ynil,T533,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T531 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_83),T532,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names,T531);
  T535 = fun_245;
  accessorF351 = T535;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_names),accessorF351);
  (P)YPmet_name_setter(VARREF(Ysig_names),accessorF351);
  T534 = accessorF351;
  getterF352 = T534;
  T540 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T539 = (P)YPpair(VARREF(YLanyG),T540);
  T538 = (P)YPsig(Ynil,T539,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T537 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_84),T538,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names_setter,T537);
  T542 = fun_246;
  accessorF353 = T542;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_names_setter),accessorF353);
  (P)YPmet_name_setter(VARREF(Ysig_names_setter),accessorF353);
  T541 = accessorF353;
  setterF354 = T541;
  T545 = fun_247;
  T544 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_names),VARREF(Ysig_names_setter),VARREF(YLlstG),T545);
  propF355 = T544;
  (P)YPmet_env_setter(propF355,getterF352);
  (P)YPmet_env_setter(propF355,setterF354);
  T546 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF355);
  T543 = T546;
  T536 = T543;
  T530 = T536;
  T523 = T530;
  return T523;
}

P Y___main_7___() {
  P propF445;
  P setterF444;
  P accessorF443;
  P getterF442;
  P accessorF441;
  P propF440;
  P setterF439;
  P accessorF438;
  P getterF437;
  P accessorF436;
  P propF435;
  P setterF434;
  P accessorF433;
  P getterF432;
  P accessorF431;
  P propF430;
  P setterF429;
  P accessorF428;
  P getterF427;
  P accessorF426;
  P propF425;
  P setterF424;
  P accessorF423;
  P getterF422;
  P accessorF421;
  P propF420;
  P setterF419;
  P accessorF418;
  P getterF417;
  P accessorF416;
  P propF415;
  P setterF414;
  P accessorF413;
  P getterF412;
  P accessorF411;
  P propF410;
  P setterF409;
  P accessorF408;
  P getterF407;
  P accessorF406;
  P propF405;
  P setterF404;
  P accessorF403;
  P getterF402;
  P accessorF401;
  P propF400;
  P setterF399;
  P accessorF398;
  P getterF397;
  P accessorF396;
  P propF395;
  P setterF394;
  P accessorF393;
  P getterF392;
  P accessorF391;
  P propF390;
  P setterF389;
  P accessorF388;
  P getterF387;
  P accessorF386;
  P propF385;
  P setterF384;
  P accessorF383;
  P getterF382;
  P accessorF381;
  P propF380;
  P setterF379;
  P accessorF378;
  P getterF377;
  P accessorF376;
  P propF375;
  P setterF374;
  P accessorF373;
  P getterF372;
  P accessorF371;
  P propF370;
  P setterF369;
  P accessorF368;
  P getterF367;
  P accessorF366;
  P propF365;
  P setterF364;
  P accessorF363;
  P getterF362;
  P accessorF361;
  P propF360;
  P setterF359;
  P accessorF358;
  P getterF357;
  P accessorF356;
  P T354,T353,T352,T351,T350,T349,T348,T347,T346,T345,T344,T343,T342,T341,T340,T339;
  P T338,T337,T336,T335,T334,T333,T332,T331,T330,T329,T328,T327,T326,T325,T324,T323;
  P T322,T321,T320,T319,T318,T317,T316,T315,T314,T313,T312,T311,T310,T309,T308,T307;
  P T306,T305,T304,T303,T302,T301,T300,T299,T298,T297,T296,T295,T294,T293,T292,T291;
  P T290,T289,T288,T287,T286,T285,T284,T283,T282,T281,T280,T279,T278,T277,T276,T275;
  P T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260,T259;
  P T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243;
  P T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227;
  P T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211;
  P T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195;
  P T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179;
  P T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163;
  P T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147;
  P T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131;
  P T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115;
  P T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99;
  P T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83;
  P T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
loop:
  lit_85 = YPPsym((P)"sig-specs");
  lit_86 = YPPsym((P)"sig-specs-setter");
  T2 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_248 = YPmet(FUNCODEREF(fun_248),YPfalse,T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_249 = YPmet(FUNCODEREF(fun_249),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_250 = YPmet(FUNCODEREF(fun_250),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T5 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T4 = (P)YPsig(Ynil,T5,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T3 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_85),T4,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs,T3);
  T7 = fun_248;
  accessorF356 = T7;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs),accessorF356);
  (P)YPmet_name_setter(VARREF(Ysig_specs),accessorF356);
  T6 = accessorF356;
  getterF357 = T6;
  T12 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T11 = (P)YPpair(VARREF(YLanyG),T12);
  T10 = (P)YPsig(Ynil,T11,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T9 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_86),T10,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs_setter,T9);
  T14 = fun_249;
  accessorF358 = T14;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs_setter),accessorF358);
  (P)YPmet_name_setter(VARREF(Ysig_specs_setter),accessorF358);
  T13 = accessorF358;
  setterF359 = T13;
  T17 = fun_250;
  T16 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_specs),VARREF(Ysig_specs_setter),VARREF(YLlstG),T17);
  propF360 = T16;
  (P)YPmet_env_setter(propF360,getterF357);
  (P)YPmet_env_setter(propF360,setterF359);
  T18 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF360);
  T15 = T18;
  T8 = T15;
  lit_87 = YPPsym((P)"sig-nary?");
  lit_88 = YPPsym((P)"sig-nary?-setter");
  T21 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_251 = YPmet(FUNCODEREF(fun_251),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlogG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_252 = YPmet(FUNCODEREF(fun_252),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T19 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_253 = YPmet(FUNCODEREF(fun_253),YPfalse,T19,ENVNUL,PNUL,YPfalse);
  T24 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T23 = (P)YPsig(Ynil,T24,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T22 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_87),T23,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ,T22);
  T26 = fun_251;
  accessorF361 = T26;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ),accessorF361);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ),accessorF361);
  T25 = accessorF361;
  getterF362 = T25;
  T31 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T30 = (P)YPpair(VARREF(YLanyG),T31);
  T29 = (P)YPsig(Ynil,T30,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T28 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_88),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ_setter,T28);
  T33 = fun_252;
  accessorF363 = T33;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ_setter),accessorF363);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ_setter),accessorF363);
  T32 = accessorF363;
  setterF364 = T32;
  T36 = fun_253;
  T35 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_naryQ),VARREF(Ysig_naryQ_setter),VARREF(YLlogG),T36);
  propF365 = T35;
  (P)YPmet_env_setter(propF365,getterF362);
  (P)YPmet_env_setter(propF365,setterF364);
  T37 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF365);
  T34 = T37;
  T27 = T34;
  lit_89 = YPPsym((P)"sig-arity");
  lit_90 = YPPsym((P)"sig-arity-setter");
  T40 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_254 = YPmet(FUNCODEREF(fun_254),YPfalse,T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_255 = YPmet(FUNCODEREF(fun_255),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_256 = YPmet(FUNCODEREF(fun_256),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T43 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T42 = (P)YPsig(Ynil,T43,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T41 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_89),T42,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity,T41);
  T45 = fun_254;
  accessorF366 = T45;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity),accessorF366);
  (P)YPmet_name_setter(VARREF(Ysig_arity),accessorF366);
  T44 = accessorF366;
  getterF367 = T44;
  T50 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T49 = (P)YPpair(VARREF(YLanyG),T50);
  T48 = (P)YPsig(Ynil,T49,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T47 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_90),T48,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity_setter,T47);
  T52 = fun_255;
  accessorF368 = T52;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity_setter),accessorF368);
  (P)YPmet_name_setter(VARREF(Ysig_arity_setter),accessorF368);
  T51 = accessorF368;
  setterF369 = T51;
  T55 = fun_256;
  T54 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_arity),VARREF(Ysig_arity_setter),VARREF(YLintG),T55);
  propF370 = T54;
  (P)YPmet_env_setter(propF370,getterF367);
  (P)YPmet_env_setter(propF370,setterF369);
  T56 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF370);
  T53 = T56;
  T46 = T53;
  lit_91 = YPPsym((P)"sig-val");
  lit_92 = YPPsym((P)"sig-val-setter");
  T59 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_257 = YPmet(FUNCODEREF(fun_257),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_258 = YPmet(FUNCODEREF(fun_258),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_259 = YPmet(FUNCODEREF(fun_259),YPfalse,T57,ENVNUL,PNUL,YPfalse);
  T62 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T61 = (P)YPsig(Ynil,T62,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T60 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_91),T61,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val,T60);
  T64 = fun_257;
  accessorF371 = T64;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_val),accessorF371);
  (P)YPmet_name_setter(VARREF(Ysig_val),accessorF371);
  T63 = accessorF371;
  getterF372 = T63;
  T69 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T68 = (P)YPpair(VARREF(YLanyG),T69);
  T67 = (P)YPsig(Ynil,T68,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T66 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_92),T67,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val_setter,T66);
  T71 = fun_258;
  accessorF373 = T71;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_val_setter),accessorF373);
  (P)YPmet_name_setter(VARREF(Ysig_val_setter),accessorF373);
  T70 = accessorF373;
  setterF374 = T70;
  T74 = fun_259;
  T73 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_val),VARREF(Ysig_val_setter),VARREF(YLanyG),T74);
  propF375 = T73;
  (P)YPmet_env_setter(propF375,getterF372);
  (P)YPmet_env_setter(propF375,setterF374);
  T75 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF375);
  T72 = T75;
  T65 = T72;
  lit_93 = YPPsym((P)"sig-unification-vars");
  lit_94 = YPPsym((P)"sig-unification-vars-setter");
  T78 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_260 = YPmet(FUNCODEREF(fun_260),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_261 = YPmet(FUNCODEREF(fun_261),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_262 = YPmet(FUNCODEREF(fun_262),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T81 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T80 = (P)YPsig(Ynil,T81,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T79 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_93),T80,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars,T79);
  T83 = fun_260;
  accessorF376 = T83;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars),accessorF376);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars),accessorF376);
  T82 = accessorF376;
  getterF377 = T82;
  T88 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T87 = (P)YPpair(VARREF(YLanyG),T88);
  T86 = (P)YPsig(Ynil,T87,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T85 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_94),T86,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars_setter,T85);
  T90 = fun_261;
  accessorF378 = T90;
  CALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars_setter),accessorF378);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars_setter),accessorF378);
  T89 = accessorF378;
  setterF379 = T89;
  T93 = fun_262;
  T92 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_unification_vars),VARREF(Ysig_unification_vars_setter),VARREF(YLlstG),T93);
  propF380 = T92;
  (P)YPmet_env_setter(propF380,getterF377);
  (P)YPmet_env_setter(propF380,setterF379);
  T94 = CALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF380);
  T91 = T94;
  T84 = T91;
  lit_95 = YPPsym((P)"fun-code");
  lit_96 = YPPsym((P)"fun-code-setter");
  T97 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_263 = YPmet(FUNCODEREF(fun_263),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_264 = YPmet(FUNCODEREF(fun_264),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_265 = YPmet(FUNCODEREF(fun_265),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T100 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T99 = (P)YPsig(Ynil,T100,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T98 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_95),T99,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_code,T98);
  T102 = fun_263;
  accessorF381 = T102;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_code),accessorF381);
  (P)YPmet_name_setter(VARREF(Yfun_code),accessorF381);
  T101 = accessorF381;
  getterF382 = T101;
  T107 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T106 = (P)YPpair(VARREF(YLanyG),T107);
  T105 = (P)YPsig(Ynil,T106,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T104 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_96),T105,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_code_setter,T104);
  T109 = fun_264;
  accessorF383 = T109;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_code_setter),accessorF383);
  (P)YPmet_name_setter(VARREF(Yfun_code_setter),accessorF383);
  T108 = accessorF383;
  setterF384 = T108;
  T112 = fun_265;
  T111 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_code),VARREF(Yfun_code_setter),VARREF(YLanyG),T112);
  propF385 = T111;
  (P)YPmet_env_setter(propF385,getterF382);
  (P)YPmet_env_setter(propF385,setterF384);
  T113 = CALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF385);
  T110 = T113;
  T103 = T110;
  lit_97 = YPPsym((P)"fun-name");
  lit_98 = YPPsym((P)"fun-name-setter");
  T116 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_266 = YPmet(FUNCODEREF(fun_266),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_267 = YPmet(FUNCODEREF(fun_267),YPfalse,T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_268 = YPmet(FUNCODEREF(fun_268),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T119 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T118 = (P)YPsig(Ynil,T119,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T117 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_97),T118,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name,T117);
  T121 = fun_266;
  accessorF386 = T121;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_name),accessorF386);
  (P)YPmet_name_setter(VARREF(Yfun_name),accessorF386);
  T120 = accessorF386;
  getterF387 = T120;
  T126 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T125 = (P)YPpair(VARREF(YLanyG),T126);
  T124 = (P)YPsig(Ynil,T125,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T123 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_98),T124,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name_setter,T123);
  T128 = fun_267;
  accessorF388 = T128;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_name_setter),accessorF388);
  (P)YPmet_name_setter(VARREF(Yfun_name_setter),accessorF388);
  T127 = accessorF388;
  setterF389 = T127;
  T131 = fun_268;
  T130 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_name),VARREF(Yfun_name_setter),VARREF(YLanyG),T131);
  propF390 = T130;
  (P)YPmet_env_setter(propF390,getterF387);
  (P)YPmet_env_setter(propF390,setterF389);
  T132 = CALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF390);
  T129 = T132;
  T122 = T129;
  lit_99 = YPPsym((P)"fun-sig");
  lit_100 = YPPsym((P)"fun-sig-setter");
  T135 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_269 = YPmet(FUNCODEREF(fun_269),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLsigG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_270 = YPmet(FUNCODEREF(fun_270),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_271 = YPmet(FUNCODEREF(fun_271),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T138 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T137 = (P)YPsig(Ynil,T138,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T136 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_99),T137,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig,T136);
  T140 = fun_269;
  accessorF391 = T140;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig),accessorF391);
  (P)YPmet_name_setter(VARREF(Yfun_sig),accessorF391);
  T139 = accessorF391;
  getterF392 = T139;
  T145 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T144 = (P)YPpair(VARREF(YLanyG),T145);
  T143 = (P)YPsig(Ynil,T144,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T142 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_100),T143,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig_setter,T142);
  T147 = fun_270;
  accessorF393 = T147;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig_setter),accessorF393);
  (P)YPmet_name_setter(VARREF(Yfun_sig_setter),accessorF393);
  T146 = accessorF393;
  setterF394 = T146;
  T150 = fun_271;
  T149 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_sig),VARREF(Yfun_sig_setter),VARREF(YLsigG),T150);
  propF395 = T149;
  (P)YPmet_env_setter(propF395,getterF392);
  (P)YPmet_env_setter(propF395,setterF394);
  T151 = CALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF395);
  T148 = T151;
  T141 = T148;
  lit_101 = YPPsym((P)"fun-env");
  lit_102 = YPPsym((P)"fun-env-setter");
  T154 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_272 = YPmet(FUNCODEREF(fun_272),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_273 = YPmet(FUNCODEREF(fun_273),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_274 = YPmet(FUNCODEREF(fun_274),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T157 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T156 = (P)YPsig(Ynil,T157,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T155 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_101),T156,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_env,T155);
  T159 = fun_272;
  accessorF396 = T159;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_env),accessorF396);
  (P)YPmet_name_setter(VARREF(Yfun_env),accessorF396);
  T158 = accessorF396;
  getterF397 = T158;
  T164 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T163 = (P)YPpair(VARREF(YLanyG),T164);
  T162 = (P)YPsig(Ynil,T163,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T161 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_102),T162,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_env_setter,T161);
  T166 = fun_273;
  accessorF398 = T166;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_env_setter),accessorF398);
  (P)YPmet_name_setter(VARREF(Yfun_env_setter),accessorF398);
  T165 = accessorF398;
  setterF399 = T165;
  T169 = fun_274;
  T168 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_env),VARREF(Yfun_env_setter),VARREF(YLanyG),T169);
  propF400 = T168;
  (P)YPmet_env_setter(propF400,getterF397);
  (P)YPmet_env_setter(propF400,setterF399);
  T170 = CALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF400);
  T167 = T170;
  T160 = T167;
  lit_103 = YPPsym((P)"fun-refs");
  lit_104 = YPPsym((P)"fun-refs-setter");
  T173 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_275 = YPmet(FUNCODEREF(fun_275),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_276 = YPmet(FUNCODEREF(fun_276),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_277 = YPmet(FUNCODEREF(fun_277),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T176 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T175 = (P)YPsig(Ynil,T176,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T174 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_103),T175,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_refs,T174);
  T178 = fun_275;
  accessorF401 = T178;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_refs),accessorF401);
  (P)YPmet_name_setter(VARREF(Yfun_refs),accessorF401);
  T177 = accessorF401;
  getterF402 = T177;
  T183 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T182 = (P)YPpair(VARREF(YLanyG),T183);
  T181 = (P)YPsig(Ynil,T182,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T180 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_104),T181,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_refs_setter,T180);
  T185 = fun_276;
  accessorF403 = T185;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_refs_setter),accessorF403);
  (P)YPmet_name_setter(VARREF(Yfun_refs_setter),accessorF403);
  T184 = accessorF403;
  setterF404 = T184;
  T188 = fun_277;
  T187 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_refs),VARREF(Yfun_refs_setter),VARREF(YLanyG),T188);
  propF405 = T187;
  (P)YPmet_env_setter(propF405,getterF402);
  (P)YPmet_env_setter(propF405,setterF404);
  T189 = CALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF405);
  T186 = T189;
  T179 = T186;
  lit_105 = YPPsym((P)"fun-src");
  lit_106 = YPPsym((P)"fun-src-setter");
  T192 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_278 = YPmet(FUNCODEREF(fun_278),YPfalse,T192,ENVNUL,PNUL,YPfalse);
  T191 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_279 = YPmet(FUNCODEREF(fun_279),YPfalse,T191,ENVNUL,PNUL,YPfalse);
  T190 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_280 = YPmet(FUNCODEREF(fun_280),YPfalse,T190,ENVNUL,PNUL,YPfalse);
  T195 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T194 = (P)YPsig(Ynil,T195,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T193 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_105),T194,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src,T193);
  T197 = fun_278;
  accessorF406 = T197;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_src),accessorF406);
  (P)YPmet_name_setter(VARREF(Yfun_src),accessorF406);
  T196 = accessorF406;
  getterF407 = T196;
  T202 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T201 = (P)YPpair(VARREF(YLanyG),T202);
  T200 = (P)YPsig(Ynil,T201,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T199 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_106),T200,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src_setter,T199);
  T204 = fun_279;
  accessorF408 = T204;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_src_setter),accessorF408);
  (P)YPmet_name_setter(VARREF(Yfun_src_setter),accessorF408);
  T203 = accessorF408;
  setterF409 = T203;
  T207 = fun_280;
  T206 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_src),VARREF(Yfun_src_setter),VARREF(YLanyG),T207);
  propF410 = T206;
  (P)YPmet_env_setter(propF410,getterF407);
  (P)YPmet_env_setter(propF410,setterF409);
  T208 = CALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF410);
  T205 = T208;
  T198 = T205;
  lit_107 = YPPsym((P)"fun-mets");
  lit_108 = YPPsym((P)"fun-mets-setter");
  T211 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_281 = YPmet(FUNCODEREF(fun_281),YPfalse,T211,ENVNUL,PNUL,YPfalse);
  T210 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_282 = YPmet(FUNCODEREF(fun_282),YPfalse,T210,ENVNUL,PNUL,YPfalse);
  T209 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_283 = YPmet(FUNCODEREF(fun_283),YPfalse,T209,ENVNUL,PNUL,YPfalse);
  T214 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T213 = (P)YPsig(Ynil,T214,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T212 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_107),T213,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets,T212);
  T216 = fun_281;
  accessorF411 = T216;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets),accessorF411);
  (P)YPmet_name_setter(VARREF(Yfun_mets),accessorF411);
  T215 = accessorF411;
  getterF412 = T215;
  T221 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T220 = (P)YPpair(VARREF(YLanyG),T221);
  T219 = (P)YPsig(Ynil,T220,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T218 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_108),T219,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets_setter,T218);
  T223 = fun_282;
  accessorF413 = T223;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets_setter),accessorF413);
  (P)YPmet_name_setter(VARREF(Yfun_mets_setter),accessorF413);
  T222 = accessorF413;
  setterF414 = T222;
  T226 = fun_283;
  T225 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_mets),VARREF(Yfun_mets_setter),VARREF(YLlstG),T226);
  propF415 = T225;
  (P)YPmet_env_setter(propF415,getterF412);
  (P)YPmet_env_setter(propF415,setterF414);
  T227 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF415);
  T224 = T227;
  T217 = T224;
  lit_109 = YPPsym((P)"fun-cache");
  lit_110 = YPPsym((P)"fun-cache-setter");
  T230 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_284 = YPmet(FUNCODEREF(fun_284),YPfalse,T230,ENVNUL,PNUL,YPfalse);
  T229 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_285 = YPmet(FUNCODEREF(fun_285),YPfalse,T229,ENVNUL,PNUL,YPfalse);
  T228 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_286 = YPmet(FUNCODEREF(fun_286),YPfalse,T228,ENVNUL,PNUL,YPfalse);
  T233 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T232 = (P)YPsig(Ynil,T233,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T231 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_109),T232,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_cache,T231);
  T235 = fun_284;
  accessorF416 = T235;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache),accessorF416);
  (P)YPmet_name_setter(VARREF(Yfun_cache),accessorF416);
  T234 = accessorF416;
  getterF417 = T234;
  T240 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T239 = (P)YPpair(VARREF(YLanyG),T240);
  T238 = (P)YPsig(Ynil,T239,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T237 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_110),T238,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_cache_setter,T237);
  T242 = fun_285;
  accessorF418 = T242;
  CALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache_setter),accessorF418);
  (P)YPmet_name_setter(VARREF(Yfun_cache_setter),accessorF418);
  T241 = accessorF418;
  setterF419 = T241;
  T245 = fun_286;
  T244 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_cache),VARREF(Yfun_cache_setter),VARREF(YLanyG),T245);
  propF420 = T244;
  (P)YPmet_env_setter(propF420,getterF417);
  (P)YPmet_env_setter(propF420,setterF419);
  T246 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF420);
  T243 = T246;
  T236 = T243;
  lit_111 = YPPsym((P)"gen-refs");
  lit_112 = YPPsym((P)"gen-refs-setter");
  T249 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_287 = YPmet(FUNCODEREF(fun_287),YPfalse,T249,ENVNUL,PNUL,YPfalse);
  T248 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLvecG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_288 = YPmet(FUNCODEREF(fun_288),YPfalse,T248,ENVNUL,PNUL,YPfalse);
  T247 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_289 = YPmet(FUNCODEREF(fun_289),YPfalse,T247,ENVNUL,PNUL,YPfalse);
  T252 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T251 = (P)YPsig(Ynil,T252,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T250 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_111),T251,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_refs,T250);
  T254 = fun_287;
  accessorF421 = T254;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_refs),accessorF421);
  (P)YPmet_name_setter(VARREF(Ygen_refs),accessorF421);
  T253 = accessorF421;
  getterF422 = T253;
  T259 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T258 = (P)YPpair(VARREF(YLanyG),T259);
  T257 = (P)YPsig(Ynil,T258,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T256 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_112),T257,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_refs_setter,T256);
  T261 = fun_288;
  accessorF423 = T261;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_refs_setter),accessorF423);
  (P)YPmet_name_setter(VARREF(Ygen_refs_setter),accessorF423);
  T260 = accessorF423;
  setterF424 = T260;
  T264 = fun_289;
  T263 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_refs),VARREF(Ygen_refs_setter),VARREF(YLvecG),T264);
  propF425 = T263;
  (P)YPmet_env_setter(propF425,getterF422);
  (P)YPmet_env_setter(propF425,setterF424);
  T265 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF425);
  T262 = T265;
  T255 = T262;
  lit_113 = YPPsym((P)"gen-src");
  lit_114 = YPPsym((P)"gen-src-setter");
  T268 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_290 = YPmet(FUNCODEREF(fun_290),YPfalse,T268,ENVNUL,PNUL,YPfalse);
  T267 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_291 = YPmet(FUNCODEREF(fun_291),YPfalse,T267,ENVNUL,PNUL,YPfalse);
  T266 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_292 = YPmet(FUNCODEREF(fun_292),YPfalse,T266,ENVNUL,PNUL,YPfalse);
  T271 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T270 = (P)YPsig(Ynil,T271,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T269 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_113),T270,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src,T269);
  T273 = fun_290;
  accessorF426 = T273;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_src),accessorF426);
  (P)YPmet_name_setter(VARREF(Ygen_src),accessorF426);
  T272 = accessorF426;
  getterF427 = T272;
  T278 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T277 = (P)YPpair(VARREF(YLanyG),T278);
  T276 = (P)YPsig(Ynil,T277,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T275 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_114),T276,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src_setter,T275);
  T280 = fun_291;
  accessorF428 = T280;
  CALL2(1,VARREF(YPadd_met),VARREF(Ygen_src_setter),accessorF428);
  (P)YPmet_name_setter(VARREF(Ygen_src_setter),accessorF428);
  T279 = accessorF428;
  setterF429 = T279;
  T283 = fun_292;
  T282 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_src),VARREF(Ygen_src_setter),VARREF(YLanyG),T283);
  propF430 = T282;
  (P)YPmet_env_setter(propF430,getterF427);
  (P)YPmet_env_setter(propF430,setterF429);
  T284 = CALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF430);
  T281 = T284;
  T274 = T281;
  lit_115 = YPPsym((P)"opts-location");
  lit_116 = YPPsym((P)"opts-location-setter");
  T287 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_293 = YPmet(FUNCODEREF(fun_293),YPfalse,T287,ENVNUL,PNUL,YPfalse);
  T286 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlocG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_294 = YPmet(FUNCODEREF(fun_294),YPfalse,T286,ENVNUL,PNUL,YPfalse);
  T285 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_295 = YPmet(FUNCODEREF(fun_295),YPfalse,T285,ENVNUL,PNUL,YPfalse);
  T290 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T289 = (P)YPsig(Ynil,T290,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T288 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_115),T289,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_location,T288);
  T292 = fun_293;
  accessorF431 = T292;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_location),accessorF431);
  (P)YPmet_name_setter(VARREF(Yopts_location),accessorF431);
  T291 = accessorF431;
  getterF432 = T291;
  T297 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T296 = (P)YPpair(VARREF(YLanyG),T297);
  T295 = (P)YPsig(Ynil,T296,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T294 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_116),T295,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_location_setter,T294);
  T299 = fun_294;
  accessorF433 = T299;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_location_setter),accessorF433);
  (P)YPmet_name_setter(VARREF(Yopts_location_setter),accessorF433);
  T298 = accessorF433;
  setterF434 = T298;
  T302 = fun_295;
  T301 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_location),VARREF(Yopts_location_setter),VARREF(YLlocG),T302);
  propF435 = T301;
  (P)YPmet_env_setter(propF435,getterF432);
  (P)YPmet_env_setter(propF435,setterF434);
  T303 = CALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF435);
  T300 = T303;
  T293 = T300;
  lit_117 = YPPsym((P)"opts-count");
  lit_118 = YPPsym((P)"opts-count-setter");
  T306 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_296 = YPmet(FUNCODEREF(fun_296),YPfalse,T306,ENVNUL,PNUL,YPfalse);
  T305 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_297 = YPmet(FUNCODEREF(fun_297),YPfalse,T305,ENVNUL,PNUL,YPfalse);
  T304 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_298 = YPmet(FUNCODEREF(fun_298),YPfalse,T304,ENVNUL,PNUL,YPfalse);
  T309 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T308 = (P)YPsig(Ynil,T309,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T307 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_117),T308,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_count,T307);
  T311 = fun_296;
  accessorF436 = T311;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_count),accessorF436);
  (P)YPmet_name_setter(VARREF(Yopts_count),accessorF436);
  T310 = accessorF436;
  getterF437 = T310;
  T316 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T315 = (P)YPpair(VARREF(YLanyG),T316);
  T314 = (P)YPsig(Ynil,T315,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T313 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_118),T314,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_count_setter,T313);
  T318 = fun_297;
  accessorF438 = T318;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_count_setter),accessorF438);
  (P)YPmet_name_setter(VARREF(Yopts_count_setter),accessorF438);
  T317 = accessorF438;
  setterF439 = T317;
  T321 = fun_298;
  T320 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_count),VARREF(Yopts_count_setter),VARREF(YLintG),T321);
  propF440 = T320;
  (P)YPmet_env_setter(propF440,getterF437);
  (P)YPmet_env_setter(propF440,setterF439);
  T322 = CALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF440);
  T319 = T322;
  T312 = T319;
  lit_119 = YPPsym((P)"opts-vec-storage");
  lit_120 = YPPsym((P)"opts-vec-storage-setter");
  T325 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLopts_vecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_299 = YPmet(FUNCODEREF(fun_299),YPfalse,T325,ENVNUL,PNUL,YPfalse);
  T324 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLvecG),VARREF(YLopts_vecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_300 = YPmet(FUNCODEREF(fun_300),YPfalse,T324,ENVNUL,PNUL,YPfalse);
  T323 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_301 = YPmet(FUNCODEREF(fun_301),YPfalse,T323,ENVNUL,PNUL,YPfalse);
  T328 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T327 = (P)YPsig(Ynil,T328,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T326 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_119),T327,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_vec_storage,T326);
  T330 = fun_299;
  accessorF441 = T330;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_vec_storage),accessorF441);
  (P)YPmet_name_setter(VARREF(Yopts_vec_storage),accessorF441);
  T329 = accessorF441;
  getterF442 = T329;
  T335 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T334 = (P)YPpair(VARREF(YLanyG),T335);
  T333 = (P)YPsig(Ynil,T334,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T332 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_120),T333,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_vec_storage_setter,T332);
  T337 = fun_300;
  accessorF443 = T337;
  CALL2(1,VARREF(YPadd_met),VARREF(Yopts_vec_storage_setter),accessorF443);
  (P)YPmet_name_setter(VARREF(Yopts_vec_storage_setter),accessorF443);
  T336 = accessorF443;
  setterF444 = T336;
  T340 = fun_301;
  T339 = (P)YPPprop(VARREF(YLopts_vecG),VARREF(Yopts_vec_storage),VARREF(Yopts_vec_storage_setter),VARREF(YLvecG),T340);
  propF445 = T339;
  (P)YPmet_env_setter(propF445,getterF442);
  (P)YPmet_env_setter(propF445,setterF444);
  T341 = CALL2(1,VARREF(YPadd_prop),VARREF(YLopts_vecG),propF445);
  T338 = T341;
  T331 = T338;
  lit_121 = YPPsym((P)"%collect-direct-props");
  T342 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPcollect_direct_props = YPmet(FUNCODEREF(YPcollect_direct_props),LITREF(lit_121),T342,ENVNUL,PNUL,YPfalse);
  T343 = YPcollect_direct_props;
  VARSET(YPcollect_direct_props,T343);
  lit_122 = YPPsym((P)"%finalize-props!");
  T344 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPfinalize_propsX = YPmet(FUNCODEREF(YPfinalize_propsX),LITREF(lit_122),T344,ENVNUL,PNUL,YPfalse);
  T345 = YPfinalize_propsX;
  VARSET(YPfinalize_propsX,T345);
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
  lit_131 = YPPsym((P)"<seq>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_131),VARREF(YLseqG));
  lit_132 = YPPsym((P)"<lst>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_132),VARREF(YLlstG));
  lit_133 = YPPsym((P)"<flat>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_133),VARREF(YLflatG));
  lit_134 = YPPsym((P)"<vec>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_134),VARREF(YLvecG));
  lit_135 = YPPsym((P)"<str>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_135),VARREF(YLstrG));
  lit_136 = YPPsym((P)"<sym>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_136),VARREF(YLsymG));
  lit_137 = YPPsym((P)"<type>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_137),VARREF(YLtypeG));
  lit_138 = YPPsym((P)"<class>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_138),VARREF(YLclassG));
  lit_139 = YPPsym((P)"<singleton>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_139),VARREF(YLsingletonG));
  lit_140 = YPPsym((P)"<subclass>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_140),VARREF(YLsubclassG));
  lit_141 = YPPsym((P)"<union>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_141),VARREF(YLunionG));
  lit_142 = YPPsym((P)"<prop>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_142),VARREF(YLpropG));
  lit_143 = YPPsym((P)"<gen-cache>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_143),VARREF(YLgen_cacheG));
  lit_144 = YPPsym((P)"<sig>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_144),VARREF(YLsigG));
  lit_145 = YPPsym((P)"<fun>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_145),VARREF(YLfunG));
  lit_146 = YPPsym((P)"<met>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_146),VARREF(YLmetG));
  lit_147 = YPPsym((P)"<gen>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_147),VARREF(YLgenG));
  lit_148 = YPPsym((P)"<opts>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_148),VARREF(YLoptsG));
  lit_149 = YPPsym((P)"<opts-vec>");
  CALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_149),VARREF(YLopts_vecG));
  lit_150 = YPPsym((P)"@@==");
  T346 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOOEE = YPmet(FUNCODEREF(YOOEE),LITREF(lit_150),T346,ENVNUL,PNUL,YPfalse);
  T347 = YOOEE;
  VARSET(YOOEE,T347);
  lit_151 = YPPsym((P)"not");
  T348 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  Ynot = YPmet(FUNCODEREF(Ynot),LITREF(lit_151),T348,ENVNUL,PNUL,YPfalse);
  T349 = Ynot;
  VARSET(Ynot,T349);
  lit_152 = YPPsym((P)"@@empty?");
  T350 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOOemptyQ = YPmet(FUNCODEREF(YOOemptyQ),LITREF(lit_152),T350,ENVNUL,PNUL,YPfalse);
  T351 = YOOemptyQ;
  VARSET(YOOemptyQ,T351);
  lit_153 = YPPsym((P)"@rev!");
  T352 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrevX = YPmet(FUNCODEREF(YOrevX),LITREF(lit_153),T352,ENVNUL,PNUL,YPfalse);
  T353 = YOrevX;
  VARSET(YOrevX,T353);
  T354 = YPfalse;
  return T354;
}

P Y___main_8___() {
  P T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111;
  P T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95;
  P T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79;
  P T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63;
  P T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_154 = YPPsym((P)"@all?");
  lit_155 = YPPsym((P)"test");
  lit_156 = YPPsym((P)"c");
  lit_157 = YPPsym((P)"fnd");
  lit_158 = YPPsym((P)"p");
  T1 = YPsig(YPPlist(1,LITREF(lit_158)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_322 = YPmet(FUNCODEREF(fun_fnd_322),LITREF(lit_157),T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(YPPlist(2,LITREF(lit_155),LITREF(lit_156)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOallQ = YPmet(FUNCODEREF(YOallQ),LITREF(lit_154),T0,ENVNUL,PNUL,YPfalse);
  T2 = YOallQ;
  VARSET(YOallQ,T2);
  lit_159 = YPPsym((P)"@all2?");
  lit_160 = YPPsym((P)"px");
  lit_161 = YPPsym((P)"py");
  T4 = YPsig(YPPlist(2,LITREF(lit_160),LITREF(lit_161)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_324 = YPmet(FUNCODEREF(fun_fnd_324),LITREF(lit_157),T4,ENVNUL,PNUL,YPfalse);
  T3 = YPsig(YPPlist(3,LITREF(lit_155),LITREF(lit_10),LITREF(lit_13)),YPPlist(3,VARREF(YLfunG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOall2Q = YPmet(FUNCODEREF(YOall2Q),LITREF(lit_159),T3,ENVNUL,PNUL,YPfalse);
  T5 = YOall2Q;
  VARSET(YOall2Q,T5);
  lit_162 = YPPsym((P)"@elt");
  lit_163 = YPPsym((P)"key");
  lit_164 = YPPsym((P)"count");
  T7 = YPsig(YPPlist(2,LITREF(lit_164),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_326 = YPmet(FUNCODEREF(fun_fnd_326),LITREF(lit_157),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_163)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOelt = YPmet(FUNCODEREF(YOelt),LITREF(lit_162),T6,ENVNUL,PNUL,YPfalse);
  T8 = YOelt;
  VARSET(YOelt,T8);
  lit_165 = YPPsym((P)"@fill");
  lit_166 = YPPsym((P)"f");
  T10 = YPsig(YPPlist(1,LITREF(lit_158)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_328 = YPmet(FUNCODEREF(fun_loop_328),LITREF(lit_5),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_166)),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfill = YPmet(FUNCODEREF(YOfill),LITREF(lit_165),T9,ENVNUL,PNUL,YPfalse);
  T11 = YOfill;
  VARSET(YOfill,T11);
  lit_167 = YPPsym((P)"@any?");
  T13 = YPsig(YPPlist(1,LITREF(lit_158)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fnd_330 = YPmet(FUNCODEREF(fun_fnd_330),LITREF(lit_157),T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(YPPlist(2,LITREF(lit_155),LITREF(lit_156)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOanyQ = YPmet(FUNCODEREF(YOanyQ),LITREF(lit_167),T12,ENVNUL,PNUL,YPfalse);
  T14 = YOanyQ;
  VARSET(YOanyQ,T14);
  lit_168 = YPPsym((P)"@map");
  lit_169 = YPPsym((P)"do");
  lit_170 = YPPsym((P)"res");
  T16 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_170)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_335 = YPmet(FUNCODEREF(fun_do_335),LITREF(lit_169),T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmap = YPmet(FUNCODEREF(YOmap),LITREF(lit_168),T15,ENVNUL,PNUL,YPfalse);
  T17 = YOmap;
  VARSET(YOmap,T17);
  lit_171 = YPPsym((P)"@pick");
  T19 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_170)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_337 = YPmet(FUNCODEREF(fun_do_337),LITREF(lit_169),T19,ENVNUL,PNUL,YPfalse);
  T18 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOpick = YPmet(FUNCODEREF(YOpick),LITREF(lit_171),T18,ENVNUL,PNUL,YPfalse);
  T20 = YOpick;
  VARSET(YOpick,T20);
  lit_172 = YPPsym((P)"@do");
  T22 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_339 = YPmet(FUNCODEREF(fun_do_339),LITREF(lit_169),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_10)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo = YPmet(FUNCODEREF(YOdo),LITREF(lit_172),T21,ENVNUL,PNUL,YPfalse);
  T23 = YOdo;
  VARSET(YOdo,T23);
  lit_173 = YPPsym((P)"@alter");
  lit_174 = YPPsym((P)"dst");
  lit_175 = YPPsym((P)"src");
  lit_176 = YPPsym((P)"in");
  lit_177 = YPPsym((P)"ds");
  lit_178 = YPPsym((P)"ss");
  T25 = YPsig(YPPlist(2,LITREF(lit_177),LITREF(lit_178)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_in_341 = YPmet(FUNCODEREF(fun_in_341),LITREF(lit_176),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(2,LITREF(lit_174),LITREF(lit_175)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOalter = YPmet(FUNCODEREF(YOalter),LITREF(lit_173),T24,ENVNUL,PNUL,YPfalse);
  T26 = YOalter;
  VARSET(YOalter,T26);
  lit_179 = YPPsym((P)"@fab");
  lit_180 = YPPsym((P)"fab");
  T28 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_170)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fab_343 = YPmet(FUNCODEREF(fun_fab_343),LITREF(lit_180),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_3)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfab = YPmet(FUNCODEREF(YOfab),LITREF(lit_179),T27,ENVNUL,PNUL,YPfalse);
  T29 = YOfab;
  VARSET(YOfab,T29);
  lit_181 = YPPsym((P)"@fold");
  lit_182 = YPPsym((P)"combine");
  lit_183 = YPPsym((P)"init");
  lit_184 = YPPsym((P)"red");
  T31 = YPsig(YPPlist(2,LITREF(lit_170),LITREF(lit_156)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_red_345 = YPmet(FUNCODEREF(fun_red_345),LITREF(lit_184),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(3,LITREF(lit_182),LITREF(lit_183),LITREF(lit_156)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  YOfold = YPmet(FUNCODEREF(YOfold),LITREF(lit_181),T30,ENVNUL,PNUL,YPfalse);
  T32 = YOfold;
  VARSET(YOfold,T32);
  lit_185 = YPPsym((P)"@cat2");
  T33 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOcat2 = YPmet(FUNCODEREF(YOcat2),LITREF(lit_185),T33,ENVNUL,PNUL,YPfalse);
  T34 = YOcat2;
  VARSET(YOcat2,T34);
  lit_186 = YPPsym((P)"@find");
  T36 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_17)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_348 = YPmet(FUNCODEREF(fun_fnd_348),LITREF(lit_157),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_156)),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfind = YPmet(FUNCODEREF(YOfind),LITREF(lit_186),T35,ENVNUL,PNUL,YPfalse);
  T37 = YOfind;
  VARSET(YOfind,T37);
  lit_187 = YPPsym((P)"@mem?");
  T39 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_350 = YPmet(FUNCODEREF(fun_350),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmemQ = YPmet(FUNCODEREF(YOmemQ),LITREF(lit_187),T38,ENVNUL,PNUL,YPfalse);
  T40 = YOmemQ;
  VARSET(YOmemQ,T40);
  lit_188 = YPPsym((P)"@del-dups");
  lit_189 = YPPsym((P)"e");
  T42 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_189)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_352 = YPmet(FUNCODEREF(fun_352),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOdel_dups = YPmet(FUNCODEREF(YOdel_dups),LITREF(lit_188),T41,ENVNUL,PNUL,YPfalse);
  T43 = YOdel_dups;
  VARSET(YOdel_dups,T43);
  lit_190 = YPPsym((P)"@lst-helper");
  lit_191 = YPPsym((P)"objects");
  T44 = YPsig(YPPlist(3,LITREF(lit_191),LITREF(lit_17),LITREF(lit_6)),YPPlist(3,VARREF(YLoptsG),VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOlst_helper = YPmet(FUNCODEREF(YOlst_helper),LITREF(lit_190),T44,ENVNUL,PNUL,YPfalse);
  T45 = YOlst_helper;
  VARSET(YOlst_helper,T45);
  lit_192 = YPPsym((P)"@lst");
  T46 = YPsig(YPPlist(1,LITREF(lit_191)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOlst = YPmet(FUNCODEREF(YOlst),LITREF(lit_192),T46,ENVNUL,PNUL,YPfalse);
  T47 = YOlst;
  VARSET(YOlst,T47);
  lit_193 = YPPsym((P)"@velt");
  T48 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_17)),YPPlist(2,VARREF(YLvecG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOvelt = YPmet(FUNCODEREF(YOvelt),LITREF(lit_193),T48,ENVNUL,PNUL,YPfalse);
  T49 = YOvelt;
  VARSET(YOvelt,T49);
  lit_194 = YPPsym((P)"@velt-setter");
  T50 = YPsig(YPPlist(3,LITREF(lit_30),LITREF(lit_10),LITREF(lit_17)),YPPlist(3,VARREF(YLanyG),VARREF(YLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOvelt_setter = YPmet(FUNCODEREF(YOvelt_setter),LITREF(lit_194),T50,ENVNUL,PNUL,YPfalse);
  T51 = YOvelt_setter;
  VARSET(YOvelt_setter,T51);
  lit_195 = YPPsym((P)"@vec");
  lit_196 = YPPsym((P)"copy");
  lit_197 = YPPsym((P)"k");
  T53 = YPsig(YPPlist(1,LITREF(lit_197)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_copy_358 = YPmet(FUNCODEREF(fun_copy_358),LITREF(lit_196),T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(YPPlist(1,LITREF(lit_191)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOvec = YPmet(FUNCODEREF(YOvec),LITREF(lit_195),T52,ENVNUL,PNUL,YPfalse);
  T54 = YOvec;
  VARSET(YOvec,T54);
  lit_198 = YPPsym((P)"@fun-names");
  T55 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_names = YPmet(FUNCODEREF(YOfun_names),LITREF(lit_198),T55,ENVNUL,PNUL,YPfalse);
  T56 = YOfun_names;
  VARSET(YOfun_names,T56);
  lit_199 = YPPsym((P)"@fun-specs");
  T57 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_specs = YPmet(FUNCODEREF(YOfun_specs),LITREF(lit_199),T57,ENVNUL,PNUL,YPfalse);
  T58 = YOfun_specs;
  VARSET(YOfun_specs,T58);
  lit_200 = YPPsym((P)"@fun-nary?");
  T59 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOfun_naryQ = YPmet(FUNCODEREF(YOfun_naryQ),LITREF(lit_200),T59,ENVNUL,PNUL,YPfalse);
  T60 = YOfun_naryQ;
  VARSET(YOfun_naryQ,T60);
  lit_201 = YPPsym((P)"@fun-arity");
  T61 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YOfun_arity = YPmet(FUNCODEREF(YOfun_arity),LITREF(lit_201),T61,ENVNUL,PNUL,YPfalse);
  T62 = YOfun_arity;
  VARSET(YOfun_arity,T62);
  lit_202 = YPPsym((P)"@fun-val");
  T63 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOfun_val = YPmet(FUNCODEREF(YOfun_val),LITREF(lit_202),T63,ENVNUL,PNUL,YPfalse);
  T64 = YOfun_val;
  VARSET(YOfun_val,T64);
  lit_203 = YPPsym((P)"@fun-unification-vars");
  T65 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_unification_vars = YPmet(FUNCODEREF(YOfun_unification_vars),LITREF(lit_203),T65,ENVNUL,PNUL,YPfalse);
  T66 = YOfun_unification_vars;
  VARSET(YOfun_unification_vars,T66);
  lit_204 = YPPsym((P)"@fun-mets");
  T67 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOfun_mets = YPmet(FUNCODEREF(YOfun_mets),LITREF(lit_204),T67,ENVNUL,PNUL,YPfalse);
  T68 = YOfun_mets;
  VARSET(YOfun_mets,T68);
  lit_205 = YPPsym((P)"@fun-mets-setter");
  T69 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfun_mets_setter = YPmet(FUNCODEREF(YOfun_mets_setter),LITREF(lit_205),T69,ENVNUL,PNUL,YPfalse);
  T70 = YOfun_mets_setter;
  VARSET(YOfun_mets_setter,T70);
  VARSET(YLenvG,VARREF(YLanyG));
  VARSET(YLspecsG,VARREF(YLlstG));
  VARSET(YLbodyG,VARREF(YLanyG));
  lit_206 = YPPsym((P)"fun-spec");
  T71 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_17)),YPPlist(2,VARREF(YLmetG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_spec = YPmet(FUNCODEREF(Yfun_spec),LITREF(lit_206),T71,ENVNUL,PNUL,YPfalse);
  T72 = Yfun_spec;
  VARSET(Yfun_spec,T72);
  VARSET(YLmetsG,VARREF(YLlstG));
  lit_207 = YPPsym((P)"fun-same-met?");
  T73 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLmetG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yfun_same_metQ = YPmet(FUNCODEREF(Yfun_same_metQ),LITREF(lit_207),T73,ENVNUL,PNUL,YPfalse);
  T74 = Yfun_same_metQ;
  VARSET(Yfun_same_metQ,T74);
  lit_208 = YPPsym((P)"fun-congruent?");
  T75 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yfun_congruentQ = YPmet(FUNCODEREF(Yfun_congruentQ),LITREF(lit_208),T75,ENVNUL,PNUL,YPfalse);
  T76 = Yfun_congruentQ;
  VARSET(Yfun_congruentQ,T76);
  VARSET(YTrestarts_okQT,YPfalse);
  lit_209 = YPPsym((P)"gen-add-met");
  lit_210 = YPPsym((P)"g");
  lit_211 = YPPsym((P)"m");
  lit_212 = YPPsym((P)"return");
  lit_213 = YPsb((P)"Replace %= with an empty generic congruent with %=");
  lit_214 = YPPsym((P)"lop");
  lit_215 = YPPsym((P)"specs");
  lit_216 = YPPsym((P)"col");
  lit_217 = YPPsym((P)"mets");
  lit_218 = YPPsym((P)"same?");
  lit_219 = YPPsym((P)"gms");
  T83 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_371 = YPmet(FUNCODEREF(fun_371),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_372 = YPmet(FUNCODEREF(fun_372),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_373 = YPmet(FUNCODEREF(fun_373),YPfalse,T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(YPPlist(1,LITREF(lit_212)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_374 = YPmet(FUNCODEREF(fun_374),YPfalse,T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(YPPlist(1,LITREF(lit_215)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_lop_375 = YPmet(FUNCODEREF(fun_lop_375),LITREF(lit_214),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(YPPlist(3,LITREF(lit_217),LITREF(lit_218),LITREF(lit_219)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLmetsG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_col_376 = YPmet(FUNCODEREF(fun_col_376),LITREF(lit_216),T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(2,LITREF(lit_210),LITREF(lit_211)),YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  Ygen_add_met = YPmet(FUNCODEREF(Ygen_add_met),LITREF(lit_209),T77,ENVNUL,PNUL,YPfalse);
  T84 = Ygen_add_met;
  VARSET(Ygen_add_met,T84);
  lit_220 = YPPsym((P)"@isa?");
  lit_221 = YPPsym((P)"o");
  lit_222 = YPPsym((P)"t");
  T85 = YPsig(YPPlist(2,LITREF(lit_221),LITREF(lit_222)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOisaQ = YPmet(FUNCODEREF(YOisaQ),LITREF(lit_220),T85,ENVNUL,PNUL,YPfalse);
  T86 = YOisaQ;
  VARSET(YOisaQ,T86);
  lit_223 = YPPsym((P)"@class<");
  lit_224 = YPPsym((P)"c1");
  lit_225 = YPPsym((P)"c2");
  lit_226 = YPPsym((P)"wrt");
  lit_227 = YPPsym((P)"find");
  lit_228 = YPPsym((P)"ps");
  lit_229 = YPsb((P)"can't order specializers - arg/reference object %= is ");
  lit_230 = YPsb((P)"neither %= nor %=");
  T88 = YPsig(YPPlist(1,LITREF(lit_228)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_383 = YPmet(FUNCODEREF(fun_find_383),LITREF(lit_227),T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(3,LITREF(lit_224),LITREF(lit_225),LITREF(lit_226)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOclassL = YPmet(FUNCODEREF(YOclassL),LITREF(lit_223),T87,ENVNUL,PNUL,YPfalse);
  T89 = YOclassL;
  VARSET(YOclassL,T89);
  VARSET(YLtupG,VARREF(YLvecG));
  VARSET(YOtup,VARREF(YOvec));
  VARSET(Ytup,VARREF(YOvec));
  VARSET(YOtelt,VARREF(YOvelt));
  lit_231 = YPPsym((P)"@type-equal?");
  lit_232 = YPPsym((P)"t1");
  lit_233 = YPPsym((P)"t2");
  T90 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_233)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtype_equalQ = YPmet(FUNCODEREF(YOtype_equalQ),LITREF(lit_231),T90,ENVNUL,PNUL,YPfalse);
  T91 = YOtype_equalQ;
  VARSET(YOtype_equalQ,T91);
  lit_234 = YPPsym((P)"@subtype?");
  T92 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_233)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOsubtypeQ = YPmet(FUNCODEREF(YOsubtypeQ),LITREF(lit_234),T92,ENVNUL,PNUL,YPfalse);
  T93 = YOsubtypeQ;
  VARSET(YOsubtypeQ,T93);
  lit_235 = YPPsym((P)"@may-isa?");
  T94 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_222)),YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  YOmay_isaQ = YPmet(FUNCODEREF(YOmay_isaQ),LITREF(lit_235),T94,ENVNUL,PNUL,YPfalse);
  T95 = YOmay_isaQ;
  VARSET(YOmay_isaQ,T95);
  lit_236 = YPPsym((P)"@order-specs-class");
  lit_237 = YPPsym((P)"arg");
  lit_238 = YPPsym((P)"=");
  lit_239 = YPPsym((P)"<");
  lit_240 = YPPsym((P)">");
  T96 = YPsig(YPPlist(3,LITREF(lit_232),LITREF(lit_233),LITREF(lit_237)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOorder_specs_class = YPmet(FUNCODEREF(YOorder_specs_class),LITREF(lit_236),T96,ENVNUL,PNUL,YPfalse);
  T97 = YOorder_specs_class;
  VARSET(YOorder_specs_class,T97);
  lit_241 = YPPsym((P)"@order-specs");
  T98 = YPsig(YPPlist(3,LITREF(lit_232),LITREF(lit_233),LITREF(lit_237)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YOorder_specs = YPmet(FUNCODEREF(YOorder_specs),LITREF(lit_241),T98,ENVNUL,PNUL,YPfalse);
  T99 = YOorder_specs;
  VARSET(YOorder_specs,T99);
  lit_242 = YPPsym((P)"order-mets");
  lit_243 = YPPsym((P)"m1");
  lit_244 = YPPsym((P)"m2");
  lit_245 = YPPsym((P)"state");
  lit_246 = YPPsym((P)"idx");
  lit_247 = YPPsym((P)"<>");
  T101 = YPsig(YPPlist(2,LITREF(lit_245),LITREF(lit_246)),YPPlist(2,VARREF(YLsymG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_390 = YPmet(FUNCODEREF(fun_loop_390),LITREF(lit_5),T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(YPPlist(3,LITREF(lit_243),LITREF(lit_244),LITREF(lit_20)),YPPlist(3,VARREF(YLmetG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLsymG),Ynil);
  Yorder_mets = YPmet(FUNCODEREF(Yorder_mets),LITREF(lit_242),T100,ENVNUL,PNUL,YPfalse);
  T102 = Yorder_mets;
  VARSET(Yorder_mets,T102);
  lit_248 = YPPsym((P)"ord-app-mets-1");
  lit_249 = YPPsym((P)"make-ambiguous");
  lit_250 = YPPsym((P)"headed-list");
  lit_251 = YPPsym((P)"precedes-all?");
  lit_252 = YPPsym((P)"check-subsequent-ambiguities");
  lit_253 = YPPsym((P)"oprev");
  lit_254 = YPPsym((P)"insert");
  lit_255 = YPPsym((P)"osub");
  T110 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_392 = YPmet(FUNCODEREF(fun_loop_392),LITREF(lit_5),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(1,LITREF(lit_250)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_ambiguous_393 = YPmet(FUNCODEREF(fun_make_ambiguous_393),LITREF(lit_249),T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_394 = YPmet(FUNCODEREF(fun_loop_394),LITREF(lit_5),T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_precedes_allQ_395 = YPmet(FUNCODEREF(fun_precedes_allQ_395),LITREF(lit_251),T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(1,LITREF(lit_253)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_check_subsequent_ambiguities_396 = YPmet(FUNCODEREF(fun_check_subsequent_ambiguities_396),LITREF(lit_252),T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(2,LITREF(lit_253),LITREF(lit_255)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_397 = YPmet(FUNCODEREF(fun_insert_397),LITREF(lit_254),T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(YPPlist(1,LITREF(lit_217)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_398 = YPmet(FUNCODEREF(fun_loop_398),LITREF(lit_5),T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(3,LITREF(lit_217),LITREF(lit_20),LITREF(lit_242)),YPPlist(3,VARREF(YLlstG),VARREF(YLoptsG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  Yord_app_mets_1 = YPmet(FUNCODEREF(Yord_app_mets_1),LITREF(lit_248),T103,ENVNUL,PNUL,YPfalse);
  T111 = Yord_app_mets_1;
  VARSET(Yord_app_mets_1,T111);
  T112 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_400 = YPmet(FUNCODEREF(fun_400),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T113 = fun_400;
  VARSET(Ymet_app_unify,T113);
  lit_256 = YPPsym((P)"met-app?");
  T115 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_401 = YPmet(FUNCODEREF(fun_loop_401),LITREF(lit_5),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_20)),YPPlist(2,VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Ymet_appQ = YPmet(FUNCODEREF(Ymet_appQ),LITREF(lit_256),T114,ENVNUL,PNUL,YPfalse);
  T116 = Ymet_appQ;
  VARSET(Ymet_appQ,T116);
  lit_257 = YPPsym((P)"ord-app-mets");
  lit_258 = YPPsym((P)"gf");
  lit_259 = YPPsym((P)"ans");
  lit_260 = YPPsym((P)"ms");
  T118 = YPsig(YPPlist(2,LITREF(lit_259),LITREF(lit_260)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_403 = YPmet(FUNCODEREF(fun_col_403),LITREF(lit_216),T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(YPPlist(2,LITREF(lit_258),LITREF(lit_20)),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  Yord_app_mets = YPmet(FUNCODEREF(Yord_app_mets),LITREF(lit_257),T117,ENVNUL,PNUL,YPfalse);
  T119 = Yord_app_mets;
  VARSET(Yord_app_mets,T119);
  lit_261 = YPPsym((P)"@gen-cache-arg-pos");
  T120 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_arg_pos = YPmet(FUNCODEREF(YOgen_cache_arg_pos),LITREF(lit_261),T120,ENVNUL,PNUL,YPfalse);
  T121 = YOgen_cache_arg_pos;
  VARSET(YOgen_cache_arg_pos,T121);
  lit_262 = YPPsym((P)"@gen-cache-arg-pos-setter");
  T124 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T123 = YOgen_cache_arg_pos_setter = YPmet(FUNCODEREF(YOgen_cache_arg_pos_setter),LITREF(lit_262),T124,ENVNUL,PNUL,YPfalse);
  T126 = YOgen_cache_arg_pos_setter;
  T125 = VARSET(YOgen_cache_arg_pos_setter,T126);
  T122 = T125;
  return T122;
}

P Y___main_9___() {
  P T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_263 = YPPsym((P)"@gen-cache-singletons");
  T0 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_singletons = YPmet(FUNCODEREF(YOgen_cache_singletons),LITREF(lit_263),T0,ENVNUL,PNUL,YPfalse);
  T1 = YOgen_cache_singletons;
  VARSET(YOgen_cache_singletons,T1);
  lit_264 = YPPsym((P)"@gen-cache-singletons-setter");
  T2 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_singletons_setter = YPmet(FUNCODEREF(YOgen_cache_singletons_setter),LITREF(lit_264),T2,ENVNUL,PNUL,YPfalse);
  T3 = YOgen_cache_singletons_setter;
  VARSET(YOgen_cache_singletons_setter,T3);
  lit_265 = YPPsym((P)"@gen-cache-classes");
  T4 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOgen_cache_classes = YPmet(FUNCODEREF(YOgen_cache_classes),LITREF(lit_265),T4,ENVNUL,PNUL,YPfalse);
  T5 = YOgen_cache_classes;
  VARSET(YOgen_cache_classes,T5);
  lit_266 = YPPsym((P)"@gen-cache-classes-setter");
  T6 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOgen_cache_classes_setter = YPmet(FUNCODEREF(YOgen_cache_classes_setter),LITREF(lit_266),T6,ENVNUL,PNUL,YPfalse);
  T7 = YOgen_cache_classes_setter;
  VARSET(YOgen_cache_classes_setter,T7);
  lit_267 = YPPsym((P)"method-accessor-offset");
  T8 = YPsig(YPPlist(3,LITREF(lit_23),LITREF(lit_24),LITREF(lit_20)),YPPlist(3,VARREF(YLgenG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Ymethod_accessor_offset = YPmet(FUNCODEREF(Ymethod_accessor_offset),LITREF(lit_267),T8,ENVNUL,PNUL,YPfalse);
  T9 = Ymethod_accessor_offset;
  VARSET(Ymethod_accessor_offset,T9);
  lit_268 = YPPsym((P)"@singleton-spec?");
  T10 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOsingleton_specQ = YPmet(FUNCODEREF(YOsingleton_specQ),LITREF(lit_268),T10,ENVNUL,PNUL,YPfalse);
  T11 = YOsingleton_specQ;
  VARSET(YOsingleton_specQ,T11);
  lit_269 = YPPsym((P)"@subclass-spec?");
  T12 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOsubclass_specQ = YPmet(FUNCODEREF(YOsubclass_specQ),LITREF(lit_269),T12,ENVNUL,PNUL,YPfalse);
  T13 = YOsubclass_specQ;
  VARSET(YOsubclass_specQ,T13);
  lit_270 = YPPsym((P)"@union-spec?");
  T14 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOunion_specQ = YPmet(FUNCODEREF(YOunion_specQ),LITREF(lit_270),T14,ENVNUL,PNUL,YPfalse);
  T15 = YOunion_specQ;
  VARSET(YOunion_specQ,T15);
  lit_271 = YPPsym((P)"@precise-spec?");
  T16 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOprecise_specQ = YPmet(FUNCODEREF(YOprecise_specQ),LITREF(lit_271),T16,ENVNUL,PNUL,YPfalse);
  T17 = YOprecise_specQ;
  VARSET(YOprecise_specQ,T17);
  lit_272 = YPPsym((P)"@mets-unspecialized-at?");
  lit_273 = YPPsym((P)"pos");
  T19 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_416 = YPmet(FUNCODEREF(fun_416),YPfalse,T19,ENVNUL,PNUL,YPfalse);
  T18 = YPsig(YPPlist(2,LITREF(lit_217),LITREF(lit_273)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmets_unspecialized_atQ = YPmet(FUNCODEREF(YOmets_unspecialized_atQ),LITREF(lit_272),T18,ENVNUL,PNUL,YPfalse);
  T20 = YOmets_unspecialized_atQ;
  VARSET(YOmets_unspecialized_atQ,T20);
  lit_274 = YPPsym((P)"@prune-mets-by-type-at");
  lit_275 = YPPsym((P)"type");
  T22 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_418 = YPmet(FUNCODEREF(fun_418),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(3,LITREF(lit_217),LITREF(lit_275),LITREF(lit_273)),YPPlist(3,VARREF(YLlstG),VARREF(YLtypeG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLmetsG),Ynil);
  YOprune_mets_by_type_at = YPmet(FUNCODEREF(YOprune_mets_by_type_at),LITREF(lit_274),T21,ENVNUL,PNUL,YPfalse);
  T23 = YOprune_mets_by_type_at;
  VARSET(YOprune_mets_by_type_at,T23);
  lit_276 = YPPsym((P)"@mets-specs-at");
  T25 = YPsig(YPPlist(1,LITREF(lit_24)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_420 = YPmet(FUNCODEREF(fun_420),YPfalse,T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(2,LITREF(lit_217),LITREF(lit_273)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_specs_at = YPmet(FUNCODEREF(YOmets_specs_at),LITREF(lit_276),T24,ENVNUL,PNUL,YPfalse);
  T26 = YOmets_specs_at;
  VARSET(YOmets_specs_at,T26);
  lit_277 = YPPsym((P)"@mets-singletons-at");
  lit_278 = YPPsym((P)"spec");
  T28 = YPsig(YPPlist(1,LITREF(lit_278)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_422 = YPmet(FUNCODEREF(fun_422),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(2,LITREF(lit_217),LITREF(lit_273)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_singletons_at = YPmet(FUNCODEREF(YOmets_singletons_at),LITREF(lit_277),T27,ENVNUL,PNUL,YPfalse);
  T29 = YOmets_singletons_at;
  VARSET(YOmets_singletons_at,T29);
  lit_279 = YPPsym((P)"@mets-subclasses-at");
  T31 = YPsig(YPPlist(1,LITREF(lit_278)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_424 = YPmet(FUNCODEREF(fun_424),YPfalse,T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(YPPlist(2,LITREF(lit_217),LITREF(lit_273)),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmets_subclasses_at = YPmet(FUNCODEREF(YOmets_subclasses_at),LITREF(lit_279),T30,ENVNUL,PNUL,YPfalse);
  T32 = YOmets_subclasses_at;
  VARSET(YOmets_subclasses_at,T32);
  lit_280 = YPPsym((P)"gen-lookup-miss-1-using");
  lit_281 = YPPsym((P)"instance");
  lit_282 = YPPsym((P)"all-assocs");
  lit_283 = YPPsym((P)"all-assocs-setter");
  lit_284 = YPPsym((P)"cache");
  lit_285 = YPPsym((P)"sorted-mets");
  lit_286 = YPPsym((P)"assocs");
  T34 = YPsig(YPPlist(1,LITREF(lit_286)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_426 = YPmet(FUNCODEREF(fun_loop_426),LITREF(lit_5),T34,ENVNUL,PNUL,YPfalse);
  T33 = YPsig(YPPlist(10,LITREF(lit_163),LITREF(lit_281),LITREF(lit_282),LITREF(lit_283),LITREF(lit_23),LITREF(lit_284),LITREF(lit_217),LITREF(lit_285),LITREF(lit_17),LITREF(lit_20)),YPPlist(10,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLoptsG)),YPfalse,YPint((P)10),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss_1_using = YPmet(FUNCODEREF(Ygen_lookup_miss_1_using),LITREF(lit_280),T33,ENVNUL,PNUL,YPfalse);
  T35 = Ygen_lookup_miss_1_using;
  VARSET(Ygen_lookup_miss_1_using,T35);
  lit_287 = YPPsym((P)"@specd-args");
  T37 = YPsig(YPPlist(1,LITREF(lit_197)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_copy_428 = YPmet(FUNCODEREF(fun_copy_428),LITREF(lit_196),T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(YPPlist(3,LITREF(lit_20),LITREF(lit_17),LITREF(lit_237)),YPPlist(3,VARREF(YLoptsG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLoptsG),Ynil);
  YOspecd_args = YPmet(FUNCODEREF(YOspecd_args),LITREF(lit_287),T36,ENVNUL,PNUL,YPfalse);
  T38 = YOspecd_args;
  VARSET(YOspecd_args,T38);
  lit_288 = YPPsym((P)"ensure-singleton-cache");
  lit_289 = YPPsym((P)"singletons");
  T40 = YPsig(YPPlist(1,LITREF(lit_289)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_430 = YPmet(FUNCODEREF(fun_loop_430),LITREF(lit_5),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(6,LITREF(lit_23),LITREF(lit_284),LITREF(lit_217),LITREF(lit_285),LITREF(lit_17),LITREF(lit_20)),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  Yensure_singleton_cache = YPmet(FUNCODEREF(Yensure_singleton_cache),LITREF(lit_288),T39,ENVNUL,PNUL,YPfalse);
  T41 = Yensure_singleton_cache;
  VARSET(Yensure_singleton_cache,T41);
  lit_290 = YPPsym((P)"gen-lookup-miss-1");
  lit_291 = YPPsym((P)"ocache");
  T42 = YPsig(YPPlist(6,LITREF(lit_23),LITREF(lit_291),LITREF(lit_217),LITREF(lit_285),LITREF(lit_17),LITREF(lit_20)),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss_1 = YPmet(FUNCODEREF(Ygen_lookup_miss_1),LITREF(lit_290),T42,ENVNUL,PNUL,YPfalse);
  T43 = Ygen_lookup_miss_1;
  VARSET(Ygen_lookup_miss_1,T43);
  lit_292 = YPPsym((P)"gen-lookup-miss");
  T44 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_20)),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ygen_lookup_miss = YPmet(FUNCODEREF(Ygen_lookup_miss),LITREF(lit_292),T44,ENVNUL,PNUL,YPfalse);
  T45 = Ygen_lookup_miss;
  VARSET(Ygen_lookup_miss,T45);
  T46 = (P)YPpair(VARREF(Ynil),VARREF(Ynil));
  VARSET(YDmissed_dispatch,T46);
  lit_293 = YPPsym((P)"choose-methods");
  lit_294 = YPsb((P)"No Applicable Methods Error when calling %= on %=");
  T47 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_20)),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  Ychoose_methods = YPmet(FUNCODEREF(Ychoose_methods),LITREF(lit_293),T47,ENVNUL,PNUL,YPfalse);
  T48 = Ychoose_methods;
  VARSET(Ychoose_methods,T48);
  lit_295 = YPPsym((P)"%dispatch");
  T49 = YPsig(YPPlist(1,LITREF(lit_20)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YPdispatch = YPmet(FUNCODEREF(YPdispatch),LITREF(lit_295),T49,ENVNUL,PNUL,YPfalse);
  T50 = YPdispatch;
  VARSET(YPdispatch,T50);
  lit_296 = YPPsym((P)"%patch-early-generic");
  lit_297 = YPPsym((P)"generic");
  T51 = YPsig(YPPlist(1,LITREF(lit_297)),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPpatch_early_generic = YPmet(FUNCODEREF(YPpatch_early_generic),LITREF(lit_296),T51,ENVNUL,PNUL,YPfalse);
  T52 = YPpatch_early_generic;
  VARSET(YPpatch_early_generic,T52);
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
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_id));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_id_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_row));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_row_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytype_object));
  T54 = CALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytype_object_setter));
  T53 = T54;
  return T53;
}

P Y___main_10___() {
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
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
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_location));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_location_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_count));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_count_setter));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_vec_storage));
  CALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_vec_storage_setter));
  lit_298 = YPPsym((P)"fun-names");
  T0 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_names = YPmet(FUNCODEREF(Yfun_names),LITREF(lit_298),T0,ENVNUL,PNUL,YPfalse);
  T1 = Yfun_names;
  VARSET(Yfun_names,T1);
  lit_299 = YPPsym((P)"fun-names-setter");
  T2 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_names_setter = YPmet(FUNCODEREF(Yfun_names_setter),LITREF(lit_299),T2,ENVNUL,PNUL,YPfalse);
  T3 = Yfun_names_setter;
  VARSET(Yfun_names_setter,T3);
  lit_300 = YPPsym((P)"fun-specs");
  T6 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T5 = Yfun_specs = YPmet(FUNCODEREF(Yfun_specs),LITREF(lit_300),T6,ENVNUL,PNUL,YPfalse);
  T8 = Yfun_specs;
  T7 = VARSET(Yfun_specs,T8);
  T4 = T7;
  return T4;
}

P Y___main_11___() {
  P T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171;
  P T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155;
  P T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139;
  P T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123;
  P T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107;
  P T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91;
  P T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75;
  P T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_301 = YPPsym((P)"fun-specs-setter");
  T0 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_specs_setter = YPmet(FUNCODEREF(Yfun_specs_setter),LITREF(lit_301),T0,ENVNUL,PNUL,YPfalse);
  T1 = Yfun_specs_setter;
  VARSET(Yfun_specs_setter,T1);
  lit_302 = YPPsym((P)"fun-nary?");
  T2 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_naryQ = YPmet(FUNCODEREF(Yfun_naryQ),LITREF(lit_302),T2,ENVNUL,PNUL,YPfalse);
  T3 = Yfun_naryQ;
  VARSET(Yfun_naryQ,T3);
  lit_303 = YPPsym((P)"fun-nary?-setter");
  T4 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_naryQ_setter = YPmet(FUNCODEREF(Yfun_naryQ_setter),LITREF(lit_303),T4,ENVNUL,PNUL,YPfalse);
  T5 = Yfun_naryQ_setter;
  VARSET(Yfun_naryQ_setter,T5);
  lit_304 = YPPsym((P)"fun-arity");
  T6 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_arity = YPmet(FUNCODEREF(Yfun_arity),LITREF(lit_304),T6,ENVNUL,PNUL,YPfalse);
  T7 = Yfun_arity;
  VARSET(Yfun_arity,T7);
  lit_305 = YPPsym((P)"fun-arity-setter");
  T8 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_arity_setter = YPmet(FUNCODEREF(Yfun_arity_setter),LITREF(lit_305),T8,ENVNUL,PNUL,YPfalse);
  T9 = Yfun_arity_setter;
  VARSET(Yfun_arity_setter,T9);
  lit_306 = YPPsym((P)"fun-val");
  T10 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_val = YPmet(FUNCODEREF(Yfun_val),LITREF(lit_306),T10,ENVNUL,PNUL,YPfalse);
  T11 = Yfun_val;
  VARSET(Yfun_val,T11);
  lit_307 = YPPsym((P)"fun-val-setter");
  T12 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_val_setter = YPmet(FUNCODEREF(Yfun_val_setter),LITREF(lit_307),T12,ENVNUL,PNUL,YPfalse);
  T13 = Yfun_val_setter;
  VARSET(Yfun_val_setter,T13);
  lit_308 = YPPsym((P)"fun-unification-vars");
  T14 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfun_unification_vars = YPmet(FUNCODEREF(Yfun_unification_vars),LITREF(lit_308),T14,ENVNUL,PNUL,YPfalse);
  T15 = Yfun_unification_vars;
  VARSET(Yfun_unification_vars,T15);
  lit_309 = YPPsym((P)"fun-unification-vars-setter");
  T16 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yfun_unification_vars_setter = YPmet(FUNCODEREF(Yfun_unification_vars_setter),LITREF(lit_309),T16,ENVNUL,PNUL,YPfalse);
  T17 = Yfun_unification_vars_setter;
  VARSET(Yfun_unification_vars_setter,T17);
  VARSET(YLparentsG,VARREF(YLlstG));
  VARSET(YLpropsG,VARREF(YLlstG));
  lit_310 = YPPsym((P)"object-class");
  T18 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_class = YPmet(FUNCODEREF(Yobject_class),LITREF(lit_310),T18,ENVNUL,PNUL,YPfalse);
  T19 = Yobject_class;
  VARSET(Yobject_class,T19);
  lit_311 = YPPsym((P)"@class-ancestors");
  T20 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOclass_ancestors = YPmet(FUNCODEREF(YOclass_ancestors),LITREF(lit_311),T20,ENVNUL,PNUL,YPfalse);
  T21 = YOclass_ancestors;
  VARSET(YOclass_ancestors,T21);
  lit_312 = YPPsym((P)"class-ordered-parents");
  lit_313 = YPPsym((P)"merge-lists");
  lit_314 = YPPsym((P)"partial-cpl");
  lit_315 = YPPsym((P)"remaining-lists");
  lit_316 = YPPsym((P)"unconstrained-class");
  lit_317 = YPPsym((P)"p-in-and-unconstrained-in?");
  lit_318 = YPPsym((P)"p-unconstrained-in?");
  lit_319 = YPPsym((P)"unconstrained-class-in-parents");
  lit_320 = YPPsym((P)"remove-next");
  lit_321 = YPsb((P)"inconsistent precedence graph");
  T28 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_p_in_and_unconstrained_inQ_457 = YPmet(FUNCODEREF(fun_p_in_and_unconstrained_inQ_457),LITREF(lit_317),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_p_unconstrained_inQ_458 = YPmet(FUNCODEREF(fun_p_unconstrained_inQ_458),LITREF(lit_318),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,LITREF(lit_158)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unconstrained_class_459 = YPmet(FUNCODEREF(fun_unconstrained_class_459),LITREF(lit_316),T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(YPPlist(1,LITREF(lit_156)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unconstrained_class_in_parents_460 = YPmet(FUNCODEREF(fun_unconstrained_class_in_parents_460),LITREF(lit_319),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_remove_next_461 = YPmet(FUNCODEREF(fun_remove_next_461),LITREF(lit_320),T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(YPPlist(2,LITREF(lit_314),LITREF(lit_315)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_merge_lists_462 = YPmet(FUNCODEREF(fun_merge_lists_462),LITREF(lit_313),T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(YPPlist(1,LITREF(lit_156)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLparentsG),Ynil);
  Yclass_ordered_parents = YPmet(FUNCODEREF(Yclass_ordered_parents),LITREF(lit_312),T22,ENVNUL,PNUL,YPfalse);
  T29 = Yclass_ordered_parents;
  VARSET(Yclass_ordered_parents,T29);
  lit_322 = YPPsym((P)"@class-direct-props");
  T30 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YOclass_direct_props = YPmet(FUNCODEREF(YOclass_direct_props),LITREF(lit_322),T30,ENVNUL,PNUL,YPfalse);
  T31 = YOclass_direct_props;
  VARSET(YOclass_direct_props,T31);
  lit_323 = YPPsym((P)"class-ordered-props");
  T32 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLpropsG),Ynil);
  Yclass_ordered_props = YPmet(FUNCODEREF(Yclass_ordered_props),LITREF(lit_323),T32,ENVNUL,PNUL,YPfalse);
  T33 = Yclass_ordered_props;
  VARSET(Yclass_ordered_props,T33);
  lit_324 = YPPsym((P)"del-class");
  T34 = YPsig(YPPlist(1,LITREF(lit_26)),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Ydel_class = YPmet(FUNCODEREF(Ydel_class),LITREF(lit_324),T34,ENVNUL,PNUL,YPfalse);
  T35 = Ydel_class;
  VARSET(Ydel_class,T35);
  lit_325 = YPPsym((P)"fab-class");
  lit_326 = YPPsym((P)"parents");
  lit_327 = YPPsym((P)"parent");
  T37 = YPsig(YPPlist(1,LITREF(lit_327)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_467 = YPmet(FUNCODEREF(fun_467),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_326)),YPPlist(2,VARREF(YLsymG),VARREF(YLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  Yfab_class = YPmet(FUNCODEREF(Yfab_class),LITREF(lit_325),T36,ENVNUL,PNUL,YPfalse);
  T38 = Yfab_class;
  VARSET(Yfab_class,T38);
  lit_328 = YPPsym((P)"refab-class");
  lit_329 = YPPsym((P)"old-class");
  T39 = YPsig(YPPlist(2,LITREF(lit_329),LITREF(lit_326)),YPPlist(2,VARREF(YLclassG),VARREF(YLparentsG)),YPfalse,YPint((P)2),VARREF(YLclassG),Ynil);
  Yrefab_class = YPmet(FUNCODEREF(Yrefab_class),LITREF(lit_328),T39,ENVNUL,PNUL,YPfalse);
  T40 = Yrefab_class;
  VARSET(Yrefab_class,T40);
  lit_330 = YPPsym((P)"object-props");
  T41 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_props = YPmet(FUNCODEREF(Yobject_props),LITREF(lit_330),T41,ENVNUL,PNUL,YPfalse);
  T42 = Yobject_props;
  VARSET(Yobject_props,T42);
  lit_331 = YPPsym((P)"object-parents");
  T43 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yobject_parents = YPmet(FUNCODEREF(Yobject_parents),LITREF(lit_331),T43,ENVNUL,PNUL,YPfalse);
  T44 = Yobject_parents;
  VARSET(Yobject_parents,T44);
  VARSET(YDgetter_not_found,YPint((P)-1));
  lit_332 = YPPsym((P)"ensure-fresh-object");
  T45 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yensure_fresh_object = YPmet(FUNCODEREF(Yensure_fresh_object),LITREF(lit_332),T45,ENVNUL,PNUL,YPfalse);
  T46 = Yensure_fresh_object;
  VARSET(Yensure_fresh_object,T46);
  lit_333 = YPPsym((P)"prop-offset");
  lit_334 = YPPsym((P)"object");
  T48 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_18)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_473 = YPmet(FUNCODEREF(fun_loop_473),LITREF(lit_5),T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(YPPlist(2,LITREF(lit_334),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  Yprop_offset = YPmet(FUNCODEREF(Yprop_offset),LITREF(lit_333),T47,ENVNUL,PNUL,YPfalse);
  T49 = Yprop_offset;
  VARSET(Yprop_offset,T49);
  VARSET(YTreport_prop_unbound_errorsQT,YPtrue);
  lit_335 = YPPsym((P)"%prop-unbound-error");
  lit_336 = YPsb((P)"property unbound");
  T50 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPprop_unbound_error = YPmet(FUNCODEREF(YPprop_unbound_error),LITREF(lit_335),T50,ENVNUL,PNUL,YPfalse);
  T51 = YPprop_unbound_error;
  VARSET(YPprop_unbound_error,T51);
  lit_337 = YPPsym((P)"prop-value");
  lit_338 = YPsb((P)"prop %s not found in %=");
  T52 = YPsig(YPPlist(2,LITREF(lit_334),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yprop_value = YPmet(FUNCODEREF(Yprop_value),LITREF(lit_337),T52,ENVNUL,PNUL,YPfalse);
  T53 = Yprop_value;
  VARSET(Yprop_value,T53);
  lit_339 = YPPsym((P)"prop-bound?");
  lit_340 = YPsb((P)"prop %s not found in %=");
  T54 = YPsig(YPPlist(2,LITREF(lit_334),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yprop_boundQ = YPmet(FUNCODEREF(Yprop_boundQ),LITREF(lit_339),T54,ENVNUL,PNUL,YPfalse);
  T55 = Yprop_boundQ;
  VARSET(Yprop_boundQ,T55);
  lit_341 = YPPsym((P)"prop-value-setter");
  lit_342 = YPsb((P)"prop %s not found in %=");
  T56 = YPsig(YPPlist(3,LITREF(lit_30),LITREF(lit_334),LITREF(lit_16)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yprop_value_setter = YPmet(FUNCODEREF(Yprop_value_setter),LITREF(lit_341),T56,ENVNUL,PNUL,YPfalse);
  T57 = Yprop_value_setter;
  VARSET(Yprop_value_setter,T57);
  lit_343 = YPPsym((P)"%isa");
  lit_344 = YPPsym((P)"getters");
  lit_345 = YPPsym((P)"vals");
  T59 = YPsig(YPPlist(2,LITREF(lit_344),LITREF(lit_345)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_479 = YPmet(FUNCODEREF(fun_loop_479),LITREF(lit_5),T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(YPPlist(3,LITREF(lit_327),LITREF(lit_344),LITREF(lit_345)),YPPlist(3,VARREF(YLclassG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YPisa = YPmet(FUNCODEREF(YPisa),LITREF(lit_343),T58,ENVNUL,PNUL,YPfalse);
  T60 = YPisa;
  VARSET(YPisa,T60);
  lit_346 = YPPsym((P)"find-getter");
  lit_347 = YPsb((P)"COULDN'T FIND GETTER");
  T62 = YPsig(YPPlist(1,LITREF(lit_217)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_481 = YPmet(FUNCODEREF(fun_loop_481),LITREF(lit_5),T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_16)),YPPlist(2,VARREF(YLclassG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLmetG),Ynil);
  Yfind_getter = YPmet(FUNCODEREF(Yfind_getter),LITREF(lit_346),T61,ENVNUL,PNUL,YPfalse);
  T63 = Yfind_getter;
  VARSET(Yfind_getter,T63);
  lit_348 = YPPsym((P)"find-setter");
  lit_349 = YPPsym((P)"zetter");
  lit_350 = YPsb((P)"COULDN'T FIND SETTER");
  T65 = YPsig(YPPlist(1,LITREF(lit_217)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_483 = YPmet(FUNCODEREF(fun_loop_483),LITREF(lit_5),T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(YPPlist(3,LITREF(lit_15),LITREF(lit_275),LITREF(lit_349)),YPPlist(3,VARREF(YLclassG),VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)3),VARREF(YLmetG),Ynil);
  Yfind_setter = YPmet(FUNCODEREF(Yfind_setter),LITREF(lit_348),T64,ENVNUL,PNUL,YPfalse);
  T66 = Yfind_setter;
  VARSET(Yfind_setter,T66);
  lit_351 = YPPsym((P)"forward-class");
  T68 = YPsig(YPPlist(1,LITREF(lit_210)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_485 = YPmet(FUNCODEREF(fun_485),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(1,LITREF(lit_329)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yforward_class = YPmet(FUNCODEREF(Yforward_class),LITREF(lit_351),T67,ENVNUL,PNUL,YPfalse);
  T69 = Yforward_class;
  VARSET(Yforward_class,T69);
  lit_352 = YPPsym((P)"@do-children");
  lit_353 = YPPsym((P)"visit");
  T71 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_visit_487 = YPmet(FUNCODEREF(fun_visit_487),LITREF(lit_353),T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(YPPlist(2,LITREF(lit_166),LITREF(lit_10)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo_children = YPmet(FUNCODEREF(YOdo_children),LITREF(lit_352),T70,ENVNUL,PNUL,YPfalse);
  T72 = YOdo_children;
  VARSET(YOdo_children,T72);
  lit_354 = YPPsym((P)"%prop");
  lit_355 = YPPsym((P)"setter");
  T74 = YPsig(YPPlist(1,LITREF(lit_27)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_489 = YPmet(FUNCODEREF(fun_489),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(YPPlist(5,LITREF(lit_15),LITREF(lit_16),LITREF(lit_355),LITREF(lit_275),LITREF(lit_183)),YPPlist(5,VARREF(YLclassG),VARREF(YLgenG),VARREF(YLgenG),VARREF(YLtypeG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YPprop = YPmet(FUNCODEREF(YPprop),LITREF(lit_354),T73,ENVNUL,PNUL,YPfalse);
  T75 = YPprop;
  VARSET(YPprop,T75);
  lit_356 = YPPsym((P)"update-instance-for-changed-class");
  T76 = YPsig(YPPlist(1,LITREF(lit_334)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yupdate_instance_for_changed_class = YPmet(FUNCODEREF(Yupdate_instance_for_changed_class),LITREF(lit_356),T76,ENVNUL,PNUL,YPfalse);
  T77 = Yupdate_instance_for_changed_class;
  VARSET(Yupdate_instance_for_changed_class,T77);
  VARSET(Yadd_prop,VARREF(YPprop));
  lit_357 = YPPsym((P)"fab-gen");
  lit_358 = YPPsym((P)"names");
  lit_359 = YPPsym((P)"nary?");
  T78 = YPsig(YPPlist(5,LITREF(lit_1),LITREF(lit_358),LITREF(lit_215),LITREF(lit_359),LITREF(lit_217)),YPPlist(5,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLlogG),VARREF(YLlstG)),YPfalse,YPint((P)5),VARREF(YLgenG),Ynil);
  Yfab_gen = YPmet(FUNCODEREF(Yfab_gen),LITREF(lit_357),T78,ENVNUL,PNUL,YPfalse);
  T79 = Yfab_gen;
  VARSET(Yfab_gen,T79);
  lit_360 = YPPsym((P)"gen-from-met");
  T81 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_494 = YPmet(FUNCODEREF(fun_494),YPfalse,T81,ENVNUL,PNUL,YPfalse);
  T80 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLgenG),Ynil);
  Ygen_from_met = YPmet(FUNCODEREF(Ygen_from_met),LITREF(lit_360),T80,ENVNUL,PNUL,YPfalse);
  T82 = Ygen_from_met;
  VARSET(Ygen_from_met,T82);
  lit_361 = YPPsym((P)"%define-method");
  T83 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  YPdefine_method = YPmet(FUNCODEREF(YPdefine_method),LITREF(lit_361),T83,ENVNUL,PNUL,YPfalse);
  T84 = YPdefine_method;
  VARSET(YPdefine_method,T84);
  lit_362 = YPPsym((P)"unexec");
  lit_363 = YPPsym((P)"fun");
  T85 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_363)),YPPlist(2,VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yunexec = YPmet(FUNCODEREF(Yunexec),LITREF(lit_362),T85,ENVNUL,PNUL,YPfalse);
  T86 = Yunexec;
  VARSET(Yunexec,T86);
  lit_364 = YPPsym((P)"new");
  lit_365 = YPPsym((P)"inits");
  T88 = YPsig(YPPlist(2,LITREF(lit_327),LITREF(lit_365)),YPPlist(1,VARREF(YLtypeG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T87 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_364),T88,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ynew,T87);
  T90 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_498 = YPmet(FUNCODEREF(fun_loop_498),LITREF(lit_5),T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(2,LITREF(lit_327),LITREF(lit_365)),YPPlist(1,VARREF(YLclassG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_499 = YPmet(FUNCODEREF(fun_new_499),LITREF(lit_364),T89,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(Ynew);
  if (T93 != YPfalse) {
    T92 = VARREF(Ynew);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_new_499;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(Ynew,T91);
  lit_366 = YPPsym((P)"subtype?");
  T96 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_233)),YPPlist(2,VARREF(YLtypeG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T95 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_366),T96,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YsubtypeQ,T95);
  T98 = YPsig(YPPlist(1,LITREF(lit_222)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_500 = YPmet(FUNCODEREF(fun_500),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_233)),YPPlist(2,VARREF(YLunionG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_501 = YPmet(FUNCODEREF(fun_subtypeQ_501),LITREF(lit_366),T97,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YsubtypeQ);
  if (T101 != YPfalse) {
    T100 = VARREF(YsubtypeQ);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_subtypeQ_501;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YsubtypeQ,T99);
  T104 = YPsig(YPPlist(1,LITREF(lit_222)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_502 = YPmet(FUNCODEREF(fun_502),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_233)),YPPlist(2,VARREF(YLtypeG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_503 = YPmet(FUNCODEREF(fun_subtypeQ_503),LITREF(lit_366),T103,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(YsubtypeQ);
  if (T107 != YPfalse) {
    T106 = VARREF(YsubtypeQ);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_subtypeQ_503;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YsubtypeQ,T105);
  T110 = YPsig(YPPlist(1,LITREF(lit_222)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_504 = YPmet(FUNCODEREF(fun_504),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_233)),YPPlist(2,VARREF(YLunionG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_505 = YPmet(FUNCODEREF(fun_subtypeQ_505),LITREF(lit_366),T109,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YsubtypeQ);
  if (T113 != YPfalse) {
    T112 = VARREF(YsubtypeQ);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_subtypeQ_505;
  T111 = CALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YsubtypeQ,T111);
  T115 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_233)),YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_506 = YPmet(FUNCODEREF(fun_subtypeQ_506),LITREF(lit_366),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YsubtypeQ);
  if (T118 != YPfalse) {
    T117 = VARREF(YsubtypeQ);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_subtypeQ_506;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YsubtypeQ,T116);
  T120 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_233)),YPPlist(2,VARREF(YLsingletonG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_507 = YPmet(FUNCODEREF(fun_subtypeQ_507),LITREF(lit_366),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YsubtypeQ);
  if (T123 != YPfalse) {
    T122 = VARREF(YsubtypeQ);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_subtypeQ_507;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YsubtypeQ,T121);
  T125 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_233)),YPPlist(2,VARREF(YLsubclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_508 = YPmet(FUNCODEREF(fun_subtypeQ_508),LITREF(lit_366),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YsubtypeQ);
  if (T128 != YPfalse) {
    T127 = VARREF(YsubtypeQ);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_subtypeQ_508;
  T126 = CALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YsubtypeQ,T126);
  T130 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_233)),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_509 = YPmet(FUNCODEREF(fun_subtypeQ_509),LITREF(lit_366),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YsubtypeQ);
  if (T133 != YPfalse) {
    T132 = VARREF(YsubtypeQ);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_subtypeQ_509;
  T131 = CALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YsubtypeQ,T131);
  T135 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_233)),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_510 = YPmet(FUNCODEREF(fun_subtypeQ_510),LITREF(lit_366),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YsubtypeQ);
  if (T138 != YPfalse) {
    T137 = VARREF(YsubtypeQ);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_subtypeQ_510;
  T136 = CALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YsubtypeQ,T136);
  T140 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_233)),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_511 = YPmet(FUNCODEREF(fun_subtypeQ_511),LITREF(lit_366),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YsubtypeQ);
  if (T143 != YPfalse) {
    T142 = VARREF(YsubtypeQ);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_subtypeQ_511;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YsubtypeQ,T141);
  T145 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_233)),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_512 = YPmet(FUNCODEREF(fun_subtypeQ_512),LITREF(lit_366),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YsubtypeQ);
  if (T148 != YPfalse) {
    T147 = VARREF(YsubtypeQ);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_subtypeQ_512;
  T146 = CALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YsubtypeQ,T146);
  T150 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_233)),YPPlist(2,VARREF(YLsubclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_513 = YPmet(FUNCODEREF(fun_subtypeQ_513),LITREF(lit_366),T150,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YsubtypeQ);
  if (T153 != YPfalse) {
    T152 = VARREF(YsubtypeQ);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_subtypeQ_513;
  T151 = CALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YsubtypeQ,T151);
  T155 = YPsig(YPPlist(2,LITREF(lit_232),LITREF(lit_233)),YPPlist(2,VARREF(YLsingletonG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_subtypeQ_514 = YPmet(FUNCODEREF(fun_subtypeQ_514),LITREF(lit_366),T155,ENVNUL,PNUL,YPfalse);
  T158 = BOUNDP(YsubtypeQ);
  if (T158 != YPfalse) {
    T157 = VARREF(YsubtypeQ);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_subtypeQ_514;
  T156 = CALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YsubtypeQ,T156);
  lit_367 = YPPsym((P)"isa?");
  T161 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_222)),YPPlist(2,VARREF(YLanyG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T160 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_367),T161,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YisaQ,T160);
  T162 = YPsig(YPPlist(2,LITREF(lit_221),LITREF(lit_222)),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_515 = YPmet(FUNCODEREF(fun_isaQ_515),LITREF(lit_367),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(YisaQ);
  if (T165 != YPfalse) {
    T164 = VARREF(YisaQ);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_isaQ_515;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YisaQ,T163);
  T167 = YPsig(YPPlist(2,LITREF(lit_221),LITREF(lit_222)),YPPlist(2,VARREF(YLanyG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_516 = YPmet(FUNCODEREF(fun_isaQ_516),LITREF(lit_367),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YisaQ);
  if (T170 != YPfalse) {
    T169 = VARREF(YisaQ);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_isaQ_516;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YisaQ,T168);
  T172 = YPsig(YPPlist(2,LITREF(lit_221),LITREF(lit_222)),YPPlist(2,VARREF(YLanyG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_517 = YPmet(FUNCODEREF(fun_isaQ_517),LITREF(lit_367),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YisaQ);
  if (T175 != YPfalse) {
    T174 = VARREF(YisaQ);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_isaQ_517;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YisaQ,T173);
  lit_368 = YPPsym((P)"u");
  T178 = YPsig(YPPlist(1,LITREF(lit_222)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_518 = YPmet(FUNCODEREF(fun_518),YPfalse,T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(YPPlist(2,LITREF(lit_221),LITREF(lit_368)),YPPlist(2,VARREF(YLanyG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_isaQ_519 = YPmet(FUNCODEREF(fun_isaQ_519),LITREF(lit_367),T177,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(YisaQ);
  if (T181 != YPfalse) {
    T180 = VARREF(YisaQ);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_isaQ_519;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YisaQ,T179);
  lit_369 = YPPsym((P)"order-specs");
  T186 = YPsig(YPPlist(3,LITREF(lit_232),LITREF(lit_233),LITREF(lit_237)),YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  T185 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_369),T186,Ynil,YPfalse,YPfalse,YPfalse);
  T184 = VARSET(Yorder_specs,T185);
  T183 = T184;
  return T183;
}

P Y___main_12___() {
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(3,LITREF(lit_232),LITREF(lit_233),LITREF(lit_237)),YPPlist(3,VARREF(YLsingletonG),VARREF(YLsingletonG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  fun_order_specs_520 = YPmet(FUNCODEREF(fun_order_specs_520),LITREF(lit_369),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yorder_specs);
  if (T3 != YPfalse) {
    T2 = VARREF(Yorder_specs);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_order_specs_520;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yorder_specs,T1);
  T5 = YPsig(YPPlist(3,LITREF(lit_232),LITREF(lit_233),LITREF(lit_237)),YPPlist(3,VARREF(YLsingletonG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  fun_order_specs_521 = YPmet(FUNCODEREF(fun_order_specs_521),LITREF(lit_369),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(Yorder_specs);
  if (T8 != YPfalse) {
    T7 = VARREF(Yorder_specs);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_order_specs_521;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(Yorder_specs,T6);
  T10 = YPsig(YPPlist(3,LITREF(lit_232),LITREF(lit_233),LITREF(lit_237)),YPPlist(3,VARREF(YLsubclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  fun_order_specs_522 = YPmet(FUNCODEREF(fun_order_specs_522),LITREF(lit_369),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(Yorder_specs);
  if (T13 != YPfalse) {
    T12 = VARREF(Yorder_specs);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_order_specs_522;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(Yorder_specs,T11);
  T15 = YPsig(YPPlist(3,LITREF(lit_232),LITREF(lit_233),LITREF(lit_237)),YPPlist(3,VARREF(YLsubclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  fun_order_specs_523 = YPmet(FUNCODEREF(fun_order_specs_523),LITREF(lit_369),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(Yorder_specs);
  if (T18 != YPfalse) {
    T17 = VARREF(Yorder_specs);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_order_specs_523;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(Yorder_specs,T16);
  T20 = YPsig(YPPlist(3,LITREF(lit_232),LITREF(lit_233),LITREF(lit_237)),YPPlist(3,VARREF(YLclassG),VARREF(YLsubclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  fun_order_specs_524 = YPmet(FUNCODEREF(fun_order_specs_524),LITREF(lit_369),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(Yorder_specs);
  if (T23 != YPfalse) {
    T22 = VARREF(Yorder_specs);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_order_specs_524;
  T21 = CALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(Yorder_specs,T21);
  T25 = YPsig(YPPlist(3,LITREF(lit_232),LITREF(lit_233),LITREF(lit_237)),YPPlist(3,VARREF(YLclassG),VARREF(YLclassG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  fun_order_specs_525 = YPmet(FUNCODEREF(fun_order_specs_525),LITREF(lit_369),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(Yorder_specs);
  if (T28 != YPfalse) {
    T27 = VARREF(Yorder_specs);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_order_specs_525;
  T26 = CALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(Yorder_specs,T26);
  T30 = YPsig(YPPlist(3,LITREF(lit_232),LITREF(lit_233),LITREF(lit_237)),YPPlist(3,VARREF(YLtypeG),VARREF(YLtypeG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  fun_order_specs_526 = YPmet(FUNCODEREF(fun_order_specs_526),LITREF(lit_369),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(Yorder_specs);
  if (T33 != YPfalse) {
    T32 = VARREF(Yorder_specs);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_order_specs_526;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(Yorder_specs,T31);
  lit_370 = YPPsym((P)"may-isa?");
  T36 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_222)),YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  T35 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_370),T36,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ymay_isaQ,T35);
  T37 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_222)),YPPlist(2,VARREF(YLclassG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_may_isaQ_527 = YPmet(FUNCODEREF(fun_may_isaQ_527),LITREF(lit_370),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(Ymay_isaQ);
  if (T40 != YPfalse) {
    T39 = VARREF(Ymay_isaQ);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_may_isaQ_527;
  T38 = CALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(Ymay_isaQ,T38);
  T42 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_222)),YPPlist(2,VARREF(YLclassG),VARREF(YLsingletonG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_may_isaQ_528 = YPmet(FUNCODEREF(fun_may_isaQ_528),LITREF(lit_370),T42,ENVNUL,PNUL,YPfalse);
  T45 = BOUNDP(Ymay_isaQ);
  if (T45 != YPfalse) {
    T44 = VARREF(Ymay_isaQ);
  } else {
    T44 = YPfalse;
  }
  T46 = fun_may_isaQ_528;
  T43 = CALL2(1,VARREF(YPdefine_method),T44,T46);
  VARSET(Ymay_isaQ,T43);
  T47 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_222)),YPPlist(2,VARREF(YLclassG),VARREF(YLsubclassG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_may_isaQ_529 = YPmet(FUNCODEREF(fun_may_isaQ_529),LITREF(lit_370),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(Ymay_isaQ);
  if (T50 != YPfalse) {
    T49 = VARREF(Ymay_isaQ);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_may_isaQ_529;
  T48 = CALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(Ymay_isaQ,T48);
  lit_371 = YPPsym((P)"some?");
  lit_372 = YPPsym((P)"all?");
  lit_373 = YPPsym((P)"elts");
  T53 = YPsig(YPPlist(3,LITREF(lit_371),LITREF(lit_372),LITREF(lit_373)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_530 = YPmet(FUNCODEREF(fun_loop_530),LITREF(lit_5),T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(YPPlist(2,LITREF(lit_156),LITREF(lit_222)),YPPlist(2,VARREF(YLclassG),VARREF(YLunionG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  fun_may_isaQ_531 = YPmet(FUNCODEREF(fun_may_isaQ_531),LITREF(lit_370),T52,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(Ymay_isaQ);
  if (T56 != YPfalse) {
    T55 = VARREF(Ymay_isaQ);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_may_isaQ_531;
  T54 = CALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(Ymay_isaQ,T54);
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
  T58 = YPfalse;
  return T58;
}

/* MODULE ENVIRONMENT INFORMATION */


static USE_INFO use_infos[] = {
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%fi2f", NULL},
  {"%class-id-setter", NULL},
  {"%define-props", NULL},
  {"@add", NULL},
  {"%object-shells", NULL},
  {"%fab-code-refs", NULL},
  {"class-ordered-parents", &Yclass_ordered_parents},
  {"%os-name", NULL},
  {"opts-count-setter", &Yopts_count_setter},
  {"%rev!", NULL},
  {"dg", NULL},
  {"%prop-type", NULL},
  {"@do-children", &YOdo_children},
  {"@mets-unspecialized-at?", &YOmets_unspecialized_atQ},
  {"%sig-names-setter", NULL},
  {"@gen-cache-arg-pos-setter", &YOgen_cache_arg_pos_setter},
  {"%object-class-setter", NULL},
  {"%met-env-setter", NULL},
  {"%object-of", NULL},
  {"%prop-init-setter", NULL},
  {"%f-", NULL},
  {"%ftan", NULL},
  {"fun-specs-setter", &Yfun_specs_setter},
  {"fab-sym", &Yfab_sym},
  {"vec", &Yvec},
  {"%fun-cache", NULL},
  {"gen-add-met", &Ygen_add_met},
  {"dss", NULL},
  {"@order-specs", &YOorder_specs},
  {"sig-specs", &Ysig_specs},
  {"@lst", &YOlst},
  {"class-forward-setter", &Yclass_forward_setter},
  {"type-elts", &Ytype_elts},
  {"%loc-val", NULL},
  {"%class-prop-len-setter", NULL},
  {"%f/", NULL},
  {"prop-type", &Yprop_type},
  {"rep", NULL},
  {"%app-filename", NULL},
  {"@<", NULL},
  {"---main-8---", NULL},
  {"%opts-location", NULL},
  {"%open-out-file", NULL},
  {"%build-runtime-modules", NULL},
  {"%class-descendents-setter", NULL},
  {"@fun-mets", &YOfun_mets},
  {"<singleton>", &YLsingletonG},
  {"%pair", NULL},
  {"$adr-tag", NULL},
  {"%symbols-ready?", &YPsymbols_readyQ},
  {"%class-id", NULL},
  {"opts-count", &Yopts_count},
  {"@alter", &YOalter},
  {"%vlen", NULL},
  {"type-object-setter", &Ytype_object_setter},
  {"%f=", NULL},
  {"%gen-cache-missable?", NULL},
  {"<fun>", &YLfunG},
  {"%*start-running-at*", &YPTstart_running_atT},
  {"%lu", NULL},
  {"handler-info-message", &Yhandler_info_message},
  {"%gen-cache-singletons-setter", NULL},
  {"%prop-getter", NULL},
  {"@fill", &YOfill},
  {"%opts-count-setter", NULL},
  {"prop-bound?", &Yprop_boundQ},
  {"%f<", NULL},
  {"%loc-val-setter", NULL},
  {"%opts-vec-vec-setter", NULL},
  {"@len", NULL},
  {"sym-name-setter", &Ysym_name_setter},
  {"@class-ancestors", &YOclass_ancestors},
  {"gen-from-met", &Ygen_from_met},
  {"%opts-vec-vec", NULL},
  {"sig-val", &Ysig_val},
  {"<lst>", &YLlstG},
  {"fab-class", &Yfab_class},
  {"*boot-macro-module-names*", &YTboot_macro_module_namesT},
  {"<log>", &YLlogG},
  {"@gen-cache-arg-pos", &YOgen_cache_arg_pos},
  {"nul-prop", &Ynul_prop},
  {"%gen-mets-setter", NULL},
  {"fun-specs", &Yfun_specs},
  {"type-object", &Ytype_object},
  {"fun-name-setter", &Yfun_name_setter},
  {"%sig-names", NULL},
  {"%gen-refs-setter", NULL},
  {"%fp-reg-setter", NULL},
  {"prop-owner-setter", &Yprop_owner_setter},
  {"%fu", NULL},
  {"%met-src-setter", NULL},
  {"%f+", NULL},
  {"@@==", &YOOEE},
  {"forward-class", &Yforward_class},
  {"%%apply", NULL},
  {"%current-out-port", NULL},
  {"@fun-unification-vars", &YOfun_unification_vars},
  {"%str!", NULL},
  {"%str", NULL},
  {"%prop-elt-setter", NULL},
  {"%fapply", NULL},
  {"sym-name", &Ysym_name},
  {"*boot-macro-expanders*", &YTboot_macro_expandersT},
  {"%i^", NULL},
  {"df", NULL},
  {"prop-value-at", NULL},
  {"%indirect-object?", NULL},
  {"%allocate-stack", NULL},
  {"class-parents-setter", &Yclass_parents_setter},
  {"%file-mtime", NULL},
  {"%with-monitor", &YPwith_monitor},
  {"%fun-cache-setter", NULL},
  {"%prop-owner", NULL},
  {"%fun-reg", NULL},
  {"fun-name", &Yfun_name},
  {"@pair", NULL},
  {"force-names-into-boot-module", NULL},
  {"gen-lookup-miss-1-using", &Ygen_lookup_miss_1_using},
  {"add-prop", &Yadd_prop},
  {"@precise-spec?", &YOprecise_specQ},
  {"object-class", &Yobject_class},
  {"%prop-offset", &YPprop_offset},
  {"prop-owner", &Yprop_owner},
  {"fun-refs-setter", &Yfun_refs_setter},
  {"%class-mets", NULL},
  {"---main-11---", NULL},
  {"del-class", &Ydel_class},
  {"prop-type-setter", &Yprop_type_setter},
  {"%ir", NULL},
  {"%fb", NULL},
  {"%flo-dat", NULL},
  {"%i=", NULL},
  {"%untag-into", NULL},
  {"@add-new", NULL},
  {"prop-value", &Yprop_value},
  {"class-parents", &Yclass_parents},
  {"dv", NULL},
  {"%i<<<", NULL},
  {"$max-int", &YDmax_int},
  {"@do", &YOdo},
  {"may-isa?", &Ymay_isaQ},
  {"%i<", NULL},
  {"class-props-setter", &Yclass_props_setter},
  {"@fun-val", &YOfun_val},
  {"gen-cache-arg-pos-setter", &Ygen_cache_arg_pos_setter},
  {"%opts-vec", NULL},
  {"seq", NULL},
  {"fun-refs", &Yfun_refs},
  {"%int", NULL},
  {"<seq>", &YLseqG},
  {"%empty?", NULL},
  {"<any>", &YLanyG},
  {"nil", &Ynil},
  {"$gen-cache-classes-offset", &YDgen_cache_classes_offset},
  {"%iu", NULL},
  {"@oelt", NULL},
  {"@tup", &YOtup},
  {"%class-of", NULL},
  {"%tag", NULL},
  {"%get", NULL},
  {"%met", NULL},
  {"@union-spec?", &YOunion_specQ},
  {"@lst-helper", &YOlst_helper},
  {"%put", NULL},
  {"%opts-count", NULL},
  {"%gen-cache-arg-pos", NULL},
  {"%fsinh", NULL},
  {"%type-object", NULL},
  {"class-props", &Yclass_props},
  {"gen-cache-arg-pos", &Ygen_cache_arg_pos},
  {"error", &Yerror},
  {"class-ordered-props", &Yclass_ordered_props},
  {"%raw-call", NULL},
  {"%met-sig", NULL},
  {"fun-cache-setter", &Yfun_cache_setter},
  {"%sig-arity", NULL},
  {"class-mets-setter", &Yclass_mets_setter},
  {"%force-out", NULL},
  {"%sig-specs", NULL},
  {"%prop-unbound-error", &YPprop_unbound_error},
  {"%do-stack-frames", NULL},
  {"$gen-cache-singletons-offset", &YDgen_cache_singletons_offset},
  {"@empty?", NULL},
  {"fun-unification-vars-setter", &Yfun_unification_vars_setter},
  {"@+", NULL},
  {"---main-0---", NULL},
  {"@==", NULL},
  {"@class-in?", NULL},
  {"esc", NULL},
  {"<sig>", &YLsigG},
  {"@fun-arity", &YOfun_arity},
  {"%compute-parents", NULL},
  {"---main-10---", NULL},
  {"%elt", NULL},
  {"%gen-code", NULL},
  {"@fold", &YOfold},
  {"%class-parents-setter", NULL},
  {"fun-names", &Yfun_names},
  {"%ff", NULL},
  {"<opts-vec>", &YLopts_vecG},
  {"@mets-subclasses-at", &YOmets_subclasses_at},
  {"macro-expand", NULL},
  {"sig-names-setter", &Ysig_names_setter},
  {"---main-7---", NULL},
  {"%i*", NULL},
  {"---main-9---", NULL},
  {"unless", NULL},
  {"fun-cache", &Yfun_cache},
  {"%met-refs", NULL},
  {"%eof-object", NULL},
  {"class-mets", &Yclass_mets},
  {"%chr", NULL},
  {"@not", NULL},
  {"sig-unification-vars-setter", &Ysig_unification_vars_setter},
  {"@subclass-spec?", &YOsubclass_specQ},
  {"quote", NULL},
  {"%elt-setter", NULL},
  {"opts-location-setter", &Yopts_location_setter},
  {"handler-info-arguments", &Yhandler_info_arguments},
  {"@all2?", &YOall2Q},
  {"%newline", NULL},
  {"ensure-singleton-cache", &Yensure_singleton_cache},
  {"%prop-elt", NULL},
  {"%%sfab", NULL},
  {"fin", NULL},
  {"def-fun/sig-accessor", NULL},
  {"%eq?", NULL},
  {"@class-direct-props", &YOclass_direct_props},
  {"%sig-val", NULL},
  {"file-opening-error", &Yfile_opening_error},
  {"%opts-location-setter", NULL},
  {"%patch-early-generics", NULL},
  {"%finalize-props", NULL},
  {"%os-val", NULL},
  {"<col>", &YLcolG},
  {"%define-getter", NULL},
  {"<class>", &YLclassG},
  {"sig-names", &Ysig_names},
  {"%finalize-props!", &YPfinalize_propsX},
  {"fun-unification-vars", &Yfun_unification_vars},
  {"*boot-macro-names*", &YTboot_macro_namesT},
  {"%sym-nam", NULL},
  {"find-setter", &Yfind_setter},
  {"sig-arity-setter", &Ysig_arity_setter},
  {"@fun-nary?", &YOfun_naryQ},
  {"%object-class", NULL},
  {"%class-row-setter", NULL},
  {"%opts", NULL},
  {"%class-parents", NULL},
  {"%fasin", NULL},
  {"opts-location", &Yopts_location},
  {"class-row-setter", &Yclass_row_setter},
  {"gen-lookup-1-using", NULL},
  {"%add-prop", &YPadd_prop},
  {"%class", NULL},
  {"%gen-src-setter", NULL},
  {"%check-call-types", NULL},
  {"%type-elts-setter", NULL},
  {"@pick", &YOpick},
  {"@class<", &YOclassL},
  {"@elt", &YOelt},
  {"<replace-generic-restart>", &YLreplace_generic_restartG},
  {"%reparent-class-shells", NULL},
  {"%loc", NULL},
  {"@singleton-spec?", &YOsingleton_specQ},
  {"@subclass?", NULL},
  {"loc", NULL},
  {"%prop-setter", NULL},
  {"tail-setter", &Ytail_setter},
  {"%current-in-port", NULL},
  {"%untag", NULL},
  {"quasiquote", NULL},
  {"%type-object-setter", NULL},
  {"%trace-off", NULL},
  {"%lst", NULL},
  {"sig-arity", &Ysig_arity},
  {"---main-5---", NULL},
  {"%i>>", NULL},
  {"%class-mets-setter", NULL},
  {"%cat2", NULL},
  {"%sig-specs-setter", NULL},
  {"%patch-early-generic", &YPpatch_early_generic},
  {"class-row", &Yclass_row},
  {"fab-gen", &Yfab_gen},
  {"%gen-cache-missable?-setter", NULL},
  {"fun-code-setter", &Yfun_code_setter},
  {"ct", NULL},
  {"dm", NULL},
  {"%class-ancestors", NULL},
  {"%create-directory", NULL},
  {"%define-structure", NULL},
  {"%collect-direct-props", &YPcollect_direct_props},
  {"%os-val-setter", NULL},
  {"type-elts-setter", &Ytype_elts_setter},
  {"@tail-setter", NULL},
  {"ord-app-mets-1", &Yord_app_mets_1},
  {"%define-parent", NULL},
  {"%gen-cache", NULL},
  {"%ftanh", NULL},
  {"<opts>", &YLoptsG},
  {"%sig", NULL},
  {"%close-out-port", NULL},
  {"%class-direct-props", NULL},
  {"use", NULL},
  {"@fun-specs", &YOfun_specs},
  {"@del-dups", &YOdel_dups},
  {"@class-isa?", NULL},
  {"tail", &Ytail},
  {"@order-specs-class", &YOorder_specs_class},
  {"%class-direct-props-setter", NULL},
  {"@oelt-setter", NULL},
  {"%gen-refs", NULL},
  {"%sym-nam-setter", NULL},
  {"<type>", &YLtypeG},
  {"class-name-setter", &Yclass_name_setter},
  {"gen-lookup-1", NULL},
  {"incongruent-method-error", &Yincongruent_method_error},
  {"ord-app-mets", &Yord_app_mets},
  {"fun-val-setter", &Yfun_val_setter},
  {"@=", NULL},
  {"try", NULL},
  {"%f*", NULL},
  {"fun-code", &Yfun_code},
  {"<gen-cache>", &YLgen_cacheG},
  {"@fun-names", &YOfun_names},
  {"%class-prop-len", NULL},
  {"<loc>", &YLlocG},
  {"%i-", NULL},
  {"%define-hierarchy", NULL},
  {"%union", NULL},
  {"fun-env-setter", &Yfun_env_setter},
  {"%unlink-stack", NULL},
  {"set", NULL},
  {"%*used-symbols-too-early*", &YPTused_symbols_too_earlyT},
  {"%head", NULL},
  {"%fsin", NULL},
  {"prop-setter-setter", &Yprop_setter_setter},
  {"%class-row", NULL},
  {"<env>", &YLenvG},
  {"%sp-reg-setter", NULL},
  {"update-instance-for-changed-class", &Yupdate_instance_for_changed_class},
  {"%bb", NULL},
  {"@specd-args", &YOspecd_args},
  {"find-getter", &Yfind_getter},
  {"@mets-singletons-at", &YOmets_singletons_at},
  {"prop-offset", &Yprop_offset},
  {"if", NULL},
  {"class-name", &Yclass_name},
  {"%head-setter", NULL},
  {"%peek", NULL},
  {"def", NULL},
  {"%singleton", NULL},
  {"%sig-unification-vars", NULL},
  {"%gen-cache-classes-setter", NULL},
  {"%fatan2", NULL},
  {"%macro", NULL},
  {"class-ancestors-setter", &Yclass_ancestors_setter},
  {"gen-cache-missable?-setter", &Ygen_cache_missableQ_setter},
  {"fun-env", &Yfun_env},
  {"---main-6---", NULL},
  {"def-object-class-accessor", NULL},
  {"%i+", NULL},
  {"%ft", NULL},
  {"%cb", NULL},
  {"method-accessor-offset", &Ymethod_accessor_offset},
  {"prop-setter", &Yprop_setter},
  {"@head", NULL},
  {"when", NULL},
  {"@fab", &YOfab},
  {"%fc", NULL},
  {"%fatan", NULL},
  {"%close-in-port", NULL},
  {"<props>", &YLpropsG},
  {"%gen", NULL},
  {"%opts-vec-location", NULL},
  {"bound?", NULL},
  {"@may-isa?", &YOmay_isaQ},
  {"$min-int", &YDmin_int},
  {"%gen-sig-setter", NULL},
  {"%define-tagged-structure", NULL},
  {"%vec", NULL},
  {"%met-code-setter", NULL},
  {"class-ancestors", &Yclass_ancestors},
  {"%i!", NULL},
  {"gen-cache-missable?", &Ygen_cache_missableQ},
  {"%file-exists?", NULL},
  {"%true", &YPtrue},
  {"%next-methods", NULL},
  {"%gen-cache-singletons", NULL},
  {"fun-mets-setter", &Yfun_mets_setter},
  {"prop-value-at-setter", NULL},
  {"class-gens-setter", &Yclass_gens_setter},
  {"%invoke-debugger", NULL},
  {"ensure-fresh-object", &Yensure_fresh_object},
  {"%class-forward", NULL},
  {"%define-repeated-structure", NULL},
  {"@mem?", &YOmemQ},
  {"%define-primitives", NULL},
  {"choose-methods", &Ychoose_methods},
  {"%%len", NULL},
  {"*macros-ok?*", &YTmacros_okQT},
  {"%prop-setter-setter", NULL},
  {"%%sym", NULL},
  {"%class-gens-setter", NULL},
  {"<flo>", &YLfloG},
  {"<sym>", &YLsymG},
  {"met-app?", &Ymet_appQ},
  {"%facos", NULL},
  {"%i>>>", NULL},
  {"%met-name", NULL},
  {"object-parents", &Yobject_parents},
  {"%open-in-file", NULL},
  {"gen-cache-classes-setter", &Ygen_cache_classes_setter},
  {"---main-2---", NULL},
  {"%add-met", &YPadd_met},
  {"fun-mets", &Yfun_mets},
  {"@isa?", &YOisaQ},
  {"%prop-dat-at", NULL},
  {"class-gens", &Yclass_gens},
  {"$tag-msk", NULL},
  {"%define-boxed-structure", NULL},
  {"%vnul", &YPvnul},
  {"gen-src-setter", &Ygen_src_setter},
  {"%fcos", NULL},
  {"*report-prop-unbound-errors?*", &YTreport_prop_unbound_errorsQT},
  {"fun-congruent?", &Yfun_congruentQ},
  {"@mets-specs-at", &YOmets_specs_at},
  {"%class-name-setter", NULL},
  {"@gen-cache-classes-setter", &YOgen_cache_classes_setter},
  {"fun-arity-setter", &Yfun_arity_setter},
  {"%sym", NULL},
  {"@telt", &YOtelt},
  {"<prop>", &YLpropG},
  {"gen-cache-classes", &Ygen_cache_classes},
  {"let", NULL},
  {"%trace-on", NULL},
  {"%symbols", &YPsymbols},
  {"@subtype?", &YOsubtypeQ},
  {"new", &Ynew},
  {"%met-sig-setter", NULL},
  {"<gen>", &YLgenG},
  {"sig-nary?-setter", &Ysig_naryQ_setter},
  {"*restarts-ok?*", &YTrestarts_okQT},
  {"%flo-bits", NULL},
  {"%prop-owner-setter", NULL},
  {"%i<<", NULL},
  {"nul", &Ynul},
  {"gen-src", &Ygen_src},
  {"%ready", NULL},
  {"%tag-into", NULL},
  {"class-id-setter", &Yclass_id_setter},
  {"%prop-getter-setter", NULL},
  {"one-nil", &Yone_nil},
  {"@vec", &YOvec},
  {"object-props", &Yobject_props},
  {"%selt-setter", NULL},
  {"$getter-not-found", &YDgetter_not_found},
  {"opts-vec-storage-setter", &Yopts_vec_storage_setter},
  {"isa", NULL},
  {"%str-eq?", NULL},
  {"dp", NULL},
  {"@map", &YOmap},
  {"%file-type", NULL},
  {"%met-prop-len", &YPmet_prop_len},
  {"%lb", NULL},
  {"type-error", &Ytype_error},
  {"%vu", NULL},
  {"<simple-handler-info>", &YLsimple_handler_infoG},
  {"@olen", NULL},
  {"gen-lookup-miss", &Ygen_lookup_miss},
  {"%ready?", NULL},
  {"ct-also", NULL},
  {"met-app-unify", &Ymet_app_unify},
  {"sig-nary?", &Ysig_naryQ},
  {"<int>", &YLintG},
  {"<str>", &YLstrG},
  {"@gen-cache-classes", &YOgen_cache_classes},
  {"%it/", NULL},
  {"%velt-setter", NULL},
  {"fun-arity", &Yfun_arity},
  {"%velt", NULL},
  {"%sig-val-setter", NULL},
  {"%gen-src", NULL},
  {"class-id", &Yclass_id},
  {"use/export", NULL},
  {"%ib", NULL},
  {"%met-name-setter", NULL},
  {"---main-1---", NULL},
  {"%early-dispatch", &YPearly_dispatch},
  {"opts-vec-storage", &Yopts_vec_storage},
  {"lst", &Ylst},
  {"type-class-setter", &Ytype_class_setter},
  {"%%mep-apply", NULL},
  {"%iv", NULL},
  {"%gen-sig", NULL},
  {"<body>", &YLbodyG},
  {"fun-same-met?", &Yfun_same_metQ},
  {"%sb", NULL},
  {"%gen-code-setter", NULL},
  {"%type-class-setter", NULL},
  {"%met-code", NULL},
  {"%gen-cache-arg-pos-setter", NULL},
  {"<tup>", &YLtupG},
  {"%gen-mets", NULL},
  {"%su", NULL},
  {"class-prop-len-setter", &Yclass_prop_len_setter},
  {"@find", &YOfind},
  {"%class-descendents", NULL},
  {"%i?", NULL},
  {"%class-props-setter", NULL},
  {"sig-unification-vars", &Ysig_unification_vars},
  {"tup", &Ytup},
  {"%class-props", NULL},
  {"isa?", &YisaQ},
  {"%met-env", NULL},
  {"prop-bound-at?", NULL},
  {"unknown-function-error", &Yunknown_function_error},
  {"%snul", &YPsnul},
  {"ds", NULL},
  {"head-setter", &Yhead_setter},
  {"fun", NULL},
  {"type-class", &Ytype_class},
  {"fun-sig-setter", &Yfun_sig_setter},
  {"%sig-nary?-setter", NULL},
  {"%prop", &YPprop},
  {"<union>", &YLunionG},
  {"@head-setter", NULL},
  {"%i&", NULL},
  {"%fp-reg", NULL},
  {"prop-getter-setter", &Yprop_getter_setter},
  {"@tail", NULL},
  {"%met-src", NULL},
  {"%isa", &YPisa},
  {"%code-ref", NULL},
  {"class-prop-len", &Yclass_prop_len},
  {"%class-gens", NULL},
  {"@rev!", &YOrevX},
  {"%loc-off-setter", NULL},
  {"%gen-cache-classes", NULL},
  {"%fsqrt", NULL},
  {"%type-elts", NULL},
  {"class-direct-props-setter", &Yclass_direct_props_setter},
  {"@gen-cache-singletons-setter", &YOgen_cache_singletons_setter},
  {"$missed-dispatch", &YDmissed_dispatch},
  {"%raw", NULL},
  {"%%vfab", NULL},
  {"%gen-name", NULL},
  {"<specs>", &YLspecsG},
  {"head", &Yhead},
  {"fun-nary?-setter", &Yfun_naryQ_setter},
  {"fun-sig", &Yfun_sig},
  {"<mag>", &YLmagG},
  {"%app-args", NULL},
  {"and", NULL},
  {"@velt-setter", &YOvelt_setter},
  {"<num>", &YLnumG},
  {"<vec>", &YLvecG},
  {"@singleton-isa?", NULL},
  {"prop-getter", &Yprop_getter},
  {"%prop-init", NULL},
  {"%define-setter", NULL},
  {"unexec", &Yunexec},
  {"@any?", &YOanyQ},
  {"%loc-off", NULL},
  {"fun-spec", &Yfun_spec},
  {"prop-init-setter", &Yprop_init_setter},
  {"or", NULL},
  {"%sig-unification-vars-setter", NULL},
  {"%flog", NULL},
  {"%c<", NULL},
  {"%class-name", NULL},
  {"@prune-mets-by-type-at", &YOprune_mets_by_type_at},
  {"class-direct-props", &Yclass_direct_props},
  {"%%prop", NULL},
  {"%gen-name-setter", NULL},
  {"%break", NULL},
  {"mif", NULL},
  {"%slen", NULL},
  {"%fcosh", NULL},
  {"dc", NULL},
  {"fun-src-setter", &Yfun_src_setter},
  {"%process-module", NULL},
  {"<met>", &YLmetG},
  {"%sp-reg", NULL},
  {"class-descendents-setter", &Yclass_descendents_setter},
  {"%class-ancestors-setter", NULL},
  {"%define-structure-accessors", NULL},
  {"%fpow", NULL},
  {"@cat2", &YOcat2},
  {"%opts-vec-count", NULL},
  {"@type-equal?", &YOtype_equalQ},
  {"order-specs", &Yorder_specs},
  {"%tag-bits", NULL},
  {"%vec!", NULL},
  {"%%macro", &YPPmacro},
  {"%define-accessor", NULL},
  {"%str-eq?-loop", NULL},
  {"<parents>", &YLparentsG},
  {"prop-init", &Yprop_init},
  {"@gen-cache-singletons", &YOgen_cache_singletons},
  {"order-mets", &Yorder_mets},
  {"%sig-nary?", NULL},
  {"fun-nary?", &Yfun_naryQ},
  {"---main-4---", NULL},
  {"%opts-vec-count-setter", NULL},
  {"@@empty?", &YOOemptyQ},
  {"<subclass>", &YLsubclassG},
  {"%cu", NULL},
  {"gen-cache-singletons-setter", &Ygen_cache_singletons_setter},
  {"%met-refs-setter", NULL},
  {"export", NULL},
  {"fun-src", &Yfun_src},
  {"cond", NULL},
  {"class-descendents", &Yclass_descendents},
  {"%raw-alloc", NULL},
  {"%clone", NULL},
  {"---main-3---", NULL},
  {"%puts", NULL},
  {"%flo", NULL},
  {"<mets>", &YLmetsG},
  {"gen-refs-setter", &Ygen_refs_setter},
  {"sig-val-setter", &Ysig_val_setter},
  {"%im", NULL},
  {"%false", &YPfalse},
  {"$direct-object-class", &YDdirect_object_class},
  {"%class-shells", NULL},
  {"@velt", &YOvelt},
  {"%opts-vec-location-setter", NULL},
  {"subtype?", &YsubtypeQ},
  {"%selt", NULL},
  {"%subclass", NULL},
  {"$num-int-bits", &YDnum_int_bits},
  {"---main-12---", NULL},
  {"%class-forward-setter", NULL},
  {"%update-instance-for-changed-class", NULL},
  {"@fun-mets-setter", &YOfun_mets_setter},
  {"prop-value-setter", &Yprop_value_setter},
  {"<chr>", &YLchrG},
  {"%tail", NULL},
  {"<flat>", &YLflatG},
  {"gen-cache-singletons", &Ygen_cache_singletons},
  {"wrong-number-arguments-error", &Ywrong_number_arguments_error},
  {"%flo-dat-setter", NULL},
  {"%define-method", &YPdefine_method},
  {"dl", NULL},
  {"keyboard-interrupt", &Ykeyboard_interrupt},
  {"%sig-arity-setter", NULL},
  {"%c=", NULL},
  {"gen-lookup", NULL},
  {"%prop-type-setter", NULL},
  {"sig-specs-setter", &Ysig_specs_setter},
  {"$tag-len", NULL},
  {"gen-lookup-miss-1", &Ygen_lookup_miss_1},
  {"%dispatch", &YPdispatch},
  {"fun-names-setter", &Yfun_names_setter},
  {"%type-class", NULL},
  {"fun-val", &Yfun_val},
  {"%binding-name", NULL},
  {"gen-refs", &Ygen_refs},
  {"@all?", &YOallQ},
  {"refab-class", &Yrefab_class},
  {"%unexec", NULL},
  {"not", &Ynot},
  {"%tail-setter", NULL},
  {"class-forward", &Yclass_forward},
  {"%ft/", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%fi2f", "%fi2f"},
  {"fun-mets", "fun-mets"},
  {"gen-src-setter", "gen-src-setter"},
  {"%os-name", "%os-name"},
  {"%i<<<", "%i<<<"},
  {"dg", "dg"},
  {"ord-app-mets", "ord-app-mets"},
  {"sig-names", "sig-names"},
  {"%f-", "%f-"},
  {"nil", "nil"},
  {"fab-sym", "fab-sym"},
  {"gen-add-met", "gen-add-met"},
  {"dss", "dss"},
  {"sig-specs", "sig-specs"},
  {"@lst", "@lst"},
  {"type-class", "type-class"},
  {"%loc-val", "%loc-val"},
  {"%f/", "%f/"},
  {"rep", "rep"},
  {"@<", "@<"},
  {"%open-out-file", "%open-out-file"},
  {"%build-runtime-modules", "%build-runtime-modules"},
  {"<singleton>", "<singleton>"},
  {"%pair", "%pair"},
  {"%vlen", "%vlen"},
  {"%f=", "%f="},
  {"class-name", "class-name"},
  {"<fun>", "<fun>"},
  {"%lu", "%lu"},
  {"handler-info-message", "handler-info-message"},
  {"prop-bound?", "prop-bound?"},
  {"%f<", "%f<"},
  {"@len", "@len"},
  {"sig-val", "sig-val"},
  {"<lst>", "<lst>"},
  {"fab-class", "fab-class"},
  {"<log>", "<log>"},
  {"fun-specs", "fun-specs"},
  {"type-object", "type-object"},
  {"fun-name-setter", "fun-name-setter"},
  {"%fu", "%fu"},
  {"%f+", "%f+"},
  {"%current-out-port", "%current-out-port"},
  {"%str", "%str"},
  {"sym-name", "sym-name"},
  {"*boot-macro-expanders*", "*boot-macro-expanders*"},
  {"%i^", "%i^"},
  {"df", "df"},
  {"%allocate-stack", "%allocate-stack"},
  {"%with-monitor", "%with-monitor"},
  {"%fun-reg", "%fun-reg"},
  {"add-prop", "add-prop"},
  {"type-elts", "type-elts"},
  {"object-class", "object-class"},
  {"prop-owner", "prop-owner"},
  {"%fb", "%fb"},
  {"%slen", "%slen"},
  {"%i=", "%i="},
  {"prop-value", "prop-value"},
  {"class-parents", "class-parents"},
  {"dv", "dv"},
  {"$max-int", "$max-int"},
  {"may-isa?", "may-isa?"},
  {"%i<", "%i<"},
  {"seq", "seq"},
  {"<seq>", "<seq>"},
  {"<any>", "<any>"},
  {"%cu", "%cu"},
  {"%ib", "%ib"},
  {"%untag", "%untag"},
  {"%get", "%get"},
  {"%put", "%put"},
  {"%fsinh", "%fsinh"},
  {"class-props", "class-props"},
  {"error", "error"},
  {"%raw-call", "%raw-call"},
  {"%force-out", "%force-out"},
  {"%prop-unbound-error", "%prop-unbound-error"},
  {"%do-stack-frames", "%do-stack-frames"},
  {"@+", "@+"},
  {"@==", "@=="},
  {"esc", "esc"},
  {"%gen-code", "%gen-code"},
  {"fun-names", "fun-names"},
  {"@oelt", "@oelt"},
  {"macro-expand", "macro-expand"},
  {"%i*", "%i*"},
  {"%eof-object", "%eof-object"},
  {"quote", "quote"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"@all2?", "@all2?"},
  {"head-setter", "head-setter"},
  {"fin", "fin"},
  {"%eq?", "%eq?"},
  {"file-opening-error", "file-opening-error"},
  {"%os-val", "%os-val"},
  {"<col>", "<col>"},
  {"<class>", "<class>"},
  {"*boot-macro-names*", "*boot-macro-names*"},
  {"find-setter", "find-setter"},
  {"%fasin", "%fasin"},
  {"%check-call-types", "%check-call-types"},
  {"<replace-generic-restart>", "<replace-generic-restart>"},
  {"*macros-ok?*", "*macros-ok?*"},
  {"loc", "loc"},
  {"tail-setter", "tail-setter"},
  {"%current-in-port", "%current-in-port"},
  {"quasiquote", "quasiquote"},
  {"sig-arity", "sig-arity"},
  {"%i>>", "%i>>"},
  {"fab-gen", "fab-gen"},
  {"ct", "ct"},
  {"%create-directory", "%create-directory"},
  {"%os-val-setter", "%os-val-setter"},
  {"%vnul", "%vnul"},
  {"nul", "nul"},
  {"%ftanh", "%ftanh"},
  {"<opts>", "<opts>"},
  {"%close-out-port", "%close-out-port"},
  {"use", "use"},
  {"tail", "tail"},
  {"%gen-refs", "%gen-refs"},
  {"<type>", "<type>"},
  {"%gen-src", "%gen-src"},
  {"try", "try"},
  {"%f*", "%f*"},
  {"<loc>", "<loc>"},
  {"%i-", "%i-"},
  {"%unlink-stack", "%unlink-stack"},
  {"set", "set"},
  {"%fsin", "%fsin"},
  {"%sp-reg-setter", "%sp-reg-setter"},
  {"%bb", "%bb"},
  {"find-getter", "find-getter"},
  {"incongruent-method-error", "incongruent-method-error"},
  {"%peek", "%peek"},
  {"def", "def"},
  {"%fatan2", "%fatan2"},
  {"%ft", "%ft"},
  {"%cb", "%cb"},
  {"prop-setter", "prop-setter"},
  {"fun-val", "fun-val"},
  {"%close-in-port", "%close-in-port"},
  {"bound?", "bound?"},
  {"$min-int", "$min-int"},
  {"%vec", "%vec"},
  {"class-ancestors", "class-ancestors"},
  {"%i!", "%i!"},
  {"%file-exists?", "%file-exists?"},
  {"%next-methods", "%next-methods"},
  {"%invoke-debugger", "%invoke-debugger"},
  {"%i+", "%i+"},
  {"%iu", "%iu"},
  {"%%sym", "%%sym"},
  {"<flo>", "<flo>"},
  {"<sym>", "<sym>"},
  {"met-app?", "met-app?"},
  {"%facos", "%facos"},
  {"%i>>>", "%i>>>"},
  {"%ftan", "%ftan"},
  {"object-parents", "object-parents"},
  {"%open-in-file", "%open-in-file"},
  {"%file-mtime", "%file-mtime"},
  {"@isa?", "@isa?"},
  {"%loc-val-setter", "%loc-val-setter"},
  {"%fcos", "%fcos"},
  {"<prop>", "<prop>"},
  {"let", "let"},
  {"%symbols", "%symbols"},
  {"new", "new"},
  {"%app-filename", "%app-filename"},
  {"<gen>", "<gen>"},
  {"*restarts-ok?*", "*restarts-ok?*"},
  {"%flo-bits", "%flo-bits"},
  {"%i<<", "%i<<"},
  {"gen-src", "gen-src"},
  {"%snul", "%snul"},
  {"object-props", "object-props"},
  {"%selt-setter", "%selt-setter"},
  {"isa", "isa"},
  {"dp", "dp"},
  {"%file-type", "%file-type"},
  {"%lb", "%lb"},
  {"type-error", "type-error"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"@olen", "@olen"},
  {"%ready?", "%ready?"},
  {"ct-also", "ct-also"},
  {"sig-nary?", "sig-nary?"},
  {"<int>", "<int>"},
  {"<str>", "<str>"},
  {"%it/", "%it/"},
  {"%velt-setter", "%velt-setter"},
  {"fun-arity", "fun-arity"},
  {"%velt", "%velt"},
  {"vec", "vec"},
  {"use/export", "use/export"},
  {"lst", "lst"},
  {"%iv", "%iv"},
  {"%sb", "%sb"},
  {"%gen-code-setter", "%gen-code-setter"},
  {"%met-code", "%met-code"},
  {"<tup>", "<tup>"},
  {"*boot-macro-module-names*", "*boot-macro-module-names*"},
  {"%su", "%su"},
  {"%i?", "%i?"},
  {"sig-unification-vars", "sig-unification-vars"},
  {"isa?", "isa?"},
  {"%flog", "%flog"},
  {"unknown-function-error", "unknown-function-error"},
  {"dm", "dm"},
  {"ds", "ds"},
  {"fun", "fun"},
  {"fun-sig-setter", "fun-sig-setter"},
  {"%prop", "%prop"},
  {"<union>", "<union>"},
  {"%i&", "%i&"},
  {"%isa", "%isa"},
  {"%loc-off-setter", "%loc-off-setter"},
  {"%fsqrt", "%fsqrt"},
  {"tup", "tup"},
  {"%raw", "%raw"},
  {"head", "head"},
  {"<mag>", "<mag>"},
  {"%app-args", "%app-args"},
  {"<num>", "<num>"},
  {"<vec>", "<vec>"},
  {"prop-getter", "prop-getter"},
  {"unexec", "unexec"},
  {"prop-type", "prop-type"},
  {"%loc-off", "%loc-off"},
  {"if", "if"},
  {"%c<", "%c<"},
  {"class-direct-props", "class-direct-props"},
  {"mif", "mif"},
  {"%fcosh", "%fcosh"},
  {"dc", "dc"},
  {"%process-module", "%process-module"},
  {"<met>", "<met>"},
  {"%sp-reg", "%sp-reg"},
  {"fun-name", "fun-name"},
  {"%fpow", "%fpow"},
  {"%%macro", "%%macro"},
  {"prop-init", "prop-init"},
  {"fun-nary?", "fun-nary?"},
  {"<subclass>", "<subclass>"},
  {"%fatan", "%fatan"},
  {"export", "export"},
  {"class-descendents", "class-descendents"},
  {"%puts", "%puts"},
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"gen-refs-setter", "gen-refs-setter"},
  {"%im", "%im"},
  {"subtype?", "subtype?"},
  {"%selt", "%selt"},
  {"prop-value-setter", "prop-value-setter"},
  {"<chr>", "<chr>"},
  {"<flat>", "<flat>"},
  {"wrong-number-arguments-error", "wrong-number-arguments-error"},
  {"%define-method", "%define-method"},
  {"dl", "dl"},
  {"keyboard-interrupt", "keyboard-interrupt"},
  {"%c=", "%c="},
  {"<sig>", "<sig>"},
  {"%binding-name", "%binding-name"},
  {"gen-refs", "gen-refs"},
  {"not", "not"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_boot;
MODULE_INFO module_info_boot = {
  "boot",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */


/* EXPRESSION: */

extern void load_module_boot (void);

void load_module_boot (void) {
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
