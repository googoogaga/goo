/* PROTO 2 C $REVISION: 0.2 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: boot */

DEF(YLmetsG,"boot","<mets>");
DEF(YOalter,"boot","@alter");
DEF(YLlstG,"boot","<lst>");
DEF(YLsigG,"boot","<sig>");
DEF(Ytraits_direct_slots,"boot","traits-direct-slots");
DEF(Yfun_cache_setter,"boot","fun-cache-setter");
DEF(YPflo_val_setter,"boot","%flo-val-setter");
DEF(Yfun_env,"boot","fun-env");
DEF(YOlst,"boot","@lst");
DEF(YPslot_offset,"boot","%slot-offset");
DEF(Yslot_init,"boot","slot-init");
DEF(Ygen_cache_classes_setter,"boot","gen-cache-classes-setter");
DEF(YTrestarts_okQT,"boot","*restarts-ok?*");
DEF(YPfalse,"boot","%false");
DEF(YOfun_mets_setter,"boot","@fun-mets-setter");
DEF(YLbodyG,"boot","<body>");
DEF(YLargsG,"boot","<args>");
DEF(Yfapply,"boot","fapply");
DEF(YLvecG,"boot","<vec>");
DEF(Yfind_app_singleton_mets,"boot","find-app-singleton-mets");
DEF(YLintG,"boot","<int>");
DEF(YOgen_cache_singletons_setter,"boot","@gen-cache-singletons-setter");
DEF(YLlogG,"boot","<log>");
DEF(YOdo_children,"boot","@do-children");
DEF(YDtag_msk,"boot","$tag-msk");
DEF(Yslot_offset,"boot","slot-offset");
DEF(Yfun_arity,"boot","fun-arity");
DEF(YobjectL,"boot","object<");
DEF(Ytraits_direct_slots_setter,"boot","traits-direct-slots-setter");
DEF(YDgen_cache_singletons_offset,"boot","$gen-cache-singletons-offset");
DEF(Ytraits_owner,"boot","traits-owner");
DEF(Ysorted_app_mets,"boot","sorted-app-mets");
DEF(Yfun_env_setter,"boot","fun-env-setter");
DEF(Ygrid_move,"boot","grid-move");
DEF(Yfun_name,"boot","fun-name");
DEF(Yfab_sym,"boot","fab-sym");
DEF(Yunknown_function_error,"boot","unknown-function-error");
DEF(Yslot_init_setter,"boot","slot-init-setter");
DEF(YOallQ,"boot","@all?");
DEF(Yslot_setter,"boot","slot-setter");
DEF(YPtrue,"boot","%true");
DEF(Yfab_gen,"boot","fab-gen");
DEF(Ymake_traits,"boot","make-traits");
DEF(YOdo,"boot","@do");
DEF(YLcolG,"boot","<col>");
DEF(YPsymbols,"boot","%symbols");
DEF(YLsimple_handler_infoG,"boot","<simple-handler-info>");
DEF(Yensure_fresh_object,"boot","ensure-fresh-object");
DEF(YLtraitsG_traits,"boot","<traits>-traits");
DEF(YOfun_mets,"boot","@fun-mets");
DEF(YLintG_traits,"boot","<int>-traits");
DEF(Yerror,"boot","error");
DEF(YPPstr_dat,"boot","%%str-dat");
DEF(YPapply_next_method,"boot","%apply-next-method");
DEF(Ymet_has_singleton_specsQ,"boot","met-has-singleton-specs?");
DEF(Ysig_value,"boot","sig-value");
DEF(Ygrid_read,"boot","grid-read");
DEF(Ygrid_close,"boot","grid-close");
DEF(YOgen_cache_singletons,"boot","@gen-cache-singletons");
DEF(Ytraits_owner_setter,"boot","traits-owner-setter");
DEF(Yfun_name_setter,"boot","fun-name-setter");
DEF(Yfun_naryQ_setter,"boot","fun-nary?-setter");
DEF(Yslot_setter_setter,"boot","slot-setter-setter");
DEF(YLmetG,"boot","<met>");
DEF(Yslot_owner,"boot","slot-owner");
DEF(YPvnul,"boot","%vnul");
DEF(YLgen_cacheG,"boot","<gen-cache>");
DEF(Yforward_traits,"boot","forward-traits");
DEF(YPtraits_owner_offset,"boot","%traits-owner-offset");
DEF(YPadd_met,"boot","%add-met");
DEF(YOelt,"boot","@elt");
DEF(YOrevX,"boot","@rev!");
DEF(YPfinalize_slotsX,"boot","%finalize-slots!");
DEF(Yupdate_instance_for_changed_prototype,"boot","update-instance-for-changed-prototype");
DEF(Ytraits_ordered_slots,"boot","traits-ordered-slots");
DEF(Ymet_appQ,"boot","met-app?");
DEF(YOdel_dups,"boot","@del-dups");
DEF(Ysorted_app_mets_1,"boot","sorted-app-mets-1");
DEF(YPPstr_dat_setter,"boot","%%str-dat-setter");
DEF(Ytail,"boot","tail");
DEF(Ysig_value_setter,"boot","sig-value-setter");
DEF(Ysig_naryQ,"boot","sig-nary?");
DEF(YLflatG,"boot","<flat>");
DEF(Yobject_direct_children,"boot","object-direct-children");
DEF(YOfun_value,"boot","@fun-value");
DEF(YLenvG,"boot","<env>");
DEF(YLspecsG,"boot","<specs>");
DEF(Yslot_owner_setter,"boot","slot-owner-setter");
DEF(YmetL,"boot","met<");
DEF(Ytraits_mets,"boot","traits-mets");
DEF(Ygrid_open,"boot","grid-open");
DEF(YOgen_cache_arg_pos_setter,"boot","@gen-cache-arg-pos-setter");
DEF(Ynul,"boot","nul");
DEF(Yfun_naryQ,"boot","fun-nary?");
DEF(YLstrG,"boot","<str>");
DEF(YDgen_cache_classes_offset,"boot","$gen-cache-classes-offset");
DEF(Yfile_opening_error,"boot","file-opening-error");
DEF(Ytraits_direct_children,"boot","traits-direct-children");
DEF(YLslotG_traits,"boot","<slot>-traits");
DEF(YOOemptyQ,"boot","@@empty?");
DEF(Ytail_setter,"boot","tail-setter");
DEF(YPloc_val,"boot","%loc-val");
DEF(Ysig_naryQ_setter,"boot","sig-nary?-setter");
DEF(YLreplace_generic_restartG,"boot","<replace-generic-restart>");
DEF(Ysig_names,"boot","sig-names");
DEF(YPisa,"boot","%isa");
DEF(Ygen_lookup_miss,"boot","gen-lookup-miss");
DEF(YLtupG,"boot","<tup>");
DEF(YOfab,"boot","@fab");
DEF(YisaQ,"boot","isa?");
DEF(Yapply,"boot","apply");
DEF(Ytraits_mets_setter,"boot","traits-mets-setter");
DEF(YLparentsG,"boot","<parents>");
DEF(YOreduce,"boot","@reduce");
DEF(Yobject_parents,"boot","object-parents");
DEF(YOfun_arity,"boot","@fun-arity");
DEF(Yfun_same_metQ,"boot","fun-same-met?");
DEF(YOmemQ,"boot","@mem?");
DEF(Yadd_slot,"boot","add-slot");
DEF(YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
DEF(Ygen_lookup_miss_1_using,"boot","gen-lookup-miss-1-using");
DEF(YOgen_cache_arg_pos,"boot","@gen-cache-arg-pos");
DEF(Ytraits_ordered_parents,"boot","traits-ordered-parents");
DEF(Ytraits_direct_children_setter,"boot","traits-direct-children-setter");
DEF(Yfun_specs_setter,"boot","fun-specs-setter");
DEF(Ytraits_parents,"boot","traits-parents");
DEF(YLlocG,"boot","<loc>");
DEF(YPcollect_direct_slots,"boot","%collect-direct-slots");
DEF(YPloc_val_setter,"boot","%loc-val-setter");
DEF(Yfun_mets,"boot","fun-mets");
DEF(YPint_val,"boot","%int-val");
DEF(Ysig_names_setter,"boot","sig-names-setter");
DEF(Ygen_cache_singletons,"boot","gen-cache-singletons");
DEF(YPearly_dispatch,"boot","%early-dispatch");
DEF(YOmap,"boot","@map");
DEF(Ynot,"boot","not");
DEF(Ychoose_methods,"boot","choose-methods");
DEF(Ytraits_slots_setter,"boot","traits-slots-setter");
DEF(YPsymbols_readyQ,"boot","%symbols-ready?");
DEF(YPflo_val,"boot","%flo-val");
DEF(YPadd_slot,"boot","%add-slot");
DEF(Yincongruent_method_error,"boot","incongruent-method-error");
DEF(Yensure_traits,"boot","ensure-traits");
DEF(YPchr_val,"boot","%chr-val");
DEF(YLanyG,"boot","<any>");
DEF(YLfunG,"boot","<fun>");
DEF(Yunexec,"boot","unexec");
DEF(Ygen_add_met,"boot","gen-add-met");
DEF(Yobject_slots,"boot","object-slots");
DEF(YOfun_naryQ,"boot","@fun-nary?");
DEF(Ytraits_parents_setter,"boot","traits-parents-setter");
DEF(Ytraits_direct_parents,"boot","traits-direct-parents");
DEF(YPsnul,"boot","%snul");
DEF(YLsymG,"boot","<sym>");
DEF(Yfun_mets_setter,"boot","fun-mets-setter");
DEF(YPint_val_setter,"boot","%int-val-setter");
DEF(Yfun_sig,"boot","fun-sig");
DEF(Yslot_type,"boot","slot-type");
DEF(Ygen_cache_singletons_setter,"boot","gen-cache-singletons-setter");
DEF(YOtup,"boot","@tup");
DEF(YOfind_key,"boot","@find-key");
DEF(Yobject_traits,"boot","object-traits");
DEF(Yfun_specs,"boot","fun-specs");
DEF(Yorder_specs,"boot","order-specs");
DEF(YOall2Q,"boot","@all2?");
DEF(Ylst,"boot","lst");
DEF(Yfind_setter,"boot","find-setter");
DEF(Ynul_slot,"boot","nul-slot");
DEF(YPchr_val_setter,"boot","%chr-val-setter");
DEF(YOOEE,"boot","@@==");
DEF(YPPmacro,"boot","%%macro");
DEF(YPpatch_early_generic,"boot","%patch-early-generic");
DEF(YOanyQ,"boot","@any?");
DEF(YLchrG,"boot","<chr>");
DEF(Ytraits_direct_parents_setter,"boot","traits-direct-parents-setter");
DEF(Ysym_name,"boot","sym-name");
DEF(Ygen_lookup_miss_1,"boot","gen-lookup-miss-1");
DEF(Yfun_sig_setter,"boot","fun-sig-setter");
DEF(YPdefine_method,"boot","%define-method");
DEF(Yfun_code,"boot","fun-code");
DEF(Yslot_type_setter,"boot","slot-type-setter");
DEF(Yslot_getter,"boot","slot-getter");
DEF(Yfun_congruentQ,"boot","fun-congruent?");
DEF(Yslot_value_setter,"boot","slot-value-setter");
DEF(YOfun_specs,"boot","@fun-specs");
DEF(Yobject_direct_slots,"boot","object-direct-slots");
DEF(Yhandler_info_message,"boot","handler-info-message");
DEF(Ygen_unspecialized_atQ,"boot","gen-unspecialized-at?");
DEF(Yopt_args,"boot","opt-args");
DEF(YOcat2,"boot","@cat2");
DEF(Yfun_value_setter,"boot","fun-value-setter");
DEF(Yfun_names_setter,"boot","fun-names-setter");
DEF(YLnumG,"boot","<num>");
DEF(YPTstart_running_atT,"boot","%*start-running-at*");
DEF(YPtraits_size,"boot","%traits-size");
DEF(YPPvec_dat,"boot","%%vec-dat");
DEF(YTmacros_okQT,"boot","*macros-ok?*");
DEF(Ysig_arity,"boot","sig-arity");
DEF(Ygrid_refresh,"boot","grid-refresh");
DEF(YPdispatch,"boot","%dispatch");
DEF(Ysym_name_setter,"boot","sym-name-setter");
DEF(YDgetter_not_found,"boot","$getter-not-found");
DEF(Yfun_code_setter,"boot","fun-code-setter");
DEF(YDmissed_dispatch,"boot","$missed-dispatch");
DEF(Ykeyboard_interrupt,"boot","keyboard-interrupt");
DEF(Yslot_getter_setter,"boot","slot-getter-setter");
DEF(Ytraits_forward,"boot","traits-forward");
DEF(Ynil,"boot","nil");
DEF(Ymethod_accessor_offset,"boot","method-accessor-offset");
DEF(YLseqG,"boot","<seq>");
DEF(Yfind_getter,"boot","find-getter");
DEF(YOfun_names,"boot","@fun-names");
DEF(Yhandler_info_arguments,"boot","handler-info-arguments");
DEF(Yobject_direct_parents,"boot","object-direct-parents");
DEF(YLgenG,"boot","<gen>");
DEF(YPTused_symbols_too_earlyT,"boot","%*used-symbols-too-early*");
DEF(Ytraits_gens,"boot","traits-gens");
DEF(YOgen_cache_classes_setter,"boot","@gen-cache-classes-setter");
DEF(Ygen_from_met,"boot","gen-from-met");
DEF(YPslot,"boot","%slot");
DEF(YPPvec_dat_setter,"boot","%%vec-dat-setter");
DEF(Yhead,"boot","head");
DEF(Yslot_value,"boot","slot-value");
DEF(YTboot_macro_namesT,"boot","*boot-macro-names*");
DEF(Ysig_arity_setter,"boot","sig-arity-setter");
DEF(YDdirect_object_traits,"boot","$direct-object-traits");
DEF(Yfun_value,"boot","fun-value");
DEF(YLslotsG,"boot","<slots>");
DEF(Ysig_specs,"boot","sig-specs");
DEF(Yfun_names,"boot","fun-names");
DEF(YPcheck_typesQ,"boot","%check-types?");
DEF(YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
DEF(Ytraits_forward_setter,"boot","traits-forward-setter");
DEF(Ygrid_write,"boot","grid-write");
DEF(YLoptsG,"boot","<opts>");
DEF(Yorder_mets,"boot","order-mets");
DEF(YOfill,"boot","@fill");
DEF(Ytype_error,"boot","type-error");
DEF(Ysingleton_specQ,"boot","singleton-spec?");
DEF(Ytraits_gens_setter,"boot","traits-gens-setter");
DEF(Ytraits_slots,"boot","traits-slots");
DEF(YDtag_len,"boot","$tag-len");
DEF(YLtraitsG,"boot","<traits>");
DEF(Yhead_setter,"boot","head-setter");
DEF(Yfun_cache,"boot","fun-cache");
DEF(Yfun_spec,"boot","fun-spec");
DEF(YLslotG,"boot","<slot>");
DEF(Ysig_specs_setter,"boot","sig-specs-setter");
DEF(Ygen_cache_classes,"boot","gen-cache-classes");
DEF(YPcall_next_method,"boot","%call-next-method");
DEF(YOgen_cache_classes,"boot","@gen-cache-classes");
DEF(YLfloG,"boot","<flo>");
DEF(Yfun_arity_setter,"boot","fun-arity-setter");
DEF(Ywrong_number_arguments_error,"boot","wrong-number-arguments-error");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_244);
DEFLIT(lit_237);
DEFLIT(lit_18);
DEFLIT(lit_98);
DEFLIT(lit_9);
DEFLIT(lit_165);
DEFLIT(lit_144);
DEFLIT(lit_186);
DEFLIT(lit_137);
DEFLIT(lit_213);
DEFLIT(lit_155);
DEFLIT(lit_38);
DEFLIT(lit_37);
DEFLIT(lit_199);
DEFLIT(lit_88);
DEFLIT(lit_205);
DEFLIT(lit_206);
DEFLIT(lit_209);
DEFLIT(lit_54);
DEFLIT(lit_53);
DEFLIT(lit_193);
DEFLIT(lit_134);
DEFLIT(lit_184);
DEFLIT(lit_123);
DEFLIT(lit_223);
DEFLIT(lit_151);
DEFLIT(lit_107);
DEFLIT(lit_229);
DEFLIT(lit_307);
DEFLIT(lit_302);
DEFLIT(lit_305);
DEFLIT(lit_129);
DEFLIT(lit_171);
DEFLIT(lit_195);
DEFLIT(lit_175);
DEFLIT(lit_22);
DEFLIT(lit_44);
DEFLIT(lit_169);
DEFLIT(lit_5);
DEFLIT(lit_220);
DEFLIT(lit_188);
DEFLIT(lit_282);
DEFLIT(lit_286);
DEFLIT(lit_274);
DEFLIT(lit_115);
DEFLIT(lit_217);
DEFLIT(lit_294);
DEFLIT(lit_247);
DEFLIT(lit_256);
DEFLIT(lit_211);
DEFLIT(lit_126);
DEFLIT(lit_179);
DEFLIT(lit_119);
DEFLIT(lit_278);
DEFLIT(lit_147);
DEFLIT(lit_103);
DEFLIT(lit_66);
DEFLIT(lit_65);
DEFLIT(lit_80);
DEFLIT(lit_79);
DEFLIT(lit_268);
DEFLIT(lit_26);
DEFLIT(lit_269);
DEFLIT(lit_17);
DEFLIT(lit_276);
DEFLIT(lit_174);
DEFLIT(lit_95);
DEFLIT(lit_140);
DEFLIT(lit_283);
DEFLIT(lit_228);
DEFLIT(lit_263);
DEFLIT(lit_150);
DEFLIT(lit_10);
DEFLIT(lit_21);
DEFLIT(lit_156);
DEFLIT(lit_298);
DEFLIT(lit_161);
DEFLIT(lit_303);
DEFLIT(lit_214);
DEFLIT(lit_154);
DEFLIT(lit_111);
DEFLIT(lit_36);
DEFLIT(lit_35);
DEFLIT(lit_164);
DEFLIT(lit_242);
DEFLIT(lit_216);
DEFLIT(lit_159);
DEFLIT(lit_208);
DEFLIT(lit_243);
DEFLIT(lit_52);
DEFLIT(lit_51);
DEFLIT(lit_295);
DEFLIT(lit_183);
DEFLIT(lit_122);
DEFLIT(lit_236);
DEFLIT(lit_240);
DEFLIT(lit_143);
DEFLIT(lit_249);
DEFLIT(lit_128);
DEFLIT(lit_253);
DEFLIT(lit_285);
DEFLIT(lit_257);
DEFLIT(lit_102);
DEFLIT(lit_264);
DEFLIT(lit_168);
DEFLIT(lit_173);
DEFLIT(lit_224);
DEFLIT(lit_132);
DEFLIT(lit_251);
DEFLIT(lit_198);
DEFLIT(lit_212);
DEFLIT(lit_172);
DEFLIT(lit_73);
DEFLIT(lit_106);
DEFLIT(lit_87);
DEFLIT(lit_136);
DEFLIT(lit_260);
DEFLIT(lit_306);
DEFLIT(lit_225);
DEFLIT(lit_204);
DEFLIT(lit_239);
DEFLIT(lit_96);
DEFLIT(lit_290);
DEFLIT(lit_125);
DEFLIT(lit_178);
DEFLIT(lit_118);
DEFLIT(lit_190);
DEFLIT(lit_266);
DEFLIT(lit_139);
DEFLIT(lit_279);
DEFLIT(lit_64);
DEFLIT(lit_63);
DEFLIT(lit_78);
DEFLIT(lit_77);
DEFLIT(lit_259);
DEFLIT(lit_25);
DEFLIT(lit_16);
DEFLIT(lit_43);
DEFLIT(lit_158);
DEFLIT(lit_94);
DEFLIT(lit_93);
DEFLIT(lit_230);
DEFLIT(lit_133);
DEFLIT(lit_11);
DEFLIT(lit_293);
DEFLIT(lit_246);
DEFLIT(lit_277);
DEFLIT(lit_20);
DEFLIT(lit_110);
DEFLIT(lit_146);
DEFLIT(lit_34);
DEFLIT(lit_33);
DEFLIT(lit_297);
DEFLIT(lit_160);
DEFLIT(lit_200);
DEFLIT(lit_50);
DEFLIT(lit_49);
DEFLIT(lit_182);
DEFLIT(lit_121);
DEFLIT(lit_7);
DEFLIT(lit_114);
DEFLIT(lit_142);
DEFLIT(lit_262);
DEFLIT(lit_127);
DEFLIT(lit_4);
DEFLIT(lit_29);
DEFLIT(lit_13);
DEFLIT(lit_267);
DEFLIT(lit_252);
DEFLIT(lit_153);
DEFLIT(lit_231);
DEFLIT(lit_258);
DEFLIT(lit_131);
DEFLIT(lit_250);
DEFLIT(lit_207);
DEFLIT(lit_197);
DEFLIT(lit_280);
DEFLIT(lit_189);
DEFLIT(lit_292);
DEFLIT(lit_72);
DEFLIT(lit_71);
DEFLIT(lit_86);
DEFLIT(lit_85);
DEFLIT(lit_135);
DEFLIT(lit_0);
DEFLIT(lit_270);
DEFLIT(lit_101);
DEFLIT(lit_47);
DEFLIT(lit_177);
DEFLIT(lit_215);
DEFLIT(lit_167);
DEFLIT(lit_301);
DEFLIT(lit_291);
DEFLIT(lit_62);
DEFLIT(lit_61);
DEFLIT(lit_76);
DEFLIT(lit_75);
DEFLIT(lit_255);
DEFLIT(lit_15);
DEFLIT(lit_42);
DEFLIT(lit_41);
DEFLIT(lit_149);
DEFLIT(lit_91);
DEFLIT(lit_2);
DEFLIT(lit_218);
DEFLIT(lit_58);
DEFLIT(lit_57);
DEFLIT(lit_203);
DEFLIT(lit_12);
DEFLIT(lit_272);
DEFLIT(lit_19);
DEFLIT(lit_227);
DEFLIT(lit_109);
DEFLIT(lit_3);
DEFLIT(lit_32);
DEFLIT(lit_31);
DEFLIT(lit_235);
DEFLIT(lit_289);
DEFLIT(lit_24);
DEFLIT(lit_48);
DEFLIT(lit_181);
DEFLIT(lit_6);
DEFLIT(lit_113);
DEFLIT(lit_226);
DEFLIT(lit_187);
DEFLIT(lit_210);
DEFLIT(lit_245);
DEFLIT(lit_284);
DEFLIT(lit_28);
DEFLIT(lit_124);
DEFLIT(lit_117);
DEFLIT(lit_273);
DEFLIT(lit_145);
DEFLIT(lit_138);
DEFLIT(lit_219);
DEFLIT(lit_191);
DEFLIT(lit_97);
DEFLIT(lit_288);
DEFLIT(lit_196);
DEFLIT(lit_287);
DEFLIT(lit_163);
DEFLIT(lit_70);
DEFLIT(lit_69);
DEFLIT(lit_84);
DEFLIT(lit_83);
DEFLIT(lit_296);
DEFLIT(lit_299);
DEFLIT(lit_100);
DEFLIT(lit_99);
DEFLIT(lit_176);
DEFLIT(lit_271);
DEFLIT(lit_152);
DEFLIT(lit_59);
DEFLIT(lit_8);
DEFLIT(lit_60);
DEFLIT(lit_241);
DEFLIT(lit_74);
DEFLIT(lit_201);
DEFLIT(lit_92);
DEFLIT(lit_14);
DEFLIT(lit_120);
DEFLIT(lit_40);
DEFLIT(lit_39);
DEFLIT(lit_157);
DEFLIT(lit_89);
DEFLIT(lit_261);
DEFLIT(lit_281);
DEFLIT(lit_254);
DEFLIT(lit_56);
DEFLIT(lit_55);
DEFLIT(lit_194);
DEFLIT(lit_275);
DEFLIT(lit_185);
DEFLIT(lit_232);
DEFLIT(lit_234);
DEFLIT(lit_108);
DEFLIT(lit_90);
DEFLIT(lit_233);
DEFLIT(lit_30);
DEFLIT(lit_130);
DEFLIT(lit_23);
DEFLIT(lit_300);
DEFLIT(lit_46);
DEFLIT(lit_45);
DEFLIT(lit_170);
DEFLIT(lit_112);
DEFLIT(lit_148);
DEFLIT(lit_104);
DEFLIT(lit_221);
DEFLIT(lit_238);
DEFLIT(lit_304);
DEFLIT(lit_202);
DEFLIT(lit_27);
DEFLIT(lit_1);
DEFLIT(lit_116);
DEFLIT(lit_105);
DEFLIT(lit_222);
DEFLIT(lit_192);
DEFLIT(lit_248);
DEFLIT(lit_265);
DEFLIT(lit_166);
DEFLIT(lit_141);
DEFLIT(lit_180);
DEFLIT(lit_162);
DEFLIT(lit_68);
DEFLIT(lit_67);
DEFLIT(lit_82);
DEFLIT(lit_81);

/* FUNCTIONS: */

extern P YPPtraits (P);
extern P YPobject_shell ();
extern P YPobject_of (P,P);
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
extern P YPtraits_owner_setter (P,P);
extern P YPtraits_owner (P);
extern P YPtraits_direct_parents_setter (P,P);
extern P YPtraits_direct_parents (P);
extern P YPtraits_direct_slots_setter (P,P);
extern P YPtraits_direct_slots (P);
extern P YPtraits_parents_setter (P,P);
extern P YPtraits_parents (P);
extern P YPtraits_slots_setter (P,P);
extern P YPtraits_slots (P);
extern P YPtraits_direct_children_setter (P,P);
extern P YPtraits_direct_children (P);
extern P YPtraits_gens_setter (P,P);
extern P YPtraits_gens (P);
extern P YPtraits_mets_setter (P,P);
extern P YPtraits_mets (P);
extern P YPtraits_forward_setter (P,P);
extern P YPtraits_forward (P);
extern P YPtraits (P,P,P,P,P,P,P,P,P);
extern P YPcompute_parents (P);
extern P YPdefine_parent (P,P);
extern P YPcopy (P);
extern P YPpatch_parent (P);
extern P YPtag_bits (P);
extern P YPtag (P,P);
extern P YPuntag (P);
extern P YPindirect_objectQ (P);
extern P YPtraits_of (P);
extern P YPib (P);
extern P YPint (P);
extern P YPiu (P);
extern P YPcb (P);
extern P YPchr (P);
extern P YPcu (P);
extern P YPlb (P);
extern P YPloc (P);
extern P YPlu (P);
extern P YPstr_dat_setter (P,P);
extern P YPstr_dat (P);
extern P YPstrX (P);
extern P YPstr (P);
extern P YPsb (P);
extern P YPsu (P);
extern P YPslen (P);
extern P YPselt (P,P);
extern P YPselt_setter (P,P,P);
extern P YPvec_dat_setter (P,P);
extern P YPvec_dat (P);
extern P YPvecX (P);
extern P YPvec (P);
extern P YPvb (P);
extern P YPvu (P);
extern P YPvlen (P);
extern P YPvelt (P,P);
extern P YPvelt_setter (P,P,P);
extern P YPstr_eqQ_loop (P,P,P,P);
extern P YPstr_eqQ (P,P);
extern P YPPsym (P);
extern P YPsym_nam_setter (P,P);
extern P YPsym_nam (P);
extern P YPsym (P);
LOCFOR(fun_lookup_92);
LOCFOR(fun_93);
LOCFOR(fun_lookup_94);
FUNFOR(Yfab_sym);
LOCFOR(fun_loop_96);
extern P YPrevX (P);
LOCFOR(fun_coly_98);
LOCFOR(fun_colx_99);
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
extern P YPgen_cache_arg_pos_setter (P,P);
extern P YPgen_cache_arg_pos (P);
extern P YPgen_cache_singletons_setter (P,P);
extern P YPgen_cache_singletons (P);
extern P YPgen_cache_classes_setter (P,P);
extern P YPgen_cache_classes (P);
extern P YPgen_cache (P,P,P);
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
LOCFOR(fun_loop_135);
FUNFOR(YPslot_offset);
FUNFOR(YPearly_dispatch);
FUNFOR(YPadd_met);
FUNFOR(YPadd_slot);
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
FUNFOR(YPcollect_direct_slots);
FUNFOR(YPfinalize_slotsX);
extern P YPpatch_lst (P);
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
LOCFOR(fun_fnd_267);
FUNFOR(YOallQ);
LOCFOR(fun_fnd_269);
FUNFOR(YOall2Q);
LOCFOR(fun_fnd_271);
FUNFOR(YOelt);
LOCFOR(fun_loop_273);
FUNFOR(YOfill);
LOCFOR(fun_fnd_275);
FUNFOR(YOanyQ);
extern P YOpair (P,P);
extern P YOadd (P,P);
extern P YOadd_new (P,P);
LOCFOR(fun_do_280);
FUNFOR(YOmap);
LOCFOR(fun_do_282);
FUNFOR(YOdo);
LOCFOR(fun_in_284);
FUNFOR(YOalter);
LOCFOR(fun_fab_286);
FUNFOR(YOfab);
LOCFOR(fun_red_288);
FUNFOR(YOreduce);
FUNFOR(YOcat2);
LOCFOR(fun_fnd_291);
FUNFOR(YOfind_key);
LOCFOR(fun_293);
FUNFOR(YOmemQ);
LOCFOR(fun_295);
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
LOCFOR(fun_col_308);
LOCFOR(fun_lop_309);
LOCFOR(fun_310);
LOCFOR(fun_311);
LOCFOR(fun_312);
LOCFOR(fun_313);
FUNFOR(Ygen_add_met);
extern P YPPisaQ (P,P,P);
extern P YPobject_parents (P);
extern P YPisaQ (P,P);
FUNFOR(YisaQ);
LOCFOR(fun_find_319);
FUNFOR(YobjectL);
FUNFOR(Yorder_specs);
LOCFOR(fun_loop_322);
FUNFOR(Yorder_mets);
LOCFOR(fun_insert_324);
LOCFOR(fun_check_subsequent_ambiguities_325);
LOCFOR(fun_loop_326);
LOCFOR(fun_precedes_allQ_327);
LOCFOR(fun_loop_328);
LOCFOR(fun_make_ambiguous_329);
LOCFOR(fun_loop_330);
FUNFOR(Ysorted_app_mets_1);
LOCFOR(fun_loop_332);
FUNFOR(Ymet_appQ);
LOCFOR(fun_col_334);
FUNFOR(Ysorted_app_mets);
LOCFOR(fun_col_336);
FUNFOR(Yopt_args);
FUNFOR(YOgen_cache_arg_pos);
FUNFOR(YOgen_cache_arg_pos_setter);
FUNFOR(YOgen_cache_singletons);
FUNFOR(YOgen_cache_singletons_setter);
FUNFOR(YOgen_cache_classes);
FUNFOR(YOgen_cache_classes_setter);
LOCFOR(fun_344);
FUNFOR(Ygen_unspecialized_atQ);
LOCFOR(fun_loop_346);
FUNFOR(Ygen_lookup_miss_1_using);
FUNFOR(Ysingleton_specQ);
FUNFOR(Ymethod_accessor_offset);
FUNFOR(Ygen_lookup_miss_1);
extern P Ygen_lookup (P,P);
extern P Yslot_value_at (P,P);
extern P Yslot_value_at_setter (P,P,P);
extern P Ygen_lookup_1_using (P,P,P,P,P,P,P,P,P,P,P);
extern P Ygen_lookup_1 (P,P,P,P,P,P);
FUNFOR(Ychoose_methods);
FUNFOR(YmetL);
FUNFOR(Ymet_has_singleton_specsQ);
LOCFOR(fun_loop_359);
FUNFOR(Yfind_app_singleton_mets);
LOCFOR(fun_361);
FUNFOR(Ygen_lookup_miss);
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
FUNFOR(Yobject_traits);
LOCFOR(fun_remove_next_380);
LOCFOR(fun_unconstrained_object_in_parents_381);
LOCFOR(fun_p_unconstrained_inQ_382);
LOCFOR(fun_p_in_and_unconstrained_inQ_383);
LOCFOR(fun_unconstrained_proto_384);
LOCFOR(fun_merge_lists_385);
FUNFOR(Ytraits_ordered_parents);
FUNFOR(Ytraits_ordered_slots);
LOCFOR(fun_388);
FUNFOR(Ymake_traits);
FUNFOR(Yobject_direct_slots);
FUNFOR(Yobject_direct_parents);
FUNFOR(Yobject_slots);
FUNFOR(Yobject_parents);
FUNFOR(Yobject_direct_children);
FUNFOR(Yensure_fresh_object);
LOCFOR(fun_loop_396);
FUNFOR(Yslot_offset);
FUNFOR(Yslot_value);
FUNFOR(Yslot_value_setter);
FUNFOR(Yensure_traits);
LOCFOR(fun_loop_401);
LOCFOR(fun_loop_parents_402);
LOCFOR(fun_loop_slots_403);
FUNFOR(YPisa);
LOCFOR(fun_loop_405);
FUNFOR(Yfind_getter);
LOCFOR(fun_loop_407);
FUNFOR(Yfind_setter);
LOCFOR(fun_409);
FUNFOR(Yforward_traits);
LOCFOR(fun_visit_411);
FUNFOR(YOdo_children);
LOCFOR(fun_413);
FUNFOR(YPslot);
LOCFOR(fun_loop_old_slots_415);
extern P YPupdate_instance_for_changed_prototype (P);
FUNFOR(Yupdate_instance_for_changed_prototype);
FUNFOR(Yfab_gen);
LOCFOR(fun_419);
FUNFOR(Ygen_from_met);
FUNFOR(YPdefine_method);
FUNFOR(Yunexec);
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

P YPPtraits(P owner_) {
  P traitsF1;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPmake_object();
  traitsF1 = T1;
  (P)YPinstall_object_values(traitsF1,CHKREF(YPtraits_size));
  (P)YPslot_elt_setter(owner_,traitsF1,CHKREF(YPtraits_owner_offset));
  T0 = traitsF1;
  return T0;
}

P YPobject_shell() {
  P protoF2;
  P T2,T1,T0;
loop:
  T2 = (P)YPmake_object();
  protoF2 = T2;
  T1 = (P)YPPtraits(protoF2);
  (P)YPobject_traits_setter(T1,protoF2);
  T0 = protoF2;
  return T0;
}

P YPobject_of(P owner_,P size_) {
  P protoF3;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = (P)YPmake_object();
  protoF3 = T3;
  T1 = (P)YPobject_traits(owner_);
  (P)YPobject_traits_setter(T1,protoF3);
  T2 = (P)YPmake_object_values(size_);
  (P)YPobject_values_setter(T2,protoF3);
  T0 = protoF3;
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
  P protoF4;
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPobject_of(CHKREF(YLlstG),(P)2);
  protoF4 = T1;
  (P)YPslot_elt_setter(tail_,protoF4,(P)1);
  (P)YPslot_elt_setter(head_,protoF4,(P)0);
  T0 = protoF4;
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
  P protoF5;
  P T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T1 = (P)YPobject_of(CHKREF(YLsigG),(P)5);
  protoF5 = T1;
  (P)YPslot_elt_setter(sig_value_,protoF5,(P)4);
  (P)YPslot_elt_setter(sig_arity_,protoF5,(P)3);
  (P)YPslot_elt_setter(sig_naryQ_,protoF5,(P)2);
  (P)YPslot_elt_setter(sig_specs_,protoF5,(P)1);
  (P)YPslot_elt_setter(sig_names_,protoF5,(P)0);
  T0 = protoF5;
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
  P protoF6;
  P T1,T0;
  P a1,a2,a3,a4;
loop:
  T1 = (P)YPobject_of(CHKREF(YLmetG),(P)4);
  protoF6 = T1;
  (P)YPslot_elt_setter(met_env_,protoF6,(P)3);
  (P)YPslot_elt_setter(met_sig_,protoF6,(P)2);
  (P)YPslot_elt_setter(met_name_,protoF6,(P)1);
  (P)YPslot_elt_setter(met_code_,protoF6,(P)0);
  T0 = protoF6;
  return T0;
}

P YPtraits_owner_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPtraits_owner(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPtraits_direct_parents_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)1);
  return T0;
}

P YPtraits_direct_parents(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)1);
  return T0;
}

P YPtraits_direct_slots_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)2);
  return T0;
}

P YPtraits_direct_slots(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)2);
  return T0;
}

P YPtraits_parents_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)3);
  return T0;
}

P YPtraits_parents(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)3);
  return T0;
}

P YPtraits_slots_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)4);
  return T0;
}

P YPtraits_slots(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)4);
  return T0;
}

P YPtraits_direct_children_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)5);
  return T0;
}

P YPtraits_direct_children(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)5);
  return T0;
}

P YPtraits_gens_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)6);
  return T0;
}

P YPtraits_gens(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)6);
  return T0;
}

P YPtraits_mets_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)7);
  return T0;
}

P YPtraits_mets(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)7);
  return T0;
}

P YPtraits_forward_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)8);
  return T0;
}

P YPtraits_forward(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)8);
  return T0;
}

P YPtraits(P traits_owner_,P traits_direct_parents_,P traits_direct_slots_,P traits_parents_,P traits_slots_,P traits_direct_children_,P traits_gens_,P traits_mets_,P traits_forward_) {
  P protoF7;
  P T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8,a9;
loop:
  T1 = (P)YPobject_of(CHKREF(YLtraitsG),(P)9);
  protoF7 = T1;
  (P)YPslot_elt_setter(traits_forward_,protoF7,(P)8);
  (P)YPslot_elt_setter(traits_mets_,protoF7,(P)7);
  (P)YPslot_elt_setter(traits_gens_,protoF7,(P)6);
  (P)YPslot_elt_setter(traits_direct_children_,protoF7,(P)5);
  (P)YPslot_elt_setter(traits_slots_,protoF7,(P)4);
  (P)YPslot_elt_setter(traits_parents_,protoF7,(P)3);
  (P)YPslot_elt_setter(traits_direct_slots_,protoF7,(P)2);
  (P)YPslot_elt_setter(traits_direct_parents_,protoF7,(P)1);
  (P)YPslot_elt_setter(traits_owner_,protoF7,(P)0);
  T0 = protoF7;
  return T0;
}

P YPcompute_parents(P parent_) {
  P traitsF8;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = (P)YPobject_traits(parent_);
  traitsF8 = T11;
  T10 = (P)YPobject_traits(CHKREF(YLanyG));
  T9 = (P)YPeqQ(traitsF8,T10);
  T8 = (P)YPbb(T9);
  if (T8 != YPfalse) {
    T7 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
    T1 = T7;
  } else {
    T6 = (P)YPtraits_owner(traitsF8);
    T5 = (P)YPtraits_direct_parents(traitsF8);
    T4 = (P)YPhead(T5);
    T3 = (P)YPcompute_parents(T4);
    T2 = (P)YPpair(T6,T3);
    T1 = T2;
  }
  T0 = T1;
  return T0;
}

P YPdefine_parent(P owner_,P direct_parent_) {
  P parent_traitsF11;
  P parentsF10;
  P direct_parentsF9;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = (P)YPpair(direct_parent_,CHKREF(Ynil));
  direct_parentsF9 = T10;
  T9 = (P)YPcompute_parents(direct_parent_);
  T8 = (P)YPpair(owner_,T9);
  parentsF10 = T8;
  T7 = (P)YPobject_traits(direct_parent_);
  parent_traitsF11 = T7;
  T4 = (P)YPtraits_direct_children(parent_traitsF11);
  T3 = (P)YPpair(owner_,T4);
  (P)YPtraits_direct_children_setter(T3,parent_traitsF11);
  T6 = (P)YPtraits(owner_,direct_parentsF9,CHKREF(Ynil),parentsF10,CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),CHKREF(Ynil),YPfalse);
  T5 = (P)YPobject_traits_setter(T6,owner_);
  T2 = T5;
  T1 = T2;
  T0 = T1;
  return T0;
}

P YPcopy(P x_) {
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T5 = (P)YPemptyQ(x_);
  if (T5 != YPfalse) {
    T0 = x_;
  } else {
    T4 = (P)YPhead(x_);
    T3 = (P)YPtail(x_);
    T2 = (P)YPcopy(T3);
    T1 = (P)YPpair(T4,T2);
    T0 = T1;
  }
  return T0;
}

P YPpatch_parent(P obj_) {
  P traitsF12;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = (P)YPobject_traits(obj_);
  traitsF12 = T8;
  (P)YPobject_traits_setter(CHKREF(YLtraitsG_traits),traitsF12);
  T2 = (P)YPtraits_parents(traitsF12);
  T1 = (P)YPcopy(T2);
  (P)YPtraits_parents_setter(T1,traitsF12);
  T4 = (P)YPtraits_direct_children(traitsF12);
  T3 = (P)YPcopy(T4);
  (P)YPtraits_direct_children_setter(T3,traitsF12);
  T7 = (P)YPtraits_direct_parents(traitsF12);
  T6 = (P)YPcopy(T7);
  T5 = (P)YPtraits_direct_parents_setter(T6,traitsF12);
  T0 = T5;
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

INLINE P YPtraits_of(P x_) {
  P tagF13;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = (P)YPtag_bits(x_);
  tagF13 = T6;
  T5 = (P)YPiE(tagF13,(P)0);
  T4 = (P)YPbb(T5);
  if (T4 != YPfalse) {
    T3 = (P)YPobject_traits(x_);
    T1 = T3;
  } else {
    T2 = (P)YPelt(CHKREF(YDdirect_object_traits),tagF13);
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

P YPstr_dat_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPstr_dat(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPstrX(P len_) {
  P protoF14;
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YPobject_of(CHKREF(YLstrG),(P)1);
  protoF14 = T3;
  T2 = (P)YPcu(YPchr((P)32));
  T1 = (P)YPPsfab(len_,T2);
  (P)YPstr_dat_setter(T1,protoF14);
  T0 = protoF14;
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

P YPsb(P x_) {
  P protoF15;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(CHKREF(YLstrG),(P)1);
  protoF15 = T1;
  (P)YPstr_dat_setter(x_,protoF15);
  T0 = protoF15;
  return T0;
}

P YPsu(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPstr_dat(x_);
  return T0;
}

P YPslen(P x_) {
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPstr_dat(x_);
  T0 = (P)YPPslen(T1);
  return T0;
}

P YPselt(P x_,P i_) {
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPstr_dat(x_);
  T0 = (P)YPPselt(T1,i_);
  return T0;
}

P YPselt_setter(P z_,P x_,P i_) {
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = (P)YPstr_dat(x_);
  T0 = (P)YPPselt_setter(z_,T1,i_);
  return T0;
}

P YPvec_dat_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

P YPvec_dat(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPvecX(P len_) {
  P protoF16;
  P T2,T1,T0;
  P a1;
loop:
  T2 = (P)YPobject_of(CHKREF(YLvecG),(P)1);
  protoF16 = T2;
  T1 = (P)YPPvfab(len_,CHKREF(Ynul));
  (P)YPvec_dat_setter(T1,protoF16);
  T0 = protoF16;
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

P YPvb(P x_) {
  P protoF17;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(CHKREF(YLvecG),(P)1);
  protoF17 = T1;
  (P)YPvec_dat_setter(x_,protoF17);
  T0 = protoF17;
  return T0;
}

P YPvu(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPvec_dat(x_);
  return T0;
}

P YPvlen(P x_) {
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPvec_dat(x_);
  T0 = (P)YPPvlen(T1);
  return T0;
}

P YPvelt(P x_,P i_) {
  P T1,T0;
  P a1,a2;
loop:
  T1 = (P)YPvec_dat(x_);
  T0 = (P)YPPvelt(T1,i_);
  return T0;
}

P YPvelt_setter(P z_,P x_,P i_) {
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = (P)YPvec_dat(x_);
  T0 = (P)YPPvelt_setter(z_,T1,i_);
  return T0;
}

P YPstr_eqQ_loop(P s1_,P s2_,P len_,P i_) {
  P tmpF21;
  P c2F20;
  P c1F19;
  P tmpF18;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
loop:
  T13 = (P)YPiE(i_,len_);
  T12 = (P)YPbb(T13);
  tmpF18 = T12;
  if (tmpF18 != YPfalse) {
    T1 = tmpF18;
  } else {
    T11 = (P)YPselt(s1_,i_);
    c1F19 = T11;
    T10 = (P)YPselt(s2_,i_);
    c2F20 = T10;
    T9 = (P)YPcE(c1F19,c2F20);
    T8 = (P)YPbb(T9);
    tmpF21 = T8;
    if (tmpF21 != YPfalse) {
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
  P tmpF23;
  P lenF22;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = (P)YPslen(s1_);
  lenF22 = T7;
  T6 = (P)YPslen(s2_);
  T5 = (P)YPiE(lenF22,T6);
  T4 = (P)YPbb(T5);
  tmpF23 = T4;
  if (tmpF23 != YPfalse) {
    T3 = (P)YPstr_eqQ_loop(s1_,s2_,lenF22,(P)0);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  T0 = T1;
  return T0;
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
  P protoF24;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(CHKREF(YLsymG),(P)1);
  protoF24 = T1;
  (P)YPslot_elt_setter(sym_nam_,protoF24,(P)0);
  T0 = protoF24;
  return T0;
}

FUNCODEDEF(fun_lookup_92) {
  ARG(s_, 0);
  P symF26;
  P symF25;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = (P)YPemptyQ(s_);
  if (T11 != YPfalse) {
    T10 = (P)YPsym(FREEREF(1));
    symF26 = T10;
    T9 = (P)YPpair(symF26,CHKREF(YPsymbols));
    YPsymbols = T9;
    T8 = symF26;
    T0 = T8;
  } else {
    T7 = (P)YPhead(s_);
    symF25 = T7;
    T6 = (P)YPsym_nam(symF25);
    T5 = (P)YPstr_eqQ(T6,FREEREF(1));
    if (T5 != YPfalse) {
      T2 = symF25;
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

FUNCODEDEF(fun_93) {
  ARG(name_, 0);
  P lookupF27;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_lookup_92,2);
  lookupF27 = T2;
  FUNINIT(lookupF27, 2,lookupF27,name_);
  T1 = KCALL1(lookupF27,CHKREF(YPsymbols));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_lookup_94) {
  ARG(s_, 0);
  P symF29;
  P symF28;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = (P)YPemptyQ(s_);
  if (T11 != YPfalse) {
    T10 = (P)YPsym(FREEREF(1));
    symF29 = T10;
    T9 = (P)YPpair(symF29,CHKREF(YPsymbols));
    YPsymbols = T9;
    T8 = symF29;
    T0 = T8;
  } else {
    T7 = (P)YPhead(s_);
    symF28 = T7;
    T6 = (P)YPsym_nam(symF28);
    T5 = (P)YPstr_eqQ(T6,FREEREF(1));
    if (T5 != YPfalse) {
      T2 = symF28;
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
  P lookupF30;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_lookup_94,2);
  lookupF30 = T2;
  FUNINIT(lookupF30, 2,lookupF30,name_);
  T1 = KCALL1(lookupF30,CHKREF(YPsymbols));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_96) {
  ARG(r_, 0);
  ARG(l_, 1);
  P tF31;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = (P)YPemptyQ(l_);
  if (T4 != YPfalse) {
    T0 = r_;
  } else {
    T3 = (P)YPtail(l_);
    tF31 = T3;
    (P)YPtail_setter(r_,l_);
    a1 = tF31;
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
  P loopF32;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_96,1);
  loopF32 = T2;
  FUNINIT(loopF32, 1,loopF32);
  T1 = KCALL2(loopF32,c_,Ynil);
  T0 = T1;
  return T0;
}

FUNCODEDEF(fun_coly_98) {
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

FUNCODEDEF(fun_colx_99) {
  ARG(x_, 0);
  ARG(lx_, 1);
  P colyF33;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = (P)YPemptyQ(x_);
  if (T8 != YPfalse) {
    T7 = FUNSHELL(1,fun_coly_98,1);
    colyF33 = T7;
    FUNINIT(colyF33, 1,colyF33);
    T6 = KCALL2(colyF33,lx_,FREEREF(1));
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
  P colxF34;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_colx_99,2);
  colxF34 = T2;
  FUNINIT(colxF34, 2,colxF34,y_);
  T1 = KCALL2(colxF34,CHKREF(Ynil),x_);
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
  P protoF35;
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPobject_of(CHKREF(YLfloG),(P)1);
  protoF35 = T1;
  (P)YPslot_elt_setter(flo_dat_,protoF35,(P)0);
  T0 = protoF35;
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
  P protoF36;
  P T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T1 = (P)YPobject_of(CHKREF(YLslotG),(P)5);
  protoF36 = T1;
  (P)YPslot_elt_setter(slot_init_,protoF36,(P)4);
  (P)YPslot_elt_setter(slot_type_,protoF36,(P)3);
  (P)YPslot_elt_setter(slot_setter_,protoF36,(P)2);
  (P)YPslot_elt_setter(slot_getter_,protoF36,(P)1);
  (P)YPslot_elt_setter(slot_owner_,protoF36,(P)0);
  T0 = protoF36;
  return T0;
}

P YPgen_cache_arg_pos_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPgen_cache_arg_pos(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)0);
  return T0;
}

P YPgen_cache_singletons_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPgen_cache_singletons(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)1);
  return T0;
}

P YPgen_cache_classes_setter(P z_,P x_) {
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPslot_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPgen_cache_classes(P x_) {
  P T0;
  P a1;
loop:
  T0 = (P)YPslot_elt(x_,(P)2);
  return T0;
}

P YPgen_cache(P gen_cache_arg_pos_,P gen_cache_singletons_,P gen_cache_classes_) {
  P protoF37;
  P T1,T0;
  P a1,a2,a3;
loop:
  T1 = (P)YPobject_of(CHKREF(YLgen_cacheG),(P)3);
  protoF37 = T1;
  (P)YPslot_elt_setter(gen_cache_classes_,protoF37,(P)2);
  (P)YPslot_elt_setter(gen_cache_singletons_,protoF37,(P)1);
  (P)YPslot_elt_setter(gen_cache_arg_pos_,protoF37,(P)0);
  T0 = protoF37;
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
  P protoF38;
  P T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T1 = (P)YPobject_of(CHKREF(YLgenG),(P)5);
  protoF38 = T1;
  (P)YPslot_elt_setter(fun_cache_,protoF38,(P)4);
  (P)YPslot_elt_setter(gen_mets_,protoF38,(P)3);
  (P)YPslot_elt_setter(gen_sig_,protoF38,(P)2);
  (P)YPslot_elt_setter(gen_name_,protoF38,(P)1);
  (P)YPslot_elt_setter(gen_code_,protoF38,(P)0);
  T0 = protoF38;
  return T0;
}

FUNCODEDEF(fun_loop_135) {
  ARG(slots_, 0);
  ARG(i_, 1);
  P slotF39;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = (P)YPemptyQ(slots_);
  if (T11 != YPfalse) {
    T10 = (P)YPiu(YPint((P)-1));
    T0 = T10;
  } else {
    T9 = (P)YPhead(slots_);
    slotF39 = T9;
    T8 = (P)YPslot_getter(slotF39);
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
  P loopF40;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = FUNSHELL(1,fun_loop_135,2);
  loopF40 = T4;
  FUNINIT(loopF40, 2,loopF40,getter_);
  T3 = (P)YPobject_traits(owner_);
  T2 = (P)YPtraits_slots(T3);
  T1 = KCALL2(loopF40,(P)0,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YPearly_dispatch) {
  ARG(args_, 0);
  P genF41;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = (P)YPfun_reg();
  genF41 = T4;
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
  ARG(owner_, 1);
  P traitsF42;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = (P)YPobject_traits(owner_);
  traitsF42 = T4;
  T3 = (P)YPtraits_direct_slots(traitsF42);
  T2 = (P)YPpair(slot_,T3);
  T1 = (P)YPtraits_direct_slots_setter(T2,traitsF42);
  T0 = T1;
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLchrG),CHKREF(YPchr_val));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_142) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLchrG),CHKREF(YPchr_val));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLintG),CHKREF(YPint_val));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_145) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLintG),CHKREF(YPint_val));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_146) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_147) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfloG),CHKREF(YPflo_val));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_148) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfloG),CHKREF(YPflo_val));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_149) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_150) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLlocG),CHKREF(YPloc_val));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_151) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLlocG),CHKREF(YPloc_val));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_152) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_153) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Yhead));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_154) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Yhead));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_155) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_156) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Ytail));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_157) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLlstG),CHKREF(Ytail));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLvecG),CHKREF(YPPvec_dat));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_160) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLvecG),CHKREF(YPPvec_dat));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_161) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_162) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLstrG),CHKREF(YPPstr_dat));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_163) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLstrG),CHKREF(YPPstr_dat));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsymG),CHKREF(Ysym_name));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_166) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsymG),CHKREF(Ysym_name));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_167) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_168) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_owner));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_169) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_owner));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_direct_parents));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_172) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_direct_parents));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_direct_slots));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_175) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_direct_slots));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_parents));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_178) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_parents));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_slots));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_181) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_slots));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_direct_children));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_184) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_direct_children));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_gens));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_187) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_gens));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_188) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_189) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_mets));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_190) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_mets));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_191) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPfalse);
}

FUNCODEDEF(fun_192) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_forward));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_193) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLtraitsG),CHKREF(Ytraits_forward));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_owner));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_196) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_owner));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_197) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_198) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_getter));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_199) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_getter));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_setter));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_202) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_setter));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_type));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_205) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_type));
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
  P T0;
  P a1;
loop:
  T0 = fun_206;
  QRET(T0);
}

FUNCODEDEF(fun_208) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_init));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_209) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLslotG),CHKREF(Yslot_init));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_210) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_211) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_singletons));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_212) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_singletons));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_213) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_214) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_classes));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_215) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_classes));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_names));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_218) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_names));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_specs));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_221) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_specs));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_222) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(YPfalse));
}

FUNCODEDEF(fun_223) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_naryQ));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_224) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_naryQ));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_225) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_226) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_arity));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_227) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_arity));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_228) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(YLanyG));
}

FUNCODEDEF(fun_229) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_value));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_230) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLsigG),CHKREF(Ysig_value));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_231) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(YPfalse));
}

FUNCODEDEF(fun_232) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_code));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_233) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_code));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_234) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(YPfalse));
}

FUNCODEDEF(fun_235) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_name));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_236) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_name));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_237) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynul_slot));
}

FUNCODEDEF(fun_238) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_sig));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_239) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLfunG),CHKREF(Yfun_sig));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLmetG),CHKREF(Yfun_env));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_242) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLmetG),CHKREF(Yfun_env));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_243) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(Ynil));
}

FUNCODEDEF(fun_244) {
  ARG(x_, 0);
  ARG(z_, 1);
  P T1,T0;
  P a1,a2;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_mets));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_245) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_mets));
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
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_cache));
  T0 = (P)YPslot_elt_setter(z_,x_,T1);
  QRET(T0);
}

FUNCODEDEF(fun_248) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(YPslot_offset),CHKREF(YLgenG),CHKREF(Yfun_cache));
  T0 = (P)YPslot_elt(x_,T1);
  QRET(T0);
}

FUNCODEDEF(YPcollect_direct_slots) {
  ARG(traits_, 0);
  P parentF43;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = (P)YPtraits_direct_parents(traits_);
  T5 = (P)YPhead(T6);
  parentF43 = T5;
  T4 = (P)YPobject_traits(parentF43);
  T3 = (P)YPtraits_slots(T4);
  T2 = (P)YPtraits_direct_slots(traits_);
  T1 = (P)YPcat2(T3,T2);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(YPfinalize_slotsX) {
  ARG(owner_, 0);
  P traitsF44;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = (P)YPobject_traits(owner_);
  traitsF44 = T6;
  T2 = (P)YPtraits_direct_slots(traitsF44);
  T1 = (P)YPrevX(T2);
  (P)YPtraits_direct_slots_setter(T1,traitsF44);
  T3 = CALL1(CHKREF(YPcollect_direct_slots),traitsF44);
  (P)YPtraits_slots_setter(T3,traitsF44);
  T5 = (P)YPtraits_slots(traitsF44);
  T4 = (P)YPPlen(T5);
  (P)YPadjust_object_values_size(owner_,T4,owner_);
  T0 = owner_;
  QRET(T0);
}

P YPpatch_lst(P x_) {
  P T0;
  P a1;
loop:
  (P)YPhead_setter(Ynil,x_);
  T0 = (P)YPtail_setter(Ynil,x_);
  return T0;
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

FUNCODEDEF(fun_fnd_267) {
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
  P fndF45;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_fnd_267,2);
  fndF45 = T2;
  FUNINIT(fndF45, 2,fndF45,test_);
  T1 = KCALL1(fndF45,c_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fnd_269) {
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
  P fndF46;
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = FUNSHELL(1,fun_fnd_269,2);
  fndF46 = T2;
  FUNINIT(fndF46, 2,fndF46,test_);
  T1 = KCALL2(fndF46,x_,y_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fnd_271) {
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
  P fndF47;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_fnd_271,2);
  fndF47 = T2;
  FUNINIT(fndF47, 2,fndF47,key_);
  T1 = CALL2(fndF47,YPint((P)0),x_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_273) {
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
  P loopF48;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_loop_273,3);
  loopF48 = T2;
  FUNINIT(loopF48, 3,loopF48,f_,x_);
  T1 = KCALL1(loopF48,x_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fnd_275) {
  ARG(p_, 0);
  P tmpF49;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T7 = (P)YOemptyQ(p_);
  if (T7 != YPfalse) {
    T0 = YPfalse;
  } else {
    T6 = (P)YOhead(p_);
    T5 = CALL1(FREEREF(0),T6);
    tmpF49 = T5;
    if (tmpF49 != YPfalse) {
      T2 = tmpF49;
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
  P fndF50;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_fnd_275,2);
  fndF50 = T2;
  FUNINIT(fndF50, 2,test_,fndF50);
  T1 = KCALL1(fndF50,c_);
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

FUNCODEDEF(fun_do_280) {
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
  P doF51;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_do_280,2);
  doF51 = T2;
  FUNINIT(doF51, 2,f_,doF51);
  T1 = KCALL2(doF51,x_,Ynil);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_do_282) {
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
  P doF52;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_do_282,2);
  doF52 = T2;
  FUNINIT(doF52, 2,doF52,f_);
  T1 = KCALL1(doF52,x_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_in_284) {
  ARG(ss_, 0);
  ARG(ds_, 1);
  P tmpF53;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T8 = (P)YOemptyQ(ds_);
  tmpF53 = T8;
  if (tmpF53 != YPfalse) {
    T6 = tmpF53;
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
  P inF54;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_in_284,2);
  inF54 = T2;
  FUNINIT(inF54, 2,inF54,dst_);
  T1 = KCALL2(inF54,dst_,src_);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_fab_286) {
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
  P fabF55;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_fab_286,1);
  fabF55 = T2;
  FUNINIT(fabF55, 1,fabF55);
  T1 = CALL2(fabF55,s_,Ynil);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_red_288) {
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
  P redF56;
  P T2,T1,T0;
  P a1,a2,a3;
loop:
  T2 = FUNSHELL(1,fun_red_288,2);
  redF56 = T2;
  FUNINIT(redF56, 2,combine_,redF56);
  T1 = KCALL2(redF56,init_,c_);
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

FUNCODEDEF(fun_fnd_291) {
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
  P fndF57;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_fnd_291,2);
  fndF57 = T2;
  FUNINIT(fndF57, 2,fndF57,f_);
  T1 = KCALL2(fndF57,c_,YPint((P)0));
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_293) {
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
  T3 = FUNFAB(fun_293,1,x_);
  T2 = CALL2(CHKREF(YOfind_key),T3,c_);
  T1 = (P)YOEE(T2,CHKREF(Ynul));
  T0 = CALL1(CHKREF(Ynot),T1);
  RET(T0);
}

FUNCODEDEF(fun_295) {
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
  T1 = fun_295;
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
  P tmpF59;
  P tmpF58;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T12 = CALL1(CHKREF(YOfun_arity),x_);
  T11 = CALL1(CHKREF(YOfun_arity),y_);
  T10 = (P)YOE(T12,T11);
  tmpF58 = T10;
  if (tmpF58 != YPfalse) {
    T9 = CALL1(CHKREF(YOfun_naryQ),x_);
    T8 = CALL1(CHKREF(YOfun_naryQ),y_);
    T7 = (P)YOEE(T9,T8);
    tmpF59 = T7;
    if (tmpF59 != YPfalse) {
      T6 = CALL1(CHKREF(YOfun_specs),x_);
      T5 = CALL1(CHKREF(YOfun_specs),y_);
      T4 = CALL3(CHKREF(YOall2Q),CHKREF(YisaQ),T6,T5);
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

FUNCODEDEF(fun_col_308) {
  ARG(gms_, 0);
  ARG(sameQ_, 1);
  ARG(mets_, 2);
  P tmpF62;
  P now_sameQF61;
  P gmF60;
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
    gmF60 = T10;
    T9 = CALL2(CHKREF(Yfun_same_metQ),gmF60,FREEREF(0));
    now_sameQF61 = T9;
    if (now_sameQF61 != YPfalse) {
      T8 = FREEREF(0);
    } else {
      T8 = gmF60;
    }
    T7 = (P)YOadd(mets_,T8);
    tmpF62 = now_sameQF61;
    if (tmpF62 != YPfalse) {
      T6 = tmpF62;
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

FUNCODEDEF(fun_lop_309) {
  ARG(specs_, 0);
  P tmpF65;
  P spec_traitsF64;
  P specF63;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
loop:
  T18 = (P)YOemptyQ(specs_);
  T17 = CALL1(CHKREF(Ynot),T18);
  if (T17 != YPfalse) {
    T16 = (P)YOhead(specs_);
    specF63 = T16;
    T15 = CALL1(CHKREF(Ysingleton_specQ),specF63);
    tmpF65 = T15;
    if (tmpF65 != YPfalse) {
      T13 = tmpF65;
    } else {
      T14 = (P)YOEE(specF63,CHKREF(YLanyG));
      T13 = T14;
    }
    T12 = T13;
    T11 = CALL1(CHKREF(Ynot),T12);
    if (T11 != YPfalse) {
      T8 = (P)YPobject_traits(specF63);
      spec_traitsF64 = T8;
      T4 = (P)YPtraits_gens(spec_traitsF64);
      T3 = (P)YOadd_new(T4,FREEREF(2));
      (P)YPtraits_gens_setter(T3,spec_traitsF64);
      T7 = (P)YPtraits_mets(spec_traitsF64);
      T6 = (P)YOadd_new(T7,FREEREF(1));
      T5 = (P)YPtraits_mets_setter(T6,spec_traitsF64);
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

FUNCODEDEF(fun_310) {
  P T0;
loop:
  T0 = CALL2(CHKREF(Yincongruent_method_error),FREEREF(1),FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_311) {
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

FUNCODEDEF(fun_312) {
loop:
  QRET(YPtrue);
}

FUNCODEDEF(fun_313) {
  ARG(return_, 0);
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T10 = (P)YPpair(CHKREF(YLsimple_handler_infoG),Ynil);
  T9 = (P)YPpair(CHKREF(Yhandler_info_arguments),Ynil);
  T8 = (P)YPpair(CHKREF(Yhandler_info_message),T9);
  T7 = CALL2(CHKREF(Ylst),FREEREF(0),FREEREF(1));
  T6 = (P)YPpair(T7,Ynil);
  T5 = (P)YPpair(CHKREF(lit_164),T6);
  T4 = CALL3(CHKREF(YPisa),T10,T8,T5);
  T3 = fun_312;
  T2 = FUNFAB(fun_311,2,FREEREF(1),return_);
  T1 = FUNFAB(fun_310,2,FREEREF(1),FREEREF(0));
  T0 = CALLN(YruntimeYPwith_monitor,5,CHKREF(YLreplace_generic_restartG),T4,T3,T2,T1);
  QRET(T0);
}

FUNCODEDEF(Ygen_add_met) {
  ARG(m_, 0);
  ARG(g_, 1);
  P lopF67;
  P colF66;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  (P)YPfun_cache_setter(YPfalse,g_);
  T12 = CALL2(CHKREF(Yfun_congruentQ),m_,g_);
  T11 = CALL1(CHKREF(Ynot),T12);
  if (T11 != YPfalse) {
    if (CHKREF(YTrestarts_okQT) != YPfalse) {
      T10 = FUNFAB(fun_313,2,g_,m_);
      T9 = with_exit(T10);
      T7 = T9;
    } else {
      T8 = CALL2(CHKREF(Yincongruent_method_error),g_,m_);
      T7 = T8;
    }
    T0 = T7;
  } else {
    T3 = FUNSHELL(1,fun_lop_309,3);
    lopF67 = T3;
    FUNINIT(lopF67, 3,lopF67,m_,g_);
    T2 = CALL1(CHKREF(YOfun_specs),m_);
    T1 = KCALL1(lopF67,T2);
    T6 = FUNSHELL(1,fun_col_308,3);
    colF66 = T6;
    FUNINIT(colF66, 3,m_,colF66,g_);
    T5 = CALL1(CHKREF(YOfun_mets),g_);
    T4 = CALL3(colF66,Ynil,YPfalse,T5);
    T0 = g_;
  }
  RET(T0);
}

P YPPisaQ(P o1_,P o2_,P ps_) {
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T6 = (P)YPemptyQ(ps_);
  if (T6 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = (P)YPhead(ps_);
    T4 = (P)YOEE(T5,o2_);
    if (T4 != YPfalse) {
      T1 = YPtrue;
    } else {
      T3 = (P)YPtail(ps_);
      a1 = o1_;
      a2 = o2_;
      a3 = T3;
      o1_ = a1;
      o2_ = a2;
      ps_ = a3;
      goto loop;
      T1 = T2;
    }
    T0 = T1;
  }
  return T0;
}

INLINE P YPobject_parents(P x_) {
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPtraits_of(x_);
  T0 = (P)YPtraits_parents(T1);
  return T0;
}

INLINE P YPisaQ(P o1_,P o2_) {
  P tmpF69;
  P tmpF68;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T7 = (P)YOEE(o2_,CHKREF(YLanyG));
  tmpF68 = T7;
  if (tmpF68 != YPfalse) {
    T1 = tmpF68;
  } else {
    T6 = (P)YOEE(o1_,o2_);
    tmpF69 = T6;
    if (tmpF69 != YPfalse) {
      T3 = tmpF69;
    } else {
      T5 = (P)YPobject_parents(o1_);
      T4 = (P)YPPisaQ(o1_,o2_,T5);
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
  }
  T0 = T1;
  return T0;
}

FUNCODEDEF(YisaQ) {
  ARG(o2_, 0);
  ARG(o1_, 1);
  P T0;
  P a1,a2;
loop:
  T0 = (P)YPisaQ(o1_,o2_);
  RET(T0);
}

FUNCODEDEF(fun_find_319) {
  ARG(ps_, 0);
  P oF70;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T10 = (P)YOemptyQ(ps_);
  if (T10 != YPfalse) {
    T9 = CALLN(CHKREF(Yerror),5,CHKREF(lit_173),CHKREF(lit_172),FREEREF(3),FREEREF(2),FREEREF(1));
    T0 = T9;
  } else {
    T8 = (P)YOhead(ps_);
    oF70 = T8;
    T7 = (P)YOEE(oF70,FREEREF(2));
    if (T7 != YPfalse) {
      T2 = YPtrue;
    } else {
      T6 = (P)YOEE(oF70,FREEREF(1));
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

FUNCODEDEF(YobjectL) {
  ARG(wrt_, 0);
  ARG(o2_, 1);
  ARG(o1_, 2);
  P findF71;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T7 = (P)YOEE(wrt_,o1_);
  if (T7 != YPfalse) {
    T0 = YPtrue;
  } else {
    T6 = (P)YOEE(wrt_,o2_);
    if (T6 != YPfalse) {
      T1 = YPfalse;
    } else {
      T5 = FUNSHELL(1,fun_find_319,4);
      findF71 = T5;
      FUNINIT(findF71, 4,findF71,o2_,o1_,wrt_);
      T4 = CALL1(CHKREF(Yobject_parents),wrt_);
      T3 = KCALL1(findF71,T4);
      T2 = T3;
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
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T6 = (P)YOEE(t1_,t2_);
  if (T6 != YPfalse) {
    T5 = CALL2(CHKREF(YOtup),CHKREF(lit_180),t1_);
    T0 = T5;
  } else {
    T4 = CALL3(CHKREF(YobjectL),t1_,t2_,arg_);
    if (T4 != YPfalse) {
      T3 = CALL2(CHKREF(YOtup),CHKREF(lit_179),t1_);
      T1 = T3;
    } else {
      T2 = CALL2(CHKREF(YOtup),CHKREF(lit_178),t2_);
      T1 = T2;
    }
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(fun_loop_322) {
  ARG(idx_, 0);
  ARG(state_, 1);
  P tmpF78;
  P tmpF77;
  P idxF76;
  P cmpF75;
  P cmpAtypF74;
  P m2specF73;
  P m1specF72;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T25 = (P)YOE(idx_,FREEREF(4));
  if (T25 != YPfalse) {
    T0 = state_;
  } else {
    T24 = CALL2(CHKREF(Yfun_spec),FREEREF(0),idx_);
    m1specF72 = T24;
    T23 = CALL2(CHKREF(Yfun_spec),FREEREF(1),idx_);
    m2specF73 = T23;
    T22 = CALL2(CHKREF(YOelt),FREEREF(2),idx_);
    T21 = CALL3(CHKREF(Yorder_specs),m1specF72,m2specF73,T22);
    check_type(T21,CHKREF(YLtupG));
    cmpAtypF74 = T21;
    T20 = CALL2(CHKREF(YOelt),cmpAtypF74,YPint((P)0));
    check_type(T20,CHKREF(YLsymG));
    cmpF75 = T20;
    T19 = (P)YOA(idx_,YPint((P)1));
    check_type(T19,CHKREF(YLintG));
    idxF76 = T19;
    T18 = (P)YOEE(cmpF75,CHKREF(lit_180));
    if (T18 != YPfalse) {
      a1 = state_;
      a2 = idxF76;
      state_ = a1;
      idx_ = a2;
      goto loop;
      T6 = T17;
    } else {
      T16 = (P)YOEE(cmpF75,CHKREF(lit_186));
      T15 = CALL1(CHKREF(Ynot),T16);
      tmpF77 = T15;
      if (tmpF77 != YPfalse) {
        T14 = (P)YOEE(state_,CHKREF(lit_180));
        tmpF78 = T14;
        if (tmpF78 != YPfalse) {
          T12 = tmpF78;
        } else {
          T13 = (P)YOEE(cmpF75,state_);
          T12 = T13;
        }
        T11 = T12;
        T10 = T11;
      } else {
        T10 = YPfalse;
      }
      T9 = T10;
      if (T9 != YPfalse) {
        a1 = cmpF75;
        a2 = idxF76;
        state_ = a1;
        idx_ = a2;
        goto loop;
        T7 = T8;
      } else {
        T7 = CHKREF(lit_186);
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
  P loopF80;
  P arityF79;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T4 = CALL1(CHKREF(YOfun_arity),m1_);
  check_type(T4,CHKREF(YLintG));
  arityF79 = T4;
  T3 = FUNSHELL(1,fun_loop_322,5);
  loopF80 = T3;
  FUNINIT(loopF80, 5,m1_,m2_,args_,loopF80,arityF79);
  T2 = CALL2(loopF80,CHKREF(lit_180),YPint((P)0));
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_insert_324) {
  ARG(osub_, 0);
  ARG(oprev_, 1);
  P indicF81;
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
    indicF81 = T10;
    T9 = (P)YOEE(indicF81,CHKREF(lit_179));
    if (T9 != YPfalse) {
      T8 = CALL1(FREEREF(5),oprev_);
      T2 = T8;
    } else {
      T7 = (P)YOEE(indicF81,CHKREF(lit_178));
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

FUNCODEDEF(fun_check_subsequent_ambiguities_325) {
  ARG(oprev_, 0);
  P tmpF82;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = (P)YOtail(oprev_);
  T11 = CALL1(FREEREF(2),T12);
  T10 = CALL1(CHKREF(Ynot),T11);
  tmpF82 = T10;
  if (tmpF82 != YPfalse) {
    T6 = tmpF82;
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

FUNCODEDEF(fun_loop_326) {
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
    T4 = (P)YOEE(T5,CHKREF(lit_179));
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

FUNCODEDEF(fun_precedes_allQ_327) {
  ARG(l_, 0);
  P loopF83;
  P T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_326,4);
  loopF83 = T2;
  FUNINIT(loopF83, 4,loopF83,FREEREF(2),FREEREF(1),FREEREF(0));
  T1 = CALL1(loopF83,l_);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_loop_328) {
  ARG(l_, 0);
  P t1F85;
  P tmpF84;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = (P)YOEE(l_,Ynil);
  tmpF84 = T6;
  if (tmpF84 != YPfalse) {
    T1 = tmpF84;
  } else {
    T5 = (P)YOtail(l_);
    t1F85 = T5;
    T3 = (P)YOtail(FREEREF(1));
    (P)YOtail_setter(T3,l_);
    (P)YOtail_setter(l_,FREEREF(1));
    a1 = t1F85;
    l_ = a1;
    goto loop;
    T2 = T4;
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_make_ambiguous_329) {
  ARG(headed_list_, 0);
  P loopF86;
  P T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T2 = FUNSHELL(1,fun_loop_328,2);
  loopF86 = T2;
  FUNINIT(loopF86, 2,loopF86,FREEREF(0));
  T1 = (P)YOtail(headed_list_);
  T0 = CALL1(loopF86,T1);
  (P)YOtail_setter(Ynil,headed_list_);
  T5 = (P)YOtail(FREEREF(0));
  T4 = (P)YOpair(FREEREF(1),T5);
  T3 = (P)YOtail_setter(T4,FREEREF(0));
  QRET(T3);
}

FUNCODEDEF(fun_loop_330) {
  ARG(mets_, 0);
  P insertF91;
  P check_subsequent_ambiguitiesF90;
  P precedes_allQF89;
  P make_ambiguousF88;
  P metF87;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T12 = (P)YOEE(mets_,Ynil);
  T11 = CALL1(CHKREF(Ynot),T12);
  if (T11 != YPfalse) {
    T10 = (P)YOhead(mets_);
    check_type(T10,CHKREF(YLmetG));
    metF87 = T10;
    T9 = FUNSHELL(1,fun_make_ambiguous_329,2);
    make_ambiguousF88 = T9;
    T8 = FUNSHELL(1,fun_precedes_allQ_327,3);
    precedes_allQF89 = T8;
    T7 = FUNSHELL(1,fun_check_subsequent_ambiguities_325,4);
    check_subsequent_ambiguitiesF90 = T7;
    T6 = FUNSHELL(1,fun_insert_324,6);
    insertF91 = T6;
    FUNINIT(make_ambiguousF88, 2,FREEREF(0),metF87);
    FUNINIT(precedes_allQF89, 3,FREEREF(2),metF87,FREEREF(1));
    FUNINIT(check_subsequent_ambiguitiesF90, 4,metF87,make_ambiguousF88,precedes_allQF89,FREEREF(0));
    FUNINIT(insertF91, 6,FREEREF(1),metF87,FREEREF(2),make_ambiguousF88,insertF91,check_subsequent_ambiguitiesF90);
    T3 = (P)YOtail(FREEREF(4));
    CALL2(insertF91,FREEREF(4),T3);
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
  P loopF94;
  P aheadF93;
  P oheadF92;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T8 = (P)YOpair(YPfalse,Ynil);
  check_type(T8,CHKREF(YLlstG));
  oheadF92 = T8;
  T7 = (P)YOpair(YPfalse,Ynil);
  check_type(T7,CHKREF(YLlstG));
  aheadF93 = T7;
  T3 = FUNSHELL(1,fun_loop_330,5);
  loopF94 = T3;
  FUNINIT(loopF94, 5,aheadF93,args_,order_mets_,loopF94,oheadF92);
  T2 = CALL1(loopF94,mets_);
  T6 = (P)YOtail(oheadF92);
  T5 = (P)YOtail(aheadF93);
  T4 = CALL2(CHKREF(YOtup),T6,T5);
  T1 = T4;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_loop_332) {
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
    T4 = CALL2(CHKREF(YisaQ),T6,T5);
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
  P loopF96;
  P nF95;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = CALL1(CHKREF(YOfun_arity),met_);
  check_type(T4,CHKREF(YLintG));
  nF95 = T4;
  T3 = FUNSHELL(1,fun_loop_332,4);
  loopF96 = T3;
  FUNINIT(loopF96, 4,loopF96,met_,args_,nF95);
  T2 = CALL1(loopF96,YPint((P)0));
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_col_334) {
  ARG(ms_, 0);
  ARG(ans_, 1);
  P ansF98;
  P mF97;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T9 = (P)YOemptyQ(ms_);
  if (T9 != YPfalse) {
    T0 = ans_;
  } else {
    T8 = (P)YOhead(ms_);
    mF97 = T8;
    T7 = CALL2(CHKREF(Ymet_appQ),mF97,FREEREF(0));
    if (T7 != YPfalse) {
      T6 = (P)YOpair(mF97,ans_);
      T5 = T6;
    } else {
      T5 = ans_;
    }
    ansF98 = T5;
    T4 = (P)YOtail(ms_);
    a1 = ansF98;
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
  P considered_metsF100;
  P colF99;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = FUNSHELL(1,fun_col_334,2);
  colF99 = T5;
  FUNINIT(colF99, 2,args_,colF99);
  T4 = CALL1(CHKREF(YOfun_mets),gf_);
  T3 = KCALL2(colF99,Ynil,T4);
  T2 = T3;
  considered_metsF100 = T2;
  T1 = CALL3(CHKREF(Ysorted_app_mets_1),considered_metsF100,args_,CHKREF(Yorder_mets));
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_col_336) {
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
  P colF101;
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNSHELL(1,fun_col_336,3);
  colF101 = T2;
  FUNINIT(colF101, 3,colF101,args_,n_);
  T1 = CALL3(colF101,YPint((P)0),Ynil,args_);
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

FUNCODEDEF(fun_344) {
  ARG(met_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL2(CHKREF(Yfun_spec),met_,FREEREF(0));
  T0 = (P)YOE(T1,CHKREF(YLanyG));
  QRET(T0);
}

FUNCODEDEF(Ygen_unspecialized_atQ) {
  ARG(pos_, 0);
  ARG(gen_, 1);
  P T2,T1,T0;
  P a1,a2;
loop:
  T2 = FUNFAB(fun_344,1,pos_);
  T1 = (P)YPgen_mets(gen_);
  T0 = CALL2(CHKREF(YOallQ),T2,T1);
  RET(T0);
}

FUNCODEDEF(fun_loop_346) {
  ARG(assocs_, 0);
  P tmpF106;
  P argF105;
  P valF104;
  P vF103;
  P kF102;
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
loop:
  T33 = (P)YOemptyQ(assocs_);
  if (T33 != YPfalse) {
    T32 = (P)YOEE(FREEREF(10),CHKREF(YOgen_cache_classes));
    tmpF106 = T32;
    if (tmpF106 != YPfalse) {
      T31 = BOXVAL(FREEREF(8));
      T30 = (P)YPtraits_forward(T31);
      T29 = T30;
    } else {
      T29 = YPfalse;
    }
    T28 = T29;
    if (T28 != YPfalse) {
      T27 = CALL2(CHKREF(YOelt),FREEREF(2),FREEREF(4));
      argF105 = T27;
      CALL1(CHKREF(Yupdate_instance_for_changed_prototype),argF105);
      T24 = (P)YPtraits_of(argF105);
      BOXVAL(FREEREF(8)) = T24;
      T26 = CALL1(FREEREF(10),FREEREF(9));
      a1 = T26;
      assocs_ = a1;
      goto loop;
      T23 = T25;
      T14 = T23;
    } else {
      T22 = (P)YOA(FREEREF(4),YPint((P)1));
      T21 = CALLN(CHKREF(Ygen_lookup_miss_1),8,FREEREF(7),YPfalse,FREEREF(6),FREEREF(5),T22,FREEREF(3),FREEREF(2),FREEREF(1));
      valF104 = T21;
      T20 = BOXVAL(FREEREF(8));
      T19 = CALL1(FREEREF(10),FREEREF(9));
      T18 = (P)YOpair(valF104,T19);
      T17 = (P)YOpair(T20,T18);
      T16 = CALL2(FREEREF(11),T17,FREEREF(9));
      T15 = T16;
      T14 = T15;
    }
    T0 = T14;
  } else {
    T13 = (P)YOhead(assocs_);
    kF102 = T13;
    T12 = (P)YOtail(assocs_);
    T11 = (P)YOhead(T12);
    vF103 = T11;
    T10 = BOXVAL(FREEREF(8));
    T9 = (P)YOEE(kF102,T10);
    if (T9 != YPfalse) {
      T8 = (P)YOA(FREEREF(4),YPint((P)1));
      T7 = CALLN(CHKREF(Ygen_lookup_miss_1),8,FREEREF(7),vF103,FREEREF(6),FREEREF(5),T8,FREEREF(3),FREEREF(2),FREEREF(1));
      T3 = T7;
    } else {
      T6 = (P)YOtail(assocs_);
      T5 = (P)YOtail(T6);
      a1 = T5;
      assocs_ = a1;
      goto loop;
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss_1_using) {
  ARG(specs_, 0);
  ARG(args_, 1);
  ARG(n_, 2);
  ARG(i_, 3);
  ARG(mets_, 4);
  ARG(met_, 5);
  ARG(cache_, 6);
  ARG(gen_, 7);
  ARG(all_assocs_setter_, 8);
  ARG(all_assocs_, 9);
  ARG(key_, 10);
  P tmpF111;
  P tmpF110;
  P loopF109;
  P cacheF108;
  P tmpF107;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11;
loop:
  key_ = BOXFAB(key_);
  tmpF110 = cache_;
  if (tmpF110 != YPfalse) {
    T17 = (P)YPgen_cache_arg_pos(cache_);
    T16 = (P)YOL(i_,T17);
    T15 = T16;
  } else {
    T15 = YPfalse;
  }
  T14 = T15;
  tmpF111 = T14;
  if (tmpF111 != YPfalse) {
    T12 = tmpF111;
  } else {
    T13 = CALL2(CHKREF(Ygen_unspecialized_atQ),gen_,i_);
    T12 = T13;
  }
  T11 = T12;
  if (T11 != YPfalse) {
    T10 = (P)YOA(i_,YPint((P)1));
    T9 = CALLN(CHKREF(Ygen_lookup_miss_1),8,gen_,cache_,met_,mets_,T10,n_,args_,specs_);
    T1 = T9;
  } else {
    tmpF107 = cache_;
    if (tmpF107 != YPfalse) {
      T7 = tmpF107;
    } else {
      T8 = (P)YPgen_cache(i_,CHKREF(Ynil),CHKREF(Ynil));
      T7 = T8;
    }
    T6 = T7;
    cacheF108 = T6;
    T5 = FUNSHELL(1,fun_loop_346,12);
    loopF109 = T5;
    FUNINIT(loopF109, 12,loopF109,specs_,args_,n_,i_,mets_,met_,gen_,key_,cacheF108,all_assocs_,all_assocs_setter_);
    T4 = CALL1(all_assocs_,cacheF108);
    T3 = KCALL1(loopF109,T4);
    T2 = cacheF108;
    T1 = T2;
  }
  QRET(T1);
}

FUNCODEDEF(Ysingleton_specQ) {
  ARG(x_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YPtraits_of(x_);
  T2 = (P)YPtraits_owner(T3);
  T1 = (P)YOEE(T2,x_);
  T0 = CALL1(CHKREF(Ynot),T1);
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
    T17 = (P)YPtraits_of(slotF112);
    T16 = (P)YOEE(T17,CHKREF(YLslotG_traits));
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

FUNCODEDEF(Ygen_lookup_miss_1) {
  ARG(specs_, 0);
  ARG(args_, 1);
  ARG(n_, 2);
  ARG(i_, 3);
  ARG(mets_, 4);
  ARG(met_, 5);
  ARG(cache_, 6);
  ARG(gen_, 7);
  P tmpF118;
  P specF117;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6,a7,a8;
loop:
  T12 = (P)YOE(i_,n_);
  if (T12 != YPfalse) {
    T11 = CALL3(CHKREF(Ymethod_accessor_offset),gen_,met_,args_);
    tmpF118 = T11;
    if (tmpF118 != YPfalse) {
      T10 = tmpF118;
    } else {
      T10 = mets_;
    }
    T9 = T10;
    T0 = T9;
  } else {
    T8 = CALL2(CHKREF(YOelt),specs_,i_);
    specF117 = T8;
    T7 = CALL1(CHKREF(Ysingleton_specQ),specF117);
    if (T7 != YPfalse) {
      T6 = CALLN(CHKREF(Ygen_lookup_miss_1_using),11,specF117,CHKREF(YOgen_cache_singletons),CHKREF(YOgen_cache_singletons_setter),gen_,cache_,met_,mets_,i_,n_,args_,specs_);
      T2 = T6;
    } else {
      T5 = CALL2(CHKREF(YOelt),args_,i_);
      T4 = (P)YPtraits_of(T5);
      T3 = CALLN(CHKREF(Ygen_lookup_miss_1_using),11,T4,CHKREF(YOgen_cache_classes),CHKREF(YOgen_cache_classes_setter),gen_,cache_,met_,mets_,i_,n_,args_,specs_);
      T2 = T3;
    }
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

INLINE P Ygen_lookup(P gen_,P args_) {
  P cF120;
  P nF119;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T5 = (P)YPgen_sig(gen_);
  T4 = (P)YPsig_arity(T5);
  nF119 = T4;
  T3 = (P)YPfun_cache(gen_);
  cF120 = T3;
  T2 = (P)Ygen_lookup_1(gen_,cF120,YPint((P)0),nF119,args_,args_);
  T1 = T2;
  T0 = T1;
  return T0;
}

INLINE P Yslot_value_at(P object_,P offset_) {
  P slotsF122;
  P valF121;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T11 = (P)YPiu(offset_);
  T10 = (P)YPslot_elt(object_,T11);
  valF121 = T10;
  T9 = (P)YOEE(valF121,CHKREF(Ynul_slot));
  if (T9 != YPfalse) {
    T8 = CALL1(CHKREF(Yobject_slots),object_);
    slotsF122 = T8;
    T7 = CALL2(CHKREF(YOelt),slotsF122,offset_);
    T6 = (P)YPslot_init(T7);
    T5 = CALL1(T6,object_);
    T4 = (P)YPiu(offset_);
    T3 = (P)YPslot_elt_setter(T5,object_,T4);
    T2 = T3;
    T1 = T2;
  } else {
    T1 = valF121;
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
  P nxt_assocsF127;
  P old_assocsF126;
  P vF125;
  P tail_assocsF124;
  P kF123;
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
    kF123 = T22;
    T21 = (P)YPtail(assocs_);
    tail_assocsF124 = T21;
    T20 = (P)YOEE(kF123,key_);
    if (T20 != YPfalse) {
      T19 = (P)YPhead(tail_assocsF124);
      vF125 = T19;
      T18 = (P)YPiu(cache_offset_);
      T17 = (P)YPslot_elt(cache_,T18);
      old_assocsF126 = T17;
      T13 = (P)YOEE(old_assocsF126,assocs_);
      if (T13 != YPfalse) {
      } else {
        T12 = (P)YPtail(tail_assocsF124);
        nxt_assocsF127 = T12;
        T9 = (P)YPiu(cache_offset_);
        (P)YPslot_elt_setter(assocs_,cache_,T9);
        (P)YPtail_setter(old_assocsF126,tail_assocsF124);
        T11 = (P)YPtail(prev_assocs_);
        T10 = (P)YPtail_setter(nxt_assocsF127,T11);
        T8 = T10;
      }
      T16 = (P)YOA(i_,YPint((P)1));
      T15 = (P)YPtail(args_);
      T14 = (P)Ygen_lookup_1(gen_,vF125,T16,n_,T15,all_args_);
      T7 = T14;
      T6 = T7;
      T3 = T6;
    } else {
      T5 = (P)YPtail(tail_assocsF124);
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
  P assocsF131;
  P valF130;
  P assocsF129;
  P argF128;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5,a6;
loop:
  if (cache_ != YPfalse) {
    T36 = (P)YOE(i_,n_);
    if (T36 != YPfalse) {
      T35 = (P)YPtraits_of(cache_);
      T34 = (P)YOEE(T35,CHKREF(YLintG_traits));
      if (T34 != YPfalse) {
        T33 = (P)YOE(n_,YPint((P)1));
        if (T33 != YPfalse) {
          T32 = (P)YPhead(all_args_);
          T31 = (P)Yslot_value_at(T32,cache_);
          T26 = T31;
        } else {
          T30 = (P)YPhead(all_args_);
          T29 = (P)YPtail(all_args_);
          T28 = (P)YPhead(T29);
          T27 = (P)Yslot_value_at_setter(T30,T28,cache_);
          T26 = T27;
        }
        T22 = T26;
      } else {
        T25 = (P)YPhead(cache_);
        T24 = (P)YPtail(cache_);
        T23 = (P)YPPmep_apply(T25,T24,all_args_);
        T22 = T23;
      }
      T3 = T22;
    } else {
      T21 = (P)YPgen_cache_arg_pos(cache_);
      T20 = (P)YOE(i_,T21);
      if (T20 != YPfalse) {
        T19 = (P)YPhead(args_);
        argF128 = T19;
        T18 = (P)YPgen_cache_singletons(cache_);
        assocsF129 = T18;
        T17 = (P)Ygen_lookup_1_using(argF128,assocsF129,assocsF129,YPtrue,CHKREF(YDgen_cache_singletons_offset),gen_,cache_,i_,n_,args_,all_args_);
        T16 = T17;
        valF130 = T16;
        T15 = (P)YOEE(valF130,CHKREF(YDmissed_dispatch));
        if (T15 != YPfalse) {
          T14 = (P)YPgen_cache_classes(cache_);
          assocsF131 = T14;
          T13 = (P)YPtraits_of(argF128);
          T12 = (P)Ygen_lookup_1_using(T13,assocsF131,assocsF131,YPfalse,CHKREF(YDgen_cache_classes_offset),gen_,cache_,i_,n_,args_,all_args_);
          T11 = T12;
          T10 = T11;
        } else {
          T10 = valF130;
        }
        T9 = T10;
        T8 = T9;
        T4 = T8;
      } else {
        T7 = (P)YOA(i_,YPint((P)1));
        T6 = (P)YPtail(args_);
        a1 = gen_;
        a2 = cache_;
        a3 = T7;
        a4 = n_;
        a5 = T6;
        a6 = all_args_;
        gen_ = a1;
        cache_ = a2;
        i_ = a3;
        n_ = a4;
        args_ = a5;
        all_args_ = a6;
        goto loop;
        T4 = T5;
      }
      T3 = T4;
    }
    T0 = T3;
  } else {
    T1 = CALL2(CHKREF(Ygen_lookup_miss),gen_,all_args_);
    (P)YPfun_cache_setter(T1,gen_);
    T2 = (P)Ygen_lookup(gen_,all_args_);
    T0 = T2;
  }
  return T0;
}

FUNCODEDEF(Ychoose_methods) {
  ARG(args_, 0);
  ARG(gen_, 1);
  P ambiguous_metsF134;
  P sorted_metsF133;
  P ord_amb_metsF132;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T12 = CALL2(CHKREF(Ysorted_app_mets),gen_,args_);
  ord_amb_metsF132 = T12;
  T11 = CALL2(CHKREF(YOelt),ord_amb_metsF132,YPint((P)0));
  sorted_metsF133 = T11;
  T10 = CALL2(CHKREF(YOelt),ord_amb_metsF132,YPint((P)1));
  ambiguous_metsF134 = T10;
  T9 = (P)YOlen(ambiguous_metsF134);
  T8 = (P)YOL(YPint((P)0),T9);
  if (T8 != YPfalse) {
    T7 = CALL3(CHKREF(Yerror),CHKREF(lit_220),gen_,args_);
    T3 = T7;
  } else {
    T6 = (P)YOemptyQ(sorted_metsF133);
    if (T6 != YPfalse) {
      T5 = CALL3(CHKREF(Yerror),CHKREF(lit_219),gen_,args_);
      T4 = T5;
    } else {
      T4 = sorted_metsF133;
    }
    T3 = T4;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YmetL) {
  ARG(m2_, 0);
  ARG(m1_, 1);
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T4 = (P)YOEE(m1_,m2_);
  if (T4 != YPfalse) {
    T0 = YPfalse;
  } else {
    T3 = CALL1(CHKREF(YOfun_specs),m1_);
    T2 = CALL1(CHKREF(YOfun_specs),m2_);
    T1 = CALL3(CHKREF(YOall2Q),CHKREF(YisaQ),T3,T2);
    T0 = T1;
  }
  RET(T0);
}

FUNCODEDEF(Ymet_has_singleton_specsQ) {
  ARG(m_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YOfun_specs),m_);
  T0 = CALL2(CHKREF(YOanyQ),CHKREF(Ysingleton_specQ),T1);
  RET(T0);
}

FUNCODEDEF(fun_loop_359) {
  ARG(mets_, 0);
  ARG(res_, 1);
  P singleton_appQF137;
  P tmpF136;
  P mF135;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T12 = (P)YOemptyQ(mets_);
  if (T12 != YPfalse) {
    T0 = res_;
  } else {
    T11 = (P)YOhead(mets_);
    mF135 = T11;
    T10 = CALL1(CHKREF(Ymet_has_singleton_specsQ),mF135);
    tmpF136 = T10;
    if (tmpF136 != YPfalse) {
      T9 = CALL2(CHKREF(YmetL),mF135,FREEREF(0));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T7 = T8;
    singleton_appQF137 = T7;
    if (singleton_appQF137 != YPfalse) {
      T6 = (P)YOpair(mF135,res_);
      T5 = T6;
    } else {
      T5 = res_;
    }
    T4 = (P)YOtail(mets_);
    a1 = T5;
    a2 = T4;
    res_ = a1;
    mets_ = a2;
    goto loop;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(Yfind_app_singleton_mets) {
  ARG(met_, 0);
  ARG(gen_, 1);
  P loopF138;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_loop_359,2);
  loopF138 = T3;
  FUNINIT(loopF138, 2,met_,loopF138);
  T2 = CALL1(CHKREF(YOfun_mets),gen_);
  T1 = KCALL2(loopF138,Ynil,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_361) {
  ARG(m_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(YOfun_specs),m_);
  T0 = CALLN(CHKREF(Ygen_lookup_miss_1),8,FREEREF(4),FREEREF(3),m_,FREEREF(2),YPint((P)0),FREEREF(1),FREEREF(0),T1);
  QRET(T0);
}

FUNCODEDEF(Ygen_lookup_miss) {
  ARG(args_, 0);
  ARG(gen_, 1);
  P app_singleton_metsF144;
  P cacheF143;
  P nF142;
  P specsF141;
  P metF140;
  P metsF139;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T13 = CALL2(CHKREF(Ychoose_methods),gen_,args_);
  metsF139 = T13;
  T12 = (P)YOhead(metsF139);
  metF140 = T12;
  T11 = CALL1(CHKREF(YOfun_specs),metF140);
  specsF141 = T11;
  T10 = CALL1(CHKREF(YOfun_arity),gen_);
  nF142 = T10;
  T9 = (P)YPfun_cache(gen_);
  T8 = CALLN(CHKREF(Ygen_lookup_miss_1),8,gen_,T9,metF140,metsF139,YPint((P)0),nF142,args_,specsF141);
  cacheF143 = T8;
  T7 = CALL2(CHKREF(Yfind_app_singleton_mets),gen_,metF140);
  app_singleton_metsF144 = T7;
  T6 = FUNFAB(fun_361,5,args_,nF142,metsF139,cacheF143,gen_);
  CALL2(CHKREF(YOdo),T6,app_singleton_metsF144);
  T5 = cacheF143;
  T4 = T5;
  T3 = T4;
  T2 = T3;
  T1 = T2;
  T0 = T1;
  QRET(T0);
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
    T1 = CALL1(CHKREF(Yerror),CHKREF(lit_232));
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

FUNCODEDEF(Yobject_traits) {
  ARG(x_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPtraits_of(x_);
  QRET(T0);
}

FUNCODEDEF(fun_remove_next_380) {
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

FUNCODEDEF(fun_unconstrained_object_in_parents_381) {
  ARG(o_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = CALL1(CHKREF(Yobject_direct_parents),o_);
  T0 = CALL2(CHKREF(YOanyQ),FREEREF(0),T1);
  QRET(T0);
}

FUNCODEDEF(fun_p_unconstrained_inQ_382) {
  ARG(l_, 0);
  P tmpF145;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = (P)YOhead(l_);
  T5 = (P)YOEE(T6,FREEREF(0));
  tmpF145 = T5;
  if (tmpF145 != YPfalse) {
    T1 = tmpF145;
  } else {
    T4 = (P)YOtail(l_);
    T3 = CALL2(CHKREF(YOmemQ),T4,FREEREF(0));
    T2 = CALL1(CHKREF(Ynot),T3);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_p_in_and_unconstrained_inQ_383) {
  ARG(l_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YOhead(l_);
  T0 = (P)YOEE(T1,FREEREF(0));
  QRET(T0);
}

FUNCODEDEF(fun_unconstrained_proto_384) {
  ARG(p_, 0);
  P tmpF149;
  P tmpF148;
  P p_unconstrained_inQF147;
  P p_in_and_unconstrained_inQF146;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = FUNSHELL(0,fun_p_in_and_unconstrained_inQ_383,1);
  p_in_and_unconstrained_inQF146 = T8;
  T7 = FUNSHELL(0,fun_p_unconstrained_inQ_382,1);
  p_unconstrained_inQF147 = T7;
  FUNINIT(p_in_and_unconstrained_inQF146, 1,p_);
  FUNINIT(p_unconstrained_inQF147, 1,p_);
  T6 = CALL2(CHKREF(YOanyQ),p_in_and_unconstrained_inQF146,FREEREF(0));
  tmpF148 = T6;
  if (tmpF148 != YPfalse) {
    T5 = CALL2(CHKREF(YOallQ),p_unconstrained_inQF147,FREEREF(0));
    tmpF149 = T5;
    if (tmpF149 != YPfalse) {
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

FUNCODEDEF(fun_merge_lists_385) {
  ARG(remaining_lists_, 0);
  ARG(partial_cpl_, 1);
  P remove_nextF153;
  P nextF152;
  P unconstrained_object_in_parentsF151;
  P unconstrained_protoF150;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T14 = CALL2(CHKREF(YOallQ),CHKREF(YOOemptyQ),remaining_lists_);
  if (T14 != YPfalse) {
    T13 = CALL1(CHKREF(YOrevX),partial_cpl_);
    T0 = T13;
  } else {
    T12 = FUNSHELL(0,fun_unconstrained_proto_384,1);
    unconstrained_protoF150 = T12;
    T11 = FUNSHELL(0,fun_unconstrained_object_in_parents_381,1);
    unconstrained_object_in_parentsF151 = T11;
    FUNINIT(unconstrained_protoF150, 1,remaining_lists_);
    FUNINIT(unconstrained_object_in_parentsF151, 1,unconstrained_protoF150);
    T10 = CALL2(CHKREF(YOanyQ),unconstrained_object_in_parentsF151,partial_cpl_);
    nextF152 = T10;
    if (nextF152 != YPfalse) {
      T9 = FUNSHELL(0,fun_remove_next_380,1);
      remove_nextF153 = T9;
      FUNINIT(remove_nextF153, 1,nextF152);
      T8 = (P)YOpair(nextF152,partial_cpl_);
      T7 = CALL2(CHKREF(YOmap),remove_nextF153,remaining_lists_);
      a1 = T8;
      a2 = T7;
      partial_cpl_ = a1;
      remaining_lists_ = a2;
      goto loop;
      T5 = T6;
      T3 = T5;
    } else {
      T4 = CALL1(CHKREF(Yerror),CHKREF(lit_252));
      T3 = T4;
    }
    T2 = T3;
    T1 = T2;
    T0 = T1;
  }
  QRET(T0);
}

FUNCODEDEF(Ytraits_ordered_parents) {
  ARG(o_, 0);
  P tmpF157;
  P tmpF156;
  P parentsF155;
  P merge_listsF154;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1;
loop:
  T19 = FUNSHELL(1,fun_merge_lists_385,1);
  merge_listsF154 = T19;
  FUNINIT(merge_listsF154, 1,merge_listsF154);
  T18 = (P)YPtraits_direct_parents(o_);
  parentsF155 = T18;
  T17 = (P)YOemptyQ(parentsF155);
  tmpF156 = T17;
  if (tmpF156 != YPfalse) {
    T9 = tmpF156;
  } else {
    T16 = (P)YOlen(parentsF155);
    T15 = (P)YOE(T16,YPint((P)1));
    tmpF157 = T15;
    if (tmpF157 != YPfalse) {
      T14 = CALL2(CHKREF(YOelt),parentsF155,YPint((P)0));
      T13 = (P)YPtraits_owner(o_);
      T12 = (P)YOEE(T14,T13);
      T11 = T12;
    } else {
      T11 = YPfalse;
    }
    T10 = T11;
    T9 = T10;
  }
  T8 = T9;
  if (T8 != YPfalse) {
    T2 = parentsF155;
  } else {
    T7 = (P)YPtraits_owner(o_);
    T6 = CALL1(CHKREF(YOlst),T7);
    T5 = CALL2(CHKREF(YOmap),CHKREF(Yobject_parents),parentsF155);
    T4 = (P)YOadd(T5,parentsF155);
    T3 = CALL2(merge_listsF154,T6,T4);
    T2 = T3;
  }
  T1 = T2;
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(Ytraits_ordered_slots) {
  ARG(x_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YPtraits_parents(x_);
  T2 = CALL2(CHKREF(YOmap),CHKREF(Yobject_direct_slots),T3);
  T1 = CALL3(CHKREF(YOreduce),CHKREF(YOcat2),Ynil,T2);
  T0 = CALL1(CHKREF(YOdel_dups),T1);
  RET(T0);
}

FUNCODEDEF(fun_388) {
  ARG(parent_, 0);
  P parent_traitsF158;
  P T4,T3,T2,T1,T0;
  P a1;
loop:
  T4 = (P)YPobject_traits(parent_);
  parent_traitsF158 = T4;
  T3 = (P)YPtraits_direct_children(parent_traitsF158);
  T2 = (P)YOadd_new(T3,FREEREF(0));
  T1 = (P)YPtraits_direct_children_setter(T2,parent_traitsF158);
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(Ymake_traits) {
  ARG(owner_, 0);
  ARG(slots_, 1);
  ARG(parents_, 2);
  P xF159;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T10 = (P)YPtraits(owner_,parents_,slots_,Ynil,Ynil,Ynil,Ynil,Ynil,YPfalse);
  xF159 = T10;
  (P)YPobject_traits_setter(xF159,owner_);
  T5 = (P)YPtraits_direct_parents(xF159);
  T4 = (P)YOemptyQ(T5);
  if (T4 != YPfalse) {
    T3 = (P)YPtraits_owner(xF159);
    T2 = CALL1(CHKREF(YOlst),T3);
    T1 = (P)YPtraits_direct_parents_setter(T2,xF159);
  } else {
  }
  T7 = FUNFAB(fun_388,1,xF159);
  T6 = (P)YPtraits_direct_parents(xF159);
  CALL2(CHKREF(YOdo),T7,T6);
  T8 = CALL1(CHKREF(Ytraits_ordered_parents),xF159);
  (P)YPtraits_parents_setter(T8,xF159);
  T9 = CALL1(CHKREF(Ytraits_ordered_slots),xF159);
  (P)YPtraits_slots_setter(T9,xF159);
  T0 = xF159;
  RET(T0);
}

FUNCODEDEF(Yobject_direct_slots) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPtraits_of(x_);
  T0 = (P)YPtraits_direct_slots(T1);
  QRET(T0);
}

FUNCODEDEF(Yobject_direct_parents) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPtraits_of(x_);
  T0 = (P)YPtraits_direct_parents(T1);
  QRET(T0);
}

FUNCODEDEF(Yobject_slots) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPtraits_of(x_);
  T0 = (P)YPtraits_slots(T1);
  QRET(T0);
}

FUNCODEDEF(Yobject_parents) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPtraits_of(x_);
  T0 = (P)YPtraits_parents(T1);
  QRET(T0);
}

FUNCODEDEF(Yobject_direct_children) {
  ARG(x_, 0);
  P T1,T0;
  P a1;
loop:
  T1 = (P)YPtraits_of(x_);
  T0 = (P)YPtraits_direct_children(T1);
  QRET(T0);
}

FUNCODEDEF(Yensure_fresh_object) {
  ARG(x_, 0);
  P T3,T2,T1,T0;
  P a1;
loop:
  T3 = (P)YPtraits_of(x_);
  T2 = (P)YPtraits_forward(T3);
  if (T2 != YPfalse) {
    T1 = CALL1(CHKREF(Yupdate_instance_for_changed_prototype),x_);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_loop_396) {
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
  P loopF160;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_loop_396,2);
  loopF160 = T3;
  FUNINIT(loopF160, 2,loopF160,getter_);
  T2 = CALL1(CHKREF(Yobject_slots),object_);
  T1 = KCALL2(loopF160,YPint((P)0),T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(Yslot_value) {
  ARG(getter_, 0);
  ARG(object_, 1);
  P offsetF161;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  CALL1(CHKREF(Yensure_fresh_object),object_);
  T5 = CALL2(CHKREF(Yslot_offset),object_,getter_);
  offsetF161 = T5;
  T4 = (P)YOE(offsetF161,CHKREF(YDgetter_not_found));
  if (T4 != YPfalse) {
    T3 = CALL3(CHKREF(Yerror),CHKREF(lit_271),getter_,object_);
    T1 = T3;
  } else {
    T2 = (P)Yslot_value_at(object_,offsetF161);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(Yslot_value_setter) {
  ARG(getter_, 0);
  ARG(object_, 1);
  ARG(z_, 2);
  P offsetF162;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  CALL1(CHKREF(Yensure_fresh_object),object_);
  T5 = CALL2(CHKREF(Yslot_offset),object_,getter_);
  offsetF162 = T5;
  T4 = (P)YOE(offsetF162,CHKREF(YDgetter_not_found));
  if (T4 != YPfalse) {
    T3 = CALL3(CHKREF(Yerror),CHKREF(lit_273),getter_,object_);
    T1 = T3;
  } else {
    T2 = (P)Yslot_value_at_setter(z_,object_,offsetF162);
    T1 = T2;
  }
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(Yensure_traits) {
  ARG(x_, 0);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = (P)YPobject_traits(x_);
  T7 = (P)YPtraits_owner(T8);
  T6 = (P)YOEE(T7,x_);
  T5 = CALL1(CHKREF(Ynot),T6);
  if (T5 != YPfalse) {
    T4 = (P)YPobject_traits(x_);
    T3 = (P)YPtraits_owner(T4);
    T2 = CALL1(CHKREF(YOlst),T3);
    T1 = CALL3(CHKREF(Ymake_traits),T2,Ynil,x_);
    T0 = (P)YPobject_traits_setter(T1,x_);
  } else {
  }
  QRET(x_);
}

FUNCODEDEF(fun_loop_401) {
  ARG(vals_, 0);
  ARG(getters_, 1);
  P tmpF163;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T10 = (P)YOEE(getters_,Ynil);
  tmpF163 = T10;
  if (tmpF163 != YPfalse) {
    T8 = tmpF163;
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

FUNCODEDEF(fun_loop_parents_402) {
  ARG(parents_, 0);
  P offsetF166;
  P getterF165;
  P parentF164;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T15 = (P)YOemptyQ(parents_);
  T14 = CALL1(CHKREF(Ynot),T15);
  if (T14 != YPfalse) {
    T13 = (P)YOhead(parents_);
    parentF164 = T13;
    T12 = (P)YPslot_getter(FREEREF(0));
    getterF165 = T12;
    T11 = CALL2(CHKREF(Yslot_offset),parentF164,getterF165);
    offsetF166 = T11;
    T10 = (P)YOE(offsetF166,CHKREF(YDgetter_not_found));
    if (T10 != YPfalse) {
      T9 = (P)YOtail(parents_);
      a1 = T9;
      parents_ = a1;
      goto loop;
      T4 = T8;
    } else {
      T5 = (P)Yslot_value_at(parentF164,offsetF166);
      CALL3(CHKREF(Yslot_value_setter),T5,FREEREF(3),getterF165);
      T7 = (P)YOtail(FREEREF(1));
      T6 = KCALL1(FREEREF(2),T7);
      T4 = T6;
    }
    T3 = T4;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(fun_loop_slots_403) {
  ARG(slots_, 0);
  P loop_parentsF168;
  P slotF167;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = (P)YOemptyQ(slots_);
  T7 = CALL1(CHKREF(Ynot),T8);
  if (T7 != YPfalse) {
    T6 = (P)YOhead(slots_);
    slotF167 = T6;
    T5 = FUNSHELL(1,fun_loop_parents_402,5);
    loop_parentsF168 = T5;
    FUNINIT(loop_parentsF168, 5,slotF167,slots_,FREEREF(1),FREEREF(0),loop_parentsF168);
    T4 = (P)YPtraits_parents(FREEREF(2));
    T3 = KCALL1(loop_parentsF168,T4);
    T2 = T3;
    T1 = T2;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

FUNCODEDEF(YPisa) {
  ARG(vals_, 0);
  ARG(getters_, 1);
  ARG(parents_, 2);
  P traitsF174;
  P parentF173;
  P loop_slotsF172;
  P traitsF171;
  P loopF170;
  P objectF169;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T22 = (P)YPmake_object();
  objectF169 = T22;
  T19 = (P)YOlen(parents_);
  T18 = (P)YOE(T19,YPint((P)1));
  if (T18 != YPfalse) {
    T17 = (P)YOhead(parents_);
    parentF173 = T17;
    T16 = CALL1(CHKREF(Yensure_traits),parentF173);
    T15 = (P)YPobject_traits(T16);
    traitsF174 = T15;
    (P)YPobject_traits_setter(traitsF174,objectF169);
    T14 = (P)YPtraits_slots(traitsF174);
    T13 = (P)YPPlen(T14);
    T12 = (P)YPadjust_object_values_size(objectF169,T13,parentF173);
    T11 = T12;
    T10 = T11;
  } else {
    T9 = CALL2(CHKREF(YOmap),CHKREF(Yensure_traits),parents_);
    T8 = CALL3(CHKREF(Ymake_traits),T9,Ynil,objectF169);
    traitsF171 = T8;
    T3 = (P)YPtraits_slots(traitsF171);
    T2 = (P)YPPlen(T3);
    (P)YPinstall_object_values(objectF169,T2);
    T7 = FUNSHELL(1,fun_loop_slots_403,3);
    loop_slotsF172 = T7;
    FUNINIT(loop_slotsF172, 3,objectF169,loop_slotsF172,traitsF171);
    T6 = (P)YPtraits_slots(traitsF171);
    T5 = KCALL1(loop_slotsF172,T6);
    T4 = T5;
    T1 = T4;
  }
  T21 = FUNSHELL(1,fun_loop_401,2);
  loopF170 = T21;
  FUNINIT(loopF170, 2,loopF170,objectF169);
  T20 = KCALL2(loopF170,getters_,vals_);
  T0 = objectF169;
  QRET(T0);
}

FUNCODEDEF(fun_loop_405) {
  ARG(mets_, 0);
  P metF175;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T9 = (P)YOemptyQ(mets_);
  if (T9 != YPfalse) {
    T8 = CALL1(CHKREF(Yerror),CHKREF(lit_281));
    T0 = T8;
  } else {
    T7 = (P)YOhead(mets_);
    metF175 = T7;
    T6 = CALL2(CHKREF(Yfun_spec),metF175,YPint((P)0));
    T5 = (P)YOEE(T6,FREEREF(1));
    if (T5 != YPfalse) {
      T2 = metF175;
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
  P loopF176;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  T3 = FUNSHELL(1,fun_loop_405,2);
  loopF176 = T3;
  FUNINIT(loopF176, 2,loopF176,owner_);
  T2 = CALL1(CHKREF(YOfun_mets),getter_);
  T1 = KCALL1(loopF176,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_loop_407) {
  ARG(mets_, 0);
  P tmpF178;
  P metF177;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T13 = (P)YOemptyQ(mets_);
  if (T13 != YPfalse) {
    T12 = CALL1(CHKREF(Yerror),CHKREF(lit_285));
    T0 = T12;
  } else {
    T11 = (P)YOhead(mets_);
    metF177 = T11;
    T10 = CALL2(CHKREF(Yfun_spec),metF177,YPint((P)1));
    T9 = (P)YOEE(T10,FREEREF(1));
    tmpF178 = T9;
    if (tmpF178 != YPfalse) {
      T8 = CALL2(CHKREF(Yfun_spec),metF177,YPint((P)0));
      T7 = (P)YOEE(T8,FREEREF(2));
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    if (T5 != YPfalse) {
      T2 = metF177;
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
  P loopF179;
  P T3,T2,T1,T0;
  P a1,a2,a3;
loop:
  T3 = FUNSHELL(1,fun_loop_407,3);
  loopF179 = T3;
  FUNINIT(loopF179, 3,loopF179,owner_,type_);
  T2 = CALL1(CHKREF(YOfun_mets),zetter_);
  T1 = KCALL1(loopF179,T2);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(fun_409) {
  ARG(g_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPfun_cache_setter(YPfalse,g_);
  QRET(T0);
}

FUNCODEDEF(Yforward_traits) {
  ARG(x_, 0);
  P new_traitsF181;
  P old_traitsF180;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = (P)YPobject_traits(x_);
  old_traitsF180 = T6;
  T5 = (P)YPclone(old_traitsF180);
  new_traitsF181 = T5;
  T3 = fun_409;
  T2 = (P)YPtraits_gens(old_traitsF180);
  CALL2(CHKREF(YOdo),T3,T2);
  (P)YPtraits_forward_setter(new_traitsF181,old_traitsF180);
  T4 = (P)YPobject_traits_setter(new_traitsF181,x_);
  T1 = T4;
  T0 = T1;
  QRET(T0);
}

FUNCODEDEF(fun_visit_411) {
  ARG(x_, 0);
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T8 = BOXVAL(FREEREF(2));
  T7 = CALL2(CHKREF(YOmemQ),T8,x_);
  T6 = CALL1(CHKREF(Ynot),T7);
  if (T6 != YPfalse) {
    T2 = BOXVAL(FREEREF(2));
    T1 = (P)YOadd(T2,x_);
    BOXVAL(FREEREF(2)) = T1;
    CALL1(FREEREF(1),x_);
    T5 = (P)YPobject_traits(x_);
    T4 = (P)YPtraits_direct_children(T5);
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
  P visitF183;
  P visitedF182;
  P T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  visitedF182 = Ynil;
  visitedF182 = BOXFAB(visitedF182);
  T4 = FUNSHELL(0,fun_visit_411,3);
  visitF183 = T4;
  FUNINIT(visitF183, 3,visitF183,f_,visitedF182);
  T3 = KCALL1(visitF183,x_);
  T2 = T3;
  T0 = T2;
  QRET(T0);
}

FUNCODEDEF(fun_413) {
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
  P setter_metF187;
  P getter_metF186;
  P slotF185;
  P traitsF184;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4,a5;
loop:
  T2 = CALL1(CHKREF(Ysingleton_specQ),owner_);
  if (T2 != YPfalse) {
    T1 = CALL1(CHKREF(Yensure_traits),owner_);
  } else {
    T0 = CALL2(CHKREF(YOdo_children),CHKREF(Yforward_traits),owner_);
  }
  T29 = (P)YPobject_traits(owner_);
  traitsF184 = T29;
  T28 = (P)YPpair(CHKREF(YLslotG),Ynil);
  T27 = (P)YPpair(CHKREF(Yslot_init),Ynil);
  T26 = (P)YPpair(CHKREF(Yslot_type),T27);
  T25 = (P)YPpair(CHKREF(Yslot_setter),T26);
  T24 = (P)YPpair(CHKREF(Yslot_getter),T25);
  T23 = (P)YPpair(CHKREF(Yslot_owner),T24);
  T22 = (P)YPpair(init_,Ynil);
  T21 = (P)YPpair(type_,T22);
  T20 = (P)YPpair(setter_,T21);
  T19 = (P)YPpair(getter_,T20);
  T18 = (P)YPpair(owner_,T19);
  T17 = CALL3(CHKREF(YPisa),T28,T23,T18);
  slotF185 = T17;
  T16 = CALL2(CHKREF(Yfind_getter),owner_,getter_);
  getter_metF186 = T16;
  T15 = CALL3(CHKREF(Yfind_setter),owner_,type_,setter_);
  setter_metF187 = T15;
  (P)YPmet_env_setter(slotF185,getter_metF186);
  (P)YPmet_env_setter(slotF185,setter_metF187);
  T9 = (P)YPtraits_direct_slots(traitsF184);
  T8 = CALL1(CHKREF(YOlst),slotF185);
  T7 = CALL2(CHKREF(YOcat2),T9,T8);
  (P)YPtraits_direct_slots_setter(T7,traitsF184);
  T10 = CALL1(CHKREF(Ytraits_ordered_slots),traitsF184);
  (P)YPtraits_slots_setter(T10,traitsF184);
  T12 = fun_413;
  T11 = (P)YPtraits_slots(traitsF184);
  CALL2(CHKREF(YOdo),T12,T11);
  T14 = CALL1(CHKREF(Yobject_slots),owner_);
  T13 = (P)YPPlen(T14);
  (P)YPadjust_object_values_size(owner_,T13,owner_);
  T6 = slotF185;
  T5 = T6;
  T4 = T5;
  T3 = T4;
  QRET(T3);
}

FUNCODEDEF(fun_loop_old_slots_415) {
  ARG(old_offset_, 0);
  ARG(old_slots_, 1);
  P new_offsetF190;
  P getterF189;
  P old_slotF188;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
loop:
  T15 = (P)YOemptyQ(old_slots_);
  T14 = CALL1(CHKREF(Ynot),T15);
  if (T14 != YPfalse) {
    T13 = (P)YOhead(old_slots_);
    old_slotF188 = T13;
    T12 = (P)YPslot_getter(old_slotF188);
    getterF189 = T12;
    T11 = CALL2(CHKREF(Yslot_offset),FREEREF(0),getterF189);
    new_offsetF190 = T11;
    T10 = (P)YOE(new_offsetF190,CHKREF(YDgetter_not_found));
    T9 = CALL1(CHKREF(Ynot),T10);
    if (T9 != YPfalse) {
      T5 = (P)Yslot_value_at(FREEREF(2),old_offset_);
      (P)Yslot_value_at_setter(T5,FREEREF(0),new_offsetF190);
      T8 = (P)YOtail(old_slots_);
      T7 = (P)YOA(old_offset_,YPint((P)1));
      a1 = T8;
      a2 = T7;
      old_slots_ = a1;
      old_offset_ = a2;
      goto loop;
      T4 = T6;
    } else {
      T4 = YPfalse;
    }
    T3 = T4;
    T2 = T3;
    T1 = T2;
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  QRET(T0);
}

P YPupdate_instance_for_changed_prototype(P new_object_) {
  P loop_old_slotsF194;
  P old_objectF193;
  P new_traitsF192;
  P old_traitsF191;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T11 = (P)YPtraits_of(new_object_);
  old_traitsF191 = T11;
  T10 = (P)YPtraits_forward(old_traitsF191);
  new_traitsF192 = T10;
  T9 = (P)YPmake_object();
  old_objectF193 = T9;
  T3 = (P)YPobject_values(new_object_);
  (P)YPobject_values_setter(T3,old_objectF193);
  T5 = (P)YPtraits_slots(new_traitsF192);
  T4 = (P)YPPlen(T5);
  (P)YPinstall_object_values(new_object_,T4);
  (P)YPobject_traits_setter(new_traitsF192,new_object_);
  T8 = FUNSHELL(1,fun_loop_old_slots_415,3);
  loop_old_slotsF194 = T8;
  FUNINIT(loop_old_slotsF194, 3,new_object_,loop_old_slotsF194,old_objectF193);
  T7 = (P)YPtraits_slots(old_traitsF191);
  T6 = KCALL2(loop_old_slotsF194,T7,YPint((P)0));
  T2 = new_object_;
  T1 = T2;
  T0 = T1;
  return T0;
}

FUNCODEDEF(Yupdate_instance_for_changed_prototype) {
  ARG(object_, 0);
  P T0;
  P a1;
loop:
  T0 = (P)YPupdate_instance_for_changed_prototype(object_);
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

FUNCODEDEF(fun_419) {
  ARG(x_, 0);
  P a1;
loop:
  QRET(CHKREF(YLanyG));
}

FUNCODEDEF(Ygen_from_met) {
  ARG(x_, 0);
  P specsF195;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
loop:
  T6 = fun_419;
  T5 = CALL1(CHKREF(YOfun_specs),x_);
  T4 = CALL2(CHKREF(YOmap),T6,T5);
  specsF195 = T4;
  T3 = CALL1(CHKREF(Yfun_name),x_);
  T2 = CALL1(CHKREF(YOfun_naryQ),x_);
  T1 = CALLN(CHKREF(Yfab_gen),5,T3,Ynil,specsF195,T2,Ynil);
  T0 = T1;
  RET(T0);
}

FUNCODEDEF(YPdefine_method) {
  ARG(met_, 0);
  ARG(gen_, 1);
  P tmpF196;
  P T3,T2,T1,T0;
  P a1,a2;
loop:
  tmpF196 = gen_;
  if (tmpF196 != YPfalse) {
    T2 = tmpF196;
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
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  YPfalse = (P)0;
  regsym(&YPfalse,"boot","%false");
  YPtrue = (P)1;
  regsym(&YPtrue,"boot","%true");
  YPcheck_typesQ = (P)0;
  regsym(&YPcheck_typesQ,"boot","%check-types?");
  YPTused_symbols_too_earlyT = (P)0;
  regsym(&YPTused_symbols_too_earlyT,"boot","%*used-symbols-too-early*");
  YPtraits_size = (P)9;
  regsym(&YPtraits_size,"boot","%traits-size");
  YPtraits_owner_offset = (P)0;
  regsym(&YPtraits_owner_offset,"boot","%traits-owner-offset");
  T0 = (P)YPobject_shell();
  YLanyG = T0;
  regsym(&YLanyG,"boot","<any>");
  T1 = (P)YPobject_shell();
  Ynul = T1;
  regsym(&Ynul,"boot","nul");
  T2 = (P)YPobject_shell();
  Ynul_slot = T2;
  regsym(&Ynul_slot,"boot","nul-slot");
  T3 = (P)YPobject_shell();
  YLlogG = T3;
  regsym(&YLlogG,"boot","<log>");
  T4 = (P)YPobject_shell();
  YPtrue = T4;
  regsym(&YPtrue,"boot","%true");
  T5 = (P)YPobject_shell();
  YPfalse = T5;
  regsym(&YPfalse,"boot","%false");
  T6 = (P)YPobject_shell();
  YLchrG = T6;
  regsym(&YLchrG,"boot","<chr>");
  T9 = (P)YPobject_shell();
  T8 = YLnumG = T9;
  regsym(&YLnumG,"boot","<num>");
  T7 = T8;
  return T7;
}

P Y___main_2___() {
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
loop:
  T0 = (P)YPobject_shell();
  YLintG = T0;
  regsym(&YLintG,"boot","<int>");
  T1 = (P)YPobject_shell();
  YLfloG = T1;
  regsym(&YLfloG,"boot","<flo>");
  T2 = (P)YPobject_shell();
  YLlocG = T2;
  regsym(&YLlocG,"boot","<loc>");
  T3 = (P)YPobject_shell();
  YLcolG = T3;
  regsym(&YLcolG,"boot","<col>");
  T4 = (P)YPobject_shell();
  YLseqG = T4;
  regsym(&YLseqG,"boot","<seq>");
  T5 = (P)YPobject_shell();
  YLlstG = T5;
  regsym(&YLlstG,"boot","<lst>");
  T6 = (P)YPobject_shell();
  Ynil = T6;
  regsym(&Ynil,"boot","nil");
  T7 = (P)YPobject_shell();
  YLflatG = T7;
  regsym(&YLflatG,"boot","<flat>");
  T8 = (P)YPobject_shell();
  YLvecG = T8;
  regsym(&YLvecG,"boot","<vec>");
  T9 = (P)YPobject_shell();
  YLstrG = T9;
  regsym(&YLstrG,"boot","<str>");
  T10 = (P)YPobject_shell();
  YLsymG = T10;
  regsym(&YLsymG,"boot","<sym>");
  T11 = (P)YPobject_shell();
  YLtraitsG = T11;
  regsym(&YLtraitsG,"boot","<traits>");
  T12 = (P)YPobject_shell();
  YLslotG = T12;
  regsym(&YLslotG,"boot","<slot>");
  T13 = (P)YPobject_shell();
  YLgen_cacheG = T13;
  regsym(&YLgen_cacheG,"boot","<gen-cache>");
  T14 = (P)YPobject_shell();
  YLsigG = T14;
  regsym(&YLsigG,"boot","<sig>");
  T15 = (P)YPobject_shell();
  YLfunG = T15;
  regsym(&YLfunG,"boot","<fun>");
  T16 = (P)YPobject_shell();
  YLmetG = T16;
  regsym(&YLmetG,"boot","<met>");
  T17 = (P)YPobject_shell();
  YLgenG = T17;
  regsym(&YLgenG,"boot","<gen>");
  YPcheck_typesQ = YPfalse;
  regsym(&YPcheck_typesQ,"boot","%check-types?");
  YPsymbols_readyQ = YPfalse;
  regsym(&YPsymbols_readyQ,"boot","%symbols-ready?");
  YPTstart_running_atT = CHKREF(Ynil);
  regsym(&YPTstart_running_atT,"boot","%*start-running-at*");
  T18 = YPfalse;
  return T18;
}

P Y___main_3___() {
  P T4,T3,T2,T1,T0;
loop:
  (P)YPdefine_parent(CHKREF(YLanyG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(Ynul),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(Ynul_slot),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLlogG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YPtrue),CHKREF(YLlogG));
  (P)YPdefine_parent(CHKREF(YPfalse),CHKREF(YLlogG));
  (P)YPdefine_parent(CHKREF(YLchrG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLnumG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLintG),CHKREF(YLnumG));
  (P)YPdefine_parent(CHKREF(YLfloG),CHKREF(YLnumG));
  (P)YPdefine_parent(CHKREF(YLlocG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLcolG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLseqG),CHKREF(YLcolG));
  (P)YPdefine_parent(CHKREF(YLlstG),CHKREF(YLseqG));
  (P)YPdefine_parent(CHKREF(Ynil),CHKREF(YLlstG));
  (P)YPdefine_parent(CHKREF(YLflatG),CHKREF(YLseqG));
  (P)YPdefine_parent(CHKREF(YLvecG),CHKREF(YLflatG));
  (P)YPdefine_parent(CHKREF(YLstrG),CHKREF(YLflatG));
  (P)YPdefine_parent(CHKREF(YLsymG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLtraitsG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLslotG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLgen_cacheG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLsigG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLfunG),CHKREF(YLanyG));
  (P)YPdefine_parent(CHKREF(YLmetG),CHKREF(YLfunG));
  (P)YPdefine_parent(CHKREF(YLgenG),CHKREF(YLfunG));
  T1 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T0 = (P)YPobject_traits(CHKREF(YLanyG));
  (P)YPtraits_parents_setter(T1,T0);
  T2 = (P)YPobject_traits(CHKREF(YLtraitsG));
  YLtraitsG_traits = T2;
  regsym(&YLtraitsG_traits,"boot","<traits>-traits");
  (P)YPpatch_parent(CHKREF(YLanyG));
  (P)YPpatch_parent(CHKREF(Ynul));
  (P)YPpatch_parent(CHKREF(Ynul_slot));
  (P)YPpatch_parent(CHKREF(YLlogG));
  (P)YPpatch_parent(CHKREF(YPtrue));
  (P)YPpatch_parent(CHKREF(YPfalse));
  (P)YPpatch_parent(CHKREF(YLchrG));
  (P)YPpatch_parent(CHKREF(YLnumG));
  (P)YPpatch_parent(CHKREF(YLintG));
  (P)YPpatch_parent(CHKREF(YLfloG));
  (P)YPpatch_parent(CHKREF(YLlocG));
  (P)YPpatch_parent(CHKREF(YLcolG));
  (P)YPpatch_parent(CHKREF(YLseqG));
  (P)YPpatch_parent(CHKREF(YLlstG));
  (P)YPpatch_parent(CHKREF(Ynil));
  (P)YPpatch_parent(CHKREF(YLflatG));
  (P)YPpatch_parent(CHKREF(YLvecG));
  (P)YPpatch_parent(CHKREF(YLstrG));
  (P)YPpatch_parent(CHKREF(YLsymG));
  (P)YPpatch_parent(CHKREF(YLtraitsG));
  (P)YPpatch_parent(CHKREF(YLslotG));
  (P)YPpatch_parent(CHKREF(YLgen_cacheG));
  T4 = (P)YPpatch_parent(CHKREF(YLsigG));
  T3 = T4;
  return T3;
}

P Y___main_4___() {
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  (P)YPpatch_parent(CHKREF(YLfunG));
  (P)YPpatch_parent(CHKREF(YLmetG));
  (P)YPpatch_parent(CHKREF(YLgenG));
  T0 = (P)YPraw_alloc((P)4);
  YDdirect_object_traits = T0;
  regsym(&YDdirect_object_traits,"boot","$direct-object-traits");
  YDtag_msk = (P)3;
  regsym(&YDtag_msk,"boot","$tag-msk");
  YDtag_len = (P)2;
  regsym(&YDtag_len,"boot","$tag-len");
  T1 = (P)YPobject_traits(CHKREF(YLintG));
  (P)YPelt_setter(T1,CHKREF(YDdirect_object_traits),(P)1);
  T2 = (P)YPobject_traits(CHKREF(YLchrG));
  (P)YPelt_setter(T2,CHKREF(YDdirect_object_traits),(P)2);
  T3 = (P)YPobject_traits(CHKREF(YLlocG));
  (P)YPelt_setter(T3,CHKREF(YDdirect_object_traits),(P)3);
  T4 = (P)YPstrX((P)0);
  YPsnul = T4;
  regsym(&YPsnul,"boot","%snul");
  T5 = (P)YPvecX((P)0);
  YPvnul = T5;
  regsym(&YPvnul,"boot","%vnul");
  YPsymbols = CHKREF(Ynil);
  regsym(&YPsymbols,"boot","%symbols");
  lit_0 = YPsb((P)"Warning: symbols were created in the boot image before the symbol-creation was setup. (Probably from a df or rep)\n");
  T10 = (P)YPeqQ(CHKREF(YPTused_symbols_too_earlyT),YPtrue);
  T9 = (P)YPbb(T10);
  if (T9 != YPfalse) {
    T8 = (P)YPcurrent_output_port();
    T7 = (P)YPsu(CHKREF(lit_0));
    T6 = (P)YPwrite_string(T8,T7);
  } else {
  }
  lit_1 = YPPsym((P)"name");
  lit_2 = YPPsym((P)"lookup");
  lit_3 = YPPsym((P)"s");
  T12 = YPsig(YPPlist(1,CHKREF(lit_3)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_lookup_92 = YPmet(FUNCODEREF(fun_lookup_92),CHKREF(lit_2),T12,ENVNUL);
  T11 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T11,ENVNUL);
  T13 = fun_93;
  Yfab_sym = T13;
  regsym(&Yfab_sym,"boot","fab-sym");
  YPsymbols_readyQ = YPtrue;
  lit_4 = YPPsym((P)"fab-sym");
  T15 = YPsig(YPPlist(1,CHKREF(lit_3)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_lookup_94 = YPmet(FUNCODEREF(fun_lookup_94),CHKREF(lit_2),T15,ENVNUL);
  T14 = YPsig(YPPlist(1,CHKREF(lit_1)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yfab_sym = YPmet(FUNCODEREF(Yfab_sym),CHKREF(lit_4),T14,ENVNUL);
  T16 = Yfab_sym;
  Yfab_sym = T16;
  regsym(&Yfab_sym,"boot","fab-sym");
  lit_5 = YPPsym((P)"loop");
  lit_6 = YPPsym((P)"r");
  lit_7 = YPPsym((P)"l");
  T17 = YPsig(YPPlist(2,CHKREF(lit_7),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_96 = YPmet(FUNCODEREF(fun_loop_96),CHKREF(lit_5),T17,ENVNUL);
  lit_8 = YPPsym((P)"colx");
  lit_9 = YPPsym((P)"x");
  lit_10 = YPPsym((P)"lx");
  lit_11 = YPPsym((P)"coly");
  lit_12 = YPPsym((P)"y");
  lit_13 = YPPsym((P)"lxy");
  T19 = YPsig(YPPlist(2,CHKREF(lit_13),CHKREF(lit_12)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_coly_98 = YPmet(FUNCODEREF(fun_coly_98),CHKREF(lit_11),T19,ENVNUL);
  T18 = YPsig(YPPlist(2,CHKREF(lit_10),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_colx_99 = YPmet(FUNCODEREF(fun_colx_99),CHKREF(lit_8),T18,ENVNUL);
  T20 = YPfalse;
  return T20;
}

P Y___main_5___() {
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
  P slotF206;
  P setterF205;
  P accessorF204;
  P getterF203;
  P accessorF202;
  P slotF201;
  P setterF200;
  P accessorF199;
  P getterF198;
  P accessorF197;
  P T452,T451,T450,T449,T448,T447,T446,T445,T444,T443,T442,T441,T440,T439,T438,T437;
  P T436,T435,T434,T433,T432,T431,T430,T429,T428,T427,T426,T425,T424,T423,T422,T421;
  P T420,T419,T418,T417,T416,T415,T414,T413,T412,T411,T410,T409,T408,T407,T406,T405;
  P T404,T403,T402,T401,T400,T399,T398,T397,T396,T395,T394,T393,T392,T391,T390,T389;
  P T388,T387,T386,T385,T384,T383,T382,T381,T380,T379,T378,T377,T376,T375,T374,T373;
  P T372,T371,T370,T369,T368,T367,T366,T365,T364,T363,T362,T361,T360,T359,T358,T357;
  P T356,T355,T354,T353,T352,T351,T350,T349,T348,T347,T346,T345,T344,T343,T342,T341;
  P T340,T339,T338,T337,T336,T335,T334,T333,T332,T331,T330,T329,T328,T327,T326,T325;
  P T324,T323,T322,T321,T320,T319,T318,T317,T316,T315,T314,T313,T312,T311,T310,T309;
  P T308,T307,T306,T305,T304,T303,T302,T301,T300,T299,T298,T297,T296,T295,T294,T293;
  P T292,T291,T290,T289,T288,T287,T286,T285,T284,T283,T282,T281,T280,T279,T278,T277;
  P T276,T275,T274,T273,T272,T271,T270,T269,T268,T267,T266,T265,T264,T263,T262,T261;
  P T260,T259,T258,T257,T256,T255,T254,T253,T252,T251,T250,T249,T248,T247,T246,T245;
  P T244,T243,T242,T241,T240,T239,T238,T237,T236,T235,T234,T233,T232,T231,T230,T229;
  P T228,T227,T226,T225,T224,T223,T222,T221,T220,T219,T218,T217,T216,T215,T214,T213;
  P T212,T211,T210,T209,T208,T207,T206,T205,T204,T203,T202,T201,T200,T199,T198,T197;
  P T196,T195,T194,T193,T192,T191,T190,T189,T188,T187,T186,T185,T184,T183,T182,T181;
  P T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167,T166,T165;
  P T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151,T150,T149;
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
  YDgen_cache_singletons_offset = YPint((P)1);
  regsym(&YDgen_cache_singletons_offset,"boot","$gen-cache-singletons-offset");
  YDgen_cache_classes_offset = YPint((P)2);
  regsym(&YDgen_cache_classes_offset,"boot","$gen-cache-classes-offset");
  lit_14 = YPPsym((P)"%slot-offset");
  lit_15 = YPPsym((P)"getter");
  lit_16 = YPPsym((P)"owner");
  lit_17 = YPPsym((P)"slots");
  lit_18 = YPPsym((P)"i");
  T1 = YPsig(YPPlist(2,CHKREF(lit_18),CHKREF(lit_17)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_135 = YPmet(FUNCODEREF(fun_loop_135),CHKREF(lit_5),T1,ENVNUL);
  T0 = YPsig(YPPlist(2,CHKREF(lit_16),CHKREF(lit_15)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YPslot_offset = YPmet(FUNCODEREF(YPslot_offset),CHKREF(lit_14),T0,ENVNUL);
  T2 = YPslot_offset;
  YPslot_offset = T2;
  regsym(&YPslot_offset,"boot","%slot-offset");
  lit_19 = YPPsym((P)"%early-dispatch");
  lit_20 = YPPsym((P)"args");
  lit_21 = YPsb((P)"ERROR: Generic function dispatch called before it existed.");
  T3 = YPsig(YPPlist(1,CHKREF(lit_20)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG));
  YPearly_dispatch = YPmet(FUNCODEREF(YPearly_dispatch),CHKREF(lit_19),T3,ENVNUL);
  T4 = YPearly_dispatch;
  YPearly_dispatch = T4;
  regsym(&YPearly_dispatch,"boot","%early-dispatch");
  lit_22 = YPPsym((P)"%add-met");
  lit_23 = YPPsym((P)"met");
  lit_24 = YPPsym((P)"gen");
  T5 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_23)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YPadd_met = YPmet(FUNCODEREF(YPadd_met),CHKREF(lit_22),T5,ENVNUL);
  T6 = YPadd_met;
  YPadd_met = T6;
  regsym(&YPadd_met,"boot","%add-met");
  lit_25 = YPPsym((P)"%add-slot");
  lit_26 = YPPsym((P)"slot");
  T7 = YPsig(YPPlist(2,CHKREF(lit_16),CHKREF(lit_26)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YPadd_slot = YPmet(FUNCODEREF(YPadd_slot),CHKREF(lit_25),T7,ENVNUL);
  T8 = YPadd_slot;
  YPadd_slot = T8;
  regsym(&YPadd_slot,"boot","%add-slot");
  lit_27 = YPPsym((P)"z");
  lit_28 = YPPsym((P)"%chr-val-setter");
  lit_29 = YPPsym((P)"%chr-val");
  T11 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_140 = YPmet(FUNCODEREF(fun_140),YPfalse,T11,ENVNUL);
  T10 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLintG),CHKREF(YLchrG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T10,ENVNUL);
  T9 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLchrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_142 = YPmet(FUNCODEREF(fun_142),YPfalse,T9,ENVNUL);
  T25 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T24 = (P)YPsig(Ynil,T25,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T23 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_29),T24,Ynil,YPfalse);
  YPchr_val = T23;
  regsym(&YPchr_val,"boot","%chr-val");
  T27 = fun_142;
  accessorF307 = T27;
  CALL2(CHKREF(YPadd_met),CHKREF(YPchr_val),accessorF307);
  T26 = accessorF307;
  getterF308 = T26;
  T20 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T19 = (P)YPpair(CHKREF(YLanyG),T20);
  T18 = (P)YPsig(Ynil,T19,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T17 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_28),T18,Ynil,YPfalse);
  YPchr_val_setter = T17;
  regsym(&YPchr_val_setter,"boot","%chr-val-setter");
  T22 = fun_141;
  accessorF309 = T22;
  CALL2(CHKREF(YPadd_met),CHKREF(YPchr_val_setter),accessorF309);
  T21 = accessorF309;
  setterF310 = T21;
  T16 = fun_140;
  T15 = (P)YPPslot(CHKREF(YLchrG),CHKREF(YPchr_val),CHKREF(YPchr_val_setter),CHKREF(YLintG),T16);
  slotF311 = T15;
  (P)YPmet_env_setter(slotF311,getterF308);
  (P)YPmet_env_setter(slotF311,setterF310);
  T14 = CALL2(CHKREF(YPadd_slot),CHKREF(YLchrG),slotF311);
  T13 = T14;
  T12 = T13;
  lit_30 = YPPsym((P)"%int-val-setter");
  lit_31 = YPPsym((P)"%int-val");
  T30 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_143 = YPmet(FUNCODEREF(fun_143),YPfalse,T30,ENVNUL);
  T29 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_144 = YPmet(FUNCODEREF(fun_144),YPfalse,T29,ENVNUL);
  T28 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_145 = YPmet(FUNCODEREF(fun_145),YPfalse,T28,ENVNUL);
  T44 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T43 = (P)YPsig(Ynil,T44,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T42 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_31),T43,Ynil,YPfalse);
  YPint_val = T42;
  regsym(&YPint_val,"boot","%int-val");
  T46 = fun_145;
  accessorF302 = T46;
  CALL2(CHKREF(YPadd_met),CHKREF(YPint_val),accessorF302);
  T45 = accessorF302;
  getterF303 = T45;
  T39 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T38 = (P)YPpair(CHKREF(YLanyG),T39);
  T37 = (P)YPsig(Ynil,T38,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T36 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_30),T37,Ynil,YPfalse);
  YPint_val_setter = T36;
  regsym(&YPint_val_setter,"boot","%int-val-setter");
  T41 = fun_144;
  accessorF304 = T41;
  CALL2(CHKREF(YPadd_met),CHKREF(YPint_val_setter),accessorF304);
  T40 = accessorF304;
  setterF305 = T40;
  T35 = fun_143;
  T34 = (P)YPPslot(CHKREF(YLintG),CHKREF(YPint_val),CHKREF(YPint_val_setter),CHKREF(YLanyG),T35);
  slotF306 = T34;
  (P)YPmet_env_setter(slotF306,getterF303);
  (P)YPmet_env_setter(slotF306,setterF305);
  T33 = CALL2(CHKREF(YPadd_slot),CHKREF(YLintG),slotF306);
  T32 = T33;
  T31 = T32;
  lit_32 = YPPsym((P)"%flo-val-setter");
  lit_33 = YPPsym((P)"%flo-val");
  T49 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_146 = YPmet(FUNCODEREF(fun_146),YPfalse,T49,ENVNUL);
  T48 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLfloG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_147 = YPmet(FUNCODEREF(fun_147),YPfalse,T48,ENVNUL);
  T47 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfloG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_148 = YPmet(FUNCODEREF(fun_148),YPfalse,T47,ENVNUL);
  T63 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T62 = (P)YPsig(Ynil,T63,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T61 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_33),T62,Ynil,YPfalse);
  YPflo_val = T61;
  regsym(&YPflo_val,"boot","%flo-val");
  T65 = fun_148;
  accessorF297 = T65;
  CALL2(CHKREF(YPadd_met),CHKREF(YPflo_val),accessorF297);
  T64 = accessorF297;
  getterF298 = T64;
  T58 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T57 = (P)YPpair(CHKREF(YLanyG),T58);
  T56 = (P)YPsig(Ynil,T57,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T55 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_32),T56,Ynil,YPfalse);
  YPflo_val_setter = T55;
  regsym(&YPflo_val_setter,"boot","%flo-val-setter");
  T60 = fun_147;
  accessorF299 = T60;
  CALL2(CHKREF(YPadd_met),CHKREF(YPflo_val_setter),accessorF299);
  T59 = accessorF299;
  setterF300 = T59;
  T54 = fun_146;
  T53 = (P)YPPslot(CHKREF(YLfloG),CHKREF(YPflo_val),CHKREF(YPflo_val_setter),CHKREF(YLanyG),T54);
  slotF301 = T53;
  (P)YPmet_env_setter(slotF301,getterF298);
  (P)YPmet_env_setter(slotF301,setterF300);
  T52 = CALL2(CHKREF(YPadd_slot),CHKREF(YLfloG),slotF301);
  T51 = T52;
  T50 = T51;
  lit_34 = YPPsym((P)"%loc-val-setter");
  lit_35 = YPPsym((P)"%loc-val");
  T68 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_149 = YPmet(FUNCODEREF(fun_149),YPfalse,T68,ENVNUL);
  T67 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlocG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_150 = YPmet(FUNCODEREF(fun_150),YPfalse,T67,ENVNUL);
  T66 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlocG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_151 = YPmet(FUNCODEREF(fun_151),YPfalse,T66,ENVNUL);
  T82 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T81 = (P)YPsig(Ynil,T82,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T80 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_35),T81,Ynil,YPfalse);
  YPloc_val = T80;
  regsym(&YPloc_val,"boot","%loc-val");
  T84 = fun_151;
  accessorF292 = T84;
  CALL2(CHKREF(YPadd_met),CHKREF(YPloc_val),accessorF292);
  T83 = accessorF292;
  getterF293 = T83;
  T77 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T76 = (P)YPpair(CHKREF(YLanyG),T77);
  T75 = (P)YPsig(Ynil,T76,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T74 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_34),T75,Ynil,YPfalse);
  YPloc_val_setter = T74;
  regsym(&YPloc_val_setter,"boot","%loc-val-setter");
  T79 = fun_150;
  accessorF294 = T79;
  CALL2(CHKREF(YPadd_met),CHKREF(YPloc_val_setter),accessorF294);
  T78 = accessorF294;
  setterF295 = T78;
  T73 = fun_149;
  T72 = (P)YPPslot(CHKREF(YLlocG),CHKREF(YPloc_val),CHKREF(YPloc_val_setter),CHKREF(YLanyG),T73);
  slotF296 = T72;
  (P)YPmet_env_setter(slotF296,getterF293);
  (P)YPmet_env_setter(slotF296,setterF295);
  T71 = CALL2(CHKREF(YPadd_slot),CHKREF(YLlocG),slotF296);
  T70 = T71;
  T69 = T70;
  lit_36 = YPPsym((P)"head-setter");
  lit_37 = YPPsym((P)"head");
  T87 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_152 = YPmet(FUNCODEREF(fun_152),YPfalse,T87,ENVNUL);
  T86 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_153 = YPmet(FUNCODEREF(fun_153),YPfalse,T86,ENVNUL);
  T85 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_154 = YPmet(FUNCODEREF(fun_154),YPfalse,T85,ENVNUL);
  T101 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T100 = (P)YPsig(Ynil,T101,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T99 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_37),T100,Ynil,YPfalse);
  Yhead = T99;
  regsym(&Yhead,"boot","head");
  T103 = fun_154;
  accessorF287 = T103;
  CALL2(CHKREF(YPadd_met),CHKREF(Yhead),accessorF287);
  T102 = accessorF287;
  getterF288 = T102;
  T96 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T95 = (P)YPpair(CHKREF(YLanyG),T96);
  T94 = (P)YPsig(Ynil,T95,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T93 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_36),T94,Ynil,YPfalse);
  Yhead_setter = T93;
  regsym(&Yhead_setter,"boot","head-setter");
  T98 = fun_153;
  accessorF289 = T98;
  CALL2(CHKREF(YPadd_met),CHKREF(Yhead_setter),accessorF289);
  T97 = accessorF289;
  setterF290 = T97;
  T92 = fun_152;
  T91 = (P)YPPslot(CHKREF(YLlstG),CHKREF(Yhead),CHKREF(Yhead_setter),CHKREF(YLanyG),T92);
  slotF291 = T91;
  (P)YPmet_env_setter(slotF291,getterF288);
  (P)YPmet_env_setter(slotF291,setterF290);
  T90 = CALL2(CHKREF(YPadd_slot),CHKREF(YLlstG),slotF291);
  T89 = T90;
  T88 = T89;
  lit_38 = YPPsym((P)"tail-setter");
  lit_39 = YPPsym((P)"tail");
  T106 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_155 = YPmet(FUNCODEREF(fun_155),YPfalse,T106,ENVNUL);
  T105 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_156 = YPmet(FUNCODEREF(fun_156),YPfalse,T105,ENVNUL);
  T104 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_157 = YPmet(FUNCODEREF(fun_157),YPfalse,T104,ENVNUL);
  T120 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T119 = (P)YPsig(Ynil,T120,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T118 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_39),T119,Ynil,YPfalse);
  Ytail = T118;
  regsym(&Ytail,"boot","tail");
  T122 = fun_157;
  accessorF282 = T122;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytail),accessorF282);
  T121 = accessorF282;
  getterF283 = T121;
  T115 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T114 = (P)YPpair(CHKREF(YLanyG),T115);
  T113 = (P)YPsig(Ynil,T114,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T112 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_38),T113,Ynil,YPfalse);
  Ytail_setter = T112;
  regsym(&Ytail_setter,"boot","tail-setter");
  T117 = fun_156;
  accessorF284 = T117;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytail_setter),accessorF284);
  T116 = accessorF284;
  setterF285 = T116;
  T111 = fun_155;
  T110 = (P)YPPslot(CHKREF(YLlstG),CHKREF(Ytail),CHKREF(Ytail_setter),CHKREF(YLlstG),T111);
  slotF286 = T110;
  (P)YPmet_env_setter(slotF286,getterF283);
  (P)YPmet_env_setter(slotF286,setterF285);
  T109 = CALL2(CHKREF(YPadd_slot),CHKREF(YLlstG),slotF286);
  T108 = T109;
  T107 = T108;
  lit_40 = YPPsym((P)"%%vec-dat-setter");
  lit_41 = YPPsym((P)"%%vec-dat");
  T125 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_158 = YPmet(FUNCODEREF(fun_158),YPfalse,T125,ENVNUL);
  T124 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLvecG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_159 = YPmet(FUNCODEREF(fun_159),YPfalse,T124,ENVNUL);
  T123 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLvecG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_160 = YPmet(FUNCODEREF(fun_160),YPfalse,T123,ENVNUL);
  T139 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T138 = (P)YPsig(Ynil,T139,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T137 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_41),T138,Ynil,YPfalse);
  YPPvec_dat = T137;
  regsym(&YPPvec_dat,"boot","%%vec-dat");
  T141 = fun_160;
  accessorF277 = T141;
  CALL2(CHKREF(YPadd_met),CHKREF(YPPvec_dat),accessorF277);
  T140 = accessorF277;
  getterF278 = T140;
  T134 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T133 = (P)YPpair(CHKREF(YLanyG),T134);
  T132 = (P)YPsig(Ynil,T133,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T131 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_40),T132,Ynil,YPfalse);
  YPPvec_dat_setter = T131;
  regsym(&YPPvec_dat_setter,"boot","%%vec-dat-setter");
  T136 = fun_159;
  accessorF279 = T136;
  CALL2(CHKREF(YPadd_met),CHKREF(YPPvec_dat_setter),accessorF279);
  T135 = accessorF279;
  setterF280 = T135;
  T130 = fun_158;
  T129 = (P)YPPslot(CHKREF(YLvecG),CHKREF(YPPvec_dat),CHKREF(YPPvec_dat_setter),CHKREF(YLanyG),T130);
  slotF281 = T129;
  (P)YPmet_env_setter(slotF281,getterF278);
  (P)YPmet_env_setter(slotF281,setterF280);
  T128 = CALL2(CHKREF(YPadd_slot),CHKREF(YLvecG),slotF281);
  T127 = T128;
  T126 = T127;
  lit_42 = YPPsym((P)"%%str-dat-setter");
  lit_43 = YPPsym((P)"%%str-dat");
  T144 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_161 = YPmet(FUNCODEREF(fun_161),YPfalse,T144,ENVNUL);
  T143 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLstrG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_162 = YPmet(FUNCODEREF(fun_162),YPfalse,T143,ENVNUL);
  T142 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLstrG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_163 = YPmet(FUNCODEREF(fun_163),YPfalse,T142,ENVNUL);
  T158 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T157 = (P)YPsig(Ynil,T158,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T156 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_43),T157,Ynil,YPfalse);
  YPPstr_dat = T156;
  regsym(&YPPstr_dat,"boot","%%str-dat");
  T160 = fun_163;
  accessorF272 = T160;
  CALL2(CHKREF(YPadd_met),CHKREF(YPPstr_dat),accessorF272);
  T159 = accessorF272;
  getterF273 = T159;
  T153 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T152 = (P)YPpair(CHKREF(YLanyG),T153);
  T151 = (P)YPsig(Ynil,T152,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T150 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_42),T151,Ynil,YPfalse);
  YPPstr_dat_setter = T150;
  regsym(&YPPstr_dat_setter,"boot","%%str-dat-setter");
  T155 = fun_162;
  accessorF274 = T155;
  CALL2(CHKREF(YPadd_met),CHKREF(YPPstr_dat_setter),accessorF274);
  T154 = accessorF274;
  setterF275 = T154;
  T149 = fun_161;
  T148 = (P)YPPslot(CHKREF(YLstrG),CHKREF(YPPstr_dat),CHKREF(YPPstr_dat_setter),CHKREF(YLanyG),T149);
  slotF276 = T148;
  (P)YPmet_env_setter(slotF276,getterF273);
  (P)YPmet_env_setter(slotF276,setterF275);
  T147 = CALL2(CHKREF(YPadd_slot),CHKREF(YLstrG),slotF276);
  T146 = T147;
  T145 = T146;
  lit_44 = YPPsym((P)"sym-name-setter");
  lit_45 = YPPsym((P)"sym-name");
  T163 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_164 = YPmet(FUNCODEREF(fun_164),YPfalse,T163,ENVNUL);
  T162 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLsymG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_165 = YPmet(FUNCODEREF(fun_165),YPfalse,T162,ENVNUL);
  T161 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsymG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_166 = YPmet(FUNCODEREF(fun_166),YPfalse,T161,ENVNUL);
  T177 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T176 = (P)YPsig(Ynil,T177,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T175 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_45),T176,Ynil,YPfalse);
  Ysym_name = T175;
  regsym(&Ysym_name,"boot","sym-name");
  T179 = fun_166;
  accessorF267 = T179;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysym_name),accessorF267);
  T178 = accessorF267;
  getterF268 = T178;
  T172 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T171 = (P)YPpair(CHKREF(YLanyG),T172);
  T170 = (P)YPsig(Ynil,T171,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T169 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_44),T170,Ynil,YPfalse);
  Ysym_name_setter = T169;
  regsym(&Ysym_name_setter,"boot","sym-name-setter");
  T174 = fun_165;
  accessorF269 = T174;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysym_name_setter),accessorF269);
  T173 = accessorF269;
  setterF270 = T173;
  T168 = fun_164;
  T167 = (P)YPPslot(CHKREF(YLsymG),CHKREF(Ysym_name),CHKREF(Ysym_name_setter),CHKREF(YLstrG),T168);
  slotF271 = T167;
  (P)YPmet_env_setter(slotF271,getterF268);
  (P)YPmet_env_setter(slotF271,setterF270);
  T166 = CALL2(CHKREF(YPadd_slot),CHKREF(YLsymG),slotF271);
  T165 = T166;
  T164 = T165;
  lit_46 = YPPsym((P)"traits-owner-setter");
  lit_47 = YPPsym((P)"traits-owner");
  T182 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_167 = YPmet(FUNCODEREF(fun_167),YPfalse,T182,ENVNUL);
  T181 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLtraitsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_168 = YPmet(FUNCODEREF(fun_168),YPfalse,T181,ENVNUL);
  T180 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLtraitsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_169 = YPmet(FUNCODEREF(fun_169),YPfalse,T180,ENVNUL);
  T196 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T195 = (P)YPsig(Ynil,T196,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T194 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_47),T195,Ynil,YPfalse);
  Ytraits_owner = T194;
  regsym(&Ytraits_owner,"boot","traits-owner");
  T198 = fun_169;
  accessorF262 = T198;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_owner),accessorF262);
  T197 = accessorF262;
  getterF263 = T197;
  T191 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T190 = (P)YPpair(CHKREF(YLanyG),T191);
  T189 = (P)YPsig(Ynil,T190,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T188 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_46),T189,Ynil,YPfalse);
  Ytraits_owner_setter = T188;
  regsym(&Ytraits_owner_setter,"boot","traits-owner-setter");
  T193 = fun_168;
  accessorF264 = T193;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_owner_setter),accessorF264);
  T192 = accessorF264;
  setterF265 = T192;
  T187 = fun_167;
  T186 = (P)YPPslot(CHKREF(YLtraitsG),CHKREF(Ytraits_owner),CHKREF(Ytraits_owner_setter),CHKREF(YLanyG),T187);
  slotF266 = T186;
  (P)YPmet_env_setter(slotF266,getterF263);
  (P)YPmet_env_setter(slotF266,setterF265);
  T185 = CALL2(CHKREF(YPadd_slot),CHKREF(YLtraitsG),slotF266);
  T184 = T185;
  T183 = T184;
  lit_48 = YPPsym((P)"traits-direct-parents-setter");
  lit_49 = YPPsym((P)"traits-direct-parents");
  T201 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_170 = YPmet(FUNCODEREF(fun_170),YPfalse,T201,ENVNUL);
  T200 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLtraitsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_171 = YPmet(FUNCODEREF(fun_171),YPfalse,T200,ENVNUL);
  T199 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLtraitsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_172 = YPmet(FUNCODEREF(fun_172),YPfalse,T199,ENVNUL);
  T215 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T214 = (P)YPsig(Ynil,T215,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T213 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_49),T214,Ynil,YPfalse);
  Ytraits_direct_parents = T213;
  regsym(&Ytraits_direct_parents,"boot","traits-direct-parents");
  T217 = fun_172;
  accessorF257 = T217;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_direct_parents),accessorF257);
  T216 = accessorF257;
  getterF258 = T216;
  T210 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T209 = (P)YPpair(CHKREF(YLanyG),T210);
  T208 = (P)YPsig(Ynil,T209,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T207 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_48),T208,Ynil,YPfalse);
  Ytraits_direct_parents_setter = T207;
  regsym(&Ytraits_direct_parents_setter,"boot","traits-direct-parents-setter");
  T212 = fun_171;
  accessorF259 = T212;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_direct_parents_setter),accessorF259);
  T211 = accessorF259;
  setterF260 = T211;
  T206 = fun_170;
  T205 = (P)YPPslot(CHKREF(YLtraitsG),CHKREF(Ytraits_direct_parents),CHKREF(Ytraits_direct_parents_setter),CHKREF(YLlstG),T206);
  slotF261 = T205;
  (P)YPmet_env_setter(slotF261,getterF258);
  (P)YPmet_env_setter(slotF261,setterF260);
  T204 = CALL2(CHKREF(YPadd_slot),CHKREF(YLtraitsG),slotF261);
  T203 = T204;
  T202 = T203;
  lit_50 = YPPsym((P)"traits-direct-slots-setter");
  lit_51 = YPPsym((P)"traits-direct-slots");
  T220 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_173 = YPmet(FUNCODEREF(fun_173),YPfalse,T220,ENVNUL);
  T219 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLtraitsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_174 = YPmet(FUNCODEREF(fun_174),YPfalse,T219,ENVNUL);
  T218 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLtraitsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T218,ENVNUL);
  T234 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T233 = (P)YPsig(Ynil,T234,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T232 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_51),T233,Ynil,YPfalse);
  Ytraits_direct_slots = T232;
  regsym(&Ytraits_direct_slots,"boot","traits-direct-slots");
  T236 = fun_175;
  accessorF252 = T236;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_direct_slots),accessorF252);
  T235 = accessorF252;
  getterF253 = T235;
  T229 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T228 = (P)YPpair(CHKREF(YLanyG),T229);
  T227 = (P)YPsig(Ynil,T228,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T226 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_50),T227,Ynil,YPfalse);
  Ytraits_direct_slots_setter = T226;
  regsym(&Ytraits_direct_slots_setter,"boot","traits-direct-slots-setter");
  T231 = fun_174;
  accessorF254 = T231;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_direct_slots_setter),accessorF254);
  T230 = accessorF254;
  setterF255 = T230;
  T225 = fun_173;
  T224 = (P)YPPslot(CHKREF(YLtraitsG),CHKREF(Ytraits_direct_slots),CHKREF(Ytraits_direct_slots_setter),CHKREF(YLlstG),T225);
  slotF256 = T224;
  (P)YPmet_env_setter(slotF256,getterF253);
  (P)YPmet_env_setter(slotF256,setterF255);
  T223 = CALL2(CHKREF(YPadd_slot),CHKREF(YLtraitsG),slotF256);
  T222 = T223;
  T221 = T222;
  lit_52 = YPPsym((P)"traits-parents-setter");
  lit_53 = YPPsym((P)"traits-parents");
  T239 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_176 = YPmet(FUNCODEREF(fun_176),YPfalse,T239,ENVNUL);
  T238 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLtraitsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_177 = YPmet(FUNCODEREF(fun_177),YPfalse,T238,ENVNUL);
  T237 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLtraitsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T237,ENVNUL);
  T253 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T252 = (P)YPsig(Ynil,T253,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T251 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_53),T252,Ynil,YPfalse);
  Ytraits_parents = T251;
  regsym(&Ytraits_parents,"boot","traits-parents");
  T255 = fun_178;
  accessorF247 = T255;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_parents),accessorF247);
  T254 = accessorF247;
  getterF248 = T254;
  T248 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T247 = (P)YPpair(CHKREF(YLanyG),T248);
  T246 = (P)YPsig(Ynil,T247,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T245 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_52),T246,Ynil,YPfalse);
  Ytraits_parents_setter = T245;
  regsym(&Ytraits_parents_setter,"boot","traits-parents-setter");
  T250 = fun_177;
  accessorF249 = T250;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_parents_setter),accessorF249);
  T249 = accessorF249;
  setterF250 = T249;
  T244 = fun_176;
  T243 = (P)YPPslot(CHKREF(YLtraitsG),CHKREF(Ytraits_parents),CHKREF(Ytraits_parents_setter),CHKREF(YLlstG),T244);
  slotF251 = T243;
  (P)YPmet_env_setter(slotF251,getterF248);
  (P)YPmet_env_setter(slotF251,setterF250);
  T242 = CALL2(CHKREF(YPadd_slot),CHKREF(YLtraitsG),slotF251);
  T241 = T242;
  T240 = T241;
  lit_54 = YPPsym((P)"traits-slots-setter");
  lit_55 = YPPsym((P)"traits-slots");
  T258 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_179 = YPmet(FUNCODEREF(fun_179),YPfalse,T258,ENVNUL);
  T257 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLtraitsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T257,ENVNUL);
  T256 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLtraitsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_181 = YPmet(FUNCODEREF(fun_181),YPfalse,T256,ENVNUL);
  T272 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T271 = (P)YPsig(Ynil,T272,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T270 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_55),T271,Ynil,YPfalse);
  Ytraits_slots = T270;
  regsym(&Ytraits_slots,"boot","traits-slots");
  T274 = fun_181;
  accessorF242 = T274;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_slots),accessorF242);
  T273 = accessorF242;
  getterF243 = T273;
  T267 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T266 = (P)YPpair(CHKREF(YLanyG),T267);
  T265 = (P)YPsig(Ynil,T266,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T264 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_54),T265,Ynil,YPfalse);
  Ytraits_slots_setter = T264;
  regsym(&Ytraits_slots_setter,"boot","traits-slots-setter");
  T269 = fun_180;
  accessorF244 = T269;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_slots_setter),accessorF244);
  T268 = accessorF244;
  setterF245 = T268;
  T263 = fun_179;
  T262 = (P)YPPslot(CHKREF(YLtraitsG),CHKREF(Ytraits_slots),CHKREF(Ytraits_slots_setter),CHKREF(YLlstG),T263);
  slotF246 = T262;
  (P)YPmet_env_setter(slotF246,getterF243);
  (P)YPmet_env_setter(slotF246,setterF245);
  T261 = CALL2(CHKREF(YPadd_slot),CHKREF(YLtraitsG),slotF246);
  T260 = T261;
  T259 = T260;
  lit_56 = YPPsym((P)"traits-direct-children-setter");
  lit_57 = YPPsym((P)"traits-direct-children");
  T277 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T277,ENVNUL);
  T276 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLtraitsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_183 = YPmet(FUNCODEREF(fun_183),YPfalse,T276,ENVNUL);
  T275 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLtraitsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_184 = YPmet(FUNCODEREF(fun_184),YPfalse,T275,ENVNUL);
  T291 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T290 = (P)YPsig(Ynil,T291,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T289 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_57),T290,Ynil,YPfalse);
  Ytraits_direct_children = T289;
  regsym(&Ytraits_direct_children,"boot","traits-direct-children");
  T293 = fun_184;
  accessorF237 = T293;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_direct_children),accessorF237);
  T292 = accessorF237;
  getterF238 = T292;
  T286 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T285 = (P)YPpair(CHKREF(YLanyG),T286);
  T284 = (P)YPsig(Ynil,T285,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T283 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_56),T284,Ynil,YPfalse);
  Ytraits_direct_children_setter = T283;
  regsym(&Ytraits_direct_children_setter,"boot","traits-direct-children-setter");
  T288 = fun_183;
  accessorF239 = T288;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_direct_children_setter),accessorF239);
  T287 = accessorF239;
  setterF240 = T287;
  T282 = fun_182;
  T281 = (P)YPPslot(CHKREF(YLtraitsG),CHKREF(Ytraits_direct_children),CHKREF(Ytraits_direct_children_setter),CHKREF(YLlstG),T282);
  slotF241 = T281;
  (P)YPmet_env_setter(slotF241,getterF238);
  (P)YPmet_env_setter(slotF241,setterF240);
  T280 = CALL2(CHKREF(YPadd_slot),CHKREF(YLtraitsG),slotF241);
  T279 = T280;
  T278 = T279;
  lit_58 = YPPsym((P)"traits-gens-setter");
  lit_59 = YPPsym((P)"traits-gens");
  T296 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_185 = YPmet(FUNCODEREF(fun_185),YPfalse,T296,ENVNUL);
  T295 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLtraitsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_186 = YPmet(FUNCODEREF(fun_186),YPfalse,T295,ENVNUL);
  T294 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLtraitsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_187 = YPmet(FUNCODEREF(fun_187),YPfalse,T294,ENVNUL);
  T310 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T309 = (P)YPsig(Ynil,T310,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T308 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_59),T309,Ynil,YPfalse);
  Ytraits_gens = T308;
  regsym(&Ytraits_gens,"boot","traits-gens");
  T312 = fun_187;
  accessorF232 = T312;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_gens),accessorF232);
  T311 = accessorF232;
  getterF233 = T311;
  T305 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T304 = (P)YPpair(CHKREF(YLanyG),T305);
  T303 = (P)YPsig(Ynil,T304,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T302 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_58),T303,Ynil,YPfalse);
  Ytraits_gens_setter = T302;
  regsym(&Ytraits_gens_setter,"boot","traits-gens-setter");
  T307 = fun_186;
  accessorF234 = T307;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_gens_setter),accessorF234);
  T306 = accessorF234;
  setterF235 = T306;
  T301 = fun_185;
  T300 = (P)YPPslot(CHKREF(YLtraitsG),CHKREF(Ytraits_gens),CHKREF(Ytraits_gens_setter),CHKREF(YLlstG),T301);
  slotF236 = T300;
  (P)YPmet_env_setter(slotF236,getterF233);
  (P)YPmet_env_setter(slotF236,setterF235);
  T299 = CALL2(CHKREF(YPadd_slot),CHKREF(YLtraitsG),slotF236);
  T298 = T299;
  T297 = T298;
  lit_60 = YPPsym((P)"traits-mets-setter");
  lit_61 = YPPsym((P)"traits-mets");
  T315 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T315,ENVNUL);
  T314 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLtraitsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_189 = YPmet(FUNCODEREF(fun_189),YPfalse,T314,ENVNUL);
  T313 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLtraitsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_190 = YPmet(FUNCODEREF(fun_190),YPfalse,T313,ENVNUL);
  T329 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T328 = (P)YPsig(Ynil,T329,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T327 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_61),T328,Ynil,YPfalse);
  Ytraits_mets = T327;
  regsym(&Ytraits_mets,"boot","traits-mets");
  T331 = fun_190;
  accessorF227 = T331;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_mets),accessorF227);
  T330 = accessorF227;
  getterF228 = T330;
  T324 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T323 = (P)YPpair(CHKREF(YLanyG),T324);
  T322 = (P)YPsig(Ynil,T323,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T321 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_60),T322,Ynil,YPfalse);
  Ytraits_mets_setter = T321;
  regsym(&Ytraits_mets_setter,"boot","traits-mets-setter");
  T326 = fun_189;
  accessorF229 = T326;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_mets_setter),accessorF229);
  T325 = accessorF229;
  setterF230 = T325;
  T320 = fun_188;
  T319 = (P)YPPslot(CHKREF(YLtraitsG),CHKREF(Ytraits_mets),CHKREF(Ytraits_mets_setter),CHKREF(YLlstG),T320);
  slotF231 = T319;
  (P)YPmet_env_setter(slotF231,getterF228);
  (P)YPmet_env_setter(slotF231,setterF230);
  T318 = CALL2(CHKREF(YPadd_slot),CHKREF(YLtraitsG),slotF231);
  T317 = T318;
  T316 = T317;
  lit_62 = YPPsym((P)"traits-forward-setter");
  lit_63 = YPPsym((P)"traits-forward");
  T334 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T334,ENVNUL);
  T333 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLtraitsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_192 = YPmet(FUNCODEREF(fun_192),YPfalse,T333,ENVNUL);
  T332 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLtraitsG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T332,ENVNUL);
  T348 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T347 = (P)YPsig(Ynil,T348,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T346 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_63),T347,Ynil,YPfalse);
  Ytraits_forward = T346;
  regsym(&Ytraits_forward,"boot","traits-forward");
  T350 = fun_193;
  accessorF222 = T350;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_forward),accessorF222);
  T349 = accessorF222;
  getterF223 = T349;
  T343 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T342 = (P)YPpair(CHKREF(YLanyG),T343);
  T341 = (P)YPsig(Ynil,T342,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T340 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_62),T341,Ynil,YPfalse);
  Ytraits_forward_setter = T340;
  regsym(&Ytraits_forward_setter,"boot","traits-forward-setter");
  T345 = fun_192;
  accessorF224 = T345;
  CALL2(CHKREF(YPadd_met),CHKREF(Ytraits_forward_setter),accessorF224);
  T344 = accessorF224;
  setterF225 = T344;
  T339 = fun_191;
  T338 = (P)YPPslot(CHKREF(YLtraitsG),CHKREF(Ytraits_forward),CHKREF(Ytraits_forward_setter),CHKREF(YLanyG),T339);
  slotF226 = T338;
  (P)YPmet_env_setter(slotF226,getterF223);
  (P)YPmet_env_setter(slotF226,setterF225);
  T337 = CALL2(CHKREF(YPadd_slot),CHKREF(YLtraitsG),slotF226);
  T336 = T337;
  T335 = T336;
  lit_64 = YPPsym((P)"slot-owner-setter");
  lit_65 = YPPsym((P)"slot-owner");
  T353 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_194 = YPmet(FUNCODEREF(fun_194),YPfalse,T353,ENVNUL);
  T352 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLslotG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_195 = YPmet(FUNCODEREF(fun_195),YPfalse,T352,ENVNUL);
  T351 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLslotG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_196 = YPmet(FUNCODEREF(fun_196),YPfalse,T351,ENVNUL);
  T367 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T366 = (P)YPsig(Ynil,T367,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T365 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_65),T366,Ynil,YPfalse);
  Yslot_owner = T365;
  regsym(&Yslot_owner,"boot","slot-owner");
  T369 = fun_196;
  accessorF217 = T369;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_owner),accessorF217);
  T368 = accessorF217;
  getterF218 = T368;
  T362 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T361 = (P)YPpair(CHKREF(YLanyG),T362);
  T360 = (P)YPsig(Ynil,T361,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T359 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_64),T360,Ynil,YPfalse);
  Yslot_owner_setter = T359;
  regsym(&Yslot_owner_setter,"boot","slot-owner-setter");
  T364 = fun_195;
  accessorF219 = T364;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_owner_setter),accessorF219);
  T363 = accessorF219;
  setterF220 = T363;
  T358 = fun_194;
  T357 = (P)YPPslot(CHKREF(YLslotG),CHKREF(Yslot_owner),CHKREF(Yslot_owner_setter),CHKREF(YLanyG),T358);
  slotF221 = T357;
  (P)YPmet_env_setter(slotF221,getterF218);
  (P)YPmet_env_setter(slotF221,setterF220);
  T356 = CALL2(CHKREF(YPadd_slot),CHKREF(YLslotG),slotF221);
  T355 = T356;
  T354 = T355;
  lit_66 = YPPsym((P)"slot-getter-setter");
  lit_67 = YPPsym((P)"slot-getter");
  T372 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T372,ENVNUL);
  T371 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLslotG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_198 = YPmet(FUNCODEREF(fun_198),YPfalse,T371,ENVNUL);
  T370 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLslotG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_199 = YPmet(FUNCODEREF(fun_199),YPfalse,T370,ENVNUL);
  T386 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T385 = (P)YPsig(Ynil,T386,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T384 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_67),T385,Ynil,YPfalse);
  Yslot_getter = T384;
  regsym(&Yslot_getter,"boot","slot-getter");
  T388 = fun_199;
  accessorF212 = T388;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_getter),accessorF212);
  T387 = accessorF212;
  getterF213 = T387;
  T381 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T380 = (P)YPpair(CHKREF(YLanyG),T381);
  T379 = (P)YPsig(Ynil,T380,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T378 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_66),T379,Ynil,YPfalse);
  Yslot_getter_setter = T378;
  regsym(&Yslot_getter_setter,"boot","slot-getter-setter");
  T383 = fun_198;
  accessorF214 = T383;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_getter_setter),accessorF214);
  T382 = accessorF214;
  setterF215 = T382;
  T377 = fun_197;
  T376 = (P)YPPslot(CHKREF(YLslotG),CHKREF(Yslot_getter),CHKREF(Yslot_getter_setter),CHKREF(YLfunG),T377);
  slotF216 = T376;
  (P)YPmet_env_setter(slotF216,getterF213);
  (P)YPmet_env_setter(slotF216,setterF215);
  T375 = CALL2(CHKREF(YPadd_slot),CHKREF(YLslotG),slotF216);
  T374 = T375;
  T373 = T374;
  lit_68 = YPPsym((P)"slot-setter-setter");
  lit_69 = YPPsym((P)"slot-setter");
  T391 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_200 = YPmet(FUNCODEREF(fun_200),YPfalse,T391,ENVNUL);
  T390 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLslotG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_201 = YPmet(FUNCODEREF(fun_201),YPfalse,T390,ENVNUL);
  T389 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLslotG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T389,ENVNUL);
  T405 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T404 = (P)YPsig(Ynil,T405,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T403 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_69),T404,Ynil,YPfalse);
  Yslot_setter = T403;
  regsym(&Yslot_setter,"boot","slot-setter");
  T407 = fun_202;
  accessorF207 = T407;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_setter),accessorF207);
  T406 = accessorF207;
  getterF208 = T406;
  T400 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T399 = (P)YPpair(CHKREF(YLanyG),T400);
  T398 = (P)YPsig(Ynil,T399,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T397 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_68),T398,Ynil,YPfalse);
  Yslot_setter_setter = T397;
  regsym(&Yslot_setter_setter,"boot","slot-setter-setter");
  T402 = fun_201;
  accessorF209 = T402;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_setter_setter),accessorF209);
  T401 = accessorF209;
  setterF210 = T401;
  T396 = fun_200;
  T395 = (P)YPPslot(CHKREF(YLslotG),CHKREF(Yslot_setter),CHKREF(Yslot_setter_setter),CHKREF(YLfunG),T396);
  slotF211 = T395;
  (P)YPmet_env_setter(slotF211,getterF208);
  (P)YPmet_env_setter(slotF211,setterF210);
  T394 = CALL2(CHKREF(YPadd_slot),CHKREF(YLslotG),slotF211);
  T393 = T394;
  T392 = T393;
  lit_70 = YPPsym((P)"slot-type-setter");
  lit_71 = YPPsym((P)"slot-type");
  T410 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_203 = YPmet(FUNCODEREF(fun_203),YPfalse,T410,ENVNUL);
  T409 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLslotG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_204 = YPmet(FUNCODEREF(fun_204),YPfalse,T409,ENVNUL);
  T408 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLslotG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_205 = YPmet(FUNCODEREF(fun_205),YPfalse,T408,ENVNUL);
  T424 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T423 = (P)YPsig(Ynil,T424,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T422 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_71),T423,Ynil,YPfalse);
  Yslot_type = T422;
  regsym(&Yslot_type,"boot","slot-type");
  T426 = fun_205;
  accessorF202 = T426;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_type),accessorF202);
  T425 = accessorF202;
  getterF203 = T425;
  T419 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T418 = (P)YPpair(CHKREF(YLanyG),T419);
  T417 = (P)YPsig(Ynil,T418,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T416 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_70),T417,Ynil,YPfalse);
  Yslot_type_setter = T416;
  regsym(&Yslot_type_setter,"boot","slot-type-setter");
  T421 = fun_204;
  accessorF204 = T421;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_type_setter),accessorF204);
  T420 = accessorF204;
  setterF205 = T420;
  T415 = fun_203;
  T414 = (P)YPPslot(CHKREF(YLslotG),CHKREF(Yslot_type),CHKREF(Yslot_type_setter),CHKREF(YLanyG),T415);
  slotF206 = T414;
  (P)YPmet_env_setter(slotF206,getterF203);
  (P)YPmet_env_setter(slotF206,setterF205);
  T413 = CALL2(CHKREF(YPadd_slot),CHKREF(YLslotG),slotF206);
  T412 = T413;
  T411 = T412;
  lit_72 = YPPsym((P)"slot-init-setter");
  lit_73 = YPPsym((P)"slot-init");
  T435 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T434 = fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T435,ENVNUL);
  T433 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T432 = fun_207 = YPmet(FUNCODEREF(fun_207),YPfalse,T433,ENVNUL);
  T431 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLslotG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  T430 = fun_208 = YPmet(FUNCODEREF(fun_208),YPfalse,T431,ENVNUL);
  T429 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLslotG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T428 = fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T429,ENVNUL);
  T450 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T449 = (P)YPsig(Ynil,T450,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T448 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_73),T449,Ynil,YPfalse);
  Yslot_init = T448;
  regsym(&Yslot_init,"boot","slot-init");
  T452 = fun_209;
  accessorF197 = T452;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_init),accessorF197);
  T451 = accessorF197;
  getterF198 = T451;
  T445 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T444 = (P)YPpair(CHKREF(YLanyG),T445);
  T443 = (P)YPsig(Ynil,T444,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T442 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_72),T443,Ynil,YPfalse);
  Yslot_init_setter = T442;
  regsym(&Yslot_init_setter,"boot","slot-init-setter");
  T447 = fun_208;
  accessorF199 = T447;
  CALL2(CHKREF(YPadd_met),CHKREF(Yslot_init_setter),accessorF199);
  T446 = accessorF199;
  setterF200 = T446;
  T441 = fun_207;
  T440 = (P)YPPslot(CHKREF(YLslotG),CHKREF(Yslot_init),CHKREF(Yslot_init_setter),CHKREF(YLfunG),T441);
  slotF201 = T440;
  (P)YPmet_env_setter(slotF201,getterF198);
  (P)YPmet_env_setter(slotF201,setterF200);
  T439 = CALL2(CHKREF(YPadd_slot),CHKREF(YLslotG),slotF201);
  T438 = T439;
  T437 = T438;
  T436 = T437;
  T427 = T436;
  return T427;
}

P Y___main_6___() {
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
  lit_74 = YPPsym((P)"gen-cache-singletons-setter");
  lit_75 = YPPsym((P)"gen-cache-singletons");
  T2 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T2,ENVNUL);
  T1 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLgen_cacheG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_211 = YPmet(FUNCODEREF(fun_211),YPfalse,T1,ENVNUL);
  T0 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLgen_cacheG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_212 = YPmet(FUNCODEREF(fun_212),YPfalse,T0,ENVNUL);
  T16 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T15 = (P)YPsig(Ynil,T16,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T14 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_75),T15,Ynil,YPfalse);
  Ygen_cache_singletons = T14;
  regsym(&Ygen_cache_singletons,"boot","gen-cache-singletons");
  T18 = fun_212;
  accessorF372 = T18;
  CALL2(CHKREF(YPadd_met),CHKREF(Ygen_cache_singletons),accessorF372);
  T17 = accessorF372;
  getterF373 = T17;
  T11 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T10 = (P)YPpair(CHKREF(YLanyG),T11);
  T9 = (P)YPsig(Ynil,T10,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T8 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_74),T9,Ynil,YPfalse);
  Ygen_cache_singletons_setter = T8;
  regsym(&Ygen_cache_singletons_setter,"boot","gen-cache-singletons-setter");
  T13 = fun_211;
  accessorF374 = T13;
  CALL2(CHKREF(YPadd_met),CHKREF(Ygen_cache_singletons_setter),accessorF374);
  T12 = accessorF374;
  setterF375 = T12;
  T7 = fun_210;
  T6 = (P)YPPslot(CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_singletons),CHKREF(Ygen_cache_singletons_setter),CHKREF(YLlstG),T7);
  slotF376 = T6;
  (P)YPmet_env_setter(slotF376,getterF373);
  (P)YPmet_env_setter(slotF376,setterF375);
  T5 = CALL2(CHKREF(YPadd_slot),CHKREF(YLgen_cacheG),slotF376);
  T4 = T5;
  T3 = T4;
  lit_76 = YPPsym((P)"gen-cache-classes-setter");
  lit_77 = YPPsym((P)"gen-cache-classes");
  T21 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_213 = YPmet(FUNCODEREF(fun_213),YPfalse,T21,ENVNUL);
  T20 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLgen_cacheG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_214 = YPmet(FUNCODEREF(fun_214),YPfalse,T20,ENVNUL);
  T19 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLgen_cacheG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T19,ENVNUL);
  T35 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T34 = (P)YPsig(Ynil,T35,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T33 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_77),T34,Ynil,YPfalse);
  Ygen_cache_classes = T33;
  regsym(&Ygen_cache_classes,"boot","gen-cache-classes");
  T37 = fun_215;
  accessorF367 = T37;
  CALL2(CHKREF(YPadd_met),CHKREF(Ygen_cache_classes),accessorF367);
  T36 = accessorF367;
  getterF368 = T36;
  T30 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T29 = (P)YPpair(CHKREF(YLanyG),T30);
  T28 = (P)YPsig(Ynil,T29,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T27 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_76),T28,Ynil,YPfalse);
  Ygen_cache_classes_setter = T27;
  regsym(&Ygen_cache_classes_setter,"boot","gen-cache-classes-setter");
  T32 = fun_214;
  accessorF369 = T32;
  CALL2(CHKREF(YPadd_met),CHKREF(Ygen_cache_classes_setter),accessorF369);
  T31 = accessorF369;
  setterF370 = T31;
  T26 = fun_213;
  T25 = (P)YPPslot(CHKREF(YLgen_cacheG),CHKREF(Ygen_cache_classes),CHKREF(Ygen_cache_classes_setter),CHKREF(YLlstG),T26);
  slotF371 = T25;
  (P)YPmet_env_setter(slotF371,getterF368);
  (P)YPmet_env_setter(slotF371,setterF370);
  T24 = CALL2(CHKREF(YPadd_slot),CHKREF(YLgen_cacheG),slotF371);
  T23 = T24;
  T22 = T23;
  lit_78 = YPPsym((P)"sig-names-setter");
  lit_79 = YPPsym((P)"sig-names");
  T40 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T40,ENVNUL);
  T39 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_217 = YPmet(FUNCODEREF(fun_217),YPfalse,T39,ENVNUL);
  T38 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_218 = YPmet(FUNCODEREF(fun_218),YPfalse,T38,ENVNUL);
  T54 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T53 = (P)YPsig(Ynil,T54,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T52 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_79),T53,Ynil,YPfalse);
  Ysig_names = T52;
  regsym(&Ysig_names,"boot","sig-names");
  T56 = fun_218;
  accessorF362 = T56;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_names),accessorF362);
  T55 = accessorF362;
  getterF363 = T55;
  T49 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T48 = (P)YPpair(CHKREF(YLanyG),T49);
  T47 = (P)YPsig(Ynil,T48,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T46 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_78),T47,Ynil,YPfalse);
  Ysig_names_setter = T46;
  regsym(&Ysig_names_setter,"boot","sig-names-setter");
  T51 = fun_217;
  accessorF364 = T51;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_names_setter),accessorF364);
  T50 = accessorF364;
  setterF365 = T50;
  T45 = fun_216;
  T44 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_names),CHKREF(Ysig_names_setter),CHKREF(YLlstG),T45);
  slotF366 = T44;
  (P)YPmet_env_setter(slotF366,getterF363);
  (P)YPmet_env_setter(slotF366,setterF365);
  T43 = CALL2(CHKREF(YPadd_slot),CHKREF(YLsigG),slotF366);
  T42 = T43;
  T41 = T42;
  lit_80 = YPPsym((P)"sig-specs-setter");
  lit_81 = YPPsym((P)"sig-specs");
  T59 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T59,ENVNUL);
  T58 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T58,ENVNUL);
  T57 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T57,ENVNUL);
  T73 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T72 = (P)YPsig(Ynil,T73,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T71 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_81),T72,Ynil,YPfalse);
  Ysig_specs = T71;
  regsym(&Ysig_specs,"boot","sig-specs");
  T75 = fun_221;
  accessorF357 = T75;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_specs),accessorF357);
  T74 = accessorF357;
  getterF358 = T74;
  T68 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T67 = (P)YPpair(CHKREF(YLanyG),T68);
  T66 = (P)YPsig(Ynil,T67,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T65 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_80),T66,Ynil,YPfalse);
  Ysig_specs_setter = T65;
  regsym(&Ysig_specs_setter,"boot","sig-specs-setter");
  T70 = fun_220;
  accessorF359 = T70;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_specs_setter),accessorF359);
  T69 = accessorF359;
  setterF360 = T69;
  T64 = fun_219;
  T63 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_specs),CHKREF(Ysig_specs_setter),CHKREF(YLlstG),T64);
  slotF361 = T63;
  (P)YPmet_env_setter(slotF361,getterF358);
  (P)YPmet_env_setter(slotF361,setterF360);
  T62 = CALL2(CHKREF(YPadd_slot),CHKREF(YLsigG),slotF361);
  T61 = T62;
  T60 = T61;
  lit_82 = YPPsym((P)"sig-nary?-setter");
  lit_83 = YPPsym((P)"sig-nary?");
  T78 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T78,ENVNUL);
  T77 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlogG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_223 = YPmet(FUNCODEREF(fun_223),YPfalse,T77,ENVNUL);
  T76 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_224 = YPmet(FUNCODEREF(fun_224),YPfalse,T76,ENVNUL);
  T92 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T91 = (P)YPsig(Ynil,T92,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T90 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_83),T91,Ynil,YPfalse);
  Ysig_naryQ = T90;
  regsym(&Ysig_naryQ,"boot","sig-nary?");
  T94 = fun_224;
  accessorF352 = T94;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_naryQ),accessorF352);
  T93 = accessorF352;
  getterF353 = T93;
  T87 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T86 = (P)YPpair(CHKREF(YLanyG),T87);
  T85 = (P)YPsig(Ynil,T86,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T84 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_82),T85,Ynil,YPfalse);
  Ysig_naryQ_setter = T84;
  regsym(&Ysig_naryQ_setter,"boot","sig-nary?-setter");
  T89 = fun_223;
  accessorF354 = T89;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_naryQ_setter),accessorF354);
  T88 = accessorF354;
  setterF355 = T88;
  T83 = fun_222;
  T82 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_naryQ),CHKREF(Ysig_naryQ_setter),CHKREF(YLlogG),T83);
  slotF356 = T82;
  (P)YPmet_env_setter(slotF356,getterF353);
  (P)YPmet_env_setter(slotF356,setterF355);
  T81 = CALL2(CHKREF(YPadd_slot),CHKREF(YLsigG),slotF356);
  T80 = T81;
  T79 = T80;
  lit_84 = YPPsym((P)"sig-arity-setter");
  lit_85 = YPPsym((P)"sig-arity");
  T97 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T97,ENVNUL);
  T96 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLintG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_226 = YPmet(FUNCODEREF(fun_226),YPfalse,T96,ENVNUL);
  T95 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_227 = YPmet(FUNCODEREF(fun_227),YPfalse,T95,ENVNUL);
  T111 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T110 = (P)YPsig(Ynil,T111,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T109 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_85),T110,Ynil,YPfalse);
  Ysig_arity = T109;
  regsym(&Ysig_arity,"boot","sig-arity");
  T113 = fun_227;
  accessorF347 = T113;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_arity),accessorF347);
  T112 = accessorF347;
  getterF348 = T112;
  T106 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T105 = (P)YPpair(CHKREF(YLanyG),T106);
  T104 = (P)YPsig(Ynil,T105,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T103 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_84),T104,Ynil,YPfalse);
  Ysig_arity_setter = T103;
  regsym(&Ysig_arity_setter,"boot","sig-arity-setter");
  T108 = fun_226;
  accessorF349 = T108;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_arity_setter),accessorF349);
  T107 = accessorF349;
  setterF350 = T107;
  T102 = fun_225;
  T101 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_arity),CHKREF(Ysig_arity_setter),CHKREF(YLintG),T102);
  slotF351 = T101;
  (P)YPmet_env_setter(slotF351,getterF348);
  (P)YPmet_env_setter(slotF351,setterF350);
  T100 = CALL2(CHKREF(YPadd_slot),CHKREF(YLsigG),slotF351);
  T99 = T100;
  T98 = T99;
  lit_86 = YPPsym((P)"sig-value-setter");
  lit_87 = YPPsym((P)"sig-value");
  T116 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_228 = YPmet(FUNCODEREF(fun_228),YPfalse,T116,ENVNUL);
  T115 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLsigG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_229 = YPmet(FUNCODEREF(fun_229),YPfalse,T115,ENVNUL);
  T114 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLsigG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_230 = YPmet(FUNCODEREF(fun_230),YPfalse,T114,ENVNUL);
  T130 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T129 = (P)YPsig(Ynil,T130,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T128 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_87),T129,Ynil,YPfalse);
  Ysig_value = T128;
  regsym(&Ysig_value,"boot","sig-value");
  T132 = fun_230;
  accessorF342 = T132;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_value),accessorF342);
  T131 = accessorF342;
  getterF343 = T131;
  T125 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T124 = (P)YPpair(CHKREF(YLanyG),T125);
  T123 = (P)YPsig(Ynil,T124,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T122 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_86),T123,Ynil,YPfalse);
  Ysig_value_setter = T122;
  regsym(&Ysig_value_setter,"boot","sig-value-setter");
  T127 = fun_229;
  accessorF344 = T127;
  CALL2(CHKREF(YPadd_met),CHKREF(Ysig_value_setter),accessorF344);
  T126 = accessorF344;
  setterF345 = T126;
  T121 = fun_228;
  T120 = (P)YPPslot(CHKREF(YLsigG),CHKREF(Ysig_value),CHKREF(Ysig_value_setter),CHKREF(YLanyG),T121);
  slotF346 = T120;
  (P)YPmet_env_setter(slotF346,getterF343);
  (P)YPmet_env_setter(slotF346,setterF345);
  T119 = CALL2(CHKREF(YPadd_slot),CHKREF(YLsigG),slotF346);
  T118 = T119;
  T117 = T118;
  lit_88 = YPPsym((P)"fun-code-setter");
  lit_89 = YPPsym((P)"fun-code");
  T135 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_231 = YPmet(FUNCODEREF(fun_231),YPfalse,T135,ENVNUL);
  T134 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T134,ENVNUL);
  T133 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_233 = YPmet(FUNCODEREF(fun_233),YPfalse,T133,ENVNUL);
  T149 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T148 = (P)YPsig(Ynil,T149,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T147 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_89),T148,Ynil,YPfalse);
  Yfun_code = T147;
  regsym(&Yfun_code,"boot","fun-code");
  T151 = fun_233;
  accessorF337 = T151;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_code),accessorF337);
  T150 = accessorF337;
  getterF338 = T150;
  T144 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T143 = (P)YPpair(CHKREF(YLanyG),T144);
  T142 = (P)YPsig(Ynil,T143,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T141 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_88),T142,Ynil,YPfalse);
  Yfun_code_setter = T141;
  regsym(&Yfun_code_setter,"boot","fun-code-setter");
  T146 = fun_232;
  accessorF339 = T146;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_code_setter),accessorF339);
  T145 = accessorF339;
  setterF340 = T145;
  T140 = fun_231;
  T139 = (P)YPPslot(CHKREF(YLfunG),CHKREF(Yfun_code),CHKREF(Yfun_code_setter),CHKREF(YLanyG),T140);
  slotF341 = T139;
  (P)YPmet_env_setter(slotF341,getterF338);
  (P)YPmet_env_setter(slotF341,setterF340);
  T138 = CALL2(CHKREF(YPadd_slot),CHKREF(YLfunG),slotF341);
  T137 = T138;
  T136 = T137;
  lit_90 = YPPsym((P)"fun-name-setter");
  lit_91 = YPPsym((P)"fun-name");
  T154 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_234 = YPmet(FUNCODEREF(fun_234),YPfalse,T154,ENVNUL);
  T153 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_235 = YPmet(FUNCODEREF(fun_235),YPfalse,T153,ENVNUL);
  T152 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T152,ENVNUL);
  T168 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T167 = (P)YPsig(Ynil,T168,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T166 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_91),T167,Ynil,YPfalse);
  Yfun_name = T166;
  regsym(&Yfun_name,"boot","fun-name");
  T170 = fun_236;
  accessorF332 = T170;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_name),accessorF332);
  T169 = accessorF332;
  getterF333 = T169;
  T163 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T162 = (P)YPpair(CHKREF(YLanyG),T163);
  T161 = (P)YPsig(Ynil,T162,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T160 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_90),T161,Ynil,YPfalse);
  Yfun_name_setter = T160;
  regsym(&Yfun_name_setter,"boot","fun-name-setter");
  T165 = fun_235;
  accessorF334 = T165;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_name_setter),accessorF334);
  T164 = accessorF334;
  setterF335 = T164;
  T159 = fun_234;
  T158 = (P)YPPslot(CHKREF(YLfunG),CHKREF(Yfun_name),CHKREF(Yfun_name_setter),CHKREF(YLanyG),T159);
  slotF336 = T158;
  (P)YPmet_env_setter(slotF336,getterF333);
  (P)YPmet_env_setter(slotF336,setterF335);
  T157 = CALL2(CHKREF(YPadd_slot),CHKREF(YLfunG),slotF336);
  T156 = T157;
  T155 = T156;
  lit_92 = YPPsym((P)"fun-sig-setter");
  lit_93 = YPPsym((P)"fun-sig");
  T173 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_237 = YPmet(FUNCODEREF(fun_237),YPfalse,T173,ENVNUL);
  T172 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLsigG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_238 = YPmet(FUNCODEREF(fun_238),YPfalse,T172,ENVNUL);
  T171 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_239 = YPmet(FUNCODEREF(fun_239),YPfalse,T171,ENVNUL);
  T187 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T186 = (P)YPsig(Ynil,T187,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T185 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_93),T186,Ynil,YPfalse);
  Yfun_sig = T185;
  regsym(&Yfun_sig,"boot","fun-sig");
  T189 = fun_239;
  accessorF327 = T189;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_sig),accessorF327);
  T188 = accessorF327;
  getterF328 = T188;
  T182 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T181 = (P)YPpair(CHKREF(YLanyG),T182);
  T180 = (P)YPsig(Ynil,T181,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T179 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_92),T180,Ynil,YPfalse);
  Yfun_sig_setter = T179;
  regsym(&Yfun_sig_setter,"boot","fun-sig-setter");
  T184 = fun_238;
  accessorF329 = T184;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_sig_setter),accessorF329);
  T183 = accessorF329;
  setterF330 = T183;
  T178 = fun_237;
  T177 = (P)YPPslot(CHKREF(YLfunG),CHKREF(Yfun_sig),CHKREF(Yfun_sig_setter),CHKREF(YLsigG),T178);
  slotF331 = T177;
  (P)YPmet_env_setter(slotF331,getterF328);
  (P)YPmet_env_setter(slotF331,setterF330);
  T176 = CALL2(CHKREF(YPadd_slot),CHKREF(YLfunG),slotF331);
  T175 = T176;
  T174 = T175;
  lit_94 = YPPsym((P)"fun-env-setter");
  lit_95 = YPPsym((P)"fun-env");
  T192 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_240 = YPmet(FUNCODEREF(fun_240),YPfalse,T192,ENVNUL);
  T191 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_241 = YPmet(FUNCODEREF(fun_241),YPfalse,T191,ENVNUL);
  T190 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLmetG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_242 = YPmet(FUNCODEREF(fun_242),YPfalse,T190,ENVNUL);
  T206 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T205 = (P)YPsig(Ynil,T206,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T204 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_95),T205,Ynil,YPfalse);
  Yfun_env = T204;
  regsym(&Yfun_env,"boot","fun-env");
  T208 = fun_242;
  accessorF322 = T208;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_env),accessorF322);
  T207 = accessorF322;
  getterF323 = T207;
  T201 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T200 = (P)YPpair(CHKREF(YLanyG),T201);
  T199 = (P)YPsig(Ynil,T200,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T198 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_94),T199,Ynil,YPfalse);
  Yfun_env_setter = T198;
  regsym(&Yfun_env_setter,"boot","fun-env-setter");
  T203 = fun_241;
  accessorF324 = T203;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_env_setter),accessorF324);
  T202 = accessorF324;
  setterF325 = T202;
  T197 = fun_240;
  T196 = (P)YPPslot(CHKREF(YLmetG),CHKREF(Yfun_env),CHKREF(Yfun_env_setter),CHKREF(YLanyG),T197);
  slotF326 = T196;
  (P)YPmet_env_setter(slotF326,getterF323);
  (P)YPmet_env_setter(slotF326,setterF325);
  T195 = CALL2(CHKREF(YPadd_slot),CHKREF(YLmetG),slotF326);
  T194 = T195;
  T193 = T194;
  lit_96 = YPPsym((P)"fun-mets-setter");
  lit_97 = YPPsym((P)"fun-mets");
  T211 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_243 = YPmet(FUNCODEREF(fun_243),YPfalse,T211,ENVNUL);
  T210 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLgenG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_244 = YPmet(FUNCODEREF(fun_244),YPfalse,T210,ENVNUL);
  T209 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLgenG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_245 = YPmet(FUNCODEREF(fun_245),YPfalse,T209,ENVNUL);
  T225 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T224 = (P)YPsig(Ynil,T225,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T223 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_97),T224,Ynil,YPfalse);
  Yfun_mets = T223;
  regsym(&Yfun_mets,"boot","fun-mets");
  T227 = fun_245;
  accessorF317 = T227;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_mets),accessorF317);
  T226 = accessorF317;
  getterF318 = T226;
  T220 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T219 = (P)YPpair(CHKREF(YLanyG),T220);
  T218 = (P)YPsig(Ynil,T219,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T217 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_96),T218,Ynil,YPfalse);
  Yfun_mets_setter = T217;
  regsym(&Yfun_mets_setter,"boot","fun-mets-setter");
  T222 = fun_244;
  accessorF319 = T222;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_mets_setter),accessorF319);
  T221 = accessorF319;
  setterF320 = T221;
  T216 = fun_243;
  T215 = (P)YPPslot(CHKREF(YLgenG),CHKREF(Yfun_mets),CHKREF(Yfun_mets_setter),CHKREF(YLlstG),T216);
  slotF321 = T215;
  (P)YPmet_env_setter(slotF321,getterF318);
  (P)YPmet_env_setter(slotF321,setterF320);
  T214 = CALL2(CHKREF(YPadd_slot),CHKREF(YLgenG),slotF321);
  T213 = T214;
  T212 = T213;
  lit_98 = YPPsym((P)"fun-cache-setter");
  lit_99 = YPPsym((P)"fun-cache");
  T230 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_246 = YPmet(FUNCODEREF(fun_246),YPfalse,T230,ENVNUL);
  T229 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLgenG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_247 = YPmet(FUNCODEREF(fun_247),YPfalse,T229,ENVNUL);
  T228 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLgenG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_248 = YPmet(FUNCODEREF(fun_248),YPfalse,T228,ENVNUL);
  T244 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T243 = (P)YPsig(Ynil,T244,YPfalse,YPint((P)1),CHKREF(YLanyG));
  T242 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_99),T243,Ynil,YPfalse);
  Yfun_cache = T242;
  regsym(&Yfun_cache,"boot","fun-cache");
  T246 = fun_248;
  accessorF312 = T246;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_cache),accessorF312);
  T245 = accessorF312;
  getterF313 = T245;
  T239 = (P)YPpair(CHKREF(YLanyG),CHKREF(Ynil));
  T238 = (P)YPpair(CHKREF(YLanyG),T239);
  T237 = (P)YPsig(Ynil,T238,YPfalse,YPint((P)2),CHKREF(YLanyG));
  T236 = (P)YPgen(CHKREF(YPearly_dispatch),CHKREF(lit_98),T237,Ynil,YPfalse);
  Yfun_cache_setter = T236;
  regsym(&Yfun_cache_setter,"boot","fun-cache-setter");
  T241 = fun_247;
  accessorF314 = T241;
  CALL2(CHKREF(YPadd_met),CHKREF(Yfun_cache_setter),accessorF314);
  T240 = accessorF314;
  setterF315 = T240;
  T235 = fun_246;
  T234 = (P)YPPslot(CHKREF(YLgenG),CHKREF(Yfun_cache),CHKREF(Yfun_cache_setter),CHKREF(YLanyG),T235);
  slotF316 = T234;
  (P)YPmet_env_setter(slotF316,getterF313);
  (P)YPmet_env_setter(slotF316,setterF315);
  T233 = CALL2(CHKREF(YPadd_slot),CHKREF(YLgenG),slotF316);
  T232 = T233;
  T231 = T232;
  lit_100 = YPPsym((P)"%collect-direct-slots");
  lit_101 = YPPsym((P)"traits");
  T247 = YPsig(YPPlist(1,CHKREF(lit_101)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YPcollect_direct_slots = YPmet(FUNCODEREF(YPcollect_direct_slots),CHKREF(lit_100),T247,ENVNUL);
  T248 = YPcollect_direct_slots;
  YPcollect_direct_slots = T248;
  regsym(&YPcollect_direct_slots,"boot","%collect-direct-slots");
  lit_102 = YPPsym((P)"%finalize-slots!");
  T249 = YPsig(YPPlist(1,CHKREF(lit_16)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YPfinalize_slotsX = YPmet(FUNCODEREF(YPfinalize_slotsX),CHKREF(lit_102),T249,ENVNUL);
  T250 = YPfinalize_slotsX;
  YPfinalize_slotsX = T250;
  regsym(&YPfinalize_slotsX,"boot","%finalize-slots!");
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLanyG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(Ynul));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(Ynul_slot));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLlogG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YPtrue));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YPfalse));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLchrG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLnumG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLintG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLfloG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLlocG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLcolG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLseqG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLlstG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(Ynil));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLflatG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLvecG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLstrG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLsymG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLtraitsG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLslotG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLgen_cacheG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLsigG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLfunG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLmetG));
  CALL1(CHKREF(YPfinalize_slotsX),CHKREF(YLgenG));
  (P)YPpatch_lst(Ynil);
  (P)YPpatch_lst(CHKREF(YLlstG));
  lit_103 = YPPsym((P)"@@==");
  T251 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_12)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  YOOEE = YPmet(FUNCODEREF(YOOEE),CHKREF(lit_103),T251,ENVNUL);
  T252 = YOOEE;
  YOOEE = T252;
  regsym(&YOOEE,"boot","@@==");
  lit_104 = YPPsym((P)"not");
  T253 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  Ynot = YPmet(FUNCODEREF(Ynot),CHKREF(lit_104),T253,ENVNUL);
  T254 = Ynot;
  Ynot = T254;
  regsym(&Ynot,"boot","not");
  lit_105 = YPPsym((P)"@@empty?");
  T255 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  YOOemptyQ = YPmet(FUNCODEREF(YOOemptyQ),CHKREF(lit_105),T255,ENVNUL);
  T256 = YOOemptyQ;
  YOOemptyQ = T256;
  regsym(&YOOemptyQ,"boot","@@empty?");
  lit_106 = YPPsym((P)"@rev!");
  T257 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YOrevX = YPmet(FUNCODEREF(YOrevX),CHKREF(lit_106),T257,ENVNUL);
  T258 = YOrevX;
  YOrevX = T258;
  regsym(&YOrevX,"boot","@rev!");
  lit_107 = YPPsym((P)"@all?");
  lit_108 = YPPsym((P)"c");
  lit_109 = YPPsym((P)"test");
  lit_110 = YPPsym((P)"fnd");
  lit_111 = YPPsym((P)"p");
  T260 = YPsig(YPPlist(1,CHKREF(lit_111)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_fnd_267 = YPmet(FUNCODEREF(fun_fnd_267),CHKREF(lit_110),T260,ENVNUL);
  T259 = YPsig(YPPlist(2,CHKREF(lit_109),CHKREF(lit_108)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  YOallQ = YPmet(FUNCODEREF(YOallQ),CHKREF(lit_107),T259,ENVNUL);
  T261 = YOallQ;
  YOallQ = T261;
  regsym(&YOallQ,"boot","@all?");
  lit_112 = YPPsym((P)"@all2?");
  lit_113 = YPPsym((P)"py");
  lit_114 = YPPsym((P)"px");
  T263 = YPsig(YPPlist(2,CHKREF(lit_114),CHKREF(lit_113)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fnd_269 = YPmet(FUNCODEREF(fun_fnd_269),CHKREF(lit_110),T263,ENVNUL);
  T262 = YPsig(YPPlist(3,CHKREF(lit_109),CHKREF(lit_9),CHKREF(lit_12)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLlogG));
  YOall2Q = YPmet(FUNCODEREF(YOall2Q),CHKREF(lit_112),T262,ENVNUL);
  T264 = YOall2Q;
  YOall2Q = T264;
  regsym(&YOall2Q,"boot","@all2?");
  lit_115 = YPPsym((P)"@elt");
  lit_116 = YPPsym((P)"key");
  lit_117 = YPPsym((P)"count");
  T266 = YPsig(YPPlist(2,CHKREF(lit_117),CHKREF(lit_9)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fnd_271 = YPmet(FUNCODEREF(fun_fnd_271),CHKREF(lit_110),T266,ENVNUL);
  T265 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_116)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOelt = YPmet(FUNCODEREF(YOelt),CHKREF(lit_115),T265,ENVNUL);
  T267 = YOelt;
  YOelt = T267;
  regsym(&YOelt,"boot","@elt");
  lit_118 = YPPsym((P)"@fill");
  lit_119 = YPPsym((P)"f");
  T272 = YPsig(YPPlist(1,CHKREF(lit_111)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  T271 = fun_loop_273 = YPmet(FUNCODEREF(fun_loop_273),CHKREF(lit_5),T272,ENVNUL);
  T270 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_119)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  T269 = YOfill = YPmet(FUNCODEREF(YOfill),CHKREF(lit_118),T270,ENVNUL);
  T274 = YOfill;
  T273 = YOfill = T274;
  regsym(&YOfill,"boot","@fill");
  T268 = T273;
  return T268;
}

P Y___main_7___() {
  P T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99;
  P T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83;
  P T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
loop:
  lit_120 = YPPsym((P)"@any?");
  T1 = YPsig(YPPlist(1,CHKREF(lit_111)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_fnd_275 = YPmet(FUNCODEREF(fun_fnd_275),CHKREF(lit_110),T1,ENVNUL);
  T0 = YPsig(YPPlist(2,CHKREF(lit_109),CHKREF(lit_108)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOanyQ = YPmet(FUNCODEREF(YOanyQ),CHKREF(lit_120),T0,ENVNUL);
  T2 = YOanyQ;
  YOanyQ = T2;
  regsym(&YOanyQ,"boot","@any?");
  lit_121 = YPPsym((P)"@map");
  lit_122 = YPPsym((P)"do");
  lit_123 = YPPsym((P)"res");
  T4 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_123)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_do_280 = YPmet(FUNCODEREF(fun_do_280),CHKREF(lit_122),T4,ENVNUL);
  T3 = YPsig(YPPlist(2,CHKREF(lit_119),CHKREF(lit_9)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  YOmap = YPmet(FUNCODEREF(YOmap),CHKREF(lit_121),T3,ENVNUL);
  T5 = YOmap;
  YOmap = T5;
  regsym(&YOmap,"boot","@map");
  lit_124 = YPPsym((P)"@do");
  T7 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_do_282 = YPmet(FUNCODEREF(fun_do_282),CHKREF(lit_122),T7,ENVNUL);
  T6 = YPsig(YPPlist(2,CHKREF(lit_119),CHKREF(lit_9)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOdo = YPmet(FUNCODEREF(YOdo),CHKREF(lit_124),T6,ENVNUL);
  T8 = YOdo;
  YOdo = T8;
  regsym(&YOdo,"boot","@do");
  lit_125 = YPPsym((P)"@alter");
  lit_126 = YPPsym((P)"src");
  lit_127 = YPPsym((P)"dst");
  lit_128 = YPPsym((P)"in");
  lit_129 = YPPsym((P)"ss");
  lit_130 = YPPsym((P)"ds");
  T10 = YPsig(YPPlist(2,CHKREF(lit_130),CHKREF(lit_129)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_in_284 = YPmet(FUNCODEREF(fun_in_284),CHKREF(lit_128),T10,ENVNUL);
  T9 = YPsig(YPPlist(2,CHKREF(lit_127),CHKREF(lit_126)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  YOalter = YPmet(FUNCODEREF(YOalter),CHKREF(lit_125),T9,ENVNUL);
  T11 = YOalter;
  YOalter = T11;
  regsym(&YOalter,"boot","@alter");
  lit_131 = YPPsym((P)"@fab");
  lit_132 = YPPsym((P)"fab");
  T13 = YPsig(YPPlist(2,CHKREF(lit_18),CHKREF(lit_123)),YPPlist(2,CHKREF(YLintG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fab_286 = YPmet(FUNCODEREF(fun_fab_286),CHKREF(lit_132),T13,ENVNUL);
  T12 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_3)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  YOfab = YPmet(FUNCODEREF(YOfab),CHKREF(lit_131),T12,ENVNUL);
  T14 = YOfab;
  YOfab = T14;
  regsym(&YOfab,"boot","@fab");
  lit_133 = YPPsym((P)"@reduce");
  lit_134 = YPPsym((P)"init");
  lit_135 = YPPsym((P)"combine");
  lit_136 = YPPsym((P)"red");
  T16 = YPsig(YPPlist(2,CHKREF(lit_123),CHKREF(lit_108)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_red_288 = YPmet(FUNCODEREF(fun_red_288),CHKREF(lit_136),T16,ENVNUL);
  T15 = YPsig(YPPlist(3,CHKREF(lit_135),CHKREF(lit_134),CHKREF(lit_108)),YPPlist(3,CHKREF(YLfunG),CHKREF(YLanyG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLlstG));
  YOreduce = YPmet(FUNCODEREF(YOreduce),CHKREF(lit_133),T15,ENVNUL);
  T17 = YOreduce;
  YOreduce = T17;
  regsym(&YOreduce,"boot","@reduce");
  lit_137 = YPPsym((P)"@cat2");
  T18 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_12)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  YOcat2 = YPmet(FUNCODEREF(YOcat2),CHKREF(lit_137),T18,ENVNUL);
  T19 = YOcat2;
  YOcat2 = T19;
  regsym(&YOcat2,"boot","@cat2");
  lit_138 = YPPsym((P)"@find-key");
  T21 = YPsig(YPPlist(2,CHKREF(lit_108),CHKREF(lit_18)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_fnd_291 = YPmet(FUNCODEREF(fun_fnd_291),CHKREF(lit_110),T21,ENVNUL);
  T20 = YPsig(YPPlist(2,CHKREF(lit_119),CHKREF(lit_108)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOfind_key = YPmet(FUNCODEREF(YOfind_key),CHKREF(lit_138),T20,ENVNUL);
  T22 = YOfind_key;
  YOfind_key = T22;
  regsym(&YOfind_key,"boot","@find-key");
  lit_139 = YPPsym((P)"@mem?");
  T24 = YPsig(YPPlist(1,CHKREF(lit_12)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_293 = YPmet(FUNCODEREF(fun_293),YPfalse,T24,ENVNUL);
  T23 = YPsig(YPPlist(2,CHKREF(lit_108),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  YOmemQ = YPmet(FUNCODEREF(YOmemQ),CHKREF(lit_139),T23,ENVNUL);
  T25 = YOmemQ;
  YOmemQ = T25;
  regsym(&YOmemQ,"boot","@mem?");
  lit_140 = YPPsym((P)"@del-dups");
  lit_141 = YPPsym((P)"e");
  T27 = YPsig(YPPlist(2,CHKREF(lit_3),CHKREF(lit_141)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_295 = YPmet(FUNCODEREF(fun_295),YPfalse,T27,ENVNUL);
  T26 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YOdel_dups = YPmet(FUNCODEREF(YOdel_dups),CHKREF(lit_140),T26,ENVNUL);
  T28 = YOdel_dups;
  YOdel_dups = T28;
  regsym(&YOdel_dups,"boot","@del-dups");
  lit_142 = YPPsym((P)"@lst");
  lit_143 = YPPsym((P)"objects");
  T29 = YPsig(YPPlist(1,CHKREF(lit_143)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG));
  YOlst = YPmet(FUNCODEREF(YOlst),CHKREF(lit_142),T29,ENVNUL);
  T30 = YOlst;
  YOlst = T30;
  regsym(&YOlst,"boot","@lst");
  lit_144 = YPPsym((P)"@fun-names");
  T31 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YOfun_names = YPmet(FUNCODEREF(YOfun_names),CHKREF(lit_144),T31,ENVNUL);
  T32 = YOfun_names;
  YOfun_names = T32;
  regsym(&YOfun_names,"boot","@fun-names");
  lit_145 = YPPsym((P)"@fun-specs");
  T33 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YOfun_specs = YPmet(FUNCODEREF(YOfun_specs),CHKREF(lit_145),T33,ENVNUL);
  T34 = YOfun_specs;
  YOfun_specs = T34;
  regsym(&YOfun_specs,"boot","@fun-specs");
  lit_146 = YPPsym((P)"@fun-nary?");
  T35 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  YOfun_naryQ = YPmet(FUNCODEREF(YOfun_naryQ),CHKREF(lit_146),T35,ENVNUL);
  T36 = YOfun_naryQ;
  YOfun_naryQ = T36;
  regsym(&YOfun_naryQ,"boot","@fun-nary?");
  lit_147 = YPPsym((P)"@fun-arity");
  T37 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLintG));
  YOfun_arity = YPmet(FUNCODEREF(YOfun_arity),CHKREF(lit_147),T37,ENVNUL);
  T38 = YOfun_arity;
  YOfun_arity = T38;
  regsym(&YOfun_arity,"boot","@fun-arity");
  lit_148 = YPPsym((P)"@fun-value");
  T39 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YOfun_value = YPmet(FUNCODEREF(YOfun_value),CHKREF(lit_148),T39,ENVNUL);
  T40 = YOfun_value;
  YOfun_value = T40;
  regsym(&YOfun_value,"boot","@fun-value");
  lit_149 = YPPsym((P)"@fun-mets");
  T41 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLfunG)),YPfalse,YPint((P)1),CHKREF(YLlstG));
  YOfun_mets = YPmet(FUNCODEREF(YOfun_mets),CHKREF(lit_149),T41,ENVNUL);
  T42 = YOfun_mets;
  YOfun_mets = T42;
  regsym(&YOfun_mets,"boot","@fun-mets");
  lit_150 = YPPsym((P)"@fun-mets-setter");
  T43 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOfun_mets_setter = YPmet(FUNCODEREF(YOfun_mets_setter),CHKREF(lit_150),T43,ENVNUL);
  T44 = YOfun_mets_setter;
  YOfun_mets_setter = T44;
  regsym(&YOfun_mets_setter,"boot","@fun-mets-setter");
  YLenvG = CHKREF(YLanyG);
  regsym(&YLenvG,"boot","<env>");
  YLspecsG = CHKREF(YLlstG);
  regsym(&YLspecsG,"boot","<specs>");
  YLbodyG = CHKREF(YLanyG);
  regsym(&YLbodyG,"boot","<body>");
  lit_151 = YPPsym((P)"fun-spec");
  T45 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_18)),YPPlist(2,CHKREF(YLmetG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yfun_spec = YPmet(FUNCODEREF(Yfun_spec),CHKREF(lit_151),T45,ENVNUL);
  T46 = Yfun_spec;
  Yfun_spec = T46;
  regsym(&Yfun_spec,"boot","fun-spec");
  YLmetsG = CHKREF(YLlstG);
  regsym(&YLmetsG,"boot","<mets>");
  lit_152 = YPPsym((P)"fun-same-met?");
  T47 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_12)),YPPlist(2,CHKREF(YLmetG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  Yfun_same_metQ = YPmet(FUNCODEREF(Yfun_same_metQ),CHKREF(lit_152),T47,ENVNUL);
  T48 = Yfun_same_metQ;
  Yfun_same_metQ = T48;
  regsym(&Yfun_same_metQ,"boot","fun-same-met?");
  lit_153 = YPPsym((P)"fun-congruent?");
  T49 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_12)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  Yfun_congruentQ = YPmet(FUNCODEREF(Yfun_congruentQ),CHKREF(lit_153),T49,ENVNUL);
  T50 = Yfun_congruentQ;
  Yfun_congruentQ = T50;
  regsym(&Yfun_congruentQ,"boot","fun-congruent?");
  YTrestarts_okQT = YPfalse;
  regsym(&YTrestarts_okQT,"boot","*restarts-ok?*");
  lit_154 = YPPsym((P)"gen-add-met");
  lit_155 = YPPsym((P)"m");
  lit_156 = YPPsym((P)"g");
  lit_157 = YPPsym((P)"col");
  lit_158 = YPPsym((P)"gms");
  lit_159 = YPPsym((P)"same?");
  lit_160 = YPPsym((P)"mets");
  lit_161 = YPPsym((P)"lop");
  lit_162 = YPPsym((P)"specs");
  lit_163 = YPPsym((P)"return");
  lit_164 = YPsb((P)"Replace %= with an empty generic congruent with %=");
  T57 = YPsig(YPPlist(3,CHKREF(lit_160),CHKREF(lit_159),CHKREF(lit_158)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLmetsG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_col_308 = YPmet(FUNCODEREF(fun_col_308),CHKREF(lit_157),T57,ENVNUL);
  T56 = YPsig(YPPlist(1,CHKREF(lit_162)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_lop_309 = YPmet(FUNCODEREF(fun_lop_309),CHKREF(lit_161),T56,ENVNUL);
  T55 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_310 = YPmet(FUNCODEREF(fun_310),YPfalse,T55,ENVNUL);
  T54 = YPsig(YPPlist(2,CHKREF(lit_108),CHKREF(lit_6)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_311 = YPmet(FUNCODEREF(fun_311),YPfalse,T54,ENVNUL);
  T53 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  fun_312 = YPmet(FUNCODEREF(fun_312),YPfalse,T53,ENVNUL);
  T52 = YPsig(YPPlist(1,CHKREF(lit_163)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_313 = YPmet(FUNCODEREF(fun_313),YPfalse,T52,ENVNUL);
  T51 = YPsig(YPPlist(2,CHKREF(lit_156),CHKREF(lit_155)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLgenG));
  Ygen_add_met = YPmet(FUNCODEREF(Ygen_add_met),CHKREF(lit_154),T51,ENVNUL);
  T58 = Ygen_add_met;
  Ygen_add_met = T58;
  regsym(&Ygen_add_met,"boot","gen-add-met");
  YLargsG = CHKREF(YLlstG);
  regsym(&YLargsG,"boot","<args>");
  lit_165 = YPPsym((P)"isa?");
  lit_166 = YPPsym((P)"o2");
  lit_167 = YPPsym((P)"o1");
  T59 = YPsig(YPPlist(2,CHKREF(lit_167),CHKREF(lit_166)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  YisaQ = YPmet(FUNCODEREF(YisaQ),CHKREF(lit_165),T59,ENVNUL);
  T60 = YisaQ;
  YisaQ = T60;
  regsym(&YisaQ,"boot","isa?");
  lit_168 = YPPsym((P)"object<");
  lit_169 = YPPsym((P)"wrt");
  lit_170 = YPPsym((P)"find");
  lit_171 = YPPsym((P)"ps");
  lit_172 = YPsb((P)"neither %= nor %=");
  lit_173 = YPsb((P)"can't order specializers - arg/reference object %= is ");
  T62 = YPsig(YPPlist(1,CHKREF(lit_171)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_find_319 = YPmet(FUNCODEREF(fun_find_319),CHKREF(lit_170),T62,ENVNUL);
  T61 = YPsig(YPPlist(3,CHKREF(lit_167),CHKREF(lit_166),CHKREF(lit_169)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLlogG));
  YobjectL = YPmet(FUNCODEREF(YobjectL),CHKREF(lit_168),T61,ENVNUL);
  T63 = YobjectL;
  YobjectL = T63;
  regsym(&YobjectL,"boot","object<");
  YLtupG = CHKREF(YLlstG);
  regsym(&YLtupG,"boot","<tup>");
  YOtup = CHKREF(YOlst);
  regsym(&YOtup,"boot","@tup");
  lit_174 = YPPsym((P)"order-specs");
  lit_175 = YPPsym((P)"arg");
  lit_176 = YPPsym((P)"t2");
  lit_177 = YPPsym((P)"t1");
  lit_178 = YPPsym((P)">");
  lit_179 = YPPsym((P)"<");
  lit_180 = YPPsym((P)"=");
  T64 = YPsig(YPPlist(3,CHKREF(lit_177),CHKREF(lit_176),CHKREF(lit_175)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLtupG));
  Yorder_specs = YPmet(FUNCODEREF(Yorder_specs),CHKREF(lit_174),T64,ENVNUL);
  T65 = Yorder_specs;
  Yorder_specs = T65;
  regsym(&Yorder_specs,"boot","order-specs");
  lit_181 = YPPsym((P)"order-mets");
  lit_182 = YPPsym((P)"m2");
  lit_183 = YPPsym((P)"m1");
  lit_184 = YPPsym((P)"idx");
  lit_185 = YPPsym((P)"state");
  lit_186 = YPPsym((P)"<>");
  T67 = YPsig(YPPlist(2,CHKREF(lit_185),CHKREF(lit_184)),YPPlist(2,CHKREF(YLsymG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_322 = YPmet(FUNCODEREF(fun_loop_322),CHKREF(lit_5),T67,ENVNUL);
  T66 = YPsig(YPPlist(3,CHKREF(lit_183),CHKREF(lit_182),CHKREF(lit_20)),YPPlist(3,CHKREF(YLmetG),CHKREF(YLmetG),CHKREF(YLargsG)),YPfalse,YPint((P)3),CHKREF(YLsymG));
  Yorder_mets = YPmet(FUNCODEREF(Yorder_mets),CHKREF(lit_181),T66,ENVNUL);
  T68 = Yorder_mets;
  Yorder_mets = T68;
  regsym(&Yorder_mets,"boot","order-mets");
  lit_187 = YPPsym((P)"sorted-app-mets-1");
  lit_188 = YPPsym((P)"insert");
  lit_189 = YPPsym((P)"osub");
  lit_190 = YPPsym((P)"oprev");
  lit_191 = YPPsym((P)"check-subsequent-ambiguities");
  lit_192 = YPPsym((P)"precedes-all?");
  lit_193 = YPPsym((P)"make-ambiguous");
  lit_194 = YPPsym((P)"headed-list");
  T76 = YPsig(YPPlist(2,CHKREF(lit_190),CHKREF(lit_189)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_insert_324 = YPmet(FUNCODEREF(fun_insert_324),CHKREF(lit_188),T76,ENVNUL);
  T75 = YPsig(YPPlist(1,CHKREF(lit_190)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_check_subsequent_ambiguities_325 = YPmet(FUNCODEREF(fun_check_subsequent_ambiguities_325),CHKREF(lit_191),T75,ENVNUL);
  T74 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_326 = YPmet(FUNCODEREF(fun_loop_326),CHKREF(lit_5),T74,ENVNUL);
  T73 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_precedes_allQ_327 = YPmet(FUNCODEREF(fun_precedes_allQ_327),CHKREF(lit_192),T73,ENVNUL);
  T72 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_328 = YPmet(FUNCODEREF(fun_loop_328),CHKREF(lit_5),T72,ENVNUL);
  T71 = YPsig(YPPlist(1,CHKREF(lit_194)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_make_ambiguous_329 = YPmet(FUNCODEREF(fun_make_ambiguous_329),CHKREF(lit_193),T71,ENVNUL);
  T70 = YPsig(YPPlist(1,CHKREF(lit_160)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_330 = YPmet(FUNCODEREF(fun_loop_330),CHKREF(lit_5),T70,ENVNUL);
  T69 = YPsig(YPPlist(3,CHKREF(lit_160),CHKREF(lit_20),CHKREF(lit_181)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLargsG),CHKREF(YLfunG)),YPfalse,YPint((P)3),CHKREF(YLtupG));
  Ysorted_app_mets_1 = YPmet(FUNCODEREF(Ysorted_app_mets_1),CHKREF(lit_187),T69,ENVNUL);
  T77 = Ysorted_app_mets_1;
  Ysorted_app_mets_1 = T77;
  regsym(&Ysorted_app_mets_1,"boot","sorted-app-mets-1");
  lit_195 = YPPsym((P)"met-app?");
  T79 = YPsig(YPPlist(1,CHKREF(lit_18)),YPPlist(1,CHKREF(YLintG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_332 = YPmet(FUNCODEREF(fun_loop_332),CHKREF(lit_5),T79,ENVNUL);
  T78 = YPsig(YPPlist(2,CHKREF(lit_23),CHKREF(lit_20)),YPPlist(2,CHKREF(YLmetG),CHKREF(YLargsG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  Ymet_appQ = YPmet(FUNCODEREF(Ymet_appQ),CHKREF(lit_195),T78,ENVNUL);
  T80 = Ymet_appQ;
  Ymet_appQ = T80;
  regsym(&Ymet_appQ,"boot","met-app?");
  lit_196 = YPPsym((P)"sorted-app-mets");
  lit_197 = YPPsym((P)"gf");
  lit_198 = YPPsym((P)"ms");
  lit_199 = YPPsym((P)"ans");
  T82 = YPsig(YPPlist(2,CHKREF(lit_199),CHKREF(lit_198)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_col_334 = YPmet(FUNCODEREF(fun_col_334),CHKREF(lit_157),T82,ENVNUL);
  T81 = YPsig(YPPlist(2,CHKREF(lit_197),CHKREF(lit_20)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLargsG)),YPfalse,YPint((P)2),CHKREF(YLtupG));
  Ysorted_app_mets = YPmet(FUNCODEREF(Ysorted_app_mets),CHKREF(lit_196),T81,ENVNUL);
  T83 = Ysorted_app_mets;
  Ysorted_app_mets = T83;
  regsym(&Ysorted_app_mets,"boot","sorted-app-mets");
  lit_200 = YPPsym((P)"opt-args");
  lit_201 = YPPsym((P)"n");
  T85 = YPsig(YPPlist(3,CHKREF(lit_18),CHKREF(lit_7),CHKREF(lit_111)),YPPlist(3,CHKREF(YLintG),CHKREF(YLargsG),CHKREF(YLargsG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  fun_col_336 = YPmet(FUNCODEREF(fun_col_336),CHKREF(lit_157),T85,ENVNUL);
  T84 = YPsig(YPPlist(2,CHKREF(lit_201),CHKREF(lit_20)),YPPlist(2,CHKREF(YLintG),CHKREF(YLargsG)),YPfalse,YPint((P)2),CHKREF(YLargsG));
  Yopt_args = YPmet(FUNCODEREF(Yopt_args),CHKREF(lit_200),T84,ENVNUL);
  T86 = Yopt_args;
  Yopt_args = T86;
  regsym(&Yopt_args,"boot","opt-args");
  lit_202 = YPPsym((P)"@gen-cache-arg-pos");
  T87 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YOgen_cache_arg_pos = YPmet(FUNCODEREF(YOgen_cache_arg_pos),CHKREF(lit_202),T87,ENVNUL);
  T88 = YOgen_cache_arg_pos;
  YOgen_cache_arg_pos = T88;
  regsym(&YOgen_cache_arg_pos,"boot","@gen-cache-arg-pos");
  lit_203 = YPPsym((P)"@gen-cache-arg-pos-setter");
  T89 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOgen_cache_arg_pos_setter = YPmet(FUNCODEREF(YOgen_cache_arg_pos_setter),CHKREF(lit_203),T89,ENVNUL);
  T90 = YOgen_cache_arg_pos_setter;
  YOgen_cache_arg_pos_setter = T90;
  regsym(&YOgen_cache_arg_pos_setter,"boot","@gen-cache-arg-pos-setter");
  lit_204 = YPPsym((P)"@gen-cache-singletons");
  T91 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YOgen_cache_singletons = YPmet(FUNCODEREF(YOgen_cache_singletons),CHKREF(lit_204),T91,ENVNUL);
  T92 = YOgen_cache_singletons;
  YOgen_cache_singletons = T92;
  regsym(&YOgen_cache_singletons,"boot","@gen-cache-singletons");
  lit_205 = YPPsym((P)"@gen-cache-singletons-setter");
  T93 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOgen_cache_singletons_setter = YPmet(FUNCODEREF(YOgen_cache_singletons_setter),CHKREF(lit_205),T93,ENVNUL);
  T94 = YOgen_cache_singletons_setter;
  YOgen_cache_singletons_setter = T94;
  regsym(&YOgen_cache_singletons_setter,"boot","@gen-cache-singletons-setter");
  lit_206 = YPPsym((P)"@gen-cache-classes");
  T95 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YOgen_cache_classes = YPmet(FUNCODEREF(YOgen_cache_classes),CHKREF(lit_206),T95,ENVNUL);
  T96 = YOgen_cache_classes;
  YOgen_cache_classes = T96;
  regsym(&YOgen_cache_classes,"boot","@gen-cache-classes");
  lit_207 = YPPsym((P)"@gen-cache-classes-setter");
  T97 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOgen_cache_classes_setter = YPmet(FUNCODEREF(YOgen_cache_classes_setter),CHKREF(lit_207),T97,ENVNUL);
  T98 = YOgen_cache_classes_setter;
  YOgen_cache_classes_setter = T98;
  regsym(&YOgen_cache_classes_setter,"boot","@gen-cache-classes-setter");
  lit_208 = YPPsym((P)"gen-unspecialized-at?");
  lit_209 = YPPsym((P)"pos");
  T100 = YPsig(YPPlist(1,CHKREF(lit_23)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_344 = YPmet(FUNCODEREF(fun_344),YPfalse,T100,ENVNUL);
  T99 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_209)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLintG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  Ygen_unspecialized_atQ = YPmet(FUNCODEREF(Ygen_unspecialized_atQ),CHKREF(lit_208),T99,ENVNUL);
  T101 = Ygen_unspecialized_atQ;
  Ygen_unspecialized_atQ = T101;
  regsym(&Ygen_unspecialized_atQ,"boot","gen-unspecialized-at?");
  lit_210 = YPPsym((P)"gen-lookup-miss-1-using");
  lit_211 = YPPsym((P)"cache");
  lit_212 = YPPsym((P)"all-assocs-setter");
  lit_213 = YPPsym((P)"all-assocs");
  lit_214 = YPPsym((P)"assocs");
  T103 = YPsig(YPPlist(1,CHKREF(lit_214)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_346 = YPmet(FUNCODEREF(fun_loop_346),CHKREF(lit_5),T103,ENVNUL);
  T102 = YPsig(YPPlist(11,CHKREF(lit_116),CHKREF(lit_213),CHKREF(lit_212),CHKREF(lit_24),CHKREF(lit_211),CHKREF(lit_23),CHKREF(lit_160),CHKREF(lit_18),CHKREF(lit_201),CHKREF(lit_20),CHKREF(lit_162)),YPPlist(11,CHKREF(YLanyG),CHKREF(YLfunG),CHKREF(YLfunG),CHKREF(YLgenG),CHKREF(YLanyG),CHKREF(YLmetG),CHKREF(YLlstG),CHKREF(YLintG),CHKREF(YLintG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)11),CHKREF(YLanyG));
  Ygen_lookup_miss_1_using = YPmet(FUNCODEREF(Ygen_lookup_miss_1_using),CHKREF(lit_210),T102,ENVNUL);
  T104 = Ygen_lookup_miss_1_using;
  Ygen_lookup_miss_1_using = T104;
  regsym(&Ygen_lookup_miss_1_using,"boot","gen-lookup-miss-1-using");
  lit_215 = YPPsym((P)"singleton-spec?");
  T105 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Ysingleton_specQ = YPmet(FUNCODEREF(Ysingleton_specQ),CHKREF(lit_215),T105,ENVNUL);
  T106 = Ysingleton_specQ;
  Ysingleton_specQ = T106;
  regsym(&Ysingleton_specQ,"boot","singleton-spec?");
  T107 = (P)YPobject_traits(CHKREF(YLslotG));
  YLslotG_traits = T107;
  regsym(&YLslotG_traits,"boot","<slot>-traits");
  lit_216 = YPPsym((P)"method-accessor-offset");
  T108 = YPsig(YPPlist(3,CHKREF(lit_24),CHKREF(lit_23),CHKREF(lit_20)),YPPlist(3,CHKREF(YLgenG),CHKREF(YLmetG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  Ymethod_accessor_offset = YPmet(FUNCODEREF(Ymethod_accessor_offset),CHKREF(lit_216),T108,ENVNUL);
  T109 = Ymethod_accessor_offset;
  Ymethod_accessor_offset = T109;
  regsym(&Ymethod_accessor_offset,"boot","method-accessor-offset");
  lit_217 = YPPsym((P)"gen-lookup-miss-1");
  T110 = YPsig(YPPlist(8,CHKREF(lit_24),CHKREF(lit_211),CHKREF(lit_23),CHKREF(lit_160),CHKREF(lit_18),CHKREF(lit_201),CHKREF(lit_20),CHKREF(lit_162)),YPPlist(8,CHKREF(YLgenG),CHKREF(YLanyG),CHKREF(YLmetG),CHKREF(YLlstG),CHKREF(YLintG),CHKREF(YLintG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)8),CHKREF(YLanyG));
  Ygen_lookup_miss_1 = YPmet(FUNCODEREF(Ygen_lookup_miss_1),CHKREF(lit_217),T110,ENVNUL);
  T111 = Ygen_lookup_miss_1;
  Ygen_lookup_miss_1 = T111;
  regsym(&Ygen_lookup_miss_1,"boot","gen-lookup-miss-1");
  T112 = (P)YPtraits_of(CHKREF(YLintG));
  YLintG_traits = T112;
  regsym(&YLintG_traits,"boot","<int>-traits");
  T113 = (P)YPpair(CHKREF(Ynil),CHKREF(Ynil));
  YDmissed_dispatch = T113;
  regsym(&YDmissed_dispatch,"boot","$missed-dispatch");
  T114 = YPfalse;
  return T114;
}

P Y___main_8___() {
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
loop:
  lit_218 = YPPsym((P)"choose-methods");
  lit_219 = YPsb((P)"No Applicable Methods Error when calling %= on %=");
  lit_220 = YPsb((P)"Ambiguous Method Error when calling %= on %=");
  T0 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_20)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  Ychoose_methods = YPmet(FUNCODEREF(Ychoose_methods),CHKREF(lit_218),T0,ENVNUL);
  T1 = Ychoose_methods;
  Ychoose_methods = T1;
  regsym(&Ychoose_methods,"boot","choose-methods");
  lit_221 = YPPsym((P)"met<");
  T2 = YPsig(YPPlist(2,CHKREF(lit_183),CHKREF(lit_182)),YPPlist(2,CHKREF(YLmetG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLlogG));
  YmetL = YPmet(FUNCODEREF(YmetL),CHKREF(lit_221),T2,ENVNUL);
  T3 = YmetL;
  YmetL = T3;
  regsym(&YmetL,"boot","met<");
  lit_222 = YPPsym((P)"met-has-singleton-specs?");
  T4 = YPsig(YPPlist(1,CHKREF(lit_155)),YPPlist(1,CHKREF(YLmetG)),YPfalse,YPint((P)1),CHKREF(YLlogG));
  Ymet_has_singleton_specsQ = YPmet(FUNCODEREF(Ymet_has_singleton_specsQ),CHKREF(lit_222),T4,ENVNUL);
  T5 = Ymet_has_singleton_specsQ;
  Ymet_has_singleton_specsQ = T5;
  regsym(&Ymet_has_singleton_specsQ,"boot","met-has-singleton-specs?");
  lit_223 = YPPsym((P)"find-app-singleton-mets");
  T7 = YPsig(YPPlist(2,CHKREF(lit_123),CHKREF(lit_160)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_359 = YPmet(FUNCODEREF(fun_loop_359),CHKREF(lit_5),T7,ENVNUL);
  T6 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_23)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLlstG));
  Yfind_app_singleton_mets = YPmet(FUNCODEREF(Yfind_app_singleton_mets),CHKREF(lit_223),T6,ENVNUL);
  T8 = Yfind_app_singleton_mets;
  Yfind_app_singleton_mets = T8;
  regsym(&Yfind_app_singleton_mets,"boot","find-app-singleton-mets");
  lit_224 = YPPsym((P)"gen-lookup-miss");
  T10 = YPsig(YPPlist(1,CHKREF(lit_155)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_361 = YPmet(FUNCODEREF(fun_361),YPfalse,T10,ENVNUL);
  T9 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_20)),YPPlist(2,CHKREF(YLgenG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Ygen_lookup_miss = YPmet(FUNCODEREF(Ygen_lookup_miss),CHKREF(lit_224),T9,ENVNUL);
  T11 = Ygen_lookup_miss;
  Ygen_lookup_miss = T11;
  regsym(&Ygen_lookup_miss,"boot","gen-lookup-miss");
  lit_225 = YPPsym((P)"%dispatch");
  T12 = YPsig(YPPlist(1,CHKREF(lit_20)),Ynil,YPtrue,YPint((P)0),CHKREF(YLanyG));
  YPdispatch = YPmet(FUNCODEREF(YPdispatch),CHKREF(lit_225),T12,ENVNUL);
  T13 = YPdispatch;
  YPdispatch = T13;
  regsym(&YPdispatch,"boot","%dispatch");
  lit_226 = YPPsym((P)"%patch-early-generic");
  lit_227 = YPPsym((P)"generic");
  T14 = YPsig(YPPlist(1,CHKREF(lit_227)),YPPlist(1,CHKREF(YLgenG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  YPpatch_early_generic = YPmet(FUNCODEREF(YPpatch_early_generic),CHKREF(lit_226),T14,ENVNUL);
  T15 = YPpatch_early_generic;
  YPpatch_early_generic = T15;
  regsym(&YPpatch_early_generic,"boot","%patch-early-generic");
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(YLgenG));
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
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_owner));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_owner_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_direct_parents));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_direct_parents_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_direct_slots));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_direct_slots_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_parents));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_parents_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_slots));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_slots_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_direct_children));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_direct_children_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_gens));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_gens_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_mets));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_mets_setter));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_forward));
  CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ytraits_forward_setter));
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
  T17 = CALL1(CHKREF(YPpatch_early_generic),CHKREF(Ysig_naryQ));
  T16 = T17;
  return T16;
}

P Y___main_9___() {
  P T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81;
  P T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65;
  P T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
loop:
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
  regsym(&YLoptsG,"boot","<opts>");
  lit_228 = YPPsym((P)"apply");
  lit_229 = YPPsym((P)"proc");
  T0 = YPsig(YPPlist(2,CHKREF(lit_229),CHKREF(lit_20)),YPPlist(2,CHKREF(YLfunG),CHKREF(YLoptsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yapply = YPmet(FUNCODEREF(Yapply),CHKREF(lit_228),T0,ENVNUL);
  T1 = Yapply;
  Yapply = T1;
  regsym(&Yapply,"boot","apply");
  lit_230 = YPPsym((P)"%apply-next-method");
  lit_231 = YPPsym((P)"next-mets");
  lit_232 = YPsb((P)"No next methods");
  T2 = YPsig(YPPlist(2,CHKREF(lit_231),CHKREF(lit_20)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLoptsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YPapply_next_method = YPmet(FUNCODEREF(YPapply_next_method),CHKREF(lit_230),T2,ENVNUL);
  T3 = YPapply_next_method;
  YPapply_next_method = T3;
  regsym(&YPapply_next_method,"boot","%apply-next-method");
  lit_233 = YPPsym((P)"%call-next-method");
  T4 = YPsig(YPPlist(2,CHKREF(lit_231),CHKREF(lit_20)),YPPlist(1,CHKREF(YLanyG)),YPtrue,YPint((P)1),CHKREF(YLanyG));
  YPcall_next_method = YPmet(FUNCODEREF(YPcall_next_method),CHKREF(lit_233),T4,ENVNUL);
  T5 = YPcall_next_method;
  YPcall_next_method = T5;
  regsym(&YPcall_next_method,"boot","%call-next-method");
  lit_234 = YPPsym((P)"fapply");
  lit_235 = YPPsym((P)"fproc");
  T6 = YPsig(YPPlist(2,CHKREF(lit_235),CHKREF(lit_20)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLoptsG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yfapply = YPmet(FUNCODEREF(Yfapply),CHKREF(lit_234),T6,ENVNUL);
  T7 = Yfapply;
  Yfapply = T7;
  regsym(&Yfapply,"boot","fapply");
  lit_236 = YPPsym((P)"fun-names");
  T8 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yfun_names = YPmet(FUNCODEREF(Yfun_names),CHKREF(lit_236),T8,ENVNUL);
  T9 = Yfun_names;
  Yfun_names = T9;
  regsym(&Yfun_names,"boot","fun-names");
  lit_237 = YPPsym((P)"fun-names-setter");
  T10 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yfun_names_setter = YPmet(FUNCODEREF(Yfun_names_setter),CHKREF(lit_237),T10,ENVNUL);
  T11 = Yfun_names_setter;
  Yfun_names_setter = T11;
  regsym(&Yfun_names_setter,"boot","fun-names-setter");
  lit_238 = YPPsym((P)"fun-specs");
  T12 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yfun_specs = YPmet(FUNCODEREF(Yfun_specs),CHKREF(lit_238),T12,ENVNUL);
  T13 = Yfun_specs;
  Yfun_specs = T13;
  regsym(&Yfun_specs,"boot","fun-specs");
  lit_239 = YPPsym((P)"fun-specs-setter");
  T14 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yfun_specs_setter = YPmet(FUNCODEREF(Yfun_specs_setter),CHKREF(lit_239),T14,ENVNUL);
  T15 = Yfun_specs_setter;
  Yfun_specs_setter = T15;
  regsym(&Yfun_specs_setter,"boot","fun-specs-setter");
  lit_240 = YPPsym((P)"fun-nary?");
  T16 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yfun_naryQ = YPmet(FUNCODEREF(Yfun_naryQ),CHKREF(lit_240),T16,ENVNUL);
  T17 = Yfun_naryQ;
  Yfun_naryQ = T17;
  regsym(&Yfun_naryQ,"boot","fun-nary?");
  lit_241 = YPPsym((P)"fun-nary?-setter");
  T18 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yfun_naryQ_setter = YPmet(FUNCODEREF(Yfun_naryQ_setter),CHKREF(lit_241),T18,ENVNUL);
  T19 = Yfun_naryQ_setter;
  Yfun_naryQ_setter = T19;
  regsym(&Yfun_naryQ_setter,"boot","fun-nary?-setter");
  lit_242 = YPPsym((P)"fun-arity");
  T20 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yfun_arity = YPmet(FUNCODEREF(Yfun_arity),CHKREF(lit_242),T20,ENVNUL);
  T21 = Yfun_arity;
  Yfun_arity = T21;
  regsym(&Yfun_arity,"boot","fun-arity");
  lit_243 = YPPsym((P)"fun-arity-setter");
  T22 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yfun_arity_setter = YPmet(FUNCODEREF(Yfun_arity_setter),CHKREF(lit_243),T22,ENVNUL);
  T23 = Yfun_arity_setter;
  Yfun_arity_setter = T23;
  regsym(&Yfun_arity_setter,"boot","fun-arity-setter");
  lit_244 = YPPsym((P)"fun-value");
  T24 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yfun_value = YPmet(FUNCODEREF(Yfun_value),CHKREF(lit_244),T24,ENVNUL);
  T25 = Yfun_value;
  Yfun_value = T25;
  regsym(&Yfun_value,"boot","fun-value");
  lit_245 = YPPsym((P)"fun-value-setter");
  T26 = YPsig(YPPlist(2,CHKREF(lit_27),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yfun_value_setter = YPmet(FUNCODEREF(Yfun_value_setter),CHKREF(lit_245),T26,ENVNUL);
  T27 = Yfun_value_setter;
  Yfun_value_setter = T27;
  regsym(&Yfun_value_setter,"boot","fun-value-setter");
  YLparentsG = CHKREF(YLlstG);
  regsym(&YLparentsG,"boot","<parents>");
  YLslotsG = CHKREF(YLlstG);
  regsym(&YLslotsG,"boot","<slots>");
  lit_246 = YPPsym((P)"object-traits");
  T28 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yobject_traits = YPmet(FUNCODEREF(Yobject_traits),CHKREF(lit_246),T28,ENVNUL);
  T29 = Yobject_traits;
  Yobject_traits = T29;
  regsym(&Yobject_traits,"boot","object-traits");
  lit_247 = YPPsym((P)"traits-ordered-parents");
  lit_248 = YPPsym((P)"o");
  lit_249 = YPPsym((P)"merge-lists");
  lit_250 = YPPsym((P)"remaining-lists");
  lit_251 = YPPsym((P)"partial-cpl");
  lit_252 = YPsb((P)"inconsistent precedence graph");
  lit_253 = YPPsym((P)"remove-next");
  lit_254 = YPPsym((P)"unconstrained-object-in-parents");
  lit_255 = YPPsym((P)"unconstrained-proto");
  lit_256 = YPPsym((P)"p-unconstrained-in?");
  lit_257 = YPPsym((P)"p-in-and-unconstrained-in?");
  T36 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_remove_next_380 = YPmet(FUNCODEREF(fun_remove_next_380),CHKREF(lit_253),T36,ENVNUL);
  T35 = YPsig(YPPlist(1,CHKREF(lit_248)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_unconstrained_object_in_parents_381 = YPmet(FUNCODEREF(fun_unconstrained_object_in_parents_381),CHKREF(lit_254),T35,ENVNUL);
  T34 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_p_unconstrained_inQ_382 = YPmet(FUNCODEREF(fun_p_unconstrained_inQ_382),CHKREF(lit_256),T34,ENVNUL);
  T33 = YPsig(YPPlist(1,CHKREF(lit_7)),YPPlist(1,CHKREF(YLlstG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_p_in_and_unconstrained_inQ_383 = YPmet(FUNCODEREF(fun_p_in_and_unconstrained_inQ_383),CHKREF(lit_257),T33,ENVNUL);
  T32 = YPsig(YPPlist(1,CHKREF(lit_111)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_unconstrained_proto_384 = YPmet(FUNCODEREF(fun_unconstrained_proto_384),CHKREF(lit_255),T32,ENVNUL);
  T31 = YPsig(YPPlist(2,CHKREF(lit_251),CHKREF(lit_250)),YPPlist(2,CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_merge_lists_385 = YPmet(FUNCODEREF(fun_merge_lists_385),CHKREF(lit_249),T31,ENVNUL);
  T30 = YPsig(YPPlist(1,CHKREF(lit_248)),YPPlist(1,CHKREF(YLtraitsG)),YPfalse,YPint((P)1),CHKREF(YLparentsG));
  Ytraits_ordered_parents = YPmet(FUNCODEREF(Ytraits_ordered_parents),CHKREF(lit_247),T30,ENVNUL);
  T37 = Ytraits_ordered_parents;
  Ytraits_ordered_parents = T37;
  regsym(&Ytraits_ordered_parents,"boot","traits-ordered-parents");
  lit_258 = YPPsym((P)"traits-ordered-slots");
  T38 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLtraitsG)),YPfalse,YPint((P)1),CHKREF(YLslotsG));
  Ytraits_ordered_slots = YPmet(FUNCODEREF(Ytraits_ordered_slots),CHKREF(lit_258),T38,ENVNUL);
  T39 = Ytraits_ordered_slots;
  Ytraits_ordered_slots = T39;
  regsym(&Ytraits_ordered_slots,"boot","traits-ordered-slots");
  lit_259 = YPPsym((P)"make-traits");
  lit_260 = YPPsym((P)"parents");
  lit_261 = YPPsym((P)"parent");
  T41 = YPsig(YPPlist(1,CHKREF(lit_261)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_388 = YPmet(FUNCODEREF(fun_388),YPfalse,T41,ENVNUL);
  T40 = YPsig(YPPlist(3,CHKREF(lit_260),CHKREF(lit_17),CHKREF(lit_16)),YPPlist(3,CHKREF(YLparentsG),CHKREF(YLslotsG),CHKREF(YLanyG)),YPfalse,YPint((P)3),CHKREF(YLtraitsG));
  Ymake_traits = YPmet(FUNCODEREF(Ymake_traits),CHKREF(lit_259),T40,ENVNUL);
  T42 = Ymake_traits;
  Ymake_traits = T42;
  regsym(&Ymake_traits,"boot","make-traits");
  lit_262 = YPPsym((P)"object-direct-slots");
  T43 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yobject_direct_slots = YPmet(FUNCODEREF(Yobject_direct_slots),CHKREF(lit_262),T43,ENVNUL);
  T44 = Yobject_direct_slots;
  Yobject_direct_slots = T44;
  regsym(&Yobject_direct_slots,"boot","object-direct-slots");
  lit_263 = YPPsym((P)"object-direct-parents");
  T45 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yobject_direct_parents = YPmet(FUNCODEREF(Yobject_direct_parents),CHKREF(lit_263),T45,ENVNUL);
  T46 = Yobject_direct_parents;
  Yobject_direct_parents = T46;
  regsym(&Yobject_direct_parents,"boot","object-direct-parents");
  lit_264 = YPPsym((P)"object-slots");
  T47 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yobject_slots = YPmet(FUNCODEREF(Yobject_slots),CHKREF(lit_264),T47,ENVNUL);
  T48 = Yobject_slots;
  Yobject_slots = T48;
  regsym(&Yobject_slots,"boot","object-slots");
  lit_265 = YPPsym((P)"object-parents");
  T49 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yobject_parents = YPmet(FUNCODEREF(Yobject_parents),CHKREF(lit_265),T49,ENVNUL);
  T50 = Yobject_parents;
  Yobject_parents = T50;
  regsym(&Yobject_parents,"boot","object-parents");
  lit_266 = YPPsym((P)"object-direct-children");
  T51 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yobject_direct_children = YPmet(FUNCODEREF(Yobject_direct_children),CHKREF(lit_266),T51,ENVNUL);
  T52 = Yobject_direct_children;
  Yobject_direct_children = T52;
  regsym(&Yobject_direct_children,"boot","object-direct-children");
  YDgetter_not_found = YPint((P)-1);
  regsym(&YDgetter_not_found,"boot","$getter-not-found");
  lit_267 = YPPsym((P)"ensure-fresh-object");
  T53 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yensure_fresh_object = YPmet(FUNCODEREF(Yensure_fresh_object),CHKREF(lit_267),T53,ENVNUL);
  T54 = Yensure_fresh_object;
  Yensure_fresh_object = T54;
  regsym(&Yensure_fresh_object,"boot","ensure-fresh-object");
  lit_268 = YPPsym((P)"slot-offset");
  lit_269 = YPPsym((P)"object");
  T56 = YPsig(YPPlist(2,CHKREF(lit_18),CHKREF(lit_17)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_396 = YPmet(FUNCODEREF(fun_loop_396),CHKREF(lit_5),T56,ENVNUL);
  T55 = YPsig(YPPlist(2,CHKREF(lit_269),CHKREF(lit_15)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLintG));
  Yslot_offset = YPmet(FUNCODEREF(Yslot_offset),CHKREF(lit_268),T55,ENVNUL);
  T57 = Yslot_offset;
  Yslot_offset = T57;
  regsym(&Yslot_offset,"boot","slot-offset");
  lit_270 = YPPsym((P)"slot-value");
  lit_271 = YPsb((P)"slot %s not found in %=");
  T58 = YPsig(YPPlist(2,CHKREF(lit_269),CHKREF(lit_15)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yslot_value = YPmet(FUNCODEREF(Yslot_value),CHKREF(lit_270),T58,ENVNUL);
  T59 = Yslot_value;
  Yslot_value = T59;
  regsym(&Yslot_value,"boot","slot-value");
  lit_272 = YPPsym((P)"slot-value-setter");
  lit_273 = YPsb((P)"slot %s not found in %=");
  T60 = YPsig(YPPlist(3,CHKREF(lit_27),CHKREF(lit_269),CHKREF(lit_15)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  Yslot_value_setter = YPmet(FUNCODEREF(Yslot_value_setter),CHKREF(lit_272),T60,ENVNUL);
  T61 = Yslot_value_setter;
  Yslot_value_setter = T61;
  regsym(&Yslot_value_setter,"boot","slot-value-setter");
  lit_274 = YPPsym((P)"ensure-traits");
  T62 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yensure_traits = YPmet(FUNCODEREF(Yensure_traits),CHKREF(lit_274),T62,ENVNUL);
  T63 = Yensure_traits;
  Yensure_traits = T63;
  regsym(&Yensure_traits,"boot","ensure-traits");
  lit_275 = YPPsym((P)"%isa");
  lit_276 = YPPsym((P)"vals");
  lit_277 = YPPsym((P)"getters");
  lit_278 = YPPsym((P)"loop-slots");
  lit_279 = YPPsym((P)"loop-parents");
  T67 = YPsig(YPPlist(2,CHKREF(lit_277),CHKREF(lit_276)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_401 = YPmet(FUNCODEREF(fun_loop_401),CHKREF(lit_5),T67,ENVNUL);
  T66 = YPsig(YPPlist(1,CHKREF(lit_260)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_parents_402 = YPmet(FUNCODEREF(fun_loop_parents_402),CHKREF(lit_279),T66,ENVNUL);
  T65 = YPsig(YPPlist(1,CHKREF(lit_17)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_slots_403 = YPmet(FUNCODEREF(fun_loop_slots_403),CHKREF(lit_278),T65,ENVNUL);
  T64 = YPsig(YPPlist(3,CHKREF(lit_260),CHKREF(lit_277),CHKREF(lit_276)),YPPlist(3,CHKREF(YLlstG),CHKREF(YLlstG),CHKREF(YLlstG)),YPfalse,YPint((P)3),CHKREF(YLanyG));
  YPisa = YPmet(FUNCODEREF(YPisa),CHKREF(lit_275),T64,ENVNUL);
  T68 = YPisa;
  YPisa = T68;
  regsym(&YPisa,"boot","%isa");
  lit_280 = YPPsym((P)"find-getter");
  lit_281 = YPsb((P)"COULDN'T FIND GETTER");
  T70 = YPsig(YPPlist(1,CHKREF(lit_160)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_405 = YPmet(FUNCODEREF(fun_loop_405),CHKREF(lit_5),T70,ENVNUL);
  T69 = YPsig(YPPlist(2,CHKREF(lit_16),CHKREF(lit_15)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLgenG)),YPfalse,YPint((P)2),CHKREF(YLmetG));
  Yfind_getter = YPmet(FUNCODEREF(Yfind_getter),CHKREF(lit_280),T69,ENVNUL);
  T71 = Yfind_getter;
  Yfind_getter = T71;
  regsym(&Yfind_getter,"boot","find-getter");
  lit_282 = YPPsym((P)"find-setter");
  lit_283 = YPPsym((P)"zetter");
  lit_284 = YPPsym((P)"type");
  lit_285 = YPsb((P)"COULDN'T FIND SETTER");
  T73 = YPsig(YPPlist(1,CHKREF(lit_160)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_loop_407 = YPmet(FUNCODEREF(fun_loop_407),CHKREF(lit_5),T73,ENVNUL);
  T72 = YPsig(YPPlist(3,CHKREF(lit_16),CHKREF(lit_284),CHKREF(lit_283)),YPPlist(3,CHKREF(YLanyG),CHKREF(YLanyG),CHKREF(YLgenG)),YPfalse,YPint((P)3),CHKREF(YLmetG));
  Yfind_setter = YPmet(FUNCODEREF(Yfind_setter),CHKREF(lit_282),T72,ENVNUL);
  T74 = Yfind_setter;
  Yfind_setter = T74;
  regsym(&Yfind_setter,"boot","find-setter");
  lit_286 = YPPsym((P)"forward-traits");
  T76 = YPsig(YPPlist(1,CHKREF(lit_156)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_409 = YPmet(FUNCODEREF(fun_409),YPfalse,T76,ENVNUL);
  T75 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yforward_traits = YPmet(FUNCODEREF(Yforward_traits),CHKREF(lit_286),T75,ENVNUL);
  T77 = Yforward_traits;
  Yforward_traits = T77;
  regsym(&Yforward_traits,"boot","forward-traits");
  lit_287 = YPPsym((P)"@do-children");
  lit_288 = YPPsym((P)"visit");
  T79 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_visit_411 = YPmet(FUNCODEREF(fun_visit_411),CHKREF(lit_288),T79,ENVNUL);
  T78 = YPsig(YPPlist(2,CHKREF(lit_119),CHKREF(lit_9)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  YOdo_children = YPmet(FUNCODEREF(YOdo_children),CHKREF(lit_287),T78,ENVNUL);
  T80 = YOdo_children;
  YOdo_children = T80;
  regsym(&YOdo_children,"boot","@do-children");
  lit_289 = YPPsym((P)"%slot");
  lit_290 = YPPsym((P)"setter");
  T82 = YPsig(YPPlist(1,CHKREF(lit_26)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_413 = YPmet(FUNCODEREF(fun_413),YPfalse,T82,ENVNUL);
  T81 = YPsig(YPPlist(5,CHKREF(lit_16),CHKREF(lit_15),CHKREF(lit_290),CHKREF(lit_284),CHKREF(lit_134)),YPPlist(5,CHKREF(YLanyG),CHKREF(YLgenG),CHKREF(YLgenG),CHKREF(YLanyG),CHKREF(YLfunG)),YPfalse,YPint((P)5),CHKREF(YLanyG));
  YPslot = YPmet(FUNCODEREF(YPslot),CHKREF(lit_289),T81,ENVNUL);
  T83 = YPslot;
  YPslot = T83;
  regsym(&YPslot,"boot","%slot");
  lit_291 = YPPsym((P)"loop-old-slots");
  lit_292 = YPPsym((P)"old-offset");
  lit_293 = YPPsym((P)"old-slots");
  T84 = YPsig(YPPlist(2,CHKREF(lit_293),CHKREF(lit_292)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  fun_loop_old_slots_415 = YPmet(FUNCODEREF(fun_loop_old_slots_415),CHKREF(lit_291),T84,ENVNUL);
  lit_294 = YPPsym((P)"update-instance-for-changed-prototype");
  T85 = YPsig(YPPlist(1,CHKREF(lit_269)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Yupdate_instance_for_changed_prototype = YPmet(FUNCODEREF(Yupdate_instance_for_changed_prototype),CHKREF(lit_294),T85,ENVNUL);
  T86 = Yupdate_instance_for_changed_prototype;
  Yupdate_instance_for_changed_prototype = T86;
  regsym(&Yupdate_instance_for_changed_prototype,"boot","update-instance-for-changed-prototype");
  Yadd_slot = CHKREF(YPslot);
  regsym(&Yadd_slot,"boot","add-slot");
  YPcheck_typesQ = YPtrue;
  lit_295 = YPPsym((P)"fab-gen");
  lit_296 = YPPsym((P)"nary?");
  lit_297 = YPPsym((P)"names");
  T87 = YPsig(YPPlist(5,CHKREF(lit_1),CHKREF(lit_297),CHKREF(lit_162),CHKREF(lit_296),CHKREF(lit_160)),YPPlist(5,CHKREF(YLanyG),CHKREF(YLlstG),CHKREF(YLlstG),CHKREF(YLlogG),CHKREF(YLlstG)),YPfalse,YPint((P)5),CHKREF(YLgenG));
  Yfab_gen = YPmet(FUNCODEREF(Yfab_gen),CHKREF(lit_295),T87,ENVNUL);
  T88 = Yfab_gen;
  Yfab_gen = T88;
  regsym(&Yfab_gen,"boot","fab-gen");
  lit_298 = YPPsym((P)"gen-from-met");
  T90 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  fun_419 = YPmet(FUNCODEREF(fun_419),YPfalse,T90,ENVNUL);
  T89 = YPsig(YPPlist(1,CHKREF(lit_9)),YPPlist(1,CHKREF(YLmetG)),YPfalse,YPint((P)1),CHKREF(YLgenG));
  Ygen_from_met = YPmet(FUNCODEREF(Ygen_from_met),CHKREF(lit_298),T89,ENVNUL);
  T91 = Ygen_from_met;
  Ygen_from_met = T91;
  regsym(&Ygen_from_met,"boot","gen-from-met");
  lit_299 = YPPsym((P)"%define-method");
  T94 = YPsig(YPPlist(2,CHKREF(lit_24),CHKREF(lit_23)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLmetG)),YPfalse,YPint((P)2),CHKREF(YLgenG));
  T93 = YPdefine_method = YPmet(FUNCODEREF(YPdefine_method),CHKREF(lit_299),T94,ENVNUL);
  T96 = YPdefine_method;
  T95 = YPdefine_method = T96;
  regsym(&YPdefine_method,"boot","%define-method");
  T92 = T95;
  return T92;
}

P Y___main_10___() {
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_300 = YPPsym((P)"unexec");
  lit_301 = YPPsym((P)"fun");
  T0 = YPsig(YPPlist(2,CHKREF(lit_1),CHKREF(lit_301)),YPPlist(2,CHKREF(YLstrG),CHKREF(YLfunG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Yunexec = YPmet(FUNCODEREF(Yunexec),CHKREF(lit_300),T0,ENVNUL);
  T1 = Yunexec;
  Yunexec = T1;
  regsym(&Yunexec,"boot","unexec");
  YTboot_macro_module_namesT = Ynil;
  regsym(&YTboot_macro_module_namesT,"boot","*boot-macro-module-names*");
  YTboot_macro_namesT = Ynil;
  regsym(&YTboot_macro_namesT,"boot","*boot-macro-names*");
  YTboot_macro_expandersT = Ynil;
  regsym(&YTboot_macro_expandersT,"boot","*boot-macro-expanders*");
  YTmacros_okQT = YPfalse;
  regsym(&YTmacros_okQT,"boot","*macros-ok?*");
  lit_302 = YPPsym((P)"grid-open");
  T2 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  Ygrid_open = YPmet(FUNCODEREF(Ygrid_open),CHKREF(lit_302),T2,ENVNUL);
  T3 = Ygrid_open;
  Ygrid_open = T3;
  regsym(&Ygrid_open,"boot","grid-open");
  lit_303 = YPPsym((P)"grid-close");
  T4 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  Ygrid_close = YPmet(FUNCODEREF(Ygrid_close),CHKREF(lit_303),T4,ENVNUL);
  T5 = Ygrid_close;
  Ygrid_close = T5;
  regsym(&Ygrid_close,"boot","grid-close");
  lit_304 = YPPsym((P)"grid-move");
  T6 = YPsig(YPPlist(2,CHKREF(lit_9),CHKREF(lit_12)),YPPlist(2,CHKREF(YLanyG),CHKREF(YLanyG)),YPfalse,YPint((P)2),CHKREF(YLanyG));
  Ygrid_move = YPmet(FUNCODEREF(Ygrid_move),CHKREF(lit_304),T6,ENVNUL);
  T7 = Ygrid_move;
  Ygrid_move = T7;
  regsym(&Ygrid_move,"boot","grid-move");
  lit_305 = YPPsym((P)"grid-read");
  T8 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  Ygrid_read = YPmet(FUNCODEREF(Ygrid_read),CHKREF(lit_305),T8,ENVNUL);
  T9 = Ygrid_read;
  Ygrid_read = T9;
  regsym(&Ygrid_read,"boot","grid-read");
  lit_306 = YPPsym((P)"grid-write");
  T10 = YPsig(YPPlist(1,CHKREF(lit_108)),YPPlist(1,CHKREF(YLanyG)),YPfalse,YPint((P)1),CHKREF(YLanyG));
  Ygrid_write = YPmet(FUNCODEREF(Ygrid_write),CHKREF(lit_306),T10,ENVNUL);
  T11 = Ygrid_write;
  Ygrid_write = T11;
  regsym(&Ygrid_write,"boot","grid-write");
  lit_307 = YPPsym((P)"grid-refresh");
  T12 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),CHKREF(YLanyG));
  Ygrid_refresh = YPmet(FUNCODEREF(Ygrid_refresh),CHKREF(lit_307),T12,ENVNUL);
  T13 = Ygrid_refresh;
  Ygrid_refresh = T13;
  regsym(&Ygrid_refresh,"boot","grid-refresh");
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
  T14 = YPfalse;
  return T14;
}

/* MODULE ENVIRONMENT INFORMATION */


static USE_INFO use_infos[] = {
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<mets>", &YLmetsG},
  {"%%velt-setter", NULL},
  {"%traits-direct-children-setter", NULL},
  {"%ft/", NULL},
  {"%%selt", NULL},
  {"%vlen", NULL},
  {"@<", NULL},
  {"@alter", &YOalter},
  {"%str!", NULL},
  {"<lst>", &YLlstG},
  {"%i?", NULL},
  {"<sig>", &YLsigG},
  {"%lst", NULL},
  {"%build-runtime-modules", NULL},
  {"%clone", NULL},
  {"%i<<", NULL},
  {"%grid-write", NULL},
  {"%traits-forward", NULL},
  {"traits-direct-slots", &Ytraits_direct_slots},
  {"---main-1---", NULL},
  {"%tail-setter", NULL},
  {"%fun-cache", NULL},
  {"%su", NULL},
  {"%sym-nam", NULL},
  {"fun-cache-setter", &Yfun_cache_setter},
  {"slot-value-at", NULL},
  {"%flo-val-setter", &YPflo_val_setter},
  {"fun-env", &Yfun_env},
  {"@lst", &YOlst},
  {"@==", NULL},
  {"%slot-offset", &YPslot_offset},
  {"%gen-code-setter", NULL},
  {"%sig-arity-setter", NULL},
  {"slot-init", &Yslot_init},
  {"gen-cache-classes-setter", &Ygen_cache_classes_setter},
  {"export", NULL},
  {"*restarts-ok?*", &YTrestarts_okQT},
  {"quasiquote", NULL},
  {"%i!", NULL},
  {"%unexec", NULL},
  {"%false", &YPfalse},
  {"%install-object-values", NULL},
  {"@fun-mets-setter", &YOfun_mets_setter},
  {"<body>", &YLbodyG},
  {"%elt-setter", NULL},
  {"%%apply", NULL},
  {"@tail", NULL},
  {"<args>", &YLargsG},
  {"%create-directory", NULL},
  {"%%slot", NULL},
  {"fapply", &Yfapply},
  {"%locative-value-setter", NULL},
  {"<vec>", &YLvecG},
  {"%%isa?", NULL},
  {"find-app-singleton-mets", &Yfind_app_singleton_mets},
  {"if", NULL},
  {"<int>", &YLintG},
  {"@gen-cache-singletons-setter", &YOgen_cache_singletons_setter},
  {"<log>", &YLlogG},
  {"%untag", NULL},
  {"%gen-mets", NULL},
  {"%met-env", NULL},
  {"%slot-init", NULL},
  {"@do-children", &YOdo_children},
  {"$tag-msk", &YDtag_msk},
  {"slot-offset", &Yslot_offset},
  {"%define-getter", NULL},
  {"or", NULL},
  {"fun-arity", &Yfun_arity},
  {"when", NULL},
  {"object<", &YobjectL},
  {"%tag", NULL},
  {"%sig-specs-setter", NULL},
  {"%sig-names-setter", NULL},
  {"try", NULL},
  {"traits-direct-slots-setter", &Ytraits_direct_slots_setter},
  {"let", NULL},
  {"dp", NULL},
  {"$gen-cache-singletons-offset", &YDgen_cache_singletons_offset},
  {"traits-owner", &Ytraits_owner},
  {"%selt-setter", NULL},
  {"sorted-app-mets", &Ysorted_app_mets},
  {"---main-2---", NULL},
  {"%%sfab", NULL},
  {"fun-env-setter", &Yfun_env_setter},
  {"grid-move", &Ygrid_move},
  {"fun-name", &Yfun_name},
  {"%newline", NULL},
  {"%flo", NULL},
  {"fab-sym", &Yfab_sym},
  {"unknown-function-error", &Yunknown_function_error},
  {"%int", NULL},
  {"slot-init-setter", &Yslot_init_setter},
  {"@all?", &YOallQ},
  {"%lu", NULL},
  {"slot-setter", &Yslot_setter},
  {"@add-new", NULL},
  {"%update-instance-for-changed-prototype", NULL},
  {"%true", &YPtrue},
  {"fab-gen", &Yfab_gen},
  {"%file-exists?", NULL},
  {"make-traits", &Ymake_traits},
  {"%traits-owner", NULL},
  {"%slot-getter-setter", NULL},
  {"%current-output-port", NULL},
  {"@do", &YOdo},
  {"<col>", &YLcolG},
  {"%gen-cache-singletons", NULL},
  {"%traits-forward-setter", NULL},
  {"---main-5---", NULL},
  {"%symbols", &YPsymbols},
  {"dv", NULL},
  {"<simple-handler-info>", &YLsimple_handler_infoG},
  {"%f-", NULL},
  {"%eof-object", NULL},
  {"%fu", NULL},
  {"%pair", NULL},
  {"%traits", NULL},
  {"ensure-fresh-object", &Yensure_fresh_object},
  {"<traits>-traits", &YLtraitsG_traits},
  {"%flo-bits", NULL},
  {"%slot-setter", NULL},
  {"@fun-mets", &YOfun_mets},
  {"<int>-traits", &YLintG_traits},
  {"error", &Yerror},
  {"ct-also", NULL},
  {"%%str-dat", &YPPstr_dat},
  {"%apply-next-method", &YPapply_next_method},
  {"met-has-singleton-specs?", &Ymet_has_singleton_specsQ},
  {"sig-value", &Ysig_value},
  {"%patch-lst", NULL},
  {"grid-read", &Ygrid_read},
  {"seq", NULL},
  {"@pair", NULL},
  {"grid-close", &Ygrid_close},
  {"@gen-cache-singletons", &YOgen_cache_singletons},
  {"%velt-setter", NULL},
  {"quote", NULL},
  {"traits-owner-setter", &Ytraits_owner_setter},
  {"%f+", NULL},
  {"%%traits", NULL},
  {"---main-8---", NULL},
  {"@tail-setter", NULL},
  {"def-fun/sig-accessor", NULL},
  {"fun-name-setter", &Yfun_name_setter},
  {"fun-nary?-setter", &Yfun_naryQ_setter},
  {"%define-parent", NULL},
  {"%str-eq?", NULL},
  {"%trace-off", NULL},
  {"%copy", NULL},
  {"slot-setter-setter", &Yslot_setter_setter},
  {"<met>", &YLmetG},
  {"slot-owner", &Yslot_owner},
  {"%fun-cache-setter", NULL},
  {"%vnul", &YPvnul},
  {"%%vlen", NULL},
  {"%break", NULL},
  {"%macro", NULL},
  {"<gen-cache>", &YLgen_cacheG},
  {"forward-traits", &Yforward_traits},
  {"%make-object-values", NULL},
  {"%traits-owner-offset", &YPtraits_owner_offset},
  {"%eq?", NULL},
  {"%write-char", NULL},
  {"%add-met", &YPadd_met},
  {"%str", NULL},
  {"@elt", &YOelt},
  {"%compute-parents", NULL},
  {"%str-eq?-loop", NULL},
  {"@rev!", &YOrevX},
  {"gen-lookup", NULL},
  {"bound?", NULL},
  {"%finalize-slots!", &YPfinalize_slotsX},
  {"%write-string", NULL},
  {"%%slen", NULL},
  {"%os-binding-value", NULL},
  {"%%sym", NULL},
  {"%i<<<", NULL},
  {"update-instance-for-changed-prototype", &Yupdate_instance_for_changed_prototype},
  {"lab", NULL},
  {"@head-setter", NULL},
  {"traits-ordered-slots", &Ytraits_ordered_slots},
  {"met-app?", &Ymet_appQ},
  {"@del-dups", &YOdel_dups},
  {"%slot-elt-setter", NULL},
  {"sorted-app-mets-1", &Ysorted_app_mets_1},
  {"df", NULL},
  {"%sig-value", NULL},
  {"%traits-direct-slots-setter", NULL},
  {"%%str-dat-setter", &YPPstr_dat_setter},
  {"dg", NULL},
  {"tail", &Ytail},
  {"%flo-dat-setter", NULL},
  {"sig-value-setter", &Ysig_value_setter},
  {"%finalize-slots", NULL},
  {"%i+", NULL},
  {"sig-nary?", &Ysig_naryQ},
  {"<flat>", &YLflatG},
  {"%met", NULL},
  {"object-direct-children", &Yobject_direct_children},
  {"@fun-value", &YOfun_value},
  {"<env>", &YLenvG},
  {"%traits-gens", NULL},
  {"%met-sig", NULL},
  {"%loc", NULL},
  {"<specs>", &YLspecsG},
  {"%f/", NULL},
  {"%cu", NULL},
  {"slot-owner-setter", &Yslot_owner_setter},
  {"met<", &YmetL},
  {"%traits-slots-setter", NULL},
  {"%vec-dat", NULL},
  {"traits-mets", &Ytraits_mets},
  {"@add", NULL},
  {"%iu", NULL},
  {"grid-open", &Ygrid_open},
  {"@gen-cache-arg-pos-setter", &YOgen_cache_arg_pos_setter},
  {"%sig-arity", NULL},
  {"%patch-parents", NULL},
  {"%i^", NULL},
  {"nul", &Ynul},
  {"%vec", NULL},
  {"%vb", NULL},
  {"%grid-read", NULL},
  {"fun-nary?", &Yfun_naryQ},
  {"<str>", &YLstrG},
  {"%sig-nary?", NULL},
  {"%i&", NULL},
  {"%cb", NULL},
  {"dm", NULL},
  {"---main-9---", NULL},
  {"$gen-cache-classes-offset", &YDgen_cache_classes_offset},
  {"%define-accessor", NULL},
  {"%close-input-port", NULL},
  {"@+", NULL},
  {"file-opening-error", &Yfile_opening_error},
  {"traits-direct-children", &Ytraits_direct_children},
  {"%met-name", NULL},
  {"<slot>-traits", &YLslotG_traits},
  {"%i<", NULL},
  {"@len", NULL},
  {"%traits-direct-parents", NULL},
  {"@@empty?", &YOOemptyQ},
  {"tail-setter", &Ytail_setter},
  {"%loc-val", &YPloc_val},
  {"%fun-reg", NULL},
  {"%app-filename", NULL},
  {"sig-nary?-setter", &Ysig_naryQ_setter},
  {"%traits-mets", NULL},
  {"%patch-parent", NULL},
  {"<replace-generic-restart>", &YLreplace_generic_restartG},
  {"%im", NULL},
  {"sig-names", &Ysig_names},
  {"%isa", &YPisa},
  {"%gen", NULL},
  {"gen-lookup-miss", &Ygen_lookup_miss},
  {"<tup>", &YLtupG},
  {"@fab", &YOfab},
  {"isa?", &YisaQ},
  {"@not", NULL},
  {"apply", &Yapply},
  {"%gen-sig", NULL},
  {"%traits-owner-setter", NULL},
  {"%vu", NULL},
  {"%traits-slots", NULL},
  {"traits-mets-setter", &Ytraits_mets_setter},
  {"%met-name-setter", NULL},
  {"%traits-parents", NULL},
  {"%indirect-object?", NULL},
  {"%gen-cache-classes-setter", NULL},
  {"<parents>", &YLparentsG},
  {"@reduce", &YOreduce},
  {"object-parents", &Yobject_parents},
  {"@fun-arity", &YOfun_arity},
  {"%%velt", NULL},
  {"%slot-owner-setter", NULL},
  {"fun-same-met?", &Yfun_same_metQ},
  {"@mem?", &YOmemQ},
  {"add-slot", &Yadd_slot},
  {"%sig", NULL},
  {"%ib", NULL},
  {"%gen-sig-setter", NULL},
  {"---main-4---", NULL},
  {"%traits-mets-setter", NULL},
  {"%it/", NULL},
  {"%do-runtime-bindings", NULL},
  {"*boot-macro-expanders*", &YTboot_macro_expandersT},
  {"%make-object", NULL},
  {"gen-lookup-miss-1-using", &Ygen_lookup_miss_1_using},
  {"%sig-names", NULL},
  {"fun", NULL},
  {"@gen-cache-arg-pos", &YOgen_cache_arg_pos},
  {"%gen-cache", NULL},
  {"---main-3---", NULL},
  {"traits-ordered-parents", &Ytraits_ordered_parents},
  {"%raw", NULL},
  {"traits-direct-children-setter", &Ytraits_direct_children_setter},
  {"%ft", NULL},
  {"fun-specs-setter", &Yfun_specs_setter},
  {"traits-parents", &Ytraits_parents},
  {"%define-setter", NULL},
  {"<loc>", &YLlocG},
  {"%define-boxed-structure", NULL},
  {"---main-7---", NULL},
  {"%collect-direct-slots", &YPcollect_direct_slots},
  {"%loc-val-setter", &YPloc_val_setter},
  {"fun-mets", &Yfun_mets},
  {"%sb", NULL},
  {"%int-val", &YPint_val},
  {"sig-names-setter", &Ysig_names_setter},
  {"gen-cache-singletons", &Ygen_cache_singletons},
  {"%locative-value", NULL},
  {"%gen-cache-singletons-setter", NULL},
  {"%%mep-apply", NULL},
  {"%next-methods", NULL},
  {"%early-dispatch", &YPearly_dispatch},
  {"%patch-early-generics", NULL},
  {"%object-shells", NULL},
  {"@map", &YOmap},
  {"isa", NULL},
  {"%char-ready", NULL},
  {"%lb", NULL},
  {"not", &Ynot},
  {"%define-repeated-structure", NULL},
  {"%elt", NULL},
  {"choose-methods", &Ychoose_methods},
  {"traits-slots-setter", &Ytraits_slots_setter},
  {"%read-char", NULL},
  {"%symbols-ready?", &YPsymbols_readyQ},
  {"%%vfab", NULL},
  {"%ir", NULL},
  {"%flo-val", &YPflo_val},
  {"%os-name", NULL},
  {"%add-slot", &YPadd_slot},
  {"gen-lookup-1", NULL},
  {"incongruent-method-error", &Yincongruent_method_error},
  {"ensure-traits", &Yensure_traits},
  {"%chr-val", &YPchr_val},
  {"<any>", &YLanyG},
  {"<fun>", &YLfunG},
  {"%str-dat-setter", NULL},
  {"%slot-elt", NULL},
  {"%object-values", NULL},
  {"%do-stack-frames", NULL},
  {"%sym", NULL},
  {"fin", NULL},
  {"unexec", &Yunexec},
  {"%fapply", NULL},
  {"%peek-char", NULL},
  {"@head", NULL},
  {"---main-10---", NULL},
  {"gen-add-met", &Ygen_add_met},
  {"object-slots", &Yobject_slots},
  {"@fun-nary?", &YOfun_naryQ},
  {"ds", NULL},
  {"%isa?", NULL},
  {"traits-parents-setter", &Ytraits_parents_setter},
  {"traits-direct-parents", &Ytraits_direct_parents},
  {"%snul", &YPsnul},
  {"<sym>", &YLsymG},
  {"fun-mets-setter", &Yfun_mets_setter},
  {"%int-val-setter", &YPint_val_setter},
  {"fun-sig", &Yfun_sig},
  {"@empty?", NULL},
  {"---main-6---", NULL},
  {"%define-slots", NULL},
  {"slot-type", &Yslot_type},
  {"gen-cache-singletons-setter", &Ygen_cache_singletons_setter},
  {"%sig-nary?-setter", NULL},
  {"@tup", &YOtup},
  {"%sym-nam-setter", NULL},
  {"@find-key", &YOfind_key},
  {"object-traits", &Yobject_traits},
  {"fun-specs", &Yfun_specs},
  {"order-specs", &Yorder_specs},
  {"@all2?", &YOall2Q},
  {"%velt", NULL},
  {"lst", &Ylst},
  {"%open-output-file", NULL},
  {"%flo-dat", NULL},
  {"%str-dat", NULL},
  {"find-setter", &Yfind_setter},
  {"nul-slot", &Ynul_slot},
  {"%chr-val-setter", &YPchr_val_setter},
  {"%i-", NULL},
  {"%traits-gens-setter", NULL},
  {"%chr", NULL},
  {"@@==", &YOOEE},
  {"%%macro", &YPPmacro},
  {"%patch-early-generic", &YPpatch_early_generic},
  {"%close-output-port", NULL},
  {"%open-input-file", NULL},
  {"$adr-tag", NULL},
  {"%os-binding-value-setter", NULL},
  {"%object-shell", NULL},
  {"@any?", &YOanyQ},
  {"%file-mtime", NULL},
  {"<chr>", &YLchrG},
  {"%fc", NULL},
  {"%slot-owner", NULL},
  {"%define-primitives", NULL},
  {"traits-direct-parents-setter", &Ytraits_direct_parents_setter},
  {"sym-name", &Ysym_name},
  {"gen-lookup-miss-1", &Ygen_lookup_miss_1},
  {"fun-sig-setter", &Yfun_sig_setter},
  {"%define-method", &YPdefine_method},
  {"fun-code", &Yfun_code},
  {"%met-sig-setter", NULL},
  {"slot-type-setter", &Yslot_type_setter},
  {"slot-getter", &Yslot_getter},
  {"%tail", NULL},
  {"fun-congruent?", &Yfun_congruentQ},
  {"slot-value-setter", &Yslot_value_setter},
  {"@fun-specs", &YOfun_specs},
  {"object-direct-slots", &Yobject_direct_slots},
  {"slot-value-at-setter", NULL},
  {"handler-info-message", &Yhandler_info_message},
  {"%vec-dat-setter", NULL},
  {"gen-unspecialized-at?", &Ygen_unspecialized_atQ},
  {"opt-args", &Yopt_args},
  {"%%selt-setter", NULL},
  {"%i>>>", NULL},
  {"%char-ready?", NULL},
  {"@cat2", &YOcat2},
  {"fun-value-setter", &Yfun_value_setter},
  {"fun-names-setter", &Yfun_names_setter},
  {"<num>", &YLnumG},
  {"%gen-name-setter", NULL},
  {"%*start-running-at*", &YPTstart_running_atT},
  {"%traits-size", &YPtraits_size},
  {"%%vec-dat", &YPPvec_dat},
  {"loc", NULL},
  {"%object-traits", NULL},
  {"%i>>", NULL},
  {"---main-0---", NULL},
  {"%gen-mets-setter", NULL},
  {"*macros-ok?*", &YTmacros_okQT},
  {"sig-arity", &Ysig_arity},
  {"grid-refresh", &Ygrid_refresh},
  {"%traits-direct-children", NULL},
  {"%slot-setter-setter", NULL},
  {"%rev!", NULL},
  {"%dispatch", &YPdispatch},
  {"sym-name-setter", &Ysym_name_setter},
  {"$getter-not-found", &YDgetter_not_found},
  {"%app-args", NULL},
  {"fun-code-setter", &Yfun_code_setter},
  {"%traits-parents-setter", NULL},
  {"%traits-of", NULL},
  {"$missed-dispatch", &YDmissed_dispatch},
  {"%c=", NULL},
  {"keyboard-interrupt", &Ykeyboard_interrupt},
  {"slot-getter-setter", &Yslot_getter_setter},
  {"traits-forward", &Ytraits_forward},
  {"and", NULL},
  {"ct", NULL},
  {"%binding-name", NULL},
  {"%met-code-setter", NULL},
  {"nil", &Ynil},
  {"method-accessor-offset", &Ymethod_accessor_offset},
  {"<seq>", &YLseqG},
  {"%define-structure-accessors", NULL},
  {"%gen-cache-classes", NULL},
  {"find-getter", &Yfind_getter},
  {"mif", NULL},
  {"%gen-name", NULL},
  {"@fun-names", &YOfun_names},
  {"handler-info-arguments", &Yhandler_info_arguments},
  {"%define-hierarchy", NULL},
  {"object-direct-parents", &Yobject_direct_parents},
  {"%i=", NULL},
  {"%vec!", NULL},
  {"%slot-type-setter", NULL},
  {"%empty?", NULL},
  {"%gen-cache-arg-pos", NULL},
  {"%slot-getter", NULL},
  {"<gen>", &YLgenG},
  {"%*used-symbols-too-early*", &YPTused_symbols_too_earlyT},
  {"%met-env-setter", NULL},
  {"traits-gens", &Ytraits_gens},
  {"@gen-cache-classes-setter", &YOgen_cache_classes_setter},
  {"%head-setter", NULL},
  {"%slen", NULL},
  {"%slot-type", NULL},
  {"gen-from-met", &Ygen_from_met},
  {"%slot", &YPslot},
  {"%%vec-dat-setter", &YPPvec_dat_setter},
  {"%define-structure", NULL},
  {"head", &Yhead},
  {"%slot-init-setter", NULL},
  {"slot-value", &Yslot_value},
  {"*boot-macro-names*", &YTboot_macro_namesT},
  {"slot", NULL},
  {"sig-arity-setter", &Ysig_arity_setter},
  {"$direct-object-traits", &YDdirect_object_traits},
  {"fun-value", &Yfun_value},
  {"<slots>", &YLslotsG},
  {"sig-specs", &Ysig_specs},
  {"%current-input-port", NULL},
  {"fun-names", &Yfun_names},
  {"%grid-close", NULL},
  {"%f*", NULL},
  {"%object-of", NULL},
  {"%adjust-object-values-size", NULL},
  {"%%len", NULL},
  {"%check-types?", &YPcheck_typesQ},
  {"%grid-open", NULL},
  {"%f<", NULL},
  {"*boot-macro-module-names*", &YTboot_macro_module_namesT},
  {"traits-forward-setter", &Ytraits_forward_setter},
  {"%file-type", NULL},
  {"%c<", NULL},
  {"grid-write", &Ygrid_write},
  {"@=", NULL},
  {"gen-lookup-1-using", NULL},
  {"dss", NULL},
  {"macro-expand", NULL},
  {"%trace-on", NULL},
  {"%fb", NULL},
  {"rep", NULL},
  {"%force-output", NULL},
  {"%f=", NULL},
  {"%bb", NULL},
  {"%sig-specs", NULL},
  {"%object-traits-setter", NULL},
  {"<opts>", &YLoptsG},
  {"order-mets", &Yorder_mets},
  {"@fill", &YOfill},
  {"type-error", &Ytype_error},
  {"%iv", NULL},
  {"%raw-alloc", NULL},
  {"%object-values-setter", NULL},
  {"%fi2f", NULL},
  {"%grid-move", NULL},
  {"%define-tagged-structure", NULL},
  {"use", NULL},
  {"%i*", NULL},
  {"singleton-spec?", &Ysingleton_specQ},
  {"traits-gens-setter", &Ytraits_gens_setter},
  {"traits-slots", &Ytraits_slots},
  {"def-object-traits-accessor", NULL},
  {"%head", NULL},
  {"$tag-len", &YDtag_len},
  {"<traits>", &YLtraitsG},
  {"head-setter", &Yhead_setter},
  {"fun-cache", &Yfun_cache},
  {"fun-spec", &Yfun_spec},
  {"%invoke-debugger", NULL},
  {"<slot>", &YLslotG},
  {"sig-specs-setter", &Ysig_specs_setter},
  {"%grid-refresh", NULL},
  {"gen-cache-classes", &Ygen_cache_classes},
  {"%call-next-method", &YPcall_next_method},
  {"set", NULL},
  {"force-names-into-boot-module", NULL},
  {"%sig-value-setter", NULL},
  {"@gen-cache-classes", &YOgen_cache_classes},
  {"%ff", NULL},
  {"%selt", NULL},
  {"%traits-direct-parents-setter", NULL},
  {"<flo>", &YLfloG},
  {"%object-parents", NULL},
  {"%gen-cache-arg-pos-setter", NULL},
  {"%tag-bits", NULL},
  {"fun-arity-setter", &Yfun_arity_setter},
  {"%gen-code", NULL},
  {"%met-code", NULL},
  {"%traits-direct-slots", NULL},
  {"wrong-number-arguments-error", &Ywrong_number_arguments_error},
  {"%cat2", NULL},
  {"unless", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%force-output", "%force-output"},
  {"%vlen", "%vlen"},
  {"<lst>", "<lst>"},
  {"%i?", "%i?"},
  {"<sig>", "<sig>"},
  {"%build-runtime-modules", "%build-runtime-modules"},
  {"%i<<", "%i<<"},
  {"%su", "%su"},
  {"slot-init", "slot-init"},
  {"export", "export"},
  {"quasiquote", "quasiquote"},
  {"%i!", "%i!"},
  {"%create-directory", "%create-directory"},
  {"<chr>", "<chr>"},
  {"fapply", "fapply"},
  {"%locative-value-setter", "%locative-value-setter"},
  {"<vec>", "<vec>"},
  {"if", "if"},
  {"<log>", "<log>"},
  {"fun-arity", "fun-arity"},
  {"object<", "object<"},
  {"try", "try"},
  {"let", "let"},
  {"dp", "dp"},
  {"%selt-setter", "%selt-setter"},
  {"<slot>", "<slot>"},
  {"unknown-function-error", "unknown-function-error"},
  {"%lu", "%lu"},
  {"fab-gen", "fab-gen"},
  {"%file-exists?", "%file-exists?"},
  {"dv", "dv"},
  {"%current-output-port", "%current-output-port"},
  {"<col>", "<col>"},
  {"%symbols", "%symbols"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"%f-", "%f-"},
  {"%eof-object", "%eof-object"},
  {"%pair", "%pair"},
  {"<flat>", "<flat>"},
  {"%flo-bits", "%flo-bits"},
  {"%i^", "%i^"},
  {"error", "error"},
  {"ct-also", "ct-also"},
  {"sig-value", "sig-value"},
  {"seq", "seq"},
  {"%velt-setter", "%velt-setter"},
  {"quote", "quote"},
  {"%f+", "%f+"},
  {"fun-name-setter", "fun-name-setter"},
  {"slot-value", "slot-value"},
  {"<met>", "<met>"},
  {"slot-owner", "slot-owner"},
  {"%vnul", "%vnul"},
  {"<opts>", "<opts>"},
  {"%eq?", "%eq?"},
  {"%str", "%str"},
  {"bound?", "bound?"},
  {"%write-string", "%write-string"},
  {"%os-binding-value", "%os-binding-value"},
  {"%i<<<", "%i<<<"},
  {"lab", "lab"},
  {"%it/", "%it/"},
  {"df", "df"},
  {"dg", "dg"},
  {"tail", "tail"},
  {"%i+", "%i+"},
  {"sig-nary?", "sig-nary?"},
  {"%write-char", "%write-char"},
  {"<int>", "<int>"},
  {"%f/", "%f/"},
  {"%cu", "%cu"},
  {"%iu", "%iu"},
  {"lst", "lst"},
  {"%vec", "%vec"},
  {"fun-nary?", "fun-nary?"},
  {"<str>", "<str>"},
  {"%i&", "%i&"},
  {"%cb", "%cb"},
  {"dm", "dm"},
  {"%close-input-port", "%close-input-port"},
  {"file-opening-error", "file-opening-error"},
  {"wrong-number-arguments-error", "wrong-number-arguments-error"},
  {"%i<", "%i<"},
  {"tail-setter", "tail-setter"},
  {"%app-filename", "%app-filename"},
  {"<replace-generic-restart>", "<replace-generic-restart>"},
  {"%im", "%im"},
  {"%isa", "%isa"},
  {"<tup>", "<tup>"},
  {"isa?", "isa?"},
  {"met-app?", "met-app?"},
  {"apply", "apply"},
  {"object-parents", "object-parents"},
  {"%ib", "%ib"},
  {"%do-runtime-bindings", "%do-runtime-bindings"},
  {"*boot-macro-expanders*", "*boot-macro-expanders*"},
  {"fun", "fun"},
  {"fun-name", "fun-name"},
  {"%raw", "%raw"},
  {"%ft", "%ft"},
  {"sig-names", "sig-names"},
  {"<loc>", "<loc>"},
  {"fun-mets", "fun-mets"},
  {"%sb", "%sb"},
  {"slot-setter", "slot-setter"},
  {"%locative-value", "%locative-value"},
  {"%next-methods", "%next-methods"},
  {"isa", "isa"},
  {"not", "not"},
  {"%read-char", "%read-char"},
  {"fab-sym", "fab-sym"},
  {"head-setter", "head-setter"},
  {"%os-name", "%os-name"},
  {"incongruent-method-error", "incongruent-method-error"},
  {"<any>", "<any>"},
  {"<fun>", "<fun>"},
  {"%do-stack-frames", "%do-stack-frames"},
  {"fin", "fin"},
  {"%peek-char", "%peek-char"},
  {"gen-add-met", "gen-add-met"},
  {"*restarts-ok?*", "*restarts-ok?*"},
  {"ds", "ds"},
  {"%snul", "%snul"},
  {"<sym>", "<sym>"},
  {"slot-type", "slot-type"},
  {"fun-specs", "fun-specs"},
  {"%velt", "%velt"},
  {"%open-output-file", "%open-output-file"},
  {"find-setter", "find-setter"},
  {"%i-", "%i-"},
  {"%%macro", "%%macro"},
  {"%close-output-port", "%close-output-port"},
  {"%open-input-file", "%open-input-file"},
  {"%os-binding-value-setter", "%os-binding-value-setter"},
  {"%file-mtime", "%file-mtime"},
  {"sym-name", "sym-name"},
  {"fun-sig-setter", "fun-sig-setter"},
  {"%define-method", "%define-method"},
  {"slot-getter", "slot-getter"},
  {"object-direct-parents", "object-direct-parents"},
  {"slot-value-setter", "slot-value-setter"},
  {"object-direct-slots", "object-direct-slots"},
  {"%c=", "%c="},
  {"%fu", "%fu"},
  {"handler-info-message", "handler-info-message"},
  {"sorted-app-mets", "sorted-app-mets"},
  {"%i>>>", "%i>>>"},
  {"%char-ready?", "%char-ready?"},
  {"<num>", "<num>"},
  {"loc", "loc"},
  {"%i>>", "%i>>"},
  {"*macros-ok?*", "*macros-ok?*"},
  {"sig-arity", "sig-arity"},
  {"%app-args", "%app-args"},
  {"keyboard-interrupt", "keyboard-interrupt"},
  {"ct", "ct"},
  {"%binding-name", "%binding-name"},
  {"nil", "nil"},
  {"<seq>", "<seq>"},
  {"find-getter", "find-getter"},
  {"mif", "mif"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"%i=", "%i="},
  {"<gen>", "<gen>"},
  {"%slen", "%slen"},
  {"%slot", "%slot"},
  {"head", "head"},
  {"*boot-macro-names*", "*boot-macro-names*"},
  {"slot", "slot"},
  {"fun-value", "fun-value"},
  {"sig-specs", "sig-specs"},
  {"%current-input-port", "%current-input-port"},
  {"fun-names", "fun-names"},
  {"%f*", "%f*"},
  {"add-slot", "add-slot"},
  {"%f<", "%f<"},
  {"*boot-macro-module-names*", "*boot-macro-module-names*"},
  {"%file-type", "%file-type"},
  {"%c<", "%c<"},
  {"dss", "dss"},
  {"macro-expand", "macro-expand"},
  {"%fb", "%fb"},
  {"rep", "rep"},
  {"%f=", "%f="},
  {"%bb", "%bb"},
  {"type-error", "type-error"},
  {"%iv", "%iv"},
  {"%fi2f", "%fi2f"},
  {"use", "use"},
  {"%i*", "%i*"},
  {"<traits>", "<traits>"},
  {"%invoke-debugger", "%invoke-debugger"},
  {"object-slots", "object-slots"},
  {"nul", "nul"},
  {"%call-next-method", "%call-next-method"},
  {"set", "set"},
  {"%selt", "%selt"},
  {"<flo>", "<flo>"},
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
