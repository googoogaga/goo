/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: boot */

DEF(YOfun_mets,"boot","@fun-mets");
DEF(YOsubtypeQ,"boot","@subtype?");
DEF(YOsubclass_specQ,"boot","@subclass-spec?");
DEF(Ygen_cache_singletons,"boot","gen-cache-singletons");
DEF(YOOemptyQ,"boot","@@empty?");
DEF(YPslot,"boot","%slot");
DEF(YLlogG,"boot","<log>");
DEF(YLslotG,"boot","<slot>");
DEF(Ysig_unification_vars_setter,"boot","sig-unification-vars-setter");
DEF(Yclass_direct_parents_setter,"boot","class-direct-parents-setter");
DEF(Yunknown_function_error,"boot","unknown-function-error");
DEF(Yfun_arity_setter,"boot","fun-arity-setter");
DEF(YPadd_slot,"boot","%add-slot");
DEF(YOalter,"boot","@alter");
DEF(Yopts_location_setter,"boot","opts-location-setter");
DEF(Yclass_forward_setter,"boot","class-forward-setter");
DEF(Ynyi_subtypeQ,"boot","nyi-subtype?");
DEF(YOunion_specQ,"boot","@union-spec?");
DEF(Ysig_unification_vars,"boot","sig-unification-vars");
DEF(Yclass_direct_parents,"boot","class-direct-parents");
DEF(Ysorted_app_mets_1,"boot","sorted-app-mets-1");
DEF(YDmin_int,"boot","$min-int");
DEF(Ynot,"boot","not");
DEF(Yslot_value,"boot","slot-value");
DEF(YLanyG,"boot","<any>");
DEF(YDmissed_dispatch,"boot","$missed-dispatch");
DEF(Ylst,"boot","lst");
DEF(YOfun_unification_vars,"boot","@fun-unification-vars");
DEF(YLunionG,"boot","<union>");
DEF(Yopts_location,"boot","opts-location");
DEF(Yclass_forward,"boot","class-forward");
DEF(YOmets_unspecialized_atQ,"boot","@mets-unspecialized-at?");
DEF(Yerror,"boot","error");
DEF(Ymay_isaQ,"boot","may-isa?");
DEF(Yfun_arity,"boot","fun-arity");
DEF(YOfun_value,"boot","@fun-value");
DEF(Yfun_sig_setter,"boot","fun-sig-setter");
DEF(YOfind_key,"boot","@find-key");
DEF(YLchrG,"boot","<chr>");
DEF(Ysig_specs_setter,"boot","sig-specs-setter");
DEF(Ygen_lookup_miss_1,"boot","gen-lookup-miss-1");
DEF(Yslot_owner,"boot","slot-owner");
DEF(Yslot_setter_setter,"boot","slot-setter-setter");
DEF(YPdispatch,"boot","%dispatch");
DEF(Yslot_type_setter,"boot","slot-type-setter");
DEF(YLsubclassG,"boot","<subclass>");
DEF(YOgen_cache_arg_pos_setter,"boot","@gen-cache-arg-pos-setter");
DEF(YOgen_cache_singletons,"boot","@gen-cache-singletons");
DEF(YPtrue,"boot","%true");
DEF(YOcat2,"boot","@cat2");
DEF(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
DEF(YPsymbols,"boot","%symbols");
DEF(YOprecise_specQ,"boot","@precise-spec?");
DEF(Ysig_specs,"boot","sig-specs");
DEF(Ytail_setter,"boot","tail-setter");
DEF(Yslot_type,"boot","slot-type");
DEF(YOfun_arity,"boot","@fun-arity");
DEF(YOOEE,"boot","@@==");
DEF(YPfinalize_slotsX,"boot","%finalize-slots!");
DEF(YOtype_equalQ,"boot","@type-equal?");
DEF(YLsingletonG,"boot","<singleton>");
DEF(YPmet_slot_len,"boot","%met-slot-len");
DEF(Yclass_slots_setter,"boot","class-slots-setter");
DEF(YOdo,"boot","@do");
DEF(Ytail,"boot","tail");
DEF(YLmetsG,"boot","<mets>");
DEF(YTboot_macro_namesT,"boot","*boot-macro-names*");
DEF(YLtupG,"boot","<tup>");
DEF(Yfun_naryQ_setter,"boot","fun-nary?-setter");
DEF(Yunexec,"boot","unexec");
DEF(YOdo_children,"boot","@do-children");
DEF(YPTused_symbols_too_earlyT,"boot","%*used-symbols-too-early*");
DEF(Yone_nil,"boot","one-nil");
DEF(Yfun_sig,"boot","fun-sig");
DEF(Yclass_slots,"boot","class-slots");
DEF(YOelt,"boot","@elt");
DEF(YOfun_naryQ,"boot","@fun-nary?");
DEF(YPadd_met,"boot","%add-met");
DEF(Ysorted_app_mets,"boot","sorted-app-mets");
DEF(YPcollect_direct_slots,"boot","%collect-direct-slots");
DEF(Yhandler_info_arguments,"boot","handler-info-arguments");
DEF(Ygen_cache_arg_pos_setter,"boot","gen-cache-arg-pos-setter");
DEF(Ytype_elts_setter,"boot","type-elts-setter");
DEF(Yfun_naryQ,"boot","fun-nary?");
DEF(YDgen_cache_singletons_offset,"boot","$gen-cache-singletons-offset");
DEF(YLopts_vecG,"boot","<opts-vec>");
DEF(Yslot_offset,"boot","slot-offset");
DEF(Ygen_cache_arg_pos,"boot","gen-cache-arg-pos");
DEF(Ytype_elts,"boot","type-elts");
DEF(Ygen_lookup_miss_1_using,"boot","gen-lookup-miss-1-using");
DEF(YOfun_specs,"boot","@fun-specs");
DEF(Yforward_class,"boot","forward-class");
DEF(YPPmacro,"boot","%%macro");
DEF(YPdefine_method,"boot","%define-method");
DEF(Yadd_slot,"boot","add-slot");
DEF(Ysig_value_setter,"boot","sig-value-setter");
DEF(Yclass_name_setter,"boot","class-name-setter");
DEF(YLslotsG,"boot","<slots>");
DEF(YPearly_dispatch,"boot","%early-dispatch");
DEF(Yfile_opening_error,"boot","file-opening-error");
DEF(YLoptsG,"boot","<opts>");
DEF(YLbodyG,"boot","<body>");
DEF(Yensure_fresh_object,"boot","ensure-fresh-object");
DEF(YLspecsG,"boot","<specs>");
DEF(YOmay_isaQ,"boot","@may-isa?");
DEF(Yfun_cache_setter,"boot","fun-cache-setter");
DEF(Yclass_mets_setter,"boot","class-mets-setter");
DEF(YOsingleton_specQ,"boot","@singleton-spec?");
DEF(YPTstart_running_atT,"boot","%*start-running-at*");
DEF(Ysig_value,"boot","sig-value");
DEF(Yclass_name,"boot","class-name");
DEF(YisaQ,"boot","isa?");
DEF(Yfun_specs_setter,"boot","fun-specs-setter");
DEF(YOfun_names,"boot","@fun-names");
DEF(YOpick,"boot","@pick");
DEF(Ymet_appQ,"boot","met-app?");
DEF(YLtypeG,"boot","<type>");
DEF(YLclassG,"boot","<class>");
DEF(Yfun_cache,"boot","fun-cache");
DEF(Yclass_mets,"boot","class-mets");
DEF(Yfab_sym,"boot","fab-sym");
DEF(YLparentsG,"boot","<parents>");
DEF(Yobject_parents,"boot","object-parents");
DEF(Ygen_from_met,"boot","gen-from-met");
DEF(YOlst,"boot","@lst");
DEF(Ysig_names_setter,"boot","sig-names-setter");
DEF(YOmets_subclasses_at,"boot","@mets-subclasses-at");
DEF(Yfun_specs,"boot","fun-specs");
DEF(YLsymG,"boot","<sym>");
DEF(YOtup,"boot","@tup");
DEF(YOreduce,"boot","@reduce");
DEF(Ynul_slot,"boot","nul-slot");
DEF(Ysig_names,"boot","sig-names");
DEF(YLsimple_handler_infoG,"boot","<simple-handler-info>");
DEF(Yorder_mets,"boot","order-mets");
DEF(YPvnul,"boot","%vnul");
DEF(Yslot_setter,"boot","slot-setter");
DEF(YLgenG,"boot","<gen>");
DEF(Yobject_slots,"boot","object-slots");
DEF(Ynyi_isaQ,"boot","nyi-isa?");
DEF(Yfun_name_setter,"boot","fun-name-setter");
DEF(Ymethod_accessor_offset,"boot","method-accessor-offset");
DEF(Yclass_parents_setter,"boot","class-parents-setter");
DEF(Yensure_singleton_cache,"boot","ensure-singleton-cache");
DEF(YLstrG,"boot","<str>");
DEF(Yopts_vec_storage_setter,"boot","opts-vec-storage-setter");
DEF(Ytype_class_setter,"boot","type-class-setter");
DEF(Yfun_name,"boot","fun-name");
DEF(YPfalse,"boot","%false");
DEF(Yclass_parents,"boot","class-parents");
DEF(Yfind_setter,"boot","find-setter");
DEF(YTmacros_okQT,"boot","*macros-ok?*");
DEF(Yorder_specs_default,"boot","order-specs-default");
DEF(Yclass_ordered_parents,"boot","class-ordered-parents");
DEF(Yfun_names_setter,"boot","fun-names-setter");
DEF(YOall2Q,"boot","@all2?");
DEF(YLvecG,"boot","<vec>");
DEF(YPsnul,"boot","%snul");
DEF(Yopts_vec_storage,"boot","opts-vec-storage");
DEF(Ytype_class,"boot","type-class");
DEF(Ynul,"boot","nul");
DEF(YDdirect_object_class,"boot","$direct-object-class");
DEF(Ygen_cache_missableQ_setter,"boot","gen-cache-missable?-setter");
DEF(Ygen_add_met,"boot","gen-add-met");
DEF(Ysig_arity_setter,"boot","sig-arity-setter");
DEF(YOgen_cache_classes_setter,"boot","@gen-cache-classes-setter");
DEF(Ygen_cache_missableQ,"boot","gen-cache-missable?");
DEF(Yorder_specs,"boot","order-specs");
DEF(YLflatG,"boot","<flat>");
DEF(YLmetG,"boot","<met>");
DEF(YOclassL,"boot","@class<");
DEF(YOclass_parents,"boot","@class-parents");
DEF(YTrestarts_okQT,"boot","*restarts-ok?*");
DEF(Yfun_names,"boot","fun-names");
DEF(YOlst_helper,"boot","@lst-helper");
DEF(Yrefab_class,"boot","refab-class");
DEF(YDnum_int_bits,"boot","$num-int-bits");
DEF(YOmets_singletons_at,"boot","@mets-singletons-at");
DEF(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
DEF(Ysig_arity,"boot","sig-arity");
DEF(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
DEF(Yclass_slot_len_setter,"boot","class-slot-len-setter");
DEF(Yfun_mets_setter,"boot","fun-mets-setter");
DEF(Yclass_gens_setter,"boot","class-gens-setter");
DEF(YOgen_cache_classes,"boot","@gen-cache-classes");
DEF(YOmap,"boot","@map");
DEF(Yfind_getter,"boot","find-getter");
DEF(Yclass_slot_len,"boot","class-slot-len");
DEF(Yobject_class,"boot","object-class");
DEF(Yfun_congruentQ,"boot","fun-congruent?");
DEF(YOfab,"boot","@fab");
DEF(YLlstG,"boot","<lst>");
DEF(Yfun_mets,"boot","fun-mets");
DEF(Yclass_gens,"boot","class-gens");
DEF(YLfunG,"boot","<fun>");
DEF(YPpatch_early_generic,"boot","%patch-early-generic");
DEF(YPslot_offset,"boot","%slot-offset");
DEF(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
DEF(YDmax_int,"boot","$max-int");
DEF(Yfab_gen,"boot","fab-gen");
DEF(Ygen_cache_classes_setter,"boot","gen-cache-classes-setter");
DEF(YLseqG,"boot","<seq>");
DEF(Yslot_getter_setter,"boot","slot-getter-setter");
DEF(YPsymbols_readyQ,"boot","%symbols-ready?");
DEF(YOisaQ,"boot","@isa?");
DEF(YOmets_specs_at,"boot","@mets-specs-at");
DEF(YDgetter_not_found,"boot","$getter-not-found");
DEF(YOgen_cache_singletons_setter,"boot","@gen-cache-singletons-setter");
DEF(Yhandler_info_message,"boot","handler-info-message");
DEF(Ygen_cache_classes,"boot","gen-cache-classes");
DEF(YOspecd_args,"boot","@specd-args");
DEF(Yslot_getter,"boot","slot-getter");
DEF(Yfun_unification_vars_setter,"boot","fun-unification-vars-setter");
DEF(Yfun_same_metQ,"boot","fun-same-met?");
DEF(YLcolG,"boot","<col>");
DEF(Ymet_app_unify,"boot","met-app-unify");
DEF(Yupdate_instance_for_changed_class,"boot","update-instance-for-changed-class");
DEF(Yfun_code_setter,"boot","fun-code-setter");
DEF(YOdel_dups,"boot","@del-dups");
DEF(Yclass_direct_slots_setter,"boot","class-direct-slots-setter");
DEF(YLenvG,"boot","<env>");
DEF(YOanyQ,"boot","@any?");
DEF(Yopts_count_setter,"boot","opts-count-setter");
DEF(Ytype_object_setter,"boot","type-object-setter");
DEF(Ynil,"boot","nil");
DEF(Yfun_code,"boot","fun-code");
DEF(Yclass_direct_slots,"boot","class-direct-slots");
DEF(YLlocG,"boot","<loc>");
DEF(Yfab_class,"boot","fab-class");
DEF(Yfun_unification_vars,"boot","fun-unification-vars");
DEF(YLsigG,"boot","<sig>");
DEF(Yopts_count,"boot","opts-count");
DEF(Ytype_object,"boot","type-object");
DEF(Yhead_setter,"boot","head-setter");
DEF(Ychoose_methods,"boot","choose-methods");
DEF(Yfun_spec,"boot","fun-spec");
DEF(Ykeyboard_interrupt,"boot","keyboard-interrupt");
DEF(YPisa,"boot","%isa");
DEF(YLfloG,"boot","<flo>");
DEF(Yhead,"boot","head");
DEF(Ysig_naryQ_setter,"boot","sig-nary?-setter");
DEF(Yslot_init_setter,"boot","slot-init-setter");
DEF(YOallQ,"boot","@all?");
DEF(Ydel_class,"boot","del-class");
DEF(Yincongruent_method_error,"boot","incongruent-method-error");
DEF(Ysig_naryQ,"boot","sig-nary?");
DEF(YOmemQ,"boot","@mem?");
DEF(Ysym_name_setter,"boot","sym-name-setter");
DEF(Yslot_init,"boot","slot-init");
DEF(YLintG,"boot","<int>");
DEF(Yfun_value_setter,"boot","fun-value-setter");
DEF(Yfun_env_setter,"boot","fun-env-setter");
DEF(Yclass_direct_children_setter,"boot","class-direct-children-setter");
DEF(Ysym_name,"boot","sym-name");
DEF(YLgen_cacheG,"boot","<gen-cache>");
DEF(Yclass_ordered_slots,"boot","class-ordered-slots");
DEF(YOfun_mets_setter,"boot","@fun-mets-setter");
DEF(YOprune_mets_by_type_at,"boot","@prune-mets-by-type-at");
DEF(Ygen_lookup_miss,"boot","gen-lookup-miss");
DEF(YOrevX,"boot","@rev!");
DEF(YLnumG,"boot","<num>");
DEF(Yfun_env,"boot","fun-env");
DEF(Yclass_direct_children,"boot","class-direct-children");
DEF(YOgen_cache_arg_pos,"boot","@gen-cache-arg-pos");
DEF(YDgen_cache_classes_offset,"boot","$gen-cache-classes-offset");
DEF(Yfun_value,"boot","fun-value");
DEF(YOfill,"boot","@fill");
DEF(YsubtypeQ,"boot","subtype?");
DEF(Ygen_cache_singletons_setter,"boot","gen-cache-singletons-setter");
DEF(Yslot_value_setter,"boot","slot-value-setter");
DEF(Ytype_error,"boot","type-error");
DEF(Yslot_owner_setter,"boot","slot-owner-setter");
DEF(YOclass_direct_slots,"boot","@class-direct-slots");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_211);
DEFLIT(lit_185);
DEFLIT(lit_329);
DEFLIT(lit_31);
DEFLIT(lit_326);
DEFLIT(lit_350);
DEFLIT(lit_122);
DEFLIT(lit_77);
DEFLIT(lit_324);
DEFLIT(lit_102);
DEFLIT(lit_12);
DEFLIT(lit_296);
DEFLIT(lit_47);
DEFLIT(lit_234);
DEFLIT(lit_178);
DEFLIT(lit_284);
DEFLIT(lit_342);
DEFLIT(lit_200);
DEFLIT(lit_36);
DEFLIT(lit_134);
DEFLIT(lit_310);
DEFLIT(lit_224);
DEFLIT(lit_303);
DEFLIT(lit_147);
DEFLIT(lit_290);
DEFLIT(lit_281);
DEFLIT(lit_320);
DEFLIT(lit_38);
DEFLIT(lit_174);
DEFLIT(lit_323);
DEFLIT(lit_3);
DEFLIT(lit_84);
DEFLIT(lit_192);
DEFLIT(lit_26);
DEFLIT(lit_156);
DEFLIT(lit_54);
DEFLIT(lit_203);
DEFLIT(lit_298);
DEFLIT(lit_338);
DEFLIT(lit_218);
DEFLIT(lit_297);
DEFLIT(lit_121);
DEFLIT(lit_112);
DEFLIT(lit_160);
DEFLIT(lit_68);
DEFLIT(lit_11);
DEFLIT(lit_4);
DEFLIT(lit_140);
DEFLIT(lit_135);
DEFLIT(lit_131);
DEFLIT(lit_126);
DEFLIT(lit_256);
DEFLIT(lit_247);
DEFLIT(lit_83);
DEFLIT(lit_0);
DEFLIT(lit_21);
DEFLIT(lit_223);
DEFLIT(lit_18);
DEFLIT(lit_53);
DEFLIT(lit_295);
DEFLIT(lit_190);
DEFLIT(lit_193);
DEFLIT(lit_248);
DEFLIT(lit_6);
DEFLIT(lit_346);
DEFLIT(lit_227);
DEFLIT(lit_74);
DEFLIT(lit_25);
DEFLIT(lit_67);
DEFLIT(lit_152);
DEFLIT(lit_91);
DEFLIT(lit_44);
DEFLIT(lit_272);
DEFLIT(lit_353);
DEFLIT(lit_341);
DEFLIT(lit_337);
DEFLIT(lit_219);
DEFLIT(lit_92);
DEFLIT(lit_241);
DEFLIT(lit_233);
DEFLIT(lit_111);
DEFLIT(lit_107);
DEFLIT(lit_333);
DEFLIT(lit_10);
DEFLIT(lit_276);
DEFLIT(lit_198);
DEFLIT(lit_237);
DEFLIT(lit_348);
DEFLIT(lit_264);
DEFLIT(lit_336);
DEFLIT(lit_343);
DEFLIT(lit_242);
DEFLIT(lit_73);
DEFLIT(lit_222);
DEFLIT(lit_17);
DEFLIT(lit_98);
DEFLIT(lit_139);
DEFLIT(lit_43);
DEFLIT(lit_183);
DEFLIT(lit_173);
DEFLIT(lit_253);
DEFLIT(lit_301);
DEFLIT(lit_120);
DEFLIT(lit_226);
DEFLIT(lit_166);
DEFLIT(lit_230);
DEFLIT(lit_151);
DEFLIT(lit_277);
DEFLIT(lit_280);
DEFLIT(lit_184);
DEFLIT(lit_177);
DEFLIT(lit_34);
DEFLIT(lit_56);
DEFLIT(lit_240);
DEFLIT(lit_80);
DEFLIT(lit_1);
DEFLIT(lit_217);
DEFLIT(lit_97);
DEFLIT(lit_50);
DEFLIT(lit_197);
DEFLIT(lit_214);
DEFLIT(lit_322);
DEFLIT(lit_215);
DEFLIT(lit_259);
DEFLIT(lit_188);
DEFLIT(lit_283);
DEFLIT(lit_16);
DEFLIT(lit_64);
DEFLIT(lit_146);
DEFLIT(lit_88);
DEFLIT(lit_130);
DEFLIT(lit_33);
DEFLIT(lit_113);
DEFLIT(lit_317);
DEFLIT(lit_271);
DEFLIT(lit_282);
DEFLIT(lit_119);
DEFLIT(lit_170);
DEFLIT(lit_165);
DEFLIT(lit_104);
DEFLIT(lit_155);
DEFLIT(lit_150);
DEFLIT(lit_49);
DEFLIT(lit_288);
DEFLIT(lit_182);
DEFLIT(lit_176);
DEFLIT(lit_236);
DEFLIT(lit_302);
DEFLIT(lit_225);
DEFLIT(lit_239);
DEFLIT(lit_231);
DEFLIT(lit_316);
DEFLIT(lit_294);
DEFLIT(lit_8);
DEFLIT(lit_195);
DEFLIT(lit_87);
DEFLIT(lit_40);
DEFLIT(lit_300);
DEFLIT(lit_258);
DEFLIT(lit_344);
DEFLIT(lit_86);
DEFLIT(lit_169);
DEFLIT(lit_212);
DEFLIT(lit_103);
DEFLIT(lit_15);
DEFLIT(lit_299);
DEFLIT(lit_145);
DEFLIT(lit_269);
DEFLIT(lit_196);
DEFLIT(lit_252);
DEFLIT(lit_335);
DEFLIT(lit_118);
DEFLIT(lit_328);
DEFLIT(lit_164);
DEFLIT(lit_23);
DEFLIT(lit_321);
DEFLIT(lit_207);
DEFLIT(lit_94);
DEFLIT(lit_138);
DEFLIT(lit_129);
DEFLIT(lit_318);
DEFLIT(lit_85);
DEFLIT(lit_238);
DEFLIT(lit_189);
DEFLIT(lit_263);
DEFLIT(lit_199);
DEFLIT(lit_315);
DEFLIT(lit_55);
DEFLIT(lit_208);
DEFLIT(lit_194);
DEFLIT(lit_216);
DEFLIT(lit_181);
DEFLIT(lit_287);
DEFLIT(lit_330);
DEFLIT(lit_254);
DEFLIT(lit_289);
DEFLIT(lit_76);
DEFLIT(lit_30);
DEFLIT(lit_69);
DEFLIT(lit_14);
DEFLIT(lit_144);
DEFLIT(lit_46);
DEFLIT(lit_133);
DEFLIT(lit_9);
DEFLIT(lit_257);
DEFLIT(lit_331);
DEFLIT(lit_132);
DEFLIT(lit_37);
DEFLIT(lit_117);
DEFLIT(lit_109);
DEFLIT(lit_143);
DEFLIT(lit_22);
DEFLIT(lit_148);
DEFLIT(lit_206);
DEFLIT(lit_153);
DEFLIT(lit_128);
DEFLIT(lit_159);
DEFLIT(lit_2);
DEFLIT(lit_163);
DEFLIT(lit_334);
DEFLIT(lit_229);
DEFLIT(lit_75);
DEFLIT(lit_71);
DEFLIT(lit_270);
DEFLIT(lit_100);
DEFLIT(lit_311);
DEFLIT(lit_45);
DEFLIT(lit_99);
DEFLIT(lit_180);
DEFLIT(lit_72);
DEFLIT(lit_285);
DEFLIT(lit_246);
DEFLIT(lit_309);
DEFLIT(lit_125);
DEFLIT(lit_273);
DEFLIT(lit_29);
DEFLIT(lit_221);
DEFLIT(lit_93);
DEFLIT(lit_7);
DEFLIT(lit_59);
DEFLIT(lit_286);
DEFLIT(lit_101);
DEFLIT(lit_266);
DEFLIT(lit_175);
DEFLIT(lit_340);
DEFLIT(lit_108);
DEFLIT(lit_110);
DEFLIT(lit_82);
DEFLIT(lit_116);
DEFLIT(lit_162);
DEFLIT(lit_20);
DEFLIT(lit_154);
DEFLIT(lit_52);
DEFLIT(lit_292);
DEFLIT(lit_137);
DEFLIT(lit_187);
DEFLIT(lit_127);
DEFLIT(lit_172);
DEFLIT(lit_268);
DEFLIT(lit_345);
DEFLIT(lit_235);
DEFLIT(lit_351);
DEFLIT(lit_28);
DEFLIT(lit_313);
DEFLIT(lit_61);
DEFLIT(lit_63);
DEFLIT(lit_90);
DEFLIT(lit_66);
DEFLIT(lit_70);
DEFLIT(lit_213);
DEFLIT(lit_245);
DEFLIT(lit_332);
DEFLIT(lit_81);
DEFLIT(lit_79);
DEFLIT(lit_274);
DEFLIT(lit_106);
DEFLIT(lit_220);
DEFLIT(lit_307);
DEFLIT(lit_51);
DEFLIT(lit_142);
DEFLIT(lit_209);
DEFLIT(lit_279);
DEFLIT(lit_24);
DEFLIT(lit_339);
DEFLIT(lit_260);
DEFLIT(lit_293);
DEFLIT(lit_48);
DEFLIT(lit_124);
DEFLIT(lit_115);
DEFLIT(lit_168);
DEFLIT(lit_161);
DEFLIT(lit_19);
DEFLIT(lit_65);
DEFLIT(lit_205);
DEFLIT(lit_202);
DEFLIT(lit_89);
DEFLIT(lit_42);
DEFLIT(lit_171);
DEFLIT(lit_250);
DEFLIT(lit_265);
DEFLIT(lit_314);
DEFLIT(lit_105);
DEFLIT(lit_58);
DEFLIT(lit_306);
DEFLIT(lit_149);
DEFLIT(lit_278);
DEFLIT(lit_136);
DEFLIT(lit_186);
DEFLIT(lit_232);
DEFLIT(lit_305);
DEFLIT(lit_255);
DEFLIT(lit_35);
DEFLIT(lit_243);
DEFLIT(lit_39);
DEFLIT(lit_275);
DEFLIT(lit_349);
DEFLIT(lit_60);
DEFLIT(lit_158);
DEFLIT(lit_96);
DEFLIT(lit_210);
DEFLIT(lit_41);
DEFLIT(lit_308);
DEFLIT(lit_312);
DEFLIT(lit_325);
DEFLIT(lit_319);
DEFLIT(lit_228);
DEFLIT(lit_123);
DEFLIT(lit_114);
DEFLIT(lit_167);
DEFLIT(lit_57);
DEFLIT(lit_13);
DEFLIT(lit_204);
DEFLIT(lit_201);
DEFLIT(lit_244);
DEFLIT(lit_347);
DEFLIT(lit_251);
DEFLIT(lit_32);
DEFLIT(lit_262);
DEFLIT(lit_327);
DEFLIT(lit_267);
DEFLIT(lit_78);
DEFLIT(lit_291);
DEFLIT(lit_352);
DEFLIT(lit_95);
DEFLIT(lit_141);
DEFLIT(lit_191);
DEFLIT(lit_179);
DEFLIT(lit_261);
DEFLIT(lit_249);
DEFLIT(lit_5);
DEFLIT(lit_27);
DEFLIT(lit_157);
DEFLIT(lit_304);
DEFLIT(lit_62);

/* FUNCTIONS: */

extern P YPallocate_stack (P);
extern P YPclass_slot_len_setter (P,P);
extern P YPclass_slot_len (P);
extern P YPclass_name_setter (P,P);
extern P YPclass_name (P);
extern P YPclass_direct_parents_setter (P,P);
extern P YPclass_direct_parents (P);
extern P YPclass_direct_slots_setter (P,P);
extern P YPclass_direct_slots (P);
extern P YPclass_parents_setter (P,P);
extern P YPclass_parents (P);
extern P YPclass_slots_setter (P,P);
extern P YPclass_slots (P);
extern P YPclass_direct_children_setter (P,P);
extern P YPclass_direct_children (P);
extern P YPclass_gens_setter (P,P);
extern P YPclass_gens (P);
extern P YPclass_mets_setter (P,P);
extern P YPclass_mets (P);
extern P YPclass_forward_setter (P,P);
extern P YPclass_forward (P);
extern P YPclass (P,P,P,P,P,P,P,P,P,P);
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
extern P YPsig_value_setter (P,P);
extern P YPsig_value (P);
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
extern P YPmet (P,P,P,P);
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
LOCFOR(fun_lookup_89);
LOCFOR(fun_90);
LOCFOR(fun_lookup_91);
FUNFOR(Yfab_sym);
LOCFOR(fun_loop_93);
extern P YPrevX (P);
LOCFOR(fun_coly_95);
LOCFOR(fun_colx_96);
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
extern P YPslot_owner_setter (P,P);
extern P YPslot_owner (P);
extern P YPslot_getter_setter (P,P);
extern P YPslot_getter (P);
extern P YPslot_setter_setter (P,P);
extern P YPslot_setter (P);
extern P YPslot_type_setter (P,P);
extern P YPslot_type (P);
extern P YPslot_init_setter (P,P);
extern P YPslot_init (P);
extern P YPPslot (P,P,P,P,P);
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
extern P YPgen (P,P,P,P,P);
LOCFOR(fun_loop_146);
FUNFOR(YPslot_offset);
FUNFOR(YPearly_dispatch);
FUNFOR(YPadd_met);
FUNFOR(YPadd_slot);
LOCFOR(fun_151);
LOCFOR(fun_152);
LOCFOR(fun_153);
LOCFOR(fun_154);
LOCFOR(fun_155);
LOCFOR(fun_156);
LOCFOR(fun_157);
LOCFOR(fun_158);
LOCFOR(fun_159);
LOCFOR(fun_160);
LOCFOR(fun_161);
LOCFOR(fun_162);
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
FUNFOR(YPcollect_direct_slots);
FUNFOR(YPfinalize_slotsX);
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
LOCFOR(fun_fnd_292);
FUNFOR(YOallQ);
LOCFOR(fun_fnd_294);
FUNFOR(YOall2Q);
LOCFOR(fun_fnd_296);
FUNFOR(YOelt);
LOCFOR(fun_loop_298);
FUNFOR(YOfill);
LOCFOR(fun_fnd_300);
FUNFOR(YOanyQ);
extern P YOpair (P,P);
extern P YOadd (P,P);
extern P YOadd_new (P,P);
LOCFOR(fun_do_305);
FUNFOR(YOmap);
LOCFOR(fun_do_307);
FUNFOR(YOpick);
LOCFOR(fun_do_309);
FUNFOR(YOdo);
LOCFOR(fun_in_311);
FUNFOR(YOalter);
LOCFOR(fun_fab_313);
FUNFOR(YOfab);
LOCFOR(fun_red_315);
FUNFOR(YOreduce);
FUNFOR(YOcat2);
LOCFOR(fun_fnd_318);
FUNFOR(YOfind_key);
LOCFOR(fun_320);
FUNFOR(YOmemQ);
LOCFOR(fun_322);
FUNFOR(YOdel_dups);
FUNFOR(YOlst_helper);
FUNFOR(YOlst);
FUNFOR(YOfun_names);
FUNFOR(YOfun_specs);
FUNFOR(YOfun_naryQ);
FUNFOR(YOfun_arity);
FUNFOR(YOfun_value);
FUNFOR(YOfun_unification_vars);
FUNFOR(YOfun_mets);
FUNFOR(YOfun_mets_setter);
FUNFOR(Yfun_spec);
FUNFOR(Yfun_same_metQ);
FUNFOR(Yfun_congruentQ);
LOCFOR(fun_337);
LOCFOR(fun_338);
LOCFOR(fun_339);
LOCFOR(fun_340);
LOCFOR(fun_lop_341);
LOCFOR(fun_col_342);
FUNFOR(Ygen_add_met);
extern P YOclass_inQ (P,P);
extern P YOsubclassQ (P,P);
extern P YOclass_isaQ (P,P);
LOCFOR(fun_347);
extern P YOunion_isaQ (P,P);
extern P YOsingleton_isaQ (P,P);
extern P YOsubclass_isaQ (P,P);
FUNFOR(YOisaQ);
LOCFOR(fun_find_352);
FUNFOR(YOclassL);
FUNFOR(YOtype_equalQ);
LOCFOR(fun_355);
LOCFOR(fun_356);
FUNFOR(YOsubtypeQ);
LOCFOR(fun_loop_358);
FUNFOR(YOmay_isaQ);
FUNFOR(Yorder_specs_default);
FUNFOR(Yorder_specs);
LOCFOR(fun_loop_362);
FUNFOR(Yorder_mets);
LOCFOR(fun_loop_364);
LOCFOR(fun_make_ambiguous_365);
LOCFOR(fun_loop_366);
LOCFOR(fun_precedes_allQ_367);
LOCFOR(fun_check_subsequent_ambiguities_368);
LOCFOR(fun_insert_369);
LOCFOR(fun_loop_370);
FUNFOR(Ysorted_app_mets_1);
LOCFOR(fun_372);
LOCFOR(fun_loop_373);
FUNFOR(Ymet_appQ);
LOCFOR(fun_col_375);
FUNFOR(Ysorted_app_mets);
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
LOCFOR(fun_388);
FUNFOR(YOmets_unspecialized_atQ);
LOCFOR(fun_390);
FUNFOR(YOprune_mets_by_type_at);
LOCFOR(fun_392);
FUNFOR(YOmets_specs_at);
LOCFOR(fun_394);
FUNFOR(YOmets_singletons_at);
LOCFOR(fun_396);
FUNFOR(YOmets_subclasses_at);
LOCFOR(fun_loop_398);
FUNFOR(Ygen_lookup_miss_1_using);
LOCFOR(fun_copy_400);
FUNFOR(YOspecd_args);
LOCFOR(fun_loop_402);
FUNFOR(Yensure_singleton_cache);
FUNFOR(Ygen_lookup_miss_1);
FUNFOR(Ygen_lookup_miss);
extern P Ygen_lookup (P,P);
extern P Yslot_value_at (P,P);
extern P Yslot_value_at_setter (P,P,P);
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
FUNFOR(Yfun_value);
FUNFOR(Yfun_value_setter);
FUNFOR(Yfun_unification_vars);
FUNFOR(Yfun_unification_vars_setter);
FUNFOR(Yobject_class);
FUNFOR(YOclass_parents);
LOCFOR(fun_p_in_and_unconstrained_inQ_428);
LOCFOR(fun_p_unconstrained_inQ_429);
LOCFOR(fun_unconstrained_class_430);
LOCFOR(fun_unconstrained_class_in_parents_431);
LOCFOR(fun_remove_next_432);
LOCFOR(fun_merge_lists_433);
FUNFOR(Yclass_ordered_parents);
FUNFOR(YOclass_direct_slots);
FUNFOR(Yclass_ordered_slots);
FUNFOR(Ydel_class);
LOCFOR(fun_438);
FUNFOR(Yfab_class);
FUNFOR(Yrefab_class);
FUNFOR(Yobject_slots);
FUNFOR(Yobject_parents);
FUNFOR(Yensure_fresh_object);
LOCFOR(fun_loop_444);
FUNFOR(Yslot_offset);
FUNFOR(Yslot_value);
FUNFOR(Yslot_value_setter);
LOCFOR(fun_loop_448);
FUNFOR(YPisa);
LOCFOR(fun_loop_450);
FUNFOR(Yfind_getter);
LOCFOR(fun_loop_452);
FUNFOR(Yfind_setter);
LOCFOR(fun_454);
FUNFOR(Yforward_class);
LOCFOR(fun_visit_456);
FUNFOR(YOdo_children);
LOCFOR(fun_458);
FUNFOR(YPslot);
extern P YPupdate_instance_for_changed_class (P);
FUNFOR(Yupdate_instance_for_changed_class);
FUNFOR(Yfab_gen);
LOCFOR(fun_463);
FUNFOR(Ygen_from_met);
FUNFOR(YPdefine_method);
FUNFOR(Yunexec);
LOCFOR(fun_subtypeQ_467);
LOCFOR(fun_isaQ_468);
LOCFOR(fun_may_isaQ_469);
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

P YPclass_slot_len_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPclass_slot_len(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPclass_name_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)1);
  return T0;
}

P YPclass_name(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)1);
  return T0;
}

P YPclass_direct_parents_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)2);
  return T0;
}

P YPclass_direct_parents(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)2);
  return T0;
}

P YPclass_direct_slots_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)3);
  return T0;
}

P YPclass_direct_slots(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)3);
  return T0;
}

P YPclass_parents_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)4);
  return T0;
}

P YPclass_parents(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)4);
  return T0;
}

P YPclass_slots_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)5);
  return T0;
}

P YPclass_slots(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)5);
  return T0;
}

P YPclass_direct_children_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)6);
  return T0;
}

P YPclass_direct_children(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)6);
  return T0;
}

P YPclass_gens_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)7);
  return T0;
}

P YPclass_gens(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)7);
  return T0;
}

P YPclass_mets_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)8);
  return T0;
}

P YPclass_mets(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)8);
  return T0;
}

P YPclass_forward_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)9);
  return T0;
}

P YPclass_forward(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)9);
  return T0;
}

P YPclass(P class_slot_len_,P class_name_,P class_direct_parents_,P class_direct_slots_,P class_parents_,P class_slots_,P class_direct_children_,P class_gens_,P class_mets_,P class_forward_) {
  P protoF2;
  P T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
loop:
  T1 = (P)YPobject_of(CHKREF(YLclassG),(P)10);
  protoF2 = T1;
  (P)YPslot_elt_setter(class_forward_,protoF2,(P)9);
  (P)YPslot_elt_setter(class_mets_,protoF2,(P)8);
  (P)YPslot_elt_setter(class_gens_,protoF2,(P)7);
  (P)YPslot_elt_setter(class_direct_children_,protoF2,(P)6);
  (P)YPslot_elt_setter(class_slots_,protoF2,(P)5);
  (P)YPslot_elt_setter(class_parents_,protoF2,(P)4);
  (P)YPslot_elt_setter(class_direct_slots_,protoF2,(P)3);
  (P)YPslot_elt_setter(class_direct_parents_,protoF2,(P)2);
  (P)YPslot_elt_setter(class_name_,protoF2,(P)1);
  (P)YPslot_elt_setter(class_slot_len_,protoF2,(P)0);
  T0 = protoF2;
  return T0;
}

P YPtype_object_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPtype_object(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPsingleton(P type_object_) {
  P protoF3;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(CHKREF(YLsingletonG),(P)1);
  protoF3 = T1;
  (P)YPslot_elt_setter(type_object_,protoF3,(P)0);
  T0 = protoF3;
  return T0;
}

P YPtype_class_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPtype_class(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPsubclass(P type_class_) {
  P protoF4;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(CHKREF(YLsubclassG),(P)1);
  protoF4 = T1;
  (P)YPslot_elt_setter(type_class_,protoF4,(P)0);
  T0 = protoF4;
  return T0;
}

P YPtype_elts_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPtype_elts(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPunion(P type_elts_) {
  P protoF5;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(CHKREF(YLunionG),(P)1);
  protoF5 = T1;
  (P)YPslot_elt_setter(type_elts_,protoF5,(P)0);
  T0 = protoF5;
  return T0;
}

P YPhead_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPhead(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPtail_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPtail(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)1);
  return T0;
}

P YPlst(P head_,P tail_) {
  P protoF6;
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPobject_of(CHKREF(YLlstG),(P)2);
  protoF6 = T1;
  (P)YPslot_elt_setter(tail_,protoF6,(P)1);
  (P)YPslot_elt_setter(head_,protoF6,(P)0);
  T0 = protoF6;
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
  T1 = (P)YPeqQ(x_,CHKREF(Ynil));
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
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPsig_names(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPsig_specs_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)1);
  return T0;
}

P YPsig_specs(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)1);
  return T0;
}

P YPsig_naryQ_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)2);
  return T0;
}

P YPsig_naryQ(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)2);
  return T0;
}

P YPsig_arity_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)3);
  return T0;
}

P YPsig_arity(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)3);
  return T0;
}

P YPsig_value_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)4);
  return T0;
}

P YPsig_value(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)4);
  return T0;
}

P YPsig_unification_vars_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)5);
  return T0;
}

P YPsig_unification_vars(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)5);
  return T0;
}

P YPsig(P sig_names_,P sig_specs_,P sig_naryQ_,P sig_arity_,P sig_value_,P sig_unification_vars_) {
  P protoF7;
  P T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T1 = (P)YPobject_of(CHKREF(YLsigG),(P)6);
  protoF7 = T1;
  (P)YPslot_elt_setter(sig_unification_vars_,protoF7,(P)5);
  (P)YPslot_elt_setter(sig_value_,protoF7,(P)4);
  (P)YPslot_elt_setter(sig_arity_,protoF7,(P)3);
  (P)YPslot_elt_setter(sig_naryQ_,protoF7,(P)2);
  (P)YPslot_elt_setter(sig_specs_,protoF7,(P)1);
  (P)YPslot_elt_setter(sig_names_,protoF7,(P)0);
  T0 = protoF7;
  return T0;
}

P YPmet_code_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPmet_code(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPmet_name_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)1);
  return T0;
}

P YPmet_name(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)1);
  return T0;
}

P YPmet_sig_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)2);
  return T0;
}

P YPmet_sig(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)2);
  return T0;
}

P YPmet_env_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)3);
  return T0;
}

P YPmet_env(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)3);
  return T0;
}

P YPmet(P met_code_,P met_name_,P met_sig_,P met_env_) {
  P protoF8;
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  T1 = (P)YPobject_of(CHKREF(YLmetG),(P)4);
  protoF8 = T1;
  (P)YPslot_elt_setter(met_env_,protoF8,(P)3);
  (P)YPslot_elt_setter(met_sig_,protoF8,(P)2);
  (P)YPslot_elt_setter(met_name_,protoF8,(P)1);
  (P)YPslot_elt_setter(met_code_,protoF8,(P)0);
  T0 = protoF8;
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
    T6 = (P)YPelt(CHKREF(YDdirect_object_class),tagF9);
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
    T0 = CHKREF(YPsnul);
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
  T0 = (P)YPPvfab(len_,CHKREF(Ynul));
  return T0;
}

P YPvec(P len_) {
  P T3,T2,T1,T0;
  P a1;
loop:
  T2 = (P)YPiE(len_,(P)0);
  T1 = (P)YPbb(T2);
  if (T1 != YPfalse) {
    T0 = CHKREF(YPvnul);
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
  T2 = (P)YPeqQ(parent_,CHKREF(YLanyG));
  T1 = (P)YPbb(T2);
  if (T1 != YPfalse) {
    T3 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
    T0 = T3;
  } else {
    T7 = (P)YPclass_direct_parents(parent_);
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
  (P)YPclass_slot_len_setter(YPint((P)0),class_);
  (P)YPclass_forward_setter(YPfalse,class_);
  T0 = (P)YPpair(direct_parent_,CHKREF(Ynil));
  (P)YPclass_direct_parents_setter(T0,class_);
  T2 = (P)YPcompute_parents(direct_parent_);
  T1 = (P)YPpair(class_,T2);
  (P)YPclass_parents_setter(T1,class_);
  T5 = (P)YPclass_direct_children(direct_parent_);
  T4 = (P)YPpair(class_,T5);
  T3 = (P)YPclass_direct_children_setter(T4,direct_parent_);
  return T3;
}

P YPPsym(P raw_str_) {
  P T3,T2,T1,T0;
  P a1;
loop:
  if (CHKREF(YPsymbols_readyQ) != YPfalse) {
    T2 = (P)YPsb(raw_str_);
    T1 = CALL1(1,CHKREF(Yfab_sym),T2);
    T0 = T1;
  } else {
    T3 = YPTused_symbols_too_earlyT = YPtrue;
    T0 = T3;
  }
  return T0;
}

P YPsym_nam_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPsym_nam(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPsym(P sym_nam_) {
  P protoF16;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(CHKREF(YLsymG),(P)1);
  protoF16 = T1;
  (P)YPslot_elt_setter(sym_nam_,protoF16,(P)0);
  T0 = protoF16;
  return T0;
}

FUNCODEDEF(fun_lookup_89) {
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
    T4 = (P)YPpair(symF17,CHKREF(YPsymbols));
    YPsymbols = T4;
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

FUNCODEDEF(fun_90) {
  P name_;
  P lookupF19;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = FUNSHELL(1,fun_lookup_89,2);
  lookupF19 = T1;
  FUNINIT(lookupF19, 2,name_,lookupF19);
  T2 = CALL1(0,lookupF19,CHKREF(YPsymbols));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lookup_91) {
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
    T4 = (P)YPpair(symF20,CHKREF(YPsymbols));
    YPsymbols = T4;
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
  T1 = FUNSHELL(1,fun_lookup_91,2);
  lookupF22 = T1;
  FUNINIT(lookupF22, 2,name_,lookupF22);
  T2 = CALL1(0,lookupF22,CHKREF(YPsymbols));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_93) {
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
  T1 = FUNSHELL(1,fun_loop_93,1);
  loopF24 = T1;
  FUNINIT(loopF24, 1,loopF24);
  T2 = CALL2(0,loopF24,c_,Ynil);
  T0 = T2;
  return T0;
}

FUNCODEDEF(fun_coly_95) {
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

FUNCODEDEF(fun_colx_96) {
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
    T3 = FUNSHELL(1,fun_coly_95,1);
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
  T1 = FUNSHELL(1,fun_colx_96,2);
  colxF26 = T1;
  FUNINIT(colxF26, 2,y_,colxF26);
  T2 = CALL2(0,colxF26,CHKREF(Ynil),x_);
  T0 = T2;
  return T0;
}

P YPflo_dat_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPflo_dat(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPflo(P flo_dat_) {
  P protoF27;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(CHKREF(YLfloG),(P)1);
  protoF27 = T1;
  (P)YPslot_elt_setter(flo_dat_,protoF27,(P)0);
  T0 = protoF27;
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
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPopts_location_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPopts_location(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPopts_count_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)1);
  return T0;
}

P YPopts_count(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)1);
  return T0;
}

P YPopts(P opts_location_,P opts_count_) {
  P protoF28;
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPobject_of(CHKREF(YLoptsG),(P)2);
  protoF28 = T1;
  (P)YPslot_elt_setter(opts_count_,protoF28,(P)1);
  (P)YPslot_elt_setter(opts_location_,protoF28,(P)0);
  T0 = protoF28;
  return T0;
}

P YPopts_vec_location_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPopts_vec_location(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPopts_vec_count_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)1);
  return T0;
}

P YPopts_vec_count(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)1);
  return T0;
}

P YPopts_vec_vec_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)2);
  return T0;
}

P YPopts_vec_vec(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)2);
  return T0;
}

P YPopts_vec(P opts_vec_location_,P opts_vec_count_,P opts_vec_vec_) {
  P protoF29;
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = (P)YPobject_of(CHKREF(YLopts_vecG),(P)3);
  protoF29 = T1;
  (P)YPslot_elt_setter(opts_vec_vec_,protoF29,(P)2);
  (P)YPslot_elt_setter(opts_vec_count_,protoF29,(P)1);
  (P)YPslot_elt_setter(opts_vec_location_,protoF29,(P)0);
  T0 = protoF29;
  return T0;
}

P YPslot_owner_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPslot_owner(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPslot_getter_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)1);
  return T0;
}

P YPslot_getter(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)1);
  return T0;
}

P YPslot_setter_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)2);
  return T0;
}

P YPslot_setter(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)2);
  return T0;
}

P YPslot_type_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)3);
  return T0;
}

P YPslot_type(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)3);
  return T0;
}

P YPslot_init_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)4);
  return T0;
}

P YPslot_init(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)4);
  return T0;
}

P YPPslot(P slot_owner_,P slot_getter_,P slot_setter_,P slot_type_,P slot_init_) {
  P protoF30;
  P T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T1 = (P)YPobject_of(CHKREF(YLslotG),(P)5);
  protoF30 = T1;
  (P)YPslot_elt_setter(slot_init_,protoF30,(P)4);
  (P)YPslot_elt_setter(slot_type_,protoF30,(P)3);
  (P)YPslot_elt_setter(slot_setter_,protoF30,(P)2);
  (P)YPslot_elt_setter(slot_getter_,protoF30,(P)1);
  (P)YPslot_elt_setter(slot_owner_,protoF30,(P)0);
  T0 = protoF30;
  return T0;
}

P YPgen_cache_missableQ_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPgen_cache_missableQ(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPgen_cache_arg_pos_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPgen_cache_arg_pos(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)1);
  return T0;
}

P YPgen_cache_singletons_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPgen_cache_singletons(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)2);
  return T0;
}

P YPgen_cache_classes_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPgen_cache_classes(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)3);
  return T0;
}

P YPgen_cache(P gen_cache_missableQ_,P gen_cache_arg_pos_,P gen_cache_singletons_,P gen_cache_classes_) {
  P protoF31;
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  T1 = (P)YPobject_of(CHKREF(YLgen_cacheG),(P)4);
  protoF31 = T1;
  (P)YPslot_elt_setter(gen_cache_classes_,protoF31,(P)3);
  (P)YPslot_elt_setter(gen_cache_singletons_,protoF31,(P)2);
  (P)YPslot_elt_setter(gen_cache_arg_pos_,protoF31,(P)1);
  (P)YPslot_elt_setter(gen_cache_missableQ_,protoF31,(P)0);
  T0 = protoF31;
  return T0;
}

P YPgen_code_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPgen_code(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPgen_name_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)1);
  return T0;
}

P YPgen_name(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)1);
  return T0;
}

P YPgen_sig_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)2);
  return T0;
}

P YPgen_sig(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)2);
  return T0;
}

P YPgen_mets_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)3);
  return T0;
}

P YPgen_mets(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)3);
  return T0;
}

P YPfun_cache_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)4);
  return T0;
}

P YPfun_cache(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)4);
  return T0;
}

P YPgen(P gen_code_,P gen_name_,P gen_sig_,P gen_mets_,P fun_cache_) {
  P protoF32;
  P T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T1 = (P)YPobject_of(CHKREF(YLgenG),(P)5);
  protoF32 = T1;
  (P)YPslot_elt_setter(fun_cache_,protoF32,(P)4);
  (P)YPslot_elt_setter(gen_mets_,protoF32,(P)3);
  (P)YPslot_elt_setter(gen_sig_,protoF32,(P)2);
  (P)YPslot_elt_setter(gen_name_,protoF32,(P)1);
  (P)YPslot_elt_setter(gen_code_,protoF32,(P)0);
  T0 = protoF32;
  return T0;
}

FUNCODEDEF(fun_loop_146) {
  P i_,slots_;
  P slotF33;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(slots_, 1);
loop:
  T1 = (P)YPemptyQ(slots_);
  if (T1 != YPfalse) {
    T2 = (P)YPiu(YPint((P)-1));
    T0 = T2;
  } else {
    T4 = (P)YPhead(slots_);
    slotF33 = T4;
    T8 = (P)YPslot_getter(slotF33);
    T7 = (P)YPeqQ(T8,FREEREF(0));
    T6 = (P)YPbb(T7);
    if (T6 != YPfalse) {
      T5 = i_;
    } else {
      T10 = (P)YPiA(i_,(P)1);
      T11 = (P)YPtail(slots_);
      a1 = T10;
      a2 = T11;
      i_ = a1;
      slots_ = a2;
      goto loop;
      T5 = T9;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPslot_offset) {
  P owner_,getter_;
  P loopF34;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_146,2);
  loopF34 = T1;
  FUNINIT(loopF34, 2,getter_,loopF34);
  T4 = (P)YPobject_class(owner_);
  T3 = (P)YPclass_slots(T4);
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
  T2 = (P)YPcurrent_output_port();
  T3 = (P)YPsu(CHKREF(lit_21));
  (P)YPwrite_string(T2,T3);
  T4 = CALL0(1,(P)0);
  T0 = T4;
UNLINK_STACK();
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

FUNCODEDEF(YPadd_slot) {
  P class_,slot_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(class_, 0);
  ARG(slot_, 1);
loop:
  T2 = (P)YPclass_direct_slots(class_);
  T1 = (P)YPpair(slot_,T2);
  T0 = (P)YPclass_direct_slots_setter(T1,class_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_151) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Yhead));
  T0 = (P)YPslot_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_152) {
  P z_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Yhead));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_153) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_154) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Ytail));
  T0 = (P)YPslot_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_155) {
  P z_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Ytail));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_156) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_157) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsymG),CHKREF(Ysym_name));
  T0 = (P)YPslot_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_158) {
  P z_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsymG),CHKREF(Ysym_name));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_159) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_160) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_slot_len));
  T0 = (P)YPslot_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_161) {
  P z_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_slot_len));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_162) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_163) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_name));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_name));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_166) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_direct_parents));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_direct_parents));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_169) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_direct_slots));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_direct_slots));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_172) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_parents));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_parents));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_175) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_slots));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_slots));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_178) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_direct_children));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_direct_children));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_181) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_gens));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_gens));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_184) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_mets));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_mets));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_187) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_forward));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_forward));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(YPfalse);
}

FUNCODEDEF(fun_190) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsingletonG),CHKREF(Ytype_object));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsingletonG),CHKREF(Ytype_object));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_193) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsubclassG),CHKREF(Ytype_class));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsubclassG),CHKREF(Ytype_class));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_196) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLunionG),CHKREF(Ytype_elts));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLunionG),CHKREF(Ytype_elts));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_199) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_owner));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_owner));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_202) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_getter));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_getter));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_205) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_setter));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_setter));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_208) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_type));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_type));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_211) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_init));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_init));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_214) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = fun_213;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_215) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_missableQ));
  T0 = (P)YPslot_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_216) {
  P z_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_missableQ));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(YPfalse);
}

FUNCODEDEF(fun_218) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_arg_pos));
  T0 = (P)YPslot_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_219) {
  P z_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_arg_pos));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_221) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_singletons));
  T0 = (P)YPslot_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_222) {
  P z_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_singletons));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_224) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_classes));
  T0 = (P)YPslot_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_225) {
  P z_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_classes));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_227) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_names));
  T0 = (P)YPslot_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_228) {
  P z_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_names));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_230) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_specs));
  T0 = (P)YPslot_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_231) {
  P z_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_specs));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_233) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_naryQ));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_naryQ));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(YPfalse));
}

FUNCODEDEF(fun_236) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_arity));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_arity));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_value));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_value));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(YLanyG));
}

FUNCODEDEF(fun_242) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_unification_vars));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_unification_vars));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_245) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_code));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_code));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(YPfalse));
}

FUNCODEDEF(fun_248) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_name));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_name));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(YPfalse));
}

FUNCODEDEF(fun_251) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_sig));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_sig));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_254) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLmetG),CHKREF(Yfun_env));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLmetG),CHKREF(Yfun_env));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(YPfalse));
}

FUNCODEDEF(fun_257) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_mets));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_mets));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_260) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_cache));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_cache));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(YPfalse));
}

FUNCODEDEF(fun_263) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLoptsG),CHKREF(Yopts_location));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLoptsG),CHKREF(Yopts_location));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLoptsG),CHKREF(Yopts_count));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLoptsG),CHKREF(Yopts_count));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_269) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLopts_vecG),CHKREF(Yopts_vec_storage));
  T0 = (P)YPslot_elt(x_,T1);
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
  T1 = CALL2(1,CHKREF(YPslot_offset),CHKREF(YLopts_vecG),CHKREF(Yopts_vec_storage));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
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
  QRET(CHKREF(Ynul));
}

FUNCODEDEF(YPcollect_direct_slots) {
  P class_;
  P parentF36;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(class_, 0);
loop:
  T2 = (P)YPclass_direct_parents(class_);
  T1 = (P)YPhead(T2);
  parentF36 = T1;
  T4 = (P)YPclass_slots(parentF36);
  T5 = (P)YPclass_direct_slots(class_);
  T3 = (P)YPcat2(T4,T5);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPfinalize_slotsX) {
  P name_,class_;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(class_, 1);
loop:
  (P)YPclass_name_setter(name_,class_);
  T1 = (P)YPclass_direct_slots(class_);
  T0 = (P)YPrevX(T1);
  (P)YPclass_direct_slots_setter(T0,class_);
  T2 = CALL1(1,CHKREF(YPcollect_direct_slots),class_);
  (P)YPclass_slots_setter(T2,class_);
  T5 = (P)YPclass_slots(class_);
  T4 = (P)YPPlen(T5);
  T3 = (P)YPib(T4);
  (P)YPclass_slot_len_setter(T3,class_);
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

FUNCODEDEF(fun_fnd_292) {
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
  T1 = FUNSHELL(1,fun_fnd_292,2);
  fndF37 = T1;
  FUNINIT(fndF37, 2,test_,fndF37);
  T2 = CALL1(0,fndF37,c_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_294) {
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
  T1 = FUNSHELL(1,fun_fnd_294,2);
  fndF38 = T1;
  FUNINIT(fndF38, 2,test_,fndF38);
  T2 = CALL2(0,fndF38,x_,y_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_296) {
  P count_,x_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  T1 = (P)YOEE(x_,Ynil);
  if (T1 != YPfalse) {
    T0 = CHKREF(Ynul);
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
  T1 = FUNSHELL(1,fun_fnd_296,2);
  fndF39 = T1;
  FUNINIT(fndF39, 2,key_,fndF39);
  T2 = CALL2(1,fndF39,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_298) {
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
  T1 = FUNSHELL(1,fun_loop_298,3);
  loopF40 = T1;
  FUNINIT(loopF40, 3,x_,f_,loopF40);
  T2 = CALL1(0,loopF40,x_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_300) {
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
  T1 = FUNSHELL(1,fun_fnd_300,2);
  fndF42 = T1;
  FUNINIT(fndF42, 2,test_,fndF42);
  T2 = CALL1(0,fndF42,c_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YOpair(P h_,P t_) {
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPpair(CHKREF(YLlstG),Ynil);
  T3 = (P)YPpair(CHKREF(Ytail),Ynil);
  T2 = (P)YPpair(CHKREF(Yhead),T3);
  T5 = (P)YPpair(t_,Ynil);
  T4 = (P)YPpair(h_,T5);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T4);
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
  T1 = CALL2(1,CHKREF(YOmemQ),c_,e_);
  if (T1 != YPfalse) {
    T0 = c_;
  } else {
    T2 = (P)YOpair(e_,c_);
    T0 = T2;
  }
  return T0;
}

FUNCODEDEF(fun_do_305) {
  P x_,res_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(res_, 1);
loop:
  T1 = (P)YOemptyQ(x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,CHKREF(YOrevX),res_);
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
  T1 = FUNSHELL(1,fun_do_305,2);
  doF43 = T1;
  FUNINIT(doF43, 2,doF43,f_);
  T2 = CALL2(0,doF43,x_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_307) {
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
    T2 = CALL1(1,CHKREF(YOrevX),res_);
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
  T1 = FUNSHELL(1,fun_do_307,2);
  doF45 = T1;
  FUNINIT(doF45, 2,doF45,f_);
  T2 = CALL2(0,doF45,x_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_309) {
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
  T1 = FUNSHELL(1,fun_do_309,2);
  doF46 = T1;
  FUNINIT(doF46, 2,f_,doF46);
  T2 = CALL1(0,doF46,x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_in_311) {
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
  T1 = FUNSHELL(1,fun_in_311,2);
  inF48 = T1;
  FUNINIT(inF48, 2,dst_,inF48);
  T2 = CALL2(0,inF48,dst_,src_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_313) {
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
    T4 = (P)YOpair(CHKREF(Ynul),res_);
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
  T1 = FUNSHELL(1,fun_fab_313,1);
  fabF49 = T1;
  FUNINIT(fabF49, 1,fabF49);
  T2 = CALL2(1,fabF49,s_,Ynil);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_red_315) {
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

FUNCODEDEF(YOreduce) {
  P combine_,init_,c_;
  P redF50;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
loop:
  T1 = FUNSHELL(1,fun_red_315,2);
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

FUNCODEDEF(fun_fnd_318) {
  P c_,i_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(i_, 1);
loop:
  T1 = (P)YOemptyQ(c_);
  if (T1 != YPfalse) {
    T0 = CHKREF(Ynul);
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

FUNCODEDEF(YOfind_key) {
  P f_,c_;
  P fndF51;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_fnd_318,2);
  fndF51 = T1;
  FUNINIT(fndF51, 2,f_,fndF51);
  T2 = CALL2(0,fndF51,c_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_320) {
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
  T3 = FUNFAB(fun_320,1,x_);
  T2 = CALL2(1,CHKREF(YOfind_key),T3,c_);
  T1 = (P)YOEE(T2,CHKREF(Ynul));
  T0 = CALL1(1,CHKREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_322) {
  P s_,e_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL2(1,CHKREF(YOmemQ),s_,e_);
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
  T2 = fun_322;
  T1 = CALL3(1,CHKREF(YOreduce),T2,Ynil,x_);
  T0 = CALL1(1,CHKREF(YOrevX),T1);
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
    T2 = CALL3(1,CHKREF(YOlst_helper),objects_,T3,T4);
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
  T0 = CALL3(1,CHKREF(YOlst_helper),objects_,T1,Ynil);
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

FUNCODEDEF(YOfun_value) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_value(T1);
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
  T1 = CALL1(1,CHKREF(YOfun_specs),x_);
  T0 = CALL2(1,CHKREF(YOelt),T1,i_);
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
  T1 = CALL1(1,CHKREF(YOfun_specs),x_);
  T2 = CALL1(1,CHKREF(YOfun_specs),y_);
  T0 = CALL3(1,CHKREF(YOall2Q),CHKREF(YOOEE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yfun_congruentQ) {
  P x_,y_;
  P tmpF53;
  P tmpF52;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T2 = CALL1(1,CHKREF(YOfun_arity),x_);
  T3 = CALL1(1,CHKREF(YOfun_arity),y_);
  T1 = (P)YOE(T2,T3);
  tmpF52 = T1;
  if (tmpF52 != YPfalse) {
    T7 = CALL1(1,CHKREF(YOfun_naryQ),x_);
    T8 = CALL1(1,CHKREF(YOfun_naryQ),y_);
    T6 = (P)YOEE(T7,T8);
    tmpF53 = T6;
    if (tmpF53 != YPfalse) {
      T11 = CALL1(1,CHKREF(YOfun_specs),x_);
      T12 = CALL1(1,CHKREF(YOfun_specs),y_);
      T10 = CALL3(1,CHKREF(YOall2Q),CHKREF(YOsubtypeQ),T11,T12);
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

FUNCODEDEF(fun_337) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_338) {
  P c_,r_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T2 = CALL1(1,CHKREF(Ygen_from_met),FREEREF(1));
  T1 = CALL2(1,CHKREF(Ygen_add_met),T2,FREEREF(1));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_339) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,CHKREF(Yincongruent_method_error),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_340) {
  P return_;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T2 = (P)YPpair(CHKREF(YLsimple_handler_infoG),Ynil);
  T4 = (P)YPpair(CHKREF(Yhandler_info_arguments),Ynil);
  T3 = (P)YPpair(CHKREF(Yhandler_info_message),T4);
  T7 = CALL2(1,CHKREF(Ylst),FREEREF(0),FREEREF(1));
  T6 = (P)YPpair(T7,Ynil);
  T5 = (P)YPpair(CHKREF(lit_196),T6);
  T1 = CALL3(1,CHKREF(YPisa),T2,T3,T5);
  T8 = fun_337;
  T9 = FUNFAB(fun_338,2,return_,FREEREF(1));
  T10 = FUNFAB(fun_339,2,FREEREF(0),FREEREF(1));
  T0 = CALLN(1,YruntimeYPwith_monitor,5,CHKREF(YLreplace_generic_restartG),T1,T8,T9,T10);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lop_341) {
  P specs_;
  P spec_classF56;
  P tmpF55;
  P specF54;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(specs_, 0);
loop:
  T2 = (P)YOemptyQ(specs_);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = (P)YOhead(specs_);
    specF54 = T4;
    T8 = CALL1(1,CHKREF(YOsingleton_specQ),specF54);
    tmpF55 = T8;
    if (tmpF55 != YPfalse) {
      T9 = tmpF55;
    } else {
      T10 = (P)YOEE(specF54,CHKREF(YLanyG));
      T9 = T10;
    }
    T7 = T9;
    T6 = CALL1(1,CHKREF(Ynot),T7);
    if (T6 != YPfalse) {
      T11 = (P)YPobject_class(specF54);
      spec_classF56 = T11;
      T13 = (P)YPclass_gens(spec_classF56);
      T12 = (P)YOadd_new(T13,FREEREF(0));
      (P)YPclass_gens_setter(T12,spec_classF56);
      T16 = (P)YPclass_mets(spec_classF56);
      T15 = (P)YOadd_new(T16,FREEREF(1));
      T14 = (P)YPclass_mets_setter(T15,spec_classF56);
      T18 = (P)YOtail(specs_);
      a1 = T18;
      specs_ = a1;
      goto loop;
      T5 = T17;
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

FUNCODEDEF(fun_col_342) {
  P mets_,sameQ_,gms_;
  P tmpF59;
  P now_sameQF58;
  P gmF57;
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
    T3 = CALL1(1,CHKREF(YOrevX),T4);
    T2 = (P)YPgen_mets_setter(T3,FREEREF(1));
    T0 = T2;
  } else {
    T7 = (P)YOhead(gms_);
    gmF57 = T7;
    T9 = CALL2(1,CHKREF(Yfun_same_metQ),gmF57,FREEREF(0));
    now_sameQF58 = T9;
    if (now_sameQF58 != YPfalse) {
      T12 = FREEREF(0);
    } else {
      T12 = gmF57;
    }
    T11 = (P)YOadd(mets_,T12);
    tmpF59 = now_sameQF58;
    if (tmpF59 != YPfalse) {
      T14 = tmpF59;
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
  P colF61;
  P lopF60;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(g_, 0);
  ARG(m_, 1);
loop:
  (P)YPfun_cache_setter(YPfalse,g_);
  T2 = CALL2(1,CHKREF(Yfun_congruentQ),m_,g_);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    if (CHKREF(YTrestarts_okQT) != YPfalse) {
      T5 = FUNFAB(fun_340,2,g_,m_);
      T4 = with_exit(T5);
      T3 = T4;
    } else {
      T6 = CALL2(1,CHKREF(Yincongruent_method_error),g_,m_);
      T3 = T6;
    }
    T0 = T3;
  } else {
    T7 = FUNSHELL(1,fun_lop_341,3);
    lopF60 = T7;
    FUNINIT(lopF60, 3,g_,m_,lopF60);
    T9 = CALL1(1,CHKREF(YOfun_specs),m_);
    T8 = CALL1(0,lopF60,T9);
    T10 = FUNSHELL(1,fun_col_342,3);
    colF61 = T10;
    FUNINIT(colF61, 3,m_,g_,colF61);
    T12 = CALL1(1,CHKREF(YOfun_mets),g_);
    T11 = CALL3(1,colF61,Ynil,YPfalse,T12);
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
  P tmpF63;
  P tmpF62;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = (P)YOEE(c2_,CHKREF(YLanyG));
  tmpF62 = T1;
  if (tmpF62 != YPfalse) {
    T2 = tmpF62;
  } else {
    T4 = (P)YOEE(c1_,c2_);
    tmpF63 = T4;
    if (tmpF63 != YPfalse) {
      T5 = tmpF63;
    } else {
      T7 = (P)YPclass_parents(c1_);
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

FUNCODEDEF(fun_347) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T0 = CALL2(1,CHKREF(YOisaQ),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

P YOunion_isaQ(P o_,P u_) {
  P T2,T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_347,1,o_);
  T2 = (P)YPtype_elts(u_);
  T0 = CALL2(1,CHKREF(YOanyQ),T1,T2);
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

P YOsubclass_isaQ(P o_,P t_) {
  P tmpF64;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(1,CHKREF(YOisaQ),o_,CHKREF(YLclassG));
  tmpF64 = T1;
  if (tmpF64 != YPfalse) {
    T4 = (P)YPtype_class(t_);
    T3 = (P)YOsubclassQ(o_,T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
  return T0;
}

FUNCODEDEF(YOisaQ) {
  P o_,t_;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(t_, 1);
loop:
  T1 = (P)YOclass_isaQ(t_,CHKREF(YLclassG));
  if (T1 != YPfalse) {
    T2 = (P)YOclass_isaQ(o_,t_);
    T0 = T2;
  } else {
    T4 = (P)YOclass_isaQ(t_,CHKREF(YLsingletonG));
    if (T4 != YPfalse) {
      T5 = (P)YOsingleton_isaQ(o_,t_);
      T3 = T5;
    } else {
      T7 = (P)YOclass_isaQ(t_,CHKREF(YLsubclassG));
      if (T7 != YPfalse) {
        T8 = (P)YOsubclass_isaQ(o_,t_);
        T6 = T8;
      } else {
        T10 = (P)YOclass_isaQ(t_,CHKREF(YLunionG));
        if (T10 != YPfalse) {
          T11 = (P)YOunion_isaQ(o_,t_);
          T9 = T11;
        } else {
          if (YPtrue != YPfalse) {
            T13 = CALL2(1,CHKREF(Ynyi_isaQ),o_,t_);
            T12 = T13;
          } else {
            T12 = YPfalse;
          }
          T9 = T12;
        }
        T6 = T9;
      }
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_352) {
  P ps_;
  P cF65;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(ps_, 0);
loop:
  T1 = (P)YOemptyQ(ps_);
  if (T1 != YPfalse) {
    T2 = CALLN(1,CHKREF(Yerror),5,CHKREF(lit_212),CHKREF(lit_213),FREEREF(0),FREEREF(1),FREEREF(2));
    T0 = T2;
  } else {
    T4 = (P)YOhead(ps_);
    cF65 = T4;
    T6 = (P)YOEE(cF65,FREEREF(1));
    if (T6 != YPfalse) {
      T5 = YPtrue;
    } else {
      T8 = (P)YOEE(cF65,FREEREF(2));
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
  P findF66;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  ARG(wrt_, 2);
loop:
  T1 = FUNSHELL(1,fun_find_352,4);
  findF66 = T1;
  FUNINIT(findF66, 4,wrt_,c1_,c2_,findF66);
  T3 = (P)YPclass_parents(wrt_);
  T2 = CALL1(0,findF66,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOtype_equalQ) {
  P t1_,t2_;
  P tmpF70;
  P tmpF69;
  P tmpF68;
  P tmpF67;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YOEE(t1_,t2_);
  tmpF67 = T1;
  if (tmpF67 != YPfalse) {
    T2 = tmpF67;
  } else {
    T5 = (P)YOclass_isaQ(t1_,CHKREF(YLclassG));
    T4 = CALL1(1,CHKREF(Ynot),T5);
    tmpF68 = T4;
    if (tmpF68 != YPfalse) {
      T9 = (P)YOclass_isaQ(t2_,CHKREF(YLclassG));
      T8 = CALL1(1,CHKREF(Ynot),T9);
      tmpF69 = T8;
      if (tmpF69 != YPfalse) {
        T12 = CALL2(1,CHKREF(YOsubtypeQ),t1_,t2_);
        tmpF70 = T12;
        if (tmpF70 != YPfalse) {
          T14 = CALL2(1,CHKREF(YOsubtypeQ),t2_,t1_);
          T13 = T14;
        } else {
          T13 = YPfalse;
        }
        T11 = T13;
        T10 = T11;
      } else {
        T10 = YPfalse;
      }
      T7 = T10;
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T3 = T6;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_355) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T0 = CALL2(1,CHKREF(YOsubtypeQ),t_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_356) {
  P t_;
  P T0;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T0 = CALL2(1,CHKREF(YOsubtypeQ),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOsubtypeQ) {
  P t1_,t2_;
  P tmpF72;
  P tmpF71;
  P T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T1 = (P)YOclass_isaQ(t1_,CHKREF(YLunionG));
  if (T1 != YPfalse) {
    T3 = FUNFAB(fun_355,1,t2_);
    T4 = (P)YPtype_elts(t1_);
    T2 = CALL2(1,CHKREF(YOallQ),T3,T4);
    T0 = T2;
  } else {
    T6 = (P)YOclass_isaQ(t2_,CHKREF(YLunionG));
    if (T6 != YPfalse) {
      T8 = FUNFAB(fun_356,1,t1_);
      T9 = (P)YPtype_elts(t2_);
      T7 = CALL2(1,CHKREF(YOanyQ),T8,T9);
      T5 = T7;
    } else {
      T11 = (P)YOclass_isaQ(t2_,CHKREF(YLclassG));
      if (T11 != YPfalse) {
        T13 = (P)YOclass_isaQ(t1_,CHKREF(YLclassG));
        if (T13 != YPfalse) {
          T14 = (P)YOsubclassQ(t1_,t2_);
          T12 = T14;
        } else {
          T16 = (P)YOclass_isaQ(t1_,CHKREF(YLsingletonG));
          if (T16 != YPfalse) {
            T18 = (P)YPtype_object(t1_);
            T17 = CALL2(1,CHKREF(YOisaQ),T18,t2_);
            T15 = T17;
          } else {
            T20 = (P)YOclass_isaQ(t1_,CHKREF(YLsubclassG));
            if (T20 != YPfalse) {
              T21 = (P)YOsubclassQ(CHKREF(YLclassG),t2_);
              T19 = T21;
            } else {
              if (YPtrue != YPfalse) {
                T23 = CALL2(1,CHKREF(Ynyi_subtypeQ),t1_,t2_);
                T22 = T23;
              } else {
                T22 = YPfalse;
              }
              T19 = T22;
            }
            T15 = T19;
          }
          T12 = T15;
        }
        T10 = T12;
      } else {
        T25 = (P)YOclass_isaQ(t2_,CHKREF(YLsingletonG));
        if (T25 != YPfalse) {
          T27 = (P)YOclass_isaQ(t1_,CHKREF(YLclassG));
          if (T27 != YPfalse) {
            T26 = YPfalse;
          } else {
            T29 = (P)YOclass_isaQ(t1_,CHKREF(YLsingletonG));
            if (T29 != YPfalse) {
              T31 = (P)YPtype_object(t1_);
              T30 = (P)YOsingleton_isaQ(T31,t2_);
              T28 = T30;
            } else {
              T33 = (P)YOclass_isaQ(t1_,CHKREF(YLsubclassG));
              if (T33 != YPfalse) {
                T32 = YPfalse;
              } else {
                if (YPtrue != YPfalse) {
                  T35 = CALL2(1,CHKREF(Ynyi_subtypeQ),t1_,t2_);
                  T34 = T35;
                } else {
                  T34 = YPfalse;
                }
                T32 = T34;
              }
              T28 = T32;
            }
            T26 = T28;
          }
          T24 = T26;
        } else {
          T37 = (P)YOclass_isaQ(t2_,CHKREF(YLsubclassG));
          if (T37 != YPfalse) {
            T39 = (P)YOclass_isaQ(t1_,CHKREF(YLsingletonG));
            if (T39 != YPfalse) {
              T42 = (P)YPtype_object(t1_);
              T41 = CALL2(1,CHKREF(YOisaQ),T42,CHKREF(YLclassG));
              tmpF71 = T41;
              if (tmpF71 != YPfalse) {
                T45 = (P)YPtype_object(t1_);
                T46 = (P)YPtype_class(t2_);
                T44 = (P)YOsubclassQ(T45,T46);
                T43 = T44;
              } else {
                T43 = YPfalse;
              }
              T40 = T43;
              T38 = T40;
            } else {
              T48 = (P)YOclass_isaQ(t1_,CHKREF(YLsubclassG));
              if (T48 != YPfalse) {
                T50 = (P)YPtype_class(t1_);
                T51 = (P)YPtype_class(t2_);
                T49 = (P)YOsubclassQ(T50,T51);
                T47 = T49;
              } else {
                T53 = (P)YOclass_isaQ(t1_,CHKREF(YLclassG));
                if (T53 != YPfalse) {
                  T55 = (P)YOEE(t1_,CHKREF(YLclassG));
                  tmpF72 = T55;
                  if (tmpF72 != YPfalse) {
                    T58 = (P)YPtype_class(t2_);
                    T57 = (P)YOEE(T58,CHKREF(YLclassG));
                    T56 = T57;
                  } else {
                    T56 = YPfalse;
                  }
                  T54 = T56;
                  T52 = T54;
                } else {
                  if (YPtrue != YPfalse) {
                    T60 = CALL2(1,CHKREF(Ynyi_subtypeQ),t1_,t2_);
                    T59 = T60;
                  } else {
                    T59 = YPfalse;
                  }
                  T52 = T59;
                }
                T47 = T52;
              }
              T38 = T47;
            }
            T36 = T38;
          } else {
            if (YPtrue != YPfalse) {
              T62 = CALL2(1,CHKREF(YsubtypeQ),t1_,t2_);
              T61 = T62;
            } else {
              T61 = YPfalse;
            }
            T36 = T61;
          }
          T24 = T36;
        }
        T10 = T24;
      }
      T5 = T10;
    }
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_358) {
  P someQ_,allQ_,elts_;
  P tmpF79;
  P tmpF78;
  P tup1F77;
  P elt_allQF76;
  P tup1F75;
  P elt_someQF74;
  P tup1F73;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(someQ_, 0);
  ARG(allQ_, 1);
  ARG(elts_, 2);
loop:
  T1 = (P)YOemptyQ(elts_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,CHKREF(YOtup),someQ_,allQ_);
    T0 = T2;
  } else {
    T5 = (P)YOhead(elts_);
    T4 = CALL2(1,CHKREF(YOmay_isaQ),FREEREF(0),T5);
    tup1F73 = T4;
    T7 = CALL1(1,CHKREF(Yhead),tup1F73);
    elt_someQF74 = T7;
    T9 = CALL1(1,CHKREF(Ytail),tup1F73);
    tup1F75 = T9;
    T11 = CALL1(1,CHKREF(Yhead),tup1F75);
    elt_allQF76 = T11;
    T13 = CALL1(1,CHKREF(Ytail),tup1F75);
    tup1F77 = T13;
    tmpF78 = elt_someQF74;
    if (tmpF78 != YPfalse) {
      T16 = tmpF78;
    } else {
      T16 = someQ_;
    }
    T15 = T16;
    tmpF79 = elt_allQF76;
    if (tmpF79 != YPfalse) {
      T18 = tmpF79;
    } else {
      T18 = allQ_;
    }
    T17 = T18;
    T19 = (P)YOtail(elts_);
    a1 = T15;
    a2 = T17;
    a3 = T19;
    someQ_ = a1;
    allQ_ = a2;
    elts_ = a3;
    goto loop;
    T12 = T14;
    T10 = T12;
    T8 = T10;
    T6 = T8;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmay_isaQ) {
  P c_,t_;
  P loopF82;
  P tmpF81;
  P classQF80;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T1 = (P)YOclass_isaQ(t_,CHKREF(YLclassG));
  if (T1 != YPfalse) {
    T3 = (P)YOsubclassQ(c_,t_);
    if (T3 != YPfalse) {
      T4 = CALL2(1,CHKREF(YOtup),YPtrue,YPtrue);
      T2 = T4;
    } else {
      T5 = CALL2(1,CHKREF(YOtup),YPfalse,YPfalse);
      T2 = T5;
    }
    T0 = T2;
  } else {
    T7 = (P)YOclass_isaQ(t_,CHKREF(YLsingletonG));
    if (T7 != YPfalse) {
      T11 = (P)YPtype_object(t_);
      T10 = (P)YPclass_of(T11);
      T9 = CALL2(1,CHKREF(YOmay_isaQ),T10,c_);
      T8 = CALL2(1,CHKREF(YOtup),T9,YPfalse);
      T6 = T8;
    } else {
      T13 = (P)YOclass_isaQ(t_,CHKREF(YLsubclassG));
      if (T13 != YPfalse) {
        T15 = CALL2(1,CHKREF(YOsubtypeQ),c_,CHKREF(YLclassG));
        classQF80 = T15;
        tmpF81 = classQF80;
        if (tmpF81 != YPfalse) {
          T20 = (P)YPtype_class(c_);
          T19 = (P)YOEE(T20,CHKREF(YLanyG));
          T18 = T19;
        } else {
          T18 = YPfalse;
        }
        T17 = T18;
        T16 = CALL2(1,CHKREF(YOtup),classQF80,T17);
        T14 = T16;
        T12 = T14;
      } else {
        T22 = (P)YOclass_isaQ(t_,CHKREF(YLunionG));
        if (T22 != YPfalse) {
          T24 = FUNSHELL(1,fun_loop_358,2);
          loopF82 = T24;
          FUNINIT(loopF82, 2,c_,loopF82);
          T26 = (P)YPtype_elts(t_);
          T25 = CALL3(0,loopF82,YPfalse,YPfalse,T26);
          T23 = T25;
          T21 = T23;
        } else {
          if (YPtrue != YPfalse) {
            T28 = CALL2(1,CHKREF(Ymay_isaQ),c_,t_);
            T27 = T28;
          } else {
            T27 = YPfalse;
          }
          T21 = T27;
        }
        T12 = T21;
      }
      T6 = T12;
    }
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yorder_specs_default) {
  P t1_,t2_,arg_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T1 = CALL2(1,CHKREF(YOsubtypeQ),t1_,t2_);
  if (T1 != YPfalse) {
    T4 = CALL2(1,CHKREF(YOsubtypeQ),t2_,t1_);
    if (T4 != YPfalse) {
      T3 = CHKREF(lit_224);
    } else {
      T3 = CHKREF(lit_225);
    }
    T2 = CALL2(1,CHKREF(YOtup),T3,t1_);
    T0 = T2;
  } else {
    T6 = CALL2(1,CHKREF(YOsubtypeQ),t2_,t1_);
    if (T6 != YPfalse) {
      T7 = CALL2(1,CHKREF(YOtup),CHKREF(lit_226),t2_);
      T5 = T7;
    } else {
      T8 = CALL2(1,CHKREF(YOtup),CHKREF(lit_227),CHKREF(YLanyG));
      T5 = T8;
    }
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yorder_specs) {
  P t1_,t2_,arg_;
  P c2F84;
  P c1F83;
  P T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
loop:
  T1 = (P)YOEE(t1_,t2_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,CHKREF(YOtup),CHKREF(lit_224),t1_);
    T0 = T2;
  } else {
    T4 = (P)YOclass_isaQ(t1_,CHKREF(YLsingletonG));
    if (T4 != YPfalse) {
      T7 = (P)YOclass_isaQ(t2_,CHKREF(YLsingletonG));
      if (T7 != YPfalse) {
        T6 = CHKREF(lit_224);
      } else {
        T6 = CHKREF(lit_225);
      }
      T5 = CALL2(1,CHKREF(YOtup),T6,t1_);
      T3 = T5;
    } else {
      T9 = (P)YOclass_isaQ(t1_,CHKREF(YLsubclassG));
      if (T9 != YPfalse) {
        T11 = (P)YOclass_isaQ(t2_,CHKREF(YLsubclassG));
        if (T11 != YPfalse) {
          T13 = (P)YPtype_class(t1_);
          c1F83 = T13;
          T15 = (P)YPtype_class(t2_);
          c2F84 = T15;
          T17 = (P)YOEE(c1F83,c2F84);
          if (T17 != YPfalse) {
            T18 = CALL2(1,CHKREF(YOtup),CHKREF(lit_224),t1_);
            T16 = T18;
          } else {
            T20 = CALL3(1,CHKREF(YOclassL),c1F83,c2F84,arg_);
            if (T20 != YPfalse) {
              T21 = CALL2(1,CHKREF(YOtup),CHKREF(lit_225),t1_);
              T19 = T21;
            } else {
              if (YPtrue != YPfalse) {
                T23 = CALL2(1,CHKREF(YOtup),CHKREF(lit_226),t2_);
                T22 = T23;
              } else {
                T22 = YPfalse;
              }
              T19 = T22;
            }
            T16 = T19;
          }
          T14 = T16;
          T12 = T14;
          T10 = T12;
        } else {
          T25 = (P)YOclass_isaQ(t2_,CHKREF(YLclassG));
          if (T25 != YPfalse) {
            T28 = CALL2(1,CHKREF(YOsubtypeQ),CHKREF(YLclassG),t2_);
            if (T28 != YPfalse) {
              T30 = (P)YOEE(t1_,CHKREF(YLanyG));
              if (T30 != YPfalse) {
                T31 = CALL3(1,CHKREF(Yorder_specs),CHKREF(YLclassG),t2_,arg_);
                T29 = T31;
              } else {
                T29 = CHKREF(lit_225);
              }
              T27 = T29;
            } else {
              T27 = CHKREF(lit_227);
            }
            T26 = CALL2(1,CHKREF(YOtup),T27,t1_);
            T24 = T26;
          } else {
            if (YPtrue != YPfalse) {
              T33 = CALL3(1,CHKREF(Yorder_specs_default),t1_,t2_,arg_);
              T32 = T33;
            } else {
              T32 = YPfalse;
            }
            T24 = T32;
          }
          T10 = T24;
        }
        T8 = T10;
      } else {
        T35 = (P)YOclass_isaQ(t2_,CHKREF(YLsubclassG));
        if (T35 != YPfalse) {
          T37 = (P)YOclass_isaQ(t1_,CHKREF(YLclassG));
          if (T37 != YPfalse) {
            T40 = CALL2(1,CHKREF(YOsubtypeQ),CHKREF(YLclassG),t1_);
            if (T40 != YPfalse) {
              T42 = (P)YOEE(t2_,CHKREF(YLanyG));
              if (T42 != YPfalse) {
                T43 = CALL3(1,CHKREF(Yorder_specs),t1_,CHKREF(YLclassG),arg_);
                T41 = T43;
              } else {
                T41 = CHKREF(lit_226);
              }
              T39 = T41;
            } else {
              T39 = CHKREF(lit_227);
            }
            T38 = CALL2(1,CHKREF(YOtup),T39,t2_);
            T36 = T38;
          } else {
            T44 = CALL3(1,CHKREF(Yorder_specs_default),t1_,t2_,arg_);
            T36 = T44;
          }
          T34 = T36;
        } else {
          T46 = (P)YOclass_isaQ(t1_,CHKREF(YLclassG));
          if (T46 != YPfalse) {
            T48 = (P)YOclass_isaQ(t2_,CHKREF(YLclassG));
            if (T48 != YPfalse) {
              T51 = (P)YPclass_of(arg_);
              T50 = CALL3(1,CHKREF(YOclassL),t1_,t2_,T51);
              if (T50 != YPfalse) {
                T52 = CALL2(1,CHKREF(YOtup),CHKREF(lit_225),t1_);
                T49 = T52;
              } else {
                T53 = CALL2(1,CHKREF(YOtup),CHKREF(lit_226),t2_);
                T49 = T53;
              }
              T47 = T49;
            } else {
              T54 = CALL3(1,CHKREF(Yorder_specs_default),t1_,t2_,arg_);
              T47 = T54;
            }
            T45 = T47;
          } else {
            if (YPtrue != YPfalse) {
              T56 = CALL3(1,CHKREF(Yorder_specs_default),t1_,t2_,arg_);
              T55 = T56;
            } else {
              T55 = YPfalse;
            }
            T45 = T55;
          }
          T34 = T45;
        }
        T8 = T34;
      }
      T3 = T8;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_362) {
  P state_,idx_;
  P tmpF91;
  P tmpF90;
  P idxF89;
  P cmpF88;
  P cmpAtypF87;
  P m2specF86;
  P m1specF85;
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
    T3 = CALL2(1,CHKREF(Yfun_spec),FREEREF(1),idx_);
    m1specF85 = T3;
    T5 = CALL2(1,CHKREF(Yfun_spec),FREEREF(2),idx_);
    m2specF86 = T5;
    T8 = (P)YOoelt(FREEREF(3),idx_);
    T7 = CALL3(1,CHKREF(Yorder_specs),m1specF85,m2specF86,T8);
    check_type(T7,CHKREF(YLtupG));
    cmpAtypF87 = T7;
    T10 = CALL2(1,CHKREF(YOelt),cmpAtypF87,YPint((P)0));
    check_type(T10,CHKREF(YLsymG));
    cmpF88 = T10;
    T12 = (P)YOA(idx_,YPint((P)1));
    check_type(T12,CHKREF(YLintG));
    idxF89 = T12;
    T14 = (P)YOEE(cmpF88,CHKREF(lit_224));
    if (T14 != YPfalse) {
      a1 = state_;
      a2 = idxF89;
      state_ = a1;
      idx_ = a2;
      goto loop;
      T13 = T15;
    } else {
      T19 = (P)YOEE(cmpF88,CHKREF(lit_227));
      T18 = CALL1(1,CHKREF(Ynot),T19);
      tmpF90 = T18;
      if (tmpF90 != YPfalse) {
        T22 = (P)YOEE(state_,CHKREF(lit_224));
        tmpF91 = T22;
        if (tmpF91 != YPfalse) {
          T23 = tmpF91;
        } else {
          T24 = (P)YOEE(cmpF88,state_);
          T23 = T24;
        }
        T21 = T23;
        T20 = T21;
      } else {
        T20 = YPfalse;
      }
      T17 = T20;
      if (T17 != YPfalse) {
        a1 = cmpF88;
        a2 = idxF89;
        state_ = a1;
        idx_ = a2;
        goto loop;
        T16 = T25;
      } else {
        T16 = CHKREF(lit_227);
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
  P loopF93;
  P arityF92;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(args_, 2);
loop:
  T1 = CALL1(1,CHKREF(YOfun_arity),m1_);
  check_type(T1,CHKREF(YLintG));
  arityF92 = T1;
  T3 = FUNSHELL(1,fun_loop_362,5);
  loopF93 = T3;
  FUNINIT(loopF93, 5,arityF92,m1_,m2_,args_,loopF93);
  T4 = CALL2(1,loopF93,CHKREF(lit_224),YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_364) {
  P l_;
  P t1F95;
  P tmpF94;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = (P)YOEE(l_,Ynil);
  tmpF94 = T1;
  if (tmpF94 != YPfalse) {
    T2 = tmpF94;
  } else {
    T4 = (P)YOtail(l_);
    t1F95 = T4;
    T5 = (P)YOtail(FREEREF(0));
    (P)YOtail_setter(T5,l_);
    (P)YOtail_setter(l_,FREEREF(0));
    a1 = t1F95;
    l_ = a1;
    goto loop;
    T3 = T6;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_make_ambiguous_365) {
  P headed_list_;
  P loopF96;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(headed_list_, 0);
loop:
  T0 = FUNSHELL(1,fun_loop_364,2);
  loopF96 = T0;
  FUNINIT(loopF96, 2,FREEREF(0),loopF96);
  T2 = (P)YOtail(headed_list_);
  T1 = CALL1(1,loopF96,T2);
  (P)YOtail_setter(Ynil,headed_list_);
  T5 = (P)YOtail(FREEREF(0));
  T4 = (P)YOpair(FREEREF(1),T5);
  T3 = (P)YOtail_setter(T4,FREEREF(0));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_loop_366) {
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
    T3 = (P)YOEE(T4,CHKREF(lit_225));
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

FUNCODEDEF(fun_precedes_allQ_367) {
  P l_;
  P loopF97;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_366,4);
  loopF97 = T1;
  FUNINIT(loopF97, 4,FREEREF(0),FREEREF(1),FREEREF(2),loopF97);
  T2 = CALL1(1,loopF97,l_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_subsequent_ambiguities_368) {
  P oprev_;
  P tmpF98;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(oprev_, 0);
loop:
  T4 = (P)YOtail(oprev_);
  T3 = CALL1(1,FREEREF(0),T4);
  T2 = CALL1(1,CHKREF(Ynot),T3);
  tmpF98 = T2;
  if (tmpF98 != YPfalse) {
    T5 = tmpF98;
  } else {
    T8 = (P)YOtail(FREEREF(1));
    T7 = CALL1(1,FREEREF(0),T8);
    T6 = CALL1(1,CHKREF(Ynot),T7);
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

FUNCODEDEF(fun_insert_369) {
  P oprev_,osub_;
  P indicF99;
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
    indicF99 = T4;
    T7 = (P)YOEE(indicF99,CHKREF(lit_225));
    if (T7 != YPfalse) {
      T8 = CALL1(1,FREEREF(0),oprev_);
      T6 = T8;
    } else {
      T10 = (P)YOEE(indicF99,CHKREF(lit_226));
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

FUNCODEDEF(fun_loop_370) {
  P mets_;
  P insertF104;
  P check_subsequent_ambiguitiesF103;
  P precedes_allQF102;
  P make_ambiguousF101;
  P metF100;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mets_, 0);
loop:
  T2 = (P)YOEE(mets_,Ynil);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = (P)YOhead(mets_);
    check_type(T4,CHKREF(YLmetG));
    metF100 = T4;
    T6 = FUNSHELL(1,fun_make_ambiguous_365,2);
    make_ambiguousF101 = T6;
    T7 = FUNSHELL(1,fun_precedes_allQ_367,3);
    precedes_allQF102 = T7;
    T8 = FUNSHELL(1,fun_check_subsequent_ambiguities_368,4);
    check_subsequent_ambiguitiesF103 = T8;
    T9 = FUNSHELL(1,fun_insert_369,6);
    insertF104 = T9;
    FUNINIT(make_ambiguousF101, 2,FREEREF(0),metF100);
    FUNINIT(precedes_allQF102, 3,FREEREF(1),metF100,FREEREF(2));
    FUNINIT(check_subsequent_ambiguitiesF103, 4,precedes_allQF102,FREEREF(0),make_ambiguousF101,metF100);
    FUNINIT(insertF104, 6,check_subsequent_ambiguitiesF103,FREEREF(1),metF100,FREEREF(2),insertF104,make_ambiguousF101);
    T10 = (P)YOtail(FREEREF(3));
    CALL2(1,insertF104,FREEREF(3),T10);
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

FUNCODEDEF(Ysorted_app_mets_1) {
  P mets_,args_,order_mets_;
  P loopF107;
  P aheadF106;
  P oheadF105;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(mets_, 0);
  ARG(args_, 1);
  ARG(order_mets_, 2);
loop:
  T1 = (P)YOpair(YPfalse,Ynil);
  check_type(T1,CHKREF(YLlstG));
  oheadF105 = T1;
  T3 = (P)YOpair(YPfalse,Ynil);
  check_type(T3,CHKREF(YLlstG));
  aheadF106 = T3;
  T4 = FUNSHELL(1,fun_loop_370,5);
  loopF107 = T4;
  FUNINIT(loopF107, 5,aheadF106,order_mets_,args_,oheadF105,loopF107);
  T5 = CALL1(1,loopF107,mets_);
  T7 = (P)YOtail(oheadF105);
  T8 = (P)YOtail(aheadF106);
  T6 = CALL2(1,CHKREF(YOtup),T7,T8);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_372) {
  P x_,y_;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_loop_373) {
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
    T5 = CALL2(1,CHKREF(Yfun_spec),FREEREF(2),i_);
    T3 = CALL2(1,CHKREF(YOisaQ),T4,T5);
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
  P loopF109;
  P nF108;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(met_, 0);
  ARG(args_, 1);
loop:
  T3 = CALL1(1,CHKREF(YOfun_unification_vars),met_);
  T2 = (P)YOemptyQ(T3);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,CHKREF(Ymet_app_unify),met_,args_);
    T0 = T4;
  } else {
    T6 = CALL1(1,CHKREF(YOfun_arity),met_);
    check_type(T6,CHKREF(YLintG));
    nF108 = T6;
    T8 = FUNSHELL(1,fun_loop_373,4);
    loopF109 = T8;
    FUNINIT(loopF109, 4,nF108,args_,met_,loopF109);
    T9 = CALL1(1,loopF109,YPint((P)0));
    T7 = T9;
    T5 = T7;
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_375) {
  P ans_,ms_;
  P ansF111;
  P mF110;
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
    mF110 = T3;
    T6 = CALL2(1,CHKREF(Ymet_appQ),mF110,FREEREF(0));
    if (T6 != YPfalse) {
      T7 = (P)YOpair(mF110,ans_);
      T5 = T7;
    } else {
      T5 = ans_;
    }
    ansF111 = T5;
    T9 = (P)YOtail(ms_);
    a1 = ansF111;
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

FUNCODEDEF(Ysorted_app_mets) {
  P gf_,args_;
  P considered_metsF113;
  P colF112;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(gf_, 0);
  ARG(args_, 1);
loop:
  T2 = FUNSHELL(1,fun_col_375,2);
  colF112 = T2;
  FUNINIT(colF112, 2,args_,colF112);
  T4 = CALL1(1,CHKREF(YOfun_mets),gf_);
  T3 = CALL2(0,colF112,Ynil,T4);
  T1 = T3;
  considered_metsF113 = T1;
  T5 = CALL3(1,CHKREF(Ysorted_app_mets_1),considered_metsF113,args_,CHKREF(Yorder_mets));
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
  P tmpF118;
  P nF117;
  P slotQF116;
  P tmpF115;
  P slotF114;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  ARG(args_, 2);
loop:
  T1 = (P)YPmet_env(met_);
  slotF114 = T1;
  tmpF115 = slotF114;
  if (tmpF115 != YPfalse) {
    T6 = (P)YPclass_of(slotF114);
    T5 = (P)YOEE(T6,CHKREF(YLslotG));
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  slotQF116 = T3;
  T8 = (P)YOolen(args_);
  nF117 = T8;
  tmpF118 = slotQF116;
  if (tmpF118 != YPfalse) {
    T12 = (P)YOE(nF117,YPint((P)1));
    if (T12 != YPfalse) {
      T14 = (P)YOoelt(args_,YPint((P)0));
      T13 = CALL2(1,CHKREF(Yslot_offset),T14,gen_);
      T11 = T13;
    } else {
      T16 = (P)YOoelt(args_,YPint((P)1));
      T17 = (P)YPslot_getter(slotF114);
      T15 = CALL2(1,CHKREF(Yslot_offset),T16,T17);
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
  T0 = (P)YOclass_isaQ(x_,CHKREF(YLsingletonG));
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
  T0 = (P)YOclass_isaQ(x_,CHKREF(YLsubclassG));
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
  T0 = (P)YOclass_isaQ(x_,CHKREF(YLunionG));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOprecise_specQ) {
  P x_;
  P tmpF121;
  P tmpF120;
  P tmpF119;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(YOsingleton_specQ),x_);
  tmpF119 = T1;
  if (tmpF119 != YPfalse) {
    T2 = tmpF119;
  } else {
    T4 = CALL1(1,CHKREF(YOsubclass_specQ),x_);
    tmpF120 = T4;
    if (tmpF120 != YPfalse) {
      T5 = tmpF120;
    } else {
      T7 = CALL1(1,CHKREF(YOunion_specQ),x_);
      tmpF121 = T7;
      if (tmpF121 != YPfalse) {
        T10 = (P)YPtype_elts(x_);
        T9 = CALL2(1,CHKREF(YOanyQ),CHKREF(YOprecise_specQ),T10);
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

FUNCODEDEF(fun_388) {
  P met_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(met_, 0);
loop:
  T1 = CALL2(1,CHKREF(Yfun_spec),met_,FREEREF(0));
  T0 = (P)YOE(T1,CHKREF(YLanyG));
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
  T1 = FUNFAB(fun_388,1,pos_);
  T0 = CALL2(1,CHKREF(YOallQ),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_390) {
  P met_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(met_, 0);
loop:
  T1 = CALL2(1,CHKREF(Yfun_spec),met_,FREEREF(1));
  T0 = CALL2(1,CHKREF(YOsubtypeQ),FREEREF(0),T1);
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
  T1 = FUNFAB(fun_390,2,type_,pos_);
  T0 = CALL2(1,CHKREF(YOpick),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_392) {
  P met_;
  P T0;
  P a1;
LINK_STACK();
  ARG(met_, 0);
loop:
  T0 = CALL2(1,CHKREF(Yfun_spec),met_,FREEREF(0));
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
  T1 = FUNFAB(fun_392,1,pos_);
  T0 = CALL2(1,CHKREF(YOmap),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_394) {
  P spec_;
  P T0;
  P a1;
LINK_STACK();
  ARG(spec_, 0);
loop:
  T0 = CALL1(1,CHKREF(YOsingleton_specQ),spec_);
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
  T1 = fun_394;
  T2 = CALL2(1,CHKREF(YOmets_specs_at),mets_,pos_);
  T0 = CALL2(1,CHKREF(YOpick),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_396) {
  P spec_;
  P T0;
  P a1;
LINK_STACK();
  ARG(spec_, 0);
loop:
  T0 = CALL1(1,CHKREF(YOsubclass_specQ),spec_);
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
  T1 = fun_396;
  T2 = CALL2(1,CHKREF(YOmets_specs_at),mets_,pos_);
  T0 = CALL2(1,CHKREF(YOpick),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_398) {
  P assocs_;
  P vF125;
  P kF124;
  P valF123;
  P tmpF122;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(assocs_, 0);
loop:
  T1 = (P)YOemptyQ(assocs_);
  if (T1 != YPfalse) {
    T4 = (P)YOEE(FREEREF(0),CHKREF(YOgen_cache_classes));
    tmpF122 = T4;
    if (tmpF122 != YPfalse) {
      T7 = BOXVAL(FREEREF(1));
      T6 = (P)YPclass_forward(T7);
      T5 = T6;
    } else {
      T5 = YPfalse;
    }
    T3 = T5;
    if (T3 != YPfalse) {
      CALL1(1,CHKREF(Yupdate_instance_for_changed_class),FREEREF(2));
      T8 = (P)YPclass_of(FREEREF(2));
      BOXVAL(FREEREF(1)) = T8;
      T10 = CALL1(1,FREEREF(0),FREEREF(4));
      a1 = T10;
      assocs_ = a1;
      goto loop;
      T2 = T9;
    } else {
      T13 = (P)YOA(FREEREF(8),YPint((P)1));
      T12 = CALLN(1,CHKREF(Ygen_lookup_miss_1),6,FREEREF(5),YPfalse,FREEREF(6),FREEREF(7),T13,FREEREF(9));
      valF123 = T12;
      T16 = BOXVAL(FREEREF(1));
      T18 = CALL1(1,FREEREF(0),FREEREF(4));
      T17 = (P)YOpair(valF123,T18);
      T15 = (P)YOpair(T16,T17);
      T14 = CALL2(1,FREEREF(10),T15,FREEREF(4));
      T11 = T14;
      T2 = T11;
    }
    T0 = T2;
  } else {
    T20 = (P)YOhead(assocs_);
    kF124 = T20;
    T23 = BOXVAL(FREEREF(1));
    T22 = (P)YOEE(kF124,T23);
    if (T22 != YPfalse) {
      T26 = (P)YOtail(assocs_);
      T25 = (P)YOhead(T26);
      vF125 = T25;
      T28 = (P)YOA(FREEREF(8),YPint((P)1));
      T27 = CALLN(1,CHKREF(Ygen_lookup_miss_1),6,FREEREF(5),vF125,FREEREF(6),FREEREF(7),T28,FREEREF(9));
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
  P loopF128;
  P cacheF127;
  P tmpF126;
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
  tmpF126 = cache_;
  if (tmpF126 != YPfalse) {
    T3 = tmpF126;
  } else {
    T4 = (P)YPgen_cache(YPtrue,i_,CHKREF(Ynil),CHKREF(Ynil));
    T3 = T4;
  }
  T2 = T3;
  cacheF127 = T2;
  T5 = FUNSHELL(1,fun_loop_398,11);
  loopF128 = T5;
  FUNINIT(loopF128, 11,all_assocs_,key_,instance_,loopF128,cacheF127,gen_,mets_,sorted_mets_,i_,args_,all_assocs_setter_);
  T7 = CALL1(1,all_assocs_,cacheF127);
  T6 = CALL1(0,loopF128,T7);
  T1 = cacheF127;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_copy_400) {
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
  P copyF131;
  P rF130;
  P vF129;
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
  vF129 = T1;
  T8 = (P)YPvlen(vF129);
  T7 = (P)YPslot_dat_at(vF129,T8);
  T6 = (P)YPlb(T7);
  T10 = (P)YPvlen(vF129);
  T9 = (P)YPib(T10);
  T5 = (P)YPopts_vec(T6,T9,vF129);
  rF130 = T5;
  T12 = FUNSHELL(1,fun_copy_400,5);
  copyF131 = T12;
  FUNINIT(copyF131, 5,args_,rF130,i_,arg_,copyF131);
  T13 = CALL1(0,copyF131,YPint((P)0));
  T11 = T13;
  T4 = T11;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_402) {
  P singletons_;
  P app_metsF136;
  P smetsF135;
  P argsF134;
  P argF133;
  P singF132;
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
    singF132 = T3;
    T5 = (P)YPtype_object(singF132);
    argF133 = T5;
    T7 = CALL3(1,CHKREF(YOspecd_args),FREEREF(1),FREEREF(2),argF133);
    argsF134 = T7;
    T9 = CALL2(1,CHKREF(Ychoose_methods),FREEREF(3),argsF134);
    smetsF135 = T9;
    T11 = CALL3(1,CHKREF(YOprune_mets_by_type_at),FREEREF(4),singF132,FREEREF(2));
    app_metsF136 = T11;
    CALLN(1,CHKREF(Ygen_lookup_miss_1_using),10,argF133,argF133,CHKREF(YOgen_cache_singletons),CHKREF(YOgen_cache_singletons_setter),FREEREF(3),FREEREF(0),FREEREF(4),smetsF135,FREEREF(2),argsF134);
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
  P subclassesF138;
  P tmpF137;
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
  tmpF137 = cache_;
  if (tmpF137 != YPfalse) {
    T1 = tmpF137;
  } else {
    T3 = CALL2(1,CHKREF(YOmets_subclasses_at),mets_,i_);
    subclassesF138 = T3;
    T5 = (P)YOemptyQ(subclassesF138);
    if (T5 != YPfalse) {
      T7 = CALL2(1,CHKREF(YOmets_singletons_at),mets_,i_);
      singletonsF139 = T7;
      T9 = (P)YOemptyQ(singletonsF139);
      if (T9 != YPfalse) {
        T8 = YPfalse;
      } else {
        T11 = (P)YPgen_cache(YPtrue,i_,CHKREF(Ynil),CHKREF(Ynil));
        cacheF140 = T11;
        T13 = FUNSHELL(1,fun_loop_402,6);
        loopF141 = T13;
        FUNINIT(loopF141, 6,cacheF140,args_,i_,gen_,mets_,loopF141);
        T14 = CALL1(0,loopF141,singletonsF139);
        T12 = T14;
        T10 = T12;
        T8 = T10;
      }
      T6 = T8;
      T4 = T6;
    } else {
      T15 = (P)YPgen_cache(YPfalse,i_,CHKREF(Ynil),CHKREF(Ynil));
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
  P app_metsF151;
  P classF150;
  P metsF149;
  P tmpF148;
  P tmpF147;
  P tmpF146;
  P singQF145;
  P cacheF144;
  P argF143;
  P tmpF142;
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
  T2 = CALL1(1,CHKREF(YOfun_arity),gen_);
  T1 = (P)YOE(i_,T2);
  if (T1 != YPfalse) {
    T5 = (P)YOhead(sorted_mets_);
    T4 = CALL3(1,CHKREF(Ymethod_accessor_offset),gen_,T5,args_);
    tmpF142 = T4;
    if (tmpF142 != YPfalse) {
      T6 = tmpF142;
    } else {
      T6 = sorted_mets_;
    }
    T3 = T6;
    T0 = T3;
  } else {
    T8 = (P)YOoelt(args_,i_);
    argF143 = T8;
    T10 = CALLN(1,CHKREF(Yensure_singleton_cache),6,gen_,ocache_,mets_,sorted_mets_,i_,args_);
    cacheF144 = T10;
    T14 = (P)YOhead(sorted_mets_);
    T13 = CALL2(1,CHKREF(Yfun_spec),T14,i_);
    T12 = CALL1(1,CHKREF(YOsingleton_specQ),T13);
    singQF145 = T12;
    tmpF146 = singQF145;
    if (tmpF146 != YPfalse) {
      T19 = (P)YOEE(ocache_,cacheF144);
      T18 = T19;
    } else {
      T18 = YPfalse;
    }
    T17 = T18;
    tmpF147 = T17;
    if (tmpF147 != YPfalse) {
      T20 = tmpF147;
    } else {
      tmpF148 = cacheF144;
      if (tmpF148 != YPfalse) {
        T24 = (P)YPgen_cache_missableQ(cacheF144);
        T23 = CALL1(1,CHKREF(Ynot),T24);
        T22 = T23;
      } else {
        T22 = YPfalse;
      }
      T21 = T22;
      T20 = T21;
    }
    T16 = T20;
    if (T16 != YPfalse) {
      T27 = (P)YPsingleton(argF143);
      T26 = CALL3(1,CHKREF(YOprune_mets_by_type_at),mets_,T27,i_);
      metsF149 = T26;
      T28 = CALLN(1,CHKREF(Ygen_lookup_miss_1_using),10,argF143,argF143,CHKREF(YOgen_cache_singletons),CHKREF(YOgen_cache_singletons_setter),gen_,cacheF144,metsF149,sorted_mets_,i_,args_);
      T25 = T28;
      T15 = T25;
    } else {
      if (singQF145 != YPfalse) {
        T29 = cacheF144;
      } else {
        T31 = (P)YPclass_of(argF143);
        classF150 = T31;
        T33 = CALL3(1,CHKREF(YOprune_mets_by_type_at),mets_,classF150,i_);
        app_metsF151 = T33;
        T34 = CALLN(1,CHKREF(Ygen_lookup_miss_1_using),10,classF150,argF143,CHKREF(YOgen_cache_classes),CHKREF(YOgen_cache_classes_setter),gen_,cacheF144,app_metsF151,sorted_mets_,i_,args_);
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
  P metsF152;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL2(1,CHKREF(Ychoose_methods),gen_,args_);
  metsF152 = T1;
  T3 = (P)YPfun_cache(gen_);
  T4 = (P)YPgen_mets(gen_);
  T2 = CALLN(1,CHKREF(Ygen_lookup_miss_1),6,gen_,T3,T4,metsF152,YPint((P)0),args_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

INLINE P Ygen_lookup(P gen_,P args_) {
  P cF154;
  P tmpF153;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPfun_cache(gen_);
  tmpF153 = T2;
  if (tmpF153 != YPfalse) {
    T3 = tmpF153;
  } else {
    T5 = CALL2(1,CHKREF(Ygen_lookup_miss),gen_,args_);
    T4 = (P)YPfun_cache_setter(T5,gen_);
    T3 = T4;
  }
  T1 = T3;
  cF154 = T1;
  T6 = (P)Ygen_lookup_1(gen_,cF154,args_);
  T0 = T6;
  return T0;
}

INLINE P Yslot_value_at(P object_,P offset_) {
  P slotsF156;
  P valF155;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPiu(offset_);
  T1 = (P)YPslot_elt(object_,T2);
  valF155 = T1;
  T4 = (P)YOEE(valF155,CHKREF(Ynul_slot));
  if (T4 != YPfalse) {
    T6 = CALL1(1,CHKREF(Yobject_slots),object_);
    slotsF156 = T6;
    T10 = CALL2(1,CHKREF(YOelt),slotsF156,offset_);
    T9 = (P)YPslot_init(T10);
    T8 = CALL1(1,T9,object_);
    T11 = (P)YPiu(offset_);
    T7 = (P)YPslot_elt_setter(T8,object_,T11);
    T5 = T7;
    T3 = T5;
  } else {
    T3 = valF155;
  }
  T0 = T3;
  return T0;
}

INLINE P Yslot_value_at_setter(P z_,P object_,P offset_) {
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = (P)YPiu(offset_);
  T0 = (P)YPslot_elt_setter(z_,object_,T1);
  return T0;
}

INLINE P Ygen_lookup_1_using(P key_,P prev_assocs_,P assocs_,P missableQ_,P cache_offset_,P gen_,P cache_,P args_) {
  P nxt_assocsF161;
  P old_assocsF160;
  P vF159;
  P tail_assocsF158;
  P kF157;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8;
loop:
  T1 = (P)YOemptyQ(assocs_);
  if (T1 != YPfalse) {
    if (missableQ_ != YPfalse) {
      T2 = CHKREF(YDmissed_dispatch);
    } else {
      T3 = CALL2(1,CHKREF(Ygen_lookup_miss),gen_,args_);
      (P)YPfun_cache_setter(T3,gen_);
      T4 = (P)Ygen_lookup(gen_,args_);
      T2 = T4;
    }
    T0 = T2;
  } else {
    T6 = (P)YPhead(assocs_);
    kF157 = T6;
    T8 = (P)YPtail(assocs_);
    tail_assocsF158 = T8;
    T10 = (P)YOEE(kF157,key_);
    if (T10 != YPfalse) {
      T12 = (P)YPhead(tail_assocsF158);
      vF159 = T12;
      T15 = (P)YPiu(cache_offset_);
      T14 = (P)YPslot_elt(cache_,T15);
      old_assocsF160 = T14;
      T16 = (P)YOEE(old_assocsF160,assocs_);
      if (T16 != YPfalse) {
      } else {
        T18 = (P)YPtail(tail_assocsF158);
        nxt_assocsF161 = T18;
        T19 = (P)YPiu(cache_offset_);
        (P)YPslot_elt_setter(assocs_,cache_,T19);
        (P)YPtail_setter(old_assocsF160,tail_assocsF158);
        T21 = (P)YPtail(prev_assocs_);
        T20 = (P)YPtail_setter(nxt_assocsF161,T21);
        T17 = T20;
      }
      T22 = (P)Ygen_lookup_1(gen_,vF159,args_);
      T13 = T22;
      T11 = T13;
      T9 = T11;
    } else {
      T24 = (P)YPtail(tail_assocsF158);
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
  P assocsF165;
  P valF164;
  P assocsF163;
  P argF162;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3;
loop:
  T2 = (P)YPclass_of(cache_);
  T1 = (P)YOEE(T2,CHKREF(YLgen_cacheG));
  if (T1 != YPfalse) {
    T5 = (P)YPgen_cache_arg_pos(cache_);
    T4 = (P)YOoelt(args_,T5);
    argF162 = T4;
    T8 = (P)YPgen_cache_singletons(cache_);
    assocsF163 = T8;
    T10 = (P)YPgen_cache_missableQ(cache_);
    T9 = (P)Ygen_lookup_1_using(argF162,assocsF163,assocsF163,T10,CHKREF(YDgen_cache_singletons_offset),gen_,cache_,args_);
    T7 = T9;
    valF164 = T7;
    T12 = (P)YOEE(valF164,CHKREF(YDmissed_dispatch));
    if (T12 != YPfalse) {
      T14 = (P)YPgen_cache_classes(cache_);
      assocsF165 = T14;
      T16 = (P)YPclass_of(argF162);
      T15 = (P)Ygen_lookup_1_using(T16,assocsF165,assocsF165,YPfalse,CHKREF(YDgen_cache_classes_offset),gen_,cache_,args_);
      T13 = T15;
      T11 = T13;
    } else {
      T11 = valF164;
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
  P ambiguous_metsF168;
  P sorted_metsF167;
  P ord_amb_metsF166;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
loop:
  T1 = CALL2(1,CHKREF(Ysorted_app_mets),gen_,args_);
  ord_amb_metsF166 = T1;
  T3 = CALL2(1,CHKREF(YOelt),ord_amb_metsF166,YPint((P)0));
  sorted_metsF167 = T3;
  T5 = CALL2(1,CHKREF(YOelt),ord_amb_metsF166,YPint((P)1));
  ambiguous_metsF168 = T5;
  T8 = (P)YOlen(ambiguous_metsF168);
  T7 = (P)YOL(YPint((P)0),T8);
  if (T7 != YPfalse) {
    T9 = CALL3(1,CHKREF(Yerror),CHKREF(lit_282),gen_,args_);
    T6 = T9;
  } else {
    T11 = (P)YOemptyQ(sorted_metsF167);
    if (T11 != YPfalse) {
      T12 = CALL3(1,CHKREF(Yerror),CHKREF(lit_283),gen_,args_);
      T10 = T12;
    } else {
      T10 = sorted_metsF167;
    }
    T6 = T10;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPdispatch) {
  P args_;
  P resF171;
  P nF170;
  P resultF169;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  NARGS(args_, 0);
loop:
  T2 = (P)YPfun_reg();
  T1 = (P)Ygen_lookup(T2,args_);
  resultF169 = T1;
  T5 = (P)YPclass_of(resultF169);
  T4 = (P)YOEE(T5,CHKREF(YLintG));
  if (T4 != YPfalse) {
    T7 = (P)YOolen(args_);
    nF170 = T7;
    T10 = (P)YOE(nF170,YPint((P)1));
    if (T10 != YPfalse) {
      T12 = (P)YOoelt(args_,YPint((P)0));
      T11 = (P)Yslot_value_at(T12,resultF169);
      T9 = T11;
    } else {
      T14 = (P)YOoelt(args_,YPint((P)0));
      T15 = (P)YOoelt(args_,YPint((P)1));
      T13 = (P)Yslot_value_at_setter(T14,T15,resultF169);
      T9 = T13;
    }
    resF171 = T9;
    (P)YPunlink_stack();
    T8 = resF171;
    T6 = T8;
    T3 = T6;
  } else {
    (P)YPunlink_stack();
    T17 = (P)YPhead(resultF169);
    T18 = (P)YPtail(resultF169);
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
  T1 = (P)YPmet_code(CHKREF(YPdispatch));
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
  T1 = CALL1(1,CHKREF(Yfun_sig),x_);
  T0 = CALL1(1,CHKREF(Ysig_names),T1);
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
  T1 = CALL1(1,CHKREF(Yfun_sig),x_);
  T0 = CALL2(1,CHKREF(Ysig_names_setter),z_,T1);
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
  T1 = CALL1(1,CHKREF(Yfun_sig),x_);
  T0 = CALL1(1,CHKREF(Ysig_specs),T1);
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
  T1 = CALL1(1,CHKREF(Yfun_sig),x_);
  T0 = CALL2(1,CHKREF(Ysig_specs_setter),z_,T1);
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
  T1 = CALL1(1,CHKREF(Yfun_sig),x_);
  T0 = CALL1(1,CHKREF(Ysig_naryQ),T1);
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
  T1 = CALL1(1,CHKREF(Yfun_sig),x_);
  T0 = CALL2(1,CHKREF(Ysig_naryQ_setter),z_,T1);
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
  T1 = CALL1(1,CHKREF(Yfun_sig),x_);
  T0 = CALL1(1,CHKREF(Ysig_arity),T1);
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
  T1 = CALL1(1,CHKREF(Yfun_sig),x_);
  T0 = CALL2(1,CHKREF(Ysig_arity_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_value) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,CHKREF(Yfun_sig),x_);
  T0 = CALL1(1,CHKREF(Ysig_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfun_value_setter) {
  P z_,x_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,CHKREF(Yfun_sig),x_);
  T0 = CALL2(1,CHKREF(Ysig_value_setter),z_,T1);
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
  T1 = CALL1(1,CHKREF(Yfun_sig),x_);
  T0 = CALL1(1,CHKREF(Ysig_unification_vars),T1);
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
  T1 = CALL1(1,CHKREF(Yfun_sig),x_);
  T0 = CALL2(1,CHKREF(Ysig_unification_vars_setter),z_,T1);
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

FUNCODEDEF(YOclass_parents) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPclass_parents(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_p_in_and_unconstrained_inQ_428) {
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

FUNCODEDEF(fun_p_unconstrained_inQ_429) {
  P l_;
  P tmpF172;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T2 = (P)YOhead(l_);
  T1 = (P)YOEE(T2,FREEREF(0));
  tmpF172 = T1;
  if (tmpF172 != YPfalse) {
    T3 = tmpF172;
  } else {
    T6 = (P)YOtail(l_);
    T5 = CALL2(1,CHKREF(YOmemQ),T6,FREEREF(0));
    T4 = CALL1(1,CHKREF(Ynot),T5);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unconstrained_class_430) {
  P p_;
  P tmpF176;
  P tmpF175;
  P p_unconstrained_inQF174;
  P p_in_and_unconstrained_inQF173;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(p_, 0);
loop:
  T1 = FUNSHELL(0,fun_p_in_and_unconstrained_inQ_428,1);
  p_in_and_unconstrained_inQF173 = T1;
  T2 = FUNSHELL(0,fun_p_unconstrained_inQ_429,1);
  p_unconstrained_inQF174 = T2;
  FUNINIT(p_in_and_unconstrained_inQF173, 1,p_);
  FUNINIT(p_unconstrained_inQF174, 1,p_);
  T4 = CALL2(1,CHKREF(YOanyQ),p_in_and_unconstrained_inQF173,FREEREF(0));
  tmpF175 = T4;
  if (tmpF175 != YPfalse) {
    T7 = CALL2(1,CHKREF(YOallQ),p_unconstrained_inQF174,FREEREF(0));
    tmpF176 = T7;
    if (tmpF176 != YPfalse) {
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

FUNCODEDEF(fun_unconstrained_class_in_parents_431) {
  P c_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = (P)YPclass_direct_parents(c_);
  T0 = CALL2(1,CHKREF(YOanyQ),FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_remove_next_432) {
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

FUNCODEDEF(fun_merge_lists_433) {
  P partial_cpl_,remaining_lists_;
  P remove_nextF180;
  P nextF179;
  P unconstrained_class_in_parentsF178;
  P unconstrained_classF177;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(partial_cpl_, 0);
  ARG(remaining_lists_, 1);
loop:
  T1 = CALL2(1,CHKREF(YOallQ),CHKREF(YOOemptyQ),remaining_lists_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,CHKREF(YOrevX),partial_cpl_);
    T0 = T2;
  } else {
    T4 = FUNSHELL(0,fun_unconstrained_class_430,1);
    unconstrained_classF177 = T4;
    T5 = FUNSHELL(0,fun_unconstrained_class_in_parents_431,1);
    unconstrained_class_in_parentsF178 = T5;
    FUNINIT(unconstrained_classF177, 1,remaining_lists_);
    FUNINIT(unconstrained_class_in_parentsF178, 1,unconstrained_classF177);
    T7 = CALL2(1,CHKREF(YOanyQ),unconstrained_class_in_parentsF178,partial_cpl_);
    nextF179 = T7;
    if (nextF179 != YPfalse) {
      T10 = FUNSHELL(0,fun_remove_next_432,1);
      remove_nextF180 = T10;
      FUNINIT(remove_nextF180, 1,nextF179);
      T12 = (P)YOpair(nextF179,partial_cpl_);
      T13 = CALL2(1,CHKREF(YOmap),remove_nextF180,remaining_lists_);
      a1 = T12;
      a2 = T13;
      partial_cpl_ = a1;
      remaining_lists_ = a2;
      goto loop;
      T9 = T11;
      T8 = T9;
    } else {
      T14 = CALL1(1,CHKREF(Yerror),CHKREF(lit_310));
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
  P parentsF182;
  P merge_listsF181;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_merge_lists_433,1);
  merge_listsF181 = T1;
  FUNINIT(merge_listsF181, 1,merge_listsF181);
  T3 = (P)YPclass_direct_parents(c_);
  parentsF182 = T3;
  T5 = CALL1(1,CHKREF(YOlst),c_);
  T7 = CALL2(1,CHKREF(YOmap),CHKREF(YOclass_parents),parentsF182);
  T6 = (P)YOadd(T7,parentsF182);
  T4 = CALL2(1,merge_listsF181,T5,T6);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOclass_direct_slots) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = (P)YPclass_direct_slots(x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yclass_ordered_slots) {
  P x_;
  P slotsF183;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T4 = (P)YPclass_parents(x_);
  T3 = CALL2(1,CHKREF(YOmap),CHKREF(YOclass_direct_slots),T4);
  T2 = CALL3(1,CHKREF(YOreduce),CHKREF(YOcat2),Ynil,T3);
  T1 = CALL1(1,CHKREF(YOdel_dups),T2);
  slotsF183 = T1;
  T5 = (P)YOlen(slotsF183);
  (P)YPclass_slot_len_setter(T5,x_);
  T0 = slotsF183;
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

FUNCODEDEF(fun_438) {
  P parent_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(parent_, 0);
loop:
  T2 = (P)YPclass_direct_children(parent_);
  T1 = (P)YOadd_new(T2,FREEREF(0));
  T0 = (P)YPclass_direct_children_setter(T1,parent_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfab_class) {
  P name_,parents_;
  P xF184;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(parents_, 1);
loop:
  T1 = (P)YPclass(YPint((P)0),name_,parents_,Ynil,Ynil,Ynil,Ynil,Ynil,Ynil,YPfalse);
  xF184 = T1;
  T3 = (P)YPclass_direct_parents(xF184);
  T2 = (P)YOemptyQ(T3);
  if (T2 != YPfalse) {
    T5 = CALL1(1,CHKREF(YOlst),xF184);
    T4 = (P)YPclass_direct_parents_setter(T5,xF184);
  } else {
  }
  T6 = FUNFAB(fun_438,1,xF184);
  T7 = (P)YPclass_direct_parents(xF184);
  CALL2(1,CHKREF(YOdo),T6,T7);
  T8 = CALL1(1,CHKREF(Yclass_ordered_parents),xF184);
  (P)YPclass_parents_setter(T8,xF184);
  T9 = CALL1(1,CHKREF(Yclass_ordered_slots),xF184);
  (P)YPclass_slots_setter(T9,xF184);
  T0 = xF184;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yrefab_class) {
  P old_class_,parents_;
  P new_classF185;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(old_class_, 0);
  ARG(parents_, 1);
loop:
  T2 = (P)YPclass_direct_slots(old_class_);
  T1 = CALL2(1,CHKREF(Yfab_class),parents_,T2);
  new_classF185 = T1;
  (P)YPclass_forward_setter(new_classF185,old_class_);
  T0 = new_classF185;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yobject_slots) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPclass_of(x_);
  T0 = (P)YPclass_slots(T1);
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
    T3 = CALL1(1,CHKREF(Yupdate_instance_for_changed_class),x_);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_444) {
  P i_,slots_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(slots_, 1);
loop:
  T1 = (P)YOemptyQ(slots_);
  if (T1 != YPfalse) {
    T0 = CHKREF(YDgetter_not_found);
  } else {
    T5 = (P)YOhead(slots_);
    T4 = (P)YPslot_getter(T5);
    T3 = (P)YOEE(T4,FREEREF(0));
    if (T3 != YPfalse) {
      T2 = i_;
    } else {
      T7 = (P)YOA(i_,YPint((P)1));
      T8 = (P)YOtail(slots_);
      a1 = T7;
      a2 = T8;
      i_ = a1;
      slots_ = a2;
      goto loop;
      T2 = T6;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yslot_offset) {
  P object_,getter_;
  P loopF186;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_444,2);
  loopF186 = T1;
  FUNINIT(loopF186, 2,getter_,loopF186);
  T3 = CALL1(1,CHKREF(Yobject_slots),object_);
  T2 = CALL2(0,loopF186,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yslot_value) {
  P object_,getter_;
  P offsetF187;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(object_, 0);
  ARG(getter_, 1);
loop:
  CALL1(1,CHKREF(Yensure_fresh_object),object_);
  T1 = CALL2(1,CHKREF(Yslot_offset),object_,getter_);
  offsetF187 = T1;
  T3 = (P)YOE(offsetF187,CHKREF(YDgetter_not_found));
  if (T3 != YPfalse) {
    T4 = CALL3(1,CHKREF(Yerror),CHKREF(lit_325),getter_,object_);
    T2 = T4;
  } else {
    T5 = (P)Yslot_value_at(object_,offsetF187);
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yslot_value_setter) {
  P z_,object_,getter_;
  P offsetF188;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(object_, 1);
  ARG(getter_, 2);
loop:
  CALL1(1,CHKREF(Yensure_fresh_object),object_);
  T1 = CALL2(1,CHKREF(Yslot_offset),object_,getter_);
  offsetF188 = T1;
  T3 = (P)YOE(offsetF188,CHKREF(YDgetter_not_found));
  if (T3 != YPfalse) {
    T4 = CALL3(1,CHKREF(Yerror),CHKREF(lit_327),getter_,object_);
    T2 = T4;
  } else {
    T5 = (P)Yslot_value_at_setter(z_,object_,offsetF188);
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_448) {
  P getters_,vals_;
  P tmpF189;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(getters_, 0);
  ARG(vals_, 1);
loop:
  T3 = (P)YOEE(getters_,Ynil);
  tmpF189 = T3;
  if (tmpF189 != YPfalse) {
    T4 = tmpF189;
  } else {
    T5 = (P)YOEE(vals_,Ynil);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T6 = (P)YOhead(vals_);
    T7 = (P)YOhead(getters_);
    CALL3(1,CHKREF(Yslot_value_setter),T6,FREEREF(0),T7);
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
  P parents_,getters_,vals_;
  P loopF192;
  P objectF191;
  P parentF190;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(parents_, 0);
  ARG(getters_, 1);
  ARG(vals_, 2);
loop:
  T1 = (P)YPhead(parents_);
  parentF190 = T1;
  T5 = (P)YPclass_slot_len(parentF190);
  T4 = (P)YPiu(T5);
  T3 = (P)YPobject_of(parentF190,T4);
  objectF191 = T3;
  T6 = FUNSHELL(1,fun_loop_448,2);
  loopF192 = T6;
  FUNINIT(loopF192, 2,objectF191,loopF192);
  T7 = CALL2(0,loopF192,getters_,vals_);
  T2 = objectF191;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_450) {
  P mets_;
  P metF193;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mets_, 0);
loop:
  T1 = (P)YOemptyQ(mets_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,CHKREF(Yerror),CHKREF(lit_332));
    T0 = T2;
  } else {
    T4 = (P)YOhead(mets_);
    metF193 = T4;
    T7 = CALL2(1,CHKREF(Yfun_spec),metF193,YPint((P)0));
    T6 = (P)YOEE(T7,FREEREF(0));
    if (T6 != YPfalse) {
      T5 = metF193;
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
  P loopF194;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_450,2);
  loopF194 = T1;
  FUNINIT(loopF194, 2,owner_,loopF194);
  T3 = CALL1(1,CHKREF(YOfun_mets),getter_);
  T2 = CALL1(0,loopF194,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_452) {
  P mets_;
  P tmpF196;
  P metF195;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(mets_, 0);
loop:
  T1 = (P)YOemptyQ(mets_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,CHKREF(Yerror),CHKREF(lit_335));
    T0 = T2;
  } else {
    T4 = (P)YOhead(mets_);
    metF195 = T4;
    T8 = CALL2(1,CHKREF(Yfun_spec),metF195,YPint((P)1));
    T7 = (P)YOEE(T8,FREEREF(0));
    tmpF196 = T7;
    if (tmpF196 != YPfalse) {
      T11 = CALL2(1,CHKREF(Yfun_spec),metF195,YPint((P)0));
      T10 = CALL2(1,CHKREF(YOtype_equalQ),T11,FREEREF(1));
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T6 = T9;
    if (T6 != YPfalse) {
      T5 = metF195;
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
  P loopF197;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(owner_, 0);
  ARG(type_, 1);
  ARG(zetter_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_452,3);
  loopF197 = T1;
  FUNINIT(loopF197, 3,owner_,type_,loopF197);
  T3 = CALL1(1,CHKREF(YOfun_mets),zetter_);
  T2 = CALL1(0,loopF197,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_454) {
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
  P new_classF198;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(old_class_, 0);
loop:
  T1 = (P)YPclone(old_class_);
  new_classF198 = T1;
  T2 = fun_454;
  T3 = (P)YPclass_gens(old_class_);
  CALL2(1,CHKREF(YOdo),T2,T3);
  T4 = (P)YPclass_forward_setter(new_classF198,old_class_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_visit_456) {
  P x_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,CHKREF(YOmemQ),T3,x_);
  T1 = CALL1(1,CHKREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = BOXVAL(FREEREF(0));
    T4 = (P)YOadd(T5,x_);
    BOXVAL(FREEREF(0)) = T4;
    CALL1(1,FREEREF(1),x_);
    T7 = (P)YPclass_direct_children(x_);
    T6 = CALL2(1,CHKREF(YOdo),FREEREF(2),T7);
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOdo_children) {
  P f_,x_;
  P visitF200;
  P visitedF199;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
loop:
  visitedF199 = Ynil;
  visitedF199 = BOXFAB(visitedF199);
  T3 = FUNSHELL(0,fun_visit_456,3);
  visitF200 = T3;
  FUNINIT(visitF200, 3,visitedF199,f_,visitF200);
  T4 = CALL1(0,visitF200,x_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_458) {
  P slot_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(slot_, 0);
loop:
  T1 = (P)YPslot_getter(slot_);
  T0 = (P)YPfun_cache_setter(YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPslot) {
  P owner_,getter_,setter_,type_,init_;
  P setter_metF204;
  P getter_metF203;
  P slotF202;
  P classF201;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  ARG(setter_, 2);
  ARG(type_, 3);
  ARG(init_, 4);
loop:
  classF201 = owner_;
  T3 = (P)YPpair(CHKREF(YLslotG),Ynil);
  T8 = (P)YPpair(CHKREF(Yslot_init),Ynil);
  T7 = (P)YPpair(CHKREF(Yslot_type),T8);
  T6 = (P)YPpair(CHKREF(Yslot_setter),T7);
  T5 = (P)YPpair(CHKREF(Yslot_getter),T6);
  T4 = (P)YPpair(CHKREF(Yslot_owner),T5);
  T13 = (P)YPpair(init_,Ynil);
  T12 = (P)YPpair(type_,T13);
  T11 = (P)YPpair(setter_,T12);
  T10 = (P)YPpair(getter_,T11);
  T9 = (P)YPpair(owner_,T10);
  T2 = CALL3(1,CHKREF(YPisa),T3,T4,T9);
  slotF202 = T2;
  T15 = CALL2(1,CHKREF(Yfind_getter),owner_,getter_);
  getter_metF203 = T15;
  T17 = CALL3(1,CHKREF(Yfind_setter),owner_,type_,setter_);
  setter_metF204 = T17;
  (P)YPmet_env_setter(slotF202,getter_metF203);
  (P)YPmet_env_setter(slotF202,setter_metF204);
  T19 = (P)YPclass_direct_slots(classF201);
  T20 = CALL1(1,CHKREF(YOlst),slotF202);
  T18 = CALL2(1,CHKREF(YOcat2),T19,T20);
  (P)YPclass_direct_slots_setter(T18,classF201);
  T21 = CALL1(1,CHKREF(Yclass_ordered_slots),classF201);
  (P)YPclass_slots_setter(T21,classF201);
  T22 = fun_458;
  T23 = (P)YPclass_slots(classF201);
  CALL2(1,CHKREF(YOdo),T22,T23);
  T16 = slotF202;
  T14 = T16;
  T1 = T14;
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
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(name_, 0);
  ARG(names_, 1);
  ARG(specs_, 2);
  ARG(naryQ_, 3);
  ARG(mets_, 4);
loop:
  T1 = (P)YPpair(CHKREF(YLgenG),Ynil);
  T5 = (P)YPpair(CHKREF(Yfun_mets),Ynil);
  T4 = (P)YPpair(CHKREF(Yfun_sig),T5);
  T3 = (P)YPpair(CHKREF(Yfun_name),T4);
  T2 = (P)YPpair(CHKREF(Yfun_code),T3);
  T7 = CALL1(1,CHKREF(Yfun_code),CHKREF(YPdispatch));
  T11 = (P)YPpair(CHKREF(YLsigG),Ynil);
  T16 = (P)YPpair(CHKREF(Ysig_value),Ynil);
  T15 = (P)YPpair(CHKREF(Ysig_arity),T16);
  T14 = (P)YPpair(CHKREF(Ysig_naryQ),T15);
  T13 = (P)YPpair(CHKREF(Ysig_specs),T14);
  T12 = (P)YPpair(CHKREF(Ysig_names),T13);
  T21 = (P)YOlen(specs_);
  T22 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T20 = (P)YPpair(T21,T22);
  T19 = (P)YPpair(naryQ_,T20);
  T18 = (P)YPpair(specs_,T19);
  T17 = (P)YPpair(names_,T18);
  T10 = CALL3(1,CHKREF(YPisa),T11,T12,T17);
  T23 = (P)YPpair(mets_,Ynil);
  T9 = (P)YPpair(T10,T23);
  T8 = (P)YPpair(name_,T9);
  T6 = (P)YPpair(T7,T8);
  T0 = CALL3(1,CHKREF(YPisa),T1,T2,T6);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_463) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(CHKREF(YLanyG));
}

FUNCODEDEF(Ygen_from_met) {
  P x_;
  P specsF205;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = fun_463;
  T3 = CALL1(1,CHKREF(YOfun_specs),x_);
  T1 = CALL2(1,CHKREF(YOmap),T2,T3);
  specsF205 = T1;
  T5 = CALL1(1,CHKREF(Yfun_name),x_);
  T6 = CALL1(1,CHKREF(YOfun_naryQ),x_);
  T4 = CALLN(1,CHKREF(Yfab_gen),5,T5,Ynil,specsF205,T6,Ynil);
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YPdefine_method) {
  P gen_,met_;
  P tmpF206;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
loop:
  tmpF206 = gen_;
  if (tmpF206 != YPfalse) {
    T2 = tmpF206;
  } else {
    T3 = CALL1(1,CHKREF(Ygen_from_met),met_);
    T2 = T3;
  }
  T1 = T2;
  T0 = CALL2(1,CHKREF(Ygen_add_met),T1,met_);
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
  YPTstart_running_atT = fun_;
  T1 = (P)YPsu(name_);
  T0 = (P)YPunexec(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_subtypeQ_467) {
  P t1_,t2_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
loop:
  T0 = CALL2(1,CHKREF(YOsubtypeQ),t1_,t2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_isaQ_468) {
  P x_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(t_, 1);
loop:
  T0 = CALL2(1,CHKREF(YOisaQ),x_,t_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_469) {
  P c_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
loop:
  T0 = CALL2(1,CHKREF(YOmay_isaQ),c_,t_);
UNLINK_STACK();
  RET(T0);
}

P YPmacro(P modname_,P name_,P expander_) {
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  if (CHKREF(YTmacros_okQT) != YPfalse) {
    T1 = CALLN(1,CHKREF(YPPmacro),4,modname_,name_,expander_,YPfalse);
    T0 = T1;
  } else {
    T2 = (P)YOpair(modname_,CHKREF(YTboot_macro_module_namesT));
    YTboot_macro_module_namesT = T2;
    T3 = (P)YOpair(name_,CHKREF(YTboot_macro_namesT));
    YTboot_macro_namesT = T3;
    T5 = (P)YOpair(expander_,CHKREF(YTboot_macro_expandersT));
    T4 = YTboot_macro_expandersT = T5;
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
  YPfalse = (P)0;
  YPtrue = (P)1;
  YPTused_symbols_too_earlyT = (P)0;
  T0 = YPfalse;
  return T0;
}

P Y___main_2___() {
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = (P)YPobject_of((P)0,(P)10);
  YLclassG = T0;
  T1 = (P)YPobject_of(CHKREF(YLclassG),(P)10);
  YLlstG = T1;
  T2 = (P)YPobject_of(CHKREF(YLlstG),(P)2);
  Ynil = T2;
  Yone_nil = CHKREF(Ynil);
  T3 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLanyG = T3;
  T4 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLlogG = T4;
  T5 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLchrG = T5;
  T6 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLnumG = T6;
  T7 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLintG = T7;
  T8 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLfloG = T8;
  T9 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLlocG = T9;
  T10 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLcolG = T10;
  T11 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLseqG = T11;
  T12 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLlstG = T12;
  T13 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLflatG = T13;
  T14 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLvecG = T14;
  T15 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLstrG = T15;
  T16 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLsymG = T16;
  T17 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLtypeG = T17;
  T18 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLclassG = T18;
  T19 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLsingletonG = T19;
  T20 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLsubclassG = T20;
  T21 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLunionG = T21;
  T22 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLslotG = T22;
  T23 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLgen_cacheG = T23;
  T24 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLsigG = T24;
  T25 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLfunG = T25;
  T26 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLmetG = T26;
  T27 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLgenG = T27;
  T28 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLoptsG = T28;
  T29 = (P)YPclass(CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil));
  YLopts_vecG = T29;
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLanyG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLlogG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLchrG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLnumG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLintG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLfloG));
  T31 = (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLlocG));
  T30 = T31;
  return T30;
}

P Y___main_3___() {
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLcolG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLseqG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLlstG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLflatG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLvecG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLstrG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLsymG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLtypeG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLclassG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLsingletonG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLsubclassG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLunionG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLslotG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLgen_cacheG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLsigG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLfunG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLmetG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLgenG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLoptsG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLopts_vecG));
  (P)YPobject_class_setter(CHKREF(YLlstG),CHKREF(Ynil));
  T0 = (P)YPobject_of(CHKREF(YLanyG),(P)0);
  Ynul = T0;
  T1 = (P)YPobject_of(CHKREF(YLanyG),(P)0);
  Ynul_slot = T1;
  T2 = (P)YPobject_of(CHKREF(YLlogG),(P)0);
  YPtrue = T2;
  T3 = (P)YPobject_of(CHKREF(YLlogG),(P)0);
  YPfalse = T3;
  T4 = (P)YPobject_of(CHKREF(YLlstG),(P)0);
  Ynil = T4;
  Ynil = CHKREF(Yone_nil);
  (P)YPhead_setter(CHKREF(Ynil),CHKREF(Ynil));
  (P)YPtail_setter(CHKREF(Ynil),CHKREF(Ynil));
  YPmet_slot_len = (P)4;
  YPsymbols_readyQ = YPfalse;
  YPTstart_running_atT = CHKREF(Ynil);
  T7 = (P)YPraw_alloc((P)4);
  T6 = YDdirect_object_class = T7;
  T5 = T6;
  return T5;
}

P Y___main_4___() {
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  (P)YPelt_setter(CHKREF(YLintG),CHKREF(YDdirect_object_class),(P)1);
  (P)YPelt_setter(CHKREF(YLchrG),CHKREF(YDdirect_object_class),(P)2);
  (P)YPelt_setter(CHKREF(YLlocG),CHKREF(YDdirect_object_class),(P)3);
  T2 = (P)YPiu(YPint((P)32));
  T1 = (P)YPi_(T2,(P)2);
  T0 = (P)YPib(T1);
  YDnum_int_bits = T0;
  T6 = (P)YPiu(YPint((P)1));
  T8 = (P)YPiu(CHKREF(YDnum_int_bits));
  T9 = (P)YPiu(YPint((P)1));
  T7 = (P)YPi_(T8,T9);
  T5 = (P)YPiLL(T6,T7);
  T10 = (P)YPiu(YPint((P)1));
  T4 = (P)YPi_(T5,T10);
  T3 = (P)YPib(T4);
  YDmax_int = T3;
  T13 = (P)YPiu(YPint((P)1));
  T15 = (P)YPiu(CHKREF(YDnum_int_bits));
  T16 = (P)YPiu(YPint((P)1));
  T14 = (P)YPi_(T15,T16);
  T12 = (P)YPiLL(T13,T14);
  T11 = (P)YPib(T12);
  YDmin_int = T11;
  T17 = (P)YPstrX((P)0);
  YPsnul = T17;
  T18 = (P)YPvecX((P)0);
  YPvnul = T18;
  (P)YPdefine_parent(CHKREF(YLanyG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLlogG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLchrG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLnumG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLintG),CHKREF(YLnumG));
  (P)YPdefine_parent(CHKREF(YLfloG),CHKREF(YLnumG));
  (P)YPdefine_parent(CHKREF(YLlocG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLcolG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLseqG),CHKREF(YLcolG));
  (P)YPdefine_parent(CHKREF(YLlstG),CHKREF(YLseqG));
  (P)YPdefine_parent(CHKREF(YLflatG),CHKREF(YLseqG));
  (P)YPdefine_parent(CHKREF(YLvecG),CHKREF(YLflatG));
  (P)YPdefine_parent(CHKREF(YLstrG),CHKREF(YLflatG));
  (P)YPdefine_parent(CHKREF(YLsymG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLtypeG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLclassG),CHKREF(YLtypeG));
  (P)YPdefine_parent(CHKREF(YLsingletonG),CHKREF(YLtypeG));
  (P)YPdefine_parent(CHKREF(YLsubclassG),CHKREF(YLtypeG));
  (P)YPdefine_parent(CHKREF(YLunionG),CHKREF(YLtypeG));
  (P)YPdefine_parent(CHKREF(YLslotG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLgen_cacheG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLsigG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLfunG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLmetG),CHKREF(YLfunG));
  (P)YPdefine_parent(CHKREF(YLgenG),CHKREF(YLfunG));
  T20 = (P)YPdefine_parent(CHKREF(YLoptsG),CHKREF(YLflatG));
  T19 = T20;
  return T19;
}

P Y___main_5___() {
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
loop:
  (P)YPdefine_parent(CHKREF(YLopts_vecG),CHKREF(YLoptsG));
  T0 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  (P)YPclass_parents_setter(T0,CHKREF(YLanyG));
  YPsymbols = CHKREF(Ynil);
  lit_0 = YPsb((P)"Warning: symbols were created in the boot image before the symbol-creation was setup. (Probably from a df or rep)\n");
  T2 = (P)YPeqQ(CHKREF(YPTused_symbols_too_earlyT),YPtrue);
  T1 = (P)YPbb(T2);
  if (T1 != YPfalse) {
    T4 = (P)YPcurrent_output_port();
    T5 = (P)YPsu(CHKREF(lit_0));
    T3 = (P)YPwrite_string(T4,T5);
  } else {
  }
  lit_1 = YPPsym((P)"name");
  lit_2 = YPPsym((P)"lookup");
  lit_3 = YPPsym((P)"s");
  T7 = YPsig(YPPlist(1,CHKREF(lit_3)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_lookup_89 = YPmet(FUNCODEREF(fun_lookup_89),CHKREF(lit_2),T7,ENVNUL);
  T6 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T6,ENVNUL);
  T8 = fun_90;
  Yfab_sym = T8;
  YPsymbols_readyQ = YPtrue;
  lit_4 = YPPsym((P)"fab-sym");
  T10 = YPsig(YPPlist(1,CHKREF(lit_3)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_lookup_91 = YPmet(FUNCODEREF(fun_lookup_91),CHKREF(lit_2),T10,ENVNUL);
  T9 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  Yfab_sym = YPmet(FUNCODEREF(Yfab_sym),CHKREF(lit_4),T9,ENVNUL);
  T11 = Yfab_sym;
  Yfab_sym = T11;
  T12 = (P)YPib(CHKREF(YPmet_slot_len));
  (P)YPclass_slot_len_setter(T12,CHKREF(YLmetG));
  lit_5 = YPPsym((P)"loop");
  lit_6 = YPPsym((P)"l");
  lit_7 = YPPsym((P)"r");
  T13 = YPsig(YPPlist(2,CHKREF(lit_6),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_93 = YPmet(FUNCODEREF(fun_loop_93),CHKREF(lit_5),T13,ENVNUL);
  lit_8 = YPPsym((P)"colx");
  lit_9 = YPPsym((P)"lx");
  lit_10 = YPPsym((P)"x");
  lit_11 = YPPsym((P)"coly");
  lit_12 = YPPsym((P)"lxy");
  lit_13 = YPPsym((P)"y");
  T15 = YPsig(YPPlist(2,CHKREF(lit_12),CHKREF(lit_13)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_coly_95 = YPmet(FUNCODEREF(fun_coly_95),CHKREF(lit_11),T15,ENVNUL);
  T14 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_colx_96 = YPmet(FUNCODEREF(fun_colx_96),CHKREF(lit_8),T14,ENVNUL);
  YDgen_cache_singletons_offset = YPint((P)2);
  YDgen_cache_classes_offset = YPint((P)3);
  T16 = YPfalse;
  return T16;
}

P Y___main_6___() {
  P slotF406;
  P setterF405;
  P accessorF404;
  P getterF403;
  P accessorF402;
  P slotF401;
  P setterF400;
  P accessorF399;
  P getterF398;
  P accessorF397;
  P slotF396;
  P setterF395;
  P accessorF394;
  P getterF393;
  P accessorF392;
  P slotF391;
  P setterF390;
  P accessorF389;
  P getterF388;
  P accessorF387;
  P slotF386;
  P setterF385;
  P accessorF384;
  P getterF383;
  P accessorF382;
  P slotF381;
  P setterF380;
  P accessorF379;
  P getterF378;
  P accessorF377;
  P slotF376;
  P setterF375;
  P accessorF374;
  P getterF373;
  P accessorF372;
  P slotF371;
  P setterF370;
  P accessorF369;
  P getterF368;
  P accessorF367;
  P slotF366;
  P setterF365;
  P accessorF364;
  P getterF363;
  P accessorF362;
  P slotF361;
  P setterF360;
  P accessorF359;
  P getterF358;
  P accessorF357;
  P slotF356;
  P setterF355;
  P accessorF354;
  P getterF353;
  P accessorF352;
  P slotF351;
  P setterF350;
  P accessorF349;
  P getterF348;
  P accessorF347;
  P slotF346;
  P setterF345;
  P accessorF344;
  P getterF343;
  P accessorF342;
  P slotF341;
  P setterF340;
  P accessorF339;
  P getterF338;
  P accessorF337;
  P slotF336;
  P setterF335;
  P accessorF334;
  P getterF333;
  P accessorF332;
  P slotF331;
  P setterF330;
  P accessorF329;
  P getterF328;
  P accessorF327;
  P slotF326;
  P setterF325;
  P accessorF324;
  P getterF323;
  P accessorF322;
  P slotF321;
  P setterF320;
  P accessorF319;
  P getterF318;
  P accessorF317;
  P slotF316;
  P setterF315;
  P accessorF314;
  P getterF313;
  P accessorF312;
  P slotF311;
  P setterF310;
  P accessorF309;
  P getterF308;
  P accessorF307;
  P slotF306;
  P setterF305;
  P accessorF304;
  P getterF303;
  P accessorF302;
  P slotF301;
  P setterF300;
  P accessorF299;
  P getterF298;
  P accessorF297;
  P slotF296;
  P setterF295;
  P accessorF294;
  P getterF293;
  P accessorF292;
  P slotF291;
  P setterF290;
  P accessorF289;
  P getterF288;
  P accessorF287;
  P slotF286;
  P setterF285;
  P accessorF284;
  P getterF283;
  P accessorF282;
  P slotF281;
  P setterF280;
  P accessorF279;
  P getterF278;
  P accessorF277;
  P slotF276;
  P setterF275;
  P accessorF274;
  P getterF273;
  P accessorF272;
  P slotF271;
  P setterF270;
  P accessorF269;
  P getterF268;
  P accessorF267;
  P slotF266;
  P setterF265;
  P accessorF264;
  P getterF263;
  P accessorF262;
  P slotF261;
  P setterF260;
  P accessorF259;
  P getterF258;
  P accessorF257;
  P slotF256;
  P setterF255;
  P accessorF254;
  P getterF253;
  P accessorF252;
  P slotF251;
  P setterF250;
  P accessorF249;
  P getterF248;
  P accessorF247;
  P slotF246;
  P setterF245;
  P accessorF244;
  P getterF243;
  P accessorF242;
  P slotF241;
  P setterF240;
  P accessorF239;
  P getterF238;
  P accessorF237;
  P slotF236;
  P setterF235;
  P accessorF234;
  P getterF233;
  P accessorF232;
  P slotF231;
  P setterF230;
  P accessorF229;
  P getterF228;
  P accessorF227;
  P slotF226;
  P setterF225;
  P accessorF224;
  P getterF223;
  P accessorF222;
  P slotF221;
  P setterF220;
  P accessorF219;
  P getterF218;
  P accessorF217;
  P slotF216;
  P setterF215;
  P accessorF214;
  P getterF213;
  P accessorF212;
  P slotF211;
  P setterF210;
  P accessorF209;
  P getterF208;
  P accessorF207;
  P T775,T774,T773,T772,T771,T770,T769,T768,T767,T766,T765,T764,T763,T762,T761,T760;
  P T759,T758,T757,T756,T755,T754,T753,T752,T751,T750,T749,T748,T747,T746,T745,T744;
  P T743,T742,T741,T740,T739,T738,T737,T736,T735,T734,T733,T732,T731,T730,T729,T728;
  P T727,T726,T725,T724,T723,T722,T721,T720,T719,T718,T717,T716,T715,T714,T713,T712;
  P T711,T710,T709,T708,T707,T706,T705,T704,T703,T702,T701,T700,T699,T698,T697,T696;
  P T695,T694,T693,T692,T691,T690,T689,T688,T687,T686,T685,T684,T683,T682,T681,T680;
  P T679,T678,T677,T676,T675,T674,T673,T672,T671,T670,T669,T668,T667,T666,T665,T664;
  P T663,T662,T661,T660,T659,T658,T657,T656,T655,T654,T653,T652,T651,T650,T649,T648;
  P T647,T646,T645,T644,T643,T642,T641,T640,T639,T638,T637,T636,T635,T634,T633,T632;
  P T631,T630,T629,T628,T627,T626,T625,T624,T623,T622,T621,T620,T619,T618,T617,T616;
  P T615,T614,T613,T612,T611,T610,T609,T608,T607,T606,T605,T604,T603,T602,T601,T600;
  P T599,T598,T597,T596,T595,T594,T593,T592,T591,T590,T589,T588,T587,T586,T585,T584;
  P T583,T582,T581,T580,T579,T578,T577,T576,T575,T574,T573,T572,T571,T570,T569,T568;
  P T567,T566,T565,T564,T563,T562,T561,T560,T559,T558,T557,T556,T555,T554,T553,T552;
  P T551,T550,T549,T548,T547,T546,T545,T544,T543,T542,T541,T540,T539,T538,T537,T536;
  P T535,T534,T533,T532,T531,T530,T529,T528,T527,T526,T525,T524,T523,T522,T521,T520;
  P T519,T518,T517,T516,T515,T514,T513,T512,T511,T510,T509,T508,T507,T506,T505,T504;
  P T503,T502,T501,T500,T499,T498,T497,T496,T495,T494,T493,T492,T491,T490,T489,T488;
  P T487,T486,T485,T484,T483,T482,T481,T480,T479,T478,T477,T476,T475,T474,T473,T472;
  P T471,T470,T469,T468,T467,T466,T465,T464,T463,T462,T461,T460,T459,T458,T457,T456;
  P T455,T454,T453,T452,T451,T450,T449,T448,T447,T446,T445,T444,T443,T442,T441,T440;
  P T439,T438,T437,T436,T435,T434,T433,T432,T431,T430,T429,T428,T427,T426,T425,T424;
  P T423,T422,T421,T420,T419,T418,T417,T416,T415,T414,T413,T412,T411,T410,T409,T408;
  P T407,T406,T405,T404,T403,T402,T401,T400,T399,T398,T397,T396,T395,T394,T393,T392;
  P T391,T390,T389,T388,T387,T386,T385,T384,T383,T382,T381,T380,T379,T378,T377,T376;
  P T375,T374,T373,T372,T371,T370,T369,T368,T367,T366,T365,T364,T363,T362,T361,T360;
  P T359,T358,T357,T356,T355,T354,T353,T352,T351,T350,T349,T348,T347,T346,T345,T344;
  P T343,T342,T341,T340,T339,T338,T337,T336,T335,T334,T333,T332,T331,T330,T329,T328;
  P T327,T326,T325,T324,T323,T322,T321,T320,T319,T318,T317,T316,T315,T314,T313,T312;
  P T311,T310,T309,T308,T307,T306,T305,T304,T303,T302,T301,T300,T299,T298,T297,T296;
  P T295,T294,T293,T292,T291,T290,T289,T288,T287,T286,T285,T284,T283,T282,T281,T280;
  P T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264;
  P T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248;
  P T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232;
  P T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216;
  P T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200;
  P T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184;
  P T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168;
  P T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152;
  P T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136;
  P T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120;
  P T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104;
  P T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88;
  P T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72;
  P T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_14 = YPPsym((P)"%slot-offset");
  lit_15 = YPPsym((P)"owner");
  lit_16 = YPPsym((P)"getter");
  lit_17 = YPPsym((P)"i");
  lit_18 = YPPsym((P)"slots");
  T1 = YPsig(YPPlist(2,CHKREF(lit_17),CHKREF(lit_18)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_146 = YPmet(FUNCODEREF(fun_loop_146),CHKREF(lit_5),T1,ENVNUL);
  T0 = YPsig(YPPlist(2,CHKREF(lit_15),CHKREF(lit_16)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YPslot_offset = YPmet(FUNCODEREF(YPslot_offset),CHKREF(lit_14),T0,ENVNUL);
  T2 = YPslot_offset;
  YPslot_offset = T2;
  lit_19 = YPPsym((P)"%early-dispatch");
  lit_20 = YPPsym((P)"args");
  lit_21 = YPsb((P)"ERROR: Generic function dispatch called before it existed.");
  T3 = YPsig(YPPlist(1,CHKREF(lit_20)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG),Ynil);
  YPearly_dispatch = YPmet(FUNCODEREF(YPearly_dispatch),CHKREF(lit_19),T3,ENVNUL);
  T4 = YPearly_dispatch;
  YPearly_dispatch = T4;
  lit_22 = YPPsym((P)"%add-met");
  lit_23 = YPPsym((P)"gen");
  lit_24 = YPPsym((P)"met");
  T5 = YPsig(YPPlist(2,CHKREF(lit_23),CHKREF(lit_24)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YPadd_met = YPmet(FUNCODEREF(YPadd_met),CHKREF(lit_22),T5,ENVNUL);
  T6 = YPadd_met;
  YPadd_met = T6;
  lit_25 = YPPsym((P)"%add-slot");
  lit_26 = YPPsym((P)"class");
  lit_27 = YPPsym((P)"slot");
  T7 = YPsig(YPPlist(2,CHKREF(lit_26),CHKREF(lit_27)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YPadd_slot = YPmet(FUNCODEREF(YPadd_slot),CHKREF(lit_25),T7,ENVNUL);
  T8 = YPadd_slot;
  YPadd_slot = T8;
  lit_28 = YPPsym((P)"head");
  lit_29 = YPPsym((P)"head-setter");
  lit_30 = YPPsym((P)"z");
  T11 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_151 = YPmet(FUNCODEREF(fun_151),YPfalse,T11,ENVNUL);
  T10 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_152 = YPmet(FUNCODEREF(fun_152),YPfalse,T10,ENVNUL);
  T9 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_153 = YPmet(FUNCODEREF(fun_153),YPfalse,T9,ENVNUL);
  T14 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T13 = (P)YPsig(Ynil,T14,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T12 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_28),T13,Ynil,YPfalse);
  Yhead = T12;
  T16 = fun_151;
  accessorF207 = T16;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yhead),accessorF207);
  (P)YPmet_name_setter(CHKREF(Yhead),accessorF207);
  T15 = accessorF207;
  getterF208 = T15;
  T21 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T20 = (P)YPpair(CHKREF(YLanyG),T21);
  T19 = (P)YPsig(Ynil,T20,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T18 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_29),T19,Ynil,YPfalse);
  Yhead_setter = T18;
  T23 = fun_152;
  accessorF209 = T23;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yhead_setter),accessorF209);
  (P)YPmet_name_setter(CHKREF(Yhead_setter),accessorF209);
  T22 = accessorF209;
  setterF210 = T22;
  T26 = fun_153;
  T25 = (P)YPPslot(CHKREF(YLlstG),CHKREF(Yhead),CHKREF(Yhead_setter),CHKREF(YLanyG),T26);
  slotF211 = T25;
  (P)YPmet_env_setter(slotF211,getterF208);
  (P)YPmet_env_setter(slotF211,setterF210);
  T27 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLlstG),slotF211);
  T24 = T27;
  T17 = T24;
  lit_31 = YPPsym((P)"tail");
  lit_32 = YPPsym((P)"tail-setter");
  T30 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_154 = YPmet(FUNCODEREF(fun_154),YPfalse,T30,ENVNUL);
  T29 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_155 = YPmet(FUNCODEREF(fun_155),YPfalse,T29,ENVNUL);
  T28 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_156 = YPmet(FUNCODEREF(fun_156),YPfalse,T28,ENVNUL);
  T33 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T32 = (P)YPsig(Ynil,T33,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T31 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_31),T32,Ynil,YPfalse);
  Ytail = T31;
  T35 = fun_154;
  accessorF212 = T35;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ytail),accessorF212);
  (P)YPmet_name_setter(CHKREF(Ytail),accessorF212);
  T34 = accessorF212;
  getterF213 = T34;
  T40 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T39 = (P)YPpair(CHKREF(YLanyG),T40);
  T38 = (P)YPsig(Ynil,T39,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T37 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_32),T38,Ynil,YPfalse);
  Ytail_setter = T37;
  T42 = fun_155;
  accessorF214 = T42;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ytail_setter),accessorF214);
  (P)YPmet_name_setter(CHKREF(Ytail_setter),accessorF214);
  T41 = accessorF214;
  setterF215 = T41;
  T45 = fun_156;
  T44 = (P)YPPslot(CHKREF(YLlstG),CHKREF(Ytail),CHKREF(Ytail_setter),CHKREF(YLlstG),T45);
  slotF216 = T44;
  (P)YPmet_env_setter(slotF216,getterF213);
  (P)YPmet_env_setter(slotF216,setterF215);
  T46 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLlstG),slotF216);
  T43 = T46;
  T36 = T43;
  lit_33 = YPPsym((P)"sym-name");
  lit_34 = YPPsym((P)"sym-name-setter");
  T49 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_157 = YPmet(FUNCODEREF(fun_157),YPfalse,T49,ENVNUL);
  T48 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_158 = YPmet(FUNCODEREF(fun_158),YPfalse,T48,ENVNUL);
  T47 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_159 = YPmet(FUNCODEREF(fun_159),YPfalse,T47,ENVNUL);
  T52 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T51 = (P)YPsig(Ynil,T52,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T50 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_33),T51,Ynil,YPfalse);
  Ysym_name = T50;
  T54 = fun_157;
  accessorF217 = T54;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ysym_name),accessorF217);
  (P)YPmet_name_setter(CHKREF(Ysym_name),accessorF217);
  T53 = accessorF217;
  getterF218 = T53;
  T59 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T58 = (P)YPpair(CHKREF(YLanyG),T59);
  T57 = (P)YPsig(Ynil,T58,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T56 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_34),T57,Ynil,YPfalse);
  Ysym_name_setter = T56;
  T61 = fun_158;
  accessorF219 = T61;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ysym_name_setter),accessorF219);
  (P)YPmet_name_setter(CHKREF(Ysym_name_setter),accessorF219);
  T60 = accessorF219;
  setterF220 = T60;
  T64 = fun_159;
  T63 = (P)YPPslot(CHKREF(YLsymG),CHKREF(Ysym_name),CHKREF(Ysym_name_setter),CHKREF(YLstrG),T64);
  slotF221 = T63;
  (P)YPmet_env_setter(slotF221,getterF218);
  (P)YPmet_env_setter(slotF221,setterF220);
  T65 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLsymG),slotF221);
  T62 = T65;
  T55 = T62;
  lit_35 = YPPsym((P)"class-slot-len");
  lit_36 = YPPsym((P)"class-slot-len-setter");
  T68 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_160 = YPmet(FUNCODEREF(fun_160),YPfalse,T68,ENVNUL);
  T67 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLintG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_161 = YPmet(FUNCODEREF(fun_161),YPfalse,T67,ENVNUL);
  T66 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_162 = YPmet(FUNCODEREF(fun_162),YPfalse,T66,ENVNUL);
  T71 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T70 = (P)YPsig(Ynil,T71,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T69 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_35),T70,Ynil,YPfalse);
  Yclass_slot_len = T69;
  T73 = fun_160;
  accessorF222 = T73;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_slot_len),accessorF222);
  (P)YPmet_name_setter(CHKREF(Yclass_slot_len),accessorF222);
  T72 = accessorF222;
  getterF223 = T72;
  T78 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T77 = (P)YPpair(CHKREF(YLanyG),T78);
  T76 = (P)YPsig(Ynil,T77,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T75 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_36),T76,Ynil,YPfalse);
  Yclass_slot_len_setter = T75;
  T80 = fun_161;
  accessorF224 = T80;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_slot_len_setter),accessorF224);
  (P)YPmet_name_setter(CHKREF(Yclass_slot_len_setter),accessorF224);
  T79 = accessorF224;
  setterF225 = T79;
  T83 = fun_162;
  T82 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_slot_len),CHKREF(Yclass_slot_len_setter),CHKREF(YLintG),T83);
  slotF226 = T82;
  (P)YPmet_env_setter(slotF226,getterF223);
  (P)YPmet_env_setter(slotF226,setterF225);
  T84 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLclassG),slotF226);
  T81 = T84;
  T74 = T81;
  lit_37 = YPPsym((P)"class-name");
  lit_38 = YPPsym((P)"class-name-setter");
  T87 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_163 = YPmet(FUNCODEREF(fun_163),YPfalse,T87,ENVNUL);
  T86 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLsymG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_164 = YPmet(FUNCODEREF(fun_164),YPfalse,T86,ENVNUL);
  T85 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_165 = YPmet(FUNCODEREF(fun_165),YPfalse,T85,ENVNUL);
  T90 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T89 = (P)YPsig(Ynil,T90,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T88 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_37),T89,Ynil,YPfalse);
  Yclass_name = T88;
  T92 = fun_163;
  accessorF227 = T92;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_name),accessorF227);
  (P)YPmet_name_setter(CHKREF(Yclass_name),accessorF227);
  T91 = accessorF227;
  getterF228 = T91;
  T97 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T96 = (P)YPpair(CHKREF(YLanyG),T97);
  T95 = (P)YPsig(Ynil,T96,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T94 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_38),T95,Ynil,YPfalse);
  Yclass_name_setter = T94;
  T99 = fun_164;
  accessorF229 = T99;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_name_setter),accessorF229);
  (P)YPmet_name_setter(CHKREF(Yclass_name_setter),accessorF229);
  T98 = accessorF229;
  setterF230 = T98;
  T102 = fun_165;
  T101 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_name),CHKREF(Yclass_name_setter),CHKREF(YLsymG),T102);
  slotF231 = T101;
  (P)YPmet_env_setter(slotF231,getterF228);
  (P)YPmet_env_setter(slotF231,setterF230);
  T103 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLclassG),slotF231);
  T100 = T103;
  T93 = T100;
  lit_39 = YPPsym((P)"class-direct-parents");
  lit_40 = YPPsym((P)"class-direct-parents-setter");
  T106 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_166 = YPmet(FUNCODEREF(fun_166),YPfalse,T106,ENVNUL);
  T105 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_167 = YPmet(FUNCODEREF(fun_167),YPfalse,T105,ENVNUL);
  T104 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_168 = YPmet(FUNCODEREF(fun_168),YPfalse,T104,ENVNUL);
  T109 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T108 = (P)YPsig(Ynil,T109,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T107 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_39),T108,Ynil,YPfalse);
  Yclass_direct_parents = T107;
  T111 = fun_166;
  accessorF232 = T111;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_direct_parents),accessorF232);
  (P)YPmet_name_setter(CHKREF(Yclass_direct_parents),accessorF232);
  T110 = accessorF232;
  getterF233 = T110;
  T116 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T115 = (P)YPpair(CHKREF(YLanyG),T116);
  T114 = (P)YPsig(Ynil,T115,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T113 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_40),T114,Ynil,YPfalse);
  Yclass_direct_parents_setter = T113;
  T118 = fun_167;
  accessorF234 = T118;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_direct_parents_setter),accessorF234);
  (P)YPmet_name_setter(CHKREF(Yclass_direct_parents_setter),accessorF234);
  T117 = accessorF234;
  setterF235 = T117;
  T121 = fun_168;
  T120 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_direct_parents),CHKREF(Yclass_direct_parents_setter),CHKREF(YLlstG),T121);
  slotF236 = T120;
  (P)YPmet_env_setter(slotF236,getterF233);
  (P)YPmet_env_setter(slotF236,setterF235);
  T122 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLclassG),slotF236);
  T119 = T122;
  T112 = T119;
  lit_41 = YPPsym((P)"class-direct-slots");
  lit_42 = YPPsym((P)"class-direct-slots-setter");
  T125 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_169 = YPmet(FUNCODEREF(fun_169),YPfalse,T125,ENVNUL);
  T124 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_170 = YPmet(FUNCODEREF(fun_170),YPfalse,T124,ENVNUL);
  T123 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_171 = YPmet(FUNCODEREF(fun_171),YPfalse,T123,ENVNUL);
  T128 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T127 = (P)YPsig(Ynil,T128,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T126 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_41),T127,Ynil,YPfalse);
  Yclass_direct_slots = T126;
  T130 = fun_169;
  accessorF237 = T130;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_direct_slots),accessorF237);
  (P)YPmet_name_setter(CHKREF(Yclass_direct_slots),accessorF237);
  T129 = accessorF237;
  getterF238 = T129;
  T135 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T134 = (P)YPpair(CHKREF(YLanyG),T135);
  T133 = (P)YPsig(Ynil,T134,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T132 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_42),T133,Ynil,YPfalse);
  Yclass_direct_slots_setter = T132;
  T137 = fun_170;
  accessorF239 = T137;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_direct_slots_setter),accessorF239);
  (P)YPmet_name_setter(CHKREF(Yclass_direct_slots_setter),accessorF239);
  T136 = accessorF239;
  setterF240 = T136;
  T140 = fun_171;
  T139 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_direct_slots),CHKREF(Yclass_direct_slots_setter),CHKREF(YLlstG),T140);
  slotF241 = T139;
  (P)YPmet_env_setter(slotF241,getterF238);
  (P)YPmet_env_setter(slotF241,setterF240);
  T141 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLclassG),slotF241);
  T138 = T141;
  T131 = T138;
  lit_43 = YPPsym((P)"class-parents");
  lit_44 = YPPsym((P)"class-parents-setter");
  T144 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_172 = YPmet(FUNCODEREF(fun_172),YPfalse,T144,ENVNUL);
  T143 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_173 = YPmet(FUNCODEREF(fun_173),YPfalse,T143,ENVNUL);
  T142 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_174 = YPmet(FUNCODEREF(fun_174),YPfalse,T142,ENVNUL);
  T147 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T146 = (P)YPsig(Ynil,T147,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T145 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_43),T146,Ynil,YPfalse);
  Yclass_parents = T145;
  T149 = fun_172;
  accessorF242 = T149;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_parents),accessorF242);
  (P)YPmet_name_setter(CHKREF(Yclass_parents),accessorF242);
  T148 = accessorF242;
  getterF243 = T148;
  T154 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T153 = (P)YPpair(CHKREF(YLanyG),T154);
  T152 = (P)YPsig(Ynil,T153,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T151 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_44),T152,Ynil,YPfalse);
  Yclass_parents_setter = T151;
  T156 = fun_173;
  accessorF244 = T156;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_parents_setter),accessorF244);
  (P)YPmet_name_setter(CHKREF(Yclass_parents_setter),accessorF244);
  T155 = accessorF244;
  setterF245 = T155;
  T159 = fun_174;
  T158 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_parents),CHKREF(Yclass_parents_setter),CHKREF(YLlstG),T159);
  slotF246 = T158;
  (P)YPmet_env_setter(slotF246,getterF243);
  (P)YPmet_env_setter(slotF246,setterF245);
  T160 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLclassG),slotF246);
  T157 = T160;
  T150 = T157;
  lit_45 = YPPsym((P)"class-slots");
  lit_46 = YPPsym((P)"class-slots-setter");
  T163 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T163,ENVNUL);
  T162 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_176 = YPmet(FUNCODEREF(fun_176),YPfalse,T162,ENVNUL);
  T161 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_177 = YPmet(FUNCODEREF(fun_177),YPfalse,T161,ENVNUL);
  T166 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T165 = (P)YPsig(Ynil,T166,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T164 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_45),T165,Ynil,YPfalse);
  Yclass_slots = T164;
  T168 = fun_175;
  accessorF247 = T168;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_slots),accessorF247);
  (P)YPmet_name_setter(CHKREF(Yclass_slots),accessorF247);
  T167 = accessorF247;
  getterF248 = T167;
  T173 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T172 = (P)YPpair(CHKREF(YLanyG),T173);
  T171 = (P)YPsig(Ynil,T172,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T170 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_46),T171,Ynil,YPfalse);
  Yclass_slots_setter = T170;
  T175 = fun_176;
  accessorF249 = T175;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_slots_setter),accessorF249);
  (P)YPmet_name_setter(CHKREF(Yclass_slots_setter),accessorF249);
  T174 = accessorF249;
  setterF250 = T174;
  T178 = fun_177;
  T177 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_slots),CHKREF(Yclass_slots_setter),CHKREF(YLlstG),T178);
  slotF251 = T177;
  (P)YPmet_env_setter(slotF251,getterF248);
  (P)YPmet_env_setter(slotF251,setterF250);
  T179 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLclassG),slotF251);
  T176 = T179;
  T169 = T176;
  lit_47 = YPPsym((P)"class-direct-children");
  lit_48 = YPPsym((P)"class-direct-children-setter");
  T182 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T182,ENVNUL);
  T181 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_179 = YPmet(FUNCODEREF(fun_179),YPfalse,T181,ENVNUL);
  T180 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T180,ENVNUL);
  T185 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T184 = (P)YPsig(Ynil,T185,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T183 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_47),T184,Ynil,YPfalse);
  Yclass_direct_children = T183;
  T187 = fun_178;
  accessorF252 = T187;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_direct_children),accessorF252);
  (P)YPmet_name_setter(CHKREF(Yclass_direct_children),accessorF252);
  T186 = accessorF252;
  getterF253 = T186;
  T192 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T191 = (P)YPpair(CHKREF(YLanyG),T192);
  T190 = (P)YPsig(Ynil,T191,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T189 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_48),T190,Ynil,YPfalse);
  Yclass_direct_children_setter = T189;
  T194 = fun_179;
  accessorF254 = T194;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_direct_children_setter),accessorF254);
  (P)YPmet_name_setter(CHKREF(Yclass_direct_children_setter),accessorF254);
  T193 = accessorF254;
  setterF255 = T193;
  T197 = fun_180;
  T196 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_direct_children),CHKREF(Yclass_direct_children_setter),CHKREF(YLlstG),T197);
  slotF256 = T196;
  (P)YPmet_env_setter(slotF256,getterF253);
  (P)YPmet_env_setter(slotF256,setterF255);
  T198 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLclassG),slotF256);
  T195 = T198;
  T188 = T195;
  lit_49 = YPPsym((P)"class-gens");
  lit_50 = YPPsym((P)"class-gens-setter");
  T201 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_181 = YPmet(FUNCODEREF(fun_181),YPfalse,T201,ENVNUL);
  T200 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T200,ENVNUL);
  T199 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_183 = YPmet(FUNCODEREF(fun_183),YPfalse,T199,ENVNUL);
  T204 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T203 = (P)YPsig(Ynil,T204,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T202 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_49),T203,Ynil,YPfalse);
  Yclass_gens = T202;
  T206 = fun_181;
  accessorF257 = T206;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_gens),accessorF257);
  (P)YPmet_name_setter(CHKREF(Yclass_gens),accessorF257);
  T205 = accessorF257;
  getterF258 = T205;
  T211 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T210 = (P)YPpair(CHKREF(YLanyG),T211);
  T209 = (P)YPsig(Ynil,T210,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T208 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_50),T209,Ynil,YPfalse);
  Yclass_gens_setter = T208;
  T213 = fun_182;
  accessorF259 = T213;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_gens_setter),accessorF259);
  (P)YPmet_name_setter(CHKREF(Yclass_gens_setter),accessorF259);
  T212 = accessorF259;
  setterF260 = T212;
  T216 = fun_183;
  T215 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_gens),CHKREF(Yclass_gens_setter),CHKREF(YLlstG),T216);
  slotF261 = T215;
  (P)YPmet_env_setter(slotF261,getterF258);
  (P)YPmet_env_setter(slotF261,setterF260);
  T217 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLclassG),slotF261);
  T214 = T217;
  T207 = T214;
  lit_51 = YPPsym((P)"class-mets");
  lit_52 = YPPsym((P)"class-mets-setter");
  T220 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_184 = YPmet(FUNCODEREF(fun_184),YPfalse,T220,ENVNUL);
  T219 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_185 = YPmet(FUNCODEREF(fun_185),YPfalse,T219,ENVNUL);
  T218 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_186 = YPmet(FUNCODEREF(fun_186),YPfalse,T218,ENVNUL);
  T223 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T222 = (P)YPsig(Ynil,T223,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T221 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_51),T222,Ynil,YPfalse);
  Yclass_mets = T221;
  T225 = fun_184;
  accessorF262 = T225;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_mets),accessorF262);
  (P)YPmet_name_setter(CHKREF(Yclass_mets),accessorF262);
  T224 = accessorF262;
  getterF263 = T224;
  T230 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T229 = (P)YPpair(CHKREF(YLanyG),T230);
  T228 = (P)YPsig(Ynil,T229,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T227 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_52),T228,Ynil,YPfalse);
  Yclass_mets_setter = T227;
  T232 = fun_185;
  accessorF264 = T232;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_mets_setter),accessorF264);
  (P)YPmet_name_setter(CHKREF(Yclass_mets_setter),accessorF264);
  T231 = accessorF264;
  setterF265 = T231;
  T235 = fun_186;
  T234 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_mets),CHKREF(Yclass_mets_setter),CHKREF(YLlstG),T235);
  slotF266 = T234;
  (P)YPmet_env_setter(slotF266,getterF263);
  (P)YPmet_env_setter(slotF266,setterF265);
  T236 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLclassG),slotF266);
  T233 = T236;
  T226 = T233;
  lit_53 = YPPsym((P)"class-forward");
  lit_54 = YPPsym((P)"class-forward-setter");
  T239 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_187 = YPmet(FUNCODEREF(fun_187),YPfalse,T239,ENVNUL);
  T238 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T238,ENVNUL);
  T237 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_189 = YPmet(FUNCODEREF(fun_189),YPfalse,T237,ENVNUL);
  T242 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T241 = (P)YPsig(Ynil,T242,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T240 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_53),T241,Ynil,YPfalse);
  Yclass_forward = T240;
  T244 = fun_187;
  accessorF267 = T244;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_forward),accessorF267);
  (P)YPmet_name_setter(CHKREF(Yclass_forward),accessorF267);
  T243 = accessorF267;
  getterF268 = T243;
  T249 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T248 = (P)YPpair(CHKREF(YLanyG),T249);
  T247 = (P)YPsig(Ynil,T248,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T246 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_54),T247,Ynil,YPfalse);
  Yclass_forward_setter = T246;
  T251 = fun_188;
  accessorF269 = T251;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yclass_forward_setter),accessorF269);
  (P)YPmet_name_setter(CHKREF(Yclass_forward_setter),accessorF269);
  T250 = accessorF269;
  setterF270 = T250;
  T254 = fun_189;
  T253 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_forward),CHKREF(Yclass_forward_setter),CHKREF(YLanyG),T254);
  slotF271 = T253;
  (P)YPmet_env_setter(slotF271,getterF268);
  (P)YPmet_env_setter(slotF271,setterF270);
  T255 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLclassG),slotF271);
  T252 = T255;
  T245 = T252;
  lit_55 = YPPsym((P)"type-object");
  lit_56 = YPPsym((P)"type-object-setter");
  T258 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLsingletonG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_190 = YPmet(FUNCODEREF(fun_190),YPfalse,T258,ENVNUL);
  T257 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLsingletonG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T257,ENVNUL);
  T256 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_192 = YPmet(FUNCODEREF(fun_192),YPfalse,T256,ENVNUL);
  T261 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T260 = (P)YPsig(Ynil,T261,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T259 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_55),T260,Ynil,YPfalse);
  Ytype_object = T259;
  T263 = fun_190;
  accessorF272 = T263;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ytype_object),accessorF272);
  (P)YPmet_name_setter(CHKREF(Ytype_object),accessorF272);
  T262 = accessorF272;
  getterF273 = T262;
  T268 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T267 = (P)YPpair(CHKREF(YLanyG),T268);
  T266 = (P)YPsig(Ynil,T267,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T265 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_56),T266,Ynil,YPfalse);
  Ytype_object_setter = T265;
  T270 = fun_191;
  accessorF274 = T270;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ytype_object_setter),accessorF274);
  (P)YPmet_name_setter(CHKREF(Ytype_object_setter),accessorF274);
  T269 = accessorF274;
  setterF275 = T269;
  T273 = fun_192;
  T272 = (P)YPPslot(CHKREF(YLsingletonG),CHKREF(Ytype_object),CHKREF(Ytype_object_setter),CHKREF(YLanyG),T273);
  slotF276 = T272;
  (P)YPmet_env_setter(slotF276,getterF273);
  (P)YPmet_env_setter(slotF276,setterF275);
  T274 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLsingletonG),slotF276);
  T271 = T274;
  T264 = T271;
  lit_57 = YPPsym((P)"type-class");
  lit_58 = YPPsym((P)"type-class-setter");
  T277 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLsubclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T277,ENVNUL);
  T276 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLclassG),CHKREF(YLsubclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_194 = YPmet(FUNCODEREF(fun_194),YPfalse,T276,ENVNUL);
  T275 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_195 = YPmet(FUNCODEREF(fun_195),YPfalse,T275,ENVNUL);
  T280 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T279 = (P)YPsig(Ynil,T280,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T278 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_57),T279,Ynil,YPfalse);
  Ytype_class = T278;
  T282 = fun_193;
  accessorF277 = T282;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ytype_class),accessorF277);
  (P)YPmet_name_setter(CHKREF(Ytype_class),accessorF277);
  T281 = accessorF277;
  getterF278 = T281;
  T287 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T286 = (P)YPpair(CHKREF(YLanyG),T287);
  T285 = (P)YPsig(Ynil,T286,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T284 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_58),T285,Ynil,YPfalse);
  Ytype_class_setter = T284;
  T289 = fun_194;
  accessorF279 = T289;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ytype_class_setter),accessorF279);
  (P)YPmet_name_setter(CHKREF(Ytype_class_setter),accessorF279);
  T288 = accessorF279;
  setterF280 = T288;
  T292 = fun_195;
  T291 = (P)YPPslot(CHKREF(YLsubclassG),CHKREF(Ytype_class),CHKREF(Ytype_class_setter),CHKREF(YLclassG),T292);
  slotF281 = T291;
  (P)YPmet_env_setter(slotF281,getterF278);
  (P)YPmet_env_setter(slotF281,setterF280);
  T293 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLsubclassG),slotF281);
  T290 = T293;
  T283 = T290;
  lit_59 = YPPsym((P)"type-elts");
  lit_60 = YPPsym((P)"type-elts-setter");
  T296 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLunionG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_196 = YPmet(FUNCODEREF(fun_196),YPfalse,T296,ENVNUL);
  T295 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLunionG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T295,ENVNUL);
  T294 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_198 = YPmet(FUNCODEREF(fun_198),YPfalse,T294,ENVNUL);
  T299 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T298 = (P)YPsig(Ynil,T299,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T297 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_59),T298,Ynil,YPfalse);
  Ytype_elts = T297;
  T301 = fun_196;
  accessorF282 = T301;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ytype_elts),accessorF282);
  (P)YPmet_name_setter(CHKREF(Ytype_elts),accessorF282);
  T300 = accessorF282;
  getterF283 = T300;
  T306 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T305 = (P)YPpair(CHKREF(YLanyG),T306);
  T304 = (P)YPsig(Ynil,T305,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T303 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_60),T304,Ynil,YPfalse);
  Ytype_elts_setter = T303;
  T308 = fun_197;
  accessorF284 = T308;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ytype_elts_setter),accessorF284);
  (P)YPmet_name_setter(CHKREF(Ytype_elts_setter),accessorF284);
  T307 = accessorF284;
  setterF285 = T307;
  T311 = fun_198;
  T310 = (P)YPPslot(CHKREF(YLunionG),CHKREF(Ytype_elts),CHKREF(Ytype_elts_setter),CHKREF(YLlstG),T311);
  slotF286 = T310;
  (P)YPmet_env_setter(slotF286,getterF283);
  (P)YPmet_env_setter(slotF286,setterF285);
  T312 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLunionG),slotF286);
  T309 = T312;
  T302 = T309;
  lit_61 = YPPsym((P)"slot-owner");
  lit_62 = YPPsym((P)"slot-owner-setter");
  T315 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLslotG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_199 = YPmet(FUNCODEREF(fun_199),YPfalse,T315,ENVNUL);
  T314 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLslotG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_200 = YPmet(FUNCODEREF(fun_200),YPfalse,T314,ENVNUL);
  T313 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_201 = YPmet(FUNCODEREF(fun_201),YPfalse,T313,ENVNUL);
  T318 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T317 = (P)YPsig(Ynil,T318,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T316 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_61),T317,Ynil,YPfalse);
  Yslot_owner = T316;
  T320 = fun_199;
  accessorF287 = T320;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yslot_owner),accessorF287);
  (P)YPmet_name_setter(CHKREF(Yslot_owner),accessorF287);
  T319 = accessorF287;
  getterF288 = T319;
  T325 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T324 = (P)YPpair(CHKREF(YLanyG),T325);
  T323 = (P)YPsig(Ynil,T324,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T322 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_62),T323,Ynil,YPfalse);
  Yslot_owner_setter = T322;
  T327 = fun_200;
  accessorF289 = T327;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yslot_owner_setter),accessorF289);
  (P)YPmet_name_setter(CHKREF(Yslot_owner_setter),accessorF289);
  T326 = accessorF289;
  setterF290 = T326;
  T330 = fun_201;
  T329 = (P)YPPslot(CHKREF(YLslotG),CHKREF(Yslot_owner),CHKREF(Yslot_owner_setter),CHKREF(YLanyG),T330);
  slotF291 = T329;
  (P)YPmet_env_setter(slotF291,getterF288);
  (P)YPmet_env_setter(slotF291,setterF290);
  T331 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLslotG),slotF291);
  T328 = T331;
  T321 = T328;
  lit_63 = YPPsym((P)"slot-getter");
  lit_64 = YPPsym((P)"slot-getter-setter");
  T334 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLslotG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T334,ENVNUL);
  T333 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLslotG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_203 = YPmet(FUNCODEREF(fun_203),YPfalse,T333,ENVNUL);
  T332 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_204 = YPmet(FUNCODEREF(fun_204),YPfalse,T332,ENVNUL);
  T337 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T336 = (P)YPsig(Ynil,T337,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T335 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_63),T336,Ynil,YPfalse);
  Yslot_getter = T335;
  T339 = fun_202;
  accessorF292 = T339;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yslot_getter),accessorF292);
  (P)YPmet_name_setter(CHKREF(Yslot_getter),accessorF292);
  T338 = accessorF292;
  getterF293 = T338;
  T344 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T343 = (P)YPpair(CHKREF(YLanyG),T344);
  T342 = (P)YPsig(Ynil,T343,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T341 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_64),T342,Ynil,YPfalse);
  Yslot_getter_setter = T341;
  T346 = fun_203;
  accessorF294 = T346;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yslot_getter_setter),accessorF294);
  (P)YPmet_name_setter(CHKREF(Yslot_getter_setter),accessorF294);
  T345 = accessorF294;
  setterF295 = T345;
  T349 = fun_204;
  T348 = (P)YPPslot(CHKREF(YLslotG),CHKREF(Yslot_getter),CHKREF(Yslot_getter_setter),CHKREF(YLfunG),T349);
  slotF296 = T348;
  (P)YPmet_env_setter(slotF296,getterF293);
  (P)YPmet_env_setter(slotF296,setterF295);
  T350 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLslotG),slotF296);
  T347 = T350;
  T340 = T347;
  lit_65 = YPPsym((P)"slot-setter");
  lit_66 = YPPsym((P)"slot-setter-setter");
  T353 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLslotG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_205 = YPmet(FUNCODEREF(fun_205),YPfalse,T353,ENVNUL);
  T352 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLslotG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T352,ENVNUL);
  T351 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_207 = YPmet(FUNCODEREF(fun_207),YPfalse,T351,ENVNUL);
  T356 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T355 = (P)YPsig(Ynil,T356,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T354 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_65),T355,Ynil,YPfalse);
  Yslot_setter = T354;
  T358 = fun_205;
  accessorF297 = T358;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yslot_setter),accessorF297);
  (P)YPmet_name_setter(CHKREF(Yslot_setter),accessorF297);
  T357 = accessorF297;
  getterF298 = T357;
  T363 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T362 = (P)YPpair(CHKREF(YLanyG),T363);
  T361 = (P)YPsig(Ynil,T362,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T360 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_66),T361,Ynil,YPfalse);
  Yslot_setter_setter = T360;
  T365 = fun_206;
  accessorF299 = T365;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yslot_setter_setter),accessorF299);
  (P)YPmet_name_setter(CHKREF(Yslot_setter_setter),accessorF299);
  T364 = accessorF299;
  setterF300 = T364;
  T368 = fun_207;
  T367 = (P)YPPslot(CHKREF(YLslotG),CHKREF(Yslot_setter),CHKREF(Yslot_setter_setter),CHKREF(YLfunG),T368);
  slotF301 = T367;
  (P)YPmet_env_setter(slotF301,getterF298);
  (P)YPmet_env_setter(slotF301,setterF300);
  T369 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLslotG),slotF301);
  T366 = T369;
  T359 = T366;
  lit_67 = YPPsym((P)"slot-type");
  lit_68 = YPPsym((P)"slot-type-setter");
  T372 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLslotG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_208 = YPmet(FUNCODEREF(fun_208),YPfalse,T372,ENVNUL);
  T371 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLslotG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T371,ENVNUL);
  T370 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T370,ENVNUL);
  T375 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T374 = (P)YPsig(Ynil,T375,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T373 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_67),T374,Ynil,YPfalse);
  Yslot_type = T373;
  T377 = fun_208;
  accessorF302 = T377;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yslot_type),accessorF302);
  (P)YPmet_name_setter(CHKREF(Yslot_type),accessorF302);
  T376 = accessorF302;
  getterF303 = T376;
  T382 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T381 = (P)YPpair(CHKREF(YLanyG),T382);
  T380 = (P)YPsig(Ynil,T381,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T379 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_68),T380,Ynil,YPfalse);
  Yslot_type_setter = T379;
  T384 = fun_209;
  accessorF304 = T384;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yslot_type_setter),accessorF304);
  (P)YPmet_name_setter(CHKREF(Yslot_type_setter),accessorF304);
  T383 = accessorF304;
  setterF305 = T383;
  T387 = fun_210;
  T386 = (P)YPPslot(CHKREF(YLslotG),CHKREF(Yslot_type),CHKREF(Yslot_type_setter),CHKREF(YLanyG),T387);
  slotF306 = T386;
  (P)YPmet_env_setter(slotF306,getterF303);
  (P)YPmet_env_setter(slotF306,setterF305);
  T388 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLslotG),slotF306);
  T385 = T388;
  T378 = T385;
  lit_69 = YPPsym((P)"slot-init");
  lit_70 = YPPsym((P)"slot-init-setter");
  T392 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLslotG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_211 = YPmet(FUNCODEREF(fun_211),YPfalse,T392,ENVNUL);
  T391 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLslotG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_212 = YPmet(FUNCODEREF(fun_212),YPfalse,T391,ENVNUL);
  T390 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_213 = YPmet(FUNCODEREF(fun_213),YPfalse,T390,ENVNUL);
  T389 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_214 = YPmet(FUNCODEREF(fun_214),YPfalse,T389,ENVNUL);
  T395 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T394 = (P)YPsig(Ynil,T395,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T393 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_69),T394,Ynil,YPfalse);
  Yslot_init = T393;
  T397 = fun_211;
  accessorF307 = T397;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yslot_init),accessorF307);
  (P)YPmet_name_setter(CHKREF(Yslot_init),accessorF307);
  T396 = accessorF307;
  getterF308 = T396;
  T402 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T401 = (P)YPpair(CHKREF(YLanyG),T402);
  T400 = (P)YPsig(Ynil,T401,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T399 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_70),T400,Ynil,YPfalse);
  Yslot_init_setter = T399;
  T404 = fun_212;
  accessorF309 = T404;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yslot_init_setter),accessorF309);
  (P)YPmet_name_setter(CHKREF(Yslot_init_setter),accessorF309);
  T403 = accessorF309;
  setterF310 = T403;
  T407 = fun_214;
  T406 = (P)YPPslot(CHKREF(YLslotG),CHKREF(Yslot_init),CHKREF(Yslot_init_setter),CHKREF(YLfunG),T407);
  slotF311 = T406;
  (P)YPmet_env_setter(slotF311,getterF308);
  (P)YPmet_env_setter(slotF311,setterF310);
  T408 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLslotG),slotF311);
  T405 = T408;
  T398 = T405;
  lit_71 = YPPsym((P)"gen-cache-missable?");
  lit_72 = YPPsym((P)"gen-cache-missable?-setter");
  T411 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLgen_cacheG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T411,ENVNUL);
  T410 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlogG),CHKREF(YLgen_cacheG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T410,ENVNUL);
  T409 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_217 = YPmet(FUNCODEREF(fun_217),YPfalse,T409,ENVNUL);
  T414 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T413 = (P)YPsig(Ynil,T414,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T412 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_71),T413,Ynil,YPfalse);
  Ygen_cache_missableQ = T412;
  T416 = fun_215;
  accessorF312 = T416;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ygen_cache_missableQ),accessorF312);
  (P)YPmet_name_setter(CHKREF(Ygen_cache_missableQ),accessorF312);
  T415 = accessorF312;
  getterF313 = T415;
  T421 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T420 = (P)YPpair(CHKREF(YLanyG),T421);
  T419 = (P)YPsig(Ynil,T420,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T418 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_72),T419,Ynil,YPfalse);
  Ygen_cache_missableQ_setter = T418;
  T423 = fun_216;
  accessorF314 = T423;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ygen_cache_missableQ_setter),accessorF314);
  (P)YPmet_name_setter(CHKREF(Ygen_cache_missableQ_setter),accessorF314);
  T422 = accessorF314;
  setterF315 = T422;
  T426 = fun_217;
  T425 = (P)YPPslot(CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_missableQ),CHKREF(Ygen_cache_missableQ_setter),CHKREF(YLlogG),T426);
  slotF316 = T425;
  (P)YPmet_env_setter(slotF316,getterF313);
  (P)YPmet_env_setter(slotF316,setterF315);
  T427 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLgen_cacheG),slotF316);
  T424 = T427;
  T417 = T424;
  lit_73 = YPPsym((P)"gen-cache-arg-pos");
  lit_74 = YPPsym((P)"gen-cache-arg-pos-setter");
  T430 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLgen_cacheG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_218 = YPmet(FUNCODEREF(fun_218),YPfalse,T430,ENVNUL);
  T429 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLintG),CHKREF(YLgen_cacheG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T429,ENVNUL);
  T428 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T428,ENVNUL);
  T433 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T432 = (P)YPsig(Ynil,T433,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T431 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_73),T432,Ynil,YPfalse);
  Ygen_cache_arg_pos = T431;
  T435 = fun_218;
  accessorF317 = T435;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ygen_cache_arg_pos),accessorF317);
  (P)YPmet_name_setter(CHKREF(Ygen_cache_arg_pos),accessorF317);
  T434 = accessorF317;
  getterF318 = T434;
  T440 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T439 = (P)YPpair(CHKREF(YLanyG),T440);
  T438 = (P)YPsig(Ynil,T439,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T437 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_74),T438,Ynil,YPfalse);
  Ygen_cache_arg_pos_setter = T437;
  T442 = fun_219;
  accessorF319 = T442;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ygen_cache_arg_pos_setter),accessorF319);
  (P)YPmet_name_setter(CHKREF(Ygen_cache_arg_pos_setter),accessorF319);
  T441 = accessorF319;
  setterF320 = T441;
  T445 = fun_220;
  T444 = (P)YPPslot(CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_arg_pos),CHKREF(Ygen_cache_arg_pos_setter),CHKREF(YLintG),T445);
  slotF321 = T444;
  (P)YPmet_env_setter(slotF321,getterF318);
  (P)YPmet_env_setter(slotF321,setterF320);
  T446 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLgen_cacheG),slotF321);
  T443 = T446;
  T436 = T443;
  lit_75 = YPPsym((P)"gen-cache-singletons");
  lit_76 = YPPsym((P)"gen-cache-singletons-setter");
  T449 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLgen_cacheG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T449,ENVNUL);
  T448 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLgen_cacheG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T448,ENVNUL);
  T447 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_223 = YPmet(FUNCODEREF(fun_223),YPfalse,T447,ENVNUL);
  T452 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T451 = (P)YPsig(Ynil,T452,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T450 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_75),T451,Ynil,YPfalse);
  Ygen_cache_singletons = T450;
  T454 = fun_221;
  accessorF322 = T454;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ygen_cache_singletons),accessorF322);
  (P)YPmet_name_setter(CHKREF(Ygen_cache_singletons),accessorF322);
  T453 = accessorF322;
  getterF323 = T453;
  T459 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T458 = (P)YPpair(CHKREF(YLanyG),T459);
  T457 = (P)YPsig(Ynil,T458,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T456 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_76),T457,Ynil,YPfalse);
  Ygen_cache_singletons_setter = T456;
  T461 = fun_222;
  accessorF324 = T461;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ygen_cache_singletons_setter),accessorF324);
  (P)YPmet_name_setter(CHKREF(Ygen_cache_singletons_setter),accessorF324);
  T460 = accessorF324;
  setterF325 = T460;
  T464 = fun_223;
  T463 = (P)YPPslot(CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_singletons),CHKREF(Ygen_cache_singletons_setter),CHKREF(YLlstG),T464);
  slotF326 = T463;
  (P)YPmet_env_setter(slotF326,getterF323);
  (P)YPmet_env_setter(slotF326,setterF325);
  T465 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLgen_cacheG),slotF326);
  T462 = T465;
  T455 = T462;
  lit_77 = YPPsym((P)"gen-cache-classes");
  lit_78 = YPPsym((P)"gen-cache-classes-setter");
  T468 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLgen_cacheG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_224 = YPmet(FUNCODEREF(fun_224),YPfalse,T468,ENVNUL);
  T467 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLgen_cacheG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T467,ENVNUL);
  T466 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_226 = YPmet(FUNCODEREF(fun_226),YPfalse,T466,ENVNUL);
  T471 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T470 = (P)YPsig(Ynil,T471,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T469 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_77),T470,Ynil,YPfalse);
  Ygen_cache_classes = T469;
  T473 = fun_224;
  accessorF327 = T473;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ygen_cache_classes),accessorF327);
  (P)YPmet_name_setter(CHKREF(Ygen_cache_classes),accessorF327);
  T472 = accessorF327;
  getterF328 = T472;
  T478 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T477 = (P)YPpair(CHKREF(YLanyG),T478);
  T476 = (P)YPsig(Ynil,T477,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T475 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_78),T476,Ynil,YPfalse);
  Ygen_cache_classes_setter = T475;
  T480 = fun_225;
  accessorF329 = T480;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ygen_cache_classes_setter),accessorF329);
  (P)YPmet_name_setter(CHKREF(Ygen_cache_classes_setter),accessorF329);
  T479 = accessorF329;
  setterF330 = T479;
  T483 = fun_226;
  T482 = (P)YPPslot(CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_classes),CHKREF(Ygen_cache_classes_setter),CHKREF(YLlstG),T483);
  slotF331 = T482;
  (P)YPmet_env_setter(slotF331,getterF328);
  (P)YPmet_env_setter(slotF331,setterF330);
  T484 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLgen_cacheG),slotF331);
  T481 = T484;
  T474 = T481;
  lit_79 = YPPsym((P)"sig-names");
  lit_80 = YPPsym((P)"sig-names-setter");
  T487 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_227 = YPmet(FUNCODEREF(fun_227),YPfalse,T487,ENVNUL);
  T486 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_228 = YPmet(FUNCODEREF(fun_228),YPfalse,T486,ENVNUL);
  T485 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_229 = YPmet(FUNCODEREF(fun_229),YPfalse,T485,ENVNUL);
  T490 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T489 = (P)YPsig(Ynil,T490,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T488 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_79),T489,Ynil,YPfalse);
  Ysig_names = T488;
  T492 = fun_227;
  accessorF332 = T492;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ysig_names),accessorF332);
  (P)YPmet_name_setter(CHKREF(Ysig_names),accessorF332);
  T491 = accessorF332;
  getterF333 = T491;
  T497 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T496 = (P)YPpair(CHKREF(YLanyG),T497);
  T495 = (P)YPsig(Ynil,T496,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T494 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_80),T495,Ynil,YPfalse);
  Ysig_names_setter = T494;
  T499 = fun_228;
  accessorF334 = T499;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ysig_names_setter),accessorF334);
  (P)YPmet_name_setter(CHKREF(Ysig_names_setter),accessorF334);
  T498 = accessorF334;
  setterF335 = T498;
  T502 = fun_229;
  T501 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_names),CHKREF(Ysig_names_setter),CHKREF(YLlstG),T502);
  slotF336 = T501;
  (P)YPmet_env_setter(slotF336,getterF333);
  (P)YPmet_env_setter(slotF336,setterF335);
  T503 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLsigG),slotF336);
  T500 = T503;
  T493 = T500;
  lit_81 = YPPsym((P)"sig-specs");
  lit_82 = YPPsym((P)"sig-specs-setter");
  T506 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_230 = YPmet(FUNCODEREF(fun_230),YPfalse,T506,ENVNUL);
  T505 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_231 = YPmet(FUNCODEREF(fun_231),YPfalse,T505,ENVNUL);
  T504 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T504,ENVNUL);
  T509 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T508 = (P)YPsig(Ynil,T509,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T507 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_81),T508,Ynil,YPfalse);
  Ysig_specs = T507;
  T511 = fun_230;
  accessorF337 = T511;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ysig_specs),accessorF337);
  (P)YPmet_name_setter(CHKREF(Ysig_specs),accessorF337);
  T510 = accessorF337;
  getterF338 = T510;
  T516 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T515 = (P)YPpair(CHKREF(YLanyG),T516);
  T514 = (P)YPsig(Ynil,T515,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T513 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_82),T514,Ynil,YPfalse);
  Ysig_specs_setter = T513;
  T518 = fun_231;
  accessorF339 = T518;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ysig_specs_setter),accessorF339);
  (P)YPmet_name_setter(CHKREF(Ysig_specs_setter),accessorF339);
  T517 = accessorF339;
  setterF340 = T517;
  T521 = fun_232;
  T520 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_specs),CHKREF(Ysig_specs_setter),CHKREF(YLlstG),T521);
  slotF341 = T520;
  (P)YPmet_env_setter(slotF341,getterF338);
  (P)YPmet_env_setter(slotF341,setterF340);
  T522 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLsigG),slotF341);
  T519 = T522;
  T512 = T519;
  lit_83 = YPPsym((P)"sig-nary?");
  lit_84 = YPPsym((P)"sig-nary?-setter");
  T525 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_233 = YPmet(FUNCODEREF(fun_233),YPfalse,T525,ENVNUL);
  T524 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlogG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_234 = YPmet(FUNCODEREF(fun_234),YPfalse,T524,ENVNUL);
  T523 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_235 = YPmet(FUNCODEREF(fun_235),YPfalse,T523,ENVNUL);
  T528 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T527 = (P)YPsig(Ynil,T528,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T526 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_83),T527,Ynil,YPfalse);
  Ysig_naryQ = T526;
  T530 = fun_233;
  accessorF342 = T530;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ysig_naryQ),accessorF342);
  (P)YPmet_name_setter(CHKREF(Ysig_naryQ),accessorF342);
  T529 = accessorF342;
  getterF343 = T529;
  T535 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T534 = (P)YPpair(CHKREF(YLanyG),T535);
  T533 = (P)YPsig(Ynil,T534,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T532 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_84),T533,Ynil,YPfalse);
  Ysig_naryQ_setter = T532;
  T537 = fun_234;
  accessorF344 = T537;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ysig_naryQ_setter),accessorF344);
  (P)YPmet_name_setter(CHKREF(Ysig_naryQ_setter),accessorF344);
  T536 = accessorF344;
  setterF345 = T536;
  T540 = fun_235;
  T539 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_naryQ),CHKREF(Ysig_naryQ_setter),CHKREF(YLlogG),T540);
  slotF346 = T539;
  (P)YPmet_env_setter(slotF346,getterF343);
  (P)YPmet_env_setter(slotF346,setterF345);
  T541 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLsigG),slotF346);
  T538 = T541;
  T531 = T538;
  lit_85 = YPPsym((P)"sig-arity");
  lit_86 = YPPsym((P)"sig-arity-setter");
  T544 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T544,ENVNUL);
  T543 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLintG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_237 = YPmet(FUNCODEREF(fun_237),YPfalse,T543,ENVNUL);
  T542 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_238 = YPmet(FUNCODEREF(fun_238),YPfalse,T542,ENVNUL);
  T547 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T546 = (P)YPsig(Ynil,T547,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T545 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_85),T546,Ynil,YPfalse);
  Ysig_arity = T545;
  T549 = fun_236;
  accessorF347 = T549;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ysig_arity),accessorF347);
  (P)YPmet_name_setter(CHKREF(Ysig_arity),accessorF347);
  T548 = accessorF347;
  getterF348 = T548;
  T554 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T553 = (P)YPpair(CHKREF(YLanyG),T554);
  T552 = (P)YPsig(Ynil,T553,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T551 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_86),T552,Ynil,YPfalse);
  Ysig_arity_setter = T551;
  T556 = fun_237;
  accessorF349 = T556;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ysig_arity_setter),accessorF349);
  (P)YPmet_name_setter(CHKREF(Ysig_arity_setter),accessorF349);
  T555 = accessorF349;
  setterF350 = T555;
  T559 = fun_238;
  T558 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_arity),CHKREF(Ysig_arity_setter),CHKREF(YLintG),T559);
  slotF351 = T558;
  (P)YPmet_env_setter(slotF351,getterF348);
  (P)YPmet_env_setter(slotF351,setterF350);
  T560 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLsigG),slotF351);
  T557 = T560;
  T550 = T557;
  lit_87 = YPPsym((P)"sig-value");
  lit_88 = YPPsym((P)"sig-value-setter");
  T563 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_239 = YPmet(FUNCODEREF(fun_239),YPfalse,T563,ENVNUL);
  T562 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_240 = YPmet(FUNCODEREF(fun_240),YPfalse,T562,ENVNUL);
  T561 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_241 = YPmet(FUNCODEREF(fun_241),YPfalse,T561,ENVNUL);
  T566 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T565 = (P)YPsig(Ynil,T566,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T564 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_87),T565,Ynil,YPfalse);
  Ysig_value = T564;
  T568 = fun_239;
  accessorF352 = T568;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ysig_value),accessorF352);
  (P)YPmet_name_setter(CHKREF(Ysig_value),accessorF352);
  T567 = accessorF352;
  getterF353 = T567;
  T573 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T572 = (P)YPpair(CHKREF(YLanyG),T573);
  T571 = (P)YPsig(Ynil,T572,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T570 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_88),T571,Ynil,YPfalse);
  Ysig_value_setter = T570;
  T575 = fun_240;
  accessorF354 = T575;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ysig_value_setter),accessorF354);
  (P)YPmet_name_setter(CHKREF(Ysig_value_setter),accessorF354);
  T574 = accessorF354;
  setterF355 = T574;
  T578 = fun_241;
  T577 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_value),CHKREF(Ysig_value_setter),CHKREF(YLanyG),T578);
  slotF356 = T577;
  (P)YPmet_env_setter(slotF356,getterF353);
  (P)YPmet_env_setter(slotF356,setterF355);
  T579 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLsigG),slotF356);
  T576 = T579;
  T569 = T576;
  lit_89 = YPPsym((P)"sig-unification-vars");
  lit_90 = YPPsym((P)"sig-unification-vars-setter");
  T582 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_242 = YPmet(FUNCODEREF(fun_242),YPfalse,T582,ENVNUL);
  T581 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_243 = YPmet(FUNCODEREF(fun_243),YPfalse,T581,ENVNUL);
  T580 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_244 = YPmet(FUNCODEREF(fun_244),YPfalse,T580,ENVNUL);
  T585 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T584 = (P)YPsig(Ynil,T585,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T583 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_89),T584,Ynil,YPfalse);
  Ysig_unification_vars = T583;
  T587 = fun_242;
  accessorF357 = T587;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ysig_unification_vars),accessorF357);
  (P)YPmet_name_setter(CHKREF(Ysig_unification_vars),accessorF357);
  T586 = accessorF357;
  getterF358 = T586;
  T592 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T591 = (P)YPpair(CHKREF(YLanyG),T592);
  T590 = (P)YPsig(Ynil,T591,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T589 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_90),T590,Ynil,YPfalse);
  Ysig_unification_vars_setter = T589;
  T594 = fun_243;
  accessorF359 = T594;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Ysig_unification_vars_setter),accessorF359);
  (P)YPmet_name_setter(CHKREF(Ysig_unification_vars_setter),accessorF359);
  T593 = accessorF359;
  setterF360 = T593;
  T597 = fun_244;
  T596 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_unification_vars),CHKREF(Ysig_unification_vars_setter),CHKREF(YLlstG),T597);
  slotF361 = T596;
  (P)YPmet_env_setter(slotF361,getterF358);
  (P)YPmet_env_setter(slotF361,setterF360);
  T598 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLsigG),slotF361);
  T595 = T598;
  T588 = T595;
  lit_91 = YPPsym((P)"fun-code");
  lit_92 = YPPsym((P)"fun-code-setter");
  T601 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_245 = YPmet(FUNCODEREF(fun_245),YPfalse,T601,ENVNUL);
  T600 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_246 = YPmet(FUNCODEREF(fun_246),YPfalse,T600,ENVNUL);
  T599 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_247 = YPmet(FUNCODEREF(fun_247),YPfalse,T599,ENVNUL);
  T604 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T603 = (P)YPsig(Ynil,T604,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T602 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_91),T603,Ynil,YPfalse);
  Yfun_code = T602;
  T606 = fun_245;
  accessorF362 = T606;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yfun_code),accessorF362);
  (P)YPmet_name_setter(CHKREF(Yfun_code),accessorF362);
  T605 = accessorF362;
  getterF363 = T605;
  T611 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T610 = (P)YPpair(CHKREF(YLanyG),T611);
  T609 = (P)YPsig(Ynil,T610,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T608 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_92),T609,Ynil,YPfalse);
  Yfun_code_setter = T608;
  T613 = fun_246;
  accessorF364 = T613;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yfun_code_setter),accessorF364);
  (P)YPmet_name_setter(CHKREF(Yfun_code_setter),accessorF364);
  T612 = accessorF364;
  setterF365 = T612;
  T616 = fun_247;
  T615 = (P)YPPslot(CHKREF(YLfunG),CHKREF(Yfun_code),CHKREF(Yfun_code_setter),CHKREF(YLanyG),T616);
  slotF366 = T615;
  (P)YPmet_env_setter(slotF366,getterF363);
  (P)YPmet_env_setter(slotF366,setterF365);
  T617 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLfunG),slotF366);
  T614 = T617;
  T607 = T614;
  lit_93 = YPPsym((P)"fun-name");
  lit_94 = YPPsym((P)"fun-name-setter");
  T620 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_248 = YPmet(FUNCODEREF(fun_248),YPfalse,T620,ENVNUL);
  T619 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_249 = YPmet(FUNCODEREF(fun_249),YPfalse,T619,ENVNUL);
  T618 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_250 = YPmet(FUNCODEREF(fun_250),YPfalse,T618,ENVNUL);
  T623 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T622 = (P)YPsig(Ynil,T623,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T621 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_93),T622,Ynil,YPfalse);
  Yfun_name = T621;
  T625 = fun_248;
  accessorF367 = T625;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yfun_name),accessorF367);
  (P)YPmet_name_setter(CHKREF(Yfun_name),accessorF367);
  T624 = accessorF367;
  getterF368 = T624;
  T630 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T629 = (P)YPpair(CHKREF(YLanyG),T630);
  T628 = (P)YPsig(Ynil,T629,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T627 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_94),T628,Ynil,YPfalse);
  Yfun_name_setter = T627;
  T632 = fun_249;
  accessorF369 = T632;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yfun_name_setter),accessorF369);
  (P)YPmet_name_setter(CHKREF(Yfun_name_setter),accessorF369);
  T631 = accessorF369;
  setterF370 = T631;
  T635 = fun_250;
  T634 = (P)YPPslot(CHKREF(YLfunG),CHKREF(Yfun_name),CHKREF(Yfun_name_setter),CHKREF(YLanyG),T635);
  slotF371 = T634;
  (P)YPmet_env_setter(slotF371,getterF368);
  (P)YPmet_env_setter(slotF371,setterF370);
  T636 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLfunG),slotF371);
  T633 = T636;
  T626 = T633;
  lit_95 = YPPsym((P)"fun-sig");
  lit_96 = YPPsym((P)"fun-sig-setter");
  T639 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_251 = YPmet(FUNCODEREF(fun_251),YPfalse,T639,ENVNUL);
  T638 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLsigG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_252 = YPmet(FUNCODEREF(fun_252),YPfalse,T638,ENVNUL);
  T637 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_253 = YPmet(FUNCODEREF(fun_253),YPfalse,T637,ENVNUL);
  T642 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T641 = (P)YPsig(Ynil,T642,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T640 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_95),T641,Ynil,YPfalse);
  Yfun_sig = T640;
  T644 = fun_251;
  accessorF372 = T644;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yfun_sig),accessorF372);
  (P)YPmet_name_setter(CHKREF(Yfun_sig),accessorF372);
  T643 = accessorF372;
  getterF373 = T643;
  T649 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T648 = (P)YPpair(CHKREF(YLanyG),T649);
  T647 = (P)YPsig(Ynil,T648,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T646 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_96),T647,Ynil,YPfalse);
  Yfun_sig_setter = T646;
  T651 = fun_252;
  accessorF374 = T651;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yfun_sig_setter),accessorF374);
  (P)YPmet_name_setter(CHKREF(Yfun_sig_setter),accessorF374);
  T650 = accessorF374;
  setterF375 = T650;
  T654 = fun_253;
  T653 = (P)YPPslot(CHKREF(YLfunG),CHKREF(Yfun_sig),CHKREF(Yfun_sig_setter),CHKREF(YLsigG),T654);
  slotF376 = T653;
  (P)YPmet_env_setter(slotF376,getterF373);
  (P)YPmet_env_setter(slotF376,setterF375);
  T655 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLfunG),slotF376);
  T652 = T655;
  T645 = T652;
  lit_97 = YPPsym((P)"fun-env");
  lit_98 = YPPsym((P)"fun-env-setter");
  T658 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLmetG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_254 = YPmet(FUNCODEREF(fun_254),YPfalse,T658,ENVNUL);
  T657 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_255 = YPmet(FUNCODEREF(fun_255),YPfalse,T657,ENVNUL);
  T656 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_256 = YPmet(FUNCODEREF(fun_256),YPfalse,T656,ENVNUL);
  T661 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T660 = (P)YPsig(Ynil,T661,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T659 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_97),T660,Ynil,YPfalse);
  Yfun_env = T659;
  T663 = fun_254;
  accessorF377 = T663;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yfun_env),accessorF377);
  (P)YPmet_name_setter(CHKREF(Yfun_env),accessorF377);
  T662 = accessorF377;
  getterF378 = T662;
  T668 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T667 = (P)YPpair(CHKREF(YLanyG),T668);
  T666 = (P)YPsig(Ynil,T667,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T665 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_98),T666,Ynil,YPfalse);
  Yfun_env_setter = T665;
  T670 = fun_255;
  accessorF379 = T670;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yfun_env_setter),accessorF379);
  (P)YPmet_name_setter(CHKREF(Yfun_env_setter),accessorF379);
  T669 = accessorF379;
  setterF380 = T669;
  T673 = fun_256;
  T672 = (P)YPPslot(CHKREF(YLmetG),CHKREF(Yfun_env),CHKREF(Yfun_env_setter),CHKREF(YLanyG),T673);
  slotF381 = T672;
  (P)YPmet_env_setter(slotF381,getterF378);
  (P)YPmet_env_setter(slotF381,setterF380);
  T674 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLmetG),slotF381);
  T671 = T674;
  T664 = T671;
  lit_99 = YPPsym((P)"fun-mets");
  lit_100 = YPPsym((P)"fun-mets-setter");
  T677 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLgenG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_257 = YPmet(FUNCODEREF(fun_257),YPfalse,T677,ENVNUL);
  T676 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLgenG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_258 = YPmet(FUNCODEREF(fun_258),YPfalse,T676,ENVNUL);
  T675 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_259 = YPmet(FUNCODEREF(fun_259),YPfalse,T675,ENVNUL);
  T680 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T679 = (P)YPsig(Ynil,T680,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T678 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_99),T679,Ynil,YPfalse);
  Yfun_mets = T678;
  T682 = fun_257;
  accessorF382 = T682;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yfun_mets),accessorF382);
  (P)YPmet_name_setter(CHKREF(Yfun_mets),accessorF382);
  T681 = accessorF382;
  getterF383 = T681;
  T687 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T686 = (P)YPpair(CHKREF(YLanyG),T687);
  T685 = (P)YPsig(Ynil,T686,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T684 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_100),T685,Ynil,YPfalse);
  Yfun_mets_setter = T684;
  T689 = fun_258;
  accessorF384 = T689;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yfun_mets_setter),accessorF384);
  (P)YPmet_name_setter(CHKREF(Yfun_mets_setter),accessorF384);
  T688 = accessorF384;
  setterF385 = T688;
  T692 = fun_259;
  T691 = (P)YPPslot(CHKREF(YLgenG),CHKREF(Yfun_mets),CHKREF(Yfun_mets_setter),CHKREF(YLlstG),T692);
  slotF386 = T691;
  (P)YPmet_env_setter(slotF386,getterF383);
  (P)YPmet_env_setter(slotF386,setterF385);
  T693 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLgenG),slotF386);
  T690 = T693;
  T683 = T690;
  lit_101 = YPPsym((P)"fun-cache");
  lit_102 = YPPsym((P)"fun-cache-setter");
  T696 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLgenG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_260 = YPmet(FUNCODEREF(fun_260),YPfalse,T696,ENVNUL);
  T695 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLgenG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_261 = YPmet(FUNCODEREF(fun_261),YPfalse,T695,ENVNUL);
  T694 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_262 = YPmet(FUNCODEREF(fun_262),YPfalse,T694,ENVNUL);
  T699 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T698 = (P)YPsig(Ynil,T699,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T697 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_101),T698,Ynil,YPfalse);
  Yfun_cache = T697;
  T701 = fun_260;
  accessorF387 = T701;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yfun_cache),accessorF387);
  (P)YPmet_name_setter(CHKREF(Yfun_cache),accessorF387);
  T700 = accessorF387;
  getterF388 = T700;
  T706 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T705 = (P)YPpair(CHKREF(YLanyG),T706);
  T704 = (P)YPsig(Ynil,T705,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T703 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_102),T704,Ynil,YPfalse);
  Yfun_cache_setter = T703;
  T708 = fun_261;
  accessorF389 = T708;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yfun_cache_setter),accessorF389);
  (P)YPmet_name_setter(CHKREF(Yfun_cache_setter),accessorF389);
  T707 = accessorF389;
  setterF390 = T707;
  T711 = fun_262;
  T710 = (P)YPPslot(CHKREF(YLgenG),CHKREF(Yfun_cache),CHKREF(Yfun_cache_setter),CHKREF(YLanyG),T711);
  slotF391 = T710;
  (P)YPmet_env_setter(slotF391,getterF388);
  (P)YPmet_env_setter(slotF391,setterF390);
  T712 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLgenG),slotF391);
  T709 = T712;
  T702 = T709;
  lit_103 = YPPsym((P)"opts-location");
  lit_104 = YPPsym((P)"opts-location-setter");
  T715 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLoptsG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_263 = YPmet(FUNCODEREF(fun_263),YPfalse,T715,ENVNUL);
  T714 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlocG),CHKREF(YLoptsG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_264 = YPmet(FUNCODEREF(fun_264),YPfalse,T714,ENVNUL);
  T713 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_265 = YPmet(FUNCODEREF(fun_265),YPfalse,T713,ENVNUL);
  T718 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T717 = (P)YPsig(Ynil,T718,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T716 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_103),T717,Ynil,YPfalse);
  Yopts_location = T716;
  T720 = fun_263;
  accessorF392 = T720;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yopts_location),accessorF392);
  (P)YPmet_name_setter(CHKREF(Yopts_location),accessorF392);
  T719 = accessorF392;
  getterF393 = T719;
  T725 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T724 = (P)YPpair(CHKREF(YLanyG),T725);
  T723 = (P)YPsig(Ynil,T724,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T722 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_104),T723,Ynil,YPfalse);
  Yopts_location_setter = T722;
  T727 = fun_264;
  accessorF394 = T727;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yopts_location_setter),accessorF394);
  (P)YPmet_name_setter(CHKREF(Yopts_location_setter),accessorF394);
  T726 = accessorF394;
  setterF395 = T726;
  T730 = fun_265;
  T729 = (P)YPPslot(CHKREF(YLoptsG),CHKREF(Yopts_location),CHKREF(Yopts_location_setter),CHKREF(YLlocG),T730);
  slotF396 = T729;
  (P)YPmet_env_setter(slotF396,getterF393);
  (P)YPmet_env_setter(slotF396,setterF395);
  T731 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLoptsG),slotF396);
  T728 = T731;
  T721 = T728;
  lit_105 = YPPsym((P)"opts-count");
  lit_106 = YPPsym((P)"opts-count-setter");
  T734 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLoptsG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_266 = YPmet(FUNCODEREF(fun_266),YPfalse,T734,ENVNUL);
  T733 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLintG),CHKREF(YLoptsG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_267 = YPmet(FUNCODEREF(fun_267),YPfalse,T733,ENVNUL);
  T732 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_268 = YPmet(FUNCODEREF(fun_268),YPfalse,T732,ENVNUL);
  T737 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T736 = (P)YPsig(Ynil,T737,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T735 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_105),T736,Ynil,YPfalse);
  Yopts_count = T735;
  T739 = fun_266;
  accessorF397 = T739;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yopts_count),accessorF397);
  (P)YPmet_name_setter(CHKREF(Yopts_count),accessorF397);
  T738 = accessorF397;
  getterF398 = T738;
  T744 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T743 = (P)YPpair(CHKREF(YLanyG),T744);
  T742 = (P)YPsig(Ynil,T743,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T741 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_106),T742,Ynil,YPfalse);
  Yopts_count_setter = T741;
  T746 = fun_267;
  accessorF399 = T746;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yopts_count_setter),accessorF399);
  (P)YPmet_name_setter(CHKREF(Yopts_count_setter),accessorF399);
  T745 = accessorF399;
  setterF400 = T745;
  T749 = fun_268;
  T748 = (P)YPPslot(CHKREF(YLoptsG),CHKREF(Yopts_count),CHKREF(Yopts_count_setter),CHKREF(YLintG),T749);
  slotF401 = T748;
  (P)YPmet_env_setter(slotF401,getterF398);
  (P)YPmet_env_setter(slotF401,setterF400);
  T750 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLoptsG),slotF401);
  T747 = T750;
  T740 = T747;
  lit_107 = YPPsym((P)"opts-vec-storage");
  lit_108 = YPPsym((P)"opts-vec-storage-setter");
  T753 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLopts_vecG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_269 = YPmet(FUNCODEREF(fun_269),YPfalse,T753,ENVNUL);
  T752 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLvecG),CHKREF(YLopts_vecG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_270 = YPmet(FUNCODEREF(fun_270),YPfalse,T752,ENVNUL);
  T751 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_271 = YPmet(FUNCODEREF(fun_271),YPfalse,T751,ENVNUL);
  T756 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T755 = (P)YPsig(Ynil,T756,YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  T754 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_107),T755,Ynil,YPfalse);
  Yopts_vec_storage = T754;
  T758 = fun_269;
  accessorF402 = T758;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yopts_vec_storage),accessorF402);
  (P)YPmet_name_setter(CHKREF(Yopts_vec_storage),accessorF402);
  T757 = accessorF402;
  getterF403 = T757;
  T763 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T762 = (P)YPpair(CHKREF(YLanyG),T763);
  T761 = (P)YPsig(Ynil,T762,YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  T760 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_108),T761,Ynil,YPfalse);
  Yopts_vec_storage_setter = T760;
  T765 = fun_270;
  accessorF404 = T765;
  CALL2(1,CHKREF(YPadd_met),CHKREF(Yopts_vec_storage_setter),accessorF404);
  (P)YPmet_name_setter(CHKREF(Yopts_vec_storage_setter),accessorF404);
  T764 = accessorF404;
  setterF405 = T764;
  T768 = fun_271;
  T767 = (P)YPPslot(CHKREF(YLopts_vecG),CHKREF(Yopts_vec_storage),CHKREF(Yopts_vec_storage_setter),CHKREF(YLvecG),T768);
  slotF406 = T767;
  (P)YPmet_env_setter(slotF406,getterF403);
  (P)YPmet_env_setter(slotF406,setterF405);
  T769 = CALL2(1,CHKREF(YPadd_slot),CHKREF(YLopts_vecG),slotF406);
  T766 = T769;
  T759 = T766;
  lit_109 = YPPsym((P)"%collect-direct-slots");
  T770 = YPsig(YPPlist(1,CHKREF(lit_26)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YPcollect_direct_slots = YPmet(FUNCODEREF(YPcollect_direct_slots),CHKREF(lit_109),T770,ENVNUL);
  T771 = YPcollect_direct_slots;
  YPcollect_direct_slots = T771;
  lit_110 = YPPsym((P)"%finalize-slots!");
  T772 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_26)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YPfinalize_slotsX = YPmet(FUNCODEREF(YPfinalize_slotsX),CHKREF(lit_110),T772,ENVNUL);
  T773 = YPfinalize_slotsX;
  YPfinalize_slotsX = T773;
  lit_111 = YPPsym((P)"<any>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_111),CHKREF(YLanyG));
  lit_112 = YPPsym((P)"<log>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_112),CHKREF(YLlogG));
  lit_113 = YPPsym((P)"<chr>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_113),CHKREF(YLchrG));
  lit_114 = YPPsym((P)"<num>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_114),CHKREF(YLnumG));
  lit_115 = YPPsym((P)"<int>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_115),CHKREF(YLintG));
  lit_116 = YPPsym((P)"<flo>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_116),CHKREF(YLfloG));
  lit_117 = YPPsym((P)"<loc>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_117),CHKREF(YLlocG));
  lit_118 = YPPsym((P)"<col>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_118),CHKREF(YLcolG));
  lit_119 = YPPsym((P)"<seq>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_119),CHKREF(YLseqG));
  lit_120 = YPPsym((P)"<lst>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_120),CHKREF(YLlstG));
  lit_121 = YPPsym((P)"<flat>");
  T775 = CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_121),CHKREF(YLflatG));
  T774 = T775;
  return T774;
}

P Y___main_7___() {
  P T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_122 = YPPsym((P)"<vec>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_122),CHKREF(YLvecG));
  lit_123 = YPPsym((P)"<str>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_123),CHKREF(YLstrG));
  lit_124 = YPPsym((P)"<sym>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_124),CHKREF(YLsymG));
  lit_125 = YPPsym((P)"<type>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_125),CHKREF(YLtypeG));
  lit_126 = YPPsym((P)"<class>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_126),CHKREF(YLclassG));
  lit_127 = YPPsym((P)"<singleton>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_127),CHKREF(YLsingletonG));
  lit_128 = YPPsym((P)"<subclass>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_128),CHKREF(YLsubclassG));
  lit_129 = YPPsym((P)"<union>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_129),CHKREF(YLunionG));
  lit_130 = YPPsym((P)"<slot>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_130),CHKREF(YLslotG));
  lit_131 = YPPsym((P)"<gen-cache>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_131),CHKREF(YLgen_cacheG));
  lit_132 = YPPsym((P)"<sig>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_132),CHKREF(YLsigG));
  lit_133 = YPPsym((P)"<fun>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_133),CHKREF(YLfunG));
  lit_134 = YPPsym((P)"<met>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_134),CHKREF(YLmetG));
  lit_135 = YPPsym((P)"<gen>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_135),CHKREF(YLgenG));
  lit_136 = YPPsym((P)"<opts>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_136),CHKREF(YLoptsG));
  lit_137 = YPPsym((P)"<opts-vec>");
  CALL2(1,CHKREF(YPfinalize_slotsX),CHKREF(lit_137),CHKREF(YLopts_vecG));
  lit_138 = YPPsym((P)"@@==");
  T0 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_13)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  YOOEE = YPmet(FUNCODEREF(YOOEE),CHKREF(lit_138),T0,ENVNUL);
  T1 = YOOEE;
  YOOEE = T1;
  lit_139 = YPPsym((P)"not");
  T2 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  Ynot = YPmet(FUNCODEREF(Ynot),CHKREF(lit_139),T2,ENVNUL);
  T3 = Ynot;
  Ynot = T3;
  lit_140 = YPPsym((P)"@@empty?");
  T4 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  YOOemptyQ = YPmet(FUNCODEREF(YOOemptyQ),CHKREF(lit_140),T4,ENVNUL);
  T5 = YOOemptyQ;
  YOOemptyQ = T5;
  lit_141 = YPPsym((P)"@rev!");
  T6 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  YOrevX = YPmet(FUNCODEREF(YOrevX),CHKREF(lit_141),T6,ENVNUL);
  T7 = YOrevX;
  YOrevX = T7;
  lit_142 = YPPsym((P)"@all?");
  lit_143 = YPPsym((P)"test");
  lit_144 = YPPsym((P)"c");
  lit_145 = YPPsym((P)"fnd");
  lit_146 = YPPsym((P)"p");
  T9 = YPsig(YPPlist(1,CHKREF(lit_146)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_fnd_292 = YPmet(FUNCODEREF(fun_fnd_292),CHKREF(lit_145),T9,ENVNUL);
  T8 = YPsig(YPPlist(2,CHKREF(lit_143),CHKREF(lit_144)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  YOallQ = YPmet(FUNCODEREF(YOallQ),CHKREF(lit_142),T8,ENVNUL);
  T10 = YOallQ;
  YOallQ = T10;
  lit_147 = YPPsym((P)"@all2?");
  lit_148 = YPPsym((P)"px");
  lit_149 = YPPsym((P)"py");
  T12 = YPsig(YPPlist(2,CHKREF(lit_148),CHKREF(lit_149)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_fnd_294 = YPmet(FUNCODEREF(fun_fnd_294),CHKREF(lit_145),T12,ENVNUL);
  T11 = YPsig(YPPlist(3,CHKREF(lit_143),CHKREF(lit_10),CHKREF(lit_13)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLlogG),Ynil);
  YOall2Q = YPmet(FUNCODEREF(YOall2Q),CHKREF(lit_147),T11,ENVNUL);
  T13 = YOall2Q;
  YOall2Q = T13;
  lit_150 = YPPsym((P)"@elt");
  lit_151 = YPPsym((P)"key");
  lit_152 = YPPsym((P)"count");
  T15 = YPsig(YPPlist(2,CHKREF(lit_152),CHKREF(lit_10)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_fnd_296 = YPmet(FUNCODEREF(fun_fnd_296),CHKREF(lit_145),T15,ENVNUL);
  T14 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_151)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YOelt = YPmet(FUNCODEREF(YOelt),CHKREF(lit_150),T14,ENVNUL);
  T16 = YOelt;
  YOelt = T16;
  lit_153 = YPPsym((P)"@fill");
  lit_154 = YPPsym((P)"f");
  T18 = YPsig(YPPlist(1,CHKREF(lit_146)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_298 = YPmet(FUNCODEREF(fun_loop_298),CHKREF(lit_5),T18,ENVNUL);
  T17 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_154)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  YOfill = YPmet(FUNCODEREF(YOfill),CHKREF(lit_153),T17,ENVNUL);
  T19 = YOfill;
  YOfill = T19;
  lit_155 = YPPsym((P)"@any?");
  T21 = YPsig(YPPlist(1,CHKREF(lit_146)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_fnd_300 = YPmet(FUNCODEREF(fun_fnd_300),CHKREF(lit_145),T21,ENVNUL);
  T20 = YPsig(YPPlist(2,CHKREF(lit_143),CHKREF(lit_144)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YOanyQ = YPmet(FUNCODEREF(YOanyQ),CHKREF(lit_155),T20,ENVNUL);
  T22 = YOanyQ;
  YOanyQ = T22;
  lit_156 = YPPsym((P)"@map");
  lit_157 = YPPsym((P)"do");
  lit_158 = YPPsym((P)"res");
  T24 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_158)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_do_305 = YPmet(FUNCODEREF(fun_do_305),CHKREF(lit_157),T24,ENVNUL);
  T23 = YPsig(YPPlist(2,CHKREF(lit_154),CHKREF(lit_10)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  YOmap = YPmet(FUNCODEREF(YOmap),CHKREF(lit_156),T23,ENVNUL);
  T25 = YOmap;
  YOmap = T25;
  lit_159 = YPPsym((P)"@pick");
  T27 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_158)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_do_307 = YPmet(FUNCODEREF(fun_do_307),CHKREF(lit_157),T27,ENVNUL);
  T26 = YPsig(YPPlist(2,CHKREF(lit_154),CHKREF(lit_10)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  YOpick = YPmet(FUNCODEREF(YOpick),CHKREF(lit_159),T26,ENVNUL);
  T28 = YOpick;
  YOpick = T28;
  lit_160 = YPPsym((P)"@do");
  T30 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_do_309 = YPmet(FUNCODEREF(fun_do_309),CHKREF(lit_157),T30,ENVNUL);
  T29 = YPsig(YPPlist(2,CHKREF(lit_154),CHKREF(lit_10)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YOdo = YPmet(FUNCODEREF(YOdo),CHKREF(lit_160),T29,ENVNUL);
  T31 = YOdo;
  YOdo = T31;
  lit_161 = YPPsym((P)"@alter");
  lit_162 = YPPsym((P)"dst");
  lit_163 = YPPsym((P)"src");
  lit_164 = YPPsym((P)"in");
  lit_165 = YPPsym((P)"ds");
  lit_166 = YPPsym((P)"ss");
  T33 = YPsig(YPPlist(2,CHKREF(lit_165),CHKREF(lit_166)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_in_311 = YPmet(FUNCODEREF(fun_in_311),CHKREF(lit_164),T33,ENVNUL);
  T32 = YPsig(YPPlist(2,CHKREF(lit_162),CHKREF(lit_163)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  YOalter = YPmet(FUNCODEREF(YOalter),CHKREF(lit_161),T32,ENVNUL);
  T34 = YOalter;
  YOalter = T34;
  lit_167 = YPPsym((P)"@fab");
  lit_168 = YPPsym((P)"fab");
  T36 = YPsig(YPPlist(2,CHKREF(lit_17),CHKREF(lit_158)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_fab_313 = YPmet(FUNCODEREF(fun_fab_313),CHKREF(lit_168),T36,ENVNUL);
  T35 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_3)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  YOfab = YPmet(FUNCODEREF(YOfab),CHKREF(lit_167),T35,ENVNUL);
  T37 = YOfab;
  YOfab = T37;
  lit_169 = YPPsym((P)"@reduce");
  lit_170 = YPPsym((P)"combine");
  lit_171 = YPPsym((P)"init");
  lit_172 = YPPsym((P)"red");
  T39 = YPsig(YPPlist(2,CHKREF(lit_158),CHKREF(lit_144)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_red_315 = YPmet(FUNCODEREF(fun_red_315),CHKREF(lit_172),T39,ENVNUL);
  T38 = YPsig(YPPlist(3,CHKREF(lit_170),CHKREF(lit_171),CHKREF(lit_144)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLlstG),Ynil);
  YOreduce = YPmet(FUNCODEREF(YOreduce),CHKREF(lit_169),T38,ENVNUL);
  T40 = YOreduce;
  YOreduce = T40;
  lit_173 = YPPsym((P)"@cat2");
  T41 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_13)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  YOcat2 = YPmet(FUNCODEREF(YOcat2),CHKREF(lit_173),T41,ENVNUL);
  T42 = YOcat2;
  YOcat2 = T42;
  lit_174 = YPPsym((P)"@find-key");
  T44 = YPsig(YPPlist(2,CHKREF(lit_144),CHKREF(lit_17)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_fnd_318 = YPmet(FUNCODEREF(fun_fnd_318),CHKREF(lit_145),T44,ENVNUL);
  T43 = YPsig(YPPlist(2,CHKREF(lit_154),CHKREF(lit_144)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YOfind_key = YPmet(FUNCODEREF(YOfind_key),CHKREF(lit_174),T43,ENVNUL);
  T45 = YOfind_key;
  YOfind_key = T45;
  lit_175 = YPPsym((P)"@mem?");
  T47 = YPsig(YPPlist(1,CHKREF(lit_13)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_320 = YPmet(FUNCODEREF(fun_320),YPfalse,T47,ENVNUL);
  T46 = YPsig(YPPlist(2,CHKREF(lit_144),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  YOmemQ = YPmet(FUNCODEREF(YOmemQ),CHKREF(lit_175),T46,ENVNUL);
  T48 = YOmemQ;
  YOmemQ = T48;
  lit_176 = YPPsym((P)"@del-dups");
  lit_177 = YPPsym((P)"e");
  T50 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_177)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_322 = YPmet(FUNCODEREF(fun_322),YPfalse,T50,ENVNUL);
  T49 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  YOdel_dups = YPmet(FUNCODEREF(YOdel_dups),CHKREF(lit_176),T49,ENVNUL);
  T51 = YOdel_dups;
  YOdel_dups = T51;
  lit_178 = YPPsym((P)"@lst-helper");
  lit_179 = YPPsym((P)"objects");
  T52 = YPsig(YPPlist(3,CHKREF(lit_179),CHKREF(lit_17),CHKREF(lit_6)),YPPlist(3,CHKREF(YLoptsG),CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  YOlst_helper = YPmet(FUNCODEREF(YOlst_helper),CHKREF(lit_178),T52,ENVNUL);
  T53 = YOlst_helper;
  YOlst_helper = T53;
  lit_180 = YPPsym((P)"@lst");
  T54 = YPsig(YPPlist(1,CHKREF(lit_179)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG),Ynil);
  YOlst = YPmet(FUNCODEREF(YOlst),CHKREF(lit_180),T54,ENVNUL);
  T55 = YOlst;
  YOlst = T55;
  lit_181 = YPPsym((P)"@fun-names");
  T56 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  YOfun_names = YPmet(FUNCODEREF(YOfun_names),CHKREF(lit_181),T56,ENVNUL);
  T57 = YOfun_names;
  YOfun_names = T57;
  lit_182 = YPPsym((P)"@fun-specs");
  T58 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  YOfun_specs = YPmet(FUNCODEREF(YOfun_specs),CHKREF(lit_182),T58,ENVNUL);
  T59 = YOfun_specs;
  YOfun_specs = T59;
  lit_183 = YPPsym((P)"@fun-nary?");
  T60 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLlogG),Ynil);
  YOfun_naryQ = YPmet(FUNCODEREF(YOfun_naryQ),CHKREF(lit_183),T60,ENVNUL);
  T61 = YOfun_naryQ;
  YOfun_naryQ = T61;
  lit_184 = YPPsym((P)"@fun-arity");
  T62 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLintG),Ynil);
  YOfun_arity = YPmet(FUNCODEREF(YOfun_arity),CHKREF(lit_184),T62,ENVNUL);
  T63 = YOfun_arity;
  YOfun_arity = T63;
  lit_185 = YPPsym((P)"@fun-value");
  T64 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YOfun_value = YPmet(FUNCODEREF(YOfun_value),CHKREF(lit_185),T64,ENVNUL);
  T65 = YOfun_value;
  YOfun_value = T65;
  lit_186 = YPPsym((P)"@fun-unification-vars");
  T66 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  YOfun_unification_vars = YPmet(FUNCODEREF(YOfun_unification_vars),CHKREF(lit_186),T66,ENVNUL);
  T67 = YOfun_unification_vars;
  YOfun_unification_vars = T67;
  lit_187 = YPPsym((P)"@fun-mets");
  T68 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLlstG),Ynil);
  YOfun_mets = YPmet(FUNCODEREF(YOfun_mets),CHKREF(lit_187),T68,ENVNUL);
  T69 = YOfun_mets;
  YOfun_mets = T69;
  lit_188 = YPPsym((P)"@fun-mets-setter");
  T70 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YOfun_mets_setter = YPmet(FUNCODEREF(YOfun_mets_setter),CHKREF(lit_188),T70,ENVNUL);
  T71 = YOfun_mets_setter;
  YOfun_mets_setter = T71;
  YLenvG = CHKREF(YLanyG);
  T73 = YLspecsG = CHKREF(YLlstG);
  T72 = T73;
  return T72;
}

P Y___main_8___() {
  P T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96;
  P T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80;
  P T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64;
  P T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48;
  P T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  YLbodyG = CHKREF(YLanyG);
  lit_189 = YPPsym((P)"fun-spec");
  T0 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_17)),YPPlist(2,CHKREF(YLmetG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  Yfun_spec = YPmet(FUNCODEREF(Yfun_spec),CHKREF(lit_189),T0,ENVNUL);
  T1 = Yfun_spec;
  Yfun_spec = T1;
  YLmetsG = CHKREF(YLlstG);
  lit_190 = YPPsym((P)"fun-same-met?");
  T2 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_13)),YPPlist(2,CHKREF(YLmetG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  Yfun_same_metQ = YPmet(FUNCODEREF(Yfun_same_metQ),CHKREF(lit_190),T2,ENVNUL);
  T3 = Yfun_same_metQ;
  Yfun_same_metQ = T3;
  lit_191 = YPPsym((P)"fun-congruent?");
  T4 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_13)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  Yfun_congruentQ = YPmet(FUNCODEREF(Yfun_congruentQ),CHKREF(lit_191),T4,ENVNUL);
  T5 = Yfun_congruentQ;
  Yfun_congruentQ = T5;
  YTrestarts_okQT = YPfalse;
  lit_192 = YPPsym((P)"gen-add-met");
  lit_193 = YPPsym((P)"g");
  lit_194 = YPPsym((P)"m");
  lit_195 = YPPsym((P)"return");
  lit_196 = YPsb((P)"Replace %= with an empty generic congruent with %=");
  lit_197 = YPPsym((P)"lop");
  lit_198 = YPPsym((P)"specs");
  lit_199 = YPPsym((P)"col");
  lit_200 = YPPsym((P)"mets");
  lit_201 = YPPsym((P)"same?");
  lit_202 = YPPsym((P)"gms");
  T12 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_337 = YPmet(FUNCODEREF(fun_337),YPfalse,T12,ENVNUL);
  T11 = YPsig(YPPlist(2,CHKREF(lit_144),CHKREF(lit_7)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_338 = YPmet(FUNCODEREF(fun_338),YPfalse,T11,ENVNUL);
  T10 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG),Ynil);
  fun_339 = YPmet(FUNCODEREF(fun_339),YPfalse,T10,ENVNUL);
  T9 = YPsig(YPPlist(1,CHKREF(lit_195)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_340 = YPmet(FUNCODEREF(fun_340),YPfalse,T9,ENVNUL);
  T8 = YPsig(YPPlist(1,CHKREF(lit_198)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_lop_341 = YPmet(FUNCODEREF(fun_lop_341),CHKREF(lit_197),T8,ENVNUL);
  T7 = YPsig(YPPlist(3,CHKREF(lit_200),CHKREF(lit_201),CHKREF(lit_202)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLmetsG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_col_342 = YPmet(FUNCODEREF(fun_col_342),CHKREF(lit_199),T7,ENVNUL);
  T6 = YPsig(YPPlist(2,CHKREF(lit_193),CHKREF(lit_194)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLgenG),Ynil);
  Ygen_add_met = YPmet(FUNCODEREF(Ygen_add_met),CHKREF(lit_192),T6,ENVNUL);
  T13 = Ygen_add_met;
  Ygen_add_met = T13;
  lit_203 = YPPsym((P)"t");
  T14 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_347 = YPmet(FUNCODEREF(fun_347),YPfalse,T14,ENVNUL);
  lit_204 = YPPsym((P)"@isa?");
  lit_205 = YPPsym((P)"o");
  T15 = YPsig(YPPlist(2,CHKREF(lit_205),CHKREF(lit_203)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  YOisaQ = YPmet(FUNCODEREF(YOisaQ),CHKREF(lit_204),T15,ENVNUL);
  T16 = YOisaQ;
  YOisaQ = T16;
  lit_206 = YPPsym((P)"@class<");
  lit_207 = YPPsym((P)"c1");
  lit_208 = YPPsym((P)"c2");
  lit_209 = YPPsym((P)"wrt");
  lit_210 = YPPsym((P)"find");
  lit_211 = YPPsym((P)"ps");
  lit_212 = YPsb((P)"can't order specializers - arg/reference object %= is ");
  lit_213 = YPsb((P)"neither %= nor %=");
  T18 = YPsig(YPPlist(1,CHKREF(lit_211)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_find_352 = YPmet(FUNCODEREF(fun_find_352),CHKREF(lit_210),T18,ENVNUL);
  T17 = YPsig(YPPlist(3,CHKREF(lit_207),CHKREF(lit_208),CHKREF(lit_209)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLlogG),Ynil);
  YOclassL = YPmet(FUNCODEREF(YOclassL),CHKREF(lit_206),T17,ENVNUL);
  T19 = YOclassL;
  YOclassL = T19;
  YLtupG = CHKREF(YLlstG);
  YOtup = CHKREF(YOlst);
  lit_214 = YPPsym((P)"@type-equal?");
  lit_215 = YPPsym((P)"t1");
  lit_216 = YPPsym((P)"t2");
  T20 = YPsig(YPPlist(2,CHKREF(lit_215),CHKREF(lit_216)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  YOtype_equalQ = YPmet(FUNCODEREF(YOtype_equalQ),CHKREF(lit_214),T20,ENVNUL);
  T21 = YOtype_equalQ;
  YOtype_equalQ = T21;
  lit_217 = YPPsym((P)"@subtype?");
  T24 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_355 = YPmet(FUNCODEREF(fun_355),YPfalse,T24,ENVNUL);
  T23 = YPsig(YPPlist(1,CHKREF(lit_203)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_356 = YPmet(FUNCODEREF(fun_356),YPfalse,T23,ENVNUL);
  T22 = YPsig(YPPlist(2,CHKREF(lit_215),CHKREF(lit_216)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  YOsubtypeQ = YPmet(FUNCODEREF(YOsubtypeQ),CHKREF(lit_217),T22,ENVNUL);
  T25 = YOsubtypeQ;
  YOsubtypeQ = T25;
  lit_218 = YPPsym((P)"@may-isa?");
  lit_219 = YPPsym((P)"some?");
  lit_220 = YPPsym((P)"all?");
  lit_221 = YPPsym((P)"elts");
  T27 = YPsig(YPPlist(3,CHKREF(lit_219),CHKREF(lit_220),CHKREF(lit_221)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  fun_loop_358 = YPmet(FUNCODEREF(fun_loop_358),CHKREF(lit_5),T27,ENVNUL);
  T26 = YPsig(YPPlist(2,CHKREF(lit_144),CHKREF(lit_203)),YPPlist(2,CHKREF(YLclassG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLtupG),Ynil);
  YOmay_isaQ = YPmet(FUNCODEREF(YOmay_isaQ),CHKREF(lit_218),T26,ENVNUL);
  T28 = YOmay_isaQ;
  YOmay_isaQ = T28;
  lit_222 = YPPsym((P)"order-specs-default");
  lit_223 = YPPsym((P)"arg");
  lit_224 = YPPsym((P)"=");
  lit_225 = YPPsym((P)"<");
  lit_226 = YPPsym((P)">");
  lit_227 = YPPsym((P)"<>");
  T29 = YPsig(YPPlist(3,CHKREF(lit_215),CHKREF(lit_216),CHKREF(lit_223)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLtupG),Ynil);
  Yorder_specs_default = YPmet(FUNCODEREF(Yorder_specs_default),CHKREF(lit_222),T29,ENVNUL);
  T30 = Yorder_specs_default;
  Yorder_specs_default = T30;
  lit_228 = YPPsym((P)"order-specs");
  T31 = YPsig(YPPlist(3,CHKREF(lit_215),CHKREF(lit_216),CHKREF(lit_223)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLtupG),Ynil);
  Yorder_specs = YPmet(FUNCODEREF(Yorder_specs),CHKREF(lit_228),T31,ENVNUL);
  T32 = Yorder_specs;
  Yorder_specs = T32;
  lit_229 = YPPsym((P)"order-mets");
  lit_230 = YPPsym((P)"m1");
  lit_231 = YPPsym((P)"m2");
  lit_232 = YPPsym((P)"state");
  lit_233 = YPPsym((P)"idx");
  T34 = YPsig(YPPlist(2,CHKREF(lit_232),CHKREF(lit_233)),YPPlist(2,CHKREF(YLsymG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_362 = YPmet(FUNCODEREF(fun_loop_362),CHKREF(lit_5),T34,ENVNUL);
  T33 = YPsig(YPPlist(3,CHKREF(lit_230),CHKREF(lit_231),CHKREF(lit_20)),YPPlist(3,CHKREF(YLmetG),CHKREF(YLmetG),CHKREF(YLoptsG)),YPfalse,YPint((P)3),CHKREF(YLsymG),Ynil);
  Yorder_mets = YPmet(FUNCODEREF(Yorder_mets),CHKREF(lit_229),T33,ENVNUL);
  T35 = Yorder_mets;
  Yorder_mets = T35;
  lit_234 = YPPsym((P)"sorted-app-mets-1");
  lit_235 = YPPsym((P)"make-ambiguous");
  lit_236 = YPPsym((P)"headed-list");
  lit_237 = YPPsym((P)"precedes-all?");
  lit_238 = YPPsym((P)"check-subsequent-ambiguities");
  lit_239 = YPPsym((P)"oprev");
  lit_240 = YPPsym((P)"insert");
  lit_241 = YPPsym((P)"osub");
  T43 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_364 = YPmet(FUNCODEREF(fun_loop_364),CHKREF(lit_5),T43,ENVNUL);
  T42 = YPsig(YPPlist(1,CHKREF(lit_236)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_make_ambiguous_365 = YPmet(FUNCODEREF(fun_make_ambiguous_365),CHKREF(lit_235),T42,ENVNUL);
  T41 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_366 = YPmet(FUNCODEREF(fun_loop_366),CHKREF(lit_5),T41,ENVNUL);
  T40 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_precedes_allQ_367 = YPmet(FUNCODEREF(fun_precedes_allQ_367),CHKREF(lit_237),T40,ENVNUL);
  T39 = YPsig(YPPlist(1,CHKREF(lit_239)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_check_subsequent_ambiguities_368 = YPmet(FUNCODEREF(fun_check_subsequent_ambiguities_368),CHKREF(lit_238),T39,ENVNUL);
  T38 = YPsig(YPPlist(2,CHKREF(lit_239),CHKREF(lit_241)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_insert_369 = YPmet(FUNCODEREF(fun_insert_369),CHKREF(lit_240),T38,ENVNUL);
  T37 = YPsig(YPPlist(1,CHKREF(lit_200)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_370 = YPmet(FUNCODEREF(fun_loop_370),CHKREF(lit_5),T37,ENVNUL);
  T36 = YPsig(YPPlist(3,CHKREF(lit_200),CHKREF(lit_20),CHKREF(lit_229)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLoptsG),CHKREF(YLfunG)),YPfalse,YPint((P)3),CHKREF(YLtupG),Ynil);
  Ysorted_app_mets_1 = YPmet(FUNCODEREF(Ysorted_app_mets_1),CHKREF(lit_234),T36,ENVNUL);
  T44 = Ysorted_app_mets_1;
  Ysorted_app_mets_1 = T44;
  T45 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_13)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_372 = YPmet(FUNCODEREF(fun_372),YPfalse,T45,ENVNUL);
  T46 = fun_372;
  Ymet_app_unify = T46;
  lit_242 = YPPsym((P)"met-app?");
  T48 = YPsig(YPPlist(1,CHKREF(lit_17)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_373 = YPmet(FUNCODEREF(fun_loop_373),CHKREF(lit_5),T48,ENVNUL);
  T47 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_20)),YPPlist(2,CHKREF(YLmetG),CHKREF(YLoptsG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  Ymet_appQ = YPmet(FUNCODEREF(Ymet_appQ),CHKREF(lit_242),T47,ENVNUL);
  T49 = Ymet_appQ;
  Ymet_appQ = T49;
  lit_243 = YPPsym((P)"sorted-app-mets");
  lit_244 = YPPsym((P)"gf");
  lit_245 = YPPsym((P)"ans");
  lit_246 = YPPsym((P)"ms");
  T51 = YPsig(YPPlist(2,CHKREF(lit_245),CHKREF(lit_246)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_col_375 = YPmet(FUNCODEREF(fun_col_375),CHKREF(lit_199),T51,ENVNUL);
  T50 = YPsig(YPPlist(2,CHKREF(lit_244),CHKREF(lit_20)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLoptsG)),YPfalse,YPint((P)2),CHKREF(YLtupG),Ynil);
  Ysorted_app_mets = YPmet(FUNCODEREF(Ysorted_app_mets),CHKREF(lit_243),T50,ENVNUL);
  T52 = Ysorted_app_mets;
  Ysorted_app_mets = T52;
  lit_247 = YPPsym((P)"@gen-cache-arg-pos");
  T53 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YOgen_cache_arg_pos = YPmet(FUNCODEREF(YOgen_cache_arg_pos),CHKREF(lit_247),T53,ENVNUL);
  T54 = YOgen_cache_arg_pos;
  YOgen_cache_arg_pos = T54;
  lit_248 = YPPsym((P)"@gen-cache-arg-pos-setter");
  T55 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YOgen_cache_arg_pos_setter = YPmet(FUNCODEREF(YOgen_cache_arg_pos_setter),CHKREF(lit_248),T55,ENVNUL);
  T56 = YOgen_cache_arg_pos_setter;
  YOgen_cache_arg_pos_setter = T56;
  lit_249 = YPPsym((P)"@gen-cache-singletons");
  T57 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YOgen_cache_singletons = YPmet(FUNCODEREF(YOgen_cache_singletons),CHKREF(lit_249),T57,ENVNUL);
  T58 = YOgen_cache_singletons;
  YOgen_cache_singletons = T58;
  lit_250 = YPPsym((P)"@gen-cache-singletons-setter");
  T59 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YOgen_cache_singletons_setter = YPmet(FUNCODEREF(YOgen_cache_singletons_setter),CHKREF(lit_250),T59,ENVNUL);
  T60 = YOgen_cache_singletons_setter;
  YOgen_cache_singletons_setter = T60;
  lit_251 = YPPsym((P)"@gen-cache-classes");
  T61 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YOgen_cache_classes = YPmet(FUNCODEREF(YOgen_cache_classes),CHKREF(lit_251),T61,ENVNUL);
  T62 = YOgen_cache_classes;
  YOgen_cache_classes = T62;
  lit_252 = YPPsym((P)"@gen-cache-classes-setter");
  T63 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YOgen_cache_classes_setter = YPmet(FUNCODEREF(YOgen_cache_classes_setter),CHKREF(lit_252),T63,ENVNUL);
  T64 = YOgen_cache_classes_setter;
  YOgen_cache_classes_setter = T64;
  lit_253 = YPPsym((P)"method-accessor-offset");
  T65 = YPsig(YPPlist(3,CHKREF(lit_23),CHKREF(lit_24),CHKREF(lit_20)),YPPlist(3,CHKREF(YLgenG),CHKREF(YLmetG),CHKREF(YLoptsG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  Ymethod_accessor_offset = YPmet(FUNCODEREF(Ymethod_accessor_offset),CHKREF(lit_253),T65,ENVNUL);
  T66 = Ymethod_accessor_offset;
  Ymethod_accessor_offset = T66;
  lit_254 = YPPsym((P)"@singleton-spec?");
  T67 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YOsingleton_specQ = YPmet(FUNCODEREF(YOsingleton_specQ),CHKREF(lit_254),T67,ENVNUL);
  T68 = YOsingleton_specQ;
  YOsingleton_specQ = T68;
  lit_255 = YPPsym((P)"@subclass-spec?");
  T69 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YOsubclass_specQ = YPmet(FUNCODEREF(YOsubclass_specQ),CHKREF(lit_255),T69,ENVNUL);
  T70 = YOsubclass_specQ;
  YOsubclass_specQ = T70;
  lit_256 = YPPsym((P)"@union-spec?");
  T71 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YOunion_specQ = YPmet(FUNCODEREF(YOunion_specQ),CHKREF(lit_256),T71,ENVNUL);
  T72 = YOunion_specQ;
  YOunion_specQ = T72;
  lit_257 = YPPsym((P)"@precise-spec?");
  T73 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YOprecise_specQ = YPmet(FUNCODEREF(YOprecise_specQ),CHKREF(lit_257),T73,ENVNUL);
  T74 = YOprecise_specQ;
  YOprecise_specQ = T74;
  lit_258 = YPPsym((P)"@mets-unspecialized-at?");
  lit_259 = YPPsym((P)"pos");
  T76 = YPsig(YPPlist(1,CHKREF(lit_24)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_388 = YPmet(FUNCODEREF(fun_388),YPfalse,T76,ENVNUL);
  T75 = YPsig(YPPlist(2,CHKREF(lit_200),CHKREF(lit_259)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  YOmets_unspecialized_atQ = YPmet(FUNCODEREF(YOmets_unspecialized_atQ),CHKREF(lit_258),T75,ENVNUL);
  T77 = YOmets_unspecialized_atQ;
  YOmets_unspecialized_atQ = T77;
  lit_260 = YPPsym((P)"@prune-mets-by-type-at");
  lit_261 = YPPsym((P)"type");
  T79 = YPsig(YPPlist(1,CHKREF(lit_24)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_390 = YPmet(FUNCODEREF(fun_390),YPfalse,T79,ENVNUL);
  T78 = YPsig(YPPlist(3,CHKREF(lit_200),CHKREF(lit_261),CHKREF(lit_259)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLtypeG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLmetsG),Ynil);
  YOprune_mets_by_type_at = YPmet(FUNCODEREF(YOprune_mets_by_type_at),CHKREF(lit_260),T78,ENVNUL);
  T80 = YOprune_mets_by_type_at;
  YOprune_mets_by_type_at = T80;
  lit_262 = YPPsym((P)"@mets-specs-at");
  T82 = YPsig(YPPlist(1,CHKREF(lit_24)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_392 = YPmet(FUNCODEREF(fun_392),YPfalse,T82,ENVNUL);
  T81 = YPsig(YPPlist(2,CHKREF(lit_200),CHKREF(lit_259)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  YOmets_specs_at = YPmet(FUNCODEREF(YOmets_specs_at),CHKREF(lit_262),T81,ENVNUL);
  T83 = YOmets_specs_at;
  YOmets_specs_at = T83;
  lit_263 = YPPsym((P)"@mets-singletons-at");
  lit_264 = YPPsym((P)"spec");
  T85 = YPsig(YPPlist(1,CHKREF(lit_264)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_394 = YPmet(FUNCODEREF(fun_394),YPfalse,T85,ENVNUL);
  T84 = YPsig(YPPlist(2,CHKREF(lit_200),CHKREF(lit_259)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  YOmets_singletons_at = YPmet(FUNCODEREF(YOmets_singletons_at),CHKREF(lit_263),T84,ENVNUL);
  T86 = YOmets_singletons_at;
  YOmets_singletons_at = T86;
  lit_265 = YPPsym((P)"@mets-subclasses-at");
  T88 = YPsig(YPPlist(1,CHKREF(lit_264)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_396 = YPmet(FUNCODEREF(fun_396),YPfalse,T88,ENVNUL);
  T87 = YPsig(YPPlist(2,CHKREF(lit_200),CHKREF(lit_259)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  YOmets_subclasses_at = YPmet(FUNCODEREF(YOmets_subclasses_at),CHKREF(lit_265),T87,ENVNUL);
  T89 = YOmets_subclasses_at;
  YOmets_subclasses_at = T89;
  lit_266 = YPPsym((P)"gen-lookup-miss-1-using");
  lit_267 = YPPsym((P)"instance");
  lit_268 = YPPsym((P)"all-assocs");
  lit_269 = YPPsym((P)"all-assocs-setter");
  lit_270 = YPPsym((P)"cache");
  lit_271 = YPPsym((P)"sorted-mets");
  lit_272 = YPPsym((P)"assocs");
  T91 = YPsig(YPPlist(1,CHKREF(lit_272)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_398 = YPmet(FUNCODEREF(fun_loop_398),CHKREF(lit_5),T91,ENVNUL);
  T90 = YPsig(YPPlist(10,CHKREF(lit_151),CHKREF(lit_267),CHKREF(lit_268),CHKREF(lit_269),CHKREF(lit_23),CHKREF(lit_270),CHKREF(lit_200),CHKREF(lit_271),CHKREF(lit_17),CHKREF(lit_20)),YPPlist(10,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLfunG),CHKREF(YLfunG),CHKREF(YLgenG),CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG),CHKREF(YLintG),CHKREF(YLoptsG)),YPfalse,YPint((P)10),CHKREF(YLanyG),Ynil);
  Ygen_lookup_miss_1_using = YPmet(FUNCODEREF(Ygen_lookup_miss_1_using),CHKREF(lit_266),T90,ENVNUL);
  T92 = Ygen_lookup_miss_1_using;
  Ygen_lookup_miss_1_using = T92;
  lit_273 = YPPsym((P)"@specd-args");
  lit_274 = YPPsym((P)"copy");
  lit_275 = YPPsym((P)"k");
  T94 = YPsig(YPPlist(1,CHKREF(lit_275)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_copy_400 = YPmet(FUNCODEREF(fun_copy_400),CHKREF(lit_274),T94,ENVNUL);
  T93 = YPsig(YPPlist(3,CHKREF(lit_20),CHKREF(lit_17),CHKREF(lit_223)),YPPlist(3,CHKREF(YLoptsG),CHKREF(YLintG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLoptsG),Ynil);
  YOspecd_args = YPmet(FUNCODEREF(YOspecd_args),CHKREF(lit_273),T93,ENVNUL);
  T95 = YOspecd_args;
  YOspecd_args = T95;
  lit_276 = YPPsym((P)"ensure-singleton-cache");
  lit_277 = YPPsym((P)"singletons");
  T97 = YPsig(YPPlist(1,CHKREF(lit_277)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_402 = YPmet(FUNCODEREF(fun_loop_402),CHKREF(lit_5),T97,ENVNUL);
  T96 = YPsig(YPPlist(6,CHKREF(lit_23),CHKREF(lit_270),CHKREF(lit_200),CHKREF(lit_271),CHKREF(lit_17),CHKREF(lit_20)),YPPlist(6,CHKREF(YLgenG),CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG),CHKREF(YLintG),CHKREF(YLoptsG)),YPfalse,YPint((P)6),CHKREF(YLanyG),Ynil);
  Yensure_singleton_cache = YPmet(FUNCODEREF(Yensure_singleton_cache),CHKREF(lit_276),T96,ENVNUL);
  T98 = Yensure_singleton_cache;
  Yensure_singleton_cache = T98;
  lit_278 = YPPsym((P)"gen-lookup-miss-1");
  lit_279 = YPPsym((P)"ocache");
  T99 = YPsig(YPPlist(6,CHKREF(lit_23),CHKREF(lit_279),CHKREF(lit_200),CHKREF(lit_271),CHKREF(lit_17),CHKREF(lit_20)),YPPlist(6,CHKREF(YLgenG),CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG),CHKREF(YLintG),CHKREF(YLoptsG)),YPfalse,YPint((P)6),CHKREF(YLanyG),Ynil);
  Ygen_lookup_miss_1 = YPmet(FUNCODEREF(Ygen_lookup_miss_1),CHKREF(lit_278),T99,ENVNUL);
  T100 = Ygen_lookup_miss_1;
  Ygen_lookup_miss_1 = T100;
  lit_280 = YPPsym((P)"gen-lookup-miss");
  T101 = YPsig(YPPlist(2,CHKREF(lit_23),CHKREF(lit_20)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLoptsG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  Ygen_lookup_miss = YPmet(FUNCODEREF(Ygen_lookup_miss),CHKREF(lit_280),T101,ENVNUL);
  T102 = Ygen_lookup_miss;
  Ygen_lookup_miss = T102;
  T103 = (P)YPpair(CHKREF(Ynil),CHKREF(Ynil));
  YDmissed_dispatch = T103;
  lit_281 = YPPsym((P)"choose-methods");
  lit_282 = YPsb((P)"Ambiguous Method Error when calling %= on %=");
  lit_283 = YPsb((P)"No Applicable Methods Error when calling %= on %=");
  T104 = YPsig(YPPlist(2,CHKREF(lit_23),CHKREF(lit_20)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLoptsG)),YPfalse,YPint((P)2),CHKREF(YLlstG),Ynil);
  Ychoose_methods = YPmet(FUNCODEREF(Ychoose_methods),CHKREF(lit_281),T104,ENVNUL);
  T105 = Ychoose_methods;
  Ychoose_methods = T105;
  lit_284 = YPPsym((P)"%dispatch");
  T106 = YPsig(YPPlist(1,CHKREF(lit_20)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG),Ynil);
  YPdispatch = YPmet(FUNCODEREF(YPdispatch),CHKREF(lit_284),T106,ENVNUL);
  T107 = YPdispatch;
  YPdispatch = T107;
  lit_285 = YPPsym((P)"%patch-early-generic");
  lit_286 = YPPsym((P)"generic");
  T108 = YPsig(YPPlist(1,CHKREF(lit_286)),YPPlist(1,CHKREF(YLgenG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YPpatch_early_generic = YPmet(FUNCODEREF(YPpatch_early_generic),CHKREF(lit_285),T108,ENVNUL);
  T109 = YPpatch_early_generic;
  YPpatch_early_generic = T109;
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yhead));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yhead_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ytail));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ytail_setter));
  T111 = CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ysym_name));
  T110 = T111;
  return T110;
}

P Y___main_9___() {
  P T1,T0;
loop:
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ysym_name_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_slot_len));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_slot_len_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_name));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_name_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_direct_parents));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_direct_parents_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_direct_slots));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_direct_slots_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_parents));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_parents_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_slots));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_slots_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_direct_children));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_direct_children_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_gens));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_gens_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_mets));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_mets_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_forward));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yclass_forward_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ytype_object));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ytype_object_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ytype_class));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ytype_class_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ytype_elts));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ytype_elts_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yslot_owner));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yslot_owner_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yslot_getter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yslot_getter_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yslot_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yslot_setter_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yslot_type));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yslot_type_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yslot_init));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yslot_init_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ygen_cache_missableQ));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ygen_cache_missableQ_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ygen_cache_arg_pos));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ygen_cache_arg_pos_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ygen_cache_singletons));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ygen_cache_singletons_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ygen_cache_classes));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ygen_cache_classes_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ysig_names));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ysig_names_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ysig_specs));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ysig_specs_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ysig_naryQ));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ysig_naryQ_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ysig_arity));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ysig_arity_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ysig_value));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ysig_value_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ysig_unification_vars));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Ysig_unification_vars_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yfun_code));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yfun_code_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yfun_name));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yfun_name_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yfun_sig));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yfun_sig_setter));
  T1 = CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yfun_env));
  T0 = T1;
  return T0;
}

P Y___main_10___() {
  P T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100;
  P T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84;
  P T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68;
  P T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52;
  P T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36;
  P T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
loop:
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yfun_env_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yfun_mets));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yfun_mets_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yfun_cache));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yfun_cache_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yopts_location));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yopts_location_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yopts_count));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yopts_count_setter));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yopts_vec_storage));
  CALL1(1,CHKREF(YPpatch_early_generic),CHKREF(Yopts_vec_storage_setter));
  lit_287 = YPPsym((P)"fun-names");
  T0 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  Yfun_names = YPmet(FUNCODEREF(Yfun_names),CHKREF(lit_287),T0,ENVNUL);
  T1 = Yfun_names;
  Yfun_names = T1;
  lit_288 = YPPsym((P)"fun-names-setter");
  T2 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  Yfun_names_setter = YPmet(FUNCODEREF(Yfun_names_setter),CHKREF(lit_288),T2,ENVNUL);
  T3 = Yfun_names_setter;
  Yfun_names_setter = T3;
  lit_289 = YPPsym((P)"fun-specs");
  T4 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  Yfun_specs = YPmet(FUNCODEREF(Yfun_specs),CHKREF(lit_289),T4,ENVNUL);
  T5 = Yfun_specs;
  Yfun_specs = T5;
  lit_290 = YPPsym((P)"fun-specs-setter");
  T6 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  Yfun_specs_setter = YPmet(FUNCODEREF(Yfun_specs_setter),CHKREF(lit_290),T6,ENVNUL);
  T7 = Yfun_specs_setter;
  Yfun_specs_setter = T7;
  lit_291 = YPPsym((P)"fun-nary?");
  T8 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  Yfun_naryQ = YPmet(FUNCODEREF(Yfun_naryQ),CHKREF(lit_291),T8,ENVNUL);
  T9 = Yfun_naryQ;
  Yfun_naryQ = T9;
  lit_292 = YPPsym((P)"fun-nary?-setter");
  T10 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  Yfun_naryQ_setter = YPmet(FUNCODEREF(Yfun_naryQ_setter),CHKREF(lit_292),T10,ENVNUL);
  T11 = Yfun_naryQ_setter;
  Yfun_naryQ_setter = T11;
  lit_293 = YPPsym((P)"fun-arity");
  T12 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  Yfun_arity = YPmet(FUNCODEREF(Yfun_arity),CHKREF(lit_293),T12,ENVNUL);
  T13 = Yfun_arity;
  Yfun_arity = T13;
  lit_294 = YPPsym((P)"fun-arity-setter");
  T14 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  Yfun_arity_setter = YPmet(FUNCODEREF(Yfun_arity_setter),CHKREF(lit_294),T14,ENVNUL);
  T15 = Yfun_arity_setter;
  Yfun_arity_setter = T15;
  lit_295 = YPPsym((P)"fun-value");
  T16 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  Yfun_value = YPmet(FUNCODEREF(Yfun_value),CHKREF(lit_295),T16,ENVNUL);
  T17 = Yfun_value;
  Yfun_value = T17;
  lit_296 = YPPsym((P)"fun-value-setter");
  T18 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  Yfun_value_setter = YPmet(FUNCODEREF(Yfun_value_setter),CHKREF(lit_296),T18,ENVNUL);
  T19 = Yfun_value_setter;
  Yfun_value_setter = T19;
  lit_297 = YPPsym((P)"fun-unification-vars");
  T20 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  Yfun_unification_vars = YPmet(FUNCODEREF(Yfun_unification_vars),CHKREF(lit_297),T20,ENVNUL);
  T21 = Yfun_unification_vars;
  Yfun_unification_vars = T21;
  lit_298 = YPPsym((P)"fun-unification-vars-setter");
  T22 = YPsig(YPPlist(2,CHKREF(lit_30),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  Yfun_unification_vars_setter = YPmet(FUNCODEREF(Yfun_unification_vars_setter),CHKREF(lit_298),T22,ENVNUL);
  T23 = Yfun_unification_vars_setter;
  Yfun_unification_vars_setter = T23;
  YLparentsG = CHKREF(YLlstG);
  YLslotsG = CHKREF(YLlstG);
  lit_299 = YPPsym((P)"object-class");
  T24 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  Yobject_class = YPmet(FUNCODEREF(Yobject_class),CHKREF(lit_299),T24,ENVNUL);
  T25 = Yobject_class;
  Yobject_class = T25;
  lit_300 = YPPsym((P)"@class-parents");
  T26 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YOclass_parents = YPmet(FUNCODEREF(YOclass_parents),CHKREF(lit_300),T26,ENVNUL);
  T27 = YOclass_parents;
  YOclass_parents = T27;
  lit_301 = YPPsym((P)"class-ordered-parents");
  lit_302 = YPPsym((P)"merge-lists");
  lit_303 = YPPsym((P)"partial-cpl");
  lit_304 = YPPsym((P)"remaining-lists");
  lit_305 = YPPsym((P)"unconstrained-class");
  lit_306 = YPPsym((P)"p-in-and-unconstrained-in?");
  lit_307 = YPPsym((P)"p-unconstrained-in?");
  lit_308 = YPPsym((P)"unconstrained-class-in-parents");
  lit_309 = YPPsym((P)"remove-next");
  lit_310 = YPsb((P)"inconsistent precedence graph");
  T34 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_p_in_and_unconstrained_inQ_428 = YPmet(FUNCODEREF(fun_p_in_and_unconstrained_inQ_428),CHKREF(lit_306),T34,ENVNUL);
  T33 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_p_unconstrained_inQ_429 = YPmet(FUNCODEREF(fun_p_unconstrained_inQ_429),CHKREF(lit_307),T33,ENVNUL);
  T32 = YPsig(YPPlist(1,CHKREF(lit_146)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_unconstrained_class_430 = YPmet(FUNCODEREF(fun_unconstrained_class_430),CHKREF(lit_305),T32,ENVNUL);
  T31 = YPsig(YPPlist(1,CHKREF(lit_144)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_unconstrained_class_in_parents_431 = YPmet(FUNCODEREF(fun_unconstrained_class_in_parents_431),CHKREF(lit_308),T31,ENVNUL);
  T30 = YPsig(YPPlist(1,CHKREF(lit_6)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_remove_next_432 = YPmet(FUNCODEREF(fun_remove_next_432),CHKREF(lit_309),T30,ENVNUL);
  T29 = YPsig(YPPlist(2,CHKREF(lit_303),CHKREF(lit_304)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_merge_lists_433 = YPmet(FUNCODEREF(fun_merge_lists_433),CHKREF(lit_302),T29,ENVNUL);
  T28 = YPsig(YPPlist(1,CHKREF(lit_144)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLparentsG),Ynil);
  Yclass_ordered_parents = YPmet(FUNCODEREF(Yclass_ordered_parents),CHKREF(lit_301),T28,ENVNUL);
  T35 = Yclass_ordered_parents;
  Yclass_ordered_parents = T35;
  lit_311 = YPPsym((P)"@class-direct-slots");
  T36 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  YOclass_direct_slots = YPmet(FUNCODEREF(YOclass_direct_slots),CHKREF(lit_311),T36,ENVNUL);
  T37 = YOclass_direct_slots;
  YOclass_direct_slots = T37;
  lit_312 = YPPsym((P)"class-ordered-slots");
  T38 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLslotsG),Ynil);
  Yclass_ordered_slots = YPmet(FUNCODEREF(Yclass_ordered_slots),CHKREF(lit_312),T38,ENVNUL);
  T39 = Yclass_ordered_slots;
  Yclass_ordered_slots = T39;
  lit_313 = YPPsym((P)"del-class");
  T40 = YPsig(YPPlist(1,CHKREF(lit_26)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  Ydel_class = YPmet(FUNCODEREF(Ydel_class),CHKREF(lit_313),T40,ENVNUL);
  T41 = Ydel_class;
  Ydel_class = T41;
  lit_314 = YPPsym((P)"fab-class");
  lit_315 = YPPsym((P)"parents");
  lit_316 = YPPsym((P)"parent");
  T43 = YPsig(YPPlist(1,CHKREF(lit_316)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_438 = YPmet(FUNCODEREF(fun_438),YPfalse,T43,ENVNUL);
  T42 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_315)),YPPlist(2,CHKREF(YLsymG),CHKREF(YLparentsG)),YPfalse,YPint((P)2),CHKREF(YLclassG),Ynil);
  Yfab_class = YPmet(FUNCODEREF(Yfab_class),CHKREF(lit_314),T42,ENVNUL);
  T44 = Yfab_class;
  Yfab_class = T44;
  lit_317 = YPPsym((P)"refab-class");
  lit_318 = YPPsym((P)"old-class");
  T45 = YPsig(YPPlist(2,CHKREF(lit_318),CHKREF(lit_315)),YPPlist(2,CHKREF(YLclassG),CHKREF(YLparentsG)),YPfalse,YPint((P)2),CHKREF(YLclassG),Ynil);
  Yrefab_class = YPmet(FUNCODEREF(Yrefab_class),CHKREF(lit_317),T45,ENVNUL);
  T46 = Yrefab_class;
  Yrefab_class = T46;
  lit_319 = YPPsym((P)"object-slots");
  T47 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  Yobject_slots = YPmet(FUNCODEREF(Yobject_slots),CHKREF(lit_319),T47,ENVNUL);
  T48 = Yobject_slots;
  Yobject_slots = T48;
  lit_320 = YPPsym((P)"object-parents");
  T49 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  Yobject_parents = YPmet(FUNCODEREF(Yobject_parents),CHKREF(lit_320),T49,ENVNUL);
  T50 = Yobject_parents;
  Yobject_parents = T50;
  YDgetter_not_found = YPint((P)-1);
  lit_321 = YPPsym((P)"ensure-fresh-object");
  T51 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  Yensure_fresh_object = YPmet(FUNCODEREF(Yensure_fresh_object),CHKREF(lit_321),T51,ENVNUL);
  T52 = Yensure_fresh_object;
  Yensure_fresh_object = T52;
  lit_322 = YPPsym((P)"slot-offset");
  lit_323 = YPPsym((P)"object");
  T54 = YPsig(YPPlist(2,CHKREF(lit_17),CHKREF(lit_18)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_444 = YPmet(FUNCODEREF(fun_loop_444),CHKREF(lit_5),T54,ENVNUL);
  T53 = YPsig(YPPlist(2,CHKREF(lit_323),CHKREF(lit_16)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLintG),Ynil);
  Yslot_offset = YPmet(FUNCODEREF(Yslot_offset),CHKREF(lit_322),T53,ENVNUL);
  T55 = Yslot_offset;
  Yslot_offset = T55;
  lit_324 = YPPsym((P)"slot-value");
  lit_325 = YPsb((P)"slot %s not found in %=");
  T56 = YPsig(YPPlist(2,CHKREF(lit_323),CHKREF(lit_16)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  Yslot_value = YPmet(FUNCODEREF(Yslot_value),CHKREF(lit_324),T56,ENVNUL);
  T57 = Yslot_value;
  Yslot_value = T57;
  lit_326 = YPPsym((P)"slot-value-setter");
  lit_327 = YPsb((P)"slot %s not found in %=");
  T58 = YPsig(YPPlist(3,CHKREF(lit_30),CHKREF(lit_323),CHKREF(lit_16)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  Yslot_value_setter = YPmet(FUNCODEREF(Yslot_value_setter),CHKREF(lit_326),T58,ENVNUL);
  T59 = Yslot_value_setter;
  Yslot_value_setter = T59;
  lit_328 = YPPsym((P)"%isa");
  lit_329 = YPPsym((P)"getters");
  lit_330 = YPPsym((P)"vals");
  T61 = YPsig(YPPlist(2,CHKREF(lit_329),CHKREF(lit_330)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  fun_loop_448 = YPmet(FUNCODEREF(fun_loop_448),CHKREF(lit_5),T61,ENVNUL);
  T60 = YPsig(YPPlist(3,CHKREF(lit_315),CHKREF(lit_329),CHKREF(lit_330)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLanyG),Ynil);
  YPisa = YPmet(FUNCODEREF(YPisa),CHKREF(lit_328),T60,ENVNUL);
  T62 = YPisa;
  YPisa = T62;
  lit_331 = YPPsym((P)"find-getter");
  lit_332 = YPsb((P)"COULDN'T FIND GETTER");
  T64 = YPsig(YPPlist(1,CHKREF(lit_200)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_450 = YPmet(FUNCODEREF(fun_loop_450),CHKREF(lit_5),T64,ENVNUL);
  T63 = YPsig(YPPlist(2,CHKREF(lit_15),CHKREF(lit_16)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLgenG)),YPfalse,YPint((P)2),CHKREF(YLmetG),Ynil);
  Yfind_getter = YPmet(FUNCODEREF(Yfind_getter),CHKREF(lit_331),T63,ENVNUL);
  T65 = Yfind_getter;
  Yfind_getter = T65;
  lit_333 = YPPsym((P)"find-setter");
  lit_334 = YPPsym((P)"zetter");
  lit_335 = YPsb((P)"COULDN'T FIND SETTER");
  T67 = YPsig(YPPlist(1,CHKREF(lit_200)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_loop_452 = YPmet(FUNCODEREF(fun_loop_452),CHKREF(lit_5),T67,ENVNUL);
  T66 = YPsig(YPPlist(3,CHKREF(lit_15),CHKREF(lit_261),CHKREF(lit_334)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLgenG)),YPfalse,YPint((P)3),CHKREF(YLmetG),Ynil);
  Yfind_setter = YPmet(FUNCODEREF(Yfind_setter),CHKREF(lit_333),T66,ENVNUL);
  T68 = Yfind_setter;
  Yfind_setter = T68;
  lit_336 = YPPsym((P)"forward-class");
  T70 = YPsig(YPPlist(1,CHKREF(lit_193)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_454 = YPmet(FUNCODEREF(fun_454),YPfalse,T70,ENVNUL);
  T69 = YPsig(YPPlist(1,CHKREF(lit_318)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  Yforward_class = YPmet(FUNCODEREF(Yforward_class),CHKREF(lit_336),T69,ENVNUL);
  T71 = Yforward_class;
  Yforward_class = T71;
  lit_337 = YPPsym((P)"@do-children");
  lit_338 = YPPsym((P)"visit");
  T73 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_visit_456 = YPmet(FUNCODEREF(fun_visit_456),CHKREF(lit_338),T73,ENVNUL);
  T72 = YPsig(YPPlist(2,CHKREF(lit_154),CHKREF(lit_10)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  YOdo_children = YPmet(FUNCODEREF(YOdo_children),CHKREF(lit_337),T72,ENVNUL);
  T74 = YOdo_children;
  YOdo_children = T74;
  lit_339 = YPPsym((P)"%slot");
  lit_340 = YPPsym((P)"setter");
  T76 = YPsig(YPPlist(1,CHKREF(lit_27)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_458 = YPmet(FUNCODEREF(fun_458),YPfalse,T76,ENVNUL);
  T75 = YPsig(YPPlist(5,CHKREF(lit_15),CHKREF(lit_16),CHKREF(lit_340),CHKREF(lit_261),CHKREF(lit_171)),YPPlist(5,CHKREF(YLanyG),CHKREF(YLgenG),CHKREF(YLgenG),CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)5),CHKREF(YLanyG),Ynil);
  YPslot = YPmet(FUNCODEREF(YPslot),CHKREF(lit_339),T75,ENVNUL);
  T77 = YPslot;
  YPslot = T77;
  lit_341 = YPPsym((P)"update-instance-for-changed-class");
  T78 = YPsig(YPPlist(1,CHKREF(lit_323)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  Yupdate_instance_for_changed_class = YPmet(FUNCODEREF(Yupdate_instance_for_changed_class),CHKREF(lit_341),T78,ENVNUL);
  T79 = Yupdate_instance_for_changed_class;
  Yupdate_instance_for_changed_class = T79;
  Yadd_slot = CHKREF(YPslot);
  lit_342 = YPPsym((P)"fab-gen");
  lit_343 = YPPsym((P)"names");
  lit_344 = YPPsym((P)"nary?");
  T80 = YPsig(YPPlist(5,CHKREF(lit_1),CHKREF(lit_343),CHKREF(lit_198),CHKREF(lit_344),CHKREF(lit_200)),YPPlist(5,CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG),CHKREF(YLlogG),CHKREF(YLlstG)),YPfalse,YPint((P)5),CHKREF(YLgenG),Ynil);
  Yfab_gen = YPmet(FUNCODEREF(Yfab_gen),CHKREF(lit_342),T80,ENVNUL);
  T81 = Yfab_gen;
  Yfab_gen = T81;
  lit_345 = YPPsym((P)"gen-from-met");
  T83 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG),Ynil);
  fun_463 = YPmet(FUNCODEREF(fun_463),YPfalse,T83,ENVNUL);
  T82 = YPsig(YPPlist(1,CHKREF(lit_10)),YPPlist(1,CHKREF(YLmetG)),YPfalse,YPint((P)1),CHKREF(YLgenG),Ynil);
  Ygen_from_met = YPmet(FUNCODEREF(Ygen_from_met),CHKREF(lit_345),T82,ENVNUL);
  T84 = Ygen_from_met;
  Ygen_from_met = T84;
  lit_346 = YPPsym((P)"%define-method");
  T85 = YPsig(YPPlist(2,CHKREF(lit_23),CHKREF(lit_24)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLgenG),Ynil);
  YPdefine_method = YPmet(FUNCODEREF(YPdefine_method),CHKREF(lit_346),T85,ENVNUL);
  T86 = YPdefine_method;
  YPdefine_method = T86;
  lit_347 = YPPsym((P)"unexec");
  lit_348 = YPPsym((P)"fun");
  T87 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_348)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG),Ynil);
  Yunexec = YPmet(FUNCODEREF(Yunexec),CHKREF(lit_347),T87,ENVNUL);
  T88 = Yunexec;
  Yunexec = T88;
  lit_349 = YPPsym((P)"nyi-subtype?");
  T90 = YPsig(YPPlist(2,CHKREF(lit_215),CHKREF(lit_216)),YPPlist(2,CHKREF(YLtypeG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  T89 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_349),T90,Ynil,YPfalse);
  Ynyi_subtypeQ = T89;
  lit_350 = YPPsym((P)"subtype?");
  T92 = YPsig(YPPlist(2,CHKREF(lit_215),CHKREF(lit_216)),YPPlist(2,CHKREF(YLtypeG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  T91 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_350),T92,Ynil,YPfalse);
  YsubtypeQ = T91;
  T93 = YPsig(YPPlist(2,CHKREF(lit_215),CHKREF(lit_216)),YPPlist(2,CHKREF(YLtypeG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_subtypeQ_467 = YPmet(FUNCODEREF(fun_subtypeQ_467),CHKREF(lit_350),T93,ENVNUL);
  T96 = BOUNDP(YsubtypeQ);
  if (T96 != YPfalse) {
    T95 = CHKREF(YsubtypeQ);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_subtypeQ_467;
  T94 = CALL2(1,CHKREF(YPdefine_method),T95,T97);
  YsubtypeQ = T94;
  lit_351 = YPPsym((P)"nyi-isa?");
  T99 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_203)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  T98 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_351),T99,Ynil,YPfalse);
  Ynyi_isaQ = T98;
  lit_352 = YPPsym((P)"isa?");
  T101 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_203)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  T100 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_352),T101,Ynil,YPfalse);
  YisaQ = T100;
  T102 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_203)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_isaQ_468 = YPmet(FUNCODEREF(fun_isaQ_468),CHKREF(lit_352),T102,ENVNUL);
  T105 = BOUNDP(YisaQ);
  if (T105 != YPfalse) {
    T104 = CHKREF(YisaQ);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_isaQ_468;
  T103 = CALL2(1,CHKREF(YPdefine_method),T104,T106);
  YisaQ = T103;
  lit_353 = YPPsym((P)"may-isa?");
  T108 = YPsig(YPPlist(2,CHKREF(lit_144),CHKREF(lit_203)),YPPlist(2,CHKREF(YLclassG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  T107 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_353),T108,Ynil,YPfalse);
  Ymay_isaQ = T107;
  T109 = YPsig(YPPlist(2,CHKREF(lit_144),CHKREF(lit_203)),YPPlist(2,CHKREF(YLclassG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG),Ynil);
  fun_may_isaQ_469 = YPmet(FUNCODEREF(fun_may_isaQ_469),CHKREF(lit_353),T109,ENVNUL);
  T112 = BOUNDP(Ymay_isaQ);
  if (T112 != YPfalse) {
    T111 = CHKREF(Ymay_isaQ);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_may_isaQ_469;
  T110 = CALL2(1,CHKREF(YPdefine_method),T111,T113);
  Ymay_isaQ = T110;
  T115 = YTboot_macro_module_namesT = Ynil;
  T114 = T115;
  return T114;
}

P Y___main_11___() {
  P T0;
loop:
  YTboot_macro_namesT = Ynil;
  YTboot_macro_expandersT = Ynil;
  YTmacros_okQT = YPfalse;
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
  {"@fun-mets", &YOfun_mets},
  {"%loc-off", NULL},
  {"@subtype?", &YOsubtypeQ},
  {"%class-slot-len-setter", NULL},
  {"@subclass-spec?", &YOsubclass_specQ},
  {"case", NULL},
  {"%object-class", NULL},
  {"gen-cache-singletons", &Ygen_cache_singletons},
  {"@empty?", NULL},
  {"@@empty?", &YOOemptyQ},
  {"@not", NULL},
  {"set", NULL},
  {"%unlink-stack", NULL},
  {"slot-value-at-setter", NULL},
  {"%locative-value-setter", NULL},
  {"%slot", &YPslot},
  {"%met-name", NULL},
  {"%define-structure-accessors", NULL},
  {"export", NULL},
  {"%%apply", NULL},
  {"<log>", &YLlogG},
  {"%clone", NULL},
  {"<slot>", &YLslotG},
  {"%file-mtime", NULL},
  {"%str-eq?", NULL},
  {"sig-unification-vars-setter", &Ysig_unification_vars_setter},
  {"class-direct-parents-setter", &Yclass_direct_parents_setter},
  {"%define-primitives", NULL},
  {"%f*", NULL},
  {"unknown-function-error", &Yunknown_function_error},
  {"%fi2f", NULL},
  {"%app-filename", NULL},
  {"fun-arity-setter", &Yfun_arity_setter},
  {"%i-", NULL},
  {"%opts-vec-count", NULL},
  {"%add-slot", &YPadd_slot},
  {"@alter", &YOalter},
  {"%fun-reg", NULL},
  {"%union", NULL},
  {"---main-5---", NULL},
  {"opts-location-setter", &Yopts_location_setter},
  {"class-forward-setter", &Yclass_forward_setter},
  {"nyi-subtype?", &Ynyi_subtypeQ},
  {"@union-spec?", &YOunion_specQ},
  {"sig-unification-vars", &Ysig_unification_vars},
  {"when", NULL},
  {"class-direct-parents", &Yclass_direct_parents},
  {"sorted-app-mets-1", &Ysorted_app_mets_1},
  {"%update-instance-for-changed-class", NULL},
  {"$min-int", &YDmin_int},
  {"%cat2", NULL},
  {"not", &Ynot},
  {"slot-value", &Yslot_value},
  {"<any>", &YLanyG},
  {"%sp-reg", NULL},
  {"%%sym", NULL},
  {"%type-elts-setter", NULL},
  {"%build-runtime-modules", NULL},
  {"$missed-dispatch", &YDmissed_dispatch},
  {"lst", &Ylst},
  {"%opts-vec-count-setter", NULL},
  {"%gen-cache-singletons-setter", NULL},
  {"@=", NULL},
  {"@fun-unification-vars", &YOfun_unification_vars},
  {"%opts-location-setter", NULL},
  {"%peek-char", NULL},
  {"<union>", &YLunionG},
  {"opts-location", &Yopts_location},
  {"class-forward", &Yclass_forward},
  {"$tag-len", NULL},
  {"@mets-unspecialized-at?", &YOmets_unspecialized_atQ},
  {"%class-direct-children", NULL},
  {"error", &Yerror},
  {"may-isa?", &Ymay_isaQ},
  {"fun-arity", &Yfun_arity},
  {"@fun-value", &YOfun_value},
  {"%flo-bits", NULL},
  {"%met-env", NULL},
  {"fun-sig-setter", &Yfun_sig_setter},
  {"%create-directory", NULL},
  {"@find-key", &YOfind_key},
  {"<chr>", &YLchrG},
  {"%fb", NULL},
  {"%elt", NULL},
  {"sig-specs-setter", &Ysig_specs_setter},
  {"@tail-setter", NULL},
  {"gen-lookup-miss-1", &Ygen_lookup_miss_1},
  {"slot-owner", &Yslot_owner},
  {"slot-setter-setter", &Yslot_setter_setter},
  {"%dispatch", &YPdispatch},
  {"%opts-vec-location-setter", NULL},
  {"slot-type-setter", &Yslot_type_setter},
  {"<subclass>", &YLsubclassG},
  {"%velt-setter", NULL},
  {"@gen-cache-arg-pos-setter", &YOgen_cache_arg_pos_setter},
  {"@gen-cache-singletons", &YOgen_cache_singletons},
  {"gen-lookup", NULL},
  {"%true", &YPtrue},
  {"@cat2", &YOcat2},
  {"%flo", NULL},
  {"quote", NULL},
  {"wrong-number-arguments-error", &Ywrong_number_arguments_error},
  {"%f/", NULL},
  {"%symbols", &YPsymbols},
  {"fun", NULL},
  {"@precise-spec?", &YOprecise_specQ},
  {"%i<<", NULL},
  {"sig-specs", &Ysig_specs},
  {"%i&", NULL},
  {"tail-setter", &Ytail_setter},
  {"slot-type", &Yslot_type},
  {"%gen-cache-singletons", NULL},
  {"%met-code-setter", NULL},
  {"%sig-arity", NULL},
  {"%i=", NULL},
  {"%opts-count", NULL},
  {"%opts-vec", NULL},
  {"@fun-arity", &YOfun_arity},
  {"%opts-vec-vec-setter", NULL},
  {"@subclass?", NULL},
  {"@@==", &YOOEE},
  {"%finalize-slots!", &YPfinalize_slotsX},
  {"@type-equal?", &YOtype_equalQ},
  {"<singleton>", &YLsingletonG},
  {"%met-slot-len", &YPmet_slot_len},
  {"dg", NULL},
  {"%slot-setter", NULL},
  {"%tail", NULL},
  {"%vec!", NULL},
  {"class-slots-setter", &Yclass_slots_setter},
  {"%class-of", NULL},
  {"@do", &YOdo},
  {"%ft", NULL},
  {"%gen-cache-arg-pos", NULL},
  {"tail", &Ytail},
  {"%eof-object", NULL},
  {"<mets>", &YLmetsG},
  {"%class-direct-parents", NULL},
  {"*boot-macro-names*", &YTboot_macro_namesT},
  {"gen-lookup-1", NULL},
  {"<tup>", &YLtupG},
  {"fun-nary?-setter", &Yfun_naryQ_setter},
  {"unexec", &Yunexec},
  {"@do-children", &YOdo_children},
  {"%invoke-debugger", NULL},
  {"%*used-symbols-too-early*", &YPTused_symbols_too_earlyT},
  {"one-nil", &Yone_nil},
  {"%met-code", NULL},
  {"%fp-reg", NULL},
  {"%sig-specs-setter", NULL},
  {"%class-mets-setter", NULL},
  {"%sig-names-setter", NULL},
  {"%i?", NULL},
  {"fun-sig", &Yfun_sig},
  {"class-slots", &Yclass_slots},
  {"@elt", &YOelt},
  {"%i*", NULL},
  {"%met-env-setter", NULL},
  {"%sig-nary?", NULL},
  {"%gen", NULL},
  {"@fun-nary?", &YOfun_naryQ},
  {"%add-met", &YPadd_met},
  {"%type-class", NULL},
  {"%gen-mets-setter", NULL},
  {"sorted-app-mets", &Ysorted_app_mets},
  {"def-object-class-accessor", NULL},
  {"%su", NULL},
  {"%untag", NULL},
  {"%sig", NULL},
  {"%file-type", NULL},
  {"%gen-mets", NULL},
  {"%collect-direct-slots", &YPcollect_direct_slots},
  {"%subclass", NULL},
  {"handler-info-arguments", &Yhandler_info_arguments},
  {"%class-gens", NULL},
  {"@oelt", NULL},
  {"gen-lookup-1-using", NULL},
  {"%class-name", NULL},
  {"%vec", NULL},
  {"gen-cache-arg-pos-setter", &Ygen_cache_arg_pos_setter},
  {"%define-tagged-structure", NULL},
  {"type-elts-setter", &Ytype_elts_setter},
  {"fun-nary?", &Yfun_naryQ},
  {"%type-object", NULL},
  {"%slot-getter", NULL},
  {"%check-call-types", NULL},
  {"%newline", NULL},
  {"%velt", NULL},
  {"$gen-cache-singletons-offset", &YDgen_cache_singletons_offset},
  {"<opts-vec>", &YLopts_vecG},
  {"if", NULL},
  {"slot-offset", &Yslot_offset},
  {"%read-char", NULL},
  {"%c<", NULL},
  {"%location-of-end-of-vec", NULL},
  {"%met-sig-setter", NULL},
  {"%tag-into", NULL},
  {"%write-string", NULL},
  {"gen-cache-arg-pos", &Ygen_cache_arg_pos},
  {"type-elts", &Ytype_elts},
  {"gen-lookup-miss-1-using", &Ygen_lookup_miss_1_using},
  {"%fp-reg-setter", NULL},
  {"@fun-specs", &YOfun_specs},
  {"@tail", NULL},
  {"forward-class", &Yforward_class},
  {"$tag-msk", NULL},
  {"%object-shells", NULL},
  {"%sym-nam-setter", NULL},
  {"%class-forward-setter", NULL},
  {"%flo-dat-setter", NULL},
  {"%i>>", NULL},
  {"%pair", NULL},
  {"%%macro", &YPPmacro},
  {"slot-value-at", NULL},
  {"%define-method", &YPdefine_method},
  {"%do-stack-frames", NULL},
  {"add-slot", &Yadd_slot},
  {"sig-value-setter", &Ysig_value_setter},
  {"class-name-setter", &Yclass_name_setter},
  {"%class-parents", NULL},
  {"%unexec", NULL},
  {"%rev!", NULL},
  {"<slots>", &YLslotsG},
  {"%next-methods", NULL},
  {"%early-dispatch", &YPearly_dispatch},
  {"file-opening-error", &Yfile_opening_error},
  {"%class-direct-slots", NULL},
  {"<opts>", &YLoptsG},
  {"<body>", &YLbodyG},
  {"ensure-fresh-object", &Yensure_fresh_object},
  {"<specs>", &YLspecsG},
  {"@may-isa?", &YOmay_isaQ},
  {"fun-cache-setter", &Yfun_cache_setter},
  {"class-mets-setter", &Yclass_mets_setter},
  {"@add", NULL},
  {"@singleton-spec?", &YOsingleton_specQ},
  {"%*start-running-at*", &YPTstart_running_atT},
  {"sig-value", &Ysig_value},
  {"class-name", &Yclass_name},
  {"%opts-vec-location", NULL},
  {"%char-ready", NULL},
  {"dss", NULL},
  {"isa?", &YisaQ},
  {"%define-hierarchy", NULL},
  {"%%mep-apply", NULL},
  {"fun-specs-setter", &Yfun_specs_setter},
  {"@fun-names", &YOfun_names},
  {"use", NULL},
  {"isa", NULL},
  {"@pick", &YOpick},
  {"met-app?", &Ymet_appQ},
  {"---main-8---", NULL},
  {"<type>", &YLtypeG},
  {"%loc", NULL},
  {"%gen-name-setter", NULL},
  {"<class>", &YLclassG},
  {"fun-cache", &Yfun_cache},
  {"class-mets", &Yclass_mets},
  {"%ft/", NULL},
  {"%fapply", NULL},
  {"fab-sym", &Yfab_sym},
  {"<parents>", &YLparentsG},
  {"let", NULL},
  {"ct-also", NULL},
  {"%os-binding-value", NULL},
  {"%slot-owner-setter", NULL},
  {"%sym", NULL},
  {"%opts-location", NULL},
  {"%slot-dat-at", NULL},
  {"object-parents", &Yobject_parents},
  {"fin", NULL},
  {"gen-from-met", &Ygen_from_met},
  {"@lst", &YOlst},
  {"sig-names-setter", &Ysig_names_setter},
  {"%close-output-port", NULL},
  {"%sig-unification-vars-setter", NULL},
  {"%slot-type-setter", NULL},
  {"@mets-subclasses-at", &YOmets_subclasses_at},
  {"fun-specs", &Yfun_specs},
  {"%%sfab", NULL},
  {"%opts", NULL},
  {"%define-parent", NULL},
  {"%gen-code-setter", NULL},
  {"%binding-name", NULL},
  {"---main-2---", NULL},
  {"---main-0---", NULL},
  {"<sym>", &YLsymG},
  {"%indirect-object?", NULL},
  {"@tup", &YOtup},
  {"%class-mets", NULL},
  {"@reduce", &YOreduce},
  {"nul-slot", &Ynul_slot},
  {"sig-names", &Ysig_names},
  {"<simple-handler-info>", &YLsimple_handler_infoG},
  {"order-mets", &Yorder_mets},
  {"%vnul", &YPvnul},
  {"slot-setter", &Yslot_setter},
  {"%cu", NULL},
  {"%finalize-slots", NULL},
  {"%tag", NULL},
  {"%int", NULL},
  {"%opts-vec-vec", NULL},
  {"%gen-code", NULL},
  {"%selt", NULL},
  {"%slot-init-setter", NULL},
  {"<gen>", &YLgenG},
  {"object-slots", &Yobject_slots},
  {"%class-slots", NULL},
  {"nyi-isa?", &Ynyi_isaQ},
  {"fun-name-setter", &Yfun_name_setter},
  {"method-accessor-offset", &Ymethod_accessor_offset},
  {"%sig-value-setter", NULL},
  {"class-parents-setter", &Yclass_parents_setter},
  {"ensure-singleton-cache", &Yensure_singleton_cache},
  {"%eq?", NULL},
  {"%ff", NULL},
  {"<str>", &YLstrG},
  {"%gen-cache-arg-pos-setter", NULL},
  {"$adr-tag", NULL},
  {"%sig-unification-vars", NULL},
  {"opts-vec-storage-setter", &Yopts_vec_storage_setter},
  {"type-class-setter", &Ytype_class_setter},
  {"%class-gens-setter", NULL},
  {"%class-slot-len", NULL},
  {"%fun-cache", NULL},
  {"fun-name", &Yfun_name},
  {"%false", &YPfalse},
  {"class-parents", &Yclass_parents},
  {"find-setter", &Yfind_setter},
  {"*macros-ok?*", &YTmacros_okQT},
  {"%reparent-class-shells", NULL},
  {"order-specs-default", &Yorder_specs_default},
  {"%met-sig", NULL},
  {"%lu", NULL},
  {"%met", NULL},
  {"class-ordered-parents", &Yclass_ordered_parents},
  {"fun-names-setter", &Yfun_names_setter},
  {"@all2?", &YOall2Q},
  {"<vec>", &YLvecG},
  {"%class-shells", NULL},
  {"%snul", &YPsnul},
  {"opts-vec-storage", &Yopts_vec_storage},
  {"%sig-arity-setter", NULL},
  {"type-class", &Ytype_class},
  {"nul", &Ynul},
  {"$direct-object-class", &YDdirect_object_class},
  {"gen-cache-missable?-setter", &Ygen_cache_missableQ_setter},
  {"%force-output", NULL},
  {"%slot-owner", NULL},
  {"%%len", NULL},
  {"%sig-nary?-setter", NULL},
  {"%lb", NULL},
  {"gen-add-met", &Ygen_add_met},
  {"or", NULL},
  {"%define-accessor", NULL},
  {"sig-arity-setter", &Ysig_arity_setter},
  {"@gen-cache-classes-setter", &YOgen_cache_classes_setter},
  {"%raw", NULL},
  {"%i^", NULL},
  {"gen-cache-missable?", &Ygen_cache_missableQ},
  {"order-specs", &Yorder_specs},
  {"<flat>", &YLflatG},
  {"<met>", &YLmetG},
  {"%ir", NULL},
  {"@class<", &YOclassL},
  {"@class-parents", &YOclass_parents},
  {"%process-module", NULL},
  {"*restarts-ok?*", &YTrestarts_okQT},
  {"@<", NULL},
  {"fun-names", &Yfun_names},
  {"dp", NULL},
  {"@lst-helper", &YOlst_helper},
  {"try", NULL},
  {"seq", NULL},
  {"%vu", NULL},
  {"refab-class", &Yrefab_class},
  {"$num-int-bits", &YDnum_int_bits},
  {"%class-direct-children-setter", NULL},
  {"@mets-singletons-at", &YOmets_singletons_at},
  {"*boot-macro-module-names*", &YTboot_macro_module_namesT},
  {"sig-arity", &Ysig_arity},
  {"%str", NULL},
  {"*boot-macro-expanders*", &YTboot_macro_expandersT},
  {"%sp-reg-setter", NULL},
  {"%singleton", NULL},
  {"class-slot-len-setter", &Yclass_slot_len_setter},
  {"%im", NULL},
  {"---main-7---", NULL},
  {"@oelt-setter", NULL},
  {"---main-10---", NULL},
  {"%class-direct-slots-setter", NULL},
  {"dm", NULL},
  {"rep", NULL},
  {"%os-binding-value-setter", NULL},
  {"fun-mets-setter", &Yfun_mets_setter},
  {"---main-11---", NULL},
  {"class-gens-setter", &Yclass_gens_setter},
  {"@gen-cache-classes", &YOgen_cache_classes},
  {"%fc", NULL},
  {"%empty?", NULL},
  {"@map", &YOmap},
  {"find-getter", &Yfind_getter},
  {"%i+", NULL},
  {"class-slot-len", &Yclass_slot_len},
  {"@head", NULL},
  {"%char-ready?", NULL},
  {"%raw-alloc", NULL},
  {"%class-direct-parents-setter", NULL},
  {"object-class", &Yobject_class},
  {"fun-congruent?", &Yfun_congruentQ},
  {"@fab", &YOfab},
  {"%current-input-port", NULL},
  {"unless", NULL},
  {"<lst>", &YLlstG},
  {"%tag-bits", NULL},
  {"%slot-type", NULL},
  {"loc", NULL},
  {"%lst", NULL},
  {"fun-mets", &Yfun_mets},
  {"class-gens", &Yclass_gens},
  {"%allocate-stack", NULL},
  {"%met-name-setter", NULL},
  {"%class-name-setter", NULL},
  {"%current-output-port", NULL},
  {"dv", NULL},
  {"<fun>", &YLfunG},
  {"mif", NULL},
  {"%elt-setter", NULL},
  {"%fun-cache-setter", NULL},
  {"%patch-early-generic", &YPpatch_early_generic},
  {"%opts-count-setter", NULL},
  {"%slot-offset", &YPslot_offset},
  {"@+", NULL},
  {"@add-new", NULL},
  {"%gen-cache-classes-setter", NULL},
  {"%sb", NULL},
  {"def-fun/sig-accessor", NULL},
  {"<replace-generic-restart>", &YLreplace_generic_restartG},
  {"%trace-off", NULL},
  {"%type-class-setter", NULL},
  {"$max-int", &YDmax_int},
  {"fab-gen", &Yfab_gen},
  {"%gen-cache", NULL},
  {"gen-cache-classes-setter", &Ygen_cache_classes_setter},
  {"%object-of", NULL},
  {"<seq>", &YLseqG},
  {"%slot-elt", NULL},
  {"slot-getter-setter", &Yslot_getter_setter},
  {"%str-eq?-loop", NULL},
  {"%os-name", NULL},
  {"%symbols-ready?", &YPsymbols_readyQ},
  {"%slot-getter-setter", NULL},
  {"%compute-parents", NULL},
  {"%slot-setter-setter", NULL},
  {"---main-6---", NULL},
  {"@isa?", &YOisaQ},
  {"%untag-into", NULL},
  {"@mets-specs-at", &YOmets_specs_at},
  {"$getter-not-found", &YDgetter_not_found},
  {"%i>>>", NULL},
  {"%loc-off-setter", NULL},
  {"@gen-cache-singletons-setter", &YOgen_cache_singletons_setter},
  {"handler-info-message", &Yhandler_info_message},
  {"---main-9---", NULL},
  {"gen-cache-classes", &Ygen_cache_classes},
  {"@specd-args", &YOspecd_args},
  {"slot-getter", &Yslot_getter},
  {"%close-input-port", NULL},
  {"%gen-sig-setter", NULL},
  {"%define-boxed-structure", NULL},
  {"fun-unification-vars-setter", &Yfun_unification_vars_setter},
  {"fun-same-met?", &Yfun_same_metQ},
  {"%sig-names", NULL},
  {"%class-forward", NULL},
  {"%open-input-file", NULL},
  {"%vlen", NULL},
  {"<col>", &YLcolG},
  {"%locative-value", NULL},
  {"met-app-unify", &Ymet_app_unify},
  {"%gen-sig", NULL},
  {"update-instance-for-changed-class", &Yupdate_instance_for_changed_class},
  {"fun-code-setter", &Yfun_code_setter},
  {"@del-dups", &YOdel_dups},
  {"class-direct-slots-setter", &Yclass_direct_slots_setter},
  {"<env>", &YLenvG},
  {"%define-setter", NULL},
  {"@subclass-isa?", NULL},
  {"%trace-on", NULL},
  {"and", NULL},
  {"@any?", &YOanyQ},
  {"%class-parents-setter", NULL},
  {"%tail-setter", NULL},
  {"@pair", NULL},
  {"%%slot", NULL},
  {"@singleton-isa?", NULL},
  {"opts-count-setter", &Yopts_count_setter},
  {"type-object-setter", &Ytype_object_setter},
  {"nil", &Ynil},
  {"@head-setter", NULL},
  {"%head-setter", NULL},
  {"fun-code", &Yfun_code},
  {"class-direct-slots", &Yclass_direct_slots},
  {"%break", NULL},
  {"<loc>", &YLlocG},
  {"@class-in?", NULL},
  {"fab-class", &Yfab_class},
  {"lab", NULL},
  {"%f+", NULL},
  {"%gen-cache-missable?", NULL},
  {"fun-unification-vars", &Yfun_unification_vars},
  {"---main-3---", NULL},
  {"%f=", NULL},
  {"dc", NULL},
  {"%i<<<", NULL},
  {"<sig>", &YLsigG},
  {"opts-count", &Yopts_count},
  {"@olen", NULL},
  {"%type-object-setter", NULL},
  {"type-object", &Ytype_object},
  {"%i<", NULL},
  {"force-names-into-boot-module", NULL},
  {"---main-4---", NULL},
  {"head-setter", &Yhead_setter},
  {"choose-methods", &Ychoose_methods},
  {"%define-structure", NULL},
  {"%bb", NULL},
  {"fun-spec", &Yfun_spec},
  {"keyboard-interrupt", &Ykeyboard_interrupt},
  {"%define-getter", NULL},
  {"%macro", NULL},
  {"%ib", NULL},
  {"%isa", &YPisa},
  {"<flo>", &YLfloG},
  {"%gen-name", NULL},
  {"%raw-call", NULL},
  {"macro-expand", NULL},
  {"%%vfab", NULL},
  {"@union-isa?", NULL},
  {"%sig-specs", NULL},
  {"head", &Yhead},
  {"sig-nary?-setter", &Ysig_naryQ_setter},
  {"%patch-early-generics", NULL},
  {"%chr", NULL},
  {"slot-init-setter", &Yslot_init_setter},
  {"@all?", &YOallQ},
  {"%object-class-setter", NULL},
  {"%type-elts", NULL},
  {"del-class", &Ydel_class},
  {"%iu", NULL},
  {"@==", NULL},
  {"ds", NULL},
  {"incongruent-method-error", &Yincongruent_method_error},
  {"%write-char", NULL},
  {"%head", NULL},
  {"sig-nary?", &Ysig_naryQ},
  {"%cb", NULL},
  {"@mem?", &YOmemQ},
  {"sym-name-setter", &Ysym_name_setter},
  {"slot-init", &Yslot_init},
  {"%selt-setter", NULL},
  {"<int>", &YLintG},
  {"fun-value-setter", &Yfun_value_setter},
  {"%gen-cache-classes", NULL},
  {"%sym-nam", NULL},
  {"---main-1---", NULL},
  {"%flo-dat", NULL},
  {"%fu", NULL},
  {"%str!", NULL},
  {"fun-env-setter", &Yfun_env_setter},
  {"class-direct-children-setter", &Yclass_direct_children_setter},
  {"%slot-init", NULL},
  {"sym-name", &Ysym_name},
  {"<gen-cache>", &YLgen_cacheG},
  {"class-ordered-slots", &Yclass_ordered_slots},
  {"%slen", NULL},
  {"@fun-mets-setter", &YOfun_mets_setter},
  {"@prune-mets-by-type-at", &YOprune_mets_by_type_at},
  {"gen-lookup-miss", &Ygen_lookup_miss},
  {"bound?", NULL},
  {"@rev!", &YOrevX},
  {"<num>", &YLnumG},
  {"%sig-value", NULL},
  {"%f-", NULL},
  {"%i!", NULL},
  {"%class", NULL},
  {"fun-env", &Yfun_env},
  {"class-direct-children", &Yclass_direct_children},
  {"@gen-cache-arg-pos", &YOgen_cache_arg_pos},
  {"%slot-elt-setter", NULL},
  {"%it/", NULL},
  {"$gen-cache-classes-offset", &YDgen_cache_classes_offset},
  {"@class-isa?", NULL},
  {"quasiquote", NULL},
  {"fun-value", &Yfun_value},
  {"%gen-cache-missable?-setter", NULL},
  {"slot", NULL},
  {"%file-exists?", NULL},
  {"%class-slots-setter", NULL},
  {"@fill", &YOfill},
  {"ct", NULL},
  {"%iv", NULL},
  {"%open-output-file", NULL},
  {"subtype?", &YsubtypeQ},
  {"%define-slots", NULL},
  {"@len", NULL},
  {"df", NULL},
  {"%f<", NULL},
  {"gen-cache-singletons-setter", &Ygen_cache_singletons_setter},
  {"slot-value-setter", &Yslot_value_setter},
  {"type-error", &Ytype_error},
  {"%c=", NULL},
  {"%app-args", NULL},
  {"slot-owner-setter", &Yslot_owner_setter},
  {"@class-direct-slots", &YOclass_direct_slots},
  {"%define-repeated-structure", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%loc-off", "%loc-off"},
  {"set", "set"},
  {"%locative-value-setter", "%locative-value-setter"},
  {"%selt-setter", "%selt-setter"},
  {"%slot", "%slot"},
  {"export", "export"},
  {"<log>", "<log>"},
  {"<slot>", "<slot>"},
  {"%file-mtime", "%file-mtime"},
  {"%f*", "%f*"},
  {"unknown-function-error", "unknown-function-error"},
  {"%fi2f", "%fi2f"},
  {"%app-filename", "%app-filename"},
  {"%i-", "%i-"},
  {"@<", "@<"},
  {"sig-unification-vars", "sig-unification-vars"},
  {"class-direct-parents", "class-direct-parents"},
  {"$min-int", "$min-int"},
  {"not", "not"},
  {"slot-value", "slot-value"},
  {"<any>", "<any>"},
  {"%sp-reg", "%sp-reg"},
  {"%build-runtime-modules", "%build-runtime-modules"},
  {"gen-add-met", "gen-add-met"},
  {"seq", "seq"},
  {"%peek-char", "%peek-char"},
  {"<union>", "<union>"},
  {"fab-gen", "fab-gen"},
  {"isa?", "isa?"},
  {"error", "error"},
  {"quote", "quote"},
  {"may-isa?", "may-isa?"},
  {"fun-arity", "fun-arity"},
  {"%flo-bits", "%flo-bits"},
  {"%create-directory", "%create-directory"},
  {"<chr>", "<chr>"},
  {"%fb", "%fb"},
  {"slot-owner", "slot-owner"},
  {"fun-value", "fun-value"},
  {"sig-specs", "sig-specs"},
  {"<subclass>", "<subclass>"},
  {"%velt-setter", "%velt-setter"},
  {"wrong-number-arguments-error", "wrong-number-arguments-error"},
  {"%f/", "%f/"},
  {"%symbols", "%symbols"},
  {"fun", "fun"},
  {"%i<<", "%i<<"},
  {"%i&", "%i&"},
  {"tail-setter", "tail-setter"},
  {"slot-type", "slot-type"},
  {"%i=", "%i="},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"<singleton>", "<singleton>"},
  {"dg", "dg"},
  {"fun-sig-setter", "fun-sig-setter"},
  {"%ft", "%ft"},
  {"tail", "tail"},
  {"%eof-object", "%eof-object"},
  {"*boot-macro-names*", "*boot-macro-names*"},
  {"<tup>", "<tup>"},
  {"*restarts-ok?*", "*restarts-ok?*"},
  {"%invoke-debugger", "%invoke-debugger"},
  {"%i?", "%i?"},
  {"class-slots", "class-slots"},
  {"%i*", "%i*"},
  {"subtype?", "subtype?"},
  {"sorted-app-mets", "sorted-app-mets"},
  {"%untag", "%untag"},
  {"%file-type", "%file-type"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"@oelt", "@oelt"},
  {"%vec", "%vec"},
  {"fun-nary?", "fun-nary?"},
  {"%check-call-types", "%check-call-types"},
  {"%velt", "%velt"},
  {"if", "if"},
  {"%read-char", "%read-char"},
  {"%c<", "%c<"},
  {"%os-binding-value-setter", "%os-binding-value-setter"},
  {"%write-string", "%write-string"},
  {"type-elts", "type-elts"},
  {"slot-value-setter", "slot-value-setter"},
  {"add-slot", "add-slot"},
  {"%i>>", "%i>>"},
  {"%%macro", "%%macro"},
  {"%define-method", "%define-method"},
  {"%do-stack-frames", "%do-stack-frames"},
  {"%next-methods", "%next-methods"},
  {"file-opening-error", "file-opening-error"},
  {"<opts>", "<opts>"},
  {"sig-value", "sig-value"},
  {"class-name", "class-name"},
  {"dss", "dss"},
  {"use", "use"},
  {"isa", "isa"},
  {"met-app?", "met-app?"},
  {"<type>", "<type>"},
  {"<class>", "<class>"},
  {"fab-sym", "fab-sym"},
  {"let", "let"},
  {"ct-also", "ct-also"},
  {"%os-binding-value", "%os-binding-value"},
  {"object-parents", "object-parents"},
  {"fin", "fin"},
  {"%close-output-port", "%close-output-port"},
  {"%i<<<", "%i<<<"},
  {"fun-specs", "fun-specs"},
  {"%binding-name", "%binding-name"},
  {"*boot-macro-expanders*", "*boot-macro-expanders*"},
  {"<sym>", "<sym>"},
  {"%isa", "%isa"},
  {"sig-names", "sig-names"},
  {"%vnul", "%vnul"},
  {"%cu", "%cu"},
  {"%selt", "%selt"},
  {"<gen>", "<gen>"},
  {"object-slots", "object-slots"},
  {"fun-name-setter", "fun-name-setter"},
  {"%eq?", "%eq?"},
  {"<str>", "<str>"},
  {"lst", "lst"},
  {"fun-name", "fun-name"},
  {"class-parents", "class-parents"},
  {"find-setter", "find-setter"},
  {"*macros-ok?*", "*macros-ok?*"},
  {"%lu", "%lu"},
  {"<vec>", "<vec>"},
  {"%snul", "%snul"},
  {"type-class", "type-class"},
  {"nul", "nul"},
  {"%force-output", "%force-output"},
  {"%lb", "%lb"},
  {"%su", "%su"},
  {"%raw", "%raw"},
  {"%i^", "%i^"},
  {"<flat>", "<flat>"},
  {"<met>", "<met>"},
  {"%vlen", "%vlen"},
  {"%process-module", "%process-module"},
  {"fun-names", "fun-names"},
  {"dp", "dp"},
  {"try", "try"},
  {"<int>", "<int>"},
  {"*boot-macro-module-names*", "*boot-macro-module-names*"},
  {"sig-arity", "sig-arity"},
  {"%str", "%str"},
  {"%sp-reg-setter", "%sp-reg-setter"},
  {"%im", "%im"},
  {"dm", "dm"},
  {"rep", "rep"},
  {"find-getter", "find-getter"},
  {"%i+", "%i+"},
  {"%pair", "%pair"},
  {"%char-ready?", "%char-ready?"},
  {"object-class", "object-class"},
  {"%current-input-port", "%current-input-port"},
  {"<lst>", "<lst>"},
  {"loc", "loc"},
  {"fun-mets", "fun-mets"},
  {"%allocate-stack", "%allocate-stack"},
  {"%current-output-port", "%current-output-port"},
  {"dv", "dv"},
  {"<fun>", "<fun>"},
  {"mif", "mif"},
  {"@+", "@+"},
  {"%sb", "%sb"},
  {"<replace-generic-restart>", "<replace-generic-restart>"},
  {"$max-int", "$max-int"},
  {"<seq>", "<seq>"},
  {"%os-name", "%os-name"},
  {"%i>>>", "%i>>>"},
  {"handler-info-message", "handler-info-message"},
  {"slot-getter", "slot-getter"},
  {"%close-input-port", "%close-input-port"},
  {"%open-input-file", "%open-input-file"},
  {"<col>", "<col>"},
  {"%locative-value", "%locative-value"},
  {"nil", "nil"},
  {"class-direct-slots", "class-direct-slots"},
  {"<loc>", "<loc>"},
  {"fab-class", "fab-class"},
  {"lab", "lab"},
  {"%f+", "%f+"},
  {"%f=", "%f="},
  {"dc", "dc"},
  {"<sig>", "<sig>"},
  {"@olen", "@olen"},
  {"type-object", "type-object"},
  {"%i<", "%i<"},
  {"head-setter", "head-setter"},
  {"slot-setter", "slot-setter"},
  {"%bb", "%bb"},
  {"keyboard-interrupt", "keyboard-interrupt"},
  {"%ib", "%ib"},
  {"<flo>", "<flo>"},
  {"%raw-call", "%raw-call"},
  {"macro-expand", "macro-expand"},
  {"head", "head"},
  {"%iu", "%iu"},
  {"ds", "ds"},
  {"incongruent-method-error", "incongruent-method-error"},
  {"%write-char", "%write-char"},
  {"%loc-off-setter", "%loc-off-setter"},
  {"sig-nary?", "sig-nary?"},
  {"%cb", "%cb"},
  {"slot-init", "slot-init"},
  {"%c=", "%c="},
  {"%f<", "%f<"},
  {"%fu", "%fu"},
  {"sym-name", "sym-name"},
  {"%slen", "%slen"},
  {"bound?", "bound?"},
  {"<num>", "<num>"},
  {"%f-", "%f-"},
  {"%i!", "%i!"},
  {"class-direct-children", "class-direct-children"},
  {"%it/", "%it/"},
  {"quasiquote", "quasiquote"},
  {"slot", "slot"},
  {"%file-exists?", "%file-exists?"},
  {"ct", "ct"},
  {"%iv", "%iv"},
  {"%open-output-file", "%open-output-file"},
  {"df", "df"},
  {"type-error", "type-error"},
  {"%app-args", "%app-args"},
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

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
