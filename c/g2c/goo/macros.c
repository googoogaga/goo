/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/macros");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/macros */

EXT(Ytup,"goo/boot","tup");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YOelt,"goo/boot","@elt");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(Yorder_specs,"goo/boot","order-specs");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yclass_id,"goo/boot","class-id");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YgooSmacrosYlast,"goo/macros","last");
EXT(Yerror,"goo/boot","error");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
DEF(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YOdo,"goo/boot","@do");
DEF(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YgooSmacrosY1st,"goo/macros","1st");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YOallQ,"goo/boot","@all?");
EXT(YtT,"goo/boot","t*");
EXT(YLcolG,"goo/boot","<col>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOpick,"goo/boot","@pick");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YPfalse,"goo/boot","%false");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YOmap,"goo/boot","@map");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YOlit,"goo/boot","@lit");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YOnew,"goo/boot","@new");
EXT(Yfun_info,"goo/boot","fun-info");
DEF(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YLintG,"goo/boot","<int>");
EXT(Ynot,"goo/boot","not");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YOtup,"goo/boot","@tup");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ynew,"goo/boot","new");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YLunionG,"goo/boot","<union>");
EXT(YOrev,"goo/boot","@rev");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfab_pair,"goo/boot","fab-pair");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ytail,"goo/boot","tail");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(Ybox_value,"goo/boot","box-value");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
DEF(YgooSmacrosYpair,"goo/macros","pair");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ynil,"goo/boot","nil");
EXT(Yprops_of,"goo/boot","props-of");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ylst,"goo/boot","lst");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YOfold,"goo/boot","@fold");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YisaQ,"goo/boot","isa?");
EXT(YPtrue,"goo/boot","%true");
EXT(YOlst,"goo/boot","@lst");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yhead,"goo/boot","head");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_mets,"goo/boot","fun-mets");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_230);
DEFLIT(lit_232);
DEFLIT(lit_274);
DEFLIT(lit_24);
DEFLIT(lit_83);
DEFLIT(lit_0);
DEFLIT(lit_177);
DEFLIT(lit_96);
DEFLIT(lit_7);
DEFLIT(lit_128);
DEFLIT(lit_45);
DEFLIT(lit_33);
DEFLIT(lit_10);
DEFLIT(lit_63);
DEFLIT(lit_242);
DEFLIT(lit_186);
DEFLIT(lit_67);
DEFLIT(lit_151);
DEFLIT(lit_163);
DEFLIT(lit_231);
DEFLIT(lit_139);
DEFLIT(lit_187);
DEFLIT(lit_282);
DEFLIT(lit_176);
DEFLIT(lit_152);
DEFLIT(lit_222);
DEFLIT(lit_14);
DEFLIT(lit_11);
DEFLIT(lit_133);
DEFLIT(lit_46);
DEFLIT(lit_261);
DEFLIT(lit_258);
DEFLIT(lit_198);
DEFLIT(lit_167);
DEFLIT(lit_9);
DEFLIT(lit_221);
DEFLIT(lit_158);
DEFLIT(lit_22);
DEFLIT(lit_18);
DEFLIT(lit_213);
DEFLIT(lit_28);
DEFLIT(lit_156);
DEFLIT(lit_216);
DEFLIT(lit_150);
DEFLIT(lit_102);
DEFLIT(lit_147);
DEFLIT(lit_105);
DEFLIT(lit_208);
DEFLIT(lit_269);
DEFLIT(lit_61);
DEFLIT(lit_259);
DEFLIT(lit_42);
DEFLIT(lit_115);
DEFLIT(lit_180);
DEFLIT(lit_202);
DEFLIT(lit_77);
DEFLIT(lit_197);
DEFLIT(lit_43);
DEFLIT(lit_161);
DEFLIT(lit_8);
DEFLIT(lit_109);
DEFLIT(lit_268);
DEFLIT(lit_227);
DEFLIT(lit_204);
DEFLIT(lit_137);
DEFLIT(lit_250);
DEFLIT(lit_200);
DEFLIT(lit_244);
DEFLIT(lit_118);
DEFLIT(lit_58);
DEFLIT(lit_271);
DEFLIT(lit_106);
DEFLIT(lit_64);
DEFLIT(lit_196);
DEFLIT(lit_54);
DEFLIT(lit_141);
DEFLIT(lit_92);
DEFLIT(lit_6);
DEFLIT(lit_170);
DEFLIT(lit_199);
DEFLIT(lit_114);
DEFLIT(lit_117);
DEFLIT(lit_123);
DEFLIT(lit_203);
DEFLIT(lit_134);
DEFLIT(lit_25);
DEFLIT(lit_41);
DEFLIT(lit_103);
DEFLIT(lit_15);
DEFLIT(lit_224);
DEFLIT(lit_131);
DEFLIT(lit_245);
DEFLIT(lit_279);
DEFLIT(lit_275);
DEFLIT(lit_5);
DEFLIT(lit_264);
DEFLIT(lit_185);
DEFLIT(lit_116);
DEFLIT(lit_32);
DEFLIT(lit_91);
DEFLIT(lit_173);
DEFLIT(lit_283);
DEFLIT(lit_247);
DEFLIT(lit_220);
DEFLIT(lit_190);
DEFLIT(lit_225);
DEFLIT(lit_112);
DEFLIT(lit_138);
DEFLIT(lit_21);
DEFLIT(lit_80);
DEFLIT(lit_51);
DEFLIT(lit_159);
DEFLIT(lit_162);
DEFLIT(lit_94);
DEFLIT(lit_212);
DEFLIT(lit_239);
DEFLIT(lit_194);
DEFLIT(lit_52);
DEFLIT(lit_34);
DEFLIT(lit_31);
DEFLIT(lit_193);
DEFLIT(lit_62);
DEFLIT(lit_60);
DEFLIT(lit_87);
DEFLIT(lit_93);
DEFLIT(lit_49);
DEFLIT(lit_272);
DEFLIT(lit_201);
DEFLIT(lit_126);
DEFLIT(lit_39);
DEFLIT(lit_205);
DEFLIT(lit_79);
DEFLIT(lit_70);
DEFLIT(lit_20);
DEFLIT(lit_82);
DEFLIT(lit_277);
DEFLIT(lit_88);
DEFLIT(lit_267);
DEFLIT(lit_189);
DEFLIT(lit_215);
DEFLIT(lit_53);
DEFLIT(lit_89);
DEFLIT(lit_4);
DEFLIT(lit_59);
DEFLIT(lit_233);
DEFLIT(lit_211);
DEFLIT(lit_3);
DEFLIT(lit_154);
DEFLIT(lit_241);
DEFLIT(lit_192);
DEFLIT(lit_142);
DEFLIT(lit_19);
DEFLIT(lit_78);
DEFLIT(lit_257);
DEFLIT(lit_276);
DEFLIT(lit_175);
DEFLIT(lit_113);
DEFLIT(lit_238);
DEFLIT(lit_145);
DEFLIT(lit_75);
DEFLIT(lit_36);
DEFLIT(lit_182);
DEFLIT(lit_29);
DEFLIT(lit_286);
DEFLIT(lit_278);
DEFLIT(lit_260);
DEFLIT(lit_266);
DEFLIT(lit_66);
DEFLIT(lit_228);
DEFLIT(lit_217);
DEFLIT(lit_226);
DEFLIT(lit_50);
DEFLIT(lit_172);
DEFLIT(lit_27);
DEFLIT(lit_68);
DEFLIT(lit_252);
DEFLIT(lit_40);
DEFLIT(lit_56);
DEFLIT(lit_120);
DEFLIT(lit_191);
DEFLIT(lit_127);
DEFLIT(lit_146);
DEFLIT(lit_129);
DEFLIT(lit_157);
DEFLIT(lit_166);
DEFLIT(lit_160);
DEFLIT(lit_57);
DEFLIT(lit_99);
DEFLIT(lit_253);
DEFLIT(lit_149);
DEFLIT(lit_48);
DEFLIT(lit_111);
DEFLIT(lit_100);
DEFLIT(lit_256);
DEFLIT(lit_76);
DEFLIT(lit_71);
DEFLIT(lit_248);
DEFLIT(lit_90);
DEFLIT(lit_236);
DEFLIT(lit_206);
DEFLIT(lit_234);
DEFLIT(lit_210);
DEFLIT(lit_107);
DEFLIT(lit_246);
DEFLIT(lit_240);
DEFLIT(lit_188);
DEFLIT(lit_144);
DEFLIT(lit_169);
DEFLIT(lit_121);
DEFLIT(lit_98);
DEFLIT(lit_174);
DEFLIT(lit_69);
DEFLIT(lit_243);
DEFLIT(lit_209);
DEFLIT(lit_132);
DEFLIT(lit_155);
DEFLIT(lit_37);
DEFLIT(lit_38);
DEFLIT(lit_255);
DEFLIT(lit_135);
DEFLIT(lit_184);
DEFLIT(lit_47);
DEFLIT(lit_273);
DEFLIT(lit_285);
DEFLIT(lit_265);
DEFLIT(lit_1);
DEFLIT(lit_168);
DEFLIT(lit_97);
DEFLIT(lit_237);
DEFLIT(lit_281);
DEFLIT(lit_23);
DEFLIT(lit_81);
DEFLIT(lit_183);
DEFLIT(lit_30);
DEFLIT(lit_125);
DEFLIT(lit_104);
DEFLIT(lit_171);
DEFLIT(lit_108);
DEFLIT(lit_86);
DEFLIT(lit_280);
DEFLIT(lit_44);
DEFLIT(lit_181);
DEFLIT(lit_2);
DEFLIT(lit_153);
DEFLIT(lit_262);
DEFLIT(lit_229);
DEFLIT(lit_119);
DEFLIT(lit_110);
DEFLIT(lit_195);
DEFLIT(lit_16);
DEFLIT(lit_263);
DEFLIT(lit_101);
DEFLIT(lit_143);
DEFLIT(lit_207);
DEFLIT(lit_140);
DEFLIT(lit_130);
DEFLIT(lit_179);
DEFLIT(lit_35);
DEFLIT(lit_26);
DEFLIT(lit_85);
DEFLIT(lit_284);
DEFLIT(lit_270);
DEFLIT(lit_148);
DEFLIT(lit_74);
DEFLIT(lit_124);
DEFLIT(lit_254);
DEFLIT(lit_84);
DEFLIT(lit_136);
DEFLIT(lit_95);
DEFLIT(lit_13);
DEFLIT(lit_65);
DEFLIT(lit_72);
DEFLIT(lit_214);
DEFLIT(lit_55);
DEFLIT(lit_73);
DEFLIT(lit_17);
DEFLIT(lit_249);
DEFLIT(lit_223);
DEFLIT(lit_178);
DEFLIT(lit_165);
DEFLIT(lit_164);
DEFLIT(lit_122);
DEFLIT(lit_218);
DEFLIT(lit_219);
DEFLIT(lit_251);
DEFLIT(lit_235);
DEFLIT(lit_12);

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
  P x_1111F2094;
  P x_1111F2093;
  P x_1111F2092;
  P x_1111F2091;
  P argsF2090;
  P x_1111F2089;
  P x_1112F2088;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(return_, 0);
  T41 = FUNSHELL(0,fun_x_1112_1,2);
  x_1112F2088 = T41;
  FUNINIT(x_1112F2088, 2,FREEREF(0),return_);
  x_1111F2089 = FREEREF(0);
  argsF2090 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1111F2089,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1111F2089,LITREF(lit_6),x_1112F2088);
    x_1111F2091 = T6;
    argsF2090 = x_1111F2091;
    x_1111F2092 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1111F2092,x_1112F2088);
    x_1111F2093 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1111F2093,x_1112F2088);
    T5 = CALL1(1,VARREF(Ytail),x_1111F2092);
    x_1111F2094 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1111F2094,x_1112F2088);
  } else {
    T7 = CALL2(1,x_1112F2088,LITREF(lit_7),x_1111F2089);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_0));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = CALL2(1,VARREF(YgooSmacrosYcat),T20,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T24 = argsF2090;
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T21,T24,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_11));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,LITREF(lit_11));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T36 = argsF2090;
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_16));
  T40 = CALL1(1,VARREF(Ylst),Ynil);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T26 = CALLN(1,VARREF(YgooSmacrosYcat),6,T27,T28,T32,T36,T37,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T25,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
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
  P x_1115F2101;
  P x_1115F2100;
  P x_1115F2099;
  P x_1115F2098;
  P argsF2097;
  P x_1115F2096;
  P x_1116F2095;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(return_, 0);
  T37 = FUNSHELL(0,fun_x_1116_4,2);
  x_1116F2095 = T37;
  FUNINIT(x_1116F2095, 2,FREEREF(0),return_);
  x_1115F2096 = FREEREF(0);
  argsF2097 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1115F2096,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1115F2096,LITREF(lit_21),x_1116F2095);
    x_1115F2098 = T6;
    argsF2097 = x_1115F2098;
    x_1115F2099 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1115F2099,x_1116F2095);
    x_1115F2100 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1115F2100,x_1116F2095);
    T5 = CALL1(1,VARREF(Ytail),x_1115F2099);
    x_1115F2101 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1115F2101,x_1116F2095);
  } else {
    T7 = CALL2(1,x_1116F2095,LITREF(lit_7),x_1115F2096);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_0));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T19 = CALL2(1,VARREF(YgooSmacrosYcat),T20,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T24 = argsF2097;
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T21,T24,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_11));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,LITREF(lit_11));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,LITREF(lit_11));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T36 = argsF2097;
  T26 = CALL5(1,VARREF(YgooSmacrosYcat),T27,T28,T32,T36,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T25,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
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
  P x_1119F2110;
  P x_1119F2109;
  P x_1119F2108;
  P x_1119F2107;
  P x_1119F2106;
  P argsF2105;
  P fF2104;
  P x_1119F2103;
  P x_1120F2102;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(return_, 0);
  T17 = FUNSHELL(0,fun_x_1120_7,2);
  x_1120F2102 = T17;
  FUNINIT(x_1120F2102, 2,FREEREF(0),return_);
  x_1119F2103 = FREEREF(0);
  fF2104 = YPfalse;
  argsF2105 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1119F2103,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1119F2103,LITREF(lit_26),x_1120F2102);
    x_1119F2106 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F2106,x_1120F2102);
    fF2104 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1119F2106);
    x_1119F2107 = T8;
    argsF2105 = x_1119F2107;
    x_1119F2108 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1119F2108,x_1120F2102);
    x_1119F2109 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1119F2109,x_1120F2102);
    T6 = CALL1(1,VARREF(Ytail),x_1119F2108);
    x_1119F2110 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1119F2110,x_1120F2102);
  } else {
    T10 = CALL2(1,x_1120F2102,LITREF(lit_7),x_1119F2103);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T14 = fF2104;
  T13 = CALL1(1,VARREF(Ylst),T14);
  T15 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = argsF2105;
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T15,T16,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P setsF2124;
  P valF2123;
  P initsF2122;
  P setsF2121;
  P varF2120;
  P x_1123F2119;
  P x_1123F2118;
  P x_1123F2117;
  P x_1123F2116;
  P x_1123F2115;
  P prop_initsF2114;
  P xF2113;
  P x_1123F2112;
  P x_1124F2111;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
LINK_STACK();
  ARG(return_, 0);
  T40 = FUNSHELL(0,fun_x_1124_10,2);
  x_1124F2111 = T40;
  FUNINIT(x_1124F2111, 2,FREEREF(0),return_);
  x_1123F2112 = FREEREF(0);
  xF2113 = YPfalse;
  prop_initsF2114 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1123F2112,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1123F2112,LITREF(lit_31),x_1124F2111);
    x_1123F2115 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F2115,x_1124F2111);
    xF2113 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1123F2115);
    x_1123F2116 = T8;
    prop_initsF2114 = x_1123F2116;
    x_1123F2117 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1123F2117,x_1124F2111);
    x_1123F2118 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1123F2118,x_1124F2111);
    T6 = CALL1(1,VARREF(Ytail),x_1123F2117);
    x_1123F2119 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1123F2119,x_1124F2111);
  } else {
    T10 = CALL2(1,x_1124F2111,LITREF(lit_7),x_1123F2112);
  }
  T39 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF2120 = T39;
  setsF2121 = Ynil;
  T38 = prop_initsF2114;
  initsF2122 = T38;
  LOOP_49: {
    P a49_0,a49_1;
    T22 = CALL1(1,VARREF(YgooSmacrosYnulQ),initsF2122);
    if (T22 != YPfalse) {
      T23 = CALL1(1,VARREF(YgooSmacrosYrevX),setsF2121);
      T21 = T23;
    } else {
      T37 = CALL1(1,VARREF(Ytail),initsF2122);
      T36 = CALL1(1,VARREF(Yhead),T37);
      valF2123 = T36;
      T27 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
      T31 = CALL1(1,VARREF(Yhead),initsF2122);
      T30 = CALL1(1,VARREF(Ylst),T31);
      T32 = CALL1(1,VARREF(Ylst),varF2120);
      T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T32,LITREF(lit_11));
      T28 = CALL1(1,VARREF(Ylst),T29);
      T33 = CALL1(1,VARREF(Ylst),valF2123);
      T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T33,LITREF(lit_11));
      T25 = CALL2(1,VARREF(YgooSmacrosYpair),T26,setsF2121);
      T35 = CALL1(1,VARREF(Ytail),initsF2122);
      T34 = CALL1(1,VARREF(Ytail),T35);
      a49_0 = T25;
      a49_1 = T34;
      setsF2121 = a49_0;
      initsF2122 = a49_1;
      goto LOOP_49;
      T21 = T24;
    }
  }
  setsF2124 = T21;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T17 = CALL1(1,VARREF(Ylst),varF2120);
  T19 = xF2113;
  T18 = CALL1(1,VARREF(Ylst),T19);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T20 = CALL1(1,VARREF(Ylst),varF2120);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,setsF2124,T20,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P gF2129;
  P subformF2128;
  P g_argsF2127;
  P g_declsF2126;
  P tup3F2125;
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
    tup3F2125 = T17;
    T16 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F2125,YPint((P)0));
    g_declsF2126 = T16;
    T15 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F2125,YPint((P)1));
    g_argsF2127 = T15;
    T14 = CALL1(1,VARREF(Yhead),subforms_);
    subformF2128 = T14;
    T4 = CALL2(1,VARREF(YisaQ),subformF2128,VARREF(YLlstG));
    if (T4 != YPfalse) {
      T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
      gF2129 = T11;
      T8 = CALL1(1,VARREF(Ylst),gF2129);
      T9 = CALL1(1,VARREF(Ylst),subformF2128);
      T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,LITREF(lit_11));
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,g_declsF2126);
      T10 = CALL2(1,VARREF(YgooSmacrosYpair),gF2129,g_argsF2127);
      T5 = CALL2(1,VARREF(Ytup),T6,T10);
      T3 = T5;
    } else {
      T13 = CALL2(1,VARREF(YgooSmacrosYpair),subformF2128,g_argsF2127);
      T12 = CALL2(1,VARREF(Ytup),g_declsF2126,T13);
      T3 = T12;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmacrosYlift_place_subforms) {
  P place_;
  P g_argsF2133;
  P g_declsF2132;
  P tup4F2131;
  P munchF2130;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(place_, 0);
  T11 = FUNSHELL(1,fun_munch_13,1);
  munchF2130 = T11;
  FUNINIT(munchF2130, 1,munchF2130);
  T1 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T0 = T2;
  } else {
    T10 = CALL1(1,VARREF(Ytail),place_);
    T9 = CALL1(1,munchF2130,T10);
    tup4F2131 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F2131,YPint((P)0));
    g_declsF2132 = T8;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F2131,YPint((P)1));
    g_argsF2133 = T7;
    T6 = CALL1(1,VARREF(Yhead),place_);
    T5 = CALL1(1,VARREF(Ylst),T6);
    T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,g_argsF2133,LITREF(lit_11));
    T3 = CALL2(1,VARREF(Ytup),g_declsF2132,T4);
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
  P x_1131F2139;
  P x_1131F2138;
  P x_1131F2137;
  P amountF2136;
  P x_1131F2135;
  P x_1132F2134;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(return_, 0);
  T11 = FUNSHELL(0,fun_x_1132_16,1);
  x_1132F2134 = T11;
  FUNINIT(x_1132F2134, 1,return_);
  T10 = BOXGET(FREEREF(0));
  x_1131F2135 = T10;
  amountF2136 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1131F2135,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1131F2135,x_1132F2134);
    amountF2136 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1131F2135);
    x_1131F2137 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1131F2137,x_1132F2134);
    x_1131F2138 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1131F2138,x_1132F2134);
    T5 = CALL1(1,VARREF(Ytail),x_1131F2137);
    x_1131F2139 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1131F2139,x_1132F2134);
  } else {
    T8 = CALL2(1,x_1132F2134,LITREF(lit_7),x_1131F2135);
  }
  T9 = amountF2136;
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_18) {
  P return_;
  P amountF2152;
  P g_placeF2151;
  P g_declsF2150;
  P tup6F2149;
  P x_1129F2148;
  P x_1129F2147;
  P x_1129F2146;
  P x_1129F2145;
  P x_1129F2144;
  P amountF2143;
  P placeF2142;
  P x_1129F2141;
  P x_1130F2140;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(return_, 0);
  T30 = FUNSHELL(0,fun_x_1130_15,2);
  x_1130F2140 = T30;
  FUNINIT(x_1130F2140, 2,FREEREF(0),return_);
  x_1129F2141 = FREEREF(0);
  placeF2142 = YPfalse;
  amountF2143 = YPfalse;
  amountF2143 = BOXFAB(amountF2143);
  T2 = CALL2(1,VARREF(YisaQ),x_1129F2141,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1129F2141,LITREF(lit_41),x_1130F2140);
    x_1129F2144 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1129F2144,x_1130F2140);
    placeF2142 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1129F2144);
    x_1129F2145 = T8;
    BOXPUT(x_1129F2145,amountF2143);
    x_1129F2146 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1129F2146,x_1130F2140);
    x_1129F2147 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1129F2147,x_1130F2140);
    T6 = CALL1(1,VARREF(Ytail),x_1129F2146);
    x_1129F2148 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1129F2148,x_1130F2140);
  } else {
    T10 = CALL2(1,x_1130F2140,LITREF(lit_7),x_1129F2141);
  }
  T29 = placeF2142;
  T28 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T29);
  tup6F2149 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F2149,YPint((P)0));
  g_declsF2150 = T27;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F2149,YPint((P)1));
  g_placeF2151 = T26;
  T25 = FUNFAB(fun_17,1,amountF2143);
  T24 = with_exit(T25);
  amountF2152 = T24;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF2150,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T18 = CALL1(1,VARREF(Ylst),g_placeF2151);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_45));
  T22 = CALL1(1,VARREF(Ylst),g_placeF2151);
  T23 = CALL1(1,VARREF(Ylst),amountF2152);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T23,LITREF(lit_11));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T19,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T15,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P x_1139F2158;
  P x_1139F2157;
  P x_1139F2156;
  P amountF2155;
  P x_1139F2154;
  P x_1140F2153;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(return_, 0);
  T11 = FUNSHELL(0,fun_x_1140_21,1);
  x_1140F2153 = T11;
  FUNINIT(x_1140F2153, 1,return_);
  T10 = BOXGET(FREEREF(0));
  x_1139F2154 = T10;
  amountF2155 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1139F2154,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1139F2154,x_1140F2153);
    amountF2155 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1139F2154);
    x_1139F2156 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1139F2156,x_1140F2153);
    x_1139F2157 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1139F2157,x_1140F2153);
    T5 = CALL1(1,VARREF(Ytail),x_1139F2156);
    x_1139F2158 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1139F2158,x_1140F2153);
  } else {
    T8 = CALL2(1,x_1140F2153,LITREF(lit_7),x_1139F2154);
  }
  T9 = amountF2155;
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_23) {
  P return_;
  P amountF2171;
  P g_placeF2170;
  P g_declsF2169;
  P tup8F2168;
  P x_1137F2167;
  P x_1137F2166;
  P x_1137F2165;
  P x_1137F2164;
  P x_1137F2163;
  P amountF2162;
  P placeF2161;
  P x_1137F2160;
  P x_1138F2159;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(return_, 0);
  T30 = FUNSHELL(0,fun_x_1138_20,2);
  x_1138F2159 = T30;
  FUNINIT(x_1138F2159, 2,FREEREF(0),return_);
  x_1137F2160 = FREEREF(0);
  placeF2161 = YPfalse;
  amountF2162 = YPfalse;
  amountF2162 = BOXFAB(amountF2162);
  T2 = CALL2(1,VARREF(YisaQ),x_1137F2160,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1137F2160,LITREF(lit_50),x_1138F2159);
    x_1137F2163 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1137F2163,x_1138F2159);
    placeF2161 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1137F2163);
    x_1137F2164 = T8;
    BOXPUT(x_1137F2164,amountF2162);
    x_1137F2165 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1137F2165,x_1138F2159);
    x_1137F2166 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1137F2166,x_1138F2159);
    T6 = CALL1(1,VARREF(Ytail),x_1137F2165);
    x_1137F2167 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1137F2167,x_1138F2159);
  } else {
    T10 = CALL2(1,x_1138F2159,LITREF(lit_7),x_1137F2160);
  }
  T29 = placeF2161;
  T28 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T29);
  tup8F2168 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F2168,YPint((P)0));
  g_declsF2169 = T27;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F2168,YPint((P)1));
  g_placeF2170 = T26;
  T25 = FUNFAB(fun_22,1,amountF2162);
  T24 = with_exit(T25);
  amountF2171 = T24;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF2169,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T18 = CALL1(1,VARREF(Ylst),g_placeF2170);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T22 = CALL1(1,VARREF(Ylst),g_placeF2170);
  T23 = CALL1(1,VARREF(Ylst),amountF2171);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T23,LITREF(lit_11));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T19,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T15,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P g_placeF2183;
  P g_declsF2182;
  P tup10F2181;
  P x_1143F2180;
  P x_1143F2179;
  P x_1143F2178;
  P x_1143F2177;
  P x_1143F2176;
  P valueF2175;
  P placeF2174;
  P x_1143F2173;
  P x_1144F2172;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(return_, 0);
  T31 = FUNSHELL(0,fun_x_1144_25,2);
  x_1144F2172 = T31;
  FUNINIT(x_1144F2172, 2,FREEREF(0),return_);
  x_1143F2173 = FREEREF(0);
  placeF2174 = YPfalse;
  valueF2175 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1143F2173,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1143F2173,LITREF(lit_59),x_1144F2172);
    x_1143F2176 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1143F2176,x_1144F2172);
    placeF2174 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1143F2176);
    x_1143F2177 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1143F2177,x_1144F2172);
    valueF2175 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1143F2177);
    x_1143F2178 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1143F2178,x_1144F2172);
    x_1143F2179 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1143F2179,x_1144F2172);
    T6 = CALL1(1,VARREF(Ytail),x_1143F2178);
    x_1143F2180 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1143F2180,x_1144F2172);
  } else {
    T12 = CALL2(1,x_1144F2172,LITREF(lit_7),x_1143F2173);
  }
  T30 = placeF2174;
  T29 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T30);
  tup10F2181 = T29;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F2181,YPint((P)0));
  g_declsF2182 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F2181,YPint((P)1));
  g_placeF2183 = T27;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T16 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF2182,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T20 = CALL1(1,VARREF(Ylst),g_placeF2183);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T24 = CALL1(1,VARREF(Ylst),g_placeF2183);
  T26 = valueF2175;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T25,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T21,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_11));
UNLINK_STACK();
  QRET(T13);
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
  P tmpF2199;
  P yg_placeF2198;
  P yg_declsF2197;
  P tup14F2196;
  P xg_placeF2195;
  P xg_declsF2194;
  P tup13F2193;
  P x_1147F2192;
  P x_1147F2191;
  P x_1147F2190;
  P x_1147F2189;
  P x_1147F2188;
  P yF2187;
  P xF2186;
  P x_1147F2185;
  P x_1148F2184;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
LINK_STACK();
  ARG(return_, 0);
  T40 = FUNSHELL(0,fun_x_1148_28,2);
  x_1148F2184 = T40;
  FUNINIT(x_1148F2184, 2,FREEREF(0),return_);
  x_1147F2185 = FREEREF(0);
  xF2186 = YPfalse;
  yF2187 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1147F2185,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1147F2185,LITREF(lit_65),x_1148F2184);
    x_1147F2188 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1147F2188,x_1148F2184);
    xF2186 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1147F2188);
    x_1147F2189 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1147F2189,x_1148F2184);
    yF2187 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1147F2189);
    x_1147F2190 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1147F2190,x_1148F2184);
    x_1147F2191 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1147F2191,x_1148F2184);
    T6 = CALL1(1,VARREF(Ytail),x_1147F2190);
    x_1147F2192 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1147F2192,x_1148F2184);
  } else {
    T12 = CALL2(1,x_1148F2184,LITREF(lit_7),x_1147F2185);
  }
  T39 = xF2186;
  T38 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T39);
  tup13F2193 = T38;
  T37 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F2193,YPint((P)0));
  xg_declsF2194 = T37;
  T36 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F2193,YPint((P)1));
  xg_placeF2195 = T36;
  T35 = yF2187;
  T34 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T35);
  tup14F2196 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F2196,YPint((P)0));
  yg_declsF2197 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F2196,YPint((P)1));
  yg_placeF2198 = T32;
  T31 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF2199 = T31;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T19 = CALL1(1,VARREF(Ylst),tmpF2199);
  T20 = CALL1(1,VARREF(Ylst),xg_placeF2195);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF2194,yg_declsF2197,T17,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T24 = CALL1(1,VARREF(Ylst),xg_placeF2195);
  T25 = CALL1(1,VARREF(Ylst),yg_placeF2198);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T25,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T29 = CALL1(1,VARREF(Ylst),yg_placeF2198);
  T30 = CALL1(1,VARREF(Ylst),tmpF2199);
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,LITREF(lit_11));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T13 = CALL5(1,VARREF(YgooSmacrosYcat),T14,T15,T21,T26,LITREF(lit_11));
UNLINK_STACK();
  QRET(T13);
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
  P placesF2215;
  P declsF2214;
  P psF2213;
  P tmpsF2212;
  P placesF2211;
  P x_1151F2210;
  P x_1151F2209;
  P x_1151F2208;
  P x_1151F2207;
  P x_1151F2206;
  P x_1151F2205;
  P zsF2204;
  P yF2203;
  P xF2202;
  P x_1151F2201;
  P x_1152F2200;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(return_, 0);
  T42 = FUNSHELL(0,fun_x_1152_31,2);
  x_1152F2200 = T42;
  FUNINIT(x_1152F2200, 2,FREEREF(0),return_);
  x_1151F2201 = FREEREF(0);
  xF2202 = YPfalse;
  yF2203 = YPfalse;
  zsF2204 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1151F2201,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1151F2201,LITREF(lit_70),x_1152F2200);
    x_1151F2205 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1151F2205,x_1152F2200);
    xF2202 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1151F2205);
    x_1151F2206 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1151F2206,x_1152F2200);
    yF2203 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1151F2206);
    x_1151F2207 = T9;
    zsF2204 = x_1151F2207;
    x_1151F2208 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1151F2208,x_1152F2200);
    x_1151F2209 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1151F2209,x_1152F2200);
    T7 = CALL1(1,VARREF(Ytail),x_1151F2208);
    x_1151F2210 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1151F2210,x_1152F2200);
  } else {
    T13 = CALL2(1,x_1152F2200,LITREF(lit_7),x_1151F2201);
  }
  T38 = xF2202;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = yF2203;
  T39 = CALL1(1,VARREF(Ylst),T40);
  T41 = zsF2204;
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T39,T41,LITREF(lit_11));
  placesF2211 = T36;
  T35 = fun_32;
  T34 = CALL2(1,VARREF(YgooSmacrosYmap),T35,placesF2211);
  tmpsF2212 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosYlift_place_subforms),placesF2211);
  psF2213 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY1st),psF2213);
  declsF2214 = T32;
  T31 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY2nd),psF2213);
  placesF2215 = T31;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T18 = CALL3(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmacrosYcat),YPfalse,declsF2214);
  T20 = fun_33;
  T19 = CALL3(1,VARREF(YgooSmacrosYmap2),T20,tmpsF2212,placesF2215);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T19,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T22 = fun_34;
  T23 = CALL1(1,VARREF(Ytail),tmpsF2212);
  T21 = CALL3(1,VARREF(YgooSmacrosYmap2),T22,placesF2215,T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T28 = CALL1(1,VARREF(YgooSmacrosYlast),placesF2215);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T30 = CALL1(1,VARREF(YgooSmacrosY1st),tmpsF2212);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T29,LITREF(lit_11));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T14 = CALL5(1,VARREF(YgooSmacrosYcat),T15,T16,T21,T24,LITREF(lit_11));
UNLINK_STACK();
  QRET(T14);
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
  P valF2227;
  P new_colF2226;
  P g_placeF2225;
  P g_declsF2224;
  P tup16F2223;
  P x_1155F2222;
  P x_1155F2221;
  P x_1155F2220;
  P x_1155F2219;
  P placeF2218;
  P x_1155F2217;
  P x_1156F2216;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(return_, 0);
  T37 = FUNSHELL(0,fun_x_1156_37,2);
  x_1156F2216 = T37;
  FUNINIT(x_1156F2216, 2,FREEREF(0),return_);
  x_1155F2217 = FREEREF(0);
  placeF2218 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1155F2217,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1155F2217,LITREF(lit_78),x_1156F2216);
    x_1155F2219 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1155F2219,x_1156F2216);
    placeF2218 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1155F2219);
    x_1155F2220 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1155F2220,x_1156F2216);
    x_1155F2221 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1155F2221,x_1156F2216);
    T5 = CALL1(1,VARREF(Ytail),x_1155F2220);
    x_1155F2222 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1155F2222,x_1156F2216);
  } else {
    T9 = CALL2(1,x_1156F2216,LITREF(lit_7),x_1155F2217);
  }
  T36 = placeF2218;
  T35 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T36);
  tup16F2223 = T35;
  T34 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F2223,YPint((P)0));
  g_declsF2224 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F2223,YPint((P)1));
  g_placeF2225 = T33;
  T32 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF2226 = T32;
  T31 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF2227 = T31;
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T19 = CALL1(1,VARREF(Ylst),new_colF2226);
  T20 = CALL1(1,VARREF(Ylst),valF2227);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T24 = CALL1(1,VARREF(Ylst),g_placeF2225);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T21,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF2224,T14,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T28 = CALL1(1,VARREF(Ylst),g_placeF2225);
  T29 = CALL1(1,VARREF(Ylst),new_colF2226);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T29,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T30 = CALL1(1,VARREF(Ylst),valF2227);
  T10 = CALL5(1,VARREF(YgooSmacrosYcat),T11,T12,T25,T30,LITREF(lit_11));
UNLINK_STACK();
  QRET(T10);
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
  P g_placeF2239;
  P g_declsF2238;
  P tup18F2237;
  P x_1159F2236;
  P x_1159F2235;
  P x_1159F2234;
  P x_1159F2233;
  P x_1159F2232;
  P callF2231;
  P placeF2230;
  P x_1159F2229;
  P x_1160F2228;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(return_, 0);
  T31 = FUNSHELL(0,fun_x_1160_40,2);
  x_1160F2228 = T31;
  FUNINIT(x_1160F2228, 2,FREEREF(0),return_);
  x_1159F2229 = FREEREF(0);
  placeF2230 = YPfalse;
  callF2231 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1159F2229,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1159F2229,LITREF(lit_85),x_1160F2228);
    x_1159F2232 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1159F2232,x_1160F2228);
    placeF2230 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1159F2232);
    x_1159F2233 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1159F2233,x_1160F2228);
    callF2231 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1159F2233);
    x_1159F2234 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1159F2234,x_1160F2228);
    x_1159F2235 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1159F2235,x_1160F2228);
    T6 = CALL1(1,VARREF(Ytail),x_1159F2234);
    x_1159F2236 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1159F2236,x_1160F2228);
  } else {
    T12 = CALL2(1,x_1160F2228,LITREF(lit_7),x_1159F2229);
  }
  T30 = placeF2230;
  T29 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T30);
  tup18F2237 = T29;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F2237,YPint((P)0));
  g_declsF2238 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F2237,YPint((P)1));
  g_placeF2239 = T27;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T20 = CALL1(1,VARREF(Ylst),g_placeF2239);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF2238,T17,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T24 = CALL1(1,VARREF(Ylst),g_placeF2239);
  T26 = callF2231;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T25,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T21,LITREF(lit_11));
UNLINK_STACK();
  QRET(T13);
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
  P g_placeF2251;
  P g_declsF2250;
  P tup20F2249;
  P x_1163F2248;
  P x_1163F2247;
  P x_1163F2246;
  P x_1163F2245;
  P x_1163F2244;
  P valueF2243;
  P placeF2242;
  P x_1163F2241;
  P x_1164F2240;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35;
LINK_STACK();
  ARG(return_, 0);
  T35 = FUNSHELL(0,fun_x_1164_43,2);
  x_1164F2240 = T35;
  FUNINIT(x_1164F2240, 2,FREEREF(0),return_);
  x_1163F2241 = FREEREF(0);
  placeF2242 = YPfalse;
  valueF2243 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1163F2241,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1163F2241,LITREF(lit_91),x_1164F2240);
    x_1163F2244 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1163F2244,x_1164F2240);
    placeF2242 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1163F2244);
    x_1163F2245 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1163F2245,x_1164F2240);
    valueF2243 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1163F2245);
    x_1163F2246 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1163F2246,x_1164F2240);
    x_1163F2247 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1163F2247,x_1164F2240);
    T6 = CALL1(1,VARREF(Ytail),x_1163F2246);
    x_1163F2248 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1163F2248,x_1164F2240);
  } else {
    T12 = CALL2(1,x_1164F2240,LITREF(lit_7),x_1163F2241);
  }
  T34 = placeF2242;
  T33 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T34);
  tup20F2249 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F2249,YPint((P)0));
  g_declsF2250 = T32;
  T31 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F2249,YPint((P)1));
  g_placeF2251 = T31;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T20 = CALL1(1,VARREF(Ylst),g_placeF2251);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF2250,T17,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T24 = CALL1(1,VARREF(Ylst),g_placeF2251);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T28 = CALL1(1,VARREF(Ylst),g_placeF2251);
  T30 = valueF2243;
  T29 = CALL1(1,VARREF(Ylst),T30);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T29,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T25,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T21,LITREF(lit_11));
UNLINK_STACK();
  QRET(T13);
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
  P x_1167F2260;
  P x_1167F2259;
  P x_1167F2258;
  P x_1167F2257;
  P x_1167F2256;
  P bodyF2255;
  P testF2254;
  P x_1167F2253;
  P x_1168F2252;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(return_, 0);
  T22 = FUNSHELL(0,fun_x_1168_46,2);
  x_1168F2252 = T22;
  FUNINIT(x_1168F2252, 2,FREEREF(0),return_);
  x_1167F2253 = FREEREF(0);
  testF2254 = YPfalse;
  bodyF2255 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1167F2253,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1167F2253,LITREF(lit_97),x_1168F2252);
    x_1167F2256 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1167F2256,x_1168F2252);
    testF2254 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1167F2256);
    x_1167F2257 = T8;
    bodyF2255 = x_1167F2257;
    x_1167F2258 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1167F2258,x_1168F2252);
    x_1167F2259 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1167F2259,x_1168F2252);
    T6 = CALL1(1,VARREF(Ytail),x_1167F2258);
    x_1167F2260 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1167F2260,x_1168F2252);
  } else {
    T10 = CALL2(1,x_1168F2252,LITREF(lit_7),x_1167F2253);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T17 = testF2254;
  T16 = CALL1(1,VARREF(Ylst),T17);
  T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T21 = bodyF2255;
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T18,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P x_1171F2269;
  P x_1171F2268;
  P x_1171F2267;
  P x_1171F2266;
  P x_1171F2265;
  P bodyF2264;
  P testF2263;
  P x_1171F2262;
  P x_1172F2261;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1172_49,2);
  x_1172F2261 = T19;
  FUNINIT(x_1172F2261, 2,FREEREF(0),return_);
  x_1171F2262 = FREEREF(0);
  testF2263 = YPfalse;
  bodyF2264 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1171F2262,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1171F2262,LITREF(lit_105),x_1172F2261);
    x_1171F2265 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1171F2265,x_1172F2261);
    testF2263 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1171F2265);
    x_1171F2266 = T8;
    bodyF2264 = x_1171F2266;
    x_1171F2267 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1171F2267,x_1172F2261);
    x_1171F2268 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1171F2268,x_1172F2261);
    T6 = CALL1(1,VARREF(Ytail),x_1171F2267);
    x_1171F2269 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1171F2269,x_1172F2261);
  } else {
    T10 = CALL2(1,x_1172F2261,LITREF(lit_7),x_1171F2262);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T14 = testF2263;
  T13 = CALL1(1,VARREF(Ylst),T14);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T18 = bodyF2264;
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T15,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P x_1183F2271;
  P x_1184F2270;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(return_, 0);
  T5 = FUNSHELL(0,fun_x_1184_54,3);
  x_1184F2270 = T5;
  FUNINIT(x_1184F2270, 3,FREEREF(0),FREEREF(1),return_);
  T4 = BOXGET(FREEREF(1));
  x_1183F2271 = T4;
  T0 = CALL2(1,VARREF(YisaQ),x_1183F2271,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1183F2271,x_1184F2270);
  } else {
    T2 = CALL2(1,x_1184F2270,LITREF(lit_7),x_1183F2271);
  }
  T3 = BOXGET(FREEREF(0));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_56) {
  P return_;
  P x_1181F2279;
  P x_1181F2278;
  P x_1181F2277;
  P x_1181F2276;
  P restF2275;
  P xF2274;
  P x_1181F2273;
  P x_1182F2272;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1182_53,1);
  x_1182F2272 = T13;
  FUNINIT(x_1182F2272, 1,return_);
  T12 = BOXGET(FREEREF(0));
  x_1181F2273 = T12;
  xF2274 = YPfalse;
  xF2274 = BOXFAB(xF2274);
  restF2275 = YPfalse;
  restF2275 = BOXFAB(restF2275);
  T2 = CALL2(1,VARREF(YisaQ),x_1181F2273,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1181F2273,x_1182F2272);
    BOXPUT(T7,xF2274);
    T8 = CALL1(1,VARREF(Ytail),x_1181F2273);
    x_1181F2276 = T8;
    BOXPUT(x_1181F2276,restF2275);
    x_1181F2277 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1181F2277,x_1182F2272);
    x_1181F2278 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1181F2278,x_1182F2272);
    T6 = CALL1(1,VARREF(Ytail),x_1181F2277);
    x_1181F2279 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1181F2279,x_1182F2272);
  } else {
    T9 = CALL2(1,x_1182F2272,LITREF(lit_7),x_1181F2273);
  }
  T11 = FUNFAB(fun_55,2,xF2274,restF2275);
  T10 = with_exit(T11);
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_57) {
  P return_;
  P x_1179F2286;
  P x_1179F2285;
  P x_1179F2284;
  P x_1179F2283;
  P restF2282;
  P x_1179F2281;
  P x_1180F2280;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(return_, 0);
  T10 = FUNSHELL(0,fun_x_1180_52,2);
  x_1180F2280 = T10;
  FUNINIT(x_1180F2280, 2,FREEREF(0),return_);
  x_1179F2281 = FREEREF(0);
  restF2282 = YPfalse;
  restF2282 = BOXFAB(restF2282);
  T1 = CALL2(1,VARREF(YisaQ),x_1179F2281,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1179F2281,LITREF(lit_92),x_1180F2280);
    x_1179F2283 = T6;
    BOXPUT(x_1179F2283,restF2282);
    x_1179F2284 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1179F2284,x_1180F2280);
    x_1179F2285 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1179F2285,x_1180F2280);
    T5 = CALL1(1,VARREF(Ytail),x_1179F2284);
    x_1179F2286 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1179F2286,x_1180F2280);
  } else {
    T7 = CALL2(1,x_1180F2280,LITREF(lit_7),x_1179F2281);
  }
  T9 = FUNFAB(fun_56,1,restF2282);
  T8 = with_exit(T9);
UNLINK_STACK();
  QRET(T8);
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
  P x_1195F2288;
  P x_1196F2287;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(return_, 0);
  T5 = FUNSHELL(0,fun_x_1196_61,3);
  x_1196F2287 = T5;
  FUNINIT(x_1196F2287, 3,FREEREF(0),FREEREF(1),return_);
  T4 = BOXGET(FREEREF(1));
  x_1195F2288 = T4;
  T0 = CALL2(1,VARREF(YisaQ),x_1195F2288,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1195F2288,x_1196F2287);
  } else {
    T2 = CALL2(1,x_1196F2287,LITREF(lit_7),x_1195F2288);
  }
  T3 = BOXGET(FREEREF(0));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_63) {
  P return_;
  P x_1193F2296;
  P x_1193F2295;
  P x_1193F2294;
  P x_1193F2293;
  P restF2292;
  P xF2291;
  P x_1193F2290;
  P x_1194F2289;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1194_60,1);
  x_1194F2289 = T13;
  FUNINIT(x_1194F2289, 1,return_);
  T12 = BOXGET(FREEREF(0));
  x_1193F2290 = T12;
  xF2291 = YPfalse;
  xF2291 = BOXFAB(xF2291);
  restF2292 = YPfalse;
  restF2292 = BOXFAB(restF2292);
  T2 = CALL2(1,VARREF(YisaQ),x_1193F2290,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1193F2290,x_1194F2289);
    BOXPUT(T7,xF2291);
    T8 = CALL1(1,VARREF(Ytail),x_1193F2290);
    x_1193F2293 = T8;
    BOXPUT(x_1193F2293,restF2292);
    x_1193F2294 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1193F2294,x_1194F2289);
    x_1193F2295 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1193F2295,x_1194F2289);
    T6 = CALL1(1,VARREF(Ytail),x_1193F2294);
    x_1193F2296 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1193F2296,x_1194F2289);
  } else {
    T9 = CALL2(1,x_1194F2289,LITREF(lit_7),x_1193F2290);
  }
  T11 = FUNFAB(fun_62,2,xF2291,restF2292);
  T10 = with_exit(T11);
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_64) {
  P return_;
  P x_1191F2303;
  P x_1191F2302;
  P x_1191F2301;
  P x_1191F2300;
  P restF2299;
  P x_1191F2298;
  P x_1192F2297;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(return_, 0);
  T10 = FUNSHELL(0,fun_x_1192_59,2);
  x_1192F2297 = T10;
  FUNINIT(x_1192F2297, 2,FREEREF(0),return_);
  x_1191F2298 = FREEREF(0);
  restF2299 = YPfalse;
  restF2299 = BOXFAB(restF2299);
  T1 = CALL2(1,VARREF(YisaQ),x_1191F2298,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1191F2298,LITREF(lit_121),x_1192F2297);
    x_1191F2300 = T6;
    BOXPUT(x_1191F2300,restF2299);
    x_1191F2301 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1191F2301,x_1192F2297);
    x_1191F2302 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1191F2302,x_1192F2297);
    T5 = CALL1(1,VARREF(Ytail),x_1191F2301);
    x_1191F2303 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1191F2303,x_1192F2297);
  } else {
    T7 = CALL2(1,x_1192F2297,LITREF(lit_7),x_1191F2298);
  }
  T9 = FUNFAB(fun_63,1,restF2299);
  T8 = with_exit(T9);
UNLINK_STACK();
  QRET(T8);
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
  P x_1203F2311;
  P x_1203F2310;
  P x_1203F2309;
  P x_1203F2308;
  P bodyF2307;
  P condF2306;
  P x_1203F2305;
  P x_1204F2304;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(return_, 0);
  T25 = FUNSHELL(0,fun_x_1204_67,2);
  x_1204F2304 = T25;
  FUNINIT(x_1204F2304, 2,FREEREF(0),return_);
  T24 = BOXGET(FREEREF(0));
  T23 = CALL1(1,VARREF(Yhead),T24);
  x_1203F2305 = T23;
  condF2306 = YPfalse;
  bodyF2307 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1203F2305,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1203F2305,x_1204F2304);
    condF2306 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1203F2305);
    x_1203F2308 = T8;
    bodyF2307 = x_1203F2308;
    x_1203F2309 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1203F2309,x_1204F2304);
    x_1203F2310 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1203F2310,x_1204F2304);
    T6 = CALL1(1,VARREF(Ytail),x_1203F2309);
    x_1203F2311 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1203F2311,x_1204F2304);
  } else {
    T9 = CALL2(1,x_1204F2304,LITREF(lit_7),x_1203F2305);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T13 = condF2306;
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T17 = bodyF2307;
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
  P x_1201F2318;
  P x_1201F2317;
  P x_1201F2316;
  P x_1201F2315;
  P casesF2314;
  P x_1201F2313;
  P x_1202F2312;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1202_66,2);
  x_1202F2312 = T13;
  FUNINIT(x_1202F2312, 2,FREEREF(0),return_);
  x_1201F2313 = FREEREF(0);
  casesF2314 = YPfalse;
  casesF2314 = BOXFAB(casesF2314);
  T1 = CALL2(1,VARREF(YisaQ),x_1201F2313,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1201F2313,LITREF(lit_132),x_1202F2312);
    x_1201F2315 = T6;
    BOXPUT(x_1201F2315,casesF2314);
    x_1201F2316 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1201F2316,x_1202F2312);
    x_1201F2317 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1201F2317,x_1202F2312);
    T5 = CALL1(1,VARREF(Ytail),x_1201F2316);
    x_1201F2318 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1201F2318,x_1202F2312);
  } else {
    T7 = CALL2(1,x_1202F2312,LITREF(lit_7),x_1201F2313);
  }
  T10 = BOXGET(casesF2314);
  T9 = CALL1(1,VARREF(YgooSmacrosYnulQ),T10);
  if (T9 != YPfalse) {
    T8 = YPfalse;
  } else {
    T12 = FUNFAB(fun_68,1,casesF2314);
    T11 = with_exit(T12);
    T8 = T11;
  }
UNLINK_STACK();
  QRET(T8);
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
  P x_1211F2324;
  P x_1211F2323;
  P x_1211F2322;
  P valuesF2321;
  P x_1211F2320;
  P x_1212F2319;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(return_, 0);
  T23 = FUNSHELL(0,fun_x_1212_72,2);
  x_1212F2319 = T23;
  FUNINIT(x_1212F2319, 2,FREEREF(0),return_);
  T22 = BOXGET(FREEREF(1));
  x_1211F2320 = T22;
  valuesF2321 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1211F2320,VARREF(YLlstG));
  if (T1 != YPfalse) {
    valuesF2321 = x_1211F2320;
    x_1211F2322 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1211F2322,x_1212F2319);
    x_1211F2323 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1211F2323,x_1212F2319);
    T5 = CALL1(1,VARREF(Ytail),x_1211F2322);
    x_1211F2324 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1211F2324,x_1212F2319);
  } else {
    T6 = CALL2(1,x_1212F2319,LITREF(lit_7),x_1211F2320);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T13 = FUNFAB(fun_73,2,FREEREF(2),FREEREF(3));
  T14 = valuesF2321;
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
  P x_1209F2332;
  P x_1209F2331;
  P x_1209F2330;
  P x_1209F2329;
  P bodyF2328;
  P condF2327;
  P x_1209F2326;
  P x_1210F2325;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1210_71,2);
  x_1210F2325 = T19;
  FUNINIT(x_1210F2325, 2,FREEREF(0),return_);
  T18 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1209F2326 = T18;
  condF2327 = YPfalse;
  condF2327 = BOXFAB(condF2327);
  bodyF2328 = YPfalse;
  bodyF2328 = BOXFAB(bodyF2328);
  T2 = CALL2(1,VARREF(YisaQ),x_1209F2326,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1209F2326,x_1210F2325);
    BOXPUT(T7,condF2327);
    T8 = CALL1(1,VARREF(Ytail),x_1209F2326);
    x_1209F2329 = T8;
    BOXPUT(x_1209F2329,bodyF2328);
    x_1209F2330 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1209F2330,x_1210F2325);
    x_1209F2331 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1209F2331,x_1210F2325);
    T6 = CALL1(1,VARREF(Ytail),x_1209F2330);
    x_1209F2332 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1209F2332,x_1210F2325);
  } else {
    T9 = CALL2(1,x_1210F2325,LITREF(lit_7),x_1209F2326);
  }
  T12 = BOXGET(condF2327);
  T11 = CALL2(1,VARREF(YgooSmacrosYEE),T12,YPtrue);
  if (T11 != YPfalse) {
    T14 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T15 = BOXGET(bodyF2328);
    T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_11));
    T10 = T13;
  } else {
    T17 = FUNFAB(fun_74,5,FREEREF(0),condF2327,FREEREF(1),FREEREF(2),bodyF2328);
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
  P tst_varF2345;
  P val_varF2344;
  P x_1215F2343;
  P x_1215F2342;
  P x_1215F2341;
  P x_1215F2340;
  P x_1215F2339;
  P x_1215F2338;
  P casesF2337;
  P tstF2336;
  P valF2335;
  P x_1215F2334;
  P x_1216F2333;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(return_, 0);
  T33 = FUNSHELL(0,fun_x_1216_77,2);
  x_1216F2333 = T33;
  FUNINIT(x_1216F2333, 2,FREEREF(0),return_);
  x_1215F2334 = FREEREF(0);
  valF2335 = YPfalse;
  tstF2336 = YPfalse;
  casesF2337 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1215F2334,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1215F2334,LITREF(lit_152),x_1216F2333);
    x_1215F2338 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F2338,x_1216F2333);
    valF2335 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1215F2338);
    x_1215F2339 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F2339,x_1216F2333);
    tstF2336 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1215F2339);
    x_1215F2340 = T9;
    casesF2337 = x_1215F2340;
    x_1215F2341 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1215F2341,x_1216F2333);
    x_1215F2342 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1215F2342,x_1216F2333);
    T7 = CALL1(1,VARREF(Ytail),x_1215F2341);
    x_1215F2343 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1215F2343,x_1216F2333);
  } else {
    T13 = CALL2(1,x_1216F2333,LITREF(lit_7),x_1215F2334);
  }
  T32 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF2344 = T32;
  T31 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF2345 = T31;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T20 = CALL1(1,VARREF(Ylst),val_varF2344);
  T22 = valF2335;
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),tst_varF2345);
  T27 = tstF2336;
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T23,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T30 = casesF2337;
  T29 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF2344,tst_varF2345,T30);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T14 = CALL4(1,VARREF(YgooSmacrosYcat),T15,T16,T28,LITREF(lit_11));
UNLINK_STACK();
  QRET(T14);
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
  P x_1219F2354;
  P x_1219F2353;
  P x_1219F2352;
  P x_1219F2351;
  P x_1219F2350;
  P casesF2349;
  P valF2348;
  P x_1219F2347;
  P x_1220F2346;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(return_, 0);
  T17 = FUNSHELL(0,fun_x_1220_80,2);
  x_1220F2346 = T17;
  FUNINIT(x_1220F2346, 2,FREEREF(0),return_);
  x_1219F2347 = FREEREF(0);
  valF2348 = YPfalse;
  casesF2349 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1219F2347,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1219F2347,LITREF(lit_157),x_1220F2346);
    x_1219F2350 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1219F2350,x_1220F2346);
    valF2348 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1219F2350);
    x_1219F2351 = T8;
    casesF2349 = x_1219F2351;
    x_1219F2352 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1219F2352,x_1220F2346);
    x_1219F2353 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1219F2353,x_1220F2346);
    T6 = CALL1(1,VARREF(Ytail),x_1219F2352);
    x_1219F2354 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1219F2354,x_1220F2346);
  } else {
    T10 = CALL2(1,x_1220F2346,LITREF(lit_7),x_1219F2347);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T14 = valF2348;
  T13 = CALL1(1,VARREF(Ylst),T14);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T16 = casesF2349;
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T15,T16,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P varF2369;
  P x_1231F2368;
  P x_1231F2367;
  P x_1231F2366;
  P x_1231F2365;
  P x_1231F2364;
  P x_1231F2363;
  P x_1231F2362;
  P x_1231F2361;
  P x_1231F2360;
  P restF2359;
  P thenF2358;
  P patF2357;
  P x_1231F2356;
  P x_1232F2355;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
LINK_STACK();
  ARG(return_, 0);
  T51 = FUNSHELL(0,fun_x_1232_84,1);
  x_1232F2355 = T51;
  FUNINIT(x_1232F2355, 1,return_);
  T50 = BOXGET(FREEREF(0));
  x_1231F2356 = T50;
  patF2357 = YPfalse;
  thenF2358 = YPfalse;
  restF2359 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1231F2356,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F2356,x_1232F2355);
    x_1231F2360 = T14;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F2360,x_1232F2355);
    patF2357 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1231F2360);
    x_1231F2361 = T13;
    thenF2358 = x_1231F2361;
    x_1231F2362 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F2362,x_1232F2355);
    x_1231F2363 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1231F2363,x_1232F2355);
    T11 = CALL1(1,VARREF(Ytail),x_1231F2362);
    x_1231F2364 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1231F2364,x_1232F2355);
    T15 = CALL1(1,VARREF(Ytail),x_1231F2356);
    x_1231F2365 = T15;
    restF2359 = x_1231F2365;
    x_1231F2366 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F2366,x_1232F2355);
    x_1231F2367 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1231F2367,x_1232F2355);
    T7 = CALL1(1,VARREF(Ytail),x_1231F2366);
    x_1231F2368 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1231F2368,x_1232F2355);
  } else {
    T16 = CALL2(1,x_1232F2355,LITREF(lit_7),x_1231F2356);
  }
  T19 = patF2357;
  T18 = CALL2(1,VARREF(YgooSmacrosYEE),T19,YPtrue);
  if (T18 != YPfalse) {
    T21 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T22 = thenF2358;
    T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_11));
    T17 = T20;
  } else {
    T49 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF2369 = T49;
    T24 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
    T29 = CALL1(1,VARREF(Ylst),varF2369);
    T31 = BOXGET(FREEREF(1));
    T30 = CALL1(1,VARREF(Ylst),T31);
    T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_11));
    T27 = CALL1(1,VARREF(Ylst),T28);
    T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,LITREF(lit_11));
    T25 = CALL1(1,VARREF(Ylst),T26);
    T34 = CALL1(1,VARREF(Ylst),LITREF(lit_171));
    T38 = patF2357;
    T37 = CALL1(1,VARREF(Ylst),T38);
    T39 = CALL1(1,VARREF(Ylst),varF2369);
    T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T39,LITREF(lit_11));
    T35 = CALL1(1,VARREF(Ylst),T36);
    T42 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T43 = thenF2358;
    T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_11));
    T40 = CALL1(1,VARREF(Ylst),T41);
    T46 = CALL1(1,VARREF(Ylst),LITREF(lit_163));
    T47 = CALL1(1,VARREF(Ylst),varF2369);
    T48 = restF2359;
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
  P x_1229F2371;
  P x_1230F2370;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(return_, 0);
  T7 = FUNSHELL(0,fun_x_1230_86,3);
  x_1230F2370 = T7;
  FUNINIT(x_1230F2370, 3,FREEREF(0),FREEREF(1),return_);
  T6 = BOXGET(FREEREF(0));
  x_1229F2371 = T6;
  T0 = CALL2(1,VARREF(YisaQ),x_1229F2371,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1229F2371,x_1230F2370);
  } else {
    T2 = CALL2(1,x_1230F2370,LITREF(lit_7),x_1229F2371);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_172));
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_173));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_11));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_88) {
  P return_;
  P x_1227F2380;
  P x_1227F2379;
  P x_1227F2378;
  P x_1227F2377;
  P x_1227F2376;
  P casesF2375;
  P expF2374;
  P x_1227F2373;
  P x_1228F2372;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1228_83,2);
  x_1228F2372 = T13;
  FUNINIT(x_1228F2372, 2,FREEREF(0),return_);
  x_1227F2373 = FREEREF(0);
  expF2374 = YPfalse;
  expF2374 = BOXFAB(expF2374);
  casesF2375 = YPfalse;
  casesF2375 = BOXFAB(casesF2375);
  T2 = CALL2(1,VARREF(YisaQ),x_1227F2373,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1227F2373,LITREF(lit_163),x_1228F2372);
    x_1227F2376 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F2376,x_1228F2372);
    BOXPUT(T7,expF2374);
    T8 = CALL1(1,VARREF(Ytail),x_1227F2376);
    x_1227F2377 = T8;
    BOXPUT(x_1227F2377,casesF2375);
    x_1227F2378 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1227F2378,x_1228F2372);
    x_1227F2379 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1227F2379,x_1228F2372);
    T6 = CALL1(1,VARREF(Ytail),x_1227F2378);
    x_1227F2380 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1227F2380,x_1228F2372);
  } else {
    T10 = CALL2(1,x_1228F2372,LITREF(lit_7),x_1227F2373);
  }
  T12 = FUNFAB(fun_87,2,casesF2375,expF2374);
  T11 = with_exit(T12);
UNLINK_STACK();
  QRET(T11);
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
  P x_1235F2391;
  P x_1235F2390;
  P x_1235F2389;
  P x_1235F2388;
  P x_1235F2387;
  P x_1235F2386;
  P argsF2385;
  P messageF2384;
  P condF2383;
  P x_1235F2382;
  P x_1236F2381;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(return_, 0);
  T27 = FUNSHELL(0,fun_x_1236_90,2);
  x_1236F2381 = T27;
  FUNINIT(x_1236F2381, 2,FREEREF(0),return_);
  x_1235F2382 = FREEREF(0);
  condF2383 = YPfalse;
  messageF2384 = YPfalse;
  argsF2385 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1235F2382,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1235F2382,LITREF(lit_178),x_1236F2381);
    x_1235F2386 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F2386,x_1236F2381);
    condF2383 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1235F2386);
    x_1235F2387 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F2387,x_1236F2381);
    messageF2384 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1235F2387);
    x_1235F2388 = T9;
    argsF2385 = x_1235F2388;
    x_1235F2389 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1235F2389,x_1236F2381);
    x_1235F2390 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1235F2390,x_1236F2381);
    T7 = CALL1(1,VARREF(Ytail),x_1235F2389);
    x_1235F2391 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1235F2391,x_1236F2381);
  } else {
    T13 = CALL2(1,x_1236F2381,LITREF(lit_7),x_1235F2382);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T20 = condF2383;
  T19 = CALL1(1,VARREF(Ylst),T20);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T19,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_179));
  T25 = messageF2384;
  T24 = CALL1(1,VARREF(Ylst),T25);
  T26 = argsF2385;
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T26,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T14 = CALL4(1,VARREF(YgooSmacrosYcat),T15,T16,T21,LITREF(lit_11));
UNLINK_STACK();
  QRET(T14);
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
  P x_1247F2400;
  P x_1247F2399;
  P x_1247F2398;
  P x_1247F2397;
  P x_1247F2396;
  P valF2395;
  P keyF2394;
  P x_1247F2393;
  P x_1248F2392;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(return_, 0);
  T33 = FUNSHELL(0,fun_x_1248_95,3);
  x_1248F2392 = T33;
  FUNINIT(x_1248F2392, 3,FREEREF(0),FREEREF(1),return_);
  T32 = BOXGET(FREEREF(0));
  x_1247F2393 = T32;
  keyF2394 = YPfalse;
  valF2395 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1247F2393,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1247F2393,LITREF(lit_79),x_1248F2392);
    x_1247F2396 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1247F2396,x_1248F2392);
    keyF2394 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1247F2396);
    x_1247F2397 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1247F2397,x_1248F2392);
    valF2395 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1247F2397);
    x_1247F2398 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1247F2398,x_1248F2392);
    x_1247F2399 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1247F2399,x_1248F2392);
    T6 = CALL1(1,VARREF(Ytail),x_1247F2398);
    x_1247F2400 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1247F2400,x_1248F2392);
  } else {
    T12 = CALL2(1,x_1248F2392,LITREF(lit_7),x_1247F2393);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T18 = keyF2394;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T20 = valF2395;
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
  P stateF2409;
  P x_1245F2408;
  P x_1245F2407;
  P x_1245F2406;
  P x_1245F2405;
  P expF2404;
  P varF2403;
  P x_1245F2402;
  P x_1246F2401;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(return_, 0);
  T34 = FUNSHELL(0,fun_x_1246_94,1);
  x_1246F2401 = T34;
  FUNINIT(x_1246F2401, 1,return_);
  x_1245F2402 = FREEREF(0);
  varF2403 = YPfalse;
  varF2403 = BOXFAB(varF2403);
  expF2404 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1245F2402,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1245F2402,x_1246F2401);
    BOXPUT(T9,varF2403);
    T10 = CALL1(1,VARREF(Ytail),x_1245F2402);
    x_1245F2405 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1245F2405,x_1246F2401);
    expF2404 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1245F2405);
    x_1245F2406 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1245F2406,x_1246F2401);
    x_1245F2407 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1245F2407,x_1246F2401);
    T6 = CALL1(1,VARREF(Ytail),x_1245F2406);
    x_1245F2408 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1245F2408,x_1246F2401);
  } else {
    T11 = CALL2(1,x_1246F2401,LITREF(lit_7),x_1245F2402);
  }
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF2409 = T33;
  T13 = CALL1(1,VARREF(Ytail),FREEREF(1));
  T16 = CALL1(1,VARREF(Ylst),stateF2409);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_191));
  T21 = expF2404;
  T20 = CALL1(1,VARREF(Ylst),T21);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL2(1,VARREF(YgooSmacrosYpair),T15,FREEREF(2));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T25 = CALL1(1,VARREF(Ylst),stateF2409);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_11));
  T22 = CALL2(1,VARREF(YgooSmacrosYpair),T23,FREEREF(3));
  T28 = FUNFAB(fun_96,2,varF2403,stateF2409);
  T27 = with_exit(T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYpair),T27,FREEREF(4));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_198));
  T32 = CALL1(1,VARREF(Ylst),stateF2409);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,LITREF(lit_11));
  T29 = CALL2(1,VARREF(YgooSmacrosYpair),T30,FREEREF(5));
  T12 = CALL5(1,FREEREF(6),T13,T14,T22,T26,T29);
UNLINK_STACK();
  QRET(T12);
}

LOCCODEDEF(fun_grok_98) {
  P clauses_,inits_,preds_,nows_,nexts_;
  P clauseF2411;
  P loopF2410;
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
    loopF2410 = T20;
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
    T4 = CALL1(1,VARREF(Ylst),loopF2410);
    T5 = CALL1(1,VARREF(Ylst),inits_);
    T8 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
    T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,preds_,LITREF(lit_11));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
    T15 = CALL1(1,VARREF(Ylst),nows_);
    T16 = BOXGET(FREEREF(0));
    T19 = CALL1(1,VARREF(Ylst),loopF2410);
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
    clauseF2411 = T23;
    T22 = FUNFAB(fun_97,7,clauseF2411,clauses_,inits_,preds_,nows_,nexts_,FREEREF(1));
    T21 = with_exit(T22);
    T0 = T21;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_99) {
  P return_;
  P grokF2425;
  P x_1243F2424;
  P x_1243F2423;
  P x_1243F2422;
  P x_1243F2421;
  P x_1243F2420;
  P x_1243F2419;
  P x_1243F2418;
  P x_1243F2417;
  P x_1243F2416;
  P bodyF2415;
  P clausesF2414;
  P x_1243F2413;
  P x_1244F2412;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(return_, 0);
  T18 = FUNSHELL(0,fun_x_1244_93,2);
  x_1244F2412 = T18;
  FUNINIT(x_1244F2412, 2,FREEREF(0),return_);
  x_1243F2413 = FREEREF(0);
  clausesF2414 = YPfalse;
  bodyF2415 = YPfalse;
  bodyF2415 = BOXFAB(bodyF2415);
  T2 = CALL2(1,VARREF(YisaQ),x_1243F2413,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1243F2413,LITREF(lit_184),x_1244F2412);
    x_1243F2416 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1243F2416,x_1244F2412);
    x_1243F2417 = T11;
    clausesF2414 = x_1243F2417;
    x_1243F2418 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1243F2418,x_1244F2412);
    x_1243F2419 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1243F2419,x_1244F2412);
    T10 = CALL1(1,VARREF(Ytail),x_1243F2418);
    x_1243F2420 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1243F2420,x_1244F2412);
    T12 = CALL1(1,VARREF(Ytail),x_1243F2416);
    x_1243F2421 = T12;
    BOXPUT(x_1243F2421,bodyF2415);
    x_1243F2422 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1243F2422,x_1244F2412);
    x_1243F2423 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1243F2423,x_1244F2412);
    T6 = CALL1(1,VARREF(Ytail),x_1243F2422);
    x_1243F2424 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1243F2424,x_1244F2412);
  } else {
    T14 = CALL2(1,x_1244F2412,LITREF(lit_7),x_1243F2413);
  }
  T17 = FUNSHELL(1,fun_grok_98,2);
  grokF2425 = T17;
  FUNINIT(grokF2425, 2,bodyF2415,grokF2425);
  T16 = clausesF2414;
  T15 = CALL5(1,grokF2425,T16,Ynil,Ynil,Ynil,Ynil);
UNLINK_STACK();
  QRET(T15);
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
  P x_1251F2434;
  P x_1251F2433;
  P x_1251F2432;
  P x_1251F2431;
  P x_1251F2430;
  P bodyF2429;
  P testF2428;
  P x_1251F2427;
  P x_1252F2426;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_1252_101,2);
  x_1252F2426 = T24;
  FUNINIT(x_1252F2426, 2,FREEREF(0),return_);
  x_1251F2427 = FREEREF(0);
  testF2428 = YPfalse;
  bodyF2429 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1251F2427,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1251F2427,LITREF(lit_203),x_1252F2426);
    x_1251F2430 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1251F2430,x_1252F2426);
    testF2428 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1251F2430);
    x_1251F2431 = T8;
    bodyF2429 = x_1251F2431;
    x_1251F2432 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1251F2432,x_1252F2426);
    x_1251F2433 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1251F2433,x_1252F2426);
    T6 = CALL1(1,VARREF(Ytail),x_1251F2432);
    x_1251F2434 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1251F2434,x_1252F2426);
  } else {
    T10 = CALL2(1,x_1252F2426,LITREF(lit_7),x_1251F2427);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T14 = CALL1(1,VARREF(Ylst),Ynil);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T19 = testF2428;
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = bodyF2429;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T20,T21,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T14,T15,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P x_1255F2443;
  P x_1255F2442;
  P x_1255F2441;
  P x_1255F2440;
  P x_1255F2439;
  P bodyF2438;
  P testF2437;
  P x_1255F2436;
  P x_1256F2435;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_1256_104,2);
  x_1256F2435 = T24;
  FUNINIT(x_1256F2435, 2,FREEREF(0),return_);
  x_1255F2436 = FREEREF(0);
  testF2437 = YPfalse;
  bodyF2438 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1255F2436,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1255F2436,LITREF(lit_209),x_1256F2435);
    x_1255F2439 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1255F2439,x_1256F2435);
    testF2437 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1255F2439);
    x_1255F2440 = T8;
    bodyF2438 = x_1255F2440;
    x_1255F2441 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1255F2441,x_1256F2435);
    x_1255F2442 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1255F2442,x_1256F2435);
    T6 = CALL1(1,VARREF(Ytail),x_1255F2441);
    x_1255F2443 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1255F2443,x_1256F2435);
  } else {
    T10 = CALL2(1,x_1256F2435,LITREF(lit_7),x_1255F2436);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T14 = CALL1(1,VARREF(Ylst),Ynil);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T19 = testF2437;
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = bodyF2438;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T20,T21,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T14,T15,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
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
  P old_valueF2461;
  P g_placeF2460;
  P g_declsF2459;
  P tup22F2458;
  P x_1271F2457;
  P x_1271F2456;
  P x_1271F2455;
  P x_1271F2454;
  P x_1271F2453;
  P x_1271F2452;
  P x_1271F2451;
  P x_1271F2450;
  P x_1271F2449;
  P restF2448;
  P valueF2447;
  P placeF2446;
  P x_1271F2445;
  P x_1272F2444;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56;
LINK_STACK();
  ARG(return_, 0);
  T56 = FUNSHELL(0,fun_x_1272_108,2);
  x_1272F2444 = T56;
  FUNINIT(x_1272F2444, 2,FREEREF(0),return_);
  x_1271F2445 = FREEREF(1);
  placeF2446 = YPfalse;
  valueF2447 = YPfalse;
  restF2448 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1271F2445,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1271F2445,x_1272F2444);
    x_1271F2449 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1271F2449,x_1272F2444);
    placeF2446 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1271F2449);
    x_1271F2450 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1271F2450,x_1272F2444);
    valueF2447 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1271F2450);
    x_1271F2451 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1271F2451,x_1272F2444);
    x_1271F2452 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1271F2452,x_1272F2444);
    T11 = CALL1(1,VARREF(Ytail),x_1271F2451);
    x_1271F2453 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1271F2453,x_1272F2444);
    T17 = CALL1(1,VARREF(Ytail),x_1271F2445);
    x_1271F2454 = T17;
    restF2448 = x_1271F2454;
    x_1271F2455 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1271F2455,x_1272F2444);
    x_1271F2456 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1271F2456,x_1272F2444);
    T7 = CALL1(1,VARREF(Ytail),x_1271F2455);
    x_1271F2457 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1271F2457,x_1272F2444);
  } else {
    T18 = CALL2(1,x_1272F2444,LITREF(lit_7),x_1271F2445);
  }
  T55 = placeF2446;
  T54 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T55);
  tup22F2458 = T54;
  T53 = CALL2(1,VARREF(YgooSmacrosYelt),tup22F2458,YPint((P)0));
  g_declsF2459 = T53;
  T52 = CALL2(1,VARREF(YgooSmacrosYelt),tup22F2458,YPint((P)1));
  g_placeF2460 = T52;
  T51 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF2461 = T51;
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T25 = CALL1(1,VARREF(Ylst),old_valueF2461);
  T26 = CALL1(1,VARREF(Ylst),g_placeF2460);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF2459,T23,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_222));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T36 = CALL1(1,VARREF(Ylst),g_placeF2460);
  T38 = valueF2447;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,LITREF(lit_11));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T44 = restF2448;
  T43 = CALL2(1,VARREF(YgooSmacrosYcat),T44,LITREF(lit_11));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXGET(FREEREF(2));
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T45,LITREF(lit_11));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T39,LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T49 = CALL1(1,VARREF(Ylst),g_placeF2460);
  T50 = CALL1(1,VARREF(Ylst),old_valueF2461);
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
  P x_1270F2462;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1270F2462 = FREEREF(0);
  T2 = FUNFAB(fun_109,3,FREEREF(1),x_1270F2462,FREEREF(2));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(3),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_111) {
  P return_;
  P x_1268F2464;
  P x_1269F2463;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(return_, 0);
  T6 = FUNSHELL(0,fun_x_1269_110,4);
  x_1269F2463 = T6;
  FUNINIT(x_1269F2463, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1268F2464 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1268F2464,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1268F2464,x_1269F2463);
  } else {
    T2 = CALL2(1,x_1269F2463,LITREF(lit_7),x_1268F2464);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T5 = BOXGET(FREEREF(2));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_11));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_112) {
  P return_;
  P x_1267F2474;
  P x_1265F2473;
  P x_1265F2472;
  P x_1265F2471;
  P x_1265F2470;
  P x_1265F2469;
  P bodyF2468;
  P placesF2467;
  P x_1265F2466;
  P x_1266F2465;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(return_, 0);
  T14 = FUNSHELL(0,fun_x_1266_107,2);
  x_1266F2465 = T14;
  FUNINIT(x_1266F2465, 2,FREEREF(0),return_);
  x_1265F2466 = FREEREF(0);
  placesF2467 = YPfalse;
  placesF2467 = BOXFAB(placesF2467);
  bodyF2468 = YPfalse;
  bodyF2468 = BOXFAB(bodyF2468);
  T2 = CALL2(1,VARREF(YisaQ),x_1265F2466,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1265F2466,LITREF(lit_214),x_1266F2465);
    x_1265F2469 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1265F2469,x_1266F2465);
    BOXPUT(T7,placesF2467);
    T8 = CALL1(1,VARREF(Ytail),x_1265F2469);
    x_1265F2470 = T8;
    BOXPUT(x_1265F2470,bodyF2468);
    x_1265F2471 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1265F2471,x_1266F2465);
    x_1265F2472 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1265F2472,x_1266F2465);
    T6 = CALL1(1,VARREF(Ytail),x_1265F2471);
    x_1265F2473 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1265F2473,x_1266F2465);
  } else {
    T10 = CALL2(1,x_1266F2465,LITREF(lit_7),x_1265F2466);
  }
  T13 = BOXGET(placesF2467);
  x_1267F2474 = T13;
  T12 = FUNFAB(fun_111,3,x_1267F2474,placesF2467,bodyF2468);
  T11 = with_exit(T12);
UNLINK_STACK();
  QRET(T11);
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
  P vnamF2486;
  P typF2485;
  P namF2484;
  P x_1275F2483;
  P x_1275F2482;
  P x_1275F2481;
  P x_1275F2480;
  P x_1275F2479;
  P valueF2478;
  P varF2477;
  P x_1275F2476;
  P x_1276F2475;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
LINK_STACK();
  ARG(return_, 0);
  T51 = FUNSHELL(0,fun_x_1276_114,2);
  x_1276F2475 = T51;
  FUNINIT(x_1276F2475, 2,FREEREF(0),return_);
  x_1275F2476 = FREEREF(0);
  varF2477 = YPfalse;
  valueF2478 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1275F2476,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1275F2476,LITREF(lit_227),x_1276F2475);
    x_1275F2479 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1275F2479,x_1276F2475);
    varF2477 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1275F2479);
    x_1275F2480 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1275F2480,x_1276F2475);
    valueF2478 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1275F2480);
    x_1275F2481 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1275F2481,x_1276F2475);
    x_1275F2482 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1275F2482,x_1276F2475);
    T6 = CALL1(1,VARREF(Ytail),x_1275F2481);
    x_1275F2483 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1275F2483,x_1276F2475);
  } else {
    T12 = CALL2(1,x_1276F2475,LITREF(lit_7),x_1275F2476);
  }
  T50 = varF2477;
  T49 = CALL1(1,VARREF(YgooSmacrosYvar_name),T50);
  namF2484 = T49;
  T48 = varF2477;
  T47 = CALL1(1,VARREF(YgooSmacrosYvar_type),T48);
  typF2485 = T47;
  T46 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_228),namF2484,LITREF(lit_229));
  vnamF2486 = T46;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_230));
  T18 = CALL1(1,VARREF(Ylst),vnamF2486);
  T20 = valueF2478;
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T19,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_231));
  T24 = CALL1(1,VARREF(Ylst),namF2484);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_232));
  T28 = CALL1(1,VARREF(Ylst),typF2485);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T29 = CALL1(1,VARREF(Ylst),vnamF2486);
  T22 = CALL5(1,VARREF(YgooSmacrosYcat),T23,T24,T25,T29,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_231));
  T34 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF2484);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_233));
  T40 = CALL1(1,VARREF(Ylst),typF2485);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,LITREF(lit_11));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T36 = CALL2(1,VARREF(YgooSmacrosYcat),T37,LITREF(lit_11));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T44 = CALL1(1,VARREF(Ylst),vnamF2486);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_233));
  T42 = CALL4(1,VARREF(YgooSmacrosYcat),T43,T44,T45,LITREF(lit_11));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T31 = CALL5(1,VARREF(YgooSmacrosYcat),T32,T33,T35,T41,LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T13 = CALL5(1,VARREF(YgooSmacrosYcat),T14,T15,T21,T30,LITREF(lit_11));
UNLINK_STACK();
  QRET(T13);
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
  P x_1279F2493;
  P x_1279F2492;
  P x_1279F2491;
  P x_1279F2490;
  P bodyF2489;
  P x_1279F2488;
  P x_1280F2487;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(return_, 0);
  T17 = FUNSHELL(0,fun_x_1280_117,2);
  x_1280F2487 = T17;
  FUNINIT(x_1280F2487, 2,FREEREF(0),return_);
  x_1279F2488 = FREEREF(0);
  bodyF2489 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1279F2488,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1279F2488,LITREF(lit_238),x_1280F2487);
    x_1279F2490 = T6;
    bodyF2489 = x_1279F2490;
    x_1279F2491 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1279F2491,x_1280F2487);
    x_1279F2492 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1279F2492,x_1280F2487);
    T5 = CALL1(1,VARREF(Ytail),x_1279F2491);
    x_1279F2493 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1279F2493,x_1280F2487);
  } else {
    T7 = CALL2(1,x_1280F2487,LITREF(lit_7),x_1279F2488);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T15 = CALL1(1,VARREF(Ylst),YPfalse);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_11));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T16 = bodyF2489;
  T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T16,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
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
  P x_1283F2500;
  P x_1283F2499;
  P x_1283F2498;
  P x_1283F2497;
  P namesF2496;
  P x_1283F2495;
  P x_1284F2494;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(return_, 0);
  T31 = FUNSHELL(0,fun_x_1284_120,2);
  x_1284F2494 = T31;
  FUNINIT(x_1284F2494, 2,FREEREF(0),return_);
  x_1283F2495 = FREEREF(0);
  namesF2496 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1283F2495,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1283F2495,LITREF(lit_244),x_1284F2494);
    x_1283F2497 = T6;
    namesF2496 = x_1283F2497;
    x_1283F2498 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1283F2498,x_1284F2494);
    x_1283F2499 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1283F2499,x_1284F2494);
    T5 = CALL1(1,VARREF(Ytail),x_1283F2498);
    x_1283F2500 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1283F2500,x_1284F2494);
  } else {
    T7 = CALL2(1,x_1284F2494,LITREF(lit_7),x_1283F2495);
  }
  T10 = namesF2496;
  T9 = CALL1(1,VARREF(YgooSmacrosYnulQ),T10);
  if (T9 != YPfalse) {
    T8 = YPfalse;
  } else {
    T12 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_121));
    T16 = CALL1(1,VARREF(Ylst),YPfalse);
    T19 = namesF2496;
    T18 = CALL1(1,VARREF(Yhead),T19);
    T17 = CALL1(1,VARREF(Ylst),T18);
    T14 = CALL4(1,VARREF(YgooSmacrosYcat),T15,T16,T17,LITREF(lit_11));
    T13 = CALL1(1,VARREF(Ylst),T14);
    T22 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
    T25 = namesF2496;
    T24 = CALL1(1,VARREF(Yhead),T25);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,LITREF(lit_11));
    T20 = CALL1(1,VARREF(Ylst),T21);
    T28 = CALL1(1,VARREF(Ylst),LITREF(lit_244));
    T30 = namesF2496;
    T29 = CALL1(1,VARREF(Ytail),T30);
    T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,LITREF(lit_11));
    T26 = CALL1(1,VARREF(Ylst),T27);
    T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T20,T26,LITREF(lit_11));
    T8 = T11;
  }
UNLINK_STACK();
  QRET(T8);
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
  P x_1335F2506;
  P x_1335F2505;
  P x_1335F2504;
  P nameF2503;
  P x_1335F2502;
  P x_1336F2501;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(return_, 0);
  T20 = FUNSHELL(0,fun_x_1336_124,1);
  x_1336F2501 = T20;
  FUNINIT(x_1336F2501, 1,return_);
  x_1335F2502 = FREEREF(0);
  nameF2503 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1335F2502,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1335F2502,x_1336F2501);
    nameF2503 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1335F2502);
    x_1335F2504 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1335F2504,x_1336F2501);
    x_1335F2505 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1335F2505,x_1336F2501);
    T5 = CALL1(1,VARREF(Ytail),x_1335F2504);
    x_1335F2506 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1335F2506,x_1336F2501);
  } else {
    T8 = CALL2(1,x_1336F2501,LITREF(lit_7),x_1335F2502);
  }
  T11 = nameF2503;
  T10 = CALL2(1,VARREF(YisaQ),T11,VARREF(YLsymG));
  if (T10 != YPfalse) {
    T14 = nameF2503;
    T13 = CALL1(1,VARREF(Ylst),T14);
    T17 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
    T19 = nameF2503;
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
  P x_1334F2507;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1334F2507 = FREEREF(0);
  T2 = FUNFAB(fun_125,1,x_1334F2507);
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_127) {
  P return_;
  P x_1332F2516;
  P x_1332F2515;
  P x_1332F2514;
  P x_1332F2513;
  P x_1332F2512;
  P restF2511;
  P nameF2510;
  P x_1332F2509;
  P x_1333F2508;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1333_126,2);
  x_1333F2508 = T19;
  FUNINIT(x_1333F2508, 2,FREEREF(0),return_);
  x_1332F2509 = FREEREF(0);
  nameF2510 = YPfalse;
  restF2511 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1332F2509,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1332F2509,LITREF(lit_275),x_1333F2508);
    x_1332F2512 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1332F2512,x_1333F2508);
    nameF2510 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1332F2512);
    x_1332F2513 = T8;
    restF2511 = x_1332F2513;
    x_1332F2514 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1332F2514,x_1333F2508);
    x_1332F2515 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1332F2515,x_1333F2508);
    T6 = CALL1(1,VARREF(Ytail),x_1332F2514);
    x_1332F2516 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1332F2516,x_1333F2508);
  } else {
    T10 = CALL2(1,x_1333F2508,LITREF(lit_7),x_1332F2509);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2510;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1330_128) {
  P msg_,args_;
  P x_1331F2517;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1331F2517 = FREEREF(0);
  T2 = FUNFAB(fun_127,2,x_1331F2517,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_129) {
  P return_;
  P x_1329F2526;
  P x_1329F2525;
  P x_1329F2524;
  P x_1329F2523;
  P x_1329F2522;
  P restF2521;
  P nameF2520;
  P x_1329F2519;
  P x_1330F2518;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1330_128,3);
  x_1330F2518 = T19;
  FUNINIT(x_1330F2518, 3,FREEREF(0),FREEREF(1),return_);
  x_1329F2519 = FREEREF(0);
  nameF2520 = YPfalse;
  restF2521 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1329F2519,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1329F2519,LITREF(lit_276),x_1330F2518);
    x_1329F2522 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1329F2522,x_1330F2518);
    nameF2520 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1329F2522);
    x_1329F2523 = T8;
    restF2521 = x_1329F2523;
    x_1329F2524 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1329F2524,x_1330F2518);
    x_1329F2525 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1329F2525,x_1330F2518);
    T6 = CALL1(1,VARREF(Ytail),x_1329F2524);
    x_1329F2526 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1329F2526,x_1330F2518);
  } else {
    T10 = CALL2(1,x_1330F2518,LITREF(lit_7),x_1329F2519);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2520;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1327_130) {
  P msg_,args_;
  P x_1328F2527;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1328F2527 = FREEREF(0);
  T2 = FUNFAB(fun_129,2,x_1328F2527,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_131) {
  P return_;
  P x_1326F2536;
  P x_1326F2535;
  P x_1326F2534;
  P x_1326F2533;
  P x_1326F2532;
  P restF2531;
  P nameF2530;
  P x_1326F2529;
  P x_1327F2528;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1327_130,3);
  x_1327F2528 = T19;
  FUNINIT(x_1327F2528, 3,FREEREF(0),FREEREF(1),return_);
  x_1326F2529 = FREEREF(0);
  nameF2530 = YPfalse;
  restF2531 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1326F2529,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1326F2529,LITREF(lit_277),x_1327F2528);
    x_1326F2532 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1326F2532,x_1327F2528);
    nameF2530 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1326F2532);
    x_1326F2533 = T8;
    restF2531 = x_1326F2533;
    x_1326F2534 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1326F2534,x_1327F2528);
    x_1326F2535 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1326F2535,x_1327F2528);
    T6 = CALL1(1,VARREF(Ytail),x_1326F2534);
    x_1326F2536 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1326F2536,x_1327F2528);
  } else {
    T10 = CALL2(1,x_1327F2528,LITREF(lit_7),x_1326F2529);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2530;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1324_132) {
  P msg_,args_;
  P x_1325F2537;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1325F2537 = FREEREF(0);
  T2 = FUNFAB(fun_131,2,x_1325F2537,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_133) {
  P return_;
  P x_1323F2546;
  P x_1323F2545;
  P x_1323F2544;
  P x_1323F2543;
  P x_1323F2542;
  P restF2541;
  P nameF2540;
  P x_1323F2539;
  P x_1324F2538;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1324_132,3);
  x_1324F2538 = T19;
  FUNINIT(x_1324F2538, 3,FREEREF(0),FREEREF(1),return_);
  x_1323F2539 = FREEREF(0);
  nameF2540 = YPfalse;
  restF2541 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1323F2539,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1323F2539,LITREF(lit_230),x_1324F2538);
    x_1323F2542 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1323F2542,x_1324F2538);
    nameF2540 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1323F2542);
    x_1323F2543 = T8;
    restF2541 = x_1323F2543;
    x_1323F2544 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1323F2544,x_1324F2538);
    x_1323F2545 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1323F2545,x_1324F2538);
    T6 = CALL1(1,VARREF(Ytail),x_1323F2544);
    x_1323F2546 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1323F2546,x_1324F2538);
  } else {
    T10 = CALL2(1,x_1324F2538,LITREF(lit_7),x_1323F2539);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2540;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1321_134) {
  P msg_,args_;
  P x_1322F2547;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1322F2547 = FREEREF(0);
  T2 = FUNFAB(fun_133,2,x_1322F2547,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_135) {
  P return_;
  P x_1320F2556;
  P x_1320F2555;
  P x_1320F2554;
  P x_1320F2553;
  P x_1320F2552;
  P restF2551;
  P nameF2550;
  P x_1320F2549;
  P x_1321F2548;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1321_134,3);
  x_1321F2548 = T19;
  FUNINIT(x_1321F2548, 3,FREEREF(0),FREEREF(1),return_);
  x_1320F2549 = FREEREF(0);
  nameF2550 = YPfalse;
  restF2551 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1320F2549,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1320F2549,LITREF(lit_278),x_1321F2548);
    x_1320F2552 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1320F2552,x_1321F2548);
    nameF2550 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1320F2552);
    x_1320F2553 = T8;
    restF2551 = x_1320F2553;
    x_1320F2554 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1320F2554,x_1321F2548);
    x_1320F2555 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1320F2555,x_1321F2548);
    T6 = CALL1(1,VARREF(Ytail),x_1320F2554);
    x_1320F2556 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1320F2556,x_1321F2548);
  } else {
    T10 = CALL2(1,x_1321F2548,LITREF(lit_7),x_1320F2549);
  }
  T13 = nameF2550;
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2550;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1318_136) {
  P msg_,args_;
  P x_1319F2557;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1319F2557 = FREEREF(0);
  T2 = FUNFAB(fun_135,2,x_1319F2557,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_137) {
  P return_;
  P x_1317F2566;
  P x_1317F2565;
  P x_1317F2564;
  P x_1317F2563;
  P x_1317F2562;
  P restF2561;
  P nameF2560;
  P x_1317F2559;
  P x_1318F2558;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(return_, 0);
  T25 = FUNSHELL(0,fun_x_1318_136,3);
  x_1318F2558 = T25;
  FUNINIT(x_1318F2558, 3,FREEREF(0),FREEREF(1),return_);
  x_1317F2559 = FREEREF(0);
  nameF2560 = YPfalse;
  restF2561 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1317F2559,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1317F2559,LITREF(lit_279),x_1318F2558);
    x_1317F2562 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1317F2562,x_1318F2558);
    nameF2560 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1317F2562);
    x_1317F2563 = T8;
    restF2561 = x_1317F2563;
    x_1317F2564 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1317F2564,x_1318F2558);
    x_1317F2565 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1317F2565,x_1318F2558);
    T6 = CALL1(1,VARREF(Ytail),x_1317F2564);
    x_1317F2566 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1317F2566,x_1318F2558);
  } else {
    T10 = CALL2(1,x_1318F2558,LITREF(lit_7),x_1317F2559);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2560;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T24 = nameF2560;
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
  P x_1316F2567;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1316F2567 = FREEREF(0);
  T2 = FUNFAB(fun_137,2,x_1316F2567,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_139) {
  P return_;
  P x_1314F2576;
  P x_1314F2575;
  P x_1314F2574;
  P x_1314F2573;
  P x_1314F2572;
  P restF2571;
  P nameF2570;
  P x_1314F2569;
  P x_1315F2568;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1315_138,3);
  x_1315F2568 = T19;
  FUNINIT(x_1315F2568, 3,FREEREF(0),FREEREF(1),return_);
  x_1314F2569 = FREEREF(0);
  nameF2570 = YPfalse;
  restF2571 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1314F2569,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1314F2569,LITREF(lit_280),x_1315F2568);
    x_1314F2572 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1314F2572,x_1315F2568);
    nameF2570 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1314F2572);
    x_1314F2573 = T8;
    restF2571 = x_1314F2573;
    x_1314F2574 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1314F2574,x_1315F2568);
    x_1314F2575 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1314F2575,x_1315F2568);
    T6 = CALL1(1,VARREF(Ytail),x_1314F2574);
    x_1314F2576 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1314F2576,x_1315F2568);
  } else {
    T10 = CALL2(1,x_1315F2568,LITREF(lit_7),x_1314F2569);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2570;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_140) {
  P return_;
  P defsF2585;
  P x_1313F2584;
  P x_1311F2583;
  P x_1311F2582;
  P x_1311F2581;
  P x_1311F2580;
  P defF2579;
  P x_1311F2578;
  P x_1312F2577;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1312_123,2);
  x_1312F2577 = T13;
  FUNINIT(x_1312F2577, 2,FREEREF(0),return_);
  x_1311F2578 = FREEREF(0);
  defF2579 = YPfalse;
  defF2579 = BOXFAB(defF2579);
  T1 = CALL2(1,VARREF(YisaQ),x_1311F2578,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1311F2578,LITREF(lit_250),x_1312F2577);
    x_1311F2580 = T6;
    BOXPUT(x_1311F2580,defF2579);
    x_1311F2581 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1311F2581,x_1312F2577);
    x_1311F2582 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1311F2582,x_1312F2577);
    T5 = CALL1(1,VARREF(Ytail),x_1311F2581);
    x_1311F2583 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1311F2583,x_1312F2577);
  } else {
    T7 = CALL2(1,x_1312F2577,LITREF(lit_7),x_1311F2578);
  }
  T12 = BOXGET(defF2579);
  x_1313F2584 = T12;
  T11 = FUNFAB(fun_139,2,x_1313F2584,defF2579);
  T10 = with_exit(T11);
  defsF2585 = T10;
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T8 = CALL3(1,VARREF(YgooSmacrosYcat),T9,defsF2585,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
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
  P xF2586;
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
  xF2586 = T2;
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_250));
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,xF2586,LITREF(lit_11));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_144) {
  P return_;
  P x_1339F2593;
  P x_1339F2592;
  P x_1339F2591;
  P x_1339F2590;
  P defsF2589;
  P x_1339F2588;
  P x_1340F2587;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1340_142,2);
  x_1340F2587 = T13;
  FUNINIT(x_1340F2587, 2,FREEREF(0),return_);
  x_1339F2588 = FREEREF(0);
  defsF2589 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1339F2588,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1339F2588,LITREF(lit_285),x_1340F2587);
    x_1339F2590 = T6;
    defsF2589 = x_1339F2590;
    x_1339F2591 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1339F2591,x_1340F2587);
    x_1339F2592 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1339F2592,x_1340F2587);
    T5 = CALL1(1,VARREF(Ytail),x_1339F2591);
    x_1339F2593 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1339F2593,x_1340F2587);
  } else {
    T7 = CALL2(1,x_1340F2587,LITREF(lit_7),x_1339F2588);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T11 = fun_143;
  T12 = defsF2589;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),T11,T12);
  T8 = CALL3(1,VARREF(YgooSmacrosYcat),T9,T10,LITREF(lit_11));
UNLINK_STACK();
  QRET(T8);
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
  {"%cu", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"popf", PVAR, NULL},
  {"def-fun-var", PVAR, NULL},
  {"exported", PVAR, NULL},
  {"cat", CVAR, &YgooSmacrosYcat},
  {"renew", PVAR, NULL},
  {"match-sublist", CVAR, &YgooSmacrosYmatch_sublist},
  {"last", CVAR, &YgooSmacrosYlast},
  {"case-by", PVAR, NULL},
  {"nul?", CVAR, &YgooSmacrosYnulQ},
  {"napp", CVAR, &YgooSmacrosYnapp},
  {"assert", PVAR, NULL},
  {"decf", PVAR, NULL},
  {"pub", PVAR, NULL},
  {"dlet", PVAR, NULL},
  {"2nd", CVAR, &YgooSmacrosY2nd},
  {"@checked-next-methods", CVAR, &YgooSmacrosYOchecked_next_methods},
  {"unless", PVAR, NULL},
  {"app", PVAR, NULL},
  {"var-name", CVAR, &YgooSmacrosYvar_name},
  {"1st", CVAR, &YgooSmacrosY1st},
  {"rev!", CVAR, &YgooSmacrosYrevX},
  {"match-atom", CVAR, &YgooSmacrosYmatch_atom},
  {"---main-0---", PVAR, NULL},
  {"rotf", PVAR, NULL},
  {"or", PVAR, NULL},
  {"need-implementation", PVAR, NULL},
  {"map2", CVAR, &YgooSmacrosYmap2},
  {"app-sup", PVAR, NULL},
  {"or/set", PVAR, NULL},
  {"macro-error", CVAR, &YgooSmacrosYmacro_error},
  {"fab-setter-name", CVAR, &YgooSmacrosYfab_setter_name},
  {"map", CVAR, &YgooSmacrosYmap},
  {"incf", PVAR, NULL},
  {"match-unquote", CVAR, &YgooSmacrosYmatch_unquote},
  {"---main-1---", PVAR, NULL},
  {"do-case-by", CVAR, &YgooSmacrosYdo_case_by},
  {"gensym", CVAR, &YgooSmacrosYgensym},
  {"do", CVAR, &YgooSmacrosYdo},
  {"swapf", PVAR, NULL},
  {"match", PVAR, NULL},
  {"without-prop-unbound-errors", PVAR, NULL},
  {"until", PVAR, NULL},
  {"pair", CVAR, &YgooSmacrosYpair},
  {"opf", PVAR, NULL},
  {"elt", CVAR, &YgooSmacrosYelt},
  {"for", PVAR, NULL},
  {"cond", PVAR, NULL},
  {"cat-sym", CVAR, &YgooSmacrosYcat_sym},
  {"match-nul-list", CVAR, &YgooSmacrosYmatch_nul_list},
  {"lift-place-subforms", CVAR, &YgooSmacrosYlift_place_subforms},
  {"sup", PVAR, NULL},
  {"==", CVAR, &YgooSmacrosYEE},
  {"and", PVAR, NULL},
  {"var-type", CVAR, &YgooSmacrosYvar_type},
  {"pushf", PVAR, NULL},
  {"case", PVAR, NULL},
  {"when", PVAR, NULL},
  {"while", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"tup", NULL},
  {"popf", NULL},
  {"def-fun-var", NULL},
  {"exported", NULL},
  {"cat", NULL},
  {"renew", NULL},
  {"match-sublist", NULL},
  {"last", NULL},
  {"error", NULL},
  {"case-by", NULL},
  {"nul?", NULL},
  {"assert", NULL},
  {"decf", NULL},
  {"pub", NULL},
  {"2nd", NULL},
  {"@checked-next-methods", NULL},
  {"unless", NULL},
  {"app", NULL},
  {"var-name", NULL},
  {"1st", NULL},
  {"and", NULL},
  {"rev!", NULL},
  {"match-atom", NULL},
  {"rotf", NULL},
  {"or", NULL},
  {"need-implementation", NULL},
  {"map2", NULL},
  {"app-sup", NULL},
  {"or/set", NULL},
  {"dlet", NULL},
  {"macro-error", NULL},
  {"fab-setter-name", NULL},
  {"map", NULL},
  {"incf", NULL},
  {"match-unquote", NULL},
  {"gensym", NULL},
  {"do", NULL},
  {"swapf", NULL},
  {"match", NULL},
  {"without-prop-unbound-errors", NULL},
  {"until", NULL},
  {"pair", NULL},
  {"napp", NULL},
  {"opf", NULL},
  {"elt", NULL},
  {"cond", NULL},
  {"cat-sym", NULL},
  {"match-nul-list", NULL},
  {"lift-place-subforms", NULL},
  {"sup", NULL},
  {"==", NULL},
  {"var-type", NULL},
  {"pushf", NULL},
  {"for", NULL},
  {"case", NULL},
  {"when", NULL},
  {"while", NULL},
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
