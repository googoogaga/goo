/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/boot");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/boot */

DEF(YLclassG,"goo/boot","<class>");
DEF(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(Ysym_name,"goo/boot","sym-name");
DEF(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(Ysig_arity,"goo/boot","sig-arity");
DEF(Yclass_children,"goo/boot","class-children");
DEF(Ygen_refs,"goo/boot","gen-refs");
DEF(Yfun_refs,"goo/boot","fun-refs");
DEF(Yfun_code,"goo/boot","fun-code");
DEF(Ytype_error,"goo/boot","type-error");
DEF(YPdispatch,"goo/boot","%dispatch");
DEF(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YLtypeG,"goo/boot","<type>");
DEF(YPcollect_direct_props,"goo/boot","%collect-direct-props");
DEF(YOfill,"goo/boot","@fill");
DEF(YLgenG,"goo/boot","<gen>");
DEF(YOtall2Q,"goo/boot","@tall2?");
DEF(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(Yarithmetic_error,"goo/boot","arithmetic-error");
DEF(YOelt,"goo/boot","@elt");
DEF(YPTused_symbols_too_earlyT,"goo/boot","%*used-symbols-too-early*");
DEF(YLsymG,"goo/boot","<sym>");
DEF(YPTstart_running_atT,"goo/boot","%*start-running-at*");
DEF(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(Yinternal_error,"goo/boot","internal-error");
DEF(YPtrue,"goo/boot","%true");
DEF(Yclass_forward,"goo/boot","class-forward");
DEF(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YLstrG,"goo/boot","<str>");
DEF(YPsymbols_readyQ,"goo/boot","%symbols-ready?");
DEF(Yunexec,"goo/boot","unexec");
DEF(YPprop_offset,"goo/boot","%prop-offset");
DEF(Ygen_cache_classes,"goo/boot","gen-cache-classes");
DEF(YLtupG,"goo/boot","<tup>");
DEF(YOfold,"goo/boot","@fold");
DEF(YOtanyQ,"goo/boot","@tany?");
DEF(Yrange_error,"goo/boot","range-error");
DEF(YLmetG,"goo/boot","<met>");
DEF(YLflatG,"goo/boot","<flat>");
DEF(Yfun_cache,"goo/boot","fun-cache");
DEF(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YTearly_classesT,"goo/boot","*early-classes*");
DEF(Yopts_tup_storage,"goo/boot","opts-tup-storage");
DEF(YOall2Q,"goo/boot","@all2?");
DEF(YPtnul,"goo/boot","%tnul");
DEF(Yprop_setter,"goo/boot","prop-setter");
DEF(YOlst,"goo/boot","@lst");
DEF(YLlstG,"goo/boot","<lst>");
DEF(YLfunG,"goo/boot","<fun>");
DEF(Ytype_object,"goo/boot","type-object");
DEF(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(YLseqXG,"goo/boot","<seq!>");
DEF(YPclasses_readyQ,"goo/boot","%classes-ready?");
DEF(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(Yclass_parents_setter,"goo/boot","class-parents-setter");
DEF(YOfab,"goo/boot","@fab");
DEF(Ytail_setter,"goo/boot","tail-setter");
DEF(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YLseqIG,"goo/boot","<seq.>");
DEF(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(Ybox_value_setter,"goo/boot","box-value-setter");
DEF(YLseqG,"goo/boot","<seq>");
DEF(Yclass_parents,"goo/boot","class-parents");
DEF(Ytail,"goo/boot","tail");
DEF(Ytup,"goo/boot","tup");
DEF(Ynil,"goo/boot","nil");
DEF(Ynul,"goo/boot","nul");
DEF(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(Yclass_props,"goo/boot","class-props");
DEF(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YLcolXG,"goo/boot","<col!>");
DEF(Ynarity_error,"goo/boot","narity-error");
DEF(YLsigG,"goo/boot","<sig>");
DEF(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(Yfun_env,"goo/boot","fun-env");
DEF(Yclass_mets_setter,"goo/boot","class-mets-setter");
DEF(Yopts_count,"goo/boot","opts-count");
DEF(YOallQ,"goo/boot","@all?");
DEF(YOsubtypeQ,"goo/boot","@subtype?");
DEF(Yclass_row,"goo/boot","class-row");
DEF(Yprop_getter,"goo/boot","prop-getter");
DEF(Ytype_class,"goo/boot","type-class");
DEF(YLcolIG,"goo/boot","<col.>");
DEF(Yprop_type,"goo/boot","prop-type");
DEF(Ybox_value,"goo/boot","box-value");
DEF(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(Ynul_prop,"goo/boot","nul-prop");
DEF(YLcolG,"goo/boot","<col>");
DEF(Yclass_mets,"goo/boot","class-mets");
DEF(YLrepG,"goo/boot","<rep>");
DEF(YOalter,"goo/boot","@alter");
DEF(YOrevX,"goo/boot","@rev!");
DEF(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YPrnul,"goo/boot","%rnul");
DEF(Yfun_mets_setter,"goo/boot","fun-mets-setter");
DEF(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(YDmax_int,"goo/boot","$max-int");
DEF(YOdel_dups,"goo/boot","@del-dups");
DEF(YLlocG,"goo/boot","<loc>");
DEF(YPPmacro,"goo/boot","%%macro");
DEF(Ylst,"goo/boot","lst");
DEF(YisaQ,"goo/boot","isa?");
DEF(Yapp_args,"goo/boot","app-args");
DEF(Yclass_name,"goo/boot","class-name");
DEF(YLfloG,"goo/boot","<flo>");
DEF(Yfun_mets,"goo/boot","fun-mets");
DEF(Yfun_sig,"goo/boot","fun-sig");
DEF(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YOOemptyQ,"goo/boot","@@empty?");
DEF(Yapp_filename,"goo/boot","app-filename");
DEF(YLfixnumG,"goo/boot","<fixnum>");
DEF(YDnum_int_bits,"goo/boot","$num-int-bits");
DEF(Yopts_location,"goo/boot","opts-location");
DEF(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YOtype_equalQ,"goo/boot","@type-equal?");
DEF(Yprop_owner,"goo/boot","prop-owner");
DEF(YOdo,"goo/boot","@do");
DEF(YPadd_prop,"goo/boot","%add-prop");
DEF(Yorder_specs,"goo/boot","order-specs");
DEF(YLpropG,"goo/boot","<prop>");
DEF(YLintG,"goo/boot","<int>");
DEF(Yclass_id,"goo/boot","class-id");
DEF(YLnumG,"goo/boot","<num>");
DEF(Yhead_setter,"goo/boot","head-setter");
DEF(Ynot,"goo/boot","not");
DEF(Ysig_specs_setter,"goo/boot","sig-specs-setter");
DEF(YLproductG,"goo/boot","<product>");
DEF(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
DEF(YtT,"goo/boot","t*");
DEF(Yreturn_type_error,"goo/boot","return-type-error");
DEF(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YOmemQ,"goo/boot","@mem?");
DEF(YDmin_int,"goo/boot","$min-int");
DEF(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(Yhead,"goo/boot","head");
DEF(Ysig_specs,"goo/boot","sig-specs");
DEF(YLunionG,"goo/boot","<union>");
DEF(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YPsnul,"goo/boot","%snul");
DEF(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YOpick,"goo/boot","@pick");
DEF(Yfab_sym,"goo/boot","fab-sym");
DEF(Ysig_val,"goo/boot","sig-val");
DEF(YPwith_monitor,"goo/boot","%with-monitor");
DEF(Yprop_offset,"goo/boot","prop-offset");
DEF(YLchrG,"goo/boot","<chr>");
DEF(Yclass_gens_setter,"goo/boot","class-gens-setter");
DEF(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YLsubclassG,"goo/boot","<subclass>");
DEF(Yproduct_elts,"goo/boot","product-elts");
DEF(YLmagG,"goo/boot","<mag>");
DEF(YPadd_met,"goo/boot","%add-met");
DEF(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YOfind,"goo/boot","@find");
DEF(Yclass_gens,"goo/boot","class-gens");
DEF(YPsymbols,"goo/boot","%symbols");
DEF(YOOEE,"goo/boot","@@==");
DEF(YLsingletonG,"goo/boot","<singleton>");
DEF(Yclass_type_cache,"goo/boot","class-type-cache");
DEF(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(Ysyntax_error,"goo/boot","syntax-error");
DEF(YDgen_cache_singletons_offset,"goo/boot","$gen-cache-singletons-offset");
DEF(YLboxG,"goo/boot","<box>");
DEF(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DEF(YOmap,"goo/boot","@map");
DEF(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(Ymay_isaQ,"goo/boot","may-isa?");
DEF(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YLlogG,"goo/boot","<log>");
DEF(Yassert_error,"goo/boot","assert-error");
DEF(Yclass_prop_len,"goo/boot","class-prop-len");
DEF(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(YPearly_dispatch,"goo/boot","%early-dispatch");
DEF(YLopts_tupG,"goo/boot","<opts-tup>");
DEF(YOtup,"goo/boot","@tup");
DEF(YLanyG,"goo/boot","<any>");
DEF(Yfun_src,"goo/boot","fun-src");
DEF(Yerror,"goo/boot","error");
DEF(YOcat2,"goo/boot","@cat2");
DEF(Yproperty_type_error,"goo/boot","property-type-error");
DEF(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(Yprop_init,"goo/boot","prop-init");
DEF(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(Ygen_src,"goo/boot","gen-src");
DEF(YOnew,"goo/boot","@new");
DEF(YsubtypeQ,"goo/boot","subtype?");
DEF(YOanyQ,"goo/boot","@any?");
DEF(Yfun_name,"goo/boot","fun-name");
DEF(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(YLoptsG,"goo/boot","<opts>");
DEF(Ycpl_error,"goo/boot","cpl-error");
DEF(Yunion_elts,"goo/boot","union-elts");
DEF(Yarity_error,"goo/boot","arity-error");
DEF(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(YDgen_cache_classes_offset,"goo/boot","$gen-cache-classes-offset");
DEF(Yobject_props,"goo/boot","object-props");
DEF(YOrev,"goo/boot","@rev");
DEF(Yas_error,"goo/boot","as-error");
DEF(Ysig_names_setter,"goo/boot","sig-names-setter");
DEF(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
DEF(YPfinalize_propsX,"goo/boot","%finalize-props!");
DEF(Ysig_names,"goo/boot","sig-names");
DEF(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(Yclass_children_setter,"goo/boot","class-children-setter");
DEF(YPfalse,"goo/boot","%false");
DEF(Yone_nil,"goo/boot","one-nil");
DEF(YPpatch_early_generic,"goo/boot","%patch-early-generic");
DEF(Ynew,"goo/boot","new");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_119);
DEFLIT(lit_242);
DEFLIT(lit_72);
DEFLIT(lit_222);
DEFLIT(lit_81);
DEFLIT(lit_179);
DEFLIT(lit_46);
DEFLIT(lit_7);
DEFLIT(lit_314);
DEFLIT(lit_100);
DEFLIT(lit_194);
DEFLIT(lit_42);
DEFLIT(lit_157);
DEFLIT(lit_182);
DEFLIT(lit_15);
DEFLIT(lit_190);
DEFLIT(lit_224);
DEFLIT(lit_235);
DEFLIT(lit_246);
DEFLIT(lit_63);
DEFLIT(lit_252);
DEFLIT(lit_254);
DEFLIT(lit_159);
DEFLIT(lit_264);
DEFLIT(lit_221);
DEFLIT(lit_59);
DEFLIT(lit_311);
DEFLIT(lit_261);
DEFLIT(lit_64);
DEFLIT(lit_209);
DEFLIT(lit_177);
DEFLIT(lit_57);
DEFLIT(lit_195);
DEFLIT(lit_70);
DEFLIT(lit_110);
DEFLIT(lit_139);
DEFLIT(lit_17);
DEFLIT(lit_241);
DEFLIT(lit_156);
DEFLIT(lit_131);
DEFLIT(lit_161);
DEFLIT(lit_115);
DEFLIT(lit_58);
DEFLIT(lit_260);
DEFLIT(lit_149);
DEFLIT(lit_102);
DEFLIT(lit_34);
DEFLIT(lit_10);
DEFLIT(lit_150);
DEFLIT(lit_310);
DEFLIT(lit_302);
DEFLIT(lit_181);
DEFLIT(lit_282);
DEFLIT(lit_91);
DEFLIT(lit_165);
DEFLIT(lit_214);
DEFLIT(lit_136);
DEFLIT(lit_6);
DEFLIT(lit_163);
DEFLIT(lit_82);
DEFLIT(lit_85);
DEFLIT(lit_55);
DEFLIT(lit_66);
DEFLIT(lit_168);
DEFLIT(lit_269);
DEFLIT(lit_13);
DEFLIT(lit_83);
DEFLIT(lit_33);
DEFLIT(lit_121);
DEFLIT(lit_223);
DEFLIT(lit_51);
DEFLIT(lit_147);
DEFLIT(lit_43);
DEFLIT(lit_2);
DEFLIT(lit_151);
DEFLIT(lit_48);
DEFLIT(lit_219);
DEFLIT(lit_317);
DEFLIT(lit_306);
DEFLIT(lit_296);
DEFLIT(lit_69);
DEFLIT(lit_122);
DEFLIT(lit_106);
DEFLIT(lit_203);
DEFLIT(lit_211);
DEFLIT(lit_77);
DEFLIT(lit_197);
DEFLIT(lit_212);
DEFLIT(lit_36);
DEFLIT(lit_3);
DEFLIT(lit_130);
DEFLIT(lit_1);
DEFLIT(lit_126);
DEFLIT(lit_166);
DEFLIT(lit_258);
DEFLIT(lit_142);
DEFLIT(lit_27);
DEFLIT(lit_218);
DEFLIT(lit_189);
DEFLIT(lit_299);
DEFLIT(lit_308);
DEFLIT(lit_303);
DEFLIT(lit_143);
DEFLIT(lit_164);
DEFLIT(lit_295);
DEFLIT(lit_183);
DEFLIT(lit_117);
DEFLIT(lit_138);
DEFLIT(lit_35);
DEFLIT(lit_127);
DEFLIT(lit_175);
DEFLIT(lit_145);
DEFLIT(lit_236);
DEFLIT(lit_217);
DEFLIT(lit_225);
DEFLIT(lit_273);
DEFLIT(lit_22);
DEFLIT(lit_259);
DEFLIT(lit_79);
DEFLIT(lit_75);
DEFLIT(lit_230);
DEFLIT(lit_135);
DEFLIT(lit_19);
DEFLIT(lit_26);
DEFLIT(lit_307);
DEFLIT(lit_31);
DEFLIT(lit_281);
DEFLIT(lit_101);
DEFLIT(lit_40);
DEFLIT(lit_97);
DEFLIT(lit_251);
DEFLIT(lit_20);
DEFLIT(lit_67);
DEFLIT(lit_23);
DEFLIT(lit_74);
DEFLIT(lit_61);
DEFLIT(lit_18);
DEFLIT(lit_276);
DEFLIT(lit_99);
DEFLIT(lit_226);
DEFLIT(lit_187);
DEFLIT(lit_309);
DEFLIT(lit_169);
DEFLIT(lit_158);
DEFLIT(lit_229);
DEFLIT(lit_141);
DEFLIT(lit_62);
DEFLIT(lit_232);
DEFLIT(lit_8);
DEFLIT(lit_270);
DEFLIT(lit_278);
DEFLIT(lit_287);
DEFLIT(lit_148);
DEFLIT(lit_60);
DEFLIT(lit_133);
DEFLIT(lit_300);
DEFLIT(lit_318);
DEFLIT(lit_53);
DEFLIT(lit_290);
DEFLIT(lit_320);
DEFLIT(lit_78);
DEFLIT(lit_14);
DEFLIT(lit_128);
DEFLIT(lit_196);
DEFLIT(lit_112);
DEFLIT(lit_265);
DEFLIT(lit_294);
DEFLIT(lit_32);
DEFLIT(lit_207);
DEFLIT(lit_228);
DEFLIT(lit_305);
DEFLIT(lit_202);
DEFLIT(lit_284);
DEFLIT(lit_298);
DEFLIT(lit_171);
DEFLIT(lit_178);
DEFLIT(lit_268);
DEFLIT(lit_255);
DEFLIT(lit_44);
DEFLIT(lit_167);
DEFLIT(lit_47);
DEFLIT(lit_267);
DEFLIT(lit_279);
DEFLIT(lit_96);
DEFLIT(lit_140);
DEFLIT(lit_201);
DEFLIT(lit_38);
DEFLIT(lit_257);
DEFLIT(lit_160);
DEFLIT(lit_107);
DEFLIT(lit_137);
DEFLIT(lit_114);
DEFLIT(lit_90);
DEFLIT(lit_240);
DEFLIT(lit_227);
DEFLIT(lit_24);
DEFLIT(lit_11);
DEFLIT(lit_324);
DEFLIT(lit_49);
DEFLIT(lit_132);
DEFLIT(lit_120);
DEFLIT(lit_188);
DEFLIT(lit_94);
DEFLIT(lit_129);
DEFLIT(lit_315);
DEFLIT(lit_312);
DEFLIT(lit_87);
DEFLIT(lit_176);
DEFLIT(lit_301);
DEFLIT(lit_93);
DEFLIT(lit_297);
DEFLIT(lit_280);
DEFLIT(lit_103);
DEFLIT(lit_256);
DEFLIT(lit_45);
DEFLIT(lit_39);
DEFLIT(lit_73);
DEFLIT(lit_199);
DEFLIT(lit_200);
DEFLIT(lit_191);
DEFLIT(lit_56);
DEFLIT(lit_41);
DEFLIT(lit_208);
DEFLIT(lit_198);
DEFLIT(lit_271);
DEFLIT(lit_250);
DEFLIT(lit_245);
DEFLIT(lit_239);
DEFLIT(lit_186);
DEFLIT(lit_289);
DEFLIT(lit_68);
DEFLIT(lit_104);
DEFLIT(lit_304);
DEFLIT(lit_86);
DEFLIT(lit_288);
DEFLIT(lit_321);
DEFLIT(lit_124);
DEFLIT(lit_180);
DEFLIT(lit_174);
DEFLIT(lit_105);
DEFLIT(lit_146);
DEFLIT(lit_4);
DEFLIT(lit_152);
DEFLIT(lit_80);
DEFLIT(lit_285);
DEFLIT(lit_134);
DEFLIT(lit_118);
DEFLIT(lit_5);
DEFLIT(lit_65);
DEFLIT(lit_283);
DEFLIT(lit_37);
DEFLIT(lit_25);
DEFLIT(lit_247);
DEFLIT(lit_291);
DEFLIT(lit_275);
DEFLIT(lit_123);
DEFLIT(lit_116);
DEFLIT(lit_111);
DEFLIT(lit_231);
DEFLIT(lit_9);
DEFLIT(lit_16);
DEFLIT(lit_244);
DEFLIT(lit_323);
DEFLIT(lit_98);
DEFLIT(lit_213);
DEFLIT(lit_319);
DEFLIT(lit_21);
DEFLIT(lit_272);
DEFLIT(lit_205);
DEFLIT(lit_184);
DEFLIT(lit_248);
DEFLIT(lit_172);
DEFLIT(lit_52);
DEFLIT(lit_92);
DEFLIT(lit_237);
DEFLIT(lit_144);
DEFLIT(lit_54);
DEFLIT(lit_293);
DEFLIT(lit_89);
DEFLIT(lit_76);
DEFLIT(lit_313);
DEFLIT(lit_88);
DEFLIT(lit_113);
DEFLIT(lit_155);
DEFLIT(lit_249);
DEFLIT(lit_154);
DEFLIT(lit_71);
DEFLIT(lit_29);
DEFLIT(lit_173);
DEFLIT(lit_266);
DEFLIT(lit_215);
DEFLIT(lit_125);
DEFLIT(lit_193);
DEFLIT(lit_109);
DEFLIT(lit_153);
DEFLIT(lit_206);
DEFLIT(lit_243);
DEFLIT(lit_210);
DEFLIT(lit_316);
DEFLIT(lit_274);
DEFLIT(lit_12);
DEFLIT(lit_30);
DEFLIT(lit_233);
DEFLIT(lit_216);
DEFLIT(lit_170);
DEFLIT(lit_238);
DEFLIT(lit_50);
DEFLIT(lit_277);
DEFLIT(lit_204);
DEFLIT(lit_263);
DEFLIT(lit_220);
DEFLIT(lit_185);
DEFLIT(lit_286);
DEFLIT(lit_192);
DEFLIT(lit_95);
DEFLIT(lit_262);
DEFLIT(lit_253);
DEFLIT(lit_28);
DEFLIT(lit_84);
DEFLIT(lit_292);
DEFLIT(lit_108);
DEFLIT(lit_162);
DEFLIT(lit_0);
DEFLIT(lit_234);
DEFLIT(lit_322);

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
extern P YPrevX (P);
extern P YPcat2 (P,P);
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
LOCFOR(fun_112);
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
FUNFOR(YPprop_offset);
FUNFOR(YPearly_dispatch);
FUNFOR(YPadd_met);
FUNFOR(YPadd_prop);
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
FUNFOR(YOallQ);
FUNFOR(YOall2Q);
FUNFOR(YOelt);
FUNFOR(YOfill);
FUNFOR(YOanyQ);
extern P YOpair (P,P);
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
LOCFOR(fun_335);
FUNFOR(YOmemQ);
LOCFOR(fun_337);
FUNFOR(YOdel_dups);
FUNFOR(YOopts_as_lst);
FUNFOR(YOlst);
extern P YOtlen (P);
extern P YOtelt (P,P);
extern P YOtelt_setter (P,P,P);
FUNFOR(YOtanyQ);
FUNFOR(YOtall2Q);
extern P YPto_tup (P);
LOCFOR(fun_into_347);
FUNFOR(YOtup);
LOCFOR(fun_into_349);
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
extern P YOnulQ (P);
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
  P retF5082;
  P T0,T1,T2,T3;
DEFCREGS();
  (P)YPdef_regs();
  T3 = (P)YPsp_reg();
  retF5082 = T3;
  T1 = (P)YPsp_reg();
  T2 = (P)YPiT((P)4,num_);
  T0 = (P)YPiA(T1,T2);
  (P)YPsp_reg_setter(T0);
  return retF5082;
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

P YPclass_type_cache_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)10);
  return T0;
}

INLINE P YPclass_type_cache(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)10);
  return T0;
}

P YPclass_id_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)11);
  return T0;
}

INLINE P YPclass_id(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)11);
  return T0;
}

P YPclass_row_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)12);
  return T0;
}

INLINE P YPclass_row(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)12);
  return T0;
}

P YPclass(P class_prop_len_,P class_name_,P class_parents_,P class_direct_props_,P class_ancestors_,P class_props_,P class_children_,P class_gens_,P class_mets_,P class_forward_,P class_type_cache_,P class_id_,P class_row_) {
  P classF5083;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLclassG),(P)13);
  classF5083 = T0;
  (P)YPprop_elt_setter(Ynil,classF5083,(P)13);
  (P)YPprop_elt_setter(class_row_,classF5083,(P)12);
  (P)YPprop_elt_setter(class_id_,classF5083,(P)11);
  (P)YPprop_elt_setter(class_type_cache_,classF5083,(P)10);
  (P)YPprop_elt_setter(class_forward_,classF5083,(P)9);
  (P)YPprop_elt_setter(class_mets_,classF5083,(P)8);
  (P)YPprop_elt_setter(class_gens_,classF5083,(P)7);
  (P)YPprop_elt_setter(class_children_,classF5083,(P)6);
  (P)YPprop_elt_setter(class_props_,classF5083,(P)5);
  (P)YPprop_elt_setter(class_ancestors_,classF5083,(P)4);
  (P)YPprop_elt_setter(class_direct_props_,classF5083,(P)3);
  (P)YPprop_elt_setter(class_parents_,classF5083,(P)2);
  (P)YPprop_elt_setter(class_name_,classF5083,(P)1);
  (P)YPprop_elt_setter(class_prop_len_,classF5083,(P)0);
  return classF5083;
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
  P classF5084;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLsingletonG),(P)1);
  classF5084 = T0;
  (P)YPprop_elt_setter(Ynil,classF5084,(P)1);
  (P)YPprop_elt_setter(type_object_,classF5084,(P)0);
  return classF5084;
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
  P classF5085;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLsubclassG),(P)1);
  classF5085 = T0;
  (P)YPprop_elt_setter(Ynil,classF5085,(P)1);
  (P)YPprop_elt_setter(type_class_,classF5085,(P)0);
  return classF5085;
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
  P classF5086;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLunionG),(P)1);
  classF5086 = T0;
  (P)YPprop_elt_setter(Ynil,classF5086,(P)1);
  (P)YPprop_elt_setter(union_elts_,classF5086,(P)0);
  return classF5086;
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
  P classF5087;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLproductG),(P)1);
  classF5087 = T0;
  (P)YPprop_elt_setter(Ynil,classF5087,(P)1);
  (P)YPprop_elt_setter(product_elts_,classF5087,(P)0);
  return classF5087;
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
  P classF5088;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLlstG),(P)2);
  classF5088 = T0;
  (P)YPprop_elt_setter(Ynil,classF5088,(P)2);
  (P)YPprop_elt_setter(tail_,classF5088,(P)1);
  (P)YPprop_elt_setter(head_,classF5088,(P)0);
  return classF5088;
}

P YPpair(P head_,P tail_) {
  P T0;
DEFCREGS();
  T0 = (P)YPlst(head_,tail_);
  return T0;
}

INLINE P YPemptyQ(P x_) {
  P T0,T1;
DEFCREGS();
  T1 = (P)YPeqQ(x_,VARREF(Ynil));
  T0 = (P)YPbb(T1);
  return T0;
}

P YPPlen(P x_) {
  P xF5092;
  P xF5091;
  P iF5090;
  P xF5089;
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
  xF5089 = x_;
  iF5090 = (P)0;
  LOOP_249: {
    P a249_0,a249_1;
    xF5091 = xF5089;
    T2 = (P)YPeqQ(xF5091,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = iF5090;
    } else {
      xF5092 = xF5089;
      T4 = (P)YPprop_elt(xF5092,(P)1);
      T5 = (P)YPiA(iF5090,(P)1);
      a249_0 = T4;
      a249_1 = T5;
      xF5089 = a249_0;
      iF5090 = a249_1;
      goto LOOP_249;
      T0 = T3;
    }
  }
  return T0;
}

P YPrevX(P c_) {
  P tF5097;
  P xF5096;
  P xF5095;
  P rF5094;
  P lF5093;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  lF5093 = c_;
  rF5094 = Ynil;
  LOOP_250: {
    P a250_0,a250_1;
    xF5095 = lF5093;
    T2 = (P)YPeqQ(xF5095,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = rF5094;
    } else {
      xF5096 = lF5093;
      T4 = (P)YPprop_elt(xF5096,(P)1);
      tF5097 = T4;
      (P)YPtail_setter(rF5094,lF5093);
      a250_0 = tF5097;
      a250_1 = lF5093;
      lF5093 = a250_0;
      rF5094 = a250_1;
      goto LOOP_250;
      T0 = T3;
    }
  }
  return T0;
}

P YPcat2(P x_,P y_) {
  P xF5107;
  P xF5106;
  P xF5105;
  P xF5104;
  P xF5103;
  P yF5102;
  P lxyF5101;
  P xF5100;
  P xF5099;
  P lxF5098;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
DEFCREGS();
  lxF5098 = VARREF(Ynil);
  xF5099 = x_;
  LOOP_251: {
    P a251_0,a251_1;
    xF5100 = xF5099;
    T2 = (P)YPeqQ(xF5100,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      lxyF5101 = lxF5098;
      yF5102 = y_;
      LOOP_252: {
        P a252_0,a252_1;
        xF5103 = yF5102;
        T5 = (P)YPeqQ(xF5103,VARREF(Ynil));
        T4 = (P)YPbb(T5);
        if (T5) {
          T6 = (P)YPrevX(lxyF5101);
          T3 = T6;
        } else {
          xF5104 = yF5102;
          T9 = (P)YPprop_elt(xF5104,(P)0);
          T8 = (P)YPpair(T9,lxyF5101);
          xF5105 = yF5102;
          T10 = (P)YPprop_elt(xF5105,(P)1);
          a252_0 = T8;
          a252_1 = T10;
          lxyF5101 = a252_0;
          yF5102 = a252_1;
          goto LOOP_252;
          T3 = T7;
        }
      }
      T0 = T3;
    } else {
      xF5106 = xF5099;
      T13 = (P)YPprop_elt(xF5106,(P)0);
      T12 = (P)YPpair(T13,lxF5098);
      xF5107 = xF5099;
      T14 = (P)YPprop_elt(xF5107,(P)1);
      a251_0 = T12;
      a251_1 = T14;
      lxF5098 = a251_0;
      xF5099 = a251_1;
      goto LOOP_251;
      T0 = T11;
    }
  }
  return T0;
}

P YPsig_names_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)0);
  return T0;
}

INLINE P YPsig_names(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)0);
  return T0;
}

P YPsig_specs_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPsig_specs(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPsig_naryQ_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPsig_naryQ(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)2);
  return T0;
}

P YPsig_arity_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)3);
  return T0;
}

INLINE P YPsig_arity(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)3);
  return T0;
}

P YPsig_val_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPsig_val(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPsig_unification_vars_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

INLINE P YPsig_unification_vars(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPsig(P sig_names_,P sig_specs_,P sig_naryQ_,P sig_arity_,P sig_val_,P sig_unification_vars_) {
  P classF5108;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLsigG),(P)6);
  classF5108 = T0;
  (P)YPprop_elt_setter(Ynil,classF5108,(P)6);
  (P)YPprop_elt_setter(sig_unification_vars_,classF5108,(P)5);
  (P)YPprop_elt_setter(sig_val_,classF5108,(P)4);
  (P)YPprop_elt_setter(sig_arity_,classF5108,(P)3);
  (P)YPprop_elt_setter(sig_naryQ_,classF5108,(P)2);
  (P)YPprop_elt_setter(sig_specs_,classF5108,(P)1);
  (P)YPprop_elt_setter(sig_names_,classF5108,(P)0);
  return classF5108;
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
  P classF5109;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLsrc_locG),(P)2);
  classF5109 = T0;
  (P)YPprop_elt_setter(Ynil,classF5109,(P)2);
  (P)YPprop_elt_setter(src_loc_file_,classF5109,(P)1);
  (P)YPprop_elt_setter(src_loc_line_,classF5109,(P)0);
  return classF5109;
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

P YPmet_name_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPmet_name(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPmet_sig_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPmet_sig(P x_) {
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

P YPmet_refs_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)4);
  return T0;
}

INLINE P YPmet_refs(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)4);
  return T0;
}

P YPmet_src_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

INLINE P YPmet_src(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPmet(P met_code_,P met_name_,P met_sig_,P met_env_,P met_refs_,P met_src_) {
  P classF5110;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLmetG),(P)6);
  classF5110 = T0;
  (P)YPprop_elt_setter(Ynil,classF5110,(P)6);
  (P)YPprop_elt_setter(met_src_,classF5110,(P)5);
  (P)YPprop_elt_setter(met_refs_,classF5110,(P)4);
  (P)YPprop_elt_setter(met_env_,classF5110,(P)3);
  (P)YPprop_elt_setter(met_sig_,classF5110,(P)2);
  (P)YPprop_elt_setter(met_name_,classF5110,(P)1);
  (P)YPprop_elt_setter(met_code_,classF5110,(P)0);
  return classF5110;
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
  P tF5113;
  P xF5112;
  P xF5111;
  P T0,T1,T2;
DEFCREGS();
  xF5111 = x_;
  T2 = (P)YPiGG(xF5111,(P)2);
  xF5112 = T2;
  tF5113 = t_;
  T1 = (P)YPiLL(xF5112,(P)2);
  T0 = (P)YPiv(T1,tF5113);
  return T0;
}

P YPuntag_into(P x_) {
  P tF5116;
  P xF5115;
  P xF5114;
  P T0,T1,T2;
DEFCREGS();
  xF5114 = x_;
  T2 = (P)YPiGG(xF5114,(P)2);
  xF5115 = T2;
  tF5116 = (P)0;
  T1 = (P)YPiLL(xF5115,(P)2);
  T0 = (P)YPiv(T1,tF5116);
  return T0;
}

P YPindirect_objectQ(P x_) {
  P xF5117;
  P T0,T1;
DEFCREGS();
  xF5117 = x_;
  T1 = (P)YPiB(xF5117,(P)3);
  T0 = (P)YPiE(T1,(P)0);
  return T0;
}

INLINE P YOadrQ(P x_) {
  P xF5118;
  P T0,T1,T2;
DEFCREGS();
  xF5118 = x_;
  T2 = (P)YPiB(xF5118,(P)3);
  T1 = (P)YPiE(T2,(P)0);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YPclass_of(P x_) {
  P tagF5120;
  P xF5119;
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
  xF5119 = x_;
  T5 = (P)YPiB(xF5119,(P)3);
  tagF5120 = T5;
  T2 = (P)YPiE(tagF5120,(P)0);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = (P)YPobject_class(x_);
    T0 = T3;
  } else {
    T4 = (P)YPelt(VARREF(YDdirect_object_class),tagF5120);
    T0 = T4;
  }
  return T0;
}

INLINE P YPib(P x_) {
  P tF5122;
  P xF5121;
  P T0,T1;
DEFCREGS();
  xF5121 = x_;
  tF5122 = (P)1;
  T1 = (P)YPiLL(xF5121,(P)2);
  T0 = (P)YPiv(T1,tF5122);
  return T0;
}

INLINE P YPfixnum(P x_) {
  P tF5125;
  P xF5124;
  P xF5123;
  P T0,T1;
DEFCREGS();
  xF5123 = x_;
  xF5124 = xF5123;
  tF5125 = (P)1;
  T1 = (P)YPiLL(xF5124,(P)2);
  T0 = (P)YPiv(T1,tF5125);
  return T0;
}

INLINE P YPiu(P x_) {
  P xF5126;
  P T0;
DEFCREGS();
  xF5126 = x_;
  T0 = (P)YPiGG(xF5126,(P)2);
  return T0;
}

INLINE P YOintQ(P x_) {
  P xF5127;
  P T0,T1,T2;
DEFCREGS();
  xF5127 = x_;
  T2 = (P)YPiB(xF5127,(P)3);
  T1 = (P)YPiE(T2,(P)1);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YPcb(P x_) {
  P tF5129;
  P xF5128;
  P T0,T1;
DEFCREGS();
  xF5128 = x_;
  tF5129 = (P)2;
  T1 = (P)YPiLL(xF5128,(P)2);
  T0 = (P)YPiv(T1,tF5129);
  return T0;
}

INLINE P YPchr(P x_) {
  P tF5132;
  P xF5131;
  P xF5130;
  P T0,T1;
DEFCREGS();
  xF5130 = x_;
  xF5131 = xF5130;
  tF5132 = (P)2;
  T1 = (P)YPiLL(xF5131,(P)2);
  T0 = (P)YPiv(T1,tF5132);
  return T0;
}

INLINE P YPcu(P x_) {
  P xF5133;
  P T0;
DEFCREGS();
  xF5133 = x_;
  T0 = (P)YPiGG(xF5133,(P)2);
  return T0;
}

INLINE P YPlb(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPtag_into(x_,(P)3);
  return T0;
}

INLINE P YPloc(P x_) {
  P xF5134;
  P T0;
DEFCREGS();
  xF5134 = x_;
  T0 = (P)YPtag_into(xF5134,(P)3);
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
  P c2F5139;
  P c1F5138;
  P tmpF5137;
  P iF5136;
  P lenF5135;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
DEFCREGS();
  T14 = (P)YPslen(s1_);
  lenF5135 = T14;
  T3 = (P)YPslen(s2_);
  T2 = (P)YPiE(lenF5135,T3);
  T1 = (P)YPbb(T2);
  if (T2) {
    iF5136 = (P)0;
    LOOP_253: {
      P a253_0;
      T13 = (P)YPiE(iF5136,lenF5135);
      T12 = (P)YPbb(T13);
      tmpF5137 = T12;
      if (tmpF5137 != YPfalse) {
        T4 = tmpF5137;
      } else {
        T11 = (P)YPselt(s1_,iF5136);
        c1F5138 = T11;
        T10 = (P)YPselt(s2_,iF5136);
        c2F5139 = T10;
        T7 = (P)YPcE(c1F5138,c2F5139);
        T6 = (P)YPbb(T7);
        if (T7) {
          T9 = (P)YPiA(iF5136,(P)1);
          a253_0 = T9;
          iF5136 = a253_0;
          goto LOOP_253;
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
  P xF5143;
  P xF5142;
  P parentF5141;
  P resF5140;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
DEFCREGS();
  resF5140 = Ynil;
  parentF5141 = parent_;
  LOOP_254: {
    P a254_0,a254_1;
    T2 = (P)YPeqQ(parentF5141,VARREF(YLanyG));
    T1 = (P)YPbb(T2);
    if (T2) {
      T4 = (P)YPpair(VARREF(YLanyG),resF5140);
      T3 = (P)YPrevX(T4);
      T0 = T3;
    } else {
      T6 = (P)YPpair(parentF5141,resF5140);
      xF5142 = parentF5141;
      T8 = (P)YPprop_elt(xF5142,(P)2);
      xF5143 = T8;
      T7 = (P)YPprop_elt(xF5143,(P)0);
      a254_0 = T6;
      a254_1 = T7;
      resF5140 = a254_0;
      parentF5141 = a254_1;
      goto LOOP_254;
      T0 = T5;
    }
  }
  return T0;
}

P YPdefine_parents(P class_,P parents_) {
  P xF5147;
  P xF5146;
  P xF5145;
  P xF5144;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
DEFCREGS();
  T0 = (P)YPpair(class_,VARREF(YTearly_classesT));
  VARSET(YTearly_classesT,T0);
  (P)YPclass_prop_len_setter(YPint((P)0),class_);
  (P)YPclass_forward_setter(YPfalse,class_);
  (P)YPclass_parents_setter(parents_,class_);
  xF5144 = parents_;
  T3 = (P)YPprop_elt(xF5144,(P)0);
  T2 = (P)YPcompute_ancestors(T3);
  T1 = (P)YPpair(class_,T2);
  (P)YPclass_ancestors_setter(T1,class_);
  xF5145 = parents_;
  T7 = (P)YPprop_elt(xF5145,(P)0);
  xF5146 = T7;
  T6 = (P)YPprop_elt(xF5146,(P)6);
  T5 = (P)YPpair(class_,T6);
  xF5147 = parents_;
  T8 = (P)YPprop_elt(xF5147,(P)0);
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
  P classF5148;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLsymG),(P)1);
  classF5148 = T0;
  (P)YPprop_elt_setter(Ynil,classF5148,(P)1);
  (P)YPprop_elt_setter(sym_nam_,classF5148,(P)0);
  return classF5148;
}

FUNCODEDEF(fun_112) {
  P name_;
  P xF5155;
  P xF5154;
  P symF5153;
  P xF5152;
  P symF5151;
  P xF5150;
  P sF5149;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(name_, 0);
  sF5149 = VARREF(YPsymbols);
  LOOP_255: {
    P a255_0;
    xF5150 = sF5149;
    T2 = (P)YPeqQ(xF5150,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T4 = (P)YPsym(name_);
      symF5151 = T4;
      T3 = (P)YPpair(symF5151,VARREF(YPsymbols));
      VARSET(YPsymbols,T3);
      T0 = symF5151;
    } else {
      xF5152 = sF5149;
      T10 = (P)YPprop_elt(xF5152,(P)0);
      symF5153 = T10;
      xF5154 = symF5153;
      T7 = (P)YPprop_elt(xF5154,(P)0);
      T6 = (P)YPstr_eqQ(T7,name_);
      if (T6 != YPfalse) {
        T5 = symF5153;
      } else {
        xF5155 = sF5149;
        T9 = (P)YPprop_elt(xF5155,(P)1);
        a255_0 = T9;
        sF5149 = a255_0;
        goto LOOP_255;
        T5 = T8;
      }
      T0 = T5;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yfab_sym) {
  P name_;
  P xF5162;
  P xF5161;
  P symF5160;
  P xF5159;
  P symF5158;
  P xF5157;
  P sF5156;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(name_, 0);
  sF5156 = VARREF(YPsymbols);
  LOOP_256: {
    P a256_0;
    xF5157 = sF5156;
    T2 = (P)YPeqQ(xF5157,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T4 = (P)YPsym(name_);
      symF5158 = T4;
      T3 = (P)YPpair(symF5158,VARREF(YPsymbols));
      VARSET(YPsymbols,T3);
      T0 = symF5158;
    } else {
      xF5159 = sF5156;
      T10 = (P)YPprop_elt(xF5159,(P)0);
      symF5160 = T10;
      xF5161 = symF5160;
      T7 = (P)YPprop_elt(xF5161,(P)0);
      T6 = (P)YPstr_eqQ(T7,name_);
      if (T6 != YPfalse) {
        T5 = symF5160;
      } else {
        xF5162 = sF5156;
        T9 = (P)YPprop_elt(xF5162,(P)1);
        a256_0 = T9;
        sF5156 = a256_0;
        goto LOOP_256;
        T5 = T8;
      }
      T0 = T5;
    }
  }
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
  P classF5163;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLfloG),(P)1);
  classF5163 = T0;
  (P)YPprop_elt_setter(flo_dat_,classF5163,(P)0);
  return classF5163;
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
  P classF5164;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLoptsG),(P)2);
  classF5164 = T0;
  (P)YPprop_elt_setter(Ynil,classF5164,(P)2);
  (P)YPprop_elt_setter(opts_count_,classF5164,(P)1);
  (P)YPprop_elt_setter(opts_location_,classF5164,(P)0);
  return classF5164;
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
  P classF5165;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLopts_tupG),(P)3);
  classF5165 = T0;
  (P)YPprop_elt_setter(Ynil,classF5165,(P)3);
  (P)YPprop_elt_setter(opts_tup_tup_,classF5165,(P)2);
  (P)YPprop_elt_setter(opts_tup_count_,classF5165,(P)1);
  (P)YPprop_elt_setter(opts_tup_location_,classF5165,(P)0);
  return classF5165;
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
  P classF5166;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLpropG),(P)5);
  classF5166 = T0;
  (P)YPprop_elt_setter(Ynil,classF5166,(P)5);
  (P)YPprop_elt_setter(prop_init_,classF5166,(P)4);
  (P)YPprop_elt_setter(prop_type_,classF5166,(P)3);
  (P)YPprop_elt_setter(prop_setter_,classF5166,(P)2);
  (P)YPprop_elt_setter(prop_getter_,classF5166,(P)1);
  (P)YPprop_elt_setter(prop_owner_,classF5166,(P)0);
  return classF5166;
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
  P classF5167;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLgen_cacheG),(P)5);
  classF5167 = T0;
  (P)YPprop_elt_setter(Ynil,classF5167,(P)5);
  (P)YPprop_elt_setter(gen_cache_count_,classF5167,(P)4);
  (P)YPprop_elt_setter(gen_cache_classes_,classF5167,(P)3);
  (P)YPprop_elt_setter(gen_cache_singletons_,classF5167,(P)2);
  (P)YPprop_elt_setter(gen_cache_arg_pos_,classF5167,(P)1);
  (P)YPprop_elt_setter(gen_cache_missableQ_,classF5167,(P)0);
  return classF5167;
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

P YPgen_name_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)1);
  return T0;
}

INLINE P YPgen_name(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)1);
  return T0;
}

P YPgen_sig_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)2);
  return T0;
}

INLINE P YPgen_sig(P x_) {
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

P YPgen_refs_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)5);
  return T0;
}

INLINE P YPgen_refs(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)5);
  return T0;
}

P YPgen_src_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt_setter(z_,x_,(P)6);
  return T0;
}

INLINE P YPgen_src(P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPprop_elt(x_,(P)6);
  return T0;
}

P YPgen(P gen_code_,P gen_name_,P gen_sig_,P gen_mets_,P fun_cache_,P gen_refs_,P gen_src_) {
  P classF5168;
  P T0;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLgenG),(P)7);
  classF5168 = T0;
  (P)YPprop_elt_setter(Ynil,classF5168,(P)7);
  (P)YPprop_elt_setter(gen_src_,classF5168,(P)6);
  (P)YPprop_elt_setter(gen_refs_,classF5168,(P)5);
  (P)YPprop_elt_setter(fun_cache_,classF5168,(P)4);
  (P)YPprop_elt_setter(gen_mets_,classF5168,(P)3);
  (P)YPprop_elt_setter(gen_sig_,classF5168,(P)2);
  (P)YPprop_elt_setter(gen_name_,classF5168,(P)1);
  (P)YPprop_elt_setter(gen_code_,classF5168,(P)0);
  return classF5168;
}

FUNCODEDEF(YPprop_offset) {
  P owner_,getter_;
  P xF5178;
  P xF5177;
  P propF5176;
  P xF5175;
  P xF5174;
  P xF5173;
  P xF5172;
  P propsF5171;
  P iF5170;
  P xF5169;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(owner_, 0);
  ARG(getter_, 1);
  iF5170 = (P)0;
  T13 = (P)YPobject_class(owner_);
  xF5169 = T13;
  T12 = (P)YPprop_elt(xF5169,(P)5);
  propsF5171 = T12;
  LOOP_257: {
    P a257_0,a257_1;
    xF5172 = propsF5171;
    T2 = (P)YPeqQ(xF5172,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      xF5173 = YPint((P)-1);
      xF5174 = xF5173;
      T3 = (P)YPiGG(xF5174,(P)2);
      T0 = T3;
    } else {
      xF5175 = propsF5171;
      T11 = (P)YPprop_elt(xF5175,(P)0);
      propF5176 = T11;
      xF5177 = propF5176;
      T7 = (P)YPprop_elt(xF5177,(P)1);
      T6 = (P)YPeqQ(T7,getter_);
      T5 = (P)YPbb(T6);
      if (T6) {
        T4 = iF5170;
      } else {
        T9 = (P)YPiA(iF5170,(P)1);
        xF5178 = propsF5171;
        T10 = (P)YPprop_elt(xF5178,(P)1);
        a257_0 = T9;
        a257_1 = T10;
        iF5170 = a257_0;
        propsF5171 = a257_1;
        goto LOOP_257;
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
  P genF5179;
  P T0,T1;
LINK_STACK();
  NARGS(args_, 0);
  T1 = (P)YPfun_reg();
  genF5179 = T1;
  T0 = (P)YPbreak(LITREF(lit_8));
  QRET(T0);
}

FUNCODEDEF(YPadd_met) {
  P gen_,met_;
  P xF5180;
  P T0,T1,T2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  xF5180 = gen_;
  T2 = (P)YPprop_elt(xF5180,(P)3);
  T1 = (P)YPpair(met_,T2);
  T0 = (P)YPgen_mets_setter(T1,gen_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPadd_prop) {
  P class_,prop_;
  P xF5181;
  P T0,T1,T2;
LINK_STACK();
  ARG(class_, 0);
  ARG(prop_, 1);
  xF5181 = class_;
  T2 = (P)YPprop_elt(xF5181,(P)3);
  T1 = (P)YPpair(prop_,T2);
  T0 = (P)YPclass_direct_props_setter(T1,class_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_172) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLboxG),VARREF(Ybox_value));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_173) {
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

FUNCODEDEF(fun_174) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_175) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsrc_locG),VARREF(Ysrc_loc_line));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_176) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_177) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsrc_locG),VARREF(Ysrc_loc_file));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_178) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_179) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Yhead));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_180) {
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

FUNCODEDEF(fun_181) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_182) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLlstG),VARREF(Ytail));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_183) {
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

FUNCODEDEF(fun_184) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_185) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsymG),VARREF(Ysym_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_186) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_187) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_prop_len));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_188) {
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

FUNCODEDEF(fun_189) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_190) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_191) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_192) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_parents));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_193) {
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

FUNCODEDEF(fun_194) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_195) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_direct_props));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_196) {
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

FUNCODEDEF(fun_197) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_198) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_ancestors));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_199) {
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

FUNCODEDEF(fun_200) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_201) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_props));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_202) {
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

FUNCODEDEF(fun_203) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_204) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_children));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_205) {
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

FUNCODEDEF(fun_206) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_207) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_gens));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_208) {
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

FUNCODEDEF(fun_209) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_210) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_mets));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_211) {
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

FUNCODEDEF(fun_212) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_213) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_forward));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_214) {
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

FUNCODEDEF(fun_215) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_216) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_type_cache));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_217) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_218) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_id));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_219) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)-1));
}

FUNCODEDEF(fun_220) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLclassG),VARREF(Yclass_row));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_221) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_222) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsingletonG),VARREF(Ytype_object));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_223) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_224) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsubclassG),VARREF(Ytype_class));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_225) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_226) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLunionG),VARREF(Yunion_elts));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_227) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_228) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLproductG),VARREF(Yproduct_elts));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_229) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_230) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_owner));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_231) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_232) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_getter));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_233) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_234) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_setter));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_235) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_236) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_type));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_237) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_238) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLpropG),VARREF(Yprop_init));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_239) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_240) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = fun_239;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_241) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_242) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_243) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_244) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_245) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_246) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_247) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_248) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_249) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_names));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_250) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_names));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_251) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_252) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_specs));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_253) {
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

FUNCODEDEF(fun_254) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_255) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_naryQ));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_256) {
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

FUNCODEDEF(fun_257) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_258) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_arity));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_259) {
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

FUNCODEDEF(fun_260) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_261) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_val));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_262) {
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

FUNCODEDEF(fun_263) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

FUNCODEDEF(fun_264) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLsigG),VARREF(Ysig_unification_vars));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_265) {
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

FUNCODEDEF(fun_266) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_267) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_code));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_268) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_269) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_name));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_270) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_name));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_271) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_272) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLfunG),VARREF(Yfun_sig));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_273) {
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

FUNCODEDEF(fun_274) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul_prop));
}

FUNCODEDEF(fun_275) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_env));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_276) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_277) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_refs));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_278) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_279) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_src));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_280) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLmetG),VARREF(Yfun_src));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_281) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_282) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_mets));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_283) {
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

FUNCODEDEF(fun_284) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynil));
}

FUNCODEDEF(fun_285) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Yfun_cache));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_286) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_287) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Ygen_refs));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_288) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_289) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Ygen_src));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_290) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLgenG),VARREF(Ygen_src));
  T0 = (P)YPprop_elt_setter(z_,x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_291) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YPfalse));
}

FUNCODEDEF(fun_292) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_location));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_293) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_294) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLoptsG),VARREF(Yopts_count));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_295) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_296) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YPprop_offset),VARREF(YLopts_tupG),VARREF(Yopts_tup_storage));
  T0 = (P)YPprop_elt(x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_297) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(YPcollect_direct_props) {
  P class_;
  P xF5186;
  P xF5185;
  P parentF5184;
  P xF5183;
  P xF5182;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(class_, 0);
  xF5182 = class_;
  T4 = (P)YPprop_elt(xF5182,(P)2);
  xF5183 = T4;
  T3 = (P)YPprop_elt(xF5183,(P)0);
  parentF5184 = T3;
  xF5185 = parentF5184;
  T1 = (P)YPprop_elt(xF5185,(P)5);
  xF5186 = class_;
  T2 = (P)YPprop_elt(xF5186,(P)3);
  T0 = (P)YPcat2(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPfinalize_propsX) {
  P name_,class_;
  P tF5191;
  P xF5190;
  P xF5189;
  P xF5188;
  P xF5187;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(name_, 0);
  ARG(class_, 1);
  (P)YPclass_name_setter(name_,class_);
  xF5187 = class_;
  T1 = (P)YPprop_elt(xF5187,(P)3);
  T0 = (P)YPrevX(T1);
  (P)YPclass_direct_props_setter(T0,class_);
  T2 = CALL1(1,VARREF(YPcollect_direct_props),class_);
  (P)YPclass_props_setter(T2,class_);
  xF5188 = class_;
  T6 = (P)YPprop_elt(xF5188,(P)5);
  T5 = (P)YPPlen(T6);
  xF5189 = T5;
  xF5190 = xF5189;
  tF5191 = (P)1;
  T4 = (P)YPiLL(xF5190,(P)2);
  T3 = (P)YPiv(T4,tF5191);
  (P)YPclass_prop_len_setter(T3,class_);
UNLINK_STACK();
  QRET(class_);
}

INLINE P YOhead(P x_) {
  P xF5192;
  P T0;
DEFCREGS();
  xF5192 = x_;
  T0 = (P)YPprop_elt(xF5192,(P)0);
  return T0;
}

P YOhead_setter(P z_,P x_) {
  P T0;
DEFCREGS();
  T0 = (P)YPhead_setter(z_,x_);
  return T0;
}

INLINE P YOtail(P x_) {
  P xF5193;
  P T0;
DEFCREGS();
  xF5193 = x_;
  T0 = (P)YPprop_elt(xF5193,(P)1);
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
  P xF5197;
  P xF5196;
  P xF5195;
  P xF5194;
  P T0,T1,T2,T3;
DEFCREGS();
  xF5194 = x_;
  xF5195 = xF5194;
  T2 = (P)YPiGG(xF5195,(P)2);
  xF5196 = y_;
  xF5197 = xF5196;
  T3 = (P)YPiGG(xF5197,(P)2);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOA(P x_,P y_) {
  P tF5204;
  P xF5203;
  P xF5202;
  P xF5201;
  P xF5200;
  P xF5199;
  P xF5198;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  xF5198 = x_;
  xF5199 = xF5198;
  T3 = (P)YPiGG(xF5199,(P)2);
  xF5200 = y_;
  xF5201 = xF5200;
  T4 = (P)YPiGG(xF5201,(P)2);
  T2 = (P)YPiA(T3,T4);
  xF5202 = T2;
  xF5203 = xF5202;
  tF5204 = (P)1;
  T1 = (P)YPiLL(xF5203,(P)2);
  T0 = (P)YPiv(T1,tF5204);
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

INLINE P YOemptyQ(P x_) {
  P xF5205;
  P T0,T1;
DEFCREGS();
  xF5205 = x_;
  T1 = (P)YPeqQ(xF5205,VARREF(Ynil));
  T0 = (P)YPbb(T1);
  return T0;
}

FUNCODEDEF(YOOemptyQ) {
  P x_;
  P xF5206;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF5206 = x_;
  T1 = (P)YPeqQ(xF5206,VARREF(Ynil));
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
  P tF5209;
  P xF5208;
  P xF5207;
  P T0,T1,T2;
DEFCREGS();
  T2 = (P)YPPlen(x_);
  xF5207 = T2;
  xF5208 = xF5207;
  tF5209 = (P)1;
  T1 = (P)YPiLL(xF5208,(P)2);
  T0 = (P)YPiv(T1,tF5209);
  return T0;
}

INLINE P YOoelt(P x_,P i_) {
  P xF5212;
  P xF5211;
  P xF5210;
  P T0,T1,T2,T3;
DEFCREGS();
  xF5210 = x_;
  T1 = (P)YPprop_elt(xF5210,(P)0);
  xF5211 = i_;
  xF5212 = xF5211;
  T3 = (P)YPiGG(xF5212,(P)2);
  T2 = (P)YPi_((P)0,T3);
  T0 = (P)YPloc_off(T1,T2);
  return T0;
}

INLINE P YOoelt_setter(P z_,P x_,P i_) {
  P xF5215;
  P xF5214;
  P xF5213;
  P T0,T1,T2,T3;
DEFCREGS();
  xF5213 = x_;
  T1 = (P)YPprop_elt(xF5213,(P)0);
  xF5214 = i_;
  xF5215 = xF5214;
  T3 = (P)YPiGG(xF5215,(P)2);
  T2 = (P)YPi_((P)0,T3);
  T0 = (P)YPloc_off_setter(z_,T1,T2);
  return T0;
}

INLINE P YOolen(P x_) {
  P xF5216;
  P T0;
DEFCREGS();
  xF5216 = x_;
  T0 = (P)YPprop_elt(xF5216,(P)1);
  return T0;
}

FUNCODEDEF(YOallQ) {
  P test_,c_;
  P xF5223;
  P xF5222;
  P xF5221;
  P xF5220;
  P xF5219;
  P xF5218;
  P pF5217;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  pF5217 = c_;
  LOOP_258: {
    P a258_0;
    xF5218 = pF5217;
    xF5219 = xF5218;
    T2 = (P)YPeqQ(xF5219,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPtrue;
    } else {
      xF5220 = pF5217;
      xF5221 = xF5220;
      T5 = (P)YPprop_elt(xF5221,(P)0);
      T4 = CALL1(0,test_,T5);
      if (T4 != YPfalse) {
        xF5222 = pF5217;
        xF5223 = xF5222;
        T7 = (P)YPprop_elt(xF5223,(P)1);
        a258_0 = T7;
        pF5217 = a258_0;
        goto LOOP_258;
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
  P xF5239;
  P xF5238;
  P xF5237;
  P xF5236;
  P xF5235;
  P xF5234;
  P xF5233;
  P xF5232;
  P xF5231;
  P xF5230;
  P xF5229;
  P xF5228;
  P xF5227;
  P xF5226;
  P pyF5225;
  P pxF5224;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  pxF5224 = x_;
  pyF5225 = y_;
  LOOP_259: {
    P a259_0,a259_1;
    xF5226 = pxF5224;
    xF5227 = xF5226;
    T2 = (P)YPeqQ(xF5227,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      xF5228 = pyF5225;
      xF5229 = xF5228;
      T4 = (P)YPeqQ(xF5229,VARREF(Ynil));
      T3 = (P)YPbb(T4);
      T0 = T3;
    } else {
      xF5230 = pyF5225;
      xF5231 = xF5230;
      T7 = (P)YPeqQ(xF5231,VARREF(Ynil));
      T6 = (P)YPbb(T7);
      if (T7) {
        T5 = YPfalse;
      } else {
        xF5232 = pxF5224;
        xF5233 = xF5232;
        T10 = (P)YPprop_elt(xF5233,(P)0);
        xF5234 = pyF5225;
        xF5235 = xF5234;
        T11 = (P)YPprop_elt(xF5235,(P)0);
        T9 = CALL2(0,test_,T10,T11);
        if (T9 != YPfalse) {
          xF5236 = pxF5224;
          xF5237 = xF5236;
          T13 = (P)YPprop_elt(xF5237,(P)1);
          xF5238 = pyF5225;
          xF5239 = xF5238;
          T14 = (P)YPprop_elt(xF5239,(P)1);
          a259_0 = T13;
          a259_1 = T14;
          pxF5224 = a259_0;
          pyF5225 = a259_1;
          goto LOOP_259;
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
  P xF5258;
  P xF5257;
  P tF5256;
  P xF5255;
  P xF5254;
  P xF5253;
  P xF5252;
  P xF5251;
  P xF5250;
  P yF5249;
  P xF5248;
  P xF5247;
  P xF5246;
  P yF5245;
  P xF5244;
  P yF5243;
  P xF5242;
  P xF5241;
  P countF5240;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  check_type(YPint((P)0),VARREF(YLfixnumG));
  countF5240 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF5241 = x_;
  LOOP_260: {
    P a260_0,a260_1;
    xF5242 = xF5241;
    yF5243 = Ynil;
    T2 = (P)YPeqQ(xF5242,yF5243);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = VARREF(Ynul);
    } else {
      xF5244 = countF5240;
      yF5245 = key_;
      T5 = (P)YPiE(xF5244,yF5245);
      T4 = (P)YPbb(T5);
      if (T5) {
        xF5246 = xF5241;
        xF5247 = xF5246;
        T6 = (P)YPprop_elt(xF5247,(P)0);
        T3 = T6;
      } else {
        xF5248 = countF5240;
        yF5249 = YPint((P)1);
        xF5250 = xF5248;
        xF5251 = xF5250;
        T11 = (P)YPiGG(xF5251,(P)2);
        xF5252 = yF5249;
        xF5253 = xF5252;
        T12 = (P)YPiGG(xF5253,(P)2);
        T10 = (P)YPiA(T11,T12);
        xF5254 = T10;
        xF5255 = xF5254;
        tF5256 = (P)1;
        T9 = (P)YPiLL(xF5255,(P)2);
        T8 = (P)YPiv(T9,tF5256);
        xF5257 = xF5241;
        xF5258 = xF5257;
        T13 = (P)YPprop_elt(xF5258,(P)1);
        a260_0 = T8;
        a260_1 = T13;
        countF5240 = a260_0;
        xF5241 = a260_1;
        goto LOOP_260;
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
  P xF5263;
  P xF5262;
  P xF5261;
  P xF5260;
  P pF5259;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(f_, 1);
  pF5259 = x_;
  LOOP_261: {
    P a261_0;
    xF5260 = pF5259;
    xF5261 = xF5260;
    T2 = (P)YPeqQ(xF5261,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = x_;
    } else {
      (P)YOhead_setter(f_,pF5259);
      xF5262 = pF5259;
      xF5263 = xF5262;
      T4 = (P)YPprop_elt(xF5263,(P)1);
      a261_0 = T4;
      pF5259 = a261_0;
      goto LOOP_261;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOanyQ) {
  P test_,c_;
  P xF5271;
  P xF5270;
  P tmpF5269;
  P xF5268;
  P xF5267;
  P xF5266;
  P xF5265;
  P pF5264;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  pF5264 = c_;
  LOOP_262: {
    P a262_0;
    xF5265 = pF5264;
    xF5266 = xF5265;
    T2 = (P)YPeqQ(xF5266,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPfalse;
    } else {
      xF5267 = pF5264;
      xF5268 = xF5267;
      T7 = (P)YPprop_elt(xF5268,(P)0);
      T6 = CALL1(0,test_,T7);
      tmpF5269 = T6;
      if (tmpF5269 != YPfalse) {
        T3 = tmpF5269;
      } else {
        xF5270 = pF5264;
        xF5271 = xF5270;
        T5 = (P)YPprop_elt(xF5271,(P)1);
        a262_0 = T5;
        pF5264 = a262_0;
        goto LOOP_262;
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
  P xF5279;
  P xF5278;
  P xF5277;
  P xF5276;
  P xF5275;
  P xF5274;
  P resF5273;
  P xF5272;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  xF5272 = x_;
  resF5273 = Ynil;
  LOOP_263: {
    P a263_0,a263_1;
    xF5274 = xF5272;
    xF5275 = xF5274;
    T2 = (P)YPeqQ(xF5275,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL1(1,VARREF(YOrevX),resF5273);
      T0 = T3;
    } else {
      xF5276 = xF5272;
      xF5277 = xF5276;
      T5 = (P)YPprop_elt(xF5277,(P)1);
      xF5278 = xF5272;
      xF5279 = xF5278;
      T8 = (P)YPprop_elt(xF5279,(P)0);
      T7 = CALL1(1,f_,T8);
      T6 = (P)YOpair(T7,resF5273);
      a263_0 = T5;
      a263_1 = T6;
      xF5272 = a263_0;
      resF5273 = a263_1;
      goto LOOP_263;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOpick) {
  P f_,x_;
  P xF5288;
  P xF5287;
  P hF5286;
  P xF5285;
  P xF5284;
  P xF5283;
  P xF5282;
  P resF5281;
  P xF5280;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  xF5280 = x_;
  resF5281 = Ynil;
  LOOP_264: {
    P a264_0,a264_1;
    xF5282 = xF5280;
    xF5283 = xF5282;
    T2 = (P)YPeqQ(xF5283,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL1(1,VARREF(YOrevX),resF5281);
      T0 = T3;
    } else {
      xF5284 = xF5280;
      xF5285 = xF5284;
      T9 = (P)YPprop_elt(xF5285,(P)0);
      hF5286 = T9;
      xF5287 = xF5280;
      xF5288 = xF5287;
      T5 = (P)YPprop_elt(xF5288,(P)1);
      T7 = CALL1(1,f_,hF5286);
      if (T7 != YPfalse) {
        T8 = (P)YOpair(hF5286,resF5281);
        T6 = T8;
      } else {
        T6 = resF5281;
      }
      a264_0 = T5;
      a264_1 = T6;
      xF5280 = a264_0;
      resF5281 = a264_1;
      goto LOOP_264;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOdo) {
  P f_,x_;
  P xF5295;
  P xF5294;
  P xF5293;
  P xF5292;
  P xF5291;
  P xF5290;
  P xF5289;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  xF5289 = x_;
  LOOP_265: {
    P a265_0;
    xF5290 = xF5289;
    xF5291 = xF5290;
    T2 = (P)YPeqQ(xF5291,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPfalse;
    } else {
      xF5292 = xF5289;
      xF5293 = xF5292;
      T3 = (P)YPprop_elt(xF5293,(P)0);
      CALL1(0,f_,T3);
      xF5294 = xF5289;
      xF5295 = xF5294;
      T5 = (P)YPprop_elt(xF5295,(P)1);
      a265_0 = T5;
      xF5289 = a265_0;
      goto LOOP_265;
      T0 = T4;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOalter) {
  P dst_,src_;
  P xF5308;
  P xF5307;
  P xF5306;
  P xF5305;
  P xF5304;
  P xF5303;
  P xF5302;
  P xF5301;
  P tmpF5300;
  P xF5299;
  P xF5298;
  P ssF5297;
  P dsF5296;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  dsF5296 = dst_;
  ssF5297 = src_;
  LOOP_266: {
    P a266_0,a266_1;
    xF5298 = dsF5296;
    xF5299 = xF5298;
    T5 = (P)YPeqQ(xF5299,VARREF(Ynil));
    T4 = (P)YPbb(T5);
    tmpF5300 = T4;
    if (tmpF5300 != YPfalse) {
      T1 = tmpF5300;
    } else {
      xF5301 = ssF5297;
      xF5302 = xF5301;
      T3 = (P)YPeqQ(xF5302,VARREF(Ynil));
      T2 = (P)YPbb(T3);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      xF5303 = ssF5297;
      xF5304 = xF5303;
      T6 = (P)YPprop_elt(xF5304,(P)0);
      (P)YOhead_setter(T6,dsF5296);
      xF5305 = dsF5296;
      xF5306 = xF5305;
      T8 = (P)YPprop_elt(xF5306,(P)1);
      xF5307 = ssF5297;
      xF5308 = xF5307;
      T9 = (P)YPprop_elt(xF5308,(P)1);
      a266_0 = T8;
      a266_1 = T9;
      dsF5296 = a266_0;
      ssF5297 = a266_1;
      goto LOOP_266;
      T0 = T7;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfab) {
  P x_,s_;
  P tF5325;
  P xF5324;
  P xF5323;
  P xF5322;
  P xF5321;
  P xF5320;
  P xF5319;
  P yF5318;
  P xF5317;
  P xF5316;
  P xF5315;
  P xF5314;
  P xF5313;
  P yF5312;
  P xF5311;
  P resF5310;
  P iF5309;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  check_type(s_,VARREF(YLfixnumG));
  iF5309 = s_;
  check_type(Ynil,VARREF(YLlstG));
  resF5310 = Ynil;
  LOOP_267: {
    P a267_0,a267_1;
    xF5311 = iF5309;
    yF5312 = YPint((P)0);
    xF5313 = xF5311;
    xF5314 = xF5313;
    T3 = (P)YPiGG(xF5314,(P)2);
    xF5315 = yF5312;
    xF5316 = xF5315;
    T4 = (P)YPiGG(xF5316,(P)2);
    T2 = (P)YPiL(T3,T4);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = resF5310;
    } else {
      xF5317 = iF5309;
      yF5318 = YPint((P)-1);
      xF5319 = xF5317;
      xF5320 = xF5319;
      T9 = (P)YPiGG(xF5320,(P)2);
      xF5321 = yF5318;
      xF5322 = xF5321;
      T10 = (P)YPiGG(xF5322,(P)2);
      T8 = (P)YPiA(T9,T10);
      xF5323 = T8;
      xF5324 = xF5323;
      tF5325 = (P)1;
      T7 = (P)YPiLL(xF5324,(P)2);
      T6 = (P)YPiv(T7,tF5325);
      T11 = (P)YOpair(VARREF(Ynul),resF5310);
      a267_0 = T6;
      a267_1 = T11;
      iF5309 = a267_0;
      resF5310 = a267_1;
      goto LOOP_267;
      T0 = T5;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOfold) {
  P combine_,init_,c_;
  P xF5333;
  P xF5332;
  P xF5331;
  P xF5330;
  P xF5329;
  P xF5328;
  P cF5327;
  P resF5326;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
  resF5326 = init_;
  cF5327 = c_;
  LOOP_268: {
    P a268_0,a268_1;
    xF5328 = cF5327;
    xF5329 = xF5328;
    T2 = (P)YPeqQ(xF5329,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = resF5326;
    } else {
      xF5330 = cF5327;
      xF5331 = xF5330;
      T5 = (P)YPprop_elt(xF5331,(P)0);
      T4 = CALL2(0,combine_,resF5326,T5);
      xF5332 = cF5327;
      xF5333 = xF5332;
      T6 = (P)YPprop_elt(xF5333,(P)1);
      a268_0 = T4;
      a268_1 = T6;
      resF5326 = a268_0;
      cF5327 = a268_1;
      goto LOOP_268;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOrev) {
  P x_;
  P xF5341;
  P xF5340;
  P xF5339;
  P xF5338;
  P xF5337;
  P xF5336;
  P rF5335;
  P lF5334;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  lF5334 = x_;
  rF5335 = Ynil;
  LOOP_269: {
    P a269_0,a269_1;
    xF5336 = lF5334;
    xF5337 = xF5336;
    T2 = (P)YPeqQ(xF5337,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = rF5335;
    } else {
      xF5338 = lF5334;
      xF5339 = xF5338;
      T4 = (P)YPprop_elt(xF5339,(P)1);
      xF5340 = lF5334;
      xF5341 = xF5340;
      T6 = (P)YPprop_elt(xF5341,(P)0);
      T5 = (P)YOpair(T6,rF5335);
      a269_0 = T4;
      a269_1 = T5;
      lF5334 = a269_0;
      rF5335 = a269_1;
      goto LOOP_269;
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
  P tF5358;
  P xF5357;
  P xF5356;
  P xF5355;
  P xF5354;
  P xF5353;
  P xF5352;
  P yF5351;
  P xF5350;
  P xF5349;
  P xF5348;
  P xF5347;
  P xF5346;
  P xF5345;
  P xF5344;
  P iF5343;
  P cF5342;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  cF5342 = c_;
  iF5343 = YPint((P)0);
  LOOP_270: {
    P a270_0,a270_1;
    xF5344 = cF5342;
    xF5345 = xF5344;
    T2 = (P)YPeqQ(xF5345,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = VARREF(Ynul);
    } else {
      xF5346 = cF5342;
      xF5347 = xF5346;
      T5 = (P)YPprop_elt(xF5347,(P)0);
      T4 = CALL1(1,f_,T5);
      if (T4 != YPfalse) {
        T3 = iF5343;
      } else {
        xF5348 = cF5342;
        xF5349 = xF5348;
        T7 = (P)YPprop_elt(xF5349,(P)1);
        xF5350 = iF5343;
        yF5351 = YPint((P)1);
        xF5352 = xF5350;
        xF5353 = xF5352;
        T11 = (P)YPiGG(xF5353,(P)2);
        xF5354 = yF5351;
        xF5355 = xF5354;
        T12 = (P)YPiGG(xF5355,(P)2);
        T10 = (P)YPiA(T11,T12);
        xF5356 = T10;
        xF5357 = xF5356;
        tF5358 = (P)1;
        T9 = (P)YPiLL(xF5357,(P)2);
        T8 = (P)YPiv(T9,tF5358);
        a270_0 = T7;
        a270_1 = T8;
        cF5342 = a270_0;
        iF5343 = a270_1;
        goto LOOP_270;
        T3 = T6;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_335) {
  P y_;
  P yF5360;
  P xF5359;
  P T0,T1;
LINK_STACK();
  ARG(y_, 0);
  xF5359 = FREEREF(0);
  yF5360 = y_;
  T1 = (P)YPeqQ(xF5359,yF5360);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOmemQ) {
  P c_,x_;
  P yF5362;
  P xF5361;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T4 = FUNFAB(fun_335,1,x_);
  T3 = CALL2(1,VARREF(YOfind),T4,c_);
  xF5361 = T3;
  yF5362 = VARREF(Ynul);
  T2 = (P)YPeqQ(xF5361,yF5362);
  T1 = (P)YPbb(T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_337) {
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
  T2 = fun_337;
  T1 = CALL3(1,VARREF(YOfold),T2,Ynil,x_);
  T0 = CALL1(1,VARREF(YOrevX),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOopts_as_lst) {
  P x_;
  P xF5391;
  P xF5390;
  P xF5389;
  P iF5388;
  P xF5387;
  P tF5386;
  P xF5385;
  P xF5384;
  P xF5383;
  P xF5382;
  P xF5381;
  P xF5380;
  P yF5379;
  P xF5378;
  P yF5377;
  P xF5376;
  P lF5375;
  P iF5374;
  P tF5373;
  P xF5372;
  P xF5371;
  P xF5370;
  P xF5369;
  P xF5368;
  P xF5367;
  P yF5366;
  P xF5365;
  P xF5364;
  P xF5363;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(x_, 0);
  xF5363 = x_;
  xF5364 = xF5363;
  T19 = (P)YPprop_elt(xF5364,(P)1);
  xF5365 = T19;
  yF5366 = YPint((P)-1);
  xF5367 = xF5365;
  xF5368 = xF5367;
  T17 = (P)YPiGG(xF5368,(P)2);
  xF5369 = yF5366;
  xF5370 = xF5369;
  T18 = (P)YPiGG(xF5370,(P)2);
  T16 = (P)YPiA(T17,T18);
  xF5371 = T16;
  xF5372 = xF5371;
  tF5373 = (P)1;
  T15 = (P)YPiLL(xF5372,(P)2);
  T14 = (P)YPiv(T15,tF5373);
  iF5374 = T14;
  lF5375 = Ynil;
  LOOP_271: {
    P a271_0,a271_1;
    xF5376 = iF5374;
    yF5377 = YPint((P)-1);
    T2 = (P)YPeqQ(xF5376,yF5377);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = lF5375;
    } else {
      xF5378 = iF5374;
      yF5379 = YPint((P)-1);
      xF5380 = xF5378;
      xF5381 = xF5380;
      T7 = (P)YPiGG(xF5381,(P)2);
      xF5382 = yF5379;
      xF5383 = xF5382;
      T8 = (P)YPiGG(xF5383,(P)2);
      T6 = (P)YPiA(T7,T8);
      xF5384 = T6;
      xF5385 = xF5384;
      tF5386 = (P)1;
      T5 = (P)YPiLL(xF5385,(P)2);
      T4 = (P)YPiv(T5,tF5386);
      xF5387 = x_;
      iF5388 = iF5374;
      xF5389 = xF5387;
      T11 = (P)YPprop_elt(xF5389,(P)0);
      xF5390 = iF5388;
      xF5391 = xF5390;
      T13 = (P)YPiGG(xF5391,(P)2);
      T12 = (P)YPi_((P)0,T13);
      T10 = (P)YPloc_off(T11,T12);
      T9 = (P)YOpair(T10,lF5375);
      a271_0 = T4;
      a271_1 = T9;
      iF5374 = a271_0;
      lF5375 = a271_1;
      goto LOOP_271;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YOlst) {
  P x_;
  P xF5420;
  P xF5419;
  P xF5418;
  P iF5417;
  P xF5416;
  P tF5415;
  P xF5414;
  P xF5413;
  P xF5412;
  P xF5411;
  P xF5410;
  P xF5409;
  P yF5408;
  P xF5407;
  P yF5406;
  P xF5405;
  P lF5404;
  P iF5403;
  P tF5402;
  P xF5401;
  P xF5400;
  P xF5399;
  P xF5398;
  P xF5397;
  P xF5396;
  P yF5395;
  P xF5394;
  P xF5393;
  P xF5392;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  NARGS(x_, 0);
  xF5392 = x_;
  xF5393 = xF5392;
  T19 = (P)YPprop_elt(xF5393,(P)1);
  xF5394 = T19;
  yF5395 = YPint((P)-1);
  xF5396 = xF5394;
  xF5397 = xF5396;
  T17 = (P)YPiGG(xF5397,(P)2);
  xF5398 = yF5395;
  xF5399 = xF5398;
  T18 = (P)YPiGG(xF5399,(P)2);
  T16 = (P)YPiA(T17,T18);
  xF5400 = T16;
  xF5401 = xF5400;
  tF5402 = (P)1;
  T15 = (P)YPiLL(xF5401,(P)2);
  T14 = (P)YPiv(T15,tF5402);
  iF5403 = T14;
  lF5404 = Ynil;
  LOOP_272: {
    P a272_0,a272_1;
    xF5405 = iF5403;
    yF5406 = YPint((P)-1);
    T2 = (P)YPeqQ(xF5405,yF5406);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = lF5404;
    } else {
      xF5407 = iF5403;
      yF5408 = YPint((P)-1);
      xF5409 = xF5407;
      xF5410 = xF5409;
      T7 = (P)YPiGG(xF5410,(P)2);
      xF5411 = yF5408;
      xF5412 = xF5411;
      T8 = (P)YPiGG(xF5412,(P)2);
      T6 = (P)YPiA(T7,T8);
      xF5413 = T6;
      xF5414 = xF5413;
      tF5415 = (P)1;
      T5 = (P)YPiLL(xF5414,(P)2);
      T4 = (P)YPiv(T5,tF5415);
      xF5416 = x_;
      iF5417 = iF5403;
      xF5418 = xF5416;
      T11 = (P)YPprop_elt(xF5418,(P)0);
      xF5419 = iF5417;
      xF5420 = xF5419;
      T13 = (P)YPiGG(xF5420,(P)2);
      T12 = (P)YPi_((P)0,T13);
      T10 = (P)YPloc_off(T11,T12);
      T9 = (P)YOpair(T10,lF5404);
      a272_0 = T4;
      a272_1 = T9;
      iF5403 = a272_0;
      lF5404 = a272_1;
      goto LOOP_272;
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

INLINE P YOtlen(P x_) {
  P tF5423;
  P xF5422;
  P xF5421;
  P T0,T1,T2;
DEFCREGS();
  T2 = (P)YPtlen(x_);
  xF5421 = T2;
  xF5422 = xF5421;
  tF5423 = (P)1;
  T1 = (P)YPiLL(xF5422,(P)2);
  T0 = (P)YPiv(T1,tF5423);
  return T0;
}

INLINE P YOtelt(P x_,P i_) {
  P xF5425;
  P xF5424;
  P T0,T1;
DEFCREGS();
  xF5424 = i_;
  xF5425 = xF5424;
  T1 = (P)YPiGG(xF5425,(P)2);
  T0 = (P)YPtelt(x_,T1);
  return T0;
}

INLINE P YOtelt_setter(P z_,P x_,P i_) {
  P xF5427;
  P xF5426;
  P T0,T1;
DEFCREGS();
  xF5426 = i_;
  xF5427 = xF5426;
  T1 = (P)YPiGG(xF5427,(P)2);
  T0 = (P)YPtelt_setter(z_,x_,T1);
  return T0;
}

FUNCODEDEF(YOtanyQ) {
  P test_,c_;
  P tF5461;
  P xF5460;
  P xF5459;
  P xF5458;
  P xF5457;
  P xF5456;
  P xF5455;
  P yF5454;
  P xF5453;
  P tmpF5452;
  P xF5451;
  P xF5450;
  P iF5449;
  P xF5448;
  P xF5447;
  P xF5446;
  P xF5445;
  P xF5444;
  P yF5443;
  P xF5442;
  P iF5441;
  P tF5440;
  P xF5439;
  P xF5438;
  P xF5437;
  P xF5436;
  P xF5435;
  P xF5434;
  P yF5433;
  P xF5432;
  P tF5431;
  P xF5430;
  P xF5429;
  P xF5428;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  xF5428 = c_;
  T22 = (P)YPtlen(xF5428);
  xF5429 = T22;
  xF5430 = xF5429;
  tF5431 = (P)1;
  T21 = (P)YPiLL(xF5430,(P)2);
  T20 = (P)YPiv(T21,tF5431);
  xF5432 = T20;
  yF5433 = YPint((P)-1);
  xF5434 = xF5432;
  xF5435 = xF5434;
  T18 = (P)YPiGG(xF5435,(P)2);
  xF5436 = yF5433;
  xF5437 = xF5436;
  T19 = (P)YPiGG(xF5437,(P)2);
  T17 = (P)YPiA(T18,T19);
  xF5438 = T17;
  xF5439 = xF5438;
  tF5440 = (P)1;
  T16 = (P)YPiLL(xF5439,(P)2);
  T15 = (P)YPiv(T16,tF5440);
  iF5441 = T15;
  LOOP_273: {
    P a273_0;
    xF5442 = iF5441;
    yF5443 = YPint((P)0);
    xF5444 = xF5442;
    xF5445 = xF5444;
    T3 = (P)YPiGG(xF5445,(P)2);
    xF5446 = yF5443;
    xF5447 = xF5446;
    T4 = (P)YPiGG(xF5447,(P)2);
    T2 = (P)YPiL(T3,T4);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPfalse;
    } else {
      xF5448 = c_;
      iF5449 = iF5441;
      xF5450 = iF5449;
      xF5451 = xF5450;
      T14 = (P)YPiGG(xF5451,(P)2);
      T13 = (P)YPtelt(xF5448,T14);
      T12 = CALL1(0,test_,T13);
      tmpF5452 = T12;
      if (tmpF5452 != YPfalse) {
        T5 = tmpF5452;
      } else {
        xF5453 = iF5441;
        yF5454 = YPint((P)-1);
        xF5455 = xF5453;
        xF5456 = xF5455;
        T10 = (P)YPiGG(xF5456,(P)2);
        xF5457 = yF5454;
        xF5458 = xF5457;
        T11 = (P)YPiGG(xF5458,(P)2);
        T9 = (P)YPiA(T10,T11);
        xF5459 = T9;
        xF5460 = xF5459;
        tF5461 = (P)1;
        T8 = (P)YPiLL(xF5460,(P)2);
        T7 = (P)YPiv(T8,tF5461);
        a273_0 = T7;
        iF5441 = a273_0;
        goto LOOP_273;
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
  P tF5509;
  P xF5508;
  P xF5507;
  P xF5506;
  P xF5505;
  P xF5504;
  P xF5503;
  P yF5502;
  P xF5501;
  P xF5500;
  P xF5499;
  P iF5498;
  P xF5497;
  P xF5496;
  P xF5495;
  P iF5494;
  P xF5493;
  P tmpF5492;
  P xF5491;
  P xF5490;
  P xF5489;
  P xF5488;
  P yF5487;
  P xF5486;
  P iF5485;
  P tF5484;
  P xF5483;
  P xF5482;
  P xF5481;
  P xF5480;
  P xF5479;
  P xF5478;
  P yF5477;
  P xF5476;
  P tF5475;
  P xF5474;
  P xF5473;
  P xF5472;
  P yF5471;
  P xF5470;
  P tF5469;
  P xF5468;
  P xF5467;
  P xF5466;
  P tF5465;
  P xF5464;
  P xF5463;
  P xF5462;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(test_, 0);
  ARG(c1_, 1);
  ARG(c2_, 2);
  xF5462 = c1_;
  T5 = (P)YPtlen(xF5462);
  xF5463 = T5;
  xF5464 = xF5463;
  tF5465 = (P)1;
  T4 = (P)YPiLL(xF5464,(P)2);
  T3 = (P)YPiv(T4,tF5465);
  xF5470 = T3;
  xF5466 = c2_;
  T8 = (P)YPtlen(xF5466);
  xF5467 = T8;
  xF5468 = xF5467;
  tF5469 = (P)1;
  T7 = (P)YPiLL(xF5468,(P)2);
  T6 = (P)YPiv(T7,tF5469);
  yF5471 = T6;
  T2 = (P)YPeqQ(xF5470,yF5471);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF5472 = c1_;
    T33 = (P)YPtlen(xF5472);
    xF5473 = T33;
    xF5474 = xF5473;
    tF5475 = (P)1;
    T32 = (P)YPiLL(xF5474,(P)2);
    T31 = (P)YPiv(T32,tF5475);
    xF5476 = T31;
    yF5477 = YPint((P)-1);
    xF5478 = xF5476;
    xF5479 = xF5478;
    T29 = (P)YPiGG(xF5479,(P)2);
    xF5480 = yF5477;
    xF5481 = xF5480;
    T30 = (P)YPiGG(xF5481,(P)2);
    T28 = (P)YPiA(T29,T30);
    xF5482 = T28;
    xF5483 = xF5482;
    tF5484 = (P)1;
    T27 = (P)YPiLL(xF5483,(P)2);
    T26 = (P)YPiv(T27,tF5484);
    iF5485 = T26;
    LOOP_274: {
      P a274_0;
      xF5486 = iF5485;
      yF5487 = YPint((P)0);
      xF5488 = xF5486;
      xF5489 = xF5488;
      T24 = (P)YPiGG(xF5489,(P)2);
      xF5490 = yF5487;
      xF5491 = xF5490;
      T25 = (P)YPiGG(xF5491,(P)2);
      T23 = (P)YPiL(T24,T25);
      T22 = (P)YPbb(T23);
      tmpF5492 = T22;
      if (tmpF5492 != YPfalse) {
        T9 = tmpF5492;
      } else {
        xF5493 = c1_;
        iF5494 = iF5485;
        xF5495 = iF5494;
        xF5496 = xF5495;
        T13 = (P)YPiGG(xF5496,(P)2);
        T12 = (P)YPtelt(xF5493,T13);
        xF5497 = c2_;
        iF5498 = iF5485;
        xF5499 = iF5498;
        xF5500 = xF5499;
        T15 = (P)YPiGG(xF5500,(P)2);
        T14 = (P)YPtelt(xF5497,T15);
        T11 = CALL2(1,test_,T12,T14);
        if (T11 != YPfalse) {
          xF5501 = iF5485;
          yF5502 = YPint((P)-1);
          xF5503 = xF5501;
          xF5504 = xF5503;
          T20 = (P)YPiGG(xF5504,(P)2);
          xF5505 = yF5502;
          xF5506 = xF5505;
          T21 = (P)YPiGG(xF5506,(P)2);
          T19 = (P)YPiA(T20,T21);
          xF5507 = T19;
          xF5508 = xF5507;
          tF5509 = (P)1;
          T18 = (P)YPiLL(xF5508,(P)2);
          T17 = (P)YPiv(T18,tF5509);
          a274_0 = T17;
          iF5485 = a274_0;
          goto LOOP_274;
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
  P tF5569;
  P xF5568;
  P xF5567;
  P xF5566;
  P xF5565;
  P xF5564;
  P xF5563;
  P yF5562;
  P xF5561;
  P xF5560;
  P xF5559;
  P iF5558;
  P xF5557;
  P zF5556;
  P xF5555;
  P xF5554;
  P xF5553;
  P iF5552;
  P xF5551;
  P xF5550;
  P yF5549;
  P xF5548;
  P kF5547;
  P tF5546;
  P xF5545;
  P xF5544;
  P xF5543;
  P xF5542;
  P xF5541;
  P xF5540;
  P yF5539;
  P xF5538;
  P xF5537;
  P xF5536;
  P iF5535;
  P xF5534;
  P zF5533;
  P xF5532;
  P xF5531;
  P xF5530;
  P iF5529;
  P xF5528;
  P xF5527;
  P xF5526;
  P iF5525;
  P xF5524;
  P zF5523;
  P xF5522;
  P xF5521;
  P xF5520;
  P iF5519;
  P xF5518;
  P yF5517;
  P xF5516;
  P tF5515;
  P xF5514;
  P xF5513;
  P lF5512;
  P xF5511;
  P xF5510;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
DEFCREGS();
  xF5510 = args_;
  xF5511 = xF5510;
  T38 = (P)YPprop_elt(xF5511,(P)1);
  lF5512 = T38;
  xF5513 = lF5512;
  xF5514 = xF5513;
  T37 = (P)YPiGG(xF5514,(P)2);
  T36 = (P)YPtup(T37,VARREF(Ynul));
  tF5515 = T36;
  xF5516 = lF5512;
  yF5517 = YPint((P)2);
  T1 = (P)YPiE(xF5516,yF5517);
  T0 = (P)YPbb(T1);
  if (T1) {
    xF5518 = args_;
    iF5519 = YPint((P)0);
    xF5520 = xF5518;
    T5 = (P)YPprop_elt(xF5520,(P)0);
    xF5521 = iF5519;
    xF5522 = xF5521;
    T7 = (P)YPiGG(xF5522,(P)2);
    T6 = (P)YPi_((P)0,T7);
    T4 = (P)YPloc_off(T5,T6);
    zF5523 = T4;
    xF5524 = tF5515;
    iF5525 = YPint((P)0);
    xF5526 = iF5525;
    xF5527 = xF5526;
    T3 = (P)YPiGG(xF5527,(P)2);
    T2 = (P)YPtelt_setter(zF5523,xF5524,T3);
    xF5528 = args_;
    iF5529 = YPint((P)1);
    xF5530 = xF5528;
    T11 = (P)YPprop_elt(xF5530,(P)0);
    xF5531 = iF5529;
    xF5532 = xF5531;
    T13 = (P)YPiGG(xF5532,(P)2);
    T12 = (P)YPi_((P)0,T13);
    T10 = (P)YPloc_off(T11,T12);
    zF5533 = T10;
    xF5534 = tF5515;
    iF5535 = YPint((P)1);
    xF5536 = iF5535;
    xF5537 = xF5536;
    T9 = (P)YPiGG(xF5537,(P)2);
    T8 = (P)YPtelt_setter(zF5533,xF5534,T9);
  } else {
    xF5538 = lF5512;
    yF5539 = YPint((P)-1);
    xF5540 = xF5538;
    xF5541 = xF5540;
    T34 = (P)YPiGG(xF5541,(P)2);
    xF5542 = yF5539;
    xF5543 = xF5542;
    T35 = (P)YPiGG(xF5543,(P)2);
    T33 = (P)YPiA(T34,T35);
    xF5544 = T33;
    xF5545 = xF5544;
    tF5546 = (P)1;
    T32 = (P)YPiLL(xF5545,(P)2);
    T31 = (P)YPiv(T32,tF5546);
    kF5547 = T31;
    LOOP_275: {
      P a275_0;
      xF5548 = kF5547;
      yF5549 = YPint((P)-1);
      T18 = (P)YPiE(xF5548,yF5549);
      T17 = (P)YPbb(T18);
      xF5550 = T17;
      T16 = (P)YPeqQ(xF5550,YPfalse);
      T15 = (P)YPbb(T16);
      if (T16) {
        xF5551 = args_;
        iF5552 = kF5547;
        xF5553 = xF5551;
        T22 = (P)YPprop_elt(xF5553,(P)0);
        xF5554 = iF5552;
        xF5555 = xF5554;
        T24 = (P)YPiGG(xF5555,(P)2);
        T23 = (P)YPi_((P)0,T24);
        T21 = (P)YPloc_off(T22,T23);
        zF5556 = T21;
        xF5557 = tF5515;
        iF5558 = kF5547;
        xF5559 = iF5558;
        xF5560 = xF5559;
        T20 = (P)YPiGG(xF5560,(P)2);
        T19 = (P)YPtelt_setter(zF5556,xF5557,T20);
        xF5561 = kF5547;
        yF5562 = YPint((P)-1);
        xF5563 = xF5561;
        xF5564 = xF5563;
        T29 = (P)YPiGG(xF5564,(P)2);
        xF5565 = yF5562;
        xF5566 = xF5565;
        T30 = (P)YPiGG(xF5566,(P)2);
        T28 = (P)YPiA(T29,T30);
        xF5567 = T28;
        xF5568 = xF5567;
        tF5569 = (P)1;
        T27 = (P)YPiLL(xF5568,(P)2);
        T26 = (P)YPiv(T27,tF5569);
        a275_0 = T26;
        kF5547 = a275_0;
        goto LOOP_275;
        T14 = T25;
      } else {
        T14 = YPfalse;
      }
    }
  }
  return tF5515;
}

FUNCODEDEF(fun_into_347) {
  P k_;
  P tF5591;
  P xF5590;
  P xF5589;
  P xF5588;
  P xF5587;
  P xF5586;
  P xF5585;
  P yF5584;
  P xF5583;
  P xF5582;
  P xF5581;
  P iF5580;
  P xF5579;
  P zF5578;
  P xF5577;
  P xF5576;
  P xF5575;
  P iF5574;
  P xF5573;
  P xF5572;
  P yF5571;
  P xF5570;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(k_, 0);
  xF5570 = k_;
  yF5571 = YPint((P)-1);
  T4 = (P)YPiE(xF5570,yF5571);
  T3 = (P)YPbb(T4);
  xF5572 = T3;
  T2 = (P)YPeqQ(xF5572,YPfalse);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF5573 = FREEREF(0);
    iF5574 = k_;
    xF5575 = xF5573;
    T8 = (P)YPprop_elt(xF5575,(P)0);
    xF5576 = iF5574;
    xF5577 = xF5576;
    T10 = (P)YPiGG(xF5577,(P)2);
    T9 = (P)YPi_((P)0,T10);
    T7 = (P)YPloc_off(T8,T9);
    zF5578 = T7;
    xF5579 = FREEREF(1);
    iF5580 = k_;
    xF5581 = iF5580;
    xF5582 = xF5581;
    T6 = (P)YPiGG(xF5582,(P)2);
    T5 = (P)YPtelt_setter(zF5578,xF5579,T6);
    xF5583 = k_;
    yF5584 = YPint((P)-1);
    xF5585 = xF5583;
    xF5586 = xF5585;
    T15 = (P)YPiGG(xF5586,(P)2);
    xF5587 = yF5584;
    xF5588 = xF5587;
    T16 = (P)YPiGG(xF5588,(P)2);
    T14 = (P)YPiA(T15,T16);
    xF5589 = T14;
    xF5590 = xF5589;
    tF5591 = (P)1;
    T13 = (P)YPiLL(xF5590,(P)2);
    T12 = (P)YPiv(T13,tF5591);
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
  P tF5630;
  P xF5629;
  P xF5628;
  P xF5627;
  P xF5626;
  P xF5625;
  P xF5624;
  P yF5623;
  P xF5622;
  P intoF5621;
  P xF5620;
  P xF5619;
  P iF5618;
  P xF5617;
  P zF5616;
  P xF5615;
  P xF5614;
  P xF5613;
  P iF5612;
  P xF5611;
  P xF5610;
  P xF5609;
  P iF5608;
  P xF5607;
  P zF5606;
  P xF5605;
  P xF5604;
  P xF5603;
  P iF5602;
  P xF5601;
  P yF5600;
  P xF5599;
  P tF5598;
  P xF5597;
  P xF5596;
  P lF5595;
  P xF5594;
  P xF5593;
  P argsF5592;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  NARGS(args_, 0);
  argsF5592 = args_;
  xF5593 = argsF5592;
  xF5594 = xF5593;
  T23 = (P)YPprop_elt(xF5594,(P)1);
  lF5595 = T23;
  xF5596 = lF5595;
  xF5597 = xF5596;
  T22 = (P)YPiGG(xF5597,(P)2);
  T21 = (P)YPtup(T22,VARREF(Ynul));
  tF5598 = T21;
  xF5599 = lF5595;
  yF5600 = YPint((P)2);
  T1 = (P)YPiE(xF5599,yF5600);
  T0 = (P)YPbb(T1);
  if (T1) {
    xF5601 = argsF5592;
    iF5602 = YPint((P)0);
    xF5603 = xF5601;
    T5 = (P)YPprop_elt(xF5603,(P)0);
    xF5604 = iF5602;
    xF5605 = xF5604;
    T7 = (P)YPiGG(xF5605,(P)2);
    T6 = (P)YPi_((P)0,T7);
    T4 = (P)YPloc_off(T5,T6);
    zF5606 = T4;
    xF5607 = tF5598;
    iF5608 = YPint((P)0);
    xF5609 = iF5608;
    xF5610 = xF5609;
    T3 = (P)YPiGG(xF5610,(P)2);
    T2 = (P)YPtelt_setter(zF5606,xF5607,T3);
    xF5611 = argsF5592;
    iF5612 = YPint((P)1);
    xF5613 = xF5611;
    T11 = (P)YPprop_elt(xF5613,(P)0);
    xF5614 = iF5612;
    xF5615 = xF5614;
    T13 = (P)YPiGG(xF5615,(P)2);
    T12 = (P)YPi_((P)0,T13);
    T10 = (P)YPloc_off(T11,T12);
    zF5616 = T10;
    xF5617 = tF5598;
    iF5618 = YPint((P)1);
    xF5619 = iF5618;
    xF5620 = xF5619;
    T9 = (P)YPiGG(xF5620,(P)2);
    T8 = (P)YPtelt_setter(zF5616,xF5617,T9);
  } else {
    T20 = FUNSHELL(1,fun_into_347,3);
    intoF5621 = T20;
    FUNINIT(intoF5621, 3,argsF5592,tF5598,intoF5621);
    xF5622 = lF5595;
    yF5623 = YPint((P)-1);
    xF5624 = xF5622;
    xF5625 = xF5624;
    T18 = (P)YPiGG(xF5625,(P)2);
    xF5626 = yF5623;
    xF5627 = xF5626;
    T19 = (P)YPiGG(xF5627,(P)2);
    T17 = (P)YPiA(T18,T19);
    xF5628 = T17;
    xF5629 = xF5628;
    tF5630 = (P)1;
    T16 = (P)YPiLL(xF5629,(P)2);
    T15 = (P)YPiv(T16,tF5630);
    T14 = CALL1(1,intoF5621,T15);
  }
UNLINK_STACK();
  QRET(tF5598);
}

FUNCODEDEF(fun_into_349) {
  P k_;
  P tF5652;
  P xF5651;
  P xF5650;
  P xF5649;
  P xF5648;
  P xF5647;
  P xF5646;
  P yF5645;
  P xF5644;
  P xF5643;
  P xF5642;
  P iF5641;
  P xF5640;
  P zF5639;
  P xF5638;
  P xF5637;
  P xF5636;
  P iF5635;
  P xF5634;
  P xF5633;
  P yF5632;
  P xF5631;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(k_, 0);
  xF5631 = k_;
  yF5632 = YPint((P)-1);
  T4 = (P)YPiE(xF5631,yF5632);
  T3 = (P)YPbb(T4);
  xF5633 = T3;
  T2 = (P)YPeqQ(xF5633,YPfalse);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF5634 = FREEREF(0);
    iF5635 = k_;
    xF5636 = xF5634;
    T8 = (P)YPprop_elt(xF5636,(P)0);
    xF5637 = iF5635;
    xF5638 = xF5637;
    T10 = (P)YPiGG(xF5638,(P)2);
    T9 = (P)YPi_((P)0,T10);
    T7 = (P)YPloc_off(T8,T9);
    zF5639 = T7;
    xF5640 = FREEREF(1);
    iF5641 = k_;
    xF5642 = iF5641;
    xF5643 = xF5642;
    T6 = (P)YPiGG(xF5643,(P)2);
    T5 = (P)YPtelt_setter(zF5639,xF5640,T6);
    xF5644 = k_;
    yF5645 = YPint((P)-1);
    xF5646 = xF5644;
    xF5647 = xF5646;
    T15 = (P)YPiGG(xF5647,(P)2);
    xF5648 = yF5645;
    xF5649 = xF5648;
    T16 = (P)YPiGG(xF5649,(P)2);
    T14 = (P)YPiA(T15,T16);
    xF5650 = T14;
    xF5651 = xF5650;
    tF5652 = (P)1;
    T13 = (P)YPiLL(xF5651,(P)2);
    T12 = (P)YPiv(T13,tF5652);
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
  P tF5691;
  P xF5690;
  P xF5689;
  P xF5688;
  P xF5687;
  P xF5686;
  P xF5685;
  P yF5684;
  P xF5683;
  P intoF5682;
  P xF5681;
  P xF5680;
  P iF5679;
  P xF5678;
  P zF5677;
  P xF5676;
  P xF5675;
  P xF5674;
  P iF5673;
  P xF5672;
  P xF5671;
  P xF5670;
  P iF5669;
  P xF5668;
  P zF5667;
  P xF5666;
  P xF5665;
  P xF5664;
  P iF5663;
  P xF5662;
  P yF5661;
  P xF5660;
  P tF5659;
  P xF5658;
  P xF5657;
  P lF5656;
  P xF5655;
  P xF5654;
  P argsF5653;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  NARGS(args_, 0);
  argsF5653 = args_;
  xF5654 = argsF5653;
  xF5655 = xF5654;
  T24 = (P)YPprop_elt(xF5655,(P)1);
  lF5656 = T24;
  xF5657 = lF5656;
  xF5658 = xF5657;
  T23 = (P)YPiGG(xF5658,(P)2);
  T22 = (P)YPtup(T23,VARREF(Ynul));
  tF5659 = T22;
  xF5660 = lF5656;
  yF5661 = YPint((P)2);
  T2 = (P)YPiE(xF5660,yF5661);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF5662 = argsF5653;
    iF5663 = YPint((P)0);
    xF5664 = xF5662;
    T6 = (P)YPprop_elt(xF5664,(P)0);
    xF5665 = iF5663;
    xF5666 = xF5665;
    T8 = (P)YPiGG(xF5666,(P)2);
    T7 = (P)YPi_((P)0,T8);
    T5 = (P)YPloc_off(T6,T7);
    zF5667 = T5;
    xF5668 = tF5659;
    iF5669 = YPint((P)0);
    xF5670 = iF5669;
    xF5671 = xF5670;
    T4 = (P)YPiGG(xF5671,(P)2);
    T3 = (P)YPtelt_setter(zF5667,xF5668,T4);
    xF5672 = argsF5653;
    iF5673 = YPint((P)1);
    xF5674 = xF5672;
    T12 = (P)YPprop_elt(xF5674,(P)0);
    xF5675 = iF5673;
    xF5676 = xF5675;
    T14 = (P)YPiGG(xF5676,(P)2);
    T13 = (P)YPi_((P)0,T14);
    T11 = (P)YPloc_off(T12,T13);
    zF5677 = T11;
    xF5678 = tF5659;
    iF5679 = YPint((P)1);
    xF5680 = iF5679;
    xF5681 = xF5680;
    T10 = (P)YPiGG(xF5681,(P)2);
    T9 = (P)YPtelt_setter(zF5677,xF5678,T10);
  } else {
    T21 = FUNSHELL(1,fun_into_349,3);
    intoF5682 = T21;
    FUNINIT(intoF5682, 3,argsF5653,tF5659,intoF5682);
    xF5683 = lF5656;
    yF5684 = YPint((P)-1);
    xF5685 = xF5683;
    xF5686 = xF5685;
    T19 = (P)YPiGG(xF5686,(P)2);
    xF5687 = yF5684;
    xF5688 = xF5687;
    T20 = (P)YPiGG(xF5688,(P)2);
    T18 = (P)YPiA(T19,T20);
    xF5689 = T18;
    xF5690 = xF5689;
    tF5691 = (P)1;
    T17 = (P)YPiLL(xF5690,(P)2);
    T16 = (P)YPiv(T17,tF5691);
    T15 = CALL1(1,intoF5682,T16);
  }
  T0 = (P)YPproduct(tF5659);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YOtype_equalQ) {
  P t1_,t2_;
  P yF5704;
  P xF5703;
  P tagF5702;
  P xF5701;
  P xF5700;
  P yF5699;
  P xF5698;
  P tagF5697;
  P xF5696;
  P xF5695;
  P tmpF5694;
  P yF5693;
  P xF5692;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF5692 = t1_;
  yF5693 = t2_;
  T25 = (P)YPeqQ(xF5692,yF5693);
  T24 = (P)YPbb(T25);
  tmpF5694 = T24;
  if (tmpF5694 != YPfalse) {
    T0 = tmpF5694;
  } else {
    xF5695 = t1_;
    xF5696 = xF5695;
    T10 = (P)YPiB(xF5696,(P)3);
    tagF5697 = T10;
    T7 = (P)YPiE(tagF5697,(P)0);
    T6 = (P)YPbb(T7);
    if (T7) {
      T8 = (P)YPobject_class(xF5695);
      T5 = T8;
    } else {
      T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF5697);
      T5 = T9;
    }
    xF5698 = T5;
    yF5699 = VARREF(YLclassG);
    T4 = (P)YPeqQ(xF5698,yF5699);
    T3 = (P)YPbb(T4);
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      xF5700 = t2_;
      xF5701 = xF5700;
      T20 = (P)YPiB(xF5701,(P)3);
      tagF5702 = T20;
      T17 = (P)YPiE(tagF5702,(P)0);
      T16 = (P)YPbb(T17);
      if (T17) {
        T18 = (P)YPobject_class(xF5700);
        T15 = T18;
      } else {
        T19 = (P)YPelt(VARREF(YDdirect_object_class),tagF5702);
        T15 = T19;
      }
      xF5703 = T15;
      yF5704 = VARREF(YLclassG);
      T14 = (P)YPeqQ(xF5703,yF5704);
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
  P xF5710;
  P xF5709;
  P xF5708;
  P xF5707;
  P xF5706;
  P xF5705;
  P T0,T1,T2,T3,T4,T5,T6;
DEFCREGS();
  xF5705 = c1_;
  T3 = (P)YPprop_elt(xF5705,(P)12);
  xF5706 = c2_;
  T5 = (P)YPprop_elt(xF5706,(P)11);
  xF5707 = T5;
  xF5708 = xF5707;
  T4 = (P)YPiGG(xF5708,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF5709 = YPint((P)1);
  xF5710 = xF5709;
  T6 = (P)YPiGG(xF5710,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOclass_isaQ(P o_,P c_) {
  P xF5721;
  P xF5720;
  P xF5719;
  P xF5718;
  P xF5717;
  P xF5716;
  P c2F5715;
  P c1F5714;
  P tagF5713;
  P xF5712;
  P xF5711;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
DEFCREGS();
  xF5711 = o_;
  xF5712 = xF5711;
  T12 = (P)YPiB(xF5712,(P)3);
  tagF5713 = T12;
  T9 = (P)YPiE(tagF5713,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF5711);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF5713);
    T7 = T11;
  }
  c1F5714 = T7;
  c2F5715 = c_;
  xF5716 = c1F5714;
  T3 = (P)YPprop_elt(xF5716,(P)12);
  xF5717 = c2F5715;
  T5 = (P)YPprop_elt(xF5717,(P)11);
  xF5718 = T5;
  xF5719 = xF5718;
  T4 = (P)YPiGG(xF5719,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF5720 = YPint((P)1);
  xF5721 = xF5720;
  T6 = (P)YPiGG(xF5721,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
  return T0;
}

FUNCODEDEF(YOsubtypeQ) {
  P t1_,t2_;
  P xF5739;
  P xF5738;
  P xF5737;
  P xF5736;
  P xF5735;
  P xF5734;
  P c2F5733;
  P c1F5732;
  P yF5731;
  P xF5730;
  P tagF5729;
  P xF5728;
  P xF5727;
  P yF5726;
  P xF5725;
  P tagF5724;
  P xF5723;
  P xF5722;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  xF5722 = t2_;
  xF5723 = xF5722;
  T9 = (P)YPiB(xF5723,(P)3);
  tagF5724 = T9;
  T6 = (P)YPiE(tagF5724,(P)0);
  T5 = (P)YPbb(T6);
  if (T6) {
    T7 = (P)YPobject_class(xF5722);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF5724);
    T4 = T8;
  }
  xF5725 = T4;
  yF5726 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF5725,yF5726);
  T2 = (P)YPbb(T3);
  if (T3) {
    xF5727 = t1_;
    xF5728 = xF5727;
    T17 = (P)YPiB(xF5728,(P)3);
    tagF5729 = T17;
    T14 = (P)YPiE(tagF5729,(P)0);
    T13 = (P)YPbb(T14);
    if (T14) {
      T15 = (P)YPobject_class(xF5727);
      T12 = T15;
    } else {
      T16 = (P)YPelt(VARREF(YDdirect_object_class),tagF5729);
      T12 = T16;
    }
    xF5730 = T12;
    yF5731 = VARREF(YLclassG);
    T11 = (P)YPeqQ(xF5730,yF5731);
    T10 = (P)YPbb(T11);
    T1 = T10;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    c1F5732 = t1_;
    c2F5733 = t2_;
    xF5734 = c1F5732;
    T21 = (P)YPprop_elt(xF5734,(P)12);
    xF5735 = c2F5733;
    T23 = (P)YPprop_elt(xF5735,(P)11);
    xF5736 = T23;
    xF5737 = xF5736;
    T22 = (P)YPiGG(xF5737,(P)2);
    T20 = (P)YPselt(T21,T22);
    xF5738 = YPint((P)1);
    xF5739 = xF5738;
    T24 = (P)YPiGG(xF5739,(P)2);
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
  P xF5752;
  P xF5751;
  P xF5750;
  P xF5749;
  P xF5748;
  P xF5747;
  P c2F5746;
  P c1F5745;
  P yF5744;
  P xF5743;
  P tagF5742;
  P xF5741;
  P xF5740;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(c_, 0);
  ARG(t_, 1);
  xF5740 = t_;
  xF5741 = xF5740;
  T8 = (P)YPiB(xF5741,(P)3);
  tagF5742 = T8;
  T5 = (P)YPiE(tagF5742,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF5740);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF5742);
    T3 = T7;
  }
  xF5743 = T3;
  yF5744 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF5743,yF5744);
  T1 = (P)YPbb(T2);
  if (T2) {
    c1F5745 = c_;
    c2F5746 = t_;
    xF5747 = c1F5745;
    T13 = (P)YPprop_elt(xF5747,(P)12);
    xF5748 = c2F5746;
    T15 = (P)YPprop_elt(xF5748,(P)11);
    xF5749 = T15;
    xF5750 = xF5749;
    T14 = (P)YPiGG(xF5750,(P)2);
    T12 = (P)YPselt(T13,T14);
    xF5751 = YPint((P)1);
    xF5752 = xF5751;
    T16 = (P)YPiGG(xF5752,(P)2);
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
  P yF5755;
  P xF5754;
  P xF5753;
  P T0,T1,T2;
DEFCREGS();
  xF5753 = t_;
  T2 = (P)YPprop_elt(xF5753,(P)0);
  xF5754 = T2;
  yF5755 = o_;
  T1 = (P)YPeqQ(xF5754,yF5755);
  T0 = (P)YPbb(T1);
  return T0;
}

INLINE P YOisaQ(P o_,P t_) {
  P xF5773;
  P xF5772;
  P xF5771;
  P xF5770;
  P xF5769;
  P xF5768;
  P c2F5767;
  P c1F5766;
  P tagF5765;
  P xF5764;
  P xF5763;
  P cF5762;
  P oF5761;
  P yF5760;
  P xF5759;
  P tagF5758;
  P xF5757;
  P xF5756;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
DEFCREGS();
  xF5756 = t_;
  xF5757 = xF5756;
  T8 = (P)YPiB(xF5757,(P)3);
  tagF5758 = T8;
  T5 = (P)YPiE(tagF5758,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF5756);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF5758);
    T3 = T7;
  }
  xF5759 = T3;
  yF5760 = VARREF(YLclassG);
  T2 = (P)YPeqQ(xF5759,yF5760);
  T1 = (P)YPbb(T2);
  if (T2) {
    oF5761 = o_;
    cF5762 = t_;
    xF5763 = oF5761;
    xF5764 = xF5763;
    T21 = (P)YPiB(xF5764,(P)3);
    tagF5765 = T21;
    T18 = (P)YPiE(tagF5765,(P)0);
    T17 = (P)YPbb(T18);
    if (T18) {
      T19 = (P)YPobject_class(xF5763);
      T16 = T19;
    } else {
      T20 = (P)YPelt(VARREF(YDdirect_object_class),tagF5765);
      T16 = T20;
    }
    c1F5766 = T16;
    c2F5767 = cF5762;
    xF5768 = c1F5766;
    T12 = (P)YPprop_elt(xF5768,(P)12);
    xF5769 = c2F5767;
    T14 = (P)YPprop_elt(xF5769,(P)11);
    xF5770 = T14;
    xF5771 = xF5770;
    T13 = (P)YPiGG(xF5771,(P)2);
    T11 = (P)YPselt(T12,T13);
    xF5772 = YPint((P)1);
    xF5773 = xF5772;
    T15 = (P)YPiGG(xF5773,(P)2);
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
  P xF5774;
  P T0,T1;
LINK_STACK();
  ARG(generic_, 0);
  xF5774 = VARREF(YPdispatch);
  T1 = (P)YPprop_elt(xF5774,(P)0);
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
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yclass_type_cache));
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
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_name));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_name_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_sig));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_sig_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_env));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_refs));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_src));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_src_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_mets));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_mets_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yfun_cache));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_refs));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_src));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Ygen_src_setter));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_location));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_count));
  XCALL1(1,VARREF(YPpatch_early_generic),VARREF(Yopts_tup_storage));
  return YPfalse;
}

INLINE P YOnulQ(P x_) {
  P yF5776;
  P xF5775;
  P T0,T1;
DEFCREGS();
  xF5775 = x_;
  yF5776 = (P)0;
  T1 = (P)YPeqQ(xF5775,yF5776);
  T0 = (P)YPbb(T1);
  return T0;
}

P YPcons_args() {
  P iF5780;
  P rF5779;
  P bF5778;
  P nF5777;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
  (P)YPdef_regs();
  T9 = (P)YPsp_elt((P)-2);
  nF5777 = T9;
  T8 = (P)YPi_((P)-2,nF5777);
  bF5778 = T8;
  rF5779 = Ynil;
  iF5780 = (P)0;
  LOOP_276: {
    P a276_0,a276_1;
    T2 = (P)YPiL(iF5780,nF5777);
    T1 = (P)YPbb(T2);
    if (T2) {
      T6 = (P)YPiA(bF5778,iF5780);
      T5 = (P)YPsp_elt(T6);
      T4 = (P)YPpair(T5,rF5779);
      T7 = (P)YPiA(iF5780,(P)1);
      a276_0 = T4;
      a276_1 = T7;
      rF5779 = a276_0;
      iF5780 = a276_1;
      goto LOOP_276;
      T0 = T3;
    } else {
      T0 = rF5779;
    }
  }
  return T0;
}

INLINE P YPcheck_arity(P fn_,P sig_,P n_) {
  P naryQF5786;
  P xF5785;
  P arityF5784;
  P xF5783;
  P xF5782;
  P xF5781;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
DEFCREGS();
  xF5781 = sig_;
  T13 = (P)YPprop_elt(xF5781,(P)3);
  xF5782 = T13;
  xF5783 = xF5782;
  T12 = (P)YPiGG(xF5783,(P)2);
  arityF5784 = T12;
  xF5785 = sig_;
  T11 = (P)YPprop_elt(xF5785,(P)2);
  naryQF5786 = T11;
  if (naryQF5786 != YPfalse) {
    T3 = (P)YPiL(n_,arityF5784);
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
    T8 = (P)YPiE(n_,arityF5784);
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
  P xF5808;
  P xF5807;
  P xF5806;
  P xF5805;
  P xF5804;
  P xF5803;
  P c2F5802;
  P c1F5801;
  P tagF5800;
  P xF5799;
  P xF5798;
  P cF5797;
  P oF5796;
  P yF5795;
  P xF5794;
  P tagF5793;
  P xF5792;
  P xF5791;
  P tF5790;
  P oF5789;
  P yF5788;
  P xF5787;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
DEFCREGS();
  xF5787 = type_;
  yF5788 = VARREF(YLanyG);
  T2 = (P)YPeqQ(xF5787,yF5788);
  T1 = (P)YPbb(T2);
  if (T2) {
    T0 = YPtrue;
  } else {
    oF5789 = res_;
    tF5790 = type_;
    xF5791 = tF5790;
    xF5792 = xF5791;
    T12 = (P)YPiB(xF5792,(P)3);
    tagF5793 = T12;
    T9 = (P)YPiE(tagF5793,(P)0);
    T8 = (P)YPbb(T9);
    if (T9) {
      T10 = (P)YPobject_class(xF5791);
      T7 = T10;
    } else {
      T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF5793);
      T7 = T11;
    }
    xF5794 = T7;
    yF5795 = VARREF(YLclassG);
    T6 = (P)YPeqQ(xF5794,yF5795);
    T5 = (P)YPbb(T6);
    if (T6) {
      oF5796 = oF5789;
      cF5797 = tF5790;
      xF5798 = oF5796;
      xF5799 = xF5798;
      T25 = (P)YPiB(xF5799,(P)3);
      tagF5800 = T25;
      T22 = (P)YPiE(tagF5800,(P)0);
      T21 = (P)YPbb(T22);
      if (T22) {
        T23 = (P)YPobject_class(xF5798);
        T20 = T23;
      } else {
        T24 = (P)YPelt(VARREF(YDdirect_object_class),tagF5800);
        T20 = T24;
      }
      c1F5801 = T20;
      c2F5802 = cF5797;
      xF5803 = c1F5801;
      T16 = (P)YPprop_elt(xF5803,(P)12);
      xF5804 = c2F5802;
      T18 = (P)YPprop_elt(xF5804,(P)11);
      xF5805 = T18;
      xF5806 = xF5805;
      T17 = (P)YPiGG(xF5806,(P)2);
      T15 = (P)YPselt(T16,T17);
      xF5807 = YPint((P)1);
      xF5808 = xF5807;
      T19 = (P)YPiGG(xF5808,(P)2);
      T14 = (P)YPiE(T15,T19);
      T13 = (P)YPbb(T14);
      T4 = T13;
    } else {
      T26 = XCALL2(1,VARREF(YisaQ),oF5789,tF5790);
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
  P xF5831;
  P xF5830;
  P xF5829;
  P xF5828;
  P xF5827;
  P xF5826;
  P c2F5825;
  P c1F5824;
  P tagF5823;
  P xF5822;
  P xF5821;
  P cF5820;
  P oF5819;
  P yF5818;
  P xF5817;
  P tagF5816;
  P xF5815;
  P xF5814;
  P tF5813;
  P oF5812;
  P typeF5811;
  P xF5810;
  P xF5809;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
DEFCREGS();
  (P)YPset_regs(regs_);
  xF5809 = fn_;
  T28 = (P)YPprop_elt(xF5809,(P)2);
  xF5810 = T28;
  T27 = (P)YPprop_elt(xF5810,(P)4);
  typeF5811 = T27;
  if (VARREF(YPclasses_readyQ) != YPfalse) {
    oF5812 = res_;
    tF5813 = typeF5811;
    xF5814 = tF5813;
    xF5815 = xF5814;
    T10 = (P)YPiB(xF5815,(P)3);
    tagF5816 = T10;
    T7 = (P)YPiE(tagF5816,(P)0);
    T6 = (P)YPbb(T7);
    if (T7) {
      T8 = (P)YPobject_class(xF5814);
      T5 = T8;
    } else {
      T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF5816);
      T5 = T9;
    }
    xF5817 = T5;
    yF5818 = VARREF(YLclassG);
    T4 = (P)YPeqQ(xF5817,yF5818);
    T3 = (P)YPbb(T4);
    if (T4) {
      oF5819 = oF5812;
      cF5820 = tF5813;
      xF5821 = oF5819;
      xF5822 = xF5821;
      T23 = (P)YPiB(xF5822,(P)3);
      tagF5823 = T23;
      T20 = (P)YPiE(tagF5823,(P)0);
      T19 = (P)YPbb(T20);
      if (T20) {
        T21 = (P)YPobject_class(xF5821);
        T18 = T21;
      } else {
        T22 = (P)YPelt(VARREF(YDdirect_object_class),tagF5823);
        T18 = T22;
      }
      c1F5824 = T18;
      c2F5825 = cF5820;
      xF5826 = c1F5824;
      T14 = (P)YPprop_elt(xF5826,(P)12);
      xF5827 = c2F5825;
      T16 = (P)YPprop_elt(xF5827,(P)11);
      xF5828 = T16;
      xF5829 = xF5828;
      T15 = (P)YPiGG(xF5829,(P)2);
      T13 = (P)YPselt(T14,T15);
      xF5830 = YPint((P)1);
      xF5831 = xF5830;
      T17 = (P)YPiGG(xF5831,(P)2);
      T12 = (P)YPiE(T13,T17);
      T11 = (P)YPbb(T12);
      T2 = T11;
    } else {
      T24 = XCALL2(1,VARREF(YisaQ),oF5812,tF5813);
      T2 = T24;
    }
    if (T2 != YPfalse) {
      T1 = res_;
    } else {
      T26 = (P)YPcons_args();
      T25 = XCALL4(1,VARREF(Yreturn_type_error),fn_,res_,typeF5811,T26);
      T1 = T25;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  return T0;
}

P YPcheck_type(P regs_,P res_,P type_) {
  P xF5851;
  P xF5850;
  P xF5849;
  P xF5848;
  P xF5847;
  P xF5846;
  P c2F5845;
  P c1F5844;
  P tagF5843;
  P xF5842;
  P xF5841;
  P cF5840;
  P oF5839;
  P yF5838;
  P xF5837;
  P tagF5836;
  P xF5835;
  P xF5834;
  P tF5833;
  P oF5832;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
DEFCREGS();
  (P)YPset_regs(regs_);
  if (VARREF(YPclasses_readyQ) != YPfalse) {
    oF5832 = res_;
    tF5833 = type_;
    xF5834 = tF5833;
    xF5835 = xF5834;
    T10 = (P)YPiB(xF5835,(P)3);
    tagF5836 = T10;
    T7 = (P)YPiE(tagF5836,(P)0);
    T6 = (P)YPbb(T7);
    if (T7) {
      T8 = (P)YPobject_class(xF5834);
      T5 = T8;
    } else {
      T9 = (P)YPelt(VARREF(YDdirect_object_class),tagF5836);
      T5 = T9;
    }
    xF5837 = T5;
    yF5838 = VARREF(YLclassG);
    T4 = (P)YPeqQ(xF5837,yF5838);
    T3 = (P)YPbb(T4);
    if (T4) {
      oF5839 = oF5832;
      cF5840 = tF5833;
      xF5841 = oF5839;
      xF5842 = xF5841;
      T23 = (P)YPiB(xF5842,(P)3);
      tagF5843 = T23;
      T20 = (P)YPiE(tagF5843,(P)0);
      T19 = (P)YPbb(T20);
      if (T20) {
        T21 = (P)YPobject_class(xF5841);
        T18 = T21;
      } else {
        T22 = (P)YPelt(VARREF(YDdirect_object_class),tagF5843);
        T18 = T22;
      }
      c1F5844 = T18;
      c2F5845 = cF5840;
      xF5846 = c1F5844;
      T14 = (P)YPprop_elt(xF5846,(P)12);
      xF5847 = c2F5845;
      T16 = (P)YPprop_elt(xF5847,(P)11);
      xF5848 = T16;
      xF5849 = xF5848;
      T15 = (P)YPiGG(xF5849,(P)2);
      T13 = (P)YPselt(T14,T15);
      xF5850 = YPint((P)1);
      xF5851 = xF5850;
      T17 = (P)YPiGG(xF5851,(P)2);
      T12 = (P)YPiE(T13,T17);
      T11 = (P)YPbb(T12);
      T2 = T11;
    } else {
      T24 = XCALL2(1,VARREF(YisaQ),oF5832,tF5833);
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
  P yF5881;
  P xF5880;
  P xF5879;
  P yF5878;
  P xF5877;
  P xF5876;
  P yF5875;
  P xF5874;
  P xF5873;
  P xF5872;
  P yF5871;
  P xF5870;
  P specsF5869;
  P iF5868;
  P xF5867;
  P sigF5866;
  P xF5865;
  P yF5864;
  P xF5863;
  P nF5862;
  P classF5861;
  P tagF5860;
  P xF5859;
  P xF5858;
  P xF5857;
  P xF5856;
  P yF5855;
  P xF5854;
  P xF5853;
  P fnF5852;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
DEFCREGS();
  (P)YPset_regs(regs_);
  T42 = (P)YPsp_elt((P)-1);
  fnF5852 = T42;
  xF5853 = fnF5852;
  xF5854 = xF5853;
  yF5855 = (P)0;
  T31 = (P)YPeqQ(xF5854,yF5855);
  T30 = (P)YPbb(T31);
  if (T31) {
    T29 = (P)0;
  } else {
    xF5856 = fnF5852;
    xF5857 = xF5856;
    T35 = (P)YPiB(xF5857,(P)3);
    T34 = (P)YPiE(T35,(P)0);
    T33 = (P)YPbb(T34);
    if (T34) {
      xF5858 = fnF5852;
      xF5859 = xF5858;
      T41 = (P)YPiB(xF5859,(P)3);
      tagF5860 = T41;
      T38 = (P)YPiE(tagF5860,(P)0);
      T37 = (P)YPbb(T38);
      if (T38) {
        T39 = (P)YPobject_class(xF5858);
        T36 = T39;
      } else {
        T40 = (P)YPelt(VARREF(YDdirect_object_class),tagF5860);
        T36 = T40;
      }
      T32 = T36;
    } else {
      T32 = (P)0;
    }
    T29 = T32;
  }
  classF5861 = T29;
  T28 = (P)YPsp_elt((P)-2);
  nF5862 = T28;
  (P)YPstack_check(regs_);
  xF5863 = classF5861;
  yF5864 = VARREF(YLmetG);
  T1 = (P)YPeqQ(xF5863,yF5864);
  T0 = (P)YPbb(T1);
  if (T1) {
    xF5865 = fnF5852;
    T13 = (P)YPprop_elt(xF5865,(P)2);
    sigF5866 = T13;
    (P)YPcheck_arity(fnF5852,sigF5866,nF5862);
    if (VARREF(YPclasses_readyQ) != YPfalse) {
      iF5868 = (P)0;
      xF5867 = sigF5866;
      T12 = (P)YPprop_elt(xF5867,(P)1);
      specsF5869 = T12;
      LOOP_277: {
        P a277_0,a277_1;
        xF5870 = specsF5869;
        yF5871 = Ynil;
        T5 = (P)YPeqQ(xF5870,yF5871);
        T4 = (P)YPbb(T5);
        if (T5) {
          T3 = YPfalse;
        } else {
          T7 = (P)YPi_((P)-3,iF5868);
          T6 = (P)YPsp_elt(T7);
          xF5872 = specsF5869;
          T8 = (P)YPprop_elt(xF5872,(P)0);
          (P)YParg_check_type(T6,T8,fnF5852);
          T10 = (P)YPiA(iF5868,(P)1);
          xF5873 = specsF5869;
          T11 = (P)YPprop_elt(xF5873,(P)1);
          a277_0 = T10;
          a277_1 = T11;
          iF5868 = a277_0;
          specsF5869 = a277_1;
          goto LOOP_277;
          T3 = T9;
        }
      }
      T2 = T3;
    } else {
      T2 = YPfalse;
    }
  } else {
    xF5874 = classF5861;
    yF5875 = VARREF(YLgenG);
    T16 = (P)YPeqQ(xF5874,yF5875);
    T15 = (P)YPbb(T16);
    if (T16) {
      xF5876 = fnF5852;
      T18 = (P)YPprop_elt(xF5876,(P)2);
      T17 = (P)YPcheck_arity(fnF5852,T18,nF5862);
      T14 = T17;
    } else {
      xF5877 = VARREF(Yunknown_function_error);
      yF5878 = (P)0;
      T21 = (P)YPeqQ(xF5877,yF5878);
      T20 = (P)YPbb(T21);
      if (T21) {
        T22 = (P)YPbreak(LITREF(lit_321));
        T19 = T22;
      } else {
        xF5879 = fnF5852;
        xF5880 = xF5879;
        yF5881 = (P)0;
        T26 = (P)YPeqQ(xF5880,yF5881);
        T25 = (P)YPbb(T26);
        if (T26) {
          T24 = YPfalse;
        } else {
          T24 = fnF5852;
        }
        T27 = (P)YPcons_args();
        T23 = XCALL2(1,VARREF(Yunknown_function_error),T24,T27);
        T19 = T23;
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
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
DEFCREGS();
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
  VARSET(YLboxG,T5);
  T6 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLmagG,T6);
  T7 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLchrG,T7);
  T8 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsrc_locG,T8);
  T9 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLnumG,T9);
  T10 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLintG,T10);
  T11 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfixnumG,T11);
  T12 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfloG,T12);
  T13 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlocG,T13);
  T14 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLrepG,T14);
  T15 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolG,T15);
  T16 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolIG,T16);
  T17 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLcolXG,T17);
  T18 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqG,T18);
  T19 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqIG,T19);
  T20 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLseqXG,T20);
  T21 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLlstG,T21);
  T22 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLflatG,T22);
  T23 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLtupG,T23);
  T24 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLstrG,T24);
  T25 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsymG,T25);
  T26 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLtypeG,T26);
  T27 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLclassG,T27);
  T28 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsingletonG,T28);
  T29 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsubclassG,T29);
  T30 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLunionG,T30);
  T31 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLproductG,T31);
  T34 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  T33 = VARSET(YLpropG,T34);
  T32 = T33;
  return T32;
}

P Y___main_4___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
DEFCREGS();
  T0 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLgen_cacheG,T0);
  T1 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLsigG,T1);
  T2 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLfunG,T2);
  T3 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLmetG,T3);
  T4 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLgenG,T4);
  T5 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLoptsG,T5);
  T6 = (P)YPclass(VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),VARREF(Ynil),YPint((P)-1),VARREF(Ynil));
  VARSET(YLopts_tupG,T6);
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLanyG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLlogG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLboxG));
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
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLfunG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLmetG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLgenG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLoptsG));
  (P)YPobject_class_setter(VARREF(YLclassG),VARREF(YLopts_tupG));
  (P)YPobject_class_setter(VARREF(YLlstG),VARREF(Ynil));
  T7 = (P)YPobject_of(VARREF(YLanyG),(P)0);
  VARSET(Ynul,T7);
  T8 = (P)YPobject_of(VARREF(YLanyG),(P)0);
  VARSET(Ynul_prop,T8);
  T11 = (P)YPobject_of(VARREF(YLlogG),(P)0);
  T10 = VARSET(YPtrue,T11);
  T9 = T10;
  return T9;
}

P Y___main_5___() {
  P T0,T1,T2,T3;
DEFCREGS();
  T0 = (P)YPobject_of(VARREF(YLlogG),(P)0);
  VARSET(YPfalse,T0);
  T1 = (P)YPobject_of(VARREF(YLlstG),(P)0);
  VARSET(Ynil,T1);
  VARSET(YPclasses_readyQ,YPfalse);
  VARSET(Ynil,VARREF(Yone_nil));
  (P)YPhead_setter(VARREF(Ynil),VARREF(Ynil));
  (P)YPtail_setter(VARREF(Ynil),VARREF(Ynil));
  VARSET(YPmet_prop_len,(P)4);
  VARSET(YPsymbols_readyQ,YPfalse);
  T3 = VARSET(YPTstart_running_atT,VARREF(Ynil));
  T2 = T3;
  return T2;
}

P Y___main_6___() {
  P xF5908;
  P xF5907;
  P tF5906;
  P xF5905;
  P xF5904;
  P xF5903;
  P xF5902;
  P xF5901;
  P xF5900;
  P xF5899;
  P xF5898;
  P tF5897;
  P xF5896;
  P xF5895;
  P xF5894;
  P xF5893;
  P xF5892;
  P xF5891;
  P xF5890;
  P xF5889;
  P xF5888;
  P xF5887;
  P tF5886;
  P xF5885;
  P xF5884;
  P xF5883;
  P xF5882;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
DEFCREGS();
  T0 = (P)YPraw_alloc((P)4);
  VARSET(YDdirect_object_class,T0);
  (P)YPelt_setter(VARREF(YLfixnumG),VARREF(YDdirect_object_class),(P)1);
  (P)YPelt_setter(VARREF(YLchrG),VARREF(YDdirect_object_class),(P)2);
  (P)YPelt_setter(VARREF(YLlocG),VARREF(YDdirect_object_class),(P)3);
  xF5882 = YPint((P)32);
  xF5883 = xF5882;
  T4 = (P)YPiGG(xF5883,(P)2);
  T3 = (P)YPi_(T4,(P)2);
  xF5884 = T3;
  xF5885 = xF5884;
  tF5886 = (P)1;
  T2 = (P)YPiLL(xF5885,(P)2);
  T1 = (P)YPiv(T2,tF5886);
  VARSET(YDnum_int_bits,T1);
  xF5887 = YPint((P)1);
  xF5888 = xF5887;
  T9 = (P)YPiGG(xF5888,(P)2);
  xF5889 = VARREF(YDnum_int_bits);
  xF5890 = xF5889;
  T11 = (P)YPiGG(xF5890,(P)2);
  xF5891 = YPint((P)1);
  xF5892 = xF5891;
  T12 = (P)YPiGG(xF5892,(P)2);
  T10 = (P)YPi_(T11,T12);
  T8 = (P)YPiLL(T9,T10);
  xF5893 = YPint((P)1);
  xF5894 = xF5893;
  T13 = (P)YPiGG(xF5894,(P)2);
  T7 = (P)YPi_(T8,T13);
  xF5895 = T7;
  xF5896 = xF5895;
  tF5897 = (P)1;
  T6 = (P)YPiLL(xF5896,(P)2);
  T5 = (P)YPiv(T6,tF5897);
  VARSET(YDmax_int,T5);
  xF5898 = YPint((P)1);
  xF5899 = xF5898;
  T17 = (P)YPiGG(xF5899,(P)2);
  xF5900 = VARREF(YDnum_int_bits);
  xF5901 = xF5900;
  T19 = (P)YPiGG(xF5901,(P)2);
  xF5902 = YPint((P)1);
  xF5903 = xF5902;
  T20 = (P)YPiGG(xF5903,(P)2);
  T18 = (P)YPi_(T19,T20);
  T16 = (P)YPiLL(T17,T18);
  xF5904 = T16;
  xF5905 = xF5904;
  tF5906 = (P)1;
  T15 = (P)YPiLL(xF5905,(P)2);
  T14 = (P)YPiv(T15,tF5906);
  VARSET(YDmin_int,T14);
  xF5907 = YPchr((P)32);
  xF5908 = xF5907;
  T22 = (P)YPiGG(xF5908,(P)2);
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
  T28 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLmagG),T28);
  T31 = (P)YPpair(VARREF(YLmagG),Ynil);
  T30 = (P)YPdefine_parents(VARREF(YLchrG),T31);
  T29 = T30;
  return T29;
}

P Y___main_7___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46;
DEFCREGS();
  T0 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLsrc_locG),T0);
  T1 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLnumG),T1);
  T2 = (P)YPpair(VARREF(YLnumG),Ynil);
  (P)YPdefine_parents(VARREF(YLintG),T2);
  T3 = (P)YPpair(VARREF(YLintG),Ynil);
  (P)YPdefine_parents(VARREF(YLfixnumG),T3);
  T4 = (P)YPpair(VARREF(YLnumG),Ynil);
  (P)YPdefine_parents(VARREF(YLfloG),T4);
  T5 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLlocG),T5);
  T6 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLrepG),T6);
  T7 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolG),T7);
  T8 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolIG),T8);
  T9 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLcolXG),T9);
  T10 = (P)YPpair(VARREF(YLcolG),Ynil);
  (P)YPdefine_parents(VARREF(YLseqG),T10);
  T12 = (P)YPpair(VARREF(YLcolIG),Ynil);
  T11 = (P)YPpair(VARREF(YLseqG),T12);
  (P)YPdefine_parents(VARREF(YLseqIG),T11);
  T14 = (P)YPpair(VARREF(YLcolXG),Ynil);
  T13 = (P)YPpair(VARREF(YLseqG),T14);
  (P)YPdefine_parents(VARREF(YLseqXG),T13);
  T15 = (P)YPpair(VARREF(YLseqXG),Ynil);
  (P)YPdefine_parents(VARREF(YLlstG),T15);
  T16 = (P)YPpair(VARREF(YLseqG),Ynil);
  (P)YPdefine_parents(VARREF(YLflatG),T16);
  T18 = (P)YPpair(VARREF(YLseqIG),Ynil);
  T17 = (P)YPpair(VARREF(YLflatG),T18);
  (P)YPdefine_parents(VARREF(YLtupG),T17);
  T21 = (P)YPpair(VARREF(YLmagG),Ynil);
  T20 = (P)YPpair(VARREF(YLseqIG),T21);
  T19 = (P)YPpair(VARREF(YLflatG),T20);
  (P)YPdefine_parents(VARREF(YLstrG),T19);
  T22 = (P)YPpair(VARREF(YLmagG),Ynil);
  (P)YPdefine_parents(VARREF(YLsymG),T22);
  T23 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLtypeG),T23);
  T24 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLclassG),T24);
  T25 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsingletonG),T25);
  T26 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLsubclassG),T26);
  T27 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLunionG),T27);
  T28 = (P)YPpair(VARREF(YLtypeG),Ynil);
  (P)YPdefine_parents(VARREF(YLproductG),T28);
  T29 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLpropG),T29);
  T30 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLgen_cacheG),T30);
  T31 = (P)YPpair(VARREF(YLanyG),Ynil);
  (P)YPdefine_parents(VARREF(YLsigG),T31);
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
    T41 = (P)YPbreak(LITREF(lit_0));
  } else {
  }
  lit_1 = YPPlist(1,YPPsym((P)"name"));
  T42 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T42,ENVNUL,PNUL,sloc(571));
  T43 = fun_112;
  VARSET(Yfab_sym,T43);
  VARSET(YPsymbols_readyQ,YPtrue);
  lit_2 = YPPsym((P)"fab-sym");
  lit_3 = YPPlist(1,YPPsym((P)"name"));
  T44 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yfab_sym = YPmet(FUNCODEREF(Yfab_sym),LITREF(lit_2),T44,ENVNUL,PNUL,sloc(585));
  T45 = Yfab_sym;
  VARSET(Yfab_sym,T45);
  T46 = YPfalse;
  return T46;
}

P Y___main_8___() {
  P T0,T1,T2,T3,T4;
DEFCREGS();
  VARSET(YDgen_cache_singletons_offset,YPint((P)2));
  VARSET(YDgen_cache_classes_offset,YPint((P)3));
  lit_4 = YPPsym((P)"%prop-offset");
  lit_5 = YPPlist(2,YPPsym((P)"owner"),YPPsym((P)"getter"));
  T2 = YPsig(LITREF(lit_5),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T1 = YPprop_offset = YPmet(FUNCODEREF(YPprop_offset),LITREF(lit_4),T2,ENVNUL,PNUL,sloc(655));
  T4 = YPprop_offset;
  T3 = VARSET(YPprop_offset,T4);
  T0 = T3;
  return T0;
}

P Y___main_9___() {
  P propF6096;
  P setterF6095;
  P getterF6094;
  P accessorF6093;
  P propF6092;
  P setterF6091;
  P accessorF6090;
  P getterF6089;
  P accessorF6088;
  P propF6087;
  P setterF6086;
  P accessorF6085;
  P getterF6084;
  P accessorF6083;
  P propF6082;
  P setterF6081;
  P getterF6080;
  P accessorF6079;
  P propF6078;
  P setterF6077;
  P accessorF6076;
  P getterF6075;
  P accessorF6074;
  P propF6073;
  P setterF6072;
  P accessorF6071;
  P getterF6070;
  P accessorF6069;
  P propF6068;
  P setterF6067;
  P accessorF6066;
  P getterF6065;
  P accessorF6064;
  P propF6063;
  P setterF6062;
  P accessorF6061;
  P getterF6060;
  P accessorF6059;
  P propF6058;
  P setterF6057;
  P accessorF6056;
  P getterF6055;
  P accessorF6054;
  P propF6053;
  P setterF6052;
  P accessorF6051;
  P getterF6050;
  P accessorF6049;
  P propF6048;
  P setterF6047;
  P getterF6046;
  P accessorF6045;
  P propF6044;
  P setterF6043;
  P getterF6042;
  P accessorF6041;
  P propF6040;
  P setterF6039;
  P getterF6038;
  P accessorF6037;
  P propF6036;
  P setterF6035;
  P getterF6034;
  P accessorF6033;
  P propF6032;
  P setterF6031;
  P getterF6030;
  P accessorF6029;
  P propF6028;
  P setterF6027;
  P getterF6026;
  P accessorF6025;
  P propF6024;
  P setterF6023;
  P getterF6022;
  P accessorF6021;
  P propF6020;
  P setterF6019;
  P getterF6018;
  P accessorF6017;
  P propF6016;
  P setterF6015;
  P getterF6014;
  P accessorF6013;
  P propF6012;
  P setterF6011;
  P getterF6010;
  P accessorF6009;
  P propF6008;
  P setterF6007;
  P getterF6006;
  P accessorF6005;
  P propF6004;
  P setterF6003;
  P getterF6002;
  P accessorF6001;
  P propF6000;
  P setterF5999;
  P getterF5998;
  P accessorF5997;
  P propF5996;
  P setterF5995;
  P getterF5994;
  P accessorF5993;
  P propF5992;
  P setterF5991;
  P getterF5990;
  P accessorF5989;
  P propF5988;
  P setterF5987;
  P getterF5986;
  P accessorF5985;
  P propF5984;
  P setterF5983;
  P accessorF5982;
  P getterF5981;
  P accessorF5980;
  P propF5979;
  P setterF5978;
  P accessorF5977;
  P getterF5976;
  P accessorF5975;
  P propF5974;
  P setterF5973;
  P accessorF5972;
  P getterF5971;
  P accessorF5970;
  P propF5969;
  P setterF5968;
  P accessorF5967;
  P getterF5966;
  P accessorF5965;
  P propF5964;
  P setterF5963;
  P accessorF5962;
  P getterF5961;
  P accessorF5960;
  P propF5959;
  P setterF5958;
  P accessorF5957;
  P getterF5956;
  P accessorF5955;
  P propF5954;
  P setterF5953;
  P accessorF5952;
  P getterF5951;
  P accessorF5950;
  P propF5949;
  P setterF5948;
  P accessorF5947;
  P getterF5946;
  P accessorF5945;
  P propF5944;
  P setterF5943;
  P getterF5942;
  P accessorF5941;
  P propF5940;
  P setterF5939;
  P accessorF5938;
  P getterF5937;
  P accessorF5936;
  P propF5935;
  P setterF5934;
  P getterF5933;
  P accessorF5932;
  P propF5931;
  P setterF5930;
  P accessorF5929;
  P getterF5928;
  P accessorF5927;
  P propF5926;
  P setterF5925;
  P accessorF5924;
  P getterF5923;
  P accessorF5922;
  P propF5921;
  P setterF5920;
  P getterF5919;
  P accessorF5918;
  P propF5917;
  P setterF5916;
  P getterF5915;
  P accessorF5914;
  P propF5913;
  P setterF5912;
  P accessorF5911;
  P getterF5910;
  P accessorF5909;
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
  P T496,T497,T498,T499,T500,T501,T502,T503,T504,T505,T506,T507;
DEFCREGS();
  lit_6 = YPPsym((P)"%early-dispatch");
  lit_7 = YPPlist(1,YPPsym((P)"args"));
  lit_8 = YPsb((P)"ERROR: Generic function dispatch called before it existed.");
  T0 = YPsig(LITREF(lit_7),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YPearly_dispatch = YPmet(FUNCODEREF(YPearly_dispatch),LITREF(lit_6),T0,ENVNUL,PNUL,sloc(673));
  T1 = YPearly_dispatch;
  VARSET(YPearly_dispatch,T1);
  lit_9 = YPPsym((P)"%add-met");
  lit_10 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T2 = YPsig(LITREF(lit_10),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPadd_met = YPmet(FUNCODEREF(YPadd_met),LITREF(lit_9),T2,ENVNUL,PNUL,sloc(677));
  T3 = YPadd_met;
  VARSET(YPadd_met,T3);
  lit_11 = YPPsym((P)"%add-prop");
  lit_12 = YPPlist(2,YPPsym((P)"class"),YPPsym((P)"prop"));
  T4 = YPsig(LITREF(lit_12),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPadd_prop = YPmet(FUNCODEREF(YPadd_prop),LITREF(lit_11),T4,ENVNUL,PNUL,sloc(703));
  T5 = YPadd_prop;
  VARSET(YPadd_prop,T5);
  lit_13 = YPPsym((P)"box-value");
  lit_14 = YPPlist(1,YPPsym((P)"x"));
  lit_15 = YPPsym((P)"box-value-setter");
  lit_16 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_17 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YLboxG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_172 = YPmet(FUNCODEREF(fun_172),YPfalse,T8,ENVNUL,PNUL,sloc(725));
  T7 = YPsig(LITREF(lit_16),YPPlist(2,VARREF(YLanyG),VARREF(YLboxG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_173 = YPmet(FUNCODEREF(fun_173),YPfalse,T7,ENVNUL,PNUL,sloc(725));
  T6 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_174 = YPmet(FUNCODEREF(fun_174),YPfalse,T6,ENVNUL,PNUL,sloc(725));
  T19 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T18 = (P)YPsig(Ynil,T19,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T17 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_13),T18,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ybox_value,T17);
  T20 = fun_172;
  accessorF5909 = T20;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ybox_value),accessorF5909);
  (P)YPmet_name_setter(VARREF(Ybox_value),accessorF5909);
  getterF5910 = accessorF5909;
  T15 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T14 = (P)YPpair(VARREF(YLanyG),T15);
  T13 = (P)YPsig(Ynil,T14,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T12 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_15),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ybox_value_setter,T12);
  T16 = fun_173;
  accessorF5911 = T16;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ybox_value_setter),accessorF5911);
  (P)YPmet_name_setter(VARREF(Ybox_value_setter),accessorF5911);
  setterF5912 = accessorF5911;
  T11 = fun_174;
  T10 = (P)YPPprop(VARREF(YLboxG),VARREF(Ybox_value),VARREF(Ybox_value_setter),VARREF(YLanyG),T11);
  propF5913 = T10;
  (P)YPmet_env_setter(propF5913,getterF5910);
  (P)YPmet_env_setter(propF5913,setterF5912);
  T9 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLboxG),propF5913);
  lit_18 = YPPsym((P)"src-loc-line");
  lit_19 = YPPlist(1,YPPsym((P)"x"));
  lit_20 = YPPlist(1,YPPsym((P)"x"));
  T22 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLsrc_locG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T22,ENVNUL,PNUL,sloc(725));
  T21 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_176 = YPmet(FUNCODEREF(fun_176),YPfalse,T21,ENVNUL,PNUL,sloc(725));
  T28 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T27 = (P)YPsig(Ynil,T28,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T26 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_18),T27,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysrc_loc_line,T26);
  T29 = fun_175;
  accessorF5914 = T29;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_line),accessorF5914);
  (P)YPmet_name_setter(VARREF(Ysrc_loc_line),accessorF5914);
  getterF5915 = accessorF5914;
  setterF5916 = YPfalse;
  T25 = fun_176;
  T24 = (P)YPPprop(VARREF(YLsrc_locG),VARREF(Ysrc_loc_line),YPfalse,VARREF(YLintG),T25);
  propF5917 = T24;
  (P)YPmet_env_setter(propF5917,getterF5915);
  T23 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsrc_locG),propF5917);
  lit_21 = YPPsym((P)"src-loc-file");
  lit_22 = YPPlist(1,YPPsym((P)"x"));
  lit_23 = YPPlist(1,YPPsym((P)"x"));
  T31 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLsrc_locG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_177 = YPmet(FUNCODEREF(fun_177),YPfalse,T31,ENVNUL,PNUL,sloc(725));
  T30 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T30,ENVNUL,PNUL,sloc(725));
  T37 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T36 = (P)YPsig(Ynil,T37,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T35 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_21),T36,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysrc_loc_file,T35);
  T38 = fun_177;
  accessorF5918 = T38;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysrc_loc_file),accessorF5918);
  (P)YPmet_name_setter(VARREF(Ysrc_loc_file),accessorF5918);
  getterF5919 = accessorF5918;
  setterF5920 = YPfalse;
  T34 = fun_178;
  T33 = (P)YPPprop(VARREF(YLsrc_locG),VARREF(Ysrc_loc_file),YPfalse,VARREF(YLstrG),T34);
  propF5921 = T33;
  (P)YPmet_env_setter(propF5921,getterF5919);
  T32 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsrc_locG),propF5921);
  lit_24 = YPPsym((P)"head");
  lit_25 = YPPlist(1,YPPsym((P)"x"));
  lit_26 = YPPsym((P)"head-setter");
  lit_27 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_28 = YPPlist(1,YPPsym((P)"x"));
  T41 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_179 = YPmet(FUNCODEREF(fun_179),YPfalse,T41,ENVNUL,PNUL,sloc(725));
  T40 = YPsig(LITREF(lit_27),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_180 = YPmet(FUNCODEREF(fun_180),YPfalse,T40,ENVNUL,PNUL,sloc(725));
  T39 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_181 = YPmet(FUNCODEREF(fun_181),YPfalse,T39,ENVNUL,PNUL,sloc(725));
  T52 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T51 = (P)YPsig(Ynil,T52,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T50 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_24),T51,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yhead,T50);
  T53 = fun_179;
  accessorF5922 = T53;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yhead),accessorF5922);
  (P)YPmet_name_setter(VARREF(Yhead),accessorF5922);
  getterF5923 = accessorF5922;
  T48 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T47 = (P)YPpair(VARREF(YLanyG),T48);
  T46 = (P)YPsig(Ynil,T47,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T45 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_26),T46,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yhead_setter,T45);
  T49 = fun_180;
  accessorF5924 = T49;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yhead_setter),accessorF5924);
  (P)YPmet_name_setter(VARREF(Yhead_setter),accessorF5924);
  setterF5925 = accessorF5924;
  T44 = fun_181;
  T43 = (P)YPPprop(VARREF(YLlstG),VARREF(Yhead),VARREF(Yhead_setter),VARREF(YLanyG),T44);
  propF5926 = T43;
  (P)YPmet_env_setter(propF5926,getterF5923);
  (P)YPmet_env_setter(propF5926,setterF5925);
  T42 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF5926);
  lit_29 = YPPsym((P)"tail");
  lit_30 = YPPlist(1,YPPsym((P)"x"));
  lit_31 = YPPsym((P)"tail-setter");
  lit_32 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_33 = YPPlist(1,YPPsym((P)"x"));
  T56 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T56,ENVNUL,PNUL,sloc(725));
  T55 = YPsig(LITREF(lit_32),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_183 = YPmet(FUNCODEREF(fun_183),YPfalse,T55,ENVNUL,PNUL,sloc(725));
  T54 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_184 = YPmet(FUNCODEREF(fun_184),YPfalse,T54,ENVNUL,PNUL,sloc(725));
  T67 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T66 = (P)YPsig(Ynil,T67,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T65 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_29),T66,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytail,T65);
  T68 = fun_182;
  accessorF5927 = T68;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytail),accessorF5927);
  (P)YPmet_name_setter(VARREF(Ytail),accessorF5927);
  getterF5928 = accessorF5927;
  T63 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T62 = (P)YPpair(VARREF(YLanyG),T63);
  T61 = (P)YPsig(Ynil,T62,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T60 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_31),T61,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytail_setter,T60);
  T64 = fun_183;
  accessorF5929 = T64;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytail_setter),accessorF5929);
  (P)YPmet_name_setter(VARREF(Ytail_setter),accessorF5929);
  setterF5930 = accessorF5929;
  T59 = fun_184;
  T58 = (P)YPPprop(VARREF(YLlstG),VARREF(Ytail),VARREF(Ytail_setter),VARREF(YLlstG),T59);
  propF5931 = T58;
  (P)YPmet_env_setter(propF5931,getterF5928);
  (P)YPmet_env_setter(propF5931,setterF5930);
  T57 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLlstG),propF5931);
  lit_34 = YPPsym((P)"sym-name");
  lit_35 = YPPlist(1,YPPsym((P)"x"));
  lit_36 = YPPlist(1,YPPsym((P)"x"));
  T70 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_185 = YPmet(FUNCODEREF(fun_185),YPfalse,T70,ENVNUL,PNUL,sloc(725));
  T69 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_186 = YPmet(FUNCODEREF(fun_186),YPfalse,T69,ENVNUL,PNUL,sloc(725));
  T76 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T75 = (P)YPsig(Ynil,T76,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T74 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_34),T75,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysym_name,T74);
  T77 = fun_185;
  accessorF5932 = T77;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysym_name),accessorF5932);
  (P)YPmet_name_setter(VARREF(Ysym_name),accessorF5932);
  getterF5933 = accessorF5932;
  setterF5934 = YPfalse;
  T73 = fun_186;
  T72 = (P)YPPprop(VARREF(YLsymG),VARREF(Ysym_name),YPfalse,VARREF(YLstrG),T73);
  propF5935 = T72;
  (P)YPmet_env_setter(propF5935,getterF5933);
  T71 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsymG),propF5935);
  lit_37 = YPPsym((P)"class-prop-len");
  lit_38 = YPPlist(1,YPPsym((P)"x"));
  lit_39 = YPPsym((P)"class-prop-len-setter");
  lit_40 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_41 = YPPlist(1,YPPsym((P)"x"));
  T80 = YPsig(LITREF(lit_38),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_187 = YPmet(FUNCODEREF(fun_187),YPfalse,T80,ENVNUL,PNUL,sloc(725));
  T79 = YPsig(LITREF(lit_40),YPPlist(2,VARREF(YLfixnumG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T79,ENVNUL,PNUL,sloc(725));
  T78 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_189 = YPmet(FUNCODEREF(fun_189),YPfalse,T78,ENVNUL,PNUL,sloc(725));
  T91 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T90 = (P)YPsig(Ynil,T91,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T89 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_37),T90,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_prop_len,T89);
  T92 = fun_187;
  accessorF5936 = T92;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len),accessorF5936);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len),accessorF5936);
  getterF5937 = accessorF5936;
  T87 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T86 = (P)YPpair(VARREF(YLanyG),T87);
  T85 = (P)YPsig(Ynil,T86,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T84 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_39),T85,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_prop_len_setter,T84);
  T88 = fun_188;
  accessorF5938 = T88;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_prop_len_setter),accessorF5938);
  (P)YPmet_name_setter(VARREF(Yclass_prop_len_setter),accessorF5938);
  setterF5939 = accessorF5938;
  T83 = fun_189;
  T82 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_prop_len),VARREF(Yclass_prop_len_setter),VARREF(YLfixnumG),T83);
  propF5940 = T82;
  (P)YPmet_env_setter(propF5940,getterF5937);
  (P)YPmet_env_setter(propF5940,setterF5939);
  T81 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF5940);
  lit_42 = YPPsym((P)"class-name");
  lit_43 = YPPlist(1,YPPsym((P)"x"));
  lit_44 = YPPlist(1,YPPsym((P)"x"));
  T94 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_190 = YPmet(FUNCODEREF(fun_190),YPfalse,T94,ENVNUL,PNUL,sloc(725));
  T93 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T93,ENVNUL,PNUL,sloc(725));
  T100 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T99 = (P)YPsig(Ynil,T100,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T98 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_42),T99,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_name,T98);
  T101 = fun_190;
  accessorF5941 = T101;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_name),accessorF5941);
  (P)YPmet_name_setter(VARREF(Yclass_name),accessorF5941);
  getterF5942 = accessorF5941;
  setterF5943 = YPfalse;
  T97 = fun_191;
  T96 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_name),YPfalse,VARREF(YLsymG),T97);
  propF5944 = T96;
  (P)YPmet_env_setter(propF5944,getterF5942);
  T95 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF5944);
  lit_45 = YPPsym((P)"class-parents");
  lit_46 = YPPlist(1,YPPsym((P)"x"));
  lit_47 = YPPsym((P)"class-parents-setter");
  lit_48 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_49 = YPPlist(1,YPPsym((P)"x"));
  T104 = YPsig(LITREF(lit_46),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_192 = YPmet(FUNCODEREF(fun_192),YPfalse,T104,ENVNUL,PNUL,sloc(725));
  T103 = YPsig(LITREF(lit_48),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_193 = YPmet(FUNCODEREF(fun_193),YPfalse,T103,ENVNUL,PNUL,sloc(725));
  T102 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_194 = YPmet(FUNCODEREF(fun_194),YPfalse,T102,ENVNUL,PNUL,sloc(725));
  T115 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T114 = (P)YPsig(Ynil,T115,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T113 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_45),T114,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_parents,T113);
  T116 = fun_192;
  accessorF5945 = T116;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents),accessorF5945);
  (P)YPmet_name_setter(VARREF(Yclass_parents),accessorF5945);
  getterF5946 = accessorF5945;
  T111 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T110 = (P)YPpair(VARREF(YLanyG),T111);
  T109 = (P)YPsig(Ynil,T110,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T108 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_47),T109,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_parents_setter,T108);
  T112 = fun_193;
  accessorF5947 = T112;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_parents_setter),accessorF5947);
  (P)YPmet_name_setter(VARREF(Yclass_parents_setter),accessorF5947);
  setterF5948 = accessorF5947;
  T107 = fun_194;
  T106 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_parents),VARREF(Yclass_parents_setter),VARREF(YLlstG),T107);
  propF5949 = T106;
  (P)YPmet_env_setter(propF5949,getterF5946);
  (P)YPmet_env_setter(propF5949,setterF5948);
  T105 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF5949);
  lit_50 = YPPsym((P)"class-direct-props");
  lit_51 = YPPlist(1,YPPsym((P)"x"));
  lit_52 = YPPsym((P)"class-direct-props-setter");
  lit_53 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_54 = YPPlist(1,YPPsym((P)"x"));
  T119 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_195 = YPmet(FUNCODEREF(fun_195),YPfalse,T119,ENVNUL,PNUL,sloc(725));
  T118 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_196 = YPmet(FUNCODEREF(fun_196),YPfalse,T118,ENVNUL,PNUL,sloc(725));
  T117 = YPsig(LITREF(lit_54),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T117,ENVNUL,PNUL,sloc(725));
  T130 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T129 = (P)YPsig(Ynil,T130,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T128 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_50),T129,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_direct_props,T128);
  T131 = fun_195;
  accessorF5950 = T131;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props),accessorF5950);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props),accessorF5950);
  getterF5951 = accessorF5950;
  T126 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T125 = (P)YPpair(VARREF(YLanyG),T126);
  T124 = (P)YPsig(Ynil,T125,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T123 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_52),T124,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_direct_props_setter,T123);
  T127 = fun_196;
  accessorF5952 = T127;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_direct_props_setter),accessorF5952);
  (P)YPmet_name_setter(VARREF(Yclass_direct_props_setter),accessorF5952);
  setterF5953 = accessorF5952;
  T122 = fun_197;
  T121 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_direct_props),VARREF(Yclass_direct_props_setter),VARREF(YLlstG),T122);
  propF5954 = T121;
  (P)YPmet_env_setter(propF5954,getterF5951);
  (P)YPmet_env_setter(propF5954,setterF5953);
  T120 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF5954);
  lit_55 = YPPsym((P)"class-ancestors");
  lit_56 = YPPlist(1,YPPsym((P)"x"));
  lit_57 = YPPsym((P)"class-ancestors-setter");
  lit_58 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_59 = YPPlist(1,YPPsym((P)"x"));
  T134 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_198 = YPmet(FUNCODEREF(fun_198),YPfalse,T134,ENVNUL,PNUL,sloc(725));
  T133 = YPsig(LITREF(lit_58),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_199 = YPmet(FUNCODEREF(fun_199),YPfalse,T133,ENVNUL,PNUL,sloc(725));
  T132 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_200 = YPmet(FUNCODEREF(fun_200),YPfalse,T132,ENVNUL,PNUL,sloc(725));
  T145 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T144 = (P)YPsig(Ynil,T145,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T143 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_55),T144,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_ancestors,T143);
  T146 = fun_198;
  accessorF5955 = T146;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors),accessorF5955);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors),accessorF5955);
  getterF5956 = accessorF5955;
  T141 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T140 = (P)YPpair(VARREF(YLanyG),T141);
  T139 = (P)YPsig(Ynil,T140,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T138 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_57),T139,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_ancestors_setter,T138);
  T142 = fun_199;
  accessorF5957 = T142;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_ancestors_setter),accessorF5957);
  (P)YPmet_name_setter(VARREF(Yclass_ancestors_setter),accessorF5957);
  setterF5958 = accessorF5957;
  T137 = fun_200;
  T136 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_ancestors),VARREF(Yclass_ancestors_setter),VARREF(YLlstG),T137);
  propF5959 = T136;
  (P)YPmet_env_setter(propF5959,getterF5956);
  (P)YPmet_env_setter(propF5959,setterF5958);
  T135 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF5959);
  lit_60 = YPPsym((P)"class-props");
  lit_61 = YPPlist(1,YPPsym((P)"x"));
  lit_62 = YPPsym((P)"class-props-setter");
  lit_63 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_64 = YPPlist(1,YPPsym((P)"x"));
  T149 = YPsig(LITREF(lit_61),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_201 = YPmet(FUNCODEREF(fun_201),YPfalse,T149,ENVNUL,PNUL,sloc(725));
  T148 = YPsig(LITREF(lit_63),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T148,ENVNUL,PNUL,sloc(725));
  T147 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_203 = YPmet(FUNCODEREF(fun_203),YPfalse,T147,ENVNUL,PNUL,sloc(725));
  T160 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T159 = (P)YPsig(Ynil,T160,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T158 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_60),T159,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_props,T158);
  T161 = fun_201;
  accessorF5960 = T161;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_props),accessorF5960);
  (P)YPmet_name_setter(VARREF(Yclass_props),accessorF5960);
  getterF5961 = accessorF5960;
  T156 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T155 = (P)YPpair(VARREF(YLanyG),T156);
  T154 = (P)YPsig(Ynil,T155,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T153 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_62),T154,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_props_setter,T153);
  T157 = fun_202;
  accessorF5962 = T157;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_props_setter),accessorF5962);
  (P)YPmet_name_setter(VARREF(Yclass_props_setter),accessorF5962);
  setterF5963 = accessorF5962;
  T152 = fun_203;
  T151 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_props),VARREF(Yclass_props_setter),VARREF(YLlstG),T152);
  propF5964 = T151;
  (P)YPmet_env_setter(propF5964,getterF5961);
  (P)YPmet_env_setter(propF5964,setterF5963);
  T150 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF5964);
  lit_65 = YPPsym((P)"class-children");
  lit_66 = YPPlist(1,YPPsym((P)"x"));
  lit_67 = YPPsym((P)"class-children-setter");
  lit_68 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_69 = YPPlist(1,YPPsym((P)"x"));
  T164 = YPsig(LITREF(lit_66),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_204 = YPmet(FUNCODEREF(fun_204),YPfalse,T164,ENVNUL,PNUL,sloc(725));
  T163 = YPsig(LITREF(lit_68),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_205 = YPmet(FUNCODEREF(fun_205),YPfalse,T163,ENVNUL,PNUL,sloc(725));
  T162 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_206 = YPmet(FUNCODEREF(fun_206),YPfalse,T162,ENVNUL,PNUL,sloc(725));
  T175 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T174 = (P)YPsig(Ynil,T175,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T173 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_65),T174,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_children,T173);
  T176 = fun_204;
  accessorF5965 = T176;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_children),accessorF5965);
  (P)YPmet_name_setter(VARREF(Yclass_children),accessorF5965);
  getterF5966 = accessorF5965;
  T171 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T170 = (P)YPpair(VARREF(YLanyG),T171);
  T169 = (P)YPsig(Ynil,T170,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T168 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_67),T169,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_children_setter,T168);
  T172 = fun_205;
  accessorF5967 = T172;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_children_setter),accessorF5967);
  (P)YPmet_name_setter(VARREF(Yclass_children_setter),accessorF5967);
  setterF5968 = accessorF5967;
  T167 = fun_206;
  T166 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_children),VARREF(Yclass_children_setter),VARREF(YLlstG),T167);
  propF5969 = T166;
  (P)YPmet_env_setter(propF5969,getterF5966);
  (P)YPmet_env_setter(propF5969,setterF5968);
  T165 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF5969);
  lit_70 = YPPsym((P)"class-gens");
  lit_71 = YPPlist(1,YPPsym((P)"x"));
  lit_72 = YPPsym((P)"class-gens-setter");
  lit_73 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_74 = YPPlist(1,YPPsym((P)"x"));
  T179 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_207 = YPmet(FUNCODEREF(fun_207),YPfalse,T179,ENVNUL,PNUL,sloc(725));
  T178 = YPsig(LITREF(lit_73),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_208 = YPmet(FUNCODEREF(fun_208),YPfalse,T178,ENVNUL,PNUL,sloc(725));
  T177 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T177,ENVNUL,PNUL,sloc(725));
  T190 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T189 = (P)YPsig(Ynil,T190,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T188 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_70),T189,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_gens,T188);
  T191 = fun_207;
  accessorF5970 = T191;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens),accessorF5970);
  (P)YPmet_name_setter(VARREF(Yclass_gens),accessorF5970);
  getterF5971 = accessorF5970;
  T186 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T185 = (P)YPpair(VARREF(YLanyG),T186);
  T184 = (P)YPsig(Ynil,T185,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T183 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_72),T184,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_gens_setter,T183);
  T187 = fun_208;
  accessorF5972 = T187;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_gens_setter),accessorF5972);
  (P)YPmet_name_setter(VARREF(Yclass_gens_setter),accessorF5972);
  setterF5973 = accessorF5972;
  T182 = fun_209;
  T181 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_gens),VARREF(Yclass_gens_setter),VARREF(YLlstG),T182);
  propF5974 = T181;
  (P)YPmet_env_setter(propF5974,getterF5971);
  (P)YPmet_env_setter(propF5974,setterF5973);
  T180 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF5974);
  lit_75 = YPPsym((P)"class-mets");
  lit_76 = YPPlist(1,YPPsym((P)"x"));
  lit_77 = YPPsym((P)"class-mets-setter");
  lit_78 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_79 = YPPlist(1,YPPsym((P)"x"));
  T194 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T194,ENVNUL,PNUL,sloc(725));
  T193 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLlstG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_211 = YPmet(FUNCODEREF(fun_211),YPfalse,T193,ENVNUL,PNUL,sloc(725));
  T192 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_212 = YPmet(FUNCODEREF(fun_212),YPfalse,T192,ENVNUL,PNUL,sloc(725));
  T205 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T204 = (P)YPsig(Ynil,T205,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T203 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_75),T204,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_mets,T203);
  T206 = fun_210;
  accessorF5975 = T206;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets),accessorF5975);
  (P)YPmet_name_setter(VARREF(Yclass_mets),accessorF5975);
  getterF5976 = accessorF5975;
  T201 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T200 = (P)YPpair(VARREF(YLanyG),T201);
  T199 = (P)YPsig(Ynil,T200,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T198 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_77),T199,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_mets_setter,T198);
  T202 = fun_211;
  accessorF5977 = T202;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_mets_setter),accessorF5977);
  (P)YPmet_name_setter(VARREF(Yclass_mets_setter),accessorF5977);
  setterF5978 = accessorF5977;
  T197 = fun_212;
  T196 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_mets),VARREF(Yclass_mets_setter),VARREF(YLlstG),T197);
  propF5979 = T196;
  (P)YPmet_env_setter(propF5979,getterF5976);
  (P)YPmet_env_setter(propF5979,setterF5978);
  T195 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF5979);
  lit_80 = YPPsym((P)"class-forward");
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  lit_82 = YPPsym((P)"class-forward-setter");
  lit_83 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_84 = YPPlist(1,YPPsym((P)"x"));
  T209 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_213 = YPmet(FUNCODEREF(fun_213),YPfalse,T209,ENVNUL,PNUL,sloc(725));
  T208 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLanyG),VARREF(YLclassG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_214 = YPmet(FUNCODEREF(fun_214),YPfalse,T208,ENVNUL,PNUL,sloc(725));
  T207 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_215 = YPmet(FUNCODEREF(fun_215),YPfalse,T207,ENVNUL,PNUL,sloc(725));
  T220 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T219 = (P)YPsig(Ynil,T220,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T218 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_80),T219,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_forward,T218);
  T221 = fun_213;
  accessorF5980 = T221;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward),accessorF5980);
  (P)YPmet_name_setter(VARREF(Yclass_forward),accessorF5980);
  getterF5981 = accessorF5980;
  T216 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T215 = (P)YPpair(VARREF(YLanyG),T216);
  T214 = (P)YPsig(Ynil,T215,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T213 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_82),T214,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_forward_setter,T213);
  T217 = fun_214;
  accessorF5982 = T217;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_forward_setter),accessorF5982);
  (P)YPmet_name_setter(VARREF(Yclass_forward_setter),accessorF5982);
  setterF5983 = accessorF5982;
  T212 = fun_215;
  T211 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_forward),VARREF(Yclass_forward_setter),VARREF(YLanyG),T212);
  propF5984 = T211;
  (P)YPmet_env_setter(propF5984,getterF5981);
  (P)YPmet_env_setter(propF5984,setterF5983);
  T210 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF5984);
  lit_85 = YPPsym((P)"class-type-cache");
  lit_86 = YPPlist(1,YPPsym((P)"x"));
  lit_87 = YPPlist(1,YPPsym((P)"x"));
  T223 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T223,ENVNUL,PNUL,sloc(725));
  T222 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_217 = YPmet(FUNCODEREF(fun_217),YPfalse,T222,ENVNUL,PNUL,sloc(725));
  T229 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T228 = (P)YPsig(Ynil,T229,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T227 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_85),T228,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_type_cache,T227);
  T230 = fun_216;
  accessorF5985 = T230;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_type_cache),accessorF5985);
  (P)YPmet_name_setter(VARREF(Yclass_type_cache),accessorF5985);
  getterF5986 = accessorF5985;
  setterF5987 = YPfalse;
  T226 = fun_217;
  T225 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_type_cache),YPfalse,VARREF(YLanyG),T226);
  propF5988 = T225;
  (P)YPmet_env_setter(propF5988,getterF5986);
  T224 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF5988);
  lit_88 = YPPsym((P)"class-id");
  lit_89 = YPPlist(1,YPPsym((P)"x"));
  lit_90 = YPPlist(1,YPPsym((P)"x"));
  T232 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_218 = YPmet(FUNCODEREF(fun_218),YPfalse,T232,ENVNUL,PNUL,sloc(725));
  T231 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_219 = YPmet(FUNCODEREF(fun_219),YPfalse,T231,ENVNUL,PNUL,sloc(725));
  T238 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T237 = (P)YPsig(Ynil,T238,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T236 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_88),T237,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_id,T236);
  T239 = fun_218;
  accessorF5989 = T239;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_id),accessorF5989);
  (P)YPmet_name_setter(VARREF(Yclass_id),accessorF5989);
  getterF5990 = accessorF5989;
  setterF5991 = YPfalse;
  T235 = fun_219;
  T234 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_id),YPfalse,VARREF(YLfixnumG),T235);
  propF5992 = T234;
  (P)YPmet_env_setter(propF5992,getterF5990);
  T233 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF5992);
  lit_91 = YPPsym((P)"class-row");
  lit_92 = YPPlist(1,YPPsym((P)"x"));
  lit_93 = YPPlist(1,YPPsym((P)"x"));
  T241 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YLclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_220 = YPmet(FUNCODEREF(fun_220),YPfalse,T241,ENVNUL,PNUL,sloc(725));
  T240 = YPsig(LITREF(lit_93),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T240,ENVNUL,PNUL,sloc(725));
  T247 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T246 = (P)YPsig(Ynil,T247,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T245 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_91),T246,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yclass_row,T245);
  T248 = fun_220;
  accessorF5993 = T248;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yclass_row),accessorF5993);
  (P)YPmet_name_setter(VARREF(Yclass_row),accessorF5993);
  getterF5994 = accessorF5993;
  setterF5995 = YPfalse;
  T244 = fun_221;
  T243 = (P)YPPprop(VARREF(YLclassG),VARREF(Yclass_row),YPfalse,VARREF(YLtupG),T244);
  propF5996 = T243;
  (P)YPmet_env_setter(propF5996,getterF5994);
  T242 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLclassG),propF5996);
  lit_94 = YPPsym((P)"type-object");
  lit_95 = YPPlist(1,YPPsym((P)"x"));
  lit_96 = YPPlist(1,YPPsym((P)"x"));
  T250 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLsingletonG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T250,ENVNUL,PNUL,sloc(725));
  T249 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_223 = YPmet(FUNCODEREF(fun_223),YPfalse,T249,ENVNUL,PNUL,sloc(725));
  T256 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T255 = (P)YPsig(Ynil,T256,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T254 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_94),T255,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_object,T254);
  T257 = fun_222;
  accessorF5997 = T257;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_object),accessorF5997);
  (P)YPmet_name_setter(VARREF(Ytype_object),accessorF5997);
  getterF5998 = accessorF5997;
  setterF5999 = YPfalse;
  T253 = fun_223;
  T252 = (P)YPPprop(VARREF(YLsingletonG),VARREF(Ytype_object),YPfalse,VARREF(YLanyG),T253);
  propF6000 = T252;
  (P)YPmet_env_setter(propF6000,getterF5998);
  T251 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsingletonG),propF6000);
  lit_97 = YPPsym((P)"type-class");
  lit_98 = YPPlist(1,YPPsym((P)"x"));
  lit_99 = YPPlist(1,YPPsym((P)"x"));
  T259 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YLsubclassG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_224 = YPmet(FUNCODEREF(fun_224),YPfalse,T259,ENVNUL,PNUL,sloc(725));
  T258 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_225 = YPmet(FUNCODEREF(fun_225),YPfalse,T258,ENVNUL,PNUL,sloc(725));
  T265 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T264 = (P)YPsig(Ynil,T265,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T263 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_97),T264,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ytype_class,T263);
  T266 = fun_224;
  accessorF6001 = T266;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ytype_class),accessorF6001);
  (P)YPmet_name_setter(VARREF(Ytype_class),accessorF6001);
  getterF6002 = accessorF6001;
  setterF6003 = YPfalse;
  T262 = fun_225;
  T261 = (P)YPPprop(VARREF(YLsubclassG),VARREF(Ytype_class),YPfalse,VARREF(YLclassG),T262);
  propF6004 = T261;
  (P)YPmet_env_setter(propF6004,getterF6002);
  T260 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsubclassG),propF6004);
  lit_100 = YPPsym((P)"union-elts");
  lit_101 = YPPlist(1,YPPsym((P)"x"));
  lit_102 = YPPlist(1,YPPsym((P)"x"));
  T268 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLunionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_226 = YPmet(FUNCODEREF(fun_226),YPfalse,T268,ENVNUL,PNUL,sloc(725));
  T267 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_227 = YPmet(FUNCODEREF(fun_227),YPfalse,T267,ENVNUL,PNUL,sloc(725));
  T274 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T273 = (P)YPsig(Ynil,T274,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T272 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_100),T273,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yunion_elts,T272);
  T275 = fun_226;
  accessorF6005 = T275;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yunion_elts),accessorF6005);
  (P)YPmet_name_setter(VARREF(Yunion_elts),accessorF6005);
  getterF6006 = accessorF6005;
  setterF6007 = YPfalse;
  T271 = fun_227;
  T270 = (P)YPPprop(VARREF(YLunionG),VARREF(Yunion_elts),YPfalse,VARREF(YLlstG),T271);
  propF6008 = T270;
  (P)YPmet_env_setter(propF6008,getterF6006);
  T269 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLunionG),propF6008);
  lit_103 = YPPsym((P)"product-elts");
  lit_104 = YPPlist(1,YPPsym((P)"x"));
  lit_105 = YPPlist(1,YPPsym((P)"x"));
  T277 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YLproductG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_228 = YPmet(FUNCODEREF(fun_228),YPfalse,T277,ENVNUL,PNUL,sloc(725));
  T276 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_229 = YPmet(FUNCODEREF(fun_229),YPfalse,T276,ENVNUL,PNUL,sloc(725));
  T283 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T282 = (P)YPsig(Ynil,T283,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T281 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_103),T282,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yproduct_elts,T281);
  T284 = fun_228;
  accessorF6009 = T284;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yproduct_elts),accessorF6009);
  (P)YPmet_name_setter(VARREF(Yproduct_elts),accessorF6009);
  getterF6010 = accessorF6009;
  setterF6011 = YPfalse;
  T280 = fun_229;
  T279 = (P)YPPprop(VARREF(YLproductG),VARREF(Yproduct_elts),YPfalse,VARREF(YLtupG),T280);
  propF6012 = T279;
  (P)YPmet_env_setter(propF6012,getterF6010);
  T278 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLproductG),propF6012);
  lit_106 = YPPsym((P)"prop-owner");
  lit_107 = YPPlist(1,YPPsym((P)"x"));
  lit_108 = YPPlist(1,YPPsym((P)"x"));
  T286 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_230 = YPmet(FUNCODEREF(fun_230),YPfalse,T286,ENVNUL,PNUL,sloc(725));
  T285 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_231 = YPmet(FUNCODEREF(fun_231),YPfalse,T285,ENVNUL,PNUL,sloc(725));
  T292 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T291 = (P)YPsig(Ynil,T292,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T290 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_106),T291,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_owner,T290);
  T293 = fun_230;
  accessorF6013 = T293;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_owner),accessorF6013);
  (P)YPmet_name_setter(VARREF(Yprop_owner),accessorF6013);
  getterF6014 = accessorF6013;
  setterF6015 = YPfalse;
  T289 = fun_231;
  T288 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_owner),YPfalse,VARREF(YLanyG),T289);
  propF6016 = T288;
  (P)YPmet_env_setter(propF6016,getterF6014);
  T287 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF6016);
  lit_109 = YPPsym((P)"prop-getter");
  lit_110 = YPPlist(1,YPPsym((P)"x"));
  lit_111 = YPPlist(1,YPPsym((P)"x"));
  T295 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T295,ENVNUL,PNUL,sloc(725));
  T294 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_233 = YPmet(FUNCODEREF(fun_233),YPfalse,T294,ENVNUL,PNUL,sloc(725));
  T301 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T300 = (P)YPsig(Ynil,T301,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T299 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_109),T300,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_getter,T299);
  T302 = fun_232;
  accessorF6017 = T302;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_getter),accessorF6017);
  (P)YPmet_name_setter(VARREF(Yprop_getter),accessorF6017);
  getterF6018 = accessorF6017;
  setterF6019 = YPfalse;
  T298 = fun_233;
  T297 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_getter),YPfalse,VARREF(YLfunG),T298);
  propF6020 = T297;
  (P)YPmet_env_setter(propF6020,getterF6018);
  T296 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF6020);
  lit_112 = YPPsym((P)"prop-setter");
  lit_113 = YPPlist(1,YPPsym((P)"x"));
  lit_114 = YPPlist(1,YPPsym((P)"x"));
  T304 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_234 = YPmet(FUNCODEREF(fun_234),YPfalse,T304,ENVNUL,PNUL,sloc(725));
  T303 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_235 = YPmet(FUNCODEREF(fun_235),YPfalse,T303,ENVNUL,PNUL,sloc(725));
  T310 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T309 = (P)YPsig(Ynil,T310,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T308 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_112),T309,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_setter,T308);
  T311 = fun_234;
  accessorF6021 = T311;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_setter),accessorF6021);
  (P)YPmet_name_setter(VARREF(Yprop_setter),accessorF6021);
  getterF6022 = accessorF6021;
  setterF6023 = YPfalse;
  T307 = fun_235;
  T306 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_setter),YPfalse,VARREF(YLanyG),T307);
  propF6024 = T306;
  (P)YPmet_env_setter(propF6024,getterF6022);
  T305 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF6024);
  lit_115 = YPPsym((P)"prop-type");
  lit_116 = YPPlist(1,YPPsym((P)"x"));
  lit_117 = YPPlist(1,YPPsym((P)"x"));
  T313 = YPsig(LITREF(lit_116),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T313,ENVNUL,PNUL,sloc(725));
  T312 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_237 = YPmet(FUNCODEREF(fun_237),YPfalse,T312,ENVNUL,PNUL,sloc(725));
  T319 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T318 = (P)YPsig(Ynil,T319,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T317 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_115),T318,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_type,T317);
  T320 = fun_236;
  accessorF6025 = T320;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_type),accessorF6025);
  (P)YPmet_name_setter(VARREF(Yprop_type),accessorF6025);
  getterF6026 = accessorF6025;
  setterF6027 = YPfalse;
  T316 = fun_237;
  T315 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_type),YPfalse,VARREF(YLtypeG),T316);
  propF6028 = T315;
  (P)YPmet_env_setter(propF6028,getterF6026);
  T314 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF6028);
  lit_118 = YPPsym((P)"prop-init");
  lit_119 = YPPlist(1,YPPsym((P)"x"));
  lit_120 = YPPlist(1,YPPsym((P)"x"));
  lit_121 = YPPlist(1,YPPsym((P)"x"));
  T323 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YLpropG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_238 = YPmet(FUNCODEREF(fun_238),YPfalse,T323,ENVNUL,PNUL,sloc(725));
  T322 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_239 = YPmet(FUNCODEREF(fun_239),YPfalse,T322,ENVNUL,PNUL,sloc(156));
  T321 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_240 = YPmet(FUNCODEREF(fun_240),YPfalse,T321,ENVNUL,PNUL,sloc(725));
  T329 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T328 = (P)YPsig(Ynil,T329,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T327 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_118),T328,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yprop_init,T327);
  T330 = fun_238;
  accessorF6029 = T330;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yprop_init),accessorF6029);
  (P)YPmet_name_setter(VARREF(Yprop_init),accessorF6029);
  getterF6030 = accessorF6029;
  setterF6031 = YPfalse;
  T326 = fun_240;
  T325 = (P)YPPprop(VARREF(YLpropG),VARREF(Yprop_init),YPfalse,VARREF(YLfunG),T326);
  propF6032 = T325;
  (P)YPmet_env_setter(propF6032,getterF6030);
  T324 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLpropG),propF6032);
  lit_122 = YPPsym((P)"gen-cache-missable?");
  lit_123 = YPPlist(1,YPPsym((P)"x"));
  lit_124 = YPPlist(1,YPPsym((P)"x"));
  T332 = YPsig(LITREF(lit_123),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_241 = YPmet(FUNCODEREF(fun_241),YPfalse,T332,ENVNUL,PNUL,sloc(725));
  T331 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_242 = YPmet(FUNCODEREF(fun_242),YPfalse,T331,ENVNUL,PNUL,sloc(725));
  T338 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T337 = (P)YPsig(Ynil,T338,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T336 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_122),T337,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_missableQ,T336);
  T339 = fun_241;
  accessorF6033 = T339;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_missableQ),accessorF6033);
  (P)YPmet_name_setter(VARREF(Ygen_cache_missableQ),accessorF6033);
  getterF6034 = accessorF6033;
  setterF6035 = YPfalse;
  T335 = fun_242;
  T334 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_missableQ),YPfalse,VARREF(YLlogG),T335);
  propF6036 = T334;
  (P)YPmet_env_setter(propF6036,getterF6034);
  T333 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF6036);
  lit_125 = YPPsym((P)"gen-cache-arg-pos");
  lit_126 = YPPlist(1,YPPsym((P)"x"));
  lit_127 = YPPlist(1,YPPsym((P)"x"));
  T341 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_243 = YPmet(FUNCODEREF(fun_243),YPfalse,T341,ENVNUL,PNUL,sloc(725));
  T340 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_244 = YPmet(FUNCODEREF(fun_244),YPfalse,T340,ENVNUL,PNUL,sloc(725));
  T347 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T346 = (P)YPsig(Ynil,T347,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T345 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_125),T346,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_arg_pos,T345);
  T348 = fun_243;
  accessorF6037 = T348;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_arg_pos),accessorF6037);
  (P)YPmet_name_setter(VARREF(Ygen_cache_arg_pos),accessorF6037);
  getterF6038 = accessorF6037;
  setterF6039 = YPfalse;
  T344 = fun_244;
  T343 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_arg_pos),YPfalse,VARREF(YLfixnumG),T344);
  propF6040 = T343;
  (P)YPmet_env_setter(propF6040,getterF6038);
  T342 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF6040);
  lit_128 = YPPsym((P)"gen-cache-singletons");
  lit_129 = YPPlist(1,YPPsym((P)"x"));
  lit_130 = YPPlist(1,YPPsym((P)"x"));
  T350 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_245 = YPmet(FUNCODEREF(fun_245),YPfalse,T350,ENVNUL,PNUL,sloc(725));
  T349 = YPsig(LITREF(lit_130),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_246 = YPmet(FUNCODEREF(fun_246),YPfalse,T349,ENVNUL,PNUL,sloc(725));
  T356 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T355 = (P)YPsig(Ynil,T356,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T354 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_128),T355,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_singletons,T354);
  T357 = fun_245;
  accessorF6041 = T357;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_singletons),accessorF6041);
  (P)YPmet_name_setter(VARREF(Ygen_cache_singletons),accessorF6041);
  getterF6042 = accessorF6041;
  setterF6043 = YPfalse;
  T353 = fun_246;
  T352 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_singletons),YPfalse,VARREF(YLlstG),T353);
  propF6044 = T352;
  (P)YPmet_env_setter(propF6044,getterF6042);
  T351 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF6044);
  lit_131 = YPPsym((P)"gen-cache-classes");
  lit_132 = YPPlist(1,YPPsym((P)"x"));
  lit_133 = YPPlist(1,YPPsym((P)"x"));
  T359 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YLgen_cacheG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_247 = YPmet(FUNCODEREF(fun_247),YPfalse,T359,ENVNUL,PNUL,sloc(725));
  T358 = YPsig(LITREF(lit_133),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_248 = YPmet(FUNCODEREF(fun_248),YPfalse,T358,ENVNUL,PNUL,sloc(725));
  T365 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T364 = (P)YPsig(Ynil,T365,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T363 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_131),T364,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_cache_classes,T363);
  T366 = fun_247;
  accessorF6045 = T366;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_cache_classes),accessorF6045);
  (P)YPmet_name_setter(VARREF(Ygen_cache_classes),accessorF6045);
  getterF6046 = accessorF6045;
  setterF6047 = YPfalse;
  T362 = fun_248;
  T361 = (P)YPPprop(VARREF(YLgen_cacheG),VARREF(Ygen_cache_classes),YPfalse,VARREF(YLlstG),T362);
  propF6048 = T361;
  (P)YPmet_env_setter(propF6048,getterF6046);
  T360 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgen_cacheG),propF6048);
  lit_134 = YPPsym((P)"sig-names");
  lit_135 = YPPlist(1,YPPsym((P)"x"));
  lit_136 = YPPsym((P)"sig-names-setter");
  lit_137 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_138 = YPPlist(1,YPPsym((P)"x"));
  T369 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_249 = YPmet(FUNCODEREF(fun_249),YPfalse,T369,ENVNUL,PNUL,sloc(725));
  T368 = YPsig(LITREF(lit_137),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_250 = YPmet(FUNCODEREF(fun_250),YPfalse,T368,ENVNUL,PNUL,sloc(725));
  T367 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_251 = YPmet(FUNCODEREF(fun_251),YPfalse,T367,ENVNUL,PNUL,sloc(725));
  T380 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T379 = (P)YPsig(Ynil,T380,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T378 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_134),T379,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names,T378);
  T381 = fun_249;
  accessorF6049 = T381;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_names),accessorF6049);
  (P)YPmet_name_setter(VARREF(Ysig_names),accessorF6049);
  getterF6050 = accessorF6049;
  T376 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T375 = (P)YPpair(VARREF(YLanyG),T376);
  T374 = (P)YPsig(Ynil,T375,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T373 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_136),T374,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_names_setter,T373);
  T377 = fun_250;
  accessorF6051 = T377;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_names_setter),accessorF6051);
  (P)YPmet_name_setter(VARREF(Ysig_names_setter),accessorF6051);
  setterF6052 = accessorF6051;
  T372 = fun_251;
  T371 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_names),VARREF(Ysig_names_setter),VARREF(YLlstG),T372);
  propF6053 = T371;
  (P)YPmet_env_setter(propF6053,getterF6050);
  (P)YPmet_env_setter(propF6053,setterF6052);
  T370 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF6053);
  lit_139 = YPPsym((P)"sig-specs");
  lit_140 = YPPlist(1,YPPsym((P)"x"));
  lit_141 = YPPsym((P)"sig-specs-setter");
  lit_142 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_143 = YPPlist(1,YPPsym((P)"x"));
  T384 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_252 = YPmet(FUNCODEREF(fun_252),YPfalse,T384,ENVNUL,PNUL,sloc(725));
  T383 = YPsig(LITREF(lit_142),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_253 = YPmet(FUNCODEREF(fun_253),YPfalse,T383,ENVNUL,PNUL,sloc(725));
  T382 = YPsig(LITREF(lit_143),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_254 = YPmet(FUNCODEREF(fun_254),YPfalse,T382,ENVNUL,PNUL,sloc(725));
  T395 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T394 = (P)YPsig(Ynil,T395,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T393 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_139),T394,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs,T393);
  T396 = fun_252;
  accessorF6054 = T396;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs),accessorF6054);
  (P)YPmet_name_setter(VARREF(Ysig_specs),accessorF6054);
  getterF6055 = accessorF6054;
  T391 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T390 = (P)YPpair(VARREF(YLanyG),T391);
  T389 = (P)YPsig(Ynil,T390,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T388 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_141),T389,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_specs_setter,T388);
  T392 = fun_253;
  accessorF6056 = T392;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_specs_setter),accessorF6056);
  (P)YPmet_name_setter(VARREF(Ysig_specs_setter),accessorF6056);
  setterF6057 = accessorF6056;
  T387 = fun_254;
  T386 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_specs),VARREF(Ysig_specs_setter),VARREF(YLlstG),T387);
  propF6058 = T386;
  (P)YPmet_env_setter(propF6058,getterF6055);
  (P)YPmet_env_setter(propF6058,setterF6057);
  T385 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF6058);
  lit_144 = YPPsym((P)"sig-nary?");
  lit_145 = YPPlist(1,YPPsym((P)"x"));
  lit_146 = YPPsym((P)"sig-nary?-setter");
  lit_147 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_148 = YPPlist(1,YPPsym((P)"x"));
  T399 = YPsig(LITREF(lit_145),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_255 = YPmet(FUNCODEREF(fun_255),YPfalse,T399,ENVNUL,PNUL,sloc(725));
  T398 = YPsig(LITREF(lit_147),YPPlist(2,VARREF(YLlogG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_256 = YPmet(FUNCODEREF(fun_256),YPfalse,T398,ENVNUL,PNUL,sloc(725));
  T397 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_257 = YPmet(FUNCODEREF(fun_257),YPfalse,T397,ENVNUL,PNUL,sloc(725));
  T410 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T409 = (P)YPsig(Ynil,T410,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T408 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_144),T409,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ,T408);
  T411 = fun_255;
  accessorF6059 = T411;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ),accessorF6059);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ),accessorF6059);
  getterF6060 = accessorF6059;
  T406 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T405 = (P)YPpair(VARREF(YLanyG),T406);
  T404 = (P)YPsig(Ynil,T405,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T403 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_146),T404,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_naryQ_setter,T403);
  T407 = fun_256;
  accessorF6061 = T407;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_naryQ_setter),accessorF6061);
  (P)YPmet_name_setter(VARREF(Ysig_naryQ_setter),accessorF6061);
  setterF6062 = accessorF6061;
  T402 = fun_257;
  T401 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_naryQ),VARREF(Ysig_naryQ_setter),VARREF(YLlogG),T402);
  propF6063 = T401;
  (P)YPmet_env_setter(propF6063,getterF6060);
  (P)YPmet_env_setter(propF6063,setterF6062);
  T400 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF6063);
  lit_149 = YPPsym((P)"sig-arity");
  lit_150 = YPPlist(1,YPPsym((P)"x"));
  lit_151 = YPPsym((P)"sig-arity-setter");
  lit_152 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_153 = YPPlist(1,YPPsym((P)"x"));
  T414 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_258 = YPmet(FUNCODEREF(fun_258),YPfalse,T414,ENVNUL,PNUL,sloc(725));
  T413 = YPsig(LITREF(lit_152),YPPlist(2,VARREF(YLfixnumG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_259 = YPmet(FUNCODEREF(fun_259),YPfalse,T413,ENVNUL,PNUL,sloc(725));
  T412 = YPsig(LITREF(lit_153),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_260 = YPmet(FUNCODEREF(fun_260),YPfalse,T412,ENVNUL,PNUL,sloc(725));
  T425 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T424 = (P)YPsig(Ynil,T425,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T423 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_149),T424,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity,T423);
  T426 = fun_258;
  accessorF6064 = T426;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity),accessorF6064);
  (P)YPmet_name_setter(VARREF(Ysig_arity),accessorF6064);
  getterF6065 = accessorF6064;
  T421 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T420 = (P)YPpair(VARREF(YLanyG),T421);
  T419 = (P)YPsig(Ynil,T420,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T418 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_151),T419,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_arity_setter,T418);
  T422 = fun_259;
  accessorF6066 = T422;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_arity_setter),accessorF6066);
  (P)YPmet_name_setter(VARREF(Ysig_arity_setter),accessorF6066);
  setterF6067 = accessorF6066;
  T417 = fun_260;
  T416 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_arity),VARREF(Ysig_arity_setter),VARREF(YLfixnumG),T417);
  propF6068 = T416;
  (P)YPmet_env_setter(propF6068,getterF6065);
  (P)YPmet_env_setter(propF6068,setterF6067);
  T415 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF6068);
  lit_154 = YPPsym((P)"sig-val");
  lit_155 = YPPlist(1,YPPsym((P)"x"));
  lit_156 = YPPsym((P)"sig-val-setter");
  lit_157 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_158 = YPPlist(1,YPPsym((P)"x"));
  T429 = YPsig(LITREF(lit_155),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_261 = YPmet(FUNCODEREF(fun_261),YPfalse,T429,ENVNUL,PNUL,sloc(725));
  T428 = YPsig(LITREF(lit_157),YPPlist(2,VARREF(YLanyG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_262 = YPmet(FUNCODEREF(fun_262),YPfalse,T428,ENVNUL,PNUL,sloc(725));
  T427 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_263 = YPmet(FUNCODEREF(fun_263),YPfalse,T427,ENVNUL,PNUL,sloc(725));
  T440 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T439 = (P)YPsig(Ynil,T440,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T438 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_154),T439,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val,T438);
  T441 = fun_261;
  accessorF6069 = T441;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_val),accessorF6069);
  (P)YPmet_name_setter(VARREF(Ysig_val),accessorF6069);
  getterF6070 = accessorF6069;
  T436 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T435 = (P)YPpair(VARREF(YLanyG),T436);
  T434 = (P)YPsig(Ynil,T435,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T433 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_156),T434,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_val_setter,T433);
  T437 = fun_262;
  accessorF6071 = T437;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_val_setter),accessorF6071);
  (P)YPmet_name_setter(VARREF(Ysig_val_setter),accessorF6071);
  setterF6072 = accessorF6071;
  T432 = fun_263;
  T431 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_val),VARREF(Ysig_val_setter),VARREF(YLanyG),T432);
  propF6073 = T431;
  (P)YPmet_env_setter(propF6073,getterF6070);
  (P)YPmet_env_setter(propF6073,setterF6072);
  T430 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF6073);
  lit_159 = YPPsym((P)"sig-unification-vars");
  lit_160 = YPPlist(1,YPPsym((P)"x"));
  lit_161 = YPPsym((P)"sig-unification-vars-setter");
  lit_162 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_163 = YPPlist(1,YPPsym((P)"x"));
  T444 = YPsig(LITREF(lit_160),YPPlist(1,VARREF(YLsigG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_264 = YPmet(FUNCODEREF(fun_264),YPfalse,T444,ENVNUL,PNUL,sloc(725));
  T443 = YPsig(LITREF(lit_162),YPPlist(2,VARREF(YLlstG),VARREF(YLsigG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_265 = YPmet(FUNCODEREF(fun_265),YPfalse,T443,ENVNUL,PNUL,sloc(725));
  T442 = YPsig(LITREF(lit_163),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_266 = YPmet(FUNCODEREF(fun_266),YPfalse,T442,ENVNUL,PNUL,sloc(725));
  T455 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T454 = (P)YPsig(Ynil,T455,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T453 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_159),T454,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars,T453);
  T456 = fun_264;
  accessorF6074 = T456;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars),accessorF6074);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars),accessorF6074);
  getterF6075 = accessorF6074;
  T451 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T450 = (P)YPpair(VARREF(YLanyG),T451);
  T449 = (P)YPsig(Ynil,T450,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T448 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_161),T449,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ysig_unification_vars_setter,T448);
  T452 = fun_265;
  accessorF6076 = T452;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ysig_unification_vars_setter),accessorF6076);
  (P)YPmet_name_setter(VARREF(Ysig_unification_vars_setter),accessorF6076);
  setterF6077 = accessorF6076;
  T447 = fun_266;
  T446 = (P)YPPprop(VARREF(YLsigG),VARREF(Ysig_unification_vars),VARREF(Ysig_unification_vars_setter),VARREF(YLlstG),T447);
  propF6078 = T446;
  (P)YPmet_env_setter(propF6078,getterF6075);
  (P)YPmet_env_setter(propF6078,setterF6077);
  T445 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLsigG),propF6078);
  lit_164 = YPPsym((P)"fun-code");
  lit_165 = YPPlist(1,YPPsym((P)"x"));
  lit_166 = YPPlist(1,YPPsym((P)"x"));
  T458 = YPsig(LITREF(lit_165),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_267 = YPmet(FUNCODEREF(fun_267),YPfalse,T458,ENVNUL,PNUL,sloc(725));
  T457 = YPsig(LITREF(lit_166),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_268 = YPmet(FUNCODEREF(fun_268),YPfalse,T457,ENVNUL,PNUL,sloc(725));
  T464 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T463 = (P)YPsig(Ynil,T464,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T462 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_164),T463,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_code,T462);
  T465 = fun_267;
  accessorF6079 = T465;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_code),accessorF6079);
  (P)YPmet_name_setter(VARREF(Yfun_code),accessorF6079);
  getterF6080 = accessorF6079;
  setterF6081 = YPfalse;
  T461 = fun_268;
  T460 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_code),YPfalse,VARREF(YLanyG),T461);
  propF6082 = T460;
  (P)YPmet_env_setter(propF6082,getterF6080);
  T459 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF6082);
  lit_167 = YPPsym((P)"fun-name");
  lit_168 = YPPlist(1,YPPsym((P)"x"));
  lit_169 = YPPsym((P)"fun-name-setter");
  lit_170 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_171 = YPPlist(1,YPPsym((P)"x"));
  T468 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_269 = YPmet(FUNCODEREF(fun_269),YPfalse,T468,ENVNUL,PNUL,sloc(725));
  T467 = YPsig(LITREF(lit_170),YPPlist(2,VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_270 = YPmet(FUNCODEREF(fun_270),YPfalse,T467,ENVNUL,PNUL,sloc(725));
  T466 = YPsig(LITREF(lit_171),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_271 = YPmet(FUNCODEREF(fun_271),YPfalse,T466,ENVNUL,PNUL,sloc(725));
  T479 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T478 = (P)YPsig(Ynil,T479,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T477 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_167),T478,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name,T477);
  T480 = fun_269;
  accessorF6083 = T480;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_name),accessorF6083);
  (P)YPmet_name_setter(VARREF(Yfun_name),accessorF6083);
  getterF6084 = accessorF6083;
  T475 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T474 = (P)YPpair(VARREF(YLanyG),T475);
  T473 = (P)YPsig(Ynil,T474,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T472 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_169),T473,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_name_setter,T472);
  T476 = fun_270;
  accessorF6085 = T476;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_name_setter),accessorF6085);
  (P)YPmet_name_setter(VARREF(Yfun_name_setter),accessorF6085);
  setterF6086 = accessorF6085;
  T471 = fun_271;
  T470 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_name),VARREF(Yfun_name_setter),VARREF(YLanyG),T471);
  propF6087 = T470;
  (P)YPmet_env_setter(propF6087,getterF6084);
  (P)YPmet_env_setter(propF6087,setterF6086);
  T469 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF6087);
  lit_172 = YPPsym((P)"fun-sig");
  lit_173 = YPPlist(1,YPPsym((P)"x"));
  lit_174 = YPPsym((P)"fun-sig-setter");
  lit_175 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_176 = YPPlist(1,YPPsym((P)"x"));
  T483 = YPsig(LITREF(lit_173),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_272 = YPmet(FUNCODEREF(fun_272),YPfalse,T483,ENVNUL,PNUL,sloc(725));
  T482 = YPsig(LITREF(lit_175),YPPlist(2,VARREF(YLsigG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_273 = YPmet(FUNCODEREF(fun_273),YPfalse,T482,ENVNUL,PNUL,sloc(725));
  T481 = YPsig(LITREF(lit_176),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_274 = YPmet(FUNCODEREF(fun_274),YPfalse,T481,ENVNUL,PNUL,sloc(725));
  T494 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T493 = (P)YPsig(Ynil,T494,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T492 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_172),T493,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig,T492);
  T495 = fun_272;
  accessorF6088 = T495;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig),accessorF6088);
  (P)YPmet_name_setter(VARREF(Yfun_sig),accessorF6088);
  getterF6089 = accessorF6088;
  T490 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T489 = (P)YPpair(VARREF(YLanyG),T490);
  T488 = (P)YPsig(Ynil,T489,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T487 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_174),T488,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_sig_setter,T487);
  T491 = fun_273;
  accessorF6090 = T491;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_sig_setter),accessorF6090);
  (P)YPmet_name_setter(VARREF(Yfun_sig_setter),accessorF6090);
  setterF6091 = accessorF6090;
  T486 = fun_274;
  T485 = (P)YPPprop(VARREF(YLfunG),VARREF(Yfun_sig),VARREF(Yfun_sig_setter),VARREF(YLsigG),T486);
  propF6092 = T485;
  (P)YPmet_env_setter(propF6092,getterF6089);
  (P)YPmet_env_setter(propF6092,setterF6091);
  T484 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLfunG),propF6092);
  lit_177 = YPPsym((P)"fun-env");
  lit_178 = YPPlist(1,YPPsym((P)"x"));
  lit_179 = YPPlist(1,YPPsym((P)"x"));
  T500 = YPsig(LITREF(lit_178),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T499 = fun_275 = YPmet(FUNCODEREF(fun_275),YPfalse,T500,ENVNUL,PNUL,sloc(725));
  T498 = YPsig(LITREF(lit_179),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T497 = fun_276 = YPmet(FUNCODEREF(fun_276),YPfalse,T498,ENVNUL,PNUL,sloc(725));
  T506 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T505 = (P)YPsig(Ynil,T506,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T504 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_177),T505,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_env,T504);
  T507 = fun_275;
  accessorF6093 = T507;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_env),accessorF6093);
  (P)YPmet_name_setter(VARREF(Yfun_env),accessorF6093);
  getterF6094 = accessorF6093;
  setterF6095 = YPfalse;
  T503 = fun_276;
  T502 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_env),YPfalse,VARREF(YLanyG),T503);
  propF6096 = T502;
  (P)YPmet_env_setter(propF6096,getterF6094);
  T501 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF6096);
  T496 = T501;
  return T496;
}

P Y___main_10___() {
  P propF6135;
  P setterF6134;
  P getterF6133;
  P accessorF6132;
  P propF6131;
  P setterF6130;
  P getterF6129;
  P accessorF6128;
  P propF6127;
  P setterF6126;
  P getterF6125;
  P accessorF6124;
  P propF6123;
  P setterF6122;
  P accessorF6121;
  P getterF6120;
  P accessorF6119;
  P propF6118;
  P setterF6117;
  P getterF6116;
  P accessorF6115;
  P propF6114;
  P setterF6113;
  P getterF6112;
  P accessorF6111;
  P propF6110;
  P setterF6109;
  P accessorF6108;
  P getterF6107;
  P accessorF6106;
  P propF6105;
  P setterF6104;
  P accessorF6103;
  P getterF6102;
  P accessorF6101;
  P propF6100;
  P setterF6099;
  P getterF6098;
  P accessorF6097;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103;
DEFCREGS();
  lit_180 = YPPsym((P)"fun-refs");
  lit_181 = YPPlist(1,YPPsym((P)"x"));
  lit_182 = YPPlist(1,YPPsym((P)"x"));
  T1 = YPsig(LITREF(lit_181),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_277 = YPmet(FUNCODEREF(fun_277),YPfalse,T1,ENVNUL,PNUL,sloc(725));
  T0 = YPsig(LITREF(lit_182),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_278 = YPmet(FUNCODEREF(fun_278),YPfalse,T0,ENVNUL,PNUL,sloc(725));
  T7 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T6 = (P)YPsig(Ynil,T7,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T5 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_180),T6,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_refs,T5);
  T8 = fun_277;
  accessorF6097 = T8;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_refs),accessorF6097);
  (P)YPmet_name_setter(VARREF(Yfun_refs),accessorF6097);
  getterF6098 = accessorF6097;
  setterF6099 = YPfalse;
  T4 = fun_278;
  T3 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_refs),YPfalse,VARREF(YLanyG),T4);
  propF6100 = T3;
  (P)YPmet_env_setter(propF6100,getterF6098);
  T2 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF6100);
  lit_183 = YPPsym((P)"fun-src");
  lit_184 = YPPlist(1,YPPsym((P)"x"));
  lit_185 = YPPsym((P)"fun-src-setter");
  lit_186 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_187 = YPPlist(1,YPPsym((P)"x"));
  T11 = YPsig(LITREF(lit_184),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_279 = YPmet(FUNCODEREF(fun_279),YPfalse,T11,ENVNUL,PNUL,sloc(725));
  T10 = YPsig(LITREF(lit_186),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_280 = YPmet(FUNCODEREF(fun_280),YPfalse,T10,ENVNUL,PNUL,sloc(725));
  T9 = YPsig(LITREF(lit_187),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_281 = YPmet(FUNCODEREF(fun_281),YPfalse,T9,ENVNUL,PNUL,sloc(725));
  T22 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T21 = (P)YPsig(Ynil,T22,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T20 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_183),T21,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src,T20);
  T23 = fun_279;
  accessorF6101 = T23;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_src),accessorF6101);
  (P)YPmet_name_setter(VARREF(Yfun_src),accessorF6101);
  getterF6102 = accessorF6101;
  T18 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T17 = (P)YPpair(VARREF(YLanyG),T18);
  T16 = (P)YPsig(Ynil,T17,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T15 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_185),T16,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_src_setter,T15);
  T19 = fun_280;
  accessorF6103 = T19;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_src_setter),accessorF6103);
  (P)YPmet_name_setter(VARREF(Yfun_src_setter),accessorF6103);
  setterF6104 = accessorF6103;
  T14 = fun_281;
  T13 = (P)YPPprop(VARREF(YLmetG),VARREF(Yfun_src),VARREF(Yfun_src_setter),VARREF(YLanyG),T14);
  propF6105 = T13;
  (P)YPmet_env_setter(propF6105,getterF6102);
  (P)YPmet_env_setter(propF6105,setterF6104);
  T12 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLmetG),propF6105);
  lit_188 = YPPsym((P)"fun-mets");
  lit_189 = YPPlist(1,YPPsym((P)"x"));
  lit_190 = YPPsym((P)"fun-mets-setter");
  lit_191 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_192 = YPPlist(1,YPPsym((P)"x"));
  T26 = YPsig(LITREF(lit_189),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_282 = YPmet(FUNCODEREF(fun_282),YPfalse,T26,ENVNUL,PNUL,sloc(725));
  T25 = YPsig(LITREF(lit_191),YPPlist(2,VARREF(YLlstG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_283 = YPmet(FUNCODEREF(fun_283),YPfalse,T25,ENVNUL,PNUL,sloc(725));
  T24 = YPsig(LITREF(lit_192),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_284 = YPmet(FUNCODEREF(fun_284),YPfalse,T24,ENVNUL,PNUL,sloc(725));
  T37 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T36 = (P)YPsig(Ynil,T37,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T35 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_188),T36,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets,T35);
  T38 = fun_282;
  accessorF6106 = T38;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets),accessorF6106);
  (P)YPmet_name_setter(VARREF(Yfun_mets),accessorF6106);
  getterF6107 = accessorF6106;
  T33 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T32 = (P)YPpair(VARREF(YLanyG),T33);
  T31 = (P)YPsig(Ynil,T32,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T30 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_190),T31,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_mets_setter,T30);
  T34 = fun_283;
  accessorF6108 = T34;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_mets_setter),accessorF6108);
  (P)YPmet_name_setter(VARREF(Yfun_mets_setter),accessorF6108);
  setterF6109 = accessorF6108;
  T29 = fun_284;
  T28 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_mets),VARREF(Yfun_mets_setter),VARREF(YLlstG),T29);
  propF6110 = T28;
  (P)YPmet_env_setter(propF6110,getterF6107);
  (P)YPmet_env_setter(propF6110,setterF6109);
  T27 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF6110);
  lit_193 = YPPsym((P)"fun-cache");
  lit_194 = YPPlist(1,YPPsym((P)"x"));
  lit_195 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPsig(LITREF(lit_194),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_285 = YPmet(FUNCODEREF(fun_285),YPfalse,T40,ENVNUL,PNUL,sloc(725));
  T39 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_286 = YPmet(FUNCODEREF(fun_286),YPfalse,T39,ENVNUL,PNUL,sloc(725));
  T46 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T45 = (P)YPsig(Ynil,T46,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T44 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_193),T45,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yfun_cache,T44);
  T47 = fun_285;
  accessorF6111 = T47;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yfun_cache),accessorF6111);
  (P)YPmet_name_setter(VARREF(Yfun_cache),accessorF6111);
  getterF6112 = accessorF6111;
  setterF6113 = YPfalse;
  T43 = fun_286;
  T42 = (P)YPPprop(VARREF(YLgenG),VARREF(Yfun_cache),YPfalse,VARREF(YLanyG),T43);
  propF6114 = T42;
  (P)YPmet_env_setter(propF6114,getterF6112);
  T41 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF6114);
  lit_196 = YPPsym((P)"gen-refs");
  lit_197 = YPPlist(1,YPPsym((P)"x"));
  lit_198 = YPPlist(1,YPPsym((P)"x"));
  T49 = YPsig(LITREF(lit_197),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_287 = YPmet(FUNCODEREF(fun_287),YPfalse,T49,ENVNUL,PNUL,sloc(725));
  T48 = YPsig(LITREF(lit_198),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_288 = YPmet(FUNCODEREF(fun_288),YPfalse,T48,ENVNUL,PNUL,sloc(725));
  T55 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T54 = (P)YPsig(Ynil,T55,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T53 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_196),T54,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_refs,T53);
  T56 = fun_287;
  accessorF6115 = T56;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_refs),accessorF6115);
  (P)YPmet_name_setter(VARREF(Ygen_refs),accessorF6115);
  getterF6116 = accessorF6115;
  setterF6117 = YPfalse;
  T52 = fun_288;
  T51 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_refs),YPfalse,VARREF(YLtupG),T52);
  propF6118 = T51;
  (P)YPmet_env_setter(propF6118,getterF6116);
  T50 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF6118);
  lit_199 = YPPsym((P)"gen-src");
  lit_200 = YPPlist(1,YPPsym((P)"x"));
  lit_201 = YPPsym((P)"gen-src-setter");
  lit_202 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  lit_203 = YPPlist(1,YPPsym((P)"x"));
  T59 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_289 = YPmet(FUNCODEREF(fun_289),YPfalse,T59,ENVNUL,PNUL,sloc(725));
  T58 = YPsig(LITREF(lit_202),YPPlist(2,VARREF(YLanyG),VARREF(YLgenG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_290 = YPmet(FUNCODEREF(fun_290),YPfalse,T58,ENVNUL,PNUL,sloc(725));
  T57 = YPsig(LITREF(lit_203),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_291 = YPmet(FUNCODEREF(fun_291),YPfalse,T57,ENVNUL,PNUL,sloc(725));
  T70 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T69 = (P)YPsig(Ynil,T70,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T68 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_199),T69,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src,T68);
  T71 = fun_289;
  accessorF6119 = T71;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_src),accessorF6119);
  (P)YPmet_name_setter(VARREF(Ygen_src),accessorF6119);
  getterF6120 = accessorF6119;
  T66 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T65 = (P)YPpair(VARREF(YLanyG),T66);
  T64 = (P)YPsig(Ynil,T65,YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T63 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_201),T64,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ygen_src_setter,T63);
  T67 = fun_290;
  accessorF6121 = T67;
  XCALL2(1,VARREF(YPadd_met),VARREF(Ygen_src_setter),accessorF6121);
  (P)YPmet_name_setter(VARREF(Ygen_src_setter),accessorF6121);
  setterF6122 = accessorF6121;
  T62 = fun_291;
  T61 = (P)YPPprop(VARREF(YLgenG),VARREF(Ygen_src),VARREF(Ygen_src_setter),VARREF(YLanyG),T62);
  propF6123 = T61;
  (P)YPmet_env_setter(propF6123,getterF6120);
  (P)YPmet_env_setter(propF6123,setterF6122);
  T60 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLgenG),propF6123);
  lit_204 = YPPsym((P)"opts-location");
  lit_205 = YPPlist(1,YPPsym((P)"x"));
  lit_206 = YPPlist(1,YPPsym((P)"x"));
  T73 = YPsig(LITREF(lit_205),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_292 = YPmet(FUNCODEREF(fun_292),YPfalse,T73,ENVNUL,PNUL,sloc(725));
  T72 = YPsig(LITREF(lit_206),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_293 = YPmet(FUNCODEREF(fun_293),YPfalse,T72,ENVNUL,PNUL,sloc(725));
  T79 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T78 = (P)YPsig(Ynil,T79,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T77 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_204),T78,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_location,T77);
  T80 = fun_292;
  accessorF6124 = T80;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_location),accessorF6124);
  (P)YPmet_name_setter(VARREF(Yopts_location),accessorF6124);
  getterF6125 = accessorF6124;
  setterF6126 = YPfalse;
  T76 = fun_293;
  T75 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_location),YPfalse,VARREF(YLlocG),T76);
  propF6127 = T75;
  (P)YPmet_env_setter(propF6127,getterF6125);
  T74 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF6127);
  lit_207 = YPPsym((P)"opts-count");
  lit_208 = YPPlist(1,YPPsym((P)"x"));
  lit_209 = YPPlist(1,YPPsym((P)"x"));
  T82 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_294 = YPmet(FUNCODEREF(fun_294),YPfalse,T82,ENVNUL,PNUL,sloc(725));
  T81 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_295 = YPmet(FUNCODEREF(fun_295),YPfalse,T81,ENVNUL,PNUL,sloc(725));
  T88 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T87 = (P)YPsig(Ynil,T88,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T86 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_207),T87,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_count,T86);
  T89 = fun_294;
  accessorF6128 = T89;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_count),accessorF6128);
  (P)YPmet_name_setter(VARREF(Yopts_count),accessorF6128);
  getterF6129 = accessorF6128;
  setterF6130 = YPfalse;
  T85 = fun_295;
  T84 = (P)YPPprop(VARREF(YLoptsG),VARREF(Yopts_count),YPfalse,VARREF(YLfixnumG),T85);
  propF6131 = T84;
  (P)YPmet_env_setter(propF6131,getterF6129);
  T83 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLoptsG),propF6131);
  lit_210 = YPPsym((P)"opts-tup-storage");
  lit_211 = YPPlist(1,YPPsym((P)"x"));
  lit_212 = YPPlist(1,YPPsym((P)"x"));
  T91 = YPsig(LITREF(lit_211),YPPlist(1,VARREF(YLopts_tupG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_296 = YPmet(FUNCODEREF(fun_296),YPfalse,T91,ENVNUL,PNUL,sloc(725));
  T90 = YPsig(LITREF(lit_212),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_297 = YPmet(FUNCODEREF(fun_297),YPfalse,T90,ENVNUL,PNUL,sloc(725));
  T97 = (P)YPpair(VARREF(YLanyG),VARREF(Ynil));
  T96 = (P)YPsig(Ynil,T97,YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T95 = (P)YPgen(VARREF(YPearly_dispatch),LITREF(lit_210),T96,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yopts_tup_storage,T95);
  T98 = fun_296;
  accessorF6132 = T98;
  XCALL2(1,VARREF(YPadd_met),VARREF(Yopts_tup_storage),accessorF6132);
  (P)YPmet_name_setter(VARREF(Yopts_tup_storage),accessorF6132);
  getterF6133 = accessorF6132;
  setterF6134 = YPfalse;
  T94 = fun_297;
  T93 = (P)YPPprop(VARREF(YLopts_tupG),VARREF(Yopts_tup_storage),YPfalse,VARREF(YLtupG),T94);
  propF6135 = T93;
  (P)YPmet_env_setter(propF6135,getterF6133);
  T92 = XCALL2(1,VARREF(YPadd_prop),VARREF(YLopts_tupG),propF6135);
  lit_213 = YPPsym((P)"%collect-direct-props");
  lit_214 = YPPlist(1,YPPsym((P)"class"));
  T99 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPcollect_direct_props = YPmet(FUNCODEREF(YPcollect_direct_props),LITREF(lit_213),T99,ENVNUL,PNUL,sloc(733));
  T100 = YPcollect_direct_props;
  VARSET(YPcollect_direct_props,T100);
  lit_215 = YPPsym((P)"%finalize-props!");
  lit_216 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"class"));
  T101 = YPsig(LITREF(lit_216),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YPfinalize_propsX = YPmet(FUNCODEREF(YPfinalize_propsX),LITREF(lit_215),T101,ENVNUL,PNUL,sloc(737));
  T102 = YPfinalize_propsX;
  VARSET(YPfinalize_propsX,T102);
  lit_217 = YPPsym((P)"<any>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_217),VARREF(YLanyG));
  lit_218 = YPPsym((P)"<log>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_218),VARREF(YLlogG));
  lit_219 = YPPsym((P)"<box>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_219),VARREF(YLboxG));
  lit_220 = YPPsym((P)"<mag>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_220),VARREF(YLmagG));
  lit_221 = YPPsym((P)"<chr>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_221),VARREF(YLchrG));
  lit_222 = YPPsym((P)"<src-loc>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_222),VARREF(YLsrc_locG));
  lit_223 = YPPsym((P)"<num>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_223),VARREF(YLnumG));
  lit_224 = YPPsym((P)"<int>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_224),VARREF(YLintG));
  lit_225 = YPPsym((P)"<fixnum>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_225),VARREF(YLfixnumG));
  lit_226 = YPPsym((P)"<flo>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_226),VARREF(YLfloG));
  lit_227 = YPPsym((P)"<loc>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_227),VARREF(YLlocG));
  lit_228 = YPPsym((P)"<rep>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_228),VARREF(YLrepG));
  lit_229 = YPPsym((P)"<col>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_229),VARREF(YLcolG));
  lit_230 = YPPsym((P)"<col.>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_230),VARREF(YLcolIG));
  lit_231 = YPPsym((P)"<col!>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_231),VARREF(YLcolXG));
  lit_232 = YPPsym((P)"<seq>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_232),VARREF(YLseqG));
  lit_233 = YPPsym((P)"<seq.>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_233),VARREF(YLseqIG));
  lit_234 = YPPsym((P)"<seq!>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_234),VARREF(YLseqXG));
  lit_235 = YPPsym((P)"<lst>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_235),VARREF(YLlstG));
  lit_236 = YPPsym((P)"<flat>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_236),VARREF(YLflatG));
  lit_237 = YPPsym((P)"<tup>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_237),VARREF(YLtupG));
  lit_238 = YPPsym((P)"<str>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_238),VARREF(YLstrG));
  lit_239 = YPPsym((P)"<sym>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_239),VARREF(YLsymG));
  lit_240 = YPPsym((P)"<type>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_240),VARREF(YLtypeG));
  lit_241 = YPPsym((P)"<class>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_241),VARREF(YLclassG));
  lit_242 = YPPsym((P)"<singleton>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_242),VARREF(YLsingletonG));
  lit_243 = YPPsym((P)"<subclass>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_243),VARREF(YLsubclassG));
  lit_244 = YPPsym((P)"<union>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_244),VARREF(YLunionG));
  lit_245 = YPPsym((P)"<product>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_245),VARREF(YLproductG));
  lit_246 = YPPsym((P)"<prop>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_246),VARREF(YLpropG));
  lit_247 = YPPsym((P)"<gen-cache>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_247),VARREF(YLgen_cacheG));
  lit_248 = YPPsym((P)"<sig>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_248),VARREF(YLsigG));
  lit_249 = YPPsym((P)"<fun>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_249),VARREF(YLfunG));
  lit_250 = YPPsym((P)"<met>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_250),VARREF(YLmetG));
  lit_251 = YPPsym((P)"<gen>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_251),VARREF(YLgenG));
  lit_252 = YPPsym((P)"<opts>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_252),VARREF(YLoptsG));
  lit_253 = YPPsym((P)"<opts-tup>");
  XCALL2(1,VARREF(YPfinalize_propsX),LITREF(lit_253),VARREF(YLopts_tupG));
  T103 = YPfalse;
  return T103;
}

P Y___main_11___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
DEFCREGS();
  lit_254 = YPPsym((P)"@@==");
  lit_255 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T0 = YPsig(LITREF(lit_255),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOOEE = YPmet(FUNCODEREF(YOOEE),LITREF(lit_254),T0,ENVNUL,PNUL,sloc(779));
  T1 = YOOEE;
  VARSET(YOOEE,T1);
  lit_256 = YPPsym((P)"not");
  lit_257 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_257),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  Ynot = YPmet(FUNCODEREF(Ynot),LITREF(lit_256),T2,ENVNUL,PNUL,sloc(781));
  T3 = Ynot;
  VARSET(Ynot,T3);
  lit_258 = YPPsym((P)"@@empty?");
  lit_259 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_259),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YOOemptyQ = YPmet(FUNCODEREF(YOOemptyQ),LITREF(lit_258),T4,ENVNUL,PNUL,sloc(787));
  T5 = YOOemptyQ;
  VARSET(YOOemptyQ,T5);
  lit_260 = YPPsym((P)"@rev!");
  lit_261 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_261),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrevX = YPmet(FUNCODEREF(YOrevX),LITREF(lit_260),T6,ENVNUL,PNUL,sloc(789));
  T7 = YOrevX;
  VARSET(YOrevX,T7);
  lit_262 = YPPsym((P)"@all?");
  lit_263 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T8 = YPsig(LITREF(lit_263),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOallQ = YPmet(FUNCODEREF(YOallQ),LITREF(lit_262),T8,ENVNUL,PNUL,sloc(799));
  T9 = YOallQ;
  VARSET(YOallQ,T9);
  lit_264 = YPPsym((P)"@all2?");
  lit_265 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T10 = YPsig(LITREF(lit_265),YPPlist(3,VARREF(YLfunG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOall2Q = YPmet(FUNCODEREF(YOall2Q),LITREF(lit_264),T10,ENVNUL,PNUL,sloc(803));
  T11 = YOall2Q;
  VARSET(YOall2Q,T11);
  lit_266 = YPPsym((P)"@elt");
  lit_267 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T12 = YPsig(LITREF(lit_267),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOelt = YPmet(FUNCODEREF(YOelt),LITREF(lit_266),T12,ENVNUL,PNUL,sloc(813));
  T13 = YOelt;
  VARSET(YOelt,T13);
  lit_268 = YPPsym((P)"@fill");
  lit_269 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"f"));
  T14 = YPsig(LITREF(lit_269),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfill = YPmet(FUNCODEREF(YOfill),LITREF(lit_268),T14,ENVNUL,PNUL,sloc(819));
  T15 = YOfill;
  VARSET(YOfill,T15);
  lit_270 = YPPsym((P)"@any?");
  lit_271 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T16 = YPsig(LITREF(lit_271),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOanyQ = YPmet(FUNCODEREF(YOanyQ),LITREF(lit_270),T16,ENVNUL,PNUL,sloc(823));
  T17 = YOanyQ;
  VARSET(YOanyQ,T17);
  lit_272 = YPPsym((P)"@map");
  lit_273 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T18 = YPsig(LITREF(lit_273),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOmap = YPmet(FUNCODEREF(YOmap),LITREF(lit_272),T18,ENVNUL,PNUL,sloc(834));
  T19 = YOmap;
  VARSET(YOmap,T19);
  lit_274 = YPPsym((P)"@pick");
  lit_275 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_275),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOpick = YPmet(FUNCODEREF(YOpick),LITREF(lit_274),T20,ENVNUL,PNUL,sloc(840));
  T21 = YOpick;
  VARSET(YOpick,T21);
  lit_276 = YPPsym((P)"@do");
  lit_277 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T22 = YPsig(LITREF(lit_277),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOdo = YPmet(FUNCODEREF(YOdo),LITREF(lit_276),T22,ENVNUL,PNUL,sloc(846));
  T23 = YOdo;
  VARSET(YOdo,T23);
  lit_278 = YPPsym((P)"@alter");
  lit_279 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T24 = YPsig(LITREF(lit_279),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOalter = YPmet(FUNCODEREF(YOalter),LITREF(lit_278),T24,ENVNUL,PNUL,sloc(852));
  T25 = YOalter;
  VARSET(YOalter,T25);
  lit_280 = YPPsym((P)"@fab");
  lit_281 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T26 = YPsig(LITREF(lit_281),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOfab = YPmet(FUNCODEREF(YOfab),LITREF(lit_280),T26,ENVNUL,PNUL,sloc(859));
  T27 = YOfab;
  VARSET(YOfab,T27);
  lit_282 = YPPsym((P)"@fold");
  lit_283 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"c"));
  T28 = YPsig(LITREF(lit_283),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  YOfold = YPmet(FUNCODEREF(YOfold),LITREF(lit_282),T28,ENVNUL,PNUL,sloc(863));
  T29 = YOfold;
  VARSET(YOfold,T29);
  lit_284 = YPPsym((P)"@rev");
  lit_285 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPsig(LITREF(lit_285),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOrev = YPmet(FUNCODEREF(YOrev),LITREF(lit_284),T30,ENVNUL,PNUL,sloc(869));
  T31 = YOrev;
  VARSET(YOrev,T31);
  lit_286 = YPPsym((P)"@cat2");
  lit_287 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T32 = YPsig(LITREF(lit_287),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YOcat2 = YPmet(FUNCODEREF(YOcat2),LITREF(lit_286),T32,ENVNUL,PNUL,sloc(875));
  T33 = YOcat2;
  VARSET(YOcat2,T33);
  lit_288 = YPPsym((P)"@find");
  lit_289 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T34 = YPsig(LITREF(lit_289),YPPlist(2,VARREF(YLfunG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YOfind = YPmet(FUNCODEREF(YOfind),LITREF(lit_288),T34,ENVNUL,PNUL,sloc(878));
  T35 = YOfind;
  VARSET(YOfind,T35);
  lit_290 = YPPsym((P)"@mem?");
  lit_291 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  lit_292 = YPPlist(1,YPPsym((P)"y"));
  T37 = YPsig(LITREF(lit_292),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_335 = YPmet(FUNCODEREF(fun_335),YPfalse,T37,ENVNUL,PNUL,sloc(887));
  T36 = YPsig(LITREF(lit_291),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOmemQ = YPmet(FUNCODEREF(YOmemQ),LITREF(lit_290),T36,ENVNUL,PNUL,sloc(886));
  T38 = YOmemQ;
  VARSET(YOmemQ,T38);
  lit_293 = YPPsym((P)"@del-dups");
  lit_294 = YPPlist(1,YPPsym((P)"x"));
  lit_295 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"e"));
  T40 = YPsig(LITREF(lit_295),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_337 = YPmet(FUNCODEREF(fun_337),YPfalse,T40,ENVNUL,PNUL,sloc(892));
  T39 = YPsig(LITREF(lit_294),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOdel_dups = YPmet(FUNCODEREF(YOdel_dups),LITREF(lit_293),T39,ENVNUL,PNUL,sloc(891));
  T41 = YOdel_dups;
  VARSET(YOdel_dups,T41);
  lit_296 = YPPsym((P)"@opts-as-lst");
  lit_297 = YPPlist(1,YPPsym((P)"x"));
  T42 = YPsig(LITREF(lit_297),YPPlist(1,VARREF(YLoptsG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YOopts_as_lst = YPmet(FUNCODEREF(YOopts_as_lst),LITREF(lit_296),T42,ENVNUL,PNUL,sloc(894));
  T43 = YOopts_as_lst;
  VARSET(YOopts_as_lst,T43);
  lit_298 = YPPsym((P)"@lst");
  lit_299 = YPPlist(1,YPPsym((P)"x"));
  T44 = YPsig(LITREF(lit_299),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOlst = YPmet(FUNCODEREF(YOlst),LITREF(lit_298),T44,ENVNUL,PNUL,sloc(898));
  T45 = YOlst;
  VARSET(YOlst,T45);
  lit_300 = YPPsym((P)"@tany?");
  lit_301 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T46 = YPsig(LITREF(lit_301),YPPlist(2,VARREF(YLfunG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtanyQ = YPmet(FUNCODEREF(YOtanyQ),LITREF(lit_300),T46,ENVNUL,PNUL,sloc(911));
  T47 = YOtanyQ;
  VARSET(YOtanyQ,T47);
  lit_302 = YPPsym((P)"@tall2?");
  lit_303 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"c1"),YPPsym((P)"c2"));
  T48 = YPsig(LITREF(lit_303),YPPlist(3,VARREF(YLfunG),VARREF(YLtupG),VARREF(YLtupG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YOtall2Q = YPmet(FUNCODEREF(YOtall2Q),LITREF(lit_302),T48,ENVNUL,PNUL,sloc(915));
  T49 = YOtall2Q;
  VARSET(YOtall2Q,T49);
  lit_304 = YPPsym((P)"@tup");
  lit_305 = YPPlist(1,YPPsym((P)"args"));
  lit_306 = YPPsym((P)"into");
  lit_307 = YPPlist(1,YPPsym((P)"k"));
  T51 = YPsig(LITREF(lit_307),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_into_347 = YPmet(FUNCODEREF(fun_into_347),LITREF(lit_306),T51,ENVNUL,PNUL,sloc(926));
  T50 = YPsig(LITREF(lit_305),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YOtup = YPmet(FUNCODEREF(YOtup),LITREF(lit_304),T50,ENVNUL,PNUL,sloc(932));
  T52 = YOtup;
  VARSET(YOtup,T52);
  VARSET(Ytup,VARREF(YOtup));
  lit_308 = YPPsym((P)"t*");
  lit_309 = YPPlist(1,YPPsym((P)"args"));
  lit_310 = YPPlist(1,YPPsym((P)"k"));
  T54 = YPsig(LITREF(lit_310),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_into_349 = YPmet(FUNCODEREF(fun_into_349),LITREF(lit_306),T54,ENVNUL,PNUL,sloc(926));
  T53 = YPsig(LITREF(lit_309),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YtT = YPmet(FUNCODEREF(YtT),LITREF(lit_308),T53,ENVNUL,PNUL,sloc(936));
  T55 = YtT;
  VARSET(YtT,T55);
  lit_311 = YPPsym((P)"@type-equal?");
  lit_312 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T56 = YPsig(LITREF(lit_312),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOtype_equalQ = YPmet(FUNCODEREF(YOtype_equalQ),LITREF(lit_311),T56,ENVNUL,PNUL,sloc(940));
  T57 = YOtype_equalQ;
  VARSET(YOtype_equalQ,T57);
  T58 = YPfalse;
  return T58;
}

P Y___main_12___() {
  P tF6138;
  P xF6137;
  P xF6136;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
DEFCREGS();
  lit_313 = YPPsym((P)"@subtype?");
  lit_314 = YPPlist(2,YPPsym((P)"t1"),YPPsym((P)"t2"));
  T0 = YPsig(LITREF(lit_314),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YOsubtypeQ = YPmet(FUNCODEREF(YOsubtypeQ),LITREF(lit_313),T0,ENVNUL,PNUL,sloc(963));
  T1 = YOsubtypeQ;
  VARSET(YOsubtypeQ,T1);
  lit_315 = YPPsym((P)"@may-isa?");
  lit_316 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"t"));
  T3 = XCALL2(1,VARREF(YtT),VARREF(YLlogG),VARREF(YLlogG));
  T2 = YPsig(LITREF(lit_316),YPPlist(2,VARREF(YLclassG),VARREF(YLtypeG)),YPfalse,YPint((P)2),T3,Ynil);
  YOmay_isaQ = YPmet(FUNCODEREF(YOmay_isaQ),LITREF(lit_315),T2,ENVNUL,PNUL,sloc(968));
  T4 = YOmay_isaQ;
  VARSET(YOmay_isaQ,T4);
  VARSET(YTrestarts_okQT,YPfalse);
  lit_317 = YPPsym((P)"unexec");
  lit_318 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"fun"));
  T5 = YPsig(LITREF(lit_318),YPPlist(2,VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yunexec = YPmet(FUNCODEREF(Yunexec),LITREF(lit_317),T5,ENVNUL,PNUL,sloc(991));
  T6 = Yunexec;
  VARSET(Yunexec,T6);
  lit_319 = YPPsym((P)"%patch-early-generic");
  lit_320 = YPPlist(1,YPPsym((P)"generic"));
  T7 = YPsig(LITREF(lit_320),YPPlist(1,VARREF(YLgenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YPpatch_early_generic = YPmet(FUNCODEREF(YPpatch_early_generic),LITREF(lit_319),T7,ENVNUL,PNUL,sloc(995));
  T8 = YPpatch_early_generic;
  VARSET(YPpatch_early_generic,T8);
  xF6136 = VARREF(YPmet_prop_len);
  xF6137 = xF6136;
  tF6138 = (P)1;
  T10 = (P)YPiLL(xF6137,(P)2);
  T9 = (P)YPiv(T10,tF6138);
  (P)YPclass_prop_len_setter(T9,VARREF(YLmetG));
  lit_321 = YPsb((P)"Tried to call an unbound function, but the function error\nhandler is itself unbound. Exiting.");
  VARSET(YTboot_macro_module_namesT,Ynil);
  VARSET(YTboot_macro_namesT,Ynil);
  VARSET(YTboot_macro_expandersT,Ynil);
  VARSET(YTmacros_okQT,YPfalse);
  lit_322 = YPPsym((P)"app-filename");
  lit_323 = Ynil;
  T11 = YPsig(LITREF(lit_323),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Yapp_filename = YPmet(FUNCODEREF(Yapp_filename),LITREF(lit_322),T11,ENVNUL,PNUL,sloc(1114));
  T12 = Yapp_filename;
  VARSET(Yapp_filename,T12);
  lit_324 = YPPsym((P)"app-args");
  T13 = YPsig(LITREF(lit_323),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Yapp_args = YPmet(FUNCODEREF(Yapp_args),LITREF(lit_324),T13,ENVNUL,PNUL,sloc(1116));
  T14 = Yapp_args;
  VARSET(Yapp_args,T14);
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
  T15 = YPfalse;
  return T15;
}

P Y___main_13___() {
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
  {"%raw", PVAR, NULL},
  {"<class>", CVAR, &YLclassG},
  {"class-direct-props", CVAR, &Yclass_direct_props},
  {"sym-name", CVAR, &Ysym_name},
  {"src-loc-line", CVAR, &Ysrc_loc_line},
  {"%gen-sig", PVAR, NULL},
  {"sig-arity", CVAR, &Ysig_arity},
  {"class-children", CVAR, &Yclass_children},
  {"gen-refs", CVAR, &Ygen_refs},
  {"@tail", PVAR, NULL},
  {"%prop-type-setter", PVAR, NULL},
  {"fun-refs", CVAR, &Yfun_refs},
  {"%class-ancestors-setter", PVAR, NULL},
  {"%opts-tup-count-setter", PVAR, NULL},
  {"fun-code", CVAR, &Yfun_code},
  {"type-error", CVAR, &Ytype_error},
  {"%flo-dat", PVAR, NULL},
  {"%dispatch", CVAR, &YPdispatch},
  {"%i&", PVAR, NULL},
  {"file-opening-error", CVAR, &Yfile_opening_error},
  {"<type>", CVAR, &YLtypeG},
  {"ct-also", PVAR, NULL},
  {"%collect-direct-props", CVAR, &YPcollect_direct_props},
  {"dv", PVAR, NULL},
  {"@fill", CVAR, &YOfill},
  {"%tup", PVAR, NULL},
  {"@telt", PVAR, NULL},
  {"ddv", PVAR, NULL},
  {"<gen>", CVAR, &YLgenG},
  {"%opts", PVAR, NULL},
  {"@tall2?", CVAR, &YOtall2Q},
  {"%met-name-setter", PVAR, NULL},
  {"class-forward-setter", CVAR, &Yclass_forward_setter},
  {"@==", PVAR, NULL},
  {"@len", PVAR, NULL},
  {"%arg-check-type", PVAR, NULL},
  {"%prop-elt", PVAR, NULL},
  {"%binding-name", PVAR, NULL},
  {"@tlen", PVAR, NULL},
  {"*boot-macro-expanders*", CVAR, &YTboot_macro_expandersT},
  {"arithmetic-error", CVAR, &Yarithmetic_error},
  {"%vnm-setter", PVAR, NULL},
  {"rep", PVAR, NULL},
  {"%met-src", PVAR, NULL},
  {"%sig-val", PVAR, NULL},
  {"@=", PVAR, NULL},
  {"%relt-setter", PVAR, NULL},
  {"%loc-off-setter", PVAR, NULL},
  {"%untag-into", PVAR, NULL},
  {"@elt", CVAR, &YOelt},
  {"%*used-symbols-too-early*", CVAR, &YPTused_symbols_too_earlyT},
  {"@isa?", PVAR, NULL},
  {"%sig-arity-setter", PVAR, NULL},
  {"%sp-reg", PVAR, NULL},
  {"<sym>", CVAR, &YLsymG},
  {"%*start-running-at*", CVAR, &YPTstart_running_atT},
  {"update-instance-for-changed-class", CVAR, &Yupdate_instance_for_changed_class},
  {"fun", PVAR, NULL},
  {"internal-error", CVAR, &Yinternal_error},
  {"%true", CVAR, &YPtrue},
  {"use/export", PVAR, NULL},
  {"---main-9---", PVAR, NULL},
  {"class-forward", CVAR, &Yclass_forward},
  {"%loc-val-setter", PVAR, NULL},
  {"%empty?", PVAR, NULL},
  {"%str-eq?", PVAR, NULL},
  {"unknown-function-error", CVAR, &Yunknown_function_error},
  {"<str>", CVAR, &YLstrG},
  {"%sp-reg-setter", PVAR, NULL},
  {"%class-mets-setter", PVAR, NULL},
  {"%it/", PVAR, NULL},
  {"%symbols-ready?", CVAR, &YPsymbols_readyQ},
  {"%cat2", PVAR, NULL},
  {"quote", PVAR, NULL},
  {"unexec", CVAR, &Yunexec},
  {"%define-accessor", PVAR, NULL},
  {"%prop-offset", CVAR, &YPprop_offset},
  {"use/mangle", PVAR, NULL},
  {"%str!", PVAR, NULL},
  {"%vsp", PVAR, NULL},
  {"gen-cache-classes", CVAR, &Ygen_cache_classes},
  {"%gen-mets-setter", PVAR, NULL},
  {"%tail-setter", PVAR, NULL},
  {"%class-children-setter", PVAR, NULL},
  {"<tup>", CVAR, &YLtupG},
  {"%clone", PVAR, NULL},
  {"@fold", CVAR, &YOfold},
  {"---main-7---", PVAR, NULL},
  {"%src-loc-file", PVAR, NULL},
  {"%union", PVAR, NULL},
  {"%stack-overflow-lim", PVAR, NULL},
  {"%met-code", PVAR, NULL},
  {"%finalize-props", PVAR, NULL},
  {"@tany?", CVAR, &YOtanyQ},
  {"range-error", CVAR, &Yrange_error},
  {"%prop-setter-setter", PVAR, NULL},
  {"%%check-call-types", PVAR, NULL},
  {"%to-tup", PVAR, NULL},
  {"<met>", CVAR, &YLmetG},
  {"%met-env", PVAR, NULL},
  {"<flat>", CVAR, &YLflatG},
  {"%prop-owner", PVAR, NULL},
  {"%prop-getter-setter", PVAR, NULL},
  {"---main-4---", PVAR, NULL},
  {"%next-methods", PVAR, NULL},
  {"%loc", PVAR, NULL},
  {"%vm-fun-env-elt-setter", PVAR, NULL},
  {"%macro", PVAR, NULL},
  {"%type-class-setter", PVAR, NULL},
  {"%class-ancestors", PVAR, NULL},
  {"fun-cache", CVAR, &Yfun_cache},
  {"macro-expand", PVAR, NULL},
  {"%type-object-setter", PVAR, NULL},
  {"%process-module", PVAR, NULL},
  {"property-not-found-error", CVAR, &Yproperty_not_found_error},
  {"*early-classes*", CVAR, &YTearly_classesT},
  {"%flo-dat-setter", PVAR, NULL},
  {"%gen-refs-setter", PVAR, NULL},
  {"%stack-check-reg?", PVAR, NULL},
  {"opts-tup-storage", CVAR, &Yopts_tup_storage},
  {"%check-arity", PVAR, NULL},
  {"%fun-reg", PVAR, NULL},
  {"@all2?", CVAR, &YOall2Q},
  {"%fun-val-check-type", PVAR, NULL},
  {"%tnul", CVAR, &YPtnul},
  {"%gen-mets", PVAR, NULL},
  {"prop-setter", CVAR, &Yprop_setter},
  {"@lst", CVAR, &YOlst},
  {"%define-props", PVAR, NULL},
  {"@olen", PVAR, NULL},
  {"%tup!", PVAR, NULL},
  {"%fu", PVAR, NULL},
  {"%union-elts-setter", PVAR, NULL},
  {"<lst>", CVAR, &YLlstG},
  {"%app-args", PVAR, NULL},
  {"%met-sig", PVAR, NULL},
  {"%met-env-setter", PVAR, NULL},
  {"%product-elts", PVAR, NULL},
  {"%new", PVAR, NULL},
  {"<fun>", CVAR, &YLfunG},
  {"---main-13---", PVAR, NULL},
  {"type-object", CVAR, &Ytype_object},
  {"%class-gens", PVAR, NULL},
  {"@nul?", PVAR, NULL},
  {"$direct-object-class", CVAR, &YDdirect_object_class},
  {"%gen-sig-setter", PVAR, NULL},
  {"@empty?", PVAR, NULL},
  {"%gen-cache", PVAR, NULL},
  {"%class-of", PVAR, NULL},
  {"%fb", PVAR, NULL},
  {"---main-8---", PVAR, NULL},
  {"<seq!>", CVAR, &YLseqXG},
  {"%i?", PVAR, NULL},
  {"%vfp", PVAR, NULL},
  {"%i>>>", PVAR, NULL},
  {"let", PVAR, NULL},
  {"%classes-ready?", CVAR, &YPclasses_readyQ},
  {"@may-isa?", CVAR, &YOmay_isaQ},
  {"%raw-call", PVAR, NULL},
  {"@pair", PVAR, NULL},
  {"ds", PVAR, NULL},
  {"%def-patch-early-generics", PVAR, NULL},
  {"class-parents-setter", CVAR, &Yclass_parents_setter},
  {"@fab", CVAR, &YOfab},
  {"@int?", PVAR, NULL},
  {"%cb", PVAR, NULL},
  {"tail-setter", CVAR, &Ytail_setter},
  {"%define-getter", PVAR, NULL},
  {"%vm-box-val", PVAR, NULL},
  {"%define-parents", PVAR, NULL},
  {"sig-nary?-setter", CVAR, &Ysig_naryQ_setter},
  {"%gen-cache-missable?", PVAR, NULL},
  {"%opts-location", PVAR, NULL},
  {"class-props-setter", CVAR, &Yclass_props_setter},
  {"@opts-as-lst", CVAR, &YOopts_as_lst},
  {"<seq.>", CVAR, &YLseqIG},
  {"---main-6---", PVAR, NULL},
  {"when", PVAR, NULL},
  {"%fun-cache", PVAR, NULL},
  {"---main-14---", PVAR, NULL},
  {"sig-unification-vars-setter", CVAR, &Ysig_unification_vars_setter},
  {"%ru", PVAR, NULL},
  {"%gen-cache-singletons-setter", PVAR, NULL},
  {"gen-cache-singletons", CVAR, &Ygen_cache_singletons},
  {"%gen-code-setter", PVAR, NULL},
  {"%im", PVAR, NULL},
  {"box-value-setter", CVAR, &Ybox_value_setter},
  {"---main-5---", PVAR, NULL},
  {"%type-class", PVAR, NULL},
  {"%met-name", PVAR, NULL},
  {"%i<<", PVAR, NULL},
  {"<seq>", CVAR, &YLseqG},
  {"%%prop", PVAR, NULL},
  {"class-parents", CVAR, &Yclass_parents},
  {"tail", CVAR, &Ytail},
  {"tup", CVAR, &Ytup},
  {"%bb", PVAR, NULL},
  {"nil", CVAR, &Ynil},
  {"nul", CVAR, &Ynul},
  {"sig-nary?", CVAR, &Ysig_naryQ},
  {"class-props", CVAR, &Yclass_props},
  {"*boot-macro-module-names*", CVAR, &YTboot_macro_module_namesT},
  {"%gen-cache-count", PVAR, NULL},
  {"%sig-specs-setter", PVAR, NULL},
  {"%fun-cache-setter", PVAR, NULL},
  {"%sig-names-setter", PVAR, NULL},
  {"%%sym", PVAR, NULL},
  {"%gen-code", PVAR, NULL},
  {"@head", PVAR, NULL},
  {"quasiquote", PVAR, NULL},
  {"%met-refs", PVAR, NULL},
  {"<col!>", CVAR, &YLcolXG},
  {"%sig", PVAR, NULL},
  {"%loc-val", PVAR, NULL},
  {"%cu", PVAR, NULL},
  {"loc", PVAR, NULL},
  {"%class-direct-props", PVAR, NULL},
  {"narity-error", CVAR, &Ynarity_error},
  {"%product-elts-setter", PVAR, NULL},
  {"<sig>", CVAR, &YLsigG},
  {"%untag", PVAR, NULL},
  {"sig-unification-vars", CVAR, &Ysig_unification_vars},
  {"ct", PVAR, NULL},
  {"fun-env", CVAR, &Yfun_env},
  {"class-mets-setter", CVAR, &Yclass_mets_setter},
  {"opts-count", CVAR, &Yopts_count},
  {"%c=", PVAR, NULL},
  {"%class-forward", PVAR, NULL},
  {"%gen-cache-missable?-setter", PVAR, NULL},
  {"@all?", CVAR, &YOallQ},
  {"%class-row", PVAR, NULL},
  {"@subtype?", CVAR, &YOsubtypeQ},
  {"class-row", CVAR, &Yclass_row},
  {"prop-getter", CVAR, &Yprop_getter},
  {"@subclass?", PVAR, NULL},
  {"type-class", CVAR, &Ytype_class},
  {"<col.>", CVAR, &YLcolIG},
  {"prop-type", CVAR, &Yprop_type},
  {"%gen", PVAR, NULL},
  {"%raw-met-call", PVAR, NULL},
  {"%tag-into", PVAR, NULL},
  {"box-value", CVAR, &Ybox_value},
  {"no-applicable-methods-error", CVAR, &Yno_applicable_methods_error},
  {"%i+", PVAR, NULL},
  {"%eof-object", PVAR, NULL},
  {"%vm-box-val-setter", PVAR, NULL},
  {"@head-setter", PVAR, NULL},
  {"%gen-cache-arg-pos-setter", PVAR, NULL},
  {"%loc-off", PVAR, NULL},
  {"nul-prop", CVAR, &Ynul_prop},
  {"%met", PVAR, NULL},
  {"%rep!", PVAR, NULL},
  {"%define-hierarchy", PVAR, NULL},
  {"%def-regs", PVAR, NULL},
  {"%i<<<", PVAR, NULL},
  {"%object-class-setter", PVAR, NULL},
  {"<col>", CVAR, &YLcolG},
  {"%vfn-setter", PVAR, NULL},
  {"class-mets", CVAR, &Yclass_mets},
  {"set", PVAR, NULL},
  {"%class-prop-len", PVAR, NULL},
  {"%i-", PVAR, NULL},
  {"%set-regs", PVAR, NULL},
  {"%sig-unification-vars", PVAR, NULL},
  {"use/library", PVAR, NULL},
  {"%subclass", PVAR, NULL},
  {"%trace-on", PVAR, NULL},
  {"%class-parents", PVAR, NULL},
  {"force-names-into-boot-module", PVAR, NULL},
  {"%allocate-stack", PVAR, NULL},
  {"%iu", PVAR, NULL},
  {"%met-sig-setter", PVAR, NULL},
  {"<rep>", CVAR, &YLrepG},
  {"%dyn-var-val-setter", PVAR, NULL},
  {"@alter", CVAR, &YOalter},
  {"%c<", PVAR, NULL},
  {"dss", PVAR, NULL},
  {"@rev!", CVAR, &YOrevX},
  {"%class-mets", PVAR, NULL},
  {"%tu", PVAR, NULL},
  {"%fapply", PVAR, NULL},
  {"<gen-cache>", CVAR, &YLgen_cacheG},
  {"%opts-tup-tup-setter", PVAR, NULL},
  {"%rnul", CVAR, &YPrnul},
  {"fun-mets-setter", CVAR, &Yfun_mets_setter},
  {"use", PVAR, NULL},
  {"fun-sig-setter", CVAR, &Yfun_sig_setter},
  {"gen-cache-arg-pos", CVAR, &Ygen_cache_arg_pos},
  {"$max-int", CVAR, &YDmax_int},
  {"%dyn-var-val", PVAR, NULL},
  {"%class-name-setter", PVAR, NULL},
  {"%gen-name-setter", PVAR, NULL},
  {"@del-dups", CVAR, &YOdel_dups},
  {"<loc>", CVAR, &YLlocG},
  {"%rep", PVAR, NULL},
  {"%raw-alloc", PVAR, NULL},
  {"%su", PVAR, NULL},
  {"%indirect-object?", PVAR, NULL},
  {"%%macro", CVAR, &YPPmacro},
  {"%class-prop-len-setter", PVAR, NULL},
  {"lst", CVAR, &Ylst},
  {"isa?", CVAR, &YisaQ},
  {"app-args", CVAR, &Yapp_args},
  {"%pairize", PVAR, NULL},
  {"class-name", CVAR, &Yclass_name},
  {"%i<", PVAR, NULL},
  {"%sig-nary?-setter", PVAR, NULL},
  {"%prop-setter", PVAR, NULL},
  {"%class-name", PVAR, NULL},
  {"%sig-unification-vars-setter", PVAR, NULL},
  {"<flo>", CVAR, &YLfloG},
  {"fun-mets", CVAR, &Yfun_mets},
  {"seq", PVAR, NULL},
  {"%class-type-cache", PVAR, NULL},
  {"fun-sig", CVAR, &Yfun_sig},
  {"*boot-macro-names*", CVAR, &YTboot_macro_namesT},
  {"%gen-cache-count-setter", PVAR, NULL},
  {"%i>>", PVAR, NULL},
  {"%sig-arity", PVAR, NULL},
  {"%tag-bits", PVAR, NULL},
  {"---main-11---", PVAR, NULL},
  {"%vm-box-fab", PVAR, NULL},
  {"%sig-names", PVAR, NULL},
  {"%vfn", PVAR, NULL},
  {"@@empty?", CVAR, &YOOemptyQ},
  {"%vpc-setter", PVAR, NULL},
  {"app-filename", CVAR, &Yapp_filename},
  {"<fixnum>", CVAR, &YLfixnumG},
  {"$num-int-bits", CVAR, &YDnum_int_bits},
  {"opts-location", CVAR, &Yopts_location},
  {"if", PVAR, NULL},
  {"%vsp-setter", PVAR, NULL},
  {"%prop-owner-setter", PVAR, NULL},
  {"%tail", PVAR, NULL},
  {"%define-boxed-structure", PVAR, NULL},
  {"%prop-unbound-error", CVAR, &YPprop_unbound_error},
  {"%opts-tup-location", PVAR, NULL},
  {"@type-equal?", CVAR, &YOtype_equalQ},
  {"%define-structure", PVAR, NULL},
  {"prop-owner", CVAR, &Yprop_owner},
  {"@<", PVAR, NULL},
  {"%unexec", PVAR, NULL},
  {"%define-setter", PVAR, NULL},
  {"%reparent-class-shells", PVAR, NULL},
  {"@do", CVAR, &YOdo},
  {"%stack-check", PVAR, NULL},
  {"%vpc", PVAR, NULL},
  {"%add-prop", CVAR, &YPadd_prop},
  {"@class-isa?", PVAR, NULL},
  {"%opts-location-setter", PVAR, NULL},
  {"%product", PVAR, NULL},
  {"order-specs", CVAR, &Yorder_specs},
  {"%i^", PVAR, NULL},
  {"<prop>", CVAR, &YLpropG},
  {"%fab-code-refs", PVAR, NULL},
  {"<int>", CVAR, &YLintG},
  {"%prop-type", PVAR, NULL},
  {"unless", PVAR, NULL},
  {"%elt", PVAR, NULL},
  {"%prop-elt-setter", PVAR, NULL},
  {"%sb", PVAR, NULL},
  {"%vm-fun-env-fab", PVAR, NULL},
  {"%%sfab", PVAR, NULL},
  {"class-id", CVAR, &Yclass_id},
  {"%class-id-setter", PVAR, NULL},
  {"%code-ref", PVAR, NULL},
  {"%object-class", PVAR, NULL},
  {"$adr-tag", PVAR, NULL},
  {"<num>", CVAR, &YLnumG},
  {"head-setter", CVAR, &Yhead_setter},
  {"%rlen", PVAR, NULL},
  {"not", CVAR, &Ynot},
  {"sig-specs-setter", CVAR, &Ysig_specs_setter},
  {"%build-runtime-modules", PVAR, NULL},
  {"<product>", CVAR, &YLproductG},
  {"%head", PVAR, NULL},
  {"class-ancestors-setter", CVAR, &Yclass_ancestors_setter},
  {"t*", CVAR, &YtT},
  {"return-type-error", CVAR, &Yreturn_type_error},
  {"%elt-setter", PVAR, NULL},
  {"%opts-tup-location-setter", PVAR, NULL},
  {"sig-val-setter", CVAR, &Ysig_val_setter},
  {"esc", PVAR, NULL},
  {"@mem?", CVAR, &YOmemQ},
  {"and", PVAR, NULL},
  {"$min-int", CVAR, &YDmin_int},
  {"dp", PVAR, NULL},
  {"%object-of", PVAR, NULL},
  {"%sig-val-setter", PVAR, NULL},
  {"%class-children", PVAR, NULL},
  {"@singleton-isa?", PVAR, NULL},
  {"%chr", PVAR, NULL},
  {"gen-cache-missable?", CVAR, &Ygen_cache_missableQ},
  {"%sp-elt", PVAR, NULL},
  {"%i*", PVAR, NULL},
  {"%class-parents-setter", PVAR, NULL},
  {"%class-direct-props-setter", PVAR, NULL},
  {"%opts-count-setter", PVAR, NULL},
  {"head", CVAR, &Yhead},
  {"sig-specs", CVAR, &Ysig_specs},
  {"%sig-specs", PVAR, NULL},
  {"%prop-init-setter", PVAR, NULL},
  {"<union>", CVAR, &YLunionG},
  {"class-ancestors", CVAR, &Yclass_ancestors},
  {"%snul", CVAR, &YPsnul},
  {"<src-loc>", CVAR, &YLsrc_locG},
  {"%break", PVAR, NULL},
  {"@pick", CVAR, &YOpick},
  {"fin", PVAR, NULL},
  {"fab-sym", CVAR, &Yfab_sym},
  {"%singleton", PVAR, NULL},
  {"dp!", PVAR, NULL},
  {"sig-val", CVAR, &Ysig_val},
  {"%with-monitor", CVAR, &YPwith_monitor},
  {"%@subclass?", PVAR, NULL},
  {"%unlink-stack", PVAR, NULL},
  {"@add", PVAR, NULL},
  {"dl", PVAR, NULL},
  {"%head-setter", PVAR, NULL},
  {"%vfp-setter", PVAR, NULL},
  {"@adr?", PVAR, NULL},
  {"@tail-setter", PVAR, NULL},
  {"%i=", PVAR, NULL},
  {"def", PVAR, NULL},
  {"prop-offset", CVAR, &Yprop_offset},
  {"%%len", PVAR, NULL},
  {"%gen-cache-classes-setter", PVAR, NULL},
  {"<chr>", CVAR, &YLchrG},
  {"class-gens-setter", CVAR, &Yclass_gens_setter},
  {"df", PVAR, NULL},
  {"%flo", PVAR, NULL},
  {"*macros-ok?*", CVAR, &YTmacros_okQT},
  {"<subclass>", CVAR, &YLsubclassG},
  {"%relt", PVAR, NULL},
  {"%fp-reg", PVAR, NULL},
  {"%ir", PVAR, NULL},
  {"---main-3---", PVAR, NULL},
  {"%check-call-types", PVAR, NULL},
  {"%opts-tup", PVAR, NULL},
  {"product-elts", CVAR, &Yproduct_elts},
  {"<mag>", CVAR, &YLmagG},
  {"export", PVAR, NULL},
  {"%class-props-setter", PVAR, NULL},
  {"%prop-init", PVAR, NULL},
  {"d.", PVAR, NULL},
  {"%add-met", CVAR, &YPadd_met},
  {"@oelt", PVAR, NULL},
  {"%class-props", PVAR, NULL},
  {"%trace-off", PVAR, NULL},
  {"*restarts-ok?*", CVAR, &YTrestarts_okQT},
  {"%class-shells", PVAR, NULL},
  {"%class-forward-setter", PVAR, NULL},
  {"@find", CVAR, &YOfind},
  {"%max-stack-len", PVAR, NULL},
  {"%ib", PVAR, NULL},
  {"class-gens", CVAR, &Yclass_gens},
  {"%fixnum", PVAR, NULL},
  {"%symbols", CVAR, &YPsymbols},
  {"@oelt-setter", PVAR, NULL},
  {"@@==", CVAR, &YOOEE},
  {"%met-code-setter", PVAR, NULL},
  {"%fab-dyn-var", PVAR, NULL},
  {"<singleton>", CVAR, &YLsingletonG},
  {"%prop-dat-at", PVAR, NULL},
  {"class-type-cache", CVAR, &Yclass_type_cache},
  {"no-next-methods-error", CVAR, &Yno_next_methods_error},
  {"%%tfab", PVAR, NULL},
  {"dg", PVAR, NULL},
  {"%vm-with-cleanup", PVAR, NULL},
  {"syntax-error", CVAR, &Ysyntax_error},
  {"---main-0---", PVAR, NULL},
  {"$gen-cache-singletons-offset", CVAR, &YDgen_cache_singletons_offset},
  {"%sym-nam", PVAR, NULL},
  {"use/include", PVAR, NULL},
  {"<box>", CVAR, &YLboxG},
  {"class-prop-len-setter", CVAR, &Yclass_prop_len_setter},
  {"%lu", PVAR, NULL},
  {"@map", CVAR, &YOmap},
  {"$tag-len", PVAR, NULL},
  {"%cons-args", PVAR, NULL},
  {"%type-object", PVAR, NULL},
  {"%gen-refs", PVAR, NULL},
  {"%object-shells", PVAR, NULL},
  {"fun-src-setter", CVAR, &Yfun_src_setter},
  {"may-isa?", CVAR, &Ymay_isaQ},
  {"or", PVAR, NULL},
  {"fun-name-setter", CVAR, &Yfun_name_setter},
  {"dc", PVAR, NULL},
  {"%opts-count", PVAR, NULL},
  {"%define-primitives", PVAR, NULL},
  {"mif", PVAR, NULL},
  {"%sym-nam-setter", PVAR, NULL},
  {"argument-type-error", CVAR, &Yargument_type_error},
  {"%class", PVAR, NULL},
  {"<log>", CVAR, &YLlogG},
  {"%app-filename", PVAR, NULL},
  {"%fp-reg-setter", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"assert-error", CVAR, &Yassert_error},
  {"class-prop-len", CVAR, &Yclass_prop_len},
  {"gen-src-setter", CVAR, &Ygen_src_setter},
  {"%selt", PVAR, NULL},
  {"src-loc-file", CVAR, &Ysrc_loc_file},
  {"%early-dispatch", CVAR, &YPearly_dispatch},
  {"%invoke-debugger", PVAR, NULL},
  {"@add-new", PVAR, NULL},
  {"<opts-tup>", CVAR, &YLopts_tupG},
  {"%gen-src-setter", PVAR, NULL},
  {"@tup", CVAR, &YOtup},
  {"%vm-fun-env-elt", PVAR, NULL},
  {"<any>", CVAR, &YLanyG},
  {"fun-src", CVAR, &Yfun_src},
  {"error", CVAR, &Yerror},
  {"%%apply", PVAR, NULL},
  {"%%mep-apply", PVAR, NULL},
  {"%define-structure-accessors", PVAR, NULL},
  {"%class-type-cache-setter", PVAR, NULL},
  {"%%rfab", PVAR, NULL},
  {"%define-repeated-structure", PVAR, NULL},
  {"%@class-of", PVAR, NULL},
  {"%str", PVAR, NULL},
  {"---main-12---", PVAR, NULL},
  {"%iv", PVAR, NULL},
  {"@cat2", CVAR, &YOcat2},
  {"property-type-error", CVAR, &Yproperty_type_error},
  {"%selt-setter", PVAR, NULL},
  {"keyboard-interrupt", CVAR, &Ykeyboard_interrupt},
  {"prop-init", CVAR, &Yprop_init},
  {"property-unbound-error", CVAR, &Yproperty_unbound_error},
  {"%do-stack-frames", PVAR, NULL},
  {"gen-src", CVAR, &Ygen_src},
  {"%telt", PVAR, NULL},
  {"@new", CVAR, &YOnew},
  {"%check-type", PVAR, NULL},
  {"---main-2---", PVAR, NULL},
  {"subtype?", CVAR, &YsubtypeQ},
  {"%eq?", PVAR, NULL},
  {"%gen-name", PVAR, NULL},
  {"%i!", PVAR, NULL},
  {"@any?", CVAR, &YOanyQ},
  {"%tag", PVAR, NULL},
  {"fun-name", CVAR, &Yfun_name},
  {"stack-overflow-error", CVAR, &Ystack_overflow_error},
  {"try", PVAR, NULL},
  {"%rev!", PVAR, NULL},
  {"<opts>", CVAR, &YLoptsG},
  {"%src-loc-file-setter", PVAR, NULL},
  {"cpl-error", CVAR, &Ycpl_error},
  {"%stack-check-reg?-setter", PVAR, NULL},
  {"union-elts", CVAR, &Yunion_elts},
  {"%patch-early-generics", PVAR, NULL},
  {"%opts-tup-count", PVAR, NULL},
  {"%lb", PVAR, NULL},
  {"%eof-object?", PVAR, NULL},
  {"%class-row-setter", PVAR, NULL},
  {"@+", PVAR, NULL},
  {"arity-error", CVAR, &Yarity_error},
  {"%met-prop-len", CVAR, &YPmet_prop_len},
  {"---main-10---", PVAR, NULL},
  {"$gen-cache-classes-offset", CVAR, &YDgen_cache_classes_offset},
  {"object-props", CVAR, &Yobject_props},
  {"%gen-cache-arg-pos", PVAR, NULL},
  {"@rev", CVAR, &YOrev},
  {"@telt-setter", PVAR, NULL},
  {"as-error", CVAR, &Yas_error},
  {"%sig-nary?", PVAR, NULL},
  {"%compute-ancestors", PVAR, NULL},
  {"%pair", PVAR, NULL},
  {"%gen-src", PVAR, NULL},
  {"%tlen", PVAR, NULL},
  {"%telt-setter", PVAR, NULL},
  {"%gen-cache-classes", PVAR, NULL},
  {"sig-names-setter", CVAR, &Ysig_names_setter},
  {"@not", PVAR, NULL},
  {"class-direct-props-setter", CVAR, &Yclass_direct_props_setter},
  {"%lst", PVAR, NULL},
  {"%finalize-props!", CVAR, &YPfinalize_propsX},
  {"dm", PVAR, NULL},
  {"%gen-cache-singletons", PVAR, NULL},
  {"%sym", PVAR, NULL},
  {"%src-loc-line-setter", PVAR, NULL},
  {"sig-names", CVAR, &Ysig_names},
  {"sig-arity-setter", CVAR, &Ysig_arity_setter},
  {"%define-tagged-structure", PVAR, NULL},
  {"ambiguous-method-error", CVAR, &Yambiguous_method_error},
  {"class-children-setter", CVAR, &Yclass_children_setter},
  {"%prop-getter", PVAR, NULL},
  {"%met-refs-setter", PVAR, NULL},
  {"%false", CVAR, &YPfalse},
  {"%class-id", PVAR, NULL},
  {"%opts-tup-tup", PVAR, NULL},
  {"one-nil", CVAR, &Yone_nil},
  {"%patch-early-generic", CVAR, &YPpatch_early_generic},
  {"%vm-with-exit", PVAR, NULL},
  {"%met-src-setter", PVAR, NULL},
  {"%stack-reg", PVAR, NULL},
  {"%union-elts", PVAR, NULL},
  {"%src-loc-line", PVAR, NULL},
  {"%src-loc", PVAR, NULL},
  {"$tag-msk", PVAR, NULL},
  {"%vnm", PVAR, NULL},
  {"%class-gens-setter", PVAR, NULL},
  {"new", CVAR, &Ynew},
  {"bound?", PVAR, NULL},
  {"%slen", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%raw", NULL},
  {"<class>", NULL},
  {"class-direct-props", NULL},
  {"sym-name", NULL},
  {"src-loc-line", NULL},
  {"%gen-sig", NULL},
  {"sig-arity", NULL},
  {"class-children", NULL},
  {"gen-refs", NULL},
  {"@tail", NULL},
  {"fun-refs", NULL},
  {"src-loc-file", NULL},
  {"%class-ancestors-setter", NULL},
  {"type-error", NULL},
  {"%dispatch", NULL},
  {"%i&", NULL},
  {"file-opening-error", NULL},
  {"<type>", NULL},
  {"ct-also", NULL},
  {"dv", NULL},
  {"%class-gens-setter", NULL},
  {"%tup", NULL},
  {"%process-module", NULL},
  {"@telt", NULL},
  {"ddv", NULL},
  {"<gen>", NULL},
  {"@tall2?", NULL},
  {"%macro", NULL},
  {"@len", NULL},
  {"%prop-elt", NULL},
  {"%binding-name", NULL},
  {"@tlen", NULL},
  {"arithmetic-error", NULL},
  {"%vnm-setter", NULL},
  {"rep", NULL},
  {"%sig-val", NULL},
  {"@=", NULL},
  {"%relt-setter", NULL},
  {"sig-val", NULL},
  {"%rep", NULL},
  {"@elt", NULL},
  {"@isa?", NULL},
  {"as-error", NULL},
  {"update-instance-for-changed-class", NULL},
  {"internal-error", NULL},
  {"use/export", NULL},
  {"%loc-val-setter", NULL},
  {"%loc-off", NULL},
  {"<str>", NULL},
  {"%sp-reg-setter", NULL},
  {"%it/", NULL},
  {"quote", NULL},
  {"fab-sym", NULL},
  {"unexec", NULL},
  {"@telt-setter", NULL},
  {"%slen", NULL},
  {"use/mangle", NULL},
  {"%vsp", NULL},
  {"@map", NULL},
  {"%gen-mets-setter", NULL},
  {"%class-children-setter", NULL},
  {"<tup>", NULL},
  {"%clone", NULL},
  {"@fold", NULL},
  {"%type-object", NULL},
  {"@cat2", NULL},
  {"%met-code", NULL},
  {"@tany?", NULL},
  {"range-error", NULL},
  {"%%check-call-types", NULL},
  {"%to-tup", NULL},
  {"<met>", NULL},
  {"%met-env", NULL},
  {"<flat>", NULL},
  {"%next-methods", NULL},
  {"%vm-fun-env-elt-setter", NULL},
  {"%sp-reg", NULL},
  {"fun-cache", NULL},
  {"macro-expand", NULL},
  {"property-not-found-error", NULL},
  {"*early-classes*", NULL},
  {"%stack-check-reg?", NULL},
  {"%fun-reg", NULL},
  {"%fun-val-check-type", NULL},
  {"%tnul", NULL},
  {"prop-setter", NULL},
  {"@lst", NULL},
  {"@olen", NULL},
  {"%class-prop-len", NULL},
  {"%fu", NULL},
  {"<lst>", NULL},
  {"%app-args", NULL},
  {"%met-env-setter", NULL},
  {"%product-elts", NULL},
  {"<fun>", NULL},
  {"type-object", NULL},
  {"%class-gens", NULL},
  {"$direct-object-class", NULL},
  {"@empty?", NULL},
  {"%gen-cache", NULL},
  {"%class-of", NULL},
  {"%fb", NULL},
  {"@any?", NULL},
  {"<seq!>", NULL},
  {"%i?", NULL},
  {"%i>>>", NULL},
  {"let", NULL},
  {"%classes-ready?", NULL},
  {"%raw-call", NULL},
  {"ds", NULL},
  {"@int?", NULL},
  {"%cb", NULL},
  {"%vm-box-val", NULL},
  {"*boot-macro-module-names*", NULL},
  {"sig-nary?-setter", NULL},
  {"%gen-cache-missable?", NULL},
  {"@opts-as-lst", NULL},
  {"<seq.>", NULL},
  {"%fun-cache", NULL},
  {"sig-unification-vars-setter", NULL},
  {"%gen-cache-singletons-setter", NULL},
  {"%gen-code-setter", NULL},
  {"%im", NULL},
  {"%type-class", NULL},
  {"%i<<", NULL},
  {"<seq>", NULL},
  {"class-parents", NULL},
  {"tail", NULL},
  {"tup", NULL},
  {"%bb", NULL},
  {"nil", NULL},
  {"nul", NULL},
  {"class-props", NULL},
  {"%telt", NULL},
  {"%fun-cache-setter", NULL},
  {"%%sym", NULL},
  {"@head", NULL},
  {"quasiquote", NULL},
  {"<prop>", NULL},
  {"<col!>", NULL},
  {"not", NULL},
  {"%loc-val", NULL},
  {"%cu", NULL},
  {"loc", NULL},
  {"%class-direct-props", NULL},
  {"narity-error", NULL},
  {"<sig>", NULL},
  {"%untag", NULL},
  {"ct", NULL},
  {"%c=", NULL},
  {"%class-forward", NULL},
  {"@all?", NULL},
  {"@subtype?", NULL},
  {"prop-getter", NULL},
  {"@subclass?", NULL},
  {"type-class", NULL},
  {"<col.>", NULL},
  {"prop-type", NULL},
  {"%raw-met-call", NULL},
  {"sig-unification-vars", NULL},
  {"no-applicable-methods-error", NULL},
  {"%eof-object", NULL},
  {"%vm-box-val-setter", NULL},
  {"sig-nary?", NULL},
  {"%gen-cache-arg-pos-setter", NULL},
  {"nul-prop", NULL},
  {"%met", NULL},
  {"%def-regs", NULL},
  {"@==", NULL},
  {"%i<<<", NULL},
  {"<col>", NULL},
  {"%vfn-setter", NULL},
  {"set", NULL},
  {"%i-", NULL},
  {"%sig-unification-vars", NULL},
  {"use/library", NULL},
  {"%class-parents", NULL},
  {"%iu", NULL},
  {"<rep>", NULL},
  {"%dyn-var-val-setter", NULL},
  {"%c<", NULL},
  {"dss", NULL},
  {"@rev!", NULL},
  {"%class-mets", NULL},
  {"<gen-cache>", NULL},
  {"%rnul", NULL},
  {"use", NULL},
  {"fun-sig-setter", NULL},
  {"$max-int", NULL},
  {"%dyn-var-val", NULL},
  {"@del-dups", NULL},
  {"<loc>", NULL},
  {"%su", NULL},
  {"%%macro", NULL},
  {"isa?", NULL},
  {"lst", NULL},
  {"app-args", NULL},
  {"class-name", NULL},
  {"%i<", NULL},
  {"%class-row-setter", NULL},
  {"@all2?", NULL},
  {"def", NULL},
  {"<flo>", NULL},
  {"fun-mets", NULL},
  {"seq", NULL},
  {"fun-sig", NULL},
  {"*boot-macro-names*", NULL},
  {"%class-mets-setter", NULL},
  {"%i>>", NULL},
  {"%sig-arity", NULL},
  {"%vm-box-fab", NULL},
  {"%sig-names", NULL},
  {"%vfn", NULL},
  {"%vpc-setter", NULL},
  {"app-filename", NULL},
  {"<fixnum>", NULL},
  {"if", NULL},
  {"%vsp-setter", NULL},
  {"%tail", NULL},
  {"%prop-unbound-error", NULL},
  {"%class", NULL},
  {"@type-equal?", NULL},
  {"prop-owner", NULL},
  {"@<", NULL},
  {"@do", NULL},
  {"%vpc", NULL},
  {"@pick", NULL},
  {"@class-isa?", NULL},
  {"tail-setter", NULL},
  {"order-specs", NULL},
  {"%i^", NULL},
  {"<int>", NULL},
  {"%prop-type", NULL},
  {"%prop-elt-setter", NULL},
  {"%vm-fun-env-fab", NULL},
  {"%class-ancestors", NULL},
  {"%class-id-setter", NULL},
  {"%object-class", NULL},
  {"%set-regs", NULL},
  {"<num>", NULL},
  {"head-setter", NULL},
  {"%rlen", NULL},
  {"sig-specs-setter", NULL},
  {"%build-runtime-modules", NULL},
  {"<product>", NULL},
  {"%head", NULL},
  {"return-type-error", NULL},
  {"fun", NULL},
  {"sig-val-setter", NULL},
  {"esc", NULL},
  {"@mem?", NULL},
  {"%opts-tup", NULL},
  {"$min-int", NULL},
  {"dp", NULL},
  {"%class-children", NULL},
  {"%patch-early-generics", NULL},
  {"%sp-elt", NULL},
  {"%i*", NULL},
  {"%class-direct-props-setter", NULL},
  {"%loc-off-setter", NULL},
  {"head", NULL},
  {"sig-specs", NULL},
  {"t*", NULL},
  {"<union>", NULL},
  {"class-ancestors", NULL},
  {"%snul", NULL},
  {"<src-loc>", NULL},
  {"%break", NULL},
  {"fin", NULL},
  {"%singleton", NULL},
  {"dp!", NULL},
  {"%with-monitor", NULL},
  {"%@subclass?", NULL},
  {"%unlink-stack", NULL},
  {"@add", NULL},
  {"dl", NULL},
  {"%vfp-setter", NULL},
  {"@tail-setter", NULL},
  {"%i=", NULL},
  {"prop-offset", NULL},
  {"%gen-cache-classes-setter", NULL},
  {"<chr>", NULL},
  {"df", NULL},
  {"%allocate-stack", NULL},
  {"*macros-ok?*", NULL},
  {"<subclass>", NULL},
  {"%relt", NULL},
  {"%check-call-types", NULL},
  {"product-elts", NULL},
  {"<mag>", NULL},
  {"export", NULL},
  {"%prop-init", NULL},
  {"d.", NULL},
  {"@oelt", NULL},
  {"%class-props", NULL},
  {"*restarts-ok?*", NULL},
  {"%class-forward-setter", NULL},
  {"%max-stack-len", NULL},
  {"%ib", NULL},
  {"%symbols", NULL},
  {"@oelt-setter", NULL},
  {"@@==", NULL},
  {"%gen-code", NULL},
  {"@adr?", NULL},
  {"<singleton>", NULL},
  {"%prop-dat-at", NULL},
  {"no-next-methods-error", NULL},
  {"dg", NULL},
  {"%class-prop-len-setter", NULL},
  {"syntax-error", NULL},
  {"%gen-mets", NULL},
  {"use/include", NULL},
  {"%lu", NULL},
  {"%sb", NULL},
  {"%gen-refs", NULL},
  {"%vfp", NULL},
  {"fun-src-setter", NULL},
  {"may-isa?", NULL},
  {"fun-name-setter", NULL},
  {"dc", NULL},
  {"%object-of", NULL},
  {"mif", NULL},
  {"%fab-dyn-var", NULL},
  {"argument-type-error", NULL},
  {"<log>", NULL},
  {"@@empty?", NULL},
  {"%app-filename", NULL},
  {"assert-error", NULL},
  {"@add-new", NULL},
  {"gen-src-setter", NULL},
  {"%selt", NULL},
  {"*boot-macro-expanders*", NULL},
  {"%invoke-debugger", NULL},
  {"@tup", NULL},
  {"@pair", NULL},
  {"%vm-fun-env-elt", NULL},
  {"error", NULL},
  {"fun-name", NULL},
  {"%gen-cache-classes", NULL},
  {"%@class-of", NULL},
  {"%str", NULL},
  {"%iv", NULL},
  {"property-type-error", NULL},
  {"<any>", NULL},
  {"keyboard-interrupt", NULL},
  {"prop-init", NULL},
  {"property-unbound-error", NULL},
  {"%do-stack-frames", NULL},
  {"union-elts", NULL},
  {"gen-src", NULL},
  {"%met-sig", NULL},
  {"@new", NULL},
  {"%i+", NULL},
  {"subtype?", NULL},
  {"%eq?", NULL},
  {"%i!", NULL},
  {"%sig-specs", NULL},
  {"%selt-setter", NULL},
  {"stack-overflow-error", NULL},
  {"try", NULL},
  {"<opts>", NULL},
  {"cpl-error", NULL},
  {"%stack-check-reg?-setter", NULL},
  {"fun-src", NULL},
  {"%sig-nary?", NULL},
  {"%gen-cache-singletons", NULL},
  {"%lb", NULL},
  {"%eof-object?", NULL},
  {"@+", NULL},
  {"<sym>", NULL},
  {"arity-error", NULL},
  {"%met-prop-len", NULL},
  {"%vm-with-cleanup", NULL},
  {"object-props", NULL},
  {"%gen-cache-arg-pos", NULL},
  {"@rev", NULL},
  {"unknown-function-error", NULL},
  {"%pair", NULL},
  {"%gen-src", NULL},
  {"%tlen", NULL},
  {"%telt-setter", NULL},
  {"sig-names-setter", NULL},
  {"@not", NULL},
  {"dm", NULL},
  {"sig-names", NULL},
  {"sig-arity-setter", NULL},
  {"%class-props-setter", NULL},
  {"ambiguous-method-error", NULL},
  {"%prop-getter", NULL},
  {"%class-id", NULL},
  {"@may-isa?", NULL},
  {"%vm-with-exit", NULL},
  {"%stack-reg", NULL},
  {"@singleton-isa?", NULL},
  {"%union-elts", NULL},
  {"%src-loc", NULL},
  {"%vnm", NULL},
  {"new", NULL},
  {"bound?", NULL},
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
