/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/macros");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/macros */

DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOlst,"goo/boot","@lst");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ynil,"goo/boot","nil");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yclass_row,"goo/boot","class-row");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YPfalse,"goo/boot","%false");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(Yas_error,"goo/boot","as-error");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yhead,"goo/boot","head");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yclass_gens,"goo/boot","class-gens");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YOdo,"goo/boot","@do");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
DEF(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YOmemQ,"goo/boot","@mem?");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YOlit,"goo/boot","@lit");
DEF(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
DEF(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOpick,"goo/boot","@pick");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YOmap,"goo/boot","@map");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YLbignumG,"goo/boot","<bignum>");
DEF(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YOtup,"goo/boot","@tup");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YLproductG,"goo/boot","<product>");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ylst,"goo/boot","lst");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ytail,"goo/boot","tail");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOnew,"goo/boot","@new");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YLboxG,"goo/boot","<box>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YPtrue,"goo/boot","%true");
EXT(Ybox_value,"goo/boot","box-value");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YOfold,"goo/boot","@fold");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Ynew,"goo/boot","new");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(YgooSmacrosYlast,"goo/macros","last");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_212);
DEFLIT(lit_181);
DEFLIT(lit_96);
DEFLIT(lit_244);
DEFLIT(lit_125);
DEFLIT(lit_99);
DEFLIT(lit_188);
DEFLIT(lit_243);
DEFLIT(lit_137);
DEFLIT(lit_72);
DEFLIT(lit_133);
DEFLIT(lit_46);
DEFLIT(lit_139);
DEFLIT(lit_168);
DEFLIT(lit_81);
DEFLIT(lit_59);
DEFLIT(lit_177);
DEFLIT(lit_102);
DEFLIT(lit_65);
DEFLIT(lit_104);
DEFLIT(lit_80);
DEFLIT(lit_169);
DEFLIT(lit_85);
DEFLIT(lit_92);
DEFLIT(lit_187);
DEFLIT(lit_213);
DEFLIT(lit_148);
DEFLIT(lit_170);
DEFLIT(lit_132);
DEFLIT(lit_49);
DEFLIT(lit_62);
DEFLIT(lit_190);
DEFLIT(lit_64);
DEFLIT(lit_103);
DEFLIT(lit_1);
DEFLIT(lit_42);
DEFLIT(lit_275);
DEFLIT(lit_135);
DEFLIT(lit_74);
DEFLIT(lit_215);
DEFLIT(lit_116);
DEFLIT(lit_91);
DEFLIT(lit_20);
DEFLIT(lit_25);
DEFLIT(lit_285);
DEFLIT(lit_173);
DEFLIT(lit_246);
DEFLIT(lit_245);
DEFLIT(lit_131);
DEFLIT(lit_3);
DEFLIT(lit_17);
DEFLIT(lit_274);
DEFLIT(lit_57);
DEFLIT(lit_249);
DEFLIT(lit_47);
DEFLIT(lit_16);
DEFLIT(lit_154);
DEFLIT(lit_55);
DEFLIT(lit_27);
DEFLIT(lit_138);
DEFLIT(lit_165);
DEFLIT(lit_15);
DEFLIT(lit_106);
DEFLIT(lit_143);
DEFLIT(lit_241);
DEFLIT(lit_258);
DEFLIT(lit_126);
DEFLIT(lit_164);
DEFLIT(lit_26);
DEFLIT(lit_79);
DEFLIT(lit_70);
DEFLIT(lit_22);
DEFLIT(lit_35);
DEFLIT(lit_277);
DEFLIT(lit_158);
DEFLIT(lit_13);
DEFLIT(lit_228);
DEFLIT(lit_114);
DEFLIT(lit_159);
DEFLIT(lit_88);
DEFLIT(lit_109);
DEFLIT(lit_260);
DEFLIT(lit_186);
DEFLIT(lit_207);
DEFLIT(lit_202);
DEFLIT(lit_145);
DEFLIT(lit_83);
DEFLIT(lit_78);
DEFLIT(lit_163);
DEFLIT(lit_259);
DEFLIT(lit_194);
DEFLIT(lit_269);
DEFLIT(lit_157);
DEFLIT(lit_12);
DEFLIT(lit_231);
DEFLIT(lit_250);
DEFLIT(lit_180);
DEFLIT(lit_176);
DEFLIT(lit_193);
DEFLIT(lit_195);
DEFLIT(lit_84);
DEFLIT(lit_24);
DEFLIT(lit_223);
DEFLIT(lit_0);
DEFLIT(lit_242);
DEFLIT(lit_266);
DEFLIT(lit_36);
DEFLIT(lit_198);
DEFLIT(lit_68);
DEFLIT(lit_151);
DEFLIT(lit_38);
DEFLIT(lit_73);
DEFLIT(lit_225);
DEFLIT(lit_45);
DEFLIT(lit_33);
DEFLIT(lit_10);
DEFLIT(lit_255);
DEFLIT(lit_123);
DEFLIT(lit_167);
DEFLIT(lit_216);
DEFLIT(lit_141);
DEFLIT(lit_211);
DEFLIT(lit_254);
DEFLIT(lit_174);
DEFLIT(lit_262);
DEFLIT(lit_175);
DEFLIT(lit_77);
DEFLIT(lit_61);
DEFLIT(lit_286);
DEFLIT(lit_134);
DEFLIT(lit_50);
DEFLIT(lit_111);
DEFLIT(lit_100);
DEFLIT(lit_76);
DEFLIT(lit_264);
DEFLIT(lit_161);
DEFLIT(lit_280);
DEFLIT(lit_196);
DEFLIT(lit_155);
DEFLIT(lit_9);
DEFLIT(lit_232);
DEFLIT(lit_227);
DEFLIT(lit_204);
DEFLIT(lit_129);
DEFLIT(lit_214);
DEFLIT(lit_112);
DEFLIT(lit_162);
DEFLIT(lit_124);
DEFLIT(lit_237);
DEFLIT(lit_144);
DEFLIT(lit_58);
DEFLIT(lit_121);
DEFLIT(lit_271);
DEFLIT(lit_98);
DEFLIT(lit_2);
DEFLIT(lit_272);
DEFLIT(lit_43);
DEFLIT(lit_210);
DEFLIT(lit_8);
DEFLIT(lit_153);
DEFLIT(lit_276);
DEFLIT(lit_203);
DEFLIT(lit_18);
DEFLIT(lit_7);
DEFLIT(lit_234);
DEFLIT(lit_226);
DEFLIT(lit_205);
DEFLIT(lit_75);
DEFLIT(lit_252);
DEFLIT(lit_97);
DEFLIT(lit_51);
DEFLIT(lit_185);
DEFLIT(lit_54);
DEFLIT(lit_233);
DEFLIT(lit_6);
DEFLIT(lit_108);
DEFLIT(lit_197);
DEFLIT(lit_86);
DEFLIT(lit_200);
DEFLIT(lit_267);
DEFLIT(lit_23);
DEFLIT(lit_94);
DEFLIT(lit_147);
DEFLIT(lit_117);
DEFLIT(lit_120);
DEFLIT(lit_119);
DEFLIT(lit_90);
DEFLIT(lit_183);
DEFLIT(lit_184);
DEFLIT(lit_127);
DEFLIT(lit_270);
DEFLIT(lit_257);
DEFLIT(lit_32);
DEFLIT(lit_140);
DEFLIT(lit_130);
DEFLIT(lit_281);
DEFLIT(lit_87);
DEFLIT(lit_251);
DEFLIT(lit_93);
DEFLIT(lit_110);
DEFLIT(lit_206);
DEFLIT(lit_21);
DEFLIT(lit_11);
DEFLIT(lit_239);
DEFLIT(lit_95);
DEFLIT(lit_31);
DEFLIT(lit_128);
DEFLIT(lit_149);
DEFLIT(lit_37);
DEFLIT(lit_265);
DEFLIT(lit_52);
DEFLIT(lit_71);
DEFLIT(lit_282);
DEFLIT(lit_273);
DEFLIT(lit_192);
DEFLIT(lit_219);
DEFLIT(lit_44);
DEFLIT(lit_256);
DEFLIT(lit_39);
DEFLIT(lit_82);
DEFLIT(lit_142);
DEFLIT(lit_278);
DEFLIT(lit_217);
DEFLIT(lit_238);
DEFLIT(lit_230);
DEFLIT(lit_28);
DEFLIT(lit_182);
DEFLIT(lit_247);
DEFLIT(lit_152);
DEFLIT(lit_4);
DEFLIT(lit_248);
DEFLIT(lit_179);
DEFLIT(lit_5);
DEFLIT(lit_69);
DEFLIT(lit_30);
DEFLIT(lit_172);
DEFLIT(lit_160);
DEFLIT(lit_41);
DEFLIT(lit_122);
DEFLIT(lit_115);
DEFLIT(lit_19);
DEFLIT(lit_156);
DEFLIT(lit_56);
DEFLIT(lit_89);
DEFLIT(lit_34);
DEFLIT(lit_229);
DEFLIT(lit_283);
DEFLIT(lit_63);
DEFLIT(lit_253);
DEFLIT(lit_66);
DEFLIT(lit_224);
DEFLIT(lit_107);
DEFLIT(lit_29);
DEFLIT(lit_146);
DEFLIT(lit_136);
DEFLIT(lit_113);
DEFLIT(lit_166);
DEFLIT(lit_240);
DEFLIT(lit_118);
DEFLIT(lit_222);
DEFLIT(lit_171);
DEFLIT(lit_235);
DEFLIT(lit_40);
DEFLIT(lit_279);
DEFLIT(lit_261);
DEFLIT(lit_236);
DEFLIT(lit_53);
DEFLIT(lit_101);
DEFLIT(lit_218);
DEFLIT(lit_263);
DEFLIT(lit_221);
DEFLIT(lit_208);
DEFLIT(lit_14);
DEFLIT(lit_150);
DEFLIT(lit_220);
DEFLIT(lit_105);
DEFLIT(lit_268);
DEFLIT(lit_189);
DEFLIT(lit_67);
DEFLIT(lit_284);
DEFLIT(lit_60);
DEFLIT(lit_48);
DEFLIT(lit_178);
DEFLIT(lit_191);
DEFLIT(lit_209);
DEFLIT(lit_201);
DEFLIT(lit_199);

/* FUNCTIONS: */

FUNFOR(YgooSmacrosYOchecked_next_methods);
LOCFOR(fun_x_1112_1);
LOCFOR(fun_2);
LOCFOR(fun_3);
LOCFOR(fun_x_1116_4);
LOCFOR(fun_5);
LOCFOR(fun_6);
LOCFOR(fun_x_1120_7);
LOCFOR(fun_8);
LOCFOR(fun_9);
LOCFOR(fun_x_1124_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_munch_13);
FUNFOR(YgooSmacrosYlift_place_subforms);
LOCFOR(fun_x_1130_15);
LOCFOR(fun_x_1132_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_x_1138_20);
LOCFOR(fun_x_1140_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_x_1144_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_x_1148_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_x_1152_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_x_1156_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_x_1160_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_x_1164_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_x_1168_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_x_1172_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_x_1180_52);
LOCFOR(fun_x_1182_53);
LOCFOR(fun_x_1184_54);
LOCFOR(fun_55);
LOCFOR(fun_56);
LOCFOR(fun_57);
LOCFOR(fun_58);
LOCFOR(fun_x_1192_59);
LOCFOR(fun_x_1194_60);
LOCFOR(fun_x_1196_61);
LOCFOR(fun_62);
LOCFOR(fun_63);
LOCFOR(fun_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1202_66);
LOCFOR(fun_x_1204_67);
LOCFOR(fun_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_x_1210_71);
LOCFOR(fun_x_1212_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_75);
FUNFOR(YgooSmacrosYdo_case_by);
LOCFOR(fun_x_1216_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_x_1220_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_x_1228_83);
LOCFOR(fun_x_1232_84);
LOCFOR(fun_85);
LOCFOR(fun_x_1230_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_x_1236_90);
LOCFOR(fun_91);
LOCFOR(fun_92);
LOCFOR(fun_x_1244_93);
LOCFOR(fun_x_1246_94);
LOCFOR(fun_x_1248_95);
LOCFOR(fun_96);
LOCFOR(fun_97);
LOCFOR(fun_grok_98);
LOCFOR(fun_99);
LOCFOR(fun_100);
LOCFOR(fun_x_1252_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_x_1256_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_x_1266_107);
LOCFOR(fun_x_1272_108);
LOCFOR(fun_109);
LOCFOR(fun_x_1269_110);
LOCFOR(fun_111);
LOCFOR(fun_112);
LOCFOR(fun_113);
LOCFOR(fun_x_1276_114);
LOCFOR(fun_115);
LOCFOR(fun_116);
LOCFOR(fun_x_1280_117);
LOCFOR(fun_118);
LOCFOR(fun_119);
LOCFOR(fun_x_1284_120);
LOCFOR(fun_121);
LOCFOR(fun_122);
LOCFOR(fun_x_1312_123);
LOCFOR(fun_x_1336_124);
LOCFOR(fun_125);
LOCFOR(fun_x_1333_126);
LOCFOR(fun_127);
LOCFOR(fun_x_1330_128);
LOCFOR(fun_129);
LOCFOR(fun_x_1327_130);
LOCFOR(fun_131);
LOCFOR(fun_x_1324_132);
LOCFOR(fun_133);
LOCFOR(fun_x_1321_134);
LOCFOR(fun_135);
LOCFOR(fun_x_1318_136);
LOCFOR(fun_137);
LOCFOR(fun_x_1315_138);
LOCFOR(fun_139);
LOCFOR(fun_140);
LOCFOR(fun_141);
LOCFOR(fun_x_1340_142);
LOCFOR(fun_143);
LOCFOR(fun_144);
LOCFOR(fun_145);
extern P YgooSmacrosY___main_0___ ();
extern P YgooSmacrosY___main_1___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

FUNCODEDEF(YgooSmacrosYOchecked_next_methods) {
  P met_,nxt_mets_,args_;
  P yF2087;
  P xF2086;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(met_, 0);
  ARG(nxt_mets_, 1);
  NARGS(args_, 2);
  if (nxt_mets_ != YPfalse) {
    xF2086 = nxt_mets_;
    yF2087 = Ynil;
    T3 = (P)YPeqQ(xF2086,yF2087);
    T2 = (P)YPbb(T3);
    if (T3) {
      T4 = CALL2(1,VARREF(Yno_next_methods_error),met_,args_);
      T1 = T4;
    } else {
      T1 = nxt_mets_;
    }
    T0 = T1;
  } else {
    T5 = CALL2(1,VARREF(Yno_next_methods_error),met_,args_);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1112_1) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_6),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_2) {
  P return_;
  P x_1111F2092;
  P x_1111F2091;
  P argsF2090;
  P x_1111F2089;
  P x_1112F2088;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(return_, 0);
  T38 = FUNSHELL(0,fun_x_1112_1,2);
  x_1112F2088 = T38;
  FUNINIT(x_1112F2088, 2,FREEREF(0),return_);
  x_1111F2089 = FREEREF(0);
  argsF2090 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1111F2089,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1111F2089,LITREF(lit_6),x_1112F2088);
    x_1111F2091 = T3;
    argsF2090 = x_1111F2091;
    x_1111F2092 = Ynil;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1111F2092,x_1112F2088);
  } else {
    T4 = CALL2(1,x_1112F2088,LITREF(lit_7),x_1111F2089);
  }
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_0));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T16 = CALL2(1,VARREF(YgooSmacrosYcat),T17,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T19 = CALL2(1,VARREF(YgooSmacrosYcat),T20,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T21 = argsF2090;
  T13 = CALL5(1,VARREF(YgooSmacrosYcat),T14,T15,T18,T21,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,T12,LITREF(lit_11));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T8 = CALL2(1,VARREF(YgooSmacrosYcat),T9,LITREF(lit_11));
  T7 = CALL1(1,VARREF(Ylst),T8);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,LITREF(lit_11));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T33 = argsF2090;
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_16));
  T37 = CALL1(1,VARREF(Ylst),Ynil);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T23 = CALLN(1,VARREF(YgooSmacrosYcat),6,T24,T25,T29,T33,T34,LITREF(lit_11));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T22,LITREF(lit_11));
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_3) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_2,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1116_4) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_21),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_5) {
  P return_;
  P x_1115F2097;
  P x_1115F2096;
  P argsF2095;
  P x_1115F2094;
  P x_1116F2093;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(return_, 0);
  T34 = FUNSHELL(0,fun_x_1116_4,2);
  x_1116F2093 = T34;
  FUNINIT(x_1116F2093, 2,FREEREF(0),return_);
  x_1115F2094 = FREEREF(0);
  argsF2095 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1115F2094,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1115F2094,LITREF(lit_21),x_1116F2093);
    x_1115F2096 = T3;
    argsF2095 = x_1115F2096;
    x_1115F2097 = Ynil;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1115F2097,x_1116F2093);
  } else {
    T4 = CALL2(1,x_1116F2093,LITREF(lit_7),x_1115F2094);
  }
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_0));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T16 = CALL2(1,VARREF(YgooSmacrosYcat),T17,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T19 = CALL2(1,VARREF(YgooSmacrosYcat),T20,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T21 = argsF2095;
  T13 = CALL5(1,VARREF(YgooSmacrosYcat),T14,T15,T18,T21,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,T12,LITREF(lit_11));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T8 = CALL2(1,VARREF(YgooSmacrosYcat),T9,LITREF(lit_11));
  T7 = CALL1(1,VARREF(Ylst),T8);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,LITREF(lit_11));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T33 = argsF2095;
  T23 = CALL5(1,VARREF(YgooSmacrosYcat),T24,T25,T29,T33,LITREF(lit_11));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T22,LITREF(lit_11));
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_6) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_5,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1120_7) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_26),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_8) {
  P return_;
  P x_1119F2104;
  P x_1119F2103;
  P x_1119F2102;
  P argsF2101;
  P fF2100;
  P x_1119F2099;
  P x_1120F2098;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(return_, 0);
  T14 = FUNSHELL(0,fun_x_1120_7,2);
  x_1120F2098 = T14;
  FUNINIT(x_1120F2098, 2,FREEREF(0),return_);
  x_1119F2099 = FREEREF(0);
  fF2100 = YPfalse;
  argsF2101 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1119F2099,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1119F2099,LITREF(lit_26),x_1120F2098);
    x_1119F2102 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F2102,x_1120F2098);
    fF2100 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1119F2102);
    x_1119F2103 = T5;
    argsF2101 = x_1119F2103;
    x_1119F2104 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1119F2104,x_1120F2098);
  } else {
    T7 = CALL2(1,x_1120F2098,LITREF(lit_7),x_1119F2099);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T11 = fF2100;
  T10 = CALL1(1,VARREF(Ylst),T11);
  T12 = CALL1(1,VARREF(Ylst),YPfalse);
  T13 = argsF2101;
  T8 = CALL5(1,VARREF(YgooSmacrosYcat),T9,T10,T12,T13,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_9) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_8,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1124_10) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_31),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_11) {
  P return_;
  P setsF2116;
  P valF2115;
  P initsF2114;
  P setsF2113;
  P varF2112;
  P x_1123F2111;
  P x_1123F2110;
  P x_1123F2109;
  P prop_initsF2108;
  P xF2107;
  P x_1123F2106;
  P x_1124F2105;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(return_, 0);
  T37 = FUNSHELL(0,fun_x_1124_10,2);
  x_1124F2105 = T37;
  FUNINIT(x_1124F2105, 2,FREEREF(0),return_);
  x_1123F2106 = FREEREF(0);
  xF2107 = YPfalse;
  prop_initsF2108 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1123F2106,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1123F2106,LITREF(lit_31),x_1124F2105);
    x_1123F2109 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F2109,x_1124F2105);
    xF2107 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1123F2109);
    x_1123F2110 = T5;
    prop_initsF2108 = x_1123F2110;
    x_1123F2111 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1123F2111,x_1124F2105);
  } else {
    T7 = CALL2(1,x_1124F2105,LITREF(lit_7),x_1123F2106);
  }
  T36 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF2112 = T36;
  setsF2113 = Ynil;
  T35 = prop_initsF2108;
  initsF2114 = T35;
  LOOP_49: {
    P a49_0,a49_1;
    T19 = CALL1(1,VARREF(YgooSmacrosYnulQ),initsF2114);
    if (T19 != YPfalse) {
      T20 = CALL1(1,VARREF(YgooSmacrosYrevX),setsF2113);
      T18 = T20;
    } else {
      T34 = CALL1(1,VARREF(Ytail),initsF2114);
      T33 = CALL1(1,VARREF(Yhead),T34);
      valF2115 = T33;
      T24 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
      T28 = CALL1(1,VARREF(Yhead),initsF2114);
      T27 = CALL1(1,VARREF(Ylst),T28);
      T29 = CALL1(1,VARREF(Ylst),varF2112);
      T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T29,LITREF(lit_11));
      T25 = CALL1(1,VARREF(Ylst),T26);
      T30 = CALL1(1,VARREF(Ylst),valF2115);
      T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T30,LITREF(lit_11));
      T22 = CALL2(1,VARREF(YgooSmacrosYpair),T23,setsF2113);
      T32 = CALL1(1,VARREF(Ytail),initsF2114);
      T31 = CALL1(1,VARREF(Ytail),T32);
      a49_0 = T22;
      a49_1 = T31;
      setsF2113 = a49_0;
      initsF2114 = a49_1;
      goto LOOP_49;
      T18 = T21;
    }
  }
  setsF2116 = T18;
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T14 = CALL1(1,VARREF(Ylst),varF2112);
  T16 = xF2107;
  T15 = CALL1(1,VARREF(Ylst),T16);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_11));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T17 = CALL1(1,VARREF(Ylst),varF2112);
  T8 = CALL5(1,VARREF(YgooSmacrosYcat),T9,T10,setsF2116,T17,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_12) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_11,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_munch_13) {
  P subforms_;
  P gF2121;
  P subformF2120;
  P g_argsF2119;
  P g_declsF2118;
  P tup3F2117;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(subforms_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),subforms_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ytup),Ynil,Ynil);
    T0 = T2;
  } else {
    T18 = CALL1(1,VARREF(Ytail),subforms_);
    T17 = CALL1(1,FREEREF(0),T18);
    tup3F2117 = T17;
    T16 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F2117,YPint((P)0));
    g_declsF2118 = T16;
    T15 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F2117,YPint((P)1));
    g_argsF2119 = T15;
    T14 = CALL1(1,VARREF(Yhead),subforms_);
    subformF2120 = T14;
    T4 = CALL2(1,VARREF(YisaQ),subformF2120,VARREF(YLlstG));
    if (T4 != YPfalse) {
      T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
      gF2121 = T11;
      T8 = CALL1(1,VARREF(Ylst),gF2121);
      T9 = CALL1(1,VARREF(Ylst),subformF2120);
      T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,LITREF(lit_11));
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,g_declsF2118);
      T10 = CALL2(1,VARREF(YgooSmacrosYpair),gF2121,g_argsF2119);
      T5 = CALL2(1,VARREF(Ytup),T6,T10);
      T3 = T5;
    } else {
      T13 = CALL2(1,VARREF(YgooSmacrosYpair),subformF2120,g_argsF2119);
      T12 = CALL2(1,VARREF(Ytup),g_declsF2118,T13);
      T3 = T12;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmacrosYlift_place_subforms) {
  P place_;
  P g_argsF2125;
  P g_declsF2124;
  P tup4F2123;
  P munchF2122;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(place_, 0);
  T11 = FUNSHELL(1,fun_munch_13,1);
  munchF2122 = T11;
  FUNINIT(munchF2122, 1,munchF2122);
  T1 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T0 = T2;
  } else {
    T10 = CALL1(1,VARREF(Ytail),place_);
    T9 = CALL1(1,munchF2122,T10);
    tup4F2123 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F2123,YPint((P)0));
    g_declsF2124 = T8;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F2123,YPint((P)1));
    g_argsF2125 = T7;
    T6 = CALL1(1,VARREF(Yhead),place_);
    T5 = CALL1(1,VARREF(Ylst),T6);
    T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,g_argsF2125,LITREF(lit_11));
    T3 = CALL2(1,VARREF(Ytup),g_declsF2124,T4);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_x_1130_15) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_41),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1132_16) {
  P msg_,args_;
  P T0;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,FREEREF(0),YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_17) {
  P return_;
  P x_1131F2131;
  P x_1131F2130;
  P x_1131F2129;
  P amountF2128;
  P x_1131F2127;
  P x_1132F2126;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(return_, 0);
  T11 = FUNSHELL(0,fun_x_1132_16,1);
  x_1132F2126 = T11;
  FUNINIT(x_1132F2126, 1,return_);
  T10 = BOXGET(FREEREF(0));
  x_1131F2127 = T10;
  amountF2128 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1131F2127,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1131F2127,x_1132F2126);
    amountF2128 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1131F2127);
    x_1131F2129 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1131F2129,x_1132F2126);
    x_1131F2130 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1131F2130,x_1132F2126);
    T5 = CALL1(1,VARREF(Ytail),x_1131F2129);
    x_1131F2131 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1131F2131,x_1132F2126);
  } else {
    T8 = CALL2(1,x_1132F2126,LITREF(lit_7),x_1131F2127);
  }
  T9 = amountF2128;
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_18) {
  P return_;
  P amountF2142;
  P g_placeF2141;
  P g_declsF2140;
  P tup6F2139;
  P x_1129F2138;
  P x_1129F2137;
  P x_1129F2136;
  P amountF2135;
  P placeF2134;
  P x_1129F2133;
  P x_1130F2132;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(return_, 0);
  T27 = FUNSHELL(0,fun_x_1130_15,2);
  x_1130F2132 = T27;
  FUNINIT(x_1130F2132, 2,FREEREF(0),return_);
  x_1129F2133 = FREEREF(0);
  placeF2134 = YPfalse;
  amountF2135 = YPfalse;
  amountF2135 = BOXFAB(amountF2135);
  T2 = CALL2(1,VARREF(YisaQ),x_1129F2133,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1129F2133,LITREF(lit_41),x_1130F2132);
    x_1129F2136 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1129F2136,x_1130F2132);
    placeF2134 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1129F2136);
    x_1129F2137 = T5;
    BOXPUT(x_1129F2137,amountF2135);
    x_1129F2138 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1129F2138,x_1130F2132);
  } else {
    T7 = CALL2(1,x_1130F2132,LITREF(lit_7),x_1129F2133);
  }
  T26 = placeF2134;
  T25 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T26);
  tup6F2139 = T25;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F2139,YPint((P)0));
  g_declsF2140 = T24;
  T23 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F2139,YPint((P)1));
  g_placeF2141 = T23;
  T22 = FUNFAB(fun_17,1,amountF2135);
  T21 = with_exit(T22);
  amountF2142 = T21;
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF2140,LITREF(lit_11));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T15 = CALL1(1,VARREF(Ylst),g_placeF2141);
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_45));
  T19 = CALL1(1,VARREF(Ylst),g_placeF2141);
  T20 = CALL1(1,VARREF(Ylst),amountF2142);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T16,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T12,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_19) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_18,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1138_20) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_50),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1140_21) {
  P msg_,args_;
  P T0;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,FREEREF(0),YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_22) {
  P return_;
  P x_1139F2148;
  P x_1139F2147;
  P x_1139F2146;
  P amountF2145;
  P x_1139F2144;
  P x_1140F2143;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(return_, 0);
  T11 = FUNSHELL(0,fun_x_1140_21,1);
  x_1140F2143 = T11;
  FUNINIT(x_1140F2143, 1,return_);
  T10 = BOXGET(FREEREF(0));
  x_1139F2144 = T10;
  amountF2145 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1139F2144,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1139F2144,x_1140F2143);
    amountF2145 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1139F2144);
    x_1139F2146 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1139F2146,x_1140F2143);
    x_1139F2147 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1139F2147,x_1140F2143);
    T5 = CALL1(1,VARREF(Ytail),x_1139F2146);
    x_1139F2148 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1139F2148,x_1140F2143);
  } else {
    T8 = CALL2(1,x_1140F2143,LITREF(lit_7),x_1139F2144);
  }
  T9 = amountF2145;
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_23) {
  P return_;
  P amountF2159;
  P g_placeF2158;
  P g_declsF2157;
  P tup8F2156;
  P x_1137F2155;
  P x_1137F2154;
  P x_1137F2153;
  P amountF2152;
  P placeF2151;
  P x_1137F2150;
  P x_1138F2149;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(return_, 0);
  T27 = FUNSHELL(0,fun_x_1138_20,2);
  x_1138F2149 = T27;
  FUNINIT(x_1138F2149, 2,FREEREF(0),return_);
  x_1137F2150 = FREEREF(0);
  placeF2151 = YPfalse;
  amountF2152 = YPfalse;
  amountF2152 = BOXFAB(amountF2152);
  T2 = CALL2(1,VARREF(YisaQ),x_1137F2150,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1137F2150,LITREF(lit_50),x_1138F2149);
    x_1137F2153 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1137F2153,x_1138F2149);
    placeF2151 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1137F2153);
    x_1137F2154 = T5;
    BOXPUT(x_1137F2154,amountF2152);
    x_1137F2155 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1137F2155,x_1138F2149);
  } else {
    T7 = CALL2(1,x_1138F2149,LITREF(lit_7),x_1137F2150);
  }
  T26 = placeF2151;
  T25 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T26);
  tup8F2156 = T25;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F2156,YPint((P)0));
  g_declsF2157 = T24;
  T23 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F2156,YPint((P)1));
  g_placeF2158 = T23;
  T22 = FUNFAB(fun_22,1,amountF2152);
  T21 = with_exit(T22);
  amountF2159 = T21;
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF2157,LITREF(lit_11));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T15 = CALL1(1,VARREF(Ylst),g_placeF2158);
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T19 = CALL1(1,VARREF(Ylst),g_placeF2158);
  T20 = CALL1(1,VARREF(Ylst),amountF2159);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T16,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T12,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_24) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_23,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1144_25) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_59),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_26) {
  P return_;
  P g_placeF2169;
  P g_declsF2168;
  P tup10F2167;
  P x_1143F2166;
  P x_1143F2165;
  P x_1143F2164;
  P valueF2163;
  P placeF2162;
  P x_1143F2161;
  P x_1144F2160;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(return_, 0);
  T28 = FUNSHELL(0,fun_x_1144_25,2);
  x_1144F2160 = T28;
  FUNINIT(x_1144F2160, 2,FREEREF(0),return_);
  x_1143F2161 = FREEREF(0);
  placeF2162 = YPfalse;
  valueF2163 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1143F2161,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1143F2161,LITREF(lit_59),x_1144F2160);
    x_1143F2164 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1143F2164,x_1144F2160);
    placeF2162 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1143F2164);
    x_1143F2165 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1143F2165,x_1144F2160);
    valueF2163 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1143F2165);
    x_1143F2166 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1143F2166,x_1144F2160);
  } else {
    T9 = CALL2(1,x_1144F2160,LITREF(lit_7),x_1143F2161);
  }
  T27 = placeF2162;
  T26 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T27);
  tup10F2167 = T26;
  T25 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F2167,YPint((P)0));
  g_declsF2168 = T25;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F2167,YPint((P)1));
  g_placeF2169 = T24;
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T13 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF2168,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T17 = CALL1(1,VARREF(Ylst),g_placeF2169);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T21 = CALL1(1,VARREF(Ylst),g_placeF2169);
  T23 = valueF2163;
  T22 = CALL1(1,VARREF(Ylst),T23);
  T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T22,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T15 = CALL4(1,VARREF(YgooSmacrosYcat),T16,T17,T18,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_27) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_26,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1148_28) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_65),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_29) {
  P return_;
  P tmpF2183;
  P yg_placeF2182;
  P yg_declsF2181;
  P tup14F2180;
  P xg_placeF2179;
  P xg_declsF2178;
  P tup13F2177;
  P x_1147F2176;
  P x_1147F2175;
  P x_1147F2174;
  P yF2173;
  P xF2172;
  P x_1147F2171;
  P x_1148F2170;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(return_, 0);
  T37 = FUNSHELL(0,fun_x_1148_28,2);
  x_1148F2170 = T37;
  FUNINIT(x_1148F2170, 2,FREEREF(0),return_);
  x_1147F2171 = FREEREF(0);
  xF2172 = YPfalse;
  yF2173 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1147F2171,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1147F2171,LITREF(lit_65),x_1148F2170);
    x_1147F2174 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1147F2174,x_1148F2170);
    xF2172 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1147F2174);
    x_1147F2175 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1147F2175,x_1148F2170);
    yF2173 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1147F2175);
    x_1147F2176 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1147F2176,x_1148F2170);
  } else {
    T9 = CALL2(1,x_1148F2170,LITREF(lit_7),x_1147F2171);
  }
  T36 = xF2172;
  T35 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T36);
  tup13F2177 = T35;
  T34 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F2177,YPint((P)0));
  xg_declsF2178 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F2177,YPint((P)1));
  xg_placeF2179 = T33;
  T32 = yF2173;
  T31 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T32);
  tup14F2180 = T31;
  T30 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F2180,YPint((P)0));
  yg_declsF2181 = T30;
  T29 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F2180,YPint((P)1));
  yg_placeF2182 = T29;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF2183 = T28;
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T16 = CALL1(1,VARREF(Ylst),tmpF2183);
  T17 = CALL1(1,VARREF(Ylst),xg_placeF2179);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF2178,yg_declsF2181,T14,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T21 = CALL1(1,VARREF(Ylst),xg_placeF2179);
  T22 = CALL1(1,VARREF(Ylst),yg_placeF2182);
  T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T22,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T26 = CALL1(1,VARREF(Ylst),yg_placeF2182);
  T27 = CALL1(1,VARREF(Ylst),tmpF2183);
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T27,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T10 = CALL5(1,VARREF(YgooSmacrosYcat),T11,T12,T18,T23,LITREF(lit_11));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_30) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_29,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1152_31) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_70),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_32) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL0(1,VARREF(YgooSmacrosYgensym));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_33) {
  P t_,p_;
  P T0,T1,T2;
LINK_STACK();
  ARG(t_, 0);
  ARG(p_, 1);
  T1 = CALL1(1,VARREF(Ylst),t_);
  T2 = CALL1(1,VARREF(Ylst),p_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,T2,LITREF(lit_11));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_34) {
  P p_,t_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(p_, 0);
  ARG(t_, 1);
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T2 = CALL1(1,VARREF(Ylst),p_);
  T3 = CALL1(1,VARREF(Ylst),t_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_11));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_35) {
  P return_;
  P placesF2197;
  P declsF2196;
  P psF2195;
  P tmpsF2194;
  P placesF2193;
  P x_1151F2192;
  P x_1151F2191;
  P x_1151F2190;
  P x_1151F2189;
  P zsF2188;
  P yF2187;
  P xF2186;
  P x_1151F2185;
  P x_1152F2184;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
LINK_STACK();
  ARG(return_, 0);
  T39 = FUNSHELL(0,fun_x_1152_31,2);
  x_1152F2184 = T39;
  FUNINIT(x_1152F2184, 2,FREEREF(0),return_);
  x_1151F2185 = FREEREF(0);
  xF2186 = YPfalse;
  yF2187 = YPfalse;
  zsF2188 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1151F2185,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1151F2185,LITREF(lit_70),x_1152F2184);
    x_1151F2189 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1151F2189,x_1152F2184);
    xF2186 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1151F2189);
    x_1151F2190 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1151F2190,x_1152F2184);
    yF2187 = T5;
    T6 = CALL1(1,VARREF(Ytail),x_1151F2190);
    x_1151F2191 = T6;
    zsF2188 = x_1151F2191;
    x_1151F2192 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1151F2192,x_1152F2184);
  } else {
    T10 = CALL2(1,x_1152F2184,LITREF(lit_7),x_1151F2185);
  }
  T35 = xF2186;
  T34 = CALL1(1,VARREF(Ylst),T35);
  T37 = yF2187;
  T36 = CALL1(1,VARREF(Ylst),T37);
  T38 = zsF2188;
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T36,T38,LITREF(lit_11));
  placesF2193 = T33;
  T32 = fun_32;
  T31 = CALL2(1,VARREF(YgooSmacrosYmap),T32,placesF2193);
  tmpsF2194 = T31;
  T30 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosYlift_place_subforms),placesF2193);
  psF2195 = T30;
  T29 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY1st),psF2195);
  declsF2196 = T29;
  T28 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY2nd),psF2195);
  placesF2197 = T28;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T15 = CALL3(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmacrosYcat),YPfalse,declsF2196);
  T17 = fun_33;
  T16 = CALL3(1,VARREF(YgooSmacrosYmap2),T17,tmpsF2194,placesF2197);
  T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = fun_34;
  T20 = CALL1(1,VARREF(Ytail),tmpsF2194);
  T18 = CALL3(1,VARREF(YgooSmacrosYmap2),T19,placesF2197,T20);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T25 = CALL1(1,VARREF(YgooSmacrosYlast),placesF2197);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T27 = CALL1(1,VARREF(YgooSmacrosY1st),tmpsF2194);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T26,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T18,T21,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_36) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_35,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1156_37) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_78),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_38) {
  P return_;
  P valF2207;
  P new_colF2206;
  P g_placeF2205;
  P g_declsF2204;
  P tup16F2203;
  P x_1155F2202;
  P x_1155F2201;
  P placeF2200;
  P x_1155F2199;
  P x_1156F2198;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(return_, 0);
  T34 = FUNSHELL(0,fun_x_1156_37,2);
  x_1156F2198 = T34;
  FUNINIT(x_1156F2198, 2,FREEREF(0),return_);
  x_1155F2199 = FREEREF(0);
  placeF2200 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1155F2199,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1155F2199,LITREF(lit_78),x_1156F2198);
    x_1155F2201 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1155F2201,x_1156F2198);
    placeF2200 = T3;
    T4 = CALL1(1,VARREF(Ytail),x_1155F2201);
    x_1155F2202 = T4;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1155F2202,x_1156F2198);
  } else {
    T6 = CALL2(1,x_1156F2198,LITREF(lit_7),x_1155F2199);
  }
  T33 = placeF2200;
  T32 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T33);
  tup16F2203 = T32;
  T31 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F2203,YPint((P)0));
  g_declsF2204 = T31;
  T30 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F2203,YPint((P)1));
  g_placeF2205 = T30;
  T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF2206 = T29;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF2207 = T28;
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T16 = CALL1(1,VARREF(Ylst),new_colF2206);
  T17 = CALL1(1,VARREF(Ylst),valF2207);
  T14 = CALL4(1,VARREF(YgooSmacrosYcat),T15,T16,T17,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T21 = CALL1(1,VARREF(Ylst),g_placeF2205);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,T18,LITREF(lit_11));
  T11 = CALL1(1,VARREF(Ylst),T12);
  T10 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF2204,T11,LITREF(lit_11));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T25 = CALL1(1,VARREF(Ylst),g_placeF2205);
  T26 = CALL1(1,VARREF(Ylst),new_colF2206);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T26,LITREF(lit_11));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T27 = CALL1(1,VARREF(Ylst),valF2207);
  T7 = CALL5(1,VARREF(YgooSmacrosYcat),T8,T9,T22,T27,LITREF(lit_11));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_39) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_38,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1160_40) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_85),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_41) {
  P return_;
  P g_placeF2217;
  P g_declsF2216;
  P tup18F2215;
  P x_1159F2214;
  P x_1159F2213;
  P x_1159F2212;
  P callF2211;
  P placeF2210;
  P x_1159F2209;
  P x_1160F2208;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(return_, 0);
  T28 = FUNSHELL(0,fun_x_1160_40,2);
  x_1160F2208 = T28;
  FUNINIT(x_1160F2208, 2,FREEREF(0),return_);
  x_1159F2209 = FREEREF(0);
  placeF2210 = YPfalse;
  callF2211 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1159F2209,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1159F2209,LITREF(lit_85),x_1160F2208);
    x_1159F2212 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1159F2212,x_1160F2208);
    placeF2210 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1159F2212);
    x_1159F2213 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1159F2213,x_1160F2208);
    callF2211 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1159F2213);
    x_1159F2214 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1159F2214,x_1160F2208);
  } else {
    T9 = CALL2(1,x_1160F2208,LITREF(lit_7),x_1159F2209);
  }
  T27 = placeF2210;
  T26 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T27);
  tup18F2215 = T26;
  T25 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F2215,YPint((P)0));
  g_declsF2216 = T25;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F2215,YPint((P)1));
  g_placeF2217 = T24;
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T17 = CALL1(1,VARREF(Ylst),g_placeF2217);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF2216,T14,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T21 = CALL1(1,VARREF(Ylst),g_placeF2217);
  T23 = callF2211;
  T22 = CALL1(1,VARREF(Ylst),T23);
  T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T22,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T18,LITREF(lit_11));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_42) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_41,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1164_43) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_91),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_44) {
  P return_;
  P g_placeF2227;
  P g_declsF2226;
  P tup20F2225;
  P x_1163F2224;
  P x_1163F2223;
  P x_1163F2222;
  P valueF2221;
  P placeF2220;
  P x_1163F2219;
  P x_1164F2218;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(return_, 0);
  T32 = FUNSHELL(0,fun_x_1164_43,2);
  x_1164F2218 = T32;
  FUNINIT(x_1164F2218, 2,FREEREF(0),return_);
  x_1163F2219 = FREEREF(0);
  placeF2220 = YPfalse;
  valueF2221 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1163F2219,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1163F2219,LITREF(lit_91),x_1164F2218);
    x_1163F2222 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1163F2222,x_1164F2218);
    placeF2220 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1163F2222);
    x_1163F2223 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1163F2223,x_1164F2218);
    valueF2221 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1163F2223);
    x_1163F2224 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1163F2224,x_1164F2218);
  } else {
    T9 = CALL2(1,x_1164F2218,LITREF(lit_7),x_1163F2219);
  }
  T31 = placeF2220;
  T30 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T31);
  tup20F2225 = T30;
  T29 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F2225,YPint((P)0));
  g_declsF2226 = T29;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F2225,YPint((P)1));
  g_placeF2227 = T28;
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T17 = CALL1(1,VARREF(Ylst),g_placeF2227);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF2226,T14,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T21 = CALL1(1,VARREF(Ylst),g_placeF2227);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T25 = CALL1(1,VARREF(Ylst),g_placeF2227);
  T27 = valueF2221;
  T26 = CALL1(1,VARREF(Ylst),T27);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T26,LITREF(lit_11));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T22,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T18,LITREF(lit_11));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_45) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_44,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1168_46) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_97),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_47) {
  P return_;
  P x_1167F2234;
  P x_1167F2233;
  P x_1167F2232;
  P bodyF2231;
  P testF2230;
  P x_1167F2229;
  P x_1168F2228;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1168_46,2);
  x_1168F2228 = T19;
  FUNINIT(x_1168F2228, 2,FREEREF(0),return_);
  x_1167F2229 = FREEREF(0);
  testF2230 = YPfalse;
  bodyF2231 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1167F2229,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1167F2229,LITREF(lit_97),x_1168F2228);
    x_1167F2232 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1167F2232,x_1168F2228);
    testF2230 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1167F2232);
    x_1167F2233 = T5;
    bodyF2231 = x_1167F2233;
    x_1167F2234 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1167F2234,x_1168F2228);
  } else {
    T7 = CALL2(1,x_1168F2228,LITREF(lit_7),x_1167F2229);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T14 = testF2230;
  T13 = CALL1(1,VARREF(Ylst),T14);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T13,LITREF(lit_11));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T18 = bodyF2231;
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T15,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_48) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_47,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1172_49) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_105),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_50) {
  P return_;
  P x_1171F2241;
  P x_1171F2240;
  P x_1171F2239;
  P bodyF2238;
  P testF2237;
  P x_1171F2236;
  P x_1172F2235;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(return_, 0);
  T16 = FUNSHELL(0,fun_x_1172_49,2);
  x_1172F2235 = T16;
  FUNINIT(x_1172F2235, 2,FREEREF(0),return_);
  x_1171F2236 = FREEREF(0);
  testF2237 = YPfalse;
  bodyF2238 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1171F2236,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1171F2236,LITREF(lit_105),x_1172F2235);
    x_1171F2239 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1171F2239,x_1172F2235);
    testF2237 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1171F2239);
    x_1171F2240 = T5;
    bodyF2238 = x_1171F2240;
    x_1171F2241 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1171F2241,x_1172F2235);
  } else {
    T7 = CALL2(1,x_1172F2235,LITREF(lit_7),x_1171F2236);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T11 = testF2237;
  T10 = CALL1(1,VARREF(Ylst),T11);
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T15 = bodyF2238;
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T12,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_51) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_50,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1180_52) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_92),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1182_53) {
  P msg_,args_;
  P T0;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1184_54) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T9 = BOXGET(FREEREF(0));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,LITREF(lit_11));
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,LITREF(lit_11));
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_116));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T18 = BOXGET(FREEREF(1));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T14,T15,LITREF(lit_11));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T10,LITREF(lit_11));
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_55) {
  P return_;
  P x_1183F2243;
  P x_1184F2242;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(return_, 0);
  T5 = FUNSHELL(0,fun_x_1184_54,3);
  x_1184F2242 = T5;
  FUNINIT(x_1184F2242, 3,FREEREF(0),FREEREF(1),return_);
  T4 = BOXGET(FREEREF(1));
  x_1183F2243 = T4;
  T0 = CALL2(1,VARREF(YisaQ),x_1183F2243,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1183F2243,x_1184F2242);
  } else {
    T2 = CALL2(1,x_1184F2242,LITREF(lit_7),x_1183F2243);
  }
  T3 = BOXGET(FREEREF(0));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_56) {
  P return_;
  P x_1181F2251;
  P x_1181F2250;
  P x_1181F2249;
  P x_1181F2248;
  P restF2247;
  P xF2246;
  P x_1181F2245;
  P x_1182F2244;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1182_53,1);
  x_1182F2244 = T13;
  FUNINIT(x_1182F2244, 1,return_);
  T12 = BOXGET(FREEREF(0));
  x_1181F2245 = T12;
  xF2246 = YPfalse;
  xF2246 = BOXFAB(xF2246);
  restF2247 = YPfalse;
  restF2247 = BOXFAB(restF2247);
  T2 = CALL2(1,VARREF(YisaQ),x_1181F2245,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1181F2245,x_1182F2244);
    BOXPUT(T7,xF2246);
    T8 = CALL1(1,VARREF(Ytail),x_1181F2245);
    x_1181F2248 = T8;
    BOXPUT(x_1181F2248,restF2247);
    x_1181F2249 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1181F2249,x_1182F2244);
    x_1181F2250 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1181F2250,x_1182F2244);
    T6 = CALL1(1,VARREF(Ytail),x_1181F2249);
    x_1181F2251 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1181F2251,x_1182F2244);
  } else {
    T9 = CALL2(1,x_1182F2244,LITREF(lit_7),x_1181F2245);
  }
  T11 = FUNFAB(fun_55,2,xF2246,restF2247);
  T10 = with_exit(T11);
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_57) {
  P return_;
  P x_1179F2256;
  P x_1179F2255;
  P restF2254;
  P x_1179F2253;
  P x_1180F2252;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(return_, 0);
  T7 = FUNSHELL(0,fun_x_1180_52,2);
  x_1180F2252 = T7;
  FUNINIT(x_1180F2252, 2,FREEREF(0),return_);
  x_1179F2253 = FREEREF(0);
  restF2254 = YPfalse;
  restF2254 = BOXFAB(restF2254);
  T1 = CALL2(1,VARREF(YisaQ),x_1179F2253,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1179F2253,LITREF(lit_92),x_1180F2252);
    x_1179F2255 = T3;
    BOXPUT(x_1179F2255,restF2254);
    x_1179F2256 = Ynil;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1179F2256,x_1180F2252);
  } else {
    T4 = CALL2(1,x_1180F2252,LITREF(lit_7),x_1179F2253);
  }
  T6 = FUNFAB(fun_56,1,restF2254);
  T5 = with_exit(T6);
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_58) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_57,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1192_59) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_121),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1194_60) {
  P msg_,args_;
  P T0;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,FREEREF(0),YPtrue);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1196_61) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T4 = BOXGET(FREEREF(0));
  T3 = CALL1(1,VARREF(Ylst),T4);
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_121));
  T8 = BOXGET(FREEREF(1));
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,LITREF(lit_11));
  T5 = CALL1(1,VARREF(Ylst),T6);
  T9 = CALL1(1,VARREF(Ylst),YPfalse);
  T1 = CALL5(1,VARREF(YgooSmacrosYcat),T2,T3,T5,T9,LITREF(lit_11));
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_62) {
  P return_;
  P x_1195F2258;
  P x_1196F2257;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(return_, 0);
  T5 = FUNSHELL(0,fun_x_1196_61,3);
  x_1196F2257 = T5;
  FUNINIT(x_1196F2257, 3,FREEREF(0),FREEREF(1),return_);
  T4 = BOXGET(FREEREF(1));
  x_1195F2258 = T4;
  T0 = CALL2(1,VARREF(YisaQ),x_1195F2258,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1195F2258,x_1196F2257);
  } else {
    T2 = CALL2(1,x_1196F2257,LITREF(lit_7),x_1195F2258);
  }
  T3 = BOXGET(FREEREF(0));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_63) {
  P return_;
  P x_1193F2266;
  P x_1193F2265;
  P x_1193F2264;
  P x_1193F2263;
  P restF2262;
  P xF2261;
  P x_1193F2260;
  P x_1194F2259;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1194_60,1);
  x_1194F2259 = T13;
  FUNINIT(x_1194F2259, 1,return_);
  T12 = BOXGET(FREEREF(0));
  x_1193F2260 = T12;
  xF2261 = YPfalse;
  xF2261 = BOXFAB(xF2261);
  restF2262 = YPfalse;
  restF2262 = BOXFAB(restF2262);
  T2 = CALL2(1,VARREF(YisaQ),x_1193F2260,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1193F2260,x_1194F2259);
    BOXPUT(T7,xF2261);
    T8 = CALL1(1,VARREF(Ytail),x_1193F2260);
    x_1193F2263 = T8;
    BOXPUT(x_1193F2263,restF2262);
    x_1193F2264 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1193F2264,x_1194F2259);
    x_1193F2265 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1193F2265,x_1194F2259);
    T6 = CALL1(1,VARREF(Ytail),x_1193F2264);
    x_1193F2266 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1193F2266,x_1194F2259);
  } else {
    T9 = CALL2(1,x_1194F2259,LITREF(lit_7),x_1193F2260);
  }
  T11 = FUNFAB(fun_62,2,xF2261,restF2262);
  T10 = with_exit(T11);
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_64) {
  P return_;
  P x_1191F2271;
  P x_1191F2270;
  P restF2269;
  P x_1191F2268;
  P x_1192F2267;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(return_, 0);
  T7 = FUNSHELL(0,fun_x_1192_59,2);
  x_1192F2267 = T7;
  FUNINIT(x_1192F2267, 2,FREEREF(0),return_);
  x_1191F2268 = FREEREF(0);
  restF2269 = YPfalse;
  restF2269 = BOXFAB(restF2269);
  T1 = CALL2(1,VARREF(YisaQ),x_1191F2268,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1191F2268,LITREF(lit_121),x_1192F2267);
    x_1191F2270 = T3;
    BOXPUT(x_1191F2270,restF2269);
    x_1191F2271 = Ynil;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1191F2271,x_1192F2267);
  } else {
    T4 = CALL2(1,x_1192F2267,LITREF(lit_7),x_1191F2268);
  }
  T6 = FUNFAB(fun_63,1,restF2269);
  T5 = with_exit(T6);
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_65) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_64,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1202_66) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_132),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1204_67) {
  P msg_,args_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T3 = BOXGET(FREEREF(0));
  T2 = CALL1(1,VARREF(Yhead),T3);
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_136),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_68) {
  P return_;
  P x_1203F2279;
  P x_1203F2278;
  P x_1203F2277;
  P x_1203F2276;
  P bodyF2275;
  P condF2274;
  P x_1203F2273;
  P x_1204F2272;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(return_, 0);
  T25 = FUNSHELL(0,fun_x_1204_67,2);
  x_1204F2272 = T25;
  FUNINIT(x_1204F2272, 2,FREEREF(0),return_);
  T24 = BOXGET(FREEREF(0));
  T23 = CALL1(1,VARREF(Yhead),T24);
  x_1203F2273 = T23;
  condF2274 = YPfalse;
  bodyF2275 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1203F2273,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1203F2273,x_1204F2272);
    condF2274 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1203F2273);
    x_1203F2276 = T8;
    bodyF2275 = x_1203F2276;
    x_1203F2277 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1203F2277,x_1204F2272);
    x_1203F2278 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1203F2278,x_1204F2272);
    T6 = CALL1(1,VARREF(Ytail),x_1203F2277);
    x_1203F2279 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1203F2279,x_1204F2272);
  } else {
    T9 = CALL2(1,x_1204F2272,LITREF(lit_7),x_1203F2273);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T13 = condF2274;
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T17 = bodyF2275;
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_132));
  T22 = BOXGET(FREEREF(0));
  T21 = CALL1(1,VARREF(Ytail),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T10 = CALL5(1,VARREF(YgooSmacrosYcat),T11,T12,T14,T18,LITREF(lit_11));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_69) {
  P return_;
  P x_1201F2284;
  P x_1201F2283;
  P casesF2282;
  P x_1201F2281;
  P x_1202F2280;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(return_, 0);
  T10 = FUNSHELL(0,fun_x_1202_66,2);
  x_1202F2280 = T10;
  FUNINIT(x_1202F2280, 2,FREEREF(0),return_);
  x_1201F2281 = FREEREF(0);
  casesF2282 = YPfalse;
  casesF2282 = BOXFAB(casesF2282);
  T1 = CALL2(1,VARREF(YisaQ),x_1201F2281,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1201F2281,LITREF(lit_132),x_1202F2280);
    x_1201F2283 = T3;
    BOXPUT(x_1201F2283,casesF2282);
    x_1201F2284 = Ynil;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1201F2284,x_1202F2280);
  } else {
    T4 = CALL2(1,x_1202F2280,LITREF(lit_7),x_1201F2281);
  }
  T7 = BOXGET(casesF2282);
  T6 = CALL1(1,VARREF(YgooSmacrosYnulQ),T7);
  if (T6 != YPfalse) {
    T5 = YPfalse;
  } else {
    T9 = FUNFAB(fun_68,1,casesF2282);
    T8 = with_exit(T9);
    T5 = T8;
  }
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_70) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_69,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1210_71) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL1(1,VARREF(Yhead),FREEREF(0));
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_142),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1212_72) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL1(1,VARREF(Yhead),FREEREF(0));
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_146),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_73) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T2 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T3 = CALL1(1,VARREF(Ylst),x_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,LITREF(lit_11));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_74) {
  P return_;
  P x_1211F2290;
  P x_1211F2289;
  P x_1211F2288;
  P valuesF2287;
  P x_1211F2286;
  P x_1212F2285;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(return_, 0);
  T23 = FUNSHELL(0,fun_x_1212_72,2);
  x_1212F2285 = T23;
  FUNINIT(x_1212F2285, 2,FREEREF(0),return_);
  T22 = BOXGET(FREEREF(1));
  x_1211F2286 = T22;
  valuesF2287 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1211F2286,VARREF(YLlstG));
  if (T1 != YPfalse) {
    valuesF2287 = x_1211F2286;
    x_1211F2288 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1211F2288,x_1212F2285);
    x_1211F2289 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1211F2289,x_1212F2285);
    T5 = CALL1(1,VARREF(Ytail),x_1211F2288);
    x_1211F2290 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1211F2290,x_1212F2285);
  } else {
    T6 = CALL2(1,x_1212F2285,LITREF(lit_7),x_1211F2286);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T13 = FUNFAB(fun_73,2,FREEREF(2),FREEREF(3));
  T14 = valuesF2287;
  T12 = CALL2(1,VARREF(YgooSmacrosYmap),T13,T14);
  T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,T12,LITREF(lit_11));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T18 = BOXGET(FREEREF(4));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T21 = CALL1(1,VARREF(Ytail),FREEREF(0));
  T20 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),FREEREF(3),FREEREF(2),T21);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T7 = CALL5(1,VARREF(YgooSmacrosYcat),T8,T9,T15,T19,LITREF(lit_11));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_75) {
  P return_;
  P x_1209F2298;
  P x_1209F2297;
  P x_1209F2296;
  P x_1209F2295;
  P bodyF2294;
  P condF2293;
  P x_1209F2292;
  P x_1210F2291;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1210_71,2);
  x_1210F2291 = T19;
  FUNINIT(x_1210F2291, 2,FREEREF(0),return_);
  T18 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1209F2292 = T18;
  condF2293 = YPfalse;
  condF2293 = BOXFAB(condF2293);
  bodyF2294 = YPfalse;
  bodyF2294 = BOXFAB(bodyF2294);
  T2 = CALL2(1,VARREF(YisaQ),x_1209F2292,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1209F2292,x_1210F2291);
    BOXPUT(T7,condF2293);
    T8 = CALL1(1,VARREF(Ytail),x_1209F2292);
    x_1209F2295 = T8;
    BOXPUT(x_1209F2295,bodyF2294);
    x_1209F2296 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1209F2296,x_1210F2291);
    x_1209F2297 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1209F2297,x_1210F2291);
    T6 = CALL1(1,VARREF(Ytail),x_1209F2296);
    x_1209F2298 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1209F2298,x_1210F2291);
  } else {
    T9 = CALL2(1,x_1210F2291,LITREF(lit_7),x_1209F2292);
  }
  T12 = BOXGET(condF2293);
  T11 = CALL2(1,VARREF(YgooSmacrosYEE),T12,YPtrue);
  if (T11 != YPfalse) {
    T14 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T15 = BOXGET(bodyF2294);
    T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_11));
    T10 = T13;
  } else {
    T17 = FUNFAB(fun_74,5,FREEREF(0),condF2293,FREEREF(1),FREEREF(2),bodyF2294);
    T16 = with_exit(T17);
    T10 = T16;
  }
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(YgooSmacrosYdo_case_by) {
  P val_,tst_,cases_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(val_, 0);
  ARG(tst_, 1);
  ARG(cases_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),cases_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T3 = FUNFAB(fun_75,3,cases_,tst_,val_);
    T2 = with_exit(T3);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1216_77) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_152),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_78) {
  P return_;
  P tst_varF2309;
  P val_varF2308;
  P x_1215F2307;
  P x_1215F2306;
  P x_1215F2305;
  P x_1215F2304;
  P casesF2303;
  P tstF2302;
  P valF2301;
  P x_1215F2300;
  P x_1216F2299;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(return_, 0);
  T30 = FUNSHELL(0,fun_x_1216_77,2);
  x_1216F2299 = T30;
  FUNINIT(x_1216F2299, 2,FREEREF(0),return_);
  x_1215F2300 = FREEREF(0);
  valF2301 = YPfalse;
  tstF2302 = YPfalse;
  casesF2303 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1215F2300,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1215F2300,LITREF(lit_152),x_1216F2299);
    x_1215F2304 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F2304,x_1216F2299);
    valF2301 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1215F2304);
    x_1215F2305 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F2305,x_1216F2299);
    tstF2302 = T5;
    T6 = CALL1(1,VARREF(Ytail),x_1215F2305);
    x_1215F2306 = T6;
    casesF2303 = x_1215F2306;
    x_1215F2307 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1215F2307,x_1216F2299);
  } else {
    T10 = CALL2(1,x_1216F2299,LITREF(lit_7),x_1215F2300);
  }
  T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF2308 = T29;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF2309 = T28;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T17 = CALL1(1,VARREF(Ylst),val_varF2308);
  T19 = valF2301;
  T18 = CALL1(1,VARREF(Ylst),T19);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T22 = CALL1(1,VARREF(Ylst),tst_varF2309);
  T24 = tstF2302;
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,LITREF(lit_11));
  T20 = CALL1(1,VARREF(Ylst),T21);
  T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T20,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T27 = casesF2303;
  T26 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF2308,tst_varF2309,T27);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T25,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_79) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_78,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1220_80) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_157),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_81) {
  P return_;
  P x_1219F2316;
  P x_1219F2315;
  P x_1219F2314;
  P casesF2313;
  P valF2312;
  P x_1219F2311;
  P x_1220F2310;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(return_, 0);
  T14 = FUNSHELL(0,fun_x_1220_80,2);
  x_1220F2310 = T14;
  FUNINIT(x_1220F2310, 2,FREEREF(0),return_);
  x_1219F2311 = FREEREF(0);
  valF2312 = YPfalse;
  casesF2313 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1219F2311,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1219F2311,LITREF(lit_157),x_1220F2310);
    x_1219F2314 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1219F2314,x_1220F2310);
    valF2312 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1219F2314);
    x_1219F2315 = T5;
    casesF2313 = x_1219F2315;
    x_1219F2316 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1219F2316,x_1220F2310);
  } else {
    T7 = CALL2(1,x_1220F2310,LITREF(lit_7),x_1219F2311);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T11 = valF2312;
  T10 = CALL1(1,VARREF(Ylst),T11);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T13 = casesF2313;
  T8 = CALL5(1,VARREF(YgooSmacrosYcat),T9,T10,T12,T13,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_82) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_81,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1228_83) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_163),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1232_84) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_170));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_85) {
  P return_;
  P varF2331;
  P x_1231F2330;
  P x_1231F2329;
  P x_1231F2328;
  P x_1231F2327;
  P x_1231F2326;
  P x_1231F2325;
  P x_1231F2324;
  P x_1231F2323;
  P x_1231F2322;
  P restF2321;
  P thenF2320;
  P patF2319;
  P x_1231F2318;
  P x_1232F2317;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
LINK_STACK();
  ARG(return_, 0);
  T51 = FUNSHELL(0,fun_x_1232_84,1);
  x_1232F2317 = T51;
  FUNINIT(x_1232F2317, 1,return_);
  T50 = BOXGET(FREEREF(0));
  x_1231F2318 = T50;
  patF2319 = YPfalse;
  thenF2320 = YPfalse;
  restF2321 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1231F2318,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F2318,x_1232F2317);
    x_1231F2322 = T14;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F2322,x_1232F2317);
    patF2319 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1231F2322);
    x_1231F2323 = T13;
    thenF2320 = x_1231F2323;
    x_1231F2324 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F2324,x_1232F2317);
    x_1231F2325 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1231F2325,x_1232F2317);
    T11 = CALL1(1,VARREF(Ytail),x_1231F2324);
    x_1231F2326 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1231F2326,x_1232F2317);
    T15 = CALL1(1,VARREF(Ytail),x_1231F2318);
    x_1231F2327 = T15;
    restF2321 = x_1231F2327;
    x_1231F2328 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F2328,x_1232F2317);
    x_1231F2329 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1231F2329,x_1232F2317);
    T7 = CALL1(1,VARREF(Ytail),x_1231F2328);
    x_1231F2330 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1231F2330,x_1232F2317);
  } else {
    T16 = CALL2(1,x_1232F2317,LITREF(lit_7),x_1231F2318);
  }
  T19 = patF2319;
  T18 = CALL2(1,VARREF(YgooSmacrosYEE),T19,YPtrue);
  if (T18 != YPfalse) {
    T21 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T22 = thenF2320;
    T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_11));
    T17 = T20;
  } else {
    T49 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF2331 = T49;
    T24 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
    T29 = CALL1(1,VARREF(Ylst),varF2331);
    T31 = BOXGET(FREEREF(1));
    T30 = CALL1(1,VARREF(Ylst),T31);
    T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_11));
    T27 = CALL1(1,VARREF(Ylst),T28);
    T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,LITREF(lit_11));
    T25 = CALL1(1,VARREF(Ylst),T26);
    T34 = CALL1(1,VARREF(Ylst),LITREF(lit_171));
    T38 = patF2319;
    T37 = CALL1(1,VARREF(Ylst),T38);
    T39 = CALL1(1,VARREF(Ylst),varF2331);
    T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T39,LITREF(lit_11));
    T35 = CALL1(1,VARREF(Ylst),T36);
    T42 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T43 = thenF2320;
    T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_11));
    T40 = CALL1(1,VARREF(Ylst),T41);
    T46 = CALL1(1,VARREF(Ylst),LITREF(lit_163));
    T47 = CALL1(1,VARREF(Ylst),varF2331);
    T48 = restF2321;
    T45 = CALL4(1,VARREF(YgooSmacrosYcat),T46,T47,T48,LITREF(lit_11));
    T44 = CALL1(1,VARREF(Ylst),T45);
    T33 = CALL5(1,VARREF(YgooSmacrosYcat),T34,T35,T40,T44,LITREF(lit_11));
    T32 = CALL1(1,VARREF(Ylst),T33);
    T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T32,LITREF(lit_11));
    T17 = T23;
  }
UNLINK_STACK();
  QRET(T17);
}

LOCCODEDEF(fun_x_1230_86) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = FUNFAB(fun_85,2,FREEREF(0),FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_87) {
  P return_;
  P x_1229F2333;
  P x_1230F2332;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(return_, 0);
  T7 = FUNSHELL(0,fun_x_1230_86,3);
  x_1230F2332 = T7;
  FUNINIT(x_1230F2332, 3,FREEREF(0),FREEREF(1),return_);
  T6 = BOXGET(FREEREF(0));
  x_1229F2333 = T6;
  T0 = CALL2(1,VARREF(YisaQ),x_1229F2333,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1229F2333,x_1230F2332);
  } else {
    T2 = CALL2(1,x_1230F2332,LITREF(lit_7),x_1229F2333);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_172));
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_173));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_11));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_88) {
  P return_;
  P x_1227F2340;
  P x_1227F2339;
  P x_1227F2338;
  P casesF2337;
  P expF2336;
  P x_1227F2335;
  P x_1228F2334;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(return_, 0);
  T10 = FUNSHELL(0,fun_x_1228_83,2);
  x_1228F2334 = T10;
  FUNINIT(x_1228F2334, 2,FREEREF(0),return_);
  x_1227F2335 = FREEREF(0);
  expF2336 = YPfalse;
  expF2336 = BOXFAB(expF2336);
  casesF2337 = YPfalse;
  casesF2337 = BOXFAB(casesF2337);
  T2 = CALL2(1,VARREF(YisaQ),x_1227F2335,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1227F2335,LITREF(lit_163),x_1228F2334);
    x_1227F2338 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F2338,x_1228F2334);
    BOXPUT(T4,expF2336);
    T5 = CALL1(1,VARREF(Ytail),x_1227F2338);
    x_1227F2339 = T5;
    BOXPUT(x_1227F2339,casesF2337);
    x_1227F2340 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1227F2340,x_1228F2334);
  } else {
    T7 = CALL2(1,x_1228F2334,LITREF(lit_7),x_1227F2335);
  }
  T9 = FUNFAB(fun_87,2,casesF2337,expF2336);
  T8 = with_exit(T9);
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_89) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_88,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1236_90) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_178),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_91) {
  P return_;
  P x_1235F2349;
  P x_1235F2348;
  P x_1235F2347;
  P x_1235F2346;
  P argsF2345;
  P messageF2344;
  P condF2343;
  P x_1235F2342;
  P x_1236F2341;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_1236_90,2);
  x_1236F2341 = T24;
  FUNINIT(x_1236F2341, 2,FREEREF(0),return_);
  x_1235F2342 = FREEREF(0);
  condF2343 = YPfalse;
  messageF2344 = YPfalse;
  argsF2345 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1235F2342,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1235F2342,LITREF(lit_178),x_1236F2341);
    x_1235F2346 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F2346,x_1236F2341);
    condF2343 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1235F2346);
    x_1235F2347 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F2347,x_1236F2341);
    messageF2344 = T5;
    T6 = CALL1(1,VARREF(Ytail),x_1235F2347);
    x_1235F2348 = T6;
    argsF2345 = x_1235F2348;
    x_1235F2349 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1235F2349,x_1236F2341);
  } else {
    T10 = CALL2(1,x_1236F2341,LITREF(lit_7),x_1235F2342);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T17 = condF2343;
  T16 = CALL1(1,VARREF(Ylst),T17);
  T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_179));
  T22 = messageF2344;
  T21 = CALL1(1,VARREF(Ylst),T22);
  T23 = argsF2345;
  T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T23,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T18,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_92) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_91,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1244_93) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_184),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1246_94) {
  P msg_,args_;
  P T0;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1248_95) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T3 = BOXGET(FREEREF(0));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_196));
  T7 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,LITREF(lit_11));
  T4 = CALL1(1,VARREF(Ylst),T5);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),T2,T4,LITREF(lit_11));
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_96) {
  P return_;
  P x_1247F2358;
  P x_1247F2357;
  P x_1247F2356;
  P x_1247F2355;
  P x_1247F2354;
  P valF2353;
  P keyF2352;
  P x_1247F2351;
  P x_1248F2350;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(return_, 0);
  T33 = FUNSHELL(0,fun_x_1248_95,3);
  x_1248F2350 = T33;
  FUNINIT(x_1248F2350, 3,FREEREF(0),FREEREF(1),return_);
  T32 = BOXGET(FREEREF(0));
  x_1247F2351 = T32;
  keyF2352 = YPfalse;
  valF2353 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1247F2351,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1247F2351,LITREF(lit_79),x_1248F2350);
    x_1247F2354 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1247F2354,x_1248F2350);
    keyF2352 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1247F2354);
    x_1247F2355 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1247F2355,x_1248F2350);
    valF2353 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1247F2355);
    x_1247F2356 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1247F2356,x_1248F2350);
    x_1247F2357 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1247F2357,x_1248F2350);
    T6 = CALL1(1,VARREF(Ytail),x_1247F2356);
    x_1247F2358 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1247F2358,x_1248F2350);
  } else {
    T12 = CALL2(1,x_1248F2350,LITREF(lit_7),x_1247F2351);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T18 = keyF2352;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T20 = valF2353;
  T19 = CALL1(1,VARREF(Ylst),T20);
  T15 = CALL4(1,VARREF(YgooSmacrosYcat),T16,T17,T19,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_197));
  T27 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,LITREF(lit_11));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_196));
  T31 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,LITREF(lit_11));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T28,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T21,LITREF(lit_11));
UNLINK_STACK();
  QRET(T13);
}

LOCCODEDEF(fun_97) {
  P return_;
  P stateF2367;
  P x_1245F2366;
  P x_1245F2365;
  P x_1245F2364;
  P x_1245F2363;
  P expF2362;
  P varF2361;
  P x_1245F2360;
  P x_1246F2359;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(return_, 0);
  T34 = FUNSHELL(0,fun_x_1246_94,1);
  x_1246F2359 = T34;
  FUNINIT(x_1246F2359, 1,return_);
  x_1245F2360 = FREEREF(0);
  varF2361 = YPfalse;
  varF2361 = BOXFAB(varF2361);
  expF2362 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1245F2360,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1245F2360,x_1246F2359);
    BOXPUT(T9,varF2361);
    T10 = CALL1(1,VARREF(Ytail),x_1245F2360);
    x_1245F2363 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1245F2363,x_1246F2359);
    expF2362 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1245F2363);
    x_1245F2364 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1245F2364,x_1246F2359);
    x_1245F2365 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1245F2365,x_1246F2359);
    T6 = CALL1(1,VARREF(Ytail),x_1245F2364);
    x_1245F2366 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1245F2366,x_1246F2359);
  } else {
    T11 = CALL2(1,x_1246F2359,LITREF(lit_7),x_1245F2360);
  }
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF2367 = T33;
  T13 = CALL1(1,VARREF(Ytail),FREEREF(1));
  T16 = CALL1(1,VARREF(Ylst),stateF2367);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_191));
  T21 = expF2362;
  T20 = CALL1(1,VARREF(Ylst),T21);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL2(1,VARREF(YgooSmacrosYpair),T15,FREEREF(2));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T25 = CALL1(1,VARREF(Ylst),stateF2367);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_11));
  T22 = CALL2(1,VARREF(YgooSmacrosYpair),T23,FREEREF(3));
  T28 = FUNFAB(fun_96,2,varF2361,stateF2367);
  T27 = with_exit(T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYpair),T27,FREEREF(4));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_198));
  T32 = CALL1(1,VARREF(Ylst),stateF2367);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,LITREF(lit_11));
  T29 = CALL2(1,VARREF(YgooSmacrosYpair),T30,FREEREF(5));
  T12 = CALL5(1,FREEREF(6),T13,T14,T22,T26,T29);
UNLINK_STACK();
  QRET(T12);
}

LOCCODEDEF(fun_grok_98) {
  P clauses_,inits_,preds_,nows_,nexts_;
  P clauseF2369;
  P loopF2368;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(clauses_, 0);
  ARG(inits_, 1);
  ARG(preds_, 2);
  ARG(nows_, 3);
  ARG(nexts_, 4);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),clauses_);
  if (T1 != YPfalse) {
    T20 = CALL0(1,VARREF(YgooSmacrosYgensym));
    loopF2368 = T20;
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
    T4 = CALL1(1,VARREF(Ylst),loopF2368);
    T5 = CALL1(1,VARREF(Ylst),inits_);
    T8 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
    T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,preds_,LITREF(lit_11));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
    T15 = CALL1(1,VARREF(Ylst),nows_);
    T16 = BOXGET(FREEREF(0));
    T19 = CALL1(1,VARREF(Ylst),loopF2368);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,nexts_,LITREF(lit_11));
    T17 = CALL1(1,VARREF(Ylst),T18);
    T13 = CALL5(1,VARREF(YgooSmacrosYcat),T14,T15,T16,T17,LITREF(lit_11));
    T12 = CALL1(1,VARREF(Ylst),T13);
    T7 = CALL4(1,VARREF(YgooSmacrosYcat),T8,T9,T12,LITREF(lit_11));
    T6 = CALL1(1,VARREF(Ylst),T7);
    T2 = CALL5(1,VARREF(YgooSmacrosYcat),T3,T4,T5,T6,LITREF(lit_11));
    T0 = T2;
  } else {
    T23 = CALL1(1,VARREF(Yhead),clauses_);
    clauseF2369 = T23;
    T22 = FUNFAB(fun_97,7,clauseF2369,clauses_,inits_,preds_,nows_,nexts_,FREEREF(1));
    T21 = with_exit(T22);
    T0 = T21;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_99) {
  P return_;
  P grokF2381;
  P x_1243F2380;
  P x_1243F2379;
  P x_1243F2378;
  P x_1243F2377;
  P x_1243F2376;
  P x_1243F2375;
  P x_1243F2374;
  P bodyF2373;
  P clausesF2372;
  P x_1243F2371;
  P x_1244F2370;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(return_, 0);
  T15 = FUNSHELL(0,fun_x_1244_93,2);
  x_1244F2370 = T15;
  FUNINIT(x_1244F2370, 2,FREEREF(0),return_);
  x_1243F2371 = FREEREF(0);
  clausesF2372 = YPfalse;
  bodyF2373 = YPfalse;
  bodyF2373 = BOXFAB(bodyF2373);
  T2 = CALL2(1,VARREF(YisaQ),x_1243F2371,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1243F2371,LITREF(lit_184),x_1244F2370);
    x_1243F2374 = T10;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1243F2374,x_1244F2370);
    x_1243F2375 = T8;
    clausesF2372 = x_1243F2375;
    x_1243F2376 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1243F2376,x_1244F2370);
    x_1243F2377 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1243F2377,x_1244F2370);
    T7 = CALL1(1,VARREF(Ytail),x_1243F2376);
    x_1243F2378 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1243F2378,x_1244F2370);
    T9 = CALL1(1,VARREF(Ytail),x_1243F2374);
    x_1243F2379 = T9;
    BOXPUT(x_1243F2379,bodyF2373);
    x_1243F2380 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1243F2380,x_1244F2370);
  } else {
    T11 = CALL2(1,x_1244F2370,LITREF(lit_7),x_1243F2371);
  }
  T14 = FUNSHELL(1,fun_grok_98,2);
  grokF2381 = T14;
  FUNINIT(grokF2381, 2,bodyF2373,grokF2381);
  T13 = clausesF2372;
  T12 = CALL5(1,grokF2381,T13,Ynil,Ynil,Ynil,Ynil);
UNLINK_STACK();
  QRET(T12);
}

LOCCODEDEF(fun_100) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_99,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1252_101) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_203),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_102) {
  P return_;
  P x_1251F2388;
  P x_1251F2387;
  P x_1251F2386;
  P bodyF2385;
  P testF2384;
  P x_1251F2383;
  P x_1252F2382;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(return_, 0);
  T21 = FUNSHELL(0,fun_x_1252_101,2);
  x_1252F2382 = T21;
  FUNINIT(x_1252F2382, 2,FREEREF(0),return_);
  x_1251F2383 = FREEREF(0);
  testF2384 = YPfalse;
  bodyF2385 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1251F2383,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1251F2383,LITREF(lit_203),x_1252F2382);
    x_1251F2386 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1251F2386,x_1252F2382);
    testF2384 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1251F2386);
    x_1251F2387 = T5;
    bodyF2385 = x_1251F2387;
    x_1251F2388 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1251F2388,x_1252F2382);
  } else {
    T7 = CALL2(1,x_1252F2382,LITREF(lit_7),x_1251F2383);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
  T10 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T11 = CALL1(1,VARREF(Ylst),Ynil);
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T16 = testF2384;
  T15 = CALL1(1,VARREF(Ylst),T16);
  T17 = bodyF2385;
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T19 = CALL2(1,VARREF(YgooSmacrosYcat),T20,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T13 = CALL5(1,VARREF(YgooSmacrosYcat),T14,T15,T17,T18,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T8 = CALL5(1,VARREF(YgooSmacrosYcat),T9,T10,T11,T12,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_103) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_102,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1256_104) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_209),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_105) {
  P return_;
  P x_1255F2395;
  P x_1255F2394;
  P x_1255F2393;
  P bodyF2392;
  P testF2391;
  P x_1255F2390;
  P x_1256F2389;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(return_, 0);
  T21 = FUNSHELL(0,fun_x_1256_104,2);
  x_1256F2389 = T21;
  FUNINIT(x_1256F2389, 2,FREEREF(0),return_);
  x_1255F2390 = FREEREF(0);
  testF2391 = YPfalse;
  bodyF2392 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1255F2390,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1255F2390,LITREF(lit_209),x_1256F2389);
    x_1255F2393 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1255F2393,x_1256F2389);
    testF2391 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1255F2393);
    x_1255F2394 = T5;
    bodyF2392 = x_1255F2394;
    x_1255F2395 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1255F2395,x_1256F2389);
  } else {
    T7 = CALL2(1,x_1256F2389,LITREF(lit_7),x_1255F2390);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
  T10 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T11 = CALL1(1,VARREF(Ylst),Ynil);
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T16 = testF2391;
  T15 = CALL1(1,VARREF(Ylst),T16);
  T17 = bodyF2392;
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T19 = CALL2(1,VARREF(YgooSmacrosYcat),T20,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T13 = CALL5(1,VARREF(YgooSmacrosYcat),T14,T15,T17,T18,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T8 = CALL5(1,VARREF(YgooSmacrosYcat),T9,T10,T11,T12,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_106) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_105,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1266_107) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_214),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1272_108) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = BOXGET(FREEREF(0));
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_221),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_109) {
  P return_;
  P old_valueF2413;
  P g_placeF2412;
  P g_declsF2411;
  P tup22F2410;
  P x_1271F2409;
  P x_1271F2408;
  P x_1271F2407;
  P x_1271F2406;
  P x_1271F2405;
  P x_1271F2404;
  P x_1271F2403;
  P x_1271F2402;
  P x_1271F2401;
  P restF2400;
  P valueF2399;
  P placeF2398;
  P x_1271F2397;
  P x_1272F2396;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56;
LINK_STACK();
  ARG(return_, 0);
  T56 = FUNSHELL(0,fun_x_1272_108,2);
  x_1272F2396 = T56;
  FUNINIT(x_1272F2396, 2,FREEREF(0),return_);
  x_1271F2397 = FREEREF(1);
  placeF2398 = YPfalse;
  valueF2399 = YPfalse;
  restF2400 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1271F2397,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1271F2397,x_1272F2396);
    x_1271F2401 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1271F2401,x_1272F2396);
    placeF2398 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1271F2401);
    x_1271F2402 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1271F2402,x_1272F2396);
    valueF2399 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1271F2402);
    x_1271F2403 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1271F2403,x_1272F2396);
    x_1271F2404 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1271F2404,x_1272F2396);
    T11 = CALL1(1,VARREF(Ytail),x_1271F2403);
    x_1271F2405 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1271F2405,x_1272F2396);
    T17 = CALL1(1,VARREF(Ytail),x_1271F2397);
    x_1271F2406 = T17;
    restF2400 = x_1271F2406;
    x_1271F2407 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1271F2407,x_1272F2396);
    x_1271F2408 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1271F2408,x_1272F2396);
    T7 = CALL1(1,VARREF(Ytail),x_1271F2407);
    x_1271F2409 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1271F2409,x_1272F2396);
  } else {
    T18 = CALL2(1,x_1272F2396,LITREF(lit_7),x_1271F2397);
  }
  T55 = placeF2398;
  T54 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T55);
  tup22F2410 = T54;
  T53 = CALL2(1,VARREF(YgooSmacrosYelt),tup22F2410,YPint((P)0));
  g_declsF2411 = T53;
  T52 = CALL2(1,VARREF(YgooSmacrosYelt),tup22F2410,YPint((P)1));
  g_placeF2412 = T52;
  T51 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF2413 = T51;
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T25 = CALL1(1,VARREF(Ylst),old_valueF2413);
  T26 = CALL1(1,VARREF(Ylst),g_placeF2412);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF2411,T23,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_222));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T36 = CALL1(1,VARREF(Ylst),g_placeF2412);
  T38 = valueF2399;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,LITREF(lit_11));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T44 = restF2400;
  T43 = CALL2(1,VARREF(YgooSmacrosYcat),T44,LITREF(lit_11));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXGET(FREEREF(2));
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T45,LITREF(lit_11));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T39,LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T49 = CALL1(1,VARREF(Ylst),g_placeF2412);
  T50 = CALL1(1,VARREF(Ylst),old_valueF2413);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,LITREF(lit_11));
  T46 = CALL1(1,VARREF(Ylst),T47);
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T46,LITREF(lit_11));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T27,LITREF(lit_11));
UNLINK_STACK();
  QRET(T19);
}

LOCCODEDEF(fun_x_1269_110) {
  P msg_,args_;
  P x_1270F2414;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1270F2414 = FREEREF(0);
  T2 = FUNFAB(fun_109,3,FREEREF(1),x_1270F2414,FREEREF(2));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(3),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_111) {
  P return_;
  P x_1268F2416;
  P x_1269F2415;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(return_, 0);
  T6 = FUNSHELL(0,fun_x_1269_110,4);
  x_1269F2415 = T6;
  FUNINIT(x_1269F2415, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1268F2416 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1268F2416,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1268F2416,x_1269F2415);
  } else {
    T2 = CALL2(1,x_1269F2415,LITREF(lit_7),x_1268F2416);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T5 = BOXGET(FREEREF(2));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_11));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_112) {
  P return_;
  P x_1267F2424;
  P x_1265F2423;
  P x_1265F2422;
  P x_1265F2421;
  P bodyF2420;
  P placesF2419;
  P x_1265F2418;
  P x_1266F2417;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(return_, 0);
  T11 = FUNSHELL(0,fun_x_1266_107,2);
  x_1266F2417 = T11;
  FUNINIT(x_1266F2417, 2,FREEREF(0),return_);
  x_1265F2418 = FREEREF(0);
  placesF2419 = YPfalse;
  placesF2419 = BOXFAB(placesF2419);
  bodyF2420 = YPfalse;
  bodyF2420 = BOXFAB(bodyF2420);
  T2 = CALL2(1,VARREF(YisaQ),x_1265F2418,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1265F2418,LITREF(lit_214),x_1266F2417);
    x_1265F2421 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1265F2421,x_1266F2417);
    BOXPUT(T4,placesF2419);
    T5 = CALL1(1,VARREF(Ytail),x_1265F2421);
    x_1265F2422 = T5;
    BOXPUT(x_1265F2422,bodyF2420);
    x_1265F2423 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1265F2423,x_1266F2417);
  } else {
    T7 = CALL2(1,x_1266F2417,LITREF(lit_7),x_1265F2418);
  }
  T10 = BOXGET(placesF2419);
  x_1267F2424 = T10;
  T9 = FUNFAB(fun_111,3,x_1267F2424,placesF2419,bodyF2420);
  T8 = with_exit(T9);
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_113) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_112,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1276_114) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_227),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_115) {
  P return_;
  P vnamF2434;
  P typF2433;
  P namF2432;
  P x_1275F2431;
  P x_1275F2430;
  P x_1275F2429;
  P valueF2428;
  P varF2427;
  P x_1275F2426;
  P x_1276F2425;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
LINK_STACK();
  ARG(return_, 0);
  T48 = FUNSHELL(0,fun_x_1276_114,2);
  x_1276F2425 = T48;
  FUNINIT(x_1276F2425, 2,FREEREF(0),return_);
  x_1275F2426 = FREEREF(0);
  varF2427 = YPfalse;
  valueF2428 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1275F2426,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1275F2426,LITREF(lit_227),x_1276F2425);
    x_1275F2429 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1275F2429,x_1276F2425);
    varF2427 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1275F2429);
    x_1275F2430 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1275F2430,x_1276F2425);
    valueF2428 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1275F2430);
    x_1275F2431 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1275F2431,x_1276F2425);
  } else {
    T9 = CALL2(1,x_1276F2425,LITREF(lit_7),x_1275F2426);
  }
  T47 = varF2427;
  T46 = CALL1(1,VARREF(YgooSmacrosYvar_name),T47);
  namF2432 = T46;
  T45 = varF2427;
  T44 = CALL1(1,VARREF(YgooSmacrosYvar_type),T45);
  typF2433 = T44;
  T43 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_228),namF2432,LITREF(lit_229));
  vnamF2434 = T43;
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_230));
  T15 = CALL1(1,VARREF(Ylst),vnamF2434);
  T17 = valueF2428;
  T16 = CALL1(1,VARREF(Ylst),T17);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T16,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_231));
  T21 = CALL1(1,VARREF(Ylst),namF2432);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_232));
  T25 = CALL1(1,VARREF(Ylst),typF2433);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_11));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),vnamF2434);
  T19 = CALL5(1,VARREF(YgooSmacrosYcat),T20,T21,T22,T26,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_231));
  T31 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF2432);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_233));
  T37 = CALL1(1,VARREF(Ylst),typF2433);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,LITREF(lit_11));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T41 = CALL1(1,VARREF(Ylst),vnamF2434);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_233));
  T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,LITREF(lit_11));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T28 = CALL5(1,VARREF(YgooSmacrosYcat),T29,T30,T32,T38,LITREF(lit_11));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T10 = CALL5(1,VARREF(YgooSmacrosYcat),T11,T12,T18,T27,LITREF(lit_11));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_116) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_115,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1280_117) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_238),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_118) {
  P return_;
  P x_1279F2439;
  P x_1279F2438;
  P bodyF2437;
  P x_1279F2436;
  P x_1280F2435;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(return_, 0);
  T14 = FUNSHELL(0,fun_x_1280_117,2);
  x_1280F2435 = T14;
  FUNINIT(x_1280F2435, 2,FREEREF(0),return_);
  x_1279F2436 = FREEREF(0);
  bodyF2437 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1279F2436,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1279F2436,LITREF(lit_238),x_1280F2435);
    x_1279F2438 = T3;
    bodyF2437 = x_1279F2438;
    x_1279F2439 = Ynil;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1279F2439,x_1280F2435);
  } else {
    T4 = CALL2(1,x_1280F2435,LITREF(lit_7),x_1279F2436);
  }
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T12 = CALL1(1,VARREF(Ylst),YPfalse);
  T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,T12,LITREF(lit_11));
  T9 = CALL1(1,VARREF(Ylst),T10);
  T8 = CALL2(1,VARREF(YgooSmacrosYcat),T9,LITREF(lit_11));
  T7 = CALL1(1,VARREF(Ylst),T8);
  T13 = bodyF2437;
  T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T13,LITREF(lit_11));
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_119) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_118,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1284_120) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_244),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_121) {
  P return_;
  P x_1283F2444;
  P x_1283F2443;
  P namesF2442;
  P x_1283F2441;
  P x_1284F2440;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(return_, 0);
  T28 = FUNSHELL(0,fun_x_1284_120,2);
  x_1284F2440 = T28;
  FUNINIT(x_1284F2440, 2,FREEREF(0),return_);
  x_1283F2441 = FREEREF(0);
  namesF2442 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1283F2441,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1283F2441,LITREF(lit_244),x_1284F2440);
    x_1283F2443 = T3;
    namesF2442 = x_1283F2443;
    x_1283F2444 = Ynil;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1283F2444,x_1284F2440);
  } else {
    T4 = CALL2(1,x_1284F2440,LITREF(lit_7),x_1283F2441);
  }
  T7 = namesF2442;
  T6 = CALL1(1,VARREF(YgooSmacrosYnulQ),T7);
  if (T6 != YPfalse) {
    T5 = YPfalse;
  } else {
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T12 = CALL1(1,VARREF(Ylst),LITREF(lit_121));
    T13 = CALL1(1,VARREF(Ylst),YPfalse);
    T16 = namesF2442;
    T15 = CALL1(1,VARREF(Yhead),T16);
    T14 = CALL1(1,VARREF(Ylst),T15);
    T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T14,LITREF(lit_11));
    T10 = CALL1(1,VARREF(Ylst),T11);
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
    T22 = namesF2442;
    T21 = CALL1(1,VARREF(Yhead),T22);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
    T17 = CALL1(1,VARREF(Ylst),T18);
    T25 = CALL1(1,VARREF(Ylst),LITREF(lit_244));
    T27 = namesF2442;
    T26 = CALL1(1,VARREF(Ytail),T27);
    T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
    T23 = CALL1(1,VARREF(Ylst),T24);
    T8 = CALL5(1,VARREF(YgooSmacrosYcat),T9,T10,T17,T23,LITREF(lit_11));
    T5 = T8;
  }
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_122) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_121,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1312_123) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_250),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1336_124) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_173));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_125) {
  P return_;
  P x_1335F2450;
  P x_1335F2449;
  P x_1335F2448;
  P nameF2447;
  P x_1335F2446;
  P x_1336F2445;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(return_, 0);
  T20 = FUNSHELL(0,fun_x_1336_124,1);
  x_1336F2445 = T20;
  FUNINIT(x_1336F2445, 1,return_);
  x_1335F2446 = FREEREF(0);
  nameF2447 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1335F2446,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1335F2446,x_1336F2445);
    nameF2447 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1335F2446);
    x_1335F2448 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1335F2448,x_1336F2445);
    x_1335F2449 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1335F2449,x_1336F2445);
    T5 = CALL1(1,VARREF(Ytail),x_1335F2448);
    x_1335F2450 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1335F2450,x_1336F2445);
  } else {
    T8 = CALL2(1,x_1336F2445,LITREF(lit_7),x_1335F2446);
  }
  T11 = nameF2447;
  T10 = CALL2(1,VARREF(YisaQ),T11,VARREF(YLsymG));
  if (T10 != YPfalse) {
    T14 = nameF2447;
    T13 = CALL1(1,VARREF(Ylst),T14);
    T17 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
    T19 = nameF2447;
    T18 = CALL1(1,VARREF(Ylst),T19);
    T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_11));
    T15 = CALL1(1,VARREF(Ylst),T16);
    T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,T15,LITREF(lit_11));
    T9 = T12;
  } else {
    T9 = Ynil;
  }
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_x_1333_126) {
  P msg_,args_;
  P x_1334F2451;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1334F2451 = FREEREF(0);
  T2 = FUNFAB(fun_125,1,x_1334F2451);
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_127) {
  P return_;
  P x_1332F2460;
  P x_1332F2459;
  P x_1332F2458;
  P x_1332F2457;
  P x_1332F2456;
  P restF2455;
  P nameF2454;
  P x_1332F2453;
  P x_1333F2452;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1333_126,2);
  x_1333F2452 = T19;
  FUNINIT(x_1333F2452, 2,FREEREF(0),return_);
  x_1332F2453 = FREEREF(0);
  nameF2454 = YPfalse;
  restF2455 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1332F2453,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1332F2453,LITREF(lit_275),x_1333F2452);
    x_1332F2456 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1332F2456,x_1333F2452);
    nameF2454 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1332F2456);
    x_1332F2457 = T8;
    restF2455 = x_1332F2457;
    x_1332F2458 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1332F2458,x_1333F2452);
    x_1332F2459 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1332F2459,x_1333F2452);
    T6 = CALL1(1,VARREF(Ytail),x_1332F2458);
    x_1332F2460 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1332F2460,x_1333F2452);
  } else {
    T10 = CALL2(1,x_1333F2452,LITREF(lit_7),x_1332F2453);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2454;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1330_128) {
  P msg_,args_;
  P x_1331F2461;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1331F2461 = FREEREF(0);
  T2 = FUNFAB(fun_127,2,x_1331F2461,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_129) {
  P return_;
  P x_1329F2470;
  P x_1329F2469;
  P x_1329F2468;
  P x_1329F2467;
  P x_1329F2466;
  P restF2465;
  P nameF2464;
  P x_1329F2463;
  P x_1330F2462;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1330_128,3);
  x_1330F2462 = T19;
  FUNINIT(x_1330F2462, 3,FREEREF(0),FREEREF(1),return_);
  x_1329F2463 = FREEREF(0);
  nameF2464 = YPfalse;
  restF2465 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1329F2463,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1329F2463,LITREF(lit_276),x_1330F2462);
    x_1329F2466 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1329F2466,x_1330F2462);
    nameF2464 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1329F2466);
    x_1329F2467 = T8;
    restF2465 = x_1329F2467;
    x_1329F2468 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1329F2468,x_1330F2462);
    x_1329F2469 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1329F2469,x_1330F2462);
    T6 = CALL1(1,VARREF(Ytail),x_1329F2468);
    x_1329F2470 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1329F2470,x_1330F2462);
  } else {
    T10 = CALL2(1,x_1330F2462,LITREF(lit_7),x_1329F2463);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2464;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1327_130) {
  P msg_,args_;
  P x_1328F2471;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1328F2471 = FREEREF(0);
  T2 = FUNFAB(fun_129,2,x_1328F2471,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_131) {
  P return_;
  P x_1326F2480;
  P x_1326F2479;
  P x_1326F2478;
  P x_1326F2477;
  P x_1326F2476;
  P restF2475;
  P nameF2474;
  P x_1326F2473;
  P x_1327F2472;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1327_130,3);
  x_1327F2472 = T19;
  FUNINIT(x_1327F2472, 3,FREEREF(0),FREEREF(1),return_);
  x_1326F2473 = FREEREF(0);
  nameF2474 = YPfalse;
  restF2475 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1326F2473,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1326F2473,LITREF(lit_277),x_1327F2472);
    x_1326F2476 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1326F2476,x_1327F2472);
    nameF2474 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1326F2476);
    x_1326F2477 = T8;
    restF2475 = x_1326F2477;
    x_1326F2478 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1326F2478,x_1327F2472);
    x_1326F2479 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1326F2479,x_1327F2472);
    T6 = CALL1(1,VARREF(Ytail),x_1326F2478);
    x_1326F2480 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1326F2480,x_1327F2472);
  } else {
    T10 = CALL2(1,x_1327F2472,LITREF(lit_7),x_1326F2473);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2474;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1324_132) {
  P msg_,args_;
  P x_1325F2481;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1325F2481 = FREEREF(0);
  T2 = FUNFAB(fun_131,2,x_1325F2481,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_133) {
  P return_;
  P x_1323F2490;
  P x_1323F2489;
  P x_1323F2488;
  P x_1323F2487;
  P x_1323F2486;
  P restF2485;
  P nameF2484;
  P x_1323F2483;
  P x_1324F2482;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1324_132,3);
  x_1324F2482 = T19;
  FUNINIT(x_1324F2482, 3,FREEREF(0),FREEREF(1),return_);
  x_1323F2483 = FREEREF(0);
  nameF2484 = YPfalse;
  restF2485 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1323F2483,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1323F2483,LITREF(lit_230),x_1324F2482);
    x_1323F2486 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1323F2486,x_1324F2482);
    nameF2484 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1323F2486);
    x_1323F2487 = T8;
    restF2485 = x_1323F2487;
    x_1323F2488 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1323F2488,x_1324F2482);
    x_1323F2489 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1323F2489,x_1324F2482);
    T6 = CALL1(1,VARREF(Ytail),x_1323F2488);
    x_1323F2490 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1323F2490,x_1324F2482);
  } else {
    T10 = CALL2(1,x_1324F2482,LITREF(lit_7),x_1323F2483);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2484;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1321_134) {
  P msg_,args_;
  P x_1322F2491;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1322F2491 = FREEREF(0);
  T2 = FUNFAB(fun_133,2,x_1322F2491,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_135) {
  P return_;
  P x_1320F2500;
  P x_1320F2499;
  P x_1320F2498;
  P x_1320F2497;
  P x_1320F2496;
  P restF2495;
  P nameF2494;
  P x_1320F2493;
  P x_1321F2492;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1321_134,3);
  x_1321F2492 = T19;
  FUNINIT(x_1321F2492, 3,FREEREF(0),FREEREF(1),return_);
  x_1320F2493 = FREEREF(0);
  nameF2494 = YPfalse;
  restF2495 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1320F2493,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1320F2493,LITREF(lit_278),x_1321F2492);
    x_1320F2496 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1320F2496,x_1321F2492);
    nameF2494 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1320F2496);
    x_1320F2497 = T8;
    restF2495 = x_1320F2497;
    x_1320F2498 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1320F2498,x_1321F2492);
    x_1320F2499 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1320F2499,x_1321F2492);
    T6 = CALL1(1,VARREF(Ytail),x_1320F2498);
    x_1320F2500 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1320F2500,x_1321F2492);
  } else {
    T10 = CALL2(1,x_1321F2492,LITREF(lit_7),x_1320F2493);
  }
  T13 = nameF2494;
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2494;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1318_136) {
  P msg_,args_;
  P x_1319F2501;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1319F2501 = FREEREF(0);
  T2 = FUNFAB(fun_135,2,x_1319F2501,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_137) {
  P return_;
  P x_1317F2510;
  P x_1317F2509;
  P x_1317F2508;
  P x_1317F2507;
  P x_1317F2506;
  P restF2505;
  P nameF2504;
  P x_1317F2503;
  P x_1318F2502;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(return_, 0);
  T25 = FUNSHELL(0,fun_x_1318_136,3);
  x_1318F2502 = T25;
  FUNINIT(x_1318F2502, 3,FREEREF(0),FREEREF(1),return_);
  x_1317F2503 = FREEREF(0);
  nameF2504 = YPfalse;
  restF2505 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1317F2503,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1317F2503,LITREF(lit_279),x_1318F2502);
    x_1317F2506 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1317F2506,x_1318F2502);
    nameF2504 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1317F2506);
    x_1317F2507 = T8;
    restF2505 = x_1317F2507;
    x_1317F2508 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1317F2508,x_1318F2502);
    x_1317F2509 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1317F2509,x_1318F2502);
    T6 = CALL1(1,VARREF(Ytail),x_1317F2508);
    x_1317F2510 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1317F2510,x_1318F2502);
  } else {
    T10 = CALL2(1,x_1318F2502,LITREF(lit_7),x_1317F2503);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2504;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T24 = nameF2504;
  T23 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),T24);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_11));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T14,T19,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1315_138) {
  P msg_,args_;
  P x_1316F2511;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1316F2511 = FREEREF(0);
  T2 = FUNFAB(fun_137,2,x_1316F2511,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_139) {
  P return_;
  P x_1314F2520;
  P x_1314F2519;
  P x_1314F2518;
  P x_1314F2517;
  P x_1314F2516;
  P restF2515;
  P nameF2514;
  P x_1314F2513;
  P x_1315F2512;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1315_138,3);
  x_1315F2512 = T19;
  FUNINIT(x_1315F2512, 3,FREEREF(0),FREEREF(1),return_);
  x_1314F2513 = FREEREF(0);
  nameF2514 = YPfalse;
  restF2515 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1314F2513,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1314F2513,LITREF(lit_280),x_1315F2512);
    x_1314F2516 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1314F2516,x_1315F2512);
    nameF2514 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1314F2516);
    x_1314F2517 = T8;
    restF2515 = x_1314F2517;
    x_1314F2518 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1314F2518,x_1315F2512);
    x_1314F2519 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1314F2519,x_1315F2512);
    T6 = CALL1(1,VARREF(Ytail),x_1314F2518);
    x_1314F2520 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1314F2520,x_1315F2512);
  } else {
    T10 = CALL2(1,x_1315F2512,LITREF(lit_7),x_1314F2513);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2514;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_140) {
  P return_;
  P defsF2527;
  P x_1313F2526;
  P x_1311F2525;
  P x_1311F2524;
  P defF2523;
  P x_1311F2522;
  P x_1312F2521;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(return_, 0);
  T10 = FUNSHELL(0,fun_x_1312_123,2);
  x_1312F2521 = T10;
  FUNINIT(x_1312F2521, 2,FREEREF(0),return_);
  x_1311F2522 = FREEREF(0);
  defF2523 = YPfalse;
  defF2523 = BOXFAB(defF2523);
  T1 = CALL2(1,VARREF(YisaQ),x_1311F2522,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1311F2522,LITREF(lit_250),x_1312F2521);
    x_1311F2524 = T3;
    BOXPUT(x_1311F2524,defF2523);
    x_1311F2525 = Ynil;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1311F2525,x_1312F2521);
  } else {
    T4 = CALL2(1,x_1312F2521,LITREF(lit_7),x_1311F2522);
  }
  T9 = BOXGET(defF2523);
  x_1313F2526 = T9;
  T8 = FUNFAB(fun_139,2,x_1313F2526,defF2523);
  T7 = with_exit(T8);
  defsF2527 = T7;
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,defsF2527,LITREF(lit_11));
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_141) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_140,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1340_142) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_285),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_143) {
  P x_;
  P xF2528;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T2 = x_;
  } else {
    T4 = CALL1(1,VARREF(Ylst),x_);
    T2 = T4;
  }
  xF2528 = T2;
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_250));
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,xF2528,LITREF(lit_11));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_144) {
  P return_;
  P x_1339F2533;
  P x_1339F2532;
  P defsF2531;
  P x_1339F2530;
  P x_1340F2529;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(return_, 0);
  T10 = FUNSHELL(0,fun_x_1340_142,2);
  x_1340F2529 = T10;
  FUNINIT(x_1340F2529, 2,FREEREF(0),return_);
  x_1339F2530 = FREEREF(0);
  defsF2531 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1339F2530,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1339F2530,LITREF(lit_285),x_1340F2529);
    x_1339F2532 = T3;
    defsF2531 = x_1339F2532;
    x_1339F2533 = Ynil;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1339F2533,x_1340F2529);
  } else {
    T4 = CALL2(1,x_1340F2529,LITREF(lit_7),x_1339F2530);
  }
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T8 = fun_143;
  T9 = defsF2531;
  T7 = CALL2(1,VARREF(YgooSmacrosYmap),T8,T9);
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,LITREF(lit_11));
UNLINK_STACK();
  QRET(T5);
}

LOCCODEDEF(fun_145) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_144,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSmacrosY___main_0___() {
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
  P T176,T177,T178,T179,T180,T181;
DEFCREGS();
  lit_0 = YPPsym((P)"@checked-next-methods");
  lit_1 = YPPlist(3,YPPsym((P)"met"),YPPsym((P)"nxt-mets"),YPPsym((P)"args"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYOchecked_next_methods = YPfab_met(FUNCODEREF(YgooSmacrosYOchecked_next_methods),T0,LITREF(lit_0),LITREF(lit_1),sloc(10),YPfalse);
  T1 = YgooSmacrosYOchecked_next_methods;
  VARSET(YgooSmacrosYOchecked_next_methods,T1);
  lit_2 = YPPlist(1,YPPsym((P)"exp"));
  lit_3 = YPPlist(1,YPPsym((P)"return"));
  lit_4 = YPPsym((P)"x-1112");
  lit_5 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_6 = YPPsym((P)"sup");
  lit_7 = YPsb((P)"Match Pattern Failure");
  lit_8 = YPPsym((P)"let");
  lit_9 = YPPsym((P)"next-mets");
  lit_10 = YPPsym((P)"%fun-reg");
  lit_11 = Ynil;
  lit_12 = YPPsym((P)"%next-methods");
  lit_13 = YPPsym((P)"napp");
  lit_14 = YPPsym((P)"head");
  lit_15 = YPPsym((P)"tail");
  lit_16 = YPPsym((P)"quote");
  T4 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1112_1 = YPfab_met(FUNCODEREF(fun_x_1112_1),T4,LITREF(lit_4),LITREF(lit_5),YPfalse,YPfalse);
  T3 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPfab_met(FUNCODEREF(fun_2),T3,YPfalse,LITREF(lit_3),YPfalse,YPfalse);
  T2 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3 = YPfab_met(FUNCODEREF(fun_3),T2,YPfalse,LITREF(lit_2),YPfalse,YPfalse);
  T5 = fun_3;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"sup"),T5);
  lit_17 = YPPlist(1,YPPsym((P)"exp"));
  lit_18 = YPPlist(1,YPPsym((P)"return"));
  lit_19 = YPPsym((P)"x-1116");
  lit_20 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_21 = YPPsym((P)"app-sup");
  T8 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1116_4 = YPfab_met(FUNCODEREF(fun_x_1116_4),T8,LITREF(lit_19),LITREF(lit_20),YPfalse,YPfalse);
  T7 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPfab_met(FUNCODEREF(fun_5),T7,YPfalse,LITREF(lit_18),YPfalse,YPfalse);
  T6 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPfab_met(FUNCODEREF(fun_6),T6,YPfalse,LITREF(lit_17),YPfalse,YPfalse);
  T9 = fun_6;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app-sup"),T9);
  lit_22 = YPPlist(1,YPPsym((P)"exp"));
  lit_23 = YPPlist(1,YPPsym((P)"return"));
  lit_24 = YPPsym((P)"x-1120");
  lit_25 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_26 = YPPsym((P)"app");
  T12 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1120_7 = YPfab_met(FUNCODEREF(fun_x_1120_7),T12,LITREF(lit_24),LITREF(lit_25),YPfalse,YPfalse);
  T11 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPfab_met(FUNCODEREF(fun_8),T11,YPfalse,LITREF(lit_23),YPfalse,YPfalse);
  T10 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T10,YPfalse,LITREF(lit_22),YPfalse,YPfalse);
  T13 = fun_9;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app"),T13);
  lit_27 = YPPlist(1,YPPsym((P)"exp"));
  lit_28 = YPPlist(1,YPPsym((P)"return"));
  lit_29 = YPPsym((P)"x-1124");
  lit_30 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_31 = YPPsym((P)"renew");
  lit_32 = YPPsym((P)"set");
  T16 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1124_10 = YPfab_met(FUNCODEREF(fun_x_1124_10),T16,LITREF(lit_29),LITREF(lit_30),YPfalse,YPfalse);
  T15 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T15,YPfalse,LITREF(lit_28),YPfalse,YPfalse);
  T14 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T14,YPfalse,LITREF(lit_27),YPfalse,YPfalse);
  T17 = fun_12;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"renew"),T17);
  lit_33 = YPPsym((P)"lift-place-subforms");
  lit_34 = YPPlist(1,YPPsym((P)"place"));
  lit_35 = YPPsym((P)"munch");
  lit_36 = YPPlist(1,YPPsym((P)"subforms"));
  T21 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T21,Ynil);
  fun_munch_13 = YPfab_met(FUNCODEREF(fun_munch_13),T20,LITREF(lit_35),LITREF(lit_36),sloc(48),YPfalse);
  T19 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),T19,Ynil);
  YgooSmacrosYlift_place_subforms = YPfab_met(FUNCODEREF(YgooSmacrosYlift_place_subforms),T18,LITREF(lit_33),LITREF(lit_34),sloc(47),YPfalse);
  T22 = YgooSmacrosYlift_place_subforms;
  VARSET(YgooSmacrosYlift_place_subforms,T22);
  lit_37 = YPPlist(1,YPPsym((P)"exp"));
  lit_38 = YPPlist(1,YPPsym((P)"return"));
  lit_39 = YPPsym((P)"x-1130");
  lit_40 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_41 = YPPsym((P)"incf");
  lit_42 = YPPlist(1,YPPsym((P)"return"));
  lit_43 = YPPsym((P)"x-1132");
  lit_44 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_45 = YPPsym((P)"+");
  T27 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1130_15 = YPfab_met(FUNCODEREF(fun_x_1130_15),T27,LITREF(lit_39),LITREF(lit_40),YPfalse,YPfalse);
  T26 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1132_16 = YPfab_met(FUNCODEREF(fun_x_1132_16),T26,LITREF(lit_43),LITREF(lit_44),YPfalse,YPfalse);
  T25 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPfab_met(FUNCODEREF(fun_17),T25,YPfalse,LITREF(lit_42),YPfalse,YPfalse);
  T24 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T24,YPfalse,LITREF(lit_38),YPfalse,YPfalse);
  T23 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPfab_met(FUNCODEREF(fun_19),T23,YPfalse,LITREF(lit_37),YPfalse,YPfalse);
  T28 = fun_19;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"incf"),T28);
  lit_46 = YPPlist(1,YPPsym((P)"exp"));
  lit_47 = YPPlist(1,YPPsym((P)"return"));
  lit_48 = YPPsym((P)"x-1138");
  lit_49 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_50 = YPPsym((P)"decf");
  lit_51 = YPPlist(1,YPPsym((P)"return"));
  lit_52 = YPPsym((P)"x-1140");
  lit_53 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_54 = YPPsym((P)"-");
  T33 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1138_20 = YPfab_met(FUNCODEREF(fun_x_1138_20),T33,LITREF(lit_48),LITREF(lit_49),YPfalse,YPfalse);
  T32 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1140_21 = YPfab_met(FUNCODEREF(fun_x_1140_21),T32,LITREF(lit_52),LITREF(lit_53),YPfalse,YPfalse);
  T31 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPfab_met(FUNCODEREF(fun_22),T31,YPfalse,LITREF(lit_51),YPfalse,YPfalse);
  T30 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPfab_met(FUNCODEREF(fun_23),T30,YPfalse,LITREF(lit_47),YPfalse,YPfalse);
  T29 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T29,YPfalse,LITREF(lit_46),YPfalse,YPfalse);
  T34 = fun_24;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"decf"),T34);
  lit_55 = YPPlist(1,YPPsym((P)"exp"));
  lit_56 = YPPlist(1,YPPsym((P)"return"));
  lit_57 = YPPsym((P)"x-1144");
  lit_58 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_59 = YPPsym((P)"pushf");
  lit_60 = YPPsym((P)"push!");
  T37 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1144_25 = YPfab_met(FUNCODEREF(fun_x_1144_25),T37,LITREF(lit_57),LITREF(lit_58),YPfalse,YPfalse);
  T36 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPfab_met(FUNCODEREF(fun_26),T36,YPfalse,LITREF(lit_56),YPfalse,YPfalse);
  T35 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T35,YPfalse,LITREF(lit_55),YPfalse,YPfalse);
  T38 = fun_27;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pushf"),T38);
  lit_61 = YPPlist(1,YPPsym((P)"exp"));
  lit_62 = YPPlist(1,YPPsym((P)"return"));
  lit_63 = YPPsym((P)"x-1148");
  lit_64 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_65 = YPPsym((P)"swapf");
  T41 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1148_28 = YPfab_met(FUNCODEREF(fun_x_1148_28),T41,LITREF(lit_63),LITREF(lit_64),YPfalse,YPfalse);
  T40 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPfab_met(FUNCODEREF(fun_29),T40,YPfalse,LITREF(lit_62),YPfalse,YPfalse);
  T39 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPfab_met(FUNCODEREF(fun_30),T39,YPfalse,LITREF(lit_61),YPfalse,YPfalse);
  T42 = fun_30;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"swapf"),T42);
  lit_66 = YPPlist(1,YPPsym((P)"exp"));
  lit_67 = YPPlist(1,YPPsym((P)"return"));
  lit_68 = YPPsym((P)"x-1152");
  lit_69 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_70 = YPPsym((P)"rotf");
  lit_71 = YPPlist(1,YPPsym((P)"x"));
  lit_72 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"p"));
  lit_73 = YPPlist(2,YPPsym((P)"p"),YPPsym((P)"t"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1152_31 = YPfab_met(FUNCODEREF(fun_x_1152_31),T48,LITREF(lit_68),LITREF(lit_69),YPfalse,YPfalse);
  T47 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPfab_met(FUNCODEREF(fun_32),T47,YPfalse,LITREF(lit_71),sloc(92),YPfalse);
  T46 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPfab_met(FUNCODEREF(fun_33),T46,YPfalse,LITREF(lit_72),YPfalse,YPfalse);
  T45 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T45,YPfalse,LITREF(lit_73),YPfalse,YPfalse);
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPfab_met(FUNCODEREF(fun_35),T44,YPfalse,LITREF(lit_67),YPfalse,YPfalse);
  T43 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPfab_met(FUNCODEREF(fun_36),T43,YPfalse,LITREF(lit_66),YPfalse,YPfalse);
  T49 = fun_36;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"rotf"),T49);
  lit_74 = YPPlist(1,YPPsym((P)"exp"));
  lit_75 = YPPlist(1,YPPsym((P)"return"));
  lit_76 = YPPsym((P)"x-1156");
  lit_77 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_78 = YPPsym((P)"popf");
  lit_79 = YPPsym((P)"tup");
  lit_80 = YPPsym((P)"pop!");
  T52 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1156_37 = YPfab_met(FUNCODEREF(fun_x_1156_37),T52,LITREF(lit_76),LITREF(lit_77),YPfalse,YPfalse);
  T51 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPfab_met(FUNCODEREF(fun_38),T51,YPfalse,LITREF(lit_75),YPfalse,YPfalse);
  T50 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPfab_met(FUNCODEREF(fun_39),T50,YPfalse,LITREF(lit_74),YPfalse,YPfalse);
  T53 = fun_39;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"popf"),T53);
  lit_81 = YPPlist(1,YPPsym((P)"exp"));
  lit_82 = YPPlist(1,YPPsym((P)"return"));
  lit_83 = YPPsym((P)"x-1160");
  lit_84 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_85 = YPPsym((P)"opf");
  lit_86 = YPPsym((P)"_");
  T56 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1160_40 = YPfab_met(FUNCODEREF(fun_x_1160_40),T56,LITREF(lit_83),LITREF(lit_84),YPfalse,YPfalse);
  T55 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPfab_met(FUNCODEREF(fun_41),T55,YPfalse,LITREF(lit_82),YPfalse,YPfalse);
  T54 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPfab_met(FUNCODEREF(fun_42),T54,YPfalse,LITREF(lit_81),YPfalse,YPfalse);
  T57 = fun_42;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"opf"),T57);
  lit_87 = YPPlist(1,YPPsym((P)"exp"));
  lit_88 = YPPlist(1,YPPsym((P)"return"));
  lit_89 = YPPsym((P)"x-1164");
  lit_90 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_91 = YPPsym((P)"or/set");
  lit_92 = YPPsym((P)"or");
  T60 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1164_43 = YPfab_met(FUNCODEREF(fun_x_1164_43),T60,LITREF(lit_89),LITREF(lit_90),YPfalse,YPfalse);
  T59 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T59,YPfalse,LITREF(lit_88),YPfalse,YPfalse);
  T58 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPfab_met(FUNCODEREF(fun_45),T58,YPfalse,LITREF(lit_87),YPfalse,YPfalse);
  T61 = fun_45;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"or/set"),T61);
  lit_93 = YPPlist(1,YPPsym((P)"exp"));
  lit_94 = YPPlist(1,YPPsym((P)"return"));
  lit_95 = YPPsym((P)"x-1168");
  lit_96 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_97 = YPPsym((P)"unless");
  lit_98 = YPPsym((P)"if");
  lit_99 = YPPsym((P)"not");
  lit_100 = YPPsym((P)"seq");
  T64 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1168_46 = YPfab_met(FUNCODEREF(fun_x_1168_46),T64,LITREF(lit_95),LITREF(lit_96),YPfalse,YPfalse);
  T63 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPfab_met(FUNCODEREF(fun_47),T63,YPfalse,LITREF(lit_94),YPfalse,YPfalse);
  T62 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPfab_met(FUNCODEREF(fun_48),T62,YPfalse,LITREF(lit_93),YPfalse,YPfalse);
  T65 = fun_48;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"unless"),T65);
  lit_101 = YPPlist(1,YPPsym((P)"exp"));
  lit_102 = YPPlist(1,YPPsym((P)"return"));
  lit_103 = YPPsym((P)"x-1172");
  lit_104 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_105 = YPPsym((P)"when");
  T68 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1172_49 = YPfab_met(FUNCODEREF(fun_x_1172_49),T68,LITREF(lit_103),LITREF(lit_104),YPfalse,YPfalse);
  T67 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPfab_met(FUNCODEREF(fun_50),T67,YPfalse,LITREF(lit_102),YPfalse,YPfalse);
  T66 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPfab_met(FUNCODEREF(fun_51),T66,YPfalse,LITREF(lit_101),YPfalse,YPfalse);
  T69 = fun_51;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"when"),T69);
  lit_106 = YPPlist(1,YPPsym((P)"exp"));
  lit_107 = YPPlist(1,YPPsym((P)"return"));
  lit_108 = YPPsym((P)"x-1180");
  lit_109 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_110 = YPPlist(1,YPPsym((P)"return"));
  lit_111 = YPPsym((P)"x-1182");
  lit_112 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_113 = YPPlist(1,YPPsym((P)"return"));
  lit_114 = YPPsym((P)"x-1184");
  lit_115 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_116 = YPPsym((P)"tmp");
  T76 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1180_52 = YPfab_met(FUNCODEREF(fun_x_1180_52),T76,LITREF(lit_108),LITREF(lit_109),YPfalse,YPfalse);
  T75 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1182_53 = YPfab_met(FUNCODEREF(fun_x_1182_53),T75,LITREF(lit_111),LITREF(lit_112),YPfalse,YPfalse);
  T74 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1184_54 = YPfab_met(FUNCODEREF(fun_x_1184_54),T74,LITREF(lit_114),LITREF(lit_115),YPfalse,YPfalse);
  T73 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPfab_met(FUNCODEREF(fun_55),T73,YPfalse,LITREF(lit_113),YPfalse,YPfalse);
  T72 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPfab_met(FUNCODEREF(fun_56),T72,YPfalse,LITREF(lit_110),YPfalse,YPfalse);
  T71 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPfab_met(FUNCODEREF(fun_57),T71,YPfalse,LITREF(lit_107),YPfalse,YPfalse);
  T70 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPfab_met(FUNCODEREF(fun_58),T70,YPfalse,LITREF(lit_106),YPfalse,YPfalse);
  T77 = fun_58;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"or"),T77);
  lit_117 = YPPlist(1,YPPsym((P)"exp"));
  lit_118 = YPPlist(1,YPPsym((P)"return"));
  lit_119 = YPPsym((P)"x-1192");
  lit_120 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_121 = YPPsym((P)"and");
  lit_122 = YPPlist(1,YPPsym((P)"return"));
  lit_123 = YPPsym((P)"x-1194");
  lit_124 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_125 = YPPlist(1,YPPsym((P)"return"));
  lit_126 = YPPsym((P)"x-1196");
  lit_127 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T84 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1192_59 = YPfab_met(FUNCODEREF(fun_x_1192_59),T84,LITREF(lit_119),LITREF(lit_120),YPfalse,YPfalse);
  T83 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1194_60 = YPfab_met(FUNCODEREF(fun_x_1194_60),T83,LITREF(lit_123),LITREF(lit_124),YPfalse,YPfalse);
  T82 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1196_61 = YPfab_met(FUNCODEREF(fun_x_1196_61),T82,LITREF(lit_126),LITREF(lit_127),YPfalse,YPfalse);
  T81 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPfab_met(FUNCODEREF(fun_62),T81,YPfalse,LITREF(lit_125),YPfalse,YPfalse);
  T80 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPfab_met(FUNCODEREF(fun_63),T80,YPfalse,LITREF(lit_122),YPfalse,YPfalse);
  T79 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPfab_met(FUNCODEREF(fun_64),T79,YPfalse,LITREF(lit_118),YPfalse,YPfalse);
  T78 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPfab_met(FUNCODEREF(fun_65),T78,YPfalse,LITREF(lit_117),YPfalse,YPfalse);
  T85 = fun_65;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"and"),T85);
  lit_128 = YPPlist(1,YPPsym((P)"exp"));
  lit_129 = YPPlist(1,YPPsym((P)"return"));
  lit_130 = YPPsym((P)"x-1202");
  lit_131 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_132 = YPPsym((P)"cond");
  lit_133 = YPPlist(1,YPPsym((P)"return"));
  lit_134 = YPPsym((P)"x-1204");
  lit_135 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_136 = YPsb((P)"bad case %=");
  T90 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1202_66 = YPfab_met(FUNCODEREF(fun_x_1202_66),T90,LITREF(lit_130),LITREF(lit_131),YPfalse,YPfalse);
  T89 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1204_67 = YPfab_met(FUNCODEREF(fun_x_1204_67),T89,LITREF(lit_134),LITREF(lit_135),YPfalse,YPfalse);
  T88 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPfab_met(FUNCODEREF(fun_68),T88,YPfalse,LITREF(lit_133),YPfalse,YPfalse);
  T87 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPfab_met(FUNCODEREF(fun_69),T87,YPfalse,LITREF(lit_129),YPfalse,YPfalse);
  T86 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPfab_met(FUNCODEREF(fun_70),T86,YPfalse,LITREF(lit_128),YPfalse,YPfalse);
  T91 = fun_70;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"cond"),T91);
  lit_137 = YPPsym((P)"do-case-by");
  lit_138 = YPPlist(3,YPPsym((P)"val"),YPPsym((P)"tst"),YPPsym((P)"cases"));
  lit_139 = YPPlist(1,YPPsym((P)"return"));
  lit_140 = YPPsym((P)"x-1210");
  lit_141 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_142 = YPsb((P)"bad case %=");
  lit_143 = YPPlist(1,YPPsym((P)"return"));
  lit_144 = YPPsym((P)"x-1212");
  lit_145 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_146 = YPsb((P)"bad case %=");
  lit_147 = YPPlist(1,YPPsym((P)"x"));
  T97 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1210_71 = YPfab_met(FUNCODEREF(fun_x_1210_71),T97,LITREF(lit_140),LITREF(lit_141),YPfalse,YPfalse);
  T96 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1212_72 = YPfab_met(FUNCODEREF(fun_x_1212_72),T96,LITREF(lit_144),LITREF(lit_145),YPfalse,YPfalse);
  T95 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPfab_met(FUNCODEREF(fun_73),T95,YPfalse,LITREF(lit_147),YPfalse,YPfalse);
  T94 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPfab_met(FUNCODEREF(fun_74),T94,YPfalse,LITREF(lit_143),YPfalse,YPfalse);
  T93 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPfab_met(FUNCODEREF(fun_75),T93,YPfalse,LITREF(lit_139),YPfalse,YPfalse);
  T92 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSmacrosYdo_case_by = YPfab_met(FUNCODEREF(YgooSmacrosYdo_case_by),T92,LITREF(lit_137),LITREF(lit_138),sloc(150),YPfalse);
  T98 = YgooSmacrosYdo_case_by;
  VARSET(YgooSmacrosYdo_case_by,T98);
  lit_148 = YPPlist(1,YPPsym((P)"exp"));
  lit_149 = YPPlist(1,YPPsym((P)"return"));
  lit_150 = YPPsym((P)"x-1216");
  lit_151 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_152 = YPPsym((P)"case-by");
  T101 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1216_77 = YPfab_met(FUNCODEREF(fun_x_1216_77),T101,LITREF(lit_150),LITREF(lit_151),YPfalse,YPfalse);
  T100 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPfab_met(FUNCODEREF(fun_78),T100,YPfalse,LITREF(lit_149),YPfalse,YPfalse);
  T99 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPfab_met(FUNCODEREF(fun_79),T99,YPfalse,LITREF(lit_148),YPfalse,YPfalse);
  T102 = fun_79;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case-by"),T102);
  lit_153 = YPPlist(1,YPPsym((P)"exp"));
  lit_154 = YPPlist(1,YPPsym((P)"return"));
  lit_155 = YPPsym((P)"x-1220");
  lit_156 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_157 = YPPsym((P)"case");
  lit_158 = YPPsym((P)"==");
  T105 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1220_80 = YPfab_met(FUNCODEREF(fun_x_1220_80),T105,LITREF(lit_155),LITREF(lit_156),YPfalse,YPfalse);
  T104 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPfab_met(FUNCODEREF(fun_81),T104,YPfalse,LITREF(lit_154),YPfalse,YPfalse);
  T103 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPfab_met(FUNCODEREF(fun_82),T103,YPfalse,LITREF(lit_153),YPfalse,YPfalse);
  T106 = fun_82;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case"),T106);
  lit_159 = YPPlist(1,YPPsym((P)"exp"));
  lit_160 = YPPlist(1,YPPsym((P)"return"));
  lit_161 = YPPsym((P)"x-1228");
  lit_162 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_163 = YPPsym((P)"match");
  lit_164 = YPPlist(1,YPPsym((P)"return"));
  lit_165 = YPPsym((P)"x-1230");
  lit_166 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_167 = YPPlist(1,YPPsym((P)"return"));
  lit_168 = YPPsym((P)"x-1232");
  lit_169 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_170 = YPsb((P)"invalid match syntax.");
  lit_171 = YPPsym((P)"mif");
  lit_172 = YPPsym((P)"syntax-error");
  lit_173 = YPsb((P)"failed to match.");
  T113 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1228_83 = YPfab_met(FUNCODEREF(fun_x_1228_83),T113,LITREF(lit_161),LITREF(lit_162),YPfalse,YPfalse);
  T112 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1232_84 = YPfab_met(FUNCODEREF(fun_x_1232_84),T112,LITREF(lit_168),LITREF(lit_169),YPfalse,YPfalse);
  T111 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPfab_met(FUNCODEREF(fun_85),T111,YPfalse,LITREF(lit_167),YPfalse,YPfalse);
  T110 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1230_86 = YPfab_met(FUNCODEREF(fun_x_1230_86),T110,LITREF(lit_165),LITREF(lit_166),YPfalse,YPfalse);
  T109 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPfab_met(FUNCODEREF(fun_87),T109,YPfalse,LITREF(lit_164),YPfalse,YPfalse);
  T108 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPfab_met(FUNCODEREF(fun_88),T108,YPfalse,LITREF(lit_160),YPfalse,YPfalse);
  T107 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPfab_met(FUNCODEREF(fun_89),T107,YPfalse,LITREF(lit_159),YPfalse,YPfalse);
  T114 = fun_89;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"match"),T114);
  lit_174 = YPPlist(1,YPPsym((P)"exp"));
  lit_175 = YPPlist(1,YPPsym((P)"return"));
  lit_176 = YPPsym((P)"x-1236");
  lit_177 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_178 = YPPsym((P)"assert");
  lit_179 = YPPsym((P)"assert-error");
  T117 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1236_90 = YPfab_met(FUNCODEREF(fun_x_1236_90),T117,LITREF(lit_176),LITREF(lit_177),YPfalse,YPfalse);
  T116 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPfab_met(FUNCODEREF(fun_91),T116,YPfalse,LITREF(lit_175),YPfalse,YPfalse);
  T115 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPfab_met(FUNCODEREF(fun_92),T115,YPfalse,LITREF(lit_174),YPfalse,YPfalse);
  T118 = fun_92;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"assert"),T118);
  lit_180 = YPPlist(1,YPPsym((P)"exp"));
  lit_181 = YPPlist(1,YPPsym((P)"return"));
  lit_182 = YPPsym((P)"x-1244");
  lit_183 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_184 = YPPsym((P)"for");
  lit_185 = YPPsym((P)"grok");
  lit_186 = YPPlist(5,YPPsym((P)"clauses"),YPPsym((P)"inits"),YPPsym((P)"preds"),YPPsym((P)"nows"),YPPsym((P)"nexts"));
  lit_187 = YPPsym((P)"rep");
  lit_188 = YPPlist(1,YPPsym((P)"return"));
  lit_189 = YPPsym((P)"x-1246");
  lit_190 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_191 = YPPsym((P)"enum");
  lit_192 = YPPsym((P)"fin?");
  lit_193 = YPPlist(1,YPPsym((P)"return"));
  lit_194 = YPPsym((P)"x-1248");
  lit_195 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_196 = YPPsym((P)"now");
  lit_197 = YPPsym((P)"now-key");
  lit_198 = YPPsym((P)"nxt");
  T126 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1244_93 = YPfab_met(FUNCODEREF(fun_x_1244_93),T126,LITREF(lit_182),LITREF(lit_183),YPfalse,YPfalse);
  T125 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1246_94 = YPfab_met(FUNCODEREF(fun_x_1246_94),T125,LITREF(lit_189),LITREF(lit_190),YPfalse,YPfalse);
  T124 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1248_95 = YPfab_met(FUNCODEREF(fun_x_1248_95),T124,LITREF(lit_194),LITREF(lit_195),YPfalse,YPfalse);
  T123 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPfab_met(FUNCODEREF(fun_96),T123,YPfalse,LITREF(lit_193),YPfalse,YPfalse);
  T122 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPfab_met(FUNCODEREF(fun_97),T122,YPfalse,LITREF(lit_188),YPfalse,YPfalse);
  T121 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_grok_98 = YPfab_met(FUNCODEREF(fun_grok_98),T121,LITREF(lit_185),LITREF(lit_186),sloc(188),YPfalse);
  T120 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_99 = YPfab_met(FUNCODEREF(fun_99),T120,YPfalse,LITREF(lit_181),YPfalse,YPfalse);
  T119 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPfab_met(FUNCODEREF(fun_100),T119,YPfalse,LITREF(lit_180),YPfalse,YPfalse);
  T127 = fun_100;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"for"),T127);
  lit_199 = YPPlist(1,YPPsym((P)"exp"));
  lit_200 = YPPlist(1,YPPsym((P)"return"));
  lit_201 = YPPsym((P)"x-1252");
  lit_202 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_203 = YPPsym((P)"while");
  lit_204 = YPPsym((P)"_loop");
  T130 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1252_101 = YPfab_met(FUNCODEREF(fun_x_1252_101),T130,LITREF(lit_201),LITREF(lit_202),YPfalse,YPfalse);
  T129 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPfab_met(FUNCODEREF(fun_102),T129,YPfalse,LITREF(lit_200),YPfalse,YPfalse);
  T128 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPfab_met(FUNCODEREF(fun_103),T128,YPfalse,LITREF(lit_199),YPfalse,YPfalse);
  T131 = fun_103;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"while"),T131);
  lit_205 = YPPlist(1,YPPsym((P)"exp"));
  lit_206 = YPPlist(1,YPPsym((P)"return"));
  lit_207 = YPPsym((P)"x-1256");
  lit_208 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_209 = YPPsym((P)"until");
  T134 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1256_104 = YPfab_met(FUNCODEREF(fun_x_1256_104),T134,LITREF(lit_207),LITREF(lit_208),YPfalse,YPfalse);
  T133 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPfab_met(FUNCODEREF(fun_105),T133,YPfalse,LITREF(lit_206),YPfalse,YPfalse);
  T132 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPfab_met(FUNCODEREF(fun_106),T132,YPfalse,LITREF(lit_205),YPfalse,YPfalse);
  T135 = fun_106;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"until"),T135);
  lit_210 = YPPlist(1,YPPsym((P)"exp"));
  lit_211 = YPPlist(1,YPPsym((P)"return"));
  lit_212 = YPPsym((P)"x-1266");
  lit_213 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_214 = YPPsym((P)"dlet");
  lit_215 = YPPlist(1,YPPsym((P)"return"));
  lit_216 = YPPsym((P)"x-1269");
  lit_217 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_218 = YPPlist(1,YPPsym((P)"return"));
  lit_219 = YPPsym((P)"x-1272");
  lit_220 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_221 = YPsb((P)"Bad dlet places %=");
  lit_222 = YPPsym((P)"fin");
  T142 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1266_107 = YPfab_met(FUNCODEREF(fun_x_1266_107),T142,LITREF(lit_212),LITREF(lit_213),YPfalse,YPfalse);
  T141 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1272_108 = YPfab_met(FUNCODEREF(fun_x_1272_108),T141,LITREF(lit_219),LITREF(lit_220),YPfalse,YPfalse);
  T140 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPfab_met(FUNCODEREF(fun_109),T140,YPfalse,LITREF(lit_218),YPfalse,YPfalse);
  T139 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1269_110 = YPfab_met(FUNCODEREF(fun_x_1269_110),T139,LITREF(lit_216),LITREF(lit_217),YPfalse,YPfalse);
  T138 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPfab_met(FUNCODEREF(fun_111),T138,YPfalse,LITREF(lit_215),YPfalse,YPfalse);
  T137 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPfab_met(FUNCODEREF(fun_112),T137,YPfalse,LITREF(lit_211),YPfalse,YPfalse);
  T136 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPfab_met(FUNCODEREF(fun_113),T136,YPfalse,LITREF(lit_210),YPfalse,YPfalse);
  T143 = fun_113;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"dlet"),T143);
  lit_223 = YPPlist(1,YPPsym((P)"exp"));
  lit_224 = YPPlist(1,YPPsym((P)"return"));
  lit_225 = YPPsym((P)"x-1276");
  lit_226 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_227 = YPPsym((P)"def-fun-var");
  lit_228 = YPsb((P)"*");
  lit_229 = YPsb((P)"*");
  lit_230 = YPPsym((P)"dv");
  lit_231 = YPPsym((P)"dm");
  lit_232 = YPPsym((P)"=>");
  lit_233 = YPPsym((P)"z");
  T146 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1276_114 = YPfab_met(FUNCODEREF(fun_x_1276_114),T146,LITREF(lit_225),LITREF(lit_226),YPfalse,YPfalse);
  T145 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPfab_met(FUNCODEREF(fun_115),T145,YPfalse,LITREF(lit_224),YPfalse,YPfalse);
  T144 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPfab_met(FUNCODEREF(fun_116),T144,YPfalse,LITREF(lit_223),YPfalse,YPfalse);
  T147 = fun_116;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"def-fun-var"),T147);
  lit_234 = YPPlist(1,YPPsym((P)"exp"));
  lit_235 = YPPlist(1,YPPsym((P)"return"));
  lit_236 = YPPsym((P)"x-1280");
  lit_237 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_238 = YPPsym((P)"without-prop-unbound-errors");
  lit_239 = YPPsym((P)"*report-prop-unbound-errors?*");
  T150 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1280_117 = YPfab_met(FUNCODEREF(fun_x_1280_117),T150,LITREF(lit_236),LITREF(lit_237),YPfalse,YPfalse);
  T149 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPfab_met(FUNCODEREF(fun_118),T149,YPfalse,LITREF(lit_235),YPfalse,YPfalse);
  T148 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPfab_met(FUNCODEREF(fun_119),T148,YPfalse,LITREF(lit_234),YPfalse,YPfalse);
  T151 = fun_119;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"without-prop-unbound-errors"),T151);
  lit_240 = YPPlist(1,YPPsym((P)"exp"));
  lit_241 = YPPlist(1,YPPsym((P)"return"));
  lit_242 = YPPsym((P)"x-1284");
  lit_243 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_244 = YPPsym((P)"need-implementation");
  lit_245 = YPPsym((P)"export");
  T154 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1284_120 = YPfab_met(FUNCODEREF(fun_x_1284_120),T154,LITREF(lit_242),LITREF(lit_243),YPfalse,YPfalse);
  T153 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPfab_met(FUNCODEREF(fun_121),T153,YPfalse,LITREF(lit_241),YPfalse,YPfalse);
  T152 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPfab_met(FUNCODEREF(fun_122),T152,YPfalse,LITREF(lit_240),YPfalse,YPfalse);
  T155 = fun_122;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"need-implementation"),T155);
  lit_246 = YPPlist(1,YPPsym((P)"exp"));
  lit_247 = YPPlist(1,YPPsym((P)"return"));
  lit_248 = YPPsym((P)"x-1312");
  lit_249 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_250 = YPPsym((P)"pub");
  lit_251 = YPPlist(1,YPPsym((P)"return"));
  lit_252 = YPPsym((P)"x-1315");
  lit_253 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_254 = YPPlist(1,YPPsym((P)"return"));
  lit_255 = YPPsym((P)"x-1318");
  lit_256 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_257 = YPPlist(1,YPPsym((P)"return"));
  lit_258 = YPPsym((P)"x-1321");
  lit_259 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_260 = YPPlist(1,YPPsym((P)"return"));
  lit_261 = YPPsym((P)"x-1324");
  lit_262 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_263 = YPPlist(1,YPPsym((P)"return"));
  lit_264 = YPPsym((P)"x-1327");
  lit_265 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_266 = YPPlist(1,YPPsym((P)"return"));
  lit_267 = YPPsym((P)"x-1330");
  lit_268 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_269 = YPPlist(1,YPPsym((P)"return"));
  lit_270 = YPPsym((P)"x-1333");
  lit_271 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_272 = YPPlist(1,YPPsym((P)"return"));
  lit_273 = YPPsym((P)"x-1336");
  lit_274 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_275 = YPPsym((P)"dc");
  lit_276 = YPPsym((P)"dg");
  lit_277 = YPPsym((P)"d.");
  lit_278 = YPPsym((P)"df");
  lit_279 = YPPsym((P)"dp!");
  lit_280 = YPPsym((P)"dp");
  T174 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1312_123 = YPfab_met(FUNCODEREF(fun_x_1312_123),T174,LITREF(lit_248),LITREF(lit_249),YPfalse,YPfalse);
  T173 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1336_124 = YPfab_met(FUNCODEREF(fun_x_1336_124),T173,LITREF(lit_273),LITREF(lit_274),YPfalse,YPfalse);
  T172 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_125 = YPfab_met(FUNCODEREF(fun_125),T172,YPfalse,LITREF(lit_272),YPfalse,YPfalse);
  T171 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1333_126 = YPfab_met(FUNCODEREF(fun_x_1333_126),T171,LITREF(lit_270),LITREF(lit_271),YPfalse,YPfalse);
  T170 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPfab_met(FUNCODEREF(fun_127),T170,YPfalse,LITREF(lit_269),YPfalse,YPfalse);
  T169 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1330_128 = YPfab_met(FUNCODEREF(fun_x_1330_128),T169,LITREF(lit_267),LITREF(lit_268),YPfalse,YPfalse);
  T168 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_129 = YPfab_met(FUNCODEREF(fun_129),T168,YPfalse,LITREF(lit_266),YPfalse,YPfalse);
  T167 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1327_130 = YPfab_met(FUNCODEREF(fun_x_1327_130),T167,LITREF(lit_264),LITREF(lit_265),YPfalse,YPfalse);
  T166 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_131 = YPfab_met(FUNCODEREF(fun_131),T166,YPfalse,LITREF(lit_263),YPfalse,YPfalse);
  T165 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1324_132 = YPfab_met(FUNCODEREF(fun_x_1324_132),T165,LITREF(lit_261),LITREF(lit_262),YPfalse,YPfalse);
  T164 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_133 = YPfab_met(FUNCODEREF(fun_133),T164,YPfalse,LITREF(lit_260),YPfalse,YPfalse);
  T163 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1321_134 = YPfab_met(FUNCODEREF(fun_x_1321_134),T163,LITREF(lit_258),LITREF(lit_259),YPfalse,YPfalse);
  T162 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPfab_met(FUNCODEREF(fun_135),T162,YPfalse,LITREF(lit_257),YPfalse,YPfalse);
  T161 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1318_136 = YPfab_met(FUNCODEREF(fun_x_1318_136),T161,LITREF(lit_255),LITREF(lit_256),YPfalse,YPfalse);
  T160 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_137 = YPfab_met(FUNCODEREF(fun_137),T160,YPfalse,LITREF(lit_254),YPfalse,YPfalse);
  T159 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1315_138 = YPfab_met(FUNCODEREF(fun_x_1315_138),T159,LITREF(lit_252),LITREF(lit_253),YPfalse,YPfalse);
  T158 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPfab_met(FUNCODEREF(fun_139),T158,YPfalse,LITREF(lit_251),YPfalse,YPfalse);
  T157 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_140 = YPfab_met(FUNCODEREF(fun_140),T157,YPfalse,LITREF(lit_247),YPfalse,YPfalse);
  T156 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPfab_met(FUNCODEREF(fun_141),T156,YPfalse,LITREF(lit_246),YPfalse,YPfalse);
  T175 = fun_141;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pub"),T175);
  lit_281 = YPPlist(1,YPPsym((P)"exp"));
  lit_282 = YPPlist(1,YPPsym((P)"return"));
  lit_283 = YPPsym((P)"x-1340");
  lit_284 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_285 = YPPsym((P)"exported");
  lit_286 = YPPlist(1,YPPsym((P)"x"));
  T179 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1340_142 = YPfab_met(FUNCODEREF(fun_x_1340_142),T179,LITREF(lit_283),LITREF(lit_284),YPfalse,YPfalse);
  T178 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_143 = YPfab_met(FUNCODEREF(fun_143),T178,YPfalse,LITREF(lit_286),YPfalse,YPfalse);
  T177 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_144 = YPfab_met(FUNCODEREF(fun_144),T177,YPfalse,LITREF(lit_282),YPfalse,YPfalse);
  T176 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_145 = YPfab_met(FUNCODEREF(fun_145),T176,YPfalse,LITREF(lit_281),YPfalse,YPfalse);
  T180 = fun_145;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"exported"),T180);
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
  T181 = YPfalse;
  return T181;
}

P YgooSmacrosY___main_1___() {
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
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@add-new", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"match-sublist", CVAR, &YgooSmacrosYmatch_sublist},
  {"swapf", PVAR, NULL},
  {"without-prop-unbound-errors", PVAR, NULL},
  {"until", PVAR, NULL},
  {"opf", PVAR, NULL},
  {"napp", CVAR, &YgooSmacrosYnapp},
  {"2nd", CVAR, &YgooSmacrosY2nd},
  {"nul?", CVAR, &YgooSmacrosYnulQ},
  {"1st", CVAR, &YgooSmacrosY1st},
  {"var-name", CVAR, &YgooSmacrosYvar_name},
  {"pushf", PVAR, NULL},
  {"cond", PVAR, NULL},
  {"and", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"for", PVAR, NULL},
  {"lift-place-subforms", CVAR, &YgooSmacrosYlift_place_subforms},
  {"sup", PVAR, NULL},
  {"while", PVAR, NULL},
  {"exported", PVAR, NULL},
  {"match-atom", CVAR, &YgooSmacrosYmatch_atom},
  {"def-fun-var", PVAR, NULL},
  {"popf", PVAR, NULL},
  {"map2", CVAR, &YgooSmacrosYmap2},
  {"---main-1---", PVAR, NULL},
  {"case-by", PVAR, NULL},
  {"renew", PVAR, NULL},
  {"rev!", CVAR, &YgooSmacrosYrevX},
  {"fab-setter-name", CVAR, &YgooSmacrosYfab_setter_name},
  {"macro-error", CVAR, &YgooSmacrosYmacro_error},
  {"match-nul-list", CVAR, &YgooSmacrosYmatch_nul_list},
  {"var-type", CVAR, &YgooSmacrosYvar_type},
  {"assert", PVAR, NULL},
  {"map", CVAR, &YgooSmacrosYmap},
  {"match-unquote", CVAR, &YgooSmacrosYmatch_unquote},
  {"pub", PVAR, NULL},
  {"decf", PVAR, NULL},
  {"gensym", CVAR, &YgooSmacrosYgensym},
  {"unless", PVAR, NULL},
  {"@checked-next-methods", CVAR, &YgooSmacrosYOchecked_next_methods},
  {"do", CVAR, &YgooSmacrosYdo},
  {"case", PVAR, NULL},
  {"pair", CVAR, &YgooSmacrosYpair},
  {"elt", CVAR, &YgooSmacrosYelt},
  {"need-implementation", PVAR, NULL},
  {"rotf", PVAR, NULL},
  {"cat-sym", CVAR, &YgooSmacrosYcat_sym},
  {"or/set", PVAR, NULL},
  {"match", PVAR, NULL},
  {"app-sup", PVAR, NULL},
  {"dlet", PVAR, NULL},
  {"incf", PVAR, NULL},
  {"when", PVAR, NULL},
  {"or", PVAR, NULL},
  {"==", CVAR, &YgooSmacrosYEE},
  {"cat", CVAR, &YgooSmacrosYcat},
  {"app", PVAR, NULL},
  {"do-case-by", CVAR, &YgooSmacrosYdo_case_by},
  {"last", CVAR, &YgooSmacrosYlast},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"match-sublist", NULL},
  {"swapf", NULL},
  {"without-prop-unbound-errors", NULL},
  {"until", NULL},
  {"error", NULL},
  {"opf", NULL},
  {"napp", NULL},
  {"2nd", NULL},
  {"nul?", NULL},
  {"==", NULL},
  {"1st", NULL},
  {"var-name", NULL},
  {"pushf", NULL},
  {"cond", NULL},
  {"for", NULL},
  {"lift-place-subforms", NULL},
  {"sup", NULL},
  {"while", NULL},
  {"exported", NULL},
  {"when", NULL},
  {"match-atom", NULL},
  {"tup", NULL},
  {"def-fun-var", NULL},
  {"popf", NULL},
  {"map2", NULL},
  {"case-by", NULL},
  {"renew", NULL},
  {"rev!", NULL},
  {"fab-setter-name", NULL},
  {"macro-error", NULL},
  {"assert", NULL},
  {"map", NULL},
  {"match-unquote", NULL},
  {"pub", NULL},
  {"decf", NULL},
  {"gensym", NULL},
  {"unless", NULL},
  {"@checked-next-methods", NULL},
  {"do", NULL},
  {"app", NULL},
  {"pair", NULL},
  {"elt", NULL},
  {"need-implementation", NULL},
  {"rotf", NULL},
  {"or", NULL},
  {"dlet", NULL},
  {"var-type", NULL},
  {"cat-sym", NULL},
  {"match-nul-list", NULL},
  {"or/set", NULL},
  {"app-sup", NULL},
  {"incf", NULL},
  {"and", NULL},
  {"case", NULL},
  {"cat", NULL},
  {"match", NULL},
  {"last", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSmacros;
MODULE_INFO module_info_gooSmacros = {
  "goo/macros",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);

/* EXPRESSION: */

extern void load_module_gooSmacros (void);

void load_module_gooSmacros (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();

  (P)YgooSmacrosY___main_0___();
  (P)YgooSmacrosY___main_1___();

}

/* END OF GENERATED CODE. */
