/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: boot */

DEF(Yfun_code,"boot","fun-code");
DEF(YOgen_cache_singletons,"boot","@gen-cache-singletons");
DEF(YPflo_val,"boot","%flo-val");
DEF(YLnumG,"boot","<num>");
DEF(YLslotG,"boot","<slot>");
DEF(Yfun_code_setter,"boot","fun-code-setter");
DEF(Yclass_slot_len_setter,"boot","class-slot-len-setter");
DEF(Ychoose_methods,"boot","choose-methods");
DEF(YPflo_val_setter,"boot","%flo-val-setter");
DEF(Ynul,"boot","nul");
DEF(YOallQ,"boot","@all?");
DEF(Yfun_specs_setter,"boot","fun-specs-setter");
DEF(Yunexec,"boot","unexec");
DEF(YPcheck_typesQ,"boot","%check-types?");
DEF(YOdo_children,"boot","@do-children");
DEF(YLchrG,"boot","<chr>");
DEF(Yclass_gens,"boot","class-gens");
DEF(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
DEF(YOmemQ,"boot","@mem?");
DEF(YLoptsG,"boot","<opts>");
DEF(YOgen_cache_arg_pos_setter,"boot","@gen-cache-arg-pos-setter");
DEF(YPsnul,"boot","%snul");
DEF(YLunionG,"boot","<union>");
DEF(Yslot_getter,"boot","slot-getter");
DEF(YOisaQ,"boot","@isa?");
DEF(YLlogG,"boot","<log>");
DEF(Yfun_specs,"boot","fun-specs");
DEF(Yfun_same_metQ,"boot","fun-same-met?");
DEF(Ysig_specs,"boot","sig-specs");
DEF(Ytail,"boot","tail");
DEF(Yslot_getter_setter,"boot","slot-getter-setter");
DEF(YOrevX,"boot","@rev!");
DEF(Yslot_offset,"boot","slot-offset");
DEF(YLsubclassG,"boot","<subclass>");
DEF(YOprune_mets_by_type_at,"boot","@prune-mets-by-type-at");
DEF(YPadd_slot,"boot","%add-slot");
DEF(Ygen_lookup_miss,"boot","gen-lookup-miss");
DEF(Yfun_env,"boot","fun-env");
DEF(Yclass_direct_slots,"boot","class-direct-slots");
DEF(Yforward_class,"boot","forward-class");
DEF(Ysig_specs_setter,"boot","sig-specs-setter");
DEF(YOfill,"boot","@fill");
DEF(YLanyG,"boot","<any>");
DEF(YPdefine_method,"boot","%define-method");
DEF(Ytail_setter,"boot","tail-setter");
DEF(Yhandler_info_arguments,"boot","handler-info-arguments");
DEF(YLsingletonG,"boot","<singleton>");
DEF(Yfun_env_setter,"boot","fun-env-setter");
DEF(Yclass_direct_slots_setter,"boot","class-direct-slots-setter");
DEF(Yensure_fresh_object,"boot","ensure-fresh-object");
DEF(YOOemptyQ,"boot","@@empty?");
DEF(YLargsG,"boot","<args>");
DEF(Ygrid_refresh,"boot","grid-refresh");
DEF(Yclass_slot_len,"boot","class-slot-len");
DEF(YisaQ,"boot","isa?");
DEF(Yfun_names_setter,"boot","fun-names-setter");
DEF(Yfun_spec,"boot","fun-spec");
DEF(Ytype_object,"boot","type-object");
DEF(YOmay_isaQ,"boot","@may-isa?");
DEF(Yincongruent_method_error,"boot","incongruent-method-error");
DEF(YOmets_specs_at,"boot","@mets-specs-at");
DEF(Yslot_init,"boot","slot-init");
DEF(YOfind_key,"boot","@find-key");
DEF(Ytype_object_setter,"boot","type-object-setter");
DEF(Ygen_from_met,"boot","gen-from-met");
DEF(YTmacros_okQT,"boot","*macros-ok?*");
DEF(Ynot,"boot","not");
DEF(Ygrid_write,"boot","grid-write");
DEF(YPfinalize_slotsX,"boot","%finalize-slots!");
DEF(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
DEF(Yfun_names,"boot","fun-names");
DEF(Ysig_value,"boot","sig-value");
DEF(Ysym_name,"boot","sym-name");
DEF(Yslot_init_setter,"boot","slot-init-setter");
DEF(YPTstart_running_atT,"boot","%*start-running-at*");
DEF(Ygrid_read,"boot","grid-read");
DEF(Yclass_direct_children,"boot","class-direct-children");
DEF(YOcat2,"boot","@cat2");
DEF(Ysig_value_setter,"boot","sig-value-setter");
DEF(Ysym_name_setter,"boot","sym-name-setter");
DEF(YPPmacro,"boot","%%macro");
DEF(Yobject_slots,"boot","object-slots");
DEF(Ynul_slot,"boot","nul-slot");
DEF(Ynyi_isaQ,"boot","nyi-isa?");
DEF(YPadd_met,"boot","%add-met");
DEF(YLclassG,"boot","<class>");
DEF(YPcollect_direct_slots,"boot","%collect-direct-slots");
DEF(Yclass_direct_children_setter,"boot","class-direct-children-setter");
DEF(Ytype_error,"boot","type-error");
DEF(YDgen_cache_singletons_offset,"boot","$gen-cache-singletons-offset");
DEF(Yerror,"boot","error");
DEF(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
DEF(Yfind_setter,"boot","find-setter");
DEF(YLtypeG,"boot","<type>");
DEF(YDgetter_not_found,"boot","$getter-not-found");
DEF(Yclass_ordered_parents,"boot","class-ordered-parents");
DEF(Ysig_names,"boot","sig-names");
DEF(YOfun_mets,"boot","@fun-mets");
DEF(YOprecise_specQ,"boot","@precise-spec?");
DEF(YPfalse,"boot","%false");
DEF(Yslot_owner,"boot","slot-owner");
DEF(YOOEE,"boot","@@==");
DEF(YOsubtypeQ,"boot","@subtype?");
DEF(Ykeyboard_interrupt,"boot","keyboard-interrupt");
DEF(YPvnul,"boot","%vnul");
DEF(YOdo,"boot","@do");
DEF(Yopt_args,"boot","opt-args");
DEF(Ygrid_move,"boot","grid-move");
DEF(YLbodyG,"boot","<body>");
DEF(YPTused_symbols_too_earlyT,"boot","%*used-symbols-too-early*");
DEF(Ysig_names_setter,"boot","sig-names-setter");
DEF(Ygen_lookup_miss_1,"boot","gen-lookup-miss-1");
DEF(Yslot_owner_setter,"boot","slot-owner-setter");
DEF(Yorder_mets,"boot","order-mets");
DEF(Yunknown_function_error,"boot","unknown-function-error");
DEF(Yfapply,"boot","fapply");
DEF(YPearly_dispatch,"boot","%early-dispatch");
DEF(Yadd_slot,"boot","add-slot");
DEF(Yhead,"boot","head");
DEF(YOelt,"boot","@elt");
DEF(YLsymG,"boot","<sym>");
DEF(Ygrid_close,"boot","grid-close");
DEF(YOclass_parents,"boot","@class-parents");
DEF(Yfun_sig,"boot","fun-sig");
DEF(Yclass_direct_parents,"boot","class-direct-parents");
DEF(YOfun_value,"boot","@fun-value");
DEF(YOunion_specQ,"boot","@union-spec?");
DEF(Yrefab_class,"boot","refab-class");
DEF(Ysorted_app_mets_1,"boot","sorted-app-mets-1");
DEF(Ygrid_open,"boot","grid-open");
DEF(Yclass_direct_parents_setter,"boot","class-direct-parents-setter");
DEF(Yfab_sym,"boot","fab-sym");
DEF(YDgen_cache_classes_offset,"boot","$gen-cache-classes-offset");
DEF(Yfind_getter,"boot","find-getter");
DEF(YLparentsG,"boot","<parents>");
DEF(YLstrG,"boot","<str>");
DEF(Yobject_class,"boot","object-class");
DEF(YOfun_arity,"boot","@fun-arity");
DEF(YOsubclass_specQ,"boot","@subclass-spec?");
DEF(YLgenG,"boot","<gen>");
DEF(Yclass_forward,"boot","class-forward");
DEF(Ygen_lookup_miss_1_using,"boot","gen-lookup-miss-1-using");
DEF(Ynil,"boot","nil");
DEF(YPcall_next_method,"boot","%call-next-method");
DEF(Yfile_opening_error,"boot","file-opening-error");
DEF(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");
DEF(Yslot_type,"boot","slot-type");
DEF(YOfun_mets_setter,"boot","@fun-mets-setter");
DEF(YOtype_equalQ,"boot","@type-equal?");
DEF(Yorder_specs_default,"boot","order-specs-default");
DEF(Yorder_specs,"boot","order-specs");
DEF(Yclass_forward_setter,"boot","class-forward-setter");
DEF(Yfun_congruentQ,"boot","fun-congruent?");
DEF(Yfab_gen,"boot","fab-gen");
DEF(YOall2Q,"boot","@all2?");
DEF(Yhandler_info_message,"boot","handler-info-message");
DEF(YOalter,"boot","@alter");
DEF(YLvecG,"boot","<vec>");
DEF(Ysig_arity,"boot","sig-arity");
DEF(YOfun_naryQ,"boot","@fun-nary?");
DEF(YPPstr_dat,"boot","%%str-dat");
DEF(Yslot_type_setter,"boot","slot-type-setter");
DEF(YOpick,"boot","@pick");
DEF(Yfun_sig_setter,"boot","fun-sig-setter");
DEF(Yclass_gens_setter,"boot","class-gens-setter");
DEF(YPapply_next_method,"boot","%apply-next-method");
DEF(Yobject_parents,"boot","object-parents");
DEF(Yfun_cache,"boot","fun-cache");
DEF(Yclass_slots,"boot","class-slots");
DEF(YOgen_cache_arg_pos,"boot","@gen-cache-arg-pos");
DEF(Yfun_value_setter,"boot","fun-value-setter");
DEF(YOsingleton_specQ,"boot","@singleton-spec?");
DEF(YPint_val,"boot","%int-val");
DEF(Ysig_arity_setter,"boot","sig-arity-setter");
DEF(YPPstr_dat_setter,"boot","%%str-dat-setter");
DEF(YLflatG,"boot","<flat>");
DEF(Yhead_setter,"boot","head-setter");
DEF(Yupdate_instance_for_changed_class,"boot","update-instance-for-changed-class");
DEF(YLmetG,"boot","<met>");
DEF(Yfun_cache_setter,"boot","fun-cache-setter");
DEF(Yclass_slots_setter,"boot","class-slots-setter");
DEF(YPint_val_setter,"boot","%int-val-setter");
DEF(YOfun_specs,"boot","@fun-specs");
DEF(Ylst,"boot","lst");
DEF(YOmets_subclasses_at,"boot","@mets-subclasses-at");
DEF(YOreduce,"boot","@reduce");
DEF(YLtupG,"boot","<tup>");
DEF(Yfab_class,"boot","fab-class");
DEF(Yfun_value,"boot","fun-value");
DEF(YPsymbols,"boot","%symbols");
DEF(Ygen_cache_classes,"boot","gen-cache-classes");
DEF(Ytype_elts,"boot","type-elts");
DEF(YDdirect_object_class,"boot","$direct-object-class");
DEF(Yensure_singleton_cache,"boot","ensure-singleton-cache");
DEF(YLlstG,"boot","<lst>");
DEF(YOtup,"boot","@tup");
DEF(Ygen_cache_classes_setter,"boot","gen-cache-classes-setter");
DEF(YOfun_names,"boot","@fun-names");
DEF(Ymethod_accessor_offset,"boot","method-accessor-offset");
DEF(Yone_nil,"boot","one-nil");
DEF(Ysorted_app_mets,"boot","sorted-app-mets");
DEF(Ytype_elts_setter,"boot","type-elts-setter");
DEF(YPisa,"boot","%isa");
DEF(YLfunG,"boot","<fun>");
DEF(Ydel_class,"boot","del-class");
DEF(Yfun_name,"boot","fun-name");
DEF(Yclass_name,"boot","class-name");
DEF(YPloc_val,"boot","%loc-val");
DEF(YPsymbols_readyQ,"boot","%symbols-ready?");
DEF(YLseqG,"boot","<seq>");
DEF(YLintG_class,"boot","<int>-class");
DEF(Yfun_arity_setter,"boot","fun-arity-setter");
DEF(Yfun_name_setter,"boot","fun-name-setter");
DEF(Yclass_name_setter,"boot","class-name-setter");
DEF(YPloc_val_setter,"boot","%loc-val-setter");
DEF(YOlst,"boot","@lst");
DEF(YPslot_offset,"boot","%slot-offset");
DEF(YLcolG,"boot","<col>");
DEF(Yclass_ordered_slots,"boot","class-ordered-slots");
DEF(Yapply,"boot","apply");
DEF(YOgen_cache_classes_setter,"boot","@gen-cache-classes-setter");
DEF(Yclass_mets,"boot","class-mets");
DEF(Yfun_arity,"boot","fun-arity");
DEF(YOmets_singletons_at,"boot","@mets-singletons-at");
DEF(YPtrue,"boot","%true");
DEF(Yslot_setter,"boot","slot-setter");
DEF(Ymet_appQ,"boot","met-app?");
DEF(YDmissed_dispatch,"boot","$missed-dispatch");
DEF(Yclass_mets_setter,"boot","class-mets-setter");
DEF(YsubtypeQ,"boot","subtype?");
DEF(YOmap,"boot","@map");
DEF(Yslot_value_setter,"boot","slot-value-setter");
DEF(YLlocG,"boot","<loc>");
DEF(YLsigG,"boot","<sig>");
DEF(YOclass_direct_slots,"boot","@class-direct-slots");
DEF(YOfab,"boot","@fab");
DEF(Ysig_naryQ,"boot","sig-nary?");
DEF(YOgen_cache_classes,"boot","@gen-cache-classes");
DEF(YPPvec_dat,"boot","%%vec-dat");
DEF(Yslot_setter_setter,"boot","slot-setter-setter");
DEF(Yfun_mets,"boot","fun-mets");
DEF(YOmets_unspecialized_atQ,"boot","@mets-unspecialized-at?");
DEF(Yclass_parents,"boot","class-parents");
DEF(YPchr_val,"boot","%chr-val");
DEF(YPslot,"boot","%slot");
DEF(Ysig_naryQ_setter,"boot","sig-nary?-setter");
DEF(YPPvec_dat_setter,"boot","%%vec-dat-setter");
DEF(YLmetsG,"boot","<mets>");
DEF(YPpatch_early_generic,"boot","%patch-early-generic");
DEF(YLfloG,"boot","<flo>");
DEF(Yfun_mets_setter,"boot","fun-mets-setter");
DEF(Yclass_parents_setter,"boot","class-parents-setter");
DEF(Yfun_naryQ_setter,"boot","fun-nary?-setter");
DEF(YPchr_val_setter,"boot","%chr-val-setter");
DEF(YDtag_len,"boot","$tag-len");
DEF(YLgen_cacheG,"boot","<gen-cache>");
DEF(Ynyi_subtypeQ,"boot","nyi-subtype?");
DEF(YPmet_slot_len,"boot","%met-slot-len");
DEF(Yslot_value,"boot","slot-value");
DEF(YLenvG,"boot","<env>");
DEF(YLslotsG,"boot","<slots>");
DEF(Ygen_add_met,"boot","gen-add-met");
DEF(Ygen_cache_singletons,"boot","gen-cache-singletons");
DEF(YPdispatch,"boot","%dispatch");
DEF(YOgen_cache_singletons_setter,"boot","@gen-cache-singletons-setter");
DEF(Ytype_class,"boot","type-class");
DEF(YLsimple_handler_infoG,"boot","<simple-handler-info>");
DEF(YOdel_dups,"boot","@del-dups");
DEF(YTboot_macro_namesT,"boot","*boot-macro-names*");
DEF(YLintG,"boot","<int>");
DEF(Ymay_isaQ,"boot","may-isa?");
DEF(YOclassL,"boot","@class<");
DEF(Yfun_naryQ,"boot","fun-nary?");
DEF(Ygen_cache_singletons_setter,"boot","gen-cache-singletons-setter");
DEF(YOanyQ,"boot","@any?");
DEF(Ytype_class_setter,"boot","type-class-setter");
DEF(YOspecd_args,"boot","@specd-args");
DEF(YLspecsG,"boot","<specs>");
DEF(YDtag_msk,"boot","$tag-msk");
DEF(YTrestarts_okQT,"boot","*restarts-ok?*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_128);
DEFLIT(lit_37);
DEFLIT(lit_348);
DEFLIT(lit_332);
DEFLIT(lit_357);
DEFLIT(lit_170);
DEFLIT(lit_215);
DEFLIT(lit_216);
DEFLIT(lit_63);
DEFLIT(lit_303);
DEFLIT(lit_40);
DEFLIT(lit_346);
DEFLIT(lit_33);
DEFLIT(lit_71);
DEFLIT(lit_86);
DEFLIT(lit_125);
DEFLIT(lit_79);
DEFLIT(lit_110);
DEFLIT(lit_331);
DEFLIT(lit_103);
DEFLIT(lit_56);
DEFLIT(lit_300);
DEFLIT(lit_201);
DEFLIT(lit_197);
DEFLIT(lit_133);
DEFLIT(lit_350);
DEFLIT(lit_312);
DEFLIT(lit_282);
DEFLIT(lit_247);
DEFLIT(lit_274);
DEFLIT(lit_345);
DEFLIT(lit_117);
DEFLIT(lit_327);
DEFLIT(lit_70);
DEFLIT(lit_299);
DEFLIT(lit_94);
DEFLIT(lit_137);
DEFLIT(lit_127);
DEFLIT(lit_262);
DEFLIT(lit_263);
DEFLIT(lit_85);
DEFLIT(lit_349);
DEFLIT(lit_169);
DEFLIT(lit_164);
DEFLIT(lit_55);
DEFLIT(lit_149);
DEFLIT(lit_293);
DEFLIT(lit_1);
DEFLIT(lit_175);
DEFLIT(lit_251);
DEFLIT(lit_233);
DEFLIT(lit_23);
DEFLIT(lit_276);
DEFLIT(lit_321);
DEFLIT(lit_69);
DEFLIT(lit_14);
DEFLIT(lit_93);
DEFLIT(lit_46);
DEFLIT(lit_223);
DEFLIT(lit_15);
DEFLIT(lit_245);
DEFLIT(lit_285);
DEFLIT(lit_124);
DEFLIT(lit_168);
DEFLIT(lit_30);
DEFLIT(lit_22);
DEFLIT(lit_305);
DEFLIT(lit_360);
DEFLIT(lit_8);
DEFLIT(lit_355);
DEFLIT(lit_187);
DEFLIT(lit_261);
DEFLIT(lit_257);
DEFLIT(lit_319);
DEFLIT(lit_335);
DEFLIT(lit_0);
DEFLIT(lit_76);
DEFLIT(lit_163);
DEFLIT(lit_217);
DEFLIT(lit_100);
DEFLIT(lit_148);
DEFLIT(lit_45);
DEFLIT(lit_181);
DEFLIT(lit_174);
DEFLIT(lit_290);
DEFLIT(lit_268);
DEFLIT(lit_150);
DEFLIT(lit_318);
DEFLIT(lit_296);
DEFLIT(lit_29);
DEFLIT(lit_304);
DEFLIT(lit_7);
DEFLIT(lit_273);
DEFLIT(lit_195);
DEFLIT(lit_271);
DEFLIT(lit_344);
DEFLIT(lit_340);
DEFLIT(lit_334);
DEFLIT(lit_298);
DEFLIT(lit_167);
DEFLIT(lit_308);
DEFLIT(lit_20);
DEFLIT(lit_99);
DEFLIT(lit_52);
DEFLIT(lit_143);
DEFLIT(lit_306);
DEFLIT(lit_244);
DEFLIT(lit_267);
DEFLIT(lit_256);
DEFLIT(lit_279);
DEFLIT(lit_123);
DEFLIT(lit_162);
DEFLIT(lit_157);
DEFLIT(lit_66);
DEFLIT(lit_207);
DEFLIT(lit_199);
DEFLIT(lit_136);
DEFLIT(lit_132);
DEFLIT(lit_241);
DEFLIT(lit_36);
DEFLIT(lit_250);
DEFLIT(lit_313);
DEFLIT(lit_239);
DEFLIT(lit_82);
DEFLIT(lit_115);
DEFLIT(lit_106);
DEFLIT(lit_6);
DEFLIT(lit_277);
DEFLIT(lit_194);
DEFLIT(lit_270);
DEFLIT(lit_180);
DEFLIT(lit_264);
DEFLIT(lit_358);
DEFLIT(lit_297);
DEFLIT(lit_19);
DEFLIT(lit_65);
DEFLIT(lit_359);
DEFLIT(lit_142);
DEFLIT(lit_89);
DEFLIT(lit_42);
DEFLIT(lit_229);
DEFLIT(lit_35);
DEFLIT(lit_220);
DEFLIT(lit_88);
DEFLIT(lit_237);
DEFLIT(lit_81);
DEFLIT(lit_361);
DEFLIT(lit_326);
DEFLIT(lit_105);
DEFLIT(lit_58);
DEFLIT(lit_206);
DEFLIT(lit_284);
DEFLIT(lit_354);
DEFLIT(lit_320);
DEFLIT(lit_255);
DEFLIT(lit_265);
DEFLIT(lit_243);
DEFLIT(lit_51);
DEFLIT(lit_122);
DEFLIT(lit_114);
DEFLIT(lit_72);
DEFLIT(lit_96);
DEFLIT(lit_291);
DEFLIT(lit_193);
DEFLIT(lit_41);
DEFLIT(lit_204);
DEFLIT(lit_260);
DEFLIT(lit_339);
DEFLIT(lit_249);
DEFLIT(lit_2);
DEFLIT(lit_230);
DEFLIT(lit_228);
DEFLIT(lit_57);
DEFLIT(lit_13);
DEFLIT(lit_362);
DEFLIT(lit_141);
DEFLIT(lit_209);
DEFLIT(lit_131);
DEFLIT(lit_179);
DEFLIT(lit_173);
DEFLIT(lit_351);
DEFLIT(lit_236);
DEFLIT(lit_347);
DEFLIT(lit_325);
DEFLIT(lit_160);
DEFLIT(lit_338);
DEFLIT(lit_152);
DEFLIT(lit_95);
DEFLIT(lit_48);
DEFLIT(lit_283);
DEFLIT(lit_323);
DEFLIT(lit_182);
DEFLIT(lit_222);
DEFLIT(lit_186);
DEFLIT(lit_266);
DEFLIT(lit_196);
DEFLIT(lit_121);
DEFLIT(lit_171);
DEFLIT(lit_32);
DEFLIT(lit_27);
DEFLIT(lit_214);
DEFLIT(lit_213);
DEFLIT(lit_62);
DEFLIT(lit_280);
DEFLIT(lit_192);
DEFLIT(lit_254);
DEFLIT(lit_324);
DEFLIT(lit_205);
DEFLIT(lit_286);
DEFLIT(lit_235);
DEFLIT(lit_113);
DEFLIT(lit_311);
DEFLIT(lit_102);
DEFLIT(lit_91);
DEFLIT(lit_5);
DEFLIT(lit_140);
DEFLIT(lit_135);
DEFLIT(lit_185);
DEFLIT(lit_24);
DEFLIT(lit_12);
DEFLIT(lit_28);
DEFLIT(lit_333);
DEFLIT(lit_107);
DEFLIT(lit_238);
DEFLIT(lit_144);
DEFLIT(lit_341);
DEFLIT(lit_31);
DEFLIT(lit_159);
DEFLIT(lit_156);
DEFLIT(lit_151);
DEFLIT(lit_61);
DEFLIT(lit_307);
DEFLIT(lit_161);
DEFLIT(lit_253);
DEFLIT(lit_178);
DEFLIT(lit_337);
DEFLIT(lit_84);
DEFLIT(lit_234);
DEFLIT(lit_77);
DEFLIT(lit_166);
DEFLIT(lit_26);
DEFLIT(lit_101);
DEFLIT(lit_54);
DEFLIT(lit_147);
DEFLIT(lit_191);
DEFLIT(lit_38);
DEFLIT(lit_343);
DEFLIT(lit_317);
DEFLIT(lit_248);
DEFLIT(lit_90);
DEFLIT(lit_288);
DEFLIT(lit_112);
DEFLIT(lit_97);
DEFLIT(lit_224);
DEFLIT(lit_68);
DEFLIT(lit_11);
DEFLIT(lit_4);
DEFLIT(lit_92);
DEFLIT(lit_108);
DEFLIT(lit_109);
DEFLIT(lit_328);
DEFLIT(lit_116);
DEFLIT(lit_225);
DEFLIT(lit_83);
DEFLIT(lit_120);
DEFLIT(lit_165);
DEFLIT(lit_3);
DEFLIT(lit_18);
DEFLIT(lit_53);
DEFLIT(lit_203);
DEFLIT(lit_242);
DEFLIT(lit_219);
DEFLIT(lit_130);
DEFLIT(lit_177);
DEFLIT(lit_314);
DEFLIT(lit_200);
DEFLIT(lit_352);
DEFLIT(lit_356);
DEFLIT(lit_25);
DEFLIT(lit_67);
DEFLIT(lit_212);
DEFLIT(lit_146);
DEFLIT(lit_139);
DEFLIT(lit_44);
DEFLIT(lit_208);
DEFLIT(lit_75);
DEFLIT(lit_78);
DEFLIT(lit_269);
DEFLIT(lit_111);
DEFLIT(lit_87);
DEFLIT(lit_60);
DEFLIT(lit_155);
DEFLIT(lit_10);
DEFLIT(lit_302);
DEFLIT(lit_184);
DEFLIT(lit_176);
DEFLIT(lit_259);
DEFLIT(lit_330);
DEFLIT(lit_226);
DEFLIT(lit_119);
DEFLIT(lit_292);
DEFLIT(lit_74);
DEFLIT(lit_17);
DEFLIT(lit_98);
DEFLIT(lit_202);
DEFLIT(lit_190);
DEFLIT(lit_134);
DEFLIT(lit_246);
DEFLIT(lit_342);
DEFLIT(lit_252);
DEFLIT(lit_218);
DEFLIT(lit_315);
DEFLIT(lit_329);
DEFLIT(lit_153);
DEFLIT(lit_59);
DEFLIT(lit_211);
DEFLIT(lit_145);
DEFLIT(lit_189);
DEFLIT(lit_129);
DEFLIT(lit_39);
DEFLIT(lit_172);
DEFLIT(lit_294);
DEFLIT(lit_275);
DEFLIT(lit_43);
DEFLIT(lit_281);
DEFLIT(lit_47);
DEFLIT(lit_289);
DEFLIT(lit_73);
DEFLIT(lit_295);
DEFLIT(lit_154);
DEFLIT(lit_9);
DEFLIT(lit_50);
DEFLIT(lit_231);
DEFLIT(lit_278);
DEFLIT(lit_316);
DEFLIT(lit_21);
DEFLIT(lit_258);
DEFLIT(lit_336);
DEFLIT(lit_227);
DEFLIT(lit_232);
DEFLIT(lit_118);
DEFLIT(lit_240);
DEFLIT(lit_322);
DEFLIT(lit_158);
DEFLIT(lit_16);
DEFLIT(lit_64);
DEFLIT(lit_301);
DEFLIT(lit_138);
DEFLIT(lit_221);
DEFLIT(lit_183);
DEFLIT(lit_34);
DEFLIT(lit_310);
DEFLIT(lit_272);
DEFLIT(lit_126);
DEFLIT(lit_80);
DEFLIT(lit_353);
DEFLIT(lit_198);
DEFLIT(lit_104);
DEFLIT(lit_309);
DEFLIT(lit_210);
DEFLIT(lit_49);
DEFLIT(lit_287);
DEFLIT(lit_188);

/* FUNCTIONS: */

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
extern P YPsig (P,P,P,P,P);
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
LOCFOR(fun_lookup_84);
LOCFOR(fun_85);
LOCFOR(fun_lookup_86);
FUNFOR(Yfab_sym);
LOCFOR(fun_loop_88);
extern P YPrevX (P);
LOCFOR(fun_coly_90);
LOCFOR(fun_colx_91);
extern P YPcat2 (P,P);
extern P YPflo_dat_setter (P,P);
extern P YPflo_dat (P);
extern P YPflo (P);
extern P YPfb (P);
extern P YPfu (P);
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
LOCFOR(fun_loop_129);
FUNFOR(YPslot_offset);
FUNFOR(YPearly_dispatch);
FUNFOR(YPadd_met);
FUNFOR(YPadd_slot);
LOCFOR(fun_134);
LOCFOR(fun_135);
LOCFOR(fun_136);
LOCFOR(fun_137);
LOCFOR(fun_138);
LOCFOR(fun_139);
LOCFOR(fun_140);
LOCFOR(fun_141);
LOCFOR(fun_142);
LOCFOR(fun_143);
LOCFOR(fun_144);
LOCFOR(fun_145);
LOCFOR(fun_146);
LOCFOR(fun_147);
LOCFOR(fun_148);
LOCFOR(fun_149);
LOCFOR(fun_150);
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
LOCFOR(fun_fnd_272);
FUNFOR(YOallQ);
LOCFOR(fun_fnd_274);
FUNFOR(YOall2Q);
LOCFOR(fun_fnd_276);
FUNFOR(YOelt);
LOCFOR(fun_loop_278);
FUNFOR(YOfill);
LOCFOR(fun_fnd_280);
FUNFOR(YOanyQ);
extern P YOpair (P,P);
extern P YOadd (P,P);
extern P YOadd_new (P,P);
LOCFOR(fun_do_285);
FUNFOR(YOmap);
LOCFOR(fun_do_287);
FUNFOR(YOpick);
LOCFOR(fun_do_289);
FUNFOR(YOdo);
LOCFOR(fun_in_291);
FUNFOR(YOalter);
LOCFOR(fun_fab_293);
FUNFOR(YOfab);
LOCFOR(fun_red_295);
FUNFOR(YOreduce);
FUNFOR(YOcat2);
LOCFOR(fun_fnd_298);
FUNFOR(YOfind_key);
LOCFOR(fun_300);
FUNFOR(YOmemQ);
LOCFOR(fun_302);
FUNFOR(YOdel_dups);
FUNFOR(YOlst);
FUNFOR(YOfun_names);
FUNFOR(YOfun_specs);
FUNFOR(YOfun_naryQ);
FUNFOR(YOfun_arity);
FUNFOR(YOfun_value);
FUNFOR(YOfun_mets);
FUNFOR(YOfun_mets_setter);
FUNFOR(Yfun_spec);
FUNFOR(Yfun_same_metQ);
FUNFOR(Yfun_congruentQ);
LOCFOR(fun_col_315);
LOCFOR(fun_lop_316);
LOCFOR(fun_317);
LOCFOR(fun_318);
LOCFOR(fun_319);
LOCFOR(fun_320);
FUNFOR(Ygen_add_met);
extern P YOclass_inQ (P,P);
extern P YOsubclassQ (P,P);
extern P YOclass_isaQ (P,P);
LOCFOR(fun_325);
extern P YOunion_isaQ (P,P);
extern P YPisaQ (P,P);
extern P YOsingleton_isaQ (P,P);
extern P YOsubclass_isaQ (P,P);
FUNFOR(YOisaQ);
LOCFOR(fun_find_331);
FUNFOR(YOclassL);
FUNFOR(YOtype_equalQ);
LOCFOR(fun_334);
LOCFOR(fun_335);
FUNFOR(YOsubtypeQ);
LOCFOR(fun_loop_337);
FUNFOR(YOmay_isaQ);
FUNFOR(Yorder_specs_default);
FUNFOR(Yorder_specs);
LOCFOR(fun_loop_341);
FUNFOR(Yorder_mets);
LOCFOR(fun_insert_343);
LOCFOR(fun_check_subsequent_ambiguities_344);
LOCFOR(fun_loop_345);
LOCFOR(fun_precedes_allQ_346);
LOCFOR(fun_loop_347);
LOCFOR(fun_make_ambiguous_348);
LOCFOR(fun_loop_349);
FUNFOR(Ysorted_app_mets_1);
LOCFOR(fun_loop_351);
FUNFOR(Ymet_appQ);
LOCFOR(fun_col_353);
FUNFOR(Ysorted_app_mets);
LOCFOR(fun_col_355);
FUNFOR(Yopt_args);
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
LOCFOR(fun_368);
FUNFOR(YOmets_unspecialized_atQ);
LOCFOR(fun_370);
FUNFOR(YOprune_mets_by_type_at);
LOCFOR(fun_372);
FUNFOR(YOmets_specs_at);
LOCFOR(fun_374);
FUNFOR(YOmets_singletons_at);
LOCFOR(fun_376);
FUNFOR(YOmets_subclasses_at);
LOCFOR(fun_loop_378);
FUNFOR(Ygen_lookup_miss_1_using);
LOCFOR(fun_copy_380);
FUNFOR(YOspecd_args);
LOCFOR(fun_loop_382);
FUNFOR(Yensure_singleton_cache);
FUNFOR(Ygen_lookup_miss_1);
FUNFOR(Ygen_lookup_miss);
extern P Ygen_lookup (P,P);
extern P Yslot_value_at (P,P);
extern P Yslot_value_at_setter (P,P,P);
extern P Ygen_lookup_1_using (P,P,P,P,P,P,P,P,P,P,P);
extern P Ygen_lookup_1 (P,P,P,P,P,P);
FUNFOR(Ychoose_methods);
FUNFOR(YPdispatch);
FUNFOR(YPpatch_early_generic);
FUNFOR(Yapply);
FUNFOR(YPapply_next_method);
FUNFOR(YPcall_next_method);
FUNFOR(Yfapply);
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
FUNFOR(Yobject_class);
FUNFOR(YOclass_parents);
LOCFOR(fun_remove_next_410);
LOCFOR(fun_unconstrained_class_in_parents_411);
LOCFOR(fun_p_unconstrained_inQ_412);
LOCFOR(fun_p_in_and_unconstrained_inQ_413);
LOCFOR(fun_unconstrained_class_414);
LOCFOR(fun_merge_lists_415);
FUNFOR(Yclass_ordered_parents);
FUNFOR(YOclass_direct_slots);
FUNFOR(Yclass_ordered_slots);
FUNFOR(Ydel_class);
LOCFOR(fun_420);
FUNFOR(Yfab_class);
FUNFOR(Yrefab_class);
FUNFOR(Yobject_slots);
FUNFOR(Yobject_parents);
FUNFOR(Yensure_fresh_object);
LOCFOR(fun_loop_426);
FUNFOR(Yslot_offset);
FUNFOR(Yslot_value);
FUNFOR(Yslot_value_setter);
LOCFOR(fun_loop_430);
FUNFOR(YPisa);
LOCFOR(fun_loop_432);
FUNFOR(Yfind_getter);
LOCFOR(fun_loop_434);
FUNFOR(Yfind_setter);
LOCFOR(fun_436);
FUNFOR(Yforward_class);
LOCFOR(fun_visit_438);
FUNFOR(YOdo_children);
LOCFOR(fun_440);
FUNFOR(YPslot);
extern P YPupdate_instance_for_changed_class (P);
FUNFOR(Yupdate_instance_for_changed_class);
FUNFOR(Yfab_gen);
LOCFOR(fun_445);
FUNFOR(Ygen_from_met);
FUNFOR(YPdefine_method);
FUNFOR(Yunexec);
LOCFOR(fun_subtypeQ_449);
LOCFOR(fun_isaQ_450);
LOCFOR(fun_may_isaQ_451);
extern P YPmacro (P,P,P);
FUNFOR(Ygrid_open);
FUNFOR(Ygrid_close);
FUNFOR(Ygrid_move);
FUNFOR(Ygrid_read);
FUNFOR(Ygrid_write);
FUNFOR(Ygrid_refresh);
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

/* FUNCTION CODES: */

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
  P protoF1;
  P T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
loop:
  T1 = (P)YPobject_of(CHKREF(YLclassG),(P)10);
  protoF1 = T1;
  (P)YPslot_elt_setter(class_forward_,protoF1,(P)9);
  (P)YPslot_elt_setter(class_mets_,protoF1,(P)8);
  (P)YPslot_elt_setter(class_gens_,protoF1,(P)7);
  (P)YPslot_elt_setter(class_direct_children_,protoF1,(P)6);
  (P)YPslot_elt_setter(class_slots_,protoF1,(P)5);
  (P)YPslot_elt_setter(class_parents_,protoF1,(P)4);
  (P)YPslot_elt_setter(class_direct_slots_,protoF1,(P)3);
  (P)YPslot_elt_setter(class_direct_parents_,protoF1,(P)2);
  (P)YPslot_elt_setter(class_name_,protoF1,(P)1);
  (P)YPslot_elt_setter(class_slot_len_,protoF1,(P)0);
  T0 = protoF1;
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
  P protoF2;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(CHKREF(YLsingletonG),(P)1);
  protoF2 = T1;
  (P)YPslot_elt_setter(type_object_,protoF2,(P)0);
  T0 = protoF2;
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
  P protoF3;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(CHKREF(YLsubclassG),(P)1);
  protoF3 = T1;
  (P)YPslot_elt_setter(type_class_,protoF3,(P)0);
  T0 = protoF3;
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
  P protoF4;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(CHKREF(YLunionG),(P)1);
  protoF4 = T1;
  (P)YPslot_elt_setter(type_elts_,protoF4,(P)0);
  T0 = protoF4;
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
  P protoF5;
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPobject_of(CHKREF(YLlstG),(P)2);
  protoF5 = T1;
  (P)YPslot_elt_setter(tail_,protoF5,(P)1);
  (P)YPslot_elt_setter(head_,protoF5,(P)0);
  T0 = protoF5;
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
  T4 = (P)YPemptyQ(x_);
  if (T4 != YPfalse) {
    T0 = (P)0;
  } else {
    T3 = (P)YPtail(x_);
    T2 = (P)YPPlen(T3);
    T1 = (P)YPiA(T2,(P)1);
    T0 = T1;
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

P YPsig(P sig_names_,P sig_specs_,P sig_naryQ_,P sig_arity_,P sig_value_) {
  P protoF6;
  P T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T1 = (P)YPobject_of(CHKREF(YLsigG),(P)5);
  protoF6 = T1;
  (P)YPslot_elt_setter(sig_value_,protoF6,(P)4);
  (P)YPslot_elt_setter(sig_arity_,protoF6,(P)3);
  (P)YPslot_elt_setter(sig_naryQ_,protoF6,(P)2);
  (P)YPslot_elt_setter(sig_specs_,protoF6,(P)1);
  (P)YPslot_elt_setter(sig_names_,protoF6,(P)0);
  T0 = protoF6;
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
  P protoF7;
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  T1 = (P)YPobject_of(CHKREF(YLmetG),(P)4);
  protoF7 = T1;
  (P)YPslot_elt_setter(met_env_,protoF7,(P)3);
  (P)YPslot_elt_setter(met_sig_,protoF7,(P)2);
  (P)YPslot_elt_setter(met_name_,protoF7,(P)1);
  (P)YPslot_elt_setter(met_code_,protoF7,(P)0);
  T0 = protoF7;
  return T0;
}

INLINE P YPtag_bits(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPiB(x_,CHKREF(YDtag_msk));
  return T0;
}

INLINE P YPtag(P x_,P t_) {
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPiLL(x_,CHKREF(YDtag_len));
  T0 = (P)YPiv(T1,t_);
  return T0;
}

INLINE P YPuntag(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPiGG(x_,CHKREF(YDtag_len));
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
  P tagF8;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = (P)YPtag_bits(x_);
  tagF8 = T6;
  T5 = (P)YPiE(tagF8,(P)0);
  T4 = (P)YPbb(T5);
  if (T4 != YPfalse) {
    T3 = (P)YPobject_class(x_);
    T1 = T3;
  } else {
    T2 = (P)YPelt(CHKREF(YDdirect_object_class),tagF8);
    T1 = T2;
  }
  T0 = T1;
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
  T0 = (P)YPtag(x_,(P)3);
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
  T0 = (P)YPuntag(x_);
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
  T3 = (P)YPiE(len_,(P)0);
  T2 = (P)YPbb(T3);
  if (T2 != YPfalse) {
    T0 = CHKREF(YPsnul);
  } else {
    T1 = (P)YPstrX(len_);
    T0 = T1;
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
  T3 = (P)YPiE(len_,(P)0);
  T2 = (P)YPbb(T3);
  if (T2 != YPfalse) {
    T0 = CHKREF(YPvnul);
  } else {
    T1 = (P)YPvecX(len_);
    T0 = T1;
  }
  return T0;
}

P YPstr_eqQ_loop(P s1_,P s2_,P len_,P i_) {
  P tmpF12;
  P c2F11;
  P c1F10;
  P tmpF9;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T13 = (P)YPiE(i_,len_);
  T12 = (P)YPbb(T13);
  tmpF9 = T12;
  if (tmpF9 != YPfalse) {
    T1 = tmpF9;
  } else {
    T11 = (P)YPselt(s1_,i_);
    c1F10 = T11;
    T10 = (P)YPselt(s2_,i_);
    c2F11 = T10;
    T9 = (P)YPcE(c1F10,c2F11);
    T8 = (P)YPbb(T9);
    tmpF12 = T8;
    if (tmpF12 != YPfalse) {
      T7 = (P)YPiA(i_,(P)1);
      a1 = s1_;
      a2 = s2_;
      a3 = len_;
      a4 = T7;
      s1_ = a1;
      s2_ = a2;
      len_ = a3;
      i_ = a4;
      goto loop;
      T5 = T6;
    } else {
      T5 = YPfalse;
    }
    T4 = T5;
    T3 = T4;
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  return T0;
}

P YPstr_eqQ(P s1_,P s2_) {
  P tmpF14;
  P lenF13;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = (P)YPslen(s1_);
  lenF13 = T7;
  T6 = (P)YPslen(s2_);
  T5 = (P)YPiE(lenF13,T6);
  T4 = (P)YPbb(T5);
  tmpF14 = T4;
  if (tmpF14 != YPfalse) {
    T3 = (P)YPstr_eqQ_loop(s1_,s2_,lenF13,(P)0);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = T1;
  return T0;
}

P YPcompute_parents(P parent_) {
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = (P)YPeqQ(parent_,CHKREF(YLanyG));
  T6 = (P)YPbb(T7);
  if (T6 != YPfalse) {
    T5 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
    T0 = T5;
  } else {
    T4 = (P)YPclass_direct_parents(parent_);
    T3 = (P)YPhead(T4);
    T2 = (P)YPcompute_parents(T3);
    T1 = (P)YPpair(parent_,T2);
    T0 = T1;
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
    T3 = (P)YPsb(raw_str_);
    T2 = CALL1(CHKREF(Yfab_sym),T3);
    T0 = T2;
  } else {
    T1 = YPTused_symbols_too_earlyT = YPtrue;
    T0 = T1;
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
  P protoF15;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(CHKREF(YLsymG),(P)1);
  protoF15 = T1;
  (P)YPslot_elt_setter(sym_nam_,protoF15,(P)0);
  T0 = protoF15;
  return T0;
}

FUNCODEDEF(fun_lookup_84) {
  ARG(s_, 0);
  P symF17;
  P symF16;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = (P)YPemptyQ(s_);
  if (T11 != YPfalse) {
    T10 = (P)YPsym(FREEREF(1));
    symF17 = T10;
    T9 = (P)YPpair(symF17,CHKREF(YPsymbols));
    YPsymbols = T9;
    T8 = symF17;
    T0 = T8;
  } else {
    T7 = (P)YPhead(s_);
    symF16 = T7;
    T6 = (P)YPsym_nam(symF16);
    T5 = (P)YPstr_eqQ(T6,FREEREF(1));
    if (T5 != YPfalse) {
      T2 = symF16;
    } else {
      T4 = (P)YPtail(s_);
      a1 = T4;
      s_ = a1;
      goto loop;
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  ARG(name_, 0);
  P lookupF18;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_lookup_84,2);
  lookupF18 = T2;
  FUNINIT(lookupF18, 2,lookupF18,name_);
  T1 = KCALL1(lookupF18,CHKREF(YPsymbols));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_lookup_86) {
  ARG(s_, 0);
  P symF20;
  P symF19;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = (P)YPemptyQ(s_);
  if (T11 != YPfalse) {
    T10 = (P)YPsym(FREEREF(1));
    symF20 = T10;
    T9 = (P)YPpair(symF20,CHKREF(YPsymbols));
    YPsymbols = T9;
    T8 = symF20;
    T0 = T8;
  } else {
    T7 = (P)YPhead(s_);
    symF19 = T7;
    T6 = (P)YPsym_nam(symF19);
    T5 = (P)YPstr_eqQ(T6,FREEREF(1));
    if (T5 != YPfalse) {
      T2 = symF19;
    } else {
      T4 = (P)YPtail(s_);
      a1 = T4;
      s_ = a1;
      goto loop;
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(Yfab_sym) {
  ARG(name_, 0);
  P lookupF21;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_lookup_86,2);
  lookupF21 = T2;
  FUNINIT(lookupF21, 2,lookupF21,name_);
  T1 = KCALL1(lookupF21,CHKREF(YPsymbols));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_88) {
  ARG(r_, 0);
  ARG(l_, 1);
  P tF22;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = (P)YPemptyQ(l_);
  if (T4 != YPfalse) {
    T0 = r_;
  } else {
    T3 = (P)YPtail(l_);
    tF22 = T3;
    (P)YPtail_setter(r_,l_);
    a1 = tF22;
    a2 = l_;
    l_ = a1;
    r_ = a2;
    goto loop;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

P YPrevX(P c_) {
  P loopF23;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_88,1);
  loopF23 = T2;
  FUNINIT(loopF23, 1,loopF23);
  T1 = KCALL2(loopF23,c_,Ynil);
  T0 = T1;
  return T0;
}

FUNCODEDEF(fun_coly_90) {
  ARG(y_, 0);
  ARG(lxy_, 1);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = (P)YPemptyQ(y_);
  if (T6 != YPfalse) {
    T5 = (P)YPrevX(lxy_);
    T0 = T5;
  } else {
    T4 = (P)YPhead(y_);
    T3 = (P)YPpair(T4,lxy_);
    T2 = (P)YPtail(y_);
    a1 = T3;
    a2 = T2;
    lxy_ = a1;
    y_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_colx_91) {
  ARG(x_, 0);
  ARG(lx_, 1);
  P colyF24;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = (P)YPemptyQ(x_);
  if (T8 != YPfalse) {
    T7 = FUNSHELL(1,fun_coly_90,1);
    colyF24 = T7;
    FUNINIT(colyF24, 1,colyF24);
    T6 = KCALL2(colyF24,lx_,FREEREF(1));
    T5 = T6;
    T0 = T5;
  } else {
    T4 = (P)YPhead(x_);
    T3 = (P)YPpair(T4,lx_);
    T2 = (P)YPtail(x_);
    a1 = T3;
    a2 = T2;
    lx_ = a1;
    x_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

P YPcat2(P x_,P y_) {
  P colxF25;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_colx_91,2);
  colxF25 = T2;
  FUNINIT(colxF25, 2,colxF25,y_);
  T1 = KCALL2(colxF25,CHKREF(Ynil),x_);
  T0 = T1;
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
  P protoF26;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(CHKREF(YLfloG),(P)1);
  protoF26 = T1;
  (P)YPslot_elt_setter(flo_dat_,protoF26,(P)0);
  T0 = protoF26;
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
  P protoF27;
  P T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T1 = (P)YPobject_of(CHKREF(YLslotG),(P)5);
  protoF27 = T1;
  (P)YPslot_elt_setter(slot_init_,protoF27,(P)4);
  (P)YPslot_elt_setter(slot_type_,protoF27,(P)3);
  (P)YPslot_elt_setter(slot_setter_,protoF27,(P)2);
  (P)YPslot_elt_setter(slot_getter_,protoF27,(P)1);
  (P)YPslot_elt_setter(slot_owner_,protoF27,(P)0);
  T0 = protoF27;
  return T0;
}

P YPgen_cache_missableQ_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPgen_cache_missableQ(P x_) {
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
  P protoF28;
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  T1 = (P)YPobject_of(CHKREF(YLgen_cacheG),(P)4);
  protoF28 = T1;
  (P)YPslot_elt_setter(gen_cache_classes_,protoF28,(P)3);
  (P)YPslot_elt_setter(gen_cache_singletons_,protoF28,(P)2);
  (P)YPslot_elt_setter(gen_cache_arg_pos_,protoF28,(P)1);
  (P)YPslot_elt_setter(gen_cache_missableQ_,protoF28,(P)0);
  T0 = protoF28;
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
  P protoF29;
  P T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T1 = (P)YPobject_of(CHKREF(YLgenG),(P)5);
  protoF29 = T1;
  (P)YPslot_elt_setter(fun_cache_,protoF29,(P)4);
  (P)YPslot_elt_setter(gen_mets_,protoF29,(P)3);
  (P)YPslot_elt_setter(gen_sig_,protoF29,(P)2);
  (P)YPslot_elt_setter(gen_name_,protoF29,(P)1);
  (P)YPslot_elt_setter(gen_code_,protoF29,(P)0);
  T0 = protoF29;
  return T0;
}

FUNCODEDEF(fun_loop_129) {
  ARG(slots_, 0);
  ARG(i_, 1);
  P slotF30;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = (P)YPemptyQ(slots_);
  if (T11 != YPfalse) {
    T10 = (P)YPiu(YPint((P)-1));
    T0 = T10;
  } else {
    T9 = (P)YPhead(slots_);
    slotF30 = T9;
    T8 = (P)YPslot_getter(slotF30);
    T7 = (P)YPeqQ(T8,FREEREF(1));
    T6 = (P)YPbb(T7);
    if (T6 != YPfalse) {
      T2 = i_;
    } else {
      T5 = (P)YPiA(i_,(P)1);
      T4 = (P)YPtail(slots_);
      a1 = T5;
      a2 = T4;
      i_ = a1;
      slots_ = a2;
      goto loop;
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YPslot_offset) {
  ARG(getter_, 0);
  ARG(owner_, 1);
  P loopF31;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = FUNSHELL(1,fun_loop_129,2);
  loopF31 = T4;
  FUNINIT(loopF31, 2,loopF31,getter_);
  T3 = (P)YPobject_class(owner_);
  T2 = (P)YPclass_slots(T3);
  T1 = KCALL2(loopF31,(P)0,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YPearly_dispatch) {
  ARG(args_, 0);
  P genF32;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = (P)YPfun_reg();
  genF32 = T4;
  T2 = (P)YPcurrent_output_port();
  T1 = (P)YPsu(CHKREF(lit_21));
  (P)YPwrite_string(T2,T1);
  T3 = CALL0((P)0);
  T0 = T3;
  QRET(T0);
}

FUNCODEDEF(YPadd_met) {
  ARG(met_, 0);
  ARG(gen_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPgen_mets(gen_);
  T1 = (P)YPpair(met_,T2);
  T0 = (P)YPgen_mets_setter(T1,gen_);
  QRET(T0);
}

FUNCODEDEF(YPadd_slot) {
  ARG(slot_, 0);
  ARG(class_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPclass_direct_slots(class_);
  T1 = (P)YPpair(slot_,T2);
  T0 = (P)YPclass_direct_slots_setter(T1,class_);
  QRET(T0);
}

FUNCODEDEF(fun_134) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_135) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLchrG),CHKREF(YPchr_val));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_136) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLchrG),CHKREF(YPchr_val));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_137) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_138) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLintG),CHKREF(YPint_val));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_139) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLintG),CHKREF(YPint_val));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_140) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_141) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfloG),CHKREF(YPflo_val));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_142) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfloG),CHKREF(YPflo_val));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_143) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_144) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLlocG),CHKREF(YPloc_val));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_145) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLlocG),CHKREF(YPloc_val));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_146) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_147) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Yhead));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_148) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Yhead));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_149) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_150) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Ytail));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_151) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Ytail));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_152) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_153) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLvecG),CHKREF(YPPvec_dat));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_154) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLvecG),CHKREF(YPPvec_dat));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_155) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_156) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLstrG),CHKREF(YPPstr_dat));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_157) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLstrG),CHKREF(YPPstr_dat));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_158) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_159) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsymG),CHKREF(Ysym_name));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_160) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsymG),CHKREF(Ysym_name));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_161) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_162) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_slot_len));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_163) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_slot_len));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_164) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_165) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_name));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_166) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_name));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_167) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_168) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_direct_parents));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_169) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_direct_parents));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_170) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_171) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_direct_slots));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_172) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_direct_slots));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_173) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_174) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_parents));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_175) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_parents));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_176) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_177) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_slots));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_178) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_slots));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_179) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_180) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_direct_children));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_181) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_direct_children));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_182) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_183) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_gens));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_184) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_gens));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_185) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_186) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_mets));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_187) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_mets));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_188) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_189) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_forward));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_190) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLclassG),CHKREF(Yclass_forward));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_191) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_192) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsingletonG),CHKREF(Ytype_object));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_193) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsingletonG),CHKREF(Ytype_object));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_194) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_195) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsubclassG),CHKREF(Ytype_class));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_196) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsubclassG),CHKREF(Ytype_class));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_197) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_198) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLunionG),CHKREF(Ytype_elts));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_199) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLunionG),CHKREF(Ytype_elts));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_200) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_201) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_owner));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_202) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_owner));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_203) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_204) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_getter));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_205) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_getter));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_206) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_207) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_setter));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_208) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_setter));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_209) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_210) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_type));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_211) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_type));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_212) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_213) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = fun_212;
  QRET(T0);
}

FUNCODEDEF(fun_214) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_init));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_215) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_init));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_216) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_217) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_singletons));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_218) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_singletons));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_219) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_220) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_classes));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_221) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_classes));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_222) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_223) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_names));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_224) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_names));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_225) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_226) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_specs));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_227) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_specs));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_228) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(YPfalse));
}

FUNCODEDEF(fun_229) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_naryQ));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_230) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_naryQ));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_231) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_232) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_arity));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_233) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_arity));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_234) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(YLanyG));
}

FUNCODEDEF(fun_235) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_value));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_236) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_value));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_237) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(YPfalse));
}

FUNCODEDEF(fun_238) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_code));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_239) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_code));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_240) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(YPfalse));
}

FUNCODEDEF(fun_241) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_name));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_242) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_name));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_243) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_244) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_sig));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_245) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_sig));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_246) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(YPfalse));
}

FUNCODEDEF(fun_247) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLmetG),CHKREF(Yfun_env));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_248) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLmetG),CHKREF(Yfun_env));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_249) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_250) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_mets));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_251) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_mets));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_252) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(YPfalse));
}

FUNCODEDEF(fun_253) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_cache));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_254) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_cache));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(YPcollect_direct_slots) {
  ARG(class_, 0);
  P parentF33;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = (P)YPclass_direct_parents(class_);
  T4 = (P)YPhead(T5);
  parentF33 = T4;
  T3 = (P)YPclass_slots(parentF33);
  T2 = (P)YPclass_direct_slots(class_);
  T1 = (P)YPcat2(T3,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YPfinalize_slotsX) {
  ARG(class_, 0);
  ARG(name_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  (P)YPclass_name_setter(name_,class_);
  T1 = (P)YPclass_direct_slots(class_);
  T0 = (P)YPrevX(T1);
  (P)YPclass_direct_slots_setter(T0,class_);
  T2 = CALL1(CHKREF(YPcollect_direct_slots),class_);
  (P)YPclass_slots_setter(T2,class_);
  T5 = (P)YPclass_slots(class_);
  T4 = (P)YPPlen(T5);
  T3 = (P)YPib(T4);
  (P)YPclass_slot_len_setter(T3,class_);
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
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPiu(x_);
  T2 = (P)YPiu(y_);
  T1 = (P)YPiE(T3,T2);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOL(P x_,P y_) {
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPiu(x_);
  T2 = (P)YPiu(y_);
  T1 = (P)YPiL(T3,T2);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOA(P x_,P y_) {
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPiu(x_);
  T2 = (P)YPiu(y_);
  T1 = (P)YPiA(T3,T2);
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
  ARG(y_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPeqQ(x_,y_);
  T0 = (P)YPbb(T1);
  RET(T0);
}

FUNCODEDEF(Ynot) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPeqQ(x_,YPfalse);
  T0 = (P)YPbb(T1);
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

P YOemptyQ(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPemptyQ(x_);
  return T0;
}

FUNCODEDEF(YOOemptyQ) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPemptyQ(x_);
  RET(T0);
}

FUNCODEDEF(YOrevX) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPrevX(x_);
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

FUNCODEDEF(fun_fnd_272) {
  ARG(p_, 0);
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = (P)YOemptyQ(p_);
  if (T6 != YPfalse) {
    T0 = YPtrue;
  } else {
    T5 = (P)YOhead(p_);
    T4 = CALL1(FREEREF(1),T5);
    if (T4 != YPfalse) {
      T3 = (P)YOtail(p_);
      a1 = T3;
      p_ = a1;
      goto loop;
      T1 = T2;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YOallQ) {
  ARG(c_, 0);
  ARG(test_, 1);
  P fndF34;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_fnd_272,2);
  fndF34 = T2;
  FUNINIT(fndF34, 2,fndF34,test_);
  T1 = KCALL1(fndF34,c_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fnd_274) {
  ARG(py_, 0);
  ARG(px_, 1);
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = (P)YOemptyQ(px_);
  if (T11 != YPfalse) {
    T10 = (P)YOemptyQ(py_);
    T0 = T10;
  } else {
    T9 = (P)YOemptyQ(py_);
    if (T9 != YPfalse) {
      T1 = YPfalse;
    } else {
      T8 = (P)YOhead(px_);
      T7 = (P)YOhead(py_);
      T6 = CALL2(FREEREF(1),T8,T7);
      if (T6 != YPfalse) {
        T5 = (P)YOtail(px_);
        T4 = (P)YOtail(py_);
        a1 = T5;
        a2 = T4;
        px_ = a1;
        py_ = a2;
        goto loop;
        T2 = T3;
      } else {
        T2 = YPfalse;
      }
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YOall2Q) {
  ARG(y_, 0);
  ARG(x_, 1);
  ARG(test_, 2);
  P fndF35;
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = FUNSHELL(1,fun_fnd_274,2);
  fndF35 = T2;
  FUNINIT(fndF35, 2,fndF35,test_);
  T1 = KCALL2(fndF35,x_,y_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fnd_276) {
  ARG(x_, 0);
  ARG(count_, 1);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = (P)YOEE(x_,Ynil);
  if (T7 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T6 = (P)YOE(count_,FREEREF(1));
    if (T6 != YPfalse) {
      T5 = (P)YOhead(x_);
      T1 = T5;
    } else {
      T4 = (P)YOA(count_,YPint((P)1));
      T3 = (P)YOtail(x_);
      a1 = T4;
      a2 = T3;
      count_ = a1;
      x_ = a2;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YOelt) {
  ARG(key_, 0);
  ARG(x_, 1);
  P fndF36;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_fnd_276,2);
  fndF36 = T2;
  FUNINIT(fndF36, 2,fndF36,key_);
  T1 = CALL2(fndF36,YPint((P)0),x_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_278) {
  ARG(p_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YOemptyQ(p_);
  if (T3 != YPfalse) {
    T0 = FREEREF(2);
  } else {
    (P)YOhead_setter(FREEREF(1),p_);
    T2 = (P)YOtail(p_);
    a1 = T2;
    p_ = a1;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YOfill) {
  ARG(f_, 0);
  ARG(x_, 1);
  P loopF37;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_278,3);
  loopF37 = T2;
  FUNINIT(loopF37, 3,loopF37,f_,x_);
  T1 = KCALL1(loopF37,x_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fnd_280) {
  ARG(p_, 0);
  P tmpF38;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = (P)YOemptyQ(p_);
  if (T7 != YPfalse) {
    T0 = YPfalse;
  } else {
    T6 = (P)YOhead(p_);
    T5 = CALL1(FREEREF(0),T6);
    tmpF38 = T5;
    if (tmpF38 != YPfalse) {
      T2 = tmpF38;
    } else {
      T4 = (P)YOtail(p_);
      a1 = T4;
      p_ = a1;
      goto loop;
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YOanyQ) {
  ARG(c_, 0);
  ARG(test_, 1);
  P fndF39;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_fnd_280,2);
  fndF39 = T2;
  FUNINIT(fndF39, 2,test_,fndF39);
  T1 = KCALL1(fndF39,c_);
  T0 = T1;
  QRET(T0);
}

P YOpair(P h_,P t_) {
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPpair(CHKREF(YLlstG),Ynil);
  T4 = (P)YPpair(CHKREF(Ytail),Ynil);
  T3 = (P)YPpair(CHKREF(Yhead),T4);
  T2 = (P)YPpair(t_,Ynil);
  T1 = (P)YPpair(h_,T2);
  T0 = CALL3(CHKREF(YPisa),T5,T3,T1);
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
  T2 = CALL2(CHKREF(YOmemQ),c_,e_);
  if (T2 != YPfalse) {
    T0 = c_;
  } else {
    T1 = (P)YOpair(e_,c_);
    T0 = T1;
  }
  return T0;
}

FUNCODEDEF(fun_do_285) {
  ARG(res_, 0);
  ARG(x_, 1);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = (P)YOemptyQ(x_);
  if (T7 != YPfalse) {
    T6 = CALL1(CHKREF(YOrevX),res_);
    T0 = T6;
  } else {
    T5 = (P)YOtail(x_);
    T4 = (P)YOhead(x_);
    T3 = CALL1(FREEREF(0),T4);
    T2 = (P)YOpair(T3,res_);
    a1 = T5;
    a2 = T2;
    x_ = a1;
    res_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YOmap) {
  ARG(x_, 0);
  ARG(f_, 1);
  P doF40;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_do_285,2);
  doF40 = T2;
  FUNINIT(doF40, 2,f_,doF40);
  T1 = KCALL2(doF40,x_,Ynil);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_do_287) {
  ARG(res_, 0);
  ARG(x_, 1);
  P hF41;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = (P)YOemptyQ(x_);
  if (T9 != YPfalse) {
    T8 = CALL1(CHKREF(YOrevX),res_);
    T0 = T8;
  } else {
    T7 = (P)YOhead(x_);
    hF41 = T7;
    T6 = (P)YOtail(x_);
    T5 = CALL1(FREEREF(0),hF41);
    if (T5 != YPfalse) {
      T4 = (P)YOpair(hF41,res_);
      T3 = T4;
    } else {
      T3 = res_;
    }
    a1 = T6;
    a2 = T3;
    x_ = a1;
    res_ = a2;
    goto loop;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YOpick) {
  ARG(x_, 0);
  ARG(f_, 1);
  P doF42;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_do_287,2);
  doF42 = T2;
  FUNINIT(doF42, 2,f_,doF42);
  T1 = KCALL2(doF42,x_,Ynil);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_do_289) {
  ARG(x_, 0);
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = (P)YOemptyQ(x_);
  if (T4 != YPfalse) {
    T0 = YPfalse;
  } else {
    T1 = (P)YOhead(x_);
    CALL1(FREEREF(1),T1);
    T3 = (P)YOtail(x_);
    a1 = T3;
    x_ = a1;
    goto loop;
    T0 = T2;
  }
  QRET(T0);
}

FUNCODEDEF(YOdo) {
  ARG(x_, 0);
  ARG(f_, 1);
  P doF43;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_do_289,2);
  doF43 = T2;
  FUNINIT(doF43, 2,doF43,f_);
  T1 = KCALL1(doF43,x_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_in_291) {
  ARG(ss_, 0);
  ARG(ds_, 1);
  P tmpF44;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = (P)YOemptyQ(ds_);
  tmpF44 = T8;
  if (tmpF44 != YPfalse) {
    T6 = tmpF44;
  } else {
    T7 = (P)YOemptyQ(ss_);
    T6 = T7;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T1 = (P)YOhead(ss_);
    (P)YOhead_setter(T1,ds_);
    T4 = (P)YOtail(ds_);
    T3 = (P)YOtail(ss_);
    a1 = T4;
    a2 = T3;
    ds_ = a1;
    ss_ = a2;
    goto loop;
    T0 = T2;
  }
  QRET(T0);
}

FUNCODEDEF(YOalter) {
  ARG(src_, 0);
  ARG(dst_, 1);
  P inF45;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_in_291,2);
  inF45 = T2;
  FUNINIT(inF45, 2,inF45,dst_);
  T1 = KCALL2(inF45,dst_,src_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fab_293) {
  ARG(res_, 0);
  ARG(i_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = (P)YOL(i_,YPint((P)0));
  if (T4 != YPfalse) {
    T0 = res_;
  } else {
    T3 = (P)YOA(i_,YPint((P)-1));
    T2 = (P)YOpair(CHKREF(Ynul),res_);
    a1 = T3;
    a2 = T2;
    i_ = a1;
    res_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YOfab) {
  ARG(s_, 0);
  ARG(x_, 1);
  P fabF46;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_fab_293,1);
  fabF46 = T2;
  FUNINIT(fabF46, 1,fabF46);
  T1 = CALL2(fabF46,s_,Ynil);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_red_295) {
  ARG(c_, 0);
  ARG(res_, 1);
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YOemptyQ(c_);
  if (T5 != YPfalse) {
    T0 = res_;
  } else {
    T4 = (P)YOhead(c_);
    T3 = CALL2(FREEREF(0),res_,T4);
    T2 = (P)YOtail(c_);
    a1 = T3;
    a2 = T2;
    res_ = a1;
    c_ = a2;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YOreduce) {
  ARG(c_, 0);
  ARG(init_, 1);
  ARG(combine_, 2);
  P redF47;
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = FUNSHELL(1,fun_red_295,2);
  redF47 = T2;
  FUNINIT(redF47, 2,combine_,redF47);
  T1 = KCALL2(redF47,init_,c_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YOcat2) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPcat2(x_,y_);
  RET(T0);
}

FUNCODEDEF(fun_fnd_298) {
  ARG(i_, 0);
  ARG(c_, 1);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = (P)YOemptyQ(c_);
  if (T7 != YPfalse) {
    T0 = CHKREF(Ynul);
  } else {
    T6 = (P)YOhead(c_);
    T5 = CALL1(FREEREF(1),T6);
    if (T5 != YPfalse) {
      T1 = i_;
    } else {
      T4 = (P)YOtail(c_);
      T3 = (P)YOA(i_,YPint((P)1));
      a1 = T4;
      a2 = T3;
      c_ = a1;
      i_ = a2;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YOfind_key) {
  ARG(c_, 0);
  ARG(f_, 1);
  P fndF48;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_fnd_298,2);
  fndF48 = T2;
  FUNINIT(fndF48, 2,fndF48,f_);
  T1 = KCALL2(fndF48,c_,YPint((P)0));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_300) {
  ARG(y_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YOEE(FREEREF(0),y_);
  QRET(T0);
}

FUNCODEDEF(YOmemQ) {
  ARG(x_, 0);
  ARG(c_, 1);
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNFAB(fun_300,1,x_);
  T2 = CALL2(CHKREF(YOfind_key),T3,c_);
  T1 = (P)YOEE(T2,CHKREF(Ynul));
  T0 = CALL1(CHKREF(Ynot),T1);
  RET(T0);
}

FUNCODEDEF(fun_302) {
  ARG(e_, 0);
  ARG(s_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL2(CHKREF(YOmemQ),s_,e_);
  if (T2 != YPfalse) {
    T0 = s_;
  } else {
    T1 = (P)YOpair(e_,s_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YOdel_dups) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = fun_302;
  T0 = CALL3(CHKREF(YOreduce),T1,Ynil,x_);
  RET(T0);
}

FUNCODEDEF(YOlst) {
  ARG(objects_, 0);
  P a1;
loop:
  QRET(objects_);
}

FUNCODEDEF(YOfun_names) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_names(T1);
  RET(T0);
}

FUNCODEDEF(YOfun_specs) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_specs(T1);
  RET(T0);
}

FUNCODEDEF(YOfun_naryQ) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_naryQ(T1);
  RET(T0);
}

FUNCODEDEF(YOfun_arity) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_arity(T1);
  RET(T0);
}

FUNCODEDEF(YOfun_value) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPgen_sig(x_);
  T0 = (P)YPsig_value(T1);
  QRET(T0);
}

FUNCODEDEF(YOfun_mets) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPgen_mets(x_);
  RET(T0);
}

FUNCODEDEF(YOfun_mets_setter) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPgen_mets_setter(z_,x_);
  QRET(T0);
}

FUNCODEDEF(Yfun_spec) {
  ARG(i_, 0);
  ARG(x_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(YOfun_specs),x_);
  T0 = CALL2(CHKREF(YOelt),T1,i_);
  QRET(T0);
}

FUNCODEDEF(Yfun_same_metQ) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(YOfun_specs),x_);
  T1 = CALL1(CHKREF(YOfun_specs),y_);
  T0 = CALL3(CHKREF(YOall2Q),CHKREF(YOOEE),T2,T1);
  RET(T0);
}

FUNCODEDEF(Yfun_congruentQ) {
  ARG(y_, 0);
  ARG(x_, 1);
  P tmpF50;
  P tmpF49;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T12 = CALL1(CHKREF(YOfun_arity),x_);
  T11 = CALL1(CHKREF(YOfun_arity),y_);
  T10 = (P)YOE(T12,T11);
  tmpF49 = T10;
  if (tmpF49 != YPfalse) {
    T9 = CALL1(CHKREF(YOfun_naryQ),x_);
    T8 = CALL1(CHKREF(YOfun_naryQ),y_);
    T7 = (P)YOEE(T9,T8);
    tmpF50 = T7;
    if (tmpF50 != YPfalse) {
      T6 = CALL1(CHKREF(YOfun_specs),x_);
      T5 = CALL1(CHKREF(YOfun_specs),y_);
      T4 = CALL3(CHKREF(YOall2Q),CHKREF(YOsubtypeQ),T6,T5);
      T3 = T4;
    } else {
      T3 = YPfalse;
    }
    T2 = T3;
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_col_315) {
  ARG(gms_, 0);
  ARG(sameQ_, 1);
  ARG(mets_, 2);
  P tmpF53;
  P now_sameQF52;
  P gmF51;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T15 = (P)YOemptyQ(gms_);
  if (T15 != YPfalse) {
    if (sameQ_ != YPfalse) {
      T13 = mets_;
    } else {
      T14 = (P)YOadd(mets_,FREEREF(0));
      T13 = T14;
    }
    T12 = CALL1(CHKREF(YOrevX),T13);
    T11 = (P)YPgen_mets_setter(T12,FREEREF(2));
    T0 = T11;
  } else {
    T10 = (P)YOhead(gms_);
    gmF51 = T10;
    T9 = CALL2(CHKREF(Yfun_same_metQ),gmF51,FREEREF(0));
    now_sameQF52 = T9;
    if (now_sameQF52 != YPfalse) {
      T8 = FREEREF(0);
    } else {
      T8 = gmF51;
    }
    T7 = (P)YOadd(mets_,T8);
    tmpF53 = now_sameQF52;
    if (tmpF53 != YPfalse) {
      T6 = tmpF53;
    } else {
      T6 = sameQ_;
    }
    T5 = T6;
    T4 = (P)YOtail(gms_);
    a1 = T7;
    a2 = T5;
    a3 = T4;
    mets_ = a1;
    sameQ_ = a2;
    gms_ = a3;
    goto loop;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_lop_316) {
  ARG(specs_, 0);
  P tmpF56;
  P spec_classF55;
  P specF54;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T18 = (P)YOemptyQ(specs_);
  T17 = CALL1(CHKREF(Ynot),T18);
  if (T17 != YPfalse) {
    T16 = (P)YOhead(specs_);
    specF54 = T16;
    T15 = CALL1(CHKREF(YOsingleton_specQ),specF54);
    tmpF56 = T15;
    if (tmpF56 != YPfalse) {
      T13 = tmpF56;
    } else {
      T14 = (P)YOEE(specF54,CHKREF(YLanyG));
      T13 = T14;
    }
    T12 = T13;
    T11 = CALL1(CHKREF(Ynot),T12);
    if (T11 != YPfalse) {
      T8 = (P)YPobject_class(specF54);
      spec_classF55 = T8;
      T4 = (P)YPclass_gens(spec_classF55);
      T3 = (P)YOadd_new(T4,FREEREF(2));
      (P)YPclass_gens_setter(T3,spec_classF55);
      T7 = (P)YPclass_mets(spec_classF55);
      T6 = (P)YOadd_new(T7,FREEREF(1));
      T5 = (P)YPclass_mets_setter(T6,spec_classF55);
      T10 = (P)YOtail(specs_);
      a1 = T10;
      specs_ = a1;
      goto loop;
      T2 = T9;
    } else {
      T2 = YPfalse;
    }
    T1 = T2;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_317) {
  P T0;
loop:
  T0 = CALL2(CHKREF(Yincongruent_method_error),FREEREF(1),FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_318) {
  ARG(r_, 0);
  ARG(c_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = CALL1(CHKREF(Ygen_from_met),FREEREF(0));
  T1 = CALL2(CHKREF(Ygen_add_met),T2,FREEREF(0));
  T0 = CALL1(FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(fun_319) {
loop:
  QRET(YPtrue);
}

FUNCODEDEF(fun_320) {
  ARG(return_, 0);
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T10 = (P)YPpair(CHKREF(YLsimple_handler_infoG),Ynil);
  T9 = (P)YPpair(CHKREF(Yhandler_info_arguments),Ynil);
  T8 = (P)YPpair(CHKREF(Yhandler_info_message),T9);
  T7 = CALL2(CHKREF(Ylst),FREEREF(0),FREEREF(1));
  T6 = (P)YPpair(T7,Ynil);
  T5 = (P)YPpair(CHKREF(lit_198),T6);
  T4 = CALL3(CHKREF(YPisa),T10,T8,T5);
  T3 = fun_319;
  T2 = FUNFAB(fun_318,2,FREEREF(1),return_);
  T1 = FUNFAB(fun_317,2,FREEREF(1),FREEREF(0));
  T0 = CALLN(YruntimeYPwith_monitor,5,CHKREF(YLreplace_generic_restartG),T4,T3,T2,T1);
  QRET(T0);
}

FUNCODEDEF(Ygen_add_met) {
  ARG(m_, 0);
  ARG(g_, 1);
  P lopF58;
  P colF57;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  (P)YPfun_cache_setter(YPfalse,g_);
  T12 = CALL2(CHKREF(Yfun_congruentQ),m_,g_);
  T11 = CALL1(CHKREF(Ynot),T12);
  if (T11 != YPfalse) {
    if (CHKREF(YTrestarts_okQT) != YPfalse) {
      T10 = FUNFAB(fun_320,2,g_,m_);
      T9 = with_exit(T10);
      T7 = T9;
    } else {
      T8 = CALL2(CHKREF(Yincongruent_method_error),g_,m_);
      T7 = T8;
    }
    T0 = T7;
  } else {
    T3 = FUNSHELL(1,fun_lop_316,3);
    lopF58 = T3;
    FUNINIT(lopF58, 3,lopF58,m_,g_);
    T2 = CALL1(CHKREF(YOfun_specs),m_);
    T1 = KCALL1(lopF58,T2);
    T6 = FUNSHELL(1,fun_col_315,3);
    colF57 = T6;
    FUNINIT(colF57, 3,m_,colF57,g_);
    T5 = CALL1(CHKREF(YOfun_mets),g_);
    T4 = CALL3(colF57,Ynil,YPfalse,T5);
    T0 = g_;
  }
  RET(T0);
}

P YOclass_inQ(P c_,P cs_) {
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T6 = (P)YPemptyQ(cs_);
  if (T6 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = (P)YPhead(cs_);
    T4 = (P)YOEE(T5,c_);
    if (T4 != YPfalse) {
      T1 = YPtrue;
    } else {
      T3 = (P)YPtail(cs_);
      a1 = c_;
      a2 = T3;
      c_ = a1;
      cs_ = a2;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  return T0;
}

INLINE P YOsubclassQ(P c1_,P c2_) {
  P tmpF60;
  P tmpF59;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = (P)YOEE(c2_,CHKREF(YLanyG));
  tmpF59 = T7;
  if (tmpF59 != YPfalse) {
    T1 = tmpF59;
  } else {
    T6 = (P)YOEE(c1_,c2_);
    tmpF60 = T6;
    if (tmpF60 != YPfalse) {
      T3 = tmpF60;
    } else {
      T5 = (P)YPclass_parents(c1_);
      T4 = (P)YOclass_inQ(c2_,T5);
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  return T0;
}

INLINE P YOclass_isaQ(P o_,P c_) {
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPclass_of(o_);
  T0 = (P)YOsubclassQ(T1,c_);
  return T0;
}

FUNCODEDEF(fun_325) {
  ARG(t_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YOisaQ),FREEREF(0),t_);
  QRET(T0);
}

P YOunion_isaQ(P o_,P u_) {
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNFAB(fun_325,1,o_);
  T1 = (P)YPtype_elts(u_);
  T0 = CALL2(CHKREF(YOanyQ),T2,T1);
  return T0;
}

INLINE P YPisaQ(P o_,P c_) {
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = (P)YPclass_of(c_);
  T3 = (P)YOEE(T4,CHKREF(YLclassG));
  if (T3 != YPfalse) {
    T2 = (P)YOclass_isaQ(o_,c_);
    T0 = T2;
  } else {
    T1 = CALL2(CHKREF(YOisaQ),o_,c_);
    T0 = T1;
  }
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
  P tmpF61;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(YOisaQ),o_,CHKREF(YLclassG));
  tmpF61 = T4;
  if (tmpF61 != YPfalse) {
    T3 = (P)YPtype_class(t_);
    T2 = (P)YOsubclassQ(o_,T3);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  T0 = T1;
  return T0;
}

FUNCODEDEF(YOisaQ) {
  ARG(t_, 0);
  ARG(o_, 1);
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = (P)YOclass_isaQ(t_,CHKREF(YLclassG));
  if (T13 != YPfalse) {
    T12 = (P)YOclass_isaQ(o_,t_);
    T0 = T12;
  } else {
    T11 = (P)YOclass_isaQ(t_,CHKREF(YLsingletonG));
    if (T11 != YPfalse) {
      T10 = (P)YOsingleton_isaQ(o_,t_);
      T1 = T10;
    } else {
      T9 = (P)YOclass_isaQ(t_,CHKREF(YLsubclassG));
      if (T9 != YPfalse) {
        T8 = (P)YOsubclass_isaQ(o_,t_);
        T2 = T8;
      } else {
        T7 = (P)YOclass_isaQ(t_,CHKREF(YLunionG));
        if (T7 != YPfalse) {
          T6 = (P)YOunion_isaQ(o_,t_);
          T3 = T6;
        } else {
          if (YPtrue != YPfalse) {
            T5 = CALL2(CHKREF(Ynyi_isaQ),o_,t_);
            T4 = T5;
          } else {
            T4 = YPfalse;
          }
          T3 = T4;
        }
        T2 = T3;
      }
      T1 = T2;
    }
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(fun_find_331) {
  ARG(ps_, 0);
  P cF62;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T10 = (P)YOemptyQ(ps_);
  if (T10 != YPfalse) {
    T9 = CALLN(CHKREF(Yerror),5,CHKREF(lit_209),CHKREF(lit_208),FREEREF(3),FREEREF(2),FREEREF(1));
    T0 = T9;
  } else {
    T8 = (P)YOhead(ps_);
    cF62 = T8;
    T7 = (P)YOEE(cF62,FREEREF(2));
    if (T7 != YPfalse) {
      T2 = YPtrue;
    } else {
      T6 = (P)YOEE(cF62,FREEREF(1));
      if (T6 != YPfalse) {
        T3 = YPfalse;
      } else {
        T5 = (P)YOtail(ps_);
        a1 = T5;
        ps_ = a1;
        goto loop;
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YOclassL) {
  ARG(wrt_, 0);
  ARG(c2_, 1);
  ARG(c1_, 2);
  P findF63;
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = FUNSHELL(1,fun_find_331,4);
  findF63 = T3;
  FUNINIT(findF63, 4,findF63,c2_,c1_,wrt_);
  T2 = (P)YPclass_parents(wrt_);
  T1 = KCALL1(findF63,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YOtype_equalQ) {
  ARG(t2_, 0);
  ARG(t1_, 1);
  P tmpF67;
  P tmpF66;
  P tmpF65;
  P tmpF64;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T14 = (P)YOEE(t1_,t2_);
  tmpF64 = T14;
  if (tmpF64 != YPfalse) {
    T1 = tmpF64;
  } else {
    T13 = (P)YOclass_isaQ(t1_,CHKREF(YLclassG));
    T12 = CALL1(CHKREF(Ynot),T13);
    tmpF65 = T12;
    if (tmpF65 != YPfalse) {
      T11 = (P)YOclass_isaQ(t2_,CHKREF(YLclassG));
      T10 = CALL1(CHKREF(Ynot),T11);
      tmpF66 = T10;
      if (tmpF66 != YPfalse) {
        T9 = CALL2(CHKREF(YOsubtypeQ),t1_,t2_);
        tmpF67 = T9;
        if (tmpF67 != YPfalse) {
          T8 = CALL2(CHKREF(YOsubtypeQ),t2_,t1_);
          T7 = T8;
        } else {
          T7 = YPfalse;
        }
        T6 = T7;
        T5 = T6;
      } else {
        T5 = YPfalse;
      }
      T4 = T5;
      T3 = T4;
    } else {
      T3 = YPfalse;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_334) {
  ARG(t_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YOsubtypeQ),FREEREF(0),t_);
  QRET(T0);
}

FUNCODEDEF(fun_335) {
  ARG(t_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(YOsubtypeQ),t_,FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(YOsubtypeQ) {
  ARG(t2_, 0);
  ARG(t1_, 1);
  P tmpF69;
  P tmpF68;
  P T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47;
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T62 = (P)YOclass_isaQ(t1_,CHKREF(YLunionG));
  if (T62 != YPfalse) {
    T61 = FUNFAB(fun_335,1,t2_);
    T60 = (P)YPtype_elts(t1_);
    T59 = CALL2(CHKREF(YOallQ),T61,T60);
    T0 = T59;
  } else {
    T58 = (P)YOclass_isaQ(t2_,CHKREF(YLunionG));
    if (T58 != YPfalse) {
      T57 = FUNFAB(fun_334,1,t1_);
      T56 = (P)YPtype_elts(t2_);
      T55 = CALL2(CHKREF(YOanyQ),T57,T56);
      T1 = T55;
    } else {
      T54 = (P)YOclass_isaQ(t2_,CHKREF(YLclassG));
      if (T54 != YPfalse) {
        T53 = (P)YOclass_isaQ(t1_,CHKREF(YLclassG));
        if (T53 != YPfalse) {
          T52 = (P)YOsubclassQ(t1_,t2_);
          T42 = T52;
        } else {
          T51 = (P)YOclass_isaQ(t1_,CHKREF(YLsingletonG));
          if (T51 != YPfalse) {
            T50 = (P)YPtype_object(t1_);
            T49 = CALL2(CHKREF(YOisaQ),T50,t2_);
            T43 = T49;
          } else {
            T48 = (P)YOclass_isaQ(t1_,CHKREF(YLsubclassG));
            if (T48 != YPfalse) {
              T47 = (P)YOsubclassQ(CHKREF(YLclassG),t2_);
              T44 = T47;
            } else {
              if (YPtrue != YPfalse) {
                T46 = CALL2(CHKREF(Ynyi_subtypeQ),t1_,t2_);
                T45 = T46;
              } else {
                T45 = YPfalse;
              }
              T44 = T45;
            }
            T43 = T44;
          }
          T42 = T43;
        }
        T2 = T42;
      } else {
        T41 = (P)YOclass_isaQ(t2_,CHKREF(YLsingletonG));
        if (T41 != YPfalse) {
          T40 = (P)YOclass_isaQ(t1_,CHKREF(YLclassG));
          if (T40 != YPfalse) {
            T31 = YPfalse;
          } else {
            T39 = (P)YOclass_isaQ(t1_,CHKREF(YLsingletonG));
            if (T39 != YPfalse) {
              T38 = (P)YPtype_object(t1_);
              T37 = (P)YOsingleton_isaQ(T38,t2_);
              T32 = T37;
            } else {
              T36 = (P)YOclass_isaQ(t1_,CHKREF(YLsubclassG));
              if (T36 != YPfalse) {
                T33 = YPfalse;
              } else {
                if (YPtrue != YPfalse) {
                  T35 = CALL2(CHKREF(Ynyi_subtypeQ),t1_,t2_);
                  T34 = T35;
                } else {
                  T34 = YPfalse;
                }
                T33 = T34;
              }
              T32 = T33;
            }
            T31 = T32;
          }
          T3 = T31;
        } else {
          T30 = (P)YOclass_isaQ(t2_,CHKREF(YLsubclassG));
          if (T30 != YPfalse) {
            T29 = (P)YOclass_isaQ(t1_,CHKREF(YLsingletonG));
            if (T29 != YPfalse) {
              T28 = (P)YPtype_object(t1_);
              T27 = CALL2(CHKREF(YOisaQ),T28,CHKREF(YLclassG));
              tmpF69 = T27;
              if (tmpF69 != YPfalse) {
                T26 = (P)YPtype_object(t1_);
                T25 = (P)YPtype_class(t2_);
                T24 = (P)YOsubclassQ(T26,T25);
                T23 = T24;
              } else {
                T23 = YPfalse;
              }
              T22 = T23;
              T7 = T22;
            } else {
              T21 = (P)YOclass_isaQ(t1_,CHKREF(YLsubclassG));
              if (T21 != YPfalse) {
                T20 = (P)YPtype_class(t1_);
                T19 = (P)YPtype_class(t2_);
                T18 = (P)YOsubclassQ(T20,T19);
                T8 = T18;
              } else {
                T17 = (P)YOclass_isaQ(t1_,CHKREF(YLclassG));
                if (T17 != YPfalse) {
                  T16 = (P)YOEE(t1_,CHKREF(YLclassG));
                  tmpF68 = T16;
                  if (tmpF68 != YPfalse) {
                    T15 = (P)YPtype_class(t2_);
                    T14 = (P)YOEE(T15,CHKREF(YLclassG));
                    T13 = T14;
                  } else {
                    T13 = YPfalse;
                  }
                  T12 = T13;
                  T9 = T12;
                } else {
                  if (YPtrue != YPfalse) {
                    T11 = CALL2(CHKREF(Ynyi_subtypeQ),t1_,t2_);
                    T10 = T11;
                  } else {
                    T10 = YPfalse;
                  }
                  T9 = T10;
                }
                T8 = T9;
              }
              T7 = T8;
            }
            T4 = T7;
          } else {
            if (YPtrue != YPfalse) {
              T6 = CALL2(CHKREF(YsubtypeQ),t1_,t2_);
              T5 = T6;
            } else {
              T5 = YPfalse;
            }
            T4 = T5;
          }
          T3 = T4;
        }
        T2 = T3;
      }
      T1 = T2;
    }
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(fun_loop_337) {
  ARG(elts_, 0);
  ARG(allQ_, 1);
  ARG(someQ_, 2);
  P tmpF76;
  P tmpF75;
  P tup1F74;
  P elt_allQF73;
  P tup1F72;
  P elt_someQF71;
  P tup1F70;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T19 = (P)YOemptyQ(elts_);
  if (T19 != YPfalse) {
    T18 = CALL2(CHKREF(YOtup),someQ_,allQ_);
    T0 = T18;
  } else {
    T17 = (P)YOhead(elts_);
    T16 = CALL2(CHKREF(YOmay_isaQ),FREEREF(0),T17);
    tup1F70 = T16;
    T15 = CALL1(CHKREF(Yhead),tup1F70);
    elt_someQF71 = T15;
    T14 = CALL1(CHKREF(Ytail),tup1F70);
    tup1F72 = T14;
    T13 = CALL1(CHKREF(Yhead),tup1F72);
    elt_allQF73 = T13;
    T12 = CALL1(CHKREF(Ytail),tup1F72);
    tup1F74 = T12;
    tmpF76 = elt_someQF71;
    if (tmpF76 != YPfalse) {
      T11 = tmpF76;
    } else {
      T11 = someQ_;
    }
    T10 = T11;
    tmpF75 = elt_allQF73;
    if (tmpF75 != YPfalse) {
      T9 = tmpF75;
    } else {
      T9 = allQ_;
    }
    T8 = T9;
    T7 = (P)YOtail(elts_);
    a1 = T10;
    a2 = T8;
    a3 = T7;
    someQ_ = a1;
    allQ_ = a2;
    elts_ = a3;
    goto loop;
    T5 = T6;
    T4 = T5;
    T3 = T4;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YOmay_isaQ) {
  ARG(t_, 0);
  ARG(c_, 1);
  P tmpF79;
  P classQF78;
  P loopF77;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T28 = (P)YOclass_isaQ(t_,CHKREF(YLclassG));
  if (T28 != YPfalse) {
    T27 = (P)YOsubclassQ(c_,t_);
    if (T27 != YPfalse) {
      T26 = CALL2(CHKREF(YOtup),YPtrue,YPtrue);
      T24 = T26;
    } else {
      T25 = CALL2(CHKREF(YOtup),YPfalse,YPfalse);
      T24 = T25;
    }
    T0 = T24;
  } else {
    T23 = (P)YOclass_isaQ(t_,CHKREF(YLsingletonG));
    if (T23 != YPfalse) {
      T22 = (P)YPtype_object(t_);
      T21 = (P)YPclass_of(T22);
      T20 = CALL2(CHKREF(YOmay_isaQ),T21,c_);
      T19 = CALL2(CHKREF(YOtup),T20,YPfalse);
      T1 = T19;
    } else {
      T18 = (P)YOclass_isaQ(t_,CHKREF(YLsubclassG));
      if (T18 != YPfalse) {
        T17 = CALL2(CHKREF(YOsubtypeQ),c_,CHKREF(YLclassG));
        classQF78 = T17;
        tmpF79 = classQF78;
        if (tmpF79 != YPfalse) {
          T16 = (P)YPtype_class(c_);
          T15 = (P)YOEE(T16,CHKREF(YLanyG));
          T14 = T15;
        } else {
          T14 = YPfalse;
        }
        T13 = T14;
        T12 = CALL2(CHKREF(YOtup),classQF78,T13);
        T11 = T12;
        T2 = T11;
      } else {
        T10 = (P)YOclass_isaQ(t_,CHKREF(YLunionG));
        if (T10 != YPfalse) {
          T9 = FUNSHELL(1,fun_loop_337,2);
          loopF77 = T9;
          FUNINIT(loopF77, 2,c_,loopF77);
          T8 = (P)YPtype_elts(t_);
          T7 = KCALL3(loopF77,YPfalse,YPfalse,T8);
          T6 = T7;
          T3 = T6;
        } else {
          if (YPtrue != YPfalse) {
            T5 = CALL2(CHKREF(Ymay_isaQ),c_,t_);
            T4 = T5;
          } else {
            T4 = YPfalse;
          }
          T3 = T4;
        }
        T2 = T3;
      }
      T1 = T2;
    }
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(Yorder_specs_default) {
  ARG(arg_, 0);
  ARG(t2_, 1);
  ARG(t1_, 2);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T8 = CALL2(CHKREF(YOsubtypeQ),t1_,t2_);
  if (T8 != YPfalse) {
    T7 = CALL2(CHKREF(YOsubtypeQ),t2_,t1_);
    if (T7 != YPfalse) {
      T6 = CHKREF(lit_223);
    } else {
      T6 = CHKREF(lit_222);
    }
    T5 = CALL2(CHKREF(YOtup),T6,t1_);
    T0 = T5;
  } else {
    T4 = CALL2(CHKREF(YOsubtypeQ),t2_,t1_);
    if (T4 != YPfalse) {
      T3 = CALL2(CHKREF(YOtup),CHKREF(lit_221),t2_);
      T1 = T3;
    } else {
      T2 = CALL2(CHKREF(YOtup),CHKREF(lit_220),CHKREF(YLanyG));
      T1 = T2;
    }
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(Yorder_specs) {
  ARG(arg_, 0);
  ARG(t2_, 1);
  ARG(t1_, 2);
  P c2F81;
  P c1F80;
  P T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T56 = (P)YOEE(t1_,t2_);
  if (T56 != YPfalse) {
    T55 = CALL2(CHKREF(YOtup),CHKREF(lit_223),t1_);
    T0 = T55;
  } else {
    T54 = (P)YOclass_isaQ(t1_,CHKREF(YLsingletonG));
    if (T54 != YPfalse) {
      T53 = (P)YOclass_isaQ(t2_,CHKREF(YLsingletonG));
      if (T53 != YPfalse) {
        T52 = CHKREF(lit_223);
      } else {
        T52 = CHKREF(lit_222);
      }
      T51 = CALL2(CHKREF(YOtup),T52,t1_);
      T1 = T51;
    } else {
      T50 = (P)YOclass_isaQ(t1_,CHKREF(YLsubclassG));
      if (T50 != YPfalse) {
        T49 = (P)YOclass_isaQ(t2_,CHKREF(YLsubclassG));
        if (T49 != YPfalse) {
          T48 = (P)YPtype_class(t1_);
          c1F80 = T48;
          T47 = (P)YPtype_class(t2_);
          c2F81 = T47;
          T46 = (P)YOEE(c1F80,c2F81);
          if (T46 != YPfalse) {
            T45 = CALL2(CHKREF(YOtup),CHKREF(lit_223),t1_);
            T39 = T45;
          } else {
            T44 = CALL3(CHKREF(YOclassL),c1F80,c2F81,arg_);
            if (T44 != YPfalse) {
              T43 = CALL2(CHKREF(YOtup),CHKREF(lit_222),t1_);
              T40 = T43;
            } else {
              if (YPtrue != YPfalse) {
                T42 = CALL2(CHKREF(YOtup),CHKREF(lit_221),t2_);
                T41 = T42;
              } else {
                T41 = YPfalse;
              }
              T40 = T41;
            }
            T39 = T40;
          }
          T38 = T39;
          T37 = T38;
          T26 = T37;
        } else {
          T36 = (P)YOclass_isaQ(t2_,CHKREF(YLclassG));
          if (T36 != YPfalse) {
            T35 = CALL2(CHKREF(YOsubtypeQ),CHKREF(YLclassG),t2_);
            if (T35 != YPfalse) {
              T34 = (P)YOEE(t1_,CHKREF(YLanyG));
              if (T34 != YPfalse) {
                T33 = CALL3(CHKREF(Yorder_specs),CHKREF(YLclassG),t2_,arg_);
                T32 = T33;
              } else {
                T32 = CHKREF(lit_222);
              }
              T31 = T32;
            } else {
              T31 = CHKREF(lit_220);
            }
            T30 = CALL2(CHKREF(YOtup),T31,t1_);
            T27 = T30;
          } else {
            if (YPtrue != YPfalse) {
              T29 = CALL3(CHKREF(Yorder_specs_default),t1_,t2_,arg_);
              T28 = T29;
            } else {
              T28 = YPfalse;
            }
            T27 = T28;
          }
          T26 = T27;
        }
        T2 = T26;
      } else {
        T25 = (P)YOclass_isaQ(t2_,CHKREF(YLsubclassG));
        if (T25 != YPfalse) {
          T24 = (P)YOclass_isaQ(t1_,CHKREF(YLclassG));
          if (T24 != YPfalse) {
            T23 = CALL2(CHKREF(YOsubtypeQ),CHKREF(YLclassG),t1_);
            if (T23 != YPfalse) {
              T22 = (P)YOEE(t2_,CHKREF(YLanyG));
              if (T22 != YPfalse) {
                T21 = CALL3(CHKREF(Yorder_specs),t1_,CHKREF(YLclassG),arg_);
                T20 = T21;
              } else {
                T20 = CHKREF(lit_221);
              }
              T19 = T20;
            } else {
              T19 = CHKREF(lit_220);
            }
            T18 = CALL2(CHKREF(YOtup),T19,t2_);
            T16 = T18;
          } else {
            T17 = CALL3(CHKREF(Yorder_specs_default),t1_,t2_,arg_);
            T16 = T17;
          }
          T3 = T16;
        } else {
          T15 = (P)YOclass_isaQ(t1_,CHKREF(YLclassG));
          if (T15 != YPfalse) {
            T14 = (P)YOclass_isaQ(t2_,CHKREF(YLclassG));
            if (T14 != YPfalse) {
              T13 = (P)YPclass_of(arg_);
              T12 = CALL3(CHKREF(YOclassL),t1_,t2_,T13);
              if (T12 != YPfalse) {
                T11 = CALL2(CHKREF(YOtup),CHKREF(lit_222),t1_);
                T9 = T11;
              } else {
                T10 = CALL2(CHKREF(YOtup),CHKREF(lit_221),t2_);
                T9 = T10;
              }
              T7 = T9;
            } else {
              T8 = CALL3(CHKREF(Yorder_specs_default),t1_,t2_,arg_);
              T7 = T8;
            }
            T4 = T7;
          } else {
            if (YPtrue != YPfalse) {
              T6 = CALL3(CHKREF(Yorder_specs_default),t1_,t2_,arg_);
              T5 = T6;
            } else {
              T5 = YPfalse;
            }
            T4 = T5;
          }
          T3 = T4;
        }
        T2 = T3;
      }
      T1 = T2;
    }
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(fun_loop_341) {
  ARG(idx_, 0);
  ARG(state_, 1);
  P tmpF88;
  P tmpF87;
  P idxF86;
  P cmpF85;
  P cmpAtypF84;
  P m2specF83;
  P m1specF82;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T25 = (P)YOE(idx_,FREEREF(4));
  if (T25 != YPfalse) {
    T0 = state_;
  } else {
    T24 = CALL2(CHKREF(Yfun_spec),FREEREF(0),idx_);
    m1specF82 = T24;
    T23 = CALL2(CHKREF(Yfun_spec),FREEREF(1),idx_);
    m2specF83 = T23;
    T22 = CALL2(CHKREF(YOelt),FREEREF(2),idx_);
    T21 = CALL3(CHKREF(Yorder_specs),m1specF82,m2specF83,T22);
    check_type(T21,CHKREF(YLtupG));
    cmpAtypF84 = T21;
    T20 = CALL2(CHKREF(YOelt),cmpAtypF84,YPint((P)0));
    check_type(T20,CHKREF(YLsymG));
    cmpF85 = T20;
    T19 = (P)YOA(idx_,YPint((P)1));
    check_type(T19,CHKREF(YLintG));
    idxF86 = T19;
    T18 = (P)YOEE(cmpF85,CHKREF(lit_223));
    if (T18 != YPfalse) {
      a1 = state_;
      a2 = idxF86;
      state_ = a1;
      idx_ = a2;
      goto loop;
      T6 = T17;
    } else {
      T16 = (P)YOEE(cmpF85,CHKREF(lit_220));
      T15 = CALL1(CHKREF(Ynot),T16);
      tmpF87 = T15;
      if (tmpF87 != YPfalse) {
        T14 = (P)YOEE(state_,CHKREF(lit_223));
        tmpF88 = T14;
        if (tmpF88 != YPfalse) {
          T12 = tmpF88;
        } else {
          T13 = (P)YOEE(cmpF85,state_);
          T12 = T13;
        }
        T11 = T12;
        T10 = T11;
      } else {
        T10 = YPfalse;
      }
      T9 = T10;
      if (T9 != YPfalse) {
        a1 = cmpF85;
        a2 = idxF86;
        state_ = a1;
        idx_ = a2;
        goto loop;
        T7 = T8;
      } else {
        T7 = CHKREF(lit_220);
      }
      T6 = T7;
    }
    T5 = T6;
    T4 = T5;
    T3 = T4;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(Yorder_mets) {
  ARG(args_, 0);
  ARG(m2_, 1);
  ARG(m1_, 2);
  P loopF90;
  P arityF89;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = CALL1(CHKREF(YOfun_arity),m1_);
  check_type(T4,CHKREF(YLintG));
  arityF89 = T4;
  T3 = FUNSHELL(1,fun_loop_341,5);
  loopF90 = T3;
  FUNINIT(loopF90, 5,m1_,m2_,args_,loopF90,arityF89);
  T2 = CALL2(loopF90,CHKREF(lit_223),YPint((P)0));
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_insert_343) {
  ARG(osub_, 0);
  ARG(oprev_, 1);
  P indicF91;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = (P)YOemptyQ(osub_);
  if (T13 != YPfalse) {
    T12 = CALL1(FREEREF(5),oprev_);
    T0 = T12;
  } else {
    T11 = (P)YOhead(osub_);
    T10 = CALL3(FREEREF(2),FREEREF(1),T11,FREEREF(0));
    indicF91 = T10;
    T9 = (P)YOEE(indicF91,CHKREF(lit_222));
    if (T9 != YPfalse) {
      T8 = CALL1(FREEREF(5),oprev_);
      T2 = T8;
    } else {
      T7 = (P)YOEE(indicF91,CHKREF(lit_221));
      if (T7 != YPfalse) {
        T6 = (P)YOtail(osub_);
        a1 = osub_;
        a2 = T6;
        oprev_ = a1;
        osub_ = a2;
        goto loop;
        T3 = T5;
      } else {
        T4 = CALL1(FREEREF(3),oprev_);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_check_subsequent_ambiguities_344) {
  ARG(oprev_, 0);
  P tmpF92;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = (P)YOtail(oprev_);
  T11 = CALL1(FREEREF(2),T12);
  T10 = CALL1(CHKREF(Ynot),T11);
  tmpF92 = T10;
  if (tmpF92 != YPfalse) {
    T6 = tmpF92;
  } else {
    T9 = (P)YOtail(FREEREF(3));
    T8 = CALL1(FREEREF(2),T9);
    T7 = CALL1(CHKREF(Ynot),T8);
    T6 = T7;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T4 = CALL1(FREEREF(1),oprev_);
    T0 = T4;
  } else {
    T3 = (P)YOtail(oprev_);
    T2 = (P)YOpair(FREEREF(0),T3);
    T1 = (P)YOtail_setter(T2,oprev_);
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_loop_345) {
  ARG(l_, 0);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = (P)YOEE(l_,Ynil);
  if (T7 != YPfalse) {
    T0 = YPtrue;
  } else {
    T6 = (P)YOhead(l_);
    T5 = CALL3(FREEREF(3),FREEREF(2),T6,FREEREF(1));
    T4 = (P)YOEE(T5,CHKREF(lit_222));
    if (T4 != YPfalse) {
      T3 = (P)YOtail(l_);
      a1 = T3;
      l_ = a1;
      goto loop;
      T1 = T2;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(fun_precedes_allQ_346) {
  ARG(l_, 0);
  P loopF93;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_345,4);
  loopF93 = T2;
  FUNINIT(loopF93, 4,loopF93,FREEREF(2),FREEREF(1),FREEREF(0));
  T1 = CALL1(loopF93,l_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_347) {
  ARG(l_, 0);
  P t1F95;
  P tmpF94;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = (P)YOEE(l_,Ynil);
  tmpF94 = T6;
  if (tmpF94 != YPfalse) {
    T1 = tmpF94;
  } else {
    T5 = (P)YOtail(l_);
    t1F95 = T5;
    T3 = (P)YOtail(FREEREF(1));
    (P)YOtail_setter(T3,l_);
    (P)YOtail_setter(l_,FREEREF(1));
    a1 = t1F95;
    l_ = a1;
    goto loop;
    T2 = T4;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_make_ambiguous_348) {
  ARG(headed_list_, 0);
  P loopF96;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_347,2);
  loopF96 = T2;
  FUNINIT(loopF96, 2,loopF96,FREEREF(0));
  T1 = (P)YOtail(headed_list_);
  T0 = CALL1(loopF96,T1);
  (P)YOtail_setter(Ynil,headed_list_);
  T5 = (P)YOtail(FREEREF(0));
  T4 = (P)YOpair(FREEREF(1),T5);
  T3 = (P)YOtail_setter(T4,FREEREF(0));
  QRET(T3);
}

FUNCODEDEF(fun_loop_349) {
  ARG(mets_, 0);
  P insertF101;
  P check_subsequent_ambiguitiesF100;
  P precedes_allQF99;
  P make_ambiguousF98;
  P metF97;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = (P)YOEE(mets_,Ynil);
  T11 = CALL1(CHKREF(Ynot),T12);
  if (T11 != YPfalse) {
    T10 = (P)YOhead(mets_);
    check_type(T10,CHKREF(YLmetG));
    metF97 = T10;
    T9 = FUNSHELL(1,fun_make_ambiguous_348,2);
    make_ambiguousF98 = T9;
    T8 = FUNSHELL(1,fun_precedes_allQ_346,3);
    precedes_allQF99 = T8;
    T7 = FUNSHELL(1,fun_check_subsequent_ambiguities_344,4);
    check_subsequent_ambiguitiesF100 = T7;
    T6 = FUNSHELL(1,fun_insert_343,6);
    insertF101 = T6;
    FUNINIT(make_ambiguousF98, 2,FREEREF(0),metF97);
    FUNINIT(precedes_allQF99, 3,FREEREF(2),metF97,FREEREF(1));
    FUNINIT(check_subsequent_ambiguitiesF100, 4,metF97,make_ambiguousF98,precedes_allQF99,FREEREF(0));
    FUNINIT(insertF101, 6,FREEREF(1),metF97,FREEREF(2),make_ambiguousF98,insertF101,check_subsequent_ambiguitiesF100);
    T3 = (P)YOtail(FREEREF(4));
    CALL2(insertF101,FREEREF(4),T3);
    T5 = (P)YOtail(mets_);
    a1 = T5;
    mets_ = a1;
    goto loop;
    T2 = T4;
    T1 = T2;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(Ysorted_app_mets_1) {
  ARG(order_mets_, 0);
  ARG(args_, 1);
  ARG(mets_, 2);
  P loopF104;
  P aheadF103;
  P oheadF102;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T8 = (P)YOpair(YPfalse,Ynil);
  check_type(T8,CHKREF(YLlstG));
  oheadF102 = T8;
  T7 = (P)YOpair(YPfalse,Ynil);
  check_type(T7,CHKREF(YLlstG));
  aheadF103 = T7;
  T3 = FUNSHELL(1,fun_loop_349,5);
  loopF104 = T3;
  FUNINIT(loopF104, 5,aheadF103,args_,order_mets_,loopF104,oheadF102);
  T2 = CALL1(loopF104,mets_);
  T6 = (P)YOtail(oheadF102);
  T5 = (P)YOtail(aheadF103);
  T4 = CALL2(CHKREF(YOtup),T6,T5);
  T1 = T4;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_loop_351) {
  ARG(i_, 0);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = (P)YOE(i_,FREEREF(3));
  if (T7 != YPfalse) {
    T0 = YPtrue;
  } else {
    T6 = CALL2(CHKREF(YOelt),FREEREF(2),i_);
    T5 = CALL2(CHKREF(Yfun_spec),FREEREF(1),i_);
    T4 = CALL2(CHKREF(YOisaQ),T6,T5);
    if (T4 != YPfalse) {
      T3 = (P)YOA(i_,YPint((P)1));
      a1 = T3;
      i_ = a1;
      goto loop;
      T1 = T2;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(Ymet_appQ) {
  ARG(args_, 0);
  ARG(met_, 1);
  P loopF106;
  P nF105;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YOfun_arity),met_);
  check_type(T4,CHKREF(YLintG));
  nF105 = T4;
  T3 = FUNSHELL(1,fun_loop_351,4);
  loopF106 = T3;
  FUNINIT(loopF106, 4,loopF106,met_,args_,nF105);
  T2 = CALL1(loopF106,YPint((P)0));
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_col_353) {
  ARG(ms_, 0);
  ARG(ans_, 1);
  P ansF108;
  P mF107;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = (P)YOemptyQ(ms_);
  if (T9 != YPfalse) {
    T0 = ans_;
  } else {
    T8 = (P)YOhead(ms_);
    mF107 = T8;
    T7 = CALL2(CHKREF(Ymet_appQ),mF107,FREEREF(0));
    if (T7 != YPfalse) {
      T6 = (P)YOpair(mF107,ans_);
      T5 = T6;
    } else {
      T5 = ans_;
    }
    ansF108 = T5;
    T4 = (P)YOtail(ms_);
    a1 = ansF108;
    a2 = T4;
    ans_ = a1;
    ms_ = a2;
    goto loop;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(Ysorted_app_mets) {
  ARG(args_, 0);
  ARG(gf_, 1);
  P considered_metsF110;
  P colF109;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = FUNSHELL(1,fun_col_353,2);
  colF109 = T5;
  FUNINIT(colF109, 2,args_,colF109);
  T4 = CALL1(CHKREF(YOfun_mets),gf_);
  T3 = KCALL2(colF109,Ynil,T4);
  T2 = T3;
  considered_metsF110 = T2;
  T1 = CALL3(CHKREF(Ysorted_app_mets_1),considered_metsF110,args_,CHKREF(Yorder_mets));
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_col_355) {
  ARG(p_, 0);
  ARG(l_, 1);
  ARG(i_, 2);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T8 = (P)YOE(i_,FREEREF(2));
  if (T8 != YPfalse) {
    T7 = (P)YOemptyQ(l_);
    if (T7 != YPfalse) {
      T6 = CALL1(CHKREF(YOlst),p_);
      T4 = T6;
    } else {
      T5 = CALL1(CHKREF(YOlst),p_);
      (P)YOtail_setter(T5,l_);
      T4 = FREEREF(1);
    }
    T0 = T4;
  } else {
    T3 = (P)YOA(i_,YPint((P)1));
    T2 = (P)YOtail(p_);
    a1 = T3;
    a2 = p_;
    a3 = T2;
    i_ = a1;
    l_ = a2;
    p_ = a3;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(Yopt_args) {
  ARG(args_, 0);
  ARG(n_, 1);
  P colF111;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_col_355,3);
  colF111 = T2;
  FUNINIT(colF111, 3,colF111,args_,n_);
  T1 = CALL3(colF111,YPint((P)0),Ynil,args_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YOgen_cache_arg_pos) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPgen_cache_arg_pos(x_);
  QRET(T0);
}

FUNCODEDEF(YOgen_cache_arg_pos_setter) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPgen_cache_arg_pos_setter(z_,x_);
  QRET(T0);
}

FUNCODEDEF(YOgen_cache_singletons) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPgen_cache_singletons(x_);
  QRET(T0);
}

FUNCODEDEF(YOgen_cache_singletons_setter) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPgen_cache_singletons_setter(z_,x_);
  QRET(T0);
}

FUNCODEDEF(YOgen_cache_classes) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPgen_cache_classes(x_);
  QRET(T0);
}

FUNCODEDEF(YOgen_cache_classes_setter) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPgen_cache_classes_setter(z_,x_);
  QRET(T0);
}

FUNCODEDEF(Ymethod_accessor_offset) {
  ARG(args_, 0);
  ARG(met_, 1);
  ARG(gen_, 2);
  P tmpF116;
  P nF115;
  P slotQF114;
  P tmpF113;
  P slotF112;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T18 = (P)YPmet_env(met_);
  slotF112 = T18;
  tmpF113 = slotF112;
  if (tmpF113 != YPfalse) {
    T17 = (P)YPclass_of(slotF112);
    T16 = (P)YOEE(T17,CHKREF(YLslotG));
    T15 = T16;
  } else {
    T15 = YPfalse;
  }
  T14 = T15;
  slotQF114 = T14;
  T13 = (P)YOlen(args_);
  nF115 = T13;
  tmpF116 = slotQF114;
  if (tmpF116 != YPfalse) {
    T12 = (P)YOE(nF115,YPint((P)1));
    if (T12 != YPfalse) {
      T11 = (P)YPhead(args_);
      T10 = CALL2(CHKREF(Yslot_offset),T11,gen_);
      T5 = T10;
    } else {
      T9 = (P)YPtail(args_);
      T8 = (P)YPhead(T9);
      T7 = (P)YPslot_getter(slotF112);
      T6 = CALL2(CHKREF(Yslot_offset),T8,T7);
      T5 = T6;
    }
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YOsingleton_specQ) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YOclass_isaQ(x_,CHKREF(YLsingletonG));
  QRET(T0);
}

FUNCODEDEF(YOsubclass_specQ) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YOclass_isaQ(x_,CHKREF(YLsubclassG));
  QRET(T0);
}

FUNCODEDEF(YOunion_specQ) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YOclass_isaQ(x_,CHKREF(YLunionG));
  QRET(T0);
}

FUNCODEDEF(YOprecise_specQ) {
  ARG(x_, 0);
  P tmpF119;
  P tmpF118;
  P tmpF117;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T10 = CALL1(CHKREF(YOsingleton_specQ),x_);
  tmpF117 = T10;
  if (tmpF117 != YPfalse) {
    T1 = tmpF117;
  } else {
    T9 = CALL1(CHKREF(YOsubclass_specQ),x_);
    tmpF118 = T9;
    if (tmpF118 != YPfalse) {
      T3 = tmpF118;
    } else {
      T8 = CALL1(CHKREF(YOunion_specQ),x_);
      tmpF119 = T8;
      if (tmpF119 != YPfalse) {
        T7 = (P)YPtype_elts(x_);
        T6 = CALL2(CHKREF(YOanyQ),CHKREF(YOprecise_specQ),T7);
        T5 = T6;
      } else {
        T5 = YPfalse;
      }
      T4 = T5;
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_368) {
  ARG(met_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(Yfun_spec),met_,FREEREF(0));
  T0 = (P)YOE(T1,CHKREF(YLanyG));
  QRET(T0);
}

FUNCODEDEF(YOmets_unspecialized_atQ) {
  ARG(pos_, 0);
  ARG(mets_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_368,1,pos_);
  T0 = CALL2(CHKREF(YOallQ),T1,mets_);
  RET(T0);
}

FUNCODEDEF(fun_370) {
  ARG(met_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(Yfun_spec),met_,FREEREF(0));
  T0 = CALL2(CHKREF(YOsubtypeQ),FREEREF(1),T1);
  QRET(T0);
}

FUNCODEDEF(YOprune_mets_by_type_at) {
  ARG(pos_, 0);
  ARG(type_, 1);
  ARG(mets_, 2);
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = FUNFAB(fun_370,2,pos_,type_);
  T0 = CALL2(CHKREF(YOpick),T1,mets_);
  RET(T0);
}

FUNCODEDEF(fun_372) {
  ARG(met_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL2(CHKREF(Yfun_spec),met_,FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(YOmets_specs_at) {
  ARG(pos_, 0);
  ARG(mets_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = FUNFAB(fun_372,1,pos_);
  T0 = CALL2(CHKREF(YOmap),T1,mets_);
  RET(T0);
}

FUNCODEDEF(fun_374) {
  ARG(spec_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YOsingleton_specQ),spec_);
  QRET(T0);
}

FUNCODEDEF(YOmets_singletons_at) {
  ARG(pos_, 0);
  ARG(mets_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = fun_374;
  T1 = CALL2(CHKREF(YOmets_specs_at),mets_,pos_);
  T0 = CALL2(CHKREF(YOpick),T2,T1);
  RET(T0);
}

FUNCODEDEF(fun_376) {
  ARG(spec_, 0);
  P T0;
  P a1;
loop:
  T0 = CALL1(CHKREF(YOsubclass_specQ),spec_);
  QRET(T0);
}

FUNCODEDEF(YOmets_subclasses_at) {
  ARG(pos_, 0);
  ARG(mets_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = fun_376;
  T1 = CALL2(CHKREF(YOmets_specs_at),mets_,pos_);
  T0 = CALL2(CHKREF(YOpick),T2,T1);
  RET(T0);
}

FUNCODEDEF(fun_loop_378) {
  ARG(assocs_, 0);
  P tmpF124;
  P argF123;
  P valF122;
  P vF121;
  P kF120;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
loop:
  T33 = (P)YOemptyQ(assocs_);
  if (T33 != YPfalse) {
    T32 = (P)YOEE(FREEREF(8),CHKREF(YOgen_cache_classes));
    tmpF124 = T32;
    if (tmpF124 != YPfalse) {
      T31 = BOXVAL(FREEREF(6));
      T30 = (P)YPclass_forward(T31);
      T29 = T30;
    } else {
      T29 = YPfalse;
    }
    T28 = T29;
    if (T28 != YPfalse) {
      T27 = CALL2(CHKREF(YOelt),FREEREF(1),FREEREF(2));
      argF123 = T27;
      CALL1(CHKREF(Yupdate_instance_for_changed_class),argF123);
      T24 = (P)YPclass_of(argF123);
      BOXVAL(FREEREF(6)) = T24;
      T26 = CALL1(FREEREF(8),FREEREF(7));
      a1 = T26;
      assocs_ = a1;
      goto loop;
      T23 = T25;
      T14 = T23;
    } else {
      T22 = (P)YOA(FREEREF(2),YPint((P)1));
      T21 = CALLN(CHKREF(Ygen_lookup_miss_1),6,FREEREF(5),YPfalse,FREEREF(4),FREEREF(3),T22,FREEREF(1));
      valF122 = T21;
      T20 = BOXVAL(FREEREF(6));
      T19 = CALL1(FREEREF(8),FREEREF(7));
      T18 = (P)YOpair(valF122,T19);
      T17 = (P)YOpair(T20,T18);
      T16 = CALL2(FREEREF(9),T17,FREEREF(7));
      T15 = T16;
      T14 = T15;
    }
    T0 = T14;
  } else {
    T13 = (P)YOhead(assocs_);
    kF120 = T13;
    T12 = BOXVAL(FREEREF(6));
    T11 = (P)YOEE(kF120,T12);
    if (T11 != YPfalse) {
      T10 = (P)YOtail(assocs_);
      T9 = (P)YOhead(T10);
      vF121 = T9;
      T8 = (P)YOA(FREEREF(2),YPint((P)1));
      T7 = CALLN(CHKREF(Ygen_lookup_miss_1),6,FREEREF(5),vF121,FREEREF(4),FREEREF(3),T8,FREEREF(1));
      T6 = T7;
      T2 = T6;
    } else {
      T5 = (P)YOtail(assocs_);
      T4 = (P)YOtail(T5);
      a1 = T4;
      assocs_ = a1;
      goto loop;
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss_1_using) {
  ARG(args_, 0);
  ARG(i_, 1);
  ARG(sorted_mets_, 2);
  ARG(mets_, 3);
  ARG(cache_, 4);
  ARG(gen_, 5);
  ARG(all_assocs_setter_, 6);
  ARG(all_assocs_, 7);
  ARG(key_, 8);
  P loopF127;
  P cacheF126;
  P tmpF125;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8,a9;
loop:
  key_ = BOXFAB(key_);
  tmpF125 = cache_;
  if (tmpF125 != YPfalse) {
    T6 = tmpF125;
  } else {
    T7 = (P)YPgen_cache(YPtrue,i_,CHKREF(Ynil),CHKREF(Ynil));
    T6 = T7;
  }
  T5 = T6;
  cacheF126 = T5;
  T4 = FUNSHELL(1,fun_loop_378,10);
  loopF127 = T4;
  FUNINIT(loopF127, 10,loopF127,args_,i_,sorted_mets_,mets_,gen_,key_,cacheF126,all_assocs_,all_assocs_setter_);
  T3 = CALL1(all_assocs_,cacheF126);
  T2 = KCALL1(loopF127,T3);
  T1 = cacheF126;
  QRET(T1);
}

FUNCODEDEF(fun_copy_380) {
  ARG(r_, 0);
  ARG(k_, 1);
  ARG(args_, 2);
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T9 = (P)YOemptyQ(args_);
  if (T9 != YPfalse) {
    T8 = CALL1(CHKREF(YOrevX),r_);
    T0 = T8;
  } else {
    T7 = (P)YOtail(args_);
    T6 = (P)YOA(k_,YPint((P)1));
    T5 = (P)YOEE(k_,FREEREF(1));
    if (T5 != YPfalse) {
      T3 = FREEREF(0);
    } else {
      T4 = (P)YOhead(args_);
      T3 = T4;
    }
    T2 = (P)YOpair(T3,r_);
    a1 = T7;
    a2 = T6;
    a3 = T2;
    args_ = a1;
    k_ = a2;
    r_ = a3;
    goto loop;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YOspecd_args) {
  ARG(arg_, 0);
  ARG(i_, 1);
  ARG(args_, 2);
  P copyF128;
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = FUNSHELL(1,fun_copy_380,3);
  copyF128 = T2;
  FUNINIT(copyF128, 3,arg_,i_,copyF128);
  T1 = KCALL3(copyF128,args_,YPint((P)0),Ynil);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_loop_382) {
  ARG(singletons_, 0);
  P metsF133;
  P smetsF132;
  P argsF131;
  P argF130;
  P singF129;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T13 = (P)YOemptyQ(singletons_);
  if (T13 != YPfalse) {
    T0 = FREEREF(5);
  } else {
    T12 = (P)YOhead(singletons_);
    singF129 = T12;
    T11 = (P)YPtype_object(singF129);
    argF130 = T11;
    T10 = CALL3(CHKREF(YOspecd_args),FREEREF(1),FREEREF(0),argF130);
    argsF131 = T10;
    T9 = CALL2(CHKREF(Ychoose_methods),FREEREF(2),argsF131);
    smetsF132 = T9;
    T8 = CALL3(CHKREF(YOprune_mets_by_type_at),FREEREF(3),singF129,FREEREF(0));
    metsF133 = T8;
    CALLN(CHKREF(Ygen_lookup_miss_1_using),9,argF130,CHKREF(YOgen_cache_singletons),CHKREF(YOgen_cache_singletons_setter),FREEREF(2),FREEREF(5),metsF133,smetsF132,FREEREF(0),argsF131);
    T7 = (P)YOtail(singletons_);
    a1 = T7;
    singletons_ = a1;
    goto loop;
    T5 = T6;
    T4 = T5;
    T3 = T4;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(Yensure_singleton_cache) {
  ARG(args_, 0);
  ARG(i_, 1);
  ARG(sorted_mets_, 2);
  ARG(mets_, 3);
  ARG(cache_, 4);
  ARG(gen_, 5);
  P loopF138;
  P cacheF137;
  P singletonsF136;
  P subclassesF135;
  P tmpF134;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  tmpF134 = cache_;
  if (tmpF134 != YPfalse) {
    T1 = tmpF134;
  } else {
    T15 = CALL2(CHKREF(YOmets_subclasses_at),mets_,i_);
    subclassesF135 = T15;
    T14 = (P)YOemptyQ(subclassesF135);
    if (T14 != YPfalse) {
      T13 = CALL2(CHKREF(YOmets_singletons_at),mets_,i_);
      singletonsF136 = T13;
      T12 = (P)YOemptyQ(singletonsF136);
      if (T12 != YPfalse) {
        T6 = YPfalse;
      } else {
        T11 = (P)YPgen_cache(YPtrue,i_,CHKREF(Ynil),CHKREF(Ynil));
        cacheF137 = T11;
        (P)YPfun_cache_setter(cacheF137,gen_);
        T10 = FUNSHELL(1,fun_loop_382,6);
        loopF138 = T10;
        FUNINIT(loopF138, 6,i_,args_,gen_,mets_,loopF138,cacheF137);
        T9 = KCALL1(loopF138,singletonsF136);
        T8 = T9;
        T7 = T8;
        T6 = T7;
      }
      T5 = T6;
      T3 = T5;
    } else {
      T4 = (P)YPgen_cache(YPfalse,i_,CHKREF(Ynil),CHKREF(Ynil));
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss_1) {
  ARG(args_, 0);
  ARG(i_, 1);
  ARG(sorted_mets_, 2);
  ARG(mets_, 3);
  ARG(ocache_, 4);
  ARG(gen_, 5);
  P tmpF148;
  P tmpF147;
  P tmpF146;
  P tmpF145;
  P metsF144;
  P app_metsF143;
  P classF142;
  P singQF141;
  P cacheF140;
  P argF139;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T34 = CALL1(CHKREF(YOfun_arity),gen_);
  T33 = (P)YOE(i_,T34);
  if (T33 != YPfalse) {
    T32 = (P)YOhead(sorted_mets_);
    T31 = CALL3(CHKREF(Ymethod_accessor_offset),gen_,T32,args_);
    tmpF148 = T31;
    if (tmpF148 != YPfalse) {
      T30 = tmpF148;
    } else {
      T30 = sorted_mets_;
    }
    T29 = T30;
    T0 = T29;
  } else {
    T28 = CALL2(CHKREF(YOelt),args_,i_);
    argF139 = T28;
    T27 = CALLN(CHKREF(Yensure_singleton_cache),6,gen_,ocache_,mets_,sorted_mets_,i_,args_);
    cacheF140 = T27;
    T26 = (P)YOhead(sorted_mets_);
    T25 = CALL2(CHKREF(Yfun_spec),T26,i_);
    T24 = CALL1(CHKREF(YOsingleton_specQ),T25);
    singQF141 = T24;
    tmpF145 = singQF141;
    if (tmpF145 != YPfalse) {
      T23 = (P)YOEE(ocache_,cacheF140);
      T22 = T23;
    } else {
      T22 = YPfalse;
    }
    T21 = T22;
    tmpF146 = T21;
    if (tmpF146 != YPfalse) {
      T16 = tmpF146;
    } else {
      tmpF147 = cacheF140;
      if (tmpF147 != YPfalse) {
        T20 = (P)YPgen_cache_missableQ(cacheF140);
        T19 = CALL1(CHKREF(Ynot),T20);
        T18 = T19;
      } else {
        T18 = YPfalse;
      }
      T17 = T18;
      T16 = T17;
    }
    T15 = T16;
    if (T15 != YPfalse) {
      T14 = (P)YPsingleton(argF139);
      T13 = CALL3(CHKREF(YOprune_mets_by_type_at),mets_,T14,i_);
      metsF144 = T13;
      T12 = CALLN(CHKREF(Ygen_lookup_miss_1_using),9,argF139,CHKREF(YOgen_cache_singletons),CHKREF(YOgen_cache_singletons_setter),gen_,cacheF140,metsF144,sorted_mets_,i_,args_);
      T11 = T12;
      T4 = T11;
    } else {
      if (singQF141 != YPfalse) {
        T5 = cacheF140;
      } else {
        T10 = (P)YPclass_of(argF139);
        classF142 = T10;
        T9 = CALL3(CHKREF(YOprune_mets_by_type_at),mets_,classF142,i_);
        app_metsF143 = T9;
        T8 = CALLN(CHKREF(Ygen_lookup_miss_1_using),9,classF142,CHKREF(YOgen_cache_classes),CHKREF(YOgen_cache_classes_setter),gen_,cacheF140,app_metsF143,sorted_mets_,i_,args_);
        T7 = T8;
        T6 = T7;
        T5 = T6;
      }
      T4 = T5;
    }
    T3 = T4;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss) {
  ARG(args_, 0);
  ARG(gen_, 1);
  P metsF149;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL2(CHKREF(Ychoose_methods),gen_,args_);
  metsF149 = T4;
  T3 = (P)YPfun_cache(gen_);
  T2 = (P)YPgen_mets(gen_);
  T1 = CALLN(CHKREF(Ygen_lookup_miss_1),6,gen_,T3,T2,metsF149,YPint((P)0),args_);
  T0 = T1;
  QRET(T0);
}

INLINE P Ygen_lookup(P gen_,P args_) {
  P cF152;
  P tmpF151;
  P nF150;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = (P)YPgen_sig(gen_);
  T8 = (P)YPsig_arity(T9);
  nF150 = T8;
  T7 = (P)YPfun_cache(gen_);
  tmpF151 = T7;
  if (tmpF151 != YPfalse) {
    T4 = tmpF151;
  } else {
    T6 = CALL2(CHKREF(Ygen_lookup_miss),gen_,args_);
    T5 = (P)YPfun_cache_setter(T6,gen_);
    T4 = T5;
  }
  T3 = T4;
  cF152 = T3;
  T2 = (P)Ygen_lookup_1(gen_,cF152,YPint((P)0),nF150,args_,args_);
  T1 = T2;
  T0 = T1;
  return T0;
}

INLINE P Yslot_value_at(P object_,P offset_) {
  P slotsF154;
  P valF153;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = (P)YPiu(offset_);
  T10 = (P)YPslot_elt(object_,T11);
  valF153 = T10;
  T9 = (P)YOEE(valF153,CHKREF(Ynul_slot));
  if (T9 != YPfalse) {
    T8 = CALL1(CHKREF(Yobject_slots),object_);
    slotsF154 = T8;
    T7 = CALL2(CHKREF(YOelt),slotsF154,offset_);
    T6 = (P)YPslot_init(T7);
    T5 = CALL1(T6,object_);
    T4 = (P)YPiu(offset_);
    T3 = (P)YPslot_elt_setter(T5,object_,T4);
    T2 = T3;
    T1 = T2;
  } else {
    T1 = valF153;
  }
  T0 = T1;
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

INLINE P Ygen_lookup_1_using(P key_,P prev_assocs_,P assocs_,P missableQ_,P cache_offset_,P gen_,P cache_,P i_,P n_,P args_,P all_args_) {
  P nxt_assocsF159;
  P old_assocsF158;
  P vF157;
  P tail_assocsF156;
  P kF155;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11;
loop:
  T26 = (P)YOemptyQ(assocs_);
  if (T26 != YPfalse) {
    if (missableQ_ != YPfalse) {
      T23 = CHKREF(YDmissed_dispatch);
    } else {
      T24 = CALL2(CHKREF(Ygen_lookup_miss),gen_,all_args_);
      (P)YPfun_cache_setter(T24,gen_);
      T25 = (P)Ygen_lookup(gen_,all_args_);
      T23 = T25;
    }
    T0 = T23;
  } else {
    T22 = (P)YPhead(assocs_);
    kF155 = T22;
    T21 = (P)YPtail(assocs_);
    tail_assocsF156 = T21;
    T20 = (P)YOEE(kF155,key_);
    if (T20 != YPfalse) {
      T19 = (P)YPhead(tail_assocsF156);
      vF157 = T19;
      T18 = (P)YPiu(cache_offset_);
      T17 = (P)YPslot_elt(cache_,T18);
      old_assocsF158 = T17;
      T13 = (P)YOEE(old_assocsF158,assocs_);
      if (T13 != YPfalse) {
      } else {
        T12 = (P)YPtail(tail_assocsF156);
        nxt_assocsF159 = T12;
        T9 = (P)YPiu(cache_offset_);
        (P)YPslot_elt_setter(assocs_,cache_,T9);
        (P)YPtail_setter(old_assocsF158,tail_assocsF156);
        T11 = (P)YPtail(prev_assocs_);
        T10 = (P)YPtail_setter(nxt_assocsF159,T11);
        T8 = T10;
      }
      T16 = (P)YOA(i_,YPint((P)1));
      T15 = (P)YPtail(args_);
      T14 = (P)Ygen_lookup_1(gen_,vF157,T16,n_,T15,all_args_);
      T7 = T14;
      T6 = T7;
      T3 = T6;
    } else {
      T5 = (P)YPtail(tail_assocsF156);
      a1 = key_;
      a2 = assocs_;
      a3 = T5;
      a4 = missableQ_;
      a5 = cache_offset_;
      a6 = gen_;
      a7 = cache_;
      a8 = i_;
      a9 = n_;
      a10 = args_;
      a11 = all_args_;
      key_ = a1;
      prev_assocs_ = a2;
      assocs_ = a3;
      missableQ_ = a4;
      cache_offset_ = a5;
      gen_ = a6;
      cache_ = a7;
      i_ = a8;
      n_ = a9;
      args_ = a10;
      all_args_ = a11;
      goto loop;
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  return T0;
}

P Ygen_lookup_1(P gen_,P cache_,P i_,P n_,P args_,P all_args_) {
  P assocsF163;
  P valF162;
  P assocsF161;
  P argF160;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  T28 = (P)YOE(i_,n_);
  if (T28 != YPfalse) {
    T27 = (P)YPclass_of(cache_);
    T26 = (P)YOEE(T27,CHKREF(YLintG_class));
    if (T26 != YPfalse) {
      T25 = (P)YOE(n_,YPint((P)1));
      if (T25 != YPfalse) {
        T24 = (P)YPhead(all_args_);
        T23 = (P)Yslot_value_at(T24,cache_);
        T18 = T23;
      } else {
        T22 = (P)YPhead(all_args_);
        T21 = (P)YPtail(all_args_);
        T20 = (P)YPhead(T21);
        T19 = (P)Yslot_value_at_setter(T22,T20,cache_);
        T18 = T19;
      }
      T14 = T18;
    } else {
      T17 = (P)YPhead(cache_);
      T16 = (P)YPtail(cache_);
      T15 = (P)YPPmep_apply(T17,T16,all_args_);
      T14 = T15;
    }
    T0 = T14;
  } else {
    T13 = (P)YPhead(args_);
    argF160 = T13;
    T12 = (P)YPgen_cache_singletons(cache_);
    assocsF161 = T12;
    T11 = (P)YPgen_cache_missableQ(cache_);
    T10 = (P)Ygen_lookup_1_using(argF160,assocsF161,assocsF161,T11,CHKREF(YDgen_cache_singletons_offset),gen_,cache_,i_,n_,args_,all_args_);
    T9 = T10;
    valF162 = T9;
    T8 = (P)YOEE(valF162,CHKREF(YDmissed_dispatch));
    if (T8 != YPfalse) {
      T7 = (P)YPgen_cache_classes(cache_);
      assocsF163 = T7;
      T6 = (P)YPclass_of(argF160);
      T5 = (P)Ygen_lookup_1_using(T6,assocsF163,assocsF163,YPfalse,CHKREF(YDgen_cache_classes_offset),gen_,cache_,i_,n_,args_,all_args_);
      T4 = T5;
      T3 = T4;
    } else {
      T3 = valF162;
    }
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  return T0;
}

FUNCODEDEF(Ychoose_methods) {
  ARG(args_, 0);
  ARG(gen_, 1);
  P ambiguous_metsF166;
  P sorted_metsF165;
  P ord_amb_metsF164;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T12 = CALL2(CHKREF(Ysorted_app_mets),gen_,args_);
  ord_amb_metsF164 = T12;
  T11 = CALL2(CHKREF(YOelt),ord_amb_metsF164,YPint((P)0));
  sorted_metsF165 = T11;
  T10 = CALL2(CHKREF(YOelt),ord_amb_metsF164,YPint((P)1));
  ambiguous_metsF166 = T10;
  T9 = (P)YOlen(ambiguous_metsF166);
  T8 = (P)YOL(YPint((P)0),T9);
  if (T8 != YPfalse) {
    T7 = CALL3(CHKREF(Yerror),CHKREF(lit_280),gen_,args_);
    T3 = T7;
  } else {
    T6 = (P)YOemptyQ(sorted_metsF165);
    if (T6 != YPfalse) {
      T5 = CALL3(CHKREF(Yerror),CHKREF(lit_279),gen_,args_);
      T4 = T5;
    } else {
      T4 = sorted_metsF165;
    }
    T3 = T4;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YPdispatch) {
  ARG(args_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPfun_reg();
  T0 = (P)Ygen_lookup(T1,args_);
  QRET(T0);
}

FUNCODEDEF(YPpatch_early_generic) {
  ARG(generic_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPmet_code(CHKREF(YPdispatch));
  T0 = (P)YPgen_code_setter(T1,generic_);
  QRET(T0);
}

FUNCODEDEF(Yapply) {
  ARG(args_, 0);
  ARG(proc_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPPapply(proc_,YPfalse,args_);
  QRET(T0);
}

FUNCODEDEF(YPapply_next_method) {
  ARG(args_, 0);
  ARG(next_mets_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  if (next_mets_ != YPfalse) {
    T4 = (P)YPhead(next_mets_);
    T3 = (P)YPtail(next_mets_);
    T2 = (P)YPPapply(T4,T3,args_);
    T0 = T2;
  } else {
    T1 = CALL1(CHKREF(Yerror),CHKREF(lit_288));
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(YPcall_next_method) {
  ARG(args_, 0);
  ARG(next_mets_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YPapply_next_method),next_mets_,args_);
  QRET(T0);
}

FUNCODEDEF(Yfapply) {
  ARG(args_, 0);
  ARG(fproc_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPfapply(fproc_,args_);
  QRET(T0);
}

FUNCODEDEF(Yfun_names) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Yfun_sig),x_);
  T0 = CALL1(CHKREF(Ysig_names),T1);
  QRET(T0);
}

FUNCODEDEF(Yfun_names_setter) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(Yfun_sig),x_);
  T0 = CALL2(CHKREF(Ysig_names_setter),z_,T1);
  QRET(T0);
}

FUNCODEDEF(Yfun_specs) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Yfun_sig),x_);
  T0 = CALL1(CHKREF(Ysig_specs),T1);
  QRET(T0);
}

FUNCODEDEF(Yfun_specs_setter) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(Yfun_sig),x_);
  T0 = CALL2(CHKREF(Ysig_specs_setter),z_,T1);
  QRET(T0);
}

FUNCODEDEF(Yfun_naryQ) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Yfun_sig),x_);
  T0 = CALL1(CHKREF(Ysig_naryQ),T1);
  QRET(T0);
}

FUNCODEDEF(Yfun_naryQ_setter) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(Yfun_sig),x_);
  T0 = CALL2(CHKREF(Ysig_naryQ_setter),z_,T1);
  QRET(T0);
}

FUNCODEDEF(Yfun_arity) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Yfun_sig),x_);
  T0 = CALL1(CHKREF(Ysig_arity),T1);
  QRET(T0);
}

FUNCODEDEF(Yfun_arity_setter) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(Yfun_sig),x_);
  T0 = CALL2(CHKREF(Ysig_arity_setter),z_,T1);
  QRET(T0);
}

FUNCODEDEF(Yfun_value) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Yfun_sig),x_);
  T0 = CALL1(CHKREF(Ysig_value),T1);
  QRET(T0);
}

FUNCODEDEF(Yfun_value_setter) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL1(CHKREF(Yfun_sig),x_);
  T0 = CALL2(CHKREF(Ysig_value_setter),z_,T1);
  QRET(T0);
}

FUNCODEDEF(Yobject_class) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPclass_of(x_);
  QRET(T0);
}

FUNCODEDEF(YOclass_parents) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPclass_parents(x_);
  QRET(T0);
}

FUNCODEDEF(fun_remove_next_410) {
  ARG(l_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YOhead(l_);
  T2 = (P)YOEE(T3,FREEREF(0));
  if (T2 != YPfalse) {
    T1 = (P)YOtail(l_);
    T0 = T1;
  } else {
    T0 = l_;
  }
  QRET(T0);
}

FUNCODEDEF(fun_unconstrained_class_in_parents_411) {
  ARG(c_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPclass_direct_parents(c_);
  T0 = CALL2(CHKREF(YOanyQ),FREEREF(0),T1);
  QRET(T0);
}

FUNCODEDEF(fun_p_unconstrained_inQ_412) {
  ARG(l_, 0);
  P tmpF167;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = (P)YOhead(l_);
  T5 = (P)YOEE(T6,FREEREF(0));
  tmpF167 = T5;
  if (tmpF167 != YPfalse) {
    T1 = tmpF167;
  } else {
    T4 = (P)YOtail(l_);
    T3 = CALL2(CHKREF(YOmemQ),T4,FREEREF(0));
    T2 = CALL1(CHKREF(Ynot),T3);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_p_in_and_unconstrained_inQ_413) {
  ARG(l_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YOhead(l_);
  T0 = (P)YOEE(T1,FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_unconstrained_class_414) {
  ARG(p_, 0);
  P tmpF171;
  P tmpF170;
  P p_unconstrained_inQF169;
  P p_in_and_unconstrained_inQF168;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = FUNSHELL(0,fun_p_in_and_unconstrained_inQ_413,1);
  p_in_and_unconstrained_inQF168 = T8;
  T7 = FUNSHELL(0,fun_p_unconstrained_inQ_412,1);
  p_unconstrained_inQF169 = T7;
  FUNINIT(p_in_and_unconstrained_inQF168, 1,p_);
  FUNINIT(p_unconstrained_inQF169, 1,p_);
  T6 = CALL2(CHKREF(YOanyQ),p_in_and_unconstrained_inQF168,FREEREF(0));
  tmpF170 = T6;
  if (tmpF170 != YPfalse) {
    T5 = CALL2(CHKREF(YOallQ),p_unconstrained_inQF169,FREEREF(0));
    tmpF171 = T5;
    if (tmpF171 != YPfalse) {
      T4 = p_;
    } else {
      T4 = YPfalse;
    }
    T3 = T4;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_merge_lists_415) {
  ARG(remaining_lists_, 0);
  ARG(partial_cpl_, 1);
  P remove_nextF175;
  P nextF174;
  P unconstrained_class_in_parentsF173;
  P unconstrained_classF172;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T14 = CALL2(CHKREF(YOallQ),CHKREF(YOOemptyQ),remaining_lists_);
  if (T14 != YPfalse) {
    T13 = CALL1(CHKREF(YOrevX),partial_cpl_);
    T0 = T13;
  } else {
    T12 = FUNSHELL(0,fun_unconstrained_class_414,1);
    unconstrained_classF172 = T12;
    T11 = FUNSHELL(0,fun_unconstrained_class_in_parents_411,1);
    unconstrained_class_in_parentsF173 = T11;
    FUNINIT(unconstrained_classF172, 1,remaining_lists_);
    FUNINIT(unconstrained_class_in_parentsF173, 1,unconstrained_classF172);
    T10 = CALL2(CHKREF(YOanyQ),unconstrained_class_in_parentsF173,partial_cpl_);
    nextF174 = T10;
    if (nextF174 != YPfalse) {
      T9 = FUNSHELL(0,fun_remove_next_410,1);
      remove_nextF175 = T9;
      FUNINIT(remove_nextF175, 1,nextF174);
      T8 = (P)YOpair(nextF174,partial_cpl_);
      T7 = CALL2(CHKREF(YOmap),remove_nextF175,remaining_lists_);
      a1 = T8;
      a2 = T7;
      partial_cpl_ = a1;
      remaining_lists_ = a2;
      goto loop;
      T5 = T6;
      T3 = T5;
    } else {
      T4 = CALL1(CHKREF(Yerror),CHKREF(lit_308));
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(Yclass_ordered_parents) {
  ARG(c_, 0);
  P parentsF177;
  P merge_listsF176;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = FUNSHELL(1,fun_merge_lists_415,1);
  merge_listsF176 = T7;
  FUNINIT(merge_listsF176, 1,merge_listsF176);
  T6 = (P)YPclass_direct_parents(c_);
  parentsF177 = T6;
  T5 = CALL1(CHKREF(YOlst),c_);
  T4 = CALL2(CHKREF(YOmap),CHKREF(YOclass_parents),parentsF177);
  T3 = (P)YOadd(T4,parentsF177);
  T2 = CALL2(merge_listsF176,T5,T3);
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YOclass_direct_slots) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPclass_direct_slots(x_);
  QRET(T0);
}

FUNCODEDEF(Yclass_ordered_slots) {
  ARG(x_, 0);
  P slotsF178;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = (P)YPclass_parents(x_);
  T4 = CALL2(CHKREF(YOmap),CHKREF(YOclass_direct_slots),T5);
  T3 = CALL3(CHKREF(YOreduce),CHKREF(YOcat2),Ynil,T4);
  T2 = CALL1(CHKREF(YOdel_dups),T3);
  slotsF178 = T2;
  T1 = (P)YOlen(slotsF178);
  (P)YPclass_slot_len_setter(T1,x_);
  T0 = slotsF178;
  RET(T0);
}

FUNCODEDEF(Ydel_class) {
  ARG(class_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_420) {
  ARG(parent_, 0);
  P T2,T1,T0;
  P a1;
loop:
  T2 = (P)YPclass_direct_children(parent_);
  T1 = (P)YOadd_new(T2,FREEREF(0));
  T0 = (P)YPclass_direct_children_setter(T1,parent_);
  QRET(T0);
}

FUNCODEDEF(Yfab_class) {
  ARG(parents_, 0);
  ARG(name_, 1);
  P xF179;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = (P)YPclass(YPint((P)0),name_,parents_,Ynil,Ynil,Ynil,Ynil,Ynil,Ynil,YPfalse);
  xF179 = T9;
  T4 = (P)YPclass_direct_parents(xF179);
  T3 = (P)YOemptyQ(T4);
  if (T3 != YPfalse) {
    T2 = CALL1(CHKREF(YOlst),xF179);
    T1 = (P)YPclass_direct_parents_setter(T2,xF179);
  } else {
  }
  T6 = FUNFAB(fun_420,1,xF179);
  T5 = (P)YPclass_direct_parents(xF179);
  CALL2(CHKREF(YOdo),T6,T5);
  T7 = CALL1(CHKREF(Yclass_ordered_parents),xF179);
  (P)YPclass_parents_setter(T7,xF179);
  T8 = CALL1(CHKREF(Yclass_ordered_slots),xF179);
  (P)YPclass_slots_setter(T8,xF179);
  T0 = xF179;
  RET(T0);
}

FUNCODEDEF(Yrefab_class) {
  ARG(parents_, 0);
  ARG(old_class_, 1);
  P new_classF180;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPclass_direct_slots(old_class_);
  T1 = CALL2(CHKREF(Yfab_class),parents_,T2);
  new_classF180 = T1;
  (P)YPclass_forward_setter(new_classF180,old_class_);
  T0 = new_classF180;
  RET(T0);
}

FUNCODEDEF(Yobject_slots) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPclass_of(x_);
  T0 = (P)YPclass_slots(T1);
  QRET(T0);
}

FUNCODEDEF(Yobject_parents) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPclass_of(x_);
  T0 = (P)YPclass_parents(T1);
  QRET(T0);
}

FUNCODEDEF(Yensure_fresh_object) {
  ARG(x_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YPclass_of(x_);
  T2 = (P)YPclass_forward(T3);
  if (T2 != YPfalse) {
    T1 = CALL1(CHKREF(Yupdate_instance_for_changed_class),x_);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_loop_426) {
  ARG(slots_, 0);
  ARG(i_, 1);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = (P)YOemptyQ(slots_);
  if (T8 != YPfalse) {
    T0 = CHKREF(YDgetter_not_found);
  } else {
    T7 = (P)YOhead(slots_);
    T6 = (P)YPslot_getter(T7);
    T5 = (P)YOEE(T6,FREEREF(1));
    if (T5 != YPfalse) {
      T1 = i_;
    } else {
      T4 = (P)YOA(i_,YPint((P)1));
      T3 = (P)YOtail(slots_);
      a1 = T4;
      a2 = T3;
      i_ = a1;
      slots_ = a2;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(Yslot_offset) {
  ARG(getter_, 0);
  ARG(object_, 1);
  P loopF181;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_loop_426,2);
  loopF181 = T3;
  FUNINIT(loopF181, 2,loopF181,getter_);
  T2 = CALL1(CHKREF(Yobject_slots),object_);
  T1 = KCALL2(loopF181,YPint((P)0),T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(Yslot_value) {
  ARG(getter_, 0);
  ARG(object_, 1);
  P offsetF182;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  CALL1(CHKREF(Yensure_fresh_object),object_);
  T5 = CALL2(CHKREF(Yslot_offset),object_,getter_);
  offsetF182 = T5;
  T4 = (P)YOE(offsetF182,CHKREF(YDgetter_not_found));
  if (T4 != YPfalse) {
    T3 = CALL3(CHKREF(Yerror),CHKREF(lit_328),getter_,object_);
    T1 = T3;
  } else {
    T2 = (P)Yslot_value_at(object_,offsetF182);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(Yslot_value_setter) {
  ARG(getter_, 0);
  ARG(object_, 1);
  ARG(z_, 2);
  P offsetF183;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  CALL1(CHKREF(Yensure_fresh_object),object_);
  T5 = CALL2(CHKREF(Yslot_offset),object_,getter_);
  offsetF183 = T5;
  T4 = (P)YOE(offsetF183,CHKREF(YDgetter_not_found));
  if (T4 != YPfalse) {
    T3 = CALL3(CHKREF(Yerror),CHKREF(lit_330),getter_,object_);
    T1 = T3;
  } else {
    T2 = (P)Yslot_value_at_setter(z_,object_,offsetF183);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_430) {
  ARG(vals_, 0);
  ARG(getters_, 1);
  P tmpF184;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = (P)YOEE(getters_,Ynil);
  tmpF184 = T10;
  if (tmpF184 != YPfalse) {
    T8 = tmpF184;
  } else {
    T9 = (P)YOEE(vals_,Ynil);
    T8 = T9;
  }
  T7 = T8;
  T6 = CALL1(CHKREF(Ynot),T7);
  if (T6 != YPfalse) {
    T2 = (P)YOhead(vals_);
    T1 = (P)YOhead(getters_);
    CALL3(CHKREF(Yslot_value_setter),T2,FREEREF(1),T1);
    T5 = (P)YOtail(getters_);
    T4 = (P)YOtail(vals_);
    a1 = T5;
    a2 = T4;
    getters_ = a1;
    vals_ = a2;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(YPisa) {
  ARG(vals_, 0);
  ARG(getters_, 1);
  ARG(parents_, 2);
  P loopF187;
  P objectF186;
  P parentF185;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = (P)YPhead(parents_);
  parentF185 = T7;
  T6 = (P)YPclass_slot_len(parentF185);
  T5 = (P)YPiu(T6);
  T4 = (P)YPobject_of(parentF185,T5);
  objectF186 = T4;
  T3 = FUNSHELL(1,fun_loop_430,2);
  loopF187 = T3;
  FUNINIT(loopF187, 2,loopF187,objectF186);
  T2 = KCALL2(loopF187,getters_,vals_);
  T1 = objectF186;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_432) {
  ARG(mets_, 0);
  P metF188;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = (P)YOemptyQ(mets_);
  if (T9 != YPfalse) {
    T8 = CALL1(CHKREF(Yerror),CHKREF(lit_335));
    T0 = T8;
  } else {
    T7 = (P)YOhead(mets_);
    metF188 = T7;
    T6 = CALL2(CHKREF(Yfun_spec),metF188,YPint((P)0));
    T5 = (P)YOEE(T6,FREEREF(1));
    if (T5 != YPfalse) {
      T2 = metF188;
    } else {
      T4 = (P)YOtail(mets_);
      a1 = T4;
      mets_ = a1;
      goto loop;
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(Yfind_getter) {
  ARG(getter_, 0);
  ARG(owner_, 1);
  P loopF189;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_loop_432,2);
  loopF189 = T3;
  FUNINIT(loopF189, 2,loopF189,owner_);
  T2 = CALL1(CHKREF(YOfun_mets),getter_);
  T1 = KCALL1(loopF189,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_loop_434) {
  ARG(mets_, 0);
  P tmpF191;
  P metF190;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T13 = (P)YOemptyQ(mets_);
  if (T13 != YPfalse) {
    T12 = CALL1(CHKREF(Yerror),CHKREF(lit_338));
    T0 = T12;
  } else {
    T11 = (P)YOhead(mets_);
    metF190 = T11;
    T10 = CALL2(CHKREF(Yfun_spec),metF190,YPint((P)1));
    T9 = (P)YOEE(T10,FREEREF(1));
    tmpF191 = T9;
    if (tmpF191 != YPfalse) {
      T8 = CALL2(CHKREF(Yfun_spec),metF190,YPint((P)0));
      T7 = CALL2(CHKREF(YOtype_equalQ),T8,FREEREF(2));
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    if (T5 != YPfalse) {
      T2 = metF190;
    } else {
      T4 = (P)YOtail(mets_);
      a1 = T4;
      mets_ = a1;
      goto loop;
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(Yfind_setter) {
  ARG(zetter_, 0);
  ARG(type_, 1);
  ARG(owner_, 2);
  P loopF192;
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = FUNSHELL(1,fun_loop_434,3);
  loopF192 = T3;
  FUNINIT(loopF192, 3,loopF192,owner_,type_);
  T2 = CALL1(CHKREF(YOfun_mets),zetter_);
  T1 = KCALL1(loopF192,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_436) {
  ARG(g_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPfun_cache_setter(YPfalse,g_);
  QRET(T0);
}

FUNCODEDEF(Yforward_class) {
  ARG(old_class_, 0);
  P new_classF193;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = (P)YPclone(old_class_);
  new_classF193 = T4;
  T2 = fun_436;
  T1 = (P)YPclass_gens(old_class_);
  CALL2(CHKREF(YOdo),T2,T1);
  T3 = (P)YPclass_forward_setter(new_classF193,old_class_);
  T0 = T3;
  QRET(T0);
}

FUNCODEDEF(fun_visit_438) {
  ARG(x_, 0);
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = BOXVAL(FREEREF(2));
  T6 = CALL2(CHKREF(YOmemQ),T7,x_);
  T5 = CALL1(CHKREF(Ynot),T6);
  if (T5 != YPfalse) {
    T2 = BOXVAL(FREEREF(2));
    T1 = (P)YOadd(T2,x_);
    BOXVAL(FREEREF(2)) = T1;
    CALL1(FREEREF(1),x_);
    T4 = (P)YPclass_direct_children(x_);
    T3 = CALL2(CHKREF(YOdo),FREEREF(0),T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(YOdo_children) {
  ARG(x_, 0);
  ARG(f_, 1);
  P visitF195;
  P visitedF194;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  visitedF194 = Ynil;
  visitedF194 = BOXFAB(visitedF194);
  T4 = FUNSHELL(0,fun_visit_438,3);
  visitF195 = T4;
  FUNINIT(visitF195, 3,visitF195,f_,visitedF194);
  T3 = KCALL1(visitF195,x_);
  T2 = T3;
  T0 = T2;
  QRET(T0);
}

FUNCODEDEF(fun_440) {
  ARG(slot_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPslot_getter(slot_);
  T0 = (P)YPfun_cache_setter(YPfalse,T1);
  QRET(T0);
}

FUNCODEDEF(YPslot) {
  ARG(init_, 0);
  ARG(type_, 1);
  ARG(setter_, 2);
  ARG(getter_, 3);
  ARG(owner_, 4);
  P setter_metF199;
  P getter_metF198;
  P slotF197;
  P classF196;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  classF196 = owner_;
  T23 = (P)YPpair(CHKREF(YLslotG),Ynil);
  T22 = (P)YPpair(CHKREF(Yslot_init),Ynil);
  T21 = (P)YPpair(CHKREF(Yslot_type),T22);
  T20 = (P)YPpair(CHKREF(Yslot_setter),T21);
  T19 = (P)YPpair(CHKREF(Yslot_getter),T20);
  T18 = (P)YPpair(CHKREF(Yslot_owner),T19);
  T17 = (P)YPpair(init_,Ynil);
  T16 = (P)YPpair(type_,T17);
  T15 = (P)YPpair(setter_,T16);
  T14 = (P)YPpair(getter_,T15);
  T13 = (P)YPpair(owner_,T14);
  T12 = CALL3(CHKREF(YPisa),T23,T18,T13);
  slotF197 = T12;
  T11 = CALL2(CHKREF(Yfind_getter),owner_,getter_);
  getter_metF198 = T11;
  T10 = CALL3(CHKREF(Yfind_setter),owner_,type_,setter_);
  setter_metF199 = T10;
  (P)YPmet_env_setter(slotF197,getter_metF198);
  (P)YPmet_env_setter(slotF197,setter_metF199);
  T6 = (P)YPclass_direct_slots(classF196);
  T5 = CALL1(CHKREF(YOlst),slotF197);
  T4 = CALL2(CHKREF(YOcat2),T6,T5);
  (P)YPclass_direct_slots_setter(T4,classF196);
  T7 = CALL1(CHKREF(Yclass_ordered_slots),classF196);
  (P)YPclass_slots_setter(T7,classF196);
  T9 = fun_440;
  T8 = (P)YPclass_slots(classF196);
  CALL2(CHKREF(YOdo),T9,T8);
  T3 = slotF197;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
}

P YPupdate_instance_for_changed_class(P new_object_) {
  P a1;
loop:
  return new_object_;
}

FUNCODEDEF(Yupdate_instance_for_changed_class) {
  ARG(object_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPupdate_instance_for_changed_class(object_);
  QRET(T0);
}

FUNCODEDEF(Yfab_gen) {
  ARG(mets_, 0);
  ARG(naryQ_, 1);
  ARG(specs_, 2);
  ARG(names_, 3);
  ARG(name_, 4);
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T23 = (P)YPpair(CHKREF(YLgenG),Ynil);
  T22 = (P)YPpair(CHKREF(Yfun_mets),Ynil);
  T21 = (P)YPpair(CHKREF(Yfun_sig),T22);
  T20 = (P)YPpair(CHKREF(Yfun_name),T21);
  T19 = (P)YPpair(CHKREF(Yfun_code),T20);
  T18 = CALL1(CHKREF(Yfun_code),CHKREF(YPdispatch));
  T17 = (P)YPpair(CHKREF(YLsigG),Ynil);
  T16 = (P)YPpair(CHKREF(Ysig_value),Ynil);
  T15 = (P)YPpair(CHKREF(Ysig_arity),T16);
  T14 = (P)YPpair(CHKREF(Ysig_naryQ),T15);
  T13 = (P)YPpair(CHKREF(Ysig_specs),T14);
  T12 = (P)YPpair(CHKREF(Ysig_names),T13);
  T11 = (P)YOlen(specs_);
  T10 = (P)YPpair(CHKREF(YLanyG),Ynil);
  T9 = (P)YPpair(T11,T10);
  T8 = (P)YPpair(naryQ_,T9);
  T7 = (P)YPpair(specs_,T8);
  T6 = (P)YPpair(names_,T7);
  T5 = CALL3(CHKREF(YPisa),T17,T12,T6);
  T4 = (P)YPpair(mets_,Ynil);
  T3 = (P)YPpair(T5,T4);
  T2 = (P)YPpair(name_,T3);
  T1 = (P)YPpair(T18,T2);
  T0 = CALL3(CHKREF(YPisa),T23,T19,T1);
  RET(T0);
}

FUNCODEDEF(fun_445) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(YLanyG));
}

FUNCODEDEF(Ygen_from_met) {
  ARG(x_, 0);
  P specsF200;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = fun_445;
  T5 = CALL1(CHKREF(YOfun_specs),x_);
  T4 = CALL2(CHKREF(YOmap),T6,T5);
  specsF200 = T4;
  T3 = CALL1(CHKREF(Yfun_name),x_);
  T2 = CALL1(CHKREF(YOfun_naryQ),x_);
  T1 = CALLN(CHKREF(Yfab_gen),5,T3,Ynil,specsF200,T2,Ynil);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YPdefine_method) {
  ARG(met_, 0);
  ARG(gen_, 1);
  P tmpF201;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  tmpF201 = gen_;
  if (tmpF201 != YPfalse) {
    T2 = tmpF201;
  } else {
    T3 = CALL1(CHKREF(Ygen_from_met),met_);
    T2 = T3;
  }
  T1 = T2;
  T0 = CALL2(CHKREF(Ygen_add_met),T1,met_);
  RET(T0);
}

FUNCODEDEF(Yunexec) {
  ARG(fun_, 0);
  ARG(name_, 1);
  P T1,T0;
  P a1,a2;
loop:
  YPTstart_running_atT = fun_;
  T1 = (P)YPsu(name_);
  T0 = (P)YPunexec(T1);
  QRET(T0);
}

FUNCODEDEF(fun_subtypeQ_449) {
  ARG(t2_, 0);
  ARG(t1_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YOsubtypeQ),t1_,t2_);
  RET(T0);
}

FUNCODEDEF(fun_isaQ_450) {
  ARG(t_, 0);
  ARG(x_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YOisaQ),x_,t_);
  RET(T0);
}

FUNCODEDEF(fun_may_isaQ_451) {
  ARG(t_, 0);
  ARG(c_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = CALL2(CHKREF(YOmay_isaQ),c_,t_);
  RET(T0);
}

P YPmacro(P modname_,P name_,P expander_) {
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  if (CHKREF(YTmacros_okQT) != YPfalse) {
    T5 = CALLN(CHKREF(YPPmacro),4,modname_,name_,expander_,YPfalse);
    T0 = T5;
  } else {
    T1 = (P)YOpair(modname_,CHKREF(YTboot_macro_module_namesT));
    YTboot_macro_module_namesT = T1;
    T2 = (P)YOpair(name_,CHKREF(YTboot_macro_namesT));
    YTboot_macro_namesT = T2;
    T4 = (P)YOpair(expander_,CHKREF(YTboot_macro_expandersT));
    T3 = YTboot_macro_expandersT = T4;
    T0 = T3;
  }
  return T0;
}

FUNCODEDEF(Ygrid_open) {
  P T0;
loop:
  T0 = (P)YPgrid_open();
  QRET(T0);
}

FUNCODEDEF(Ygrid_close) {
  P T0;
loop:
  T0 = (P)YPgrid_close();
  QRET(T0);
}

FUNCODEDEF(Ygrid_move) {
  ARG(y_, 0);
  ARG(x_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = (P)YPiu(x_);
  T1 = (P)YPiu(y_);
  T0 = (P)YPgrid_move(T2,T1);
  QRET(T0);
}

FUNCODEDEF(Ygrid_read) {
  P T1,T0;
loop:
  T1 = (P)YPgrid_read();
  T0 = (P)YPcb(T1);
  QRET(T0);
}

FUNCODEDEF(Ygrid_write) {
  ARG(c_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPcu(c_);
  T0 = (P)YPgrid_write(T1);
  QRET(T0);
}

FUNCODEDEF(Ygrid_refresh) {
  P T0;
loop:
  T0 = (P)YPgrid_refresh();
  QRET(T0);
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
  YPcheck_typesQ = (P)0;
  YPTused_symbols_too_earlyT = (P)0;
  T0 = YPfalse;
  return T0;
}

P Y___main_2___() {
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
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
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLanyG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLlogG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLchrG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLnumG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLintG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLfloG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLlocG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLcolG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLseqG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLlstG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLflatG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLvecG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLstrG));
  (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLsymG));
  T29 = (P)YPobject_class_setter(CHKREF(YLclassG),CHKREF(YLtypeG));
  T28 = T29;
  return T28;
}

P Y___main_3___() {
  P T6,T5,T4,T3,T2,T1,T0;
loop:
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
  YPcheck_typesQ = YPfalse;
  YPsymbols_readyQ = YPfalse;
  YPTstart_running_atT = CHKREF(Ynil);
  T5 = (P)YPraw_alloc((P)4);
  YDdirect_object_class = T5;
  YDtag_msk = (P)3;
  YDtag_len = (P)2;
  T6 = YPfalse;
  return T6;
}

P Y___main_4___() {
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
loop:
  (P)YPelt_setter(CHKREF(YLintG),CHKREF(YDdirect_object_class),(P)1);
  (P)YPelt_setter(CHKREF(YLchrG),CHKREF(YDdirect_object_class),(P)2);
  (P)YPelt_setter(CHKREF(YLlocG),CHKREF(YDdirect_object_class),(P)3);
  T0 = (P)YPstrX((P)0);
  YPsnul = T0;
  T1 = (P)YPvecX((P)0);
  YPvnul = T1;
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
  T2 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  (P)YPclass_parents_setter(T2,CHKREF(YLanyG));
  YPsymbols = CHKREF(Ynil);
  lit_0 = YPsb((P)"Warning: symbols were created in the boot image before the symbol-creation was setup. (Probably from a df or rep)\n");
  T7 = (P)YPeqQ(CHKREF(YPTused_symbols_too_earlyT),YPtrue);
  T6 = (P)YPbb(T7);
  if (T6 != YPfalse) {
    T5 = (P)YPcurrent_output_port();
    T4 = (P)YPsu(CHKREF(lit_0));
    T3 = (P)YPwrite_string(T5,T4);
  } else {
  }
  lit_1 = YPPsym((P)"name");
  lit_2 = YPPsym((P)"lookup");
  lit_3 = YPPsym((P)"s");
  T9 = YPsig(YPPlist(1,CHKREF(lit_3)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_lookup_84 = YPmet(FUNCODEREF(fun_lookup_84),CHKREF(lit_2),T9,ENVNUL);
  T8 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T8,ENVNUL);
  T10 = fun_85;
  Yfab_sym = T10;
  YPsymbols_readyQ = YPtrue;
  lit_4 = YPPsym((P)"fab-sym");
  T12 = YPsig(YPPlist(1,CHKREF(lit_3)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_lookup_86 = YPmet(FUNCODEREF(fun_lookup_86),CHKREF(lit_2),T12,ENVNUL);
  T11 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yfab_sym = YPmet(FUNCODEREF(Yfab_sym),CHKREF(lit_4),T11,ENVNUL);
  T13 = Yfab_sym;
  Yfab_sym = T13;
  T14 = (P)YPib(CHKREF(YPmet_slot_len));
  (P)YPclass_slot_len_setter(T14,CHKREF(YLmetG));
  lit_5 = YPPsym((P)"loop");
  lit_6 = YPPsym((P)"r");
  lit_7 = YPPsym((P)"l");
  T15 = YPsig(YPPlist(2,CHKREF(lit_7),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_88 = YPmet(FUNCODEREF(fun_loop_88),CHKREF(lit_5),T15,ENVNUL);
  lit_8 = YPPsym((P)"colx");
  lit_9 = YPPsym((P)"x");
  lit_10 = YPPsym((P)"lx");
  lit_11 = YPPsym((P)"coly");
  lit_12 = YPPsym((P)"y");
  lit_13 = YPPsym((P)"lxy");
  T17 = YPsig(YPPlist(2,CHKREF(lit_13),CHKREF(lit_12)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_coly_90 = YPmet(FUNCODEREF(fun_coly_90),CHKREF(lit_11),T17,ENVNUL);
  T16 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_colx_91 = YPmet(FUNCODEREF(fun_colx_91),CHKREF(lit_8),T16,ENVNUL);
  T18 = YPfalse;
  return T18;
}

P Y___main_5___() {
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
  P slotF206;
  P setterF205;
  P accessorF204;
  P getterF203;
  P accessorF202;
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
  YDgen_cache_singletons_offset = YPint((P)2);
  YDgen_cache_classes_offset = YPint((P)3);
  lit_14 = YPPsym((P)"%slot-offset");
  lit_15 = YPPsym((P)"getter");
  lit_16 = YPPsym((P)"owner");
  lit_17 = YPPsym((P)"slots");
  lit_18 = YPPsym((P)"i");
  T1 = YPsig(YPPlist(2,CHKREF(lit_18),CHKREF(lit_17)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_129 = YPmet(FUNCODEREF(fun_loop_129),CHKREF(lit_5),T1,ENVNUL);
  T0 = YPsig(YPPlist(2,CHKREF(lit_16),CHKREF(lit_15)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YPslot_offset = YPmet(FUNCODEREF(YPslot_offset),CHKREF(lit_14),T0,ENVNUL);
  T2 = YPslot_offset;
  YPslot_offset = T2;
  lit_19 = YPPsym((P)"%early-dispatch");
  lit_20 = YPPsym((P)"args");
  lit_21 = YPsb((P)"ERROR: Generic function dispatch called before it existed.");
  T3 = YPsig(YPPlist(1,CHKREF(lit_20)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG));
  YPearly_dispatch = YPmet(FUNCODEREF(YPearly_dispatch),CHKREF(lit_19),T3,ENVNUL);
  T4 = YPearly_dispatch;
  YPearly_dispatch = T4;
  lit_22 = YPPsym((P)"%add-met");
  lit_23 = YPPsym((P)"met");
  lit_24 = YPPsym((P)"gen");
  T5 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_23)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YPadd_met = YPmet(FUNCODEREF(YPadd_met),CHKREF(lit_22),T5,ENVNUL);
  T6 = YPadd_met;
  YPadd_met = T6;
  lit_25 = YPPsym((P)"%add-slot");
  lit_26 = YPPsym((P)"slot");
  lit_27 = YPPsym((P)"class");
  T7 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_26)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YPadd_slot = YPmet(FUNCODEREF(YPadd_slot),CHKREF(lit_25),T7,ENVNUL);
  T8 = YPadd_slot;
  YPadd_slot = T8;
  lit_28 = YPPsym((P)"z");
  lit_29 = YPPsym((P)"%chr-val-setter");
  lit_30 = YPPsym((P)"%chr-val");
  T11 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_134 = YPmet(FUNCODEREF(fun_134),YPfalse,T11,ENVNUL);
  T10 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLintG),CHKREF(YLchrG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_135 = YPmet(FUNCODEREF(fun_135),YPfalse,T10,ENVNUL);
  T9 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_136 = YPmet(FUNCODEREF(fun_136),YPfalse,T9,ENVNUL);
  T25 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T24 = (P)YPsig(Ynil,T25,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T23 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_30),T24,Ynil,YPfalse);
  YPchr_val = T23;
  T27 = fun_136;
  accessorF297 = T27;
  CALL2(CHKREF(YPadd_met),CHKREF(YPchr_val),accessorF297);
  T26 = accessorF297;
  getterF298 = T26;
  T20 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T19 = (P)YPpair(CHKREF(YLanyG),T20);
  T18 = (P)YPsig(Ynil,T19,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T17 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_29),T18,Ynil,YPfalse);
  YPchr_val_setter = T17;
  T22 = fun_135;
  accessorF299 = T22;
  CALL2(CHKREF(YPadd_met),CHKREF(YPchr_val_setter),accessorF299);
  T21 = accessorF299;
  setterF300 = T21;
  T16 = fun_134;
  T15 = (P)YPPslot(CHKREF(YLchrG),CHKREF(YPchr_val),CHKREF(YPchr_val_setter),CHKREF(YLintG),T16);
  slotF301 = T15;
  (P)YPmet_env_setter(slotF301,getterF298);
  (P)YPmet_env_setter(slotF301,setterF300);
  T14 = CALL2(CHKREF(YPadd_slot),CHKREF(YLchrG),slotF301);
  T13 = T14;
  T12 = T13;
  lit_31 = YPPsym((P)"%int-val-setter");
  lit_32 = YPPsym((P)"%int-val");
  T30 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_137 = YPmet(FUNCODEREF(fun_137),YPfalse,T30,ENVNUL);
  T29 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_138 = YPmet(FUNCODEREF(fun_138),YPfalse,T29,ENVNUL);
  T28 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T28,ENVNUL);
  T44 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T43 = (P)YPsig(Ynil,T44,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T42 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_32),T43,Ynil,YPfalse);
  YPint_val = T42;
  T46 = fun_139;
  accessorF292 = T46;
  CALL2(CHKREF(YPadd_met),CHKREF(YPint_val),accessorF292);
  T45 = accessorF292;
  getterF293 = T45;
  T39 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T38 = (P)YPpair(CHKREF(YLanyG),T39);
  T37 = (P)YPsig(Ynil,T38,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T36 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_31),T37,Ynil,YPfalse);
  YPint_val_setter = T36;
  T41 = fun_138;
  accessorF294 = T41;
  CALL2(CHKREF(YPadd_met),CHKREF(YPint_val_setter),accessorF294);
  T40 = accessorF294;
  setterF295 = T40;
  T35 = fun_137;
  T34 = (P)YPPslot(CHKREF(YLintG),CHKREF(YPint_val),CHKREF(YPint_val_setter),CHKREF(YLanyG),T35);
  slotF296 = T34;
  (P)YPmet_env_setter(slotF296,getterF293);
  (P)YPmet_env_setter(slotF296,setterF295);
  T33 = CALL2(CHKREF(YPadd_slot),CHKREF(YLintG),slotF296);
  T32 = T33;
  T31 = T32;
  lit_33 = YPPsym((P)"%flo-val-setter");
  lit_34 = YPPsym((P)"%flo-val");
  T49 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_140 = YPmet(FUNCODEREF(fun_140),YPfalse,T49,ENVNUL);
  T48 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T48,ENVNUL);
  T47 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfloG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_142 = YPmet(FUNCODEREF(fun_142),YPfalse,T47,ENVNUL);
  T63 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T62 = (P)YPsig(Ynil,T63,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T61 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_34),T62,Ynil,YPfalse);
  YPflo_val = T61;
  T65 = fun_142;
  accessorF287 = T65;
  CALL2(CHKREF(YPadd_met),CHKREF(YPflo_val),accessorF287);
  T64 = accessorF287;
  getterF288 = T64;
  T58 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T57 = (P)YPpair(CHKREF(YLanyG),T58);
  T56 = (P)YPsig(Ynil,T57,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T55 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_33),T56,Ynil,YPfalse);
  YPflo_val_setter = T55;
  T60 = fun_141;
  accessorF289 = T60;
  CALL2(CHKREF(YPadd_met),CHKREF(YPflo_val_setter),accessorF289);
  T59 = accessorF289;
  setterF290 = T59;
  T54 = fun_140;
  T53 = (P)YPPslot(CHKREF(YLfloG),CHKREF(YPflo_val),CHKREF(YPflo_val_setter),CHKREF(YLanyG),T54);
  slotF291 = T53;
  (P)YPmet_env_setter(slotF291,getterF288);
  (P)YPmet_env_setter(slotF291,setterF290);
  T52 = CALL2(CHKREF(YPadd_slot),CHKREF(YLfloG),slotF291);
  T51 = T52;
  T50 = T51;
  lit_35 = YPPsym((P)"%loc-val-setter");
  lit_36 = YPPsym((P)"%loc-val");
  T68 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_143 = YPmet(FUNCODEREF(fun_143),YPfalse,T68,ENVNUL);
  T67 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlocG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_144 = YPmet(FUNCODEREF(fun_144),YPfalse,T67,ENVNUL);
  T66 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlocG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_145 = YPmet(FUNCODEREF(fun_145),YPfalse,T66,ENVNUL);
  T82 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T81 = (P)YPsig(Ynil,T82,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T80 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_36),T81,Ynil,YPfalse);
  YPloc_val = T80;
  T84 = fun_145;
  accessorF282 = T84;
  CALL2(CHKREF(YPadd_met),CHKREF(YPloc_val),accessorF282);
  T83 = accessorF282;
  getterF283 = T83;
  T77 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T76 = (P)YPpair(CHKREF(YLanyG),T77);
  T75 = (P)YPsig(Ynil,T76,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T74 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_35),T75,Ynil,YPfalse);
  YPloc_val_setter = T74;
  T79 = fun_144;
  accessorF284 = T79;
  CALL2(CHKREF(YPadd_met),CHKREF(YPloc_val_setter),accessorF284);
  T78 = accessorF284;
  setterF285 = T78;
  T73 = fun_143;
  T72 = (P)YPPslot(CHKREF(YLlocG),CHKREF(YPloc_val),CHKREF(YPloc_val_setter),CHKREF(YLanyG),T73);
  slotF286 = T72;
  (P)YPmet_env_setter(slotF286,getterF283);
  (P)YPmet_env_setter(slotF286,setterF285);
  T71 = CALL2(CHKREF(YPadd_slot),CHKREF(YLlocG),slotF286);
  T70 = T71;
  T69 = T70;
  lit_37 = YPPsym((P)"head-setter");
  lit_38 = YPPsym((P)"head");
  T87 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_146 = YPmet(FUNCODEREF(fun_146),YPfalse,T87,ENVNUL);
  T86 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_147 = YPmet(FUNCODEREF(fun_147),YPfalse,T86,ENVNUL);
  T85 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_148 = YPmet(FUNCODEREF(fun_148),YPfalse,T85,ENVNUL);
  T101 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T100 = (P)YPsig(Ynil,T101,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T99 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_38),T100,Ynil,YPfalse);
  Yhead = T99;
  T103 = fun_148;
  accessorF277 = T103;
  CALL2(CHKREF(YPadd_met),CHKREF(Yhead),accessorF277);
  T102 = accessorF277;
  getterF278 = T102;
  T96 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T95 = (P)YPpair(CHKREF(YLanyG),T96);
  T94 = (P)YPsig(Ynil,T95,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T93 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_37),T94,Ynil,YPfalse);
  Yhead_setter = T93;
  T98 = fun_147;
  accessorF279 = T98;
  CALL2(CHKREF(YPadd_met),CHKREF(Yhead_setter),accessorF279);
  T97 = accessorF279;
  setterF280 = T97;
  T92 = fun_146;
  T91 = (P)YPPslot(CHKREF(YLlstG),CHKREF(Yhead),CHKREF(Yhead_setter),CHKREF(YLanyG),T92);
  slotF281 = T91;
  (P)YPmet_env_setter(slotF281,getterF278);
  (P)YPmet_env_setter(slotF281,setterF280);
  T90 = CALL2(CHKREF(YPadd_slot),CHKREF(YLlstG),slotF281);
  T89 = T90;
  T88 = T89;
  lit_39 = YPPsym((P)"tail-setter");
  lit_40 = YPPsym((P)"tail");
  T106 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_149 = YPmet(FUNCODEREF(fun_149),YPfalse,T106,ENVNUL);
  T105 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_150 = YPmet(FUNCODEREF(fun_150),YPfalse,T105,ENVNUL);
  T104 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_151 = YPmet(FUNCODEREF(fun_151),YPfalse,T104,ENVNUL);
  T120 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T119 = (P)YPsig(Ynil,T120,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T118 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_40),T119,Ynil,YPfalse);
  Ytail = T118;
  T122 = fun_151;
  accessorF272 = T122;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytail),accessorF272);
  T121 = accessorF272;
  getterF273 = T121;
  T115 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T114 = (P)YPpair(CHKREF(YLanyG),T115);
  T113 = (P)YPsig(Ynil,T114,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T112 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_39),T113,Ynil,YPfalse);
  Ytail_setter = T112;
  T117 = fun_150;
  accessorF274 = T117;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytail_setter),accessorF274);
  T116 = accessorF274;
  setterF275 = T116;
  T111 = fun_149;
  T110 = (P)YPPslot(CHKREF(YLlstG),CHKREF(Ytail),CHKREF(Ytail_setter),CHKREF(YLlstG),T111);
  slotF276 = T110;
  (P)YPmet_env_setter(slotF276,getterF273);
  (P)YPmet_env_setter(slotF276,setterF275);
  T109 = CALL2(CHKREF(YPadd_slot),CHKREF(YLlstG),slotF276);
  T108 = T109;
  T107 = T108;
  lit_41 = YPPsym((P)"%%vec-dat-setter");
  lit_42 = YPPsym((P)"%%vec-dat");
  T125 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_152 = YPmet(FUNCODEREF(fun_152),YPfalse,T125,ENVNUL);
  T124 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLvecG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_153 = YPmet(FUNCODEREF(fun_153),YPfalse,T124,ENVNUL);
  T123 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLvecG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_154 = YPmet(FUNCODEREF(fun_154),YPfalse,T123,ENVNUL);
  T139 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T138 = (P)YPsig(Ynil,T139,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T137 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_42),T138,Ynil,YPfalse);
  YPPvec_dat = T137;
  T141 = fun_154;
  accessorF267 = T141;
  CALL2(CHKREF(YPadd_met),CHKREF(YPPvec_dat),accessorF267);
  T140 = accessorF267;
  getterF268 = T140;
  T134 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T133 = (P)YPpair(CHKREF(YLanyG),T134);
  T132 = (P)YPsig(Ynil,T133,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T131 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_41),T132,Ynil,YPfalse);
  YPPvec_dat_setter = T131;
  T136 = fun_153;
  accessorF269 = T136;
  CALL2(CHKREF(YPadd_met),CHKREF(YPPvec_dat_setter),accessorF269);
  T135 = accessorF269;
  setterF270 = T135;
  T130 = fun_152;
  T129 = (P)YPPslot(CHKREF(YLvecG),CHKREF(YPPvec_dat),CHKREF(YPPvec_dat_setter),CHKREF(YLanyG),T130);
  slotF271 = T129;
  (P)YPmet_env_setter(slotF271,getterF268);
  (P)YPmet_env_setter(slotF271,setterF270);
  T128 = CALL2(CHKREF(YPadd_slot),CHKREF(YLvecG),slotF271);
  T127 = T128;
  T126 = T127;
  lit_43 = YPPsym((P)"%%str-dat-setter");
  lit_44 = YPPsym((P)"%%str-dat");
  T144 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_155 = YPmet(FUNCODEREF(fun_155),YPfalse,T144,ENVNUL);
  T143 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLstrG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_156 = YPmet(FUNCODEREF(fun_156),YPfalse,T143,ENVNUL);
  T142 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_157 = YPmet(FUNCODEREF(fun_157),YPfalse,T142,ENVNUL);
  T158 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T157 = (P)YPsig(Ynil,T158,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T156 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_44),T157,Ynil,YPfalse);
  YPPstr_dat = T156;
  T160 = fun_157;
  accessorF262 = T160;
  CALL2(CHKREF(YPadd_met),CHKREF(YPPstr_dat),accessorF262);
  T159 = accessorF262;
  getterF263 = T159;
  T153 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T152 = (P)YPpair(CHKREF(YLanyG),T153);
  T151 = (P)YPsig(Ynil,T152,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T150 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_43),T151,Ynil,YPfalse);
  YPPstr_dat_setter = T150;
  T155 = fun_156;
  accessorF264 = T155;
  CALL2(CHKREF(YPadd_met),CHKREF(YPPstr_dat_setter),accessorF264);
  T154 = accessorF264;
  setterF265 = T154;
  T149 = fun_155;
  T148 = (P)YPPslot(CHKREF(YLstrG),CHKREF(YPPstr_dat),CHKREF(YPPstr_dat_setter),CHKREF(YLanyG),T149);
  slotF266 = T148;
  (P)YPmet_env_setter(slotF266,getterF263);
  (P)YPmet_env_setter(slotF266,setterF265);
  T147 = CALL2(CHKREF(YPadd_slot),CHKREF(YLstrG),slotF266);
  T146 = T147;
  T145 = T146;
  lit_45 = YPPsym((P)"sym-name-setter");
  lit_46 = YPPsym((P)"sym-name");
  T163 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_158 = YPmet(FUNCODEREF(fun_158),YPfalse,T163,ENVNUL);
  T162 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_159 = YPmet(FUNCODEREF(fun_159),YPfalse,T162,ENVNUL);
  T161 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_160 = YPmet(FUNCODEREF(fun_160),YPfalse,T161,ENVNUL);
  T177 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T176 = (P)YPsig(Ynil,T177,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T175 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_46),T176,Ynil,YPfalse);
  Ysym_name = T175;
  T179 = fun_160;
  accessorF257 = T179;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysym_name),accessorF257);
  T178 = accessorF257;
  getterF258 = T178;
  T172 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T171 = (P)YPpair(CHKREF(YLanyG),T172);
  T170 = (P)YPsig(Ynil,T171,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T169 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_45),T170,Ynil,YPfalse);
  Ysym_name_setter = T169;
  T174 = fun_159;
  accessorF259 = T174;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysym_name_setter),accessorF259);
  T173 = accessorF259;
  setterF260 = T173;
  T168 = fun_158;
  T167 = (P)YPPslot(CHKREF(YLsymG),CHKREF(Ysym_name),CHKREF(Ysym_name_setter),CHKREF(YLstrG),T168);
  slotF261 = T167;
  (P)YPmet_env_setter(slotF261,getterF258);
  (P)YPmet_env_setter(slotF261,setterF260);
  T166 = CALL2(CHKREF(YPadd_slot),CHKREF(YLsymG),slotF261);
  T165 = T166;
  T164 = T165;
  lit_47 = YPPsym((P)"class-slot-len-setter");
  lit_48 = YPPsym((P)"class-slot-len");
  T182 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_161 = YPmet(FUNCODEREF(fun_161),YPfalse,T182,ENVNUL);
  T181 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLintG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_162 = YPmet(FUNCODEREF(fun_162),YPfalse,T181,ENVNUL);
  T180 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_163 = YPmet(FUNCODEREF(fun_163),YPfalse,T180,ENVNUL);
  T196 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T195 = (P)YPsig(Ynil,T196,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T194 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_48),T195,Ynil,YPfalse);
  Yclass_slot_len = T194;
  T198 = fun_163;
  accessorF252 = T198;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_slot_len),accessorF252);
  T197 = accessorF252;
  getterF253 = T197;
  T191 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T190 = (P)YPpair(CHKREF(YLanyG),T191);
  T189 = (P)YPsig(Ynil,T190,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T188 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_47),T189,Ynil,YPfalse);
  Yclass_slot_len_setter = T188;
  T193 = fun_162;
  accessorF254 = T193;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_slot_len_setter),accessorF254);
  T192 = accessorF254;
  setterF255 = T192;
  T187 = fun_161;
  T186 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_slot_len),CHKREF(Yclass_slot_len_setter),CHKREF(YLintG),T187);
  slotF256 = T186;
  (P)YPmet_env_setter(slotF256,getterF253);
  (P)YPmet_env_setter(slotF256,setterF255);
  T185 = CALL2(CHKREF(YPadd_slot),CHKREF(YLclassG),slotF256);
  T184 = T185;
  T183 = T184;
  lit_49 = YPPsym((P)"class-name-setter");
  lit_50 = YPPsym((P)"class-name");
  T201 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_164 = YPmet(FUNCODEREF(fun_164),YPfalse,T201,ENVNUL);
  T200 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLsymG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_165 = YPmet(FUNCODEREF(fun_165),YPfalse,T200,ENVNUL);
  T199 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_166 = YPmet(FUNCODEREF(fun_166),YPfalse,T199,ENVNUL);
  T215 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T214 = (P)YPsig(Ynil,T215,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T213 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_50),T214,Ynil,YPfalse);
  Yclass_name = T213;
  T217 = fun_166;
  accessorF247 = T217;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_name),accessorF247);
  T216 = accessorF247;
  getterF248 = T216;
  T210 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T209 = (P)YPpair(CHKREF(YLanyG),T210);
  T208 = (P)YPsig(Ynil,T209,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T207 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_49),T208,Ynil,YPfalse);
  Yclass_name_setter = T207;
  T212 = fun_165;
  accessorF249 = T212;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_name_setter),accessorF249);
  T211 = accessorF249;
  setterF250 = T211;
  T206 = fun_164;
  T205 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_name),CHKREF(Yclass_name_setter),CHKREF(YLsymG),T206);
  slotF251 = T205;
  (P)YPmet_env_setter(slotF251,getterF248);
  (P)YPmet_env_setter(slotF251,setterF250);
  T204 = CALL2(CHKREF(YPadd_slot),CHKREF(YLclassG),slotF251);
  T203 = T204;
  T202 = T203;
  lit_51 = YPPsym((P)"class-direct-parents-setter");
  lit_52 = YPPsym((P)"class-direct-parents");
  T220 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_167 = YPmet(FUNCODEREF(fun_167),YPfalse,T220,ENVNUL);
  T219 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_168 = YPmet(FUNCODEREF(fun_168),YPfalse,T219,ENVNUL);
  T218 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_169 = YPmet(FUNCODEREF(fun_169),YPfalse,T218,ENVNUL);
  T234 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T233 = (P)YPsig(Ynil,T234,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T232 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_52),T233,Ynil,YPfalse);
  Yclass_direct_parents = T232;
  T236 = fun_169;
  accessorF242 = T236;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_direct_parents),accessorF242);
  T235 = accessorF242;
  getterF243 = T235;
  T229 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T228 = (P)YPpair(CHKREF(YLanyG),T229);
  T227 = (P)YPsig(Ynil,T228,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T226 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_51),T227,Ynil,YPfalse);
  Yclass_direct_parents_setter = T226;
  T231 = fun_168;
  accessorF244 = T231;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_direct_parents_setter),accessorF244);
  T230 = accessorF244;
  setterF245 = T230;
  T225 = fun_167;
  T224 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_direct_parents),CHKREF(Yclass_direct_parents_setter),CHKREF(YLlstG),T225);
  slotF246 = T224;
  (P)YPmet_env_setter(slotF246,getterF243);
  (P)YPmet_env_setter(slotF246,setterF245);
  T223 = CALL2(CHKREF(YPadd_slot),CHKREF(YLclassG),slotF246);
  T222 = T223;
  T221 = T222;
  lit_53 = YPPsym((P)"class-direct-slots-setter");
  lit_54 = YPPsym((P)"class-direct-slots");
  T239 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_170 = YPmet(FUNCODEREF(fun_170),YPfalse,T239,ENVNUL);
  T238 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_171 = YPmet(FUNCODEREF(fun_171),YPfalse,T238,ENVNUL);
  T237 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_172 = YPmet(FUNCODEREF(fun_172),YPfalse,T237,ENVNUL);
  T253 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T252 = (P)YPsig(Ynil,T253,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T251 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_54),T252,Ynil,YPfalse);
  Yclass_direct_slots = T251;
  T255 = fun_172;
  accessorF237 = T255;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_direct_slots),accessorF237);
  T254 = accessorF237;
  getterF238 = T254;
  T248 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T247 = (P)YPpair(CHKREF(YLanyG),T248);
  T246 = (P)YPsig(Ynil,T247,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T245 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_53),T246,Ynil,YPfalse);
  Yclass_direct_slots_setter = T245;
  T250 = fun_171;
  accessorF239 = T250;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_direct_slots_setter),accessorF239);
  T249 = accessorF239;
  setterF240 = T249;
  T244 = fun_170;
  T243 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_direct_slots),CHKREF(Yclass_direct_slots_setter),CHKREF(YLlstG),T244);
  slotF241 = T243;
  (P)YPmet_env_setter(slotF241,getterF238);
  (P)YPmet_env_setter(slotF241,setterF240);
  T242 = CALL2(CHKREF(YPadd_slot),CHKREF(YLclassG),slotF241);
  T241 = T242;
  T240 = T241;
  lit_55 = YPPsym((P)"class-parents-setter");
  lit_56 = YPPsym((P)"class-parents");
  T258 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_173 = YPmet(FUNCODEREF(fun_173),YPfalse,T258,ENVNUL);
  T257 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_174 = YPmet(FUNCODEREF(fun_174),YPfalse,T257,ENVNUL);
  T256 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T256,ENVNUL);
  T272 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T271 = (P)YPsig(Ynil,T272,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T270 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_56),T271,Ynil,YPfalse);
  Yclass_parents = T270;
  T274 = fun_175;
  accessorF232 = T274;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_parents),accessorF232);
  T273 = accessorF232;
  getterF233 = T273;
  T267 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T266 = (P)YPpair(CHKREF(YLanyG),T267);
  T265 = (P)YPsig(Ynil,T266,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T264 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_55),T265,Ynil,YPfalse);
  Yclass_parents_setter = T264;
  T269 = fun_174;
  accessorF234 = T269;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_parents_setter),accessorF234);
  T268 = accessorF234;
  setterF235 = T268;
  T263 = fun_173;
  T262 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_parents),CHKREF(Yclass_parents_setter),CHKREF(YLlstG),T263);
  slotF236 = T262;
  (P)YPmet_env_setter(slotF236,getterF233);
  (P)YPmet_env_setter(slotF236,setterF235);
  T261 = CALL2(CHKREF(YPadd_slot),CHKREF(YLclassG),slotF236);
  T260 = T261;
  T259 = T260;
  lit_57 = YPPsym((P)"class-slots-setter");
  lit_58 = YPPsym((P)"class-slots");
  T277 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_176 = YPmet(FUNCODEREF(fun_176),YPfalse,T277,ENVNUL);
  T276 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_177 = YPmet(FUNCODEREF(fun_177),YPfalse,T276,ENVNUL);
  T275 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T275,ENVNUL);
  T291 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T290 = (P)YPsig(Ynil,T291,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T289 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_58),T290,Ynil,YPfalse);
  Yclass_slots = T289;
  T293 = fun_178;
  accessorF227 = T293;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_slots),accessorF227);
  T292 = accessorF227;
  getterF228 = T292;
  T286 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T285 = (P)YPpair(CHKREF(YLanyG),T286);
  T284 = (P)YPsig(Ynil,T285,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T283 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_57),T284,Ynil,YPfalse);
  Yclass_slots_setter = T283;
  T288 = fun_177;
  accessorF229 = T288;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_slots_setter),accessorF229);
  T287 = accessorF229;
  setterF230 = T287;
  T282 = fun_176;
  T281 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_slots),CHKREF(Yclass_slots_setter),CHKREF(YLlstG),T282);
  slotF231 = T281;
  (P)YPmet_env_setter(slotF231,getterF228);
  (P)YPmet_env_setter(slotF231,setterF230);
  T280 = CALL2(CHKREF(YPadd_slot),CHKREF(YLclassG),slotF231);
  T279 = T280;
  T278 = T279;
  lit_59 = YPPsym((P)"class-direct-children-setter");
  lit_60 = YPPsym((P)"class-direct-children");
  T296 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_179 = YPmet(FUNCODEREF(fun_179),YPfalse,T296,ENVNUL);
  T295 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T295,ENVNUL);
  T294 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_181 = YPmet(FUNCODEREF(fun_181),YPfalse,T294,ENVNUL);
  T310 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T309 = (P)YPsig(Ynil,T310,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T308 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_60),T309,Ynil,YPfalse);
  Yclass_direct_children = T308;
  T312 = fun_181;
  accessorF222 = T312;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_direct_children),accessorF222);
  T311 = accessorF222;
  getterF223 = T311;
  T305 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T304 = (P)YPpair(CHKREF(YLanyG),T305);
  T303 = (P)YPsig(Ynil,T304,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T302 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_59),T303,Ynil,YPfalse);
  Yclass_direct_children_setter = T302;
  T307 = fun_180;
  accessorF224 = T307;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_direct_children_setter),accessorF224);
  T306 = accessorF224;
  setterF225 = T306;
  T301 = fun_179;
  T300 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_direct_children),CHKREF(Yclass_direct_children_setter),CHKREF(YLlstG),T301);
  slotF226 = T300;
  (P)YPmet_env_setter(slotF226,getterF223);
  (P)YPmet_env_setter(slotF226,setterF225);
  T299 = CALL2(CHKREF(YPadd_slot),CHKREF(YLclassG),slotF226);
  T298 = T299;
  T297 = T298;
  lit_61 = YPPsym((P)"class-gens-setter");
  lit_62 = YPPsym((P)"class-gens");
  T315 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T315,ENVNUL);
  T314 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_183 = YPmet(FUNCODEREF(fun_183),YPfalse,T314,ENVNUL);
  T313 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_184 = YPmet(FUNCODEREF(fun_184),YPfalse,T313,ENVNUL);
  T329 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T328 = (P)YPsig(Ynil,T329,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T327 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_62),T328,Ynil,YPfalse);
  Yclass_gens = T327;
  T331 = fun_184;
  accessorF217 = T331;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_gens),accessorF217);
  T330 = accessorF217;
  getterF218 = T330;
  T324 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T323 = (P)YPpair(CHKREF(YLanyG),T324);
  T322 = (P)YPsig(Ynil,T323,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T321 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_61),T322,Ynil,YPfalse);
  Yclass_gens_setter = T321;
  T326 = fun_183;
  accessorF219 = T326;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_gens_setter),accessorF219);
  T325 = accessorF219;
  setterF220 = T325;
  T320 = fun_182;
  T319 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_gens),CHKREF(Yclass_gens_setter),CHKREF(YLlstG),T320);
  slotF221 = T319;
  (P)YPmet_env_setter(slotF221,getterF218);
  (P)YPmet_env_setter(slotF221,setterF220);
  T318 = CALL2(CHKREF(YPadd_slot),CHKREF(YLclassG),slotF221);
  T317 = T318;
  T316 = T317;
  lit_63 = YPPsym((P)"class-mets-setter");
  lit_64 = YPPsym((P)"class-mets");
  T334 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_185 = YPmet(FUNCODEREF(fun_185),YPfalse,T334,ENVNUL);
  T333 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_186 = YPmet(FUNCODEREF(fun_186),YPfalse,T333,ENVNUL);
  T332 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_187 = YPmet(FUNCODEREF(fun_187),YPfalse,T332,ENVNUL);
  T348 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T347 = (P)YPsig(Ynil,T348,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T346 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_64),T347,Ynil,YPfalse);
  Yclass_mets = T346;
  T350 = fun_187;
  accessorF212 = T350;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_mets),accessorF212);
  T349 = accessorF212;
  getterF213 = T349;
  T343 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T342 = (P)YPpair(CHKREF(YLanyG),T343);
  T341 = (P)YPsig(Ynil,T342,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T340 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_63),T341,Ynil,YPfalse);
  Yclass_mets_setter = T340;
  T345 = fun_186;
  accessorF214 = T345;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_mets_setter),accessorF214);
  T344 = accessorF214;
  setterF215 = T344;
  T339 = fun_185;
  T338 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_mets),CHKREF(Yclass_mets_setter),CHKREF(YLlstG),T339);
  slotF216 = T338;
  (P)YPmet_env_setter(slotF216,getterF213);
  (P)YPmet_env_setter(slotF216,setterF215);
  T337 = CALL2(CHKREF(YPadd_slot),CHKREF(YLclassG),slotF216);
  T336 = T337;
  T335 = T336;
  lit_65 = YPPsym((P)"class-forward-setter");
  lit_66 = YPPsym((P)"class-forward");
  T353 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T353,ENVNUL);
  T352 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_189 = YPmet(FUNCODEREF(fun_189),YPfalse,T352,ENVNUL);
  T351 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_190 = YPmet(FUNCODEREF(fun_190),YPfalse,T351,ENVNUL);
  T367 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T366 = (P)YPsig(Ynil,T367,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T365 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_66),T366,Ynil,YPfalse);
  Yclass_forward = T365;
  T369 = fun_190;
  accessorF207 = T369;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_forward),accessorF207);
  T368 = accessorF207;
  getterF208 = T368;
  T362 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T361 = (P)YPpair(CHKREF(YLanyG),T362);
  T360 = (P)YPsig(Ynil,T361,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T359 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_65),T360,Ynil,YPfalse);
  Yclass_forward_setter = T359;
  T364 = fun_189;
  accessorF209 = T364;
  CALL2(CHKREF(YPadd_met),CHKREF(Yclass_forward_setter),accessorF209);
  T363 = accessorF209;
  setterF210 = T363;
  T358 = fun_188;
  T357 = (P)YPPslot(CHKREF(YLclassG),CHKREF(Yclass_forward),CHKREF(Yclass_forward_setter),CHKREF(YLanyG),T358);
  slotF211 = T357;
  (P)YPmet_env_setter(slotF211,getterF208);
  (P)YPmet_env_setter(slotF211,setterF210);
  T356 = CALL2(CHKREF(YPadd_slot),CHKREF(YLclassG),slotF211);
  T355 = T356;
  T354 = T355;
  lit_67 = YPPsym((P)"type-object-setter");
  lit_68 = YPPsym((P)"type-object");
  T376 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T375 = fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T376,ENVNUL);
  T374 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLsingletonG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  T373 = fun_192 = YPmet(FUNCODEREF(fun_192),YPfalse,T374,ENVNUL);
  T372 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsingletonG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T371 = fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T372,ENVNUL);
  T391 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T390 = (P)YPsig(Ynil,T391,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T389 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_68),T390,Ynil,YPfalse);
  Ytype_object = T389;
  T393 = fun_193;
  accessorF202 = T393;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytype_object),accessorF202);
  T392 = accessorF202;
  getterF203 = T392;
  T386 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T385 = (P)YPpair(CHKREF(YLanyG),T386);
  T384 = (P)YPsig(Ynil,T385,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T383 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_67),T384,Ynil,YPfalse);
  Ytype_object_setter = T383;
  T388 = fun_192;
  accessorF204 = T388;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytype_object_setter),accessorF204);
  T387 = accessorF204;
  setterF205 = T387;
  T382 = fun_191;
  T381 = (P)YPPslot(CHKREF(YLsingletonG),CHKREF(Ytype_object),CHKREF(Ytype_object_setter),CHKREF(YLanyG),T382);
  slotF206 = T381;
  (P)YPmet_env_setter(slotF206,getterF203);
  (P)YPmet_env_setter(slotF206,setterF205);
  T380 = CALL2(CHKREF(YPadd_slot),CHKREF(YLsingletonG),slotF206);
  T379 = T380;
  T378 = T379;
  T377 = T378;
  T370 = T377;
  return T370;
}

P Y___main_6___() {
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
  P T399,T398,T397,T396,T395,T394,T393,T392,T391,T390,T389,T388,T387,T386,T385,T384;
  P T383,T382,T381,T380,T379,T378,T377,T376,T375,T374,T373,T372,T371,T370,T369,T368;
  P T367,T366,T365,T364,T363,T362,T361,T360,T359,T358,T357,T356,T355,T354,T353,T352;
  P T351,T350,T349,T348,T347,T346,T345,T344,T343,T342,T341,T340,T339,T338,T337,T336;
  P T335,T334,T333,T332,T331,T330,T329,T328,T327,T326,T325,T324,T323,T322,T321,T320;
  P T319,T318,T317,T316,T315,T314,T313,T312,T311,T310,T309,T308,T307,T306,T305,T304;
  P T303,T302,T301,T300,T299,T298,T297,T296,T295,T294,T293,T292,T291,T290,T289,T288;
  P T287,T286,T285,T284,T283,T282,T281,T280,T279,T278,T277,T276,T275,T274,T273,T272;
  P T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261,T260,T259,T258,T257,T256;
  P T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240;
  P T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224;
  P T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208;
  P T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192;
  P T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176;
  P T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160;
  P T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144;
  P T143,T142,T141,T140,T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128;
  P T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112;
  P T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96;
  P T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80;
  P T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64;
  P T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48;
  P T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_69 = YPPsym((P)"type-class-setter");
  lit_70 = YPPsym((P)"type-class");
  T2 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_194 = YPmet(FUNCODEREF(fun_194),YPfalse,T2,ENVNUL);
  T1 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLclassG),CHKREF(YLsubclassG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_195 = YPmet(FUNCODEREF(fun_195),YPfalse,T1,ENVNUL);
  T0 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsubclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_196 = YPmet(FUNCODEREF(fun_196),YPfalse,T0,ENVNUL);
  T16 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T15 = (P)YPsig(Ynil,T16,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T14 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_70),T15,Ynil,YPfalse);
  Ytype_class = T14;
  T18 = fun_196;
  accessorF397 = T18;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytype_class),accessorF397);
  T17 = accessorF397;
  getterF398 = T17;
  T11 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T10 = (P)YPpair(CHKREF(YLanyG),T11);
  T9 = (P)YPsig(Ynil,T10,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T8 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_69),T9,Ynil,YPfalse);
  Ytype_class_setter = T8;
  T13 = fun_195;
  accessorF399 = T13;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytype_class_setter),accessorF399);
  T12 = accessorF399;
  setterF400 = T12;
  T7 = fun_194;
  T6 = (P)YPPslot(CHKREF(YLsubclassG),CHKREF(Ytype_class),CHKREF(Ytype_class_setter),CHKREF(YLclassG),T7);
  slotF401 = T6;
  (P)YPmet_env_setter(slotF401,getterF398);
  (P)YPmet_env_setter(slotF401,setterF400);
  T5 = CALL2(CHKREF(YPadd_slot),CHKREF(YLsubclassG),slotF401);
  T4 = T5;
  T3 = T4;
  lit_71 = YPPsym((P)"type-elts-setter");
  lit_72 = YPPsym((P)"type-elts");
  T21 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T21,ENVNUL);
  T20 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLunionG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_198 = YPmet(FUNCODEREF(fun_198),YPfalse,T20,ENVNUL);
  T19 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLunionG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_199 = YPmet(FUNCODEREF(fun_199),YPfalse,T19,ENVNUL);
  T35 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T34 = (P)YPsig(Ynil,T35,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T33 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_72),T34,Ynil,YPfalse);
  Ytype_elts = T33;
  T37 = fun_199;
  accessorF392 = T37;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytype_elts),accessorF392);
  T36 = accessorF392;
  getterF393 = T36;
  T30 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T29 = (P)YPpair(CHKREF(YLanyG),T30);
  T28 = (P)YPsig(Ynil,T29,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T27 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_71),T28,Ynil,YPfalse);
  Ytype_elts_setter = T27;
  T32 = fun_198;
  accessorF394 = T32;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytype_elts_setter),accessorF394);
  T31 = accessorF394;
  setterF395 = T31;
  T26 = fun_197;
  T25 = (P)YPPslot(CHKREF(YLunionG),CHKREF(Ytype_elts),CHKREF(Ytype_elts_setter),CHKREF(YLlstG),T26);
  slotF396 = T25;
  (P)YPmet_env_setter(slotF396,getterF393);
  (P)YPmet_env_setter(slotF396,setterF395);
  T24 = CALL2(CHKREF(YPadd_slot),CHKREF(YLunionG),slotF396);
  T23 = T24;
  T22 = T23;
  lit_73 = YPPsym((P)"slot-owner-setter");
  lit_74 = YPPsym((P)"slot-owner");
  T40 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_200 = YPmet(FUNCODEREF(fun_200),YPfalse,T40,ENVNUL);
  T39 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLslotG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_201 = YPmet(FUNCODEREF(fun_201),YPfalse,T39,ENVNUL);
  T38 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLslotG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T38,ENVNUL);
  T54 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T53 = (P)YPsig(Ynil,T54,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T52 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_74),T53,Ynil,YPfalse);
  Yslot_owner = T52;
  T56 = fun_202;
  accessorF387 = T56;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_owner),accessorF387);
  T55 = accessorF387;
  getterF388 = T55;
  T49 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T48 = (P)YPpair(CHKREF(YLanyG),T49);
  T47 = (P)YPsig(Ynil,T48,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T46 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_73),T47,Ynil,YPfalse);
  Yslot_owner_setter = T46;
  T51 = fun_201;
  accessorF389 = T51;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_owner_setter),accessorF389);
  T50 = accessorF389;
  setterF390 = T50;
  T45 = fun_200;
  T44 = (P)YPPslot(CHKREF(YLslotG),CHKREF(Yslot_owner),CHKREF(Yslot_owner_setter),CHKREF(YLanyG),T45);
  slotF391 = T44;
  (P)YPmet_env_setter(slotF391,getterF388);
  (P)YPmet_env_setter(slotF391,setterF390);
  T43 = CALL2(CHKREF(YPadd_slot),CHKREF(YLslotG),slotF391);
  T42 = T43;
  T41 = T42;
  lit_75 = YPPsym((P)"slot-getter-setter");
  lit_76 = YPPsym((P)"slot-getter");
  T59 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_203 = YPmet(FUNCODEREF(fun_203),YPfalse,T59,ENVNUL);
  T58 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLslotG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_204 = YPmet(FUNCODEREF(fun_204),YPfalse,T58,ENVNUL);
  T57 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLslotG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_205 = YPmet(FUNCODEREF(fun_205),YPfalse,T57,ENVNUL);
  T73 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T72 = (P)YPsig(Ynil,T73,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T71 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_76),T72,Ynil,YPfalse);
  Yslot_getter = T71;
  T75 = fun_205;
  accessorF382 = T75;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_getter),accessorF382);
  T74 = accessorF382;
  getterF383 = T74;
  T68 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T67 = (P)YPpair(CHKREF(YLanyG),T68);
  T66 = (P)YPsig(Ynil,T67,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T65 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_75),T66,Ynil,YPfalse);
  Yslot_getter_setter = T65;
  T70 = fun_204;
  accessorF384 = T70;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_getter_setter),accessorF384);
  T69 = accessorF384;
  setterF385 = T69;
  T64 = fun_203;
  T63 = (P)YPPslot(CHKREF(YLslotG),CHKREF(Yslot_getter),CHKREF(Yslot_getter_setter),CHKREF(YLfunG),T64);
  slotF386 = T63;
  (P)YPmet_env_setter(slotF386,getterF383);
  (P)YPmet_env_setter(slotF386,setterF385);
  T62 = CALL2(CHKREF(YPadd_slot),CHKREF(YLslotG),slotF386);
  T61 = T62;
  T60 = T61;
  lit_77 = YPPsym((P)"slot-setter-setter");
  lit_78 = YPPsym((P)"slot-setter");
  T78 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T78,ENVNUL);
  T77 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLslotG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_207 = YPmet(FUNCODEREF(fun_207),YPfalse,T77,ENVNUL);
  T76 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLslotG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_208 = YPmet(FUNCODEREF(fun_208),YPfalse,T76,ENVNUL);
  T92 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T91 = (P)YPsig(Ynil,T92,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T90 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_78),T91,Ynil,YPfalse);
  Yslot_setter = T90;
  T94 = fun_208;
  accessorF377 = T94;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_setter),accessorF377);
  T93 = accessorF377;
  getterF378 = T93;
  T87 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T86 = (P)YPpair(CHKREF(YLanyG),T87);
  T85 = (P)YPsig(Ynil,T86,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T84 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_77),T85,Ynil,YPfalse);
  Yslot_setter_setter = T84;
  T89 = fun_207;
  accessorF379 = T89;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_setter_setter),accessorF379);
  T88 = accessorF379;
  setterF380 = T88;
  T83 = fun_206;
  T82 = (P)YPPslot(CHKREF(YLslotG),CHKREF(Yslot_setter),CHKREF(Yslot_setter_setter),CHKREF(YLfunG),T83);
  slotF381 = T82;
  (P)YPmet_env_setter(slotF381,getterF378);
  (P)YPmet_env_setter(slotF381,setterF380);
  T81 = CALL2(CHKREF(YPadd_slot),CHKREF(YLslotG),slotF381);
  T80 = T81;
  T79 = T80;
  lit_79 = YPPsym((P)"slot-type-setter");
  lit_80 = YPPsym((P)"slot-type");
  T97 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T97,ENVNUL);
  T96 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLslotG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T96,ENVNUL);
  T95 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLslotG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_211 = YPmet(FUNCODEREF(fun_211),YPfalse,T95,ENVNUL);
  T111 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T110 = (P)YPsig(Ynil,T111,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T109 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_80),T110,Ynil,YPfalse);
  Yslot_type = T109;
  T113 = fun_211;
  accessorF372 = T113;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_type),accessorF372);
  T112 = accessorF372;
  getterF373 = T112;
  T106 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T105 = (P)YPpair(CHKREF(YLanyG),T106);
  T104 = (P)YPsig(Ynil,T105,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T103 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_79),T104,Ynil,YPfalse);
  Yslot_type_setter = T103;
  T108 = fun_210;
  accessorF374 = T108;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_type_setter),accessorF374);
  T107 = accessorF374;
  setterF375 = T107;
  T102 = fun_209;
  T101 = (P)YPPslot(CHKREF(YLslotG),CHKREF(Yslot_type),CHKREF(Yslot_type_setter),CHKREF(YLanyG),T102);
  slotF376 = T101;
  (P)YPmet_env_setter(slotF376,getterF373);
  (P)YPmet_env_setter(slotF376,setterF375);
  T100 = CALL2(CHKREF(YPadd_slot),CHKREF(YLslotG),slotF376);
  T99 = T100;
  T98 = T99;
  lit_81 = YPPsym((P)"slot-init-setter");
  lit_82 = YPPsym((P)"slot-init");
  T117 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_212 = YPmet(FUNCODEREF(fun_212),YPfalse,T117,ENVNUL);
  T116 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_213 = YPmet(FUNCODEREF(fun_213),YPfalse,T116,ENVNUL);
  T115 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLslotG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_214 = YPmet(FUNCODEREF(fun_214),YPfalse,T115,ENVNUL);
  T114 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLslotG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T114,ENVNUL);
  T131 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T130 = (P)YPsig(Ynil,T131,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T129 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_82),T130,Ynil,YPfalse);
  Yslot_init = T129;
  T133 = fun_215;
  accessorF367 = T133;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_init),accessorF367);
  T132 = accessorF367;
  getterF368 = T132;
  T126 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T125 = (P)YPpair(CHKREF(YLanyG),T126);
  T124 = (P)YPsig(Ynil,T125,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T123 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_81),T124,Ynil,YPfalse);
  Yslot_init_setter = T123;
  T128 = fun_214;
  accessorF369 = T128;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_init_setter),accessorF369);
  T127 = accessorF369;
  setterF370 = T127;
  T122 = fun_213;
  T121 = (P)YPPslot(CHKREF(YLslotG),CHKREF(Yslot_init),CHKREF(Yslot_init_setter),CHKREF(YLfunG),T122);
  slotF371 = T121;
  (P)YPmet_env_setter(slotF371,getterF368);
  (P)YPmet_env_setter(slotF371,setterF370);
  T120 = CALL2(CHKREF(YPadd_slot),CHKREF(YLslotG),slotF371);
  T119 = T120;
  T118 = T119;
  lit_83 = YPPsym((P)"gen-cache-singletons-setter");
  lit_84 = YPPsym((P)"gen-cache-singletons");
  T136 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T136,ENVNUL);
  T135 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLgen_cacheG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_217 = YPmet(FUNCODEREF(fun_217),YPfalse,T135,ENVNUL);
  T134 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLgen_cacheG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_218 = YPmet(FUNCODEREF(fun_218),YPfalse,T134,ENVNUL);
  T150 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T149 = (P)YPsig(Ynil,T150,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T148 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_84),T149,Ynil,YPfalse);
  Ygen_cache_singletons = T148;
  T152 = fun_218;
  accessorF362 = T152;
  CALL2(CHKREF(YPadd_met),CHKREF(Ygen_cache_singletons),accessorF362);
  T151 = accessorF362;
  getterF363 = T151;
  T145 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T144 = (P)YPpair(CHKREF(YLanyG),T145);
  T143 = (P)YPsig(Ynil,T144,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T142 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_83),T143,Ynil,YPfalse);
  Ygen_cache_singletons_setter = T142;
  T147 = fun_217;
  accessorF364 = T147;
  CALL2(CHKREF(YPadd_met),CHKREF(Ygen_cache_singletons_setter),accessorF364);
  T146 = accessorF364;
  setterF365 = T146;
  T141 = fun_216;
  T140 = (P)YPPslot(CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_singletons),CHKREF(Ygen_cache_singletons_setter),CHKREF(YLlstG),T141);
  slotF366 = T140;
  (P)YPmet_env_setter(slotF366,getterF363);
  (P)YPmet_env_setter(slotF366,setterF365);
  T139 = CALL2(CHKREF(YPadd_slot),CHKREF(YLgen_cacheG),slotF366);
  T138 = T139;
  T137 = T138;
  lit_85 = YPPsym((P)"gen-cache-classes-setter");
  lit_86 = YPPsym((P)"gen-cache-classes");
  T155 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T155,ENVNUL);
  T154 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLgen_cacheG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T154,ENVNUL);
  T153 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLgen_cacheG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T153,ENVNUL);
  T169 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T168 = (P)YPsig(Ynil,T169,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T167 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_86),T168,Ynil,YPfalse);
  Ygen_cache_classes = T167;
  T171 = fun_221;
  accessorF357 = T171;
  CALL2(CHKREF(YPadd_met),CHKREF(Ygen_cache_classes),accessorF357);
  T170 = accessorF357;
  getterF358 = T170;
  T164 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T163 = (P)YPpair(CHKREF(YLanyG),T164);
  T162 = (P)YPsig(Ynil,T163,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T161 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_85),T162,Ynil,YPfalse);
  Ygen_cache_classes_setter = T161;
  T166 = fun_220;
  accessorF359 = T166;
  CALL2(CHKREF(YPadd_met),CHKREF(Ygen_cache_classes_setter),accessorF359);
  T165 = accessorF359;
  setterF360 = T165;
  T160 = fun_219;
  T159 = (P)YPPslot(CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_classes),CHKREF(Ygen_cache_classes_setter),CHKREF(YLlstG),T160);
  slotF361 = T159;
  (P)YPmet_env_setter(slotF361,getterF358);
  (P)YPmet_env_setter(slotF361,setterF360);
  T158 = CALL2(CHKREF(YPadd_slot),CHKREF(YLgen_cacheG),slotF361);
  T157 = T158;
  T156 = T157;
  lit_87 = YPPsym((P)"sig-names-setter");
  lit_88 = YPPsym((P)"sig-names");
  T174 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T174,ENVNUL);
  T173 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_223 = YPmet(FUNCODEREF(fun_223),YPfalse,T173,ENVNUL);
  T172 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_224 = YPmet(FUNCODEREF(fun_224),YPfalse,T172,ENVNUL);
  T188 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T187 = (P)YPsig(Ynil,T188,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T186 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_88),T187,Ynil,YPfalse);
  Ysig_names = T186;
  T190 = fun_224;
  accessorF352 = T190;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_names),accessorF352);
  T189 = accessorF352;
  getterF353 = T189;
  T183 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T182 = (P)YPpair(CHKREF(YLanyG),T183);
  T181 = (P)YPsig(Ynil,T182,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T180 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_87),T181,Ynil,YPfalse);
  Ysig_names_setter = T180;
  T185 = fun_223;
  accessorF354 = T185;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_names_setter),accessorF354);
  T184 = accessorF354;
  setterF355 = T184;
  T179 = fun_222;
  T178 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_names),CHKREF(Ysig_names_setter),CHKREF(YLlstG),T179);
  slotF356 = T178;
  (P)YPmet_env_setter(slotF356,getterF353);
  (P)YPmet_env_setter(slotF356,setterF355);
  T177 = CALL2(CHKREF(YPadd_slot),CHKREF(YLsigG),slotF356);
  T176 = T177;
  T175 = T176;
  lit_89 = YPPsym((P)"sig-specs-setter");
  lit_90 = YPPsym((P)"sig-specs");
  T193 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T193,ENVNUL);
  T192 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_226 = YPmet(FUNCODEREF(fun_226),YPfalse,T192,ENVNUL);
  T191 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_227 = YPmet(FUNCODEREF(fun_227),YPfalse,T191,ENVNUL);
  T207 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T206 = (P)YPsig(Ynil,T207,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T205 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_90),T206,Ynil,YPfalse);
  Ysig_specs = T205;
  T209 = fun_227;
  accessorF347 = T209;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_specs),accessorF347);
  T208 = accessorF347;
  getterF348 = T208;
  T202 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T201 = (P)YPpair(CHKREF(YLanyG),T202);
  T200 = (P)YPsig(Ynil,T201,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T199 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_89),T200,Ynil,YPfalse);
  Ysig_specs_setter = T199;
  T204 = fun_226;
  accessorF349 = T204;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_specs_setter),accessorF349);
  T203 = accessorF349;
  setterF350 = T203;
  T198 = fun_225;
  T197 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_specs),CHKREF(Ysig_specs_setter),CHKREF(YLlstG),T198);
  slotF351 = T197;
  (P)YPmet_env_setter(slotF351,getterF348);
  (P)YPmet_env_setter(slotF351,setterF350);
  T196 = CALL2(CHKREF(YPadd_slot),CHKREF(YLsigG),slotF351);
  T195 = T196;
  T194 = T195;
  lit_91 = YPPsym((P)"sig-nary?-setter");
  lit_92 = YPPsym((P)"sig-nary?");
  T212 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_228 = YPmet(FUNCODEREF(fun_228),YPfalse,T212,ENVNUL);
  T211 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlogG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_229 = YPmet(FUNCODEREF(fun_229),YPfalse,T211,ENVNUL);
  T210 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_230 = YPmet(FUNCODEREF(fun_230),YPfalse,T210,ENVNUL);
  T226 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T225 = (P)YPsig(Ynil,T226,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T224 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_92),T225,Ynil,YPfalse);
  Ysig_naryQ = T224;
  T228 = fun_230;
  accessorF342 = T228;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_naryQ),accessorF342);
  T227 = accessorF342;
  getterF343 = T227;
  T221 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T220 = (P)YPpair(CHKREF(YLanyG),T221);
  T219 = (P)YPsig(Ynil,T220,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T218 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_91),T219,Ynil,YPfalse);
  Ysig_naryQ_setter = T218;
  T223 = fun_229;
  accessorF344 = T223;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_naryQ_setter),accessorF344);
  T222 = accessorF344;
  setterF345 = T222;
  T217 = fun_228;
  T216 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_naryQ),CHKREF(Ysig_naryQ_setter),CHKREF(YLlogG),T217);
  slotF346 = T216;
  (P)YPmet_env_setter(slotF346,getterF343);
  (P)YPmet_env_setter(slotF346,setterF345);
  T215 = CALL2(CHKREF(YPadd_slot),CHKREF(YLsigG),slotF346);
  T214 = T215;
  T213 = T214;
  lit_93 = YPPsym((P)"sig-arity-setter");
  lit_94 = YPPsym((P)"sig-arity");
  T231 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_231 = YPmet(FUNCODEREF(fun_231),YPfalse,T231,ENVNUL);
  T230 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLintG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T230,ENVNUL);
  T229 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_233 = YPmet(FUNCODEREF(fun_233),YPfalse,T229,ENVNUL);
  T245 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T244 = (P)YPsig(Ynil,T245,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T243 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_94),T244,Ynil,YPfalse);
  Ysig_arity = T243;
  T247 = fun_233;
  accessorF337 = T247;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_arity),accessorF337);
  T246 = accessorF337;
  getterF338 = T246;
  T240 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T239 = (P)YPpair(CHKREF(YLanyG),T240);
  T238 = (P)YPsig(Ynil,T239,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T237 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_93),T238,Ynil,YPfalse);
  Ysig_arity_setter = T237;
  T242 = fun_232;
  accessorF339 = T242;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_arity_setter),accessorF339);
  T241 = accessorF339;
  setterF340 = T241;
  T236 = fun_231;
  T235 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_arity),CHKREF(Ysig_arity_setter),CHKREF(YLintG),T236);
  slotF341 = T235;
  (P)YPmet_env_setter(slotF341,getterF338);
  (P)YPmet_env_setter(slotF341,setterF340);
  T234 = CALL2(CHKREF(YPadd_slot),CHKREF(YLsigG),slotF341);
  T233 = T234;
  T232 = T233;
  lit_95 = YPPsym((P)"sig-value-setter");
  lit_96 = YPPsym((P)"sig-value");
  T250 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_234 = YPmet(FUNCODEREF(fun_234),YPfalse,T250,ENVNUL);
  T249 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_235 = YPmet(FUNCODEREF(fun_235),YPfalse,T249,ENVNUL);
  T248 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T248,ENVNUL);
  T264 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T263 = (P)YPsig(Ynil,T264,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T262 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_96),T263,Ynil,YPfalse);
  Ysig_value = T262;
  T266 = fun_236;
  accessorF332 = T266;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_value),accessorF332);
  T265 = accessorF332;
  getterF333 = T265;
  T259 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T258 = (P)YPpair(CHKREF(YLanyG),T259);
  T257 = (P)YPsig(Ynil,T258,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T256 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_95),T257,Ynil,YPfalse);
  Ysig_value_setter = T256;
  T261 = fun_235;
  accessorF334 = T261;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_value_setter),accessorF334);
  T260 = accessorF334;
  setterF335 = T260;
  T255 = fun_234;
  T254 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_value),CHKREF(Ysig_value_setter),CHKREF(YLanyG),T255);
  slotF336 = T254;
  (P)YPmet_env_setter(slotF336,getterF333);
  (P)YPmet_env_setter(slotF336,setterF335);
  T253 = CALL2(CHKREF(YPadd_slot),CHKREF(YLsigG),slotF336);
  T252 = T253;
  T251 = T252;
  lit_97 = YPPsym((P)"fun-code-setter");
  lit_98 = YPPsym((P)"fun-code");
  T269 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_237 = YPmet(FUNCODEREF(fun_237),YPfalse,T269,ENVNUL);
  T268 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_238 = YPmet(FUNCODEREF(fun_238),YPfalse,T268,ENVNUL);
  T267 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_239 = YPmet(FUNCODEREF(fun_239),YPfalse,T267,ENVNUL);
  T283 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T282 = (P)YPsig(Ynil,T283,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T281 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_98),T282,Ynil,YPfalse);
  Yfun_code = T281;
  T285 = fun_239;
  accessorF327 = T285;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_code),accessorF327);
  T284 = accessorF327;
  getterF328 = T284;
  T278 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T277 = (P)YPpair(CHKREF(YLanyG),T278);
  T276 = (P)YPsig(Ynil,T277,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T275 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_97),T276,Ynil,YPfalse);
  Yfun_code_setter = T275;
  T280 = fun_238;
  accessorF329 = T280;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_code_setter),accessorF329);
  T279 = accessorF329;
  setterF330 = T279;
  T274 = fun_237;
  T273 = (P)YPPslot(CHKREF(YLfunG),CHKREF(Yfun_code),CHKREF(Yfun_code_setter),CHKREF(YLanyG),T274);
  slotF331 = T273;
  (P)YPmet_env_setter(slotF331,getterF328);
  (P)YPmet_env_setter(slotF331,setterF330);
  T272 = CALL2(CHKREF(YPadd_slot),CHKREF(YLfunG),slotF331);
  T271 = T272;
  T270 = T271;
  lit_99 = YPPsym((P)"fun-name-setter");
  lit_100 = YPPsym((P)"fun-name");
  T288 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_240 = YPmet(FUNCODEREF(fun_240),YPfalse,T288,ENVNUL);
  T287 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_241 = YPmet(FUNCODEREF(fun_241),YPfalse,T287,ENVNUL);
  T286 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_242 = YPmet(FUNCODEREF(fun_242),YPfalse,T286,ENVNUL);
  T302 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T301 = (P)YPsig(Ynil,T302,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T300 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_100),T301,Ynil,YPfalse);
  Yfun_name = T300;
  T304 = fun_242;
  accessorF322 = T304;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_name),accessorF322);
  T303 = accessorF322;
  getterF323 = T303;
  T297 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T296 = (P)YPpair(CHKREF(YLanyG),T297);
  T295 = (P)YPsig(Ynil,T296,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T294 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_99),T295,Ynil,YPfalse);
  Yfun_name_setter = T294;
  T299 = fun_241;
  accessorF324 = T299;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_name_setter),accessorF324);
  T298 = accessorF324;
  setterF325 = T298;
  T293 = fun_240;
  T292 = (P)YPPslot(CHKREF(YLfunG),CHKREF(Yfun_name),CHKREF(Yfun_name_setter),CHKREF(YLanyG),T293);
  slotF326 = T292;
  (P)YPmet_env_setter(slotF326,getterF323);
  (P)YPmet_env_setter(slotF326,setterF325);
  T291 = CALL2(CHKREF(YPadd_slot),CHKREF(YLfunG),slotF326);
  T290 = T291;
  T289 = T290;
  lit_101 = YPPsym((P)"fun-sig-setter");
  lit_102 = YPPsym((P)"fun-sig");
  T307 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_243 = YPmet(FUNCODEREF(fun_243),YPfalse,T307,ENVNUL);
  T306 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLsigG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_244 = YPmet(FUNCODEREF(fun_244),YPfalse,T306,ENVNUL);
  T305 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_245 = YPmet(FUNCODEREF(fun_245),YPfalse,T305,ENVNUL);
  T321 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T320 = (P)YPsig(Ynil,T321,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T319 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_102),T320,Ynil,YPfalse);
  Yfun_sig = T319;
  T323 = fun_245;
  accessorF317 = T323;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_sig),accessorF317);
  T322 = accessorF317;
  getterF318 = T322;
  T316 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T315 = (P)YPpair(CHKREF(YLanyG),T316);
  T314 = (P)YPsig(Ynil,T315,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T313 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_101),T314,Ynil,YPfalse);
  Yfun_sig_setter = T313;
  T318 = fun_244;
  accessorF319 = T318;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_sig_setter),accessorF319);
  T317 = accessorF319;
  setterF320 = T317;
  T312 = fun_243;
  T311 = (P)YPPslot(CHKREF(YLfunG),CHKREF(Yfun_sig),CHKREF(Yfun_sig_setter),CHKREF(YLsigG),T312);
  slotF321 = T311;
  (P)YPmet_env_setter(slotF321,getterF318);
  (P)YPmet_env_setter(slotF321,setterF320);
  T310 = CALL2(CHKREF(YPadd_slot),CHKREF(YLfunG),slotF321);
  T309 = T310;
  T308 = T309;
  lit_103 = YPPsym((P)"fun-env-setter");
  lit_104 = YPPsym((P)"fun-env");
  T326 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_246 = YPmet(FUNCODEREF(fun_246),YPfalse,T326,ENVNUL);
  T325 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_247 = YPmet(FUNCODEREF(fun_247),YPfalse,T325,ENVNUL);
  T324 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLmetG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_248 = YPmet(FUNCODEREF(fun_248),YPfalse,T324,ENVNUL);
  T340 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T339 = (P)YPsig(Ynil,T340,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T338 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_104),T339,Ynil,YPfalse);
  Yfun_env = T338;
  T342 = fun_248;
  accessorF312 = T342;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_env),accessorF312);
  T341 = accessorF312;
  getterF313 = T341;
  T335 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T334 = (P)YPpair(CHKREF(YLanyG),T335);
  T333 = (P)YPsig(Ynil,T334,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T332 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_103),T333,Ynil,YPfalse);
  Yfun_env_setter = T332;
  T337 = fun_247;
  accessorF314 = T337;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_env_setter),accessorF314);
  T336 = accessorF314;
  setterF315 = T336;
  T331 = fun_246;
  T330 = (P)YPPslot(CHKREF(YLmetG),CHKREF(Yfun_env),CHKREF(Yfun_env_setter),CHKREF(YLanyG),T331);
  slotF316 = T330;
  (P)YPmet_env_setter(slotF316,getterF313);
  (P)YPmet_env_setter(slotF316,setterF315);
  T329 = CALL2(CHKREF(YPadd_slot),CHKREF(YLmetG),slotF316);
  T328 = T329;
  T327 = T328;
  lit_105 = YPPsym((P)"fun-mets-setter");
  lit_106 = YPPsym((P)"fun-mets");
  T345 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_249 = YPmet(FUNCODEREF(fun_249),YPfalse,T345,ENVNUL);
  T344 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLgenG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_250 = YPmet(FUNCODEREF(fun_250),YPfalse,T344,ENVNUL);
  T343 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLgenG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_251 = YPmet(FUNCODEREF(fun_251),YPfalse,T343,ENVNUL);
  T359 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T358 = (P)YPsig(Ynil,T359,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T357 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_106),T358,Ynil,YPfalse);
  Yfun_mets = T357;
  T361 = fun_251;
  accessorF307 = T361;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_mets),accessorF307);
  T360 = accessorF307;
  getterF308 = T360;
  T354 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T353 = (P)YPpair(CHKREF(YLanyG),T354);
  T352 = (P)YPsig(Ynil,T353,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T351 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_105),T352,Ynil,YPfalse);
  Yfun_mets_setter = T351;
  T356 = fun_250;
  accessorF309 = T356;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_mets_setter),accessorF309);
  T355 = accessorF309;
  setterF310 = T355;
  T350 = fun_249;
  T349 = (P)YPPslot(CHKREF(YLgenG),CHKREF(Yfun_mets),CHKREF(Yfun_mets_setter),CHKREF(YLlstG),T350);
  slotF311 = T349;
  (P)YPmet_env_setter(slotF311,getterF308);
  (P)YPmet_env_setter(slotF311,setterF310);
  T348 = CALL2(CHKREF(YPadd_slot),CHKREF(YLgenG),slotF311);
  T347 = T348;
  T346 = T347;
  lit_107 = YPPsym((P)"fun-cache-setter");
  lit_108 = YPPsym((P)"fun-cache");
  T364 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_252 = YPmet(FUNCODEREF(fun_252),YPfalse,T364,ENVNUL);
  T363 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLgenG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_253 = YPmet(FUNCODEREF(fun_253),YPfalse,T363,ENVNUL);
  T362 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLgenG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_254 = YPmet(FUNCODEREF(fun_254),YPfalse,T362,ENVNUL);
  T378 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T377 = (P)YPsig(Ynil,T378,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T376 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_108),T377,Ynil,YPfalse);
  Yfun_cache = T376;
  T380 = fun_254;
  accessorF302 = T380;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_cache),accessorF302);
  T379 = accessorF302;
  getterF303 = T379;
  T373 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T372 = (P)YPpair(CHKREF(YLanyG),T373);
  T371 = (P)YPsig(Ynil,T372,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T370 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_107),T371,Ynil,YPfalse);
  Yfun_cache_setter = T370;
  T375 = fun_253;
  accessorF304 = T375;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_cache_setter),accessorF304);
  T374 = accessorF304;
  setterF305 = T374;
  T369 = fun_252;
  T368 = (P)YPPslot(CHKREF(YLgenG),CHKREF(Yfun_cache),CHKREF(Yfun_cache_setter),CHKREF(YLanyG),T369);
  slotF306 = T368;
  (P)YPmet_env_setter(slotF306,getterF303);
  (P)YPmet_env_setter(slotF306,setterF305);
  T367 = CALL2(CHKREF(YPadd_slot),CHKREF(YLgenG),slotF306);
  T366 = T367;
  T365 = T366;
  lit_109 = YPPsym((P)"%collect-direct-slots");
  T381 = YPsig(YPPlist(1,CHKREF(lit_27)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YPcollect_direct_slots = YPmet(FUNCODEREF(YPcollect_direct_slots),CHKREF(lit_109),T381,ENVNUL);
  T382 = YPcollect_direct_slots;
  YPcollect_direct_slots = T382;
  lit_110 = YPPsym((P)"%finalize-slots!");
  T383 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_27)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YPfinalize_slotsX = YPmet(FUNCODEREF(YPfinalize_slotsX),CHKREF(lit_110),T383,ENVNUL);
  T384 = YPfinalize_slotsX;
  YPfinalize_slotsX = T384;
  lit_111 = YPPsym((P)"<any>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_111),CHKREF(YLanyG));
  lit_112 = YPPsym((P)"<log>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_112),CHKREF(YLlogG));
  lit_113 = YPPsym((P)"<chr>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_113),CHKREF(YLchrG));
  lit_114 = YPPsym((P)"<num>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_114),CHKREF(YLnumG));
  lit_115 = YPPsym((P)"<int>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_115),CHKREF(YLintG));
  lit_116 = YPPsym((P)"<flo>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_116),CHKREF(YLfloG));
  lit_117 = YPPsym((P)"<loc>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_117),CHKREF(YLlocG));
  lit_118 = YPPsym((P)"<col>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_118),CHKREF(YLcolG));
  lit_119 = YPPsym((P)"<seq>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_119),CHKREF(YLseqG));
  lit_120 = YPPsym((P)"<lst>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_120),CHKREF(YLlstG));
  lit_121 = YPPsym((P)"<flat>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_121),CHKREF(YLflatG));
  lit_122 = YPPsym((P)"<vec>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_122),CHKREF(YLvecG));
  lit_123 = YPPsym((P)"<str>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_123),CHKREF(YLstrG));
  lit_124 = YPPsym((P)"<sym>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_124),CHKREF(YLsymG));
  lit_125 = YPPsym((P)"<type>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_125),CHKREF(YLtypeG));
  lit_126 = YPPsym((P)"<class>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_126),CHKREF(YLclassG));
  lit_127 = YPPsym((P)"<singleton>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_127),CHKREF(YLsingletonG));
  lit_128 = YPPsym((P)"<subclass>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_128),CHKREF(YLsubclassG));
  lit_129 = YPPsym((P)"<union>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_129),CHKREF(YLunionG));
  lit_130 = YPPsym((P)"<slot>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_130),CHKREF(YLslotG));
  lit_131 = YPPsym((P)"<gen-cache>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_131),CHKREF(YLgen_cacheG));
  lit_132 = YPPsym((P)"<sig>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_132),CHKREF(YLsigG));
  lit_133 = YPPsym((P)"<fun>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_133),CHKREF(YLfunG));
  lit_134 = YPPsym((P)"<met>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_134),CHKREF(YLmetG));
  lit_135 = YPPsym((P)"<gen>");
  CALL2(CHKREF(YPfinalize_slotsX),CHKREF(lit_135),CHKREF(YLgenG));
  lit_136 = YPPsym((P)"@@==");
  T385 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_12)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  YOOEE = YPmet(FUNCODEREF(YOOEE),CHKREF(lit_136),T385,ENVNUL);
  T386 = YOOEE;
  YOOEE = T386;
  lit_137 = YPPsym((P)"not");
  T387 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  Ynot = YPmet(FUNCODEREF(Ynot),CHKREF(lit_137),T387,ENVNUL);
  T388 = Ynot;
  Ynot = T388;
  lit_138 = YPPsym((P)"@@empty?");
  T389 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  YOOemptyQ = YPmet(FUNCODEREF(YOOemptyQ),CHKREF(lit_138),T389,ENVNUL);
  T390 = YOOemptyQ;
  YOOemptyQ = T390;
  lit_139 = YPPsym((P)"@rev!");
  T391 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YOrevX = YPmet(FUNCODEREF(YOrevX),CHKREF(lit_139),T391,ENVNUL);
  T392 = YOrevX;
  YOrevX = T392;
  lit_140 = YPPsym((P)"@all?");
  lit_141 = YPPsym((P)"c");
  lit_142 = YPPsym((P)"test");
  lit_143 = YPPsym((P)"fnd");
  lit_144 = YPPsym((P)"p");
  T397 = YPsig(YPPlist(1,CHKREF(lit_144)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T396 = fun_fnd_272 = YPmet(FUNCODEREF(fun_fnd_272),CHKREF(lit_143),T397,ENVNUL);
  T395 = YPsig(YPPlist(2,CHKREF(lit_142),CHKREF(lit_141)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  T394 = YOallQ = YPmet(FUNCODEREF(YOallQ),CHKREF(lit_140),T395,ENVNUL);
  T399 = YOallQ;
  T398 = YOallQ = T399;
  T393 = T398;
  return T393;
}

P Y___main_7___() {
  P T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115,T114;
  P T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99,T98;
  P T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82;
  P T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66;
  P T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50;
  P T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
loop:
  lit_145 = YPPsym((P)"@all2?");
  lit_146 = YPPsym((P)"py");
  lit_147 = YPPsym((P)"px");
  T1 = YPsig(YPPlist(2,CHKREF(lit_147),CHKREF(lit_146)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fnd_274 = YPmet(FUNCODEREF(fun_fnd_274),CHKREF(lit_143),T1,ENVNUL);
  T0 = YPsig(YPPlist(3,CHKREF(lit_142),CHKREF(lit_9),CHKREF(lit_12)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLlogG));
  YOall2Q = YPmet(FUNCODEREF(YOall2Q),CHKREF(lit_145),T0,ENVNUL);
  T2 = YOall2Q;
  YOall2Q = T2;
  lit_148 = YPPsym((P)"@elt");
  lit_149 = YPPsym((P)"key");
  lit_150 = YPPsym((P)"count");
  T4 = YPsig(YPPlist(2,CHKREF(lit_150),CHKREF(lit_9)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fnd_276 = YPmet(FUNCODEREF(fun_fnd_276),CHKREF(lit_143),T4,ENVNUL);
  T3 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_149)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOelt = YPmet(FUNCODEREF(YOelt),CHKREF(lit_148),T3,ENVNUL);
  T5 = YOelt;
  YOelt = T5;
  lit_151 = YPPsym((P)"@fill");
  lit_152 = YPPsym((P)"f");
  T7 = YPsig(YPPlist(1,CHKREF(lit_144)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_278 = YPmet(FUNCODEREF(fun_loop_278),CHKREF(lit_5),T7,ENVNUL);
  T6 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_152)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  YOfill = YPmet(FUNCODEREF(YOfill),CHKREF(lit_151),T6,ENVNUL);
  T8 = YOfill;
  YOfill = T8;
  lit_153 = YPPsym((P)"@any?");
  T10 = YPsig(YPPlist(1,CHKREF(lit_144)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_fnd_280 = YPmet(FUNCODEREF(fun_fnd_280),CHKREF(lit_143),T10,ENVNUL);
  T9 = YPsig(YPPlist(2,CHKREF(lit_142),CHKREF(lit_141)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOanyQ = YPmet(FUNCODEREF(YOanyQ),CHKREF(lit_153),T9,ENVNUL);
  T11 = YOanyQ;
  YOanyQ = T11;
  lit_154 = YPPsym((P)"@map");
  lit_155 = YPPsym((P)"do");
  lit_156 = YPPsym((P)"res");
  T13 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_156)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_do_285 = YPmet(FUNCODEREF(fun_do_285),CHKREF(lit_155),T13,ENVNUL);
  T12 = YPsig(YPPlist(2,CHKREF(lit_152),CHKREF(lit_9)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  YOmap = YPmet(FUNCODEREF(YOmap),CHKREF(lit_154),T12,ENVNUL);
  T14 = YOmap;
  YOmap = T14;
  lit_157 = YPPsym((P)"@pick");
  T16 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_156)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_do_287 = YPmet(FUNCODEREF(fun_do_287),CHKREF(lit_155),T16,ENVNUL);
  T15 = YPsig(YPPlist(2,CHKREF(lit_152),CHKREF(lit_9)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  YOpick = YPmet(FUNCODEREF(YOpick),CHKREF(lit_157),T15,ENVNUL);
  T17 = YOpick;
  YOpick = T17;
  lit_158 = YPPsym((P)"@do");
  T19 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_do_289 = YPmet(FUNCODEREF(fun_do_289),CHKREF(lit_155),T19,ENVNUL);
  T18 = YPsig(YPPlist(2,CHKREF(lit_152),CHKREF(lit_9)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOdo = YPmet(FUNCODEREF(YOdo),CHKREF(lit_158),T18,ENVNUL);
  T20 = YOdo;
  YOdo = T20;
  lit_159 = YPPsym((P)"@alter");
  lit_160 = YPPsym((P)"src");
  lit_161 = YPPsym((P)"dst");
  lit_162 = YPPsym((P)"in");
  lit_163 = YPPsym((P)"ss");
  lit_164 = YPPsym((P)"ds");
  T22 = YPsig(YPPlist(2,CHKREF(lit_164),CHKREF(lit_163)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_in_291 = YPmet(FUNCODEREF(fun_in_291),CHKREF(lit_162),T22,ENVNUL);
  T21 = YPsig(YPPlist(2,CHKREF(lit_161),CHKREF(lit_160)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  YOalter = YPmet(FUNCODEREF(YOalter),CHKREF(lit_159),T21,ENVNUL);
  T23 = YOalter;
  YOalter = T23;
  lit_165 = YPPsym((P)"@fab");
  lit_166 = YPPsym((P)"fab");
  T25 = YPsig(YPPlist(2,CHKREF(lit_18),CHKREF(lit_156)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fab_293 = YPmet(FUNCODEREF(fun_fab_293),CHKREF(lit_166),T25,ENVNUL);
  T24 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_3)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  YOfab = YPmet(FUNCODEREF(YOfab),CHKREF(lit_165),T24,ENVNUL);
  T26 = YOfab;
  YOfab = T26;
  lit_167 = YPPsym((P)"@reduce");
  lit_168 = YPPsym((P)"init");
  lit_169 = YPPsym((P)"combine");
  lit_170 = YPPsym((P)"red");
  T28 = YPsig(YPPlist(2,CHKREF(lit_156),CHKREF(lit_141)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_red_295 = YPmet(FUNCODEREF(fun_red_295),CHKREF(lit_170),T28,ENVNUL);
  T27 = YPsig(YPPlist(3,CHKREF(lit_169),CHKREF(lit_168),CHKREF(lit_141)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLlstG));
  YOreduce = YPmet(FUNCODEREF(YOreduce),CHKREF(lit_167),T27,ENVNUL);
  T29 = YOreduce;
  YOreduce = T29;
  lit_171 = YPPsym((P)"@cat2");
  T30 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_12)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  YOcat2 = YPmet(FUNCODEREF(YOcat2),CHKREF(lit_171),T30,ENVNUL);
  T31 = YOcat2;
  YOcat2 = T31;
  lit_172 = YPPsym((P)"@find-key");
  T33 = YPsig(YPPlist(2,CHKREF(lit_141),CHKREF(lit_18)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fnd_298 = YPmet(FUNCODEREF(fun_fnd_298),CHKREF(lit_143),T33,ENVNUL);
  T32 = YPsig(YPPlist(2,CHKREF(lit_152),CHKREF(lit_141)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOfind_key = YPmet(FUNCODEREF(YOfind_key),CHKREF(lit_172),T32,ENVNUL);
  T34 = YOfind_key;
  YOfind_key = T34;
  lit_173 = YPPsym((P)"@mem?");
  T36 = YPsig(YPPlist(1,CHKREF(lit_12)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_300 = YPmet(FUNCODEREF(fun_300),YPfalse,T36,ENVNUL);
  T35 = YPsig(YPPlist(2,CHKREF(lit_141),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  YOmemQ = YPmet(FUNCODEREF(YOmemQ),CHKREF(lit_173),T35,ENVNUL);
  T37 = YOmemQ;
  YOmemQ = T37;
  lit_174 = YPPsym((P)"@del-dups");
  lit_175 = YPPsym((P)"e");
  T39 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_175)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_302 = YPmet(FUNCODEREF(fun_302),YPfalse,T39,ENVNUL);
  T38 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YOdel_dups = YPmet(FUNCODEREF(YOdel_dups),CHKREF(lit_174),T38,ENVNUL);
  T40 = YOdel_dups;
  YOdel_dups = T40;
  lit_176 = YPPsym((P)"@lst");
  lit_177 = YPPsym((P)"objects");
  T41 = YPsig(YPPlist(1,CHKREF(lit_177)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG));
  YOlst = YPmet(FUNCODEREF(YOlst),CHKREF(lit_176),T41,ENVNUL);
  T42 = YOlst;
  YOlst = T42;
  lit_178 = YPPsym((P)"@fun-names");
  T43 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YOfun_names = YPmet(FUNCODEREF(YOfun_names),CHKREF(lit_178),T43,ENVNUL);
  T44 = YOfun_names;
  YOfun_names = T44;
  lit_179 = YPPsym((P)"@fun-specs");
  T45 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YOfun_specs = YPmet(FUNCODEREF(YOfun_specs),CHKREF(lit_179),T45,ENVNUL);
  T46 = YOfun_specs;
  YOfun_specs = T46;
  lit_180 = YPPsym((P)"@fun-nary?");
  T47 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  YOfun_naryQ = YPmet(FUNCODEREF(YOfun_naryQ),CHKREF(lit_180),T47,ENVNUL);
  T48 = YOfun_naryQ;
  YOfun_naryQ = T48;
  lit_181 = YPPsym((P)"@fun-arity");
  T49 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  YOfun_arity = YPmet(FUNCODEREF(YOfun_arity),CHKREF(lit_181),T49,ENVNUL);
  T50 = YOfun_arity;
  YOfun_arity = T50;
  lit_182 = YPPsym((P)"@fun-value");
  T51 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YOfun_value = YPmet(FUNCODEREF(YOfun_value),CHKREF(lit_182),T51,ENVNUL);
  T52 = YOfun_value;
  YOfun_value = T52;
  lit_183 = YPPsym((P)"@fun-mets");
  T53 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YOfun_mets = YPmet(FUNCODEREF(YOfun_mets),CHKREF(lit_183),T53,ENVNUL);
  T54 = YOfun_mets;
  YOfun_mets = T54;
  lit_184 = YPPsym((P)"@fun-mets-setter");
  T55 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOfun_mets_setter = YPmet(FUNCODEREF(YOfun_mets_setter),CHKREF(lit_184),T55,ENVNUL);
  T56 = YOfun_mets_setter;
  YOfun_mets_setter = T56;
  YLenvG = CHKREF(YLanyG);
  YLspecsG = CHKREF(YLlstG);
  YLbodyG = CHKREF(YLanyG);
  lit_185 = YPPsym((P)"fun-spec");
  T57 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_18)),YPPlist(2,CHKREF(YLmetG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yfun_spec = YPmet(FUNCODEREF(Yfun_spec),CHKREF(lit_185),T57,ENVNUL);
  T58 = Yfun_spec;
  Yfun_spec = T58;
  YLmetsG = CHKREF(YLlstG);
  lit_186 = YPPsym((P)"fun-same-met?");
  T59 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_12)),YPPlist(2,CHKREF(YLmetG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  Yfun_same_metQ = YPmet(FUNCODEREF(Yfun_same_metQ),CHKREF(lit_186),T59,ENVNUL);
  T60 = Yfun_same_metQ;
  Yfun_same_metQ = T60;
  lit_187 = YPPsym((P)"fun-congruent?");
  T61 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_12)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  Yfun_congruentQ = YPmet(FUNCODEREF(Yfun_congruentQ),CHKREF(lit_187),T61,ENVNUL);
  T62 = Yfun_congruentQ;
  Yfun_congruentQ = T62;
  YTrestarts_okQT = YPfalse;
  lit_188 = YPPsym((P)"gen-add-met");
  lit_189 = YPPsym((P)"m");
  lit_190 = YPPsym((P)"g");
  lit_191 = YPPsym((P)"col");
  lit_192 = YPPsym((P)"gms");
  lit_193 = YPPsym((P)"same?");
  lit_194 = YPPsym((P)"mets");
  lit_195 = YPPsym((P)"lop");
  lit_196 = YPPsym((P)"specs");
  lit_197 = YPPsym((P)"return");
  lit_198 = YPsb((P)"Replace %= with an empty generic congruent with %=");
  T69 = YPsig(YPPlist(3,CHKREF(lit_194),CHKREF(lit_193),CHKREF(lit_192)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLmetsG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_col_315 = YPmet(FUNCODEREF(fun_col_315),CHKREF(lit_191),T69,ENVNUL);
  T68 = YPsig(YPPlist(1,CHKREF(lit_196)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_lop_316 = YPmet(FUNCODEREF(fun_lop_316),CHKREF(lit_195),T68,ENVNUL);
  T67 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_317 = YPmet(FUNCODEREF(fun_317),YPfalse,T67,ENVNUL);
  T66 = YPsig(YPPlist(2,CHKREF(lit_141),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_318 = YPmet(FUNCODEREF(fun_318),YPfalse,T66,ENVNUL);
  T65 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_319 = YPmet(FUNCODEREF(fun_319),YPfalse,T65,ENVNUL);
  T64 = YPsig(YPPlist(1,CHKREF(lit_197)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_320 = YPmet(FUNCODEREF(fun_320),YPfalse,T64,ENVNUL);
  T63 = YPsig(YPPlist(2,CHKREF(lit_190),CHKREF(lit_189)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLgenG));
  Ygen_add_met = YPmet(FUNCODEREF(Ygen_add_met),CHKREF(lit_188),T63,ENVNUL);
  T70 = Ygen_add_met;
  Ygen_add_met = T70;
  YLargsG = CHKREF(YLlstG);
  lit_199 = YPPsym((P)"t");
  T71 = YPsig(YPPlist(1,CHKREF(lit_199)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_325 = YPmet(FUNCODEREF(fun_325),YPfalse,T71,ENVNUL);
  lit_200 = YPPsym((P)"@isa?");
  lit_201 = YPPsym((P)"o");
  T72 = YPsig(YPPlist(2,CHKREF(lit_201),CHKREF(lit_199)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  YOisaQ = YPmet(FUNCODEREF(YOisaQ),CHKREF(lit_200),T72,ENVNUL);
  T73 = YOisaQ;
  YOisaQ = T73;
  lit_202 = YPPsym((P)"@class<");
  lit_203 = YPPsym((P)"wrt");
  lit_204 = YPPsym((P)"c2");
  lit_205 = YPPsym((P)"c1");
  lit_206 = YPPsym((P)"find");
  lit_207 = YPPsym((P)"ps");
  lit_208 = YPsb((P)"neither %= nor %=");
  lit_209 = YPsb((P)"can't order specializers - arg/reference object %= is ");
  T75 = YPsig(YPPlist(1,CHKREF(lit_207)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_find_331 = YPmet(FUNCODEREF(fun_find_331),CHKREF(lit_206),T75,ENVNUL);
  T74 = YPsig(YPPlist(3,CHKREF(lit_205),CHKREF(lit_204),CHKREF(lit_203)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLlogG));
  YOclassL = YPmet(FUNCODEREF(YOclassL),CHKREF(lit_202),T74,ENVNUL);
  T76 = YOclassL;
  YOclassL = T76;
  YLtupG = CHKREF(YLlstG);
  YOtup = CHKREF(YOlst);
  lit_210 = YPPsym((P)"@type-equal?");
  lit_211 = YPPsym((P)"t2");
  lit_212 = YPPsym((P)"t1");
  T77 = YPsig(YPPlist(2,CHKREF(lit_212),CHKREF(lit_211)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  YOtype_equalQ = YPmet(FUNCODEREF(YOtype_equalQ),CHKREF(lit_210),T77,ENVNUL);
  T78 = YOtype_equalQ;
  YOtype_equalQ = T78;
  lit_213 = YPPsym((P)"@subtype?");
  T81 = YPsig(YPPlist(1,CHKREF(lit_199)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_334 = YPmet(FUNCODEREF(fun_334),YPfalse,T81,ENVNUL);
  T80 = YPsig(YPPlist(1,CHKREF(lit_199)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_335 = YPmet(FUNCODEREF(fun_335),YPfalse,T80,ENVNUL);
  T79 = YPsig(YPPlist(2,CHKREF(lit_212),CHKREF(lit_211)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  YOsubtypeQ = YPmet(FUNCODEREF(YOsubtypeQ),CHKREF(lit_213),T79,ENVNUL);
  T82 = YOsubtypeQ;
  YOsubtypeQ = T82;
  lit_214 = YPPsym((P)"@may-isa?");
  lit_215 = YPPsym((P)"elts");
  lit_216 = YPPsym((P)"all?");
  lit_217 = YPPsym((P)"some?");
  T84 = YPsig(YPPlist(3,CHKREF(lit_217),CHKREF(lit_216),CHKREF(lit_215)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_loop_337 = YPmet(FUNCODEREF(fun_loop_337),CHKREF(lit_5),T84,ENVNUL);
  T83 = YPsig(YPPlist(2,CHKREF(lit_141),CHKREF(lit_199)),YPPlist(2,CHKREF(YLclassG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLtupG));
  YOmay_isaQ = YPmet(FUNCODEREF(YOmay_isaQ),CHKREF(lit_214),T83,ENVNUL);
  T85 = YOmay_isaQ;
  YOmay_isaQ = T85;
  lit_218 = YPPsym((P)"order-specs-default");
  lit_219 = YPPsym((P)"arg");
  lit_220 = YPPsym((P)"<>");
  lit_221 = YPPsym((P)">");
  lit_222 = YPPsym((P)"<");
  lit_223 = YPPsym((P)"=");
  T86 = YPsig(YPPlist(3,CHKREF(lit_212),CHKREF(lit_211),CHKREF(lit_219)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLtupG));
  Yorder_specs_default = YPmet(FUNCODEREF(Yorder_specs_default),CHKREF(lit_218),T86,ENVNUL);
  T87 = Yorder_specs_default;
  Yorder_specs_default = T87;
  lit_224 = YPPsym((P)"order-specs");
  T88 = YPsig(YPPlist(3,CHKREF(lit_212),CHKREF(lit_211),CHKREF(lit_219)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLtupG));
  Yorder_specs = YPmet(FUNCODEREF(Yorder_specs),CHKREF(lit_224),T88,ENVNUL);
  T89 = Yorder_specs;
  Yorder_specs = T89;
  lit_225 = YPPsym((P)"order-mets");
  lit_226 = YPPsym((P)"m2");
  lit_227 = YPPsym((P)"m1");
  lit_228 = YPPsym((P)"idx");
  lit_229 = YPPsym((P)"state");
  T91 = YPsig(YPPlist(2,CHKREF(lit_229),CHKREF(lit_228)),YPPlist(2,CHKREF(YLsymG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_341 = YPmet(FUNCODEREF(fun_loop_341),CHKREF(lit_5),T91,ENVNUL);
  T90 = YPsig(YPPlist(3,CHKREF(lit_227),CHKREF(lit_226),CHKREF(lit_20)),YPPlist(3,CHKREF(YLmetG),CHKREF(YLmetG),CHKREF(YLargsG)),YPfalse,YPint((P)3),CHKREF(YLsymG));
  Yorder_mets = YPmet(FUNCODEREF(Yorder_mets),CHKREF(lit_225),T90,ENVNUL);
  T92 = Yorder_mets;
  Yorder_mets = T92;
  lit_230 = YPPsym((P)"sorted-app-mets-1");
  lit_231 = YPPsym((P)"insert");
  lit_232 = YPPsym((P)"osub");
  lit_233 = YPPsym((P)"oprev");
  lit_234 = YPPsym((P)"check-subsequent-ambiguities");
  lit_235 = YPPsym((P)"precedes-all?");
  lit_236 = YPPsym((P)"make-ambiguous");
  lit_237 = YPPsym((P)"headed-list");
  T100 = YPsig(YPPlist(2,CHKREF(lit_233),CHKREF(lit_232)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_insert_343 = YPmet(FUNCODEREF(fun_insert_343),CHKREF(lit_231),T100,ENVNUL);
  T99 = YPsig(YPPlist(1,CHKREF(lit_233)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_check_subsequent_ambiguities_344 = YPmet(FUNCODEREF(fun_check_subsequent_ambiguities_344),CHKREF(lit_234),T99,ENVNUL);
  T98 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_345 = YPmet(FUNCODEREF(fun_loop_345),CHKREF(lit_5),T98,ENVNUL);
  T97 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_precedes_allQ_346 = YPmet(FUNCODEREF(fun_precedes_allQ_346),CHKREF(lit_235),T97,ENVNUL);
  T96 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_347 = YPmet(FUNCODEREF(fun_loop_347),CHKREF(lit_5),T96,ENVNUL);
  T95 = YPsig(YPPlist(1,CHKREF(lit_237)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_make_ambiguous_348 = YPmet(FUNCODEREF(fun_make_ambiguous_348),CHKREF(lit_236),T95,ENVNUL);
  T94 = YPsig(YPPlist(1,CHKREF(lit_194)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_349 = YPmet(FUNCODEREF(fun_loop_349),CHKREF(lit_5),T94,ENVNUL);
  T93 = YPsig(YPPlist(3,CHKREF(lit_194),CHKREF(lit_20),CHKREF(lit_225)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLargsG),CHKREF(YLfunG)),YPfalse,YPint((P)3),CHKREF(YLtupG));
  Ysorted_app_mets_1 = YPmet(FUNCODEREF(Ysorted_app_mets_1),CHKREF(lit_230),T93,ENVNUL);
  T101 = Ysorted_app_mets_1;
  Ysorted_app_mets_1 = T101;
  lit_238 = YPPsym((P)"met-app?");
  T103 = YPsig(YPPlist(1,CHKREF(lit_18)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_351 = YPmet(FUNCODEREF(fun_loop_351),CHKREF(lit_5),T103,ENVNUL);
  T102 = YPsig(YPPlist(2,CHKREF(lit_23),CHKREF(lit_20)),YPPlist(2,CHKREF(YLmetG),CHKREF(YLargsG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  Ymet_appQ = YPmet(FUNCODEREF(Ymet_appQ),CHKREF(lit_238),T102,ENVNUL);
  T104 = Ymet_appQ;
  Ymet_appQ = T104;
  lit_239 = YPPsym((P)"sorted-app-mets");
  lit_240 = YPPsym((P)"gf");
  lit_241 = YPPsym((P)"ms");
  lit_242 = YPPsym((P)"ans");
  T106 = YPsig(YPPlist(2,CHKREF(lit_242),CHKREF(lit_241)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_col_353 = YPmet(FUNCODEREF(fun_col_353),CHKREF(lit_191),T106,ENVNUL);
  T105 = YPsig(YPPlist(2,CHKREF(lit_240),CHKREF(lit_20)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLargsG)),YPfalse,YPint((P)2),CHKREF(YLtupG));
  Ysorted_app_mets = YPmet(FUNCODEREF(Ysorted_app_mets),CHKREF(lit_239),T105,ENVNUL);
  T107 = Ysorted_app_mets;
  Ysorted_app_mets = T107;
  lit_243 = YPPsym((P)"opt-args");
  lit_244 = YPPsym((P)"n");
  T109 = YPsig(YPPlist(3,CHKREF(lit_18),CHKREF(lit_7),CHKREF(lit_144)),YPPlist(3,CHKREF(YLintG),CHKREF(YLargsG),CHKREF(YLargsG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_col_355 = YPmet(FUNCODEREF(fun_col_355),CHKREF(lit_191),T109,ENVNUL);
  T108 = YPsig(YPPlist(2,CHKREF(lit_244),CHKREF(lit_20)),YPPlist(2,CHKREF(YLintG),CHKREF(YLargsG)),YPfalse,YPint((P)2),CHKREF(YLargsG));
  Yopt_args = YPmet(FUNCODEREF(Yopt_args),CHKREF(lit_243),T108,ENVNUL);
  T110 = Yopt_args;
  Yopt_args = T110;
  lit_245 = YPPsym((P)"@gen-cache-arg-pos");
  T111 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YOgen_cache_arg_pos = YPmet(FUNCODEREF(YOgen_cache_arg_pos),CHKREF(lit_245),T111,ENVNUL);
  T112 = YOgen_cache_arg_pos;
  YOgen_cache_arg_pos = T112;
  lit_246 = YPPsym((P)"@gen-cache-arg-pos-setter");
  T113 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOgen_cache_arg_pos_setter = YPmet(FUNCODEREF(YOgen_cache_arg_pos_setter),CHKREF(lit_246),T113,ENVNUL);
  T114 = YOgen_cache_arg_pos_setter;
  YOgen_cache_arg_pos_setter = T114;
  lit_247 = YPPsym((P)"@gen-cache-singletons");
  T115 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YOgen_cache_singletons = YPmet(FUNCODEREF(YOgen_cache_singletons),CHKREF(lit_247),T115,ENVNUL);
  T116 = YOgen_cache_singletons;
  YOgen_cache_singletons = T116;
  lit_248 = YPPsym((P)"@gen-cache-singletons-setter");
  T117 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOgen_cache_singletons_setter = YPmet(FUNCODEREF(YOgen_cache_singletons_setter),CHKREF(lit_248),T117,ENVNUL);
  T118 = YOgen_cache_singletons_setter;
  YOgen_cache_singletons_setter = T118;
  lit_249 = YPPsym((P)"@gen-cache-classes");
  T119 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YOgen_cache_classes = YPmet(FUNCODEREF(YOgen_cache_classes),CHKREF(lit_249),T119,ENVNUL);
  T120 = YOgen_cache_classes;
  YOgen_cache_classes = T120;
  lit_250 = YPPsym((P)"@gen-cache-classes-setter");
  T121 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOgen_cache_classes_setter = YPmet(FUNCODEREF(YOgen_cache_classes_setter),CHKREF(lit_250),T121,ENVNUL);
  T122 = YOgen_cache_classes_setter;
  YOgen_cache_classes_setter = T122;
  lit_251 = YPPsym((P)"method-accessor-offset");
  T123 = YPsig(YPPlist(3,CHKREF(lit_24),CHKREF(lit_23),CHKREF(lit_20)),YPPlist(3,CHKREF(YLgenG),CHKREF(YLmetG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  Ymethod_accessor_offset = YPmet(FUNCODEREF(Ymethod_accessor_offset),CHKREF(lit_251),T123,ENVNUL);
  T124 = Ymethod_accessor_offset;
  Ymethod_accessor_offset = T124;
  lit_252 = YPPsym((P)"@singleton-spec?");
  T127 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T126 = YOsingleton_specQ = YPmet(FUNCODEREF(YOsingleton_specQ),CHKREF(lit_252),T127,ENVNUL);
  T129 = YOsingleton_specQ;
  T128 = YOsingleton_specQ = T129;
  T125 = T128;
  return T125;
}

P Y___main_8___() {
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_253 = YPPsym((P)"@subclass-spec?");
  T0 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YOsubclass_specQ = YPmet(FUNCODEREF(YOsubclass_specQ),CHKREF(lit_253),T0,ENVNUL);
  T1 = YOsubclass_specQ;
  YOsubclass_specQ = T1;
  lit_254 = YPPsym((P)"@union-spec?");
  T2 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YOunion_specQ = YPmet(FUNCODEREF(YOunion_specQ),CHKREF(lit_254),T2,ENVNUL);
  T3 = YOunion_specQ;
  YOunion_specQ = T3;
  lit_255 = YPPsym((P)"@precise-spec?");
  T4 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YOprecise_specQ = YPmet(FUNCODEREF(YOprecise_specQ),CHKREF(lit_255),T4,ENVNUL);
  T5 = YOprecise_specQ;
  YOprecise_specQ = T5;
  lit_256 = YPPsym((P)"@mets-unspecialized-at?");
  lit_257 = YPPsym((P)"pos");
  T7 = YPsig(YPPlist(1,CHKREF(lit_23)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_368 = YPmet(FUNCODEREF(fun_368),YPfalse,T7,ENVNUL);
  T6 = YPsig(YPPlist(2,CHKREF(lit_194),CHKREF(lit_257)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  YOmets_unspecialized_atQ = YPmet(FUNCODEREF(YOmets_unspecialized_atQ),CHKREF(lit_256),T6,ENVNUL);
  T8 = YOmets_unspecialized_atQ;
  YOmets_unspecialized_atQ = T8;
  lit_258 = YPPsym((P)"@prune-mets-by-type-at");
  lit_259 = YPPsym((P)"type");
  T10 = YPsig(YPPlist(1,CHKREF(lit_23)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_370 = YPmet(FUNCODEREF(fun_370),YPfalse,T10,ENVNUL);
  T9 = YPsig(YPPlist(3,CHKREF(lit_194),CHKREF(lit_259),CHKREF(lit_257)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLtypeG),CHKREF(YLintG)),YPfalse,YPint((P)3),CHKREF(YLmetsG));
  YOprune_mets_by_type_at = YPmet(FUNCODEREF(YOprune_mets_by_type_at),CHKREF(lit_258),T9,ENVNUL);
  T11 = YOprune_mets_by_type_at;
  YOprune_mets_by_type_at = T11;
  lit_260 = YPPsym((P)"@mets-specs-at");
  T13 = YPsig(YPPlist(1,CHKREF(lit_23)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_372 = YPmet(FUNCODEREF(fun_372),YPfalse,T13,ENVNUL);
  T12 = YPsig(YPPlist(2,CHKREF(lit_194),CHKREF(lit_257)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  YOmets_specs_at = YPmet(FUNCODEREF(YOmets_specs_at),CHKREF(lit_260),T12,ENVNUL);
  T14 = YOmets_specs_at;
  YOmets_specs_at = T14;
  lit_261 = YPPsym((P)"@mets-singletons-at");
  lit_262 = YPPsym((P)"spec");
  T16 = YPsig(YPPlist(1,CHKREF(lit_262)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_374 = YPmet(FUNCODEREF(fun_374),YPfalse,T16,ENVNUL);
  T15 = YPsig(YPPlist(2,CHKREF(lit_194),CHKREF(lit_257)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  YOmets_singletons_at = YPmet(FUNCODEREF(YOmets_singletons_at),CHKREF(lit_261),T15,ENVNUL);
  T17 = YOmets_singletons_at;
  YOmets_singletons_at = T17;
  lit_263 = YPPsym((P)"@mets-subclasses-at");
  T19 = YPsig(YPPlist(1,CHKREF(lit_262)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_376 = YPmet(FUNCODEREF(fun_376),YPfalse,T19,ENVNUL);
  T18 = YPsig(YPPlist(2,CHKREF(lit_194),CHKREF(lit_257)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  YOmets_subclasses_at = YPmet(FUNCODEREF(YOmets_subclasses_at),CHKREF(lit_263),T18,ENVNUL);
  T20 = YOmets_subclasses_at;
  YOmets_subclasses_at = T20;
  lit_264 = YPPsym((P)"gen-lookup-miss-1-using");
  lit_265 = YPPsym((P)"sorted-mets");
  lit_266 = YPPsym((P)"cache");
  lit_267 = YPPsym((P)"all-assocs-setter");
  lit_268 = YPPsym((P)"all-assocs");
  lit_269 = YPPsym((P)"assocs");
  T22 = YPsig(YPPlist(1,CHKREF(lit_269)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_378 = YPmet(FUNCODEREF(fun_loop_378),CHKREF(lit_5),T22,ENVNUL);
  T21 = YPsig(YPPlist(9,CHKREF(lit_149),CHKREF(lit_268),CHKREF(lit_267),CHKREF(lit_24),CHKREF(lit_266),CHKREF(lit_194),CHKREF(lit_265),CHKREF(lit_18),CHKREF(lit_20)),YPPlist(9,CHKREF(YLanyG),CHKREF(YLfunG),CHKREF(YLfunG),CHKREF(YLgenG),CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG),CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)9),CHKREF(YLanyG));
  Ygen_lookup_miss_1_using = YPmet(FUNCODEREF(Ygen_lookup_miss_1_using),CHKREF(lit_264),T21,ENVNUL);
  T23 = Ygen_lookup_miss_1_using;
  Ygen_lookup_miss_1_using = T23;
  lit_270 = YPPsym((P)"@specd-args");
  lit_271 = YPPsym((P)"copy");
  lit_272 = YPPsym((P)"k");
  T25 = YPsig(YPPlist(3,CHKREF(lit_20),CHKREF(lit_272),CHKREF(lit_6)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_copy_380 = YPmet(FUNCODEREF(fun_copy_380),CHKREF(lit_271),T25,ENVNUL);
  T24 = YPsig(YPPlist(3,CHKREF(lit_20),CHKREF(lit_18),CHKREF(lit_219)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLintG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLlstG));
  YOspecd_args = YPmet(FUNCODEREF(YOspecd_args),CHKREF(lit_270),T24,ENVNUL);
  T26 = YOspecd_args;
  YOspecd_args = T26;
  lit_273 = YPPsym((P)"ensure-singleton-cache");
  lit_274 = YPPsym((P)"singletons");
  T28 = YPsig(YPPlist(1,CHKREF(lit_274)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_382 = YPmet(FUNCODEREF(fun_loop_382),CHKREF(lit_5),T28,ENVNUL);
  T27 = YPsig(YPPlist(6,CHKREF(lit_24),CHKREF(lit_266),CHKREF(lit_194),CHKREF(lit_265),CHKREF(lit_18),CHKREF(lit_20)),YPPlist(6,CHKREF(YLgenG),CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG),CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)6),CHKREF(YLanyG));
  Yensure_singleton_cache = YPmet(FUNCODEREF(Yensure_singleton_cache),CHKREF(lit_273),T27,ENVNUL);
  T29 = Yensure_singleton_cache;
  Yensure_singleton_cache = T29;
  lit_275 = YPPsym((P)"gen-lookup-miss-1");
  lit_276 = YPPsym((P)"ocache");
  T30 = YPsig(YPPlist(6,CHKREF(lit_24),CHKREF(lit_276),CHKREF(lit_194),CHKREF(lit_265),CHKREF(lit_18),CHKREF(lit_20)),YPPlist(6,CHKREF(YLgenG),CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG),CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)6),CHKREF(YLanyG));
  Ygen_lookup_miss_1 = YPmet(FUNCODEREF(Ygen_lookup_miss_1),CHKREF(lit_275),T30,ENVNUL);
  T31 = Ygen_lookup_miss_1;
  Ygen_lookup_miss_1 = T31;
  lit_277 = YPPsym((P)"gen-lookup-miss");
  T32 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_20)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Ygen_lookup_miss = YPmet(FUNCODEREF(Ygen_lookup_miss),CHKREF(lit_277),T32,ENVNUL);
  T33 = Ygen_lookup_miss;
  Ygen_lookup_miss = T33;
  YLintG_class = CHKREF(YLintG);
  T34 = (P)YPpair(CHKREF(Ynil),CHKREF(Ynil));
  YDmissed_dispatch = T34;
  lit_278 = YPPsym((P)"choose-methods");
  lit_279 = YPsb((P)"No Applicable Methods Error when calling %= on %=");
  lit_280 = YPsb((P)"Ambiguous Method Error when calling %= on %=");
  T35 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_20)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  Ychoose_methods = YPmet(FUNCODEREF(Ychoose_methods),CHKREF(lit_278),T35,ENVNUL);
  T36 = Ychoose_methods;
  Ychoose_methods = T36;
  lit_281 = YPPsym((P)"%dispatch");
  T37 = YPsig(YPPlist(1,CHKREF(lit_20)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG));
  YPdispatch = YPmet(FUNCODEREF(YPdispatch),CHKREF(lit_281),T37,ENVNUL);
  T38 = YPdispatch;
  YPdispatch = T38;
  lit_282 = YPPsym((P)"%patch-early-generic");
  lit_283 = YPPsym((P)"generic");
  T39 = YPsig(YPPlist(1,CHKREF(lit_283)),YPPlist(1,CHKREF(YLgenG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YPpatch_early_generic = YPmet(FUNCODEREF(YPpatch_early_generic),CHKREF(lit_282),T39,ENVNUL);
  T40 = YPpatch_early_generic;
  YPpatch_early_generic = T40;
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(YPchr_val));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(YPchr_val_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(YPint_val));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(YPint_val_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(YPflo_val));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(YPflo_val_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(YPloc_val));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(YPloc_val_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yhead));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yhead_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytail));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytail_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(YPPvec_dat));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(YPPvec_dat_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(YPPstr_dat));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(YPPstr_dat_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ysym_name));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ysym_name_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_slot_len));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_slot_len_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_name));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_name_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_direct_parents));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_direct_parents_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_direct_slots));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_direct_slots_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_parents));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_parents_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_slots));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_slots_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_direct_children));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_direct_children_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_gens));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_gens_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_mets));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_mets_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_forward));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yclass_forward_setter));
  T42 = CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytype_object));
  T41 = T42;
  return T41;
}

P Y___main_9___() {
  P T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31;
  P T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytype_object_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytype_class));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytype_class_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytype_elts));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytype_elts_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yslot_owner));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yslot_owner_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yslot_getter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yslot_getter_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yslot_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yslot_setter_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yslot_type));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yslot_type_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yslot_init));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yslot_init_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ygen_cache_singletons));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ygen_cache_singletons_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ygen_cache_classes));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ygen_cache_classes_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ysig_names));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ysig_names_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ysig_specs));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ysig_specs_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ysig_naryQ));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ysig_naryQ_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ysig_arity));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ysig_arity_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ysig_value));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ysig_value_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yfun_code));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yfun_code_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yfun_name));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yfun_name_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yfun_sig));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yfun_sig_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yfun_env));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yfun_env_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yfun_mets));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yfun_mets_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yfun_cache));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Yfun_cache_setter));
  YLoptsG = CHKREF(YLlstG);
  lit_284 = YPPsym((P)"apply");
  lit_285 = YPPsym((P)"proc");
  T0 = YPsig(YPPlist(2,CHKREF(lit_285),CHKREF(lit_20)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLoptsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yapply = YPmet(FUNCODEREF(Yapply),CHKREF(lit_284),T0,ENVNUL);
  T1 = Yapply;
  Yapply = T1;
  lit_286 = YPPsym((P)"%apply-next-method");
  lit_287 = YPPsym((P)"next-mets");
  lit_288 = YPsb((P)"No next methods");
  T2 = YPsig(YPPlist(2,CHKREF(lit_287),CHKREF(lit_20)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLoptsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YPapply_next_method = YPmet(FUNCODEREF(YPapply_next_method),CHKREF(lit_286),T2,ENVNUL);
  T3 = YPapply_next_method;
  YPapply_next_method = T3;
  lit_289 = YPPsym((P)"%call-next-method");
  T4 = YPsig(YPPlist(2,CHKREF(lit_287),CHKREF(lit_20)),YPPlist(1,CHKREF(YLanyG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  YPcall_next_method = YPmet(FUNCODEREF(YPcall_next_method),CHKREF(lit_289),T4,ENVNUL);
  T5 = YPcall_next_method;
  YPcall_next_method = T5;
  lit_290 = YPPsym((P)"fapply");
  lit_291 = YPPsym((P)"fproc");
  T6 = YPsig(YPPlist(2,CHKREF(lit_291),CHKREF(lit_20)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLoptsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yfapply = YPmet(FUNCODEREF(Yfapply),CHKREF(lit_290),T6,ENVNUL);
  T7 = Yfapply;
  Yfapply = T7;
  lit_292 = YPPsym((P)"fun-names");
  T8 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yfun_names = YPmet(FUNCODEREF(Yfun_names),CHKREF(lit_292),T8,ENVNUL);
  T9 = Yfun_names;
  Yfun_names = T9;
  lit_293 = YPPsym((P)"fun-names-setter");
  T10 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yfun_names_setter = YPmet(FUNCODEREF(Yfun_names_setter),CHKREF(lit_293),T10,ENVNUL);
  T11 = Yfun_names_setter;
  Yfun_names_setter = T11;
  lit_294 = YPPsym((P)"fun-specs");
  T12 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yfun_specs = YPmet(FUNCODEREF(Yfun_specs),CHKREF(lit_294),T12,ENVNUL);
  T13 = Yfun_specs;
  Yfun_specs = T13;
  lit_295 = YPPsym((P)"fun-specs-setter");
  T14 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yfun_specs_setter = YPmet(FUNCODEREF(Yfun_specs_setter),CHKREF(lit_295),T14,ENVNUL);
  T15 = Yfun_specs_setter;
  Yfun_specs_setter = T15;
  lit_296 = YPPsym((P)"fun-nary?");
  T16 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yfun_naryQ = YPmet(FUNCODEREF(Yfun_naryQ),CHKREF(lit_296),T16,ENVNUL);
  T17 = Yfun_naryQ;
  Yfun_naryQ = T17;
  lit_297 = YPPsym((P)"fun-nary?-setter");
  T18 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yfun_naryQ_setter = YPmet(FUNCODEREF(Yfun_naryQ_setter),CHKREF(lit_297),T18,ENVNUL);
  T19 = Yfun_naryQ_setter;
  Yfun_naryQ_setter = T19;
  lit_298 = YPPsym((P)"fun-arity");
  T20 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yfun_arity = YPmet(FUNCODEREF(Yfun_arity),CHKREF(lit_298),T20,ENVNUL);
  T21 = Yfun_arity;
  Yfun_arity = T21;
  lit_299 = YPPsym((P)"fun-arity-setter");
  T22 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yfun_arity_setter = YPmet(FUNCODEREF(Yfun_arity_setter),CHKREF(lit_299),T22,ENVNUL);
  T23 = Yfun_arity_setter;
  Yfun_arity_setter = T23;
  lit_300 = YPPsym((P)"fun-value");
  T24 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yfun_value = YPmet(FUNCODEREF(Yfun_value),CHKREF(lit_300),T24,ENVNUL);
  T25 = Yfun_value;
  Yfun_value = T25;
  lit_301 = YPPsym((P)"fun-value-setter");
  T26 = YPsig(YPPlist(2,CHKREF(lit_28),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yfun_value_setter = YPmet(FUNCODEREF(Yfun_value_setter),CHKREF(lit_301),T26,ENVNUL);
  T27 = Yfun_value_setter;
  Yfun_value_setter = T27;
  YLparentsG = CHKREF(YLlstG);
  YLslotsG = CHKREF(YLlstG);
  lit_302 = YPPsym((P)"object-class");
  T28 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yobject_class = YPmet(FUNCODEREF(Yobject_class),CHKREF(lit_302),T28,ENVNUL);
  T29 = Yobject_class;
  Yobject_class = T29;
  lit_303 = YPPsym((P)"@class-parents");
  T30 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YOclass_parents = YPmet(FUNCODEREF(YOclass_parents),CHKREF(lit_303),T30,ENVNUL);
  T31 = YOclass_parents;
  YOclass_parents = T31;
  lit_304 = YPPsym((P)"class-ordered-parents");
  lit_305 = YPPsym((P)"merge-lists");
  lit_306 = YPPsym((P)"remaining-lists");
  lit_307 = YPPsym((P)"partial-cpl");
  lit_308 = YPsb((P)"inconsistent precedence graph");
  lit_309 = YPPsym((P)"remove-next");
  lit_310 = YPPsym((P)"unconstrained-class-in-parents");
  lit_311 = YPPsym((P)"unconstrained-class");
  lit_312 = YPPsym((P)"p-unconstrained-in?");
  lit_313 = YPPsym((P)"p-in-and-unconstrained-in?");
  T38 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_remove_next_410 = YPmet(FUNCODEREF(fun_remove_next_410),CHKREF(lit_309),T38,ENVNUL);
  T37 = YPsig(YPPlist(1,CHKREF(lit_141)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_unconstrained_class_in_parents_411 = YPmet(FUNCODEREF(fun_unconstrained_class_in_parents_411),CHKREF(lit_310),T37,ENVNUL);
  T36 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_p_unconstrained_inQ_412 = YPmet(FUNCODEREF(fun_p_unconstrained_inQ_412),CHKREF(lit_312),T36,ENVNUL);
  T35 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_p_in_and_unconstrained_inQ_413 = YPmet(FUNCODEREF(fun_p_in_and_unconstrained_inQ_413),CHKREF(lit_313),T35,ENVNUL);
  T34 = YPsig(YPPlist(1,CHKREF(lit_144)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_unconstrained_class_414 = YPmet(FUNCODEREF(fun_unconstrained_class_414),CHKREF(lit_311),T34,ENVNUL);
  T33 = YPsig(YPPlist(2,CHKREF(lit_307),CHKREF(lit_306)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_merge_lists_415 = YPmet(FUNCODEREF(fun_merge_lists_415),CHKREF(lit_305),T33,ENVNUL);
  T32 = YPsig(YPPlist(1,CHKREF(lit_141)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLparentsG));
  Yclass_ordered_parents = YPmet(FUNCODEREF(Yclass_ordered_parents),CHKREF(lit_304),T32,ENVNUL);
  T39 = Yclass_ordered_parents;
  Yclass_ordered_parents = T39;
  lit_314 = YPPsym((P)"@class-direct-slots");
  T40 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YOclass_direct_slots = YPmet(FUNCODEREF(YOclass_direct_slots),CHKREF(lit_314),T40,ENVNUL);
  T41 = YOclass_direct_slots;
  YOclass_direct_slots = T41;
  lit_315 = YPPsym((P)"class-ordered-slots");
  T44 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLslotsG));
  T43 = Yclass_ordered_slots = YPmet(FUNCODEREF(Yclass_ordered_slots),CHKREF(lit_315),T44,ENVNUL);
  T46 = Yclass_ordered_slots;
  T45 = Yclass_ordered_slots = T46;
  T42 = T45;
  return T42;
}

P Y___main_10___() {
  P T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71;
  P T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55;
  P T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_316 = YPPsym((P)"del-class");
  T0 = YPsig(YPPlist(1,CHKREF(lit_27)),YPPlist(1,CHKREF(YLclassG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Ydel_class = YPmet(FUNCODEREF(Ydel_class),CHKREF(lit_316),T0,ENVNUL);
  T1 = Ydel_class;
  Ydel_class = T1;
  lit_317 = YPPsym((P)"fab-class");
  lit_318 = YPPsym((P)"parents");
  lit_319 = YPPsym((P)"parent");
  T3 = YPsig(YPPlist(1,CHKREF(lit_319)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_420 = YPmet(FUNCODEREF(fun_420),YPfalse,T3,ENVNUL);
  T2 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_318)),YPPlist(2,CHKREF(YLsymG),CHKREF(YLparentsG)),YPfalse,YPint((P)2),CHKREF(YLclassG));
  Yfab_class = YPmet(FUNCODEREF(Yfab_class),CHKREF(lit_317),T2,ENVNUL);
  T4 = Yfab_class;
  Yfab_class = T4;
  lit_320 = YPPsym((P)"refab-class");
  lit_321 = YPPsym((P)"old-class");
  T5 = YPsig(YPPlist(2,CHKREF(lit_321),CHKREF(lit_318)),YPPlist(2,CHKREF(YLclassG),CHKREF(YLparentsG)),YPfalse,YPint((P)2),CHKREF(YLclassG));
  Yrefab_class = YPmet(FUNCODEREF(Yrefab_class),CHKREF(lit_320),T5,ENVNUL);
  T6 = Yrefab_class;
  Yrefab_class = T6;
  lit_322 = YPPsym((P)"object-slots");
  T7 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yobject_slots = YPmet(FUNCODEREF(Yobject_slots),CHKREF(lit_322),T7,ENVNUL);
  T8 = Yobject_slots;
  Yobject_slots = T8;
  lit_323 = YPPsym((P)"object-parents");
  T9 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yobject_parents = YPmet(FUNCODEREF(Yobject_parents),CHKREF(lit_323),T9,ENVNUL);
  T10 = Yobject_parents;
  Yobject_parents = T10;
  YDgetter_not_found = YPint((P)-1);
  lit_324 = YPPsym((P)"ensure-fresh-object");
  T11 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yensure_fresh_object = YPmet(FUNCODEREF(Yensure_fresh_object),CHKREF(lit_324),T11,ENVNUL);
  T12 = Yensure_fresh_object;
  Yensure_fresh_object = T12;
  lit_325 = YPPsym((P)"slot-offset");
  lit_326 = YPPsym((P)"object");
  T14 = YPsig(YPPlist(2,CHKREF(lit_18),CHKREF(lit_17)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_426 = YPmet(FUNCODEREF(fun_loop_426),CHKREF(lit_5),T14,ENVNUL);
  T13 = YPsig(YPPlist(2,CHKREF(lit_326),CHKREF(lit_15)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  Yslot_offset = YPmet(FUNCODEREF(Yslot_offset),CHKREF(lit_325),T13,ENVNUL);
  T15 = Yslot_offset;
  Yslot_offset = T15;
  lit_327 = YPPsym((P)"slot-value");
  lit_328 = YPsb((P)"slot %s not found in %=");
  T16 = YPsig(YPPlist(2,CHKREF(lit_326),CHKREF(lit_15)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yslot_value = YPmet(FUNCODEREF(Yslot_value),CHKREF(lit_327),T16,ENVNUL);
  T17 = Yslot_value;
  Yslot_value = T17;
  lit_329 = YPPsym((P)"slot-value-setter");
  lit_330 = YPsb((P)"slot %s not found in %=");
  T18 = YPsig(YPPlist(3,CHKREF(lit_28),CHKREF(lit_326),CHKREF(lit_15)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  Yslot_value_setter = YPmet(FUNCODEREF(Yslot_value_setter),CHKREF(lit_329),T18,ENVNUL);
  T19 = Yslot_value_setter;
  Yslot_value_setter = T19;
  lit_331 = YPPsym((P)"%isa");
  lit_332 = YPPsym((P)"vals");
  lit_333 = YPPsym((P)"getters");
  T21 = YPsig(YPPlist(2,CHKREF(lit_333),CHKREF(lit_332)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_430 = YPmet(FUNCODEREF(fun_loop_430),CHKREF(lit_5),T21,ENVNUL);
  T20 = YPsig(YPPlist(3,CHKREF(lit_318),CHKREF(lit_333),CHKREF(lit_332)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  YPisa = YPmet(FUNCODEREF(YPisa),CHKREF(lit_331),T20,ENVNUL);
  T22 = YPisa;
  YPisa = T22;
  lit_334 = YPPsym((P)"find-getter");
  lit_335 = YPsb((P)"COULDN'T FIND GETTER");
  T24 = YPsig(YPPlist(1,CHKREF(lit_194)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_432 = YPmet(FUNCODEREF(fun_loop_432),CHKREF(lit_5),T24,ENVNUL);
  T23 = YPsig(YPPlist(2,CHKREF(lit_16),CHKREF(lit_15)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLgenG)),YPfalse,YPint((P)2),CHKREF(YLmetG));
  Yfind_getter = YPmet(FUNCODEREF(Yfind_getter),CHKREF(lit_334),T23,ENVNUL);
  T25 = Yfind_getter;
  Yfind_getter = T25;
  lit_336 = YPPsym((P)"find-setter");
  lit_337 = YPPsym((P)"zetter");
  lit_338 = YPsb((P)"COULDN'T FIND SETTER");
  T27 = YPsig(YPPlist(1,CHKREF(lit_194)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_434 = YPmet(FUNCODEREF(fun_loop_434),CHKREF(lit_5),T27,ENVNUL);
  T26 = YPsig(YPPlist(3,CHKREF(lit_16),CHKREF(lit_259),CHKREF(lit_337)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLgenG)),YPfalse,YPint((P)3),CHKREF(YLmetG));
  Yfind_setter = YPmet(FUNCODEREF(Yfind_setter),CHKREF(lit_336),T26,ENVNUL);
  T28 = Yfind_setter;
  Yfind_setter = T28;
  lit_339 = YPPsym((P)"forward-class");
  T30 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_436 = YPmet(FUNCODEREF(fun_436),YPfalse,T30,ENVNUL);
  T29 = YPsig(YPPlist(1,CHKREF(lit_321)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yforward_class = YPmet(FUNCODEREF(Yforward_class),CHKREF(lit_339),T29,ENVNUL);
  T31 = Yforward_class;
  Yforward_class = T31;
  lit_340 = YPPsym((P)"@do-children");
  lit_341 = YPPsym((P)"visit");
  T33 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_visit_438 = YPmet(FUNCODEREF(fun_visit_438),CHKREF(lit_341),T33,ENVNUL);
  T32 = YPsig(YPPlist(2,CHKREF(lit_152),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOdo_children = YPmet(FUNCODEREF(YOdo_children),CHKREF(lit_340),T32,ENVNUL);
  T34 = YOdo_children;
  YOdo_children = T34;
  lit_342 = YPPsym((P)"%slot");
  lit_343 = YPPsym((P)"setter");
  T36 = YPsig(YPPlist(1,CHKREF(lit_26)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_440 = YPmet(FUNCODEREF(fun_440),YPfalse,T36,ENVNUL);
  T35 = YPsig(YPPlist(5,CHKREF(lit_16),CHKREF(lit_15),CHKREF(lit_343),CHKREF(lit_259),CHKREF(lit_168)),YPPlist(5,CHKREF(YLanyG),CHKREF(YLgenG),CHKREF(YLgenG),CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)5),CHKREF(YLanyG));
  YPslot = YPmet(FUNCODEREF(YPslot),CHKREF(lit_342),T35,ENVNUL);
  T37 = YPslot;
  YPslot = T37;
  lit_344 = YPPsym((P)"update-instance-for-changed-class");
  T38 = YPsig(YPPlist(1,CHKREF(lit_326)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yupdate_instance_for_changed_class = YPmet(FUNCODEREF(Yupdate_instance_for_changed_class),CHKREF(lit_344),T38,ENVNUL);
  T39 = Yupdate_instance_for_changed_class;
  Yupdate_instance_for_changed_class = T39;
  Yadd_slot = CHKREF(YPslot);
  YPcheck_typesQ = YPtrue;
  lit_345 = YPPsym((P)"fab-gen");
  lit_346 = YPPsym((P)"nary?");
  lit_347 = YPPsym((P)"names");
  T40 = YPsig(YPPlist(5,CHKREF(lit_1),CHKREF(lit_347),CHKREF(lit_196),CHKREF(lit_346),CHKREF(lit_194)),YPPlist(5,CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG),CHKREF(YLlogG),CHKREF(YLlstG)),YPfalse,YPint((P)5),CHKREF(YLgenG));
  Yfab_gen = YPmet(FUNCODEREF(Yfab_gen),CHKREF(lit_345),T40,ENVNUL);
  T41 = Yfab_gen;
  Yfab_gen = T41;
  lit_348 = YPPsym((P)"gen-from-met");
  T43 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_445 = YPmet(FUNCODEREF(fun_445),YPfalse,T43,ENVNUL);
  T42 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLmetG)),YPfalse,YPint((P)1),CHKREF(YLgenG));
  Ygen_from_met = YPmet(FUNCODEREF(Ygen_from_met),CHKREF(lit_348),T42,ENVNUL);
  T44 = Ygen_from_met;
  Ygen_from_met = T44;
  lit_349 = YPPsym((P)"%define-method");
  T45 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_23)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLgenG));
  YPdefine_method = YPmet(FUNCODEREF(YPdefine_method),CHKREF(lit_349),T45,ENVNUL);
  T46 = YPdefine_method;
  YPdefine_method = T46;
  lit_350 = YPPsym((P)"unexec");
  lit_351 = YPPsym((P)"fun");
  T47 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_351)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yunexec = YPmet(FUNCODEREF(Yunexec),CHKREF(lit_350),T47,ENVNUL);
  T48 = Yunexec;
  Yunexec = T48;
  lit_352 = YPPsym((P)"nyi-subtype?");
  T50 = YPsig(YPPlist(2,CHKREF(lit_212),CHKREF(lit_211)),YPPlist(2,CHKREF(YLtypeG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  T49 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_352),T50,Ynil,YPfalse);
  Ynyi_subtypeQ = T49;
  lit_353 = YPPsym((P)"subtype?");
  T52 = YPsig(YPPlist(2,CHKREF(lit_212),CHKREF(lit_211)),YPPlist(2,CHKREF(YLtypeG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  T51 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_353),T52,Ynil,YPfalse);
  YsubtypeQ = T51;
  T53 = YPsig(YPPlist(2,CHKREF(lit_212),CHKREF(lit_211)),YPPlist(2,CHKREF(YLtypeG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_subtypeQ_449 = YPmet(FUNCODEREF(fun_subtypeQ_449),CHKREF(lit_353),T53,ENVNUL);
  T57 = BOUNDP(YsubtypeQ);
  if (T57 != YPfalse) {
    T56 = CHKREF(YsubtypeQ);
  } else {
    T56 = YPfalse;
  }
  T55 = fun_subtypeQ_449;
  T54 = CALL2(CHKREF(YPdefine_method),T56,T55);
  YsubtypeQ = T54;
  lit_354 = YPPsym((P)"nyi-isa?");
  T59 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_199)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  T58 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_354),T59,Ynil,YPfalse);
  Ynyi_isaQ = T58;
  lit_355 = YPPsym((P)"isa?");
  T61 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_199)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  T60 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_355),T61,Ynil,YPfalse);
  YisaQ = T60;
  T62 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_199)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_isaQ_450 = YPmet(FUNCODEREF(fun_isaQ_450),CHKREF(lit_355),T62,ENVNUL);
  T66 = BOUNDP(YisaQ);
  if (T66 != YPfalse) {
    T65 = CHKREF(YisaQ);
  } else {
    T65 = YPfalse;
  }
  T64 = fun_isaQ_450;
  T63 = CALL2(CHKREF(YPdefine_method),T65,T64);
  YisaQ = T63;
  lit_356 = YPPsym((P)"may-isa?");
  T68 = YPsig(YPPlist(2,CHKREF(lit_141),CHKREF(lit_199)),YPPlist(2,CHKREF(YLclassG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  T67 = YPgen((P)YPgen_code((P)CHKREF(YPdispatch)),CHKREF(lit_356),T68,Ynil,YPfalse);
  Ymay_isaQ = T67;
  T69 = YPsig(YPPlist(2,CHKREF(lit_141),CHKREF(lit_199)),YPPlist(2,CHKREF(YLclassG),CHKREF(YLtypeG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  fun_may_isaQ_451 = YPmet(FUNCODEREF(fun_may_isaQ_451),CHKREF(lit_356),T69,ENVNUL);
  T73 = BOUNDP(Ymay_isaQ);
  if (T73 != YPfalse) {
    T72 = CHKREF(Ymay_isaQ);
  } else {
    T72 = YPfalse;
  }
  T71 = fun_may_isaQ_451;
  T70 = CALL2(CHKREF(YPdefine_method),T72,T71);
  Ymay_isaQ = T70;
  YTboot_macro_module_namesT = Ynil;
  YTboot_macro_namesT = Ynil;
  YTboot_macro_expandersT = Ynil;
  YTmacros_okQT = YPfalse;
  lit_357 = YPPsym((P)"grid-open");
  T74 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  Ygrid_open = YPmet(FUNCODEREF(Ygrid_open),CHKREF(lit_357),T74,ENVNUL);
  T75 = Ygrid_open;
  Ygrid_open = T75;
  lit_358 = YPPsym((P)"grid-close");
  T76 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  Ygrid_close = YPmet(FUNCODEREF(Ygrid_close),CHKREF(lit_358),T76,ENVNUL);
  T77 = Ygrid_close;
  Ygrid_close = T77;
  lit_359 = YPPsym((P)"grid-move");
  T78 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_12)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Ygrid_move = YPmet(FUNCODEREF(Ygrid_move),CHKREF(lit_359),T78,ENVNUL);
  T79 = Ygrid_move;
  Ygrid_move = T79;
  lit_360 = YPPsym((P)"grid-read");
  T80 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  Ygrid_read = YPmet(FUNCODEREF(Ygrid_read),CHKREF(lit_360),T80,ENVNUL);
  T81 = Ygrid_read;
  Ygrid_read = T81;
  lit_361 = YPPsym((P)"grid-write");
  T82 = YPsig(YPPlist(1,CHKREF(lit_141)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Ygrid_write = YPmet(FUNCODEREF(Ygrid_write),CHKREF(lit_361),T82,ENVNUL);
  T83 = Ygrid_write;
  Ygrid_write = T83;
  lit_362 = YPPsym((P)"grid-refresh");
  T84 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  Ygrid_refresh = YPmet(FUNCODEREF(Ygrid_refresh),CHKREF(lit_362),T84,ENVNUL);
  T85 = Ygrid_refresh;
  Ygrid_refresh = T85;
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
  T86 = YPfalse;
  return T86;
}

/* MODULE ENVIRONMENT INFORMATION */


static USE_INFO use_infos[] = {
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%file-exists?", NULL},
  {"quote", NULL},
  {"fun-code", &Yfun_code},
  {"%i?", NULL},
  {"%fb", NULL},
  {"@gen-cache-singletons", &YOgen_cache_singletons},
  {"%fun-cache-setter", NULL},
  {"%flo-val", &YPflo_val},
  {"%grid-write", NULL},
  {"<num>", &YLnumG},
  {"%chr", NULL},
  {"fun", NULL},
  {"%gen-mets", NULL},
  {"ds", NULL},
  {"%%sym", NULL},
  {"%define-primitives", NULL},
  {"---main-2---", NULL},
  {"<slot>", &YLslotG},
  {"%bb", NULL},
  {"%f+", NULL},
  {"%empty?", NULL},
  {"fun-code-setter", &Yfun_code_setter},
  {"class-slot-len-setter", &Yclass_slot_len_setter},
  {"%flo-dat", NULL},
  {"choose-methods", &Ychoose_methods},
  {"bound?", NULL},
  {"%class-gens-setter", NULL},
  {"%flo-val-setter", &YPflo_val_setter},
  {"nul", &Ynul},
  {"%str!", NULL},
  {"%su", NULL},
  {"%i&", NULL},
  {"%class", NULL},
  {"@tail", NULL},
  {"@all?", &YOallQ},
  {"%i>>", NULL},
  {"@head", NULL},
  {"fun-specs-setter", &Yfun_specs_setter},
  {"unexec", &Yunexec},
  {"%check-types?", &YPcheck_typesQ},
  {"%cu", NULL},
  {"%class-of", NULL},
  {"%c<", NULL},
  {"@do-children", &YOdo_children},
  {"@len", NULL},
  {"%slot-type-setter", NULL},
  {"<chr>", &YLchrG},
  {"class-gens", &Yclass_gens},
  {"%grid-read", NULL},
  {"*boot-macro-module-names*", &YTboot_macro_module_namesT},
  {"@mem?", &YOmemQ},
  {"<opts>", &YLoptsG},
  {"%i+", NULL},
  {"@gen-cache-arg-pos-setter", &YOgen_cache_arg_pos_setter},
  {"%snul", &YPsnul},
  {"<union>", &YLunionG},
  {"%define-setter", NULL},
  {"slot", NULL},
  {"@add-new", NULL},
  {"%class-parents-setter", NULL},
  {"@singleton-isa?", NULL},
  {"%grid-refresh", NULL},
  {"%flo-dat-setter", NULL},
  {"slot-getter", &Yslot_getter},
  {"%finalize-slots", NULL},
  {"%gen-code-setter", NULL},
  {"---main-3---", NULL},
  {"%sig-value-setter", NULL},
  {"%define-tagged-structure", NULL},
  {"%define-parent", NULL},
  {"%class-name", NULL},
  {"@isa?", &YOisaQ},
  {"%gen-cache-singletons", NULL},
  {"%isa?", NULL},
  {"%file-type", NULL},
  {"---main-0---", NULL},
  {"loc", NULL},
  {"%loc", NULL},
  {"%sig-names-setter", NULL},
  {"@head-setter", NULL},
  {"ct-also", NULL},
  {"%next-methods", NULL},
  {"@class-isa?", NULL},
  {"<log>", &YLlogG},
  {"fun-specs", &Yfun_specs},
  {"fun-same-met?", &Yfun_same_metQ},
  {"%read-char", NULL},
  {"sig-specs", &Ysig_specs},
  {"tail", &Ytail},
  {"slot-getter-setter", &Yslot_getter_setter},
  {"%slot-owner", NULL},
  {"@rev!", &YOrevX},
  {"%slot-setter", NULL},
  {"slot-offset", &Yslot_offset},
  {"%im", NULL},
  {"<subclass>", &YLsubclassG},
  {"@prune-mets-by-type-at", &YOprune_mets_by_type_at},
  {"%selt", NULL},
  {"%add-slot", &YPadd_slot},
  {"gen-lookup-miss", &Ygen_lookup_miss},
  {"%f=", NULL},
  {"%sb", NULL},
  {"fun-env", &Yfun_env},
  {"class-direct-slots", &Yclass_direct_slots},
  {"forward-class", &Yforward_class},
  {"%current-output-port", NULL},
  {"sig-specs-setter", &Ysig_specs_setter},
  {"@fill", &YOfill},
  {"%app-args", NULL},
  {"<any>", &YLanyG},
  {"%sig-names", NULL},
  {"%define-method", &YPdefine_method},
  {"tail-setter", &Ytail_setter},
  {"handler-info-arguments", &Yhandler_info_arguments},
  {"%define-repeated-structure", NULL},
  {"<singleton>", &YLsingletonG},
  {"%%apply", NULL},
  {"%lst", NULL},
  {"fun-env-setter", &Yfun_env_setter},
  {"class-direct-slots-setter", &Yclass_direct_slots_setter},
  {"macro-expand", NULL},
  {"%vec!", NULL},
  {"%untag", NULL},
  {"%gen-cache-missable?", NULL},
  {"%os-binding-value", NULL},
  {"%compute-parents", NULL},
  {"%create-directory", NULL},
  {"%class-name-setter", NULL},
  {"ensure-fresh-object", &Yensure_fresh_object},
  {"%sig-nary?-setter", NULL},
  {"%update-instance-for-changed-class", NULL},
  {"%binding-name", NULL},
  {"%gen-cache-arg-pos", NULL},
  {"%vlen", NULL},
  {"%pair", NULL},
  {"df", NULL},
  {"@@empty?", &YOOemptyQ},
  {"<args>", &YLargsG},
  {"grid-refresh", &Ygrid_refresh},
  {"class-slot-len", &Yclass_slot_len},
  {"%gen", NULL},
  {"isa?", &YisaQ},
  {"%type-class", NULL},
  {"%sig-nary?", NULL},
  {"fun-names-setter", &Yfun_names_setter},
  {"fun-spec", &Yfun_spec},
  {"type-object", &Ytype_object},
  {"fin", NULL},
  {"@may-isa?", &YOmay_isaQ},
  {"%gen-cache-classes-setter", NULL},
  {"rep", NULL},
  {"@+", NULL},
  {"%flo-bits", NULL},
  {"%iu", NULL},
  {"%slot-owner-setter", NULL},
  {"incongruent-method-error", &Yincongruent_method_error},
  {"@mets-specs-at", &YOmets_specs_at},
  {"%write-char", NULL},
  {"slot-init", &Yslot_init},
  {"@pair", NULL},
  {"@find-key", &YOfind_key},
  {"%patch-early-generics", NULL},
  {"%slot-getter", NULL},
  {"type-object-setter", &Ytype_object_setter},
  {"%i<<<", NULL},
  {"%met", NULL},
  {"gen-from-met", &Ygen_from_met},
  {"%str-eq?", NULL},
  {"%sig-arity", NULL},
  {"*macros-ok?*", &YTmacros_okQT},
  {"not", &Ynot},
  {"%flo", NULL},
  {"grid-write", &Ygrid_write},
  {"%finalize-slots!", &YPfinalize_slotsX},
  {"%reparent-class-shells", NULL},
  {"<replace-generic-restart>", &YLreplace_generic_restartG},
  {"%met-code-setter", NULL},
  {"%sym", NULL},
  {"fun-names", &Yfun_names},
  {"sig-value", &Ysig_value},
  {"sym-name", &Ysym_name},
  {"slot-init-setter", &Yslot_init_setter},
  {"use", NULL},
  {"%*start-running-at*", &YPTstart_running_atT},
  {"%tail", NULL},
  {"%define-slots", NULL},
  {"---main-5---", NULL},
  {"grid-read", &Ygrid_read},
  {"---main-6---", NULL},
  {"slot-value-at-setter", NULL},
  {"class-direct-children", &Yclass_direct_children},
  {"lab", NULL},
  {"@cat2", &YOcat2},
  {"sig-value-setter", &Ysig_value_setter},
  {"@tail-setter", NULL},
  {"%i-", NULL},
  {"sym-name-setter", &Ysym_name_setter},
  {"---main-7---", NULL},
  {"%%macro", &YPPmacro},
  {"object-slots", &Yobject_slots},
  {"nul-slot", &Ynul_slot},
  {"nyi-isa?", &Ynyi_isaQ},
  {"isa", NULL},
  {"%tag-bits", NULL},
  {"%gen-cache", NULL},
  {"%add-met", &YPadd_met},
  {"%trace-off", NULL},
  {"%gen-cache-singletons-setter", NULL},
  {"@=", NULL},
  {"<class>", &YLclassG},
  {"%collect-direct-slots", &YPcollect_direct_slots},
  {"set", NULL},
  {"class-direct-children-setter", &Yclass_direct_children_setter},
  {"%class-mets", NULL},
  {"type-error", &Ytype_error},
  {"$gen-cache-singletons-offset", &YDgen_cache_singletons_offset},
  {"error", &Yerror},
  {"*boot-macro-expanders*", &YTboot_macro_expandersT},
  {"%class-parents", NULL},
  {"find-setter", &Yfind_setter},
  {"or", NULL},
  {"%locative-value", NULL},
  {"<type>", &YLtypeG},
  {"---main-8---", NULL},
  {"%velt", NULL},
  {"%int", NULL},
  {"$getter-not-found", &YDgetter_not_found},
  {"class-ordered-parents", &Yclass_ordered_parents},
  {"sig-names", &Ysig_names},
  {"@fun-mets", &YOfun_mets},
  {"@precise-spec?", &YOprecise_specQ},
  {"%grid-move", NULL},
  {"%false", &YPfalse},
  {"slot-owner", &Yslot_owner},
  {"%ft/", NULL},
  {"%force-output", NULL},
  {"@@==", &YOOEE},
  {"%grid-close", NULL},
  {"@subtype?", &YOsubtypeQ},
  {"%ir", NULL},
  {"%sig-value", NULL},
  {"keyboard-interrupt", &Ykeyboard_interrupt},
  {"%vnul", &YPvnul},
  {"@do", &YOdo},
  {"opt-args", &Yopt_args},
  {"%%vfab", NULL},
  {"grid-move", &Ygrid_move},
  {"%class-forward", NULL},
  {"<body>", &YLbodyG},
  {"%class-direct-slots", NULL},
  {"%*used-symbols-too-early*", &YPTused_symbols_too_earlyT},
  {"sig-names-setter", &Ysig_names_setter},
  {"gen-lookup-miss-1", &Ygen_lookup_miss_1},
  {"slot-owner-setter", &Yslot_owner_setter},
  {"%class-direct-parents-setter", NULL},
  {"order-mets", &Yorder_mets},
  {"%close-input-port", NULL},
  {"%type-elts-setter", NULL},
  {"unknown-function-error", &Yunknown_function_error},
  {"fapply", &Yfapply},
  {"%str-eq?-loop", NULL},
  {"%fu", NULL},
  {"%early-dispatch", &YPearly_dispatch},
  {"add-slot", &Yadd_slot},
  {"head", &Yhead},
  {"@elt", &YOelt},
  {"%class-mets-setter", NULL},
  {"<sym>", &YLsymG},
  {"grid-close", &Ygrid_close},
  {"dv", NULL},
  {"@class-parents", &YOclass_parents},
  {"fun-sig", &Yfun_sig},
  {"class-direct-parents", &Yclass_direct_parents},
  {"%ff", NULL},
  {"%sig-specs", NULL},
  {"@fun-value", &YOfun_value},
  {"@union-spec?", &YOunion_specQ},
  {"%%slot", NULL},
  {"%raw", NULL},
  {"%i^", NULL},
  {"unless", NULL},
  {"refab-class", &Yrefab_class},
  {"%gen-cache-missable?-setter", NULL},
  {"%fapply", NULL},
  {"%gen-name", NULL},
  {"sorted-app-mets-1", &Ysorted_app_mets_1},
  {"grid-open", &Ygrid_open},
  {"%selt-setter", NULL},
  {"dc", NULL},
  {"%grid-open", NULL},
  {"%c=", NULL},
  {"%met-env-setter", NULL},
  {"class-direct-parents-setter", &Yclass_direct_parents_setter},
  {"dp", NULL},
  {"@class-in?", NULL},
  {"fab-sym", &Yfab_sym},
  {"%slot-init", NULL},
  {"%class-slot-len-setter", NULL},
  {"$gen-cache-classes-offset", &YDgen_cache_classes_offset},
  {"%fi2f", NULL},
  {"find-getter", &Yfind_getter},
  {"<parents>", &YLparentsG},
  {"if", NULL},
  {"<str>", &YLstrG},
  {"%slot-elt", NULL},
  {"object-class", &Yobject_class},
  {"%char-ready", NULL},
  {"@fun-arity", &YOfun_arity},
  {"@subclass-spec?", &YOsubclass_specQ},
  {"%f/", NULL},
  {"%gen-code", NULL},
  {"<gen>", &YLgenG},
  {"class-forward", &Yclass_forward},
  {"%i<<", NULL},
  {"%elt", NULL},
  {"%head", NULL},
  {"gen-lookup-miss-1-using", &Ygen_lookup_miss_1_using},
  {"nil", &Ynil},
  {"%call-next-method", &YPcall_next_method},
  {"file-opening-error", &Yfile_opening_error},
  {"%gen-mets-setter", NULL},
  {"dm", NULL},
  {"%open-input-file", NULL},
  {"wrong-number-arguments-error", &Ywrong_number_arguments_error},
  {"slot-type", &Yslot_type},
  {"@fun-mets-setter", &YOfun_mets_setter},
  {"@type-equal?", &YOtype_equalQ},
  {"@<", NULL},
  {"order-specs-default", &Yorder_specs_default},
  {"order-specs", &Yorder_specs},
  {"class-forward-setter", &Yclass_forward_setter},
  {"fun-congruent?", &Yfun_congruentQ},
  {"%i>>>", NULL},
  {"fab-gen", &Yfab_gen},
  {"%slot-init-setter", NULL},
  {"and", NULL},
  {"@all2?", &YOall2Q},
  {"@==", NULL},
  {"handler-info-message", &Yhandler_info_message},
  {"%class-direct-children-setter", NULL},
  {"%sym-nam-setter", NULL},
  {"@alter", &YOalter},
  {"seq", NULL},
  {"<vec>", &YLvecG},
  {"%class-direct-children", NULL},
  {"sig-arity", &Ysig_arity},
  {"@fun-nary?", &YOfun_naryQ},
  {"%f<", NULL},
  {"%%str-dat", &YPPstr_dat},
  {"slot-type-setter", &Yslot_type_setter},
  {"@pick", &YOpick},
  {"try", NULL},
  {"fun-sig-setter", &Yfun_sig_setter},
  {"%vec", NULL},
  {"---main-1---", NULL},
  {"%invoke-debugger", NULL},
  {"%cat2", NULL},
  {"@subclass-isa?", NULL},
  {"class-gens-setter", &Yclass_gens_setter},
  {"%apply-next-method", &YPapply_next_method},
  {"%met-sig-setter", NULL},
  {"object-parents", &Yobject_parents},
  {"fun-cache", &Yfun_cache},
  {"class-slots", &Yclass_slots},
  {"@gen-cache-arg-pos", &YOgen_cache_arg_pos},
  {"%fc", NULL},
  {"fun-value-setter", &Yfun_value_setter},
  {"@singleton-spec?", &YOsingleton_specQ},
  {"@union-isa?", NULL},
  {"%type-class-setter", NULL},
  {"%int-val", &YPint_val},
  {"sig-arity-setter", &Ysig_arity_setter},
  {"%%str-dat-setter", &YPPstr_dat_setter},
  {"%i=", NULL},
  {"%fun-reg", NULL},
  {"%type-object-setter", NULL},
  {"<flat>", &YLflatG},
  {"head-setter", &Yhead_setter},
  {"%slot-setter-setter", NULL},
  {"%class-slots", NULL},
  {"%cb", NULL},
  {"update-instance-for-changed-class", &Yupdate_instance_for_changed_class},
  {"%define-hierarchy", NULL},
  {"%met-code", NULL},
  {"%class-shells", NULL},
  {"%trace-on", NULL},
  {"%fun-cache", NULL},
  {"%eq?", NULL},
  {"<met>", &YLmetG},
  {"%peek-char", NULL},
  {"fun-cache-setter", &Yfun_cache_setter},
  {"%write-string", NULL},
  {"class-slots-setter", &Yclass_slots_setter},
  {"def-object-class-accessor", NULL},
  {"%vu", NULL},
  {"%int-val-setter", &YPint_val_setter},
  {"%open-output-file", NULL},
  {"@fun-specs", &YOfun_specs},
  {"%file-mtime", NULL},
  {"%class-gens", NULL},
  {"lst", &Ylst},
  {"@mets-subclasses-at", &YOmets_subclasses_at},
  {"@reduce", &YOreduce},
  {"<tup>", &YLtupG},
  {"fab-class", &Yfab_class},
  {"%object-class", NULL},
  {"fun-value", &Yfun_value},
  {"%symbols", &YPsymbols},
  {"gen-cache-classes", &Ygen_cache_classes},
  {"type-elts", &Ytype_elts},
  {"$direct-object-class", &YDdirect_object_class},
  {"%met-name-setter", NULL},
  {"ensure-singleton-cache", &Yensure_singleton_cache},
  {"%met-sig", NULL},
  {"%head-setter", NULL},
  {"@empty?", NULL},
  {"%met-env", NULL},
  {"<lst>", &YLlstG},
  {"@tup", &YOtup},
  {"%macro", NULL},
  {"gen-cache-classes-setter", &Ygen_cache_classes_setter},
  {"@fun-names", &YOfun_names},
  {"method-accessor-offset", &Ymethod_accessor_offset},
  {"one-nil", &Yone_nil},
  {"sorted-app-mets", &Ysorted_app_mets},
  {"%sig-arity-setter", NULL},
  {"type-elts-setter", &Ytype_elts_setter},
  {"%isa", &YPisa},
  {"%sig-specs-setter", NULL},
  {"%f-", NULL},
  {"%break", NULL},
  {"%union", NULL},
  {"%ib", NULL},
  {"@subclass?", NULL},
  {"%close-output-port", NULL},
  {"<fun>", &YLfunG},
  {"del-class", &Ydel_class},
  {"%lu", NULL},
  {"fun-name", &Yfun_name},
  {"class-name", &Yclass_name},
  {"force-names-into-boot-module", NULL},
  {"%loc-val", &YPloc_val},
  {"%char-ready?", NULL},
  {"%symbols-ready?", &YPsymbols_readyQ},
  {"<seq>", &YLseqG},
  {"%%mep-apply", NULL},
  {"%slot-elt-setter", NULL},
  {"%define-structure", NULL},
  {"%tag", NULL},
  {"%i*", NULL},
  {"%do-stack-frames", NULL},
  {"<int>-class", &YLintG_class},
  {"%met-name", NULL},
  {"%current-input-port", NULL},
  {"fun-arity-setter", &Yfun_arity_setter},
  {"fun-name-setter", &Yfun_name_setter},
  {"@not", NULL},
  {"class-name-setter", &Yclass_name_setter},
  {"%loc-val-setter", &YPloc_val_setter},
  {"%object-shells", NULL},
  {"%tail-setter", NULL},
  {"@lst", &YOlst},
  {"%slot-offset", &YPslot_offset},
  {"%class-slots-setter", NULL},
  {"gen-lookup", NULL},
  {"%gen-cache-classes", NULL},
  {"%object-class-setter", NULL},
  {"<col>", &YLcolG},
  {"class-ordered-slots", &Yclass_ordered_slots},
  {"%indirect-object?", NULL},
  {"apply", &Yapply},
  {"@gen-cache-classes-setter", &YOgen_cache_classes_setter},
  {"%elt-setter", NULL},
  {"%class-direct-slots-setter", NULL},
  {"class-mets", &Yclass_mets},
  {"%class-slot-len", NULL},
  {"%f*", NULL},
  {"%newline", NULL},
  {"gen-lookup-1-using", NULL},
  {"%%sfab", NULL},
  {"%gen-sig-setter", NULL},
  {"%class-forward-setter", NULL},
  {"%singleton", NULL},
  {"%slot-getter-setter", NULL},
  {"fun-arity", &Yfun_arity},
  {"@mets-singletons-at", &YOmets_singletons_at},
  {"%true", &YPtrue},
  {"%subclass", NULL},
  {"%gen-name-setter", NULL},
  {"slot-setter", &Yslot_setter},
  {"met-app?", &Ymet_appQ},
  {"$missed-dispatch", &YDmissed_dispatch},
  {"---main-10---", NULL},
  {"class-mets-setter", &Yclass_mets_setter},
  {"subtype?", &YsubtypeQ},
  {"case", NULL},
  {"$adr-tag", NULL},
  {"@map", &YOmap},
  {"slot-value-setter", &Yslot_value_setter},
  {"---main-9---", NULL},
  {"export", NULL},
  {"<loc>", &YLlocG},
  {"<sig>", &YLsigG},
  {"%define-accessor", NULL},
  {"@class-direct-slots", &YOclass_direct_slots},
  {"%build-runtime-modules", NULL},
  {"%it/", NULL},
  {"@fab", &YOfab},
  {"sig-nary?", &Ysig_naryQ},
  {"@gen-cache-classes", &YOgen_cache_classes},
  {"%%vec-dat", &YPPvec_dat},
  {"slot-setter-setter", &Yslot_setter_setter},
  {"mif", NULL},
  {"%sym-nam", NULL},
  {"quasiquote", NULL},
  {"%sig", NULL},
  {"%type-object", NULL},
  {"%define-getter", NULL},
  {"%type-elts", NULL},
  {"%i!", NULL},
  {"%iv", NULL},
  {"%define-structure-accessors", NULL},
  {"fun-mets", &Yfun_mets},
  {"@mets-unspecialized-at?", &YOmets_unspecialized_atQ},
  {"class-parents", &Yclass_parents},
  {"%chr-val", &YPchr_val},
  {"%clone", NULL},
  {"%slot", &YPslot},
  {"sig-nary?-setter", &Ysig_naryQ_setter},
  {"%%vec-dat-setter", &YPPvec_dat_setter},
  {"%gen-cache-arg-pos-setter", NULL},
  {"<mets>", &YLmetsG},
  {"%patch-early-generic", &YPpatch_early_generic},
  {"%i<", NULL},
  {"%slen", NULL},
  {"<flo>", &YLfloG},
  {"%eof-object", NULL},
  {"fun-mets-setter", &Yfun_mets_setter},
  {"class-parents-setter", &Yclass_parents_setter},
  {"fun-nary?-setter", &Yfun_naryQ_setter},
  {"%chr-val-setter", &YPchr_val_setter},
  {"$tag-len", &YDtag_len},
  {"<gen-cache>", &YLgen_cacheG},
  {"%gen-sig", NULL},
  {"gen-lookup-1", NULL},
  {"nyi-subtype?", &Ynyi_subtypeQ},
  {"%met-slot-len", &YPmet_slot_len},
  {"%raw-alloc", NULL},
  {"when", NULL},
  {"%lb", NULL},
  {"slot-value", &Yslot_value},
  {"<env>", &YLenvG},
  {"%class-direct-parents", NULL},
  {"dss", NULL},
  {"<slots>", &YLslotsG},
  {"%slot-type", NULL},
  {"%os-name", NULL},
  {"gen-add-met", &Ygen_add_met},
  {"gen-cache-singletons", &Ygen_cache_singletons},
  {"%dispatch", &YPdispatch},
  {"@gen-cache-singletons-setter", &YOgen_cache_singletons_setter},
  {"ct", NULL},
  {"%app-filename", NULL},
  {"type-class", &Ytype_class},
  {"<simple-handler-info>", &YLsimple_handler_infoG},
  {"%rev!", NULL},
  {"let", NULL},
  {"%locative-value-setter", NULL},
  {"@del-dups", &YOdel_dups},
  {"*boot-macro-names*", &YTboot_macro_namesT},
  {"@add", NULL},
  {"---main-4---", NULL},
  {"<int>", &YLintG},
  {"%%len", NULL},
  {"may-isa?", &Ymay_isaQ},
  {"@class<", &YOclassL},
  {"fun-nary?", &Yfun_naryQ},
  {"%velt-setter", NULL},
  {"gen-cache-singletons-setter", &Ygen_cache_singletons_setter},
  {"def-fun/sig-accessor", NULL},
  {"%unexec", NULL},
  {"%os-binding-value-setter", NULL},
  {"@any?", &YOanyQ},
  {"%ft", NULL},
  {"slot-value-at", NULL},
  {"type-class-setter", &Ytype_class_setter},
  {"dg", NULL},
  {"%define-boxed-structure", NULL},
  {"@specd-args", &YOspecd_args},
  {"<specs>", &YLspecsG},
  {"%object-of", NULL},
  {"%str", NULL},
  {"$tag-msk", &YDtag_msk},
  {"*restarts-ok?*", &YTrestarts_okQT},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%file-exists?", "%file-exists?"},
  {"quote", "quote"},
  {"%i?", "%i?"},
  {"<num>", "<num>"},
  {"fun", "fun"},
  {"ds", "ds"},
  {"<slot>", "<slot>"},
  {"%bb", "%bb"},
  {"%f+", "%f+"},
  {"bound?", "bound?"},
  {"nul", "nul"},
  {"%su", "%su"},
  {"%i&", "%i&"},
  {"%i>>", "%i>>"},
  {"%cu", "%cu"},
  {"%c<", "%c<"},
  {"<chr>", "<chr>"},
  {"*boot-macro-module-names*", "*boot-macro-module-names*"},
  {"<opts>", "<opts>"},
  {"%i+", "%i+"},
  {"%snul", "%snul"},
  {"<union>", "<union>"},
  {"slot", "slot"},
  {"slot-getter", "slot-getter"},
  {"%file-type", "%file-type"},
  {"loc", "loc"},
  {"ct-also", "ct-also"},
  {"%next-methods", "%next-methods"},
  {"<log>", "<log>"},
  {"fun-specs", "fun-specs"},
  {"%read-char", "%read-char"},
  {"sig-specs", "sig-specs"},
  {"tail", "tail"},
  {"%im", "%im"},
  {"%selt", "%selt"},
  {"%f=", "%f="},
  {"%sb", "%sb"},
  {"class-direct-slots", "class-direct-slots"},
  {"%current-output-port", "%current-output-port"},
  {"%app-args", "%app-args"},
  {"<any>", "<any>"},
  {"%define-method", "%define-method"},
  {"tail-setter", "tail-setter"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"<singleton>", "<singleton>"},
  {"macro-expand", "macro-expand"},
  {"%os-binding-value", "%os-binding-value"},
  {"%create-directory", "%create-directory"},
  {"%binding-name", "%binding-name"},
  {"%vlen", "%vlen"},
  {"%pair", "%pair"},
  {"df", "df"},
  {"isa?", "isa?"},
  {"type-object", "type-object"},
  {"fin", "fin"},
  {"rep", "rep"},
  {"%flo-bits", "%flo-bits"},
  {"%iu", "%iu"},
  {"incongruent-method-error", "incongruent-method-error"},
  {"%write-char", "%write-char"},
  {"slot-init", "slot-init"},
  {"%i<<<", "%i<<<"},
  {"*macros-ok?*", "*macros-ok?*"},
  {"not", "not"},
  {"<replace-generic-restart>", "<replace-generic-restart>"},
  {"fun-names", "fun-names"},
  {"sig-value", "sig-value"},
  {"sym-name", "sym-name"},
  {"use", "use"},
  {"<loc>", "<loc>"},
  {"class-direct-children", "class-direct-children"},
  {"lab", "lab"},
  {"%i-", "%i-"},
  {"%%macro", "%%macro"},
  {"object-slots", "object-slots"},
  {"isa", "isa"},
  {"<class>", "<class>"},
  {"set", "set"},
  {"type-error", "type-error"},
  {"error", "error"},
  {"find-setter", "find-setter"},
  {"%locative-value", "%locative-value"},
  {"%velt", "%velt"},
  {"sig-names", "sig-names"},
  {"slot-owner", "slot-owner"},
  {"%force-output", "%force-output"},
  {"nil", "nil"},
  {"keyboard-interrupt", "keyboard-interrupt"},
  {"%vnul", "%vnul"},
  {"%close-input-port", "%close-input-port"},
  {"unknown-function-error", "unknown-function-error"},
  {"fapply", "fapply"},
  {"%fu", "%fu"},
  {"add-slot", "add-slot"},
  {"head", "head"},
  {"<sym>", "<sym>"},
  {"dv", "dv"},
  {"class-direct-parents", "class-direct-parents"},
  {"%raw", "%raw"},
  {"%i^", "%i^"},
  {"%selt-setter", "%selt-setter"},
  {"dc", "dc"},
  {"%c=", "%c="},
  {"dp", "dp"},
  {"fab-sym", "fab-sym"},
  {"%fi2f", "%fi2f"},
  {"find-getter", "find-getter"},
  {"if", "if"},
  {"object-class", "object-class"},
  {"%f/", "%f/"},
  {"<gen>", "<gen>"},
  {"%i<<", "%i<<"},
  {"%call-next-method", "%call-next-method"},
  {"file-opening-error", "file-opening-error"},
  {"dm", "dm"},
  {"wrong-number-arguments-error", "wrong-number-arguments-error"},
  {"gen-add-met", "gen-add-met"},
  {"%i>>>", "%i>>>"},
  {"fab-gen", "fab-gen"},
  {"<met>", "<met>"},
  {"handler-info-message", "handler-info-message"},
  {"seq", "seq"},
  {"sig-arity", "sig-arity"},
  {"%f<", "%f<"},
  {"try", "try"},
  {"fun-sig-setter", "fun-sig-setter"},
  {"%vec", "%vec"},
  {"%invoke-debugger", "%invoke-debugger"},
  {"<type>", "<type>"},
  {"slot-type", "slot-type"},
  {"object-parents", "object-parents"},
  {"<vec>", "<vec>"},
  {"class-slots", "class-slots"},
  {"%i=", "%i="},
  {"<flat>", "<flat>"},
  {"%slen", "%slen"},
  {"head-setter", "head-setter"},
  {"%cb", "%cb"},
  {"*boot-macro-expanders*", "*boot-macro-expanders*"},
  {"%eq?", "%eq?"},
  {"%peek-char", "%peek-char"},
  {"%write-string", "%write-string"},
  {"%open-output-file", "%open-output-file"},
  {"%file-mtime", "%file-mtime"},
  {"lst", "lst"},
  {"<tup>", "<tup>"},
  {"fab-class", "fab-class"},
  {"fun-value", "fun-value"},
  {"%symbols", "%symbols"},
  {"type-elts", "type-elts"},
  {"<lst>", "<lst>"},
  {"sorted-app-mets", "sorted-app-mets"},
  {"%isa", "%isa"},
  {"%f-", "%f-"},
  {"%ib", "%ib"},
  {"%close-output-port", "%close-output-port"},
  {"<fun>", "<fun>"},
  {"%lu", "%lu"},
  {"fun-name", "fun-name"},
  {"class-name", "class-name"},
  {"%char-ready?", "%char-ready?"},
  {"<seq>", "<seq>"},
  {"%app-filename", "%app-filename"},
  {"%i*", "%i*"},
  {"%do-stack-frames", "%do-stack-frames"},
  {"%current-input-port", "%current-input-port"},
  {"fun-name-setter", "fun-name-setter"},
  {"<col>", "<col>"},
  {"apply", "apply"},
  {"%f*", "%f*"},
  {"<str>", "<str>"},
  {"fun-arity", "fun-arity"},
  {"slot-setter", "slot-setter"},
  {"met-app?", "met-app?"},
  {"subtype?", "subtype?"},
  {"slot-value-setter", "slot-value-setter"},
  {"export", "export"},
  {"<sig>", "<sig>"},
  {"%build-runtime-modules", "%build-runtime-modules"},
  {"%it/", "%it/"},
  {"sig-nary?", "sig-nary?"},
  {"mif", "mif"},
  {"quasiquote", "quasiquote"},
  {"%i!", "%i!"},
  {"%iv", "%iv"},
  {"fun-mets", "fun-mets"},
  {"class-parents", "class-parents"},
  {"%slot", "%slot"},
  {"%i<", "%i<"},
  {"<flo>", "<flo>"},
  {"%eof-object", "%eof-object"},
  {"slot-value", "slot-value"},
  {"%fb", "%fb"},
  {"dss", "dss"},
  {"%os-name", "%os-name"},
  {"ct", "ct"},
  {"type-class", "type-class"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"let", "let"},
  {"%locative-value-setter", "%locative-value-setter"},
  {"*boot-macro-names*", "*boot-macro-names*"},
  {"<subclass>", "<subclass>"},
  {"<int>", "<int>"},
  {"may-isa?", "may-isa?"},
  {"fun-nary?", "fun-nary?"},
  {"%velt-setter", "%velt-setter"},
  {"%os-binding-value-setter", "%os-binding-value-setter"},
  {"%ft", "%ft"},
  {"%open-input-file", "%open-input-file"},
  {"dg", "dg"},
  {"%str", "%str"},
  {"*restarts-ok?*", "*restarts-ok?*"},
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

  YPprint_cpu_usage(__FILE__);
}

/* END OF GENERATED CODE. */
