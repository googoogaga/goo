/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/boot");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/boot */

DEF(YOOEE,"goo/boot","@@==");
DEF(Yfab_pair,"goo/boot","fab-pair");
DEF(YPTstart_running_atT,"goo/boot","%*start-running-at*");
DEF(Ynil,"goo/boot","nil");
DEF(YPtnul,"goo/boot","%tnul");
DEF(Yclass_gens_setter,"goo/boot","class-gens-setter");
DEF(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(YLsingletonG,"goo/boot","<singleton>");
DEF(YLboxG,"goo/boot","<box>");
DEF(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YPadd_met,"goo/boot","%add-met");
DEF(Yprop_owner,"goo/boot","prop-owner");
DEF(YPpatch_early_generic,"goo/boot","%patch-early-generic");
DEF(YLlogG,"goo/boot","<log>");
DEF(YPdispatch,"goo/boot","%dispatch");
DEF(YLopts_tupG,"goo/boot","<opts-tup>");
DEF(Yclass_id,"goo/boot","class-id");
DEF(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DEF(YOtall2Q,"goo/boot","@tall2?");
DEF(Yfun_sig,"goo/boot","fun-sig");
DEF(Ynul,"goo/boot","nul");
DEF(YLanyG,"goo/boot","<any>");
DEF(Yclass_gens,"goo/boot","class-gens");
DEF(Yclass_mets,"goo/boot","class-mets");
DEF(YOanyQ,"goo/boot","@any?");
DEF(Ysig_specs_setter,"goo/boot","sig-specs-setter");
DEF(Yprop_offset,"goo/boot","prop-offset");
DEF(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(Yclass_prop_len,"goo/boot","class-prop-len");
DEF(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(YPearly_dispatch,"goo/boot","%early-dispatch");
DEF(YLoptsG,"goo/boot","<opts>");
DEF(YTearly_classesT,"goo/boot","*early-classes*");
DEF(Ymay_isaQ,"goo/boot","may-isa?");
DEF(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
DEF(Yreturn_type_error,"goo/boot","return-type-error");
DEF(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(YPPmacro,"goo/boot","%%macro");
DEF(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YOfold,"goo/boot","@fold");
DEF(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(Yunexec,"goo/boot","unexec");
DEF(YOtanyQ,"goo/boot","@tany?");
DEF(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
DEF(YPfinalize_propsX,"goo/boot","%finalize-props!");
DEF(YPwith_monitor,"goo/boot","%with-monitor");
DEF(Yproduct_elts,"goo/boot","product-elts");
DEF(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
DEF(YLgenG,"goo/boot","<gen>");
DEF(YOfill,"goo/boot","@fill");
DEF(YLclassG,"goo/boot","<class>");
DEF(Yfun_mets_setter,"goo/boot","fun-mets-setter");
DEF(YOlst,"goo/boot","@lst");
DEF(Yfun_code,"goo/boot","fun-code");
DEF(Yprops_of,"goo/boot","props-of");
DEF(Yone_nil,"goo/boot","one-nil");
DEF(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YLtypeG,"goo/boot","<type>");
DEF(YPcollect_direct_props,"goo/boot","%collect-direct-props");
DEF(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(Ysym_name,"goo/boot","sym-name");
DEF(Yfun_mets,"goo/boot","fun-mets");
DEF(Yclass_children,"goo/boot","class-children");
DEF(YOfab,"goo/boot","@fab");
DEF(YLsymG,"goo/boot","<sym>");
DEF(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YLmetG,"goo/boot","<met>");
DEF(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(Yclass_children_setter,"goo/boot","class-children-setter");
DEF(Yprop_init,"goo/boot","prop-init");
DEF(YLstrG,"goo/boot","<str>");
DEF(YDgen_cache_singletons_offset,"goo/boot","$gen-cache-singletons-offset");
DEF(Ynul_prop,"goo/boot","nul-prop");
DEF(Yerror,"goo/boot","error");
DEF(Yunion_elts,"goo/boot","union-elts");
DEF(YOelt,"goo/boot","@elt");
DEF(YLtupG,"goo/boot","<tup>");
DEF(YPTused_symbols_too_earlyT,"goo/boot","%*used-symbols-too-early*");
DEF(Ynew,"goo/boot","new");
DEF(YPprop_offset,"goo/boot","%prop-offset");
DEF(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(Yclass_forward,"goo/boot","class-forward");
DEF(Ycpl_error,"goo/boot","cpl-error");
DEF(YLfunG,"goo/boot","<fun>");
DEF(YDgen_cache_classes_offset,"goo/boot","$gen-cache-classes-offset");
DEF(YLflatG,"goo/boot","<flat>");
DEF(YOsubtypeQ,"goo/boot","@subtype?");
DEF(YDnum_int_bits,"goo/boot","$num-int-bits");
DEF(Ysig_specs,"goo/boot","sig-specs");
DEF(Yopts_tup_storage,"goo/boot","opts-tup-storage");
DEF(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(Yarity_error,"goo/boot","arity-error");
DEF(Yfun_env,"goo/boot","fun-env");
DEF(YLlstG,"goo/boot","<lst>");
DEF(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YOalter,"goo/boot","@alter");
DEF(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(Yarithmetic_error,"goo/boot","arithmetic-error");
DEF(Yfab_sym,"goo/boot","fab-sym");
DEF(Yproperty_type_error,"goo/boot","property-type-error");
DEF(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YLseqXG,"goo/boot","<seq!>");
DEF(YOdel_dups,"goo/boot","@del-dups");
DEF(Yas_error,"goo/boot","as-error");
DEF(Yprop_type,"goo/boot","prop-type");
DEF(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
DEF(YLfun_infoG,"goo/boot","<fun-info>");
DEF(YOall2Q,"goo/boot","@all2?");
DEF(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
DEF(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(Yrange_error,"goo/boot","range-error");
DEF(YLseqIG,"goo/boot","<seq.>");
DEF(Ytype_error,"goo/boot","type-error");
DEF(Ytype_class,"goo/boot","type-class");
DEF(Ysig_val,"goo/boot","sig-val");
DEF(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(Yinternal_error,"goo/boot","internal-error");
DEF(Yfun_info_names,"goo/boot","fun-info-names");
DEF(YLseqG,"goo/boot","<seq>");
DEF(Yclass_parents_setter,"goo/boot","class-parents-setter");
DEF(Ytail_setter,"goo/boot","tail-setter");
DEF(YOlit,"goo/boot","@lit");
DEF(Yfun_info_count,"goo/boot","fun-info-count");
DEF(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(YPtrue,"goo/boot","%true");
DEF(YOtype_equalQ,"goo/boot","@type-equal?");
DEF(YOdo,"goo/boot","@do");
DEF(YLcolXG,"goo/boot","<col!>");
DEF(Ygen_cache_classes,"goo/boot","gen-cache-classes");
DEF(Ybox_value_setter,"goo/boot","box-value-setter");
DEF(YOallQ,"goo/boot","@all?");
DEF(Yclass_parents,"goo/boot","class-parents");
DEF(Yopts_count,"goo/boot","opts-count");
DEF(Ytail,"goo/boot","tail");
DEF(YLsigG,"goo/boot","<sig>");
DEF(Yclass_props,"goo/boot","class-props");
DEF(YLcolIG,"goo/boot","<col.>");
DEF(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YPsymbols,"goo/boot","%symbols");
DEF(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YDmax_int,"goo/boot","$max-int");
DEF(YisaQ,"goo/boot","isa?");
DEF(YLcolG,"goo/boot","<col>");
DEF(YOmemQ,"goo/boot","@mem?");
DEF(Yclass_mets_setter,"goo/boot","class-mets-setter");
DEF(YsubtypeQ,"goo/boot","subtype?");
DEF(Ybox_value,"goo/boot","box-value");
DEF(Yprop_setter,"goo/boot","prop-setter");
DEF(YOrevX,"goo/boot","@rev!");
DEF(YPrnul,"goo/boot","%rnul");
DEF(YLrepG,"goo/boot","<rep>");
DEF(YtT,"goo/boot","t*");
DEF(Yfun_info_setter,"goo/boot","fun-info-setter");
DEF(YOpick,"goo/boot","@pick");
DEF(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(Ytype_object,"goo/boot","type-object");
DEF(YLlocG,"goo/boot","<loc>");
DEF(Yfun_info,"goo/boot","fun-info");
DEF(YLfloG,"goo/boot","<flo>");
DEF(YPfalse,"goo/boot","%false");
DEF(YOOnulQ,"goo/boot","@@nul?");
DEF(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(YOfind,"goo/boot","@find");
DEF(YLfixnumG,"goo/boot","<fixnum>");
DEF(Yclass_name,"goo/boot","class-name");
DEF(Yopts_location,"goo/boot","opts-location");
DEF(YDmin_int,"goo/boot","$min-int");
DEF(Ylst,"goo/boot","lst");
DEF(Ytup,"goo/boot","tup");
DEF(YOmap,"goo/boot","@map");
DEF(YLintG,"goo/boot","<int>");
DEF(Yorder_specs,"goo/boot","order-specs");
DEF(YLpropG,"goo/boot","<prop>");
DEF(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(Ynot,"goo/boot","not");
DEF(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
DEF(YLnumG,"goo/boot","<num>");
DEF(YPadd_prop,"goo/boot","%add-prop");
DEF(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
DEF(Yprop_getter,"goo/boot","prop-getter");
DEF(YOtup,"goo/boot","@tup");
DEF(YPsnul,"goo/boot","%snul");
DEF(YPclasses_readyQ,"goo/boot","%classes-ready?");
DEF(YLproductG,"goo/boot","<product>");
DEF(Ysig_arity,"goo/boot","sig-arity");
DEF(Yapp_args,"goo/boot","app-args");
DEF(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(YOcat2,"goo/boot","@cat2");
DEF(Yfun_info_name,"goo/boot","fun-info-name");
DEF(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(Yclass_row,"goo/boot","class-row");
DEF(Yhead_setter,"goo/boot","head-setter");
DEF(Ysyntax_error,"goo/boot","syntax-error");
DEF(Yfun_info_src,"goo/boot","fun-info-src");
DEF(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
DEF(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YPsymbols_readyQ,"goo/boot","%symbols-ready?");
DEF(Ynarity_error,"goo/boot","narity-error");
DEF(YLunionG,"goo/boot","<union>");
DEF(Yapp_filename,"goo/boot","app-filename");
DEF(YLchrG,"goo/boot","<chr>");
DEF(Yhead,"goo/boot","head");
DEF(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YOnew,"goo/boot","@new");
DEF(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(Yfun_cache,"goo/boot","fun-cache");
DEF(YOrev,"goo/boot","@rev");
DEF(YLsubclassG,"goo/boot","<subclass>");
DEF(Yassert_error,"goo/boot","assert-error");
DEF(YLmagG,"goo/boot","<mag>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_207);
DEFLIT(lit_170);
DEFLIT(lit_40);
DEFLIT(lit_282);
DEFLIT(lit_193);
DEFLIT(lit_276);
DEFLIT(lit_124);
DEFLIT(lit_18);
DEFLIT(lit_112);
DEFLIT(lit_250);
DEFLIT(lit_83);
DEFLIT(lit_277);
DEFLIT(lit_182);
DEFLIT(lit_205);
DEFLIT(lit_51);
DEFLIT(lit_168);
DEFLIT(lit_62);
DEFLIT(lit_146);
DEFLIT(lit_298);
DEFLIT(lit_30);
DEFLIT(lit_8);
DEFLIT(lit_88);
DEFLIT(lit_82);
DEFLIT(lit_307);
DEFLIT(lit_316);
DEFLIT(lit_27);
DEFLIT(lit_312);
DEFLIT(lit_1);
DEFLIT(lit_49);
DEFLIT(lit_142);
DEFLIT(lit_157);
DEFLIT(lit_105);
DEFLIT(lit_301);
DEFLIT(lit_223);
DEFLIT(lit_114);
DEFLIT(lit_129);
DEFLIT(lit_187);
DEFLIT(lit_76);
DEFLIT(lit_268);
DEFLIT(lit_300);
DEFLIT(lit_43);
DEFLIT(lit_56);
DEFLIT(lit_192);
DEFLIT(lit_14);
DEFLIT(lit_131);
DEFLIT(lit_93);
DEFLIT(lit_197);
DEFLIT(lit_166);
DEFLIT(lit_60);
DEFLIT(lit_32);
DEFLIT(lit_154);
DEFLIT(lit_196);
DEFLIT(lit_26);
DEFLIT(lit_119);
DEFLIT(lit_254);
DEFLIT(lit_103);
DEFLIT(lit_80);
DEFLIT(lit_311);
DEFLIT(lit_306);
DEFLIT(lit_183);
DEFLIT(lit_53);
DEFLIT(lit_164);
DEFLIT(lit_145);
DEFLIT(lit_3);
DEFLIT(lit_16);
DEFLIT(lit_44);
DEFLIT(lit_162);
DEFLIT(lit_230);
DEFLIT(lit_235);
DEFLIT(lit_172);
DEFLIT(lit_297);
DEFLIT(lit_201);
DEFLIT(lit_102);
DEFLIT(lit_2);
DEFLIT(lit_222);
DEFLIT(lit_153);
DEFLIT(lit_47);
DEFLIT(lit_17);
DEFLIT(lit_137);
DEFLIT(lit_262);
DEFLIT(lit_160);
DEFLIT(lit_291);
DEFLIT(lit_58);
DEFLIT(lit_200);
DEFLIT(lit_327);
DEFLIT(lit_67);
DEFLIT(lit_229);
DEFLIT(lit_165);
DEFLIT(lit_54);
DEFLIT(lit_128);
DEFLIT(lit_288);
DEFLIT(lit_24);
DEFLIT(lit_11);
DEFLIT(lit_198);
DEFLIT(lit_209);
DEFLIT(lit_234);
DEFLIT(lit_134);
DEFLIT(lit_211);
DEFLIT(lit_84);
DEFLIT(lit_321);
DEFLIT(lit_188);
DEFLIT(lit_94);
DEFLIT(lit_86);
DEFLIT(lit_126);
DEFLIT(lit_173);
DEFLIT(lit_264);
DEFLIT(lit_113);
DEFLIT(lit_45);
DEFLIT(lit_39);
DEFLIT(lit_249);
DEFLIT(lit_231);
DEFLIT(lit_101);
DEFLIT(lit_233);
DEFLIT(lit_159);
DEFLIT(lit_29);
DEFLIT(lit_195);
DEFLIT(lit_34);
DEFLIT(lit_108);
DEFLIT(lit_139);
DEFLIT(lit_55);
DEFLIT(lit_92);
DEFLIT(lit_179);
DEFLIT(lit_38);
DEFLIT(lit_33);
DEFLIT(lit_5);
DEFLIT(lit_257);
DEFLIT(lit_215);
DEFLIT(lit_310);
DEFLIT(lit_259);
DEFLIT(lit_90);
DEFLIT(lit_274);
DEFLIT(lit_138);
DEFLIT(lit_125);
DEFLIT(lit_261);
DEFLIT(lit_109);
DEFLIT(lit_232);
DEFLIT(lit_206);
DEFLIT(lit_271);
DEFLIT(lit_69);
DEFLIT(lit_171);
DEFLIT(lit_65);
DEFLIT(lit_120);
DEFLIT(lit_214);
DEFLIT(lit_37);
DEFLIT(lit_31);
DEFLIT(lit_147);
DEFLIT(lit_202);
DEFLIT(lit_243);
DEFLIT(lit_85);
DEFLIT(lit_253);
DEFLIT(lit_155);
DEFLIT(lit_260);
DEFLIT(lit_293);
DEFLIT(lit_10);
DEFLIT(lit_227);
DEFLIT(lit_150);
DEFLIT(lit_219);
DEFLIT(lit_245);
DEFLIT(lit_248);
DEFLIT(lit_299);
DEFLIT(lit_99);
DEFLIT(lit_218);
DEFLIT(lit_186);
DEFLIT(lit_79);
DEFLIT(lit_267);
DEFLIT(lit_48);
DEFLIT(lit_52);
DEFLIT(lit_68);
DEFLIT(lit_136);
DEFLIT(lit_46);
DEFLIT(lit_269);
DEFLIT(lit_302);
DEFLIT(lit_283);
DEFLIT(lit_74);
DEFLIT(lit_107);
DEFLIT(lit_72);
DEFLIT(lit_220);
DEFLIT(lit_194);
DEFLIT(lit_295);
DEFLIT(lit_281);
DEFLIT(lit_280);
DEFLIT(lit_28);
DEFLIT(lit_133);
DEFLIT(lit_258);
DEFLIT(lit_318);
DEFLIT(lit_100);
DEFLIT(lit_315);
DEFLIT(lit_158);
DEFLIT(lit_328);
DEFLIT(lit_87);
DEFLIT(lit_118);
DEFLIT(lit_184);
DEFLIT(lit_285);
DEFLIT(lit_266);
DEFLIT(lit_73);
DEFLIT(lit_132);
DEFLIT(lit_152);
DEFLIT(lit_320);
DEFLIT(lit_41);
DEFLIT(lit_178);
DEFLIT(lit_217);
DEFLIT(lit_156);
DEFLIT(lit_50);
DEFLIT(lit_135);
DEFLIT(lit_252);
DEFLIT(lit_242);
DEFLIT(lit_89);
DEFLIT(lit_322);
DEFLIT(lit_70);
DEFLIT(lit_25);
DEFLIT(lit_289);
DEFLIT(lit_294);
DEFLIT(lit_272);
DEFLIT(lit_175);
DEFLIT(lit_96);
DEFLIT(lit_21);
DEFLIT(lit_115);
DEFLIT(lit_9);
DEFLIT(lit_66);
DEFLIT(lit_208);
DEFLIT(lit_95);
DEFLIT(lit_7);
DEFLIT(lit_143);
DEFLIT(lit_292);
DEFLIT(lit_0);
DEFLIT(lit_319);
DEFLIT(lit_144);
DEFLIT(lit_91);
DEFLIT(lit_228);
DEFLIT(lit_176);
DEFLIT(lit_98);
DEFLIT(lit_212);
DEFLIT(lit_42);
DEFLIT(lit_15);
DEFLIT(lit_78);
DEFLIT(lit_247);
DEFLIT(lit_19);
DEFLIT(lit_177);
DEFLIT(lit_317);
DEFLIT(lit_308);
DEFLIT(lit_71);
DEFLIT(lit_81);
DEFLIT(lit_236);
DEFLIT(lit_296);
DEFLIT(lit_265);
DEFLIT(lit_251);
DEFLIT(lit_130);
DEFLIT(lit_204);
DEFLIT(lit_191);
DEFLIT(lit_174);
DEFLIT(lit_314);
DEFLIT(lit_163);
DEFLIT(lit_57);
DEFLIT(lit_278);
DEFLIT(lit_141);
DEFLIT(lit_122);
DEFLIT(lit_22);
DEFLIT(lit_106);
DEFLIT(lit_326);
DEFLIT(lit_240);
DEFLIT(lit_59);
DEFLIT(lit_77);
DEFLIT(lit_116);
DEFLIT(lit_199);
DEFLIT(lit_286);
DEFLIT(lit_303);
DEFLIT(lit_63);
DEFLIT(lit_12);
DEFLIT(lit_221);
DEFLIT(lit_246);
DEFLIT(lit_226);
DEFLIT(lit_279);
DEFLIT(lit_127);
DEFLIT(lit_216);
DEFLIT(lit_324);
DEFLIT(lit_275);
DEFLIT(lit_104);
DEFLIT(lit_256);
DEFLIT(lit_6);
DEFLIT(lit_23);
DEFLIT(lit_239);
DEFLIT(lit_111);
DEFLIT(lit_189);
DEFLIT(lit_140);
DEFLIT(lit_323);
DEFLIT(lit_161);
DEFLIT(lit_169);
DEFLIT(lit_255);
DEFLIT(lit_64);
DEFLIT(lit_13);
DEFLIT(lit_121);
DEFLIT(lit_225);
DEFLIT(lit_75);
DEFLIT(lit_167);
DEFLIT(lit_117);
DEFLIT(lit_35);
DEFLIT(lit_110);
DEFLIT(lit_149);
DEFLIT(lit_190);
DEFLIT(lit_244);
DEFLIT(lit_97);
DEFLIT(lit_238);
DEFLIT(lit_263);
DEFLIT(lit_210);
DEFLIT(lit_304);
DEFLIT(lit_241);
DEFLIT(lit_148);
DEFLIT(lit_270);
DEFLIT(lit_284);
DEFLIT(lit_123);
DEFLIT(lit_20);
DEFLIT(lit_180);
DEFLIT(lit_305);
DEFLIT(lit_287);
DEFLIT(lit_224);
DEFLIT(lit_61);
DEFLIT(lit_181);
DEFLIT(lit_325);
DEFLIT(lit_4);
DEFLIT(lit_290);
DEFLIT(lit_185);
DEFLIT(lit_36);
DEFLIT(lit_203);
DEFLIT(lit_309);
DEFLIT(lit_273);
DEFLIT(lit_151);
DEFLIT(lit_213);
DEFLIT(lit_313);
DEFLIT(lit_237);

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
extern P YPnulQ (P);
extern P YPPlen (P);
extern P YPrevX (P);
extern P YPcat2 (P,P);
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
extern P YPsig (P,P,P,P,P);
extern P YPsrc_loc_line_setter (P,P);
extern P YPsrc_loc_line (P);
extern P YPsrc_loc_file_setter (P,P);
extern P YPsrc_loc_file (P);
extern P YPsrc_loc (P,P);
extern P YPfun_info_name_setter (P,P);
extern P YPfun_info_name (P);
extern P YPfun_info_names_setter (P,P);
extern P YPfun_info_names (P);
extern P YPfun_info_src_setter (P,P);
extern P YPfun_info_src (P);
extern P YPfun_info_src_loc_setter (P,P);
extern P YPfun_info_src_loc (P);
extern P YPfun_info_count_setter (P,P);
extern P YPfun_info_count (P);
extern P YPfun_info (P,P,P,P,P);
extern P YPmet_code_setter (P,P);
extern P YPmet_code (P);
extern P YPmet_sig_setter (P,P);
extern P YPmet_sig (P);
extern P YPmet_info_setter (P,P);
extern P YPmet_info (P);
extern P YPmet_env_setter (P,P);
extern P YPmet_env (P);
extern P YPmet (P,P,P,P);
extern P YPtag_bits (P);
extern P YPtag (P,P);
extern P YPuntag (P);
extern P YPtag_into (P,P);
extern P YPuntag_into (P);
extern P YPindirect_objectQ (P);
extern P YOadrQ (P);
extern P YPclass_of (P);
extern P YPib (P);
extern P YPfixnum (P);
extern P YPiu (P);
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
extern P YPstr_eqQ (P,P);
extern P YPcompute_ancestors (P);
extern P YPdefine_parents (P,P);
extern P YPPsym (P);
extern P YPsym_nam_setter (P,P);
extern P YPsym_nam (P);
extern P YPsym (P);
extern P YPfab_sym (P);
LOCFOR(fun_116);
FUNFOR(Yfab_sym);
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
extern P YPgen_sig_setter (P,P);
extern P YPgen_sig (P);
extern P YPgen_info_setter (P,P);
extern P YPgen_info (P);
extern P YPgen_mets_setter (P,P);
extern P YPgen_mets (P);
extern P YPfun_cache_setter (P,P);
extern P YPfun_cache (P);
extern P YPgen (P,P,P,P,P);
FUNFOR(YPprop_offset);
FUNFOR(YPearly_dispatch);
FUNFOR(YPadd_met);
extern P YPfab_sig (P,P,P,P,P);
extern P YPfab_genScode (P,P,P,P,P);
extern P YPfab_gen (P,P,P,P);
extern P YPfab_met (P,P,P,P,P,P);
FUNFOR(YPadd_prop);
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
extern P YOnulQ (P);
FUNFOR(YOOnulQ);
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
FUNFOR(Yfab_pair);
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
LOCFOR(fun_340);
FUNFOR(YOmemQ);
LOCFOR(fun_342);
FUNFOR(YOdel_dups);
FUNFOR(YOopts_as_lst);
FUNFOR(YOlst);
extern P YOtlen (P);
extern P YOtelt (P,P);
extern P YOtelt_setter (P,P,P);
FUNFOR(YOtanyQ);
FUNFOR(YOtall2Q);
extern P YPto_tup (P);
LOCFOR(fun_into_352);
FUNFOR(YOtup);
LOCFOR(fun_into_354);
FUNFOR(YtT);
FUNFOR(YOtype_equalQ);
extern P YOsubclassQ (P,P);
extern P YOclass_isaQ (P,P);
FUNFOR(YOsubtypeQ);
FUNFOR(YOmay_isaQ);
extern P YOsingleton_isaQ (P,P);
extern P YOisaQ (P,P);
FUNFOR(Yunexec);
FUNFOR(YPpatch_early_generic);
extern P YPpatch_early_generics ();
extern P YOraw_nulQ (P);
extern P YPcons_args ();
extern P YPcheck_arity (P,P,P);
extern P YParg_check_type (P,P,P);
extern P YPfun_val_check_type (P,P,P);
extern P YPcheck_type (P,P,P);
extern P YPstack_check (P);
extern P YPPcheck_call_types (P);
extern P YPmacro (P,P,P);
FUNFOR(Yapp_filename);
FUNFOR(Yapp_args);
extern P YPlit (P);
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

P YPclass_id_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)10);
  return T0;
}

INLINE P YPclass_id(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)10);
  return T0;
}

P YPclass_row_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)11);
  return T0;
}

INLINE P YPclass_row(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)11);
  return T0;
}

P YPclass(P class_prop_len_,P class_name_,P class_parents_,P class_direct_props_,P class_ancestors_,P class_props_,P class_children_,P class_gens_,P class_mets_,P class_forward_,P class_id_,P class_row_) {
  P classF2;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLclassG),(P)12);
  classF2 = T0;
  (P)YPprop_elt_setter(Ynil,classF2,(P)12);
  (P)YPprop_elt_setter(class_row_,classF2,(P)11);
  (P)YPprop_elt_setter(class_id_,classF2,(P)10);
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

INLINE P YPnulQ(P x_) {
  P T0,T1;
DEFCREGS();
  T1 = (P)YPeqQ(x_,VARREF(Ynil));
  T0 = (P)YPbb(T1);
  return T0;
}

P YPPlen(P x_) {
  P xF11;
  P xF10;
  P iF9;
  P xF8;
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
  xF8 = x_;
  iF9 = (P)0;
  LOOP_0: {
    P a0_0,a0_1;
    xF10 = xF8;
    T2 = (P)YPeqQ(xF10,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = iF9;
    } else {
      xF11 = xF8;
      T4 = (P)YPprop_elt(xF11,(P)1);
      T5 = (P)YPiA(iF9,(P)1);
      a0_0 = T4;
      a0_1 = T5;
      xF8 = a0_0;
      iF9 = a0_1;
      goto LOOP_0;
      T0 = T3;
    }
  }
  return T0;
}

P YPrevX(P c_) {
  P tF16;
  P xF15;
  P xF14;
  P rF13;
  P lF12;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  lF12 = c_;
  rF13 = Ynil;
  LOOP_1: {
    P a1_0,a1_1;
    xF14 = lF12;
    T2 = (P)YPeqQ(xF14,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = rF13;
    } else {
      xF15 = lF12;
      T4 = (P)YPprop_elt(xF15,(P)1);
      tF16 = T4;
      (P)YPtail_setter(rF13,lF12);
      a1_0 = tF16;
      a1_1 = lF12;
      lF12 = a1_0;
      rF13 = a1_1;
      goto LOOP_1;
      T0 = T3;
    }
  }
  return T0;
}

P YPcat2(P x_,P y_) {
  P xF26;
  P xF25;
  P xF24;
  P xF23;
  P xF22;
  P yF21;
  P lxyF20;
  P xF19;
  P xF18;
  P lxF17;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
DEFCREGS();
  lxF17 = VARREF(Ynil);
  xF18 = x_;
  LOOP_2: {
    P a2_0,a2_1;
    xF19 = xF18;
    T2 = (P)YPeqQ(xF19,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      lxyF20 = lxF17;
      yF21 = y_;
      LOOP_3: {
        P a3_0,a3_1;
        xF22 = yF21;
        T5 = (P)YPeqQ(xF22,VARREF(Ynil));
        T4 = (P)YPbb(T5);
        if (T5) {
          T6 = (P)YPrevX(lxyF20);
          T3 = T6;
        } else {
          xF23 = yF21;
          T9 = (P)YPprop_elt(xF23,(P)0);
          T8 = (P)YPpair(T9,lxyF20);
          xF24 = yF21;
          T10 = (P)YPprop_elt(xF24,(P)1);
          a3_0 = T8;
          a3_1 = T10;
          lxyF20 = a3_0;
          yF21 = a3_1;
          goto LOOP_3;
          T3 = T7;
        }
      }
      T0 = T3;
    } else {
      xF25 = xF18;
      T13 = (P)YPprop_elt(xF25,(P)0);
      T12 = (P)YPpair(T13,lxF17);
      xF26 = xF18;
      T14 = (P)YPprop_elt(xF26,(P)1);
      a2_0 = T12;
      a2_1 = T14;
      lxF17 = a2_0;
      xF18 = a2_1;
      goto LOOP_2;
      T0 = T11;
    }
  }
  return T0;
}

P YPsig_specs_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPsig_specs(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsig_naryQ_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPsig_naryQ(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPsig_arity_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPsig_arity(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPsig_val_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPsig_val(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPsig_unification_vars_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPsig_unification_vars(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPsig(P sig_specs_,P sig_naryQ_,P sig_arity_,P sig_val_,P sig_unification_vars_) {
  P classF27;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLsigG),(P)5);
  classF27 = T0;
  (P)YPprop_elt_setter(Ynil,classF27,(P)5);
  (P)YPprop_elt_setter(sig_unification_vars_,classF27,(P)4);
  (P)YPprop_elt_setter(sig_val_,classF27,(P)3);
  (P)YPprop_elt_setter(sig_arity_,classF27,(P)2);
  (P)YPprop_elt_setter(sig_naryQ_,classF27,(P)1);
  (P)YPprop_elt_setter(sig_specs_,classF27,(P)0);
  return classF27;
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
  P classF28;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLsrc_locG),(P)2);
  classF28 = T0;
  (P)YPprop_elt_setter(Ynil,classF28,(P)2);
  (P)YPprop_elt_setter(src_loc_file_,classF28,(P)1);
  (P)YPprop_elt_setter(src_loc_line_,classF28,(P)0);
  return classF28;
}

P YPfun_info_name_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPfun_info_name(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPfun_info_names_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPfun_info_names(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPfun_info_src_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPfun_info_src(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPfun_info_src_loc_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPfun_info_src_loc(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPfun_info_count_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPfun_info_count(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPfun_info(P fun_info_name_,P fun_info_names_,P fun_info_src_,P fun_info_src_loc_,P fun_info_count_) {
  P classF29;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLfun_infoG),(P)5);
  classF29 = T0;
  (P)YPprop_elt_setter(Ynil,classF29,(P)5);
  (P)YPprop_elt_setter(fun_info_count_,classF29,(P)4);
  (P)YPprop_elt_setter(fun_info_src_loc_,classF29,(P)3);
  (P)YPprop_elt_setter(fun_info_src_,classF29,(P)2);
  (P)YPprop_elt_setter(fun_info_names_,classF29,(P)1);
  (P)YPprop_elt_setter(fun_info_name_,classF29,(P)0);
  return classF29;
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

P YPmet_sig_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPmet_sig(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPmet_info_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPmet_info(P x_) {
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

P YPmet(P met_code_,P met_sig_,P met_info_,P met_env_) {
  P classF30;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLmetG),(P)4);
  classF30 = T0;
  (P)YPprop_elt_setter(Ynil,classF30,(P)4);
  (P)YPprop_elt_setter(met_env_,classF30,(P)3);
  (P)YPprop_elt_setter(met_info_,classF30,(P)2);
  (P)YPprop_elt_setter(met_sig_,classF30,(P)1);
  (P)YPprop_elt_setter(met_code_,classF30,(P)0);
  return classF30;
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
  P tF33;
  P xF32;
  P xF31;
  P T0,T1,T2;
DEFCREGS();
  xF31 = x_;
  T2 = (P)YPiGG(xF31,(P)2);
  xF32 = T2;
  tF33 = t_;
  T1 = (P)YPiLL(xF32,(P)2);
  T0 = (P)YPiv(T1,tF33);
  return T0;
}

P YPuntag_into(P x_) {
  P tF36;
  P xF35;
  P xF34;
  P T0,T1,T2;
DEFCREGS();
  xF34 = x_;
  T2 = (P)YPiGG(xF34,(P)2);
  xF35 = T2;
  tF36 = (P)0;
  T1 = (P)YPiLL(xF35,(P)2);
  T0 = (P)YPiv(T1,tF36);
  return T0;
}

P YPindirect_objectQ(P x_) {
  P xF37;
  P T0,T1;
DEFCREGS();
  xF37 = x_;
  T1 = (P)YPiB(xF37,(P)3);
  T0 = (P)YPiE(T1,(P)0);
  return T0;
}

INLINE P YOadrQ(P x_) {
  P xF38;
  P T0,T1,T2;
DEFCREGS();
  xF38 = x_;
  T2 = (P)YPiB(xF38,(P)3);
  T1 = (P)YPiE(T2,(P)0);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YPclass_of(P x_) {
  P tagF40;
  P xF39;
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
  xF39 = x_;
  T5 = (P)YPiB(xF39,(P)3);
  tagF40 = T5;
  T2 = (P)YPiE(tagF40,(P)0);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = (P)YPobject_class(x_);
    T0 = T3;
  } else {
    T4 = (P)YPelt(VARREF(YDdirect_object_class),tagF40);
    T0 = T4;
  }
  return T0;
}

INLINE P YPib(P x_) {
  P tF42;
  P xF41;
  P T0,T1;
DEFCREGS();
  xF41 = x_;
  tF42 = (P)1;
  T1 = (P)YPiLL(xF41,(P)2);
  T0 = (P)YPiv(T1,tF42);
  return T0;
}

INLINE P YPfixnum(P x_) {
  P tF45;
  P xF44;
  P xF43;
  P T0,T1;
DEFCREGS();
  xF43 = x_;
  xF44 = xF43;
  tF45 = (P)1;
  T1 = (P)YPiLL(xF44,(P)2);
  T0 = (P)YPiv(T1,tF45);
  return T0;
}

INLINE P YPiu(P x_) {
  P xF46;
  P T0;
DEFCREGS();
  xF46 = x_;
  T0 = (P)YPiGG(xF46,(P)2);
  return T0;
}

INLINE P YOintQ(P x_) {
  P xF47;
  P T0,T1,T2;
DEFCREGS();
  xF47 = x_;
  T2 = (P)YPiB(xF47,(P)3);
  T1 = (P)YPiE(T2,(P)1);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YPcb(P x_) {
  P tF49;
  P xF48;
  P T0,T1;
DEFCREGS();
  xF48 = x_;
  tF49 = (P)2;
  T1 = (P)YPiLL(xF48,(P)2);
  T0 = (P)YPiv(T1,tF49);
  return T0;
}

INLINE P YPchr(P x_) {
  P tF52;
  P xF51;
  P xF50;
  P T0,T1;
DEFCREGS();
  xF50 = x_;
  xF51 = xF50;
  tF52 = (P)2;
  T1 = (P)YPiLL(xF51,(P)2);
  T0 = (P)YPiv(T1,tF52);
  return T0;
}

INLINE P YPcu(P x_) {
  P xF53;
  P T0;
DEFCREGS();
  xF53 = x_;
  T0 = (P)YPiGG(xF53,(P)2);
  return T0;
}

INLINE P YPlb(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPtag_into(x_,(P)3);
  return T0;
}

INLINE P YPloc(P x_) {
  P xF54;
  P T0;
DEFCREGS();
  xF54 = x_;
  T0 = (P)YPtag_into(xF54,(P)3);
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

P YPstr_eqQ(P s1_,P s2_) {
  P c2F59;
  P c1F58;
  P tmpF57;
  P iF56;
  P lenF55;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
DEFCREGS();
  T14 = (P)YPslen(s1_);
  lenF55 = T14;
  T3 = (P)YPslen(s2_);
  T2 = (P)YPiE(lenF55,T3);
  T1 = (P)YPbb(T2);
  if (T2) {
    iF56 = (P)0;
    LOOP_4: {
      P a4_0;
      T13 = (P)YPiE(iF56,lenF55);
      T12 = (P)YPbb(T13);
      tmpF57 = T12;
      if (tmpF57 != YPfalse) {
        T4 = tmpF57;
      } else {
        T11 = (P)YPselt(s1_,iF56);
        c1F58 = T11;
        T10 = (P)YPselt(s2_,iF56);
        c2F59 = T10;
        T7 = (P)YPcE(c1F58,c2F59);
        T6 = (P)YPbb(T7);
        if (T7) {
          T9 = (P)YPiA(iF56,(P)1);
          a4_0 = T9;
          iF56 = a4_0;
          goto LOOP_4;
          T5 = T8;
        } else {
          T5 = YPfalse;
        }
        T4 = T5;
      }
    }
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
  return T0;
}

P YPcompute_ancestors(P parent_) {
  P xF63;
  P xF62;
  P parentF61;
  P resF60;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
DEFCREGS();
  resF60 = Ynil;
  parentF61 = parent_;
  LOOP_5: {
    P a5_0,a5_1;
    T2 = (P)YPeqQ(parentF61,VARREF(YLanyG));
    T1 = (P)YPbb(T2);
    if (T2) {
      T4 = (P)YPpair(VARREF(YLanyG),resF60);
      T3 = (P)YPrevX(T4);
      T0 = T3;
    } else {
      T6 = (P)YPpair(parentF61,resF60);
      xF62 = parentF61;
      T8 = (P)YPprop_elt(xF62,(P)2);
      xF63 = T8;
      T7 = (P)YPprop_elt(xF63,(P)0);
      a5_0 = T6;
      a5_1 = T7;
      resF60 = a5_0;
      parentF61 = a5_1;
      goto LOOP_5;
      T0 = T5;
    }
  }
  return T0;
}

P YPdefine_parents(P class_,P parents_) {
  P xF67;
  P xF66;
  P xF65;
  P xF64;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
DEFCREGS();
  T0 = (P)YPpair(class_,VARREF(YTearly_classesT));
  VARSET(YTearly_classesT,T0);
  (P)YPclass_prop_len_setter(YPint((P)0),class_);
  (P)YPclass_forward_setter(YPfalse,class_);
  (P)YPclass_parents_setter(parents_,class_);
  xF64 = parents_;
  T3 = (P)YPprop_elt(xF64,(P)0);
  T2 = (P)YPcompute_ancestors(T3);
  T1 = (P)YPpair(class_,T2);
  (P)YPclass_ancestors_setter(T1,class_);
  xF65 = parents_;
  T7 = (P)YPprop_elt(xF65,(P)0);
  xF66 = T7;
  T6 = (P)YPprop_elt(xF66,(P)6);
  T5 = (P)YPpair(class_,T6);
  xF67 = parents_;
  T8 = (P)YPprop_elt(xF67,(P)0);
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
  P classF68;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLsymG),(P)1);
  classF68 = T0;
  (P)YPprop_elt_setter(Ynil,classF68,(P)1);
  (P)YPprop_elt_setter(sym_nam_,classF68,(P)0);
  return classF68;
}

P YPfab_sym(P name_) {
  P xF75;
  P xF74;
  P symF73;
  P xF72;
  P symF71;
  P xF70;
  P sF69;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
  sF69 = VARREF(YPsymbols);
  LOOP_6: {
    P a6_0;
    xF70 = sF69;
    T2 = (P)YPeqQ(xF70,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T4 = (P)YPsym(name_);
      symF71 = T4;
      T3 = (P)YPpair(symF71,VARREF(YPsymbols));
      VARSET(YPsymbols,T3);
      T0 = symF71;
    } else {
      xF72 = sF69;
      T10 = (P)YPprop_elt(xF72,(P)0);
      symF73 = T10;
      xF74 = symF73;
      T7 = (P)YPprop_elt(xF74,(P)0);
      T6 = (P)YPstr_eqQ(T7,name_);
      if (T6 != YPfalse) {
        T5 = symF73;
      } else {
        xF75 = sF69;
        T9 = (P)YPprop_elt(xF75,(P)1);
        a6_0 = T9;
        sF69 = a6_0;
        goto LOOP_6;
        T5 = T8;
      }
      T0 = T5;
    }
  }
  return T0;
}

LOCCODEDEF(fun_116) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = (P)YPfab_sym(name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfab_sym) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = (P)YPfab_sym(name_);
UNLINK_STACK();
  QRET(T0);
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
  P classF76;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLfloG),(P)1);
  classF76 = T0;
  (P)YPprop_elt_setter(flo_dat_,classF76,(P)0);
  return classF76;
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
  P classF77;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLoptsG),(P)2);
  classF77 = T0;
  (P)YPprop_elt_setter(Ynil,classF77,(P)2);
  (P)YPprop_elt_setter(opts_count_,classF77,(P)1);
  (P)YPprop_elt_setter(opts_location_,classF77,(P)0);
  return classF77;
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
  P classF78;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLopts_tupG),(P)3);
  classF78 = T0;
  (P)YPprop_elt_setter(Ynil,classF78,(P)3);
  (P)YPprop_elt_setter(opts_tup_tup_,classF78,(P)2);
  (P)YPprop_elt_setter(opts_tup_count_,classF78,(P)1);
  (P)YPprop_elt_setter(opts_tup_location_,classF78,(P)0);
  return classF78;
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
  P classF79;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLpropG),(P)5);
  classF79 = T0;
  (P)YPprop_elt_setter(Ynil,classF79,(P)5);
  (P)YPprop_elt_setter(prop_init_,classF79,(P)4);
  (P)YPprop_elt_setter(prop_type_,classF79,(P)3);
  (P)YPprop_elt_setter(prop_setter_,classF79,(P)2);
  (P)YPprop_elt_setter(prop_getter_,classF79,(P)1);
  (P)YPprop_elt_setter(prop_owner_,classF79,(P)0);
  return classF79;
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
  P classF80;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLgen_cacheG),(P)5);
  classF80 = T0;
  (P)YPprop_elt_setter(Ynil,classF80,(P)5);
  (P)YPprop_elt_setter(gen_cache_count_,classF80,(P)4);
  (P)YPprop_elt_setter(gen_cache_classes_,classF80,(P)3);
  (P)YPprop_elt_setter(gen_cache_singletons_,classF80,(P)2);
  (P)YPprop_elt_setter(gen_cache_arg_pos_,classF80,(P)1);
  (P)YPprop_elt_setter(gen_cache_missableQ_,classF80,(P)0);
  return classF80;
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

P YPgen_sig_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPgen_sig(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPgen_info_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPgen_info(P x_) {
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

P YPgen(P gen_code_,P gen_sig_,P gen_info_,P gen_mets_,P fun_cache_) {
  P classF81;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLgenG),(P)5);
  classF81 = T0;
  (P)YPprop_elt_setter(Ynil,classF81,(P)5);
  (P)YPprop_elt_setter(fun_cache_,classF81,(P)4);
  (P)YPprop_elt_setter(gen_mets_,classF81,(P)3);
  (P)YPprop_elt_setter(gen_info_,classF81,(P)2);
  (P)YPprop_elt_setter(gen_sig_,classF81,(P)1);
  (P)YPprop_elt_setter(gen_code_,classF81,(P)0);
  return classF81;
}

FUNCODEDEF(YPprop_offset) {
  P owner_,getter_;
  P xF91;
  P xF90;
  P propF89;
  P xF88;
  P xF87;
  P xF86;
  P xF85;
  P propsF84;
  P iF83;
  P xF82;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  iF83 = (P)0;
  T13 = (P)YPobject_class(owner_);
  xF82 = T13;
  T12 = (P)YPprop_elt(xF82,(P)5);
  propsF84 = T12;
  LOOP_7: {
    P a7_0,a7_1;
    xF85 = propsF84;
    T2 = (P)YPeqQ(xF85,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      xF86 = YPint((P)-1);
      xF87 = xF86;
      T3 = (P)YPiGG(xF87,(P)2);
      T0 = T3;
    } else {
      xF88 = propsF84;
      T11 = (P)YPprop_elt(xF88,(P)0);
      propF89 = T11;
      xF90 = propF89;
      T7 = (P)YPprop_elt(xF90,(P)1);
      T6 = (P)YPeqQ(T7,getter_);
      T5 = (P)YPbb(T6);
      if (T6) {
        T4 = iF83;
      } else {
        T9 = (P)YPiA(iF83,(P)1);
        xF91 = propsF84;
        T10 = (P)YPprop_elt(xF91,(P)1);
        a7_0 = T9;
        a7_1 = T10;
        iF83 = a7_0;
        propsF84 = a7_1;
        goto LOOP_7;
        T4 = T8;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPearly_dispatch) {
  P args_;
  P genF92;
  P T0,T1,T2;
LINK_STACK();
  NARGS(args_, 0);
  T2 = (P)YPfun_reg();
  genF92 = T2;
  T1 = (P)YPsu(LITREF(lit_8));
  T0 = (P)YPbreak(T1);
  QRET(T0);
}

FUNCODEDEF(YPadd_met) {
  P gen_,met_;
  P xF93;
  P T0,T1,T2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  xF93 = gen_;
  T2 = (P)YPprop_elt(xF93,(P)3);
  T1 = (P)YPpair(met_,T2);
  T0 = (P)YPgen_mets_setter(T1,gen_);
UNLINK_STACK();
  QRET(T0);
}

P YPfab_sig(P specs_,P naryQ_,P arity_,P val_,P unis_) {
  P T0;
DEFCREGS();
  T0 = (P)YPsig(specs_,naryQ_,arity_,val_,unis_);
  return T0;
}

P YPfab_genScode(P code_,P sig_,P name_,P names_,P src_loc_) {
  P xF95;
  P infoF94;
  P T0,T1,T2;
DEFCREGS();
  T2 = (P)YPfun_info(name_,names_,src_loc_,YPfalse,YPint((P)0));
  infoF94 = T2;
  xF95 = code_;
  T1 = (P)YPprop_elt(xF95,(P)0);
  T0 = (P)YPgen(T1,sig_,infoF94,Ynil,YPfalse);
  return T0;
}

P YPfab_gen(P sig_,P name_,P names_,P src_loc_) {
  P T0;
DEFCREGS();
  T0 = (P)YPfab_genScode(VARREF(YPdispatch),sig_,name_,names_,src_loc_);
  return T0;
}

P YPfab_met(P code_,P sig_,P name_,P names_,P src_loc_,P src_) {
  P infoF96;
  P T0,T1;
DEFCREGS();
  T1 = (P)YPfun_info(name_,names_,src_loc_,src_,YPint((P)0));
  infoF96 = T1;
  T0 = (P)YPmet(code_,sig_,infoF96,YPfalse);
  return T0;
}

FUNCODEDEF(YPadd_prop) {
  P class_,prop_;
  P xF97;
  P T0,T1,T2;
LINK_STACK();
  ARG(class_, 0);
  ARG(prop_, 1);
  xF97 = class_;
  T2 = (P)YPprop_elt(xF97,(P)3);
  T1 = (P)YPpair(prop_,T2);
  T0 = (P)YPclass_direct_props_setter(T1,class_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_176) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLboxG),VARREF(Ybox_value));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_177) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLboxG),VARREF(Ybox_value));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_178) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_179) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsrc_locG),VARREF(Ysrc_loc_line));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_180) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_181) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsrc_locG),VARREF(Ysrc_loc_file));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_182) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_183) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Yhead));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_184) {
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

LOCCODEDEF(fun_185) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_186) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Ytail));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_187) {
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

LOCCODEDEF(fun_188) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_189) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsymG),VARREF(Ysym_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_190) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_191) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_prop_len));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_192) {
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

LOCCODEDEF(fun_193) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_194) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_195) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_196) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_parents));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_197) {
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

LOCCODEDEF(fun_198) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_199) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_direct_props));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_200) {
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

LOCCODEDEF(fun_201) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_202) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_ancestors));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_203) {
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

LOCCODEDEF(fun_204) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_205) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_props));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_206) {
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

LOCCODEDEF(fun_207) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_208) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_children));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_209) {
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

LOCCODEDEF(fun_210) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_211) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_gens));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_212) {
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

LOCCODEDEF(fun_213) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_214) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_mets));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_215) {
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

LOCCODEDEF(fun_216) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_217) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_forward));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_218) {
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

LOCCODEDEF(fun_219) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_220) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_id));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_221) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)-1));
}

LOCCODEDEF(fun_222) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_row));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_223) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

LOCCODEDEF(fun_224) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsingletonG),VARREF(Ytype_object));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_225) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_226) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsubclassG),VARREF(Ytype_class));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_227) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_228) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLunionG),VARREF(Yunion_elts));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_229) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_230) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLproductG),VARREF(Yproduct_elts));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_231) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_232) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_owner));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_233) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_234) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_getter));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_235) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_236) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_setter));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_237) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_238) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_type));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_239) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_240) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_init));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_241) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_242) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = fun_241;
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_243) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_244) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_245) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_246) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_247) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_248) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_249) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_250) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_251) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_specs));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_252) {
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

LOCCODEDEF(fun_253) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_254) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_naryQ));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_255) {
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

LOCCODEDEF(fun_256) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

LOCCODEDEF(fun_257) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_arity));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_258) {
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

LOCCODEDEF(fun_259) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_260) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_val));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_261) {
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

LOCCODEDEF(fun_262) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

LOCCODEDEF(fun_263) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_unification_vars));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_264) {
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

LOCCODEDEF(fun_265) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_266) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_267) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_name));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_268) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

LOCCODEDEF(fun_269) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_names));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_270) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_names));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_271) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_272) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_src_loc));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_273) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_src_loc));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_274) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

LOCCODEDEF(fun_275) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_src));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_276) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_src));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_277) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

LOCCODEDEF(fun_278) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_count));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_279) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_count));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_280) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_281) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_code));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_282) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

LOCCODEDEF(fun_283) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_sig));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_284) {
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

LOCCODEDEF(fun_285) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_286) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_info));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_287) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_info));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_288) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

LOCCODEDEF(fun_289) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_env));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_290) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

LOCCODEDEF(fun_291) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_mets));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_292) {
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

LOCCODEDEF(fun_293) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_294) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_cache));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_295) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

LOCCODEDEF(fun_296) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_location));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_297) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_298) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_count));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_299) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_300) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLopts_tupG),VARREF(Yopts_tup_storage));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_301) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(YPcollect_direct_props) {
  P class_;
  P xF102;
  P xF101;
  P parentF100;
  P xF99;
  P xF98;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(class_, 0);
  xF98 = class_;
  T4 = (P)YPprop_elt(xF98,(P)2);
  xF99 = T4;
  T3 = (P)YPprop_elt(xF99,(P)0);
  parentF100 = T3;
  xF101 = parentF100;
  T1 = (P)YPprop_elt(xF101,(P)5);
  xF102 = class_;
  T2 = (P)YPprop_elt(xF102,(P)3);
  T0 = (P)YPcat2(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPfinalize_propsX) {
  P name_,class_;
  P tF107;
  P xF106;
  P xF105;
  P xF104;
  P xF103;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(name_, 0);
  ARG(class_, 1);
  (P)YPclass_name_setter(name_,class_);
  xF103 = class_;
  T1 = (P)YPprop_elt(xF103,(P)3);
  T0 = (P)YPrevX(T1);
  (P)YPclass_direct_props_setter(T0,class_);
  T2 = CALL1(1,VARREF(YPcollect_direct_props),class_);
  (P)YPclass_props_setter(T2,class_);
  xF104 = class_;
  T6 = (P)YPprop_elt(xF104,(P)5);
  T5 = (P)YPPlen(T6);
  xF105 = T5;
  xF106 = xF105;
  tF107 = (P)1;
  T4 = (P)YPiLL(xF106,(P)2);
  T3 = (P)YPiv(T4,tF107);
  (P)YPclass_prop_len_setter(T3,class_);
UNLINK_STACK();
  QRET(class_);
}

INLINE P YOhead(P x_) {
  P xF108;
  P T0;
DEFCREGS();
  xF108 = x_;
  T0 = (P)YPprop_elt(xF108,(P)0);
  return T0;
}

P YOhead_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPhead_setter(z_,x_);
  return T0;
}

INLINE P YOtail(P x_) {
  P xF109;
  P T0;
DEFCREGS();
  xF109 = x_;
  T0 = (P)YPprop_elt(xF109,(P)1);
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
  P xF113;
  P xF112;
  P xF111;
  P xF110;
  P T0,T1,T2,T3;
DEFCREGS();
  xF110 = x_;
  xF111 = xF110;
  T2 = (P)YPiGG(xF111,(P)2);
  xF112 = y_;
  xF113 = xF112;
  T3 = (P)YPiGG(xF113,(P)2);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOA(P x_,P y_) {
  P tF120;
  P xF119;
  P xF118;
  P xF117;
  P xF116;
  P xF115;
  P xF114;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  xF114 = x_;
  xF115 = xF114;
  T3 = (P)YPiGG(xF115,(P)2);
  xF116 = y_;
  xF117 = xF116;
  T4 = (P)YPiGG(xF117,(P)2);
  T2 = (P)YPiA(T3,T4);
  xF118 = T2;
  xF119 = xF118;
  tF120 = (P)1;
  T1 = (P)YPiLL(xF119,(P)2);
  T0 = (P)YPiv(T1,tF120);
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

INLINE P YOnulQ(P x_) {
  P xF121;
  P T0,T1;
DEFCREGS();
  xF121 = x_;
  T1 = (P)YPeqQ(xF121,VARREF(Ynil));
  T0 = (P)YPbb(T1);
  return T0;
}

FUNCODEDEF(YOOnulQ) {
  P x_;
  P xF122;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF122 = x_;
  T1 = (P)YPeqQ(xF122,VARREF(Ynil));
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
  P tF125;
  P xF124;
  P xF123;
  P T0,T1,T2;
DEFCREGS();
  T2 = (P)YPPlen(x_);
  xF123 = T2;
  xF124 = xF123;
  tF125 = (P)1;
  T1 = (P)YPiLL(xF124,(P)2);
  T0 = (P)YPiv(T1,tF125);
  return T0;
}

INLINE P YOoelt(P x_,P i_) {
  P xF128;
  P xF127;
  P xF126;
  P T0,T1,T2,T3;
DEFCREGS();
  xF126 = x_;
  T1 = (P)YPprop_elt(xF126,(P)0);
  xF127 = i_;
  xF128 = xF127;
  T3 = (P)YPiGG(xF128,(P)2);
  T2 = (P)YPi_((P)0,T3);
  T0 = (P)YPloc_off(T1,T2);
  return T0;
}

INLINE P YOoelt_setter(P z_,P x_,P i_) {
  P xF131;
  P xF130;
  P xF129;
  P T0,T1,T2,T3;
DEFCREGS();
  xF129 = x_;
  T1 = (P)YPprop_elt(xF129,(P)0);
  xF130 = i_;
  xF131 = xF130;
  T3 = (P)YPiGG(xF131,(P)2);
  T2 = (P)YPi_((P)0,T3);
  T0 = (P)YPloc_off_setter(z_,T1,T2);
  return T0;
}

INLINE P YOolen(P x_) {
  P xF132;
  P T0;
DEFCREGS();
  xF132 = x_;
  T0 = (P)YPprop_elt(xF132,(P)1);
  return T0;
}

FUNCODEDEF(YOallQ) {
  P test_,c_;
  P xF139;
  P xF138;
  P xF137;
  P xF136;
  P xF135;
  P xF134;
  P pF133;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  pF133 = c_;
  LOOP_8: {
    P a8_0;
    xF134 = pF133;
    xF135 = xF134;
    T2 = (P)YPeqQ(xF135,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPtrue;
    } else {
      xF136 = pF133;
      xF137 = xF136;
      T5 = (P)YPprop_elt(xF137,(P)0);
      T4 = CALL1(0,test_,T5);
      if (T4 != YPfalse) {
        xF138 = pF133;
        xF139 = xF138;
        T7 = (P)YPprop_elt(xF139,(P)1);
        a8_0 = T7;
        pF133 = a8_0;
        goto LOOP_8;
        T3 = T6;
      } else {
        T3 = YPfalse;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOall2Q) {
  P test_,x_,y_;
  P xF155;
  P xF154;
  P xF153;
  P xF152;
  P xF151;
  P xF150;
  P xF149;
  P xF148;
  P xF147;
  P xF146;
  P xF145;
  P xF144;
  P xF143;
  P xF142;
  P pyF141;
  P pxF140;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  pxF140 = x_;
  pyF141 = y_;
  LOOP_9: {
    P a9_0,a9_1;
    xF142 = pxF140;
    xF143 = xF142;
    T2 = (P)YPeqQ(xF143,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      xF144 = pyF141;
      xF145 = xF144;
      T4 = (P)YPeqQ(xF145,VARREF(Ynil));
      T3 = (P)YPbb(T4);
      T0 = T3;
    } else {
      xF146 = pyF141;
      xF147 = xF146;
      T7 = (P)YPeqQ(xF147,VARREF(Ynil));
      T6 = (P)YPbb(T7);
      if (T7) {
        T5 = YPfalse;
      } else {
        xF148 = pxF140;
        xF149 = xF148;
        T10 = (P)YPprop_elt(xF149,(P)0);
        xF150 = pyF141;
        xF151 = xF150;
        T11 = (P)YPprop_elt(xF151,(P)0);
        T9 = CALL2(0,test_,T10,T11);
        if (T9 != YPfalse) {
          xF152 = pxF140;
          xF153 = xF152;
          T13 = (P)YPprop_elt(xF153,(P)1);
          xF154 = pyF141;
          xF155 = xF154;
          T14 = (P)YPprop_elt(xF155,(P)1);
          a9_0 = T13;
          a9_1 = T14;
          pxF140 = a9_0;
          pyF141 = a9_1;
          goto LOOP_9;
          T8 = T12;
        } else {
          T8 = YPfalse;
        }
        T5 = T8;
      }
      T0 = T5;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOelt) {
  P x_,key_;
  P xF174;
  P xF173;
  P tF172;
  P xF171;
  P xF170;
  P xF169;
  P xF168;
  P xF167;
  P xF166;
  P yF165;
  P xF164;
  P xF163;
  P xF162;
  P yF161;
  P xF160;
  P yF159;
  P xF158;
  P xF157;
  P countF156;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  check_type(YPint((P)0),VARREF(YLfixnumG));
  countF156 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF157 = x_;
  LOOP_10: {
    P a10_0,a10_1;
    xF158 = xF157;
    yF159 = Ynil;
    T2 = (P)YPeqQ(xF158,yF159);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = VARREF(Ynul);
    } else {
      xF160 = countF156;
      yF161 = key_;
      T5 = (P)YPiE(xF160,yF161);
      T4 = (P)YPbb(T5);
      if (T5) {
        xF162 = xF157;
        xF163 = xF162;
        T6 = (P)YPprop_elt(xF163,(P)0);
        T3 = T6;
      } else {
        xF164 = countF156;
        yF165 = YPint((P)1);
        xF166 = xF164;
        xF167 = xF166;
        T11 = (P)YPiGG(xF167,(P)2);
        xF168 = yF165;
        xF169 = xF168;
        T12 = (P)YPiGG(xF169,(P)2);
        T10 = (P)YPiA(T11,T12);
        xF170 = T10;
        xF171 = xF170;
        tF172 = (P)1;
        T9 = (P)YPiLL(xF171,(P)2);
        T8 = (P)YPiv(T9,tF172);
        xF173 = xF157;
        xF174 = xF173;
        T13 = (P)YPprop_elt(xF174,(P)1);
        a10_0 = T8;
        a10_1 = T13;
        countF156 = a10_0;
        xF157 = a10_1;
        goto LOOP_10;
        T3 = T7;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOfill) {
  P x_,f_;
  P xF179;
  P xF178;
  P xF177;
  P xF176;
  P pF175;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(f_, 1);
  pF175 = x_;
  LOOP_11: {
    P a11_0;
    xF176 = pF175;
    xF177 = xF176;
    T2 = (P)YPeqQ(xF177,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = x_;
    } else {
      (P)YOhead_setter(f_,pF175);
      xF178 = pF175;
      xF179 = xF178;
      T4 = (P)YPprop_elt(xF179,(P)1);
      a11_0 = T4;
      pF175 = a11_0;
      goto LOOP_11;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOanyQ) {
  P test_,c_;
  P xF187;
  P xF186;
  P tmpF185;
  P xF184;
  P xF183;
  P xF182;
  P xF181;
  P pF180;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  pF180 = c_;
  LOOP_12: {
    P a12_0;
    xF181 = pF180;
    xF182 = xF181;
    T2 = (P)YPeqQ(xF182,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPfalse;
    } else {
      xF183 = pF180;
      xF184 = xF183;
      T7 = (P)YPprop_elt(xF184,(P)0);
      T6 = CALL1(0,test_,T7);
      tmpF185 = T6;
      if (tmpF185 != YPfalse) {
        T3 = tmpF185;
      } else {
        xF186 = pF180;
        xF187 = xF186;
        T5 = (P)YPprop_elt(xF187,(P)1);
        a12_0 = T5;
        pF180 = a12_0;
        goto LOOP_12;
        T3 = T4;
      }
      T0 = T3;
    }
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

FUNCODEDEF(Yfab_pair) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = (P)YPpair(h_,t_);
UNLINK_STACK();
  RET(T0);
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
  P xF195;
  P xF194;
  P xF193;
  P xF192;
  P xF191;
  P xF190;
  P resF189;
  P xF188;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  xF188 = x_;
  resF189 = Ynil;
  LOOP_13: {
    P a13_0,a13_1;
    xF190 = xF188;
    xF191 = xF190;
    T2 = (P)YPeqQ(xF191,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL1(1,VARREF(YOrevX),resF189);
      T0 = T3;
    } else {
      xF192 = xF188;
      xF193 = xF192;
      T5 = (P)YPprop_elt(xF193,(P)1);
      xF194 = xF188;
      xF195 = xF194;
      T8 = (P)YPprop_elt(xF195,(P)0);
      T7 = CALL1(1,f_,T8);
      T6 = (P)YOpair(T7,resF189);
      a13_0 = T5;
      a13_1 = T6;
      xF188 = a13_0;
      resF189 = a13_1;
      goto LOOP_13;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOpick) {
  P f_,x_;
  P xF204;
  P xF203;
  P hF202;
  P xF201;
  P xF200;
  P xF199;
  P xF198;
  P resF197;
  P xF196;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  xF196 = x_;
  resF197 = Ynil;
  LOOP_14: {
    P a14_0,a14_1;
    xF198 = xF196;
    xF199 = xF198;
    T2 = (P)YPeqQ(xF199,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL1(1,VARREF(YOrevX),resF197);
      T0 = T3;
    } else {
      xF200 = xF196;
      xF201 = xF200;
      T9 = (P)YPprop_elt(xF201,(P)0);
      hF202 = T9;
      xF203 = xF196;
      xF204 = xF203;
      T5 = (P)YPprop_elt(xF204,(P)1);
      T7 = CALL1(1,f_,hF202);
      if (T7 != YPfalse) {
        T8 = (P)YOpair(hF202,resF197);
        T6 = T8;
      } else {
        T6 = resF197;
      }
      a14_0 = T5;
      a14_1 = T6;
      xF196 = a14_0;
      resF197 = a14_1;
      goto LOOP_14;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOdo) {
  P f_,x_;
  P xF211;
  P xF210;
  P xF209;
  P xF208;
  P xF207;
  P xF206;
  P xF205;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  xF205 = x_;
  LOOP_15: {
    P a15_0;
    xF206 = xF205;
    xF207 = xF206;
    T2 = (P)YPeqQ(xF207,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPfalse;
    } else {
      xF208 = xF205;
      xF209 = xF208;
      T3 = (P)YPprop_elt(xF209,(P)0);
      CALL1(0,f_,T3);
      xF210 = xF205;
      xF211 = xF210;
      T5 = (P)YPprop_elt(xF211,(P)1);
      a15_0 = T5;
      xF205 = a15_0;
      goto LOOP_15;
      T0 = T4;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOalter) {
  P dst_,src_;
  P xF224;
  P xF223;
  P xF222;
  P xF221;
  P xF220;
  P xF219;
  P xF218;
  P xF217;
  P tmpF216;
  P xF215;
  P xF214;
  P ssF213;
  P dsF212;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  dsF212 = dst_;
  ssF213 = src_;
  LOOP_16: {
    P a16_0,a16_1;
    xF214 = dsF212;
    xF215 = xF214;
    T5 = (P)YPeqQ(xF215,VARREF(Ynil));
    T4 = (P)YPbb(T5);
    tmpF216 = T4;
    if (tmpF216 != YPfalse) {
      T1 = tmpF216;
    } else {
      xF217 = ssF213;
      xF218 = xF217;
      T3 = (P)YPeqQ(xF218,VARREF(Ynil));
      T2 = (P)YPbb(T3);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      xF219 = ssF213;
      xF220 = xF219;
      T6 = (P)YPprop_elt(xF220,(P)0);
      (P)YOhead_setter(T6,dsF212);
      xF221 = dsF212;
      xF222 = xF221;
      T8 = (P)YPprop_elt(xF222,(P)1);
      xF223 = ssF213;
      xF224 = xF223;
      T9 = (P)YPprop_elt(xF224,(P)1);
      a16_0 = T8;
      a16_1 = T9;
      dsF212 = a16_0;
      ssF213 = a16_1;
      goto LOOP_16;
      T0 = T7;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfab) {
  P x_,s_;
  P tF241;
  P xF240;
  P xF239;
  P xF238;
  P xF237;
  P xF236;
  P xF235;
  P yF234;
  P xF233;
  P xF232;
  P xF231;
  P xF230;
  P xF229;
  P yF228;
  P xF227;
  P resF226;
  P iF225;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  check_type(s_,VARREF(YLfixnumG));
  iF225 = s_;
  check_type(Ynil,VARREF(YLlstG));
  resF226 = Ynil;
  LOOP_17: {
    P a17_0,a17_1;
    xF227 = iF225;
    yF228 = YPint((P)0);
    xF229 = xF227;
    xF230 = xF229;
    T3 = (P)YPiGG(xF230,(P)2);
    xF231 = yF228;
    xF232 = xF231;
    T4 = (P)YPiGG(xF232,(P)2);
    T2 = (P)YPiL(T3,T4);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = resF226;
    } else {
      xF233 = iF225;
      yF234 = YPint((P)-1);
      xF235 = xF233;
      xF236 = xF235;
      T9 = (P)YPiGG(xF236,(P)2);
      xF237 = yF234;
      xF238 = xF237;
      T10 = (P)YPiGG(xF238,(P)2);
      T8 = (P)YPiA(T9,T10);
      xF239 = T8;
      xF240 = xF239;
      tF241 = (P)1;
      T7 = (P)YPiLL(xF240,(P)2);
      T6 = (P)YPiv(T7,tF241);
      T11 = (P)YOpair(VARREF(Ynul),resF226);
      a17_0 = T6;
      a17_1 = T11;
      iF225 = a17_0;
      resF226 = a17_1;
      goto LOOP_17;
      T0 = T5;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfold) {
  P combine_,init_,c_;
  P xF249;
  P xF248;
  P xF247;
  P xF246;
  P xF245;
  P xF244;
  P cF243;
  P resF242;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
  resF242 = init_;
  cF243 = c_;
  LOOP_18: {
    P a18_0,a18_1;
    xF244 = cF243;
    xF245 = xF244;
    T2 = (P)YPeqQ(xF245,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = resF242;
    } else {
      xF246 = cF243;
      xF247 = xF246;
      T5 = (P)YPprop_elt(xF247,(P)0);
      T4 = CALL2(0,combine_,resF242,T5);
      xF248 = cF243;
      xF249 = xF248;
      T6 = (P)YPprop_elt(xF249,(P)1);
      a18_0 = T4;
      a18_1 = T6;
      resF242 = a18_0;
      cF243 = a18_1;
      goto LOOP_18;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOrev) {
  P x_;
  P xF257;
  P xF256;
  P xF255;
  P xF254;
  P xF253;
  P xF252;
  P rF251;
  P lF250;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  lF250 = x_;
  rF251 = Ynil;
  LOOP_19: {
    P a19_0,a19_1;
    xF252 = lF250;
    xF253 = xF252;
    T2 = (P)YPeqQ(xF253,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = rF251;
    } else {
      xF254 = lF250;
      xF255 = xF254;
      T4 = (P)YPprop_elt(xF255,(P)1);
      xF256 = lF250;
      xF257 = xF256;
      T6 = (P)YPprop_elt(xF257,(P)0);
      T5 = (P)YOpair(T6,rF251);
      a19_0 = T4;
      a19_1 = T5;
      lF250 = a19_0;
      rF251 = a19_1;
      goto LOOP_19;
      T0 = T3;
    }
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
  P tF274;
  P xF273;
  P xF272;
  P xF271;
  P xF270;
  P xF269;
  P xF268;
  P yF267;
  P xF266;
  P xF265;
  P xF264;
  P xF263;
  P xF262;
  P xF261;
  P xF260;
  P iF259;
  P cF258;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  cF258 = c_;
  iF259 = YPint((P)0);
  LOOP_20: {
    P a20_0,a20_1;
    xF260 = cF258;
    xF261 = xF260;
    T2 = (P)YPeqQ(xF261,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = VARREF(Ynul);
    } else {
      xF262 = cF258;
      xF263 = xF262;
      T5 = (P)YPprop_elt(xF263,(P)0);
      T4 = CALL1(1,f_,T5);
      if (T4 != YPfalse) {
        T3 = iF259;
      } else {
        xF264 = cF258;
        xF265 = xF264;
        T7 = (P)YPprop_elt(xF265,(P)1);
        xF266 = iF259;
        yF267 = YPint((P)1);
        xF268 = xF266;
        xF269 = xF268;
        T11 = (P)YPiGG(xF269,(P)2);
        xF270 = yF267;
        xF271 = xF270;
        T12 = (P)YPiGG(xF271,(P)2);
        T10 = (P)YPiA(T11,T12);
        xF272 = T10;
        xF273 = xF272;
        tF274 = (P)1;
        T9 = (P)YPiLL(xF273,(P)2);
        T8 = (P)YPiv(T9,tF274);
        a20_0 = T7;
        a20_1 = T8;
        cF258 = a20_0;
        iF259 = a20_1;
        goto LOOP_20;
        T3 = T6;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_340) {
  P y_;
  P yF276;
  P xF275;
  P T0,T1;
LINK_STACK();
  ARG(y_, 0);
  xF275 = FREEREF(0);
  yF276 = y_;
  T1 = (P)YPeqQ(xF275,yF276);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmemQ) {
  P c_,x_;
  P yF278;
  P xF277;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T4 = FUNFAB(fun_340,1,x_);
  T3 = CALL2(1,VARREF(YOfind),T4,c_);
  xF277 = T3;
  yF278 = VARREF(Ynul);
  T2 = (P)YPeqQ(xF277,yF278);
  T1 = (P)YPbb(T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_342) {
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
  T2 = fun_342;
  T1 = CALL3(1,VARREF(YOfold),T2,Ynil,x_);
  T0 = CALL1(1,VARREF(YOrevX),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOopts_as_lst) {
  P x_;
  P xF307;
  P xF306;
  P xF305;
  P iF304;
  P xF303;
  P tF302;
  P xF301;
  P xF300;
  P xF299;
  P xF298;
  P xF297;
  P xF296;
  P yF295;
  P xF294;
  P yF293;
  P xF292;
  P lF291;
  P iF290;
  P tF289;
  P xF288;
  P xF287;
  P xF286;
  P xF285;
  P xF284;
  P xF283;
  P yF282;
  P xF281;
  P xF280;
  P xF279;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(x_, 0);
  xF279 = x_;
  xF280 = xF279;
  T19 = (P)YPprop_elt(xF280,(P)1);
  xF281 = T19;
  yF282 = YPint((P)-1);
  xF283 = xF281;
  xF284 = xF283;
  T17 = (P)YPiGG(xF284,(P)2);
  xF285 = yF282;
  xF286 = xF285;
  T18 = (P)YPiGG(xF286,(P)2);
  T16 = (P)YPiA(T17,T18);
  xF287 = T16;
  xF288 = xF287;
  tF289 = (P)1;
  T15 = (P)YPiLL(xF288,(P)2);
  T14 = (P)YPiv(T15,tF289);
  iF290 = T14;
  lF291 = Ynil;
  LOOP_21: {
    P a21_0,a21_1;
    xF292 = iF290;
    yF293 = YPint((P)-1);
    T2 = (P)YPeqQ(xF292,yF293);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = lF291;
    } else {
      xF294 = iF290;
      yF295 = YPint((P)-1);
      xF296 = xF294;
      xF297 = xF296;
      T7 = (P)YPiGG(xF297,(P)2);
      xF298 = yF295;
      xF299 = xF298;
      T8 = (P)YPiGG(xF299,(P)2);
      T6 = (P)YPiA(T7,T8);
      xF300 = T6;
      xF301 = xF300;
      tF302 = (P)1;
      T5 = (P)YPiLL(xF301,(P)2);
      T4 = (P)YPiv(T5,tF302);
      xF303 = x_;
      iF304 = iF290;
      xF305 = xF303;
      T11 = (P)YPprop_elt(xF305,(P)0);
      xF306 = iF304;
      xF307 = xF306;
      T13 = (P)YPiGG(xF307,(P)2);
      T12 = (P)YPi_((P)0,T13);
      T10 = (P)YPloc_off(T11,T12);
      T9 = (P)YOpair(T10,lF291);
      a21_0 = T4;
      a21_1 = T9;
      iF290 = a21_0;
      lF291 = a21_1;
      goto LOOP_21;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOlst) {
  P x_;
  P xF336;
  P xF335;
  P xF334;
  P iF333;
  P xF332;
  P tF331;
  P xF330;
  P xF329;
  P xF328;
  P xF327;
  P xF326;
  P xF325;
  P yF324;
  P xF323;
  P yF322;
  P xF321;
  P lF320;
  P iF319;
  P tF318;
  P xF317;
  P xF316;
  P xF315;
  P xF314;
  P xF313;
  P xF312;
  P yF311;
  P xF310;
  P xF309;
  P xF308;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  NARGS(x_, 0);
  xF308 = x_;
  xF309 = xF308;
  T19 = (P)YPprop_elt(xF309,(P)1);
  xF310 = T19;
  yF311 = YPint((P)-1);
  xF312 = xF310;
  xF313 = xF312;
  T17 = (P)YPiGG(xF313,(P)2);
  xF314 = yF311;
  xF315 = xF314;
  T18 = (P)YPiGG(xF315,(P)2);
  T16 = (P)YPiA(T17,T18);
  xF316 = T16;
  xF317 = xF316;
  tF318 = (P)1;
  T15 = (P)YPiLL(xF317,(P)2);
  T14 = (P)YPiv(T15,tF318);
  iF319 = T14;
  lF320 = Ynil;
  LOOP_22: {
    P a22_0,a22_1;
    xF321 = iF319;
    yF322 = YPint((P)-1);
    T2 = (P)YPeqQ(xF321,yF322);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = lF320;
    } else {
      xF323 = iF319;
      yF324 = YPint((P)-1);
      xF325 = xF323;
      xF326 = xF325;
      T7 = (P)YPiGG(xF326,(P)2);
      xF327 = yF324;
      xF328 = xF327;
      T8 = (P)YPiGG(xF328,(P)2);
      T6 = (P)YPiA(T7,T8);
      xF329 = T6;
      xF330 = xF329;
      tF331 = (P)1;
      T5 = (P)YPiLL(xF330,(P)2);
      T4 = (P)YPiv(T5,tF331);
      xF332 = x_;
      iF333 = iF319;
      xF334 = xF332;
      T11 = (P)YPprop_elt(xF334,(P)0);
      xF335 = iF333;
      xF336 = xF335;
      T13 = (P)YPiGG(xF336,(P)2);
      T12 = (P)YPi_((P)0,T13);
      T10 = (P)YPloc_off(T11,T12);
      T9 = (P)YOpair(T10,lF320);
      a22_0 = T4;
      a22_1 = T9;
      iF319 = a22_0;
      lF320 = a22_1;
      goto LOOP_22;
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

INLINE P YOtlen(P x_) {
  P tF339;
  P xF338;
  P xF337;
  P T0,T1,T2;
DEFCREGS();
  T2 = (P)YPtlen(x_);
  xF337 = T2;
  xF338 = xF337;
  tF339 = (P)1;
  T1 = (P)YPiLL(xF338,(P)2);
  T0 = (P)YPiv(T1,tF339);
  return T0;
}

INLINE P YOtelt(P x_,P i_) {
  P xF341;
  P xF340;
  P T0,T1;
DEFCREGS();
  xF340 = i_;
  xF341 = xF340;
  T1 = (P)YPiGG(xF341,(P)2);
  T0 = (P)YPtelt(x_,T1);
  return T0;
}

INLINE P YOtelt_setter(P z_,P x_,P i_) {
  P xF343;
  P xF342;
  P T0,T1;
DEFCREGS();
  xF342 = i_;
  xF343 = xF342;
  T1 = (P)YPiGG(xF343,(P)2);
  T0 = (P)YPtelt_setter(z_,x_,T1);
  return T0;
}

FUNCODEDEF(YOtanyQ) {
  P test_,c_;
  P tF377;
  P xF376;
  P xF375;
  P xF374;
  P xF373;
  P xF372;
  P xF371;
  P yF370;
  P xF369;
  P tmpF368;
  P xF367;
  P xF366;
  P iF365;
  P xF364;
  P xF363;
  P xF362;
  P xF361;
  P xF360;
  P yF359;
  P xF358;
  P iF357;
  P tF356;
  P xF355;
  P xF354;
  P xF353;
  P xF352;
  P xF351;
  P xF350;
  P yF349;
  P xF348;
  P tF347;
  P xF346;
  P xF345;
  P xF344;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  xF344 = c_;
  T22 = (P)YPtlen(xF344);
  xF345 = T22;
  xF346 = xF345;
  tF347 = (P)1;
  T21 = (P)YPiLL(xF346,(P)2);
  T20 = (P)YPiv(T21,tF347);
  xF348 = T20;
  yF349 = YPint((P)-1);
  xF350 = xF348;
  xF351 = xF350;
  T18 = (P)YPiGG(xF351,(P)2);
  xF352 = yF349;
  xF353 = xF352;
  T19 = (P)YPiGG(xF353,(P)2);
  T17 = (P)YPiA(T18,T19);
  xF354 = T17;
  xF355 = xF354;
  tF356 = (P)1;
  T16 = (P)YPiLL(xF355,(P)2);
  T15 = (P)YPiv(T16,tF356);
  iF357 = T15;
  LOOP_23: {
    P a23_0;
    xF358 = iF357;
    yF359 = YPint((P)0);
    xF360 = xF358;
    xF361 = xF360;
    T3 = (P)YPiGG(xF361,(P)2);
    xF362 = yF359;
    xF363 = xF362;
    T4 = (P)YPiGG(xF363,(P)2);
    T2 = (P)YPiL(T3,T4);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPfalse;
    } else {
      xF364 = c_;
      iF365 = iF357;
      xF366 = iF365;
      xF367 = xF366;
      T14 = (P)YPiGG(xF367,(P)2);
      T13 = (P)YPtelt(xF364,T14);
      T12 = CALL1(0,test_,T13);
      tmpF368 = T12;
      if (tmpF368 != YPfalse) {
        T5 = tmpF368;
      } else {
        xF369 = iF357;
        yF370 = YPint((P)-1);
        xF371 = xF369;
        xF372 = xF371;
        T10 = (P)YPiGG(xF372,(P)2);
        xF373 = yF370;
        xF374 = xF373;
        T11 = (P)YPiGG(xF374,(P)2);
        T9 = (P)YPiA(T10,T11);
        xF375 = T9;
        xF376 = xF375;
        tF377 = (P)1;
        T8 = (P)YPiLL(xF376,(P)2);
        T7 = (P)YPiv(T8,tF377);
        a23_0 = T7;
        iF357 = a23_0;
        goto LOOP_23;
        T5 = T6;
      }
      T0 = T5;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOtall2Q) {
  P test_,c1_,c2_;
  P tF425;
  P xF424;
  P xF423;
  P xF422;
  P xF421;
  P xF420;
  P xF419;
  P yF418;
  P xF417;
  P xF416;
  P xF415;
  P iF414;
  P xF413;
  P xF412;
  P xF411;
  P iF410;
  P xF409;
  P tmpF408;
  P xF407;
  P xF406;
  P xF405;
  P xF404;
  P yF403;
  P xF402;
  P iF401;
  P tF400;
  P xF399;
  P xF398;
  P xF397;
  P xF396;
  P xF395;
  P xF394;
  P yF393;
  P xF392;
  P tF391;
  P xF390;
  P xF389;
  P xF388;
  P yF387;
  P xF386;
  P tF385;
  P xF384;
  P xF383;
  P xF382;
  P tF381;
  P xF380;
  P xF379;
  P xF378;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(test_, 0);
  ARG(c1_, 1);
  ARG(c2_, 2);
  xF378 = c1_;
  T5 = (P)YPtlen(xF378);
  xF379 = T5;
  xF380 = xF379;
  tF381 = (P)1;
  T4 = (P)YPiLL(xF380,(P)2);
  T3 = (P)YPiv(T4,tF381);
  xF386 = T3;
  xF382 = c2_;
  T8 = (P)YPtlen(xF382);
  xF383 = T8;
  xF384 = xF383;
  tF385 = (P)1;
  T7 = (P)YPiLL(xF384,(P)2);
  T6 = (P)YPiv(T7,tF385);
  yF387 = T6;
  T2 = (P)YPeqQ(xF386,yF387);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF388 = c1_;
    T33 = (P)YPtlen(xF388);
    xF389 = T33;
    xF390 = xF389;
    tF391 = (P)1;
    T32 = (P)YPiLL(xF390,(P)2);
    T31 = (P)YPiv(T32,tF391);
    xF392 = T31;
    yF393 = YPint((P)-1);
    xF394 = xF392;
    xF395 = xF394;
    T29 = (P)YPiGG(xF395,(P)2);
    xF396 = yF393;
    xF397 = xF396;
    T30 = (P)YPiGG(xF397,(P)2);
    T28 = (P)YPiA(T29,T30);
    xF398 = T28;
    xF399 = xF398;
    tF400 = (P)1;
    T27 = (P)YPiLL(xF399,(P)2);
    T26 = (P)YPiv(T27,tF400);
    iF401 = T26;
    LOOP_24: {
      P a24_0;
      xF402 = iF401;
      yF403 = YPint((P)0);
      xF404 = xF402;
      xF405 = xF404;
      T24 = (P)YPiGG(xF405,(P)2);
      xF406 = yF403;
      xF407 = xF406;
      T25 = (P)YPiGG(xF407,(P)2);
      T23 = (P)YPiL(T24,T25);
      T22 = (P)YPbb(T23);
      tmpF408 = T22;
      if (tmpF408 != YPfalse) {
        T9 = tmpF408;
      } else {
        xF409 = c1_;
        iF410 = iF401;
        xF411 = iF410;
        xF412 = xF411;
        T13 = (P)YPiGG(xF412,(P)2);
        T12 = (P)YPtelt(xF409,T13);
        xF413 = c2_;
        iF414 = iF401;
        xF415 = iF414;
        xF416 = xF415;
        T15 = (P)YPiGG(xF416,(P)2);
        T14 = (P)YPtelt(xF413,T15);
        T11 = CALL2(1,test_,T12,T14);
        if (T11 != YPfalse) {
          xF417 = iF401;
          yF418 = YPint((P)-1);
          xF419 = xF417;
          xF420 = xF419;
          T20 = (P)YPiGG(xF420,(P)2);
          xF421 = yF418;
          xF422 = xF421;
          T21 = (P)YPiGG(xF422,(P)2);
          T19 = (P)YPiA(T20,T21);
          xF423 = T19;
          xF424 = xF423;
          tF425 = (P)1;
          T18 = (P)YPiLL(xF424,(P)2);
          T17 = (P)YPiv(T18,tF425);
          a24_0 = T17;
          iF401 = a24_0;
          goto LOOP_24;
          T10 = T16;
        } else {
          T10 = YPfalse;
        }
        T9 = T10;
      }
    }
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

INLINE P YPto_tup(P args_) {
  P tF485;
  P xF484;
  P xF483;
  P xF482;
  P xF481;
  P xF480;
  P xF479;
  P yF478;
  P xF477;
  P xF476;
  P xF475;
  P iF474;
  P xF473;
  P zF472;
  P xF471;
  P xF470;
  P xF469;
  P iF468;
  P xF467;
  P xF466;
  P yF465;
  P xF464;
  P kF463;
  P tF462;
  P xF461;
  P xF460;
  P xF459;
  P xF458;
  P xF457;
  P xF456;
  P yF455;
  P xF454;
  P xF453;
  P xF452;
  P iF451;
  P xF450;
  P zF449;
  P xF448;
  P xF447;
  P xF446;
  P iF445;
  P xF444;
  P xF443;
  P xF442;
  P iF441;
  P xF440;
  P zF439;
  P xF438;
  P xF437;
  P xF436;
  P iF435;
  P xF434;
  P yF433;
  P xF432;
  P tF431;
  P xF430;
  P xF429;
  P lF428;
  P xF427;
  P xF426;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
DEFCREGS();
  xF426 = args_;
  xF427 = xF426;
  T38 = (P)YPprop_elt(xF427,(P)1);
  lF428 = T38;
  xF429 = lF428;
  xF430 = xF429;
  T37 = (P)YPiGG(xF430,(P)2);
  T36 = (P)YPtup(T37,VARREF(Ynul));
  tF431 = T36;
  xF432 = lF428;
  yF433 = YPint((P)2);
  T1 = (P)YPiE(xF432,yF433);
  T0 = (P)YPbb(T1);
  if (T1) {
    xF434 = args_;
    iF435 = YPint((P)0);
    xF436 = xF434;
    T5 = (P)YPprop_elt(xF436,(P)0);
    xF437 = iF435;
    xF438 = xF437;
    T7 = (P)YPiGG(xF438,(P)2);
    T6 = (P)YPi_((P)0,T7);
    T4 = (P)YPloc_off(T5,T6);
    zF439 = T4;
    xF440 = tF431;
    iF441 = YPint((P)0);
    xF442 = iF441;
    xF443 = xF442;
    T3 = (P)YPiGG(xF443,(P)2);
    T2 = (P)YPtelt_setter(zF439,xF440,T3);
    xF444 = args_;
    iF445 = YPint((P)1);
    xF446 = xF444;
    T11 = (P)YPprop_elt(xF446,(P)0);
    xF447 = iF445;
    xF448 = xF447;
    T13 = (P)YPiGG(xF448,(P)2);
    T12 = (P)YPi_((P)0,T13);
    T10 = (P)YPloc_off(T11,T12);
    zF449 = T10;
    xF450 = tF431;
    iF451 = YPint((P)1);
    xF452 = iF451;
    xF453 = xF452;
    T9 = (P)YPiGG(xF453,(P)2);
    T8 = (P)YPtelt_setter(zF449,xF450,T9);
  } else {
    xF454 = lF428;
    yF455 = YPint((P)-1);
    xF456 = xF454;
    xF457 = xF456;
    T34 = (P)YPiGG(xF457,(P)2);
    xF458 = yF455;
    xF459 = xF458;
    T35 = (P)YPiGG(xF459,(P)2);
    T33 = (P)YPiA(T34,T35);
    xF460 = T33;
    xF461 = xF460;
    tF462 = (P)1;
    T32 = (P)YPiLL(xF461,(P)2);
    T31 = (P)YPiv(T32,tF462);
    kF463 = T31;
    LOOP_25: {
      P a25_0;
      xF464 = kF463;
      yF465 = YPint((P)-1);
      T18 = (P)YPiE(xF464,yF465);
      T17 = (P)YPbb(T18);
      xF466 = T17;
      T16 = (P)YPeqQ(xF466,YPfalse);
      T15 = (P)YPbb(T16);
      if (T16) {
        xF467 = args_;
        iF468 = kF463;
        xF469 = xF467;
        T22 = (P)YPprop_elt(xF469,(P)0);
        xF470 = iF468;
        xF471 = xF470;
        T24 = (P)YPiGG(xF471,(P)2);
        T23 = (P)YPi_((P)0,T24);
        T21 = (P)YPloc_off(T22,T23);
        zF472 = T21;
        xF473 = tF431;
        iF474 = kF463;
        xF475 = iF474;
        xF476 = xF475;
        T20 = (P)YPiGG(xF476,(P)2);
        T19 = (P)YPtelt_setter(zF472,xF473,T20);
        xF477 = kF463;
        yF478 = YPint((P)-1);
        xF479 = xF477;
        xF480 = xF479;
        T29 = (P)YPiGG(xF480,(P)2);
        xF481 = yF478;
        xF482 = xF481;
        T30 = (P)YPiGG(xF482,(P)2);
        T28 = (P)YPiA(T29,T30);
        xF483 = T28;
        xF484 = xF483;
        tF485 = (P)1;
        T27 = (P)YPiLL(xF484,(P)2);
        T26 = (P)YPiv(T27,tF485);
        a25_0 = T26;
        kF463 = a25_0;
        goto LOOP_25;
        T14 = T25;
      } else {
        T14 = YPfalse;
      }
    }
  }
  return tF431;
}

LOCCODEDEF(fun_into_352) {
  P k_;
  P tF507;
  P xF506;
  P xF505;
  P xF504;
  P xF503;
  P xF502;
  P xF501;
  P yF500;
  P xF499;
  P xF498;
  P xF497;
  P iF496;
  P xF495;
  P zF494;
  P xF493;
  P xF492;
  P xF491;
  P iF490;
  P xF489;
  P xF488;
  P yF487;
  P xF486;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(k_, 0);
  xF486 = k_;
  yF487 = YPint((P)-1);
  T4 = (P)YPiE(xF486,yF487);
  T3 = (P)YPbb(T4);
  xF488 = T3;
  T2 = (P)YPeqQ(xF488,YPfalse);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF489 = FREEREF(0);
    iF490 = k_;
    xF491 = xF489;
    T8 = (P)YPprop_elt(xF491,(P)0);
    xF492 = iF490;
    xF493 = xF492;
    T10 = (P)YPiGG(xF493,(P)2);
    T9 = (P)YPi_((P)0,T10);
    T7 = (P)YPloc_off(T8,T9);
    zF494 = T7;
    xF495 = FREEREF(1);
    iF496 = k_;
    xF497 = iF496;
    xF498 = xF497;
    T6 = (P)YPiGG(xF498,(P)2);
    T5 = (P)YPtelt_setter(zF494,xF495,T6);
    xF499 = k_;
    yF500 = YPint((P)-1);
    xF501 = xF499;
    xF502 = xF501;
    T15 = (P)YPiGG(xF502,(P)2);
    xF503 = yF500;
    xF504 = xF503;
    T16 = (P)YPiGG(xF504,(P)2);
    T14 = (P)YPiA(T15,T16);
    xF505 = T14;
    xF506 = xF505;
    tF507 = (P)1;
    T13 = (P)YPiLL(xF506,(P)2);
    T12 = (P)YPiv(T13,tF507);
    T11 = CALL1(0,FREEREF(2),T12);
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOtup) {
  P args_;
  P tF546;
  P xF545;
  P xF544;
  P xF543;
  P xF542;
  P xF541;
  P xF540;
  P yF539;
  P xF538;
  P intoF537;
  P xF536;
  P xF535;
  P iF534;
  P xF533;
  P zF532;
  P xF531;
  P xF530;
  P xF529;
  P iF528;
  P xF527;
  P xF526;
  P xF525;
  P iF524;
  P xF523;
  P zF522;
  P xF521;
  P xF520;
  P xF519;
  P iF518;
  P xF517;
  P yF516;
  P xF515;
  P tF514;
  P xF513;
  P xF512;
  P lF511;
  P xF510;
  P xF509;
  P argsF508;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  NARGS(args_, 0);
  argsF508 = args_;
  xF509 = argsF508;
  xF510 = xF509;
  T23 = (P)YPprop_elt(xF510,(P)1);
  lF511 = T23;
  xF512 = lF511;
  xF513 = xF512;
  T22 = (P)YPiGG(xF513,(P)2);
  T21 = (P)YPtup(T22,VARREF(Ynul));
  tF514 = T21;
  xF515 = lF511;
  yF516 = YPint((P)2);
  T1 = (P)YPiE(xF515,yF516);
  T0 = (P)YPbb(T1);
  if (T1) {
    xF517 = argsF508;
    iF518 = YPint((P)0);
    xF519 = xF517;
    T5 = (P)YPprop_elt(xF519,(P)0);
    xF520 = iF518;
    xF521 = xF520;
    T7 = (P)YPiGG(xF521,(P)2);
    T6 = (P)YPi_((P)0,T7);
    T4 = (P)YPloc_off(T5,T6);
    zF522 = T4;
    xF523 = tF514;
    iF524 = YPint((P)0);
    xF525 = iF524;
    xF526 = xF525;
    T3 = (P)YPiGG(xF526,(P)2);
    T2 = (P)YPtelt_setter(zF522,xF523,T3);
    xF527 = argsF508;
    iF528 = YPint((P)1);
    xF529 = xF527;
    T11 = (P)YPprop_elt(xF529,(P)0);
    xF530 = iF528;
    xF531 = xF530;
    T13 = (P)YPiGG(xF531,(P)2);
    T12 = (P)YPi_((P)0,T13);
    T10 = (P)YPloc_off(T11,T12);
    zF532 = T10;
    xF533 = tF514;
    iF534 = YPint((P)1);
    xF535 = iF534;
    xF536 = xF535;
    T9 = (P)YPiGG(xF536,(P)2);
    T8 = (P)YPtelt_setter(zF532,xF533,T9);
  } else {
    T20 = FUNSHELL(1,fun_into_352,3);
    intoF537 = T20;
    FUNINIT(intoF537, 3,argsF508,tF514,intoF537);
    xF538 = lF511;
    yF539 = YPint((P)-1);
    xF540 = xF538;
    xF541 = xF540;
    T18 = (P)YPiGG(xF541,(P)2);
    xF542 = yF539;
    xF543 = xF542;
    T19 = (P)YPiGG(xF543,(P)2);
    T17 = (P)YPiA(T18,T19);
    xF544 = T17;
    xF545 = xF544;
    tF546 = (P)1;
    T16 = (P)YPiLL(xF545,(P)2);
    T15 = (P)YPiv(T16,tF546);
    T14 = CALL1(1,intoF537,T15);
  }
UNLINK_STACK();
  QRET(tF514);
}

LOCCODEDEF(fun_into_354) {
  P k_;
  P tF568;
  P xF567;
  P xF566;
  P xF565;
  P xF564;
  P xF563;
  P xF562;
  P yF561;
  P xF560;
  P xF559;
  P xF558;
  P iF557;
  P xF556;
  P zF555;
  P xF554;
  P xF553;
  P xF552;
  P iF551;
  P xF550;
  P xF549;
  P yF548;
  P xF547;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(k_, 0);
  xF547 = k_;
  yF548 = YPint((P)-1);
  T4 = (P)YPiE(xF547,yF548);
  T3 = (P)YPbb(T4);
  xF549 = T3;
  T2 = (P)YPeqQ(xF549,YPfalse);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF550 = FREEREF(0);
    iF551 = k_;
    xF552 = xF550;
    T8 = (P)YPprop_elt(xF552,(P)0);
    xF553 = iF551;
    xF554 = xF553;
    T10 = (P)YPiGG(xF554,(P)2);
    T9 = (P)YPi_((P)0,T10);
    T7 = (P)YPloc_off(T8,T9);
    zF555 = T7;
    xF556 = FREEREF(1);
    iF557 = k_;
    xF558 = iF557;
    xF559 = xF558;
    T6 = (P)YPiGG(xF559,(P)2);
    T5 = (P)YPtelt_setter(zF555,xF556,T6);
    xF560 = k_;
    yF561 = YPint((P)-1);
    xF562 = xF560;
    xF563 = xF562;
    T15 = (P)YPiGG(xF563,(P)2);
    xF564 = yF561;
    xF565 = xF564;
    T16 = (P)YPiGG(xF565,(P)2);
    T14 = (P)YPiA(T15,T16);
    xF566 = T14;
    xF567 = xF566;
    tF568 = (P)1;
    T13 = (P)YPiLL(xF567,(P)2);
    T12 = (P)YPiv(T13,tF568);
    T11 = CALL1(0,FREEREF(2),T12);
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YtT) {
  P args_;
  P tF607;
  P xF606;
  P xF605;
  P xF604;
  P xF603;
  P xF602;
  P xF601;
  P yF600;
  P xF599;
  P intoF598;
  P xF597;
  P xF596;
  P iF595;
  P xF594;
  P zF593;
  P xF592;
  P xF591;
  P xF590;
  P iF589;
  P xF588;
  P xF587;
  P xF586;
  P iF585;
  P xF584;
  P zF583;
  P xF582;
  P xF581;
  P xF580;
  P iF579;
  P xF578;
  P yF577;
  P xF576;
  P tF575;
  P xF574;
  P xF573;
  P lF572;
  P xF571;
  P xF570;
  P argsF569;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  NARGS(args_, 0);
  argsF569 = args_;
  xF570 = argsF569;
  xF571 = xF570;
  T24 = (P)YPprop_elt(xF571,(P)1);
  lF572 = T24;
  xF573 = lF572;
  xF574 = xF573;
  T23 = (P)YPiGG(xF574,(P)2);
  T22 = (P)YPtup(T23,VARREF(Ynul));
  tF575 = T22;
  xF576 = lF572;
  yF577 = YPint((P)2);
  T2 = (P)YPiE(xF576,yF577);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF578 = argsF569;
    iF579 = YPint((P)0);
    xF580 = xF578;
    T6 = (P)YPprop_elt(xF580,(P)0);
    xF581 = iF579;
    xF582 = xF581;
    T8 = (P)YPiGG(xF582,(P)2);
    T7 = (P)YPi_((P)0,T8);
    T5 = (P)YPloc_off(T6,T7);
    zF583 = T5;
    xF584 = tF575;
    iF585 = YPint((P)0);
    xF586 = iF585;
    xF587 = xF586;
    T4 = (P)YPiGG(xF587,(P)2);
    T3 = (P)YPtelt_setter(zF583,xF584,T4);
    xF588 = argsF569;
    iF589 = YPint((P)1);
    xF590 = xF588;
    T12 = (P)YPprop_elt(xF590,(P)0);
    xF591 = iF589;
    xF592 = xF591;
    T14 = (P)YPiGG(xF592,(P)2);
    T13 = (P)YPi_((P)0,T14);
    T11 = (P)YPloc_off(T12,T13);
    zF593 = T11;
    xF594 = tF575;
    iF595 = YPint((P)1);
    xF596 = iF595;
    xF597 = xF596;
    T10 = (P)YPiGG(xF597,(P)2);
    T9 = (P)YPtelt_setter(zF593,xF594,T10);
  } else {
    T21 = FUNSHELL(1,fun_into_354,3);
    intoF598 = T21;
    FUNINIT(intoF598, 3,argsF569,tF575,intoF598);
    xF599 = lF572;
    yF600 = YPint((P)-1);
    xF601 = xF599;
    xF602 = xF601;
    T19 = (P)YPiGG(xF602,(P)2);
    xF603 = yF600;
    xF604 = xF603;
    T20 = (P)YPiGG(xF604,(P)2);
    T18 = (P)YPiA(T19,T20);
    xF605 = T18;
    xF606 = xF605;
    tF607 = (P)1;
    T17 = (P)YPiLL(xF606,(P)2);
    T16 = (P)YPiv(T17,tF607);
    T15 = CALL1(1,intoF598,T16);
  }
  T0 = (P)YPproduct(tF575);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOtype_equalQ) {
  P t1_,t2_;
  P yF620;
  P xF619;
  P tagF618;
  P xF617;
  P xF616;
  P yF615;
  P xF614;
  P tagF613;
  P xF612;
  P xF611;
  P tmpF610;
  P yF609;
  P xF608;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF608 = t1_;
  yF609 = t2_;
  T25 = (P)YPeqQ(xF608,yF609);
  T24 = (P)YPbb(T25);
  tmpF610 = T24;
  if (tmpF610 != YPfalse) {
    T0 = tmpF610;
  } else {
    xF611 = t1_;
    xF612 = xF611;
    T10 = (P)YPiB(xF612,(P)3);
    tagF613 = T10;
    T7 = (P)YPiE(tagF613,(P)0);
    T6 = (P)YPbb(T7);
    if (T7) {
      T8 = (P)YPobject_class(xF611);
      T5 = T8;
    } else {
      T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF613);
      T5 = T9;
    }
    xF614 = T5;
    yF615 = VARREF(YLclassG);
    T4 = (P)YPeqQ(xF614,yF615);
    T3 = (P)YPbb(T4);
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      xF616 = t2_;
      xF617 = xF616;
      T20 = (P)YPiB(xF617,(P)3);
      tagF618 = T20;
      T17 = (P)YPiE(tagF618,(P)0);
      T16 = (P)YPbb(T17);
      if (T17) {
        T18 = (P)YPobject_class(xF616);
        T15 = T18;
      } else {
        T19 = (P)YPelt(VARREF(YDdirect_object_class),tagF618);
        T15 = T19;
      }
      xF619 = T15;
      yF620 = VARREF(YLclassG);
      T14 = (P)YPeqQ(xF619,yF620);
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

INLINE P YOsubclassQ(P c1_,P c2_) {
  P xF626;
  P xF625;
  P xF624;
  P xF623;
  P xF622;
  P xF621;
  P T0,T1,T2,T3,T4,T5,T6;
DEFCREGS();
  xF621 = c1_;
  T3 = (P)YPprop_elt(xF621,(P)11);
  xF622 = c2_;
  T5 = (P)YPprop_elt(xF622,(P)10);
  xF623 = T5;
  xF624 = xF623;
  T4 = (P)YPiGG(xF624,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF625 = YPint((P)1);
  xF626 = xF625;
  T6 = (P)YPiGG(xF626,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOclass_isaQ(P o_,P c_) {
  P xF637;
  P xF636;
  P xF635;
  P xF634;
  P xF633;
  P xF632;
  P c2F631;
  P c1F630;
  P tagF629;
  P xF628;
  P xF627;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
DEFCREGS();
  xF627 = o_;
  xF628 = xF627;
  T12 = (P)YPiB(xF628,(P)3);
  tagF629 = T12;
  T9 = (P)YPiE(tagF629,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF627);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF629);
    T7 = T11;
  }
  c1F630 = T7;
  c2F631 = c_;
  xF632 = c1F630;
  T3 = (P)YPprop_elt(xF632,(P)11);
  xF633 = c2F631;
  T5 = (P)YPprop_elt(xF633,(P)10);
  xF634 = T5;
  xF635 = xF634;
  T4 = (P)YPiGG(xF635,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF636 = YPint((P)1);
  xF637 = xF636;
  T6 = (P)YPiGG(xF637,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
  return T0;
}

FUNCODEDEF(YOsubtypeQ) {
  P t1_,t2_;
  P xF655;
  P xF654;
  P xF653;
  P xF652;
  P xF651;
  P xF650;
  P c2F649;
  P c1F648;
  P yF647;
  P xF646;
  P tagF645;
  P xF644;
  P xF643;
  P yF642;
  P xF641;
  P tagF640;
  P xF639;
  P xF638;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF638 = t2_;
  xF639 = xF638;
  T9 = (P)YPiB(xF639,(P)3);
  tagF640 = T9;
  T6 = (P)YPiE(tagF640,(P)0);
  T5 = (P)YPbb(T6);
  if (T6) {
    T7 = (P)YPobject_class(xF638);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF640);
    T4 = T8;
  }
  xF641 = T4;
  yF642 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF641,yF642);
  T2 = (P)YPbb(T3);
  if (T3) {
    xF643 = t1_;
    xF644 = xF643;
    T17 = (P)YPiB(xF644,(P)3);
    tagF645 = T17;
    T14 = (P)YPiE(tagF645,(P)0);
    T13 = (P)YPbb(T14);
    if (T14) {
      T15 = (P)YPobject_class(xF643);
      T12 = T15;
    } else {
      T16 = (P)YPelt(VARREF(YDdirect_object_class),tagF645);
      T12 = T16;
    }
    xF646 = T12;
    yF647 = VARREF(YLclassG);
    T11 = (P)YPeqQ(xF646,yF647);
    T10 = (P)YPbb(T11);
    T1 = T10;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    c1F648 = t1_;
    c2F649 = t2_;
    xF650 = c1F648;
    T21 = (P)YPprop_elt(xF650,(P)11);
    xF651 = c2F649;
    T23 = (P)YPprop_elt(xF651,(P)10);
    xF652 = T23;
    xF653 = xF652;
    T22 = (P)YPiGG(xF653,(P)2);
    T20 = (P)YPselt(T21,T22);
    xF654 = YPint((P)1);
    xF655 = xF654;
    T24 = (P)YPiGG(xF655,(P)2);
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
  P xF668;
  P xF667;
  P xF666;
  P xF665;
  P xF664;
  P xF663;
  P c2F662;
  P c1F661;
  P yF660;
  P xF659;
  P tagF658;
  P xF657;
  P xF656;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  xF656 = t_;
  xF657 = xF656;
  T8 = (P)YPiB(xF657,(P)3);
  tagF658 = T8;
  T5 = (P)YPiE(tagF658,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF656);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF658);
    T3 = T7;
  }
  xF659 = T3;
  yF660 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF659,yF660);
  T1 = (P)YPbb(T2);
  if (T2) {
    c1F661 = c_;
    c2F662 = t_;
    xF663 = c1F661;
    T13 = (P)YPprop_elt(xF663,(P)11);
    xF664 = c2F662;
    T15 = (P)YPprop_elt(xF664,(P)10);
    xF665 = T15;
    xF666 = xF665;
    T14 = (P)YPiGG(xF666,(P)2);
    T12 = (P)YPselt(T13,T14);
    xF667 = YPint((P)1);
    xF668 = xF667;
    T16 = (P)YPiGG(xF668,(P)2);
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

P YOsingleton_isaQ(P o_,P t_) {
  P yF671;
  P xF670;
  P xF669;
  P T0,T1,T2;
DEFCREGS();
  xF669 = t_;
  T2 = (P)YPprop_elt(xF669,(P)0);
  xF670 = T2;
  yF671 = o_;
  T1 = (P)YPeqQ(xF670,yF671);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOisaQ(P o_,P t_) {
  P xF689;
  P xF688;
  P xF687;
  P xF686;
  P xF685;
  P xF684;
  P c2F683;
  P c1F682;
  P tagF681;
  P xF680;
  P xF679;
  P cF678;
  P oF677;
  P yF676;
  P xF675;
  P tagF674;
  P xF673;
  P xF672;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
DEFCREGS();
  xF672 = t_;
  xF673 = xF672;
  T8 = (P)YPiB(xF673,(P)3);
  tagF674 = T8;
  T5 = (P)YPiE(tagF674,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF672);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF674);
    T3 = T7;
  }
  xF675 = T3;
  yF676 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF675,yF676);
  T1 = (P)YPbb(T2);
  if (T2) {
    oF677 = o_;
    cF678 = t_;
    xF679 = oF677;
    xF680 = xF679;
    T21 = (P)YPiB(xF680,(P)3);
    tagF681 = T21;
    T18 = (P)YPiE(tagF681,(P)0);
    T17 = (P)YPbb(T18);
    if (T18) {
      T19 = (P)YPobject_class(xF679);
      T16 = T19;
    } else {
      T20 = (P)YPelt(VARREF(YDdirect_object_class),tagF681);
      T16 = T20;
    }
    c1F682 = T16;
    c2F683 = cF678;
    xF684 = c1F682;
    T12 = (P)YPprop_elt(xF684,(P)11);
    xF685 = c2F683;
    T14 = (P)YPprop_elt(xF685,(P)10);
    xF686 = T14;
    xF687 = xF686;
    T13 = (P)YPiGG(xF687,(P)2);
    T11 = (P)YPselt(T12,T13);
    xF688 = YPint((P)1);
    xF689 = xF688;
    T15 = (P)YPiGG(xF689,(P)2);
    T10 = (P)YPiE(T11,T15);
    T9 = (P)YPbb(T10);
    T0 = T9;
  } else {
    T22 = XCALL2(1,VARREF(YisaQ),o_,t_);
    T0 = T22;
  }
  return T0;
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

FUNCODEDEF(YPpatch_early_generic) {
  P generic_;
  P xF690;
  P T0,T1;
LINK_STACK();
  ARG(generic_, 0);
  xF690 = VARREF(YPdispatch);
  T1 = (P)YPprop_elt(xF690,(P)0);
  T0 = (P)YPgen_code_setter(T1,generic_);
UNLINK_STACK();
  QRET(T0);
}

P YPpatch_early_generics() {
DEFCREGS();
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ybox_value));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ybox_value_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysrc_loc_line));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysrc_loc_file));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yhead));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yhead_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytail));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytail_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ysym_name));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_prop_len));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_prop_len_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_name));
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
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_id));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_row));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytype_object));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ytype_class));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yunion_elts));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yproduct_elts));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_owner));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_getter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_type));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yprop_init));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_missableQ));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_arg_pos));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_singletons));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_cache_classes));
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
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_info_name));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_info_name_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_info_names));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_info_names_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_info_src_loc));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_info_src_loc_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_info_src));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_info_src_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_info_count));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_info_count_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_code));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_sig));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_sig_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_info));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_info_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_env));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_mets));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_mets_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_cache));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_location));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_count));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_tup_storage));
  return YPfalse;
}

INLINE P YOraw_nulQ(P x_) {
  P yF692;
  P xF691;
  P T0,T1;
DEFCREGS();
  xF691 = x_;
  yF692 = (P)0;
  T1 = (P)YPeqQ(xF691,yF692);
  T0 = (P)YPbb(T1);
  return T0;
}

P YPcons_args() {
  P iF696;
  P rF695;
  P bF694;
  P nF693;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
  (P)YPdef_regs();
  T9 = (P)YPsp_elt((P)-2);
  nF693 = T9;
  T8 = (P)YPi_((P)-2,nF693);
  bF694 = T8;
  rF695 = Ynil;
  iF696 = (P)0;
  LOOP_26: {
    P a26_0,a26_1;
    T2 = (P)YPiL(iF696,nF693);
    T1 = (P)YPbb(T2);
    if (T2) {
      T6 = (P)YPiA(bF694,iF696);
      T5 = (P)YPsp_elt(T6);
      T4 = (P)YPpair(T5,rF695);
      T7 = (P)YPiA(iF696,(P)1);
      a26_0 = T4;
      a26_1 = T7;
      rF695 = a26_0;
      iF696 = a26_1;
      goto LOOP_26;
      T0 = T3;
    } else {
      T0 = rF695;
    }
  }
  return T0;
}

INLINE P YPcheck_arity(P fn_,P sig_,P n_) {
  P naryQF702;
  P xF701;
  P arityF700;
  P xF699;
  P xF698;
  P xF697;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
DEFCREGS();
  xF697 = sig_;
  T13 = (P)YPprop_elt(xF697,(P)2);
  xF698 = T13;
  xF699 = xF698;
  T12 = (P)YPiGG(xF699,(P)2);
  arityF700 = T12;
  xF701 = sig_;
  T11 = (P)YPprop_elt(xF701,(P)1);
  naryQF702 = T11;
  if (naryQF702 != YPfalse) {
    T3 = (P)YPiL(n_,arityF700);
    T2 = (P)YPbb(T3);
    if (T3) {
      T5 = (P)YPcons_args();
      T4 = XCALL2(1,VARREF(Ynarity_error),fn_,T5);
      T1 = T4;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  } else {
    T8 = (P)YPiE(n_,arityF700);
    T7 = (P)YPbb(T8);
    if (T8) {
      T6 = YPtrue;
    } else {
      T10 = (P)YPcons_args();
      T9 = XCALL2(1,VARREF(Yarity_error),fn_,T10);
      T6 = T9;
    }
    T0 = T6;
  }
  return T0;
}

INLINE P YParg_check_type(P res_,P type_,P fn_) {
  P xF724;
  P xF723;
  P xF722;
  P xF721;
  P xF720;
  P xF719;
  P c2F718;
  P c1F717;
  P tagF716;
  P xF715;
  P xF714;
  P cF713;
  P oF712;
  P yF711;
  P xF710;
  P tagF709;
  P xF708;
  P xF707;
  P tF706;
  P oF705;
  P yF704;
  P xF703;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
DEFCREGS();
  xF703 = type_;
  yF704 = VARREF(YLanyG);
  T2 = (P)YPeqQ(xF703,yF704);
  T1 = (P)YPbb(T2);
  if (T2) {
    T0 = YPtrue;
  } else {
    oF705 = res_;
    tF706 = type_;
    xF707 = tF706;
    xF708 = xF707;
    T12 = (P)YPiB(xF708,(P)3);
    tagF709 = T12;
    T9 = (P)YPiE(tagF709,(P)0);
    T8 = (P)YPbb(T9);
    if (T9) {
      T10 = (P)YPobject_class(xF707);
      T7 = T10;
    } else {
      T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF709);
      T7 = T11;
    }
    xF710 = T7;
    yF711 = VARREF(YLclassG);
    T6 = (P)YPeqQ(xF710,yF711);
    T5 = (P)YPbb(T6);
    if (T6) {
      oF712 = oF705;
      cF713 = tF706;
      xF714 = oF712;
      xF715 = xF714;
      T25 = (P)YPiB(xF715,(P)3);
      tagF716 = T25;
      T22 = (P)YPiE(tagF716,(P)0);
      T21 = (P)YPbb(T22);
      if (T22) {
        T23 = (P)YPobject_class(xF714);
        T20 = T23;
      } else {
        T24 = (P)YPelt(VARREF(YDdirect_object_class),tagF716);
        T20 = T24;
      }
      c1F717 = T20;
      c2F718 = cF713;
      xF719 = c1F717;
      T16 = (P)YPprop_elt(xF719,(P)11);
      xF720 = c2F718;
      T18 = (P)YPprop_elt(xF720,(P)10);
      xF721 = T18;
      xF722 = xF721;
      T17 = (P)YPiGG(xF722,(P)2);
      T15 = (P)YPselt(T16,T17);
      xF723 = YPint((P)1);
      xF724 = xF723;
      T19 = (P)YPiGG(xF724,(P)2);
      T14 = (P)YPiE(T15,T19);
      T13 = (P)YPbb(T14);
      T4 = T13;
    } else {
      T26 = XCALL2(1,VARREF(YisaQ),oF705,tF706);
      T4 = T26;
    }
    if (T4 != YPfalse) {
      T3 = res_;
    } else {
      T28 = (P)YPcons_args();
      T27 = XCALL4(1,VARREF(Yargument_type_error),fn_,res_,type_,T28);
      T3 = T27;
    }
    T0 = T3;
  }
  return T0;
}

P YPfun_val_check_type(P regs_,P res_,P fn_) {
  P xF747;
  P xF746;
  P xF745;
  P xF744;
  P xF743;
  P xF742;
  P c2F741;
  P c1F740;
  P tagF739;
  P xF738;
  P xF737;
  P cF736;
  P oF735;
  P yF734;
  P xF733;
  P tagF732;
  P xF731;
  P xF730;
  P tF729;
  P oF728;
  P typeF727;
  P xF726;
  P xF725;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
DEFCREGS();
  (P)YPset_regs(regs_);
  xF725 = fn_;
  T28 = (P)YPprop_elt(xF725,(P)1);
  xF726 = T28;
  T27 = (P)YPprop_elt(xF726,(P)3);
  typeF727 = T27;
  if (VARREF(YPclasses_readyQ) != YPfalse) {
    oF728 = res_;
    tF729 = typeF727;
    xF730 = tF729;
    xF731 = xF730;
    T10 = (P)YPiB(xF731,(P)3);
    tagF732 = T10;
    T7 = (P)YPiE(tagF732,(P)0);
    T6 = (P)YPbb(T7);
    if (T7) {
      T8 = (P)YPobject_class(xF730);
      T5 = T8;
    } else {
      T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF732);
      T5 = T9;
    }
    xF733 = T5;
    yF734 = VARREF(YLclassG);
    T4 = (P)YPeqQ(xF733,yF734);
    T3 = (P)YPbb(T4);
    if (T4) {
      oF735 = oF728;
      cF736 = tF729;
      xF737 = oF735;
      xF738 = xF737;
      T23 = (P)YPiB(xF738,(P)3);
      tagF739 = T23;
      T20 = (P)YPiE(tagF739,(P)0);
      T19 = (P)YPbb(T20);
      if (T20) {
        T21 = (P)YPobject_class(xF737);
        T18 = T21;
      } else {
        T22 = (P)YPelt(VARREF(YDdirect_object_class),tagF739);
        T18 = T22;
      }
      c1F740 = T18;
      c2F741 = cF736;
      xF742 = c1F740;
      T14 = (P)YPprop_elt(xF742,(P)11);
      xF743 = c2F741;
      T16 = (P)YPprop_elt(xF743,(P)10);
      xF744 = T16;
      xF745 = xF744;
      T15 = (P)YPiGG(xF745,(P)2);
      T13 = (P)YPselt(T14,T15);
      xF746 = YPint((P)1);
      xF747 = xF746;
      T17 = (P)YPiGG(xF747,(P)2);
      T12 = (P)YPiE(T13,T17);
      T11 = (P)YPbb(T12);
      T2 = T11;
    } else {
      T24 = XCALL2(1,VARREF(YisaQ),oF728,tF729);
      T2 = T24;
    }
    if (T2 != YPfalse) {
      T1 = res_;
    } else {
      T26 = (P)YPcons_args();
      T25 = XCALL4(1,VARREF(Yreturn_type_error),fn_,res_,typeF727,T26);
      T1 = T25;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  return T0;
}

P YPcheck_type(P regs_,P res_,P type_) {
  P xF767;
  P xF766;
  P xF765;
  P xF764;
  P xF763;
  P xF762;
  P c2F761;
  P c1F760;
  P tagF759;
  P xF758;
  P xF757;
  P cF756;
  P oF755;
  P yF754;
  P xF753;
  P tagF752;
  P xF751;
  P xF750;
  P tF749;
  P oF748;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
DEFCREGS();
  (P)YPset_regs(regs_);
  if (VARREF(YPclasses_readyQ) != YPfalse) {
    oF748 = res_;
    tF749 = type_;
    xF750 = tF749;
    xF751 = xF750;
    T10 = (P)YPiB(xF751,(P)3);
    tagF752 = T10;
    T7 = (P)YPiE(tagF752,(P)0);
    T6 = (P)YPbb(T7);
    if (T7) {
      T8 = (P)YPobject_class(xF750);
      T5 = T8;
    } else {
      T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF752);
      T5 = T9;
    }
    xF753 = T5;
    yF754 = VARREF(YLclassG);
    T4 = (P)YPeqQ(xF753,yF754);
    T3 = (P)YPbb(T4);
    if (T4) {
      oF755 = oF748;
      cF756 = tF749;
      xF757 = oF755;
      xF758 = xF757;
      T23 = (P)YPiB(xF758,(P)3);
      tagF759 = T23;
      T20 = (P)YPiE(tagF759,(P)0);
      T19 = (P)YPbb(T20);
      if (T20) {
        T21 = (P)YPobject_class(xF757);
        T18 = T21;
      } else {
        T22 = (P)YPelt(VARREF(YDdirect_object_class),tagF759);
        T18 = T22;
      }
      c1F760 = T18;
      c2F761 = cF756;
      xF762 = c1F760;
      T14 = (P)YPprop_elt(xF762,(P)11);
      xF763 = c2F761;
      T16 = (P)YPprop_elt(xF763,(P)10);
      xF764 = T16;
      xF765 = xF764;
      T15 = (P)YPiGG(xF765,(P)2);
      T13 = (P)YPselt(T14,T15);
      xF766 = YPint((P)1);
      xF767 = xF766;
      T17 = (P)YPiGG(xF767,(P)2);
      T12 = (P)YPiE(T13,T17);
      T11 = (P)YPbb(T12);
      T2 = T11;
    } else {
      T24 = XCALL2(1,VARREF(YisaQ),oF748,tF749);
      T2 = T24;
    }
    if (T2 != YPfalse) {
      T1 = res_;
    } else {
      T25 = XCALL2(1,VARREF(Ytype_error),res_,type_);
      T1 = T25;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  return T0;
}

INLINE P YPstack_check(P regs_) {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
DEFCREGS();
  (P)YPset_regs(regs_);
  T4 = (P)YPmax_stack_len();
  T3 = (P)YPi_(T4,(P)1000);
  T6 = (P)YPsp_reg();
  T7 = (P)YPstack_reg();
  T5 = (P)YPi_(T6,T7);
  T2 = (P)YPiL(T3,T5);
  T1 = (P)YPbb(T2);
  if (T2) {
    T10 = (P)YPstack_check_regQ();
    T9 = (P)YPbb(T10);
    if (T10) {
      (P)YPstack_check_regQ_setter((P)0);
      T11 = XCALL0(1,VARREF(Ystack_overflow_error));
      T8 = T11;
    } else {
      T8 = YPfalse;
    }
    T0 = T8;
  } else {
    T14 = (P)YPstack_check_regQ();
    T13 = (P)YPbb(T14);
    if (T14) {
      T12 = YPfalse;
    } else {
      T15 = (P)YPstack_check_regQ_setter((P)1);
      T12 = T15;
    }
    T0 = T12;
  }
  return T0;
}

P YPPcheck_call_types(P regs_) {
  P yF797;
  P xF796;
  P xF795;
  P yF794;
  P xF793;
  P xF792;
  P yF791;
  P xF790;
  P xF789;
  P xF788;
  P yF787;
  P xF786;
  P specsF785;
  P iF784;
  P xF783;
  P sigF782;
  P xF781;
  P yF780;
  P xF779;
  P nF778;
  P classF777;
  P tagF776;
  P xF775;
  P xF774;
  P xF773;
  P xF772;
  P yF771;
  P xF770;
  P xF769;
  P fnF768;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
DEFCREGS();
  (P)YPset_regs(regs_);
  T43 = (P)YPsp_elt((P)-1);
  fnF768 = T43;
  xF769 = fnF768;
  xF770 = xF769;
  yF771 = (P)0;
  T32 = (P)YPeqQ(xF770,yF771);
  T31 = (P)YPbb(T32);
  if (T32) {
    T30 = (P)0;
  } else {
    xF772 = fnF768;
    xF773 = xF772;
    T36 = (P)YPiB(xF773,(P)3);
    T35 = (P)YPiE(T36,(P)0);
    T34 = (P)YPbb(T35);
    if (T35) {
      xF774 = fnF768;
      xF775 = xF774;
      T42 = (P)YPiB(xF775,(P)3);
      tagF776 = T42;
      T39 = (P)YPiE(tagF776,(P)0);
      T38 = (P)YPbb(T39);
      if (T39) {
        T40 = (P)YPobject_class(xF774);
        T37 = T40;
      } else {
        T41 = (P)YPelt(VARREF(YDdirect_object_class),tagF776);
        T37 = T41;
      }
      T33 = T37;
    } else {
      T33 = (P)0;
    }
    T30 = T33;
  }
  classF777 = T30;
  T29 = (P)YPsp_elt((P)-2);
  nF778 = T29;
  (P)YPstack_check(regs_);
  xF779 = classF777;
  yF780 = VARREF(YLmetG);
  T1 = (P)YPeqQ(xF779,yF780);
  T0 = (P)YPbb(T1);
  if (T1) {
    xF781 = fnF768;
    T13 = (P)YPprop_elt(xF781,(P)1);
    sigF782 = T13;
    (P)YPcheck_arity(fnF768,sigF782,nF778);
    if (VARREF(YPclasses_readyQ) != YPfalse) {
      iF784 = (P)0;
      xF783 = sigF782;
      T12 = (P)YPprop_elt(xF783,(P)0);
      specsF785 = T12;
      LOOP_27: {
        P a27_0,a27_1;
        xF786 = specsF785;
        yF787 = Ynil;
        T5 = (P)YPeqQ(xF786,yF787);
        T4 = (P)YPbb(T5);
        if (T5) {
          T3 = YPfalse;
        } else {
          T7 = (P)YPi_((P)-3,iF784);
          T6 = (P)YPsp_elt(T7);
          xF788 = specsF785;
          T8 = (P)YPprop_elt(xF788,(P)0);
          (P)YParg_check_type(T6,T8,fnF768);
          T10 = (P)YPiA(iF784,(P)1);
          xF789 = specsF785;
          T11 = (P)YPprop_elt(xF789,(P)1);
          a27_0 = T10;
          a27_1 = T11;
          iF784 = a27_0;
          specsF785 = a27_1;
          goto LOOP_27;
          T3 = T9;
        }
      }
      T2 = T3;
    } else {
      T2 = YPfalse;
    }
  } else {
    xF790 = classF777;
    yF791 = VARREF(YLgenG);
    T16 = (P)YPeqQ(xF790,yF791);
    T15 = (P)YPbb(T16);
    if (T16) {
      xF792 = fnF768;
      T18 = (P)YPprop_elt(xF792,(P)1);
      T17 = (P)YPcheck_arity(fnF768,T18,nF778);
      T14 = T17;
    } else {
      xF793 = VARREF(Yunknown_function_error);
      yF794 = (P)0;
      T21 = (P)YPeqQ(xF793,yF794);
      T20 = (P)YPbb(T21);
      if (T21) {
        T23 = (P)YPsu(LITREF(lit_325));
        T22 = (P)YPbreak(T23);
        T19 = T22;
      } else {
        xF795 = fnF768;
        xF796 = xF795;
        yF797 = (P)0;
        T27 = (P)YPeqQ(xF796,yF797);
        T26 = (P)YPbb(T27);
        if (T27) {
          T25 = YPfalse;
        } else {
          T25 = fnF768;
        }
        T28 = (P)YPcons_args();
        T24 = XCALL2(1,VARREF(Yunknown_function_error),T25,T28);
        T19 = T24;
      }
      T14 = T19;
    }
  }
  return YPfalse;
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

FUNCODEDEF(Yapp_filename) {
  P T0;
LINK_STACK();
  T0 = (P)YPapp_filename();
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yapp_args) {
  P T0;
LINK_STACK();
  T0 = (P)YPapp_args();
UNLINK_STACK();
  QRET(T0);
}

P YPlit(P n_) {
  P tF800;
  P xF799;
  P xF798;
  P T0,T1,T2;
DEFCREGS();
  xF798 = n_;
  xF799 = xF798;
  tF800 = (P)1;
  T2 = (P)YPiLL(xF799,(P)2);
  T1 = (P)YPiv(T2,tF800);
  T0 = XCALL1(1,VARREF(YOlit),T1);
  return T0;
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
  P T16,T17,T18,T19,T20;
DEFCREGS();
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
  VARSET(YLboxG,T5);
  T6 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLmagG,T6);
  T7 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLchrG,T7);
  T8 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsrc_locG,T8);
  T9 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLnumG,T9);
  T10 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLintG,T10);
  T11 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfixnumG,T11);
  T12 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfloG,T12);
  T13 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlocG,T13);
  T14 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLrepG,T14);
  T15 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolG,T15);
  T16 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolIG,T16);
  T17 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolXG,T17);
  T20 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  T19 = VARSET(YLseqG,T20);
  T18 = T19;
  return T18;
}

P Y___main_4___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
DEFCREGS();
  T0 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqIG,T0);
  T1 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqXG,T1);
  T2 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlstG,T2);
  T3 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLflatG,T3);
  T4 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLtupG,T4);
  T5 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLstrG,T5);
  T6 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsymG,T6);
  T7 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLtypeG,T7);
  T8 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLclassG,T8);
  T9 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsingletonG,T9);
  T10 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsubclassG,T10);
  T11 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLunionG,T11);
  T12 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLproductG,T12);
  T13 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLpropG,T13);
  T14 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLgen_cacheG,T14);
  T15 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsigG,T15);
  T16 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfun_infoG,T16);
  T17 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfunG,T17);
  T18 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLmetG,T18);
  T19 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLgenG,T19);
  T20 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLoptsG,T20);
  T21 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLopts_tupG,T21);
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLanyG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLlogG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLboxG));
  T23 = (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLmagG));
  T22 = T23;
  return T22;
}

P Y___main_5___() {
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
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
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLfun_infoG));
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
  T5 = YPfalse;
  return T5;
}

P Y___main_6___() {
  P T0,T1,T2;
DEFCREGS();
  VARSET(Ynil,VARREF(Yone_nil));
  (P)YPhead_setter(VARREF(Ynil),VARREF(Ynil));
  (P)YPtail_setter(VARREF(Ynil),VARREF(Ynil));
  VARSET(YPmet_prop_len,(P)4);
  VARSET(YPsymbols_readyQ,YPfalse);
  VARSET(YPTstart_running_atT,VARREF(Ynil));
  T2 = (P)YPraw_alloc((P)4);
  T1 = VARSET(YDdirect_object_class,T2);
  T0 = T1;
  return T0;
}

P Y___main_7___() {
  P xF827;
  P xF826;
  P tF825;
  P xF824;
  P xF823;
  P xF822;
  P xF821;
  P xF820;
  P xF819;
  P xF818;
  P xF817;
  P tF816;
  P xF815;
  P xF814;
  P xF813;
  P xF812;
  P xF811;
  P xF810;
  P xF809;
  P xF808;
  P xF807;
  P xF806;
  P tF805;
  P xF804;
  P xF803;
  P xF802;
  P xF801;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
DEFCREGS();
  (P)YPelt_setter(VARREF(YLfixnumG),VARREF(YDdirect_object_class),(P)1);
  (P)YPelt_setter(VARREF(YLchrG),VARREF(YDdirect_object_class),(P)2);
  (P)YPelt_setter(VARREF(YLlocG),VARREF(YDdirect_object_class),(P)3);
  xF801 = YPint((P)32);
  xF802 = xF801;
  T3 = (P)YPiGG(xF802,(P)2);
  T2 = (P)YPi_(T3,(P)2);
  xF803 = T2;
  xF804 = xF803;
  tF805 = (P)1;
  T1 = (P)YPiLL(xF804,(P)2);
  T0 = (P)YPiv(T1,tF805);
  VARSET(YDnum_int_bits,T0);
  xF806 = YPint((P)1);
  xF807 = xF806;
  T8 = (P)YPiGG(xF807,(P)2);
  xF808 = VARREF(YDnum_int_bits);
  xF809 = xF808;
  T10 = (P)YPiGG(xF809,(P)2);
  xF810 = YPint((P)1);
  xF811 = xF810;
  T11 = (P)YPiGG(xF811,(P)2);
  T9 = (P)YPi_(T10,T11);
  T7 = (P)YPiLL(T8,T9);
  xF812 = YPint((P)1);
  xF813 = xF812;
  T12 = (P)YPiGG(xF813,(P)2);
  T6 = (P)YPi_(T7,T12);
  xF814 = T6;
  xF815 = xF814;
  tF816 = (P)1;
  T5 = (P)YPiLL(xF815,(P)2);
  T4 = (P)YPiv(T5,tF816);
  VARSET(YDmax_int,T4);
  xF817 = YPint((P)1);
  xF818 = xF817;
  T16 = (P)YPiGG(xF818,(P)2);
  xF819 = VARREF(YDnum_int_bits);
  xF820 = xF819;
  T18 = (P)YPiGG(xF820,(P)2);
  xF821 = YPint((P)1);
  xF822 = xF821;
  T19 = (P)YPiGG(xF822,(P)2);
  T17 = (P)YPi_(T18,T19);
  T15 = (P)YPiLL(T16,T17);
  xF823 = T15;
  xF824 = xF823;
  tF825 = (P)1;
  T14 = (P)YPiLL(xF824,(P)2);
  T13 = (P)YPiv(T14,tF825);
  VARSET(YDmin_int,T13);
  xF826 = YPchr((P)32);
  xF827 = xF826;
  T21 = (P)YPiGG(xF827,(P)2);
  T20 = (P)YPstrX((P)0,T21);
  VARSET(YPsnul,T20);
  T22 = (P)YPtupX((P)0,VARREF(Ynul));
  VARSET(YPtnul,T22);
  T23 = (P)YPrepX((P)0,VARREF(Ynul));
  VARSET(YPrnul,T23);
  VARSET(YTearly_classesT,VARREF(Ynil));
  T24 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLanyG),T24);
  T25 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLlogG),T25);
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLboxG),T26);
  T27 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLmagG),T27);
  T28 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLchrG),T28);
  T31 = (P)YPpair(VARREF(YLmagG),Ynil);
  T30 = (P)YPdefine_parents(VARREF(YLsrc_locG),T31);
  T29 = T30;
  return T29;
}

P Y___main_8___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
DEFCREGS();
  T0 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLnumG),T0);
  T1 = (P)YPpair(VARREF(YLnumG),Ynil);
  (P)YPdefine_parents(VARREF(YLintG),T1);
  T2 = (P)YPpair(VARREF(YLintG),Ynil);
  (P)YPdefine_parents(VARREF(YLfixnumG),T2);
  T3 = (P)YPpair(VARREF(YLnumG),Ynil);
  (P)YPdefine_parents(VARREF(YLfloG),T3);
  T4 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLlocG),T4);
  T5 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLrepG),T5);
  T6 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolG),T6);
  T7 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolIG),T7);
  T8 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolXG),T8);
  T9 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLseqG),T9);
  T11 = (P)YPpair(VARREF(YLcolIG),Ynil);
  T10 = (P)YPpair(VARREF(YLseqG),T11);
  (P)YPdefine_parents(VARREF(YLseqIG),T10);
  T13 = (P)YPpair(VARREF(YLcolXG),Ynil);
  T12 = (P)YPpair(VARREF(YLseqG),T13);
  (P)YPdefine_parents(VARREF(YLseqXG),T12);
  T14 = (P)YPpair(VARREF(YLseqXG),Ynil);
  (P)YPdefine_parents(VARREF(YLlstG),T14);
  T15 = (P)YPpair(VARREF(YLseqG),Ynil);
  (P)YPdefine_parents(VARREF(YLflatG),T15);
  T17 = (P)YPpair(VARREF(YLseqIG),Ynil);
  T16 = (P)YPpair(VARREF(YLflatG),T17);
  (P)YPdefine_parents(VARREF(YLtupG),T16);
  T20 = (P)YPpair(VARREF(YLmagG),Ynil);
  T19 = (P)YPpair(VARREF(YLseqIG),T20);
  T18 = (P)YPpair(VARREF(YLflatG),T19);
  (P)YPdefine_parents(VARREF(YLstrG),T18);
  T21 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLsymG),T21);
  T22 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLtypeG),T22);
  T23 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLclassG),T23);
  T24 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsingletonG),T24);
  T25 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsubclassG),T25);
  T26 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLunionG),T26);
  T27 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLproductG),T27);
  T28 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLpropG),T28);
  T29 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLgen_cacheG),T29);
  T30 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLsigG),T30);
  T31 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLfun_infoG),T31);
  T32 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLfunG),T32);
  T33 = (P)YPpair(VARREF(YLfunG),Ynil);
  (P)YPdefine_parents(VARREF(YLmetG),T33);
  T34 = (P)YPpair(VARREF(YLfunG),Ynil);
  (P)YPdefine_parents(VARREF(YLgenG),T34);
  T36 = (P)YPpair(VARREF(YLseqIG),Ynil);
  T35 = (P)YPpair(VARREF(YLflatG),T36);
  (P)YPdefine_parents(VARREF(YLoptsG),T35);
  T37 = (P)YPpair(VARREF(YLoptsG),Ynil);
  (P)YPdefine_parents(VARREF(YLopts_tupG),T37);
  T38 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  (P)YPclass_ancestors_setter(T38,VARREF(YLanyG));
  VARSET(YPsymbols,VARREF(Ynil));
  lit_0 = YPsb((P)"Warning: symbols were created in the boot image before the symbol-creation was setup. (Probably from a df or rep)\n");
  T40 = (P)YPeqQ(VARREF(YPTused_symbols_too_earlyT),YPtrue);
  T39 = (P)YPbb(T40);
  if (T40) {
    T42 = (P)YPsu(LITREF(lit_0));
    T41 = (P)YPbreak(T42);
  } else {
  }
  lit_1 = YPPlist(1,YPPsym((P)"name"));
  T43 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPfab_met(FUNCODEREF(fun_116),T43,YPfalse,LITREF(lit_1),sloc(583),YPsb((P)"(fun (name) (%fab-sym name))"));
  T44 = fun_116;
  VARSET(Yfab_sym,T44);
  VARSET(YPsymbols_readyQ,YPtrue);
  lit_2 = YPPsym((P)"fab-sym");
  lit_3 = YPPlist(1,YPPsym((P)"name"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfab_sym = YPfab_met(FUNCODEREF(Yfab_sym),T45,LITREF(lit_2),LITREF(lit_3),sloc(588),YPsb((P)"(fun (name) (%fab-sym name))"));
  T46 = Yfab_sym;
  VARSET(Yfab_sym,T46);
  T47 = YPfalse;
  return T47;
}

P Y___main_9___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
DEFCREGS();
  VARSET(YDgen_cache_singletons_offset,YPint((P)2));
  VARSET(YDgen_cache_classes_offset,YPint((P)3));
  lit_4 = YPPsym((P)"%prop-offset");
  lit_5 = YPPlist(2,YPPsym((P)"owner"),YPPsym((P)"getter"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPprop_offset = YPfab_met(FUNCODEREF(YPprop_offset),T0,LITREF(lit_4),LITREF(lit_5),sloc(648),YPsb((P)"(fun (owner getter) (rep loop ((i (%raw 0)) (props (%class-props (%object-class owner)))) (if (%nul? props) (%iu -1) (let ((prop (%head props))) (if (%bb (%eq? (%prop-getter prop) getter)) i (loop (%i+ i (%raw 1)) (%tail props)))))))"));
  T1 = YPprop_offset;
  VARSET(YPprop_offset,T1);
  lit_6 = YPPsym((P)"%early-dispatch");
  lit_7 = YPPlist(1,YPPsym((P)"args"));
  lit_8 = YPsb((P)"ERROR: Generic function dispatch called before it existed.");
  T2 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YPearly_dispatch = YPfab_met(FUNCODEREF(YPearly_dispatch),T2,LITREF(lit_6),LITREF(lit_7),sloc(666),YPsb((P)"(fun ((args ...)) (def gen (%fun-reg)) (%break (%su ERROR: Generic function dispatch called before it existed.)))"));
  T3 = YPearly_dispatch;
  VARSET(YPearly_dispatch,T3);
  lit_9 = YPPsym((P)"%add-met");
  lit_10 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T6 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T5 = YPadd_met = YPfab_met(FUNCODEREF(YPadd_met),T6,LITREF(lit_9),LITREF(lit_10),sloc(670),YPsb((P)"(fun (gen met) (set (%gen-mets gen) (%pair met (%gen-mets gen))))"));
  T8 = YPadd_met;
  T7 = VARSET(YPadd_met,T8);
  T4 = T7;
  return T4;
}

P Y___main_10___() {
  P propF1069;
  P setterF1068;
  P xF1067;
  P accessorF1066;
  P getterF1065;
  P xF1064;
  P accessorF1063;
  P propF1062;
  P setterF1061;
  P xF1060;
  P accessorF1059;
  P getterF1058;
  P xF1057;
  P accessorF1056;
  P propF1055;
  P setterF1054;
  P xF1053;
  P accessorF1052;
  P getterF1051;
  P xF1050;
  P accessorF1049;
  P propF1048;
  P setterF1047;
  P xF1046;
  P accessorF1045;
  P getterF1044;
  P xF1043;
  P accessorF1042;
  P propF1041;
  P setterF1040;
  P xF1039;
  P accessorF1038;
  P getterF1037;
  P xF1036;
  P accessorF1035;
  P propF1034;
  P setterF1033;
  P xF1032;
  P accessorF1031;
  P getterF1030;
  P xF1029;
  P accessorF1028;
  P propF1027;
  P setterF1026;
  P xF1025;
  P accessorF1024;
  P getterF1023;
  P xF1022;
  P accessorF1021;
  P propF1020;
  P setterF1019;
  P xF1018;
  P accessorF1017;
  P getterF1016;
  P xF1015;
  P accessorF1014;
  P propF1013;
  P setterF1012;
  P xF1011;
  P accessorF1010;
  P getterF1009;
  P xF1008;
  P accessorF1007;
  P propF1006;
  P setterF1005;
  P getterF1004;
  P xF1003;
  P accessorF1002;
  P propF1001;
  P setterF1000;
  P getterF999;
  P xF998;
  P accessorF997;
  P propF996;
  P setterF995;
  P getterF994;
  P xF993;
  P accessorF992;
  P propF991;
  P setterF990;
  P getterF989;
  P xF988;
  P accessorF987;
  P propF986;
  P setterF985;
  P getterF984;
  P xF983;
  P accessorF982;
  P propF981;
  P setterF980;
  P getterF979;
  P xF978;
  P accessorF977;
  P propF976;
  P setterF975;
  P getterF974;
  P xF973;
  P accessorF972;
  P propF971;
  P setterF970;
  P getterF969;
  P xF968;
  P accessorF967;
  P propF966;
  P setterF965;
  P getterF964;
  P xF963;
  P accessorF962;
  P propF961;
  P setterF960;
  P getterF959;
  P xF958;
  P accessorF957;
  P propF956;
  P setterF955;
  P getterF954;
  P xF953;
  P accessorF952;
  P propF951;
  P setterF950;
  P getterF949;
  P xF948;
  P accessorF947;
  P propF946;
  P setterF945;
  P getterF944;
  P xF943;
  P accessorF942;
  P propF941;
  P setterF940;
  P getterF939;
  P xF938;
  P accessorF937;
  P propF936;
  P setterF935;
  P getterF934;
  P xF933;
  P accessorF932;
  P propF931;
  P setterF930;
  P xF929;
  P accessorF928;
  P getterF927;
  P xF926;
  P accessorF925;
  P propF924;
  P setterF923;
  P xF922;
  P accessorF921;
  P getterF920;
  P xF919;
  P accessorF918;
  P propF917;
  P setterF916;
  P xF915;
  P accessorF914;
  P getterF913;
  P xF912;
  P accessorF911;
  P propF910;
  P setterF909;
  P xF908;
  P accessorF907;
  P getterF906;
  P xF905;
  P accessorF904;
  P propF903;
  P setterF902;
  P xF901;
  P accessorF900;
  P getterF899;
  P xF898;
  P accessorF897;
  P propF896;
  P setterF895;
  P xF894;
  P accessorF893;
  P getterF892;
  P xF891;
  P accessorF890;
  P propF889;
  P setterF888;
  P xF887;
  P accessorF886;
  P getterF885;
  P xF884;
  P accessorF883;
  P propF882;
  P setterF881;
  P xF880;
  P accessorF879;
  P getterF878;
  P xF877;
  P accessorF876;
  P propF875;
  P setterF874;
  P getterF873;
  P xF872;
  P accessorF871;
  P propF870;
  P setterF869;
  P xF868;
  P accessorF867;
  P getterF866;
  P xF865;
  P accessorF864;
  P propF863;
  P setterF862;
  P getterF861;
  P xF860;
  P accessorF859;
  P propF858;
  P setterF857;
  P xF856;
  P accessorF855;
  P getterF854;
  P xF853;
  P accessorF852;
  P propF851;
  P setterF850;
  P xF849;
  P accessorF848;
  P getterF847;
  P xF846;
  P accessorF845;
  P propF844;
  P setterF843;
  P getterF842;
  P xF841;
  P accessorF840;
  P propF839;
  P setterF838;
  P getterF837;
  P xF836;
  P accessorF835;
  P propF834;
  P setterF833;
  P xF832;
  P accessorF831;
  P getterF830;
  P xF829;
  P accessorF828;
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
  P T544,T545,T546,T547,T548,T549,T550,T551,T552,T553;
DEFCREGS();
  lit_11 = YPPsym((P)"%add-prop");
  lit_12 = YPPlist(2,YPPsym((P)"class"),YPPsym((P)"prop"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPadd_prop = YPfab_met(FUNCODEREF(YPadd_prop),T0,LITREF(lit_11),LITREF(lit_12),sloc(717),YPsb((P)"(fun (class prop) (set (%class-direct-props class) (%pair prop (%class-direct-props class))))"));
  T1 = YPadd_prop;
  VARSET(YPadd_prop,T1);
  lit_13 = YPPsym((P)"box-value");
  lit_14 = YPPlist(1,YPPsym((P)"x"));
  lit_15 = YPPsym((P)"box-value-setter");
  lit_16 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_17 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLboxG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_176 = YPfab_met(FUNCODEREF(fun_176),T4,YPfalse,LITREF(lit_14),sloc(739),YPsb((P)"(fun ((x <box>) => <any>) (%prop-elt x (%prop-offset <box> box-value)))"));
  T3 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLboxG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_177 = YPfab_met(FUNCODEREF(fun_177),T3,YPfalse,LITREF(lit_16),sloc(739),YPsb((P)"(fun ((z <any>) (x <box>)) (set (%prop-elt x (%prop-offset <box> box-value)) z))"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_178 = YPfab_met(FUNCODEREF(fun_178),T2,YPfalse,LITREF(lit_17),sloc(739),YPsb((P)"(fun (x) nul-prop)"));
  T16 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T15 = (P)YPsig(T16,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T14 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T15,LITREF(lit_13),Ynil,YPfalse);
  VARSET(Ybox_value,T14);
  T18 = fun_176;
  accessorF828 = T18;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ybox_value),accessorF828);
  xF829 = accessorF828;
  T17 = (P)YPprop_elt(xF829,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_13),T17);
  getterF830 = accessorF828;
  T11 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T10 = (P)YPpair(VARREF(YLanyG),T11);
  T9 = (P)YPsig(T10,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T8 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T9,LITREF(lit_15),Ynil,YPfalse);
  VARSET(Ybox_value_setter,T8);
  T13 = fun_177;
  accessorF831 = T13;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ybox_value_setter),accessorF831);
  xF832 = accessorF831;
  T12 = (P)YPprop_elt(xF832,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_15),T12);
  setterF833 = accessorF831;
  T7 = fun_178;
  T6 = (P)YPPprop(VARREF(YLboxG),VARREF(Ybox_value),VARREF(Ybox_value_setter),VARREF(YLanyG),T7);
  propF834 = T6;
  (P)YPmet_env_setter(propF834,getterF830);
  (P)YPmet_env_setter(propF834,setterF833);
  T5 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLboxG),propF834);
  lit_18 = YPPsym((P)"src-loc-line");
  lit_19 = YPPlist(1,YPPsym((P)"x"));
  lit_20 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLsrc_locG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_179 = YPfab_met(FUNCODEREF(fun_179),T20,YPfalse,LITREF(lit_19),sloc(739),YPsb((P)"(fun ((x <src-loc>) => <int>) (%prop-elt x (%prop-offset <src-loc> src-loc-line)))"));
  T19 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_180 = YPfab_met(FUNCODEREF(fun_180),T19,YPfalse,LITREF(lit_20),sloc(739),YPsb((P)"(fun (x) nul-prop)"));
  T26 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T25 = (P)YPsig(T26,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T24 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T25,LITREF(lit_18),Ynil,YPfalse);
  VARSET(Ysrc_loc_line,T24);
  T28 = fun_179;
  accessorF835 = T28;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_line),accessorF835);
  xF836 = accessorF835;
  T27 = (P)YPprop_elt(xF836,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_18),T27);
  getterF837 = accessorF835;
  setterF838 = YPfalse;
  T23 = fun_180;
  T22 = (P)YPPprop(VARREF(YLsrc_locG),VARREF(Ysrc_loc_line),YPfalse,VARREF(YLintG),T23);
  propF839 = T22;
  (P)YPmet_env_setter(propF839,getterF837);
  T21 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsrc_locG),propF839);
  lit_21 = YPPsym((P)"src-loc-file");
  lit_22 = YPPlist(1,YPPsym((P)"x"));
  lit_23 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YLsrc_locG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_181 = YPfab_met(FUNCODEREF(fun_181),T30,YPfalse,LITREF(lit_22),sloc(739),YPsb((P)"(fun ((x <src-loc>) => <str>) (%prop-elt x (%prop-offset <src-loc> src-loc-file)))"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_182 = YPfab_met(FUNCODEREF(fun_182),T29,YPfalse,LITREF(lit_23),sloc(739),YPsb((P)"(fun (x) nul-prop)"));
  T36 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T35 = (P)YPsig(T36,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T34 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T35,LITREF(lit_21),Ynil,YPfalse);
  VARSET(Ysrc_loc_file,T34);
  T38 = fun_181;
  accessorF840 = T38;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_file),accessorF840);
  xF841 = accessorF840;
  T37 = (P)YPprop_elt(xF841,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_21),T37);
  getterF842 = accessorF840;
  setterF843 = YPfalse;
  T33 = fun_182;
  T32 = (P)YPPprop(VARREF(YLsrc_locG),VARREF(Ysrc_loc_file),YPfalse,VARREF(YLstrG),T33);
  propF844 = T32;
  (P)YPmet_env_setter(propF844,getterF842);
  T31 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsrc_locG),propF844);
  lit_24 = YPPsym((P)"head");
  lit_25 = YPPlist(1,YPPsym((P)"x"));
  lit_26 = YPPsym((P)"head-setter");
  lit_27 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_28 = YPPlist(1,YPPsym((P)"x"));
  T41 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_183 = YPfab_met(FUNCODEREF(fun_183),T41,YPfalse,LITREF(lit_25),sloc(739),YPsb((P)"(fun ((x <lst>) => <any>) (%prop-elt x (%prop-offset <lst> head)))"));
  T40 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_184 = YPfab_met(FUNCODEREF(fun_184),T40,YPfalse,LITREF(lit_27),sloc(739),YPsb((P)"(fun ((z <any>) (x <lst>)) (set (%prop-elt x (%prop-offset <lst> head)) z))"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_185 = YPfab_met(FUNCODEREF(fun_185),T39,YPfalse,LITREF(lit_28),sloc(739),YPsb((P)"(fun (x) nil)"));
  T53 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T52 = (P)YPsig(T53,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T51 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T52,LITREF(lit_24),Ynil,YPfalse);
  VARSET(Yhead,T51);
  T55 = fun_183;
  accessorF845 = T55;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yhead),accessorF845);
  xF846 = accessorF845;
  T54 = (P)YPprop_elt(xF846,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_24),T54);
  getterF847 = accessorF845;
  T48 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T47 = (P)YPpair(VARREF(YLanyG),T48);
  T46 = (P)YPsig(T47,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T45 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T46,LITREF(lit_26),Ynil,YPfalse);
  VARSET(Yhead_setter,T45);
  T50 = fun_184;
  accessorF848 = T50;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yhead_setter),accessorF848);
  xF849 = accessorF848;
  T49 = (P)YPprop_elt(xF849,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_26),T49);
  setterF850 = accessorF848;
  T44 = fun_185;
  T43 = (P)YPPprop(VARREF(YLlstG),VARREF(Yhead),VARREF(Yhead_setter),VARREF(YLanyG),T44);
  propF851 = T43;
  (P)YPmet_env_setter(propF851,getterF847);
  (P)YPmet_env_setter(propF851,setterF850);
  T42 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF851);
  lit_29 = YPPsym((P)"tail");
  lit_30 = YPPlist(1,YPPsym((P)"x"));
  lit_31 = YPPsym((P)"tail-setter");
  lit_32 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_33 = YPPlist(1,YPPsym((P)"x"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_186 = YPfab_met(FUNCODEREF(fun_186),T58,YPfalse,LITREF(lit_30),sloc(739),YPsb((P)"(fun ((x <lst>) => <lst>) (%prop-elt x (%prop-offset <lst> tail)))"));
  T57 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_187 = YPfab_met(FUNCODEREF(fun_187),T57,YPfalse,LITREF(lit_32),sloc(739),YPsb((P)"(fun ((z <lst>) (x <lst>)) (set (%prop-elt x (%prop-offset <lst> tail)) z))"));
  T56 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_188 = YPfab_met(FUNCODEREF(fun_188),T56,YPfalse,LITREF(lit_33),sloc(739),YPsb((P)"(fun (x) nil)"));
  T70 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T69 = (P)YPsig(T70,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T68 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T69,LITREF(lit_29),Ynil,YPfalse);
  VARSET(Ytail,T68);
  T72 = fun_186;
  accessorF852 = T72;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytail),accessorF852);
  xF853 = accessorF852;
  T71 = (P)YPprop_elt(xF853,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_29),T71);
  getterF854 = accessorF852;
  T65 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T64 = (P)YPpair(VARREF(YLanyG),T65);
  T63 = (P)YPsig(T64,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T62 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T63,LITREF(lit_31),Ynil,YPfalse);
  VARSET(Ytail_setter,T62);
  T67 = fun_187;
  accessorF855 = T67;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytail_setter),accessorF855);
  xF856 = accessorF855;
  T66 = (P)YPprop_elt(xF856,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_31),T66);
  setterF857 = accessorF855;
  T61 = fun_188;
  T60 = (P)YPPprop(VARREF(YLlstG),VARREF(Ytail),VARREF(Ytail_setter),VARREF(YLlstG),T61);
  propF858 = T60;
  (P)YPmet_env_setter(propF858,getterF854);
  (P)YPmet_env_setter(propF858,setterF857);
  T59 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF858);
  lit_34 = YPPsym((P)"sym-name");
  lit_35 = YPPlist(1,YPPsym((P)"x"));
  lit_36 = YPPlist(1,YPPsym((P)"x"));
  T74 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_189 = YPfab_met(FUNCODEREF(fun_189),T74,YPfalse,LITREF(lit_35),sloc(739),YPsb((P)"(fun ((x <sym>) => <str>) (%prop-elt x (%prop-offset <sym> sym-name)))"));
  T73 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_190 = YPfab_met(FUNCODEREF(fun_190),T73,YPfalse,LITREF(lit_36),sloc(739),YPsb((P)"(fun (x) nul-prop)"));
  T80 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T79 = (P)YPsig(T80,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T78 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T79,LITREF(lit_34),Ynil,YPfalse);
  VARSET(Ysym_name,T78);
  T82 = fun_189;
  accessorF859 = T82;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysym_name),accessorF859);
  xF860 = accessorF859;
  T81 = (P)YPprop_elt(xF860,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_34),T81);
  getterF861 = accessorF859;
  setterF862 = YPfalse;
  T77 = fun_190;
  T76 = (P)YPPprop(VARREF(YLsymG),VARREF(Ysym_name),YPfalse,VARREF(YLstrG),T77);
  propF863 = T76;
  (P)YPmet_env_setter(propF863,getterF861);
  T75 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsymG),propF863);
  lit_37 = YPPsym((P)"class-prop-len");
  lit_38 = YPPlist(1,YPPsym((P)"x"));
  lit_39 = YPPsym((P)"class-prop-len-setter");
  lit_40 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_41 = YPPlist(1,YPPsym((P)"x"));
  T85 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_191 = YPfab_met(FUNCODEREF(fun_191),T85,YPfalse,LITREF(lit_38),sloc(739),YPsb((P)"(fun ((x <class>) => <fixnum>) (%prop-elt x (%prop-offset <class> class-prop-len)))"));
  T84 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_192 = YPfab_met(FUNCODEREF(fun_192),T84,YPfalse,LITREF(lit_40),sloc(739),YPsb((P)"(fun ((z <fixnum>) (x <class>)) (set (%prop-elt x (%prop-offset <class> class-prop-len)) z))"));
  T83 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_193 = YPfab_met(FUNCODEREF(fun_193),T83,YPfalse,LITREF(lit_41),sloc(739),YPsb((P)"(fun (x) 0)"));
  T97 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T96 = (P)YPsig(T97,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T95 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T96,LITREF(lit_37),Ynil,YPfalse);
  VARSET(Yclass_prop_len,T95);
  T99 = fun_191;
  accessorF864 = T99;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len),accessorF864);
  xF865 = accessorF864;
  T98 = (P)YPprop_elt(xF865,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_37),T98);
  getterF866 = accessorF864;
  T92 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T91 = (P)YPpair(VARREF(YLanyG),T92);
  T90 = (P)YPsig(T91,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T89 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T90,LITREF(lit_39),Ynil,YPfalse);
  VARSET(Yclass_prop_len_setter,T89);
  T94 = fun_192;
  accessorF867 = T94;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len_setter),accessorF867);
  xF868 = accessorF867;
  T93 = (P)YPprop_elt(xF868,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_39),T93);
  setterF869 = accessorF867;
  T88 = fun_193;
  T87 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_prop_len),VARREF(Yclass_prop_len_setter),VARREF(YLfixnumG),T88);
  propF870 = T87;
  (P)YPmet_env_setter(propF870,getterF866);
  (P)YPmet_env_setter(propF870,setterF869);
  T86 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF870);
  lit_42 = YPPsym((P)"class-name");
  lit_43 = YPPlist(1,YPPsym((P)"x"));
  lit_44 = YPPlist(1,YPPsym((P)"x"));
  T101 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_194 = YPfab_met(FUNCODEREF(fun_194),T101,YPfalse,LITREF(lit_43),sloc(739),YPsb((P)"(fun ((x <class>) => <sym>) (%prop-elt x (%prop-offset <class> class-name)))"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_195 = YPfab_met(FUNCODEREF(fun_195),T100,YPfalse,LITREF(lit_44),sloc(739),YPsb((P)"(fun (x) nul-prop)"));
  T107 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T106 = (P)YPsig(T107,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T105 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T106,LITREF(lit_42),Ynil,YPfalse);
  VARSET(Yclass_name,T105);
  T109 = fun_194;
  accessorF871 = T109;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_name),accessorF871);
  xF872 = accessorF871;
  T108 = (P)YPprop_elt(xF872,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_42),T108);
  getterF873 = accessorF871;
  setterF874 = YPfalse;
  T104 = fun_195;
  T103 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_name),YPfalse,VARREF(YLsymG),T104);
  propF875 = T103;
  (P)YPmet_env_setter(propF875,getterF873);
  T102 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF875);
  lit_45 = YPPsym((P)"class-parents");
  lit_46 = YPPlist(1,YPPsym((P)"x"));
  lit_47 = YPPsym((P)"class-parents-setter");
  lit_48 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_49 = YPPlist(1,YPPsym((P)"x"));
  T112 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_196 = YPfab_met(FUNCODEREF(fun_196),T112,YPfalse,LITREF(lit_46),sloc(739),YPsb((P)"(fun ((x <class>) => <lst>) (%prop-elt x (%prop-offset <class> class-parents)))"));
  T111 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_197 = YPfab_met(FUNCODEREF(fun_197),T111,YPfalse,LITREF(lit_48),sloc(739),YPsb((P)"(fun ((z <lst>) (x <class>)) (set (%prop-elt x (%prop-offset <class> class-parents)) z))"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_198 = YPfab_met(FUNCODEREF(fun_198),T110,YPfalse,LITREF(lit_49),sloc(739),YPsb((P)"(fun (x) nil)"));
  T124 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T123 = (P)YPsig(T124,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T122 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T123,LITREF(lit_45),Ynil,YPfalse);
  VARSET(Yclass_parents,T122);
  T126 = fun_196;
  accessorF876 = T126;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents),accessorF876);
  xF877 = accessorF876;
  T125 = (P)YPprop_elt(xF877,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_45),T125);
  getterF878 = accessorF876;
  T119 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T118 = (P)YPpair(VARREF(YLanyG),T119);
  T117 = (P)YPsig(T118,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T116 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T117,LITREF(lit_47),Ynil,YPfalse);
  VARSET(Yclass_parents_setter,T116);
  T121 = fun_197;
  accessorF879 = T121;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents_setter),accessorF879);
  xF880 = accessorF879;
  T120 = (P)YPprop_elt(xF880,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_47),T120);
  setterF881 = accessorF879;
  T115 = fun_198;
  T114 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_parents),VARREF(Yclass_parents_setter),VARREF(YLlstG),T115);
  propF882 = T114;
  (P)YPmet_env_setter(propF882,getterF878);
  (P)YPmet_env_setter(propF882,setterF881);
  T113 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF882);
  lit_50 = YPPsym((P)"class-direct-props");
  lit_51 = YPPlist(1,YPPsym((P)"x"));
  lit_52 = YPPsym((P)"class-direct-props-setter");
  lit_53 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_54 = YPPlist(1,YPPsym((P)"x"));
  T129 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_199 = YPfab_met(FUNCODEREF(fun_199),T129,YPfalse,LITREF(lit_51),sloc(739),YPsb((P)"(fun ((x <class>) => <lst>) (%prop-elt x (%prop-offset <class> class-direct-props)))"));
  T128 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_200 = YPfab_met(FUNCODEREF(fun_200),T128,YPfalse,LITREF(lit_53),sloc(739),YPsb((P)"(fun ((z <lst>) (x <class>)) (set (%prop-elt x (%prop-offset <class> class-direct-props)) z))"));
  T127 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_201 = YPfab_met(FUNCODEREF(fun_201),T127,YPfalse,LITREF(lit_54),sloc(739),YPsb((P)"(fun (x) nil)"));
  T141 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T140 = (P)YPsig(T141,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T139 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T140,LITREF(lit_50),Ynil,YPfalse);
  VARSET(Yclass_direct_props,T139);
  T143 = fun_199;
  accessorF883 = T143;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props),accessorF883);
  xF884 = accessorF883;
  T142 = (P)YPprop_elt(xF884,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_50),T142);
  getterF885 = accessorF883;
  T136 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T135 = (P)YPpair(VARREF(YLanyG),T136);
  T134 = (P)YPsig(T135,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T133 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T134,LITREF(lit_52),Ynil,YPfalse);
  VARSET(Yclass_direct_props_setter,T133);
  T138 = fun_200;
  accessorF886 = T138;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props_setter),accessorF886);
  xF887 = accessorF886;
  T137 = (P)YPprop_elt(xF887,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_52),T137);
  setterF888 = accessorF886;
  T132 = fun_201;
  T131 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_direct_props),VARREF(Yclass_direct_props_setter),VARREF(YLlstG),T132);
  propF889 = T131;
  (P)YPmet_env_setter(propF889,getterF885);
  (P)YPmet_env_setter(propF889,setterF888);
  T130 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF889);
  lit_55 = YPPsym((P)"class-ancestors");
  lit_56 = YPPlist(1,YPPsym((P)"x"));
  lit_57 = YPPsym((P)"class-ancestors-setter");
  lit_58 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_59 = YPPlist(1,YPPsym((P)"x"));
  T146 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_202 = YPfab_met(FUNCODEREF(fun_202),T146,YPfalse,LITREF(lit_56),sloc(739),YPsb((P)"(fun ((x <class>) => <lst>) (%prop-elt x (%prop-offset <class> class-ancestors)))"));
  T145 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_203 = YPfab_met(FUNCODEREF(fun_203),T145,YPfalse,LITREF(lit_58),sloc(739),YPsb((P)"(fun ((z <lst>) (x <class>)) (set (%prop-elt x (%prop-offset <class> class-ancestors)) z))"));
  T144 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_204 = YPfab_met(FUNCODEREF(fun_204),T144,YPfalse,LITREF(lit_59),sloc(739),YPsb((P)"(fun (x) nil)"));
  T158 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T157 = (P)YPsig(T158,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T156 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T157,LITREF(lit_55),Ynil,YPfalse);
  VARSET(Yclass_ancestors,T156);
  T160 = fun_202;
  accessorF890 = T160;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors),accessorF890);
  xF891 = accessorF890;
  T159 = (P)YPprop_elt(xF891,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_55),T159);
  getterF892 = accessorF890;
  T153 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T152 = (P)YPpair(VARREF(YLanyG),T153);
  T151 = (P)YPsig(T152,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T150 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T151,LITREF(lit_57),Ynil,YPfalse);
  VARSET(Yclass_ancestors_setter,T150);
  T155 = fun_203;
  accessorF893 = T155;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors_setter),accessorF893);
  xF894 = accessorF893;
  T154 = (P)YPprop_elt(xF894,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_57),T154);
  setterF895 = accessorF893;
  T149 = fun_204;
  T148 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_ancestors),VARREF(Yclass_ancestors_setter),VARREF(YLlstG),T149);
  propF896 = T148;
  (P)YPmet_env_setter(propF896,getterF892);
  (P)YPmet_env_setter(propF896,setterF895);
  T147 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF896);
  lit_60 = YPPsym((P)"class-props");
  lit_61 = YPPlist(1,YPPsym((P)"x"));
  lit_62 = YPPsym((P)"class-props-setter");
  lit_63 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_64 = YPPlist(1,YPPsym((P)"x"));
  T163 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_205 = YPfab_met(FUNCODEREF(fun_205),T163,YPfalse,LITREF(lit_61),sloc(739),YPsb((P)"(fun ((x <class>) => <lst>) (%prop-elt x (%prop-offset <class> class-props)))"));
  T162 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_206 = YPfab_met(FUNCODEREF(fun_206),T162,YPfalse,LITREF(lit_63),sloc(739),YPsb((P)"(fun ((z <lst>) (x <class>)) (set (%prop-elt x (%prop-offset <class> class-props)) z))"));
  T161 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_207 = YPfab_met(FUNCODEREF(fun_207),T161,YPfalse,LITREF(lit_64),sloc(739),YPsb((P)"(fun (x) nil)"));
  T175 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T174 = (P)YPsig(T175,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T173 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T174,LITREF(lit_60),Ynil,YPfalse);
  VARSET(Yclass_props,T173);
  T177 = fun_205;
  accessorF897 = T177;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_props),accessorF897);
  xF898 = accessorF897;
  T176 = (P)YPprop_elt(xF898,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_60),T176);
  getterF899 = accessorF897;
  T170 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T169 = (P)YPpair(VARREF(YLanyG),T170);
  T168 = (P)YPsig(T169,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T167 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T168,LITREF(lit_62),Ynil,YPfalse);
  VARSET(Yclass_props_setter,T167);
  T172 = fun_206;
  accessorF900 = T172;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_props_setter),accessorF900);
  xF901 = accessorF900;
  T171 = (P)YPprop_elt(xF901,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_62),T171);
  setterF902 = accessorF900;
  T166 = fun_207;
  T165 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_props),VARREF(Yclass_props_setter),VARREF(YLlstG),T166);
  propF903 = T165;
  (P)YPmet_env_setter(propF903,getterF899);
  (P)YPmet_env_setter(propF903,setterF902);
  T164 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF903);
  lit_65 = YPPsym((P)"class-children");
  lit_66 = YPPlist(1,YPPsym((P)"x"));
  lit_67 = YPPsym((P)"class-children-setter");
  lit_68 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_69 = YPPlist(1,YPPsym((P)"x"));
  T180 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_208 = YPfab_met(FUNCODEREF(fun_208),T180,YPfalse,LITREF(lit_66),sloc(739),YPsb((P)"(fun ((x <class>) => <lst>) (%prop-elt x (%prop-offset <class> class-children)))"));
  T179 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_209 = YPfab_met(FUNCODEREF(fun_209),T179,YPfalse,LITREF(lit_68),sloc(739),YPsb((P)"(fun ((z <lst>) (x <class>)) (set (%prop-elt x (%prop-offset <class> class-children)) z))"));
  T178 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_210 = YPfab_met(FUNCODEREF(fun_210),T178,YPfalse,LITREF(lit_69),sloc(739),YPsb((P)"(fun (x) nil)"));
  T192 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T191 = (P)YPsig(T192,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T190 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T191,LITREF(lit_65),Ynil,YPfalse);
  VARSET(Yclass_children,T190);
  T194 = fun_208;
  accessorF904 = T194;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_children),accessorF904);
  xF905 = accessorF904;
  T193 = (P)YPprop_elt(xF905,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_65),T193);
  getterF906 = accessorF904;
  T187 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T186 = (P)YPpair(VARREF(YLanyG),T187);
  T185 = (P)YPsig(T186,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T184 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T185,LITREF(lit_67),Ynil,YPfalse);
  VARSET(Yclass_children_setter,T184);
  T189 = fun_209;
  accessorF907 = T189;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_children_setter),accessorF907);
  xF908 = accessorF907;
  T188 = (P)YPprop_elt(xF908,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_67),T188);
  setterF909 = accessorF907;
  T183 = fun_210;
  T182 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_children),VARREF(Yclass_children_setter),VARREF(YLlstG),T183);
  propF910 = T182;
  (P)YPmet_env_setter(propF910,getterF906);
  (P)YPmet_env_setter(propF910,setterF909);
  T181 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF910);
  lit_70 = YPPsym((P)"class-gens");
  lit_71 = YPPlist(1,YPPsym((P)"x"));
  lit_72 = YPPsym((P)"class-gens-setter");
  lit_73 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_74 = YPPlist(1,YPPsym((P)"x"));
  T197 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_211 = YPfab_met(FUNCODEREF(fun_211),T197,YPfalse,LITREF(lit_71),sloc(739),YPsb((P)"(fun ((x <class>) => <lst>) (%prop-elt x (%prop-offset <class> class-gens)))"));
  T196 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_212 = YPfab_met(FUNCODEREF(fun_212),T196,YPfalse,LITREF(lit_73),sloc(739),YPsb((P)"(fun ((z <lst>) (x <class>)) (set (%prop-elt x (%prop-offset <class> class-gens)) z))"));
  T195 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_213 = YPfab_met(FUNCODEREF(fun_213),T195,YPfalse,LITREF(lit_74),sloc(739),YPsb((P)"(fun (x) nil)"));
  T209 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T208 = (P)YPsig(T209,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T207 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T208,LITREF(lit_70),Ynil,YPfalse);
  VARSET(Yclass_gens,T207);
  T211 = fun_211;
  accessorF911 = T211;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens),accessorF911);
  xF912 = accessorF911;
  T210 = (P)YPprop_elt(xF912,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_70),T210);
  getterF913 = accessorF911;
  T204 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T203 = (P)YPpair(VARREF(YLanyG),T204);
  T202 = (P)YPsig(T203,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T201 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T202,LITREF(lit_72),Ynil,YPfalse);
  VARSET(Yclass_gens_setter,T201);
  T206 = fun_212;
  accessorF914 = T206;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens_setter),accessorF914);
  xF915 = accessorF914;
  T205 = (P)YPprop_elt(xF915,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_72),T205);
  setterF916 = accessorF914;
  T200 = fun_213;
  T199 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_gens),VARREF(Yclass_gens_setter),VARREF(YLlstG),T200);
  propF917 = T199;
  (P)YPmet_env_setter(propF917,getterF913);
  (P)YPmet_env_setter(propF917,setterF916);
  T198 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF917);
  lit_75 = YPPsym((P)"class-mets");
  lit_76 = YPPlist(1,YPPsym((P)"x"));
  lit_77 = YPPsym((P)"class-mets-setter");
  lit_78 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_79 = YPPlist(1,YPPsym((P)"x"));
  T214 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_214 = YPfab_met(FUNCODEREF(fun_214),T214,YPfalse,LITREF(lit_76),sloc(739),YPsb((P)"(fun ((x <class>) => <lst>) (%prop-elt x (%prop-offset <class> class-mets)))"));
  T213 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_215 = YPfab_met(FUNCODEREF(fun_215),T213,YPfalse,LITREF(lit_78),sloc(739),YPsb((P)"(fun ((z <lst>) (x <class>)) (set (%prop-elt x (%prop-offset <class> class-mets)) z))"));
  T212 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_216 = YPfab_met(FUNCODEREF(fun_216),T212,YPfalse,LITREF(lit_79),sloc(739),YPsb((P)"(fun (x) nil)"));
  T226 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T225 = (P)YPsig(T226,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T224 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T225,LITREF(lit_75),Ynil,YPfalse);
  VARSET(Yclass_mets,T224);
  T228 = fun_214;
  accessorF918 = T228;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets),accessorF918);
  xF919 = accessorF918;
  T227 = (P)YPprop_elt(xF919,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_75),T227);
  getterF920 = accessorF918;
  T221 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T220 = (P)YPpair(VARREF(YLanyG),T221);
  T219 = (P)YPsig(T220,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T218 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T219,LITREF(lit_77),Ynil,YPfalse);
  VARSET(Yclass_mets_setter,T218);
  T223 = fun_215;
  accessorF921 = T223;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets_setter),accessorF921);
  xF922 = accessorF921;
  T222 = (P)YPprop_elt(xF922,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_77),T222);
  setterF923 = accessorF921;
  T217 = fun_216;
  T216 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_mets),VARREF(Yclass_mets_setter),VARREF(YLlstG),T217);
  propF924 = T216;
  (P)YPmet_env_setter(propF924,getterF920);
  (P)YPmet_env_setter(propF924,setterF923);
  T215 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF924);
  lit_80 = YPPsym((P)"class-forward");
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  lit_82 = YPPsym((P)"class-forward-setter");
  lit_83 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_84 = YPPlist(1,YPPsym((P)"x"));
  T231 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_217 = YPfab_met(FUNCODEREF(fun_217),T231,YPfalse,LITREF(lit_81),sloc(739),YPsb((P)"(fun ((x <class>) => <any>) (%prop-elt x (%prop-offset <class> class-forward)))"));
  T230 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_218 = YPfab_met(FUNCODEREF(fun_218),T230,YPfalse,LITREF(lit_83),sloc(739),YPsb((P)"(fun ((z <any>) (x <class>)) (set (%prop-elt x (%prop-offset <class> class-forward)) z))"));
  T229 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_219 = YPfab_met(FUNCODEREF(fun_219),T229,YPfalse,LITREF(lit_84),sloc(739),YPsb((P)"(fun (x) #f)"));
  T243 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T242 = (P)YPsig(T243,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T241 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T242,LITREF(lit_80),Ynil,YPfalse);
  VARSET(Yclass_forward,T241);
  T245 = fun_217;
  accessorF925 = T245;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward),accessorF925);
  xF926 = accessorF925;
  T244 = (P)YPprop_elt(xF926,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_80),T244);
  getterF927 = accessorF925;
  T238 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T237 = (P)YPpair(VARREF(YLanyG),T238);
  T236 = (P)YPsig(T237,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T235 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T236,LITREF(lit_82),Ynil,YPfalse);
  VARSET(Yclass_forward_setter,T235);
  T240 = fun_218;
  accessorF928 = T240;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward_setter),accessorF928);
  xF929 = accessorF928;
  T239 = (P)YPprop_elt(xF929,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_82),T239);
  setterF930 = accessorF928;
  T234 = fun_219;
  T233 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_forward),VARREF(Yclass_forward_setter),VARREF(YLanyG),T234);
  propF931 = T233;
  (P)YPmet_env_setter(propF931,getterF927);
  (P)YPmet_env_setter(propF931,setterF930);
  T232 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF931);
  lit_85 = YPPsym((P)"class-id");
  lit_86 = YPPlist(1,YPPsym((P)"x"));
  lit_87 = YPPlist(1,YPPsym((P)"x"));
  T247 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_220 = YPfab_met(FUNCODEREF(fun_220),T247,YPfalse,LITREF(lit_86),sloc(739),YPsb((P)"(fun ((x <class>) => <fixnum>) (%prop-elt x (%prop-offset <class> class-id)))"));
  T246 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_221 = YPfab_met(FUNCODEREF(fun_221),T246,YPfalse,LITREF(lit_87),sloc(739),YPsb((P)"(fun (x) -1)"));
  T253 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T252 = (P)YPsig(T253,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T251 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T252,LITREF(lit_85),Ynil,YPfalse);
  VARSET(Yclass_id,T251);
  T255 = fun_220;
  accessorF932 = T255;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_id),accessorF932);
  xF933 = accessorF932;
  T254 = (P)YPprop_elt(xF933,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_85),T254);
  getterF934 = accessorF932;
  setterF935 = YPfalse;
  T250 = fun_221;
  T249 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_id),YPfalse,VARREF(YLfixnumG),T250);
  propF936 = T249;
  (P)YPmet_env_setter(propF936,getterF934);
  T248 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF936);
  lit_88 = YPPsym((P)"class-row");
  lit_89 = YPPlist(1,YPPsym((P)"x"));
  lit_90 = YPPlist(1,YPPsym((P)"x"));
  T257 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_222 = YPfab_met(FUNCODEREF(fun_222),T257,YPfalse,LITREF(lit_89),sloc(739),YPsb((P)"(fun ((x <class>) => <tup>) (%prop-elt x (%prop-offset <class> class-row)))"));
  T256 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_223 = YPfab_met(FUNCODEREF(fun_223),T256,YPfalse,LITREF(lit_90),sloc(739),YPsb((P)"(fun (x) nul)"));
  T263 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T262 = (P)YPsig(T263,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T261 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T262,LITREF(lit_88),Ynil,YPfalse);
  VARSET(Yclass_row,T261);
  T265 = fun_222;
  accessorF937 = T265;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_row),accessorF937);
  xF938 = accessorF937;
  T264 = (P)YPprop_elt(xF938,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_88),T264);
  getterF939 = accessorF937;
  setterF940 = YPfalse;
  T260 = fun_223;
  T259 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_row),YPfalse,VARREF(YLtupG),T260);
  propF941 = T259;
  (P)YPmet_env_setter(propF941,getterF939);
  T258 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF941);
  lit_91 = YPPsym((P)"type-object");
  lit_92 = YPPlist(1,YPPsym((P)"x"));
  lit_93 = YPPlist(1,YPPsym((P)"x"));
  T267 = YPfab_sig(YPPlist(1,VARREF(YLsingletonG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_224 = YPfab_met(FUNCODEREF(fun_224),T267,YPfalse,LITREF(lit_92),sloc(739),YPsb((P)"(fun ((x <singleton>) => <any>) (%prop-elt x (%prop-offset <singleton> type-object)))"));
  T266 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_225 = YPfab_met(FUNCODEREF(fun_225),T266,YPfalse,LITREF(lit_93),sloc(739),YPsb((P)"(fun (x) nul-prop)"));
  T273 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T272 = (P)YPsig(T273,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T271 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T272,LITREF(lit_91),Ynil,YPfalse);
  VARSET(Ytype_object,T271);
  T275 = fun_224;
  accessorF942 = T275;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_object),accessorF942);
  xF943 = accessorF942;
  T274 = (P)YPprop_elt(xF943,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_91),T274);
  getterF944 = accessorF942;
  setterF945 = YPfalse;
  T270 = fun_225;
  T269 = (P)YPPprop(VARREF(YLsingletonG),VARREF(Ytype_object),YPfalse,VARREF(YLanyG),T270);
  propF946 = T269;
  (P)YPmet_env_setter(propF946,getterF944);
  T268 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsingletonG),propF946);
  lit_94 = YPPsym((P)"type-class");
  lit_95 = YPPlist(1,YPPsym((P)"x"));
  lit_96 = YPPlist(1,YPPsym((P)"x"));
  T277 = YPfab_sig(YPPlist(1,VARREF(YLsubclassG)),YPfalse,YPint((P)1),VARREF(YLclassG),Ynil);
  fun_226 = YPfab_met(FUNCODEREF(fun_226),T277,YPfalse,LITREF(lit_95),sloc(739),YPsb((P)"(fun ((x <subclass>) => <class>) (%prop-elt x (%prop-offset <subclass> type-class)))"));
  T276 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_227 = YPfab_met(FUNCODEREF(fun_227),T276,YPfalse,LITREF(lit_96),sloc(739),YPsb((P)"(fun (x) nul-prop)"));
  T283 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T282 = (P)YPsig(T283,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T281 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T282,LITREF(lit_94),Ynil,YPfalse);
  VARSET(Ytype_class,T281);
  T285 = fun_226;
  accessorF947 = T285;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_class),accessorF947);
  xF948 = accessorF947;
  T284 = (P)YPprop_elt(xF948,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_94),T284);
  getterF949 = accessorF947;
  setterF950 = YPfalse;
  T280 = fun_227;
  T279 = (P)YPPprop(VARREF(YLsubclassG),VARREF(Ytype_class),YPfalse,VARREF(YLclassG),T280);
  propF951 = T279;
  (P)YPmet_env_setter(propF951,getterF949);
  T278 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsubclassG),propF951);
  lit_97 = YPPsym((P)"union-elts");
  lit_98 = YPPlist(1,YPPsym((P)"x"));
  lit_99 = YPPlist(1,YPPsym((P)"x"));
  T287 = YPfab_sig(YPPlist(1,VARREF(YLunionG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_228 = YPfab_met(FUNCODEREF(fun_228),T287,YPfalse,LITREF(lit_98),sloc(739),YPsb((P)"(fun ((x <union>) => <lst>) (%prop-elt x (%prop-offset <union> union-elts)))"));
  T286 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_229 = YPfab_met(FUNCODEREF(fun_229),T286,YPfalse,LITREF(lit_99),sloc(739),YPsb((P)"(fun (x) nil)"));
  T293 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T292 = (P)YPsig(T293,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T291 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T292,LITREF(lit_97),Ynil,YPfalse);
  VARSET(Yunion_elts,T291);
  T295 = fun_228;
  accessorF952 = T295;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yunion_elts),accessorF952);
  xF953 = accessorF952;
  T294 = (P)YPprop_elt(xF953,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_97),T294);
  getterF954 = accessorF952;
  setterF955 = YPfalse;
  T290 = fun_229;
  T289 = (P)YPPprop(VARREF(YLunionG),VARREF(Yunion_elts),YPfalse,VARREF(YLlstG),T290);
  propF956 = T289;
  (P)YPmet_env_setter(propF956,getterF954);
  T288 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLunionG),propF956);
  lit_100 = YPPsym((P)"product-elts");
  lit_101 = YPPlist(1,YPPsym((P)"x"));
  lit_102 = YPPlist(1,YPPsym((P)"x"));
  T297 = YPfab_sig(YPPlist(1,VARREF(YLproductG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_230 = YPfab_met(FUNCODEREF(fun_230),T297,YPfalse,LITREF(lit_101),sloc(739),YPsb((P)"(fun ((x <product>) => <tup>) (%prop-elt x (%prop-offset <product> product-elts)))"));
  T296 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_231 = YPfab_met(FUNCODEREF(fun_231),T296,YPfalse,LITREF(lit_102),sloc(739),YPsb((P)"(fun (x) nul-prop)"));
  T303 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T302 = (P)YPsig(T303,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T301 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T302,LITREF(lit_100),Ynil,YPfalse);
  VARSET(Yproduct_elts,T301);
  T305 = fun_230;
  accessorF957 = T305;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yproduct_elts),accessorF957);
  xF958 = accessorF957;
  T304 = (P)YPprop_elt(xF958,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_100),T304);
  getterF959 = accessorF957;
  setterF960 = YPfalse;
  T300 = fun_231;
  T299 = (P)YPPprop(VARREF(YLproductG),VARREF(Yproduct_elts),YPfalse,VARREF(YLtupG),T300);
  propF961 = T299;
  (P)YPmet_env_setter(propF961,getterF959);
  T298 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLproductG),propF961);
  lit_103 = YPPsym((P)"prop-owner");
  lit_104 = YPPlist(1,YPPsym((P)"x"));
  lit_105 = YPPlist(1,YPPsym((P)"x"));
  T307 = YPfab_sig(YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPfab_met(FUNCODEREF(fun_232),T307,YPfalse,LITREF(lit_104),sloc(739),YPsb((P)"(fun ((x <prop>) => <any>) (%prop-elt x (%prop-offset <prop> prop-owner)))"));
  T306 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_233 = YPfab_met(FUNCODEREF(fun_233),T306,YPfalse,LITREF(lit_105),sloc(739),YPsb((P)"(fun (x) nul-prop)"));
  T313 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T312 = (P)YPsig(T313,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T311 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T312,LITREF(lit_103),Ynil,YPfalse);
  VARSET(Yprop_owner,T311);
  T315 = fun_232;
  accessorF962 = T315;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner),accessorF962);
  xF963 = accessorF962;
  T314 = (P)YPprop_elt(xF963,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_103),T314);
  getterF964 = accessorF962;
  setterF965 = YPfalse;
  T310 = fun_233;
  T309 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_owner),YPfalse,VARREF(YLanyG),T310);
  propF966 = T309;
  (P)YPmet_env_setter(propF966,getterF964);
  T308 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF966);
  lit_106 = YPPsym((P)"prop-getter");
  lit_107 = YPPlist(1,YPPsym((P)"x"));
  lit_108 = YPPlist(1,YPPsym((P)"x"));
  T317 = YPfab_sig(YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_234 = YPfab_met(FUNCODEREF(fun_234),T317,YPfalse,LITREF(lit_107),sloc(739),YPsb((P)"(fun ((x <prop>) => <fun>) (%prop-elt x (%prop-offset <prop> prop-getter)))"));
  T316 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_235 = YPfab_met(FUNCODEREF(fun_235),T316,YPfalse,LITREF(lit_108),sloc(739),YPsb((P)"(fun (x) nul-prop)"));
  T323 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T322 = (P)YPsig(T323,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T321 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T322,LITREF(lit_106),Ynil,YPfalse);
  VARSET(Yprop_getter,T321);
  T325 = fun_234;
  accessorF967 = T325;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter),accessorF967);
  xF968 = accessorF967;
  T324 = (P)YPprop_elt(xF968,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_106),T324);
  getterF969 = accessorF967;
  setterF970 = YPfalse;
  T320 = fun_235;
  T319 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_getter),YPfalse,VARREF(YLfunG),T320);
  propF971 = T319;
  (P)YPmet_env_setter(propF971,getterF969);
  T318 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF971);
  lit_109 = YPPsym((P)"prop-setter");
  lit_110 = YPPlist(1,YPPsym((P)"x"));
  lit_111 = YPPlist(1,YPPsym((P)"x"));
  T327 = YPfab_sig(YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_236 = YPfab_met(FUNCODEREF(fun_236),T327,YPfalse,LITREF(lit_110),sloc(739),YPsb((P)"(fun ((x <prop>) => <any>) (%prop-elt x (%prop-offset <prop> prop-setter)))"));
  T326 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_237 = YPfab_met(FUNCODEREF(fun_237),T326,YPfalse,LITREF(lit_111),sloc(739),YPsb((P)"(fun (x) nul-prop)"));
  T333 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T332 = (P)YPsig(T333,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T331 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T332,LITREF(lit_109),Ynil,YPfalse);
  VARSET(Yprop_setter,T331);
  T335 = fun_236;
  accessorF972 = T335;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter),accessorF972);
  xF973 = accessorF972;
  T334 = (P)YPprop_elt(xF973,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_109),T334);
  getterF974 = accessorF972;
  setterF975 = YPfalse;
  T330 = fun_237;
  T329 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_setter),YPfalse,VARREF(YLanyG),T330);
  propF976 = T329;
  (P)YPmet_env_setter(propF976,getterF974);
  T328 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF976);
  lit_112 = YPPsym((P)"prop-type");
  lit_113 = YPPlist(1,YPPsym((P)"x"));
  lit_114 = YPPlist(1,YPPsym((P)"x"));
  T337 = YPfab_sig(YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_238 = YPfab_met(FUNCODEREF(fun_238),T337,YPfalse,LITREF(lit_113),sloc(739),YPsb((P)"(fun ((x <prop>) => <type>) (%prop-elt x (%prop-offset <prop> prop-type)))"));
  T336 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_239 = YPfab_met(FUNCODEREF(fun_239),T336,YPfalse,LITREF(lit_114),sloc(739),YPsb((P)"(fun (x) nul-prop)"));
  T343 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T342 = (P)YPsig(T343,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T341 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T342,LITREF(lit_112),Ynil,YPfalse);
  VARSET(Yprop_type,T341);
  T345 = fun_238;
  accessorF977 = T345;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_type),accessorF977);
  xF978 = accessorF977;
  T344 = (P)YPprop_elt(xF978,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_112),T344);
  getterF979 = accessorF977;
  setterF980 = YPfalse;
  T340 = fun_239;
  T339 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_type),YPfalse,VARREF(YLtypeG),T340);
  propF981 = T339;
  (P)YPmet_env_setter(propF981,getterF979);
  T338 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF981);
  lit_115 = YPPsym((P)"prop-init");
  lit_116 = YPPlist(1,YPPsym((P)"x"));
  lit_117 = YPPlist(1,YPPsym((P)"x"));
  lit_118 = YPPlist(1,YPPsym((P)"x"));
  T348 = YPfab_sig(YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_240 = YPfab_met(FUNCODEREF(fun_240),T348,YPfalse,LITREF(lit_116),sloc(739),YPsb((P)"(fun ((x <prop>) => <fun>) (%prop-elt x (%prop-offset <prop> prop-init)))"));
  T347 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_241 = YPfab_met(FUNCODEREF(fun_241),T347,YPfalse,LITREF(lit_118),sloc(156),YPsb((P)"(fun (x) nul-prop)"));
  T346 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_242 = YPfab_met(FUNCODEREF(fun_242),T346,YPfalse,LITREF(lit_117),sloc(739),YPsb((P)"(fun (x) (fun (x) nul-prop))"));
  T354 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T353 = (P)YPsig(T354,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T352 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T353,LITREF(lit_115),Ynil,YPfalse);
  VARSET(Yprop_init,T352);
  T356 = fun_240;
  accessorF982 = T356;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_init),accessorF982);
  xF983 = accessorF982;
  T355 = (P)YPprop_elt(xF983,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_115),T355);
  getterF984 = accessorF982;
  setterF985 = YPfalse;
  T351 = fun_242;
  T350 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_init),YPfalse,VARREF(YLfunG),T351);
  propF986 = T350;
  (P)YPmet_env_setter(propF986,getterF984);
  T349 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF986);
  lit_119 = YPPsym((P)"gen-cache-missable?");
  lit_120 = YPPlist(1,YPPsym((P)"x"));
  lit_121 = YPPlist(1,YPPsym((P)"x"));
  T358 = YPfab_sig(YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_243 = YPfab_met(FUNCODEREF(fun_243),T358,YPfalse,LITREF(lit_120),sloc(739),YPsb((P)"(fun ((x <gen-cache>) => <log>) (%prop-elt x (%prop-offset <gen-cache> gen-cache-missable?)))"));
  T357 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_244 = YPfab_met(FUNCODEREF(fun_244),T357,YPfalse,LITREF(lit_121),sloc(739),YPsb((P)"(fun (x) #f)"));
  T364 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T363 = (P)YPsig(T364,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T362 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T363,LITREF(lit_119),Ynil,YPfalse);
  VARSET(Ygen_cache_missableQ,T362);
  T366 = fun_243;
  accessorF987 = T366;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ),accessorF987);
  xF988 = accessorF987;
  T365 = (P)YPprop_elt(xF988,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_119),T365);
  getterF989 = accessorF987;
  setterF990 = YPfalse;
  T361 = fun_244;
  T360 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ),YPfalse,VARREF(YLlogG),T361);
  propF991 = T360;
  (P)YPmet_env_setter(propF991,getterF989);
  T359 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF991);
  lit_122 = YPPsym((P)"gen-cache-arg-pos");
  lit_123 = YPPlist(1,YPPsym((P)"x"));
  lit_124 = YPPlist(1,YPPsym((P)"x"));
  T368 = YPfab_sig(YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_245 = YPfab_met(FUNCODEREF(fun_245),T368,YPfalse,LITREF(lit_123),sloc(739),YPsb((P)"(fun ((x <gen-cache>) => <fixnum>) (%prop-elt x (%prop-offset <gen-cache> gen-cache-arg-pos)))"));
  T367 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_246 = YPfab_met(FUNCODEREF(fun_246),T367,YPfalse,LITREF(lit_124),sloc(739),YPsb((P)"(fun (x) 0)"));
  T374 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T373 = (P)YPsig(T374,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T372 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T373,LITREF(lit_122),Ynil,YPfalse);
  VARSET(Ygen_cache_arg_pos,T372);
  T376 = fun_245;
  accessorF992 = T376;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos),accessorF992);
  xF993 = accessorF992;
  T375 = (P)YPprop_elt(xF993,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_122),T375);
  getterF994 = accessorF992;
  setterF995 = YPfalse;
  T371 = fun_246;
  T370 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos),YPfalse,VARREF(YLfixnumG),T371);
  propF996 = T370;
  (P)YPmet_env_setter(propF996,getterF994);
  T369 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF996);
  lit_125 = YPPsym((P)"gen-cache-singletons");
  lit_126 = YPPlist(1,YPPsym((P)"x"));
  lit_127 = YPPlist(1,YPPsym((P)"x"));
  T378 = YPfab_sig(YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_247 = YPfab_met(FUNCODEREF(fun_247),T378,YPfalse,LITREF(lit_126),sloc(739),YPsb((P)"(fun ((x <gen-cache>) => <lst>) (%prop-elt x (%prop-offset <gen-cache> gen-cache-singletons)))"));
  T377 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_248 = YPfab_met(FUNCODEREF(fun_248),T377,YPfalse,LITREF(lit_127),sloc(739),YPsb((P)"(fun (x) nil)"));
  T384 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T383 = (P)YPsig(T384,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T382 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T383,LITREF(lit_125),Ynil,YPfalse);
  VARSET(Ygen_cache_singletons,T382);
  T386 = fun_247;
  accessorF997 = T386;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons),accessorF997);
  xF998 = accessorF997;
  T385 = (P)YPprop_elt(xF998,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_125),T385);
  getterF999 = accessorF997;
  setterF1000 = YPfalse;
  T381 = fun_248;
  T380 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons),YPfalse,VARREF(YLlstG),T381);
  propF1001 = T380;
  (P)YPmet_env_setter(propF1001,getterF999);
  T379 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF1001);
  lit_128 = YPPsym((P)"gen-cache-classes");
  lit_129 = YPPlist(1,YPPsym((P)"x"));
  lit_130 = YPPlist(1,YPPsym((P)"x"));
  T388 = YPfab_sig(YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_249 = YPfab_met(FUNCODEREF(fun_249),T388,YPfalse,LITREF(lit_129),sloc(739),YPsb((P)"(fun ((x <gen-cache>) => <lst>) (%prop-elt x (%prop-offset <gen-cache> gen-cache-classes)))"));
  T387 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_250 = YPfab_met(FUNCODEREF(fun_250),T387,YPfalse,LITREF(lit_130),sloc(739),YPsb((P)"(fun (x) nil)"));
  T394 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T393 = (P)YPsig(T394,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T392 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T393,LITREF(lit_128),Ynil,YPfalse);
  VARSET(Ygen_cache_classes,T392);
  T396 = fun_249;
  accessorF1002 = T396;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes),accessorF1002);
  xF1003 = accessorF1002;
  T395 = (P)YPprop_elt(xF1003,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_128),T395);
  getterF1004 = accessorF1002;
  setterF1005 = YPfalse;
  T391 = fun_250;
  T390 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes),YPfalse,VARREF(YLlstG),T391);
  propF1006 = T390;
  (P)YPmet_env_setter(propF1006,getterF1004);
  T389 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF1006);
  lit_131 = YPPsym((P)"sig-specs");
  lit_132 = YPPlist(1,YPPsym((P)"x"));
  lit_133 = YPPsym((P)"sig-specs-setter");
  lit_134 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_135 = YPPlist(1,YPPsym((P)"x"));
  T399 = YPfab_sig(YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_251 = YPfab_met(FUNCODEREF(fun_251),T399,YPfalse,LITREF(lit_132),sloc(739),YPsb((P)"(fun ((x <sig>) => <lst>) (%prop-elt x (%prop-offset <sig> sig-specs)))"));
  T398 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_252 = YPfab_met(FUNCODEREF(fun_252),T398,YPfalse,LITREF(lit_134),sloc(739),YPsb((P)"(fun ((z <lst>) (x <sig>)) (set (%prop-elt x (%prop-offset <sig> sig-specs)) z))"));
  T397 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_253 = YPfab_met(FUNCODEREF(fun_253),T397,YPfalse,LITREF(lit_135),sloc(739),YPsb((P)"(fun (x) nil)"));
  T411 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T410 = (P)YPsig(T411,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T409 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T410,LITREF(lit_131),Ynil,YPfalse);
  VARSET(Ysig_specs,T409);
  T413 = fun_251;
  accessorF1007 = T413;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs),accessorF1007);
  xF1008 = accessorF1007;
  T412 = (P)YPprop_elt(xF1008,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_131),T412);
  getterF1009 = accessorF1007;
  T406 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T405 = (P)YPpair(VARREF(YLanyG),T406);
  T404 = (P)YPsig(T405,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T403 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T404,LITREF(lit_133),Ynil,YPfalse);
  VARSET(Ysig_specs_setter,T403);
  T408 = fun_252;
  accessorF1010 = T408;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs_setter),accessorF1010);
  xF1011 = accessorF1010;
  T407 = (P)YPprop_elt(xF1011,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_133),T407);
  setterF1012 = accessorF1010;
  T402 = fun_253;
  T401 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_specs),VARREF(Ysig_specs_setter),VARREF(YLlstG),T402);
  propF1013 = T401;
  (P)YPmet_env_setter(propF1013,getterF1009);
  (P)YPmet_env_setter(propF1013,setterF1012);
  T400 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF1013);
  lit_136 = YPPsym((P)"sig-nary?");
  lit_137 = YPPlist(1,YPPsym((P)"x"));
  lit_138 = YPPsym((P)"sig-nary?-setter");
  lit_139 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_140 = YPPlist(1,YPPsym((P)"x"));
  T416 = YPfab_sig(YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_254 = YPfab_met(FUNCODEREF(fun_254),T416,YPfalse,LITREF(lit_137),sloc(739),YPsb((P)"(fun ((x <sig>) => <log>) (%prop-elt x (%prop-offset <sig> sig-nary?)))"));
  T415 = YPfab_sig(YPPlist(2,VARREF(YLlogG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_255 = YPfab_met(FUNCODEREF(fun_255),T415,YPfalse,LITREF(lit_139),sloc(739),YPsb((P)"(fun ((z <log>) (x <sig>)) (set (%prop-elt x (%prop-offset <sig> sig-nary?)) z))"));
  T414 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_256 = YPfab_met(FUNCODEREF(fun_256),T414,YPfalse,LITREF(lit_140),sloc(739),YPsb((P)"(fun (x) %false)"));
  T428 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T427 = (P)YPsig(T428,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T426 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T427,LITREF(lit_136),Ynil,YPfalse);
  VARSET(Ysig_naryQ,T426);
  T430 = fun_254;
  accessorF1014 = T430;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ),accessorF1014);
  xF1015 = accessorF1014;
  T429 = (P)YPprop_elt(xF1015,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_136),T429);
  getterF1016 = accessorF1014;
  T423 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T422 = (P)YPpair(VARREF(YLanyG),T423);
  T421 = (P)YPsig(T422,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T420 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T421,LITREF(lit_138),Ynil,YPfalse);
  VARSET(Ysig_naryQ_setter,T420);
  T425 = fun_255;
  accessorF1017 = T425;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ_setter),accessorF1017);
  xF1018 = accessorF1017;
  T424 = (P)YPprop_elt(xF1018,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_138),T424);
  setterF1019 = accessorF1017;
  T419 = fun_256;
  T418 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_naryQ),VARREF(Ysig_naryQ_setter),VARREF(YLlogG),T419);
  propF1020 = T418;
  (P)YPmet_env_setter(propF1020,getterF1016);
  (P)YPmet_env_setter(propF1020,setterF1019);
  T417 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF1020);
  lit_141 = YPPsym((P)"sig-arity");
  lit_142 = YPPlist(1,YPPsym((P)"x"));
  lit_143 = YPPsym((P)"sig-arity-setter");
  lit_144 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_145 = YPPlist(1,YPPsym((P)"x"));
  T433 = YPfab_sig(YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_257 = YPfab_met(FUNCODEREF(fun_257),T433,YPfalse,LITREF(lit_142),sloc(739),YPsb((P)"(fun ((x <sig>) => <fixnum>) (%prop-elt x (%prop-offset <sig> sig-arity)))"));
  T432 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_258 = YPfab_met(FUNCODEREF(fun_258),T432,YPfalse,LITREF(lit_144),sloc(739),YPsb((P)"(fun ((z <fixnum>) (x <sig>)) (set (%prop-elt x (%prop-offset <sig> sig-arity)) z))"));
  T431 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_259 = YPfab_met(FUNCODEREF(fun_259),T431,YPfalse,LITREF(lit_145),sloc(739),YPsb((P)"(fun (x) 0)"));
  T445 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T444 = (P)YPsig(T445,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T443 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T444,LITREF(lit_141),Ynil,YPfalse);
  VARSET(Ysig_arity,T443);
  T447 = fun_257;
  accessorF1021 = T447;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity),accessorF1021);
  xF1022 = accessorF1021;
  T446 = (P)YPprop_elt(xF1022,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_141),T446);
  getterF1023 = accessorF1021;
  T440 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T439 = (P)YPpair(VARREF(YLanyG),T440);
  T438 = (P)YPsig(T439,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T437 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T438,LITREF(lit_143),Ynil,YPfalse);
  VARSET(Ysig_arity_setter,T437);
  T442 = fun_258;
  accessorF1024 = T442;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity_setter),accessorF1024);
  xF1025 = accessorF1024;
  T441 = (P)YPprop_elt(xF1025,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_143),T441);
  setterF1026 = accessorF1024;
  T436 = fun_259;
  T435 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_arity),VARREF(Ysig_arity_setter),VARREF(YLfixnumG),T436);
  propF1027 = T435;
  (P)YPmet_env_setter(propF1027,getterF1023);
  (P)YPmet_env_setter(propF1027,setterF1026);
  T434 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF1027);
  lit_146 = YPPsym((P)"sig-val");
  lit_147 = YPPlist(1,YPPsym((P)"x"));
  lit_148 = YPPsym((P)"sig-val-setter");
  lit_149 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_150 = YPPlist(1,YPPsym((P)"x"));
  T450 = YPfab_sig(YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_260 = YPfab_met(FUNCODEREF(fun_260),T450,YPfalse,LITREF(lit_147),sloc(739),YPsb((P)"(fun ((x <sig>) => <any>) (%prop-elt x (%prop-offset <sig> sig-val)))"));
  T449 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_261 = YPfab_met(FUNCODEREF(fun_261),T449,YPfalse,LITREF(lit_149),sloc(739),YPsb((P)"(fun ((z <any>) (x <sig>)) (set (%prop-elt x (%prop-offset <sig> sig-val)) z))"));
  T448 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_262 = YPfab_met(FUNCODEREF(fun_262),T448,YPfalse,LITREF(lit_150),sloc(739),YPsb((P)"(fun (x) <any>)"));
  T462 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T461 = (P)YPsig(T462,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T460 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T461,LITREF(lit_146),Ynil,YPfalse);
  VARSET(Ysig_val,T460);
  T464 = fun_260;
  accessorF1028 = T464;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_val),accessorF1028);
  xF1029 = accessorF1028;
  T463 = (P)YPprop_elt(xF1029,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_146),T463);
  getterF1030 = accessorF1028;
  T457 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T456 = (P)YPpair(VARREF(YLanyG),T457);
  T455 = (P)YPsig(T456,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T454 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T455,LITREF(lit_148),Ynil,YPfalse);
  VARSET(Ysig_val_setter,T454);
  T459 = fun_261;
  accessorF1031 = T459;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_val_setter),accessorF1031);
  xF1032 = accessorF1031;
  T458 = (P)YPprop_elt(xF1032,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_148),T458);
  setterF1033 = accessorF1031;
  T453 = fun_262;
  T452 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_val),VARREF(Ysig_val_setter),VARREF(YLanyG),T453);
  propF1034 = T452;
  (P)YPmet_env_setter(propF1034,getterF1030);
  (P)YPmet_env_setter(propF1034,setterF1033);
  T451 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF1034);
  lit_151 = YPPsym((P)"sig-unification-vars");
  lit_152 = YPPlist(1,YPPsym((P)"x"));
  lit_153 = YPPsym((P)"sig-unification-vars-setter");
  lit_154 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_155 = YPPlist(1,YPPsym((P)"x"));
  T467 = YPfab_sig(YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_263 = YPfab_met(FUNCODEREF(fun_263),T467,YPfalse,LITREF(lit_152),sloc(739),YPsb((P)"(fun ((x <sig>) => <lst>) (%prop-elt x (%prop-offset <sig> sig-unification-vars)))"));
  T466 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_264 = YPfab_met(FUNCODEREF(fun_264),T466,YPfalse,LITREF(lit_154),sloc(739),YPsb((P)"(fun ((z <lst>) (x <sig>)) (set (%prop-elt x (%prop-offset <sig> sig-unification-vars)) z))"));
  T465 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_265 = YPfab_met(FUNCODEREF(fun_265),T465,YPfalse,LITREF(lit_155),sloc(739),YPsb((P)"(fun (x) nil)"));
  T479 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T478 = (P)YPsig(T479,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T477 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T478,LITREF(lit_151),Ynil,YPfalse);
  VARSET(Ysig_unification_vars,T477);
  T481 = fun_263;
  accessorF1035 = T481;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars),accessorF1035);
  xF1036 = accessorF1035;
  T480 = (P)YPprop_elt(xF1036,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_151),T480);
  getterF1037 = accessorF1035;
  T474 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T473 = (P)YPpair(VARREF(YLanyG),T474);
  T472 = (P)YPsig(T473,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T471 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T472,LITREF(lit_153),Ynil,YPfalse);
  VARSET(Ysig_unification_vars_setter,T471);
  T476 = fun_264;
  accessorF1038 = T476;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars_setter),accessorF1038);
  xF1039 = accessorF1038;
  T475 = (P)YPprop_elt(xF1039,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_153),T475);
  setterF1040 = accessorF1038;
  T470 = fun_265;
  T469 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_unification_vars),VARREF(Ysig_unification_vars_setter),VARREF(YLlstG),T470);
  propF1041 = T469;
  (P)YPmet_env_setter(propF1041,getterF1037);
  (P)YPmet_env_setter(propF1041,setterF1040);
  T468 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF1041);
  lit_156 = YPPsym((P)"fun-info-name");
  lit_157 = YPPlist(1,YPPsym((P)"x"));
  lit_158 = YPPsym((P)"fun-info-name-setter");
  lit_159 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_160 = YPPlist(1,YPPsym((P)"x"));
  T484 = YPfab_sig(YPPlist(1,VARREF(YLfun_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_266 = YPfab_met(FUNCODEREF(fun_266),T484,YPfalse,LITREF(lit_157),sloc(739),YPsb((P)"(fun ((x <fun-info>) => <any>) (%prop-elt x (%prop-offset <fun-info> fun-info-name)))"));
  T483 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfun_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_267 = YPfab_met(FUNCODEREF(fun_267),T483,YPfalse,LITREF(lit_159),sloc(739),YPsb((P)"(fun ((z <any>) (x <fun-info>)) (set (%prop-elt x (%prop-offset <fun-info> fun-info-name)) z))"));
  T482 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_268 = YPfab_met(FUNCODEREF(fun_268),T482,YPfalse,LITREF(lit_160),sloc(739),YPsb((P)"(fun (x) %false)"));
  T496 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T495 = (P)YPsig(T496,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T494 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T495,LITREF(lit_156),Ynil,YPfalse);
  VARSET(Yfun_info_name,T494);
  T498 = fun_266;
  accessorF1042 = T498;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_name),accessorF1042);
  xF1043 = accessorF1042;
  T497 = (P)YPprop_elt(xF1043,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_156),T497);
  getterF1044 = accessorF1042;
  T491 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T490 = (P)YPpair(VARREF(YLanyG),T491);
  T489 = (P)YPsig(T490,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T488 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T489,LITREF(lit_158),Ynil,YPfalse);
  VARSET(Yfun_info_name_setter,T488);
  T493 = fun_267;
  accessorF1045 = T493;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_name_setter),accessorF1045);
  xF1046 = accessorF1045;
  T492 = (P)YPprop_elt(xF1046,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_158),T492);
  setterF1047 = accessorF1045;
  T487 = fun_268;
  T486 = (P)YPPprop(VARREF(YLfun_infoG),VARREF(Yfun_info_name),VARREF(Yfun_info_name_setter),VARREF(YLanyG),T487);
  propF1048 = T486;
  (P)YPmet_env_setter(propF1048,getterF1044);
  (P)YPmet_env_setter(propF1048,setterF1047);
  T485 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfun_infoG),propF1048);
  lit_161 = YPPsym((P)"fun-info-names");
  lit_162 = YPPlist(1,YPPsym((P)"x"));
  lit_163 = YPPsym((P)"fun-info-names-setter");
  lit_164 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_165 = YPPlist(1,YPPsym((P)"x"));
  T501 = YPfab_sig(YPPlist(1,VARREF(YLfun_infoG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_269 = YPfab_met(FUNCODEREF(fun_269),T501,YPfalse,LITREF(lit_162),sloc(739),YPsb((P)"(fun ((x <fun-info>) => <lst>) (%prop-elt x (%prop-offset <fun-info> fun-info-names)))"));
  T500 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfun_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_270 = YPfab_met(FUNCODEREF(fun_270),T500,YPfalse,LITREF(lit_164),sloc(739),YPsb((P)"(fun ((z <lst>) (x <fun-info>)) (set (%prop-elt x (%prop-offset <fun-info> fun-info-names)) z))"));
  T499 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_271 = YPfab_met(FUNCODEREF(fun_271),T499,YPfalse,LITREF(lit_165),sloc(739),YPsb((P)"(fun (x) nil)"));
  T513 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T512 = (P)YPsig(T513,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T511 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T512,LITREF(lit_161),Ynil,YPfalse);
  VARSET(Yfun_info_names,T511);
  T515 = fun_269;
  accessorF1049 = T515;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_names),accessorF1049);
  xF1050 = accessorF1049;
  T514 = (P)YPprop_elt(xF1050,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_161),T514);
  getterF1051 = accessorF1049;
  T508 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T507 = (P)YPpair(VARREF(YLanyG),T508);
  T506 = (P)YPsig(T507,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T505 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T506,LITREF(lit_163),Ynil,YPfalse);
  VARSET(Yfun_info_names_setter,T505);
  T510 = fun_270;
  accessorF1052 = T510;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_names_setter),accessorF1052);
  xF1053 = accessorF1052;
  T509 = (P)YPprop_elt(xF1053,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_163),T509);
  setterF1054 = accessorF1052;
  T504 = fun_271;
  T503 = (P)YPPprop(VARREF(YLfun_infoG),VARREF(Yfun_info_names),VARREF(Yfun_info_names_setter),VARREF(YLlstG),T504);
  propF1055 = T503;
  (P)YPmet_env_setter(propF1055,getterF1051);
  (P)YPmet_env_setter(propF1055,setterF1054);
  T502 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfun_infoG),propF1055);
  lit_166 = YPPsym((P)"fun-info-src-loc");
  lit_167 = YPPlist(1,YPPsym((P)"x"));
  lit_168 = YPPsym((P)"fun-info-src-loc-setter");
  lit_169 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_170 = YPPlist(1,YPPsym((P)"x"));
  T518 = YPfab_sig(YPPlist(1,VARREF(YLfun_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_272 = YPfab_met(FUNCODEREF(fun_272),T518,YPfalse,LITREF(lit_167),sloc(739),YPsb((P)"(fun ((x <fun-info>) => <any>) (%prop-elt x (%prop-offset <fun-info> fun-info-src-loc)))"));
  T517 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfun_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_273 = YPfab_met(FUNCODEREF(fun_273),T517,YPfalse,LITREF(lit_169),sloc(739),YPsb((P)"(fun ((z <any>) (x <fun-info>)) (set (%prop-elt x (%prop-offset <fun-info> fun-info-src-loc)) z))"));
  T516 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_274 = YPfab_met(FUNCODEREF(fun_274),T516,YPfalse,LITREF(lit_170),sloc(739),YPsb((P)"(fun (x) %false)"));
  T530 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T529 = (P)YPsig(T530,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T528 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T529,LITREF(lit_166),Ynil,YPfalse);
  VARSET(Yfun_info_src_loc,T528);
  T532 = fun_272;
  accessorF1056 = T532;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_src_loc),accessorF1056);
  xF1057 = accessorF1056;
  T531 = (P)YPprop_elt(xF1057,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_166),T531);
  getterF1058 = accessorF1056;
  T525 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T524 = (P)YPpair(VARREF(YLanyG),T525);
  T523 = (P)YPsig(T524,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T522 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T523,LITREF(lit_168),Ynil,YPfalse);
  VARSET(Yfun_info_src_loc_setter,T522);
  T527 = fun_273;
  accessorF1059 = T527;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_src_loc_setter),accessorF1059);
  xF1060 = accessorF1059;
  T526 = (P)YPprop_elt(xF1060,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_168),T526);
  setterF1061 = accessorF1059;
  T521 = fun_274;
  T520 = (P)YPPprop(VARREF(YLfun_infoG),VARREF(Yfun_info_src_loc),VARREF(Yfun_info_src_loc_setter),VARREF(YLanyG),T521);
  propF1062 = T520;
  (P)YPmet_env_setter(propF1062,getterF1058);
  (P)YPmet_env_setter(propF1062,setterF1061);
  T519 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfun_infoG),propF1062);
  lit_171 = YPPsym((P)"fun-info-src");
  lit_172 = YPPlist(1,YPPsym((P)"x"));
  lit_173 = YPPsym((P)"fun-info-src-setter");
  lit_174 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_175 = YPPlist(1,YPPsym((P)"x"));
  T539 = YPfab_sig(YPPlist(1,VARREF(YLfun_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T538 = fun_275 = YPfab_met(FUNCODEREF(fun_275),T539,YPfalse,LITREF(lit_172),sloc(739),YPsb((P)"(fun ((x <fun-info>) => <any>) (%prop-elt x (%prop-offset <fun-info> fun-info-src)))"));
  T537 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfun_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T536 = fun_276 = YPfab_met(FUNCODEREF(fun_276),T537,YPfalse,LITREF(lit_174),sloc(739),YPsb((P)"(fun ((z <any>) (x <fun-info>)) (set (%prop-elt x (%prop-offset <fun-info> fun-info-src)) z))"));
  T535 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T534 = fun_277 = YPfab_met(FUNCODEREF(fun_277),T535,YPfalse,LITREF(lit_175),sloc(739),YPsb((P)"(fun (x) %false)"));
  T551 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T550 = (P)YPsig(T551,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T549 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T550,LITREF(lit_171),Ynil,YPfalse);
  VARSET(Yfun_info_src,T549);
  T553 = fun_275;
  accessorF1063 = T553;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_src),accessorF1063);
  xF1064 = accessorF1063;
  T552 = (P)YPprop_elt(xF1064,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_171),T552);
  getterF1065 = accessorF1063;
  T546 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T545 = (P)YPpair(VARREF(YLanyG),T546);
  T544 = (P)YPsig(T545,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T543 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T544,LITREF(lit_173),Ynil,YPfalse);
  VARSET(Yfun_info_src_setter,T543);
  T548 = fun_276;
  accessorF1066 = T548;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_src_setter),accessorF1066);
  xF1067 = accessorF1066;
  T547 = (P)YPprop_elt(xF1067,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_173),T547);
  setterF1068 = accessorF1066;
  T542 = fun_277;
  T541 = (P)YPPprop(VARREF(YLfun_infoG),VARREF(Yfun_info_src),VARREF(Yfun_info_src_setter),VARREF(YLanyG),T542);
  propF1069 = T541;
  (P)YPmet_env_setter(propF1069,getterF1065);
  (P)YPmet_env_setter(propF1069,setterF1068);
  T540 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfun_infoG),propF1069);
  T533 = T540;
  return T533;
}

P Y___main_11___() {
  P propF1127;
  P setterF1126;
  P getterF1125;
  P xF1124;
  P accessorF1123;
  P propF1122;
  P setterF1121;
  P getterF1120;
  P xF1119;
  P accessorF1118;
  P propF1117;
  P setterF1116;
  P getterF1115;
  P xF1114;
  P accessorF1113;
  P propF1112;
  P setterF1111;
  P getterF1110;
  P xF1109;
  P accessorF1108;
  P propF1107;
  P setterF1106;
  P xF1105;
  P accessorF1104;
  P getterF1103;
  P xF1102;
  P accessorF1101;
  P propF1100;
  P setterF1099;
  P getterF1098;
  P xF1097;
  P accessorF1096;
  P propF1095;
  P setterF1094;
  P xF1093;
  P accessorF1092;
  P getterF1091;
  P xF1090;
  P accessorF1089;
  P propF1088;
  P setterF1087;
  P xF1086;
  P accessorF1085;
  P getterF1084;
  P xF1083;
  P accessorF1082;
  P propF1081;
  P setterF1080;
  P getterF1079;
  P xF1078;
  P accessorF1077;
  P propF1076;
  P setterF1075;
  P xF1074;
  P accessorF1073;
  P getterF1072;
  P xF1071;
  P accessorF1070;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133;
DEFCREGS();
  lit_176 = YPPsym((P)"fun-info-count");
  lit_177 = YPPlist(1,YPPsym((P)"x"));
  lit_178 = YPPsym((P)"fun-info-count-setter");
  lit_179 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_180 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YLfun_infoG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_278 = YPfab_met(FUNCODEREF(fun_278),T2,YPfalse,LITREF(lit_177),sloc(739),YPsb((P)"(fun ((x <fun-info>) => <int>) (%prop-elt x (%prop-offset <fun-info> fun-info-count)))"));
  T1 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLfun_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_279 = YPfab_met(FUNCODEREF(fun_279),T1,YPfalse,LITREF(lit_179),sloc(739),YPsb((P)"(fun ((z <int>) (x <fun-info>)) (set (%prop-elt x (%prop-offset <fun-info> fun-info-count)) z))"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_280 = YPfab_met(FUNCODEREF(fun_280),T0,YPfalse,LITREF(lit_180),sloc(739),YPsb((P)"(fun (x) 0)"));
  T14 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T13 = (P)YPsig(T14,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T12 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T13,LITREF(lit_176),Ynil,YPfalse);
  VARSET(Yfun_info_count,T12);
  T16 = fun_278;
  accessorF1070 = T16;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_count),accessorF1070);
  xF1071 = accessorF1070;
  T15 = (P)YPprop_elt(xF1071,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_176),T15);
  getterF1072 = accessorF1070;
  T9 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T8 = (P)YPpair(VARREF(YLanyG),T9);
  T7 = (P)YPsig(T8,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T6 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T7,LITREF(lit_178),Ynil,YPfalse);
  VARSET(Yfun_info_count_setter,T6);
  T11 = fun_279;
  accessorF1073 = T11;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_count_setter),accessorF1073);
  xF1074 = accessorF1073;
  T10 = (P)YPprop_elt(xF1074,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_178),T10);
  setterF1075 = accessorF1073;
  T5 = fun_280;
  T4 = (P)YPPprop(VARREF(YLfun_infoG),VARREF(Yfun_info_count),VARREF(Yfun_info_count_setter),VARREF(YLintG),T5);
  propF1076 = T4;
  (P)YPmet_env_setter(propF1076,getterF1072);
  (P)YPmet_env_setter(propF1076,setterF1075);
  T3 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfun_infoG),propF1076);
  lit_181 = YPPsym((P)"fun-code");
  lit_182 = YPPlist(1,YPPsym((P)"x"));
  lit_183 = YPPlist(1,YPPsym((P)"x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_281 = YPfab_met(FUNCODEREF(fun_281),T18,YPfalse,LITREF(lit_182),sloc(739),YPsb((P)"(fun ((x <fun>) => <any>) (%prop-elt x (%prop-offset <fun> fun-code)))"));
  T17 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_282 = YPfab_met(FUNCODEREF(fun_282),T17,YPfalse,LITREF(lit_183),sloc(739),YPsb((P)"(fun (x) %false)"));
  T24 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T23 = (P)YPsig(T24,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T22 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T23,LITREF(lit_181),Ynil,YPfalse);
  VARSET(Yfun_code,T22);
  T26 = fun_281;
  accessorF1077 = T26;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_code),accessorF1077);
  xF1078 = accessorF1077;
  T25 = (P)YPprop_elt(xF1078,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_181),T25);
  getterF1079 = accessorF1077;
  setterF1080 = YPfalse;
  T21 = fun_282;
  T20 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_code),YPfalse,VARREF(YLanyG),T21);
  propF1081 = T20;
  (P)YPmet_env_setter(propF1081,getterF1079);
  T19 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF1081);
  lit_184 = YPPsym((P)"fun-sig");
  lit_185 = YPPlist(1,YPPsym((P)"x"));
  lit_186 = YPPsym((P)"fun-sig-setter");
  lit_187 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_188 = YPPlist(1,YPPsym((P)"x"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLsigG),Ynil);
  fun_283 = YPfab_met(FUNCODEREF(fun_283),T29,YPfalse,LITREF(lit_185),sloc(739),YPsb((P)"(fun ((x <fun>) => <sig>) (%prop-elt x (%prop-offset <fun> fun-sig)))"));
  T28 = YPfab_sig(YPPlist(2,VARREF(YLsigG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_284 = YPfab_met(FUNCODEREF(fun_284),T28,YPfalse,LITREF(lit_187),sloc(739),YPsb((P)"(fun ((z <sig>) (x <fun>)) (set (%prop-elt x (%prop-offset <fun> fun-sig)) z))"));
  T27 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_285 = YPfab_met(FUNCODEREF(fun_285),T27,YPfalse,LITREF(lit_188),sloc(739),YPsb((P)"(fun (x) nul-prop)"));
  T41 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T40 = (P)YPsig(T41,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T39 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T40,LITREF(lit_184),Ynil,YPfalse);
  VARSET(Yfun_sig,T39);
  T43 = fun_283;
  accessorF1082 = T43;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig),accessorF1082);
  xF1083 = accessorF1082;
  T42 = (P)YPprop_elt(xF1083,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_184),T42);
  getterF1084 = accessorF1082;
  T36 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T35 = (P)YPpair(VARREF(YLanyG),T36);
  T34 = (P)YPsig(T35,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T33 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T34,LITREF(lit_186),Ynil,YPfalse);
  VARSET(Yfun_sig_setter,T33);
  T38 = fun_284;
  accessorF1085 = T38;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig_setter),accessorF1085);
  xF1086 = accessorF1085;
  T37 = (P)YPprop_elt(xF1086,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_186),T37);
  setterF1087 = accessorF1085;
  T32 = fun_285;
  T31 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_sig),VARREF(Yfun_sig_setter),VARREF(YLsigG),T32);
  propF1088 = T31;
  (P)YPmet_env_setter(propF1088,getterF1084);
  (P)YPmet_env_setter(propF1088,setterF1087);
  T30 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF1088);
  lit_189 = YPPsym((P)"fun-info");
  lit_190 = YPPlist(1,YPPsym((P)"x"));
  lit_191 = YPPsym((P)"fun-info-setter");
  lit_192 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_193 = YPPlist(1,YPPsym((P)"x"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_286 = YPfab_met(FUNCODEREF(fun_286),T46,YPfalse,LITREF(lit_190),sloc(739),YPsb((P)"(fun ((x <fun>) => <any>) (%prop-elt x (%prop-offset <fun> fun-info)))"));
  T45 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_287 = YPfab_met(FUNCODEREF(fun_287),T45,YPfalse,LITREF(lit_192),sloc(739),YPsb((P)"(fun ((z <any>) (x <fun>)) (set (%prop-elt x (%prop-offset <fun> fun-info)) z))"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_288 = YPfab_met(FUNCODEREF(fun_288),T44,YPfalse,LITREF(lit_193),sloc(739),YPsb((P)"(fun (x) %false)"));
  T58 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T57 = (P)YPsig(T58,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T56 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T57,LITREF(lit_189),Ynil,YPfalse);
  VARSET(Yfun_info,T56);
  T60 = fun_286;
  accessorF1089 = T60;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info),accessorF1089);
  xF1090 = accessorF1089;
  T59 = (P)YPprop_elt(xF1090,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_189),T59);
  getterF1091 = accessorF1089;
  T53 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T52 = (P)YPpair(VARREF(YLanyG),T53);
  T51 = (P)YPsig(T52,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T50 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T51,LITREF(lit_191),Ynil,YPfalse);
  VARSET(Yfun_info_setter,T50);
  T55 = fun_287;
  accessorF1092 = T55;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_setter),accessorF1092);
  xF1093 = accessorF1092;
  T54 = (P)YPprop_elt(xF1093,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_191),T54);
  setterF1094 = accessorF1092;
  T49 = fun_288;
  T48 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_info),VARREF(Yfun_info_setter),VARREF(YLanyG),T49);
  propF1095 = T48;
  (P)YPmet_env_setter(propF1095,getterF1091);
  (P)YPmet_env_setter(propF1095,setterF1094);
  T47 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF1095);
  lit_194 = YPPsym((P)"fun-env");
  lit_195 = YPPlist(1,YPPsym((P)"x"));
  lit_196 = YPPlist(1,YPPsym((P)"x"));
  T62 = YPfab_sig(YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_289 = YPfab_met(FUNCODEREF(fun_289),T62,YPfalse,LITREF(lit_195),sloc(739),YPsb((P)"(fun ((x <met>) => <any>) (%prop-elt x (%prop-offset <met> fun-env)))"));
  T61 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_290 = YPfab_met(FUNCODEREF(fun_290),T61,YPfalse,LITREF(lit_196),sloc(739),YPsb((P)"(fun (x) %false)"));
  T68 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T67 = (P)YPsig(T68,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T66 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T67,LITREF(lit_194),Ynil,YPfalse);
  VARSET(Yfun_env,T66);
  T70 = fun_289;
  accessorF1096 = T70;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_env),accessorF1096);
  xF1097 = accessorF1096;
  T69 = (P)YPprop_elt(xF1097,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_194),T69);
  getterF1098 = accessorF1096;
  setterF1099 = YPfalse;
  T65 = fun_290;
  T64 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_env),YPfalse,VARREF(YLanyG),T65);
  propF1100 = T64;
  (P)YPmet_env_setter(propF1100,getterF1098);
  T63 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF1100);
  lit_197 = YPPsym((P)"fun-mets");
  lit_198 = YPPlist(1,YPPsym((P)"x"));
  lit_199 = YPPsym((P)"fun-mets-setter");
  lit_200 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_201 = YPPlist(1,YPPsym((P)"x"));
  T73 = YPfab_sig(YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_291 = YPfab_met(FUNCODEREF(fun_291),T73,YPfalse,LITREF(lit_198),sloc(739),YPsb((P)"(fun ((x <gen>) => <lst>) (%prop-elt x (%prop-offset <gen> fun-mets)))"));
  T72 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_292 = YPfab_met(FUNCODEREF(fun_292),T72,YPfalse,LITREF(lit_200),sloc(739),YPsb((P)"(fun ((z <lst>) (x <gen>)) (set (%prop-elt x (%prop-offset <gen> fun-mets)) z))"));
  T71 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_293 = YPfab_met(FUNCODEREF(fun_293),T71,YPfalse,LITREF(lit_201),sloc(739),YPsb((P)"(fun (x) nil)"));
  T85 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T84 = (P)YPsig(T85,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T83 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T84,LITREF(lit_197),Ynil,YPfalse);
  VARSET(Yfun_mets,T83);
  T87 = fun_291;
  accessorF1101 = T87;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets),accessorF1101);
  xF1102 = accessorF1101;
  T86 = (P)YPprop_elt(xF1102,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_197),T86);
  getterF1103 = accessorF1101;
  T80 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T79 = (P)YPpair(VARREF(YLanyG),T80);
  T78 = (P)YPsig(T79,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T77 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T78,LITREF(lit_199),Ynil,YPfalse);
  VARSET(Yfun_mets_setter,T77);
  T82 = fun_292;
  accessorF1104 = T82;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets_setter),accessorF1104);
  xF1105 = accessorF1104;
  T81 = (P)YPprop_elt(xF1105,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_199),T81);
  setterF1106 = accessorF1104;
  T76 = fun_293;
  T75 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_mets),VARREF(Yfun_mets_setter),VARREF(YLlstG),T76);
  propF1107 = T75;
  (P)YPmet_env_setter(propF1107,getterF1103);
  (P)YPmet_env_setter(propF1107,setterF1106);
  T74 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF1107);
  lit_202 = YPPsym((P)"fun-cache");
  lit_203 = YPPlist(1,YPPsym((P)"x"));
  lit_204 = YPPlist(1,YPPsym((P)"x"));
  T89 = YPfab_sig(YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_294 = YPfab_met(FUNCODEREF(fun_294),T89,YPfalse,LITREF(lit_203),sloc(739),YPsb((P)"(fun ((x <gen>) => <any>) (%prop-elt x (%prop-offset <gen> fun-cache)))"));
  T88 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_295 = YPfab_met(FUNCODEREF(fun_295),T88,YPfalse,LITREF(lit_204),sloc(739),YPsb((P)"(fun (x) %false)"));
  T95 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T94 = (P)YPsig(T95,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T93 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T94,LITREF(lit_202),Ynil,YPfalse);
  VARSET(Yfun_cache,T93);
  T97 = fun_294;
  accessorF1108 = T97;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache),accessorF1108);
  xF1109 = accessorF1108;
  T96 = (P)YPprop_elt(xF1109,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_202),T96);
  getterF1110 = accessorF1108;
  setterF1111 = YPfalse;
  T92 = fun_295;
  T91 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_cache),YPfalse,VARREF(YLanyG),T92);
  propF1112 = T91;
  (P)YPmet_env_setter(propF1112,getterF1110);
  T90 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF1112);
  lit_205 = YPPsym((P)"opts-location");
  lit_206 = YPPlist(1,YPPsym((P)"x"));
  lit_207 = YPPlist(1,YPPsym((P)"x"));
  T99 = YPfab_sig(YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLlocG),Ynil);
  fun_296 = YPfab_met(FUNCODEREF(fun_296),T99,YPfalse,LITREF(lit_206),sloc(739),YPsb((P)"(fun ((x <opts>) => <loc>) (%prop-elt x (%prop-offset <opts> opts-location)))"));
  T98 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_297 = YPfab_met(FUNCODEREF(fun_297),T98,YPfalse,LITREF(lit_207),sloc(739),YPsb((P)"(fun (x) 0)"));
  T105 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T104 = (P)YPsig(T105,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T103 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T104,LITREF(lit_205),Ynil,YPfalse);
  VARSET(Yopts_location,T103);
  T107 = fun_296;
  accessorF1113 = T107;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_location),accessorF1113);
  xF1114 = accessorF1113;
  T106 = (P)YPprop_elt(xF1114,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_205),T106);
  getterF1115 = accessorF1113;
  setterF1116 = YPfalse;
  T102 = fun_297;
  T101 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_location),YPfalse,VARREF(YLlocG),T102);
  propF1117 = T101;
  (P)YPmet_env_setter(propF1117,getterF1115);
  T100 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF1117);
  lit_208 = YPPsym((P)"opts-count");
  lit_209 = YPPlist(1,YPPsym((P)"x"));
  lit_210 = YPPlist(1,YPPsym((P)"x"));
  T109 = YPfab_sig(YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_298 = YPfab_met(FUNCODEREF(fun_298),T109,YPfalse,LITREF(lit_209),sloc(739),YPsb((P)"(fun ((x <opts>) => <fixnum>) (%prop-elt x (%prop-offset <opts> opts-count)))"));
  T108 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_299 = YPfab_met(FUNCODEREF(fun_299),T108,YPfalse,LITREF(lit_210),sloc(739),YPsb((P)"(fun (x) 0)"));
  T115 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T114 = (P)YPsig(T115,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T113 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T114,LITREF(lit_208),Ynil,YPfalse);
  VARSET(Yopts_count,T113);
  T117 = fun_298;
  accessorF1118 = T117;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_count),accessorF1118);
  xF1119 = accessorF1118;
  T116 = (P)YPprop_elt(xF1119,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_208),T116);
  getterF1120 = accessorF1118;
  setterF1121 = YPfalse;
  T112 = fun_299;
  T111 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_count),YPfalse,VARREF(YLfixnumG),T112);
  propF1122 = T111;
  (P)YPmet_env_setter(propF1122,getterF1120);
  T110 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF1122);
  lit_211 = YPPsym((P)"opts-tup-storage");
  lit_212 = YPPlist(1,YPPsym((P)"x"));
  lit_213 = YPPlist(1,YPPsym((P)"x"));
  T119 = YPfab_sig(YPPlist(1,VARREF(YLopts_tupG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_300 = YPfab_met(FUNCODEREF(fun_300),T119,YPfalse,LITREF(lit_212),sloc(739),YPsb((P)"(fun ((x <opts-tup>) => <tup>) (%prop-elt x (%prop-offset <opts-tup> opts-tup-storage)))"));
  T118 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_301 = YPfab_met(FUNCODEREF(fun_301),T118,YPfalse,LITREF(lit_213),sloc(739),YPsb((P)"(fun (x) nul)"));
  T125 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T124 = (P)YPsig(T125,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T123 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T124,LITREF(lit_211),Ynil,YPfalse);
  VARSET(Yopts_tup_storage,T123);
  T127 = fun_300;
  accessorF1123 = T127;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_tup_storage),accessorF1123);
  xF1124 = accessorF1123;
  T126 = (P)YPprop_elt(xF1124,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_211),T126);
  getterF1125 = accessorF1123;
  setterF1126 = YPfalse;
  T122 = fun_301;
  T121 = (P)YPPprop(VARREF(YLopts_tupG),VARREF(Yopts_tup_storage),YPfalse,VARREF(YLtupG),T122);
  propF1127 = T121;
  (P)YPmet_env_setter(propF1127,getterF1125);
  T120 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLopts_tupG),propF1127);
  lit_214 = YPPsym((P)"%collect-direct-props");
  lit_215 = YPPlist(1,YPPsym((P)"class"));
  T128 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPcollect_direct_props = YPfab_met(FUNCODEREF(YPcollect_direct_props),T128,LITREF(lit_214),LITREF(lit_215),sloc(747),YPsb((P)"(fun (class) (def parent (%head (%class-parents class))) (%cat2 (%class-props parent) (%class-direct-props class)))"));
  T129 = YPcollect_direct_props;
  VARSET(YPcollect_direct_props,T129);
  lit_216 = YPPsym((P)"%finalize-props!");
  lit_217 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"class"));
  T130 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPfinalize_propsX = YPfab_met(FUNCODEREF(YPfinalize_propsX),T130,LITREF(lit_216),LITREF(lit_217),sloc(751),YPsb((P)"(fun (name class) (set (%class-name class) name) (set (%class-direct-props class) (%rev! (%class-direct-props class))) (set (%class-props class) (%collect-direct-props class)) (set (%class-prop-len class) (%ib (%%len (%class-props class)))) class)"));
  T131 = YPfinalize_propsX;
  VARSET(YPfinalize_propsX,T131);
  lit_218 = YPPsym((P)"<any>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_218),VARREF(YLanyG));
  lit_219 = YPPsym((P)"<log>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_219),VARREF(YLlogG));
  lit_220 = YPPsym((P)"<box>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_220),VARREF(YLboxG));
  lit_221 = YPPsym((P)"<mag>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_221),VARREF(YLmagG));
  lit_222 = YPPsym((P)"<chr>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_222),VARREF(YLchrG));
  lit_223 = YPPsym((P)"<src-loc>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_223),VARREF(YLsrc_locG));
  lit_224 = YPPsym((P)"<num>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_224),VARREF(YLnumG));
  lit_225 = YPPsym((P)"<int>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_225),VARREF(YLintG));
  lit_226 = YPPsym((P)"<fixnum>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_226),VARREF(YLfixnumG));
  lit_227 = YPPsym((P)"<flo>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_227),VARREF(YLfloG));
  lit_228 = YPPsym((P)"<loc>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_228),VARREF(YLlocG));
  lit_229 = YPPsym((P)"<rep>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_229),VARREF(YLrepG));
  lit_230 = YPPsym((P)"<col>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_230),VARREF(YLcolG));
  lit_231 = YPPsym((P)"<col.>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_231),VARREF(YLcolIG));
  lit_232 = YPPsym((P)"<col!>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_232),VARREF(YLcolXG));
  lit_233 = YPPsym((P)"<seq>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_233),VARREF(YLseqG));
  lit_234 = YPPsym((P)"<seq.>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_234),VARREF(YLseqIG));
  lit_235 = YPPsym((P)"<seq!>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_235),VARREF(YLseqXG));
  lit_236 = YPPsym((P)"<lst>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_236),VARREF(YLlstG));
  lit_237 = YPPsym((P)"<flat>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_237),VARREF(YLflatG));
  lit_238 = YPPsym((P)"<tup>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_238),VARREF(YLtupG));
  lit_239 = YPPsym((P)"<str>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_239),VARREF(YLstrG));
  lit_240 = YPPsym((P)"<sym>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_240),VARREF(YLsymG));
  lit_241 = YPPsym((P)"<type>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_241),VARREF(YLtypeG));
  lit_242 = YPPsym((P)"<class>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_242),VARREF(YLclassG));
  lit_243 = YPPsym((P)"<singleton>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_243),VARREF(YLsingletonG));
  lit_244 = YPPsym((P)"<subclass>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_244),VARREF(YLsubclassG));
  lit_245 = YPPsym((P)"<union>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_245),VARREF(YLunionG));
  lit_246 = YPPsym((P)"<product>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_246),VARREF(YLproductG));
  lit_247 = YPPsym((P)"<prop>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_247),VARREF(YLpropG));
  lit_248 = YPPsym((P)"<gen-cache>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_248),VARREF(YLgen_cacheG));
  lit_249 = YPPsym((P)"<sig>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_249),VARREF(YLsigG));
  lit_250 = YPPsym((P)"<fun-info>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_250),VARREF(YLfun_infoG));
  lit_251 = YPPsym((P)"<fun>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_251),VARREF(YLfunG));
  lit_252 = YPPsym((P)"<met>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_252),VARREF(YLmetG));
  lit_253 = YPPsym((P)"<gen>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_253),VARREF(YLgenG));
  lit_254 = YPPsym((P)"<opts>");
  T133 = XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_254),VARREF(YLoptsG));
  T132 = T133;
  return T132;
}

P Y___main_12___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61;
DEFCREGS();
  lit_255 = YPPsym((P)"<opts-tup>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_255),VARREF(YLopts_tupG));
  lit_256 = YPPsym((P)"@@==");
  lit_257 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOOEE = YPfab_met(FUNCODEREF(YOOEE),T0,LITREF(lit_256),LITREF(lit_257),sloc(793),YPsb((P)"(fun ((x <any>) (y <any>) => <log>) (%bb (%eq? x y)))"));
  T1 = YOOEE;
  VARSET(YOOEE,T1);
  lit_258 = YPPsym((P)"not");
  lit_259 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  Ynot = YPfab_met(FUNCODEREF(Ynot),T2,LITREF(lit_258),LITREF(lit_259),sloc(795),YPsb((P)"(fun ((x <any>) => <log>) (%bb (%eq? x #f)))"));
  T3 = Ynot;
  VARSET(Ynot,T3);
  lit_260 = YPPsym((P)"@@nul?");
  lit_261 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOOnulQ = YPfab_met(FUNCODEREF(YOOnulQ),T4,LITREF(lit_260),LITREF(lit_261),sloc(801),YPsb((P)"(fun ((x <lst>) => <log>) (%nul? x))"));
  T5 = YOOnulQ;
  VARSET(YOOnulQ,T5);
  lit_262 = YPPsym((P)"@rev!");
  lit_263 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrevX = YPfab_met(FUNCODEREF(YOrevX),T6,LITREF(lit_262),LITREF(lit_263),sloc(803),YPsb((P)"(fun ((x <lst>) => <lst>) (%rev! x))"));
  T7 = YOrevX;
  VARSET(YOrevX,T7);
  lit_264 = YPPsym((P)"@all?");
  lit_265 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T8 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOallQ = YPfab_met(FUNCODEREF(YOallQ),T8,LITREF(lit_264),LITREF(lit_265),sloc(813),YPsb((P)"(fun ((test <fun>) (c <lst>) => <log>) (rep fnd ((p c)) (if (@nul? p) #t (if (test (@head p)) (fnd (@tail p)) #f))))"));
  T9 = YOallQ;
  VARSET(YOallQ,T9);
  lit_266 = YPPsym((P)"@all2?");
  lit_267 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T10 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOall2Q = YPfab_met(FUNCODEREF(YOall2Q),T10,LITREF(lit_266),LITREF(lit_267),sloc(817),YPsb((P)"(fun ((test <fun>) (x <lst>) (y <lst>) => <log>) (rep fnd ((px x) (py y)) (if (@nul? px) (@nul? py) (if (@nul? py) #f (if (test (@head px) (@head py)) (fnd (@tail px) (@tail py)) #f)))))"));
  T11 = YOall2Q;
  VARSET(YOall2Q,T11);
  lit_268 = YPPsym((P)"@elt");
  lit_269 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOelt = YPfab_met(FUNCODEREF(YOelt),T12,LITREF(lit_268),LITREF(lit_269),sloc(827),YPsb((P)"(fun ((x <lst>) (key <fixnum>) => <any>) (rep fnd (((count <fixnum>) 0) ((x <lst>) x)) (if (@== x '()) nul (if (@= count key) (@head x) (fnd (@+ count 1) (@tail x))))))"));
  T13 = YOelt;
  VARSET(YOelt,T13);
  lit_270 = YPPsym((P)"@fill");
  lit_271 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"f"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfill = YPfab_met(FUNCODEREF(YOfill),T14,LITREF(lit_270),LITREF(lit_271),sloc(833),YPsb((P)"(fun ((x <lst>) (f <fun>) => <lst>) (rep loop ((p x)) (if (@nul? p) x (seq (set (@head p) f) (loop (@tail p))))))"));
  T15 = YOfill;
  VARSET(YOfill,T15);
  lit_272 = YPPsym((P)"@any?");
  lit_273 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOanyQ = YPfab_met(FUNCODEREF(YOanyQ),T16,LITREF(lit_272),LITREF(lit_273),sloc(837),YPsb((P)"(fun ((test <fun>) (c <lst>) => <any>) (rep fnd ((p c)) (if (@nul? p) #f (or (test (@head p)) (fnd (@tail p))))))"));
  T17 = YOanyQ;
  VARSET(YOanyQ,T17);
  lit_274 = YPPsym((P)"fab-pair");
  lit_275 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T18 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  Yfab_pair = YPfab_met(FUNCODEREF(Yfab_pair),T18,LITREF(lit_274),LITREF(lit_275),sloc(842),YPsb((P)"(fun ((h <any>) (t <lst>) => <lst>) (%pair h t))"));
  T19 = Yfab_pair;
  VARSET(Yfab_pair,T19);
  lit_276 = YPPsym((P)"@map");
  lit_277 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T20 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmap = YPfab_met(FUNCODEREF(YOmap),T20,LITREF(lit_276),LITREF(lit_277),sloc(849),YPsb((P)"(fun ((f <fun>) (x <lst>) => <lst>) (rep do ((x x) (res '())) (if (@nul? x) (@rev! res) (do (@tail x) (@pair (f (@head x)) res)))))"));
  T21 = YOmap;
  VARSET(YOmap,T21);
  lit_278 = YPPsym((P)"@pick");
  lit_279 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOpick = YPfab_met(FUNCODEREF(YOpick),T22,LITREF(lit_278),LITREF(lit_279),sloc(855),YPsb((P)"(fun ((f <fun>) (x <lst>) => <lst>) (rep do ((x x) (res '())) (if (@nul? x) (@rev! res) (let ((h (@head x))) (do (@tail x) (if (f h) (@pair h res) res))))))"));
  T23 = YOpick;
  VARSET(YOpick,T23);
  lit_280 = YPPsym((P)"@do");
  lit_281 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo = YPfab_met(FUNCODEREF(YOdo),T24,LITREF(lit_280),LITREF(lit_281),sloc(861),YPsb((P)"(fun ((f <fun>) (x <lst>)) (rep do ((x x)) (if (@nul? x) #f (seq (f (@head x)) (do (@tail x))))))"));
  T25 = YOdo;
  VARSET(YOdo,T25);
  lit_282 = YPPsym((P)"@alter");
  lit_283 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOalter = YPfab_met(FUNCODEREF(YOalter),T26,LITREF(lit_282),LITREF(lit_283),sloc(867),YPsb((P)"(fun ((dst <lst>) (src <lst>) => <lst>) (rep in ((ds dst) (ss src)) (if (or (@nul? ds) (@nul? ss)) dst (seq (set (@head ds) (@head ss)) (in (@tail ds) (@tail ss))))))"));
  T27 = YOalter;
  VARSET(YOalter,T27);
  lit_284 = YPPsym((P)"@fab");
  lit_285 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T28 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfab = YPfab_met(FUNCODEREF(YOfab),T28,LITREF(lit_284),LITREF(lit_285),sloc(874),YPsb((P)"(fun ((x <lst>) (s <fixnum>) => <lst>) (rep fab (((i <fixnum>) s) ((res <lst>) '())) (if (@< i 0) res (fab (@+ i -1) (@pair nul res)))))"));
  T29 = YOfab;
  VARSET(YOfab,T29);
  lit_286 = YPPsym((P)"@fold");
  lit_287 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"c"));
  T30 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  YOfold = YPfab_met(FUNCODEREF(YOfold),T30,LITREF(lit_286),LITREF(lit_287),sloc(878),YPsb((P)"(fun ((combine <fun>) (init <any>) (c <lst>) => <lst>) (rep red ((res init) (c c)) (if (@nul? c) res (red (combine res (@head c)) (@tail c)))))"));
  T31 = YOfold;
  VARSET(YOfold,T31);
  lit_288 = YPPsym((P)"@rev");
  lit_289 = YPPlist(1,YPPsym((P)"x"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrev = YPfab_met(FUNCODEREF(YOrev),T32,LITREF(lit_288),LITREF(lit_289),sloc(884),YPsb((P)"(fun ((x <lst>) => <lst>) (rep loop ((l x) (r '())) (if (@nul? l) r (loop (@tail l) (@pair (@head l) r)))))"));
  T33 = YOrev;
  VARSET(YOrev,T33);
  lit_290 = YPPsym((P)"@cat2");
  lit_291 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOcat2 = YPfab_met(FUNCODEREF(YOcat2),T34,LITREF(lit_290),LITREF(lit_291),sloc(890),YPsb((P)"(fun ((x <lst>) (y <lst>) => <lst>) (%cat2 x y))"));
  T35 = YOcat2;
  VARSET(YOcat2,T35);
  lit_292 = YPPsym((P)"@find");
  lit_293 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfind = YPfab_met(FUNCODEREF(YOfind),T36,LITREF(lit_292),LITREF(lit_293),sloc(893),YPsb((P)"(fun ((f <fun>) (c <lst>) => <any>) (rep fnd ((c c) (i 0)) (if (@nul? c) nul (if (f (@head c)) i (fnd (@tail c) (@+ i 1))))))"));
  T37 = YOfind;
  VARSET(YOfind,T37);
  lit_294 = YPPsym((P)"@mem?");
  lit_295 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  lit_296 = YPPlist(1,YPPsym((P)"y"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_340 = YPfab_met(FUNCODEREF(fun_340),T39,YPfalse,LITREF(lit_296),sloc(902),YPsb((P)"(fun (y) (@== x y))"));
  T38 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmemQ = YPfab_met(FUNCODEREF(YOmemQ),T38,LITREF(lit_294),LITREF(lit_295),sloc(901),YPsb((P)"(fun ((c <lst>) (x <any>) => <log>) (not (@== (@find (fun (y) (@== x y)) c) nul)))"));
  T40 = YOmemQ;
  VARSET(YOmemQ,T40);
  lit_297 = YPPsym((P)"@del-dups");
  lit_298 = YPPlist(1,YPPsym((P)"x"));
  lit_299 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"e"));
  T42 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_342 = YPfab_met(FUNCODEREF(fun_342),T42,YPfalse,LITREF(lit_299),sloc(907),YPsb((P)"(fun (s e) (if (@mem? s e) s (@pair e s)))"));
  T41 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOdel_dups = YPfab_met(FUNCODEREF(YOdel_dups),T41,LITREF(lit_297),LITREF(lit_298),sloc(906),YPsb((P)"(fun ((x <lst>) => <lst>) (@rev! (@fold (fun (s e) (if (@mem? s e) s (@pair e s))) '() x)))"));
  T43 = YOdel_dups;
  VARSET(YOdel_dups,T43);
  lit_300 = YPPsym((P)"@opts-as-lst");
  lit_301 = YPPlist(1,YPPsym((P)"x"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOopts_as_lst = YPfab_met(FUNCODEREF(YOopts_as_lst),T44,LITREF(lit_300),LITREF(lit_301),sloc(909),YPsb((P)"(fun ((x <opts>) => <lst>) (rep loop ((i (@+ (@olen x) -1)) (l '())) (if (@== i -1) l (loop (@+ i -1) (@pair (@oelt x i) l)))))"));
  T45 = YOopts_as_lst;
  VARSET(YOopts_as_lst,T45);
  lit_302 = YPPsym((P)"@lst");
  lit_303 = YPPlist(1,YPPsym((P)"x"));
  T46 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOlst = YPfab_met(FUNCODEREF(YOlst),T46,LITREF(lit_302),LITREF(lit_303),sloc(913),YPsb((P)"(fun ((x ...)) (rep loop ((i (@+ (@olen x) -1)) (l '())) (if (@== i -1) l (loop (@+ i -1) (@pair (@oelt x i) l)))))"));
  T47 = YOlst;
  VARSET(YOlst,T47);
  lit_304 = YPPsym((P)"@tany?");
  lit_305 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T48 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtanyQ = YPfab_met(FUNCODEREF(YOtanyQ),T48,LITREF(lit_304),LITREF(lit_305),sloc(926),YPsb((P)"(fun ((test <fun>) (c <tup>) => <log>) (rep fnd ((i (@+ (@tlen c) -1))) (if (@< i 0) #f (or (test (@telt c i)) (fnd (@+ i -1))))))"));
  T49 = YOtanyQ;
  VARSET(YOtanyQ,T49);
  lit_306 = YPPsym((P)"@tall2?");
  lit_307 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"c1"),YPPsym((P)"c2"));
  T50 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLtupG),VARREF(YLtupG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOtall2Q = YPfab_met(FUNCODEREF(YOtall2Q),T50,LITREF(lit_306),LITREF(lit_307),sloc(930),YPsb((P)"(fun ((test <fun>) (c1 <tup>) (c2 <tup>) => <log>) (and (@== (@tlen c1) (@tlen c2)) (rep fnd ((i (@+ (@tlen c1) -1))) (or (@< i 0) (and (test (@telt c1 i) (@telt c2 i)) (fnd (@+ i -1)))))))"));
  T51 = YOtall2Q;
  VARSET(YOtall2Q,T51);
  lit_308 = YPPsym((P)"@tup");
  lit_309 = YPPlist(1,YPPsym((P)"args"));
  lit_310 = YPPsym((P)"into");
  lit_311 = YPPlist(1,YPPsym((P)"k"));
  T53 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_into_352 = YPfab_met(FUNCODEREF(fun_into_352),T53,LITREF(lit_310),LITREF(lit_311),sloc(941),YPsb((P)"(fun (k => #f) (unless (@= k -1) (set (@telt t k) (@oelt args k)) (into (@+ k -1))))"));
  T52 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOtup = YPfab_met(FUNCODEREF(YOtup),T52,LITREF(lit_308),LITREF(lit_309),sloc(947),YPsb((P)"(fun ((args ...)) (%to-tup args))"));
  T54 = YOtup;
  VARSET(YOtup,T54);
  VARSET(Ytup,VARREF(YOtup));
  lit_312 = YPPsym((P)"t*");
  lit_313 = YPPlist(1,YPPsym((P)"args"));
  lit_314 = YPPlist(1,YPPsym((P)"k"));
  T59 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T58 = fun_into_354 = YPfab_met(FUNCODEREF(fun_into_354),T59,LITREF(lit_310),LITREF(lit_314),sloc(941),YPsb((P)"(fun (k => #f) (unless (@= k -1) (set (@telt t k) (@oelt args k)) (into (@+ k -1))))"));
  T57 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  T56 = YtT = YPfab_met(FUNCODEREF(YtT),T57,LITREF(lit_312),LITREF(lit_313),sloc(951),YPsb((P)"(fun ((args ...)) (%product (%to-tup args)))"));
  T61 = YtT;
  T60 = VARSET(YtT,T61);
  T55 = T60;
  return T55;
}

P Y___main_13___() {
  P tF1130;
  P xF1129;
  P xF1128;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
DEFCREGS();
  lit_315 = YPPsym((P)"@type-equal?");
  lit_316 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtype_equalQ = YPfab_met(FUNCODEREF(YOtype_equalQ),T0,LITREF(lit_315),LITREF(lit_316),sloc(955),YPsb((P)"(fun (t1 t2 => <log>) (or (@== t1 t2) (and (not (@== (%class-of t1) <class>)) (not (@== (%class-of t2) <class>)) (@subtype? t1 t2) (@subtype? t2 t1))))"));
  T1 = YOtype_equalQ;
  VARSET(YOtype_equalQ,T1);
  lit_317 = YPPsym((P)"@subtype?");
  lit_318 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T2 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOsubtypeQ = YPfab_met(FUNCODEREF(YOsubtypeQ),T2,LITREF(lit_317),LITREF(lit_318),sloc(969),YPsb((P)"(fun (t1 t2 => <log>) (if (and (@== (%class-of t2) <class>) (@== (%class-of t1) <class>)) (@subclass? t1 t2) (subtype? t1 t2)))"));
  T3 = YOsubtypeQ;
  VARSET(YOsubtypeQ,T3);
  lit_319 = YPPsym((P)"@may-isa?");
  lit_320 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T5 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),T5,Ynil);
  YOmay_isaQ = YPfab_met(FUNCODEREF(YOmay_isaQ),T4,LITREF(lit_319),LITREF(lit_320),sloc(974),YPsb((P)"(fun ((c <class>) (t <type>) => (tup (some? <log>) (all? <log>))) (if (@== (%class-of t) <class>) (if (@subclass? c t) (@tup #t #t) (@tup #f #f)) (may-isa? c t)))"));
  T6 = YOmay_isaQ;
  VARSET(YOmay_isaQ,T6);
  VARSET(YTrestarts_okQT,YPfalse);
  lit_321 = YPPsym((P)"unexec");
  lit_322 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"fun"));
  T7 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yunexec = YPfab_met(FUNCODEREF(Yunexec),T7,LITREF(lit_321),LITREF(lit_322),sloc(997),YPsb((P)"(fun ((name <str>) (fun <fun>)) (set %*start-running-at* fun) (%unexec (%su name)))"));
  T8 = Yunexec;
  VARSET(Yunexec,T8);
  lit_323 = YPPsym((P)"%patch-early-generic");
  lit_324 = YPPlist(1,YPPsym((P)"generic"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPpatch_early_generic = YPfab_met(FUNCODEREF(YPpatch_early_generic),T9,LITREF(lit_323),LITREF(lit_324),sloc(1001),YPsb((P)"(fun ((generic <gen>)) (set (%gen-code generic) (%met-code %dispatch)))"));
  T10 = YPpatch_early_generic;
  VARSET(YPpatch_early_generic,T10);
  xF1128 = VARREF(YPmet_prop_len);
  xF1129 = xF1128;
  tF1130 = (P)1;
  T12 = (P)YPiLL(xF1129,(P)2);
  T11 = (P)YPiv(T12,tF1130);
  (P)YPclass_prop_len_setter(T11,VARREF(YLmetG));
  lit_325 = YPsb((P)"Tried to call an unbound function, but the function error\nhandler is itself unbound. Exiting.");
  VARSET(YTboot_macro_module_namesT,Ynil);
  VARSET(YTboot_macro_namesT,Ynil);
  VARSET(YTboot_macro_expandersT,Ynil);
  VARSET(YTmacros_okQT,YPfalse);
  lit_326 = YPPsym((P)"app-filename");
  lit_327 = Ynil;
  T13 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Yapp_filename = YPfab_met(FUNCODEREF(Yapp_filename),T13,LITREF(lit_326),LITREF(lit_327),sloc(1123),YPsb((P)"(fun () (%app-filename))"));
  T14 = Yapp_filename;
  VARSET(Yapp_filename,T14);
  lit_328 = YPPsym((P)"app-args");
  T15 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Yapp_args = YPfab_met(FUNCODEREF(Yapp_args),T15,LITREF(lit_328),LITREF(lit_327),sloc(1125),YPsb((P)"(fun () (%app-args))"));
  T16 = Yapp_args;
  VARSET(Yapp_args,T16);
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
  T17 = YPfalse;
  return T17;
}

P Y___main_14___() {
  P T0;
DEFCREGS();
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

P Y___main_15___() {
  P T0;
DEFCREGS();
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
  {"%prop-setter-setter", PVAR, NULL},
  {"@@==", CVAR, &YOOEE},
  {"fab-pair", CVAR, &Yfab_pair},
  {"%*start-running-at*", CVAR, &YPTstart_running_atT},
  {"seq", PVAR, NULL},
  {"%fab-code-refs", PVAR, NULL},
  {"nil", CVAR, &Ynil},
  {"%tnul", CVAR, &YPtnul},
  {"%gen-cache-classes", PVAR, NULL},
  {"$adr-tag", PVAR, NULL},
  {"class-gens-setter", CVAR, &Yclass_gens_setter},
  {"%type-class-setter", PVAR, NULL},
  {"%met-prop-len", CVAR, &YPmet_prop_len},
  {"@tail", PVAR, NULL},
  {"<singleton>", CVAR, &YLsingletonG},
  {"%patch-early-generics", PVAR, NULL},
  {"<box>", CVAR, &YLboxG},
  {"if", PVAR, NULL},
  {"%next-methods-reg-setter", PVAR, NULL},
  {"%macro", PVAR, NULL},
  {"fun-sig-setter", CVAR, &Yfun_sig_setter},
  {"%prop-setter", PVAR, NULL},
  {"%add-met", CVAR, &YPadd_met},
  {"%gen", PVAR, NULL},
  {"prop-owner", CVAR, &Yprop_owner},
  {"%class-gens-setter", PVAR, NULL},
  {"%def-patch-early-generics", PVAR, NULL},
  {"%ib", PVAR, NULL},
  {"%rep", PVAR, NULL},
  {"%patch-early-generic", CVAR, &YPpatch_early_generic},
  {"%define-hierarchy", PVAR, NULL},
  {"%fab-sig", PVAR, NULL},
  {"%i?", PVAR, NULL},
  {"%vfn", PVAR, NULL},
  {"%gen-mets", PVAR, NULL},
  {"%class-direct-props-setter", PVAR, NULL},
  {"<log>", CVAR, &YLlogG},
  {"unless", PVAR, NULL},
  {"%gen-cache-count-setter", PVAR, NULL},
  {"%vsp", PVAR, NULL},
  {"%app-args", PVAR, NULL},
  {"%dispatch", CVAR, &YPdispatch},
  {"@head-setter", PVAR, NULL},
  {"<opts-tup>", CVAR, &YLopts_tupG},
  {"%opts-location", PVAR, NULL},
  {"%gen-code-setter", PVAR, NULL},
  {"class-id", CVAR, &Yclass_id},
  {"---main-8---", PVAR, NULL},
  {"%fab-gen", PVAR, NULL},
  {"class-prop-len-setter", CVAR, &Yclass_prop_len_setter},
  {"@tall2?", CVAR, &YOtall2Q},
  {"%opts-count-setter", PVAR, NULL},
  {"fun-sig", CVAR, &Yfun_sig},
  {"quasiquote", PVAR, NULL},
  {"%vm-fun-env-elt", PVAR, NULL},
  {"%gen-cache-count", PVAR, NULL},
  {"%fapply", PVAR, NULL},
  {"nul", CVAR, &Ynul},
  {"%check-arity", PVAR, NULL},
  {"%gen-sig-setter", PVAR, NULL},
  {"%fun-info-src-loc-setter", PVAR, NULL},
  {"<any>", CVAR, &YLanyG},
  {"@telt", PVAR, NULL},
  {"%lit", PVAR, NULL},
  {"%fun-info-src-setter", PVAR, NULL},
  {"class-gens", CVAR, &Yclass_gens},
  {"class-mets", CVAR, &Yclass_mets},
  {"%tup", PVAR, NULL},
  {"%clone", PVAR, NULL},
  {"@any?", CVAR, &YOanyQ},
  {"%type-class", PVAR, NULL},
  {"sig-specs-setter", CVAR, &Ysig_specs_setter},
  {"%object-of", PVAR, NULL},
  {"@len", PVAR, NULL},
  {"%iv", PVAR, NULL},
  {"prop-offset", CVAR, &Yprop_offset},
  {"%%rfab", PVAR, NULL},
  {"%met-info-setter", PVAR, NULL},
  {"---main-5---", PVAR, NULL},
  {"%define-tagged-structure", PVAR, NULL},
  {"%i<<", PVAR, NULL},
  {"%singleton", PVAR, NULL},
  {"*restarts-ok?*", CVAR, &YTrestarts_okQT},
  {"and", PVAR, NULL},
  {"class-prop-len", CVAR, &Yclass_prop_len},
  {"%cb", PVAR, NULL},
  {"%loc", PVAR, NULL},
  {"src-loc-file", CVAR, &Ysrc_loc_file},
  {"@<", PVAR, NULL},
  {"gen-cache-missable?", CVAR, &Ygen_cache_missableQ},
  {"%early-dispatch", CVAR, &YPearly_dispatch},
  {"<opts>", CVAR, &YLoptsG},
  {"%vnm", PVAR, NULL},
  {"*early-classes*", CVAR, &YTearly_classesT},
  {"@add-new", PVAR, NULL},
  {"%telt", PVAR, NULL},
  {"may-isa?", CVAR, &Ymay_isaQ},
  {"fin", PVAR, NULL},
  {"src-loc-line", CVAR, &Ysrc_loc_line},
  {"class-direct-props-setter", CVAR, &Yclass_direct_props_setter},
  {"return-type-error", CVAR, &Yreturn_type_error},
  {"%class-prop-len", PVAR, NULL},
  {"fun", PVAR, NULL},
  {"%stack-overflow-lim", PVAR, NULL},
  {"%class-children-setter", PVAR, NULL},
  {"---main-11---", PVAR, NULL},
  {"%class-id-setter", PVAR, NULL},
  {"%sig-nary?-setter", PVAR, NULL},
  {"sig-nary?-setter", CVAR, &Ysig_naryQ_setter},
  {"%%macro", CVAR, &YPPmacro},
  {"%fun-info-src", PVAR, NULL},
  {"*boot-macro-module-names*", CVAR, &YTboot_macro_module_namesT},
  {"@fold", CVAR, &YOfold},
  {"use/export", PVAR, NULL},
  {"%fixnum", PVAR, NULL},
  {"sig-unification-vars-setter", CVAR, &Ysig_unification_vars_setter},
  {"---main-0---", PVAR, NULL},
  {"use/mangle", PVAR, NULL},
  {"unexec", CVAR, &Yunexec},
  {"%fun-info-name", PVAR, NULL},
  {"%define-primitives", PVAR, NULL},
  {"@tany?", CVAR, &YOtanyQ},
  {"@int?", PVAR, NULL},
  {"%sp-reg", PVAR, NULL},
  {"%tag-into", PVAR, NULL},
  {"fun-info-src-loc-setter", CVAR, &Yfun_info_src_loc_setter},
  {"@raw-nul?", PVAR, NULL},
  {"%met-env-setter", PVAR, NULL},
  {"%stack-reg", PVAR, NULL},
  {"%opts-count", PVAR, NULL},
  {"---main-7---", PVAR, NULL},
  {"%finalize-props!", CVAR, &YPfinalize_propsX},
  {"use", PVAR, NULL},
  {"dss", PVAR, NULL},
  {"%sig-unification-vars", PVAR, NULL},
  {"%with-monitor", CVAR, &YPwith_monitor},
  {"%object-class", PVAR, NULL},
  {"%prop-getter", PVAR, NULL},
  {"%class-forward-setter", PVAR, NULL},
  {"product-elts", CVAR, &Yproduct_elts},
  {"sig-nary?", CVAR, &Ysig_naryQ},
  {"%process-module", PVAR, NULL},
  {"%class-ancestors", PVAR, NULL},
  {"sig-unification-vars", CVAR, &Ysig_unification_vars},
  {"%i&", PVAR, NULL},
  {"dp", PVAR, NULL},
  {"%fun-info-name-setter", PVAR, NULL},
  {"%sig-nary?", PVAR, NULL},
  {"%class", PVAR, NULL},
  {"%define-parents", PVAR, NULL},
  {"fun-info-src-loc", CVAR, &Yfun_info_src_loc},
  {"mif", PVAR, NULL},
  {"<gen>", CVAR, &YLgenG},
  {"%trace-on", PVAR, NULL},
  {"@fill", CVAR, &YOfill},
  {"<class>", CVAR, &YLclassG},
  {"%%prop", PVAR, NULL},
  {"%%check-call-types", PVAR, NULL},
  {"%sig-arity-setter", PVAR, NULL},
  {"%src-loc-file", PVAR, NULL},
  {"%class-id", PVAR, NULL},
  {"fun-mets-setter", CVAR, &Yfun_mets_setter},
  {"@lst", CVAR, &YOlst},
  {"fun-code", CVAR, &Yfun_code},
  {"ct", PVAR, NULL},
  {"%%sym", PVAR, NULL},
  {"%prop-init", PVAR, NULL},
  {"%i>>>", PVAR, NULL},
  {"%stack-check-reg?-setter", PVAR, NULL},
  {"%indirect-object?", PVAR, NULL},
  {"props-of", CVAR, &Yprops_of},
  {"dp!", PVAR, NULL},
  {"one-nil", CVAR, &Yone_nil},
  {"export", PVAR, NULL},
  {"%raw", PVAR, NULL},
  {"no-next-methods-error", CVAR, &Yno_next_methods_error},
  {"%class-forward", PVAR, NULL},
  {"<type>", CVAR, &YLtypeG},
  {"%collect-direct-props", CVAR, &YPcollect_direct_props},
  {"%opts", PVAR, NULL},
  {"or", PVAR, NULL},
  {"%vm-fun-env-elt-setter", PVAR, NULL},
  {"try", PVAR, NULL},
  {"%%len", PVAR, NULL},
  {"@may-isa?", CVAR, &YOmay_isaQ},
  {"---main-1---", PVAR, NULL},
  {"%trace-off", PVAR, NULL},
  {"class-direct-props", CVAR, &Yclass_direct_props},
  {"%prop-elt-setter", PVAR, NULL},
  {"*macros-ok?*", CVAR, &YTmacros_okQT},
  {"df", PVAR, NULL},
  {"sym-name", CVAR, &Ysym_name},
  {"fun-mets", CVAR, &Yfun_mets},
  {"%class-shells", PVAR, NULL},
  {"%gen-cache", PVAR, NULL},
  {"%binding-name", PVAR, NULL},
  {"%fun-info-count-setter", PVAR, NULL},
  {"%i<", PVAR, NULL},
  {"%relt", PVAR, NULL},
  {"%tail", PVAR, NULL},
  {"class-children", CVAR, &Yclass_children},
  {"%sym-nam-setter", PVAR, NULL},
  {"---main-2---", PVAR, NULL},
  {"%tag", PVAR, NULL},
  {"%slen", PVAR, NULL},
  {"%telt-setter", PVAR, NULL},
  {"%tu", PVAR, NULL},
  {"%code-ref", PVAR, NULL},
  {"%sig-unification-vars-setter", PVAR, NULL},
  {"@olen", PVAR, NULL},
  {"@fab", CVAR, &YOfab},
  {"%set-regs", PVAR, NULL},
  {"<sym>", CVAR, &YLsymG},
  {"argument-type-error", CVAR, &Yargument_type_error},
  {"d.", PVAR, NULL},
  {"%cons-args", PVAR, NULL},
  {"%flo", PVAR, NULL},
  {"%lb", PVAR, NULL},
  {"@opts-as-lst", CVAR, &YOopts_as_lst},
  {"<met>", CVAR, &YLmetG},
  {"%arg-check-type", PVAR, NULL},
  {"%i+", PVAR, NULL},
  {"property-unbound-error", CVAR, &Yproperty_unbound_error},
  {"%i<<<", PVAR, NULL},
  {"%src-loc-file-setter", PVAR, NULL},
  {"class-children-setter", CVAR, &Yclass_children_setter},
  {"%define-accessor", PVAR, NULL},
  {"@tlen", PVAR, NULL},
  {"%union-elts", PVAR, NULL},
  {"prop-init", CVAR, &Yprop_init},
  {"<str>", CVAR, &YLstrG},
  {"$gen-cache-singletons-offset", CVAR, &YDgen_cache_singletons_offset},
  {"%im", PVAR, NULL},
  {"dg", PVAR, NULL},
  {"@==", PVAR, NULL},
  {"%vnm-setter", PVAR, NULL},
  {"%prop-owner-setter", PVAR, NULL},
  {"ds", PVAR, NULL},
  {"%prop-elt", PVAR, NULL},
  {"%unexec", PVAR, NULL},
  {"nul-prop", CVAR, &Ynul_prop},
  {"%fun-info-src-loc", PVAR, NULL},
  {"error", CVAR, &Yerror},
  {"%i*", PVAR, NULL},
  {"%selt-setter", PVAR, NULL},
  {"%src-loc", PVAR, NULL},
  {"%fun-cache-setter", PVAR, NULL},
  {"union-elts", CVAR, &Yunion_elts},
  {"@elt", CVAR, &YOelt},
  {"%vm-box-val", PVAR, NULL},
  {"<tup>", CVAR, &YLtupG},
  {"%allocate-stack", PVAR, NULL},
  {"dc", PVAR, NULL},
  {"%*used-symbols-too-early*", CVAR, &YPTused_symbols_too_earlyT},
  {"new", CVAR, &Ynew},
  {"%define-boxed-structure", PVAR, NULL},
  {"%gen-cache-classes-setter", PVAR, NULL},
  {"%prop-offset", CVAR, &YPprop_offset},
  {"%vm-with-exit", PVAR, NULL},
  {"*boot-macro-expanders*", CVAR, &YTboot_macro_expandersT},
  {"class-forward", CVAR, &Yclass_forward},
  {"@=", PVAR, NULL},
  {"cpl-error", CVAR, &Ycpl_error},
  {"%src-loc-line-setter", PVAR, NULL},
  {"%invoke-debugger", PVAR, NULL},
  {"<fun>", CVAR, &YLfunG},
  {"$gen-cache-classes-offset", CVAR, &YDgen_cache_classes_offset},
  {"<flat>", CVAR, &YLflatG},
  {"@subtype?", CVAR, &YOsubtypeQ},
  {"%fun-info-names-setter", PVAR, NULL},
  {"%i-", PVAR, NULL},
  {"%rev!", PVAR, NULL},
  {"$num-int-bits", CVAR, &YDnum_int_bits},
  {"%class-name", PVAR, NULL},
  {"sig-specs", CVAR, &Ysig_specs},
  {"%rlen", PVAR, NULL},
  {"%%apply", PVAR, NULL},
  {"---main-12---", PVAR, NULL},
  {"%gen-cache-arg-pos-setter", PVAR, NULL},
  {"%met-code", PVAR, NULL},
  {"opts-tup-storage", CVAR, &Yopts_tup_storage},
  {"%relt-setter", PVAR, NULL},
  {"unknown-function-error", CVAR, &Yunknown_function_error},
  {"arity-error", CVAR, &Yarity_error},
  {"%str!", PVAR, NULL},
  {"%fp-reg-setter", PVAR, NULL},
  {"%i^", PVAR, NULL},
  {"%object-class-setter", PVAR, NULL},
  {"fun-env", CVAR, &Yfun_env},
  {"loc", PVAR, NULL},
  {"<lst>", CVAR, &YLlstG},
  {"%to-tup", PVAR, NULL},
  {"%untag", PVAR, NULL},
  {"ambiguous-method-error", CVAR, &Yambiguous_method_error},
  {"@alter", CVAR, &YOalter},
  {"rep", PVAR, NULL},
  {"%i=", PVAR, NULL},
  {"%sig-val", PVAR, NULL},
  {"file-opening-error", CVAR, &Yfile_opening_error},
  {"---main-3---", PVAR, NULL},
  {"arithmetic-error", CVAR, &Yarithmetic_error},
  {"%new", PVAR, NULL},
  {"ct-also", PVAR, NULL},
  {"%it/", PVAR, NULL},
  {"%dyn-var-val", PVAR, NULL},
  {"%sig", PVAR, NULL},
  {"fab-sym", CVAR, &Yfab_sym},
  {"%union", PVAR, NULL},
  {"property-type-error", CVAR, &Yproperty_type_error},
  {"sig-val-setter", CVAR, &Ysig_val_setter},
  {"<seq!>", CVAR, &YLseqXG},
  {"---main-14---", PVAR, NULL},
  {"quote", PVAR, NULL},
  {"%fun-info-count", PVAR, NULL},
  {"%gen-cache-singletons-setter", PVAR, NULL},
  {"%tail-setter", PVAR, NULL},
  {"@del-dups", CVAR, &YOdel_dups},
  {"as-error", CVAR, &Yas_error},
  {"prop-type", CVAR, &Yprop_type},
  {"%class-row-setter", PVAR, NULL},
  {"fun-info-names-setter", CVAR, &Yfun_info_names_setter},
  {"<fun-info>", CVAR, &YLfun_infoG},
  {"%head-setter", PVAR, NULL},
  {"@all2?", CVAR, &YOall2Q},
  {"%fun-info-names", PVAR, NULL},
  {"%unlink-stack", PVAR, NULL},
  {"%product-elts-setter", PVAR, NULL},
  {"%prop-type", PVAR, NULL},
  {"%fun-cache", PVAR, NULL},
  {"fun-info-count-setter", CVAR, &Yfun_info_count_setter},
  {"$tag-len", PVAR, NULL},
  {"update-instance-for-changed-class", CVAR, &Yupdate_instance_for_changed_class},
  {"range-error", CVAR, &Yrange_error},
  {"use/library", PVAR, NULL},
  {"def", PVAR, NULL},
  {"<seq.>", CVAR, &YLseqIG},
  {"@telt-setter", PVAR, NULL},
  {"%prop-type-setter", PVAR, NULL},
  {"type-error", CVAR, &Ytype_error},
  {"%class-of", PVAR, NULL},
  {"%su", PVAR, NULL},
  {"%class-children", PVAR, NULL},
  {"type-class", CVAR, &Ytype_class},
  {"sig-val", CVAR, &Ysig_val},
  {"%sig-specs-setter", PVAR, NULL},
  {"%eq?", PVAR, NULL},
  {"%gen-code", PVAR, NULL},
  {"stack-overflow-error", CVAR, &Ystack_overflow_error},
  {"@+", PVAR, NULL},
  {"%vsp-setter", PVAR, NULL},
  {"@class-isa?", PVAR, NULL},
  {"internal-error", CVAR, &Yinternal_error},
  {"%vfn-setter", PVAR, NULL},
  {"fun-info-names", CVAR, &Yfun_info_names},
  {"%sig-val-setter", PVAR, NULL},
  {"<seq>", CVAR, &YLseqG},
  {"@adr?", PVAR, NULL},
  {"class-parents-setter", CVAR, &Yclass_parents_setter},
  {"%next-methods", PVAR, NULL},
  {"%fu", PVAR, NULL},
  {"tail-setter", CVAR, &Ytail_setter},
  {"%tag-bits", PVAR, NULL},
  {"@lit", CVAR, &YOlit},
  {"%bb", PVAR, NULL},
  {"fun-info-count", CVAR, &Yfun_info_count},
  {"%fab-dyn-var", PVAR, NULL},
  {"---main-13---", PVAR, NULL},
  {"%prop-init-setter", PVAR, NULL},
  {"%fab-sym", PVAR, NULL},
  {"class-props-setter", CVAR, &Yclass_props_setter},
  {"%true", CVAR, &YPtrue},
  {"%%mep-apply", PVAR, NULL},
  {"%sym", PVAR, NULL},
  {"@type-equal?", CVAR, &YOtype_equalQ},
  {"@pair", PVAR, NULL},
  {"@do", CVAR, &YOdo},
  {"%gen-info", PVAR, NULL},
  {"%met-sig-setter", PVAR, NULL},
  {"<col!>", CVAR, &YLcolXG},
  {"%define-structure-accessors", PVAR, NULL},
  {"%fun-reg", PVAR, NULL},
  {"%i>>", PVAR, NULL},
  {"%fb", PVAR, NULL},
  {"gen-cache-classes", CVAR, &Ygen_cache_classes},
  {"box-value-setter", CVAR, &Ybox_value_setter},
  {"ddv", PVAR, NULL},
  {"@all?", CVAR, &YOallQ},
  {"%class-direct-props", PVAR, NULL},
  {"%loc-val-setter", PVAR, NULL},
  {"%src-loc-line", PVAR, NULL},
  {"class-parents", CVAR, &Yclass_parents},
  {"@subclass?", PVAR, NULL},
  {"opts-count", CVAR, &Yopts_count},
  {"%vm-with-cleanup", PVAR, NULL},
  {"%class-mets", PVAR, NULL},
  {"tail", CVAR, &Ytail},
  {"<sig>", CVAR, &YLsigG},
  {"%prop-owner", PVAR, NULL},
  {"class-props", CVAR, &Yclass_props},
  {"---main-15---", PVAR, NULL},
  {"<col.>", CVAR, &YLcolIG},
  {"%loc-off-setter", PVAR, NULL},
  {"property-not-found-error", CVAR, &Yproperty_not_found_error},
  {"%raw-alloc", PVAR, NULL},
  {"%str", PVAR, NULL},
  {"%vm-box-val-setter", PVAR, NULL},
  {"@oelt-setter", PVAR, NULL},
  {"%gen-cache-missable?-setter", PVAR, NULL},
  {"%symbols", CVAR, &YPsymbols},
  {"%vm-fun-env-fab", PVAR, NULL},
  {"*boot-macro-names*", CVAR, &YTboot_macro_namesT},
  {"%opts-tup", PVAR, NULL},
  {"$max-int", CVAR, &YDmax_int},
  {"---main-6---", PVAR, NULL},
  {"isa?", CVAR, &YisaQ},
  {"<col>", CVAR, &YLcolG},
  {"%fab-met", PVAR, NULL},
  {"%met-env", PVAR, NULL},
  {"let", PVAR, NULL},
  {"%eof-object", PVAR, NULL},
  {"%type-object-setter", PVAR, NULL},
  {"@mem?", CVAR, &YOmemQ},
  {"%%sfab", PVAR, NULL},
  {"class-mets-setter", CVAR, &Yclass_mets_setter},
  {"subtype?", CVAR, &YsubtypeQ},
  {"%product-elts", PVAR, NULL},
  {"%opts-tup-location-setter", PVAR, NULL},
  {"%pairize", PVAR, NULL},
  {"box-value", CVAR, &Ybox_value},
  {"prop-setter", CVAR, &Yprop_setter},
  {"@rev!", CVAR, &YOrevX},
  {"%rnul", CVAR, &YPrnul},
  {"%gen-info-setter", PVAR, NULL},
  {"<rep>", CVAR, &YLrepG},
  {"%flo-dat-setter", PVAR, NULL},
  {"%sig-specs", PVAR, NULL},
  {"%opts-tup-tup-setter", PVAR, NULL},
  {"t*", CVAR, &YtT},
  {"fun-info-setter", CVAR, &Yfun_info_setter},
  {"%class-parents", PVAR, NULL},
  {"%tup!", PVAR, NULL},
  {"@pick", CVAR, &YOpick},
  {"%compute-ancestors", PVAR, NULL},
  {"%opts-tup-count-setter", PVAR, NULL},
  {"@head", PVAR, NULL},
  {"%cat2", PVAR, NULL},
  {"%elt-setter", PVAR, NULL},
  {"%class-name-setter", PVAR, NULL},
  {"bound?", PVAR, NULL},
  {"<gen-cache>", CVAR, &YLgen_cacheG},
  {"type-object", CVAR, &Ytype_object},
  {"<loc>", CVAR, &YLlocG},
  {"%nul?", PVAR, NULL},
  {"%gen-cache-arg-pos", PVAR, NULL},
  {"%type-object", PVAR, NULL},
  {"%gen-cache-singletons", PVAR, NULL},
  {"%define-props", PVAR, NULL},
  {"use/include", PVAR, NULL},
  {"%class-prop-len-setter", PVAR, NULL},
  {"fun-info", CVAR, &Yfun_info},
  {"%vpc-setter", PVAR, NULL},
  {"@oelt", PVAR, NULL},
  {"%i!", PVAR, NULL},
  {"%loc-off", PVAR, NULL},
  {"<flo>", CVAR, &YLfloG},
  {"%@subclass?", PVAR, NULL},
  {"%false", CVAR, &YPfalse},
  {"@isa?", PVAR, NULL},
  {"%object-shells", PVAR, NULL},
  {"@add", PVAR, NULL},
  {"@@nul?", CVAR, &YOOnulQ},
  {"%define-repeated-structure", PVAR, NULL},
  {"%rep!", PVAR, NULL},
  {"esc", PVAR, NULL},
  {"%check-call-types", PVAR, NULL},
  {"%product", PVAR, NULL},
  {"force-names-into-boot-module", PVAR, NULL},
  {"when", PVAR, NULL},
  {"dl", PVAR, NULL},
  {"keyboard-interrupt", CVAR, &Ykeyboard_interrupt},
  {"%define-structure", PVAR, NULL},
  {"%%tfab", PVAR, NULL},
  {"gen-cache-singletons", CVAR, &Ygen_cache_singletons},
  {"%class-mets-setter", PVAR, NULL},
  {"@find", CVAR, &YOfind},
  {"%ru", PVAR, NULL},
  {"macro-expand", PVAR, NULL},
  {"%gen-cache-missable?", PVAR, NULL},
  {"<fixnum>", CVAR, &YLfixnumG},
  {"class-name", CVAR, &Yclass_name},
  {"opts-location", CVAR, &Yopts_location},
  {"$min-int", CVAR, &YDmin_int},
  {"dm", PVAR, NULL},
  {"%class-parents-setter", PVAR, NULL},
  {"%sp-reg-setter", PVAR, NULL},
  {"@tail-setter", PVAR, NULL},
  {"%class-row", PVAR, NULL},
  {"%class-gens", PVAR, NULL},
  {"%chr", PVAR, NULL},
  {"lst", CVAR, &Ylst},
  {"---main-4---", PVAR, NULL},
  {"tup", CVAR, &Ytup},
  {"%met-info", PVAR, NULL},
  {"@map", CVAR, &YOmap},
  {"%opts-tup-location", PVAR, NULL},
  {"%@class-of", PVAR, NULL},
  {"set", PVAR, NULL},
  {"<int>", CVAR, &YLintG},
  {"%ir", PVAR, NULL},
  {"%raw-met-call", PVAR, NULL},
  {"dv", PVAR, NULL},
  {"%sp-elt", PVAR, NULL},
  {"order-specs", CVAR, &Yorder_specs},
  {"%define-setter", PVAR, NULL},
  {"<prop>", CVAR, &YLpropG},
  {"%vpc", PVAR, NULL},
  {"sig-arity-setter", CVAR, &Ysig_arity_setter},
  {"%vm-box-fab", PVAR, NULL},
  {"class-forward-setter", CVAR, &Yclass_forward_setter},
  {"---main-10---", PVAR, NULL},
  {"%dyn-var-val-setter", PVAR, NULL},
  {"not", CVAR, &Ynot},
  {"%stack-check", PVAR, NULL},
  {"fun-info-name-setter", CVAR, &Yfun_info_name_setter},
  {"%max-stack-len", PVAR, NULL},
  {"%class-ancestors-setter", PVAR, NULL},
  {"<num>", CVAR, &YLnumG},
  {"%pair", PVAR, NULL},
  {"%reparent-class-shells", PVAR, NULL},
  {"%fun-val-check-type", PVAR, NULL},
  {"%app-filename", PVAR, NULL},
  {"%add-prop", CVAR, &YPadd_prop},
  {"fun-info-src-setter", CVAR, &Yfun_info_src_setter},
  {"%raw-call", PVAR, NULL},
  {"prop-getter", CVAR, &Yprop_getter},
  {"%eof-object?", PVAR, NULL},
  {"%class-props", PVAR, NULL},
  {"%fp-reg", PVAR, NULL},
  {"%fun-info", PVAR, NULL},
  {"%lu", PVAR, NULL},
  {"%head", PVAR, NULL},
  {"%prop-getter-setter", PVAR, NULL},
  {"@singleton-isa?", PVAR, NULL},
  {"%finalize-props", PVAR, NULL},
  {"@tup", CVAR, &YOtup},
  {"%snul", CVAR, &YPsnul},
  {"%classes-ready?", CVAR, &YPclasses_readyQ},
  {"%union-elts-setter", PVAR, NULL},
  {"<product>", CVAR, &YLproductG},
  {"%sym-nam", PVAR, NULL},
  {"sig-arity", CVAR, &Ysig_arity},
  {"%loc-val", PVAR, NULL},
  {"%untag-into", PVAR, NULL},
  {"app-args", CVAR, &Yapp_args},
  {"$direct-object-class", CVAR, &YDdirect_object_class},
  {"---main-9---", PVAR, NULL},
  {"%opts-tup-count", PVAR, NULL},
  {"@cat2", CVAR, &YOcat2},
  {"%tlen", PVAR, NULL},
  {"%met-sig", PVAR, NULL},
  {"fun-info-name", CVAR, &Yfun_info_name},
  {"no-applicable-methods-error", CVAR, &Yno_applicable_methods_error},
  {"class-row", CVAR, &Yclass_row},
  {"@not", PVAR, NULL},
  {"%lst", PVAR, NULL},
  {"%elt", PVAR, NULL},
  {"%selt", PVAR, NULL},
  {"head-setter", CVAR, &Yhead_setter},
  {"syntax-error", CVAR, &Ysyntax_error},
  {"%opts-tup-tup", PVAR, NULL},
  {"%do-stack-frames", PVAR, NULL},
  {"%stack-check-reg?", PVAR, NULL},
  {"fun-info-src", CVAR, &Yfun_info_src},
  {"class-ancestors-setter", CVAR, &Yclass_ancestors_setter},
  {"<src-loc>", CVAR, &YLsrc_locG},
  {"%symbols-ready?", CVAR, &YPsymbols_readyQ},
  {"%vfp", PVAR, NULL},
  {"%class-props-setter", PVAR, NULL},
  {"%c<", PVAR, NULL},
  {"narity-error", CVAR, &Ynarity_error},
  {"<union>", CVAR, &YLunionG},
  {"%define-getter", PVAR, NULL},
  {"%c=", PVAR, NULL},
  {"%subclass", PVAR, NULL},
  {"%met-code-setter", PVAR, NULL},
  {"%cu", PVAR, NULL},
  {"$tag-msk", PVAR, NULL},
  {"app-filename", CVAR, &Yapp_filename},
  {"%check-type", PVAR, NULL},
  {"%opts-location-setter", PVAR, NULL},
  {"%iu", PVAR, NULL},
  {"<chr>", CVAR, &YLchrG},
  {"%met", PVAR, NULL},
  {"head", CVAR, &Yhead},
  {"%vfp-setter", PVAR, NULL},
  {"@nul?", PVAR, NULL},
  {"%flo-dat", PVAR, NULL},
  {"gen-cache-arg-pos", CVAR, &Ygen_cache_arg_pos},
  {"%str-eq?", PVAR, NULL},
  {"%build-runtime-modules", PVAR, NULL},
  {"%fab-gen/code", PVAR, NULL},
  {"%sig-arity", PVAR, NULL},
  {"%gen-mets-setter", PVAR, NULL},
  {"class-ancestors", CVAR, &Yclass_ancestors},
  {"@new", CVAR, &YOnew},
  {"%prop-unbound-error", CVAR, &YPprop_unbound_error},
  {"fun-cache", CVAR, &Yfun_cache},
  {"%sb", PVAR, NULL},
  {"%break", PVAR, NULL},
  {"%prop-dat-at", PVAR, NULL},
  {"@rev", CVAR, &YOrev},
  {"<subclass>", CVAR, &YLsubclassG},
  {"%gen-sig", PVAR, NULL},
  {"assert-error", CVAR, &Yassert_error},
  {"<mag>", CVAR, &YLmagG},
  {"%def-regs", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"@@==", NULL},
  {"fab-pair", NULL},
  {"syntax-error", NULL},
  {"%lb", NULL},
  {"@rev!", NULL},
  {"nil", NULL},
  {"*boot-macro-names*", NULL},
  {"%gen-cache-classes", NULL},
  {"class-gens-setter", NULL},
  {"%met-prop-len", NULL},
  {"@tail", NULL},
  {"%gen-cache-classes-setter", NULL},
  {"%fun-val-check-type", NULL},
  {"<singleton>", NULL},
  {"%cu", NULL},
  {"<box>", NULL},
  {"if", NULL},
  {"%macro", NULL},
  {"fun-sig-setter", NULL},
  {"prop-owner", NULL},
  {"%class-gens-setter", NULL},
  {"%vm-fun-env-elt-setter", NULL},
  {"%ib", NULL},
  {"%rep", NULL},
  {"%fab-met", NULL},
  {"%i?", NULL},
  {"%vfn", NULL},
  {"%max-stack-len", NULL},
  {"<log>", NULL},
  {"%class-children", NULL},
  {"%gen-cache", NULL},
  {"%vsp", NULL},
  {"%app-args", NULL},
  {"%dispatch", NULL},
  {"<opts-tup>", NULL},
  {"%gen-code-setter", NULL},
  {"class-id", NULL},
  {"%object-class", NULL},
  {"class-prop-len-setter", NULL},
  {"%sig-val", NULL},
  {"@tall2?", NULL},
  {"fun-sig", NULL},
  {"quasiquote", NULL},
  {"%vm-fun-env-elt", NULL},
  {"%i*", NULL},
  {"*macros-ok?*", NULL},
  {"%fun-info-src-loc-setter", NULL},
  {"<any>", NULL},
  {"@telt", NULL},
  {"%fun-info-src-setter", NULL},
  {"class-gens", NULL},
  {"%tup", NULL},
  {"type-object", NULL},
  {"%clone", NULL},
  {"%type-class", NULL},
  {"%object-of", NULL},
  {"@len", NULL},
  {"prop-offset", NULL},
  {"%class-forward", NULL},
  {"set", NULL},
  {"%i<<", NULL},
  {"%singleton", NULL},
  {"*restarts-ok?*", NULL},
  {"class-prop-len", NULL},
  {"%cb", NULL},
  {"src-loc-file", NULL},
  {"@<", NULL},
  {"gen-cache-missable?", NULL},
  {"<opts>", NULL},
  {"%vnm", NULL},
  {"*early-classes*", NULL},
  {"@add-new", NULL},
  {"%telt", NULL},
  {"may-isa?", NULL},
  {"fin", NULL},
  {"@class-isa?", NULL},
  {"return-type-error", NULL},
  {"%class-prop-len", NULL},
  {"fun", NULL},
  {"%gen-cache-arg-pos", NULL},
  {"%class-children-setter", NULL},
  {"%class-id-setter", NULL},
  {"%patch-early-generics", NULL},
  {"sig-nary?-setter", NULL},
  {"%fun-info-src", NULL},
  {"*boot-macro-module-names*", NULL},
  {"@fold", NULL},
  {"use/export", NULL},
  {"sig-unification-vars-setter", NULL},
  {"@nul?", NULL},
  {"use/mangle", NULL},
  {"unexec", NULL},
  {"%fun-info-name", NULL},
  {"@tany?", NULL},
  {"@int?", NULL},
  {"%sp-reg", NULL},
  {"fun-info-src-loc-setter", NULL},
  {"%met-env-setter", NULL},
  {"%stack-reg", NULL},
  {"use", NULL},
  {"%with-monitor", NULL},
  {"%prop-getter", NULL},
  {"@adr?", NULL},
  {"product-elts", NULL},
  {"sig-nary?", NULL},
  {"%process-module", NULL},
  {"%class-ancestors", NULL},
  {"sig-unification-vars", NULL},
  {"%i&", NULL},
  {"@opts-as-lst", NULL},
  {"dp", NULL},
  {"%fun-info-name-setter", NULL},
  {"%class-mets", NULL},
  {"%sig-nary?", NULL},
  {"mif", NULL},
  {"fun-info-src-loc", NULL},
  {"<gen>", NULL},
  {"<class>", NULL},
  {"%%check-call-types", NULL},
  {"class-direct-props-setter", NULL},
  {"%class-id", NULL},
  {"fun-mets-setter", NULL},
  {"@lst", NULL},
  {"fun-code", NULL},
  {"ct", NULL},
  {"%%sym", NULL},
  {"%prop-init", NULL},
  {"%i>>>", NULL},
  {"props-of", NULL},
  {"dp!", NULL},
  {"export", NULL},
  {"no-next-methods-error", NULL},
  {"%class-prop-len-setter", NULL},
  {"<type>", NULL},
  {"@new", NULL},
  {"try", NULL},
  {"class-direct-props", NULL},
  {"%prop-elt-setter", NULL},
  {"@any?", NULL},
  {"sym-name", NULL},
  {"fun-mets", NULL},
  {"src-loc-line", NULL},
  {"%binding-name", NULL},
  {"%fun-info-count-setter", NULL},
  {"property-type-error", NULL},
  {"%tail", NULL},
  {"class-children", NULL},
  {"%class", NULL},
  {"%slen", NULL},
  {"@may-isa?", NULL},
  {"@olen", NULL},
  {"%set-regs", NULL},
  {"<sym>", NULL},
  {"argument-type-error", NULL},
  {"%gen-sig", NULL},
  {"d.", NULL},
  {"%%macro", NULL},
  {"<met>", NULL},
  {"%i+", NULL},
  {"property-unbound-error", NULL},
  {"%i<<<", NULL},
  {"class-children-setter", NULL},
  {"@tlen", NULL},
  {"%union-elts", NULL},
  {"prop-init", NULL},
  {"<str>", NULL},
  {"%gen-code", NULL},
  {"%im", NULL},
  {"dg", NULL},
  {"@==", NULL},
  {"%vnm-setter", NULL},
  {"ds", NULL},
  {"%prop-elt", NULL},
  {"nul-prop", NULL},
  {"%fun-info-src-loc", NULL},
  {"error", NULL},
  {"@=", NULL},
  {"stack-overflow-error", NULL},
  {"%src-loc", NULL},
  {"%fun-cache-setter", NULL},
  {"union-elts", NULL},
  {"@elt", NULL},
  {"<tup>", NULL},
  {"%allocate-stack", NULL},
  {"dc", NULL},
  {"new", NULL},
  {"sig-specs-setter", NULL},
  {"%vm-with-exit", NULL},
  {"class-forward", NULL},
  {"cpl-error", NULL},
  {"%invoke-debugger", NULL},
  {"<fun>", NULL},
  {"<flat>", NULL},
  {"@subtype?", NULL},
  {"%fun-info-names-setter", NULL},
  {"%i-", NULL},
  {"sig-specs", NULL},
  {"%rlen", NULL},
  {"%gen-cache-arg-pos-setter", NULL},
  {"opts-tup-storage", NULL},
  {"%relt-setter", NULL},
  {"unknown-function-error", NULL},
  {"arity-error", NULL},
  {"%met-code", NULL},
  {"%i^", NULL},
  {"class-mets", NULL},
  {"fun-env", NULL},
  {"loc", NULL},
  {"<lst>", NULL},
  {"%untag", NULL},
  {"ambiguous-method-error", NULL},
  {"rep", NULL},
  {"file-opening-error", NULL},
  {"arithmetic-error", NULL},
  {"ct-also", NULL},
  {"%it/", NULL},
  {"fab-sym", NULL},
  {"sig-val-setter", NULL},
  {"<seq!>", NULL},
  {"quote", NULL},
  {"%gen-cache-singletons-setter", NULL},
  {"@del-dups", NULL},
  {"as-error", NULL},
  {"prop-type", NULL},
  {"%class-row-setter", NULL},
  {"fun-info-names-setter", NULL},
  {"<fun-info>", NULL},
  {"@all2?", NULL},
  {"%fun-info-names", NULL},
  {"%unlink-stack", NULL},
  {"%prop-type", NULL},
  {"fun-info-count-setter", NULL},
  {"update-instance-for-changed-class", NULL},
  {"use/library", NULL},
  {"<seq.>", NULL},
  {"%fb", NULL},
  {"@telt-setter", NULL},
  {"type-error", NULL},
  {"%class-of", NULL},
  {"%su", NULL},
  {"type-class", NULL},
  {"sig-val", NULL},
  {"%eq?", NULL},
  {"@+", NULL},
  {"%vsp-setter", NULL},
  {"internal-error", NULL},
  {"%vfn-setter", NULL},
  {"fun-info-names", NULL},
  {"%fun-info-count", NULL},
  {"<seq>", NULL},
  {"%fu", NULL},
  {"class-parents-setter", NULL},
  {"%next-methods", NULL},
  {"no-applicable-methods-error", NULL},
  {"tail-setter", NULL},
  {"@lit", NULL},
  {"%bb", NULL},
  {"fun-info-count", NULL},
  {"%fab-dyn-var", NULL},
  {"class-props-setter", NULL},
  {"%true", NULL},
  {"@type-equal?", NULL},
  {"@pair", NULL},
  {"@do", NULL},
  {"%gen-info", NULL},
  {"<col!>", NULL},
  {"%fun-reg", NULL},
  {"range-error", NULL},
  {"gen-cache-classes", NULL},
  {"box-value-setter", NULL},
  {"ddv", NULL},
  {"%class-direct-props", NULL},
  {"%loc-val-setter", NULL},
  {"class-parents", NULL},
  {"opts-count", NULL},
  {"%vm-with-cleanup", NULL},
  {"tail", NULL},
  {"dl", NULL},
  {"<sig>", NULL},
  {"class-props", NULL},
  {"<col.>", NULL},
  {"property-not-found-error", NULL},
  {"%str", NULL},
  {"%vm-box-val-setter", NULL},
  {"@oelt-setter", NULL},
  {"%stack-check-reg?-setter", NULL},
  {"%symbols", NULL},
  {"%vm-fun-env-fab", NULL},
  {"%break", NULL},
  {"%opts-tup", NULL},
  {"$max-int", NULL},
  {"isa?", NULL},
  {"<col>", NULL},
  {"%met-env", NULL},
  {"let", NULL},
  {"%eof-object", NULL},
  {"@mem?", NULL},
  {"@head", NULL},
  {"class-mets-setter", NULL},
  {"subtype?", NULL},
  {"%product-elts", NULL},
  {"box-value", NULL},
  {"prop-setter", NULL},
  {"%rnul", NULL},
  {"<rep>", NULL},
  {"%sig-specs", NULL},
  {"t*", NULL},
  {"fun-info-setter", NULL},
  {"%iv", NULL},
  {"%class-parents", NULL},
  {"@pick", NULL},
  {"%stack-check-reg?", NULL},
  {"%sig-unification-vars", NULL},
  {"%i>>", NULL},
  {"%sp-elt", NULL},
  {"@not", NULL},
  {"*boot-macro-expanders*", NULL},
  {"dss", NULL},
  {"bound?", NULL},
  {"<gen-cache>", NULL},
  {"<loc>", NULL},
  {"%raw", NULL},
  {"%selt-setter", NULL},
  {"%loc-off-setter", NULL},
  {"%gen-cache-singletons", NULL},
  {"%relt", NULL},
  {"%dyn-var-val", NULL},
  {"%type-object", NULL},
  {"use/include", NULL},
  {"fun-info", NULL},
  {"%vpc-setter", NULL},
  {"@oelt", NULL},
  {"%i!", NULL},
  {"%loc-off", NULL},
  {"%vm-box-val", NULL},
  {"<flo>", NULL},
  {"%raw-call", NULL},
  {"%@subclass?", NULL},
  {"%false", NULL},
  {"@isa?", NULL},
  {"%class-forward-setter", NULL},
  {"@add", NULL},
  {"@map", NULL},
  {"esc", NULL},
  {"%check-call-types", NULL},
  {"%vpc", NULL},
  {"keyboard-interrupt", NULL},
  {"gen-cache-singletons", NULL},
  {"%class-mets-setter", NULL},
  {"macro-expand", NULL},
  {"<fixnum>", NULL},
  {"class-name", NULL},
  {"opts-location", NULL},
  {"$min-int", NULL},
  {"dm", NULL},
  {"%sp-reg-setter", NULL},
  {"%class-gens", NULL},
  {"lst", NULL},
  {"tup", NULL},
  {"@all?", NULL},
  {"@subclass?", NULL},
  {"%met-info", NULL},
  {"%@class-of", NULL},
  {"<int>", NULL},
  {"%raw-met-call", NULL},
  {"dv", NULL},
  {"order-specs", NULL},
  {"<prop>", NULL},
  {"sig-arity-setter", NULL},
  {"%vm-box-fab", NULL},
  {"class-forward-setter", NULL},
  {"%dyn-var-val-setter", NULL},
  {"not", NULL},
  {"%gen-mets", NULL},
  {"fun-info-name-setter", NULL},
  {"%class-ancestors-setter", NULL},
  {"<num>", NULL},
  {"%pair", NULL},
  {"df", NULL},
  {"%app-filename", NULL},
  {"fun-info-src-setter", NULL},
  {"prop-getter", NULL},
  {"%eof-object?", NULL},
  {"%class-props", NULL},
  {"%next-methods-reg-setter", NULL},
  {"%lu", NULL},
  {"%head", NULL},
  {"@tail-setter", NULL},
  {"%tnul", NULL},
  {"@singleton-isa?", NULL},
  {"@tup", NULL},
  {"%snul", NULL},
  {"%classes-ready?", NULL},
  {"<product>", NULL},
  {"sig-arity", NULL},
  {"%loc-val", NULL},
  {"app-args", NULL},
  {"%telt-setter", NULL},
  {"$direct-object-class", NULL},
  {"@cat2", NULL},
  {"%tlen", NULL},
  {"%met-sig", NULL},
  {"fun-info-name", NULL},
  {"class-row", NULL},
  {"seq", NULL},
  {"%i=", NULL},
  {"%selt", NULL},
  {"%fun-cache", NULL},
  {"head-setter", NULL},
  {"%do-stack-frames", NULL},
  {"fun-info-src", NULL},
  {"class-ancestors-setter", NULL},
  {"<src-loc>", NULL},
  {"%vfp", NULL},
  {"@@nul?", NULL},
  {"%class-props-setter", NULL},
  {"narity-error", NULL},
  {"<union>", NULL},
  {"%c=", NULL},
  {"%met-code-setter", NULL},
  {"app-filename", NULL},
  {"%iu", NULL},
  {"<chr>", NULL},
  {"%met", NULL},
  {"%class-direct-props-setter", NULL},
  {"%to-tup", NULL},
  {"head", NULL},
  {"%vfp-setter", NULL},
  {"gen-cache-arg-pos", NULL},
  {"def", NULL},
  {"%build-runtime-modules", NULL},
  {"%sig-arity", NULL},
  {"%gen-mets-setter", NULL},
  {"class-ancestors", NULL},
  {"%prop-unbound-error", NULL},
  {"%i<", NULL},
  {"fun-cache", NULL},
  {"%sb", NULL},
  {"%prop-dat-at", NULL},
  {"@rev", NULL},
  {"%gen-cache-missable?", NULL},
  {"%c<", NULL},
  {"<subclass>", NULL},
  {"assert-error", NULL},
  {"<mag>", NULL},
  {"%def-regs", NULL},
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
