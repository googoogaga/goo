/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/boot");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/boot */

DEF(Ytup,"goo/boot","tup");
DEF(YLmetG,"goo/boot","<met>");
DEF(YPsymbols_readyQ,"goo/boot","%symbols-ready?");
DEF(Yclass_gens_setter,"goo/boot","class-gens-setter");
DEF(YOelt,"goo/boot","@elt");
DEF(YLstrG,"goo/boot","<str>");
DEF(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YPadd_met,"goo/boot","%add-met");
DEF(YPclasses_readyQ,"goo/boot","%classes-ready?");
DEF(Yprop_owner,"goo/boot","prop-owner");
DEF(Yorder_specs,"goo/boot","order-specs");
DEF(YLtupG,"goo/boot","<tup>");
DEF(Yclass_gens,"goo/boot","class-gens");
DEF(YLfunG,"goo/boot","<fun>");
DEF(Yclass_id,"goo/boot","class-id");
DEF(Yapp_args,"goo/boot","app-args");
DEF(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DEF(Yproperty_type_error,"goo/boot","property-type-error");
DEF(Yclass_mets_setter,"goo/boot","class-mets-setter");
DEF(Ygen_cache_classes,"goo/boot","gen-cache-classes");
DEF(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(YDmin_int,"goo/boot","$min-int");
DEF(YLflatG,"goo/boot","<flat>");
DEF(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(Yargument_type_error,"goo/boot","argument-type-error");
DEF(Ynul,"goo/boot","nul");
DEF(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(Yerror,"goo/boot","error");
DEF(Yopts_tup_storage,"goo/boot","opts-tup-storage");
DEF(YOalter,"goo/boot","@alter");
DEF(Yclass_prop_len,"goo/boot","class-prop-len");
DEF(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(YPearly_dispatch,"goo/boot","%early-dispatch");
DEF(Yone_nil,"goo/boot","one-nil");
DEF(YPTstart_running_atT,"goo/boot","%*start-running-at*");
DEF(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(YLlstG,"goo/boot","<lst>");
DEF(YOdel_dups,"goo/boot","@del-dups");
DEF(YOall2Q,"goo/boot","@all2?");
DEF(Ycpl_error,"goo/boot","cpl-error");
DEF(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(YLseqXG,"goo/boot","<seq!>");
DEF(Ynul_prop,"goo/boot","nul-prop");
DEF(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
DEF(YLfun_infoG,"goo/boot","<fun-info>");
DEF(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
DEF(Yproduct_elts,"goo/boot","product-elts");
DEF(YLseqIG,"goo/boot","<seq.>");
DEF(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(Yarity_error,"goo/boot","arity-error");
DEF(YOtype_equalQ,"goo/boot","@type-equal?");
DEF(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YOdo,"goo/boot","@do");
DEF(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
DEF(YLseqG,"goo/boot","<seq>");
DEF(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
DEF(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
DEF(Yas_error,"goo/boot","as-error");
DEF(Yarithmetic_error,"goo/boot","arithmetic-error");
DEF(YLcolXG,"goo/boot","<col!>");
DEF(YOanyQ,"goo/boot","@any?");
DEF(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YOmemQ,"goo/boot","@mem?");
DEF(Yopts_count,"goo/boot","opts-count");
DEF(Ysym_name,"goo/boot","sym-name");
DEF(YDgen_cache_classes_offset,"goo/boot","$gen-cache-classes-offset");
DEF(YOsubtypeQ,"goo/boot","@subtype?");
DEF(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YLsigG,"goo/boot","<sig>");
DEF(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(Yclass_children,"goo/boot","class-children");
DEF(Yinternal_error,"goo/boot","internal-error");
DEF(YLcolIG,"goo/boot","<col.>");
DEF(Ytype_error,"goo/boot","type-error");
DEF(Yfun_env,"goo/boot","fun-env");
DEF(YLsymG,"goo/boot","<sym>");
DEF(YOallQ,"goo/boot","@all?");
DEF(YtT,"goo/boot","t*");
DEF(YLcolG,"goo/boot","<col>");
DEF(YDmax_int,"goo/boot","$max-int");
DEF(Yclass_children_setter,"goo/boot","class-children-setter");
DEF(YOpick,"goo/boot","@pick");
DEF(Yprop_init,"goo/boot","prop-init");
DEF(YPrnul,"goo/boot","%rnul");
DEF(Yfun_sig,"goo/boot","fun-sig");
DEF(Ymay_isaQ,"goo/boot","may-isa?");
DEF(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(Yrange_error,"goo/boot","range-error");
DEF(YLrepG,"goo/boot","<rep>");
DEF(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(Yunion_elts,"goo/boot","union-elts");
DEF(YPPmacro,"goo/boot","%%macro");
DEF(Ysig_specs_setter,"goo/boot","sig-specs-setter");
DEF(YPfalse,"goo/boot","%false");
DEF(YPprop_offset,"goo/boot","%prop-offset");
DEF(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YLlocG,"goo/boot","<loc>");
DEF(Yclass_forward,"goo/boot","class-forward");
DEF(YOrevX,"goo/boot","@rev!");
DEF(YOfind,"goo/boot","@find");
DEF(Yfun_info_setter,"goo/boot","fun-info-setter");
DEF(YOnew,"goo/boot","@new");
DEF(YLfloG,"goo/boot","<flo>");
DEF(YPTused_symbols_too_earlyT,"goo/boot","%*used-symbols-too-early*");
DEF(Ysig_specs,"goo/boot","sig-specs");
DEF(YOmap,"goo/boot","@map");
DEF(Ysyntax_error,"goo/boot","syntax-error");
DEF(YOlit,"goo/boot","@lit");
DEF(YLfixnumG,"goo/boot","<fixnum>");
DEF(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(Yopts_location,"goo/boot","opts-location");
DEF(Yfun_info,"goo/boot","fun-info");
DEF(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YOOnulQ,"goo/boot","@@nul?");
DEF(YLintG,"goo/boot","<int>");
DEF(Yfab_sym,"goo/boot","fab-sym");
DEF(Ynot,"goo/boot","not");
DEF(YLpropG,"goo/boot","<prop>");
DEF(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
DEF(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YLnumG,"goo/boot","<num>");
DEF(YOcat2,"goo/boot","@cat2");
DEF(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
DEF(YLproductG,"goo/boot","<product>");
DEF(Ytype_class,"goo/boot","type-class");
DEF(Ysig_val,"goo/boot","sig-val");
DEF(Yapp_filename,"goo/boot","app-filename");
DEF(Yfun_info_names,"goo/boot","fun-info-names");
DEF(Yclass_parents_setter,"goo/boot","class-parents-setter");
DEF(Ynew,"goo/boot","new");
DEF(Ytail_setter,"goo/boot","tail-setter");
DEF(Yfun_info_count,"goo/boot","fun-info-count");
DEF(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YLunionG,"goo/boot","<union>");
DEF(YOrev,"goo/boot","@rev");
DEF(YTearly_classesT,"goo/boot","*early-classes*");
DEF(Ybox_value_setter,"goo/boot","box-value-setter");
DEF(YLchrG,"goo/boot","<chr>");
DEF(Yclass_parents,"goo/boot","class-parents");
DEF(Yfab_pair,"goo/boot","fab-pair");
DEF(Ytail,"goo/boot","tail");
DEF(Yclass_props,"goo/boot","class-props");
DEF(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(Yfun_cache,"goo/boot","fun-cache");
DEF(Yprop_type,"goo/boot","prop-type");
DEF(YOOEE,"goo/boot","@@==");
DEF(YLsubclassG,"goo/boot","<subclass>");
DEF(YLmagG,"goo/boot","<mag>");
DEF(YDnum_int_bits,"goo/boot","$num-int-bits");
DEF(YDgen_cache_singletons_offset,"goo/boot","$gen-cache-singletons-offset");
DEF(Yprop_offset,"goo/boot","prop-offset");
DEF(Ynarity_error,"goo/boot","narity-error");
DEF(YPpatch_early_generic,"goo/boot","%patch-early-generic");
DEF(Ybox_value,"goo/boot","box-value");
DEF(Yprop_setter,"goo/boot","prop-setter");
DEF(YisaQ,"goo/boot","isa?");
DEF(YLsingletonG,"goo/boot","<singleton>");
DEF(YLboxG,"goo/boot","<box>");
DEF(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YOtall2Q,"goo/boot","@tall2?");
DEF(YPdispatch,"goo/boot","%dispatch");
DEF(YLopts_tupG,"goo/boot","<opts-tup>");
DEF(Ytype_object,"goo/boot","type-object");
DEF(YLlogG,"goo/boot","<log>");
DEF(Yclass_mets,"goo/boot","class-mets");
DEF(Ynil,"goo/boot","nil");
DEF(Yprops_of,"goo/boot","props-of");
DEF(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YLanyG,"goo/boot","<any>");
DEF(Ylst,"goo/boot","lst");
DEF(YPtnul,"goo/boot","%tnul");
DEF(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(YLoptsG,"goo/boot","<opts>");
DEF(Yclass_name,"goo/boot","class-name");
DEF(YOfold,"goo/boot","@fold");
DEF(Yunexec,"goo/boot","unexec");
DEF(YOtanyQ,"goo/boot","@tany?");
DEF(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(Yassert_error,"goo/boot","assert-error");
DEF(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
DEF(YPadd_prop,"goo/boot","%add-prop");
DEF(YPsymbols,"goo/boot","%symbols");
DEF(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
DEF(Yprop_getter,"goo/boot","prop-getter");
DEF(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YOtup,"goo/boot","@tup");
DEF(YPfinalize_propsX,"goo/boot","%finalize-props!");
DEF(YsubtypeQ,"goo/boot","subtype?");
DEF(YOfill,"goo/boot","@fill");
DEF(YPtrue,"goo/boot","%true");
DEF(YOlst,"goo/boot","@lst");
DEF(Ysig_arity,"goo/boot","sig-arity");
DEF(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YLgenG,"goo/boot","<gen>");
DEF(Yfun_info_name,"goo/boot","fun-info-name");
DEF(Yclass_row,"goo/boot","class-row");
DEF(Yhead_setter,"goo/boot","head-setter");
DEF(Yfun_info_src,"goo/boot","fun-info-src");
DEF(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YLclassG,"goo/boot","<class>");
DEF(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
DEF(Yfun_mets_setter,"goo/boot","fun-mets-setter");
DEF(Yfun_code,"goo/boot","fun-code");
DEF(YPsnul,"goo/boot","%snul");
DEF(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(YLtypeG,"goo/boot","<type>");
DEF(YPcollect_direct_props,"goo/boot","%collect-direct-props");
DEF(YOfab,"goo/boot","@fab");
DEF(Yhead,"goo/boot","head");
DEF(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(Yfun_mets,"goo/boot","fun-mets");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_291);
DEFLIT(lit_26);
DEFLIT(lit_119);
DEFLIT(lit_164);
DEFLIT(lit_230);
DEFLIT(lit_80);
DEFLIT(lit_205);
DEFLIT(lit_135);
DEFLIT(lit_277);
DEFLIT(lit_67);
DEFLIT(lit_180);
DEFLIT(lit_165);
DEFLIT(lit_14);
DEFLIT(lit_332);
DEFLIT(lit_250);
DEFLIT(lit_243);
DEFLIT(lit_303);
DEFLIT(lit_203);
DEFLIT(lit_169);
DEFLIT(lit_2);
DEFLIT(lit_321);
DEFLIT(lit_153);
DEFLIT(lit_47);
DEFLIT(lit_76);
DEFLIT(lit_323);
DEFLIT(lit_32);
DEFLIT(lit_229);
DEFLIT(lit_103);
DEFLIT(lit_186);
DEFLIT(lit_167);
DEFLIT(lit_122);
DEFLIT(lit_300);
DEFLIT(lit_133);
DEFLIT(lit_193);
DEFLIT(lit_24);
DEFLIT(lit_260);
DEFLIT(lit_11);
DEFLIT(lit_209);
DEFLIT(lit_275);
DEFLIT(lit_310);
DEFLIT(lit_84);
DEFLIT(lit_297);
DEFLIT(lit_182);
DEFLIT(lit_155);
DEFLIT(lit_139);
DEFLIT(lit_129);
DEFLIT(lit_44);
DEFLIT(lit_312);
DEFLIT(lit_255);
DEFLIT(lit_190);
DEFLIT(lit_94);
DEFLIT(lit_134);
DEFLIT(lit_197);
DEFLIT(lit_210);
DEFLIT(lit_204);
DEFLIT(lit_173);
DEFLIT(lit_283);
DEFLIT(lit_151);
DEFLIT(lit_45);
DEFLIT(lit_39);
DEFLIT(lit_43);
DEFLIT(lit_329);
DEFLIT(lit_19);
DEFLIT(lit_38);
DEFLIT(lit_327);
DEFLIT(lit_313);
DEFLIT(lit_160);
DEFLIT(lit_328);
DEFLIT(lit_127);
DEFLIT(lit_263);
DEFLIT(lit_284);
DEFLIT(lit_184);
DEFLIT(lit_130);
DEFLIT(lit_200);
DEFLIT(lit_81);
DEFLIT(lit_123);
DEFLIT(lit_228);
DEFLIT(lit_49);
DEFLIT(lit_294);
DEFLIT(lit_271);
DEFLIT(lit_281);
DEFLIT(lit_289);
DEFLIT(lit_319);
DEFLIT(lit_138);
DEFLIT(lit_83);
DEFLIT(lit_125);
DEFLIT(lit_69);
DEFLIT(lit_109);
DEFLIT(lit_1);
DEFLIT(lit_241);
DEFLIT(lit_242);
DEFLIT(lit_322);
DEFLIT(lit_177);
DEFLIT(lit_202);
DEFLIT(lit_159);
DEFLIT(lit_65);
DEFLIT(lit_37);
DEFLIT(lit_31);
DEFLIT(lit_317);
DEFLIT(lit_330);
DEFLIT(lit_92);
DEFLIT(lit_85);
DEFLIT(lit_268);
DEFLIT(lit_150);
DEFLIT(lit_217);
DEFLIT(lit_316);
DEFLIT(lit_105);
DEFLIT(lit_112);
DEFLIT(lit_318);
DEFLIT(lit_274);
DEFLIT(lit_218);
DEFLIT(lit_248);
DEFLIT(lit_10);
DEFLIT(lit_238);
DEFLIT(lit_251);
DEFLIT(lit_87);
DEFLIT(lit_158);
DEFLIT(lit_52);
DEFLIT(lit_331);
DEFLIT(lit_136);
DEFLIT(lit_293);
DEFLIT(lit_28);
DEFLIT(lit_35);
DEFLIT(lit_192);
DEFLIT(lit_61);
DEFLIT(lit_187);
DEFLIT(lit_72);
DEFLIT(lit_262);
DEFLIT(lit_194);
DEFLIT(lit_272);
DEFLIT(lit_265);
DEFLIT(lit_305);
DEFLIT(lit_86);
DEFLIT(lit_29);
DEFLIT(lit_292);
DEFLIT(lit_8);
DEFLIT(lit_216);
DEFLIT(lit_100);
DEFLIT(lit_179);
DEFLIT(lit_211);
DEFLIT(lit_25);
DEFLIT(lit_118);
DEFLIT(lit_110);
DEFLIT(lit_142);
DEFLIT(lit_239);
DEFLIT(lit_259);
DEFLIT(lit_288);
DEFLIT(lit_12);
DEFLIT(lit_48);
DEFLIT(lit_3);
DEFLIT(lit_73);
DEFLIT(lit_102);
DEFLIT(lit_95);
DEFLIT(lit_178);
DEFLIT(lit_17);
DEFLIT(lit_156);
DEFLIT(lit_50);
DEFLIT(lit_307);
DEFLIT(lit_254);
DEFLIT(lit_188);
DEFLIT(lit_22);
DEFLIT(lit_74);
DEFLIT(lit_225);
DEFLIT(lit_70);
DEFLIT(lit_226);
DEFLIT(lit_140);
DEFLIT(lit_240);
DEFLIT(lit_276);
DEFLIT(lit_120);
DEFLIT(lit_21);
DEFLIT(lit_115);
DEFLIT(lit_9);
DEFLIT(lit_196);
DEFLIT(lit_264);
DEFLIT(lit_124);
DEFLIT(lit_214);
DEFLIT(lit_64);
DEFLIT(lit_314);
DEFLIT(lit_5);
DEFLIT(lit_267);
DEFLIT(lit_143);
DEFLIT(lit_171);
DEFLIT(lit_16);
DEFLIT(lit_114);
DEFLIT(lit_191);
DEFLIT(lit_96);
DEFLIT(lit_91);
DEFLIT(lit_224);
DEFLIT(lit_207);
DEFLIT(lit_176);
DEFLIT(lit_46);
DEFLIT(lit_222);
DEFLIT(lit_320);
DEFLIT(lit_42);
DEFLIT(lit_99);
DEFLIT(lit_15);
DEFLIT(lit_185);
DEFLIT(lit_0);
DEFLIT(lit_286);
DEFLIT(lit_311);
DEFLIT(lit_66);
DEFLIT(lit_162);
DEFLIT(lit_326);
DEFLIT(lit_301);
DEFLIT(lit_7);
DEFLIT(lit_333);
DEFLIT(lit_144);
DEFLIT(lit_132);
DEFLIT(lit_54);
DEFLIT(lit_246);
DEFLIT(lit_253);
DEFLIT(lit_236);
DEFLIT(lit_223);
DEFLIT(lit_174);
DEFLIT(lit_227);
DEFLIT(lit_163);
DEFLIT(lit_57);
DEFLIT(lit_141);
DEFLIT(lit_302);
DEFLIT(lit_36);
DEFLIT(lit_106);
DEFLIT(lit_290);
DEFLIT(lit_53);
DEFLIT(lit_77);
DEFLIT(lit_324);
DEFLIT(lit_199);
DEFLIT(lit_90);
DEFLIT(lit_273);
DEFLIT(lit_34);
DEFLIT(lit_101);
DEFLIT(lit_23);
DEFLIT(lit_249);
DEFLIT(lit_30);
DEFLIT(lit_235);
DEFLIT(lit_208);
DEFLIT(lit_287);
DEFLIT(lit_278);
DEFLIT(lit_221);
DEFLIT(lit_108);
DEFLIT(lit_309);
DEFLIT(lit_266);
DEFLIT(lit_41);
DEFLIT(lit_257);
DEFLIT(lit_6);
DEFLIT(lit_189);
DEFLIT(lit_183);
DEFLIT(lit_131);
DEFLIT(lit_161);
DEFLIT(lit_55);
DEFLIT(lit_206);
DEFLIT(lit_33);
DEFLIT(lit_104);
DEFLIT(lit_315);
DEFLIT(lit_13);
DEFLIT(lit_247);
DEFLIT(lit_234);
DEFLIT(lit_295);
DEFLIT(lit_75);
DEFLIT(lit_117);
DEFLIT(lit_40);
DEFLIT(lit_195);
DEFLIT(lit_126);
DEFLIT(lit_220);
DEFLIT(lit_215);
DEFLIT(lit_219);
DEFLIT(lit_97);
DEFLIT(lit_306);
DEFLIT(lit_213);
DEFLIT(lit_279);
DEFLIT(lit_113);
DEFLIT(lit_148);
DEFLIT(lit_172);
DEFLIT(lit_59);
DEFLIT(lit_233);
DEFLIT(lit_98);
DEFLIT(lit_181);
DEFLIT(lit_4);
DEFLIT(lit_270);
DEFLIT(lit_149);
DEFLIT(lit_111);
DEFLIT(lit_56);
DEFLIT(lit_145);
DEFLIT(lit_231);
DEFLIT(lit_258);
DEFLIT(lit_198);
DEFLIT(lit_325);
DEFLIT(lit_304);
DEFLIT(lit_128);
DEFLIT(lit_18);
DEFLIT(lit_93);
DEFLIT(lit_107);
DEFLIT(lit_269);
DEFLIT(lit_232);
DEFLIT(lit_58);
DEFLIT(lit_154);
DEFLIT(lit_299);
DEFLIT(lit_168);
DEFLIT(lit_62);
DEFLIT(lit_146);
DEFLIT(lit_296);
DEFLIT(lit_282);
DEFLIT(lit_68);
DEFLIT(lit_245);
DEFLIT(lit_88);
DEFLIT(lit_82);
DEFLIT(lit_51);
DEFLIT(lit_152);
DEFLIT(lit_285);
DEFLIT(lit_63);
DEFLIT(lit_147);
DEFLIT(lit_89);
DEFLIT(lit_298);
DEFLIT(lit_261);
DEFLIT(lit_27);
DEFLIT(lit_212);
DEFLIT(lit_201);
DEFLIT(lit_78);
DEFLIT(lit_121);
DEFLIT(lit_256);
DEFLIT(lit_175);
DEFLIT(lit_137);
DEFLIT(lit_170);
DEFLIT(lit_157);
DEFLIT(lit_280);
DEFLIT(lit_71);
DEFLIT(lit_252);
DEFLIT(lit_244);
DEFLIT(lit_308);
DEFLIT(lit_79);
DEFLIT(lit_116);
DEFLIT(lit_166);
DEFLIT(lit_60);
DEFLIT(lit_237);
DEFLIT(lit_20);

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
extern P YPfun_info_inlineableQ_setter (P,P);
extern P YPfun_info_inlineableQ (P);
extern P YPfun_info (P,P,P,P,P,P);
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
LOCFOR(fun_118);
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
extern P YPfab_met_inlineable (P,P,P,P,P,P);
extern P YPfab_met (P,P,P,P,P,P);
FUNFOR(YPadd_prop);
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
LOCFOR(fun_346);
FUNFOR(YOmemQ);
LOCFOR(fun_348);
FUNFOR(YOdel_dups);
FUNFOR(YOopts_as_lst);
FUNFOR(YOlst);
extern P YOtlen (P);
extern P YOtelt (P,P);
extern P YOtelt_setter (P,P,P);
FUNFOR(YOtanyQ);
FUNFOR(YOtall2Q);
extern P YPto_tup (P);
LOCFOR(fun_into_358);
FUNFOR(YOtup);
LOCFOR(fun_into_360);
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

P YPfun_info_inlineableQ_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

INLINE P YPfun_info_inlineableQ(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPfun_info(P fun_info_name_,P fun_info_names_,P fun_info_src_,P fun_info_src_loc_,P fun_info_count_,P fun_info_inlineableQ_) {
  P classF29;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLfun_infoG),(P)6);
  classF29 = T0;
  (P)YPprop_elt_setter(Ynil,classF29,(P)6);
  (P)YPprop_elt_setter(fun_info_inlineableQ_,classF29,(P)5);
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

LOCCODEDEF(fun_118) {
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
  T2 = (P)YPfun_info(name_,names_,src_loc_,YPfalse,YPint((P)0),YPfalse);
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

P YPfab_met_inlineable(P code_,P sig_,P name_,P names_,P src_loc_,P src_) {
  P T0,T1;
DEFCREGS();
  T1 = (P)YPfun_info(name_,names_,src_loc_,src_,YPint((P)0),YPtrue);
  T0 = (P)YPmet(code_,sig_,T1,YPfalse);
  return T0;
}

P YPfab_met(P code_,P sig_,P name_,P names_,P src_loc_,P src_) {
  P T0,T1;
DEFCREGS();
  T1 = (P)YPfun_info(name_,names_,src_loc_,src_,YPint((P)0),YPfalse);
  T0 = (P)YPmet(code_,sig_,T1,YPfalse);
  return T0;
}

FUNCODEDEF(YPadd_prop) {
  P class_,prop_;
  P xF96;
  P T0,T1,T2;
LINK_STACK();
  ARG(class_, 0);
  ARG(prop_, 1);
  xF96 = class_;
  T2 = (P)YPprop_elt(xF96,(P)3);
  T1 = (P)YPpair(prop_,T2);
  T0 = (P)YPclass_direct_props_setter(T1,class_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_179) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLboxG),VARREF(Ybox_value));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_180) {
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

LOCCODEDEF(fun_181) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_182) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsrc_locG),VARREF(Ysrc_loc_line));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_183) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_184) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsrc_locG),VARREF(Ysrc_loc_file));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_185) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_186) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Yhead));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_187) {
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Ytail));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_190) {
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

LOCCODEDEF(fun_191) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_192) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsymG),VARREF(Ysym_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_193) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_194) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_prop_len));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_195) {
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

LOCCODEDEF(fun_196) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_197) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_198) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_199) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_parents));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_parents));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_direct_props));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_direct_props));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_ancestors));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_ancestors));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_props));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_props));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_children));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_children));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_gens));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_gens));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_mets));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_218) {
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

LOCCODEDEF(fun_219) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_220) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_forward));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_221) {
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

LOCCODEDEF(fun_222) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_223) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_id));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_224) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)-1));
}

LOCCODEDEF(fun_225) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_row));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_226) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

LOCCODEDEF(fun_227) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsingletonG),VARREF(Ytype_object));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_228) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_229) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsubclassG),VARREF(Ytype_class));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_230) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_231) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLunionG),VARREF(Yunion_elts));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_232) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_233) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLproductG),VARREF(Yproduct_elts));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_234) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_235) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_owner));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_236) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_237) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_getter));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_238) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_239) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_setter));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_240) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_241) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_type));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_242) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_243) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_init));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_244) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_245) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = fun_244;
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_246) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_247) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_248) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_249) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_250) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_251) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_252) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_specs));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_specs));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_256) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_257) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_naryQ));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_naryQ));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_259) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

LOCCODEDEF(fun_260) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_arity));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_261) {
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

LOCCODEDEF(fun_262) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_263) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_val));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_264) {
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

LOCCODEDEF(fun_265) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

LOCCODEDEF(fun_266) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_unification_vars));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_267) {
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

LOCCODEDEF(fun_268) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_269) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_270) {
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

LOCCODEDEF(fun_271) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

LOCCODEDEF(fun_272) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_names));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_273) {
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

LOCCODEDEF(fun_274) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_275) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_src_loc));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_src_loc));
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_src));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_279) {
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

LOCCODEDEF(fun_280) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

LOCCODEDEF(fun_281) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_count));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_282) {
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

LOCCODEDEF(fun_283) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_284) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_inlineableQ));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_285) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfun_infoG),VARREF(Yfun_info_inlineableQ));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_286) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

LOCCODEDEF(fun_287) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_code));
  T0 = (P)YPprop_elt(x_,T1);
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
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_sig));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_290) {
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

LOCCODEDEF(fun_291) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

LOCCODEDEF(fun_292) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_info));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_293) {
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

LOCCODEDEF(fun_294) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

LOCCODEDEF(fun_295) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_env));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_296) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

LOCCODEDEF(fun_297) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_mets));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_298) {
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

LOCCODEDEF(fun_299) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

LOCCODEDEF(fun_300) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_cache));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_301) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

LOCCODEDEF(fun_302) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_location));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_303) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_304) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_count));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_305) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_306) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLopts_tupG),VARREF(Yopts_tup_storage));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_307) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(YPcollect_direct_props) {
  P class_;
  P xF101;
  P xF100;
  P parentF99;
  P xF98;
  P xF97;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(class_, 0);
  xF97 = class_;
  T4 = (P)YPprop_elt(xF97,(P)2);
  xF98 = T4;
  T3 = (P)YPprop_elt(xF98,(P)0);
  parentF99 = T3;
  xF100 = parentF99;
  T1 = (P)YPprop_elt(xF100,(P)5);
  xF101 = class_;
  T2 = (P)YPprop_elt(xF101,(P)3);
  T0 = (P)YPcat2(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPfinalize_propsX) {
  P name_,class_;
  P tF106;
  P xF105;
  P xF104;
  P xF103;
  P xF102;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(name_, 0);
  ARG(class_, 1);
  (P)YPclass_name_setter(name_,class_);
  xF102 = class_;
  T1 = (P)YPprop_elt(xF102,(P)3);
  T0 = (P)YPrevX(T1);
  (P)YPclass_direct_props_setter(T0,class_);
  T2 = CALL1(1,VARREF(YPcollect_direct_props),class_);
  (P)YPclass_props_setter(T2,class_);
  xF103 = class_;
  T6 = (P)YPprop_elt(xF103,(P)5);
  T5 = (P)YPPlen(T6);
  xF104 = T5;
  xF105 = xF104;
  tF106 = (P)1;
  T4 = (P)YPiLL(xF105,(P)2);
  T3 = (P)YPiv(T4,tF106);
  (P)YPclass_prop_len_setter(T3,class_);
UNLINK_STACK();
  QRET(class_);
}

INLINE P YOhead(P x_) {
  P xF107;
  P T0;
DEFCREGS();
  xF107 = x_;
  T0 = (P)YPprop_elt(xF107,(P)0);
  return T0;
}

P YOhead_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPhead_setter(z_,x_);
  return T0;
}

INLINE P YOtail(P x_) {
  P xF108;
  P T0;
DEFCREGS();
  xF108 = x_;
  T0 = (P)YPprop_elt(xF108,(P)1);
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
  P xF112;
  P xF111;
  P xF110;
  P xF109;
  P T0,T1,T2,T3;
DEFCREGS();
  xF109 = x_;
  xF110 = xF109;
  T2 = (P)YPiGG(xF110,(P)2);
  xF111 = y_;
  xF112 = xF111;
  T3 = (P)YPiGG(xF112,(P)2);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOA(P x_,P y_) {
  P tF119;
  P xF118;
  P xF117;
  P xF116;
  P xF115;
  P xF114;
  P xF113;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  xF113 = x_;
  xF114 = xF113;
  T3 = (P)YPiGG(xF114,(P)2);
  xF115 = y_;
  xF116 = xF115;
  T4 = (P)YPiGG(xF116,(P)2);
  T2 = (P)YPiA(T3,T4);
  xF117 = T2;
  xF118 = xF117;
  tF119 = (P)1;
  T1 = (P)YPiLL(xF118,(P)2);
  T0 = (P)YPiv(T1,tF119);
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
  P xF120;
  P T0,T1;
DEFCREGS();
  xF120 = x_;
  T1 = (P)YPeqQ(xF120,VARREF(Ynil));
  T0 = (P)YPbb(T1);
  return T0;
}

FUNCODEDEF(YOOnulQ) {
  P x_;
  P xF121;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF121 = x_;
  T1 = (P)YPeqQ(xF121,VARREF(Ynil));
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
  P tF124;
  P xF123;
  P xF122;
  P T0,T1,T2;
DEFCREGS();
  T2 = (P)YPPlen(x_);
  xF122 = T2;
  xF123 = xF122;
  tF124 = (P)1;
  T1 = (P)YPiLL(xF123,(P)2);
  T0 = (P)YPiv(T1,tF124);
  return T0;
}

INLINE P YOoelt(P x_,P i_) {
  P xF127;
  P xF126;
  P xF125;
  P T0,T1,T2,T3;
DEFCREGS();
  xF125 = x_;
  T1 = (P)YPprop_elt(xF125,(P)0);
  xF126 = i_;
  xF127 = xF126;
  T3 = (P)YPiGG(xF127,(P)2);
  T2 = (P)YPi_((P)0,T3);
  T0 = (P)YPloc_off(T1,T2);
  return T0;
}

INLINE P YOoelt_setter(P z_,P x_,P i_) {
  P xF130;
  P xF129;
  P xF128;
  P T0,T1,T2,T3;
DEFCREGS();
  xF128 = x_;
  T1 = (P)YPprop_elt(xF128,(P)0);
  xF129 = i_;
  xF130 = xF129;
  T3 = (P)YPiGG(xF130,(P)2);
  T2 = (P)YPi_((P)0,T3);
  T0 = (P)YPloc_off_setter(z_,T1,T2);
  return T0;
}

INLINE P YOolen(P x_) {
  P xF131;
  P T0;
DEFCREGS();
  xF131 = x_;
  T0 = (P)YPprop_elt(xF131,(P)1);
  return T0;
}

FUNCODEDEF(YOallQ) {
  P test_,c_;
  P xF138;
  P xF137;
  P xF136;
  P xF135;
  P xF134;
  P xF133;
  P pF132;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  pF132 = c_;
  LOOP_8: {
    P a8_0;
    xF133 = pF132;
    xF134 = xF133;
    T2 = (P)YPeqQ(xF134,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPtrue;
    } else {
      xF135 = pF132;
      xF136 = xF135;
      T5 = (P)YPprop_elt(xF136,(P)0);
      T4 = CALL1(0,test_,T5);
      if (T4 != YPfalse) {
        xF137 = pF132;
        xF138 = xF137;
        T7 = (P)YPprop_elt(xF138,(P)1);
        a8_0 = T7;
        pF132 = a8_0;
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
  P xF141;
  P pyF140;
  P pxF139;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  pxF139 = x_;
  pyF140 = y_;
  LOOP_9: {
    P a9_0,a9_1;
    xF141 = pxF139;
    xF142 = xF141;
    T2 = (P)YPeqQ(xF142,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      xF143 = pyF140;
      xF144 = xF143;
      T4 = (P)YPeqQ(xF144,VARREF(Ynil));
      T3 = (P)YPbb(T4);
      T0 = T3;
    } else {
      xF145 = pyF140;
      xF146 = xF145;
      T7 = (P)YPeqQ(xF146,VARREF(Ynil));
      T6 = (P)YPbb(T7);
      if (T7) {
        T5 = YPfalse;
      } else {
        xF147 = pxF139;
        xF148 = xF147;
        T10 = (P)YPprop_elt(xF148,(P)0);
        xF149 = pyF140;
        xF150 = xF149;
        T11 = (P)YPprop_elt(xF150,(P)0);
        T9 = CALL2(0,test_,T10,T11);
        if (T9 != YPfalse) {
          xF151 = pxF139;
          xF152 = xF151;
          T13 = (P)YPprop_elt(xF152,(P)1);
          xF153 = pyF140;
          xF154 = xF153;
          T14 = (P)YPprop_elt(xF154,(P)1);
          a9_0 = T13;
          a9_1 = T14;
          pxF139 = a9_0;
          pyF140 = a9_1;
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
  P xF173;
  P xF172;
  P tF171;
  P xF170;
  P xF169;
  P xF168;
  P xF167;
  P xF166;
  P xF165;
  P yF164;
  P xF163;
  P xF162;
  P xF161;
  P yF160;
  P xF159;
  P yF158;
  P xF157;
  P xF156;
  P countF155;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  check_type(YPint((P)0),VARREF(YLfixnumG));
  countF155 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF156 = x_;
  LOOP_10: {
    P a10_0,a10_1;
    xF157 = xF156;
    yF158 = Ynil;
    T2 = (P)YPeqQ(xF157,yF158);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = VARREF(Ynul);
    } else {
      xF159 = countF155;
      yF160 = key_;
      T5 = (P)YPiE(xF159,yF160);
      T4 = (P)YPbb(T5);
      if (T5) {
        xF161 = xF156;
        xF162 = xF161;
        T6 = (P)YPprop_elt(xF162,(P)0);
        T3 = T6;
      } else {
        xF163 = countF155;
        yF164 = YPint((P)1);
        xF165 = xF163;
        xF166 = xF165;
        T11 = (P)YPiGG(xF166,(P)2);
        xF167 = yF164;
        xF168 = xF167;
        T12 = (P)YPiGG(xF168,(P)2);
        T10 = (P)YPiA(T11,T12);
        xF169 = T10;
        xF170 = xF169;
        tF171 = (P)1;
        T9 = (P)YPiLL(xF170,(P)2);
        T8 = (P)YPiv(T9,tF171);
        xF172 = xF156;
        xF173 = xF172;
        T13 = (P)YPprop_elt(xF173,(P)1);
        a10_0 = T8;
        a10_1 = T13;
        countF155 = a10_0;
        xF156 = a10_1;
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
  P xF178;
  P xF177;
  P xF176;
  P xF175;
  P pF174;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(f_, 1);
  pF174 = x_;
  LOOP_11: {
    P a11_0;
    xF175 = pF174;
    xF176 = xF175;
    T2 = (P)YPeqQ(xF176,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = x_;
    } else {
      (P)YOhead_setter(f_,pF174);
      xF177 = pF174;
      xF178 = xF177;
      T4 = (P)YPprop_elt(xF178,(P)1);
      a11_0 = T4;
      pF174 = a11_0;
      goto LOOP_11;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOanyQ) {
  P test_,c_;
  P xF186;
  P xF185;
  P tmpF184;
  P xF183;
  P xF182;
  P xF181;
  P xF180;
  P pF179;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  pF179 = c_;
  LOOP_12: {
    P a12_0;
    xF180 = pF179;
    xF181 = xF180;
    T2 = (P)YPeqQ(xF181,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPfalse;
    } else {
      xF182 = pF179;
      xF183 = xF182;
      T7 = (P)YPprop_elt(xF183,(P)0);
      T6 = CALL1(0,test_,T7);
      tmpF184 = T6;
      if (tmpF184 != YPfalse) {
        T3 = tmpF184;
      } else {
        xF185 = pF179;
        xF186 = xF185;
        T5 = (P)YPprop_elt(xF186,(P)1);
        a12_0 = T5;
        pF179 = a12_0;
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
  P xF194;
  P xF193;
  P xF192;
  P xF191;
  P xF190;
  P xF189;
  P resF188;
  P xF187;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  xF187 = x_;
  resF188 = Ynil;
  LOOP_13: {
    P a13_0,a13_1;
    xF189 = xF187;
    xF190 = xF189;
    T2 = (P)YPeqQ(xF190,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL1(1,VARREF(YOrevX),resF188);
      T0 = T3;
    } else {
      xF191 = xF187;
      xF192 = xF191;
      T5 = (P)YPprop_elt(xF192,(P)1);
      xF193 = xF187;
      xF194 = xF193;
      T8 = (P)YPprop_elt(xF194,(P)0);
      T7 = CALL1(1,f_,T8);
      T6 = (P)YOpair(T7,resF188);
      a13_0 = T5;
      a13_1 = T6;
      xF187 = a13_0;
      resF188 = a13_1;
      goto LOOP_13;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOpick) {
  P f_,x_;
  P xF203;
  P xF202;
  P hF201;
  P xF200;
  P xF199;
  P xF198;
  P xF197;
  P resF196;
  P xF195;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  xF195 = x_;
  resF196 = Ynil;
  LOOP_14: {
    P a14_0,a14_1;
    xF197 = xF195;
    xF198 = xF197;
    T2 = (P)YPeqQ(xF198,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL1(1,VARREF(YOrevX),resF196);
      T0 = T3;
    } else {
      xF199 = xF195;
      xF200 = xF199;
      T9 = (P)YPprop_elt(xF200,(P)0);
      hF201 = T9;
      xF202 = xF195;
      xF203 = xF202;
      T5 = (P)YPprop_elt(xF203,(P)1);
      T7 = CALL1(1,f_,hF201);
      if (T7 != YPfalse) {
        T8 = (P)YOpair(hF201,resF196);
        T6 = T8;
      } else {
        T6 = resF196;
      }
      a14_0 = T5;
      a14_1 = T6;
      xF195 = a14_0;
      resF196 = a14_1;
      goto LOOP_14;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOdo) {
  P f_,x_;
  P xF210;
  P xF209;
  P xF208;
  P xF207;
  P xF206;
  P xF205;
  P xF204;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  xF204 = x_;
  LOOP_15: {
    P a15_0;
    xF205 = xF204;
    xF206 = xF205;
    T2 = (P)YPeqQ(xF206,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPfalse;
    } else {
      xF207 = xF204;
      xF208 = xF207;
      T3 = (P)YPprop_elt(xF208,(P)0);
      CALL1(0,f_,T3);
      xF209 = xF204;
      xF210 = xF209;
      T5 = (P)YPprop_elt(xF210,(P)1);
      a15_0 = T5;
      xF204 = a15_0;
      goto LOOP_15;
      T0 = T4;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOalter) {
  P dst_,src_;
  P xF223;
  P xF222;
  P xF221;
  P xF220;
  P xF219;
  P xF218;
  P xF217;
  P xF216;
  P tmpF215;
  P xF214;
  P xF213;
  P ssF212;
  P dsF211;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  dsF211 = dst_;
  ssF212 = src_;
  LOOP_16: {
    P a16_0,a16_1;
    xF213 = dsF211;
    xF214 = xF213;
    T5 = (P)YPeqQ(xF214,VARREF(Ynil));
    T4 = (P)YPbb(T5);
    tmpF215 = T4;
    if (tmpF215 != YPfalse) {
      T1 = tmpF215;
    } else {
      xF216 = ssF212;
      xF217 = xF216;
      T3 = (P)YPeqQ(xF217,VARREF(Ynil));
      T2 = (P)YPbb(T3);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      xF218 = ssF212;
      xF219 = xF218;
      T6 = (P)YPprop_elt(xF219,(P)0);
      (P)YOhead_setter(T6,dsF211);
      xF220 = dsF211;
      xF221 = xF220;
      T8 = (P)YPprop_elt(xF221,(P)1);
      xF222 = ssF212;
      xF223 = xF222;
      T9 = (P)YPprop_elt(xF223,(P)1);
      a16_0 = T8;
      a16_1 = T9;
      dsF211 = a16_0;
      ssF212 = a16_1;
      goto LOOP_16;
      T0 = T7;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfab) {
  P x_,s_;
  P tF240;
  P xF239;
  P xF238;
  P xF237;
  P xF236;
  P xF235;
  P xF234;
  P yF233;
  P xF232;
  P xF231;
  P xF230;
  P xF229;
  P xF228;
  P yF227;
  P xF226;
  P resF225;
  P iF224;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  check_type(s_,VARREF(YLfixnumG));
  iF224 = s_;
  check_type(Ynil,VARREF(YLlstG));
  resF225 = Ynil;
  LOOP_17: {
    P a17_0,a17_1;
    xF226 = iF224;
    yF227 = YPint((P)0);
    xF228 = xF226;
    xF229 = xF228;
    T3 = (P)YPiGG(xF229,(P)2);
    xF230 = yF227;
    xF231 = xF230;
    T4 = (P)YPiGG(xF231,(P)2);
    T2 = (P)YPiL(T3,T4);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = resF225;
    } else {
      xF232 = iF224;
      yF233 = YPint((P)-1);
      xF234 = xF232;
      xF235 = xF234;
      T9 = (P)YPiGG(xF235,(P)2);
      xF236 = yF233;
      xF237 = xF236;
      T10 = (P)YPiGG(xF237,(P)2);
      T8 = (P)YPiA(T9,T10);
      xF238 = T8;
      xF239 = xF238;
      tF240 = (P)1;
      T7 = (P)YPiLL(xF239,(P)2);
      T6 = (P)YPiv(T7,tF240);
      T11 = (P)YOpair(VARREF(Ynul),resF225);
      a17_0 = T6;
      a17_1 = T11;
      iF224 = a17_0;
      resF225 = a17_1;
      goto LOOP_17;
      T0 = T5;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfold) {
  P combine_,init_,c_;
  P xF248;
  P xF247;
  P xF246;
  P xF245;
  P xF244;
  P xF243;
  P cF242;
  P resF241;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
  resF241 = init_;
  cF242 = c_;
  LOOP_18: {
    P a18_0,a18_1;
    xF243 = cF242;
    xF244 = xF243;
    T2 = (P)YPeqQ(xF244,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = resF241;
    } else {
      xF245 = cF242;
      xF246 = xF245;
      T5 = (P)YPprop_elt(xF246,(P)0);
      T4 = CALL2(0,combine_,resF241,T5);
      xF247 = cF242;
      xF248 = xF247;
      T6 = (P)YPprop_elt(xF248,(P)1);
      a18_0 = T4;
      a18_1 = T6;
      resF241 = a18_0;
      cF242 = a18_1;
      goto LOOP_18;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOrev) {
  P x_;
  P xF256;
  P xF255;
  P xF254;
  P xF253;
  P xF252;
  P xF251;
  P rF250;
  P lF249;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  lF249 = x_;
  rF250 = Ynil;
  LOOP_19: {
    P a19_0,a19_1;
    xF251 = lF249;
    xF252 = xF251;
    T2 = (P)YPeqQ(xF252,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = rF250;
    } else {
      xF253 = lF249;
      xF254 = xF253;
      T4 = (P)YPprop_elt(xF254,(P)1);
      xF255 = lF249;
      xF256 = xF255;
      T6 = (P)YPprop_elt(xF256,(P)0);
      T5 = (P)YOpair(T6,rF250);
      a19_0 = T4;
      a19_1 = T5;
      lF249 = a19_0;
      rF250 = a19_1;
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
  P tF273;
  P xF272;
  P xF271;
  P xF270;
  P xF269;
  P xF268;
  P xF267;
  P yF266;
  P xF265;
  P xF264;
  P xF263;
  P xF262;
  P xF261;
  P xF260;
  P xF259;
  P iF258;
  P cF257;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  cF257 = c_;
  iF258 = YPint((P)0);
  LOOP_20: {
    P a20_0,a20_1;
    xF259 = cF257;
    xF260 = xF259;
    T2 = (P)YPeqQ(xF260,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = VARREF(Ynul);
    } else {
      xF261 = cF257;
      xF262 = xF261;
      T5 = (P)YPprop_elt(xF262,(P)0);
      T4 = CALL1(1,f_,T5);
      if (T4 != YPfalse) {
        T3 = iF258;
      } else {
        xF263 = cF257;
        xF264 = xF263;
        T7 = (P)YPprop_elt(xF264,(P)1);
        xF265 = iF258;
        yF266 = YPint((P)1);
        xF267 = xF265;
        xF268 = xF267;
        T11 = (P)YPiGG(xF268,(P)2);
        xF269 = yF266;
        xF270 = xF269;
        T12 = (P)YPiGG(xF270,(P)2);
        T10 = (P)YPiA(T11,T12);
        xF271 = T10;
        xF272 = xF271;
        tF273 = (P)1;
        T9 = (P)YPiLL(xF272,(P)2);
        T8 = (P)YPiv(T9,tF273);
        a20_0 = T7;
        a20_1 = T8;
        cF257 = a20_0;
        iF258 = a20_1;
        goto LOOP_20;
        T3 = T6;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_346) {
  P y_;
  P yF275;
  P xF274;
  P T0,T1;
LINK_STACK();
  ARG(y_, 0);
  xF274 = FREEREF(0);
  yF275 = y_;
  T1 = (P)YPeqQ(xF274,yF275);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmemQ) {
  P c_,x_;
  P yF277;
  P xF276;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T4 = FUNFAB(fun_346,1,x_);
  T3 = CALL2(1,VARREF(YOfind),T4,c_);
  xF276 = T3;
  yF277 = VARREF(Ynul);
  T2 = (P)YPeqQ(xF276,yF277);
  T1 = (P)YPbb(T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_348) {
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
  T2 = fun_348;
  T1 = CALL3(1,VARREF(YOfold),T2,Ynil,x_);
  T0 = CALL1(1,VARREF(YOrevX),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOopts_as_lst) {
  P x_;
  P xF306;
  P xF305;
  P xF304;
  P iF303;
  P xF302;
  P tF301;
  P xF300;
  P xF299;
  P xF298;
  P xF297;
  P xF296;
  P xF295;
  P yF294;
  P xF293;
  P yF292;
  P xF291;
  P lF290;
  P iF289;
  P tF288;
  P xF287;
  P xF286;
  P xF285;
  P xF284;
  P xF283;
  P xF282;
  P yF281;
  P xF280;
  P xF279;
  P xF278;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(x_, 0);
  xF278 = x_;
  xF279 = xF278;
  T19 = (P)YPprop_elt(xF279,(P)1);
  xF280 = T19;
  yF281 = YPint((P)-1);
  xF282 = xF280;
  xF283 = xF282;
  T17 = (P)YPiGG(xF283,(P)2);
  xF284 = yF281;
  xF285 = xF284;
  T18 = (P)YPiGG(xF285,(P)2);
  T16 = (P)YPiA(T17,T18);
  xF286 = T16;
  xF287 = xF286;
  tF288 = (P)1;
  T15 = (P)YPiLL(xF287,(P)2);
  T14 = (P)YPiv(T15,tF288);
  iF289 = T14;
  lF290 = Ynil;
  LOOP_21: {
    P a21_0,a21_1;
    xF291 = iF289;
    yF292 = YPint((P)-1);
    T2 = (P)YPeqQ(xF291,yF292);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = lF290;
    } else {
      xF293 = iF289;
      yF294 = YPint((P)-1);
      xF295 = xF293;
      xF296 = xF295;
      T7 = (P)YPiGG(xF296,(P)2);
      xF297 = yF294;
      xF298 = xF297;
      T8 = (P)YPiGG(xF298,(P)2);
      T6 = (P)YPiA(T7,T8);
      xF299 = T6;
      xF300 = xF299;
      tF301 = (P)1;
      T5 = (P)YPiLL(xF300,(P)2);
      T4 = (P)YPiv(T5,tF301);
      xF302 = x_;
      iF303 = iF289;
      xF304 = xF302;
      T11 = (P)YPprop_elt(xF304,(P)0);
      xF305 = iF303;
      xF306 = xF305;
      T13 = (P)YPiGG(xF306,(P)2);
      T12 = (P)YPi_((P)0,T13);
      T10 = (P)YPloc_off(T11,T12);
      T9 = (P)YOpair(T10,lF290);
      a21_0 = T4;
      a21_1 = T9;
      iF289 = a21_0;
      lF290 = a21_1;
      goto LOOP_21;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOlst) {
  P x_;
  P xF335;
  P xF334;
  P xF333;
  P iF332;
  P xF331;
  P tF330;
  P xF329;
  P xF328;
  P xF327;
  P xF326;
  P xF325;
  P xF324;
  P yF323;
  P xF322;
  P yF321;
  P xF320;
  P lF319;
  P iF318;
  P tF317;
  P xF316;
  P xF315;
  P xF314;
  P xF313;
  P xF312;
  P xF311;
  P yF310;
  P xF309;
  P xF308;
  P xF307;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  NARGS(x_, 0);
  xF307 = x_;
  xF308 = xF307;
  T19 = (P)YPprop_elt(xF308,(P)1);
  xF309 = T19;
  yF310 = YPint((P)-1);
  xF311 = xF309;
  xF312 = xF311;
  T17 = (P)YPiGG(xF312,(P)2);
  xF313 = yF310;
  xF314 = xF313;
  T18 = (P)YPiGG(xF314,(P)2);
  T16 = (P)YPiA(T17,T18);
  xF315 = T16;
  xF316 = xF315;
  tF317 = (P)1;
  T15 = (P)YPiLL(xF316,(P)2);
  T14 = (P)YPiv(T15,tF317);
  iF318 = T14;
  lF319 = Ynil;
  LOOP_22: {
    P a22_0,a22_1;
    xF320 = iF318;
    yF321 = YPint((P)-1);
    T2 = (P)YPeqQ(xF320,yF321);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = lF319;
    } else {
      xF322 = iF318;
      yF323 = YPint((P)-1);
      xF324 = xF322;
      xF325 = xF324;
      T7 = (P)YPiGG(xF325,(P)2);
      xF326 = yF323;
      xF327 = xF326;
      T8 = (P)YPiGG(xF327,(P)2);
      T6 = (P)YPiA(T7,T8);
      xF328 = T6;
      xF329 = xF328;
      tF330 = (P)1;
      T5 = (P)YPiLL(xF329,(P)2);
      T4 = (P)YPiv(T5,tF330);
      xF331 = x_;
      iF332 = iF318;
      xF333 = xF331;
      T11 = (P)YPprop_elt(xF333,(P)0);
      xF334 = iF332;
      xF335 = xF334;
      T13 = (P)YPiGG(xF335,(P)2);
      T12 = (P)YPi_((P)0,T13);
      T10 = (P)YPloc_off(T11,T12);
      T9 = (P)YOpair(T10,lF319);
      a22_0 = T4;
      a22_1 = T9;
      iF318 = a22_0;
      lF319 = a22_1;
      goto LOOP_22;
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

INLINE P YOtlen(P x_) {
  P tF338;
  P xF337;
  P xF336;
  P T0,T1,T2;
DEFCREGS();
  T2 = (P)YPtlen(x_);
  xF336 = T2;
  xF337 = xF336;
  tF338 = (P)1;
  T1 = (P)YPiLL(xF337,(P)2);
  T0 = (P)YPiv(T1,tF338);
  return T0;
}

INLINE P YOtelt(P x_,P i_) {
  P xF340;
  P xF339;
  P T0,T1;
DEFCREGS();
  xF339 = i_;
  xF340 = xF339;
  T1 = (P)YPiGG(xF340,(P)2);
  T0 = (P)YPtelt(x_,T1);
  return T0;
}

INLINE P YOtelt_setter(P z_,P x_,P i_) {
  P xF342;
  P xF341;
  P T0,T1;
DEFCREGS();
  xF341 = i_;
  xF342 = xF341;
  T1 = (P)YPiGG(xF342,(P)2);
  T0 = (P)YPtelt_setter(z_,x_,T1);
  return T0;
}

FUNCODEDEF(YOtanyQ) {
  P test_,c_;
  P tF376;
  P xF375;
  P xF374;
  P xF373;
  P xF372;
  P xF371;
  P xF370;
  P yF369;
  P xF368;
  P tmpF367;
  P xF366;
  P xF365;
  P iF364;
  P xF363;
  P xF362;
  P xF361;
  P xF360;
  P xF359;
  P yF358;
  P xF357;
  P iF356;
  P tF355;
  P xF354;
  P xF353;
  P xF352;
  P xF351;
  P xF350;
  P xF349;
  P yF348;
  P xF347;
  P tF346;
  P xF345;
  P xF344;
  P xF343;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  xF343 = c_;
  T22 = (P)YPtlen(xF343);
  xF344 = T22;
  xF345 = xF344;
  tF346 = (P)1;
  T21 = (P)YPiLL(xF345,(P)2);
  T20 = (P)YPiv(T21,tF346);
  xF347 = T20;
  yF348 = YPint((P)-1);
  xF349 = xF347;
  xF350 = xF349;
  T18 = (P)YPiGG(xF350,(P)2);
  xF351 = yF348;
  xF352 = xF351;
  T19 = (P)YPiGG(xF352,(P)2);
  T17 = (P)YPiA(T18,T19);
  xF353 = T17;
  xF354 = xF353;
  tF355 = (P)1;
  T16 = (P)YPiLL(xF354,(P)2);
  T15 = (P)YPiv(T16,tF355);
  iF356 = T15;
  LOOP_23: {
    P a23_0;
    xF357 = iF356;
    yF358 = YPint((P)0);
    xF359 = xF357;
    xF360 = xF359;
    T3 = (P)YPiGG(xF360,(P)2);
    xF361 = yF358;
    xF362 = xF361;
    T4 = (P)YPiGG(xF362,(P)2);
    T2 = (P)YPiL(T3,T4);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPfalse;
    } else {
      xF363 = c_;
      iF364 = iF356;
      xF365 = iF364;
      xF366 = xF365;
      T14 = (P)YPiGG(xF366,(P)2);
      T13 = (P)YPtelt(xF363,T14);
      T12 = CALL1(0,test_,T13);
      tmpF367 = T12;
      if (tmpF367 != YPfalse) {
        T5 = tmpF367;
      } else {
        xF368 = iF356;
        yF369 = YPint((P)-1);
        xF370 = xF368;
        xF371 = xF370;
        T10 = (P)YPiGG(xF371,(P)2);
        xF372 = yF369;
        xF373 = xF372;
        T11 = (P)YPiGG(xF373,(P)2);
        T9 = (P)YPiA(T10,T11);
        xF374 = T9;
        xF375 = xF374;
        tF376 = (P)1;
        T8 = (P)YPiLL(xF375,(P)2);
        T7 = (P)YPiv(T8,tF376);
        a23_0 = T7;
        iF356 = a23_0;
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
  P tF424;
  P xF423;
  P xF422;
  P xF421;
  P xF420;
  P xF419;
  P xF418;
  P yF417;
  P xF416;
  P xF415;
  P xF414;
  P iF413;
  P xF412;
  P xF411;
  P xF410;
  P iF409;
  P xF408;
  P tmpF407;
  P xF406;
  P xF405;
  P xF404;
  P xF403;
  P yF402;
  P xF401;
  P iF400;
  P tF399;
  P xF398;
  P xF397;
  P xF396;
  P xF395;
  P xF394;
  P xF393;
  P yF392;
  P xF391;
  P tF390;
  P xF389;
  P xF388;
  P xF387;
  P yF386;
  P xF385;
  P tF384;
  P xF383;
  P xF382;
  P xF381;
  P tF380;
  P xF379;
  P xF378;
  P xF377;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(test_, 0);
  ARG(c1_, 1);
  ARG(c2_, 2);
  xF377 = c1_;
  T5 = (P)YPtlen(xF377);
  xF378 = T5;
  xF379 = xF378;
  tF380 = (P)1;
  T4 = (P)YPiLL(xF379,(P)2);
  T3 = (P)YPiv(T4,tF380);
  xF385 = T3;
  xF381 = c2_;
  T8 = (P)YPtlen(xF381);
  xF382 = T8;
  xF383 = xF382;
  tF384 = (P)1;
  T7 = (P)YPiLL(xF383,(P)2);
  T6 = (P)YPiv(T7,tF384);
  yF386 = T6;
  T2 = (P)YPeqQ(xF385,yF386);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF387 = c1_;
    T33 = (P)YPtlen(xF387);
    xF388 = T33;
    xF389 = xF388;
    tF390 = (P)1;
    T32 = (P)YPiLL(xF389,(P)2);
    T31 = (P)YPiv(T32,tF390);
    xF391 = T31;
    yF392 = YPint((P)-1);
    xF393 = xF391;
    xF394 = xF393;
    T29 = (P)YPiGG(xF394,(P)2);
    xF395 = yF392;
    xF396 = xF395;
    T30 = (P)YPiGG(xF396,(P)2);
    T28 = (P)YPiA(T29,T30);
    xF397 = T28;
    xF398 = xF397;
    tF399 = (P)1;
    T27 = (P)YPiLL(xF398,(P)2);
    T26 = (P)YPiv(T27,tF399);
    iF400 = T26;
    LOOP_24: {
      P a24_0;
      xF401 = iF400;
      yF402 = YPint((P)0);
      xF403 = xF401;
      xF404 = xF403;
      T24 = (P)YPiGG(xF404,(P)2);
      xF405 = yF402;
      xF406 = xF405;
      T25 = (P)YPiGG(xF406,(P)2);
      T23 = (P)YPiL(T24,T25);
      T22 = (P)YPbb(T23);
      tmpF407 = T22;
      if (tmpF407 != YPfalse) {
        T9 = tmpF407;
      } else {
        xF408 = c1_;
        iF409 = iF400;
        xF410 = iF409;
        xF411 = xF410;
        T13 = (P)YPiGG(xF411,(P)2);
        T12 = (P)YPtelt(xF408,T13);
        xF412 = c2_;
        iF413 = iF400;
        xF414 = iF413;
        xF415 = xF414;
        T15 = (P)YPiGG(xF415,(P)2);
        T14 = (P)YPtelt(xF412,T15);
        T11 = CALL2(1,test_,T12,T14);
        if (T11 != YPfalse) {
          xF416 = iF400;
          yF417 = YPint((P)-1);
          xF418 = xF416;
          xF419 = xF418;
          T20 = (P)YPiGG(xF419,(P)2);
          xF420 = yF417;
          xF421 = xF420;
          T21 = (P)YPiGG(xF421,(P)2);
          T19 = (P)YPiA(T20,T21);
          xF422 = T19;
          xF423 = xF422;
          tF424 = (P)1;
          T18 = (P)YPiLL(xF423,(P)2);
          T17 = (P)YPiv(T18,tF424);
          a24_0 = T17;
          iF400 = a24_0;
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
  P tF484;
  P xF483;
  P xF482;
  P xF481;
  P xF480;
  P xF479;
  P xF478;
  P yF477;
  P xF476;
  P xF475;
  P xF474;
  P iF473;
  P xF472;
  P zF471;
  P xF470;
  P xF469;
  P xF468;
  P iF467;
  P xF466;
  P xF465;
  P yF464;
  P xF463;
  P kF462;
  P tF461;
  P xF460;
  P xF459;
  P xF458;
  P xF457;
  P xF456;
  P xF455;
  P yF454;
  P xF453;
  P xF452;
  P xF451;
  P iF450;
  P xF449;
  P zF448;
  P xF447;
  P xF446;
  P xF445;
  P iF444;
  P xF443;
  P xF442;
  P xF441;
  P iF440;
  P xF439;
  P zF438;
  P xF437;
  P xF436;
  P xF435;
  P iF434;
  P xF433;
  P yF432;
  P xF431;
  P tF430;
  P xF429;
  P xF428;
  P lF427;
  P xF426;
  P xF425;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
DEFCREGS();
  xF425 = args_;
  xF426 = xF425;
  T38 = (P)YPprop_elt(xF426,(P)1);
  lF427 = T38;
  xF428 = lF427;
  xF429 = xF428;
  T37 = (P)YPiGG(xF429,(P)2);
  T36 = (P)YPtup(T37,VARREF(Ynul));
  tF430 = T36;
  xF431 = lF427;
  yF432 = YPint((P)2);
  T1 = (P)YPiE(xF431,yF432);
  T0 = (P)YPbb(T1);
  if (T1) {
    xF433 = args_;
    iF434 = YPint((P)0);
    xF435 = xF433;
    T5 = (P)YPprop_elt(xF435,(P)0);
    xF436 = iF434;
    xF437 = xF436;
    T7 = (P)YPiGG(xF437,(P)2);
    T6 = (P)YPi_((P)0,T7);
    T4 = (P)YPloc_off(T5,T6);
    zF438 = T4;
    xF439 = tF430;
    iF440 = YPint((P)0);
    xF441 = iF440;
    xF442 = xF441;
    T3 = (P)YPiGG(xF442,(P)2);
    T2 = (P)YPtelt_setter(zF438,xF439,T3);
    xF443 = args_;
    iF444 = YPint((P)1);
    xF445 = xF443;
    T11 = (P)YPprop_elt(xF445,(P)0);
    xF446 = iF444;
    xF447 = xF446;
    T13 = (P)YPiGG(xF447,(P)2);
    T12 = (P)YPi_((P)0,T13);
    T10 = (P)YPloc_off(T11,T12);
    zF448 = T10;
    xF449 = tF430;
    iF450 = YPint((P)1);
    xF451 = iF450;
    xF452 = xF451;
    T9 = (P)YPiGG(xF452,(P)2);
    T8 = (P)YPtelt_setter(zF448,xF449,T9);
  } else {
    xF453 = lF427;
    yF454 = YPint((P)-1);
    xF455 = xF453;
    xF456 = xF455;
    T34 = (P)YPiGG(xF456,(P)2);
    xF457 = yF454;
    xF458 = xF457;
    T35 = (P)YPiGG(xF458,(P)2);
    T33 = (P)YPiA(T34,T35);
    xF459 = T33;
    xF460 = xF459;
    tF461 = (P)1;
    T32 = (P)YPiLL(xF460,(P)2);
    T31 = (P)YPiv(T32,tF461);
    kF462 = T31;
    LOOP_25: {
      P a25_0;
      xF463 = kF462;
      yF464 = YPint((P)-1);
      T18 = (P)YPiE(xF463,yF464);
      T17 = (P)YPbb(T18);
      xF465 = T17;
      T16 = (P)YPeqQ(xF465,YPfalse);
      T15 = (P)YPbb(T16);
      if (T16) {
        xF466 = args_;
        iF467 = kF462;
        xF468 = xF466;
        T22 = (P)YPprop_elt(xF468,(P)0);
        xF469 = iF467;
        xF470 = xF469;
        T24 = (P)YPiGG(xF470,(P)2);
        T23 = (P)YPi_((P)0,T24);
        T21 = (P)YPloc_off(T22,T23);
        zF471 = T21;
        xF472 = tF430;
        iF473 = kF462;
        xF474 = iF473;
        xF475 = xF474;
        T20 = (P)YPiGG(xF475,(P)2);
        T19 = (P)YPtelt_setter(zF471,xF472,T20);
        xF476 = kF462;
        yF477 = YPint((P)-1);
        xF478 = xF476;
        xF479 = xF478;
        T29 = (P)YPiGG(xF479,(P)2);
        xF480 = yF477;
        xF481 = xF480;
        T30 = (P)YPiGG(xF481,(P)2);
        T28 = (P)YPiA(T29,T30);
        xF482 = T28;
        xF483 = xF482;
        tF484 = (P)1;
        T27 = (P)YPiLL(xF483,(P)2);
        T26 = (P)YPiv(T27,tF484);
        a25_0 = T26;
        kF462 = a25_0;
        goto LOOP_25;
        T14 = T25;
      } else {
        T14 = YPfalse;
      }
    }
  }
  return tF430;
}

LOCCODEDEF(fun_into_358) {
  P k_;
  P tF506;
  P xF505;
  P xF504;
  P xF503;
  P xF502;
  P xF501;
  P xF500;
  P yF499;
  P xF498;
  P xF497;
  P xF496;
  P iF495;
  P xF494;
  P zF493;
  P xF492;
  P xF491;
  P xF490;
  P iF489;
  P xF488;
  P xF487;
  P yF486;
  P xF485;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(k_, 0);
  xF485 = k_;
  yF486 = YPint((P)-1);
  T4 = (P)YPiE(xF485,yF486);
  T3 = (P)YPbb(T4);
  xF487 = T3;
  T2 = (P)YPeqQ(xF487,YPfalse);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF488 = FREEREF(0);
    iF489 = k_;
    xF490 = xF488;
    T8 = (P)YPprop_elt(xF490,(P)0);
    xF491 = iF489;
    xF492 = xF491;
    T10 = (P)YPiGG(xF492,(P)2);
    T9 = (P)YPi_((P)0,T10);
    T7 = (P)YPloc_off(T8,T9);
    zF493 = T7;
    xF494 = FREEREF(1);
    iF495 = k_;
    xF496 = iF495;
    xF497 = xF496;
    T6 = (P)YPiGG(xF497,(P)2);
    T5 = (P)YPtelt_setter(zF493,xF494,T6);
    xF498 = k_;
    yF499 = YPint((P)-1);
    xF500 = xF498;
    xF501 = xF500;
    T15 = (P)YPiGG(xF501,(P)2);
    xF502 = yF499;
    xF503 = xF502;
    T16 = (P)YPiGG(xF503,(P)2);
    T14 = (P)YPiA(T15,T16);
    xF504 = T14;
    xF505 = xF504;
    tF506 = (P)1;
    T13 = (P)YPiLL(xF505,(P)2);
    T12 = (P)YPiv(T13,tF506);
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
  P tF545;
  P xF544;
  P xF543;
  P xF542;
  P xF541;
  P xF540;
  P xF539;
  P yF538;
  P xF537;
  P intoF536;
  P xF535;
  P xF534;
  P iF533;
  P xF532;
  P zF531;
  P xF530;
  P xF529;
  P xF528;
  P iF527;
  P xF526;
  P xF525;
  P xF524;
  P iF523;
  P xF522;
  P zF521;
  P xF520;
  P xF519;
  P xF518;
  P iF517;
  P xF516;
  P yF515;
  P xF514;
  P tF513;
  P xF512;
  P xF511;
  P lF510;
  P xF509;
  P xF508;
  P argsF507;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  NARGS(args_, 0);
  argsF507 = args_;
  xF508 = argsF507;
  xF509 = xF508;
  T23 = (P)YPprop_elt(xF509,(P)1);
  lF510 = T23;
  xF511 = lF510;
  xF512 = xF511;
  T22 = (P)YPiGG(xF512,(P)2);
  T21 = (P)YPtup(T22,VARREF(Ynul));
  tF513 = T21;
  xF514 = lF510;
  yF515 = YPint((P)2);
  T1 = (P)YPiE(xF514,yF515);
  T0 = (P)YPbb(T1);
  if (T1) {
    xF516 = argsF507;
    iF517 = YPint((P)0);
    xF518 = xF516;
    T5 = (P)YPprop_elt(xF518,(P)0);
    xF519 = iF517;
    xF520 = xF519;
    T7 = (P)YPiGG(xF520,(P)2);
    T6 = (P)YPi_((P)0,T7);
    T4 = (P)YPloc_off(T5,T6);
    zF521 = T4;
    xF522 = tF513;
    iF523 = YPint((P)0);
    xF524 = iF523;
    xF525 = xF524;
    T3 = (P)YPiGG(xF525,(P)2);
    T2 = (P)YPtelt_setter(zF521,xF522,T3);
    xF526 = argsF507;
    iF527 = YPint((P)1);
    xF528 = xF526;
    T11 = (P)YPprop_elt(xF528,(P)0);
    xF529 = iF527;
    xF530 = xF529;
    T13 = (P)YPiGG(xF530,(P)2);
    T12 = (P)YPi_((P)0,T13);
    T10 = (P)YPloc_off(T11,T12);
    zF531 = T10;
    xF532 = tF513;
    iF533 = YPint((P)1);
    xF534 = iF533;
    xF535 = xF534;
    T9 = (P)YPiGG(xF535,(P)2);
    T8 = (P)YPtelt_setter(zF531,xF532,T9);
  } else {
    T20 = FUNSHELL(1,fun_into_358,3);
    intoF536 = T20;
    FUNINIT(intoF536, 3,argsF507,tF513,intoF536);
    xF537 = lF510;
    yF538 = YPint((P)-1);
    xF539 = xF537;
    xF540 = xF539;
    T18 = (P)YPiGG(xF540,(P)2);
    xF541 = yF538;
    xF542 = xF541;
    T19 = (P)YPiGG(xF542,(P)2);
    T17 = (P)YPiA(T18,T19);
    xF543 = T17;
    xF544 = xF543;
    tF545 = (P)1;
    T16 = (P)YPiLL(xF544,(P)2);
    T15 = (P)YPiv(T16,tF545);
    T14 = CALL1(1,intoF536,T15);
  }
UNLINK_STACK();
  QRET(tF513);
}

LOCCODEDEF(fun_into_360) {
  P k_;
  P tF567;
  P xF566;
  P xF565;
  P xF564;
  P xF563;
  P xF562;
  P xF561;
  P yF560;
  P xF559;
  P xF558;
  P xF557;
  P iF556;
  P xF555;
  P zF554;
  P xF553;
  P xF552;
  P xF551;
  P iF550;
  P xF549;
  P xF548;
  P yF547;
  P xF546;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(k_, 0);
  xF546 = k_;
  yF547 = YPint((P)-1);
  T4 = (P)YPiE(xF546,yF547);
  T3 = (P)YPbb(T4);
  xF548 = T3;
  T2 = (P)YPeqQ(xF548,YPfalse);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF549 = FREEREF(0);
    iF550 = k_;
    xF551 = xF549;
    T8 = (P)YPprop_elt(xF551,(P)0);
    xF552 = iF550;
    xF553 = xF552;
    T10 = (P)YPiGG(xF553,(P)2);
    T9 = (P)YPi_((P)0,T10);
    T7 = (P)YPloc_off(T8,T9);
    zF554 = T7;
    xF555 = FREEREF(1);
    iF556 = k_;
    xF557 = iF556;
    xF558 = xF557;
    T6 = (P)YPiGG(xF558,(P)2);
    T5 = (P)YPtelt_setter(zF554,xF555,T6);
    xF559 = k_;
    yF560 = YPint((P)-1);
    xF561 = xF559;
    xF562 = xF561;
    T15 = (P)YPiGG(xF562,(P)2);
    xF563 = yF560;
    xF564 = xF563;
    T16 = (P)YPiGG(xF564,(P)2);
    T14 = (P)YPiA(T15,T16);
    xF565 = T14;
    xF566 = xF565;
    tF567 = (P)1;
    T13 = (P)YPiLL(xF566,(P)2);
    T12 = (P)YPiv(T13,tF567);
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
  P tF606;
  P xF605;
  P xF604;
  P xF603;
  P xF602;
  P xF601;
  P xF600;
  P yF599;
  P xF598;
  P intoF597;
  P xF596;
  P xF595;
  P iF594;
  P xF593;
  P zF592;
  P xF591;
  P xF590;
  P xF589;
  P iF588;
  P xF587;
  P xF586;
  P xF585;
  P iF584;
  P xF583;
  P zF582;
  P xF581;
  P xF580;
  P xF579;
  P iF578;
  P xF577;
  P yF576;
  P xF575;
  P tF574;
  P xF573;
  P xF572;
  P lF571;
  P xF570;
  P xF569;
  P argsF568;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  NARGS(args_, 0);
  argsF568 = args_;
  xF569 = argsF568;
  xF570 = xF569;
  T24 = (P)YPprop_elt(xF570,(P)1);
  lF571 = T24;
  xF572 = lF571;
  xF573 = xF572;
  T23 = (P)YPiGG(xF573,(P)2);
  T22 = (P)YPtup(T23,VARREF(Ynul));
  tF574 = T22;
  xF575 = lF571;
  yF576 = YPint((P)2);
  T2 = (P)YPiE(xF575,yF576);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF577 = argsF568;
    iF578 = YPint((P)0);
    xF579 = xF577;
    T6 = (P)YPprop_elt(xF579,(P)0);
    xF580 = iF578;
    xF581 = xF580;
    T8 = (P)YPiGG(xF581,(P)2);
    T7 = (P)YPi_((P)0,T8);
    T5 = (P)YPloc_off(T6,T7);
    zF582 = T5;
    xF583 = tF574;
    iF584 = YPint((P)0);
    xF585 = iF584;
    xF586 = xF585;
    T4 = (P)YPiGG(xF586,(P)2);
    T3 = (P)YPtelt_setter(zF582,xF583,T4);
    xF587 = argsF568;
    iF588 = YPint((P)1);
    xF589 = xF587;
    T12 = (P)YPprop_elt(xF589,(P)0);
    xF590 = iF588;
    xF591 = xF590;
    T14 = (P)YPiGG(xF591,(P)2);
    T13 = (P)YPi_((P)0,T14);
    T11 = (P)YPloc_off(T12,T13);
    zF592 = T11;
    xF593 = tF574;
    iF594 = YPint((P)1);
    xF595 = iF594;
    xF596 = xF595;
    T10 = (P)YPiGG(xF596,(P)2);
    T9 = (P)YPtelt_setter(zF592,xF593,T10);
  } else {
    T21 = FUNSHELL(1,fun_into_360,3);
    intoF597 = T21;
    FUNINIT(intoF597, 3,argsF568,tF574,intoF597);
    xF598 = lF571;
    yF599 = YPint((P)-1);
    xF600 = xF598;
    xF601 = xF600;
    T19 = (P)YPiGG(xF601,(P)2);
    xF602 = yF599;
    xF603 = xF602;
    T20 = (P)YPiGG(xF603,(P)2);
    T18 = (P)YPiA(T19,T20);
    xF604 = T18;
    xF605 = xF604;
    tF606 = (P)1;
    T17 = (P)YPiLL(xF605,(P)2);
    T16 = (P)YPiv(T17,tF606);
    T15 = CALL1(1,intoF597,T16);
  }
  T0 = (P)YPproduct(tF574);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOtype_equalQ) {
  P t1_,t2_;
  P yF619;
  P xF618;
  P tagF617;
  P xF616;
  P xF615;
  P yF614;
  P xF613;
  P tagF612;
  P xF611;
  P xF610;
  P tmpF609;
  P yF608;
  P xF607;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF607 = t1_;
  yF608 = t2_;
  T25 = (P)YPeqQ(xF607,yF608);
  T24 = (P)YPbb(T25);
  tmpF609 = T24;
  if (tmpF609 != YPfalse) {
    T0 = tmpF609;
  } else {
    xF610 = t1_;
    xF611 = xF610;
    T10 = (P)YPiB(xF611,(P)3);
    tagF612 = T10;
    T7 = (P)YPiE(tagF612,(P)0);
    T6 = (P)YPbb(T7);
    if (T7) {
      T8 = (P)YPobject_class(xF610);
      T5 = T8;
    } else {
      T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF612);
      T5 = T9;
    }
    xF613 = T5;
    yF614 = VARREF(YLclassG);
    T4 = (P)YPeqQ(xF613,yF614);
    T3 = (P)YPbb(T4);
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      xF615 = t2_;
      xF616 = xF615;
      T20 = (P)YPiB(xF616,(P)3);
      tagF617 = T20;
      T17 = (P)YPiE(tagF617,(P)0);
      T16 = (P)YPbb(T17);
      if (T17) {
        T18 = (P)YPobject_class(xF615);
        T15 = T18;
      } else {
        T19 = (P)YPelt(VARREF(YDdirect_object_class),tagF617);
        T15 = T19;
      }
      xF618 = T15;
      yF619 = VARREF(YLclassG);
      T14 = (P)YPeqQ(xF618,yF619);
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
  P xF625;
  P xF624;
  P xF623;
  P xF622;
  P xF621;
  P xF620;
  P T0,T1,T2,T3,T4,T5,T6;
DEFCREGS();
  xF620 = c1_;
  T3 = (P)YPprop_elt(xF620,(P)11);
  xF621 = c2_;
  T5 = (P)YPprop_elt(xF621,(P)10);
  xF622 = T5;
  xF623 = xF622;
  T4 = (P)YPiGG(xF623,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF624 = YPint((P)1);
  xF625 = xF624;
  T6 = (P)YPiGG(xF625,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOclass_isaQ(P o_,P c_) {
  P xF636;
  P xF635;
  P xF634;
  P xF633;
  P xF632;
  P xF631;
  P c2F630;
  P c1F629;
  P tagF628;
  P xF627;
  P xF626;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
DEFCREGS();
  xF626 = o_;
  xF627 = xF626;
  T12 = (P)YPiB(xF627,(P)3);
  tagF628 = T12;
  T9 = (P)YPiE(tagF628,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF626);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF628);
    T7 = T11;
  }
  c1F629 = T7;
  c2F630 = c_;
  xF631 = c1F629;
  T3 = (P)YPprop_elt(xF631,(P)11);
  xF632 = c2F630;
  T5 = (P)YPprop_elt(xF632,(P)10);
  xF633 = T5;
  xF634 = xF633;
  T4 = (P)YPiGG(xF634,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF635 = YPint((P)1);
  xF636 = xF635;
  T6 = (P)YPiGG(xF636,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
  return T0;
}

FUNCODEDEF(YOsubtypeQ) {
  P t1_,t2_;
  P xF654;
  P xF653;
  P xF652;
  P xF651;
  P xF650;
  P xF649;
  P c2F648;
  P c1F647;
  P yF646;
  P xF645;
  P tagF644;
  P xF643;
  P xF642;
  P yF641;
  P xF640;
  P tagF639;
  P xF638;
  P xF637;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF637 = t2_;
  xF638 = xF637;
  T9 = (P)YPiB(xF638,(P)3);
  tagF639 = T9;
  T6 = (P)YPiE(tagF639,(P)0);
  T5 = (P)YPbb(T6);
  if (T6) {
    T7 = (P)YPobject_class(xF637);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF639);
    T4 = T8;
  }
  xF640 = T4;
  yF641 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF640,yF641);
  T2 = (P)YPbb(T3);
  if (T3) {
    xF642 = t1_;
    xF643 = xF642;
    T17 = (P)YPiB(xF643,(P)3);
    tagF644 = T17;
    T14 = (P)YPiE(tagF644,(P)0);
    T13 = (P)YPbb(T14);
    if (T14) {
      T15 = (P)YPobject_class(xF642);
      T12 = T15;
    } else {
      T16 = (P)YPelt(VARREF(YDdirect_object_class),tagF644);
      T12 = T16;
    }
    xF645 = T12;
    yF646 = VARREF(YLclassG);
    T11 = (P)YPeqQ(xF645,yF646);
    T10 = (P)YPbb(T11);
    T1 = T10;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    c1F647 = t1_;
    c2F648 = t2_;
    xF649 = c1F647;
    T21 = (P)YPprop_elt(xF649,(P)11);
    xF650 = c2F648;
    T23 = (P)YPprop_elt(xF650,(P)10);
    xF651 = T23;
    xF652 = xF651;
    T22 = (P)YPiGG(xF652,(P)2);
    T20 = (P)YPselt(T21,T22);
    xF653 = YPint((P)1);
    xF654 = xF653;
    T24 = (P)YPiGG(xF654,(P)2);
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
  P xF667;
  P xF666;
  P xF665;
  P xF664;
  P xF663;
  P xF662;
  P c2F661;
  P c1F660;
  P yF659;
  P xF658;
  P tagF657;
  P xF656;
  P xF655;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  xF655 = t_;
  xF656 = xF655;
  T8 = (P)YPiB(xF656,(P)3);
  tagF657 = T8;
  T5 = (P)YPiE(tagF657,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF655);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF657);
    T3 = T7;
  }
  xF658 = T3;
  yF659 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF658,yF659);
  T1 = (P)YPbb(T2);
  if (T2) {
    c1F660 = c_;
    c2F661 = t_;
    xF662 = c1F660;
    T13 = (P)YPprop_elt(xF662,(P)11);
    xF663 = c2F661;
    T15 = (P)YPprop_elt(xF663,(P)10);
    xF664 = T15;
    xF665 = xF664;
    T14 = (P)YPiGG(xF665,(P)2);
    T12 = (P)YPselt(T13,T14);
    xF666 = YPint((P)1);
    xF667 = xF666;
    T16 = (P)YPiGG(xF667,(P)2);
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
  P yF670;
  P xF669;
  P xF668;
  P T0,T1,T2;
DEFCREGS();
  xF668 = t_;
  T2 = (P)YPprop_elt(xF668,(P)0);
  xF669 = T2;
  yF670 = o_;
  T1 = (P)YPeqQ(xF669,yF670);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOisaQ(P o_,P t_) {
  P xF688;
  P xF687;
  P xF686;
  P xF685;
  P xF684;
  P xF683;
  P c2F682;
  P c1F681;
  P tagF680;
  P xF679;
  P xF678;
  P cF677;
  P oF676;
  P yF675;
  P xF674;
  P tagF673;
  P xF672;
  P xF671;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
DEFCREGS();
  xF671 = t_;
  xF672 = xF671;
  T8 = (P)YPiB(xF672,(P)3);
  tagF673 = T8;
  T5 = (P)YPiE(tagF673,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF671);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF673);
    T3 = T7;
  }
  xF674 = T3;
  yF675 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF674,yF675);
  T1 = (P)YPbb(T2);
  if (T2) {
    oF676 = o_;
    cF677 = t_;
    xF678 = oF676;
    xF679 = xF678;
    T21 = (P)YPiB(xF679,(P)3);
    tagF680 = T21;
    T18 = (P)YPiE(tagF680,(P)0);
    T17 = (P)YPbb(T18);
    if (T18) {
      T19 = (P)YPobject_class(xF678);
      T16 = T19;
    } else {
      T20 = (P)YPelt(VARREF(YDdirect_object_class),tagF680);
      T16 = T20;
    }
    c1F681 = T16;
    c2F682 = cF677;
    xF683 = c1F681;
    T12 = (P)YPprop_elt(xF683,(P)11);
    xF684 = c2F682;
    T14 = (P)YPprop_elt(xF684,(P)10);
    xF685 = T14;
    xF686 = xF685;
    T13 = (P)YPiGG(xF686,(P)2);
    T11 = (P)YPselt(T12,T13);
    xF687 = YPint((P)1);
    xF688 = xF687;
    T15 = (P)YPiGG(xF688,(P)2);
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
  P xF689;
  P T0,T1;
LINK_STACK();
  ARG(generic_, 0);
  xF689 = VARREF(YPdispatch);
  T1 = (P)YPprop_elt(xF689,(P)0);
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
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_info_inlineableQ));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_info_inlineableQ_setter));
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
  P yF691;
  P xF690;
  P T0,T1;
DEFCREGS();
  xF690 = x_;
  yF691 = (P)0;
  T1 = (P)YPeqQ(xF690,yF691);
  T0 = (P)YPbb(T1);
  return T0;
}

P YPcons_args() {
  P iF695;
  P rF694;
  P bF693;
  P nF692;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
  (P)YPdef_regs();
  T9 = (P)YPsp_elt((P)-2);
  nF692 = T9;
  T8 = (P)YPi_((P)-2,nF692);
  bF693 = T8;
  rF694 = Ynil;
  iF695 = (P)0;
  LOOP_26: {
    P a26_0,a26_1;
    T2 = (P)YPiL(iF695,nF692);
    T1 = (P)YPbb(T2);
    if (T2) {
      T6 = (P)YPiA(bF693,iF695);
      T5 = (P)YPsp_elt(T6);
      T4 = (P)YPpair(T5,rF694);
      T7 = (P)YPiA(iF695,(P)1);
      a26_0 = T4;
      a26_1 = T7;
      rF694 = a26_0;
      iF695 = a26_1;
      goto LOOP_26;
      T0 = T3;
    } else {
      T0 = rF694;
    }
  }
  return T0;
}

INLINE P YPcheck_arity(P fn_,P sig_,P n_) {
  P naryQF701;
  P xF700;
  P arityF699;
  P xF698;
  P xF697;
  P xF696;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
DEFCREGS();
  xF696 = sig_;
  T13 = (P)YPprop_elt(xF696,(P)2);
  xF697 = T13;
  xF698 = xF697;
  T12 = (P)YPiGG(xF698,(P)2);
  arityF699 = T12;
  xF700 = sig_;
  T11 = (P)YPprop_elt(xF700,(P)1);
  naryQF701 = T11;
  if (naryQF701 != YPfalse) {
    T3 = (P)YPiL(n_,arityF699);
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
    T8 = (P)YPiE(n_,arityF699);
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
  P xF723;
  P xF722;
  P xF721;
  P xF720;
  P xF719;
  P xF718;
  P c2F717;
  P c1F716;
  P tagF715;
  P xF714;
  P xF713;
  P cF712;
  P oF711;
  P yF710;
  P xF709;
  P tagF708;
  P xF707;
  P xF706;
  P tF705;
  P oF704;
  P yF703;
  P xF702;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
DEFCREGS();
  xF702 = type_;
  yF703 = VARREF(YLanyG);
  T2 = (P)YPeqQ(xF702,yF703);
  T1 = (P)YPbb(T2);
  if (T2) {
    T0 = YPtrue;
  } else {
    oF704 = res_;
    tF705 = type_;
    xF706 = tF705;
    xF707 = xF706;
    T12 = (P)YPiB(xF707,(P)3);
    tagF708 = T12;
    T9 = (P)YPiE(tagF708,(P)0);
    T8 = (P)YPbb(T9);
    if (T9) {
      T10 = (P)YPobject_class(xF706);
      T7 = T10;
    } else {
      T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF708);
      T7 = T11;
    }
    xF709 = T7;
    yF710 = VARREF(YLclassG);
    T6 = (P)YPeqQ(xF709,yF710);
    T5 = (P)YPbb(T6);
    if (T6) {
      oF711 = oF704;
      cF712 = tF705;
      xF713 = oF711;
      xF714 = xF713;
      T25 = (P)YPiB(xF714,(P)3);
      tagF715 = T25;
      T22 = (P)YPiE(tagF715,(P)0);
      T21 = (P)YPbb(T22);
      if (T22) {
        T23 = (P)YPobject_class(xF713);
        T20 = T23;
      } else {
        T24 = (P)YPelt(VARREF(YDdirect_object_class),tagF715);
        T20 = T24;
      }
      c1F716 = T20;
      c2F717 = cF712;
      xF718 = c1F716;
      T16 = (P)YPprop_elt(xF718,(P)11);
      xF719 = c2F717;
      T18 = (P)YPprop_elt(xF719,(P)10);
      xF720 = T18;
      xF721 = xF720;
      T17 = (P)YPiGG(xF721,(P)2);
      T15 = (P)YPselt(T16,T17);
      xF722 = YPint((P)1);
      xF723 = xF722;
      T19 = (P)YPiGG(xF723,(P)2);
      T14 = (P)YPiE(T15,T19);
      T13 = (P)YPbb(T14);
      T4 = T13;
    } else {
      T26 = XCALL2(1,VARREF(YisaQ),oF704,tF705);
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
  P xF746;
  P xF745;
  P xF744;
  P xF743;
  P xF742;
  P xF741;
  P c2F740;
  P c1F739;
  P tagF738;
  P xF737;
  P xF736;
  P cF735;
  P oF734;
  P yF733;
  P xF732;
  P tagF731;
  P xF730;
  P xF729;
  P tF728;
  P oF727;
  P typeF726;
  P xF725;
  P xF724;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
DEFCREGS();
  (P)YPset_regs(regs_);
  xF724 = fn_;
  T28 = (P)YPprop_elt(xF724,(P)1);
  xF725 = T28;
  T27 = (P)YPprop_elt(xF725,(P)3);
  typeF726 = T27;
  if (VARREF(YPclasses_readyQ) != YPfalse) {
    oF727 = res_;
    tF728 = typeF726;
    xF729 = tF728;
    xF730 = xF729;
    T10 = (P)YPiB(xF730,(P)3);
    tagF731 = T10;
    T7 = (P)YPiE(tagF731,(P)0);
    T6 = (P)YPbb(T7);
    if (T7) {
      T8 = (P)YPobject_class(xF729);
      T5 = T8;
    } else {
      T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF731);
      T5 = T9;
    }
    xF732 = T5;
    yF733 = VARREF(YLclassG);
    T4 = (P)YPeqQ(xF732,yF733);
    T3 = (P)YPbb(T4);
    if (T4) {
      oF734 = oF727;
      cF735 = tF728;
      xF736 = oF734;
      xF737 = xF736;
      T23 = (P)YPiB(xF737,(P)3);
      tagF738 = T23;
      T20 = (P)YPiE(tagF738,(P)0);
      T19 = (P)YPbb(T20);
      if (T20) {
        T21 = (P)YPobject_class(xF736);
        T18 = T21;
      } else {
        T22 = (P)YPelt(VARREF(YDdirect_object_class),tagF738);
        T18 = T22;
      }
      c1F739 = T18;
      c2F740 = cF735;
      xF741 = c1F739;
      T14 = (P)YPprop_elt(xF741,(P)11);
      xF742 = c2F740;
      T16 = (P)YPprop_elt(xF742,(P)10);
      xF743 = T16;
      xF744 = xF743;
      T15 = (P)YPiGG(xF744,(P)2);
      T13 = (P)YPselt(T14,T15);
      xF745 = YPint((P)1);
      xF746 = xF745;
      T17 = (P)YPiGG(xF746,(P)2);
      T12 = (P)YPiE(T13,T17);
      T11 = (P)YPbb(T12);
      T2 = T11;
    } else {
      T24 = XCALL2(1,VARREF(YisaQ),oF727,tF728);
      T2 = T24;
    }
    if (T2 != YPfalse) {
      T1 = res_;
    } else {
      T26 = (P)YPcons_args();
      T25 = XCALL4(1,VARREF(Yreturn_type_error),fn_,res_,typeF726,T26);
      T1 = T25;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  return T0;
}

P YPcheck_type(P regs_,P res_,P type_) {
  P xF766;
  P xF765;
  P xF764;
  P xF763;
  P xF762;
  P xF761;
  P c2F760;
  P c1F759;
  P tagF758;
  P xF757;
  P xF756;
  P cF755;
  P oF754;
  P yF753;
  P xF752;
  P tagF751;
  P xF750;
  P xF749;
  P tF748;
  P oF747;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
DEFCREGS();
  (P)YPset_regs(regs_);
  if (VARREF(YPclasses_readyQ) != YPfalse) {
    oF747 = res_;
    tF748 = type_;
    xF749 = tF748;
    xF750 = xF749;
    T10 = (P)YPiB(xF750,(P)3);
    tagF751 = T10;
    T7 = (P)YPiE(tagF751,(P)0);
    T6 = (P)YPbb(T7);
    if (T7) {
      T8 = (P)YPobject_class(xF749);
      T5 = T8;
    } else {
      T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF751);
      T5 = T9;
    }
    xF752 = T5;
    yF753 = VARREF(YLclassG);
    T4 = (P)YPeqQ(xF752,yF753);
    T3 = (P)YPbb(T4);
    if (T4) {
      oF754 = oF747;
      cF755 = tF748;
      xF756 = oF754;
      xF757 = xF756;
      T23 = (P)YPiB(xF757,(P)3);
      tagF758 = T23;
      T20 = (P)YPiE(tagF758,(P)0);
      T19 = (P)YPbb(T20);
      if (T20) {
        T21 = (P)YPobject_class(xF756);
        T18 = T21;
      } else {
        T22 = (P)YPelt(VARREF(YDdirect_object_class),tagF758);
        T18 = T22;
      }
      c1F759 = T18;
      c2F760 = cF755;
      xF761 = c1F759;
      T14 = (P)YPprop_elt(xF761,(P)11);
      xF762 = c2F760;
      T16 = (P)YPprop_elt(xF762,(P)10);
      xF763 = T16;
      xF764 = xF763;
      T15 = (P)YPiGG(xF764,(P)2);
      T13 = (P)YPselt(T14,T15);
      xF765 = YPint((P)1);
      xF766 = xF765;
      T17 = (P)YPiGG(xF766,(P)2);
      T12 = (P)YPiE(T13,T17);
      T11 = (P)YPbb(T12);
      T2 = T11;
    } else {
      T24 = XCALL2(1,VARREF(YisaQ),oF747,tF748);
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
  P yF796;
  P xF795;
  P xF794;
  P yF793;
  P xF792;
  P xF791;
  P yF790;
  P xF789;
  P xF788;
  P xF787;
  P yF786;
  P xF785;
  P specsF784;
  P iF783;
  P xF782;
  P sigF781;
  P xF780;
  P yF779;
  P xF778;
  P nF777;
  P classF776;
  P tagF775;
  P xF774;
  P xF773;
  P xF772;
  P xF771;
  P yF770;
  P xF769;
  P xF768;
  P fnF767;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
DEFCREGS();
  (P)YPset_regs(regs_);
  T43 = (P)YPsp_elt((P)-1);
  fnF767 = T43;
  xF768 = fnF767;
  xF769 = xF768;
  yF770 = (P)0;
  T32 = (P)YPeqQ(xF769,yF770);
  T31 = (P)YPbb(T32);
  if (T32) {
    T30 = (P)0;
  } else {
    xF771 = fnF767;
    xF772 = xF771;
    T36 = (P)YPiB(xF772,(P)3);
    T35 = (P)YPiE(T36,(P)0);
    T34 = (P)YPbb(T35);
    if (T35) {
      xF773 = fnF767;
      xF774 = xF773;
      T42 = (P)YPiB(xF774,(P)3);
      tagF775 = T42;
      T39 = (P)YPiE(tagF775,(P)0);
      T38 = (P)YPbb(T39);
      if (T39) {
        T40 = (P)YPobject_class(xF773);
        T37 = T40;
      } else {
        T41 = (P)YPelt(VARREF(YDdirect_object_class),tagF775);
        T37 = T41;
      }
      T33 = T37;
    } else {
      T33 = (P)0;
    }
    T30 = T33;
  }
  classF776 = T30;
  T29 = (P)YPsp_elt((P)-2);
  nF777 = T29;
  (P)YPstack_check(regs_);
  xF778 = classF776;
  yF779 = VARREF(YLmetG);
  T1 = (P)YPeqQ(xF778,yF779);
  T0 = (P)YPbb(T1);
  if (T1) {
    xF780 = fnF767;
    T13 = (P)YPprop_elt(xF780,(P)1);
    sigF781 = T13;
    (P)YPcheck_arity(fnF767,sigF781,nF777);
    if (VARREF(YPclasses_readyQ) != YPfalse) {
      iF783 = (P)0;
      xF782 = sigF781;
      T12 = (P)YPprop_elt(xF782,(P)0);
      specsF784 = T12;
      LOOP_27: {
        P a27_0,a27_1;
        xF785 = specsF784;
        yF786 = Ynil;
        T5 = (P)YPeqQ(xF785,yF786);
        T4 = (P)YPbb(T5);
        if (T5) {
          T3 = YPfalse;
        } else {
          T7 = (P)YPi_((P)-3,iF783);
          T6 = (P)YPsp_elt(T7);
          xF787 = specsF784;
          T8 = (P)YPprop_elt(xF787,(P)0);
          (P)YParg_check_type(T6,T8,fnF767);
          T10 = (P)YPiA(iF783,(P)1);
          xF788 = specsF784;
          T11 = (P)YPprop_elt(xF788,(P)1);
          a27_0 = T10;
          a27_1 = T11;
          iF783 = a27_0;
          specsF784 = a27_1;
          goto LOOP_27;
          T3 = T9;
        }
      }
      T2 = T3;
    } else {
      T2 = YPfalse;
    }
  } else {
    xF789 = classF776;
    yF790 = VARREF(YLgenG);
    T16 = (P)YPeqQ(xF789,yF790);
    T15 = (P)YPbb(T16);
    if (T16) {
      xF791 = fnF767;
      T18 = (P)YPprop_elt(xF791,(P)1);
      T17 = (P)YPcheck_arity(fnF767,T18,nF777);
      T14 = T17;
    } else {
      xF792 = VARREF(Yunknown_function_error);
      yF793 = (P)0;
      T21 = (P)YPeqQ(xF792,yF793);
      T20 = (P)YPbb(T21);
      if (T21) {
        T23 = (P)YPsu(LITREF(lit_330));
        T22 = (P)YPbreak(T23);
        T19 = T22;
      } else {
        xF794 = fnF767;
        xF795 = xF794;
        yF796 = (P)0;
        T27 = (P)YPeqQ(xF795,yF796);
        T26 = (P)YPbb(T27);
        if (T27) {
          T25 = YPfalse;
        } else {
          T25 = fnF767;
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
  P tF799;
  P xF798;
  P xF797;
  P T0,T1,T2;
DEFCREGS();
  xF797 = n_;
  xF798 = xF797;
  tF799 = (P)1;
  T2 = (P)YPiLL(xF798,(P)2);
  T1 = (P)YPiv(T2,tF799);
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
  P T0,T1;
DEFCREGS();
  VARSET(Ynil,VARREF(Yone_nil));
  (P)YPhead_setter(VARREF(Ynil),VARREF(Ynil));
  (P)YPtail_setter(VARREF(Ynil),VARREF(Ynil));
  VARSET(YPmet_prop_len,(P)4);
  T1 = VARSET(YPsymbols_readyQ,YPfalse);
  T0 = T1;
  return T0;
}

P Y___main_7___() {
  P xF826;
  P xF825;
  P tF824;
  P xF823;
  P xF822;
  P xF821;
  P xF820;
  P xF819;
  P xF818;
  P xF817;
  P xF816;
  P tF815;
  P xF814;
  P xF813;
  P xF812;
  P xF811;
  P xF810;
  P xF809;
  P xF808;
  P xF807;
  P xF806;
  P xF805;
  P tF804;
  P xF803;
  P xF802;
  P xF801;
  P xF800;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
DEFCREGS();
  VARSET(YPTstart_running_atT,VARREF(Ynil));
  T0 = (P)YPraw_alloc((P)4);
  VARSET(YDdirect_object_class,T0);
  (P)YPelt_setter(VARREF(YLfixnumG),VARREF(YDdirect_object_class),(P)1);
  (P)YPelt_setter(VARREF(YLchrG),VARREF(YDdirect_object_class),(P)2);
  (P)YPelt_setter(VARREF(YLlocG),VARREF(YDdirect_object_class),(P)3);
  xF800 = YPint((P)32);
  xF801 = xF800;
  T4 = (P)YPiGG(xF801,(P)2);
  T3 = (P)YPi_(T4,(P)2);
  xF802 = T3;
  xF803 = xF802;
  tF804 = (P)1;
  T2 = (P)YPiLL(xF803,(P)2);
  T1 = (P)YPiv(T2,tF804);
  VARSET(YDnum_int_bits,T1);
  xF805 = YPint((P)1);
  xF806 = xF805;
  T9 = (P)YPiGG(xF806,(P)2);
  xF807 = VARREF(YDnum_int_bits);
  xF808 = xF807;
  T11 = (P)YPiGG(xF808,(P)2);
  xF809 = YPint((P)1);
  xF810 = xF809;
  T12 = (P)YPiGG(xF810,(P)2);
  T10 = (P)YPi_(T11,T12);
  T8 = (P)YPiLL(T9,T10);
  xF811 = YPint((P)1);
  xF812 = xF811;
  T13 = (P)YPiGG(xF812,(P)2);
  T7 = (P)YPi_(T8,T13);
  xF813 = T7;
  xF814 = xF813;
  tF815 = (P)1;
  T6 = (P)YPiLL(xF814,(P)2);
  T5 = (P)YPiv(T6,tF815);
  VARSET(YDmax_int,T5);
  xF816 = YPint((P)1);
  xF817 = xF816;
  T17 = (P)YPiGG(xF817,(P)2);
  xF818 = VARREF(YDnum_int_bits);
  xF819 = xF818;
  T19 = (P)YPiGG(xF819,(P)2);
  xF820 = YPint((P)1);
  xF821 = xF820;
  T20 = (P)YPiGG(xF821,(P)2);
  T18 = (P)YPi_(T19,T20);
  T16 = (P)YPiLL(T17,T18);
  xF822 = T16;
  xF823 = xF822;
  tF824 = (P)1;
  T15 = (P)YPiLL(xF823,(P)2);
  T14 = (P)YPiv(T15,tF824);
  VARSET(YDmin_int,T14);
  xF825 = YPchr((P)32);
  xF826 = xF825;
  T22 = (P)YPiGG(xF826,(P)2);
  T21 = (P)YPstrX((P)0,T22);
  VARSET(YPsnul,T21);
  T23 = (P)YPtupX((P)0,VARREF(Ynul));
  VARSET(YPtnul,T23);
  T24 = (P)YPrepX((P)0,VARREF(Ynul));
  VARSET(YPrnul,T24);
  VARSET(YTearly_classesT,VARREF(Ynil));
  T25 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLanyG),T25);
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLlogG),T26);
  T27 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLboxG),T27);
  T30 = (P)YPpair(VARREF(YLanyG),Ynil);
  T29 = (P)YPdefine_parents(VARREF(YLmagG),T30);
  T28 = T29;
  return T28;
}

P Y___main_8___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
DEFCREGS();
  T0 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLchrG),T0);
  T1 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLsrc_locG),T1);
  T2 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLnumG),T2);
  T3 = (P)YPpair(VARREF(YLnumG),Ynil);
  (P)YPdefine_parents(VARREF(YLintG),T3);
  T4 = (P)YPpair(VARREF(YLintG),Ynil);
  (P)YPdefine_parents(VARREF(YLfixnumG),T4);
  T5 = (P)YPpair(VARREF(YLnumG),Ynil);
  (P)YPdefine_parents(VARREF(YLfloG),T5);
  T6 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLlocG),T6);
  T7 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLrepG),T7);
  T8 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolG),T8);
  T9 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolIG),T9);
  T10 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolXG),T10);
  T11 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLseqG),T11);
  T13 = (P)YPpair(VARREF(YLcolIG),Ynil);
  T12 = (P)YPpair(VARREF(YLseqG),T13);
  (P)YPdefine_parents(VARREF(YLseqIG),T12);
  T15 = (P)YPpair(VARREF(YLcolXG),Ynil);
  T14 = (P)YPpair(VARREF(YLseqG),T15);
  (P)YPdefine_parents(VARREF(YLseqXG),T14);
  T16 = (P)YPpair(VARREF(YLseqXG),Ynil);
  (P)YPdefine_parents(VARREF(YLlstG),T16);
  T17 = (P)YPpair(VARREF(YLseqG),Ynil);
  (P)YPdefine_parents(VARREF(YLflatG),T17);
  T19 = (P)YPpair(VARREF(YLseqIG),Ynil);
  T18 = (P)YPpair(VARREF(YLflatG),T19);
  (P)YPdefine_parents(VARREF(YLtupG),T18);
  T22 = (P)YPpair(VARREF(YLmagG),Ynil);
  T21 = (P)YPpair(VARREF(YLseqIG),T22);
  T20 = (P)YPpair(VARREF(YLflatG),T21);
  (P)YPdefine_parents(VARREF(YLstrG),T20);
  T23 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLsymG),T23);
  T24 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLtypeG),T24);
  T25 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLclassG),T25);
  T26 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsingletonG),T26);
  T27 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsubclassG),T27);
  T28 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLunionG),T28);
  T29 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLproductG),T29);
  T30 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLpropG),T30);
  T31 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLgen_cacheG),T31);
  T32 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLsigG),T32);
  T33 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLfun_infoG),T33);
  T34 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLfunG),T34);
  T35 = (P)YPpair(VARREF(YLfunG),Ynil);
  (P)YPdefine_parents(VARREF(YLmetG),T35);
  T36 = (P)YPpair(VARREF(YLfunG),Ynil);
  (P)YPdefine_parents(VARREF(YLgenG),T36);
  T38 = (P)YPpair(VARREF(YLseqIG),Ynil);
  T37 = (P)YPpair(VARREF(YLflatG),T38);
  (P)YPdefine_parents(VARREF(YLoptsG),T37);
  T39 = (P)YPpair(VARREF(YLoptsG),Ynil);
  (P)YPdefine_parents(VARREF(YLopts_tupG),T39);
  T40 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  (P)YPclass_ancestors_setter(T40,VARREF(YLanyG));
  VARSET(YPsymbols,VARREF(Ynil));
  lit_0 = YPsb((P)"Warning: symbols were created in the boot image before the symbol-creation was setup. (Probably from a df or rep)\n");
  T42 = (P)YPeqQ(VARREF(YPTused_symbols_too_earlyT),YPtrue);
  T41 = (P)YPbb(T42);
  if (T42) {
    T44 = (P)YPsu(LITREF(lit_0));
    T43 = (P)YPbreak(T44);
  } else {
  }
  lit_1 = YPPlist(1,YPPsym((P)"name"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPfab_met(FUNCODEREF(fun_118),T45,YPfalse,LITREF(lit_1),sloc(586),YPfalse);
  T46 = fun_118;
  VARSET(Yfab_sym,T46);
  VARSET(YPsymbols_readyQ,YPtrue);
  lit_2 = YPPsym((P)"fab-sym");
  lit_3 = YPPlist(1,YPPsym((P)"name"));
  T47 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfab_sym = YPfab_met(FUNCODEREF(Yfab_sym),T47,LITREF(lit_2),LITREF(lit_3),sloc(591),YPfalse);
  T48 = Yfab_sym;
  VARSET(Yfab_sym,T48);
  T49 = YPfalse;
  return T49;
}

P Y___main_9___() {
  P T0,T1,T2;
DEFCREGS();
  VARSET(YDgen_cache_singletons_offset,YPint((P)2));
  VARSET(YDgen_cache_classes_offset,YPint((P)3));
  lit_4 = YPPsym((P)"%prop-offset");
  lit_5 = YPPlist(2,YPPsym((P)"owner"),YPPsym((P)"getter"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPprop_offset = YPfab_met(FUNCODEREF(YPprop_offset),T0,LITREF(lit_4),LITREF(lit_5),sloc(651),YPfalse);
  T1 = YPprop_offset;
  VARSET(YPprop_offset,T1);
  T2 = YPfalse;
  return T2;
}

P Y___main_10___() {
  P propF1102;
  P setterF1101;
  P xF1100;
  P xF1099;
  P accessorF1098;
  P getterF1097;
  P xF1096;
  P xF1095;
  P accessorF1094;
  P propF1093;
  P setterF1092;
  P xF1091;
  P xF1090;
  P accessorF1089;
  P getterF1088;
  P xF1087;
  P xF1086;
  P accessorF1085;
  P propF1084;
  P setterF1083;
  P xF1082;
  P xF1081;
  P accessorF1080;
  P getterF1079;
  P xF1078;
  P xF1077;
  P accessorF1076;
  P propF1075;
  P setterF1074;
  P xF1073;
  P xF1072;
  P accessorF1071;
  P getterF1070;
  P xF1069;
  P xF1068;
  P accessorF1067;
  P propF1066;
  P setterF1065;
  P xF1064;
  P xF1063;
  P accessorF1062;
  P getterF1061;
  P xF1060;
  P xF1059;
  P accessorF1058;
  P propF1057;
  P setterF1056;
  P xF1055;
  P xF1054;
  P accessorF1053;
  P getterF1052;
  P xF1051;
  P xF1050;
  P accessorF1049;
  P propF1048;
  P setterF1047;
  P getterF1046;
  P xF1045;
  P xF1044;
  P accessorF1043;
  P propF1042;
  P setterF1041;
  P getterF1040;
  P xF1039;
  P xF1038;
  P accessorF1037;
  P propF1036;
  P setterF1035;
  P getterF1034;
  P xF1033;
  P xF1032;
  P accessorF1031;
  P propF1030;
  P setterF1029;
  P getterF1028;
  P xF1027;
  P xF1026;
  P accessorF1025;
  P propF1024;
  P setterF1023;
  P getterF1022;
  P xF1021;
  P xF1020;
  P accessorF1019;
  P propF1018;
  P setterF1017;
  P getterF1016;
  P xF1015;
  P xF1014;
  P accessorF1013;
  P propF1012;
  P setterF1011;
  P getterF1010;
  P xF1009;
  P xF1008;
  P accessorF1007;
  P propF1006;
  P setterF1005;
  P getterF1004;
  P xF1003;
  P xF1002;
  P accessorF1001;
  P propF1000;
  P setterF999;
  P getterF998;
  P xF997;
  P xF996;
  P accessorF995;
  P propF994;
  P setterF993;
  P getterF992;
  P xF991;
  P xF990;
  P accessorF989;
  P propF988;
  P setterF987;
  P getterF986;
  P xF985;
  P xF984;
  P accessorF983;
  P propF982;
  P setterF981;
  P getterF980;
  P xF979;
  P xF978;
  P accessorF977;
  P propF976;
  P setterF975;
  P getterF974;
  P xF973;
  P xF972;
  P accessorF971;
  P propF970;
  P setterF969;
  P getterF968;
  P xF967;
  P xF966;
  P accessorF965;
  P propF964;
  P setterF963;
  P getterF962;
  P xF961;
  P xF960;
  P accessorF959;
  P propF958;
  P setterF957;
  P xF956;
  P xF955;
  P accessorF954;
  P getterF953;
  P xF952;
  P xF951;
  P accessorF950;
  P propF949;
  P setterF948;
  P xF947;
  P xF946;
  P accessorF945;
  P getterF944;
  P xF943;
  P xF942;
  P accessorF941;
  P propF940;
  P setterF939;
  P xF938;
  P xF937;
  P accessorF936;
  P getterF935;
  P xF934;
  P xF933;
  P accessorF932;
  P propF931;
  P setterF930;
  P xF929;
  P xF928;
  P accessorF927;
  P getterF926;
  P xF925;
  P xF924;
  P accessorF923;
  P propF922;
  P setterF921;
  P xF920;
  P xF919;
  P accessorF918;
  P getterF917;
  P xF916;
  P xF915;
  P accessorF914;
  P propF913;
  P setterF912;
  P xF911;
  P xF910;
  P accessorF909;
  P getterF908;
  P xF907;
  P xF906;
  P accessorF905;
  P propF904;
  P setterF903;
  P xF902;
  P xF901;
  P accessorF900;
  P getterF899;
  P xF898;
  P xF897;
  P accessorF896;
  P propF895;
  P setterF894;
  P xF893;
  P xF892;
  P accessorF891;
  P getterF890;
  P xF889;
  P xF888;
  P accessorF887;
  P propF886;
  P setterF885;
  P getterF884;
  P xF883;
  P xF882;
  P accessorF881;
  P propF880;
  P setterF879;
  P xF878;
  P xF877;
  P accessorF876;
  P getterF875;
  P xF874;
  P xF873;
  P accessorF872;
  P propF871;
  P setterF870;
  P getterF869;
  P xF868;
  P xF867;
  P accessorF866;
  P propF865;
  P setterF864;
  P xF863;
  P xF862;
  P accessorF861;
  P getterF860;
  P xF859;
  P xF858;
  P accessorF857;
  P propF856;
  P setterF855;
  P xF854;
  P xF853;
  P accessorF852;
  P getterF851;
  P xF850;
  P xF849;
  P accessorF848;
  P propF847;
  P setterF846;
  P getterF845;
  P xF844;
  P xF843;
  P accessorF842;
  P propF841;
  P setterF840;
  P getterF839;
  P xF838;
  P xF837;
  P accessorF836;
  P propF835;
  P setterF834;
  P xF833;
  P xF832;
  P accessorF831;
  P getterF830;
  P xF829;
  P xF828;
  P accessorF827;
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
  lit_6 = YPPsym((P)"%early-dispatch");
  lit_7 = YPPlist(1,YPPsym((P)"args"));
  lit_8 = YPsb((P)"ERROR: Generic function dispatch called before it existed.");
  T0 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YPearly_dispatch = YPfab_met(FUNCODEREF(YPearly_dispatch),T0,LITREF(lit_6),LITREF(lit_7),sloc(669),YPfalse);
  T1 = YPearly_dispatch;
  VARSET(YPearly_dispatch,T1);
  lit_9 = YPPsym((P)"%add-met");
  lit_10 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T2 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPadd_met = YPfab_met(FUNCODEREF(YPadd_met),T2,LITREF(lit_9),LITREF(lit_10),sloc(673),YPfalse);
  T3 = YPadd_met;
  VARSET(YPadd_met,T3);
  lit_11 = YPPsym((P)"%add-prop");
  lit_12 = YPPlist(2,YPPsym((P)"class"),YPPsym((P)"prop"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPadd_prop = YPfab_met(FUNCODEREF(YPadd_prop),T4,LITREF(lit_11),LITREF(lit_12),sloc(723),YPfalse);
  T5 = YPadd_prop;
  VARSET(YPadd_prop,T5);
  lit_13 = YPPsym((P)"box-value");
  lit_14 = YPPlist(1,YPPsym((P)"x"));
  lit_15 = YPPsym((P)"box-value-setter");
  lit_16 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_17 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLboxG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_179 = YPfab_met(FUNCODEREF(fun_179),T8,YPfalse,LITREF(lit_14),sloc(745),YPfalse);
  T7 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLboxG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_180 = YPfab_met(FUNCODEREF(fun_180),T7,YPfalse,LITREF(lit_16),sloc(745),YPfalse);
  T6 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_181 = YPfab_met(FUNCODEREF(fun_181),T6,YPfalse,LITREF(lit_17),sloc(745),YPfalse);
  T21 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T20 = (P)YPsig(T21,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T19 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T20,LITREF(lit_13),Ynil,YPfalse);
  VARSET(Ybox_value,T19);
  T24 = fun_179;
  accessorF827 = T24;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ybox_value),accessorF827);
  xF828 = accessorF827;
  T22 = (P)YPprop_elt(xF828,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_13),T22);
  xF829 = accessorF827;
  T23 = (P)YPprop_elt(xF829,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T23);
  getterF830 = accessorF827;
  T15 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T14 = (P)YPpair(VARREF(YLanyG),T15);
  T13 = (P)YPsig(T14,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T12 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T13,LITREF(lit_15),Ynil,YPfalse);
  VARSET(Ybox_value_setter,T12);
  T18 = fun_180;
  accessorF831 = T18;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ybox_value_setter),accessorF831);
  xF832 = accessorF831;
  T16 = (P)YPprop_elt(xF832,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_15),T16);
  xF833 = accessorF831;
  T17 = (P)YPprop_elt(xF833,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T17);
  setterF834 = accessorF831;
  T11 = fun_181;
  T10 = (P)YPPprop(VARREF(YLboxG),VARREF(Ybox_value),VARREF(Ybox_value_setter),VARREF(YLanyG),T11);
  propF835 = T10;
  (P)YPmet_env_setter(propF835,getterF830);
  (P)YPmet_env_setter(propF835,setterF834);
  T9 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLboxG),propF835);
  lit_18 = YPPsym((P)"src-loc-line");
  lit_19 = YPPlist(1,YPPsym((P)"x"));
  lit_20 = YPPlist(1,YPPsym((P)"x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLsrc_locG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_182 = YPfab_met(FUNCODEREF(fun_182),T26,YPfalse,LITREF(lit_19),sloc(745),YPfalse);
  T25 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_183 = YPfab_met(FUNCODEREF(fun_183),T25,YPfalse,LITREF(lit_20),sloc(745),YPfalse);
  T32 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T31 = (P)YPsig(T32,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T30 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T31,LITREF(lit_18),Ynil,YPfalse);
  VARSET(Ysrc_loc_line,T30);
  T35 = fun_182;
  accessorF836 = T35;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_line),accessorF836);
  xF837 = accessorF836;
  T33 = (P)YPprop_elt(xF837,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_18),T33);
  xF838 = accessorF836;
  T34 = (P)YPprop_elt(xF838,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T34);
  getterF839 = accessorF836;
  setterF840 = YPfalse;
  T29 = fun_183;
  T28 = (P)YPPprop(VARREF(YLsrc_locG),VARREF(Ysrc_loc_line),YPfalse,VARREF(YLintG),T29);
  propF841 = T28;
  (P)YPmet_env_setter(propF841,getterF839);
  T27 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsrc_locG),propF841);
  lit_21 = YPPsym((P)"src-loc-file");
  lit_22 = YPPlist(1,YPPsym((P)"x"));
  lit_23 = YPPlist(1,YPPsym((P)"x"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YLsrc_locG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_184 = YPfab_met(FUNCODEREF(fun_184),T37,YPfalse,LITREF(lit_22),sloc(745),YPfalse);
  T36 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_185 = YPfab_met(FUNCODEREF(fun_185),T36,YPfalse,LITREF(lit_23),sloc(745),YPfalse);
  T43 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T42 = (P)YPsig(T43,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T41 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T42,LITREF(lit_21),Ynil,YPfalse);
  VARSET(Ysrc_loc_file,T41);
  T46 = fun_184;
  accessorF842 = T46;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_file),accessorF842);
  xF843 = accessorF842;
  T44 = (P)YPprop_elt(xF843,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_21),T44);
  xF844 = accessorF842;
  T45 = (P)YPprop_elt(xF844,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T45);
  getterF845 = accessorF842;
  setterF846 = YPfalse;
  T40 = fun_185;
  T39 = (P)YPPprop(VARREF(YLsrc_locG),VARREF(Ysrc_loc_file),YPfalse,VARREF(YLstrG),T40);
  propF847 = T39;
  (P)YPmet_env_setter(propF847,getterF845);
  T38 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsrc_locG),propF847);
  lit_24 = YPPsym((P)"head");
  lit_25 = YPPlist(1,YPPsym((P)"x"));
  lit_26 = YPPsym((P)"head-setter");
  lit_27 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_28 = YPPlist(1,YPPsym((P)"x"));
  T49 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_186 = YPfab_met(FUNCODEREF(fun_186),T49,YPfalse,LITREF(lit_25),sloc(745),YPfalse);
  T48 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_187 = YPfab_met(FUNCODEREF(fun_187),T48,YPfalse,LITREF(lit_27),sloc(745),YPfalse);
  T47 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_188 = YPfab_met(FUNCODEREF(fun_188),T47,YPfalse,LITREF(lit_28),sloc(745),YPfalse);
  T62 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T61 = (P)YPsig(T62,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T60 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T61,LITREF(lit_24),Ynil,YPfalse);
  VARSET(Yhead,T60);
  T65 = fun_186;
  accessorF848 = T65;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yhead),accessorF848);
  xF849 = accessorF848;
  T63 = (P)YPprop_elt(xF849,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_24),T63);
  xF850 = accessorF848;
  T64 = (P)YPprop_elt(xF850,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T64);
  getterF851 = accessorF848;
  T56 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T55 = (P)YPpair(VARREF(YLanyG),T56);
  T54 = (P)YPsig(T55,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T53 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T54,LITREF(lit_26),Ynil,YPfalse);
  VARSET(Yhead_setter,T53);
  T59 = fun_187;
  accessorF852 = T59;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yhead_setter),accessorF852);
  xF853 = accessorF852;
  T57 = (P)YPprop_elt(xF853,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_26),T57);
  xF854 = accessorF852;
  T58 = (P)YPprop_elt(xF854,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T58);
  setterF855 = accessorF852;
  T52 = fun_188;
  T51 = (P)YPPprop(VARREF(YLlstG),VARREF(Yhead),VARREF(Yhead_setter),VARREF(YLanyG),T52);
  propF856 = T51;
  (P)YPmet_env_setter(propF856,getterF851);
  (P)YPmet_env_setter(propF856,setterF855);
  T50 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF856);
  lit_29 = YPPsym((P)"tail");
  lit_30 = YPPlist(1,YPPsym((P)"x"));
  lit_31 = YPPsym((P)"tail-setter");
  lit_32 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_33 = YPPlist(1,YPPsym((P)"x"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_189 = YPfab_met(FUNCODEREF(fun_189),T68,YPfalse,LITREF(lit_30),sloc(745),YPfalse);
  T67 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_190 = YPfab_met(FUNCODEREF(fun_190),T67,YPfalse,LITREF(lit_32),sloc(745),YPfalse);
  T66 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_191 = YPfab_met(FUNCODEREF(fun_191),T66,YPfalse,LITREF(lit_33),sloc(745),YPfalse);
  T81 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T80 = (P)YPsig(T81,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T79 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T80,LITREF(lit_29),Ynil,YPfalse);
  VARSET(Ytail,T79);
  T84 = fun_189;
  accessorF857 = T84;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytail),accessorF857);
  xF858 = accessorF857;
  T82 = (P)YPprop_elt(xF858,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_29),T82);
  xF859 = accessorF857;
  T83 = (P)YPprop_elt(xF859,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T83);
  getterF860 = accessorF857;
  T75 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T74 = (P)YPpair(VARREF(YLanyG),T75);
  T73 = (P)YPsig(T74,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T72 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T73,LITREF(lit_31),Ynil,YPfalse);
  VARSET(Ytail_setter,T72);
  T78 = fun_190;
  accessorF861 = T78;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytail_setter),accessorF861);
  xF862 = accessorF861;
  T76 = (P)YPprop_elt(xF862,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_31),T76);
  xF863 = accessorF861;
  T77 = (P)YPprop_elt(xF863,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T77);
  setterF864 = accessorF861;
  T71 = fun_191;
  T70 = (P)YPPprop(VARREF(YLlstG),VARREF(Ytail),VARREF(Ytail_setter),VARREF(YLlstG),T71);
  propF865 = T70;
  (P)YPmet_env_setter(propF865,getterF860);
  (P)YPmet_env_setter(propF865,setterF864);
  T69 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF865);
  lit_34 = YPPsym((P)"sym-name");
  lit_35 = YPPlist(1,YPPsym((P)"x"));
  lit_36 = YPPlist(1,YPPsym((P)"x"));
  T86 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_192 = YPfab_met(FUNCODEREF(fun_192),T86,YPfalse,LITREF(lit_35),sloc(745),YPfalse);
  T85 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_193 = YPfab_met(FUNCODEREF(fun_193),T85,YPfalse,LITREF(lit_36),sloc(745),YPfalse);
  T92 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T91 = (P)YPsig(T92,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T90 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T91,LITREF(lit_34),Ynil,YPfalse);
  VARSET(Ysym_name,T90);
  T95 = fun_192;
  accessorF866 = T95;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysym_name),accessorF866);
  xF867 = accessorF866;
  T93 = (P)YPprop_elt(xF867,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_34),T93);
  xF868 = accessorF866;
  T94 = (P)YPprop_elt(xF868,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T94);
  getterF869 = accessorF866;
  setterF870 = YPfalse;
  T89 = fun_193;
  T88 = (P)YPPprop(VARREF(YLsymG),VARREF(Ysym_name),YPfalse,VARREF(YLstrG),T89);
  propF871 = T88;
  (P)YPmet_env_setter(propF871,getterF869);
  T87 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsymG),propF871);
  lit_37 = YPPsym((P)"class-prop-len");
  lit_38 = YPPlist(1,YPPsym((P)"x"));
  lit_39 = YPPsym((P)"class-prop-len-setter");
  lit_40 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_41 = YPPlist(1,YPPsym((P)"x"));
  T98 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_194 = YPfab_met(FUNCODEREF(fun_194),T98,YPfalse,LITREF(lit_38),sloc(745),YPfalse);
  T97 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_195 = YPfab_met(FUNCODEREF(fun_195),T97,YPfalse,LITREF(lit_40),sloc(745),YPfalse);
  T96 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_196 = YPfab_met(FUNCODEREF(fun_196),T96,YPfalse,LITREF(lit_41),sloc(745),YPfalse);
  T111 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T110 = (P)YPsig(T111,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T109 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T110,LITREF(lit_37),Ynil,YPfalse);
  VARSET(Yclass_prop_len,T109);
  T114 = fun_194;
  accessorF872 = T114;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len),accessorF872);
  xF873 = accessorF872;
  T112 = (P)YPprop_elt(xF873,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_37),T112);
  xF874 = accessorF872;
  T113 = (P)YPprop_elt(xF874,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T113);
  getterF875 = accessorF872;
  T105 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T104 = (P)YPpair(VARREF(YLanyG),T105);
  T103 = (P)YPsig(T104,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T102 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T103,LITREF(lit_39),Ynil,YPfalse);
  VARSET(Yclass_prop_len_setter,T102);
  T108 = fun_195;
  accessorF876 = T108;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len_setter),accessorF876);
  xF877 = accessorF876;
  T106 = (P)YPprop_elt(xF877,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_39),T106);
  xF878 = accessorF876;
  T107 = (P)YPprop_elt(xF878,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T107);
  setterF879 = accessorF876;
  T101 = fun_196;
  T100 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_prop_len),VARREF(Yclass_prop_len_setter),VARREF(YLfixnumG),T101);
  propF880 = T100;
  (P)YPmet_env_setter(propF880,getterF875);
  (P)YPmet_env_setter(propF880,setterF879);
  T99 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF880);
  lit_42 = YPPsym((P)"class-name");
  lit_43 = YPPlist(1,YPPsym((P)"x"));
  lit_44 = YPPlist(1,YPPsym((P)"x"));
  T116 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_197 = YPfab_met(FUNCODEREF(fun_197),T116,YPfalse,LITREF(lit_43),sloc(745),YPfalse);
  T115 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_198 = YPfab_met(FUNCODEREF(fun_198),T115,YPfalse,LITREF(lit_44),sloc(745),YPfalse);
  T122 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T121 = (P)YPsig(T122,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T120 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T121,LITREF(lit_42),Ynil,YPfalse);
  VARSET(Yclass_name,T120);
  T125 = fun_197;
  accessorF881 = T125;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_name),accessorF881);
  xF882 = accessorF881;
  T123 = (P)YPprop_elt(xF882,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_42),T123);
  xF883 = accessorF881;
  T124 = (P)YPprop_elt(xF883,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T124);
  getterF884 = accessorF881;
  setterF885 = YPfalse;
  T119 = fun_198;
  T118 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_name),YPfalse,VARREF(YLsymG),T119);
  propF886 = T118;
  (P)YPmet_env_setter(propF886,getterF884);
  T117 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF886);
  lit_45 = YPPsym((P)"class-parents");
  lit_46 = YPPlist(1,YPPsym((P)"x"));
  lit_47 = YPPsym((P)"class-parents-setter");
  lit_48 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_49 = YPPlist(1,YPPsym((P)"x"));
  T128 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_199 = YPfab_met(FUNCODEREF(fun_199),T128,YPfalse,LITREF(lit_46),sloc(745),YPfalse);
  T127 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_200 = YPfab_met(FUNCODEREF(fun_200),T127,YPfalse,LITREF(lit_48),sloc(745),YPfalse);
  T126 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_201 = YPfab_met(FUNCODEREF(fun_201),T126,YPfalse,LITREF(lit_49),sloc(745),YPfalse);
  T141 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T140 = (P)YPsig(T141,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T139 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T140,LITREF(lit_45),Ynil,YPfalse);
  VARSET(Yclass_parents,T139);
  T144 = fun_199;
  accessorF887 = T144;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents),accessorF887);
  xF888 = accessorF887;
  T142 = (P)YPprop_elt(xF888,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_45),T142);
  xF889 = accessorF887;
  T143 = (P)YPprop_elt(xF889,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T143);
  getterF890 = accessorF887;
  T135 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T134 = (P)YPpair(VARREF(YLanyG),T135);
  T133 = (P)YPsig(T134,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T132 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T133,LITREF(lit_47),Ynil,YPfalse);
  VARSET(Yclass_parents_setter,T132);
  T138 = fun_200;
  accessorF891 = T138;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents_setter),accessorF891);
  xF892 = accessorF891;
  T136 = (P)YPprop_elt(xF892,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_47),T136);
  xF893 = accessorF891;
  T137 = (P)YPprop_elt(xF893,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T137);
  setterF894 = accessorF891;
  T131 = fun_201;
  T130 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_parents),VARREF(Yclass_parents_setter),VARREF(YLlstG),T131);
  propF895 = T130;
  (P)YPmet_env_setter(propF895,getterF890);
  (P)YPmet_env_setter(propF895,setterF894);
  T129 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF895);
  lit_50 = YPPsym((P)"class-direct-props");
  lit_51 = YPPlist(1,YPPsym((P)"x"));
  lit_52 = YPPsym((P)"class-direct-props-setter");
  lit_53 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_54 = YPPlist(1,YPPsym((P)"x"));
  T147 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_202 = YPfab_met(FUNCODEREF(fun_202),T147,YPfalse,LITREF(lit_51),sloc(745),YPfalse);
  T146 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_203 = YPfab_met(FUNCODEREF(fun_203),T146,YPfalse,LITREF(lit_53),sloc(745),YPfalse);
  T145 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_204 = YPfab_met(FUNCODEREF(fun_204),T145,YPfalse,LITREF(lit_54),sloc(745),YPfalse);
  T160 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T159 = (P)YPsig(T160,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T158 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T159,LITREF(lit_50),Ynil,YPfalse);
  VARSET(Yclass_direct_props,T158);
  T163 = fun_202;
  accessorF896 = T163;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props),accessorF896);
  xF897 = accessorF896;
  T161 = (P)YPprop_elt(xF897,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_50),T161);
  xF898 = accessorF896;
  T162 = (P)YPprop_elt(xF898,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T162);
  getterF899 = accessorF896;
  T154 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T153 = (P)YPpair(VARREF(YLanyG),T154);
  T152 = (P)YPsig(T153,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T151 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T152,LITREF(lit_52),Ynil,YPfalse);
  VARSET(Yclass_direct_props_setter,T151);
  T157 = fun_203;
  accessorF900 = T157;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props_setter),accessorF900);
  xF901 = accessorF900;
  T155 = (P)YPprop_elt(xF901,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_52),T155);
  xF902 = accessorF900;
  T156 = (P)YPprop_elt(xF902,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T156);
  setterF903 = accessorF900;
  T150 = fun_204;
  T149 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_direct_props),VARREF(Yclass_direct_props_setter),VARREF(YLlstG),T150);
  propF904 = T149;
  (P)YPmet_env_setter(propF904,getterF899);
  (P)YPmet_env_setter(propF904,setterF903);
  T148 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF904);
  lit_55 = YPPsym((P)"class-ancestors");
  lit_56 = YPPlist(1,YPPsym((P)"x"));
  lit_57 = YPPsym((P)"class-ancestors-setter");
  lit_58 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_59 = YPPlist(1,YPPsym((P)"x"));
  T166 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_205 = YPfab_met(FUNCODEREF(fun_205),T166,YPfalse,LITREF(lit_56),sloc(745),YPfalse);
  T165 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_206 = YPfab_met(FUNCODEREF(fun_206),T165,YPfalse,LITREF(lit_58),sloc(745),YPfalse);
  T164 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_207 = YPfab_met(FUNCODEREF(fun_207),T164,YPfalse,LITREF(lit_59),sloc(745),YPfalse);
  T179 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T178 = (P)YPsig(T179,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T177 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T178,LITREF(lit_55),Ynil,YPfalse);
  VARSET(Yclass_ancestors,T177);
  T182 = fun_205;
  accessorF905 = T182;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors),accessorF905);
  xF906 = accessorF905;
  T180 = (P)YPprop_elt(xF906,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_55),T180);
  xF907 = accessorF905;
  T181 = (P)YPprop_elt(xF907,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T181);
  getterF908 = accessorF905;
  T173 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T172 = (P)YPpair(VARREF(YLanyG),T173);
  T171 = (P)YPsig(T172,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T170 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T171,LITREF(lit_57),Ynil,YPfalse);
  VARSET(Yclass_ancestors_setter,T170);
  T176 = fun_206;
  accessorF909 = T176;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors_setter),accessorF909);
  xF910 = accessorF909;
  T174 = (P)YPprop_elt(xF910,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_57),T174);
  xF911 = accessorF909;
  T175 = (P)YPprop_elt(xF911,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T175);
  setterF912 = accessorF909;
  T169 = fun_207;
  T168 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_ancestors),VARREF(Yclass_ancestors_setter),VARREF(YLlstG),T169);
  propF913 = T168;
  (P)YPmet_env_setter(propF913,getterF908);
  (P)YPmet_env_setter(propF913,setterF912);
  T167 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF913);
  lit_60 = YPPsym((P)"class-props");
  lit_61 = YPPlist(1,YPPsym((P)"x"));
  lit_62 = YPPsym((P)"class-props-setter");
  lit_63 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_64 = YPPlist(1,YPPsym((P)"x"));
  T185 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_208 = YPfab_met(FUNCODEREF(fun_208),T185,YPfalse,LITREF(lit_61),sloc(745),YPfalse);
  T184 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_209 = YPfab_met(FUNCODEREF(fun_209),T184,YPfalse,LITREF(lit_63),sloc(745),YPfalse);
  T183 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_210 = YPfab_met(FUNCODEREF(fun_210),T183,YPfalse,LITREF(lit_64),sloc(745),YPfalse);
  T198 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T197 = (P)YPsig(T198,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T196 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T197,LITREF(lit_60),Ynil,YPfalse);
  VARSET(Yclass_props,T196);
  T201 = fun_208;
  accessorF914 = T201;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_props),accessorF914);
  xF915 = accessorF914;
  T199 = (P)YPprop_elt(xF915,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_60),T199);
  xF916 = accessorF914;
  T200 = (P)YPprop_elt(xF916,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T200);
  getterF917 = accessorF914;
  T192 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T191 = (P)YPpair(VARREF(YLanyG),T192);
  T190 = (P)YPsig(T191,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T189 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T190,LITREF(lit_62),Ynil,YPfalse);
  VARSET(Yclass_props_setter,T189);
  T195 = fun_209;
  accessorF918 = T195;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_props_setter),accessorF918);
  xF919 = accessorF918;
  T193 = (P)YPprop_elt(xF919,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_62),T193);
  xF920 = accessorF918;
  T194 = (P)YPprop_elt(xF920,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T194);
  setterF921 = accessorF918;
  T188 = fun_210;
  T187 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_props),VARREF(Yclass_props_setter),VARREF(YLlstG),T188);
  propF922 = T187;
  (P)YPmet_env_setter(propF922,getterF917);
  (P)YPmet_env_setter(propF922,setterF921);
  T186 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF922);
  lit_65 = YPPsym((P)"class-children");
  lit_66 = YPPlist(1,YPPsym((P)"x"));
  lit_67 = YPPsym((P)"class-children-setter");
  lit_68 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_69 = YPPlist(1,YPPsym((P)"x"));
  T204 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_211 = YPfab_met(FUNCODEREF(fun_211),T204,YPfalse,LITREF(lit_66),sloc(745),YPfalse);
  T203 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_212 = YPfab_met(FUNCODEREF(fun_212),T203,YPfalse,LITREF(lit_68),sloc(745),YPfalse);
  T202 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_213 = YPfab_met(FUNCODEREF(fun_213),T202,YPfalse,LITREF(lit_69),sloc(745),YPfalse);
  T217 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T216 = (P)YPsig(T217,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T215 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T216,LITREF(lit_65),Ynil,YPfalse);
  VARSET(Yclass_children,T215);
  T220 = fun_211;
  accessorF923 = T220;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_children),accessorF923);
  xF924 = accessorF923;
  T218 = (P)YPprop_elt(xF924,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_65),T218);
  xF925 = accessorF923;
  T219 = (P)YPprop_elt(xF925,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T219);
  getterF926 = accessorF923;
  T211 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T210 = (P)YPpair(VARREF(YLanyG),T211);
  T209 = (P)YPsig(T210,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T208 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T209,LITREF(lit_67),Ynil,YPfalse);
  VARSET(Yclass_children_setter,T208);
  T214 = fun_212;
  accessorF927 = T214;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_children_setter),accessorF927);
  xF928 = accessorF927;
  T212 = (P)YPprop_elt(xF928,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_67),T212);
  xF929 = accessorF927;
  T213 = (P)YPprop_elt(xF929,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T213);
  setterF930 = accessorF927;
  T207 = fun_213;
  T206 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_children),VARREF(Yclass_children_setter),VARREF(YLlstG),T207);
  propF931 = T206;
  (P)YPmet_env_setter(propF931,getterF926);
  (P)YPmet_env_setter(propF931,setterF930);
  T205 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF931);
  lit_70 = YPPsym((P)"class-gens");
  lit_71 = YPPlist(1,YPPsym((P)"x"));
  lit_72 = YPPsym((P)"class-gens-setter");
  lit_73 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_74 = YPPlist(1,YPPsym((P)"x"));
  T223 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_214 = YPfab_met(FUNCODEREF(fun_214),T223,YPfalse,LITREF(lit_71),sloc(745),YPfalse);
  T222 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_215 = YPfab_met(FUNCODEREF(fun_215),T222,YPfalse,LITREF(lit_73),sloc(745),YPfalse);
  T221 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_216 = YPfab_met(FUNCODEREF(fun_216),T221,YPfalse,LITREF(lit_74),sloc(745),YPfalse);
  T236 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T235 = (P)YPsig(T236,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T234 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T235,LITREF(lit_70),Ynil,YPfalse);
  VARSET(Yclass_gens,T234);
  T239 = fun_214;
  accessorF932 = T239;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens),accessorF932);
  xF933 = accessorF932;
  T237 = (P)YPprop_elt(xF933,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_70),T237);
  xF934 = accessorF932;
  T238 = (P)YPprop_elt(xF934,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T238);
  getterF935 = accessorF932;
  T230 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T229 = (P)YPpair(VARREF(YLanyG),T230);
  T228 = (P)YPsig(T229,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T227 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T228,LITREF(lit_72),Ynil,YPfalse);
  VARSET(Yclass_gens_setter,T227);
  T233 = fun_215;
  accessorF936 = T233;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens_setter),accessorF936);
  xF937 = accessorF936;
  T231 = (P)YPprop_elt(xF937,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_72),T231);
  xF938 = accessorF936;
  T232 = (P)YPprop_elt(xF938,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T232);
  setterF939 = accessorF936;
  T226 = fun_216;
  T225 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_gens),VARREF(Yclass_gens_setter),VARREF(YLlstG),T226);
  propF940 = T225;
  (P)YPmet_env_setter(propF940,getterF935);
  (P)YPmet_env_setter(propF940,setterF939);
  T224 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF940);
  lit_75 = YPPsym((P)"class-mets");
  lit_76 = YPPlist(1,YPPsym((P)"x"));
  lit_77 = YPPsym((P)"class-mets-setter");
  lit_78 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_79 = YPPlist(1,YPPsym((P)"x"));
  T242 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_217 = YPfab_met(FUNCODEREF(fun_217),T242,YPfalse,LITREF(lit_76),sloc(745),YPfalse);
  T241 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_218 = YPfab_met(FUNCODEREF(fun_218),T241,YPfalse,LITREF(lit_78),sloc(745),YPfalse);
  T240 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_219 = YPfab_met(FUNCODEREF(fun_219),T240,YPfalse,LITREF(lit_79),sloc(745),YPfalse);
  T255 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T254 = (P)YPsig(T255,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T253 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T254,LITREF(lit_75),Ynil,YPfalse);
  VARSET(Yclass_mets,T253);
  T258 = fun_217;
  accessorF941 = T258;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets),accessorF941);
  xF942 = accessorF941;
  T256 = (P)YPprop_elt(xF942,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_75),T256);
  xF943 = accessorF941;
  T257 = (P)YPprop_elt(xF943,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T257);
  getterF944 = accessorF941;
  T249 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T248 = (P)YPpair(VARREF(YLanyG),T249);
  T247 = (P)YPsig(T248,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T246 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T247,LITREF(lit_77),Ynil,YPfalse);
  VARSET(Yclass_mets_setter,T246);
  T252 = fun_218;
  accessorF945 = T252;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets_setter),accessorF945);
  xF946 = accessorF945;
  T250 = (P)YPprop_elt(xF946,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_77),T250);
  xF947 = accessorF945;
  T251 = (P)YPprop_elt(xF947,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T251);
  setterF948 = accessorF945;
  T245 = fun_219;
  T244 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_mets),VARREF(Yclass_mets_setter),VARREF(YLlstG),T245);
  propF949 = T244;
  (P)YPmet_env_setter(propF949,getterF944);
  (P)YPmet_env_setter(propF949,setterF948);
  T243 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF949);
  lit_80 = YPPsym((P)"class-forward");
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  lit_82 = YPPsym((P)"class-forward-setter");
  lit_83 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_84 = YPPlist(1,YPPsym((P)"x"));
  T261 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_220 = YPfab_met(FUNCODEREF(fun_220),T261,YPfalse,LITREF(lit_81),sloc(745),YPfalse);
  T260 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_221 = YPfab_met(FUNCODEREF(fun_221),T260,YPfalse,LITREF(lit_83),sloc(745),YPfalse);
  T259 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_222 = YPfab_met(FUNCODEREF(fun_222),T259,YPfalse,LITREF(lit_84),sloc(745),YPfalse);
  T274 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T273 = (P)YPsig(T274,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T272 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T273,LITREF(lit_80),Ynil,YPfalse);
  VARSET(Yclass_forward,T272);
  T277 = fun_220;
  accessorF950 = T277;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward),accessorF950);
  xF951 = accessorF950;
  T275 = (P)YPprop_elt(xF951,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_80),T275);
  xF952 = accessorF950;
  T276 = (P)YPprop_elt(xF952,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T276);
  getterF953 = accessorF950;
  T268 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T267 = (P)YPpair(VARREF(YLanyG),T268);
  T266 = (P)YPsig(T267,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T265 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T266,LITREF(lit_82),Ynil,YPfalse);
  VARSET(Yclass_forward_setter,T265);
  T271 = fun_221;
  accessorF954 = T271;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward_setter),accessorF954);
  xF955 = accessorF954;
  T269 = (P)YPprop_elt(xF955,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_82),T269);
  xF956 = accessorF954;
  T270 = (P)YPprop_elt(xF956,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T270);
  setterF957 = accessorF954;
  T264 = fun_222;
  T263 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_forward),VARREF(Yclass_forward_setter),VARREF(YLanyG),T264);
  propF958 = T263;
  (P)YPmet_env_setter(propF958,getterF953);
  (P)YPmet_env_setter(propF958,setterF957);
  T262 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF958);
  lit_85 = YPPsym((P)"class-id");
  lit_86 = YPPlist(1,YPPsym((P)"x"));
  lit_87 = YPPlist(1,YPPsym((P)"x"));
  T279 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_223 = YPfab_met(FUNCODEREF(fun_223),T279,YPfalse,LITREF(lit_86),sloc(745),YPfalse);
  T278 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_224 = YPfab_met(FUNCODEREF(fun_224),T278,YPfalse,LITREF(lit_87),sloc(745),YPfalse);
  T285 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T284 = (P)YPsig(T285,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T283 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T284,LITREF(lit_85),Ynil,YPfalse);
  VARSET(Yclass_id,T283);
  T288 = fun_223;
  accessorF959 = T288;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_id),accessorF959);
  xF960 = accessorF959;
  T286 = (P)YPprop_elt(xF960,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_85),T286);
  xF961 = accessorF959;
  T287 = (P)YPprop_elt(xF961,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T287);
  getterF962 = accessorF959;
  setterF963 = YPfalse;
  T282 = fun_224;
  T281 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_id),YPfalse,VARREF(YLfixnumG),T282);
  propF964 = T281;
  (P)YPmet_env_setter(propF964,getterF962);
  T280 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF964);
  lit_88 = YPPsym((P)"class-row");
  lit_89 = YPPlist(1,YPPsym((P)"x"));
  lit_90 = YPPlist(1,YPPsym((P)"x"));
  T290 = YPfab_sig(YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_225 = YPfab_met(FUNCODEREF(fun_225),T290,YPfalse,LITREF(lit_89),sloc(745),YPfalse);
  T289 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_226 = YPfab_met(FUNCODEREF(fun_226),T289,YPfalse,LITREF(lit_90),sloc(745),YPfalse);
  T296 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T295 = (P)YPsig(T296,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T294 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T295,LITREF(lit_88),Ynil,YPfalse);
  VARSET(Yclass_row,T294);
  T299 = fun_225;
  accessorF965 = T299;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_row),accessorF965);
  xF966 = accessorF965;
  T297 = (P)YPprop_elt(xF966,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_88),T297);
  xF967 = accessorF965;
  T298 = (P)YPprop_elt(xF967,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T298);
  getterF968 = accessorF965;
  setterF969 = YPfalse;
  T293 = fun_226;
  T292 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_row),YPfalse,VARREF(YLtupG),T293);
  propF970 = T292;
  (P)YPmet_env_setter(propF970,getterF968);
  T291 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF970);
  lit_91 = YPPsym((P)"type-object");
  lit_92 = YPPlist(1,YPPsym((P)"x"));
  lit_93 = YPPlist(1,YPPsym((P)"x"));
  T301 = YPfab_sig(YPPlist(1,VARREF(YLsingletonG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_227 = YPfab_met(FUNCODEREF(fun_227),T301,YPfalse,LITREF(lit_92),sloc(745),YPfalse);
  T300 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_228 = YPfab_met(FUNCODEREF(fun_228),T300,YPfalse,LITREF(lit_93),sloc(745),YPfalse);
  T307 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T306 = (P)YPsig(T307,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T305 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T306,LITREF(lit_91),Ynil,YPfalse);
  VARSET(Ytype_object,T305);
  T310 = fun_227;
  accessorF971 = T310;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_object),accessorF971);
  xF972 = accessorF971;
  T308 = (P)YPprop_elt(xF972,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_91),T308);
  xF973 = accessorF971;
  T309 = (P)YPprop_elt(xF973,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T309);
  getterF974 = accessorF971;
  setterF975 = YPfalse;
  T304 = fun_228;
  T303 = (P)YPPprop(VARREF(YLsingletonG),VARREF(Ytype_object),YPfalse,VARREF(YLanyG),T304);
  propF976 = T303;
  (P)YPmet_env_setter(propF976,getterF974);
  T302 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsingletonG),propF976);
  lit_94 = YPPsym((P)"type-class");
  lit_95 = YPPlist(1,YPPsym((P)"x"));
  lit_96 = YPPlist(1,YPPsym((P)"x"));
  T312 = YPfab_sig(YPPlist(1,VARREF(YLsubclassG)),YPfalse,YPint((P)1),VARREF(YLclassG),Ynil);
  fun_229 = YPfab_met(FUNCODEREF(fun_229),T312,YPfalse,LITREF(lit_95),sloc(745),YPfalse);
  T311 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_230 = YPfab_met(FUNCODEREF(fun_230),T311,YPfalse,LITREF(lit_96),sloc(745),YPfalse);
  T318 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T317 = (P)YPsig(T318,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T316 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T317,LITREF(lit_94),Ynil,YPfalse);
  VARSET(Ytype_class,T316);
  T321 = fun_229;
  accessorF977 = T321;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_class),accessorF977);
  xF978 = accessorF977;
  T319 = (P)YPprop_elt(xF978,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_94),T319);
  xF979 = accessorF977;
  T320 = (P)YPprop_elt(xF979,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T320);
  getterF980 = accessorF977;
  setterF981 = YPfalse;
  T315 = fun_230;
  T314 = (P)YPPprop(VARREF(YLsubclassG),VARREF(Ytype_class),YPfalse,VARREF(YLclassG),T315);
  propF982 = T314;
  (P)YPmet_env_setter(propF982,getterF980);
  T313 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsubclassG),propF982);
  lit_97 = YPPsym((P)"union-elts");
  lit_98 = YPPlist(1,YPPsym((P)"x"));
  lit_99 = YPPlist(1,YPPsym((P)"x"));
  T323 = YPfab_sig(YPPlist(1,VARREF(YLunionG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_231 = YPfab_met(FUNCODEREF(fun_231),T323,YPfalse,LITREF(lit_98),sloc(745),YPfalse);
  T322 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPfab_met(FUNCODEREF(fun_232),T322,YPfalse,LITREF(lit_99),sloc(745),YPfalse);
  T329 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T328 = (P)YPsig(T329,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T327 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T328,LITREF(lit_97),Ynil,YPfalse);
  VARSET(Yunion_elts,T327);
  T332 = fun_231;
  accessorF983 = T332;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yunion_elts),accessorF983);
  xF984 = accessorF983;
  T330 = (P)YPprop_elt(xF984,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_97),T330);
  xF985 = accessorF983;
  T331 = (P)YPprop_elt(xF985,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T331);
  getterF986 = accessorF983;
  setterF987 = YPfalse;
  T326 = fun_232;
  T325 = (P)YPPprop(VARREF(YLunionG),VARREF(Yunion_elts),YPfalse,VARREF(YLlstG),T326);
  propF988 = T325;
  (P)YPmet_env_setter(propF988,getterF986);
  T324 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLunionG),propF988);
  lit_100 = YPPsym((P)"product-elts");
  lit_101 = YPPlist(1,YPPsym((P)"x"));
  lit_102 = YPPlist(1,YPPsym((P)"x"));
  T334 = YPfab_sig(YPPlist(1,VARREF(YLproductG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_233 = YPfab_met(FUNCODEREF(fun_233),T334,YPfalse,LITREF(lit_101),sloc(745),YPfalse);
  T333 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_234 = YPfab_met(FUNCODEREF(fun_234),T333,YPfalse,LITREF(lit_102),sloc(745),YPfalse);
  T340 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T339 = (P)YPsig(T340,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T338 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T339,LITREF(lit_100),Ynil,YPfalse);
  VARSET(Yproduct_elts,T338);
  T343 = fun_233;
  accessorF989 = T343;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yproduct_elts),accessorF989);
  xF990 = accessorF989;
  T341 = (P)YPprop_elt(xF990,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_100),T341);
  xF991 = accessorF989;
  T342 = (P)YPprop_elt(xF991,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T342);
  getterF992 = accessorF989;
  setterF993 = YPfalse;
  T337 = fun_234;
  T336 = (P)YPPprop(VARREF(YLproductG),VARREF(Yproduct_elts),YPfalse,VARREF(YLtupG),T337);
  propF994 = T336;
  (P)YPmet_env_setter(propF994,getterF992);
  T335 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLproductG),propF994);
  lit_103 = YPPsym((P)"prop-owner");
  lit_104 = YPPlist(1,YPPsym((P)"x"));
  lit_105 = YPPlist(1,YPPsym((P)"x"));
  T345 = YPfab_sig(YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_235 = YPfab_met(FUNCODEREF(fun_235),T345,YPfalse,LITREF(lit_104),sloc(745),YPfalse);
  T344 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_236 = YPfab_met(FUNCODEREF(fun_236),T344,YPfalse,LITREF(lit_105),sloc(745),YPfalse);
  T351 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T350 = (P)YPsig(T351,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T349 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T350,LITREF(lit_103),Ynil,YPfalse);
  VARSET(Yprop_owner,T349);
  T354 = fun_235;
  accessorF995 = T354;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner),accessorF995);
  xF996 = accessorF995;
  T352 = (P)YPprop_elt(xF996,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_103),T352);
  xF997 = accessorF995;
  T353 = (P)YPprop_elt(xF997,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T353);
  getterF998 = accessorF995;
  setterF999 = YPfalse;
  T348 = fun_236;
  T347 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_owner),YPfalse,VARREF(YLanyG),T348);
  propF1000 = T347;
  (P)YPmet_env_setter(propF1000,getterF998);
  T346 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF1000);
  lit_106 = YPPsym((P)"prop-getter");
  lit_107 = YPPlist(1,YPPsym((P)"x"));
  lit_108 = YPPlist(1,YPPsym((P)"x"));
  T356 = YPfab_sig(YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_237 = YPfab_met(FUNCODEREF(fun_237),T356,YPfalse,LITREF(lit_107),sloc(745),YPfalse);
  T355 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_238 = YPfab_met(FUNCODEREF(fun_238),T355,YPfalse,LITREF(lit_108),sloc(745),YPfalse);
  T362 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T361 = (P)YPsig(T362,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T360 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T361,LITREF(lit_106),Ynil,YPfalse);
  VARSET(Yprop_getter,T360);
  T365 = fun_237;
  accessorF1001 = T365;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter),accessorF1001);
  xF1002 = accessorF1001;
  T363 = (P)YPprop_elt(xF1002,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_106),T363);
  xF1003 = accessorF1001;
  T364 = (P)YPprop_elt(xF1003,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T364);
  getterF1004 = accessorF1001;
  setterF1005 = YPfalse;
  T359 = fun_238;
  T358 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_getter),YPfalse,VARREF(YLfunG),T359);
  propF1006 = T358;
  (P)YPmet_env_setter(propF1006,getterF1004);
  T357 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF1006);
  lit_109 = YPPsym((P)"prop-setter");
  lit_110 = YPPlist(1,YPPsym((P)"x"));
  lit_111 = YPPlist(1,YPPsym((P)"x"));
  T367 = YPfab_sig(YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_239 = YPfab_met(FUNCODEREF(fun_239),T367,YPfalse,LITREF(lit_110),sloc(745),YPfalse);
  T366 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_240 = YPfab_met(FUNCODEREF(fun_240),T366,YPfalse,LITREF(lit_111),sloc(745),YPfalse);
  T373 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T372 = (P)YPsig(T373,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T371 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T372,LITREF(lit_109),Ynil,YPfalse);
  VARSET(Yprop_setter,T371);
  T376 = fun_239;
  accessorF1007 = T376;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter),accessorF1007);
  xF1008 = accessorF1007;
  T374 = (P)YPprop_elt(xF1008,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_109),T374);
  xF1009 = accessorF1007;
  T375 = (P)YPprop_elt(xF1009,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T375);
  getterF1010 = accessorF1007;
  setterF1011 = YPfalse;
  T370 = fun_240;
  T369 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_setter),YPfalse,VARREF(YLanyG),T370);
  propF1012 = T369;
  (P)YPmet_env_setter(propF1012,getterF1010);
  T368 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF1012);
  lit_112 = YPPsym((P)"prop-type");
  lit_113 = YPPlist(1,YPPsym((P)"x"));
  lit_114 = YPPlist(1,YPPsym((P)"x"));
  T378 = YPfab_sig(YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_241 = YPfab_met(FUNCODEREF(fun_241),T378,YPfalse,LITREF(lit_113),sloc(745),YPfalse);
  T377 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_242 = YPfab_met(FUNCODEREF(fun_242),T377,YPfalse,LITREF(lit_114),sloc(745),YPfalse);
  T384 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T383 = (P)YPsig(T384,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T382 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T383,LITREF(lit_112),Ynil,YPfalse);
  VARSET(Yprop_type,T382);
  T387 = fun_241;
  accessorF1013 = T387;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_type),accessorF1013);
  xF1014 = accessorF1013;
  T385 = (P)YPprop_elt(xF1014,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_112),T385);
  xF1015 = accessorF1013;
  T386 = (P)YPprop_elt(xF1015,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T386);
  getterF1016 = accessorF1013;
  setterF1017 = YPfalse;
  T381 = fun_242;
  T380 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_type),YPfalse,VARREF(YLtypeG),T381);
  propF1018 = T380;
  (P)YPmet_env_setter(propF1018,getterF1016);
  T379 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF1018);
  lit_115 = YPPsym((P)"prop-init");
  lit_116 = YPPlist(1,YPPsym((P)"x"));
  lit_117 = YPPlist(1,YPPsym((P)"x"));
  lit_118 = YPPlist(1,YPPsym((P)"x"));
  T390 = YPfab_sig(YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_243 = YPfab_met(FUNCODEREF(fun_243),T390,YPfalse,LITREF(lit_116),sloc(745),YPfalse);
  T389 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_244 = YPfab_met(FUNCODEREF(fun_244),T389,YPfalse,LITREF(lit_118),sloc(156),YPfalse);
  T388 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_245 = YPfab_met(FUNCODEREF(fun_245),T388,YPfalse,LITREF(lit_117),sloc(745),YPfalse);
  T396 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T395 = (P)YPsig(T396,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T394 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T395,LITREF(lit_115),Ynil,YPfalse);
  VARSET(Yprop_init,T394);
  T399 = fun_243;
  accessorF1019 = T399;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_init),accessorF1019);
  xF1020 = accessorF1019;
  T397 = (P)YPprop_elt(xF1020,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_115),T397);
  xF1021 = accessorF1019;
  T398 = (P)YPprop_elt(xF1021,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T398);
  getterF1022 = accessorF1019;
  setterF1023 = YPfalse;
  T393 = fun_245;
  T392 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_init),YPfalse,VARREF(YLfunG),T393);
  propF1024 = T392;
  (P)YPmet_env_setter(propF1024,getterF1022);
  T391 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF1024);
  lit_119 = YPPsym((P)"gen-cache-missable?");
  lit_120 = YPPlist(1,YPPsym((P)"x"));
  lit_121 = YPPlist(1,YPPsym((P)"x"));
  T401 = YPfab_sig(YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_246 = YPfab_met(FUNCODEREF(fun_246),T401,YPfalse,LITREF(lit_120),sloc(745),YPfalse);
  T400 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_247 = YPfab_met(FUNCODEREF(fun_247),T400,YPfalse,LITREF(lit_121),sloc(745),YPfalse);
  T407 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T406 = (P)YPsig(T407,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T405 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T406,LITREF(lit_119),Ynil,YPfalse);
  VARSET(Ygen_cache_missableQ,T405);
  T410 = fun_246;
  accessorF1025 = T410;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ),accessorF1025);
  xF1026 = accessorF1025;
  T408 = (P)YPprop_elt(xF1026,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_119),T408);
  xF1027 = accessorF1025;
  T409 = (P)YPprop_elt(xF1027,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T409);
  getterF1028 = accessorF1025;
  setterF1029 = YPfalse;
  T404 = fun_247;
  T403 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ),YPfalse,VARREF(YLlogG),T404);
  propF1030 = T403;
  (P)YPmet_env_setter(propF1030,getterF1028);
  T402 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF1030);
  lit_122 = YPPsym((P)"gen-cache-arg-pos");
  lit_123 = YPPlist(1,YPPsym((P)"x"));
  lit_124 = YPPlist(1,YPPsym((P)"x"));
  T412 = YPfab_sig(YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_248 = YPfab_met(FUNCODEREF(fun_248),T412,YPfalse,LITREF(lit_123),sloc(745),YPfalse);
  T411 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_249 = YPfab_met(FUNCODEREF(fun_249),T411,YPfalse,LITREF(lit_124),sloc(745),YPfalse);
  T418 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T417 = (P)YPsig(T418,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T416 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T417,LITREF(lit_122),Ynil,YPfalse);
  VARSET(Ygen_cache_arg_pos,T416);
  T421 = fun_248;
  accessorF1031 = T421;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos),accessorF1031);
  xF1032 = accessorF1031;
  T419 = (P)YPprop_elt(xF1032,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_122),T419);
  xF1033 = accessorF1031;
  T420 = (P)YPprop_elt(xF1033,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T420);
  getterF1034 = accessorF1031;
  setterF1035 = YPfalse;
  T415 = fun_249;
  T414 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos),YPfalse,VARREF(YLfixnumG),T415);
  propF1036 = T414;
  (P)YPmet_env_setter(propF1036,getterF1034);
  T413 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF1036);
  lit_125 = YPPsym((P)"gen-cache-singletons");
  lit_126 = YPPlist(1,YPPsym((P)"x"));
  lit_127 = YPPlist(1,YPPsym((P)"x"));
  T423 = YPfab_sig(YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_250 = YPfab_met(FUNCODEREF(fun_250),T423,YPfalse,LITREF(lit_126),sloc(745),YPfalse);
  T422 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_251 = YPfab_met(FUNCODEREF(fun_251),T422,YPfalse,LITREF(lit_127),sloc(745),YPfalse);
  T429 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T428 = (P)YPsig(T429,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T427 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T428,LITREF(lit_125),Ynil,YPfalse);
  VARSET(Ygen_cache_singletons,T427);
  T432 = fun_250;
  accessorF1037 = T432;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons),accessorF1037);
  xF1038 = accessorF1037;
  T430 = (P)YPprop_elt(xF1038,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_125),T430);
  xF1039 = accessorF1037;
  T431 = (P)YPprop_elt(xF1039,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T431);
  getterF1040 = accessorF1037;
  setterF1041 = YPfalse;
  T426 = fun_251;
  T425 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons),YPfalse,VARREF(YLlstG),T426);
  propF1042 = T425;
  (P)YPmet_env_setter(propF1042,getterF1040);
  T424 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF1042);
  lit_128 = YPPsym((P)"gen-cache-classes");
  lit_129 = YPPlist(1,YPPsym((P)"x"));
  lit_130 = YPPlist(1,YPPsym((P)"x"));
  T434 = YPfab_sig(YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_252 = YPfab_met(FUNCODEREF(fun_252),T434,YPfalse,LITREF(lit_129),sloc(745),YPfalse);
  T433 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_253 = YPfab_met(FUNCODEREF(fun_253),T433,YPfalse,LITREF(lit_130),sloc(745),YPfalse);
  T440 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T439 = (P)YPsig(T440,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T438 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T439,LITREF(lit_128),Ynil,YPfalse);
  VARSET(Ygen_cache_classes,T438);
  T443 = fun_252;
  accessorF1043 = T443;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes),accessorF1043);
  xF1044 = accessorF1043;
  T441 = (P)YPprop_elt(xF1044,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_128),T441);
  xF1045 = accessorF1043;
  T442 = (P)YPprop_elt(xF1045,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T442);
  getterF1046 = accessorF1043;
  setterF1047 = YPfalse;
  T437 = fun_253;
  T436 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes),YPfalse,VARREF(YLlstG),T437);
  propF1048 = T436;
  (P)YPmet_env_setter(propF1048,getterF1046);
  T435 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF1048);
  lit_131 = YPPsym((P)"sig-specs");
  lit_132 = YPPlist(1,YPPsym((P)"x"));
  lit_133 = YPPsym((P)"sig-specs-setter");
  lit_134 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_135 = YPPlist(1,YPPsym((P)"x"));
  T446 = YPfab_sig(YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_254 = YPfab_met(FUNCODEREF(fun_254),T446,YPfalse,LITREF(lit_132),sloc(745),YPfalse);
  T445 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_255 = YPfab_met(FUNCODEREF(fun_255),T445,YPfalse,LITREF(lit_134),sloc(745),YPfalse);
  T444 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_256 = YPfab_met(FUNCODEREF(fun_256),T444,YPfalse,LITREF(lit_135),sloc(745),YPfalse);
  T459 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T458 = (P)YPsig(T459,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T457 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T458,LITREF(lit_131),Ynil,YPfalse);
  VARSET(Ysig_specs,T457);
  T462 = fun_254;
  accessorF1049 = T462;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs),accessorF1049);
  xF1050 = accessorF1049;
  T460 = (P)YPprop_elt(xF1050,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_131),T460);
  xF1051 = accessorF1049;
  T461 = (P)YPprop_elt(xF1051,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T461);
  getterF1052 = accessorF1049;
  T453 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T452 = (P)YPpair(VARREF(YLanyG),T453);
  T451 = (P)YPsig(T452,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T450 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T451,LITREF(lit_133),Ynil,YPfalse);
  VARSET(Ysig_specs_setter,T450);
  T456 = fun_255;
  accessorF1053 = T456;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs_setter),accessorF1053);
  xF1054 = accessorF1053;
  T454 = (P)YPprop_elt(xF1054,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_133),T454);
  xF1055 = accessorF1053;
  T455 = (P)YPprop_elt(xF1055,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T455);
  setterF1056 = accessorF1053;
  T449 = fun_256;
  T448 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_specs),VARREF(Ysig_specs_setter),VARREF(YLlstG),T449);
  propF1057 = T448;
  (P)YPmet_env_setter(propF1057,getterF1052);
  (P)YPmet_env_setter(propF1057,setterF1056);
  T447 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF1057);
  lit_136 = YPPsym((P)"sig-nary?");
  lit_137 = YPPlist(1,YPPsym((P)"x"));
  lit_138 = YPPsym((P)"sig-nary?-setter");
  lit_139 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_140 = YPPlist(1,YPPsym((P)"x"));
  T465 = YPfab_sig(YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_257 = YPfab_met(FUNCODEREF(fun_257),T465,YPfalse,LITREF(lit_137),sloc(745),YPfalse);
  T464 = YPfab_sig(YPPlist(2,VARREF(YLlogG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_258 = YPfab_met(FUNCODEREF(fun_258),T464,YPfalse,LITREF(lit_139),sloc(745),YPfalse);
  T463 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_259 = YPfab_met(FUNCODEREF(fun_259),T463,YPfalse,LITREF(lit_140),sloc(745),YPfalse);
  T478 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T477 = (P)YPsig(T478,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T476 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T477,LITREF(lit_136),Ynil,YPfalse);
  VARSET(Ysig_naryQ,T476);
  T481 = fun_257;
  accessorF1058 = T481;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ),accessorF1058);
  xF1059 = accessorF1058;
  T479 = (P)YPprop_elt(xF1059,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_136),T479);
  xF1060 = accessorF1058;
  T480 = (P)YPprop_elt(xF1060,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T480);
  getterF1061 = accessorF1058;
  T472 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T471 = (P)YPpair(VARREF(YLanyG),T472);
  T470 = (P)YPsig(T471,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T469 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T470,LITREF(lit_138),Ynil,YPfalse);
  VARSET(Ysig_naryQ_setter,T469);
  T475 = fun_258;
  accessorF1062 = T475;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ_setter),accessorF1062);
  xF1063 = accessorF1062;
  T473 = (P)YPprop_elt(xF1063,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_138),T473);
  xF1064 = accessorF1062;
  T474 = (P)YPprop_elt(xF1064,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T474);
  setterF1065 = accessorF1062;
  T468 = fun_259;
  T467 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_naryQ),VARREF(Ysig_naryQ_setter),VARREF(YLlogG),T468);
  propF1066 = T467;
  (P)YPmet_env_setter(propF1066,getterF1061);
  (P)YPmet_env_setter(propF1066,setterF1065);
  T466 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF1066);
  lit_141 = YPPsym((P)"sig-arity");
  lit_142 = YPPlist(1,YPPsym((P)"x"));
  lit_143 = YPPsym((P)"sig-arity-setter");
  lit_144 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_145 = YPPlist(1,YPPsym((P)"x"));
  T484 = YPfab_sig(YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_260 = YPfab_met(FUNCODEREF(fun_260),T484,YPfalse,LITREF(lit_142),sloc(745),YPfalse);
  T483 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_261 = YPfab_met(FUNCODEREF(fun_261),T483,YPfalse,LITREF(lit_144),sloc(745),YPfalse);
  T482 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_262 = YPfab_met(FUNCODEREF(fun_262),T482,YPfalse,LITREF(lit_145),sloc(745),YPfalse);
  T497 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T496 = (P)YPsig(T497,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T495 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T496,LITREF(lit_141),Ynil,YPfalse);
  VARSET(Ysig_arity,T495);
  T500 = fun_260;
  accessorF1067 = T500;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity),accessorF1067);
  xF1068 = accessorF1067;
  T498 = (P)YPprop_elt(xF1068,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_141),T498);
  xF1069 = accessorF1067;
  T499 = (P)YPprop_elt(xF1069,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T499);
  getterF1070 = accessorF1067;
  T491 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T490 = (P)YPpair(VARREF(YLanyG),T491);
  T489 = (P)YPsig(T490,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T488 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T489,LITREF(lit_143),Ynil,YPfalse);
  VARSET(Ysig_arity_setter,T488);
  T494 = fun_261;
  accessorF1071 = T494;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity_setter),accessorF1071);
  xF1072 = accessorF1071;
  T492 = (P)YPprop_elt(xF1072,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_143),T492);
  xF1073 = accessorF1071;
  T493 = (P)YPprop_elt(xF1073,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T493);
  setterF1074 = accessorF1071;
  T487 = fun_262;
  T486 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_arity),VARREF(Ysig_arity_setter),VARREF(YLfixnumG),T487);
  propF1075 = T486;
  (P)YPmet_env_setter(propF1075,getterF1070);
  (P)YPmet_env_setter(propF1075,setterF1074);
  T485 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF1075);
  lit_146 = YPPsym((P)"sig-val");
  lit_147 = YPPlist(1,YPPsym((P)"x"));
  lit_148 = YPPsym((P)"sig-val-setter");
  lit_149 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_150 = YPPlist(1,YPPsym((P)"x"));
  T503 = YPfab_sig(YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_263 = YPfab_met(FUNCODEREF(fun_263),T503,YPfalse,LITREF(lit_147),sloc(745),YPfalse);
  T502 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_264 = YPfab_met(FUNCODEREF(fun_264),T502,YPfalse,LITREF(lit_149),sloc(745),YPfalse);
  T501 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_265 = YPfab_met(FUNCODEREF(fun_265),T501,YPfalse,LITREF(lit_150),sloc(745),YPfalse);
  T516 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T515 = (P)YPsig(T516,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T514 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T515,LITREF(lit_146),Ynil,YPfalse);
  VARSET(Ysig_val,T514);
  T519 = fun_263;
  accessorF1076 = T519;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_val),accessorF1076);
  xF1077 = accessorF1076;
  T517 = (P)YPprop_elt(xF1077,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_146),T517);
  xF1078 = accessorF1076;
  T518 = (P)YPprop_elt(xF1078,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T518);
  getterF1079 = accessorF1076;
  T510 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T509 = (P)YPpair(VARREF(YLanyG),T510);
  T508 = (P)YPsig(T509,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T507 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T508,LITREF(lit_148),Ynil,YPfalse);
  VARSET(Ysig_val_setter,T507);
  T513 = fun_264;
  accessorF1080 = T513;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_val_setter),accessorF1080);
  xF1081 = accessorF1080;
  T511 = (P)YPprop_elt(xF1081,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_148),T511);
  xF1082 = accessorF1080;
  T512 = (P)YPprop_elt(xF1082,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T512);
  setterF1083 = accessorF1080;
  T506 = fun_265;
  T505 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_val),VARREF(Ysig_val_setter),VARREF(YLanyG),T506);
  propF1084 = T505;
  (P)YPmet_env_setter(propF1084,getterF1079);
  (P)YPmet_env_setter(propF1084,setterF1083);
  T504 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF1084);
  lit_151 = YPPsym((P)"sig-unification-vars");
  lit_152 = YPPlist(1,YPPsym((P)"x"));
  lit_153 = YPPsym((P)"sig-unification-vars-setter");
  lit_154 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_155 = YPPlist(1,YPPsym((P)"x"));
  T522 = YPfab_sig(YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_266 = YPfab_met(FUNCODEREF(fun_266),T522,YPfalse,LITREF(lit_152),sloc(745),YPfalse);
  T521 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_267 = YPfab_met(FUNCODEREF(fun_267),T521,YPfalse,LITREF(lit_154),sloc(745),YPfalse);
  T520 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_268 = YPfab_met(FUNCODEREF(fun_268),T520,YPfalse,LITREF(lit_155),sloc(745),YPfalse);
  T535 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T534 = (P)YPsig(T535,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T533 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T534,LITREF(lit_151),Ynil,YPfalse);
  VARSET(Ysig_unification_vars,T533);
  T538 = fun_266;
  accessorF1085 = T538;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars),accessorF1085);
  xF1086 = accessorF1085;
  T536 = (P)YPprop_elt(xF1086,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_151),T536);
  xF1087 = accessorF1085;
  T537 = (P)YPprop_elt(xF1087,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T537);
  getterF1088 = accessorF1085;
  T529 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T528 = (P)YPpair(VARREF(YLanyG),T529);
  T527 = (P)YPsig(T528,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T526 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T527,LITREF(lit_153),Ynil,YPfalse);
  VARSET(Ysig_unification_vars_setter,T526);
  T532 = fun_267;
  accessorF1089 = T532;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars_setter),accessorF1089);
  xF1090 = accessorF1089;
  T530 = (P)YPprop_elt(xF1090,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_153),T530);
  xF1091 = accessorF1089;
  T531 = (P)YPprop_elt(xF1091,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T531);
  setterF1092 = accessorF1089;
  T525 = fun_268;
  T524 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_unification_vars),VARREF(Ysig_unification_vars_setter),VARREF(YLlstG),T525);
  propF1093 = T524;
  (P)YPmet_env_setter(propF1093,getterF1088);
  (P)YPmet_env_setter(propF1093,setterF1092);
  T523 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF1093);
  lit_156 = YPPsym((P)"fun-info-name");
  lit_157 = YPPlist(1,YPPsym((P)"x"));
  lit_158 = YPPsym((P)"fun-info-name-setter");
  lit_159 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_160 = YPPlist(1,YPPsym((P)"x"));
  T545 = YPfab_sig(YPPlist(1,VARREF(YLfun_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T544 = fun_269 = YPfab_met(FUNCODEREF(fun_269),T545,YPfalse,LITREF(lit_157),sloc(745),YPfalse);
  T543 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfun_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T542 = fun_270 = YPfab_met(FUNCODEREF(fun_270),T543,YPfalse,LITREF(lit_159),sloc(745),YPfalse);
  T541 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T540 = fun_271 = YPfab_met(FUNCODEREF(fun_271),T541,YPfalse,LITREF(lit_160),sloc(745),YPfalse);
  T558 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T557 = (P)YPsig(T558,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T556 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T557,LITREF(lit_156),Ynil,YPfalse);
  VARSET(Yfun_info_name,T556);
  T561 = fun_269;
  accessorF1094 = T561;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_name),accessorF1094);
  xF1095 = accessorF1094;
  T559 = (P)YPprop_elt(xF1095,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_156),T559);
  xF1096 = accessorF1094;
  T560 = (P)YPprop_elt(xF1096,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T560);
  getterF1097 = accessorF1094;
  T552 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T551 = (P)YPpair(VARREF(YLanyG),T552);
  T550 = (P)YPsig(T551,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T549 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T550,LITREF(lit_158),Ynil,YPfalse);
  VARSET(Yfun_info_name_setter,T549);
  T555 = fun_270;
  accessorF1098 = T555;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_name_setter),accessorF1098);
  xF1099 = accessorF1098;
  T553 = (P)YPprop_elt(xF1099,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_158),T553);
  xF1100 = accessorF1098;
  T554 = (P)YPprop_elt(xF1100,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T554);
  setterF1101 = accessorF1098;
  T548 = fun_271;
  T547 = (P)YPPprop(VARREF(YLfun_infoG),VARREF(Yfun_info_name),VARREF(Yfun_info_name_setter),VARREF(YLanyG),T548);
  propF1102 = T547;
  (P)YPmet_env_setter(propF1102,getterF1097);
  (P)YPmet_env_setter(propF1102,setterF1101);
  T546 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfun_infoG),propF1102);
  T539 = T546;
  return T539;
}

P Y___main_11___() {
  P propF1210;
  P setterF1209;
  P getterF1208;
  P xF1207;
  P xF1206;
  P accessorF1205;
  P propF1204;
  P setterF1203;
  P getterF1202;
  P xF1201;
  P xF1200;
  P accessorF1199;
  P propF1198;
  P setterF1197;
  P getterF1196;
  P xF1195;
  P xF1194;
  P accessorF1193;
  P propF1192;
  P setterF1191;
  P getterF1190;
  P xF1189;
  P xF1188;
  P accessorF1187;
  P propF1186;
  P setterF1185;
  P xF1184;
  P xF1183;
  P accessorF1182;
  P getterF1181;
  P xF1180;
  P xF1179;
  P accessorF1178;
  P propF1177;
  P setterF1176;
  P getterF1175;
  P xF1174;
  P xF1173;
  P accessorF1172;
  P propF1171;
  P setterF1170;
  P xF1169;
  P xF1168;
  P accessorF1167;
  P getterF1166;
  P xF1165;
  P xF1164;
  P accessorF1163;
  P propF1162;
  P setterF1161;
  P xF1160;
  P xF1159;
  P accessorF1158;
  P getterF1157;
  P xF1156;
  P xF1155;
  P accessorF1154;
  P propF1153;
  P setterF1152;
  P getterF1151;
  P xF1150;
  P xF1149;
  P accessorF1148;
  P propF1147;
  P setterF1146;
  P xF1145;
  P xF1144;
  P accessorF1143;
  P getterF1142;
  P xF1141;
  P xF1140;
  P accessorF1139;
  P propF1138;
  P setterF1137;
  P xF1136;
  P xF1135;
  P accessorF1134;
  P getterF1133;
  P xF1132;
  P xF1131;
  P accessorF1130;
  P propF1129;
  P setterF1128;
  P xF1127;
  P xF1126;
  P accessorF1125;
  P getterF1124;
  P xF1123;
  P xF1122;
  P accessorF1121;
  P propF1120;
  P setterF1119;
  P xF1118;
  P xF1117;
  P accessorF1116;
  P getterF1115;
  P xF1114;
  P xF1113;
  P accessorF1112;
  P propF1111;
  P setterF1110;
  P xF1109;
  P xF1108;
  P accessorF1107;
  P getterF1106;
  P xF1105;
  P xF1104;
  P accessorF1103;
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
DEFCREGS();
  lit_161 = YPPsym((P)"fun-info-names");
  lit_162 = YPPlist(1,YPPsym((P)"x"));
  lit_163 = YPPsym((P)"fun-info-names-setter");
  lit_164 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_165 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YLfun_infoG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_272 = YPfab_met(FUNCODEREF(fun_272),T2,YPfalse,LITREF(lit_162),sloc(745),YPfalse);
  T1 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfun_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_273 = YPfab_met(FUNCODEREF(fun_273),T1,YPfalse,LITREF(lit_164),sloc(745),YPfalse);
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_274 = YPfab_met(FUNCODEREF(fun_274),T0,YPfalse,LITREF(lit_165),sloc(745),YPfalse);
  T15 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T14 = (P)YPsig(T15,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T13 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T14,LITREF(lit_161),Ynil,YPfalse);
  VARSET(Yfun_info_names,T13);
  T18 = fun_272;
  accessorF1103 = T18;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_names),accessorF1103);
  xF1104 = accessorF1103;
  T16 = (P)YPprop_elt(xF1104,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_161),T16);
  xF1105 = accessorF1103;
  T17 = (P)YPprop_elt(xF1105,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T17);
  getterF1106 = accessorF1103;
  T9 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T8 = (P)YPpair(VARREF(YLanyG),T9);
  T7 = (P)YPsig(T8,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T6 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T7,LITREF(lit_163),Ynil,YPfalse);
  VARSET(Yfun_info_names_setter,T6);
  T12 = fun_273;
  accessorF1107 = T12;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_names_setter),accessorF1107);
  xF1108 = accessorF1107;
  T10 = (P)YPprop_elt(xF1108,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_163),T10);
  xF1109 = accessorF1107;
  T11 = (P)YPprop_elt(xF1109,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T11);
  setterF1110 = accessorF1107;
  T5 = fun_274;
  T4 = (P)YPPprop(VARREF(YLfun_infoG),VARREF(Yfun_info_names),VARREF(Yfun_info_names_setter),VARREF(YLlstG),T5);
  propF1111 = T4;
  (P)YPmet_env_setter(propF1111,getterF1106);
  (P)YPmet_env_setter(propF1111,setterF1110);
  T3 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfun_infoG),propF1111);
  lit_166 = YPPsym((P)"fun-info-src-loc");
  lit_167 = YPPlist(1,YPPsym((P)"x"));
  lit_168 = YPPsym((P)"fun-info-src-loc-setter");
  lit_169 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_170 = YPPlist(1,YPPsym((P)"x"));
  T21 = YPfab_sig(YPPlist(1,VARREF(YLfun_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_275 = YPfab_met(FUNCODEREF(fun_275),T21,YPfalse,LITREF(lit_167),sloc(745),YPfalse);
  T20 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfun_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_276 = YPfab_met(FUNCODEREF(fun_276),T20,YPfalse,LITREF(lit_169),sloc(745),YPfalse);
  T19 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_277 = YPfab_met(FUNCODEREF(fun_277),T19,YPfalse,LITREF(lit_170),sloc(745),YPfalse);
  T34 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T33 = (P)YPsig(T34,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T32 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T33,LITREF(lit_166),Ynil,YPfalse);
  VARSET(Yfun_info_src_loc,T32);
  T37 = fun_275;
  accessorF1112 = T37;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_src_loc),accessorF1112);
  xF1113 = accessorF1112;
  T35 = (P)YPprop_elt(xF1113,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_166),T35);
  xF1114 = accessorF1112;
  T36 = (P)YPprop_elt(xF1114,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T36);
  getterF1115 = accessorF1112;
  T28 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T27 = (P)YPpair(VARREF(YLanyG),T28);
  T26 = (P)YPsig(T27,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T25 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T26,LITREF(lit_168),Ynil,YPfalse);
  VARSET(Yfun_info_src_loc_setter,T25);
  T31 = fun_276;
  accessorF1116 = T31;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_src_loc_setter),accessorF1116);
  xF1117 = accessorF1116;
  T29 = (P)YPprop_elt(xF1117,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_168),T29);
  xF1118 = accessorF1116;
  T30 = (P)YPprop_elt(xF1118,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T30);
  setterF1119 = accessorF1116;
  T24 = fun_277;
  T23 = (P)YPPprop(VARREF(YLfun_infoG),VARREF(Yfun_info_src_loc),VARREF(Yfun_info_src_loc_setter),VARREF(YLanyG),T24);
  propF1120 = T23;
  (P)YPmet_env_setter(propF1120,getterF1115);
  (P)YPmet_env_setter(propF1120,setterF1119);
  T22 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfun_infoG),propF1120);
  lit_171 = YPPsym((P)"fun-info-src");
  lit_172 = YPPlist(1,YPPsym((P)"x"));
  lit_173 = YPPsym((P)"fun-info-src-setter");
  lit_174 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_175 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YLfun_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_278 = YPfab_met(FUNCODEREF(fun_278),T40,YPfalse,LITREF(lit_172),sloc(745),YPfalse);
  T39 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfun_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_279 = YPfab_met(FUNCODEREF(fun_279),T39,YPfalse,LITREF(lit_174),sloc(745),YPfalse);
  T38 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_280 = YPfab_met(FUNCODEREF(fun_280),T38,YPfalse,LITREF(lit_175),sloc(745),YPfalse);
  T53 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T52 = (P)YPsig(T53,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T51 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T52,LITREF(lit_171),Ynil,YPfalse);
  VARSET(Yfun_info_src,T51);
  T56 = fun_278;
  accessorF1121 = T56;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_src),accessorF1121);
  xF1122 = accessorF1121;
  T54 = (P)YPprop_elt(xF1122,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_171),T54);
  xF1123 = accessorF1121;
  T55 = (P)YPprop_elt(xF1123,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T55);
  getterF1124 = accessorF1121;
  T47 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T46 = (P)YPpair(VARREF(YLanyG),T47);
  T45 = (P)YPsig(T46,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T44 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T45,LITREF(lit_173),Ynil,YPfalse);
  VARSET(Yfun_info_src_setter,T44);
  T50 = fun_279;
  accessorF1125 = T50;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_src_setter),accessorF1125);
  xF1126 = accessorF1125;
  T48 = (P)YPprop_elt(xF1126,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_173),T48);
  xF1127 = accessorF1125;
  T49 = (P)YPprop_elt(xF1127,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T49);
  setterF1128 = accessorF1125;
  T43 = fun_280;
  T42 = (P)YPPprop(VARREF(YLfun_infoG),VARREF(Yfun_info_src),VARREF(Yfun_info_src_setter),VARREF(YLanyG),T43);
  propF1129 = T42;
  (P)YPmet_env_setter(propF1129,getterF1124);
  (P)YPmet_env_setter(propF1129,setterF1128);
  T41 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfun_infoG),propF1129);
  lit_176 = YPPsym((P)"fun-info-count");
  lit_177 = YPPlist(1,YPPsym((P)"x"));
  lit_178 = YPPsym((P)"fun-info-count-setter");
  lit_179 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_180 = YPPlist(1,YPPsym((P)"x"));
  T59 = YPfab_sig(YPPlist(1,VARREF(YLfun_infoG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_281 = YPfab_met(FUNCODEREF(fun_281),T59,YPfalse,LITREF(lit_177),sloc(745),YPfalse);
  T58 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLfun_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_282 = YPfab_met(FUNCODEREF(fun_282),T58,YPfalse,LITREF(lit_179),sloc(745),YPfalse);
  T57 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_283 = YPfab_met(FUNCODEREF(fun_283),T57,YPfalse,LITREF(lit_180),sloc(745),YPfalse);
  T72 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T71 = (P)YPsig(T72,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T70 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T71,LITREF(lit_176),Ynil,YPfalse);
  VARSET(Yfun_info_count,T70);
  T75 = fun_281;
  accessorF1130 = T75;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_count),accessorF1130);
  xF1131 = accessorF1130;
  T73 = (P)YPprop_elt(xF1131,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_176),T73);
  xF1132 = accessorF1130;
  T74 = (P)YPprop_elt(xF1132,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T74);
  getterF1133 = accessorF1130;
  T66 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T65 = (P)YPpair(VARREF(YLanyG),T66);
  T64 = (P)YPsig(T65,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T63 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T64,LITREF(lit_178),Ynil,YPfalse);
  VARSET(Yfun_info_count_setter,T63);
  T69 = fun_282;
  accessorF1134 = T69;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_count_setter),accessorF1134);
  xF1135 = accessorF1134;
  T67 = (P)YPprop_elt(xF1135,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_178),T67);
  xF1136 = accessorF1134;
  T68 = (P)YPprop_elt(xF1136,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T68);
  setterF1137 = accessorF1134;
  T62 = fun_283;
  T61 = (P)YPPprop(VARREF(YLfun_infoG),VARREF(Yfun_info_count),VARREF(Yfun_info_count_setter),VARREF(YLintG),T62);
  propF1138 = T61;
  (P)YPmet_env_setter(propF1138,getterF1133);
  (P)YPmet_env_setter(propF1138,setterF1137);
  T60 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfun_infoG),propF1138);
  lit_181 = YPPsym((P)"fun-info-inlineable?");
  lit_182 = YPPlist(1,YPPsym((P)"x"));
  lit_183 = YPPsym((P)"fun-info-inlineable?-setter");
  lit_184 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_185 = YPPlist(1,YPPsym((P)"x"));
  T78 = YPfab_sig(YPPlist(1,VARREF(YLfun_infoG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_284 = YPfab_met(FUNCODEREF(fun_284),T78,YPfalse,LITREF(lit_182),sloc(745),YPfalse);
  T77 = YPfab_sig(YPPlist(2,VARREF(YLlogG),VARREF(YLfun_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_285 = YPfab_met(FUNCODEREF(fun_285),T77,YPfalse,LITREF(lit_184),sloc(745),YPfalse);
  T76 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_286 = YPfab_met(FUNCODEREF(fun_286),T76,YPfalse,LITREF(lit_185),sloc(745),YPfalse);
  T91 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T90 = (P)YPsig(T91,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T89 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T90,LITREF(lit_181),Ynil,YPfalse);
  VARSET(Yfun_info_inlineableQ,T89);
  T94 = fun_284;
  accessorF1139 = T94;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_inlineableQ),accessorF1139);
  xF1140 = accessorF1139;
  T92 = (P)YPprop_elt(xF1140,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_181),T92);
  xF1141 = accessorF1139;
  T93 = (P)YPprop_elt(xF1141,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T93);
  getterF1142 = accessorF1139;
  T85 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T84 = (P)YPpair(VARREF(YLanyG),T85);
  T83 = (P)YPsig(T84,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T82 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T83,LITREF(lit_183),Ynil,YPfalse);
  VARSET(Yfun_info_inlineableQ_setter,T82);
  T88 = fun_285;
  accessorF1143 = T88;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_inlineableQ_setter),accessorF1143);
  xF1144 = accessorF1143;
  T86 = (P)YPprop_elt(xF1144,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_183),T86);
  xF1145 = accessorF1143;
  T87 = (P)YPprop_elt(xF1145,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T87);
  setterF1146 = accessorF1143;
  T81 = fun_286;
  T80 = (P)YPPprop(VARREF(YLfun_infoG),VARREF(Yfun_info_inlineableQ),VARREF(Yfun_info_inlineableQ_setter),VARREF(YLlogG),T81);
  propF1147 = T80;
  (P)YPmet_env_setter(propF1147,getterF1142);
  (P)YPmet_env_setter(propF1147,setterF1146);
  T79 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfun_infoG),propF1147);
  lit_186 = YPPsym((P)"fun-code");
  lit_187 = YPPlist(1,YPPsym((P)"x"));
  lit_188 = YPPlist(1,YPPsym((P)"x"));
  T96 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_287 = YPfab_met(FUNCODEREF(fun_287),T96,YPfalse,LITREF(lit_187),sloc(745),YPfalse);
  T95 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_288 = YPfab_met(FUNCODEREF(fun_288),T95,YPfalse,LITREF(lit_188),sloc(745),YPfalse);
  T102 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T101 = (P)YPsig(T102,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T100 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T101,LITREF(lit_186),Ynil,YPfalse);
  VARSET(Yfun_code,T100);
  T105 = fun_287;
  accessorF1148 = T105;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_code),accessorF1148);
  xF1149 = accessorF1148;
  T103 = (P)YPprop_elt(xF1149,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_186),T103);
  xF1150 = accessorF1148;
  T104 = (P)YPprop_elt(xF1150,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T104);
  getterF1151 = accessorF1148;
  setterF1152 = YPfalse;
  T99 = fun_288;
  T98 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_code),YPfalse,VARREF(YLanyG),T99);
  propF1153 = T98;
  (P)YPmet_env_setter(propF1153,getterF1151);
  T97 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF1153);
  lit_189 = YPPsym((P)"fun-sig");
  lit_190 = YPPlist(1,YPPsym((P)"x"));
  lit_191 = YPPsym((P)"fun-sig-setter");
  lit_192 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_193 = YPPlist(1,YPPsym((P)"x"));
  T108 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLsigG),Ynil);
  fun_289 = YPfab_met(FUNCODEREF(fun_289),T108,YPfalse,LITREF(lit_190),sloc(745),YPfalse);
  T107 = YPfab_sig(YPPlist(2,VARREF(YLsigG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_290 = YPfab_met(FUNCODEREF(fun_290),T107,YPfalse,LITREF(lit_192),sloc(745),YPfalse);
  T106 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_291 = YPfab_met(FUNCODEREF(fun_291),T106,YPfalse,LITREF(lit_193),sloc(745),YPfalse);
  T121 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T120 = (P)YPsig(T121,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T119 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T120,LITREF(lit_189),Ynil,YPfalse);
  VARSET(Yfun_sig,T119);
  T124 = fun_289;
  accessorF1154 = T124;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig),accessorF1154);
  xF1155 = accessorF1154;
  T122 = (P)YPprop_elt(xF1155,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_189),T122);
  xF1156 = accessorF1154;
  T123 = (P)YPprop_elt(xF1156,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T123);
  getterF1157 = accessorF1154;
  T115 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T114 = (P)YPpair(VARREF(YLanyG),T115);
  T113 = (P)YPsig(T114,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T112 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T113,LITREF(lit_191),Ynil,YPfalse);
  VARSET(Yfun_sig_setter,T112);
  T118 = fun_290;
  accessorF1158 = T118;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig_setter),accessorF1158);
  xF1159 = accessorF1158;
  T116 = (P)YPprop_elt(xF1159,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_191),T116);
  xF1160 = accessorF1158;
  T117 = (P)YPprop_elt(xF1160,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T117);
  setterF1161 = accessorF1158;
  T111 = fun_291;
  T110 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_sig),VARREF(Yfun_sig_setter),VARREF(YLsigG),T111);
  propF1162 = T110;
  (P)YPmet_env_setter(propF1162,getterF1157);
  (P)YPmet_env_setter(propF1162,setterF1161);
  T109 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF1162);
  lit_194 = YPPsym((P)"fun-info");
  lit_195 = YPPlist(1,YPPsym((P)"x"));
  lit_196 = YPPsym((P)"fun-info-setter");
  lit_197 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_198 = YPPlist(1,YPPsym((P)"x"));
  T127 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_292 = YPfab_met(FUNCODEREF(fun_292),T127,YPfalse,LITREF(lit_195),sloc(745),YPfalse);
  T126 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_293 = YPfab_met(FUNCODEREF(fun_293),T126,YPfalse,LITREF(lit_197),sloc(745),YPfalse);
  T125 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_294 = YPfab_met(FUNCODEREF(fun_294),T125,YPfalse,LITREF(lit_198),sloc(745),YPfalse);
  T140 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T139 = (P)YPsig(T140,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T138 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T139,LITREF(lit_194),Ynil,YPfalse);
  VARSET(Yfun_info,T138);
  T143 = fun_292;
  accessorF1163 = T143;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info),accessorF1163);
  xF1164 = accessorF1163;
  T141 = (P)YPprop_elt(xF1164,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_194),T141);
  xF1165 = accessorF1163;
  T142 = (P)YPprop_elt(xF1165,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T142);
  getterF1166 = accessorF1163;
  T134 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T133 = (P)YPpair(VARREF(YLanyG),T134);
  T132 = (P)YPsig(T133,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T131 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T132,LITREF(lit_196),Ynil,YPfalse);
  VARSET(Yfun_info_setter,T131);
  T137 = fun_293;
  accessorF1167 = T137;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_info_setter),accessorF1167);
  xF1168 = accessorF1167;
  T135 = (P)YPprop_elt(xF1168,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_196),T135);
  xF1169 = accessorF1167;
  T136 = (P)YPprop_elt(xF1169,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T136);
  setterF1170 = accessorF1167;
  T130 = fun_294;
  T129 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_info),VARREF(Yfun_info_setter),VARREF(YLanyG),T130);
  propF1171 = T129;
  (P)YPmet_env_setter(propF1171,getterF1166);
  (P)YPmet_env_setter(propF1171,setterF1170);
  T128 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF1171);
  lit_199 = YPPsym((P)"fun-env");
  lit_200 = YPPlist(1,YPPsym((P)"x"));
  lit_201 = YPPlist(1,YPPsym((P)"x"));
  T145 = YPfab_sig(YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_295 = YPfab_met(FUNCODEREF(fun_295),T145,YPfalse,LITREF(lit_200),sloc(745),YPfalse);
  T144 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_296 = YPfab_met(FUNCODEREF(fun_296),T144,YPfalse,LITREF(lit_201),sloc(745),YPfalse);
  T151 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T150 = (P)YPsig(T151,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T149 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T150,LITREF(lit_199),Ynil,YPfalse);
  VARSET(Yfun_env,T149);
  T154 = fun_295;
  accessorF1172 = T154;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_env),accessorF1172);
  xF1173 = accessorF1172;
  T152 = (P)YPprop_elt(xF1173,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_199),T152);
  xF1174 = accessorF1172;
  T153 = (P)YPprop_elt(xF1174,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T153);
  getterF1175 = accessorF1172;
  setterF1176 = YPfalse;
  T148 = fun_296;
  T147 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_env),YPfalse,VARREF(YLanyG),T148);
  propF1177 = T147;
  (P)YPmet_env_setter(propF1177,getterF1175);
  T146 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF1177);
  lit_202 = YPPsym((P)"fun-mets");
  lit_203 = YPPlist(1,YPPsym((P)"x"));
  lit_204 = YPPsym((P)"fun-mets-setter");
  lit_205 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_206 = YPPlist(1,YPPsym((P)"x"));
  T157 = YPfab_sig(YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_297 = YPfab_met(FUNCODEREF(fun_297),T157,YPfalse,LITREF(lit_203),sloc(745),YPfalse);
  T156 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_298 = YPfab_met(FUNCODEREF(fun_298),T156,YPfalse,LITREF(lit_205),sloc(745),YPfalse);
  T155 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_299 = YPfab_met(FUNCODEREF(fun_299),T155,YPfalse,LITREF(lit_206),sloc(745),YPfalse);
  T170 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T169 = (P)YPsig(T170,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T168 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T169,LITREF(lit_202),Ynil,YPfalse);
  VARSET(Yfun_mets,T168);
  T173 = fun_297;
  accessorF1178 = T173;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets),accessorF1178);
  xF1179 = accessorF1178;
  T171 = (P)YPprop_elt(xF1179,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_202),T171);
  xF1180 = accessorF1178;
  T172 = (P)YPprop_elt(xF1180,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T172);
  getterF1181 = accessorF1178;
  T164 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T163 = (P)YPpair(VARREF(YLanyG),T164);
  T162 = (P)YPsig(T163,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T161 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T162,LITREF(lit_204),Ynil,YPfalse);
  VARSET(Yfun_mets_setter,T161);
  T167 = fun_298;
  accessorF1182 = T167;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets_setter),accessorF1182);
  xF1183 = accessorF1182;
  T165 = (P)YPprop_elt(xF1183,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_204),T165);
  xF1184 = accessorF1182;
  T166 = (P)YPprop_elt(xF1184,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T166);
  setterF1185 = accessorF1182;
  T160 = fun_299;
  T159 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_mets),VARREF(Yfun_mets_setter),VARREF(YLlstG),T160);
  propF1186 = T159;
  (P)YPmet_env_setter(propF1186,getterF1181);
  (P)YPmet_env_setter(propF1186,setterF1185);
  T158 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF1186);
  lit_207 = YPPsym((P)"fun-cache");
  lit_208 = YPPlist(1,YPPsym((P)"x"));
  lit_209 = YPPlist(1,YPPsym((P)"x"));
  T175 = YPfab_sig(YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_300 = YPfab_met(FUNCODEREF(fun_300),T175,YPfalse,LITREF(lit_208),sloc(745),YPfalse);
  T174 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_301 = YPfab_met(FUNCODEREF(fun_301),T174,YPfalse,LITREF(lit_209),sloc(745),YPfalse);
  T181 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T180 = (P)YPsig(T181,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T179 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T180,LITREF(lit_207),Ynil,YPfalse);
  VARSET(Yfun_cache,T179);
  T184 = fun_300;
  accessorF1187 = T184;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache),accessorF1187);
  xF1188 = accessorF1187;
  T182 = (P)YPprop_elt(xF1188,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_207),T182);
  xF1189 = accessorF1187;
  T183 = (P)YPprop_elt(xF1189,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T183);
  getterF1190 = accessorF1187;
  setterF1191 = YPfalse;
  T178 = fun_301;
  T177 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_cache),YPfalse,VARREF(YLanyG),T178);
  propF1192 = T177;
  (P)YPmet_env_setter(propF1192,getterF1190);
  T176 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF1192);
  lit_210 = YPPsym((P)"opts-location");
  lit_211 = YPPlist(1,YPPsym((P)"x"));
  lit_212 = YPPlist(1,YPPsym((P)"x"));
  T186 = YPfab_sig(YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLlocG),Ynil);
  fun_302 = YPfab_met(FUNCODEREF(fun_302),T186,YPfalse,LITREF(lit_211),sloc(745),YPfalse);
  T185 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_303 = YPfab_met(FUNCODEREF(fun_303),T185,YPfalse,LITREF(lit_212),sloc(745),YPfalse);
  T192 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T191 = (P)YPsig(T192,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T190 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T191,LITREF(lit_210),Ynil,YPfalse);
  VARSET(Yopts_location,T190);
  T195 = fun_302;
  accessorF1193 = T195;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_location),accessorF1193);
  xF1194 = accessorF1193;
  T193 = (P)YPprop_elt(xF1194,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_210),T193);
  xF1195 = accessorF1193;
  T194 = (P)YPprop_elt(xF1195,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T194);
  getterF1196 = accessorF1193;
  setterF1197 = YPfalse;
  T189 = fun_303;
  T188 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_location),YPfalse,VARREF(YLlocG),T189);
  propF1198 = T188;
  (P)YPmet_env_setter(propF1198,getterF1196);
  T187 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF1198);
  lit_213 = YPPsym((P)"opts-count");
  lit_214 = YPPlist(1,YPPsym((P)"x"));
  lit_215 = YPPlist(1,YPPsym((P)"x"));
  T197 = YPfab_sig(YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_304 = YPfab_met(FUNCODEREF(fun_304),T197,YPfalse,LITREF(lit_214),sloc(745),YPfalse);
  T196 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_305 = YPfab_met(FUNCODEREF(fun_305),T196,YPfalse,LITREF(lit_215),sloc(745),YPfalse);
  T203 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T202 = (P)YPsig(T203,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T201 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T202,LITREF(lit_213),Ynil,YPfalse);
  VARSET(Yopts_count,T201);
  T206 = fun_304;
  accessorF1199 = T206;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_count),accessorF1199);
  xF1200 = accessorF1199;
  T204 = (P)YPprop_elt(xF1200,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_213),T204);
  xF1201 = accessorF1199;
  T205 = (P)YPprop_elt(xF1201,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T205);
  getterF1202 = accessorF1199;
  setterF1203 = YPfalse;
  T200 = fun_305;
  T199 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_count),YPfalse,VARREF(YLfixnumG),T200);
  propF1204 = T199;
  (P)YPmet_env_setter(propF1204,getterF1202);
  T198 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF1204);
  lit_216 = YPPsym((P)"opts-tup-storage");
  lit_217 = YPPlist(1,YPPsym((P)"x"));
  lit_218 = YPPlist(1,YPPsym((P)"x"));
  T208 = YPfab_sig(YPPlist(1,VARREF(YLopts_tupG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_306 = YPfab_met(FUNCODEREF(fun_306),T208,YPfalse,LITREF(lit_217),sloc(745),YPfalse);
  T207 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_307 = YPfab_met(FUNCODEREF(fun_307),T207,YPfalse,LITREF(lit_218),sloc(745),YPfalse);
  T214 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T213 = (P)YPsig(T214,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T212 = (P)YPfab_genScode(VARREF(YPearly_dispatch),T213,LITREF(lit_216),Ynil,YPfalse);
  VARSET(Yopts_tup_storage,T212);
  T217 = fun_306;
  accessorF1205 = T217;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_tup_storage),accessorF1205);
  xF1206 = accessorF1205;
  T215 = (P)YPprop_elt(xF1206,(P)2);
  (P)YPfun_info_name_setter(LITREF(lit_216),T215);
  xF1207 = accessorF1205;
  T216 = (P)YPprop_elt(xF1207,(P)2);
  (P)YPfun_info_inlineableQ_setter(YPtrue,T216);
  getterF1208 = accessorF1205;
  setterF1209 = YPfalse;
  T211 = fun_307;
  T210 = (P)YPPprop(VARREF(YLopts_tupG),VARREF(Yopts_tup_storage),YPfalse,VARREF(YLtupG),T211);
  propF1210 = T210;
  (P)YPmet_env_setter(propF1210,getterF1208);
  T209 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLopts_tupG),propF1210);
  lit_219 = YPPsym((P)"%collect-direct-props");
  lit_220 = YPPlist(1,YPPsym((P)"class"));
  T218 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPcollect_direct_props = YPfab_met(FUNCODEREF(YPcollect_direct_props),T218,LITREF(lit_219),LITREF(lit_220),sloc(753),YPfalse);
  T219 = YPcollect_direct_props;
  VARSET(YPcollect_direct_props,T219);
  lit_221 = YPPsym((P)"%finalize-props!");
  lit_222 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"class"));
  T220 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPfinalize_propsX = YPfab_met(FUNCODEREF(YPfinalize_propsX),T220,LITREF(lit_221),LITREF(lit_222),sloc(757),YPfalse);
  T221 = YPfinalize_propsX;
  VARSET(YPfinalize_propsX,T221);
  lit_223 = YPPsym((P)"<any>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_223),VARREF(YLanyG));
  lit_224 = YPPsym((P)"<log>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_224),VARREF(YLlogG));
  lit_225 = YPPsym((P)"<box>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_225),VARREF(YLboxG));
  lit_226 = YPPsym((P)"<mag>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_226),VARREF(YLmagG));
  lit_227 = YPPsym((P)"<chr>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_227),VARREF(YLchrG));
  lit_228 = YPPsym((P)"<src-loc>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_228),VARREF(YLsrc_locG));
  lit_229 = YPPsym((P)"<num>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_229),VARREF(YLnumG));
  lit_230 = YPPsym((P)"<int>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_230),VARREF(YLintG));
  lit_231 = YPPsym((P)"<fixnum>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_231),VARREF(YLfixnumG));
  lit_232 = YPPsym((P)"<flo>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_232),VARREF(YLfloG));
  lit_233 = YPPsym((P)"<loc>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_233),VARREF(YLlocG));
  lit_234 = YPPsym((P)"<rep>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_234),VARREF(YLrepG));
  lit_235 = YPPsym((P)"<col>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_235),VARREF(YLcolG));
  lit_236 = YPPsym((P)"<col.>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_236),VARREF(YLcolIG));
  lit_237 = YPPsym((P)"<col!>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_237),VARREF(YLcolXG));
  lit_238 = YPPsym((P)"<seq>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_238),VARREF(YLseqG));
  lit_239 = YPPsym((P)"<seq.>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_239),VARREF(YLseqIG));
  lit_240 = YPPsym((P)"<seq!>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_240),VARREF(YLseqXG));
  lit_241 = YPPsym((P)"<lst>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_241),VARREF(YLlstG));
  lit_242 = YPPsym((P)"<flat>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_242),VARREF(YLflatG));
  lit_243 = YPPsym((P)"<tup>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_243),VARREF(YLtupG));
  lit_244 = YPPsym((P)"<str>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_244),VARREF(YLstrG));
  lit_245 = YPPsym((P)"<sym>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_245),VARREF(YLsymG));
  lit_246 = YPPsym((P)"<type>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_246),VARREF(YLtypeG));
  lit_247 = YPPsym((P)"<class>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_247),VARREF(YLclassG));
  lit_248 = YPPsym((P)"<singleton>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_248),VARREF(YLsingletonG));
  lit_249 = YPPsym((P)"<subclass>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_249),VARREF(YLsubclassG));
  lit_250 = YPPsym((P)"<union>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_250),VARREF(YLunionG));
  lit_251 = YPPsym((P)"<product>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_251),VARREF(YLproductG));
  lit_252 = YPPsym((P)"<prop>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_252),VARREF(YLpropG));
  lit_253 = YPPsym((P)"<gen-cache>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_253),VARREF(YLgen_cacheG));
  lit_254 = YPPsym((P)"<sig>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_254),VARREF(YLsigG));
  lit_255 = YPPsym((P)"<fun-info>");
  T223 = XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_255),VARREF(YLfun_infoG));
  T222 = T223;
  return T222;
}

P Y___main_12___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54;
DEFCREGS();
  lit_256 = YPPsym((P)"<fun>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_256),VARREF(YLfunG));
  lit_257 = YPPsym((P)"<met>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_257),VARREF(YLmetG));
  lit_258 = YPPsym((P)"<gen>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_258),VARREF(YLgenG));
  lit_259 = YPPsym((P)"<opts>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_259),VARREF(YLoptsG));
  lit_260 = YPPsym((P)"<opts-tup>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_260),VARREF(YLopts_tupG));
  lit_261 = YPPsym((P)"@@==");
  lit_262 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOOEE = YPfab_met(FUNCODEREF(YOOEE),T0,LITREF(lit_261),LITREF(lit_262),sloc(799),YPfalse);
  T1 = YOOEE;
  VARSET(YOOEE,T1);
  lit_263 = YPPsym((P)"not");
  lit_264 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  Ynot = YPfab_met_inlineable(FUNCODEREF(Ynot),T2,LITREF(lit_263),LITREF(lit_264),sloc(801),YPfalse);
  T3 = Ynot;
  VARSET(Ynot,T3);
  lit_265 = YPPsym((P)"@@nul?");
  lit_266 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOOnulQ = YPfab_met(FUNCODEREF(YOOnulQ),T4,LITREF(lit_265),LITREF(lit_266),sloc(807),YPfalse);
  T5 = YOOnulQ;
  VARSET(YOOnulQ,T5);
  lit_267 = YPPsym((P)"@rev!");
  lit_268 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrevX = YPfab_met(FUNCODEREF(YOrevX),T6,LITREF(lit_267),LITREF(lit_268),sloc(809),YPfalse);
  T7 = YOrevX;
  VARSET(YOrevX,T7);
  lit_269 = YPPsym((P)"@all?");
  lit_270 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T8 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOallQ = YPfab_met(FUNCODEREF(YOallQ),T8,LITREF(lit_269),LITREF(lit_270),sloc(819),YPfalse);
  T9 = YOallQ;
  VARSET(YOallQ,T9);
  lit_271 = YPPsym((P)"@all2?");
  lit_272 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T10 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOall2Q = YPfab_met(FUNCODEREF(YOall2Q),T10,LITREF(lit_271),LITREF(lit_272),sloc(823),YPfalse);
  T11 = YOall2Q;
  VARSET(YOall2Q,T11);
  lit_273 = YPPsym((P)"@elt");
  lit_274 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOelt = YPfab_met(FUNCODEREF(YOelt),T12,LITREF(lit_273),LITREF(lit_274),sloc(833),YPfalse);
  T13 = YOelt;
  VARSET(YOelt,T13);
  lit_275 = YPPsym((P)"@fill");
  lit_276 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"f"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfill = YPfab_met(FUNCODEREF(YOfill),T14,LITREF(lit_275),LITREF(lit_276),sloc(839),YPfalse);
  T15 = YOfill;
  VARSET(YOfill,T15);
  lit_277 = YPPsym((P)"@any?");
  lit_278 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOanyQ = YPfab_met(FUNCODEREF(YOanyQ),T16,LITREF(lit_277),LITREF(lit_278),sloc(843),YPfalse);
  T17 = YOanyQ;
  VARSET(YOanyQ,T17);
  lit_279 = YPPsym((P)"fab-pair");
  lit_280 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T18 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  Yfab_pair = YPfab_met(FUNCODEREF(Yfab_pair),T18,LITREF(lit_279),LITREF(lit_280),sloc(848),YPfalse);
  T19 = Yfab_pair;
  VARSET(Yfab_pair,T19);
  lit_281 = YPPsym((P)"@map");
  lit_282 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T20 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmap = YPfab_met(FUNCODEREF(YOmap),T20,LITREF(lit_281),LITREF(lit_282),sloc(855),YPfalse);
  T21 = YOmap;
  VARSET(YOmap,T21);
  lit_283 = YPPsym((P)"@pick");
  lit_284 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOpick = YPfab_met(FUNCODEREF(YOpick),T22,LITREF(lit_283),LITREF(lit_284),sloc(861),YPfalse);
  T23 = YOpick;
  VARSET(YOpick,T23);
  lit_285 = YPPsym((P)"@do");
  lit_286 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo = YPfab_met(FUNCODEREF(YOdo),T24,LITREF(lit_285),LITREF(lit_286),sloc(867),YPfalse);
  T25 = YOdo;
  VARSET(YOdo,T25);
  lit_287 = YPPsym((P)"@alter");
  lit_288 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOalter = YPfab_met(FUNCODEREF(YOalter),T26,LITREF(lit_287),LITREF(lit_288),sloc(873),YPfalse);
  T27 = YOalter;
  VARSET(YOalter,T27);
  lit_289 = YPPsym((P)"@fab");
  lit_290 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T28 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfab = YPfab_met(FUNCODEREF(YOfab),T28,LITREF(lit_289),LITREF(lit_290),sloc(880),YPfalse);
  T29 = YOfab;
  VARSET(YOfab,T29);
  lit_291 = YPPsym((P)"@fold");
  lit_292 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"c"));
  T30 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  YOfold = YPfab_met(FUNCODEREF(YOfold),T30,LITREF(lit_291),LITREF(lit_292),sloc(884),YPfalse);
  T31 = YOfold;
  VARSET(YOfold,T31);
  lit_293 = YPPsym((P)"@rev");
  lit_294 = YPPlist(1,YPPsym((P)"x"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrev = YPfab_met(FUNCODEREF(YOrev),T32,LITREF(lit_293),LITREF(lit_294),sloc(890),YPfalse);
  T33 = YOrev;
  VARSET(YOrev,T33);
  lit_295 = YPPsym((P)"@cat2");
  lit_296 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOcat2 = YPfab_met(FUNCODEREF(YOcat2),T34,LITREF(lit_295),LITREF(lit_296),sloc(896),YPfalse);
  T35 = YOcat2;
  VARSET(YOcat2,T35);
  lit_297 = YPPsym((P)"@find");
  lit_298 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfind = YPfab_met(FUNCODEREF(YOfind),T36,LITREF(lit_297),LITREF(lit_298),sloc(899),YPfalse);
  T37 = YOfind;
  VARSET(YOfind,T37);
  lit_299 = YPPsym((P)"@mem?");
  lit_300 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  lit_301 = YPPlist(1,YPPsym((P)"y"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_346 = YPfab_met(FUNCODEREF(fun_346),T39,YPfalse,LITREF(lit_301),sloc(908),YPfalse);
  T38 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmemQ = YPfab_met(FUNCODEREF(YOmemQ),T38,LITREF(lit_299),LITREF(lit_300),sloc(907),YPfalse);
  T40 = YOmemQ;
  VARSET(YOmemQ,T40);
  lit_302 = YPPsym((P)"@del-dups");
  lit_303 = YPPlist(1,YPPsym((P)"x"));
  lit_304 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"e"));
  T42 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_348 = YPfab_met(FUNCODEREF(fun_348),T42,YPfalse,LITREF(lit_304),sloc(913),YPfalse);
  T41 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOdel_dups = YPfab_met(FUNCODEREF(YOdel_dups),T41,LITREF(lit_302),LITREF(lit_303),sloc(912),YPfalse);
  T43 = YOdel_dups;
  VARSET(YOdel_dups,T43);
  lit_305 = YPPsym((P)"@opts-as-lst");
  lit_306 = YPPlist(1,YPPsym((P)"x"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOopts_as_lst = YPfab_met(FUNCODEREF(YOopts_as_lst),T44,LITREF(lit_305),LITREF(lit_306),sloc(915),YPfalse);
  T45 = YOopts_as_lst;
  VARSET(YOopts_as_lst,T45);
  lit_307 = YPPsym((P)"@lst");
  lit_308 = YPPlist(1,YPPsym((P)"x"));
  T46 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOlst = YPfab_met(FUNCODEREF(YOlst),T46,LITREF(lit_307),LITREF(lit_308),sloc(919),YPfalse);
  T47 = YOlst;
  VARSET(YOlst,T47);
  lit_309 = YPPsym((P)"@tany?");
  lit_310 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T48 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtanyQ = YPfab_met(FUNCODEREF(YOtanyQ),T48,LITREF(lit_309),LITREF(lit_310),sloc(932),YPfalse);
  T49 = YOtanyQ;
  VARSET(YOtanyQ,T49);
  lit_311 = YPPsym((P)"@tall2?");
  lit_312 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"c1"),YPPsym((P)"c2"));
  T52 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLtupG),VARREF(YLtupG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T51 = YOtall2Q = YPfab_met(FUNCODEREF(YOtall2Q),T52,LITREF(lit_311),LITREF(lit_312),sloc(936),YPfalse);
  T54 = YOtall2Q;
  T53 = VARSET(YOtall2Q,T54);
  T50 = T53;
  return T50;
}

P Y___main_13___() {
  P tF1213;
  P xF1212;
  P xF1211;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
DEFCREGS();
  lit_313 = YPPsym((P)"@tup");
  lit_314 = YPPlist(1,YPPsym((P)"args"));
  lit_315 = YPPsym((P)"into");
  lit_316 = YPPlist(1,YPPsym((P)"k"));
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_into_358 = YPfab_met(FUNCODEREF(fun_into_358),T1,LITREF(lit_315),LITREF(lit_316),sloc(947),YPfalse);
  T0 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOtup = YPfab_met(FUNCODEREF(YOtup),T0,LITREF(lit_313),LITREF(lit_314),sloc(953),YPfalse);
  T2 = YOtup;
  VARSET(YOtup,T2);
  VARSET(Ytup,VARREF(YOtup));
  lit_317 = YPPsym((P)"t*");
  lit_318 = YPPlist(1,YPPsym((P)"args"));
  lit_319 = YPPlist(1,YPPsym((P)"k"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_into_360 = YPfab_met(FUNCODEREF(fun_into_360),T4,LITREF(lit_315),LITREF(lit_319),sloc(947),YPfalse);
  T3 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YtT = YPfab_met(FUNCODEREF(YtT),T3,LITREF(lit_317),LITREF(lit_318),sloc(957),YPfalse);
  T5 = YtT;
  VARSET(YtT,T5);
  lit_320 = YPPsym((P)"@type-equal?");
  lit_321 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T6 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtype_equalQ = YPfab_met(FUNCODEREF(YOtype_equalQ),T6,LITREF(lit_320),LITREF(lit_321),sloc(961),YPfalse);
  T7 = YOtype_equalQ;
  VARSET(YOtype_equalQ,T7);
  lit_322 = YPPsym((P)"@subtype?");
  lit_323 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T8 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOsubtypeQ = YPfab_met(FUNCODEREF(YOsubtypeQ),T8,LITREF(lit_322),LITREF(lit_323),sloc(975),YPfalse);
  T9 = YOsubtypeQ;
  VARSET(YOsubtypeQ,T9);
  lit_324 = YPPsym((P)"@may-isa?");
  lit_325 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T11 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T10 = YPfab_sig(YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),T11,Ynil);
  YOmay_isaQ = YPfab_met(FUNCODEREF(YOmay_isaQ),T10,LITREF(lit_324),LITREF(lit_325),sloc(980),YPfalse);
  T12 = YOmay_isaQ;
  VARSET(YOmay_isaQ,T12);
  VARSET(YTrestarts_okQT,YPfalse);
  lit_326 = YPPsym((P)"unexec");
  lit_327 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"fun"));
  T13 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yunexec = YPfab_met(FUNCODEREF(Yunexec),T13,LITREF(lit_326),LITREF(lit_327),sloc(1003),YPfalse);
  T14 = Yunexec;
  VARSET(Yunexec,T14);
  lit_328 = YPPsym((P)"%patch-early-generic");
  lit_329 = YPPlist(1,YPPsym((P)"generic"));
  T15 = YPfab_sig(YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPpatch_early_generic = YPfab_met(FUNCODEREF(YPpatch_early_generic),T15,LITREF(lit_328),LITREF(lit_329),sloc(1007),YPfalse);
  T16 = YPpatch_early_generic;
  VARSET(YPpatch_early_generic,T16);
  xF1211 = VARREF(YPmet_prop_len);
  xF1212 = xF1211;
  tF1213 = (P)1;
  T18 = (P)YPiLL(xF1212,(P)2);
  T17 = (P)YPiv(T18,tF1213);
  (P)YPclass_prop_len_setter(T17,VARREF(YLmetG));
  lit_330 = YPsb((P)"Tried to call an unbound function, but the function error\nhandler is itself unbound. Exiting.");
  VARSET(YTboot_macro_module_namesT,Ynil);
  VARSET(YTboot_macro_namesT,Ynil);
  VARSET(YTboot_macro_expandersT,Ynil);
  VARSET(YTmacros_okQT,YPfalse);
  lit_331 = YPPsym((P)"app-filename");
  lit_332 = Ynil;
  T19 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Yapp_filename = YPfab_met(FUNCODEREF(Yapp_filename),T19,LITREF(lit_331),LITREF(lit_332),sloc(1129),YPfalse);
  T20 = Yapp_filename;
  VARSET(Yapp_filename,T20);
  lit_333 = YPPsym((P)"app-args");
  T21 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Yapp_args = YPfab_met(FUNCODEREF(Yapp_args),T21,LITREF(lit_333),LITREF(lit_332),sloc(1131),YPfalse);
  T22 = Yapp_args;
  VARSET(Yapp_args,T22);
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
  T23 = YPfalse;
  return T23;
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
  {"%fp-reg-setter", PVAR, NULL},
  {"%cu", PVAR, NULL},
  {"%elt", PVAR, NULL},
  {"%fun-info", PVAR, NULL},
  {"%object-class", PVAR, NULL},
  {"%rep", PVAR, NULL},
  {"%app-args", PVAR, NULL},
  {"tup", CVAR, &Ytup},
  {"<met>", CVAR, &YLmetG},
  {"dv", PVAR, NULL},
  {"%prop-dat-at", PVAR, NULL},
  {"%symbols-ready?", CVAR, &YPsymbols_readyQ},
  {"%met-info", PVAR, NULL},
  {"%gen-cache-count", PVAR, NULL},
  {"%fun-cache", PVAR, NULL},
  {"%product-elts-setter", PVAR, NULL},
  {"%class-of", PVAR, NULL},
  {"set", PVAR, NULL},
  {"class-gens-setter", CVAR, &Yclass_gens_setter},
  {"@elt", CVAR, &YOelt},
  {"%class-props", PVAR, NULL},
  {"%sig", PVAR, NULL},
  {"%%mep-apply", PVAR, NULL},
  {"<str>", CVAR, &YLstrG},
  {"%sym-nam", PVAR, NULL},
  {"no-next-methods-error", CVAR, &Yno_next_methods_error},
  {"%sp-elt", PVAR, NULL},
  {"%add-met", CVAR, &YPadd_met},
  {"---main-11---", PVAR, NULL},
  {"%reparent-class-shells", PVAR, NULL},
  {"%classes-ready?", CVAR, &YPclasses_readyQ},
  {"prop-owner", CVAR, &Yprop_owner},
  {"order-specs", CVAR, &Yorder_specs},
  {"@telt-setter", PVAR, NULL},
  {"%dyn-var-val", PVAR, NULL},
  {"%to-tup", PVAR, NULL},
  {"%class", PVAR, NULL},
  {"%selt", PVAR, NULL},
  {"%%sfab", PVAR, NULL},
  {"%class-mets-setter", PVAR, NULL},
  {"@adr?", PVAR, NULL},
  {"<tup>", CVAR, &YLtupG},
  {"class-gens", CVAR, &Yclass_gens},
  {"%opts-tup-location-setter", PVAR, NULL},
  {"<fun>", CVAR, &YLfunG},
  {"class-id", CVAR, &Yclass_id},
  {"app-args", CVAR, &Yapp_args},
  {"class-prop-len-setter", CVAR, &Yclass_prop_len_setter},
  {"property-type-error", CVAR, &Yproperty_type_error},
  {"%iv", PVAR, NULL},
  {"class-mets-setter", CVAR, &Yclass_mets_setter},
  {"%union-elts", PVAR, NULL},
  {"try", PVAR, NULL},
  {"%define-tagged-structure", PVAR, NULL},
  {"%@subclass?", PVAR, NULL},
  {"%class-children-setter", PVAR, NULL},
  {"gen-cache-classes", CVAR, &Ygen_cache_classes},
  {"%define-props", PVAR, NULL},
  {"update-instance-for-changed-class", CVAR, &Yupdate_instance_for_changed_class},
  {"$min-int", CVAR, &YDmin_int},
  {"<flat>", CVAR, &YLflatG},
  {"*macros-ok?*", CVAR, &YTmacros_okQT},
  {"%prop-getter", PVAR, NULL},
  {"%rev!", PVAR, NULL},
  {"%sig-nary?-setter", PVAR, NULL},
  {"---main-4---", PVAR, NULL},
  {"@len", PVAR, NULL},
  {"%prop-elt-setter", PVAR, NULL},
  {"argument-type-error", CVAR, &Yargument_type_error},
  {"nul", CVAR, &Ynul},
  {"property-unbound-error", CVAR, &Yproperty_unbound_error},
  {"%break", PVAR, NULL},
  {"%define-primitives", PVAR, NULL},
  {"@class-isa?", PVAR, NULL},
  {"%i-", PVAR, NULL},
  {"%gen-cache-classes-setter", PVAR, NULL},
  {"%product-elts", PVAR, NULL},
  {"error", CVAR, &Yerror},
  {"ds", PVAR, NULL},
  {"@=", PVAR, NULL},
  {"%untag", PVAR, NULL},
  {"opts-tup-storage", CVAR, &Yopts_tup_storage},
  {"@alter", CVAR, &YOalter},
  {"%finalize-props", PVAR, NULL},
  {"class-prop-len", CVAR, &Yclass_prop_len},
  {"%lst", PVAR, NULL},
  {"src-loc-file", CVAR, &Ysrc_loc_file},
  {"%sig-unification-vars-setter", PVAR, NULL},
  {"gen-cache-missable?", CVAR, &Ygen_cache_missableQ},
  {"%build-runtime-modules", PVAR, NULL},
  {"%early-dispatch", CVAR, &YPearly_dispatch},
  {"%fun-info-inlineable?", PVAR, NULL},
  {"%i*", PVAR, NULL},
  {"one-nil", CVAR, &Yone_nil},
  {"%*start-running-at*", CVAR, &YPTstart_running_atT},
  {"stack-overflow-error", CVAR, &Ystack_overflow_error},
  {"%selt-setter", PVAR, NULL},
  {"%prop-owner-setter", PVAR, NULL},
  {"%stack-overflow-lim", PVAR, NULL},
  {"<lst>", CVAR, &YLlstG},
  {"@del-dups", CVAR, &YOdel_dups},
  {"%cb", PVAR, NULL},
  {"%fab-met-inlineable", PVAR, NULL},
  {"@all2?", CVAR, &YOall2Q},
  {"%stack-check", PVAR, NULL},
  {"%type-object-setter", PVAR, NULL},
  {"cpl-error", CVAR, &Ycpl_error},
  {"%lu", PVAR, NULL},
  {"sig-nary?-setter", CVAR, &Ysig_naryQ_setter},
  {"%loc-off-setter", PVAR, NULL},
  {"%vm-fun-env-elt", PVAR, NULL},
  {"seq", PVAR, NULL},
  {"%gen-cache-count-setter", PVAR, NULL},
  {"%class-shells", PVAR, NULL},
  {"sig-unification-vars-setter", CVAR, &Ysig_unification_vars_setter},
  {"%class-name", PVAR, NULL},
  {"<seq!>", CVAR, &YLseqXG},
  {"%telt-setter", PVAR, NULL},
  {"nul-prop", CVAR, &Ynul_prop},
  {"%sym", PVAR, NULL},
  {"%flo-dat", PVAR, NULL},
  {"%vm-box-fab", PVAR, NULL},
  {"%gen-cache-singletons-setter", PVAR, NULL},
  {"%gen-cache-classes", PVAR, NULL},
  {"fun-info-src-loc-setter", CVAR, &Yfun_info_src_loc_setter},
  {"<fun-info>", CVAR, &YLfun_infoG},
  {"unknown-function-error", CVAR, &Yunknown_function_error},
  {"---main-9---", PVAR, NULL},
  {"loc", PVAR, NULL},
  {"%class-row", PVAR, NULL},
  {"%i=", PVAR, NULL},
  {"%relt-setter", PVAR, NULL},
  {"%ib", PVAR, NULL},
  {"if", PVAR, NULL},
  {"%class-prop-len", PVAR, NULL},
  {"fun-info-inlineable?-setter", CVAR, &Yfun_info_inlineableQ_setter},
  {"product-elts", CVAR, &Yproduct_elts},
  {"%type-object", PVAR, NULL},
  {"<seq.>", CVAR, &YLseqIG},
  {"sig-nary?", CVAR, &Ysig_naryQ},
  {"%class-ancestors-setter", PVAR, NULL},
  {"arity-error", CVAR, &Yarity_error},
  {"%sp-reg-setter", PVAR, NULL},
  {"@add", PVAR, NULL},
  {"@type-equal?", CVAR, &YOtype_equalQ},
  {"sig-unification-vars", CVAR, &Ysig_unification_vars},
  {"@do", CVAR, &YOdo},
  {"file-opening-error", CVAR, &Yfile_opening_error},
  {"unless", PVAR, NULL},
  {"---main-12---", PVAR, NULL},
  {"%opts-tup-tup", PVAR, NULL},
  {"%define-accessor", PVAR, NULL},
  {"fun-info-src-loc", CVAR, &Yfun_info_src_loc},
  {"force-names-into-boot-module", PVAR, NULL},
  {"<seq>", CVAR, &YLseqG},
  {"class-direct-props-setter", CVAR, &Yclass_direct_props_setter},
  {"%new", PVAR, NULL},
  {"%c=", PVAR, NULL},
  {"ambiguous-method-error", CVAR, &Yambiguous_method_error},
  {"fun-info-inlineable?", CVAR, &Yfun_info_inlineableQ},
  {"as-error", CVAR, &Yas_error},
  {"%sig-unification-vars", PVAR, NULL},
  {"%class-gens", PVAR, NULL},
  {"%define-hierarchy", PVAR, NULL},
  {"%src-loc-line", PVAR, NULL},
  {"%prop-owner", PVAR, NULL},
  {"arithmetic-error", CVAR, &Yarithmetic_error},
  {"%prop-type", PVAR, NULL},
  {"%vm-with-exit", PVAR, NULL},
  {"<col!>", CVAR, &YLcolXG},
  {"def", PVAR, NULL},
  {"@not", PVAR, NULL},
  {"%%check-call-types", PVAR, NULL},
  {"%class-forward", PVAR, NULL},
  {"@any?", CVAR, &YOanyQ},
  {"class-direct-props", CVAR, &Yclass_direct_props},
  {"@mem?", CVAR, &YOmemQ},
  {"opts-count", CVAR, &Yopts_count},
  {"and", PVAR, NULL},
  {"%check-call-types", PVAR, NULL},
  {"sym-name", CVAR, &Ysym_name},
  {"$gen-cache-classes-offset", CVAR, &YDgen_cache_classes_offset},
  {"@subtype?", CVAR, &YOsubtypeQ},
  {"%src-loc-file-setter", PVAR, NULL},
  {"%c<", PVAR, NULL},
  {"src-loc-line", CVAR, &Ysrc_loc_line},
  {"%vm-box-val", PVAR, NULL},
  {"<sig>", CVAR, &YLsigG},
  {"*boot-macro-module-names*", CVAR, &YTboot_macro_module_namesT},
  {"class-children", CVAR, &Yclass_children},
  {"internal-error", CVAR, &Yinternal_error},
  {"fin", PVAR, NULL},
  {"<col.>", CVAR, &YLcolIG},
  {"%str-eq?", PVAR, NULL},
  {"%nul?", PVAR, NULL},
  {"type-error", CVAR, &Ytype_error},
  {"%tail", PVAR, NULL},
  {"%%rfab", PVAR, NULL},
  {"%raw-alloc", PVAR, NULL},
  {"%sig-nary?", PVAR, NULL},
  {"@head-setter", PVAR, NULL},
  {"%define-structure", PVAR, NULL},
  {"%vnm", PVAR, NULL},
  {"fun-env", CVAR, &Yfun_env},
  {"%class-prop-len-setter", PVAR, NULL},
  {"<sym>", CVAR, &YLsymG},
  {"%fab-sig", PVAR, NULL},
  {"@all?", CVAR, &YOallQ},
  {"%check-type", PVAR, NULL},
  {"t*", CVAR, &YtT},
  {"%loc", PVAR, NULL},
  {"%fab-dyn-var", PVAR, NULL},
  {"<col>", CVAR, &YLcolG},
  {"$max-int", CVAR, &YDmax_int},
  {"class-children-setter", CVAR, &Yclass_children_setter},
  {"@pick", CVAR, &YOpick},
  {"macro-expand", PVAR, NULL},
  {"@head", PVAR, NULL},
  {"prop-init", CVAR, &Yprop_init},
  {"%max-stack-len", PVAR, NULL},
  {"%check-arity", PVAR, NULL},
  {"%rnul", CVAR, &YPrnul},
  {"%gen-mets-setter", PVAR, NULL},
  {"fun-sig", CVAR, &Yfun_sig},
  {"may-isa?", CVAR, &Ymay_isaQ},
  {"class-forward-setter", CVAR, &Yclass_forward_setter},
  {"$direct-object-class", CVAR, &YDdirect_object_class},
  {"%sp-reg", PVAR, NULL},
  {"%met-sig", PVAR, NULL},
  {"%tag", PVAR, NULL},
  {"@==", PVAR, NULL},
  {"range-error", CVAR, &Yrange_error},
  {"---main-5---", PVAR, NULL},
  {"@tlen", PVAR, NULL},
  {"<rep>", CVAR, &YLrepG},
  {"$tag-msk", PVAR, NULL},
  {"%class-parents", PVAR, NULL},
  {"%i+", PVAR, NULL},
  {"property-not-found-error", CVAR, &Yproperty_not_found_error},
  {"---main-0---", PVAR, NULL},
  {"%class-row-setter", PVAR, NULL},
  {"@raw-nul?", PVAR, NULL},
  {"union-elts", CVAR, &Yunion_elts},
  {"%sig-val-setter", PVAR, NULL},
  {"%vfn-setter", PVAR, NULL},
  {"%opts", PVAR, NULL},
  {"---main-8---", PVAR, NULL},
  {"%fun-info-src", PVAR, NULL},
  {"%do-stack-frames", PVAR, NULL},
  {"%%macro", CVAR, &YPPmacro},
  {"%class-id", PVAR, NULL},
  {"sig-specs-setter", CVAR, &Ysig_specs_setter},
  {"%class-direct-props-setter", PVAR, NULL},
  {"%false", CVAR, &YPfalse},
  {"%prop-offset", CVAR, &YPprop_offset},
  {"<gen-cache>", CVAR, &YLgen_cacheG},
  {"%compute-ancestors", PVAR, NULL},
  {"<loc>", CVAR, &YLlocG},
  {"class-forward", CVAR, &Yclass_forward},
  {"%macro", PVAR, NULL},
  {"---main-3---", PVAR, NULL},
  {"@rev!", CVAR, &YOrevX},
  {"%tag-into", PVAR, NULL},
  {"%opts-tup-count-setter", PVAR, NULL},
  {"bound?", PVAR, NULL},
  {"@telt", PVAR, NULL},
  {"%fab-gen/code", PVAR, NULL},
  {"@find", CVAR, &YOfind},
  {"fun-info-setter", CVAR, &Yfun_info_setter},
  {"@new", CVAR, &YOnew},
  {"%vpc-setter", PVAR, NULL},
  {"%opts-tup", PVAR, NULL},
  {"export", PVAR, NULL},
  {"%raw-met-call", PVAR, NULL},
  {"<flo>", CVAR, &YLfloG},
  {"%*used-symbols-too-early*", CVAR, &YPTused_symbols_too_earlyT},
  {"%gen-cache", PVAR, NULL},
  {"@add-new", PVAR, NULL},
  {"sig-specs", CVAR, &Ysig_specs},
  {"%opts-count", PVAR, NULL},
  {"%ir", PVAR, NULL},
  {"%str", PVAR, NULL},
  {"---main-14---", PVAR, NULL},
  {"%su", PVAR, NULL},
  {"%cons-args", PVAR, NULL},
  {"@map", CVAR, &YOmap},
  {"syntax-error", CVAR, &Ysyntax_error},
  {"or", PVAR, NULL},
  {"%class-direct-props", PVAR, NULL},
  {"@lit", CVAR, &YOlit},
  {"%tlen", PVAR, NULL},
  {"<fixnum>", CVAR, &YLfixnumG},
  {"@oelt-setter", PVAR, NULL},
  {"%met-prop-len", CVAR, &YPmet_prop_len},
  {"opts-location", CVAR, &Yopts_location},
  {"fun-info", CVAR, &Yfun_info},
  {"%src-loc", PVAR, NULL},
  {"%singleton", PVAR, NULL},
  {"keyboard-interrupt", CVAR, &Ykeyboard_interrupt},
  {"%fun-info-src-setter", PVAR, NULL},
  {"@singleton-isa?", PVAR, NULL},
  {"%sig-specs-setter", PVAR, NULL},
  {"%stack-check-reg?-setter", PVAR, NULL},
  {"%tag-bits", PVAR, NULL},
  {"%opts-tup-location", PVAR, NULL},
  {"%gen-sig-setter", PVAR, NULL},
  {"%class-name-setter", PVAR, NULL},
  {"%object-shells", PVAR, NULL},
  {"mif", PVAR, NULL},
  {"@@nul?", CVAR, &YOOnulQ},
  {"%class-id-setter", PVAR, NULL},
  {"%i&", PVAR, NULL},
  {"<int>", CVAR, &YLintG},
  {"dp", PVAR, NULL},
  {"%vsp", PVAR, NULL},
  {"---main-7---", PVAR, NULL},
  {"fab-sym", CVAR, &Yfab_sym},
  {"not", CVAR, &Ynot},
  {"<prop>", CVAR, &YLpropG},
  {"%pairize", PVAR, NULL},
  {"%gen", PVAR, NULL},
  {"sig-val-setter", CVAR, &Ysig_val_setter},
  {"%define-getter", PVAR, NULL},
  {"%type-class", PVAR, NULL},
  {"%gen-sig", PVAR, NULL},
  {"%vm-fun-env-elt-setter", PVAR, NULL},
  {"%clone", PVAR, NULL},
  {"%prop-elt", PVAR, NULL},
  {"%union", PVAR, NULL},
  {"fun-info-names-setter", CVAR, &Yfun_info_names_setter},
  {"%prop-unbound-error", CVAR, &YPprop_unbound_error},
  {"<num>", CVAR, &YLnumG},
  {"@cat2", CVAR, &YOcat2},
  {"ct", PVAR, NULL},
  {"ddv", PVAR, NULL},
  {"%tail-setter", PVAR, NULL},
  {"%opts-location-setter", PVAR, NULL},
  {"dp!", PVAR, NULL},
  {"%met", PVAR, NULL},
  {"%fab-code-refs", PVAR, NULL},
  {"fun-info-count-setter", CVAR, &Yfun_info_count_setter},
  {"esc", PVAR, NULL},
  {"%gen-cache-arg-pos", PVAR, NULL},
  {"%prop-setter-setter", PVAR, NULL},
  {"%subclass", PVAR, NULL},
  {"%define-parents", PVAR, NULL},
  {"%fu", PVAR, NULL},
  {"%vm-fun-env-fab", PVAR, NULL},
  {"<product>", CVAR, &YLproductG},
  {"type-class", CVAR, &Ytype_class},
  {"sig-val", CVAR, &Ysig_val},
  {"df", PVAR, NULL},
  {"%relt", PVAR, NULL},
  {"%unexec", PVAR, NULL},
  {"app-filename", CVAR, &Yapp_filename},
  {"%loc-val", PVAR, NULL},
  {"fun-info-names", CVAR, &Yfun_info_names},
  {"%unlink-stack", PVAR, NULL},
  {"%eof-object", PVAR, NULL},
  {"%fun-cache-setter", PVAR, NULL},
  {"%vnm-setter", PVAR, NULL},
  {"class-parents-setter", CVAR, &Yclass_parents_setter},
  {"@+", PVAR, NULL},
  {"new", CVAR, &Ynew},
  {"%indirect-object?", PVAR, NULL},
  {"tail-setter", CVAR, &Ytail_setter},
  {"%fb", PVAR, NULL},
  {"%fun-info-name-setter", PVAR, NULL},
  {"fun-info-count", CVAR, &Yfun_info_count},
  {"*restarts-ok?*", CVAR, &YTrestarts_okQT},
  {"%fun-info-names", PVAR, NULL},
  {"---main-6---", PVAR, NULL},
  {"class-props-setter", CVAR, &Yclass_props_setter},
  {"<src-loc>", CVAR, &YLsrc_locG},
  {"%sig-val", PVAR, NULL},
  {"---main-15---", PVAR, NULL},
  {"d.", PVAR, NULL},
  {"%gen-info", PVAR, NULL},
  {"@tail", PVAR, NULL},
  {"%prop-init", PVAR, NULL},
  {"<union>", CVAR, &YLunionG},
  {"---main-1---", PVAR, NULL},
  {"@rev", CVAR, &YOrev},
  {"use/mangle", PVAR, NULL},
  {"%src-loc-line-setter", PVAR, NULL},
  {"%%len", PVAR, NULL},
  {"@oelt", PVAR, NULL},
  {"%stack-reg", PVAR, NULL},
  {"*early-classes*", CVAR, &YTearly_classesT},
  {"box-value-setter", CVAR, &Ybox_value_setter},
  {"%fun-info-src-loc-setter", PVAR, NULL},
  {"%@class-of", PVAR, NULL},
  {"%gen-cache-missable?", PVAR, NULL},
  {"%sig-arity-setter", PVAR, NULL},
  {"<chr>", CVAR, &YLchrG},
  {"class-parents", CVAR, &Yclass_parents},
  {"fab-pair", CVAR, &Yfab_pair},
  {"---main-2---", PVAR, NULL},
  {"use/include", PVAR, NULL},
  {"tail", CVAR, &Ytail},
  {"dg", PVAR, NULL},
  {"%str!", PVAR, NULL},
  {"%gen-cache-arg-pos-setter", PVAR, NULL},
  {"%sb", PVAR, NULL},
  {"class-props", CVAR, &Yclass_props},
  {"@olen", PVAR, NULL},
  {"no-applicable-methods-error", CVAR, &Yno_applicable_methods_error},
  {"fun-cache", CVAR, &Yfun_cache},
  {"%ru", PVAR, NULL},
  {"%vm-box-val-setter", PVAR, NULL},
  {"%class-mets", PVAR, NULL},
  {"@pair", PVAR, NULL},
  {"prop-type", CVAR, &Yprop_type},
  {"@@==", CVAR, &YOOEE},
  {"%type-class-setter", PVAR, NULL},
  {"<subclass>", CVAR, &YLsubclassG},
  {"<mag>", CVAR, &YLmagG},
  {"rep", PVAR, NULL},
  {"%src-loc-file", PVAR, NULL},
  {"%patch-early-generics", PVAR, NULL},
  {"%vfn", PVAR, NULL},
  {"dc", PVAR, NULL},
  {"%app-filename", PVAR, NULL},
  {"$num-int-bits", CVAR, &YDnum_int_bits},
  {"$gen-cache-singletons-offset", CVAR, &YDgen_cache_singletons_offset},
  {"%untag-into", PVAR, NULL},
  {"prop-offset", CVAR, &Yprop_offset},
  {"%bb", PVAR, NULL},
  {"%flo-dat-setter", PVAR, NULL},
  {"%opts-count-setter", PVAR, NULL},
  {"%fab-gen", PVAR, NULL},
  {"narity-error", CVAR, &Ynarity_error},
  {"%head-setter", PVAR, NULL},
  {"%i!", PVAR, NULL},
  {"%rep!", PVAR, NULL},
  {"%opts-tup-tup-setter", PVAR, NULL},
  {"%patch-early-generic", CVAR, &YPpatch_early_generic},
  {"%fun-info-count", PVAR, NULL},
  {"%raw-call", PVAR, NULL},
  {"%i^", PVAR, NULL},
  {"%eof-object?", PVAR, NULL},
  {"%met-env", PVAR, NULL},
  {"%class-gens-setter", PVAR, NULL},
  {"%iu", PVAR, NULL},
  {"@int?", PVAR, NULL},
  {"%opts-tup-count", PVAR, NULL},
  {"%fab-met", PVAR, NULL},
  {"box-value", CVAR, &Ybox_value},
  {"%product", PVAR, NULL},
  {"prop-setter", CVAR, &Yprop_setter},
  {"isa?", CVAR, &YisaQ},
  {"<singleton>", CVAR, &YLsingletonG},
  {"%i<", PVAR, NULL},
  {"quote", PVAR, NULL},
  {"<box>", CVAR, &YLboxG},
  {"%i?", PVAR, NULL},
  {"fun-sig-setter", CVAR, &Yfun_sig_setter},
  {"%def-patch-early-generics", PVAR, NULL},
  {"%code-ref", PVAR, NULL},
  {"%im", PVAR, NULL},
  {"@tall2?", CVAR, &YOtall2Q},
  {"%i<<", PVAR, NULL},
  {"%lit", PVAR, NULL},
  {"%fapply", PVAR, NULL},
  {"%dispatch", CVAR, &YPdispatch},
  {"<opts-tup>", CVAR, &YLopts_tupG},
  {"%sig-arity", PVAR, NULL},
  {"dl", PVAR, NULL},
  {"%tu", PVAR, NULL},
  {"%gen-cache-missable?-setter", PVAR, NULL},
  {"type-object", CVAR, &Ytype_object},
  {"use/export", PVAR, NULL},
  {"%sym-nam-setter", PVAR, NULL},
  {"<log>", CVAR, &YLlogG},
  {"class-mets", CVAR, &Yclass_mets},
  {"use/library", PVAR, NULL},
  {"%define-structure-accessors", PVAR, NULL},
  {"%allocate-stack", PVAR, NULL},
  {"nil", CVAR, &Ynil},
  {"%%apply", PVAR, NULL},
  {"%met-info-setter", PVAR, NULL},
  {"%met-sig-setter", PVAR, NULL},
  {"props-of", CVAR, &Yprops_of},
  {"dss", PVAR, NULL},
  {"%define-repeated-structure", PVAR, NULL},
  {"%head", PVAR, NULL},
  {"%vpc", PVAR, NULL},
  {"%it/", PVAR, NULL},
  {"%vfp", PVAR, NULL},
  {"@tail-setter", PVAR, NULL},
  {"@subclass?", PVAR, NULL},
  {"*boot-macro-names*", CVAR, &YTboot_macro_namesT},
  {"ct-also", PVAR, NULL},
  {"%next-methods", PVAR, NULL},
  {"<any>", CVAR, &YLanyG},
  {"%eq?", PVAR, NULL},
  {"lst", CVAR, &Ylst},
  {"%opts-location", PVAR, NULL},
  {"%telt", PVAR, NULL},
  {"@nul?", PVAR, NULL},
  {"%vfp-setter", PVAR, NULL},
  {"%vm-with-cleanup", PVAR, NULL},
  {"%tnul", CVAR, &YPtnul},
  {"%fab-sym", PVAR, NULL},
  {"gen-cache-singletons", CVAR, &Ygen_cache_singletons},
  {"fun", PVAR, NULL},
  {"<opts>", CVAR, &YLoptsG},
  {"%prop-getter-setter", PVAR, NULL},
  {"%i<<<", PVAR, NULL},
  {"%next-methods-reg-setter", PVAR, NULL},
  {"%met-code", PVAR, NULL},
  {"%fun-reg", PVAR, NULL},
  {"class-name", CVAR, &Yclass_name},
  {"use", PVAR, NULL},
  {"%def-regs", PVAR, NULL},
  {"%rlen", PVAR, NULL},
  {"%elt-setter", PVAR, NULL},
  {"@fold", CVAR, &YOfold},
  {"%loc-off", PVAR, NULL},
  {"$tag-len", PVAR, NULL},
  {"%i>>>", PVAR, NULL},
  {"%fun-info-name", PVAR, NULL},
  {"%lb", PVAR, NULL},
  {"unexec", CVAR, &Yunexec},
  {"@tany?", CVAR, &YOtanyQ},
  {"%gen-info-setter", PVAR, NULL},
  {"%%tfab", PVAR, NULL},
  {"%class-forward-setter", PVAR, NULL},
  {"%fun-info-inlineable?-setter", PVAR, NULL},
  {"%tup!", PVAR, NULL},
  {"%i>>", PVAR, NULL},
  {"%fun-info-names-setter", PVAR, NULL},
  {"sig-arity-setter", CVAR, &Ysig_arity_setter},
  {"quasiquote", PVAR, NULL},
  {"assert-error", CVAR, &Yassert_error},
  {"%union-elts-setter", PVAR, NULL},
  {"fun-info-name-setter", CVAR, &Yfun_info_name_setter},
  {"let", PVAR, NULL},
  {"---main-10---", PVAR, NULL},
  {"%cat2", PVAR, NULL},
  {"%add-prop", CVAR, &YPadd_prop},
  {"%symbols", CVAR, &YPsymbols},
  {"fun-info-src-setter", CVAR, &Yfun_info_src_setter},
  {"%slen", PVAR, NULL},
  {"prop-getter", CVAR, &Yprop_getter},
  {"%fun-val-check-type", PVAR, NULL},
  {"---main-13---", PVAR, NULL},
  {"*boot-macro-expanders*", CVAR, &YTboot_macro_expandersT},
  {"%fixnum", PVAR, NULL},
  {"@tup", CVAR, &YOtup},
  {"%finalize-props!", CVAR, &YPfinalize_propsX},
  {"subtype?", CVAR, &YsubtypeQ},
  {"%loc-val-setter", PVAR, NULL},
  {"%pair", PVAR, NULL},
  {"@fill", CVAR, &YOfill},
  {"%fun-info-src-loc", PVAR, NULL},
  {"%stack-check-reg?", PVAR, NULL},
  {"%binding-name", PVAR, NULL},
  {"%true", CVAR, &YPtrue},
  {"%class-props-setter", PVAR, NULL},
  {"@lst", CVAR, &YOlst},
  {"sig-arity", CVAR, &Ysig_arity},
  {"%define-boxed-structure", PVAR, NULL},
  {"%met-env-setter", PVAR, NULL},
  {"@<", PVAR, NULL},
  {"return-type-error", CVAR, &Yreturn_type_error},
  {"@isa?", PVAR, NULL},
  {"%gen-cache-singletons", PVAR, NULL},
  {"%object-class-setter", PVAR, NULL},
  {"%object-of", PVAR, NULL},
  {"<gen>", CVAR, &YLgenG},
  {"fun-info-name", CVAR, &Yfun_info_name},
  {"%chr", PVAR, NULL},
  {"class-row", CVAR, &Yclass_row},
  {"%class-ancestors", PVAR, NULL},
  {"%gen-code-setter", PVAR, NULL},
  {"%trace-off", PVAR, NULL},
  {"%trace-on", PVAR, NULL},
  {"%process-module", PVAR, NULL},
  {"%flo", PVAR, NULL},
  {"head-setter", CVAR, &Yhead_setter},
  {"%class-parents-setter", PVAR, NULL},
  {"%prop-type-setter", PVAR, NULL},
  {"fun-info-src", CVAR, &Yfun_info_src},
  {"%define-setter", PVAR, NULL},
  {"%with-monitor", CVAR, &YPwith_monitor},
  {"%tup", PVAR, NULL},
  {"<class>", CVAR, &YLclassG},
  {"class-ancestors-setter", CVAR, &Yclass_ancestors_setter},
  {"%invoke-debugger", PVAR, NULL},
  {"fun-mets-setter", CVAR, &Yfun_mets_setter},
  {"fun-code", CVAR, &Yfun_code},
  {"%fun-info-count-setter", PVAR, NULL},
  {"%arg-check-type", PVAR, NULL},
  {"%%prop", PVAR, NULL},
  {"%class-children", PVAR, NULL},
  {"%fp-reg", PVAR, NULL},
  {"%vsp-setter", PVAR, NULL},
  {"%gen-mets", PVAR, NULL},
  {"%snul", CVAR, &YPsnul},
  {"%dyn-var-val-setter", PVAR, NULL},
  {"%raw", PVAR, NULL},
  {"@may-isa?", CVAR, &YOmay_isaQ},
  {"%sig-specs", PVAR, NULL},
  {"<type>", CVAR, &YLtypeG},
  {"%prop-setter", PVAR, NULL},
  {"%gen-code", PVAR, NULL},
  {"%collect-direct-props", CVAR, &YPcollect_direct_props},
  {"@fab", CVAR, &YOfab},
  {"%met-code-setter", PVAR, NULL},
  {"%prop-init-setter", PVAR, NULL},
  {"when", PVAR, NULL},
  {"head", CVAR, &Yhead},
  {"%%sym", PVAR, NULL},
  {"gen-cache-arg-pos", CVAR, &Ygen_cache_arg_pos},
  {"$adr-tag", PVAR, NULL},
  {"dm", PVAR, NULL},
  {"@opts-as-lst", CVAR, &YOopts_as_lst},
  {"%set-regs", PVAR, NULL},
  {"class-ancestors", CVAR, &Yclass_ancestors},
  {"fun-mets", CVAR, &Yfun_mets},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%cu", NULL},
  {"@olen", NULL},
  {"%rep", NULL},
  {"tup", NULL},
  {"<met>", NULL},
  {"<sym>", NULL},
  {"%met-prop-len", NULL},
  {"%raw-met-call", NULL},
  {"%met-info", NULL},
  {"%fun-cache", NULL},
  {"%class-of", NULL},
  {"set", NULL},
  {"class-gens-setter", NULL},
  {"@elt", NULL},
  {"*early-classes*", NULL},
  {"%class-props", NULL},
  {"<str>", NULL},
  {"%fun-info-inlineable?-setter", NULL},
  {"no-next-methods-error", NULL},
  {"%sp-elt", NULL},
  {"prop-owner", NULL},
  {"order-specs", NULL},
  {"@telt-setter", NULL},
  {"%dyn-var-val", NULL},
  {"%to-tup", NULL},
  {"%class", NULL},
  {"%selt", NULL},
  {"%class-mets-setter", NULL},
  {"<tup>", NULL},
  {"class-gens", NULL},
  {"@cat2", NULL},
  {"<fun>", NULL},
  {"class-id", NULL},
  {"class-prop-len-setter", NULL},
  {"%iv", NULL},
  {"class-mets", NULL},
  {"type-class", NULL},
  {"try", NULL},
  {"%@subclass?", NULL},
  {"%class-children-setter", NULL},
  {"update-instance-for-changed-class", NULL},
  {"$min-int", NULL},
  {"<flat>", NULL},
  {"%prop-getter", NULL},
  {"@@nul?", NULL},
  {"@len", NULL},
  {"%prop-elt-setter", NULL},
  {"argument-type-error", NULL},
  {"property-unbound-error", NULL},
  {"%break", NULL},
  {"@class-isa?", NULL},
  {"%i-", NULL},
  {"%gen-cache-classes-setter", NULL},
  {"error", NULL},
  {"ds", NULL},
  {"%untag", NULL},
  {"opts-tup-storage", NULL},
  {"class-prop-len", NULL},
  {"src-loc-file", NULL},
  {"gen-cache-missable?", NULL},
  {"%build-runtime-modules", NULL},
  {"%fun-info-inlineable?", NULL},
  {"%i*", NULL},
  {"%next-methods", NULL},
  {"stack-overflow-error", NULL},
  {"fun-env", NULL},
  {"<lst>", NULL},
  {"%cb", NULL},
  {"%fab-met-inlineable", NULL},
  {"@oelt-setter", NULL},
  {"cpl-error", NULL},
  {"sig-nary?-setter", NULL},
  {"%vm-fun-env-elt", NULL},
  {"%stack-reg", NULL},
  {"seq", NULL},
  {"%class-id", NULL},
  {"%prop-dat-at", NULL},
  {"sig-unification-vars-setter", NULL},
  {"<seq!>", NULL},
  {"nul-prop", NULL},
  {"%met-env", NULL},
  {"%vm-box-fab", NULL},
  {"%gen-cache-singletons-setter", NULL},
  {"fun-info-src-loc-setter", NULL},
  {"<fun-info>", NULL},
  {"unknown-function-error", NULL},
  {"loc", NULL},
  {"%i=", NULL},
  {"%relt-setter", NULL},
  {"%ib", NULL},
  {"if", NULL},
  {"fun-info-inlineable?-setter", NULL},
  {"product-elts", NULL},
  {"%type-object", NULL},
  {"<seq.>", NULL},
  {"sig-nary?", NULL},
  {"%class-ancestors-setter", NULL},
  {"arity-error", NULL},
  {"*macros-ok?*", NULL},
  {"%sp-reg-setter", NULL},
  {"@type-equal?", NULL},
  {"sig-unification-vars", NULL},
  {"@do", NULL},
  {"file-opening-error", NULL},
  {"fun-info-src-loc", NULL},
  {"@pick", NULL},
  {"%gen-cache-classes", NULL},
  {"<seq>", NULL},
  {"class-direct-props-setter", NULL},
  {"%c=", NULL},
  {"ambiguous-method-error", NULL},
  {"fun-info-inlineable?", NULL},
  {"as-error", NULL},
  {"@add", NULL},
  {"%sig-unification-vars", NULL},
  {"%class-gens", NULL},
  {"arithmetic-error", NULL},
  {"%prop-type", NULL},
  {"<col!>", NULL},
  {"@mem?", NULL},
  {"def", NULL},
  {"@not", NULL},
  {"%product-elts", NULL},
  {"@all?", NULL},
  {"%class-forward", NULL},
  {"@all2?", NULL},
  {"class-direct-props", NULL},
  {"opts-count", NULL},
  {"%check-call-types", NULL},
  {"sym-name", NULL},
  {"app-args", NULL},
  {"src-loc-line", NULL},
  {"%invoke-debugger", NULL},
  {"<sig>", NULL},
  {"*boot-macro-module-names*", NULL},
  {"class-children", NULL},
  {"<col.>", NULL},
  {"type-error", NULL},
  {"%tail", NULL},
  {"%sig-nary?", NULL},
  {"%object-class", NULL},
  {"%vnm", NULL},
  {"%class-prop-len-setter", NULL},
  {"not", NULL},
  {"t*", NULL},
  {"%fab-dyn-var", NULL},
  {"<col>", NULL},
  {"$max-int", NULL},
  {"class-children-setter", NULL},
  {"macro-expand", NULL},
  {"@head", NULL},
  {"prop-init", NULL},
  {"%max-stack-len", NULL},
  {"%rnul", NULL},
  {"%gen-mets-setter", NULL},
  {"may-isa?", NULL},
  {"class-forward-setter", NULL},
  {"%snul", NULL},
  {"$direct-object-class", NULL},
  {"%sp-reg", NULL},
  {"@==", NULL},
  {"range-error", NULL},
  {"@tlen", NULL},
  {"<rep>", NULL},
  {"%class-parents", NULL},
  {"%i+", NULL},
  {"property-not-found-error", NULL},
  {"@<", NULL},
  {"%class-row-setter", NULL},
  {"union-elts", NULL},
  {"%vfn-setter", NULL},
  {"%fun-info-src", NULL},
  {"%do-stack-frames", NULL},
  {"%%macro", NULL},
  {"sig-specs-setter", NULL},
  {"%class-direct-props-setter", NULL},
  {"%false", NULL},
  {"<gen-cache>", NULL},
  {"<loc>", NULL},
  {"%macro", NULL},
  {"@rev!", NULL},
  {"bound?", NULL},
  {"@telt", NULL},
  {"fun-info-setter", NULL},
  {"@new", NULL},
  {"%vpc-setter", NULL},
  {"%opts-tup", NULL},
  {"export", NULL},
  {"%gen-code", NULL},
  {"<flo>", NULL},
  {"%gen-cache", NULL},
  {"@add-new", NULL},
  {"sig-specs", NULL},
  {"@del-dups", NULL},
  {"%str", NULL},
  {"%su", NULL},
  {"@map", NULL},
  {"syntax-error", NULL},
  {"%class-direct-props", NULL},
  {"@lit", NULL},
  {"<fixnum>", NULL},
  {"%fun-info-name-setter", NULL},
  {"opts-location", NULL},
  {"fun-info", NULL},
  {"%fun-info-name", NULL},
  {"%src-loc", NULL},
  {"keyboard-interrupt", NULL},
  {"%fun-info-src-setter", NULL},
  {"@singleton-isa?", NULL},
  {"%stack-check-reg?-setter", NULL},
  {"mif", NULL},
  {"%class-id-setter", NULL},
  {"%clone", NULL},
  {"property-type-error", NULL},
  {"<int>", NULL},
  {"dp", NULL},
  {"fab-sym", NULL},
  {"<prop>", NULL},
  {"sig-val-setter", NULL},
  {"%type-class", NULL},
  {"%gen-sig", NULL},
  {"%vm-fun-env-elt-setter", NULL},
  {"prop-type", NULL},
  {"fun-info-names-setter", NULL},
  {"%prop-unbound-error", NULL},
  {"<num>", NULL},
  {"ct", NULL},
  {"ddv", NULL},
  {"dp!", NULL},
  {"fun-info-count-setter", NULL},
  {"esc", NULL},
  {"%gen-mets", NULL},
  {"%gen-cache-arg-pos", NULL},
  {"%fu", NULL},
  {"%def-regs", NULL},
  {"%vm-fun-env-fab", NULL},
  {"<product>", NULL},
  {"sig-val", NULL},
  {"internal-error", NULL},
  {"df", NULL},
  {"%relt", NULL},
  {"app-filename", NULL},
  {"%loc-val", NULL},
  {"fun-info-names", NULL},
  {"%unlink-stack", NULL},
  {"%eof-object", NULL},
  {"%vnm-setter", NULL},
  {"class-parents-setter", NULL},
  {"new", NULL},
  {"tail-setter", NULL},
  {"%fb", NULL},
  {"fun-info-count", NULL},
  {"%i&", NULL},
  {"*restarts-ok?*", NULL},
  {"%fun-info-names", NULL},
  {"class-props-setter", NULL},
  {"<src-loc>", NULL},
  {"%it/", NULL},
  {"%fun-info-names-setter", NULL},
  {"d.", NULL},
  {"@tail", NULL},
  {"%prop-init", NULL},
  {"<union>", NULL},
  {"@int?", NULL},
  {"@rev", NULL},
  {"use/mangle", NULL},
  {"@oelt", NULL},
  {"gen-cache-classes", NULL},
  {"box-value-setter", NULL},
  {"%fun-info-src-loc-setter", NULL},
  {"%@class-of", NULL},
  {"<chr>", NULL},
  {"class-parents", NULL},
  {"fab-pair", NULL},
  {"tail", NULL},
  {"dg", NULL},
  {"@opts-as-lst", NULL},
  {"%vm-box-val", NULL},
  {"%c<", NULL},
  {"%gen-cache-arg-pos-setter", NULL},
  {"%sb", NULL},
  {"class-props", NULL},
  {"no-applicable-methods-error", NULL},
  {"fun-cache", NULL},
  {"%vm-box-val-setter", NULL},
  {"%pair", NULL},
  {"%class-mets", NULL},
  {"@@==", NULL},
  {"<subclass>", NULL},
  {"%union-elts", NULL},
  {"<mag>", NULL},
  {"use/include", NULL},
  {"rep", NULL},
  {"%patch-early-generics", NULL},
  {"%vfn", NULL},
  {"dc", NULL},
  {"@=", NULL},
  {"%app-filename", NULL},
  {"prop-offset", NULL},
  {"%bb", NULL},
  {"%vm-with-cleanup", NULL},
  {"narity-error", NULL},
  {"@tail-setter", NULL},
  {"%i!", NULL},
  {"%allocate-stack", NULL},
  {"%fun-info-count", NULL},
  {"%raw-call", NULL},
  {"%i^", NULL},
  {"class-mets-setter", NULL},
  {"%class-gens-setter", NULL},
  {"%iu", NULL},
  {"%fab-met", NULL},
  {"box-value", NULL},
  {"prop-setter", NULL},
  {"<singleton>", NULL},
  {"%i<", NULL},
  {"<box>", NULL},
  {"%fun-cache-setter", NULL},
  {"%gen-cache-missable?", NULL},
  {"%i?", NULL},
  {"%class-prop-len", NULL},
  {"fun-sig-setter", NULL},
  {"%vsp", NULL},
  {"@lst", NULL},
  {"%im", NULL},
  {"@tall2?", NULL},
  {"%i<<", NULL},
  {"dv", NULL},
  {"%dispatch", NULL},
  {"<opts-tup>", NULL},
  {"dl", NULL},
  {"type-object", NULL},
  {"use/export", NULL},
  {"<log>", NULL},
  {"%fun-info-count-setter", NULL},
  {"use/library", NULL},
  {"nil", NULL},
  {"%selt-setter", NULL},
  {"props-of", NULL},
  {"@+", NULL},
  {"%sig-arity", NULL},
  {"dss", NULL},
  {"%head", NULL},
  {"%vpc", NULL},
  {"fun-sig", NULL},
  {"@subclass?", NULL},
  {"%set-regs", NULL},
  {"class-forward", NULL},
  {"%binding-name", NULL},
  {"ct-also", NULL},
  {"<any>", NULL},
  {"%eq?", NULL},
  {"lst", NULL},
  {"%met", NULL},
  {"%telt", NULL},
  {"@nul?", NULL},
  {"%vfp-setter", NULL},
  {"@fold", NULL},
  {"%tnul", NULL},
  {"gen-cache-singletons", NULL},
  {"@subtype?", NULL},
  {"<opts>", NULL},
  {"%i<<<", NULL},
  {"%next-methods-reg-setter", NULL},
  {"%met-code", NULL},
  {"%fun-reg", NULL},
  {"class-name", NULL},
  {"use", NULL},
  {"%rlen", NULL},
  {"fun", NULL},
  {"%eof-object?", NULL},
  {"%loc-off", NULL},
  {"%i>>>", NULL},
  {"%lb", NULL},
  {"unexec", NULL},
  {"@tany?", NULL},
  {"%class-forward-setter", NULL},
  {"%i>>", NULL},
  {"sig-arity-setter", NULL},
  {"%classes-ready?", NULL},
  {"%app-args", NULL},
  {"quasiquote", NULL},
  {"@any?", NULL},
  {"assert-error", NULL},
  {"fun-info-name-setter", NULL},
  {"fin", NULL},
  {"let", NULL},
  {"%lu", NULL},
  {"%fun-val-check-type", NULL},
  {"%symbols", NULL},
  {"fun-info-src-setter", NULL},
  {"prop-getter", NULL},
  {"%vfp", NULL},
  {"*boot-macro-expanders*", NULL},
  {"@tup", NULL},
  {"subtype?", NULL},
  {"%loc-val-setter", NULL},
  {"isa?", NULL},
  {"%fun-info-src-loc", NULL},
  {"@pair", NULL},
  {"%stack-check-reg?", NULL},
  {"%telt-setter", NULL},
  {"%true", NULL},
  {"%class-props-setter", NULL},
  {"%%check-call-types", NULL},
  {"sig-arity", NULL},
  {"%met-env-setter", NULL},
  {"return-type-error", NULL},
  {"@isa?", NULL},
  {"%gen-cache-singletons", NULL},
  {"%singleton", NULL},
  {"%object-of", NULL},
  {"<gen>", NULL},
  {"fun-info-name", NULL},
  {"class-row", NULL},
  {"%class-ancestors", NULL},
  {"%gen-code-setter", NULL},
  {"%process-module", NULL},
  {"%slen", NULL},
  {"head-setter", NULL},
  {"%met-sig", NULL},
  {"fun-info-src", NULL},
  {"%with-monitor", NULL},
  {"%tup", NULL},
  {"<class>", NULL},
  {"class-ancestors-setter", NULL},
  {"fun-mets-setter", NULL},
  {"fun-code", NULL},
  {"%gen-info", NULL},
  {"%loc-off-setter", NULL},
  {"%class-children", NULL},
  {"%vm-with-exit", NULL},
  {"@adr?", NULL},
  {"%vsp-setter", NULL},
  {"%%sym", NULL},
  {"%dyn-var-val-setter", NULL},
  {"%raw", NULL},
  {"%sig-val", NULL},
  {"@may-isa?", NULL},
  {"%sig-specs", NULL},
  {"<type>", NULL},
  {"quote", NULL},
  {"%met-code-setter", NULL},
  {"head", NULL},
  {"gen-cache-arg-pos", NULL},
  {"*boot-macro-names*", NULL},
  {"dm", NULL},
  {"class-ancestors", NULL},
  {"%tlen", NULL},
  {"fun-mets", NULL},
  {"%prop-elt", NULL},
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
