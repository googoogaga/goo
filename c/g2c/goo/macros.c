/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/macros");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/macros */

EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yclass_gens,"goo/boot","class-gens");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yclass_id,"goo/boot","class-id");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YgooSmacrosYlast,"goo/macros","last");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOfold,"goo/boot","@fold");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfun_code,"goo/boot","fun-code");
DEF(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yprops_of,"goo/boot","props-of");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YOnew,"goo/boot","@new");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Yerror,"goo/boot","error");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YOelt,"goo/boot","@elt");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YgooSmacrosYmap,"goo/macros","map");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOlit,"goo/boot","@lit");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YPtrue,"goo/boot","%true");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YOdo,"goo/boot","@do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ytail,"goo/boot","tail");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YOmemQ,"goo/boot","@mem?");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YOpick,"goo/boot","@pick");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_info,"goo/boot","fun-info");
DEF(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YPfalse,"goo/boot","%false");
DEF(YgooSmacrosYpair,"goo/macros","pair");
EXT(YOOnulQ,"goo/boot","@@nul?");
DEF(YgooSmacrosYelt,"goo/macros","elt");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YOmap,"goo/boot","@map");
EXT(YLintG,"goo/boot","<int>");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YOtup,"goo/boot","@tup");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yhead,"goo/boot","head");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YOrev,"goo/boot","@rev");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YLmagG,"goo/boot","<mag>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_274);
DEFLIT(lit_13);
DEFLIT(lit_168);
DEFLIT(lit_133);
DEFLIT(lit_33);
DEFLIT(lit_239);
DEFLIT(lit_148);
DEFLIT(lit_199);
DEFLIT(lit_22);
DEFLIT(lit_62);
DEFLIT(lit_137);
DEFLIT(lit_250);
DEFLIT(lit_234);
DEFLIT(lit_55);
DEFLIT(lit_179);
DEFLIT(lit_191);
DEFLIT(lit_190);
DEFLIT(lit_184);
DEFLIT(lit_169);
DEFLIT(lit_3);
DEFLIT(lit_160);
DEFLIT(lit_94);
DEFLIT(lit_68);
DEFLIT(lit_19);
DEFLIT(lit_146);
DEFLIT(lit_34);
DEFLIT(lit_92);
DEFLIT(lit_102);
DEFLIT(lit_275);
DEFLIT(lit_283);
DEFLIT(lit_144);
DEFLIT(lit_266);
DEFLIT(lit_9);
DEFLIT(lit_115);
DEFLIT(lit_165);
DEFLIT(lit_210);
DEFLIT(lit_264);
DEFLIT(lit_20);
DEFLIT(lit_156);
DEFLIT(lit_100);
DEFLIT(lit_211);
DEFLIT(lit_65);
DEFLIT(lit_66);
DEFLIT(lit_87);
DEFLIT(lit_193);
DEFLIT(lit_216);
DEFLIT(lit_255);
DEFLIT(lit_236);
DEFLIT(lit_155);
DEFLIT(lit_111);
DEFLIT(lit_153);
DEFLIT(lit_11);
DEFLIT(lit_124);
DEFLIT(lit_249);
DEFLIT(lit_192);
DEFLIT(lit_8);
DEFLIT(lit_10);
DEFLIT(lit_170);
DEFLIT(lit_175);
DEFLIT(lit_53);
DEFLIT(lit_286);
DEFLIT(lit_83);
DEFLIT(lit_240);
DEFLIT(lit_237);
DEFLIT(lit_135);
DEFLIT(lit_196);
DEFLIT(lit_45);
DEFLIT(lit_25);
DEFLIT(lit_63);
DEFLIT(lit_130);
DEFLIT(lit_36);
DEFLIT(lit_183);
DEFLIT(lit_30);
DEFLIT(lit_151);
DEFLIT(lit_256);
DEFLIT(lit_229);
DEFLIT(lit_54);
DEFLIT(lit_29);
DEFLIT(lit_177);
DEFLIT(lit_6);
DEFLIT(lit_173);
DEFLIT(lit_204);
DEFLIT(lit_79);
DEFLIT(lit_206);
DEFLIT(lit_145);
DEFLIT(lit_267);
DEFLIT(lit_41);
DEFLIT(lit_125);
DEFLIT(lit_14);
DEFLIT(lit_158);
DEFLIT(lit_126);
DEFLIT(lit_80);
DEFLIT(lit_91);
DEFLIT(lit_107);
DEFLIT(lit_116);
DEFLIT(lit_225);
DEFLIT(lit_32);
DEFLIT(lit_218);
DEFLIT(lit_172);
DEFLIT(lit_224);
DEFLIT(lit_81);
DEFLIT(lit_2);
DEFLIT(lit_78);
DEFLIT(lit_47);
DEFLIT(lit_272);
DEFLIT(lit_166);
DEFLIT(lit_157);
DEFLIT(lit_84);
DEFLIT(lit_207);
DEFLIT(lit_262);
DEFLIT(lit_26);
DEFLIT(lit_251);
DEFLIT(lit_273);
DEFLIT(lit_284);
DEFLIT(lit_150);
DEFLIT(lit_171);
DEFLIT(lit_61);
DEFLIT(lit_112);
DEFLIT(lit_58);
DEFLIT(lit_244);
DEFLIT(lit_147);
DEFLIT(lit_176);
DEFLIT(lit_128);
DEFLIT(lit_17);
DEFLIT(lit_167);
DEFLIT(lit_159);
DEFLIT(lit_44);
DEFLIT(lit_241);
DEFLIT(lit_252);
DEFLIT(lit_174);
DEFLIT(lit_120);
DEFLIT(lit_202);
DEFLIT(lit_101);
DEFLIT(lit_213);
DEFLIT(lit_69);
DEFLIT(lit_117);
DEFLIT(lit_164);
DEFLIT(lit_113);
DEFLIT(lit_142);
DEFLIT(lit_18);
DEFLIT(lit_27);
DEFLIT(lit_223);
DEFLIT(lit_106);
DEFLIT(lit_50);
DEFLIT(lit_187);
DEFLIT(lit_75);
DEFLIT(lit_270);
DEFLIT(lit_258);
DEFLIT(lit_56);
DEFLIT(lit_243);
DEFLIT(lit_222);
DEFLIT(lit_131);
DEFLIT(lit_136);
DEFLIT(lit_118);
DEFLIT(lit_24);
DEFLIT(lit_51);
DEFLIT(lit_121);
DEFLIT(lit_98);
DEFLIT(lit_95);
DEFLIT(lit_188);
DEFLIT(lit_161);
DEFLIT(lit_219);
DEFLIT(lit_15);
DEFLIT(lit_186);
DEFLIT(lit_99);
DEFLIT(lit_132);
DEFLIT(lit_39);
DEFLIT(lit_28);
DEFLIT(lit_245);
DEFLIT(lit_4);
DEFLIT(lit_134);
DEFLIT(lit_7);
DEFLIT(lit_38);
DEFLIT(lit_42);
DEFLIT(lit_247);
DEFLIT(lit_97);
DEFLIT(lit_16);
DEFLIT(lit_21);
DEFLIT(lit_60);
DEFLIT(lit_31);
DEFLIT(lit_276);
DEFLIT(lit_178);
DEFLIT(lit_23);
DEFLIT(lit_89);
DEFLIT(lit_71);
DEFLIT(lit_221);
DEFLIT(lit_40);
DEFLIT(lit_86);
DEFLIT(lit_253);
DEFLIT(lit_70);
DEFLIT(lit_260);
DEFLIT(lit_154);
DEFLIT(lit_277);
DEFLIT(lit_189);
DEFLIT(lit_233);
DEFLIT(lit_263);
DEFLIT(lit_281);
DEFLIT(lit_232);
DEFLIT(lit_59);
DEFLIT(lit_46);
DEFLIT(lit_248);
DEFLIT(lit_149);
DEFLIT(lit_88);
DEFLIT(lit_64);
DEFLIT(lit_82);
DEFLIT(lit_103);
DEFLIT(lit_235);
DEFLIT(lit_85);
DEFLIT(lit_123);
DEFLIT(lit_282);
DEFLIT(lit_257);
DEFLIT(lit_162);
DEFLIT(lit_209);
DEFLIT(lit_104);
DEFLIT(lit_52);
DEFLIT(lit_231);
DEFLIT(lit_181);
DEFLIT(lit_201);
DEFLIT(lit_278);
DEFLIT(lit_138);
DEFLIT(lit_285);
DEFLIT(lit_200);
DEFLIT(lit_72);
DEFLIT(lit_67);
DEFLIT(lit_198);
DEFLIT(lit_48);
DEFLIT(lit_182);
DEFLIT(lit_195);
DEFLIT(lit_119);
DEFLIT(lit_163);
DEFLIT(lit_108);
DEFLIT(lit_37);
DEFLIT(lit_230);
DEFLIT(lit_205);
DEFLIT(lit_279);
DEFLIT(lit_76);
DEFLIT(lit_74);
DEFLIT(lit_152);
DEFLIT(lit_1);
DEFLIT(lit_208);
DEFLIT(lit_109);
DEFLIT(lit_238);
DEFLIT(lit_226);
DEFLIT(lit_197);
DEFLIT(lit_35);
DEFLIT(lit_122);
DEFLIT(lit_114);
DEFLIT(lit_242);
DEFLIT(lit_139);
DEFLIT(lit_268);
DEFLIT(lit_227);
DEFLIT(lit_143);
DEFLIT(lit_280);
DEFLIT(lit_5);
DEFLIT(lit_43);
DEFLIT(lit_141);
DEFLIT(lit_180);
DEFLIT(lit_194);
DEFLIT(lit_214);
DEFLIT(lit_49);
DEFLIT(lit_57);
DEFLIT(lit_127);
DEFLIT(lit_254);
DEFLIT(lit_140);
DEFLIT(lit_269);
DEFLIT(lit_246);
DEFLIT(lit_73);
DEFLIT(lit_228);
DEFLIT(lit_203);
DEFLIT(lit_261);
DEFLIT(lit_271);
DEFLIT(lit_220);
DEFLIT(lit_12);
DEFLIT(lit_96);
DEFLIT(lit_265);
DEFLIT(lit_259);
DEFLIT(lit_217);
DEFLIT(lit_105);
DEFLIT(lit_93);
DEFLIT(lit_90);
DEFLIT(lit_215);
DEFLIT(lit_129);
DEFLIT(lit_185);
DEFLIT(lit_77);
DEFLIT(lit_0);
DEFLIT(lit_110);
DEFLIT(lit_212);

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
  P yF1989;
  P xF1988;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(met_, 0);
  ARG(nxt_mets_, 1);
  NARGS(args_, 2);
  if (nxt_mets_ != YPfalse) {
    xF1988 = nxt_mets_;
    yF1989 = Ynil;
    T3 = (P)YPeqQ(xF1988,yF1989);
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
  P x_1111F1996;
  P x_1111F1995;
  P x_1111F1994;
  P x_1111F1993;
  P argsF1992;
  P x_1111F1991;
  P x_1112F1990;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(return_, 0);
  T41 = FUNSHELL(0,fun_x_1112_1,2);
  x_1112F1990 = T41;
  FUNINIT(x_1112F1990, 2,FREEREF(0),return_);
  x_1111F1991 = FREEREF(0);
  argsF1992 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1111F1991,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1111F1991,LITREF(lit_6),x_1112F1990);
    x_1111F1993 = T6;
    argsF1992 = x_1111F1993;
    x_1111F1994 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1111F1994,x_1112F1990);
    x_1111F1995 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1111F1995,x_1112F1990);
    T5 = CALL1(1,VARREF(Ytail),x_1111F1994);
    x_1111F1996 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1111F1996,x_1112F1990);
  } else {
    T7 = CALL2(1,x_1112F1990,LITREF(lit_7),x_1111F1991);
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
  T24 = argsF1992;
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
  T36 = argsF1992;
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
  P x_1115F2003;
  P x_1115F2002;
  P x_1115F2001;
  P x_1115F2000;
  P argsF1999;
  P x_1115F1998;
  P x_1116F1997;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(return_, 0);
  T37 = FUNSHELL(0,fun_x_1116_4,2);
  x_1116F1997 = T37;
  FUNINIT(x_1116F1997, 2,FREEREF(0),return_);
  x_1115F1998 = FREEREF(0);
  argsF1999 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1115F1998,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1115F1998,LITREF(lit_21),x_1116F1997);
    x_1115F2000 = T6;
    argsF1999 = x_1115F2000;
    x_1115F2001 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1115F2001,x_1116F1997);
    x_1115F2002 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1115F2002,x_1116F1997);
    T5 = CALL1(1,VARREF(Ytail),x_1115F2001);
    x_1115F2003 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1115F2003,x_1116F1997);
  } else {
    T7 = CALL2(1,x_1116F1997,LITREF(lit_7),x_1115F1998);
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
  T24 = argsF1999;
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
  T36 = argsF1999;
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
  P x_1119F2012;
  P x_1119F2011;
  P x_1119F2010;
  P x_1119F2009;
  P x_1119F2008;
  P argsF2007;
  P fF2006;
  P x_1119F2005;
  P x_1120F2004;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(return_, 0);
  T17 = FUNSHELL(0,fun_x_1120_7,2);
  x_1120F2004 = T17;
  FUNINIT(x_1120F2004, 2,FREEREF(0),return_);
  x_1119F2005 = FREEREF(0);
  fF2006 = YPfalse;
  argsF2007 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1119F2005,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1119F2005,LITREF(lit_26),x_1120F2004);
    x_1119F2008 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F2008,x_1120F2004);
    fF2006 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1119F2008);
    x_1119F2009 = T8;
    argsF2007 = x_1119F2009;
    x_1119F2010 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1119F2010,x_1120F2004);
    x_1119F2011 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1119F2011,x_1120F2004);
    T6 = CALL1(1,VARREF(Ytail),x_1119F2010);
    x_1119F2012 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1119F2012,x_1120F2004);
  } else {
    T10 = CALL2(1,x_1120F2004,LITREF(lit_7),x_1119F2005);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T14 = fF2006;
  T13 = CALL1(1,VARREF(Ylst),T14);
  T15 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = argsF2007;
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
  P setsF2026;
  P valF2025;
  P initsF2024;
  P setsF2023;
  P varF2022;
  P x_1123F2021;
  P x_1123F2020;
  P x_1123F2019;
  P x_1123F2018;
  P x_1123F2017;
  P prop_initsF2016;
  P xF2015;
  P x_1123F2014;
  P x_1124F2013;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
LINK_STACK();
  ARG(return_, 0);
  T40 = FUNSHELL(0,fun_x_1124_10,2);
  x_1124F2013 = T40;
  FUNINIT(x_1124F2013, 2,FREEREF(0),return_);
  x_1123F2014 = FREEREF(0);
  xF2015 = YPfalse;
  prop_initsF2016 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1123F2014,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1123F2014,LITREF(lit_31),x_1124F2013);
    x_1123F2017 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F2017,x_1124F2013);
    xF2015 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1123F2017);
    x_1123F2018 = T8;
    prop_initsF2016 = x_1123F2018;
    x_1123F2019 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1123F2019,x_1124F2013);
    x_1123F2020 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1123F2020,x_1124F2013);
    T6 = CALL1(1,VARREF(Ytail),x_1123F2019);
    x_1123F2021 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1123F2021,x_1124F2013);
  } else {
    T10 = CALL2(1,x_1124F2013,LITREF(lit_7),x_1123F2014);
  }
  T39 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF2022 = T39;
  setsF2023 = Ynil;
  T38 = prop_initsF2016;
  initsF2024 = T38;
  LOOP_49: {
    P a49_0,a49_1;
    T22 = CALL1(1,VARREF(YgooSmacrosYnulQ),initsF2024);
    if (T22 != YPfalse) {
      T23 = CALL1(1,VARREF(YgooSmacrosYrevX),setsF2023);
      T21 = T23;
    } else {
      T37 = CALL1(1,VARREF(Ytail),initsF2024);
      T36 = CALL1(1,VARREF(Yhead),T37);
      valF2025 = T36;
      T27 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
      T31 = CALL1(1,VARREF(Yhead),initsF2024);
      T30 = CALL1(1,VARREF(Ylst),T31);
      T32 = CALL1(1,VARREF(Ylst),varF2022);
      T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T32,LITREF(lit_11));
      T28 = CALL1(1,VARREF(Ylst),T29);
      T33 = CALL1(1,VARREF(Ylst),valF2025);
      T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T33,LITREF(lit_11));
      T25 = CALL2(1,VARREF(YgooSmacrosYpair),T26,setsF2023);
      T35 = CALL1(1,VARREF(Ytail),initsF2024);
      T34 = CALL1(1,VARREF(Ytail),T35);
      a49_0 = T25;
      a49_1 = T34;
      setsF2023 = a49_0;
      initsF2024 = a49_1;
      goto LOOP_49;
      T21 = T24;
    }
  }
  setsF2026 = T21;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T17 = CALL1(1,VARREF(Ylst),varF2022);
  T19 = xF2015;
  T18 = CALL1(1,VARREF(Ylst),T19);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T20 = CALL1(1,VARREF(Ylst),varF2022);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,setsF2026,T20,LITREF(lit_11));
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
  P gF2031;
  P subformF2030;
  P g_argsF2029;
  P g_declsF2028;
  P tup3F2027;
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
    tup3F2027 = T17;
    T16 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F2027,YPint((P)0));
    g_declsF2028 = T16;
    T15 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F2027,YPint((P)1));
    g_argsF2029 = T15;
    T14 = CALL1(1,VARREF(Yhead),subforms_);
    subformF2030 = T14;
    T4 = CALL2(1,VARREF(YisaQ),subformF2030,VARREF(YLlstG));
    if (T4 != YPfalse) {
      T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
      gF2031 = T11;
      T8 = CALL1(1,VARREF(Ylst),gF2031);
      T9 = CALL1(1,VARREF(Ylst),subformF2030);
      T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,LITREF(lit_11));
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,g_declsF2028);
      T10 = CALL2(1,VARREF(YgooSmacrosYpair),gF2031,g_argsF2029);
      T5 = CALL2(1,VARREF(Ytup),T6,T10);
      T3 = T5;
    } else {
      T13 = CALL2(1,VARREF(YgooSmacrosYpair),subformF2030,g_argsF2029);
      T12 = CALL2(1,VARREF(Ytup),g_declsF2028,T13);
      T3 = T12;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmacrosYlift_place_subforms) {
  P place_;
  P g_argsF2035;
  P g_declsF2034;
  P tup4F2033;
  P munchF2032;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(place_, 0);
  T11 = FUNSHELL(1,fun_munch_13,1);
  munchF2032 = T11;
  FUNINIT(munchF2032, 1,munchF2032);
  T1 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T0 = T2;
  } else {
    T10 = CALL1(1,VARREF(Ytail),place_);
    T9 = CALL1(1,munchF2032,T10);
    tup4F2033 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F2033,YPint((P)0));
    g_declsF2034 = T8;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F2033,YPint((P)1));
    g_argsF2035 = T7;
    T6 = CALL1(1,VARREF(Yhead),place_);
    T5 = CALL1(1,VARREF(Ylst),T6);
    T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,g_argsF2035,LITREF(lit_11));
    T3 = CALL2(1,VARREF(Ytup),g_declsF2034,T4);
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
  P x_1131F2041;
  P x_1131F2040;
  P x_1131F2039;
  P amountF2038;
  P x_1131F2037;
  P x_1132F2036;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(return_, 0);
  T11 = FUNSHELL(0,fun_x_1132_16,1);
  x_1132F2036 = T11;
  FUNINIT(x_1132F2036, 1,return_);
  T10 = BOXGET(FREEREF(0));
  x_1131F2037 = T10;
  amountF2038 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1131F2037,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1131F2037,x_1132F2036);
    amountF2038 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1131F2037);
    x_1131F2039 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1131F2039,x_1132F2036);
    x_1131F2040 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1131F2040,x_1132F2036);
    T5 = CALL1(1,VARREF(Ytail),x_1131F2039);
    x_1131F2041 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1131F2041,x_1132F2036);
  } else {
    T8 = CALL2(1,x_1132F2036,LITREF(lit_7),x_1131F2037);
  }
  T9 = amountF2038;
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_18) {
  P return_;
  P amountF2054;
  P g_placeF2053;
  P g_declsF2052;
  P tup6F2051;
  P x_1129F2050;
  P x_1129F2049;
  P x_1129F2048;
  P x_1129F2047;
  P x_1129F2046;
  P amountF2045;
  P placeF2044;
  P x_1129F2043;
  P x_1130F2042;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(return_, 0);
  T30 = FUNSHELL(0,fun_x_1130_15,2);
  x_1130F2042 = T30;
  FUNINIT(x_1130F2042, 2,FREEREF(0),return_);
  x_1129F2043 = FREEREF(0);
  placeF2044 = YPfalse;
  amountF2045 = YPfalse;
  amountF2045 = BOXFAB(amountF2045);
  T2 = CALL2(1,VARREF(YisaQ),x_1129F2043,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1129F2043,LITREF(lit_41),x_1130F2042);
    x_1129F2046 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1129F2046,x_1130F2042);
    placeF2044 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1129F2046);
    x_1129F2047 = T8;
    BOXPUT(x_1129F2047,amountF2045);
    x_1129F2048 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1129F2048,x_1130F2042);
    x_1129F2049 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1129F2049,x_1130F2042);
    T6 = CALL1(1,VARREF(Ytail),x_1129F2048);
    x_1129F2050 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1129F2050,x_1130F2042);
  } else {
    T10 = CALL2(1,x_1130F2042,LITREF(lit_7),x_1129F2043);
  }
  T29 = placeF2044;
  T28 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T29);
  tup6F2051 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F2051,YPint((P)0));
  g_declsF2052 = T27;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F2051,YPint((P)1));
  g_placeF2053 = T26;
  T25 = FUNFAB(fun_17,1,amountF2045);
  T24 = with_exit(T25);
  amountF2054 = T24;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF2052,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T18 = CALL1(1,VARREF(Ylst),g_placeF2053);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_45));
  T22 = CALL1(1,VARREF(Ylst),g_placeF2053);
  T23 = CALL1(1,VARREF(Ylst),amountF2054);
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
  P x_1139F2060;
  P x_1139F2059;
  P x_1139F2058;
  P amountF2057;
  P x_1139F2056;
  P x_1140F2055;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(return_, 0);
  T11 = FUNSHELL(0,fun_x_1140_21,1);
  x_1140F2055 = T11;
  FUNINIT(x_1140F2055, 1,return_);
  T10 = BOXGET(FREEREF(0));
  x_1139F2056 = T10;
  amountF2057 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1139F2056,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1139F2056,x_1140F2055);
    amountF2057 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1139F2056);
    x_1139F2058 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1139F2058,x_1140F2055);
    x_1139F2059 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1139F2059,x_1140F2055);
    T5 = CALL1(1,VARREF(Ytail),x_1139F2058);
    x_1139F2060 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1139F2060,x_1140F2055);
  } else {
    T8 = CALL2(1,x_1140F2055,LITREF(lit_7),x_1139F2056);
  }
  T9 = amountF2057;
UNLINK_STACK();
  QRET(T9);
}

LOCCODEDEF(fun_23) {
  P return_;
  P amountF2073;
  P g_placeF2072;
  P g_declsF2071;
  P tup8F2070;
  P x_1137F2069;
  P x_1137F2068;
  P x_1137F2067;
  P x_1137F2066;
  P x_1137F2065;
  P amountF2064;
  P placeF2063;
  P x_1137F2062;
  P x_1138F2061;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(return_, 0);
  T30 = FUNSHELL(0,fun_x_1138_20,2);
  x_1138F2061 = T30;
  FUNINIT(x_1138F2061, 2,FREEREF(0),return_);
  x_1137F2062 = FREEREF(0);
  placeF2063 = YPfalse;
  amountF2064 = YPfalse;
  amountF2064 = BOXFAB(amountF2064);
  T2 = CALL2(1,VARREF(YisaQ),x_1137F2062,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1137F2062,LITREF(lit_50),x_1138F2061);
    x_1137F2065 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1137F2065,x_1138F2061);
    placeF2063 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1137F2065);
    x_1137F2066 = T8;
    BOXPUT(x_1137F2066,amountF2064);
    x_1137F2067 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1137F2067,x_1138F2061);
    x_1137F2068 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1137F2068,x_1138F2061);
    T6 = CALL1(1,VARREF(Ytail),x_1137F2067);
    x_1137F2069 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1137F2069,x_1138F2061);
  } else {
    T10 = CALL2(1,x_1138F2061,LITREF(lit_7),x_1137F2062);
  }
  T29 = placeF2063;
  T28 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T29);
  tup8F2070 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F2070,YPint((P)0));
  g_declsF2071 = T27;
  T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F2070,YPint((P)1));
  g_placeF2072 = T26;
  T25 = FUNFAB(fun_22,1,amountF2064);
  T24 = with_exit(T25);
  amountF2073 = T24;
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF2071,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T18 = CALL1(1,VARREF(Ylst),g_placeF2072);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T22 = CALL1(1,VARREF(Ylst),g_placeF2072);
  T23 = CALL1(1,VARREF(Ylst),amountF2073);
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
  P g_placeF2085;
  P g_declsF2084;
  P tup10F2083;
  P x_1143F2082;
  P x_1143F2081;
  P x_1143F2080;
  P x_1143F2079;
  P x_1143F2078;
  P valueF2077;
  P placeF2076;
  P x_1143F2075;
  P x_1144F2074;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(return_, 0);
  T31 = FUNSHELL(0,fun_x_1144_25,2);
  x_1144F2074 = T31;
  FUNINIT(x_1144F2074, 2,FREEREF(0),return_);
  x_1143F2075 = FREEREF(0);
  placeF2076 = YPfalse;
  valueF2077 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1143F2075,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1143F2075,LITREF(lit_59),x_1144F2074);
    x_1143F2078 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1143F2078,x_1144F2074);
    placeF2076 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1143F2078);
    x_1143F2079 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1143F2079,x_1144F2074);
    valueF2077 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1143F2079);
    x_1143F2080 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1143F2080,x_1144F2074);
    x_1143F2081 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1143F2081,x_1144F2074);
    T6 = CALL1(1,VARREF(Ytail),x_1143F2080);
    x_1143F2082 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1143F2082,x_1144F2074);
  } else {
    T12 = CALL2(1,x_1144F2074,LITREF(lit_7),x_1143F2075);
  }
  T30 = placeF2076;
  T29 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T30);
  tup10F2083 = T29;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F2083,YPint((P)0));
  g_declsF2084 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F2083,YPint((P)1));
  g_placeF2085 = T27;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T16 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF2084,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T20 = CALL1(1,VARREF(Ylst),g_placeF2085);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T24 = CALL1(1,VARREF(Ylst),g_placeF2085);
  T26 = valueF2077;
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
  P tmpF2101;
  P yg_placeF2100;
  P yg_declsF2099;
  P tup14F2098;
  P xg_placeF2097;
  P xg_declsF2096;
  P tup13F2095;
  P x_1147F2094;
  P x_1147F2093;
  P x_1147F2092;
  P x_1147F2091;
  P x_1147F2090;
  P yF2089;
  P xF2088;
  P x_1147F2087;
  P x_1148F2086;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
LINK_STACK();
  ARG(return_, 0);
  T40 = FUNSHELL(0,fun_x_1148_28,2);
  x_1148F2086 = T40;
  FUNINIT(x_1148F2086, 2,FREEREF(0),return_);
  x_1147F2087 = FREEREF(0);
  xF2088 = YPfalse;
  yF2089 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1147F2087,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1147F2087,LITREF(lit_65),x_1148F2086);
    x_1147F2090 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1147F2090,x_1148F2086);
    xF2088 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1147F2090);
    x_1147F2091 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1147F2091,x_1148F2086);
    yF2089 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1147F2091);
    x_1147F2092 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1147F2092,x_1148F2086);
    x_1147F2093 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1147F2093,x_1148F2086);
    T6 = CALL1(1,VARREF(Ytail),x_1147F2092);
    x_1147F2094 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1147F2094,x_1148F2086);
  } else {
    T12 = CALL2(1,x_1148F2086,LITREF(lit_7),x_1147F2087);
  }
  T39 = xF2088;
  T38 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T39);
  tup13F2095 = T38;
  T37 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F2095,YPint((P)0));
  xg_declsF2096 = T37;
  T36 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F2095,YPint((P)1));
  xg_placeF2097 = T36;
  T35 = yF2089;
  T34 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T35);
  tup14F2098 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F2098,YPint((P)0));
  yg_declsF2099 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F2098,YPint((P)1));
  yg_placeF2100 = T32;
  T31 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF2101 = T31;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T19 = CALL1(1,VARREF(Ylst),tmpF2101);
  T20 = CALL1(1,VARREF(Ylst),xg_placeF2097);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF2096,yg_declsF2099,T17,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T24 = CALL1(1,VARREF(Ylst),xg_placeF2097);
  T25 = CALL1(1,VARREF(Ylst),yg_placeF2100);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T25,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T29 = CALL1(1,VARREF(Ylst),yg_placeF2100);
  T30 = CALL1(1,VARREF(Ylst),tmpF2101);
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
  P placesF2117;
  P declsF2116;
  P psF2115;
  P tmpsF2114;
  P placesF2113;
  P x_1151F2112;
  P x_1151F2111;
  P x_1151F2110;
  P x_1151F2109;
  P x_1151F2108;
  P x_1151F2107;
  P zsF2106;
  P yF2105;
  P xF2104;
  P x_1151F2103;
  P x_1152F2102;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(return_, 0);
  T42 = FUNSHELL(0,fun_x_1152_31,2);
  x_1152F2102 = T42;
  FUNINIT(x_1152F2102, 2,FREEREF(0),return_);
  x_1151F2103 = FREEREF(0);
  xF2104 = YPfalse;
  yF2105 = YPfalse;
  zsF2106 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1151F2103,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1151F2103,LITREF(lit_70),x_1152F2102);
    x_1151F2107 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1151F2107,x_1152F2102);
    xF2104 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1151F2107);
    x_1151F2108 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1151F2108,x_1152F2102);
    yF2105 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1151F2108);
    x_1151F2109 = T9;
    zsF2106 = x_1151F2109;
    x_1151F2110 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1151F2110,x_1152F2102);
    x_1151F2111 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1151F2111,x_1152F2102);
    T7 = CALL1(1,VARREF(Ytail),x_1151F2110);
    x_1151F2112 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1151F2112,x_1152F2102);
  } else {
    T13 = CALL2(1,x_1152F2102,LITREF(lit_7),x_1151F2103);
  }
  T38 = xF2104;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = yF2105;
  T39 = CALL1(1,VARREF(Ylst),T40);
  T41 = zsF2106;
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T39,T41,LITREF(lit_11));
  placesF2113 = T36;
  T35 = fun_32;
  T34 = CALL2(1,VARREF(YgooSmacrosYmap),T35,placesF2113);
  tmpsF2114 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosYlift_place_subforms),placesF2113);
  psF2115 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY1st),psF2115);
  declsF2116 = T32;
  T31 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY2nd),psF2115);
  placesF2117 = T31;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T18 = CALL3(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmacrosYcat),YPfalse,declsF2116);
  T20 = fun_33;
  T19 = CALL3(1,VARREF(YgooSmacrosYmap2),T20,tmpsF2114,placesF2117);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T19,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T22 = fun_34;
  T23 = CALL1(1,VARREF(Ytail),tmpsF2114);
  T21 = CALL3(1,VARREF(YgooSmacrosYmap2),T22,placesF2117,T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T28 = CALL1(1,VARREF(YgooSmacrosYlast),placesF2117);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T30 = CALL1(1,VARREF(YgooSmacrosY1st),tmpsF2114);
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
  P valF2129;
  P new_colF2128;
  P g_placeF2127;
  P g_declsF2126;
  P tup16F2125;
  P x_1155F2124;
  P x_1155F2123;
  P x_1155F2122;
  P x_1155F2121;
  P placeF2120;
  P x_1155F2119;
  P x_1156F2118;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(return_, 0);
  T37 = FUNSHELL(0,fun_x_1156_37,2);
  x_1156F2118 = T37;
  FUNINIT(x_1156F2118, 2,FREEREF(0),return_);
  x_1155F2119 = FREEREF(0);
  placeF2120 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1155F2119,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1155F2119,LITREF(lit_78),x_1156F2118);
    x_1155F2121 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1155F2121,x_1156F2118);
    placeF2120 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1155F2121);
    x_1155F2122 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1155F2122,x_1156F2118);
    x_1155F2123 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1155F2123,x_1156F2118);
    T5 = CALL1(1,VARREF(Ytail),x_1155F2122);
    x_1155F2124 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1155F2124,x_1156F2118);
  } else {
    T9 = CALL2(1,x_1156F2118,LITREF(lit_7),x_1155F2119);
  }
  T36 = placeF2120;
  T35 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T36);
  tup16F2125 = T35;
  T34 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F2125,YPint((P)0));
  g_declsF2126 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F2125,YPint((P)1));
  g_placeF2127 = T33;
  T32 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF2128 = T32;
  T31 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF2129 = T31;
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T19 = CALL1(1,VARREF(Ylst),new_colF2128);
  T20 = CALL1(1,VARREF(Ylst),valF2129);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T24 = CALL1(1,VARREF(Ylst),g_placeF2127);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T21,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF2126,T14,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T28 = CALL1(1,VARREF(Ylst),g_placeF2127);
  T29 = CALL1(1,VARREF(Ylst),new_colF2128);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T29,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T30 = CALL1(1,VARREF(Ylst),valF2129);
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
  P g_placeF2141;
  P g_declsF2140;
  P tup18F2139;
  P x_1159F2138;
  P x_1159F2137;
  P x_1159F2136;
  P x_1159F2135;
  P x_1159F2134;
  P callF2133;
  P placeF2132;
  P x_1159F2131;
  P x_1160F2130;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(return_, 0);
  T31 = FUNSHELL(0,fun_x_1160_40,2);
  x_1160F2130 = T31;
  FUNINIT(x_1160F2130, 2,FREEREF(0),return_);
  x_1159F2131 = FREEREF(0);
  placeF2132 = YPfalse;
  callF2133 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1159F2131,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1159F2131,LITREF(lit_85),x_1160F2130);
    x_1159F2134 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1159F2134,x_1160F2130);
    placeF2132 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1159F2134);
    x_1159F2135 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1159F2135,x_1160F2130);
    callF2133 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1159F2135);
    x_1159F2136 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1159F2136,x_1160F2130);
    x_1159F2137 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1159F2137,x_1160F2130);
    T6 = CALL1(1,VARREF(Ytail),x_1159F2136);
    x_1159F2138 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1159F2138,x_1160F2130);
  } else {
    T12 = CALL2(1,x_1160F2130,LITREF(lit_7),x_1159F2131);
  }
  T30 = placeF2132;
  T29 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T30);
  tup18F2139 = T29;
  T28 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F2139,YPint((P)0));
  g_declsF2140 = T28;
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F2139,YPint((P)1));
  g_placeF2141 = T27;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T20 = CALL1(1,VARREF(Ylst),g_placeF2141);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF2140,T17,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T24 = CALL1(1,VARREF(Ylst),g_placeF2141);
  T26 = callF2133;
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
  P g_placeF2153;
  P g_declsF2152;
  P tup20F2151;
  P x_1163F2150;
  P x_1163F2149;
  P x_1163F2148;
  P x_1163F2147;
  P x_1163F2146;
  P valueF2145;
  P placeF2144;
  P x_1163F2143;
  P x_1164F2142;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35;
LINK_STACK();
  ARG(return_, 0);
  T35 = FUNSHELL(0,fun_x_1164_43,2);
  x_1164F2142 = T35;
  FUNINIT(x_1164F2142, 2,FREEREF(0),return_);
  x_1163F2143 = FREEREF(0);
  placeF2144 = YPfalse;
  valueF2145 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1163F2143,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1163F2143,LITREF(lit_91),x_1164F2142);
    x_1163F2146 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1163F2146,x_1164F2142);
    placeF2144 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1163F2146);
    x_1163F2147 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1163F2147,x_1164F2142);
    valueF2145 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1163F2147);
    x_1163F2148 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1163F2148,x_1164F2142);
    x_1163F2149 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1163F2149,x_1164F2142);
    T6 = CALL1(1,VARREF(Ytail),x_1163F2148);
    x_1163F2150 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1163F2150,x_1164F2142);
  } else {
    T12 = CALL2(1,x_1164F2142,LITREF(lit_7),x_1163F2143);
  }
  T34 = placeF2144;
  T33 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T34);
  tup20F2151 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F2151,YPint((P)0));
  g_declsF2152 = T32;
  T31 = CALL2(1,VARREF(YgooSmacrosYelt),tup20F2151,YPint((P)1));
  g_placeF2153 = T31;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T20 = CALL1(1,VARREF(Ylst),g_placeF2153);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF2152,T17,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T24 = CALL1(1,VARREF(Ylst),g_placeF2153);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T28 = CALL1(1,VARREF(Ylst),g_placeF2153);
  T30 = valueF2145;
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
  P x_1167F2162;
  P x_1167F2161;
  P x_1167F2160;
  P x_1167F2159;
  P x_1167F2158;
  P bodyF2157;
  P testF2156;
  P x_1167F2155;
  P x_1168F2154;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(return_, 0);
  T22 = FUNSHELL(0,fun_x_1168_46,2);
  x_1168F2154 = T22;
  FUNINIT(x_1168F2154, 2,FREEREF(0),return_);
  x_1167F2155 = FREEREF(0);
  testF2156 = YPfalse;
  bodyF2157 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1167F2155,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1167F2155,LITREF(lit_97),x_1168F2154);
    x_1167F2158 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1167F2158,x_1168F2154);
    testF2156 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1167F2158);
    x_1167F2159 = T8;
    bodyF2157 = x_1167F2159;
    x_1167F2160 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1167F2160,x_1168F2154);
    x_1167F2161 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1167F2161,x_1168F2154);
    T6 = CALL1(1,VARREF(Ytail),x_1167F2160);
    x_1167F2162 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1167F2162,x_1168F2154);
  } else {
    T10 = CALL2(1,x_1168F2154,LITREF(lit_7),x_1167F2155);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T17 = testF2156;
  T16 = CALL1(1,VARREF(Ylst),T17);
  T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,LITREF(lit_11));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T21 = bodyF2157;
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
  P x_1171F2171;
  P x_1171F2170;
  P x_1171F2169;
  P x_1171F2168;
  P x_1171F2167;
  P bodyF2166;
  P testF2165;
  P x_1171F2164;
  P x_1172F2163;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1172_49,2);
  x_1172F2163 = T19;
  FUNINIT(x_1172F2163, 2,FREEREF(0),return_);
  x_1171F2164 = FREEREF(0);
  testF2165 = YPfalse;
  bodyF2166 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1171F2164,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1171F2164,LITREF(lit_105),x_1172F2163);
    x_1171F2167 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1171F2167,x_1172F2163);
    testF2165 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1171F2167);
    x_1171F2168 = T8;
    bodyF2166 = x_1171F2168;
    x_1171F2169 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1171F2169,x_1172F2163);
    x_1171F2170 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1171F2170,x_1172F2163);
    T6 = CALL1(1,VARREF(Ytail),x_1171F2169);
    x_1171F2171 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1171F2171,x_1172F2163);
  } else {
    T10 = CALL2(1,x_1172F2163,LITREF(lit_7),x_1171F2164);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T14 = testF2165;
  T13 = CALL1(1,VARREF(Ylst),T14);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T18 = bodyF2166;
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
  P x_1183F2173;
  P x_1184F2172;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(return_, 0);
  T5 = FUNSHELL(0,fun_x_1184_54,3);
  x_1184F2172 = T5;
  FUNINIT(x_1184F2172, 3,FREEREF(0),FREEREF(1),return_);
  T4 = BOXGET(FREEREF(1));
  x_1183F2173 = T4;
  T0 = CALL2(1,VARREF(YisaQ),x_1183F2173,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1183F2173,x_1184F2172);
  } else {
    T2 = CALL2(1,x_1184F2172,LITREF(lit_7),x_1183F2173);
  }
  T3 = BOXGET(FREEREF(0));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_56) {
  P return_;
  P x_1181F2181;
  P x_1181F2180;
  P x_1181F2179;
  P x_1181F2178;
  P restF2177;
  P xF2176;
  P x_1181F2175;
  P x_1182F2174;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1182_53,1);
  x_1182F2174 = T13;
  FUNINIT(x_1182F2174, 1,return_);
  T12 = BOXGET(FREEREF(0));
  x_1181F2175 = T12;
  xF2176 = YPfalse;
  xF2176 = BOXFAB(xF2176);
  restF2177 = YPfalse;
  restF2177 = BOXFAB(restF2177);
  T2 = CALL2(1,VARREF(YisaQ),x_1181F2175,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1181F2175,x_1182F2174);
    BOXPUT(T7,xF2176);
    T8 = CALL1(1,VARREF(Ytail),x_1181F2175);
    x_1181F2178 = T8;
    BOXPUT(x_1181F2178,restF2177);
    x_1181F2179 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1181F2179,x_1182F2174);
    x_1181F2180 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1181F2180,x_1182F2174);
    T6 = CALL1(1,VARREF(Ytail),x_1181F2179);
    x_1181F2181 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1181F2181,x_1182F2174);
  } else {
    T9 = CALL2(1,x_1182F2174,LITREF(lit_7),x_1181F2175);
  }
  T11 = FUNFAB(fun_55,2,xF2176,restF2177);
  T10 = with_exit(T11);
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_57) {
  P return_;
  P x_1179F2188;
  P x_1179F2187;
  P x_1179F2186;
  P x_1179F2185;
  P restF2184;
  P x_1179F2183;
  P x_1180F2182;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(return_, 0);
  T10 = FUNSHELL(0,fun_x_1180_52,2);
  x_1180F2182 = T10;
  FUNINIT(x_1180F2182, 2,FREEREF(0),return_);
  x_1179F2183 = FREEREF(0);
  restF2184 = YPfalse;
  restF2184 = BOXFAB(restF2184);
  T1 = CALL2(1,VARREF(YisaQ),x_1179F2183,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1179F2183,LITREF(lit_92),x_1180F2182);
    x_1179F2185 = T6;
    BOXPUT(x_1179F2185,restF2184);
    x_1179F2186 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1179F2186,x_1180F2182);
    x_1179F2187 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1179F2187,x_1180F2182);
    T5 = CALL1(1,VARREF(Ytail),x_1179F2186);
    x_1179F2188 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1179F2188,x_1180F2182);
  } else {
    T7 = CALL2(1,x_1180F2182,LITREF(lit_7),x_1179F2183);
  }
  T9 = FUNFAB(fun_56,1,restF2184);
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
  P x_1195F2190;
  P x_1196F2189;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(return_, 0);
  T5 = FUNSHELL(0,fun_x_1196_61,3);
  x_1196F2189 = T5;
  FUNINIT(x_1196F2189, 3,FREEREF(0),FREEREF(1),return_);
  T4 = BOXGET(FREEREF(1));
  x_1195F2190 = T4;
  T0 = CALL2(1,VARREF(YisaQ),x_1195F2190,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1195F2190,x_1196F2189);
  } else {
    T2 = CALL2(1,x_1196F2189,LITREF(lit_7),x_1195F2190);
  }
  T3 = BOXGET(FREEREF(0));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_63) {
  P return_;
  P x_1193F2198;
  P x_1193F2197;
  P x_1193F2196;
  P x_1193F2195;
  P restF2194;
  P xF2193;
  P x_1193F2192;
  P x_1194F2191;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1194_60,1);
  x_1194F2191 = T13;
  FUNINIT(x_1194F2191, 1,return_);
  T12 = BOXGET(FREEREF(0));
  x_1193F2192 = T12;
  xF2193 = YPfalse;
  xF2193 = BOXFAB(xF2193);
  restF2194 = YPfalse;
  restF2194 = BOXFAB(restF2194);
  T2 = CALL2(1,VARREF(YisaQ),x_1193F2192,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1193F2192,x_1194F2191);
    BOXPUT(T7,xF2193);
    T8 = CALL1(1,VARREF(Ytail),x_1193F2192);
    x_1193F2195 = T8;
    BOXPUT(x_1193F2195,restF2194);
    x_1193F2196 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1193F2196,x_1194F2191);
    x_1193F2197 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1193F2197,x_1194F2191);
    T6 = CALL1(1,VARREF(Ytail),x_1193F2196);
    x_1193F2198 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1193F2198,x_1194F2191);
  } else {
    T9 = CALL2(1,x_1194F2191,LITREF(lit_7),x_1193F2192);
  }
  T11 = FUNFAB(fun_62,2,xF2193,restF2194);
  T10 = with_exit(T11);
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_64) {
  P return_;
  P x_1191F2205;
  P x_1191F2204;
  P x_1191F2203;
  P x_1191F2202;
  P restF2201;
  P x_1191F2200;
  P x_1192F2199;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(return_, 0);
  T10 = FUNSHELL(0,fun_x_1192_59,2);
  x_1192F2199 = T10;
  FUNINIT(x_1192F2199, 2,FREEREF(0),return_);
  x_1191F2200 = FREEREF(0);
  restF2201 = YPfalse;
  restF2201 = BOXFAB(restF2201);
  T1 = CALL2(1,VARREF(YisaQ),x_1191F2200,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1191F2200,LITREF(lit_121),x_1192F2199);
    x_1191F2202 = T6;
    BOXPUT(x_1191F2202,restF2201);
    x_1191F2203 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1191F2203,x_1192F2199);
    x_1191F2204 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1191F2204,x_1192F2199);
    T5 = CALL1(1,VARREF(Ytail),x_1191F2203);
    x_1191F2205 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1191F2205,x_1192F2199);
  } else {
    T7 = CALL2(1,x_1192F2199,LITREF(lit_7),x_1191F2200);
  }
  T9 = FUNFAB(fun_63,1,restF2201);
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
  P x_1203F2213;
  P x_1203F2212;
  P x_1203F2211;
  P x_1203F2210;
  P bodyF2209;
  P condF2208;
  P x_1203F2207;
  P x_1204F2206;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(return_, 0);
  T25 = FUNSHELL(0,fun_x_1204_67,2);
  x_1204F2206 = T25;
  FUNINIT(x_1204F2206, 2,FREEREF(0),return_);
  T24 = BOXGET(FREEREF(0));
  T23 = CALL1(1,VARREF(Yhead),T24);
  x_1203F2207 = T23;
  condF2208 = YPfalse;
  bodyF2209 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1203F2207,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1203F2207,x_1204F2206);
    condF2208 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1203F2207);
    x_1203F2210 = T8;
    bodyF2209 = x_1203F2210;
    x_1203F2211 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1203F2211,x_1204F2206);
    x_1203F2212 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1203F2212,x_1204F2206);
    T6 = CALL1(1,VARREF(Ytail),x_1203F2211);
    x_1203F2213 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1203F2213,x_1204F2206);
  } else {
    T9 = CALL2(1,x_1204F2206,LITREF(lit_7),x_1203F2207);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T13 = condF2208;
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T17 = bodyF2209;
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
  P x_1201F2220;
  P x_1201F2219;
  P x_1201F2218;
  P x_1201F2217;
  P casesF2216;
  P x_1201F2215;
  P x_1202F2214;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1202_66,2);
  x_1202F2214 = T13;
  FUNINIT(x_1202F2214, 2,FREEREF(0),return_);
  x_1201F2215 = FREEREF(0);
  casesF2216 = YPfalse;
  casesF2216 = BOXFAB(casesF2216);
  T1 = CALL2(1,VARREF(YisaQ),x_1201F2215,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1201F2215,LITREF(lit_132),x_1202F2214);
    x_1201F2217 = T6;
    BOXPUT(x_1201F2217,casesF2216);
    x_1201F2218 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1201F2218,x_1202F2214);
    x_1201F2219 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1201F2219,x_1202F2214);
    T5 = CALL1(1,VARREF(Ytail),x_1201F2218);
    x_1201F2220 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1201F2220,x_1202F2214);
  } else {
    T7 = CALL2(1,x_1202F2214,LITREF(lit_7),x_1201F2215);
  }
  T10 = BOXGET(casesF2216);
  T9 = CALL1(1,VARREF(YgooSmacrosYnulQ),T10);
  if (T9 != YPfalse) {
    T8 = YPfalse;
  } else {
    T12 = FUNFAB(fun_68,1,casesF2216);
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
  P x_1211F2226;
  P x_1211F2225;
  P x_1211F2224;
  P valuesF2223;
  P x_1211F2222;
  P x_1212F2221;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(return_, 0);
  T23 = FUNSHELL(0,fun_x_1212_72,2);
  x_1212F2221 = T23;
  FUNINIT(x_1212F2221, 2,FREEREF(0),return_);
  T22 = BOXGET(FREEREF(1));
  x_1211F2222 = T22;
  valuesF2223 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1211F2222,VARREF(YLlstG));
  if (T1 != YPfalse) {
    valuesF2223 = x_1211F2222;
    x_1211F2224 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1211F2224,x_1212F2221);
    x_1211F2225 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1211F2225,x_1212F2221);
    T5 = CALL1(1,VARREF(Ytail),x_1211F2224);
    x_1211F2226 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1211F2226,x_1212F2221);
  } else {
    T6 = CALL2(1,x_1212F2221,LITREF(lit_7),x_1211F2222);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T13 = FUNFAB(fun_73,2,FREEREF(2),FREEREF(3));
  T14 = valuesF2223;
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
  P x_1209F2234;
  P x_1209F2233;
  P x_1209F2232;
  P x_1209F2231;
  P bodyF2230;
  P condF2229;
  P x_1209F2228;
  P x_1210F2227;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1210_71,2);
  x_1210F2227 = T19;
  FUNINIT(x_1210F2227, 2,FREEREF(0),return_);
  T18 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1209F2228 = T18;
  condF2229 = YPfalse;
  condF2229 = BOXFAB(condF2229);
  bodyF2230 = YPfalse;
  bodyF2230 = BOXFAB(bodyF2230);
  T2 = CALL2(1,VARREF(YisaQ),x_1209F2228,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1209F2228,x_1210F2227);
    BOXPUT(T7,condF2229);
    T8 = CALL1(1,VARREF(Ytail),x_1209F2228);
    x_1209F2231 = T8;
    BOXPUT(x_1209F2231,bodyF2230);
    x_1209F2232 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1209F2232,x_1210F2227);
    x_1209F2233 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1209F2233,x_1210F2227);
    T6 = CALL1(1,VARREF(Ytail),x_1209F2232);
    x_1209F2234 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1209F2234,x_1210F2227);
  } else {
    T9 = CALL2(1,x_1210F2227,LITREF(lit_7),x_1209F2228);
  }
  T12 = BOXGET(condF2229);
  T11 = CALL2(1,VARREF(YgooSmacrosYEE),T12,YPtrue);
  if (T11 != YPfalse) {
    T14 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T15 = BOXGET(bodyF2230);
    T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_11));
    T10 = T13;
  } else {
    T17 = FUNFAB(fun_74,5,FREEREF(0),condF2229,FREEREF(1),FREEREF(2),bodyF2230);
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
  P tst_varF2247;
  P val_varF2246;
  P x_1215F2245;
  P x_1215F2244;
  P x_1215F2243;
  P x_1215F2242;
  P x_1215F2241;
  P x_1215F2240;
  P casesF2239;
  P tstF2238;
  P valF2237;
  P x_1215F2236;
  P x_1216F2235;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(return_, 0);
  T33 = FUNSHELL(0,fun_x_1216_77,2);
  x_1216F2235 = T33;
  FUNINIT(x_1216F2235, 2,FREEREF(0),return_);
  x_1215F2236 = FREEREF(0);
  valF2237 = YPfalse;
  tstF2238 = YPfalse;
  casesF2239 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1215F2236,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1215F2236,LITREF(lit_152),x_1216F2235);
    x_1215F2240 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F2240,x_1216F2235);
    valF2237 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1215F2240);
    x_1215F2241 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F2241,x_1216F2235);
    tstF2238 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1215F2241);
    x_1215F2242 = T9;
    casesF2239 = x_1215F2242;
    x_1215F2243 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1215F2243,x_1216F2235);
    x_1215F2244 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1215F2244,x_1216F2235);
    T7 = CALL1(1,VARREF(Ytail),x_1215F2243);
    x_1215F2245 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1215F2245,x_1216F2235);
  } else {
    T13 = CALL2(1,x_1216F2235,LITREF(lit_7),x_1215F2236);
  }
  T32 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF2246 = T32;
  T31 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF2247 = T31;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T20 = CALL1(1,VARREF(Ylst),val_varF2246);
  T22 = valF2237;
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,LITREF(lit_11));
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),tst_varF2247);
  T27 = tstF2238;
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T23,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T30 = casesF2239;
  T29 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF2246,tst_varF2247,T30);
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
  P x_1219F2256;
  P x_1219F2255;
  P x_1219F2254;
  P x_1219F2253;
  P x_1219F2252;
  P casesF2251;
  P valF2250;
  P x_1219F2249;
  P x_1220F2248;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(return_, 0);
  T17 = FUNSHELL(0,fun_x_1220_80,2);
  x_1220F2248 = T17;
  FUNINIT(x_1220F2248, 2,FREEREF(0),return_);
  x_1219F2249 = FREEREF(0);
  valF2250 = YPfalse;
  casesF2251 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1219F2249,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1219F2249,LITREF(lit_157),x_1220F2248);
    x_1219F2252 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1219F2252,x_1220F2248);
    valF2250 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1219F2252);
    x_1219F2253 = T8;
    casesF2251 = x_1219F2253;
    x_1219F2254 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1219F2254,x_1220F2248);
    x_1219F2255 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1219F2255,x_1220F2248);
    T6 = CALL1(1,VARREF(Ytail),x_1219F2254);
    x_1219F2256 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1219F2256,x_1220F2248);
  } else {
    T10 = CALL2(1,x_1220F2248,LITREF(lit_7),x_1219F2249);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
  T14 = valF2250;
  T13 = CALL1(1,VARREF(Ylst),T14);
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T16 = casesF2251;
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
  P varF2271;
  P x_1231F2270;
  P x_1231F2269;
  P x_1231F2268;
  P x_1231F2267;
  P x_1231F2266;
  P x_1231F2265;
  P x_1231F2264;
  P x_1231F2263;
  P x_1231F2262;
  P restF2261;
  P thenF2260;
  P patF2259;
  P x_1231F2258;
  P x_1232F2257;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
LINK_STACK();
  ARG(return_, 0);
  T51 = FUNSHELL(0,fun_x_1232_84,1);
  x_1232F2257 = T51;
  FUNINIT(x_1232F2257, 1,return_);
  T50 = BOXGET(FREEREF(0));
  x_1231F2258 = T50;
  patF2259 = YPfalse;
  thenF2260 = YPfalse;
  restF2261 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1231F2258,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F2258,x_1232F2257);
    x_1231F2262 = T14;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F2262,x_1232F2257);
    patF2259 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1231F2262);
    x_1231F2263 = T13;
    thenF2260 = x_1231F2263;
    x_1231F2264 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F2264,x_1232F2257);
    x_1231F2265 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1231F2265,x_1232F2257);
    T11 = CALL1(1,VARREF(Ytail),x_1231F2264);
    x_1231F2266 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1231F2266,x_1232F2257);
    T15 = CALL1(1,VARREF(Ytail),x_1231F2258);
    x_1231F2267 = T15;
    restF2261 = x_1231F2267;
    x_1231F2268 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F2268,x_1232F2257);
    x_1231F2269 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1231F2269,x_1232F2257);
    T7 = CALL1(1,VARREF(Ytail),x_1231F2268);
    x_1231F2270 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1231F2270,x_1232F2257);
  } else {
    T16 = CALL2(1,x_1232F2257,LITREF(lit_7),x_1231F2258);
  }
  T19 = patF2259;
  T18 = CALL2(1,VARREF(YgooSmacrosYEE),T19,YPtrue);
  if (T18 != YPfalse) {
    T21 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T22 = thenF2260;
    T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_11));
    T17 = T20;
  } else {
    T49 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF2271 = T49;
    T24 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
    T29 = CALL1(1,VARREF(Ylst),varF2271);
    T31 = BOXGET(FREEREF(1));
    T30 = CALL1(1,VARREF(Ylst),T31);
    T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_11));
    T27 = CALL1(1,VARREF(Ylst),T28);
    T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,LITREF(lit_11));
    T25 = CALL1(1,VARREF(Ylst),T26);
    T34 = CALL1(1,VARREF(Ylst),LITREF(lit_171));
    T38 = patF2259;
    T37 = CALL1(1,VARREF(Ylst),T38);
    T39 = CALL1(1,VARREF(Ylst),varF2271);
    T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T39,LITREF(lit_11));
    T35 = CALL1(1,VARREF(Ylst),T36);
    T42 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T43 = thenF2260;
    T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_11));
    T40 = CALL1(1,VARREF(Ylst),T41);
    T46 = CALL1(1,VARREF(Ylst),LITREF(lit_163));
    T47 = CALL1(1,VARREF(Ylst),varF2271);
    T48 = restF2261;
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
  P x_1229F2273;
  P x_1230F2272;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(return_, 0);
  T7 = FUNSHELL(0,fun_x_1230_86,3);
  x_1230F2272 = T7;
  FUNINIT(x_1230F2272, 3,FREEREF(0),FREEREF(1),return_);
  T6 = BOXGET(FREEREF(0));
  x_1229F2273 = T6;
  T0 = CALL2(1,VARREF(YisaQ),x_1229F2273,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1229F2273,x_1230F2272);
  } else {
    T2 = CALL2(1,x_1230F2272,LITREF(lit_7),x_1229F2273);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_172));
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_173));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_11));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_88) {
  P return_;
  P x_1227F2282;
  P x_1227F2281;
  P x_1227F2280;
  P x_1227F2279;
  P x_1227F2278;
  P casesF2277;
  P expF2276;
  P x_1227F2275;
  P x_1228F2274;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1228_83,2);
  x_1228F2274 = T13;
  FUNINIT(x_1228F2274, 2,FREEREF(0),return_);
  x_1227F2275 = FREEREF(0);
  expF2276 = YPfalse;
  expF2276 = BOXFAB(expF2276);
  casesF2277 = YPfalse;
  casesF2277 = BOXFAB(casesF2277);
  T2 = CALL2(1,VARREF(YisaQ),x_1227F2275,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1227F2275,LITREF(lit_163),x_1228F2274);
    x_1227F2278 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F2278,x_1228F2274);
    BOXPUT(T7,expF2276);
    T8 = CALL1(1,VARREF(Ytail),x_1227F2278);
    x_1227F2279 = T8;
    BOXPUT(x_1227F2279,casesF2277);
    x_1227F2280 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1227F2280,x_1228F2274);
    x_1227F2281 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1227F2281,x_1228F2274);
    T6 = CALL1(1,VARREF(Ytail),x_1227F2280);
    x_1227F2282 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1227F2282,x_1228F2274);
  } else {
    T10 = CALL2(1,x_1228F2274,LITREF(lit_7),x_1227F2275);
  }
  T12 = FUNFAB(fun_87,2,casesF2277,expF2276);
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
  P x_1235F2293;
  P x_1235F2292;
  P x_1235F2291;
  P x_1235F2290;
  P x_1235F2289;
  P x_1235F2288;
  P argsF2287;
  P messageF2286;
  P condF2285;
  P x_1235F2284;
  P x_1236F2283;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(return_, 0);
  T27 = FUNSHELL(0,fun_x_1236_90,2);
  x_1236F2283 = T27;
  FUNINIT(x_1236F2283, 2,FREEREF(0),return_);
  x_1235F2284 = FREEREF(0);
  condF2285 = YPfalse;
  messageF2286 = YPfalse;
  argsF2287 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1235F2284,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1235F2284,LITREF(lit_178),x_1236F2283);
    x_1235F2288 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F2288,x_1236F2283);
    condF2285 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1235F2288);
    x_1235F2289 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F2289,x_1236F2283);
    messageF2286 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1235F2289);
    x_1235F2290 = T9;
    argsF2287 = x_1235F2290;
    x_1235F2291 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1235F2291,x_1236F2283);
    x_1235F2292 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1235F2292,x_1236F2283);
    T7 = CALL1(1,VARREF(Ytail),x_1235F2291);
    x_1235F2293 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1235F2293,x_1236F2283);
  } else {
    T13 = CALL2(1,x_1236F2283,LITREF(lit_7),x_1235F2284);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_99));
  T20 = condF2285;
  T19 = CALL1(1,VARREF(Ylst),T20);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T19,LITREF(lit_11));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_179));
  T25 = messageF2286;
  T24 = CALL1(1,VARREF(Ylst),T25);
  T26 = argsF2287;
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
  P x_1247F2302;
  P x_1247F2301;
  P x_1247F2300;
  P x_1247F2299;
  P x_1247F2298;
  P valF2297;
  P keyF2296;
  P x_1247F2295;
  P x_1248F2294;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(return_, 0);
  T33 = FUNSHELL(0,fun_x_1248_95,3);
  x_1248F2294 = T33;
  FUNINIT(x_1248F2294, 3,FREEREF(0),FREEREF(1),return_);
  T32 = BOXGET(FREEREF(0));
  x_1247F2295 = T32;
  keyF2296 = YPfalse;
  valF2297 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1247F2295,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1247F2295,LITREF(lit_79),x_1248F2294);
    x_1247F2298 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1247F2298,x_1248F2294);
    keyF2296 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1247F2298);
    x_1247F2299 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1247F2299,x_1248F2294);
    valF2297 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1247F2299);
    x_1247F2300 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1247F2300,x_1248F2294);
    x_1247F2301 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1247F2301,x_1248F2294);
    T6 = CALL1(1,VARREF(Ytail),x_1247F2300);
    x_1247F2302 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1247F2302,x_1248F2294);
  } else {
    T12 = CALL2(1,x_1248F2294,LITREF(lit_7),x_1247F2295);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T18 = keyF2296;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T20 = valF2297;
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
  P stateF2311;
  P x_1245F2310;
  P x_1245F2309;
  P x_1245F2308;
  P x_1245F2307;
  P expF2306;
  P varF2305;
  P x_1245F2304;
  P x_1246F2303;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(return_, 0);
  T34 = FUNSHELL(0,fun_x_1246_94,1);
  x_1246F2303 = T34;
  FUNINIT(x_1246F2303, 1,return_);
  x_1245F2304 = FREEREF(0);
  varF2305 = YPfalse;
  varF2305 = BOXFAB(varF2305);
  expF2306 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1245F2304,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1245F2304,x_1246F2303);
    BOXPUT(T9,varF2305);
    T10 = CALL1(1,VARREF(Ytail),x_1245F2304);
    x_1245F2307 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1245F2307,x_1246F2303);
    expF2306 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1245F2307);
    x_1245F2308 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1245F2308,x_1246F2303);
    x_1245F2309 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1245F2309,x_1246F2303);
    T6 = CALL1(1,VARREF(Ytail),x_1245F2308);
    x_1245F2310 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1245F2310,x_1246F2303);
  } else {
    T11 = CALL2(1,x_1246F2303,LITREF(lit_7),x_1245F2304);
  }
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF2311 = T33;
  T13 = CALL1(1,VARREF(Ytail),FREEREF(1));
  T16 = CALL1(1,VARREF(Ylst),stateF2311);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_191));
  T21 = expF2306;
  T20 = CALL1(1,VARREF(Ylst),T21);
  T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,LITREF(lit_11));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL2(1,VARREF(YgooSmacrosYpair),T15,FREEREF(2));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
  T25 = CALL1(1,VARREF(Ylst),stateF2311);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_11));
  T22 = CALL2(1,VARREF(YgooSmacrosYpair),T23,FREEREF(3));
  T28 = FUNFAB(fun_96,2,varF2305,stateF2311);
  T27 = with_exit(T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYpair),T27,FREEREF(4));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_198));
  T32 = CALL1(1,VARREF(Ylst),stateF2311);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,LITREF(lit_11));
  T29 = CALL2(1,VARREF(YgooSmacrosYpair),T30,FREEREF(5));
  T12 = CALL5(1,FREEREF(6),T13,T14,T22,T26,T29);
UNLINK_STACK();
  QRET(T12);
}

LOCCODEDEF(fun_grok_98) {
  P clauses_,inits_,preds_,nows_,nexts_;
  P clauseF2313;
  P loopF2312;
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
    loopF2312 = T20;
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
    T4 = CALL1(1,VARREF(Ylst),loopF2312);
    T5 = CALL1(1,VARREF(Ylst),inits_);
    T8 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
    T11 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
    T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,preds_,LITREF(lit_11));
    T9 = CALL1(1,VARREF(Ylst),T10);
    T14 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
    T15 = CALL1(1,VARREF(Ylst),nows_);
    T16 = BOXGET(FREEREF(0));
    T19 = CALL1(1,VARREF(Ylst),loopF2312);
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
    clauseF2313 = T23;
    T22 = FUNFAB(fun_97,7,clauseF2313,clauses_,inits_,preds_,nows_,nexts_,FREEREF(1));
    T21 = with_exit(T22);
    T0 = T21;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_99) {
  P return_;
  P grokF2327;
  P x_1243F2326;
  P x_1243F2325;
  P x_1243F2324;
  P x_1243F2323;
  P x_1243F2322;
  P x_1243F2321;
  P x_1243F2320;
  P x_1243F2319;
  P x_1243F2318;
  P bodyF2317;
  P clausesF2316;
  P x_1243F2315;
  P x_1244F2314;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(return_, 0);
  T18 = FUNSHELL(0,fun_x_1244_93,2);
  x_1244F2314 = T18;
  FUNINIT(x_1244F2314, 2,FREEREF(0),return_);
  x_1243F2315 = FREEREF(0);
  clausesF2316 = YPfalse;
  bodyF2317 = YPfalse;
  bodyF2317 = BOXFAB(bodyF2317);
  T2 = CALL2(1,VARREF(YisaQ),x_1243F2315,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1243F2315,LITREF(lit_184),x_1244F2314);
    x_1243F2318 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1243F2318,x_1244F2314);
    x_1243F2319 = T11;
    clausesF2316 = x_1243F2319;
    x_1243F2320 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1243F2320,x_1244F2314);
    x_1243F2321 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1243F2321,x_1244F2314);
    T10 = CALL1(1,VARREF(Ytail),x_1243F2320);
    x_1243F2322 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1243F2322,x_1244F2314);
    T12 = CALL1(1,VARREF(Ytail),x_1243F2318);
    x_1243F2323 = T12;
    BOXPUT(x_1243F2323,bodyF2317);
    x_1243F2324 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1243F2324,x_1244F2314);
    x_1243F2325 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1243F2325,x_1244F2314);
    T6 = CALL1(1,VARREF(Ytail),x_1243F2324);
    x_1243F2326 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1243F2326,x_1244F2314);
  } else {
    T14 = CALL2(1,x_1244F2314,LITREF(lit_7),x_1243F2315);
  }
  T17 = FUNSHELL(1,fun_grok_98,2);
  grokF2327 = T17;
  FUNINIT(grokF2327, 2,bodyF2317,grokF2327);
  T16 = clausesF2316;
  T15 = CALL5(1,grokF2327,T16,Ynil,Ynil,Ynil,Ynil);
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
  P x_1251F2336;
  P x_1251F2335;
  P x_1251F2334;
  P x_1251F2333;
  P x_1251F2332;
  P bodyF2331;
  P testF2330;
  P x_1251F2329;
  P x_1252F2328;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_1252_101,2);
  x_1252F2328 = T24;
  FUNINIT(x_1252F2328, 2,FREEREF(0),return_);
  x_1251F2329 = FREEREF(0);
  testF2330 = YPfalse;
  bodyF2331 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1251F2329,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1251F2329,LITREF(lit_203),x_1252F2328);
    x_1251F2332 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1251F2332,x_1252F2328);
    testF2330 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1251F2332);
    x_1251F2333 = T8;
    bodyF2331 = x_1251F2333;
    x_1251F2334 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1251F2334,x_1252F2328);
    x_1251F2335 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1251F2335,x_1252F2328);
    T6 = CALL1(1,VARREF(Ytail),x_1251F2334);
    x_1251F2336 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1251F2336,x_1252F2328);
  } else {
    T10 = CALL2(1,x_1252F2328,LITREF(lit_7),x_1251F2329);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T14 = CALL1(1,VARREF(Ylst),Ynil);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_105));
  T19 = testF2330;
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = bodyF2331;
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
  P x_1255F2345;
  P x_1255F2344;
  P x_1255F2343;
  P x_1255F2342;
  P x_1255F2341;
  P bodyF2340;
  P testF2339;
  P x_1255F2338;
  P x_1256F2337;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_1256_104,2);
  x_1256F2337 = T24;
  FUNINIT(x_1256F2337, 2,FREEREF(0),return_);
  x_1255F2338 = FREEREF(0);
  testF2339 = YPfalse;
  bodyF2340 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1255F2338,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1255F2338,LITREF(lit_209),x_1256F2337);
    x_1255F2341 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1255F2341,x_1256F2337);
    testF2339 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1255F2341);
    x_1255F2342 = T8;
    bodyF2340 = x_1255F2342;
    x_1255F2343 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1255F2343,x_1256F2337);
    x_1255F2344 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1255F2344,x_1256F2337);
    T6 = CALL1(1,VARREF(Ytail),x_1255F2343);
    x_1255F2345 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1255F2345,x_1256F2337);
  } else {
    T10 = CALL2(1,x_1256F2337,LITREF(lit_7),x_1255F2338);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_187));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_204));
  T14 = CALL1(1,VARREF(Ylst),Ynil);
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T19 = testF2339;
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = bodyF2340;
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
  P old_valueF2363;
  P g_placeF2362;
  P g_declsF2361;
  P tup22F2360;
  P x_1271F2359;
  P x_1271F2358;
  P x_1271F2357;
  P x_1271F2356;
  P x_1271F2355;
  P x_1271F2354;
  P x_1271F2353;
  P x_1271F2352;
  P x_1271F2351;
  P restF2350;
  P valueF2349;
  P placeF2348;
  P x_1271F2347;
  P x_1272F2346;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56;
LINK_STACK();
  ARG(return_, 0);
  T56 = FUNSHELL(0,fun_x_1272_108,2);
  x_1272F2346 = T56;
  FUNINIT(x_1272F2346, 2,FREEREF(0),return_);
  x_1271F2347 = FREEREF(1);
  placeF2348 = YPfalse;
  valueF2349 = YPfalse;
  restF2350 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1271F2347,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1271F2347,x_1272F2346);
    x_1271F2351 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1271F2351,x_1272F2346);
    placeF2348 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1271F2351);
    x_1271F2352 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1271F2352,x_1272F2346);
    valueF2349 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1271F2352);
    x_1271F2353 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1271F2353,x_1272F2346);
    x_1271F2354 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1271F2354,x_1272F2346);
    T11 = CALL1(1,VARREF(Ytail),x_1271F2353);
    x_1271F2355 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1271F2355,x_1272F2346);
    T17 = CALL1(1,VARREF(Ytail),x_1271F2347);
    x_1271F2356 = T17;
    restF2350 = x_1271F2356;
    x_1271F2357 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1271F2357,x_1272F2346);
    x_1271F2358 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1271F2358,x_1272F2346);
    T7 = CALL1(1,VARREF(Ytail),x_1271F2357);
    x_1271F2359 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1271F2359,x_1272F2346);
  } else {
    T18 = CALL2(1,x_1272F2346,LITREF(lit_7),x_1271F2347);
  }
  T55 = placeF2348;
  T54 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T55);
  tup22F2360 = T54;
  T53 = CALL2(1,VARREF(YgooSmacrosYelt),tup22F2360,YPint((P)0));
  g_declsF2361 = T53;
  T52 = CALL2(1,VARREF(YgooSmacrosYelt),tup22F2360,YPint((P)1));
  g_placeF2362 = T52;
  T51 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF2363 = T51;
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T25 = CALL1(1,VARREF(Ylst),old_valueF2363);
  T26 = CALL1(1,VARREF(Ylst),g_placeF2362);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_11));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF2361,T23,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_222));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T36 = CALL1(1,VARREF(Ylst),g_placeF2362);
  T38 = valueF2349;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,LITREF(lit_11));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T44 = restF2350;
  T43 = CALL2(1,VARREF(YgooSmacrosYcat),T44,LITREF(lit_11));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXGET(FREEREF(2));
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T45,LITREF(lit_11));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T39,LITREF(lit_11));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T49 = CALL1(1,VARREF(Ylst),g_placeF2362);
  T50 = CALL1(1,VARREF(Ylst),old_valueF2363);
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
  P x_1270F2364;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1270F2364 = FREEREF(0);
  T2 = FUNFAB(fun_109,3,FREEREF(1),x_1270F2364,FREEREF(2));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(3),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_111) {
  P return_;
  P x_1268F2366;
  P x_1269F2365;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(return_, 0);
  T6 = FUNSHELL(0,fun_x_1269_110,4);
  x_1269F2365 = T6;
  FUNINIT(x_1269F2365, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1268F2366 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1268F2366,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1268F2366,x_1269F2365);
  } else {
    T2 = CALL2(1,x_1269F2365,LITREF(lit_7),x_1268F2366);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T5 = BOXGET(FREEREF(2));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_11));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_112) {
  P return_;
  P x_1267F2376;
  P x_1265F2375;
  P x_1265F2374;
  P x_1265F2373;
  P x_1265F2372;
  P x_1265F2371;
  P bodyF2370;
  P placesF2369;
  P x_1265F2368;
  P x_1266F2367;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(return_, 0);
  T14 = FUNSHELL(0,fun_x_1266_107,2);
  x_1266F2367 = T14;
  FUNINIT(x_1266F2367, 2,FREEREF(0),return_);
  x_1265F2368 = FREEREF(0);
  placesF2369 = YPfalse;
  placesF2369 = BOXFAB(placesF2369);
  bodyF2370 = YPfalse;
  bodyF2370 = BOXFAB(bodyF2370);
  T2 = CALL2(1,VARREF(YisaQ),x_1265F2368,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1265F2368,LITREF(lit_214),x_1266F2367);
    x_1265F2371 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1265F2371,x_1266F2367);
    BOXPUT(T7,placesF2369);
    T8 = CALL1(1,VARREF(Ytail),x_1265F2371);
    x_1265F2372 = T8;
    BOXPUT(x_1265F2372,bodyF2370);
    x_1265F2373 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1265F2373,x_1266F2367);
    x_1265F2374 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1265F2374,x_1266F2367);
    T6 = CALL1(1,VARREF(Ytail),x_1265F2373);
    x_1265F2375 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1265F2375,x_1266F2367);
  } else {
    T10 = CALL2(1,x_1266F2367,LITREF(lit_7),x_1265F2368);
  }
  T13 = BOXGET(placesF2369);
  x_1267F2376 = T13;
  T12 = FUNFAB(fun_111,3,x_1267F2376,placesF2369,bodyF2370);
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
  P vnamF2388;
  P typF2387;
  P namF2386;
  P x_1275F2385;
  P x_1275F2384;
  P x_1275F2383;
  P x_1275F2382;
  P x_1275F2381;
  P valueF2380;
  P varF2379;
  P x_1275F2378;
  P x_1276F2377;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
LINK_STACK();
  ARG(return_, 0);
  T51 = FUNSHELL(0,fun_x_1276_114,2);
  x_1276F2377 = T51;
  FUNINIT(x_1276F2377, 2,FREEREF(0),return_);
  x_1275F2378 = FREEREF(0);
  varF2379 = YPfalse;
  valueF2380 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1275F2378,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1275F2378,LITREF(lit_227),x_1276F2377);
    x_1275F2381 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1275F2381,x_1276F2377);
    varF2379 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1275F2381);
    x_1275F2382 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1275F2382,x_1276F2377);
    valueF2380 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1275F2382);
    x_1275F2383 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1275F2383,x_1276F2377);
    x_1275F2384 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1275F2384,x_1276F2377);
    T6 = CALL1(1,VARREF(Ytail),x_1275F2383);
    x_1275F2385 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1275F2385,x_1276F2377);
  } else {
    T12 = CALL2(1,x_1276F2377,LITREF(lit_7),x_1275F2378);
  }
  T50 = varF2379;
  T49 = CALL1(1,VARREF(YgooSmacrosYvar_name),T50);
  namF2386 = T49;
  T48 = varF2379;
  T47 = CALL1(1,VARREF(YgooSmacrosYvar_type),T48);
  typF2387 = T47;
  T46 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_228),namF2386,LITREF(lit_229));
  vnamF2388 = T46;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_230));
  T18 = CALL1(1,VARREF(Ylst),vnamF2388);
  T20 = valueF2380;
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T19,LITREF(lit_11));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_231));
  T24 = CALL1(1,VARREF(Ylst),namF2386);
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_232));
  T28 = CALL1(1,VARREF(Ylst),typF2387);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_11));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T29 = CALL1(1,VARREF(Ylst),vnamF2388);
  T22 = CALL5(1,VARREF(YgooSmacrosYcat),T23,T24,T25,T29,LITREF(lit_11));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_231));
  T34 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF2386);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_233));
  T40 = CALL1(1,VARREF(Ylst),typF2387);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,LITREF(lit_11));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T36 = CALL2(1,VARREF(YgooSmacrosYcat),T37,LITREF(lit_11));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T44 = CALL1(1,VARREF(Ylst),vnamF2388);
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
  P x_1279F2395;
  P x_1279F2394;
  P x_1279F2393;
  P x_1279F2392;
  P bodyF2391;
  P x_1279F2390;
  P x_1280F2389;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(return_, 0);
  T17 = FUNSHELL(0,fun_x_1280_117,2);
  x_1280F2389 = T17;
  FUNINIT(x_1280F2389, 2,FREEREF(0),return_);
  x_1279F2390 = FREEREF(0);
  bodyF2391 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1279F2390,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1279F2390,LITREF(lit_238),x_1280F2389);
    x_1279F2392 = T6;
    bodyF2391 = x_1279F2392;
    x_1279F2393 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1279F2393,x_1280F2389);
    x_1279F2394 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1279F2394,x_1280F2389);
    T5 = CALL1(1,VARREF(Ytail),x_1279F2393);
    x_1279F2395 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1279F2395,x_1280F2389);
  } else {
    T7 = CALL2(1,x_1280F2389,LITREF(lit_7),x_1279F2390);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T15 = CALL1(1,VARREF(Ylst),YPfalse);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_11));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_11));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T16 = bodyF2391;
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
  P x_1283F2402;
  P x_1283F2401;
  P x_1283F2400;
  P x_1283F2399;
  P namesF2398;
  P x_1283F2397;
  P x_1284F2396;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(return_, 0);
  T31 = FUNSHELL(0,fun_x_1284_120,2);
  x_1284F2396 = T31;
  FUNINIT(x_1284F2396, 2,FREEREF(0),return_);
  x_1283F2397 = FREEREF(0);
  namesF2398 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1283F2397,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1283F2397,LITREF(lit_244),x_1284F2396);
    x_1283F2399 = T6;
    namesF2398 = x_1283F2399;
    x_1283F2400 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1283F2400,x_1284F2396);
    x_1283F2401 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1283F2401,x_1284F2396);
    T5 = CALL1(1,VARREF(Ytail),x_1283F2400);
    x_1283F2402 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1283F2402,x_1284F2396);
  } else {
    T7 = CALL2(1,x_1284F2396,LITREF(lit_7),x_1283F2397);
  }
  T10 = namesF2398;
  T9 = CALL1(1,VARREF(YgooSmacrosYnulQ),T10);
  if (T9 != YPfalse) {
    T8 = YPfalse;
  } else {
    T12 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_121));
    T16 = CALL1(1,VARREF(Ylst),YPfalse);
    T19 = namesF2398;
    T18 = CALL1(1,VARREF(Yhead),T19);
    T17 = CALL1(1,VARREF(Ylst),T18);
    T14 = CALL4(1,VARREF(YgooSmacrosYcat),T15,T16,T17,LITREF(lit_11));
    T13 = CALL1(1,VARREF(Ylst),T14);
    T22 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
    T25 = namesF2398;
    T24 = CALL1(1,VARREF(Yhead),T25);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,LITREF(lit_11));
    T20 = CALL1(1,VARREF(Ylst),T21);
    T28 = CALL1(1,VARREF(Ylst),LITREF(lit_244));
    T30 = namesF2398;
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
  P x_1335F2408;
  P x_1335F2407;
  P x_1335F2406;
  P nameF2405;
  P x_1335F2404;
  P x_1336F2403;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(return_, 0);
  T20 = FUNSHELL(0,fun_x_1336_124,1);
  x_1336F2403 = T20;
  FUNINIT(x_1336F2403, 1,return_);
  x_1335F2404 = FREEREF(0);
  nameF2405 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1335F2404,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1335F2404,x_1336F2403);
    nameF2405 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1335F2404);
    x_1335F2406 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1335F2406,x_1336F2403);
    x_1335F2407 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1335F2407,x_1336F2403);
    T5 = CALL1(1,VARREF(Ytail),x_1335F2406);
    x_1335F2408 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1335F2408,x_1336F2403);
  } else {
    T8 = CALL2(1,x_1336F2403,LITREF(lit_7),x_1335F2404);
  }
  T11 = nameF2405;
  T10 = CALL2(1,VARREF(YisaQ),T11,VARREF(YLsymG));
  if (T10 != YPfalse) {
    T14 = nameF2405;
    T13 = CALL1(1,VARREF(Ylst),T14);
    T17 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
    T19 = nameF2405;
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
  P x_1334F2409;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1334F2409 = FREEREF(0);
  T2 = FUNFAB(fun_125,1,x_1334F2409);
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_127) {
  P return_;
  P x_1332F2418;
  P x_1332F2417;
  P x_1332F2416;
  P x_1332F2415;
  P x_1332F2414;
  P restF2413;
  P nameF2412;
  P x_1332F2411;
  P x_1333F2410;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1333_126,2);
  x_1333F2410 = T19;
  FUNINIT(x_1333F2410, 2,FREEREF(0),return_);
  x_1332F2411 = FREEREF(0);
  nameF2412 = YPfalse;
  restF2413 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1332F2411,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1332F2411,LITREF(lit_275),x_1333F2410);
    x_1332F2414 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1332F2414,x_1333F2410);
    nameF2412 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1332F2414);
    x_1332F2415 = T8;
    restF2413 = x_1332F2415;
    x_1332F2416 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1332F2416,x_1333F2410);
    x_1332F2417 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1332F2417,x_1333F2410);
    T6 = CALL1(1,VARREF(Ytail),x_1332F2416);
    x_1332F2418 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1332F2418,x_1333F2410);
  } else {
    T10 = CALL2(1,x_1333F2410,LITREF(lit_7),x_1332F2411);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2412;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1330_128) {
  P msg_,args_;
  P x_1331F2419;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1331F2419 = FREEREF(0);
  T2 = FUNFAB(fun_127,2,x_1331F2419,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_129) {
  P return_;
  P x_1329F2428;
  P x_1329F2427;
  P x_1329F2426;
  P x_1329F2425;
  P x_1329F2424;
  P restF2423;
  P nameF2422;
  P x_1329F2421;
  P x_1330F2420;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1330_128,3);
  x_1330F2420 = T19;
  FUNINIT(x_1330F2420, 3,FREEREF(0),FREEREF(1),return_);
  x_1329F2421 = FREEREF(0);
  nameF2422 = YPfalse;
  restF2423 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1329F2421,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1329F2421,LITREF(lit_276),x_1330F2420);
    x_1329F2424 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1329F2424,x_1330F2420);
    nameF2422 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1329F2424);
    x_1329F2425 = T8;
    restF2423 = x_1329F2425;
    x_1329F2426 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1329F2426,x_1330F2420);
    x_1329F2427 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1329F2427,x_1330F2420);
    T6 = CALL1(1,VARREF(Ytail),x_1329F2426);
    x_1329F2428 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1329F2428,x_1330F2420);
  } else {
    T10 = CALL2(1,x_1330F2420,LITREF(lit_7),x_1329F2421);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2422;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1327_130) {
  P msg_,args_;
  P x_1328F2429;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1328F2429 = FREEREF(0);
  T2 = FUNFAB(fun_129,2,x_1328F2429,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_131) {
  P return_;
  P x_1326F2438;
  P x_1326F2437;
  P x_1326F2436;
  P x_1326F2435;
  P x_1326F2434;
  P restF2433;
  P nameF2432;
  P x_1326F2431;
  P x_1327F2430;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1327_130,3);
  x_1327F2430 = T19;
  FUNINIT(x_1327F2430, 3,FREEREF(0),FREEREF(1),return_);
  x_1326F2431 = FREEREF(0);
  nameF2432 = YPfalse;
  restF2433 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1326F2431,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1326F2431,LITREF(lit_277),x_1327F2430);
    x_1326F2434 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1326F2434,x_1327F2430);
    nameF2432 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1326F2434);
    x_1326F2435 = T8;
    restF2433 = x_1326F2435;
    x_1326F2436 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1326F2436,x_1327F2430);
    x_1326F2437 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1326F2437,x_1327F2430);
    T6 = CALL1(1,VARREF(Ytail),x_1326F2436);
    x_1326F2438 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1326F2438,x_1327F2430);
  } else {
    T10 = CALL2(1,x_1327F2430,LITREF(lit_7),x_1326F2431);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2432;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1324_132) {
  P msg_,args_;
  P x_1325F2439;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1325F2439 = FREEREF(0);
  T2 = FUNFAB(fun_131,2,x_1325F2439,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_133) {
  P return_;
  P x_1323F2448;
  P x_1323F2447;
  P x_1323F2446;
  P x_1323F2445;
  P x_1323F2444;
  P restF2443;
  P nameF2442;
  P x_1323F2441;
  P x_1324F2440;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1324_132,3);
  x_1324F2440 = T19;
  FUNINIT(x_1324F2440, 3,FREEREF(0),FREEREF(1),return_);
  x_1323F2441 = FREEREF(0);
  nameF2442 = YPfalse;
  restF2443 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1323F2441,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1323F2441,LITREF(lit_230),x_1324F2440);
    x_1323F2444 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1323F2444,x_1324F2440);
    nameF2442 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1323F2444);
    x_1323F2445 = T8;
    restF2443 = x_1323F2445;
    x_1323F2446 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1323F2446,x_1324F2440);
    x_1323F2447 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1323F2447,x_1324F2440);
    T6 = CALL1(1,VARREF(Ytail),x_1323F2446);
    x_1323F2448 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1323F2448,x_1324F2440);
  } else {
    T10 = CALL2(1,x_1324F2440,LITREF(lit_7),x_1323F2441);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2442;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1321_134) {
  P msg_,args_;
  P x_1322F2449;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1322F2449 = FREEREF(0);
  T2 = FUNFAB(fun_133,2,x_1322F2449,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_135) {
  P return_;
  P x_1320F2458;
  P x_1320F2457;
  P x_1320F2456;
  P x_1320F2455;
  P x_1320F2454;
  P restF2453;
  P nameF2452;
  P x_1320F2451;
  P x_1321F2450;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1321_134,3);
  x_1321F2450 = T19;
  FUNINIT(x_1321F2450, 3,FREEREF(0),FREEREF(1),return_);
  x_1320F2451 = FREEREF(0);
  nameF2452 = YPfalse;
  restF2453 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1320F2451,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1320F2451,LITREF(lit_278),x_1321F2450);
    x_1320F2454 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1320F2454,x_1321F2450);
    nameF2452 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1320F2454);
    x_1320F2455 = T8;
    restF2453 = x_1320F2455;
    x_1320F2456 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1320F2456,x_1321F2450);
    x_1320F2457 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1320F2457,x_1321F2450);
    T6 = CALL1(1,VARREF(Ytail),x_1320F2456);
    x_1320F2458 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1320F2458,x_1321F2450);
  } else {
    T10 = CALL2(1,x_1321F2450,LITREF(lit_7),x_1320F2451);
  }
  T13 = nameF2452;
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2452;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_x_1318_136) {
  P msg_,args_;
  P x_1319F2459;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1319F2459 = FREEREF(0);
  T2 = FUNFAB(fun_135,2,x_1319F2459,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_137) {
  P return_;
  P x_1317F2468;
  P x_1317F2467;
  P x_1317F2466;
  P x_1317F2465;
  P x_1317F2464;
  P restF2463;
  P nameF2462;
  P x_1317F2461;
  P x_1318F2460;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(return_, 0);
  T25 = FUNSHELL(0,fun_x_1318_136,3);
  x_1318F2460 = T25;
  FUNINIT(x_1318F2460, 3,FREEREF(0),FREEREF(1),return_);
  x_1317F2461 = FREEREF(0);
  nameF2462 = YPfalse;
  restF2463 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1317F2461,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1317F2461,LITREF(lit_279),x_1318F2460);
    x_1317F2464 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1317F2464,x_1318F2460);
    nameF2462 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1317F2464);
    x_1317F2465 = T8;
    restF2463 = x_1317F2465;
    x_1317F2466 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1317F2466,x_1318F2460);
    x_1317F2467 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1317F2467,x_1318F2460);
    T6 = CALL1(1,VARREF(Ytail),x_1317F2466);
    x_1317F2468 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1317F2468,x_1318F2460);
  } else {
    T10 = CALL2(1,x_1318F2460,LITREF(lit_7),x_1317F2461);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2462;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T24 = nameF2462;
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
  P x_1316F2469;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1316F2469 = FREEREF(0);
  T2 = FUNFAB(fun_137,2,x_1316F2469,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_139) {
  P return_;
  P x_1314F2478;
  P x_1314F2477;
  P x_1314F2476;
  P x_1314F2475;
  P x_1314F2474;
  P restF2473;
  P nameF2472;
  P x_1314F2471;
  P x_1315F2470;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(return_, 0);
  T19 = FUNSHELL(0,fun_x_1315_138,3);
  x_1315F2470 = T19;
  FUNINIT(x_1315F2470, 3,FREEREF(0),FREEREF(1),return_);
  x_1314F2471 = FREEREF(0);
  nameF2472 = YPfalse;
  restF2473 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1314F2471,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1314F2471,LITREF(lit_280),x_1315F2470);
    x_1314F2474 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1314F2474,x_1315F2470);
    nameF2472 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1314F2474);
    x_1314F2475 = T8;
    restF2473 = x_1314F2475;
    x_1314F2476 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1314F2476,x_1315F2470);
    x_1314F2477 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1314F2477,x_1315F2470);
    T6 = CALL1(1,VARREF(Ytail),x_1314F2476);
    x_1314F2478 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1314F2478,x_1315F2470);
  } else {
    T10 = CALL2(1,x_1315F2470,LITREF(lit_7),x_1314F2471);
  }
  T13 = BOXGET(FREEREF(1));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_245));
  T18 = nameF2472;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,LITREF(lit_11));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,LITREF(lit_11));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_140) {
  P return_;
  P defsF2487;
  P x_1313F2486;
  P x_1311F2485;
  P x_1311F2484;
  P x_1311F2483;
  P x_1311F2482;
  P defF2481;
  P x_1311F2480;
  P x_1312F2479;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1312_123,2);
  x_1312F2479 = T13;
  FUNINIT(x_1312F2479, 2,FREEREF(0),return_);
  x_1311F2480 = FREEREF(0);
  defF2481 = YPfalse;
  defF2481 = BOXFAB(defF2481);
  T1 = CALL2(1,VARREF(YisaQ),x_1311F2480,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1311F2480,LITREF(lit_250),x_1312F2479);
    x_1311F2482 = T6;
    BOXPUT(x_1311F2482,defF2481);
    x_1311F2483 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1311F2483,x_1312F2479);
    x_1311F2484 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1311F2484,x_1312F2479);
    T5 = CALL1(1,VARREF(Ytail),x_1311F2483);
    x_1311F2485 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1311F2485,x_1312F2479);
  } else {
    T7 = CALL2(1,x_1312F2479,LITREF(lit_7),x_1311F2480);
  }
  T12 = BOXGET(defF2481);
  x_1313F2486 = T12;
  T11 = FUNFAB(fun_139,2,x_1313F2486,defF2481);
  T10 = with_exit(T11);
  defsF2487 = T10;
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T8 = CALL3(1,VARREF(YgooSmacrosYcat),T9,defsF2487,LITREF(lit_11));
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
  P xF2488;
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
  xF2488 = T2;
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_250));
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,xF2488,LITREF(lit_11));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_144) {
  P return_;
  P x_1339F2495;
  P x_1339F2494;
  P x_1339F2493;
  P x_1339F2492;
  P defsF2491;
  P x_1339F2490;
  P x_1340F2489;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(return_, 0);
  T13 = FUNSHELL(0,fun_x_1340_142,2);
  x_1340F2489 = T13;
  FUNINIT(x_1340F2489, 2,FREEREF(0),return_);
  x_1339F2490 = FREEREF(0);
  defsF2491 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1339F2490,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1339F2490,LITREF(lit_285),x_1340F2489);
    x_1339F2492 = T6;
    defsF2491 = x_1339F2492;
    x_1339F2493 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1339F2493,x_1340F2489);
    x_1339F2494 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1339F2494,x_1340F2489);
    T5 = CALL1(1,VARREF(Ytail),x_1339F2493);
    x_1339F2495 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1339F2495,x_1340F2489);
  } else {
    T7 = CALL2(1,x_1340F2489,LITREF(lit_7),x_1339F2490);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_100));
  T11 = fun_143;
  T12 = defsF2491;
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
  YgooSmacrosYOchecked_next_methods = YPfab_met(FUNCODEREF(YgooSmacrosYOchecked_next_methods),T0,LITREF(lit_0),LITREF(lit_1),sloc(10),YPsb((P)"(fun (met nxt-mets (args ...)) (if nxt-mets (if (@== nxt-mets '()) (no-next-methods-error met args) nxt-mets) (no-next-methods-error met args)))"));
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
  fun_x_1112_1 = YPfab_met(FUNCODEREF(fun_x_1112_1),T4,LITREF(lit_4),LITREF(lit_5),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'sup exp)))"));
  T3 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPfab_met(FUNCODEREF(fun_2),T3,YPfalse,LITREF(lit_3),YPfalse,YPsb((P)"(fun (return) (loc ((x-1112 ((msg <str>) (args ...)) (return (macro-error 'sup exp)))) (let ((x-1111 exp)) (let ((args #f)) (if (isa? x-1111 <lst>) (let ((x-1111 (match-atom x-1111 'sup x-1112))) (let ((x-1111 (seq (set args x-1111) '()))) (let ((x-1111 (seq (let ((x-1111 (match-sublist x-1111 x-1112))) (match-nul-list x-1111 x-1112)) (tail x-1111)))) (match-nul-list x-1111 x-1112)))) (x-1112 Match Pattern Failure x-1111)) (quasiquote (let ((next-mets (@checked-next-methods (%fun-reg) (%next-methods) (unquote-splicing args)))) (napp (head next-mets) (tail next-mets) (unquote-splicing args) '())))))))"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3 = YPfab_met(FUNCODEREF(fun_3),T2,YPfalse,LITREF(lit_2),YPfalse,YPsb((P)"(fun (exp) (mif ((sup (unquote-splicing args)) exp) (quasiquote (let ((next-mets (@checked-next-methods (%fun-reg) (%next-methods) (unquote-splicing args)))) (napp (head next-mets) (tail next-mets) (unquote-splicing args) '()))) (macro-error 'sup exp)))"));
  T5 = fun_3;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"sup"),T5);
  lit_17 = YPPlist(1,YPPsym((P)"exp"));
  lit_18 = YPPlist(1,YPPsym((P)"return"));
  lit_19 = YPPsym((P)"x-1116");
  lit_20 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_21 = YPPsym((P)"app-sup");
  T8 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1116_4 = YPfab_met(FUNCODEREF(fun_x_1116_4),T8,LITREF(lit_19),LITREF(lit_20),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'app-sup exp)))"));
  T7 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPfab_met(FUNCODEREF(fun_5),T7,YPfalse,LITREF(lit_18),YPfalse,YPsb((P)"(fun (return) (loc ((x-1116 ((msg <str>) (args ...)) (return (macro-error 'app-sup exp)))) (let ((x-1115 exp)) (let ((args #f)) (if (isa? x-1115 <lst>) (let ((x-1115 (match-atom x-1115 'app-sup x-1116))) (let ((x-1115 (seq (set args x-1115) '()))) (let ((x-1115 (seq (let ((x-1115 (match-sublist x-1115 x-1116))) (match-nul-list x-1115 x-1116)) (tail x-1115)))) (match-nul-list x-1115 x-1116)))) (x-1116 Match Pattern Failure x-1115)) (quasiquote (let ((next-mets (@checked-next-methods (%fun-reg) (%next-methods) (unquote-splicing args)))) (napp (head next-mets) (tail next-mets) (unquote-splicing args))))))))"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPfab_met(FUNCODEREF(fun_6),T6,YPfalse,LITREF(lit_17),YPfalse,YPsb((P)"(fun (exp) (mif ((app-sup (unquote-splicing args)) exp) (quasiquote (let ((next-mets (@checked-next-methods (%fun-reg) (%next-methods) (unquote-splicing args)))) (napp (head next-mets) (tail next-mets) (unquote-splicing args)))) (macro-error 'app-sup exp)))"));
  T9 = fun_6;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app-sup"),T9);
  lit_22 = YPPlist(1,YPPsym((P)"exp"));
  lit_23 = YPPlist(1,YPPsym((P)"return"));
  lit_24 = YPPsym((P)"x-1120");
  lit_25 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_26 = YPPsym((P)"app");
  T12 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1120_7 = YPfab_met(FUNCODEREF(fun_x_1120_7),T12,LITREF(lit_24),LITREF(lit_25),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'app exp)))"));
  T11 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPfab_met(FUNCODEREF(fun_8),T11,YPfalse,LITREF(lit_23),YPfalse,YPsb((P)"(fun (return) (loc ((x-1120 ((msg <str>) (args ...)) (return (macro-error 'app exp)))) (let ((x-1119 exp)) (let ((f #f) (args #f)) (if (isa? x-1119 <lst>) (let ((x-1119 (match-atom x-1119 'app x-1120))) (let ((x-1119 (seq (set f (match-unquote x-1119 x-1120)) (tail x-1119)))) (let ((x-1119 (seq (set args x-1119) '()))) (let ((x-1119 (seq (let ((x-1119 (match-sublist x-1119 x-1120))) (match-nul-list x-1119 x-1120)) (tail x-1119)))) (match-nul-list x-1119 x-1120))))) (x-1120 Match Pattern Failure x-1119)) (quasiquote (napp (unquote f) #f (unquote-splicing args)))))))"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T10,YPfalse,LITREF(lit_22),YPfalse,YPsb((P)"(fun (exp) (mif ((app (unquote f) (unquote-splicing args)) exp) (quasiquote (napp (unquote f) #f (unquote-splicing args))) (macro-error 'app exp)))"));
  T13 = fun_9;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app"),T13);
  lit_27 = YPPlist(1,YPPsym((P)"exp"));
  lit_28 = YPPlist(1,YPPsym((P)"return"));
  lit_29 = YPPsym((P)"x-1124");
  lit_30 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_31 = YPPsym((P)"renew");
  lit_32 = YPPsym((P)"set");
  T16 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1124_10 = YPfab_met(FUNCODEREF(fun_x_1124_10),T16,LITREF(lit_29),LITREF(lit_30),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'renew exp)))"));
  T15 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T15,YPfalse,LITREF(lit_28),YPfalse,YPsb((P)"(fun (return) (loc ((x-1124 ((msg <str>) (args ...)) (return (macro-error 'renew exp)))) (let ((x-1123 exp)) (let ((x #f) (prop-inits #f)) (if (isa? x-1123 <lst>) (let ((x-1123 (match-atom x-1123 'renew x-1124))) (let ((x-1123 (seq (set x (match-unquote x-1123 x-1124)) (tail x-1123)))) (let ((x-1123 (seq (set prop-inits x-1123) '()))) (let ((x-1123 (seq (let ((x-1123 (match-sublist x-1123 x-1124))) (match-nul-list x-1123 x-1124)) (tail x-1123)))) (match-nul-list x-1123 x-1124))))) (x-1124 Match Pattern Failure x-1123)) (let ((var (gensym)) (sets (rep loop ((sets '()) (inits prop-inits)) (if (nul? inits) (rev! sets) (let ((val (head (tail inits)))) (loop (pair (quasiquote (set ((unquote (head inits)) (unquote var)) (unquote val))) sets) (tail (tail inits)))))))) (quasiquote (let (((unquote var) (unquote x))) (unquote-splicing sets) (unquote var))))))))"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T14,YPfalse,LITREF(lit_27),YPfalse,YPsb((P)"(fun (exp) (mif ((renew (unquote x) (unquote-splicing prop-inits)) exp) (let ((var (gensym)) (sets (rep loop ((sets '()) (inits prop-inits)) (if (nul? inits) (rev! sets) (let ((val (head (tail inits)))) (loop (pair (quasiquote (set ((unquote (head inits)) (unquote var)) (unquote val))) sets) (tail (tail inits)))))))) (quasiquote (let (((unquote var) (unquote x))) (unquote-splicing sets) (unquote var)))) (macro-error 'renew exp)))"));
  T17 = fun_12;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"renew"),T17);
  lit_33 = YPPsym((P)"lift-place-subforms");
  lit_34 = YPPlist(1,YPPsym((P)"place"));
  lit_35 = YPPsym((P)"munch");
  lit_36 = YPPlist(1,YPPsym((P)"subforms"));
  T21 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T21,Ynil);
  fun_munch_13 = YPfab_met(FUNCODEREF(fun_munch_13),T20,LITREF(lit_35),LITREF(lit_36),sloc(48),YPsb((P)"(fun ((subforms <lst>) => (tup (g-decls <lst>) (g-args <lst>))) (if (nul? subforms) (tup '() '()) (let (((tup g-decls g-args) (munch (tail subforms))) (subform (head subforms))) (if (isa? subform <lst>) (let ((g (gensym))) (tup (pair (quasiquote ((unquote g) (unquote subform))) g-decls) (pair g g-args))) (tup g-decls (pair subform g-args))))))"));
  T19 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),T19,Ynil);
  YgooSmacrosYlift_place_subforms = YPfab_met(FUNCODEREF(YgooSmacrosYlift_place_subforms),T18,LITREF(lit_33),LITREF(lit_34),sloc(47),YPsb((P)"(fun (place => (tup (g-decls <lst>) (g-place <any>))) (loc ((munch ((subforms <lst>) => (tup (g-decls <lst>) (g-args <lst>))) (if (nul? subforms) (tup '() '()) (let (((tup g-decls g-args) (munch (tail subforms))) (subform (head subforms))) (if (isa? subform <lst>) (let ((g (gensym))) (tup (pair (quasiquote ((unquote g) (unquote subform))) g-decls) (pair g g-args))) (tup g-decls (pair subform g-args))))))) (if (isa? place <sym>) (tup '() place) (let (((tup g-decls g-args) (munch (tail place)))) (tup g-decls (quasiquote ((unquote (head place)) (unquote-splicing g-args))))))))"));
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
  fun_x_1130_15 = YPfab_met(FUNCODEREF(fun_x_1130_15),T27,LITREF(lit_39),LITREF(lit_40),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'incf exp)))"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1132_16 = YPfab_met(FUNCODEREF(fun_x_1132_16),T26,LITREF(lit_43),LITREF(lit_44),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return 1))"));
  T25 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPfab_met(FUNCODEREF(fun_17),T25,YPfalse,LITREF(lit_42),YPfalse,YPsb((P)"(fun (return) (loc ((x-1132 ((msg <str>) (args ...)) (return 1))) (let ((x-1131 amount)) (let ((amount #f)) (if (isa? x-1131 <lst>) (let ((x-1131 (seq (set amount (match-unquote x-1131 x-1132)) (tail x-1131)))) (let ((x-1131 (seq (let ((x-1131 (match-sublist x-1131 x-1132))) (match-nul-list x-1131 x-1132)) (tail x-1131)))) (match-nul-list x-1131 x-1132))) (x-1132 Match Pattern Failure x-1131)) amount))))"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T24,YPfalse,LITREF(lit_38),YPfalse,YPsb((P)"(fun (return) (loc ((x-1130 ((msg <str>) (args ...)) (return (macro-error 'incf exp)))) (let ((x-1129 exp)) (let ((place #f) (amount #f)) (if (isa? x-1129 <lst>) (let ((x-1129 (match-atom x-1129 'incf x-1130))) (let ((x-1129 (seq (set place (match-unquote x-1129 x-1130)) (tail x-1129)))) (let ((x-1129 (seq (set amount x-1129) '()))) (let ((x-1129 (seq (let ((x-1129 (match-sublist x-1129 x-1130))) (match-nul-list x-1129 x-1130)) (tail x-1129)))) (match-nul-list x-1129 x-1130))))) (x-1130 Match Pattern Failure x-1129)) (let (((tup g-decls g-place) (lift-place-subforms place)) (amount (mif (((unquote amount)) amount) amount 1))) (quasiquote (let ((unquote-splicing g-decls)) (set (unquote g-place) (+ (unquote g-place) (unquote amount))))))))))"));
  T23 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPfab_met(FUNCODEREF(fun_19),T23,YPfalse,LITREF(lit_37),YPfalse,YPsb((P)"(fun (exp) (mif ((incf (unquote place) (unquote-splicing amount)) exp) (let (((tup g-decls g-place) (lift-place-subforms place)) (amount (mif (((unquote amount)) amount) amount 1))) (quasiquote (let ((unquote-splicing g-decls)) (set (unquote g-place) (+ (unquote g-place) (unquote amount)))))) (macro-error 'incf exp)))"));
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
  fun_x_1138_20 = YPfab_met(FUNCODEREF(fun_x_1138_20),T33,LITREF(lit_48),LITREF(lit_49),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'decf exp)))"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1140_21 = YPfab_met(FUNCODEREF(fun_x_1140_21),T32,LITREF(lit_52),LITREF(lit_53),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return 1))"));
  T31 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPfab_met(FUNCODEREF(fun_22),T31,YPfalse,LITREF(lit_51),YPfalse,YPsb((P)"(fun (return) (loc ((x-1140 ((msg <str>) (args ...)) (return 1))) (let ((x-1139 amount)) (let ((amount #f)) (if (isa? x-1139 <lst>) (let ((x-1139 (seq (set amount (match-unquote x-1139 x-1140)) (tail x-1139)))) (let ((x-1139 (seq (let ((x-1139 (match-sublist x-1139 x-1140))) (match-nul-list x-1139 x-1140)) (tail x-1139)))) (match-nul-list x-1139 x-1140))) (x-1140 Match Pattern Failure x-1139)) amount))))"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPfab_met(FUNCODEREF(fun_23),T30,YPfalse,LITREF(lit_47),YPfalse,YPsb((P)"(fun (return) (loc ((x-1138 ((msg <str>) (args ...)) (return (macro-error 'decf exp)))) (let ((x-1137 exp)) (let ((place #f) (amount #f)) (if (isa? x-1137 <lst>) (let ((x-1137 (match-atom x-1137 'decf x-1138))) (let ((x-1137 (seq (set place (match-unquote x-1137 x-1138)) (tail x-1137)))) (let ((x-1137 (seq (set amount x-1137) '()))) (let ((x-1137 (seq (let ((x-1137 (match-sublist x-1137 x-1138))) (match-nul-list x-1137 x-1138)) (tail x-1137)))) (match-nul-list x-1137 x-1138))))) (x-1138 Match Pattern Failure x-1137)) (let (((tup g-decls g-place) (lift-place-subforms place)) (amount (mif (((unquote amount)) amount) amount 1))) (quasiquote (let ((unquote-splicing g-decls)) (set (unquote g-place) (- (unquote g-place) (unquote amount))))))))))"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T29,YPfalse,LITREF(lit_46),YPfalse,YPsb((P)"(fun (exp) (mif ((decf (unquote place) (unquote-splicing amount)) exp) (let (((tup g-decls g-place) (lift-place-subforms place)) (amount (mif (((unquote amount)) amount) amount 1))) (quasiquote (let ((unquote-splicing g-decls)) (set (unquote g-place) (- (unquote g-place) (unquote amount)))))) (macro-error 'decf exp)))"));
  T34 = fun_24;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"decf"),T34);
  lit_55 = YPPlist(1,YPPsym((P)"exp"));
  lit_56 = YPPlist(1,YPPsym((P)"return"));
  lit_57 = YPPsym((P)"x-1144");
  lit_58 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_59 = YPPsym((P)"pushf");
  lit_60 = YPPsym((P)"push!");
  T37 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1144_25 = YPfab_met(FUNCODEREF(fun_x_1144_25),T37,LITREF(lit_57),LITREF(lit_58),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'pushf exp)))"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPfab_met(FUNCODEREF(fun_26),T36,YPfalse,LITREF(lit_56),YPfalse,YPsb((P)"(fun (return) (loc ((x-1144 ((msg <str>) (args ...)) (return (macro-error 'pushf exp)))) (let ((x-1143 exp)) (let ((place #f) (value #f)) (if (isa? x-1143 <lst>) (let ((x-1143 (match-atom x-1143 'pushf x-1144))) (let ((x-1143 (seq (set place (match-unquote x-1143 x-1144)) (tail x-1143)))) (let ((x-1143 (seq (set value (match-unquote x-1143 x-1144)) (tail x-1143)))) (let ((x-1143 (seq (let ((x-1143 (match-sublist x-1143 x-1144))) (match-nul-list x-1143 x-1144)) (tail x-1143)))) (match-nul-list x-1143 x-1144))))) (x-1144 Match Pattern Failure x-1143)) (let (((tup g-decls g-place) (lift-place-subforms place))) (quasiquote (let ((unquote-splicing g-decls)) (set (unquote g-place) (push! (unquote g-place) (unquote value))))))))))"));
  T35 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T35,YPfalse,LITREF(lit_55),YPfalse,YPsb((P)"(fun (exp) (mif ((pushf (unquote place) (unquote value)) exp) (let (((tup g-decls g-place) (lift-place-subforms place))) (quasiquote (let ((unquote-splicing g-decls)) (set (unquote g-place) (push! (unquote g-place) (unquote value)))))) (macro-error 'pushf exp)))"));
  T38 = fun_27;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pushf"),T38);
  lit_61 = YPPlist(1,YPPsym((P)"exp"));
  lit_62 = YPPlist(1,YPPsym((P)"return"));
  lit_63 = YPPsym((P)"x-1148");
  lit_64 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_65 = YPPsym((P)"swapf");
  T41 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1148_28 = YPfab_met(FUNCODEREF(fun_x_1148_28),T41,LITREF(lit_63),LITREF(lit_64),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'swapf exp)))"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPfab_met(FUNCODEREF(fun_29),T40,YPfalse,LITREF(lit_62),YPfalse,YPsb((P)"(fun (return) (loc ((x-1148 ((msg <str>) (args ...)) (return (macro-error 'swapf exp)))) (let ((x-1147 exp)) (let ((x #f) (y #f)) (if (isa? x-1147 <lst>) (let ((x-1147 (match-atom x-1147 'swapf x-1148))) (let ((x-1147 (seq (set x (match-unquote x-1147 x-1148)) (tail x-1147)))) (let ((x-1147 (seq (set y (match-unquote x-1147 x-1148)) (tail x-1147)))) (let ((x-1147 (seq (let ((x-1147 (match-sublist x-1147 x-1148))) (match-nul-list x-1147 x-1148)) (tail x-1147)))) (match-nul-list x-1147 x-1148))))) (x-1148 Match Pattern Failure x-1147)) (let (((tup xg-decls xg-place) (lift-place-subforms x)) ((tup yg-decls yg-place) (lift-place-subforms y)) (tmp (gensym))) (quasiquote (let ((unquote-splicing xg-decls) (unquote-splicing yg-decls) ((unquote tmp) (unquote xg-place))) (set (unquote xg-place) (unquote yg-place)) (set (unquote yg-place) (unquote tmp)))))))))"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPfab_met(FUNCODEREF(fun_30),T39,YPfalse,LITREF(lit_61),YPfalse,YPsb((P)"(fun (exp) (mif ((swapf (unquote x) (unquote y)) exp) (let (((tup xg-decls xg-place) (lift-place-subforms x)) ((tup yg-decls yg-place) (lift-place-subforms y)) (tmp (gensym))) (quasiquote (let ((unquote-splicing xg-decls) (unquote-splicing yg-decls) ((unquote tmp) (unquote xg-place))) (set (unquote xg-place) (unquote yg-place)) (set (unquote yg-place) (unquote tmp))))) (macro-error 'swapf exp)))"));
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
  fun_x_1152_31 = YPfab_met(FUNCODEREF(fun_x_1152_31),T48,LITREF(lit_68),LITREF(lit_69),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'rotf exp)))"));
  T47 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPfab_met(FUNCODEREF(fun_32),T47,YPfalse,LITREF(lit_71),sloc(92),YPsb((P)"(fun (x) (gensym))"));
  T46 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPfab_met(FUNCODEREF(fun_33),T46,YPfalse,LITREF(lit_72),YPfalse,YPsb((P)"(fun (t p) (cat (lst t) (lst p) '()))"));
  T45 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T45,YPfalse,LITREF(lit_73),YPfalse,YPsb((P)"(fun (p t) (cat (lst 'set) (lst p) (lst t) '()))"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPfab_met(FUNCODEREF(fun_35),T44,YPfalse,LITREF(lit_67),YPfalse,YPsb((P)"(fun (return) (loc ((x-1152 ((msg <str>) (args ...)) (return (macro-error 'rotf exp)))) (let ((x-1151 exp)) (let ((x #f) (y #f) (zs #f)) (if (isa? x-1151 <lst>) (let ((x-1151 (match-atom x-1151 'rotf x-1152))) (let ((x-1151 (seq (set x (match-unquote x-1151 x-1152)) (tail x-1151)))) (let ((x-1151 (seq (set y (match-unquote x-1151 x-1152)) (tail x-1151)))) (let ((x-1151 (seq (set zs x-1151) '()))) (let ((x-1151 (seq (let ((x-1151 (match-sublist x-1151 x-1152))) (match-nul-list x-1151 x-1152)) (tail x-1151)))) (match-nul-list x-1151 x-1152)))))) (x-1152 Match Pattern Failure x-1151)) (let ((places (quasiquote ((unquote x) (unquote y) (unquote-splicing zs)))) (tmps (map (fun (x) (gensym)) places)) (ps (map lift-place-subforms places)) (decls (map 1st ps)) (places (map 2nd ps))) (quasiquote (let ((unquote-splicing (app cat decls)) (unquote-splicing (map2 (fun (t p) (quasiquote ((unquote t) (unquote p)))) tmps places))) (unquote-splicing (map2 (fun (p t) (quasiquote (set (unquote p) (unquote t)))) places (tail tmps))) (set (unquote (last places)) (unquote (1st tmps))))))))))"));
  T43 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPfab_met(FUNCODEREF(fun_36),T43,YPfalse,LITREF(lit_66),YPfalse,YPsb((P)"(fun (exp) (mif ((rotf (unquote x) (unquote y) (unquote-splicing zs)) exp) (let ((places (quasiquote ((unquote x) (unquote y) (unquote-splicing zs)))) (tmps (map (fun (x) (gensym)) places)) (ps (map lift-place-subforms places)) (decls (map 1st ps)) (places (map 2nd ps))) (quasiquote (let ((unquote-splicing (app cat decls)) (unquote-splicing (map2 (fun (t p) (quasiquote ((unquote t) (unquote p)))) tmps places))) (unquote-splicing (map2 (fun (p t) (quasiquote (set (unquote p) (unquote t)))) places (tail tmps))) (set (unquote (last places)) (unquote (1st tmps)))))) (macro-error 'rotf exp)))"));
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
  fun_x_1156_37 = YPfab_met(FUNCODEREF(fun_x_1156_37),T52,LITREF(lit_76),LITREF(lit_77),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'popf exp)))"));
  T51 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPfab_met(FUNCODEREF(fun_38),T51,YPfalse,LITREF(lit_75),YPfalse,YPsb((P)"(fun (return) (loc ((x-1156 ((msg <str>) (args ...)) (return (macro-error 'popf exp)))) (let ((x-1155 exp)) (let ((place #f)) (if (isa? x-1155 <lst>) (let ((x-1155 (match-atom x-1155 'popf x-1156))) (let ((x-1155 (seq (set place (match-unquote x-1155 x-1156)) (tail x-1155)))) (let ((x-1155 (seq (let ((x-1155 (match-sublist x-1155 x-1156))) (match-nul-list x-1155 x-1156)) (tail x-1155)))) (match-nul-list x-1155 x-1156)))) (x-1156 Match Pattern Failure x-1155)) (let (((tup g-decls g-place) (lift-place-subforms place)) (new-col (gensym)) (val (gensym))) (quasiquote (let ((unquote-splicing g-decls) ((tup (unquote new-col) (unquote val)) (pop! (unquote g-place)))) (set (unquote g-place) (unquote new-col)) (unquote val))))))))"));
  T50 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPfab_met(FUNCODEREF(fun_39),T50,YPfalse,LITREF(lit_74),YPfalse,YPsb((P)"(fun (exp) (mif ((popf (unquote place)) exp) (let (((tup g-decls g-place) (lift-place-subforms place)) (new-col (gensym)) (val (gensym))) (quasiquote (let ((unquote-splicing g-decls) ((tup (unquote new-col) (unquote val)) (pop! (unquote g-place)))) (set (unquote g-place) (unquote new-col)) (unquote val)))) (macro-error 'popf exp)))"));
  T53 = fun_39;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"popf"),T53);
  lit_81 = YPPlist(1,YPPsym((P)"exp"));
  lit_82 = YPPlist(1,YPPsym((P)"return"));
  lit_83 = YPPsym((P)"x-1160");
  lit_84 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_85 = YPPsym((P)"opf");
  lit_86 = YPPsym((P)"_");
  T56 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1160_40 = YPfab_met(FUNCODEREF(fun_x_1160_40),T56,LITREF(lit_83),LITREF(lit_84),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'opf exp)))"));
  T55 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPfab_met(FUNCODEREF(fun_41),T55,YPfalse,LITREF(lit_82),YPfalse,YPsb((P)"(fun (return) (loc ((x-1160 ((msg <str>) (args ...)) (return (macro-error 'opf exp)))) (let ((x-1159 exp)) (let ((place #f) (call #f)) (if (isa? x-1159 <lst>) (let ((x-1159 (match-atom x-1159 'opf x-1160))) (let ((x-1159 (seq (set place (match-unquote x-1159 x-1160)) (tail x-1159)))) (let ((x-1159 (seq (set call (match-unquote x-1159 x-1160)) (tail x-1159)))) (let ((x-1159 (seq (let ((x-1159 (match-sublist x-1159 x-1160))) (match-nul-list x-1159 x-1160)) (tail x-1159)))) (match-nul-list x-1159 x-1160))))) (x-1160 Match Pattern Failure x-1159)) (let (((tup g-decls g-place) (lift-place-subforms place))) (quasiquote (let ((unquote-splicing g-decls) (_ (unquote g-place))) (set (unquote g-place) (unquote call)))))))))"));
  T54 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPfab_met(FUNCODEREF(fun_42),T54,YPfalse,LITREF(lit_81),YPfalse,YPsb((P)"(fun (exp) (mif ((opf (unquote place) (unquote call)) exp) (let (((tup g-decls g-place) (lift-place-subforms place))) (quasiquote (let ((unquote-splicing g-decls) (_ (unquote g-place))) (set (unquote g-place) (unquote call))))) (macro-error 'opf exp)))"));
  T57 = fun_42;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"opf"),T57);
  lit_87 = YPPlist(1,YPPsym((P)"exp"));
  lit_88 = YPPlist(1,YPPsym((P)"return"));
  lit_89 = YPPsym((P)"x-1164");
  lit_90 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_91 = YPPsym((P)"or/set");
  lit_92 = YPPsym((P)"or");
  T60 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1164_43 = YPfab_met(FUNCODEREF(fun_x_1164_43),T60,LITREF(lit_89),LITREF(lit_90),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'or/set exp)))"));
  T59 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T59,YPfalse,LITREF(lit_88),YPfalse,YPsb((P)"(fun (return) (loc ((x-1164 ((msg <str>) (args ...)) (return (macro-error 'or/set exp)))) (let ((x-1163 exp)) (let ((place #f) (value #f)) (if (isa? x-1163 <lst>) (let ((x-1163 (match-atom x-1163 'or/set x-1164))) (let ((x-1163 (seq (set place (match-unquote x-1163 x-1164)) (tail x-1163)))) (let ((x-1163 (seq (set value (match-unquote x-1163 x-1164)) (tail x-1163)))) (let ((x-1163 (seq (let ((x-1163 (match-sublist x-1163 x-1164))) (match-nul-list x-1163 x-1164)) (tail x-1163)))) (match-nul-list x-1163 x-1164))))) (x-1164 Match Pattern Failure x-1163)) (let (((tup g-decls g-place) (lift-place-subforms place))) (quasiquote (let ((unquote-splicing g-decls) (_ (unquote g-place))) (or (unquote g-place) (set (unquote g-place) (unquote value))))))))))"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPfab_met(FUNCODEREF(fun_45),T58,YPfalse,LITREF(lit_87),YPfalse,YPsb((P)"(fun (exp) (mif ((or/set (unquote place) (unquote value)) exp) (let (((tup g-decls g-place) (lift-place-subforms place))) (quasiquote (let ((unquote-splicing g-decls) (_ (unquote g-place))) (or (unquote g-place) (set (unquote g-place) (unquote value)))))) (macro-error 'or/set exp)))"));
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
  fun_x_1168_46 = YPfab_met(FUNCODEREF(fun_x_1168_46),T64,LITREF(lit_95),LITREF(lit_96),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'unless exp)))"));
  T63 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPfab_met(FUNCODEREF(fun_47),T63,YPfalse,LITREF(lit_94),YPfalse,YPsb((P)"(fun (return) (loc ((x-1168 ((msg <str>) (args ...)) (return (macro-error 'unless exp)))) (let ((x-1167 exp)) (let ((test #f) (body #f)) (if (isa? x-1167 <lst>) (let ((x-1167 (match-atom x-1167 'unless x-1168))) (let ((x-1167 (seq (set test (match-unquote x-1167 x-1168)) (tail x-1167)))) (let ((x-1167 (seq (set body x-1167) '()))) (let ((x-1167 (seq (let ((x-1167 (match-sublist x-1167 x-1168))) (match-nul-list x-1167 x-1168)) (tail x-1167)))) (match-nul-list x-1167 x-1168))))) (x-1168 Match Pattern Failure x-1167)) (quasiquote (if (not (unquote test)) (seq (unquote-splicing body))))))))"));
  T62 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPfab_met(FUNCODEREF(fun_48),T62,YPfalse,LITREF(lit_93),YPfalse,YPsb((P)"(fun (exp) (mif ((unless (unquote test) (unquote-splicing body)) exp) (quasiquote (if (not (unquote test)) (seq (unquote-splicing body)))) (macro-error 'unless exp)))"));
  T65 = fun_48;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"unless"),T65);
  lit_101 = YPPlist(1,YPPsym((P)"exp"));
  lit_102 = YPPlist(1,YPPsym((P)"return"));
  lit_103 = YPPsym((P)"x-1172");
  lit_104 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_105 = YPPsym((P)"when");
  T68 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1172_49 = YPfab_met(FUNCODEREF(fun_x_1172_49),T68,LITREF(lit_103),LITREF(lit_104),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'when exp)))"));
  T67 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPfab_met(FUNCODEREF(fun_50),T67,YPfalse,LITREF(lit_102),YPfalse,YPsb((P)"(fun (return) (loc ((x-1172 ((msg <str>) (args ...)) (return (macro-error 'when exp)))) (let ((x-1171 exp)) (let ((test #f) (body #f)) (if (isa? x-1171 <lst>) (let ((x-1171 (match-atom x-1171 'when x-1172))) (let ((x-1171 (seq (set test (match-unquote x-1171 x-1172)) (tail x-1171)))) (let ((x-1171 (seq (set body x-1171) '()))) (let ((x-1171 (seq (let ((x-1171 (match-sublist x-1171 x-1172))) (match-nul-list x-1171 x-1172)) (tail x-1171)))) (match-nul-list x-1171 x-1172))))) (x-1172 Match Pattern Failure x-1171)) (quasiquote (if (unquote test) (seq (unquote-splicing body))))))))"));
  T66 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPfab_met(FUNCODEREF(fun_51),T66,YPfalse,LITREF(lit_101),YPfalse,YPsb((P)"(fun (exp) (mif ((when (unquote test) (unquote-splicing body)) exp) (quasiquote (if (unquote test) (seq (unquote-splicing body)))) (macro-error 'when exp)))"));
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
  fun_x_1180_52 = YPfab_met(FUNCODEREF(fun_x_1180_52),T76,LITREF(lit_108),LITREF(lit_109),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'or exp)))"));
  T75 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1182_53 = YPfab_met(FUNCODEREF(fun_x_1182_53),T75,LITREF(lit_111),LITREF(lit_112),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return #f))"));
  T74 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1184_54 = YPfab_met(FUNCODEREF(fun_x_1184_54),T74,LITREF(lit_114),LITREF(lit_115),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (quasiquote (let ((tmp (unquote x))) (if tmp tmp (or (unquote-splicing rest)))))))"));
  T73 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPfab_met(FUNCODEREF(fun_55),T73,YPfalse,LITREF(lit_113),YPfalse,YPsb((P)"(fun (return) (loc ((x-1184 ((msg <str>) (args ...)) (return (quasiquote (let ((tmp (unquote x))) (if tmp tmp (or (unquote-splicing rest)))))))) (let ((x-1183 rest)) (let () (if (isa? x-1183 <lst>) (match-nul-list x-1183 x-1184) (x-1184 Match Pattern Failure x-1183)) x))))"));
  T72 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPfab_met(FUNCODEREF(fun_56),T72,YPfalse,LITREF(lit_110),YPfalse,YPsb((P)"(fun (return) (loc ((x-1182 ((msg <str>) (args ...)) (return #f))) (let ((x-1181 rest)) (let ((x #f) (rest #f)) (if (isa? x-1181 <lst>) (let ((x-1181 (seq (set x (match-unquote x-1181 x-1182)) (tail x-1181)))) (let ((x-1181 (seq (set rest x-1181) '()))) (let ((x-1181 (seq (let ((x-1181 (match-sublist x-1181 x-1182))) (match-nul-list x-1181 x-1182)) (tail x-1181)))) (match-nul-list x-1181 x-1182)))) (x-1182 Match Pattern Failure x-1181)) (mif (() rest) x (quasiquote (let ((tmp (unquote x))) (if tmp tmp (or (unquote-splicing rest))))))))))"));
  T71 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPfab_met(FUNCODEREF(fun_57),T71,YPfalse,LITREF(lit_107),YPfalse,YPsb((P)"(fun (return) (loc ((x-1180 ((msg <str>) (args ...)) (return (macro-error 'or exp)))) (let ((x-1179 exp)) (let ((rest #f)) (if (isa? x-1179 <lst>) (let ((x-1179 (match-atom x-1179 'or x-1180))) (let ((x-1179 (seq (set rest x-1179) '()))) (let ((x-1179 (seq (let ((x-1179 (match-sublist x-1179 x-1180))) (match-nul-list x-1179 x-1180)) (tail x-1179)))) (match-nul-list x-1179 x-1180)))) (x-1180 Match Pattern Failure x-1179)) (mif (((unquote x) (unquote-splicing rest)) rest) (mif (() rest) x (quasiquote (let ((tmp (unquote x))) (if tmp tmp (or (unquote-splicing rest)))))) #f)))))"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPfab_met(FUNCODEREF(fun_58),T70,YPfalse,LITREF(lit_106),YPfalse,YPsb((P)"(fun (exp) (mif ((or (unquote-splicing rest)) exp) (mif (((unquote x) (unquote-splicing rest)) rest) (mif (() rest) x (quasiquote (let ((tmp (unquote x))) (if tmp tmp (or (unquote-splicing rest)))))) #f) (macro-error 'or exp)))"));
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
  fun_x_1192_59 = YPfab_met(FUNCODEREF(fun_x_1192_59),T84,LITREF(lit_119),LITREF(lit_120),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'and exp)))"));
  T83 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1194_60 = YPfab_met(FUNCODEREF(fun_x_1194_60),T83,LITREF(lit_123),LITREF(lit_124),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return #t))"));
  T82 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1196_61 = YPfab_met(FUNCODEREF(fun_x_1196_61),T82,LITREF(lit_126),LITREF(lit_127),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (quasiquote (if (unquote x) (and (unquote-splicing rest)) #f))))"));
  T81 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPfab_met(FUNCODEREF(fun_62),T81,YPfalse,LITREF(lit_125),YPfalse,YPsb((P)"(fun (return) (loc ((x-1196 ((msg <str>) (args ...)) (return (quasiquote (if (unquote x) (and (unquote-splicing rest)) #f))))) (let ((x-1195 rest)) (let () (if (isa? x-1195 <lst>) (match-nul-list x-1195 x-1196) (x-1196 Match Pattern Failure x-1195)) x))))"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPfab_met(FUNCODEREF(fun_63),T80,YPfalse,LITREF(lit_122),YPfalse,YPsb((P)"(fun (return) (loc ((x-1194 ((msg <str>) (args ...)) (return #t))) (let ((x-1193 rest)) (let ((x #f) (rest #f)) (if (isa? x-1193 <lst>) (let ((x-1193 (seq (set x (match-unquote x-1193 x-1194)) (tail x-1193)))) (let ((x-1193 (seq (set rest x-1193) '()))) (let ((x-1193 (seq (let ((x-1193 (match-sublist x-1193 x-1194))) (match-nul-list x-1193 x-1194)) (tail x-1193)))) (match-nul-list x-1193 x-1194)))) (x-1194 Match Pattern Failure x-1193)) (mif (() rest) x (quasiquote (if (unquote x) (and (unquote-splicing rest)) #f)))))))"));
  T79 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPfab_met(FUNCODEREF(fun_64),T79,YPfalse,LITREF(lit_118),YPfalse,YPsb((P)"(fun (return) (loc ((x-1192 ((msg <str>) (args ...)) (return (macro-error 'and exp)))) (let ((x-1191 exp)) (let ((rest #f)) (if (isa? x-1191 <lst>) (let ((x-1191 (match-atom x-1191 'and x-1192))) (let ((x-1191 (seq (set rest x-1191) '()))) (let ((x-1191 (seq (let ((x-1191 (match-sublist x-1191 x-1192))) (match-nul-list x-1191 x-1192)) (tail x-1191)))) (match-nul-list x-1191 x-1192)))) (x-1192 Match Pattern Failure x-1191)) (mif (((unquote x) (unquote-splicing rest)) rest) (mif (() rest) x (quasiquote (if (unquote x) (and (unquote-splicing rest)) #f))) #t)))))"));
  T78 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPfab_met(FUNCODEREF(fun_65),T78,YPfalse,LITREF(lit_117),YPfalse,YPsb((P)"(fun (exp) (mif ((and (unquote-splicing rest)) exp) (mif (((unquote x) (unquote-splicing rest)) rest) (mif (() rest) x (quasiquote (if (unquote x) (and (unquote-splicing rest)) #f))) #t) (macro-error 'and exp)))"));
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
  fun_x_1202_66 = YPfab_met(FUNCODEREF(fun_x_1202_66),T90,LITREF(lit_130),LITREF(lit_131),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'cond exp)))"));
  T89 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1204_67 = YPfab_met(FUNCODEREF(fun_x_1204_67),T89,LITREF(lit_134),LITREF(lit_135),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (syntax-error bad case %= (head cases))))"));
  T88 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_68 = YPfab_met(FUNCODEREF(fun_68),T88,YPfalse,LITREF(lit_133),YPfalse,YPsb((P)"(fun (return) (loc ((x-1204 ((msg <str>) (args ...)) (return (syntax-error bad case %= (head cases))))) (let ((x-1203 (head cases))) (let ((cond #f) (body #f)) (if (isa? x-1203 <lst>) (let ((x-1203 (seq (set cond (match-unquote x-1203 x-1204)) (tail x-1203)))) (let ((x-1203 (seq (set body x-1203) '()))) (let ((x-1203 (seq (let ((x-1203 (match-sublist x-1203 x-1204))) (match-nul-list x-1203 x-1204)) (tail x-1203)))) (match-nul-list x-1203 x-1204)))) (x-1204 Match Pattern Failure x-1203)) (quasiquote (if (unquote cond) (seq (unquote-splicing body)) (cond (unquote-splicing (tail cases)))))))))"));
  T87 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPfab_met(FUNCODEREF(fun_69),T87,YPfalse,LITREF(lit_129),YPfalse,YPsb((P)"(fun (return) (loc ((x-1202 ((msg <str>) (args ...)) (return (macro-error 'cond exp)))) (let ((x-1201 exp)) (let ((cases #f)) (if (isa? x-1201 <lst>) (let ((x-1201 (match-atom x-1201 'cond x-1202))) (let ((x-1201 (seq (set cases x-1201) '()))) (let ((x-1201 (seq (let ((x-1201 (match-sublist x-1201 x-1202))) (match-nul-list x-1201 x-1202)) (tail x-1201)))) (match-nul-list x-1201 x-1202)))) (x-1202 Match Pattern Failure x-1201)) (if (nul? cases) #f (mif (((unquote cond) (unquote-splicing body)) (head cases)) (quasiquote (if (unquote cond) (seq (unquote-splicing body)) (cond (unquote-splicing (tail cases))))) (syntax-error bad case %= (head cases))))))))"));
  T86 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPfab_met(FUNCODEREF(fun_70),T86,YPfalse,LITREF(lit_128),YPfalse,YPsb((P)"(fun (exp) (mif ((cond (unquote-splicing cases)) exp) (if (nul? cases) #f (mif (((unquote cond) (unquote-splicing body)) (head cases)) (quasiquote (if (unquote cond) (seq (unquote-splicing body)) (cond (unquote-splicing (tail cases))))) (syntax-error bad case %= (head cases)))) (macro-error 'cond exp)))"));
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
  fun_x_1210_71 = YPfab_met(FUNCODEREF(fun_x_1210_71),T97,LITREF(lit_140),LITREF(lit_141),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (syntax-error bad case %= (head cases))))"));
  T96 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1212_72 = YPfab_met(FUNCODEREF(fun_x_1212_72),T96,LITREF(lit_144),LITREF(lit_145),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (syntax-error bad case %= (head cases))))"));
  T95 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPfab_met(FUNCODEREF(fun_73),T95,YPfalse,LITREF(lit_147),YPfalse,YPsb((P)"(fun (x) (cat (lst tst) (lst val) (lst x) '()))"));
  T94 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPfab_met(FUNCODEREF(fun_74),T94,YPfalse,LITREF(lit_143),YPfalse,YPsb((P)"(fun (return) (loc ((x-1212 ((msg <str>) (args ...)) (return (syntax-error bad case %= (head cases))))) (let ((x-1211 cond)) (let ((values #f)) (if (isa? x-1211 <lst>) (let ((x-1211 (seq (set values x-1211) '()))) (let ((x-1211 (seq (let ((x-1211 (match-sublist x-1211 x-1212))) (match-nul-list x-1211 x-1212)) (tail x-1211)))) (match-nul-list x-1211 x-1212))) (x-1212 Match Pattern Failure x-1211)) (quasiquote (if (or (unquote-splicing (map (fun (x) (quasiquote ((unquote tst) (unquote val) (unquote x)))) values))) (seq (unquote-splicing body)) (unquote (do-case-by val tst (tail cases)))))))))"));
  T93 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPfab_met(FUNCODEREF(fun_75),T93,YPfalse,LITREF(lit_139),YPfalse,YPsb((P)"(fun (return) (loc ((x-1210 ((msg <str>) (args ...)) (return (syntax-error bad case %= (head cases))))) (let ((x-1209 (head cases))) (let ((cond #f) (body #f)) (if (isa? x-1209 <lst>) (let ((x-1209 (seq (set cond (match-unquote x-1209 x-1210)) (tail x-1209)))) (let ((x-1209 (seq (set body x-1209) '()))) (let ((x-1209 (seq (let ((x-1209 (match-sublist x-1209 x-1210))) (match-nul-list x-1209 x-1210)) (tail x-1209)))) (match-nul-list x-1209 x-1210)))) (x-1210 Match Pattern Failure x-1209)) (if (== cond #t) (quasiquote (seq (unquote-splicing body))) (mif (((unquote-splicing values)) cond) (quasiquote (if (or (unquote-splicing (map (fun (x) (quasiquote ((unquote tst) (unquote val) (unquote x)))) values))) (seq (unquote-splicing body)) (unquote (do-case-by val tst (tail cases))))) (syntax-error bad case %= (head cases))))))))"));
  T92 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSmacrosYdo_case_by = YPfab_met(FUNCODEREF(YgooSmacrosYdo_case_by),T92,LITREF(lit_137),LITREF(lit_138),sloc(150),YPsb((P)"(fun (val tst cases) (if (nul? cases) #f (mif (((unquote cond) (unquote-splicing body)) (head cases)) (if (== cond #t) (quasiquote (seq (unquote-splicing body))) (mif (((unquote-splicing values)) cond) (quasiquote (if (or (unquote-splicing (map (fun (x) (quasiquote ((unquote tst) (unquote val) (unquote x)))) values))) (seq (unquote-splicing body)) (unquote (do-case-by val tst (tail cases))))) (syntax-error bad case %= (head cases)))) (syntax-error bad case %= (head cases)))))"));
  T98 = YgooSmacrosYdo_case_by;
  VARSET(YgooSmacrosYdo_case_by,T98);
  lit_148 = YPPlist(1,YPPsym((P)"exp"));
  lit_149 = YPPlist(1,YPPsym((P)"return"));
  lit_150 = YPPsym((P)"x-1216");
  lit_151 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_152 = YPPsym((P)"case-by");
  T101 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1216_77 = YPfab_met(FUNCODEREF(fun_x_1216_77),T101,LITREF(lit_150),LITREF(lit_151),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'case-by exp)))"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPfab_met(FUNCODEREF(fun_78),T100,YPfalse,LITREF(lit_149),YPfalse,YPsb((P)"(fun (return) (loc ((x-1216 ((msg <str>) (args ...)) (return (macro-error 'case-by exp)))) (let ((x-1215 exp)) (let ((val #f) (tst #f) (cases #f)) (if (isa? x-1215 <lst>) (let ((x-1215 (match-atom x-1215 'case-by x-1216))) (let ((x-1215 (seq (set val (match-unquote x-1215 x-1216)) (tail x-1215)))) (let ((x-1215 (seq (set tst (match-unquote x-1215 x-1216)) (tail x-1215)))) (let ((x-1215 (seq (set cases x-1215) '()))) (let ((x-1215 (seq (let ((x-1215 (match-sublist x-1215 x-1216))) (match-nul-list x-1215 x-1216)) (tail x-1215)))) (match-nul-list x-1215 x-1216)))))) (x-1216 Match Pattern Failure x-1215)) (let ((val-var (gensym)) (tst-var (gensym))) (quasiquote (let (((unquote val-var) (unquote val)) ((unquote tst-var) (unquote tst))) (unquote (do-case-by val-var tst-var cases)))))))))"));
  T99 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPfab_met(FUNCODEREF(fun_79),T99,YPfalse,LITREF(lit_148),YPfalse,YPsb((P)"(fun (exp) (mif ((case-by (unquote val) (unquote tst) (unquote-splicing cases)) exp) (let ((val-var (gensym)) (tst-var (gensym))) (quasiquote (let (((unquote val-var) (unquote val)) ((unquote tst-var) (unquote tst))) (unquote (do-case-by val-var tst-var cases))))) (macro-error 'case-by exp)))"));
  T102 = fun_79;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case-by"),T102);
  lit_153 = YPPlist(1,YPPsym((P)"exp"));
  lit_154 = YPPlist(1,YPPsym((P)"return"));
  lit_155 = YPPsym((P)"x-1220");
  lit_156 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_157 = YPPsym((P)"case");
  lit_158 = YPPsym((P)"==");
  T105 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1220_80 = YPfab_met(FUNCODEREF(fun_x_1220_80),T105,LITREF(lit_155),LITREF(lit_156),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'case exp)))"));
  T104 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPfab_met(FUNCODEREF(fun_81),T104,YPfalse,LITREF(lit_154),YPfalse,YPsb((P)"(fun (return) (loc ((x-1220 ((msg <str>) (args ...)) (return (macro-error 'case exp)))) (let ((x-1219 exp)) (let ((val #f) (cases #f)) (if (isa? x-1219 <lst>) (let ((x-1219 (match-atom x-1219 'case x-1220))) (let ((x-1219 (seq (set val (match-unquote x-1219 x-1220)) (tail x-1219)))) (let ((x-1219 (seq (set cases x-1219) '()))) (let ((x-1219 (seq (let ((x-1219 (match-sublist x-1219 x-1220))) (match-nul-list x-1219 x-1220)) (tail x-1219)))) (match-nul-list x-1219 x-1220))))) (x-1220 Match Pattern Failure x-1219)) (quasiquote (case-by (unquote val) == (unquote-splicing cases)))))))"));
  T103 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPfab_met(FUNCODEREF(fun_82),T103,YPfalse,LITREF(lit_153),YPfalse,YPsb((P)"(fun (exp) (mif ((case (unquote val) (unquote-splicing cases)) exp) (quasiquote (case-by (unquote val) == (unquote-splicing cases))) (macro-error 'case exp)))"));
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
  fun_x_1228_83 = YPfab_met(FUNCODEREF(fun_x_1228_83),T113,LITREF(lit_161),LITREF(lit_162),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'match exp)))"));
  T112 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1232_84 = YPfab_met(FUNCODEREF(fun_x_1232_84),T112,LITREF(lit_168),LITREF(lit_169),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (syntax-error invalid match syntax.)))"));
  T111 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPfab_met(FUNCODEREF(fun_85),T111,YPfalse,LITREF(lit_167),YPfalse,YPsb((P)"(fun (return) (loc ((x-1232 ((msg <str>) (args ...)) (return (syntax-error invalid match syntax.)))) (let ((x-1231 cases)) (let ((pat #f) (then #f) (rest #f)) (if (isa? x-1231 <lst>) (let ((x-1231 (seq (let ((x-1231 (match-sublist x-1231 x-1232))) (let ((x-1231 (seq (set pat (match-unquote x-1231 x-1232)) (tail x-1231)))) (let ((x-1231 (seq (set then x-1231) '()))) (let ((x-1231 (seq (let ((x-1231 (match-sublist x-1231 x-1232))) (match-nul-list x-1231 x-1232)) (tail x-1231)))) (match-nul-list x-1231 x-1232))))) (tail x-1231)))) (let ((x-1231 (seq (set rest x-1231) '()))) (let ((x-1231 (seq (let ((x-1231 (match-sublist x-1231 x-1232))) (match-nul-list x-1231 x-1232)) (tail x-1231)))) (match-nul-list x-1231 x-1232)))) (x-1232 Match Pattern Failure x-1231)) (if (== pat #t) (quasiquote (seq (unquote-splicing then))) (let ((var (gensym))) (quasiquote (let (((unquote var) (unquote exp))) (mif ((unquote pat) (unquote var)) (seq (unquote-splicing then)) (match (unquote var) (unquote-splicing rest)))))))))))"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1230_86 = YPfab_met(FUNCODEREF(fun_x_1230_86),T110,LITREF(lit_165),LITREF(lit_166),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (mif ((((unquote pat) (unquote-splicing then)) (unquote-splicing rest)) cases) (if (== pat #t) (quasiquote (seq (unquote-splicing then))) (let ((var (gensym))) (quasiquote (let (((unquote var) (unquote exp))) (mif ((unquote pat) (unquote var)) (seq (unquote-splicing then)) (match (unquote var) (unquote-splicing rest))))))) (syntax-error invalid match syntax.))))"));
  T109 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPfab_met(FUNCODEREF(fun_87),T109,YPfalse,LITREF(lit_164),YPfalse,YPsb((P)"(fun (return) (loc ((x-1230 ((msg <str>) (args ...)) (return (mif ((((unquote pat) (unquote-splicing then)) (unquote-splicing rest)) cases) (if (== pat #t) (quasiquote (seq (unquote-splicing then))) (let ((var (gensym))) (quasiquote (let (((unquote var) (unquote exp))) (mif ((unquote pat) (unquote var)) (seq (unquote-splicing then)) (match (unquote var) (unquote-splicing rest))))))) (syntax-error invalid match syntax.))))) (let ((x-1229 cases)) (let () (if (isa? x-1229 <lst>) (match-nul-list x-1229 x-1230) (x-1230 Match Pattern Failure x-1229)) (quasiquote (syntax-error failed to match.))))))"));
  T108 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPfab_met(FUNCODEREF(fun_88),T108,YPfalse,LITREF(lit_160),YPfalse,YPsb((P)"(fun (return) (loc ((x-1228 ((msg <str>) (args ...)) (return (macro-error 'match exp)))) (let ((x-1227 exp)) (let ((exp #f) (cases #f)) (if (isa? x-1227 <lst>) (let ((x-1227 (match-atom x-1227 'match x-1228))) (let ((x-1227 (seq (set exp (match-unquote x-1227 x-1228)) (tail x-1227)))) (let ((x-1227 (seq (set cases x-1227) '()))) (let ((x-1227 (seq (let ((x-1227 (match-sublist x-1227 x-1228))) (match-nul-list x-1227 x-1228)) (tail x-1227)))) (match-nul-list x-1227 x-1228))))) (x-1228 Match Pattern Failure x-1227)) (mif (() cases) (quasiquote (syntax-error failed to match.)) (mif ((((unquote pat) (unquote-splicing then)) (unquote-splicing rest)) cases) (if (== pat #t) (quasiquote (seq (unquote-splicing then))) (let ((var (gensym))) (quasiquote (let (((unquote var) (unquote exp))) (mif ((unquote pat) (unquote var)) (seq (unquote-splicing then)) (match (unquote var) (unquote-splicing rest))))))) (syntax-error invalid match syntax.)))))))"));
  T107 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_89 = YPfab_met(FUNCODEREF(fun_89),T107,YPfalse,LITREF(lit_159),YPfalse,YPsb((P)"(fun (exp) (mif ((match (unquote exp) (unquote-splicing cases)) exp) (mif (() cases) (quasiquote (syntax-error failed to match.)) (mif ((((unquote pat) (unquote-splicing then)) (unquote-splicing rest)) cases) (if (== pat #t) (quasiquote (seq (unquote-splicing then))) (let ((var (gensym))) (quasiquote (let (((unquote var) (unquote exp))) (mif ((unquote pat) (unquote var)) (seq (unquote-splicing then)) (match (unquote var) (unquote-splicing rest))))))) (syntax-error invalid match syntax.))) (macro-error 'match exp)))"));
  T114 = fun_89;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"match"),T114);
  lit_174 = YPPlist(1,YPPsym((P)"exp"));
  lit_175 = YPPlist(1,YPPsym((P)"return"));
  lit_176 = YPPsym((P)"x-1236");
  lit_177 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_178 = YPPsym((P)"assert");
  lit_179 = YPPsym((P)"assert-error");
  T117 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1236_90 = YPfab_met(FUNCODEREF(fun_x_1236_90),T117,LITREF(lit_176),LITREF(lit_177),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'assert exp)))"));
  T116 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPfab_met(FUNCODEREF(fun_91),T116,YPfalse,LITREF(lit_175),YPfalse,YPsb((P)"(fun (return) (loc ((x-1236 ((msg <str>) (args ...)) (return (macro-error 'assert exp)))) (let ((x-1235 exp)) (let ((cond #f) (message #f) (args #f)) (if (isa? x-1235 <lst>) (let ((x-1235 (match-atom x-1235 'assert x-1236))) (let ((x-1235 (seq (set cond (match-unquote x-1235 x-1236)) (tail x-1235)))) (let ((x-1235 (seq (set message (match-unquote x-1235 x-1236)) (tail x-1235)))) (let ((x-1235 (seq (set args x-1235) '()))) (let ((x-1235 (seq (let ((x-1235 (match-sublist x-1235 x-1236))) (match-nul-list x-1235 x-1236)) (tail x-1235)))) (match-nul-list x-1235 x-1236)))))) (x-1236 Match Pattern Failure x-1235)) (quasiquote (if (not (unquote cond)) (assert-error (unquote message) (unquote-splicing args))))))))"));
  T115 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPfab_met(FUNCODEREF(fun_92),T115,YPfalse,LITREF(lit_174),YPfalse,YPsb((P)"(fun (exp) (mif ((assert (unquote cond) (unquote message) (unquote-splicing args)) exp) (quasiquote (if (not (unquote cond)) (assert-error (unquote message) (unquote-splicing args)))) (macro-error 'assert exp)))"));
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
  fun_x_1244_93 = YPfab_met(FUNCODEREF(fun_x_1244_93),T126,LITREF(lit_182),LITREF(lit_183),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'for exp)))"));
  T125 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1246_94 = YPfab_met(FUNCODEREF(fun_x_1246_94),T125,LITREF(lit_189),LITREF(lit_190),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return #f))"));
  T124 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1248_95 = YPfab_met(FUNCODEREF(fun_x_1248_95),T124,LITREF(lit_194),LITREF(lit_195),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (quasiquote ((unquote var) (now (unquote state))))))"));
  T123 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPfab_met(FUNCODEREF(fun_96),T123,YPfalse,LITREF(lit_193),YPfalse,YPsb((P)"(fun (return) (loc ((x-1248 ((msg <str>) (args ...)) (return (quasiquote ((unquote var) (now (unquote state))))))) (let ((x-1247 var)) (let ((key #f) (val #f)) (if (isa? x-1247 <lst>) (let ((x-1247 (match-atom x-1247 'tup x-1248))) (let ((x-1247 (seq (set key (match-unquote x-1247 x-1248)) (tail x-1247)))) (let ((x-1247 (seq (set val (match-unquote x-1247 x-1248)) (tail x-1247)))) (let ((x-1247 (seq (let ((x-1247 (match-sublist x-1247 x-1248))) (match-nul-list x-1247 x-1248)) (tail x-1247)))) (match-nul-list x-1247 x-1248))))) (x-1248 Match Pattern Failure x-1247)) (quasiquote ((tup (unquote key) (unquote val)) (tup (now-key (unquote state)) (now (unquote state)))))))))"));
  T122 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPfab_met(FUNCODEREF(fun_97),T122,YPfalse,LITREF(lit_188),YPfalse,YPsb((P)"(fun (return) (loc ((x-1246 ((msg <str>) (args ...)) (return #f))) (let ((x-1245 clause)) (let ((var #f) (exp #f)) (if (isa? x-1245 <lst>) (let ((x-1245 (seq (set var (match-unquote x-1245 x-1246)) (tail x-1245)))) (let ((x-1245 (seq (set exp (match-unquote x-1245 x-1246)) (tail x-1245)))) (let ((x-1245 (seq (let ((x-1245 (match-sublist x-1245 x-1246))) (match-nul-list x-1245 x-1246)) (tail x-1245)))) (match-nul-list x-1245 x-1246)))) (x-1246 Match Pattern Failure x-1245)) (let ((state (gensym))) (grok (tail clauses) (pair (quasiquote ((unquote state) (enum (unquote exp)))) inits) (pair (quasiquote (fin? (unquote state))) preds) (pair (mif ((tup (unquote key) (unquote val)) var) (quasiquote ((tup (unquote key) (unquote val)) (tup (now-key (unquote state)) (now (unquote state))))) (quasiquote ((unquote var) (now (unquote state))))) nows) (pair (quasiquote (nxt (unquote state))) nexts)))))))"));
  T121 = YPfab_sig(YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_grok_98 = YPfab_met(FUNCODEREF(fun_grok_98),T121,LITREF(lit_185),LITREF(lit_186),sloc(188),YPsb((P)"(fun (clauses inits preds nows nexts => #f) (if (nul? clauses) (let ((loop (gensym))) (quasiquote (rep (unquote loop) (unquote inits) (unless (or (unquote-splicing preds)) (let (unquote nows) (unquote-splicing body) ((unquote loop) (unquote-splicing nexts))))))) (let ((clause (head clauses))) (mif (((unquote var) (unquote exp)) clause) (let ((state (gensym))) (grok (tail clauses) (pair (quasiquote ((unquote state) (enum (unquote exp)))) inits) (pair (quasiquote (fin? (unquote state))) preds) (pair (mif ((tup (unquote key) (unquote val)) var) (quasiquote ((tup (unquote key) (unquote val)) (tup (now-key (unquote state)) (now (unquote state))))) (quasiquote ((unquote var) (now (unquote state))))) nows) (pair (quasiquote (nxt (unquote state))) nexts)))))))"));
  T120 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_99 = YPfab_met(FUNCODEREF(fun_99),T120,YPfalse,LITREF(lit_181),YPfalse,YPsb((P)"(fun (return) (loc ((x-1244 ((msg <str>) (args ...)) (return (macro-error 'for exp)))) (let ((x-1243 exp)) (let ((clauses #f) (body #f)) (if (isa? x-1243 <lst>) (let ((x-1243 (match-atom x-1243 'for x-1244))) (let ((x-1243 (seq (let ((x-1243 (match-sublist x-1243 x-1244))) (let ((x-1243 (seq (set clauses x-1243) '()))) (let ((x-1243 (seq (let ((x-1243 (match-sublist x-1243 x-1244))) (match-nul-list x-1243 x-1244)) (tail x-1243)))) (match-nul-list x-1243 x-1244)))) (tail x-1243)))) (let ((x-1243 (seq (set body x-1243) '()))) (let ((x-1243 (seq (let ((x-1243 (match-sublist x-1243 x-1244))) (match-nul-list x-1243 x-1244)) (tail x-1243)))) (match-nul-list x-1243 x-1244))))) (x-1244 Match Pattern Failure x-1243)) (rep grok ((clauses clauses) (inits '()) (preds '()) (nows '()) (nexts '())) (if (nul? clauses) (let ((loop (gensym))) (quasiquote (rep (unquote loop) (unquote inits) (unless (or (unquote-splicing preds)) (let (unquote nows) (unquote-splicing body) ((unquote loop) (unquote-splicing nexts))))))) (let ((clause (head clauses))) (mif (((unquote var) (unquote exp)) clause) (let ((state (gensym))) (grok (tail clauses) (pair (quasiquote ((unquote state) (enum (unquote exp)))) inits) (pair (quasiquote (fin? (unquote state))) preds) (pair (mif ((tup (unquote key) (unquote val)) var) (quasiquote ((tup (unquote key) (unquote val)) (tup (now-key (unquote state)) (now (unquote state))))) (quasiquote ((unquote var) (now (unquote state))))) nows) (pair (quasiquote (nxt (unquote state))) nexts)))))))))))"));
  T119 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPfab_met(FUNCODEREF(fun_100),T119,YPfalse,LITREF(lit_180),YPfalse,YPsb((P)"(fun (exp) (mif ((for ((unquote-splicing clauses)) (unquote-splicing body)) exp) (rep grok ((clauses clauses) (inits '()) (preds '()) (nows '()) (nexts '())) (if (nul? clauses) (let ((loop (gensym))) (quasiquote (rep (unquote loop) (unquote inits) (unless (or (unquote-splicing preds)) (let (unquote nows) (unquote-splicing body) ((unquote loop) (unquote-splicing nexts))))))) (let ((clause (head clauses))) (mif (((unquote var) (unquote exp)) clause) (let ((state (gensym))) (grok (tail clauses) (pair (quasiquote ((unquote state) (enum (unquote exp)))) inits) (pair (quasiquote (fin? (unquote state))) preds) (pair (mif ((tup (unquote key) (unquote val)) var) (quasiquote ((tup (unquote key) (unquote val)) (tup (now-key (unquote state)) (now (unquote state))))) (quasiquote ((unquote var) (now (unquote state))))) nows) (pair (quasiquote (nxt (unquote state))) nexts))))))) (macro-error 'for exp)))"));
  T127 = fun_100;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"for"),T127);
  lit_199 = YPPlist(1,YPPsym((P)"exp"));
  lit_200 = YPPlist(1,YPPsym((P)"return"));
  lit_201 = YPPsym((P)"x-1252");
  lit_202 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_203 = YPPsym((P)"while");
  lit_204 = YPPsym((P)"_loop");
  T130 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1252_101 = YPfab_met(FUNCODEREF(fun_x_1252_101),T130,LITREF(lit_201),LITREF(lit_202),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'while exp)))"));
  T129 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPfab_met(FUNCODEREF(fun_102),T129,YPfalse,LITREF(lit_200),YPfalse,YPsb((P)"(fun (return) (loc ((x-1252 ((msg <str>) (args ...)) (return (macro-error 'while exp)))) (let ((x-1251 exp)) (let ((test #f) (body #f)) (if (isa? x-1251 <lst>) (let ((x-1251 (match-atom x-1251 'while x-1252))) (let ((x-1251 (seq (set test (match-unquote x-1251 x-1252)) (tail x-1251)))) (let ((x-1251 (seq (set body x-1251) '()))) (let ((x-1251 (seq (let ((x-1251 (match-sublist x-1251 x-1252))) (match-nul-list x-1251 x-1252)) (tail x-1251)))) (match-nul-list x-1251 x-1252))))) (x-1252 Match Pattern Failure x-1251)) (quasiquote (rep _loop () (when (unquote test) (unquote-splicing body) (_loop))))))))"));
  T128 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPfab_met(FUNCODEREF(fun_103),T128,YPfalse,LITREF(lit_199),YPfalse,YPsb((P)"(fun (exp) (mif ((while (unquote test) (unquote-splicing body)) exp) (quasiquote (rep _loop () (when (unquote test) (unquote-splicing body) (_loop)))) (macro-error 'while exp)))"));
  T131 = fun_103;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"while"),T131);
  lit_205 = YPPlist(1,YPPsym((P)"exp"));
  lit_206 = YPPlist(1,YPPsym((P)"return"));
  lit_207 = YPPsym((P)"x-1256");
  lit_208 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_209 = YPPsym((P)"until");
  T134 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1256_104 = YPfab_met(FUNCODEREF(fun_x_1256_104),T134,LITREF(lit_207),LITREF(lit_208),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'until exp)))"));
  T133 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPfab_met(FUNCODEREF(fun_105),T133,YPfalse,LITREF(lit_206),YPfalse,YPsb((P)"(fun (return) (loc ((x-1256 ((msg <str>) (args ...)) (return (macro-error 'until exp)))) (let ((x-1255 exp)) (let ((test #f) (body #f)) (if (isa? x-1255 <lst>) (let ((x-1255 (match-atom x-1255 'until x-1256))) (let ((x-1255 (seq (set test (match-unquote x-1255 x-1256)) (tail x-1255)))) (let ((x-1255 (seq (set body x-1255) '()))) (let ((x-1255 (seq (let ((x-1255 (match-sublist x-1255 x-1256))) (match-nul-list x-1255 x-1256)) (tail x-1255)))) (match-nul-list x-1255 x-1256))))) (x-1256 Match Pattern Failure x-1255)) (quasiquote (rep _loop () (unless (unquote test) (unquote-splicing body) (_loop))))))))"));
  T132 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPfab_met(FUNCODEREF(fun_106),T132,YPfalse,LITREF(lit_205),YPfalse,YPsb((P)"(fun (exp) (mif ((until (unquote test) (unquote-splicing body)) exp) (quasiquote (rep _loop () (unless (unquote test) (unquote-splicing body) (_loop)))) (macro-error 'until exp)))"));
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
  fun_x_1266_107 = YPfab_met(FUNCODEREF(fun_x_1266_107),T142,LITREF(lit_212),LITREF(lit_213),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'dlet exp)))"));
  T141 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1272_108 = YPfab_met(FUNCODEREF(fun_x_1272_108),T141,LITREF(lit_219),LITREF(lit_220),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1270 (#t (syntax-error Bad dlet places %= places)))))"));
  T140 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPfab_met(FUNCODEREF(fun_109),T140,YPfalse,LITREF(lit_218),YPfalse,YPsb((P)"(fun (return) (loc ((x-1272 ((msg <str>) (args ...)) (return (match x-1270 (#t (syntax-error Bad dlet places %= places)))))) (let ((x-1271 x-1270)) (let ((place #f) (value #f) (rest #f)) (if (isa? x-1271 <lst>) (let ((x-1271 (seq (let ((x-1271 (match-sublist x-1271 x-1272))) (let ((x-1271 (seq (set place (match-unquote x-1271 x-1272)) (tail x-1271)))) (let ((x-1271 (seq (set value (match-unquote x-1271 x-1272)) (tail x-1271)))) (let ((x-1271 (seq (let ((x-1271 (match-sublist x-1271 x-1272))) (match-nul-list x-1271 x-1272)) (tail x-1271)))) (match-nul-list x-1271 x-1272))))) (tail x-1271)))) (let ((x-1271 (seq (set rest x-1271) '()))) (let ((x-1271 (seq (let ((x-1271 (match-sublist x-1271 x-1272))) (match-nul-list x-1271 x-1272)) (tail x-1271)))) (match-nul-list x-1271 x-1272)))) (x-1272 Match Pattern Failure x-1271)) (seq (let (((tup g-decls g-place) (lift-place-subforms place)) (old-value (gensym))) (quasiquote (let ((unquote-splicing g-decls) ((unquote old-value) (unquote g-place))) (fin (seq (set (unquote g-place) (unquote value)) (dlet ((unquote-splicing rest)) (unquote-splicing body))) (set (unquote g-place) (unquote old-value)))))))))))"));
  T139 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1269_110 = YPfab_met(FUNCODEREF(fun_x_1269_110),T139,LITREF(lit_216),LITREF(lit_217),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1267 ((((unquote place) (unquote value)) (unquote-splicing rest)) (let (((tup g-decls g-place) (lift-place-subforms place)) (old-value (gensym))) (quasiquote (let ((unquote-splicing g-decls) ((unquote old-value) (unquote g-place))) (fin (seq (set (unquote g-place) (unquote value)) (dlet ((unquote-splicing rest)) (unquote-splicing body))) (set (unquote g-place) (unquote old-value))))))) (#t (syntax-error Bad dlet places %= places)))))"));
  T138 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPfab_met(FUNCODEREF(fun_111),T138,YPfalse,LITREF(lit_215),YPfalse,YPsb((P)"(fun (return) (loc ((x-1269 ((msg <str>) (args ...)) (return (match x-1267 ((((unquote place) (unquote value)) (unquote-splicing rest)) (let (((tup g-decls g-place) (lift-place-subforms place)) (old-value (gensym))) (quasiquote (let ((unquote-splicing g-decls) ((unquote old-value) (unquote g-place))) (fin (seq (set (unquote g-place) (unquote value)) (dlet ((unquote-splicing rest)) (unquote-splicing body))) (set (unquote g-place) (unquote old-value))))))) (#t (syntax-error Bad dlet places %= places)))))) (let ((x-1268 x-1267)) (let () (if (isa? x-1268 <lst>) (match-nul-list x-1268 x-1269) (x-1269 Match Pattern Failure x-1268)) (seq (quasiquote (seq (unquote-splicing body))))))))"));
  T137 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPfab_met(FUNCODEREF(fun_112),T137,YPfalse,LITREF(lit_211),YPfalse,YPsb((P)"(fun (return) (loc ((x-1266 ((msg <str>) (args ...)) (return (macro-error 'dlet exp)))) (let ((x-1265 exp)) (let ((places #f) (body #f)) (if (isa? x-1265 <lst>) (let ((x-1265 (match-atom x-1265 'dlet x-1266))) (let ((x-1265 (seq (set places (match-unquote x-1265 x-1266)) (tail x-1265)))) (let ((x-1265 (seq (set body x-1265) '()))) (let ((x-1265 (seq (let ((x-1265 (match-sublist x-1265 x-1266))) (match-nul-list x-1265 x-1266)) (tail x-1265)))) (match-nul-list x-1265 x-1266))))) (x-1266 Match Pattern Failure x-1265)) (match places (() (quasiquote (seq (unquote-splicing body)))) ((((unquote place) (unquote value)) (unquote-splicing rest)) (let (((tup g-decls g-place) (lift-place-subforms place)) (old-value (gensym))) (quasiquote (let ((unquote-splicing g-decls) ((unquote old-value) (unquote g-place))) (fin (seq (set (unquote g-place) (unquote value)) (dlet ((unquote-splicing rest)) (unquote-splicing body))) (set (unquote g-place) (unquote old-value))))))) (#t (syntax-error Bad dlet places %= places)))))))"));
  T136 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPfab_met(FUNCODEREF(fun_113),T136,YPfalse,LITREF(lit_210),YPfalse,YPsb((P)"(fun (exp) (mif ((dlet (unquote places) (unquote-splicing body)) exp) (match places (() (quasiquote (seq (unquote-splicing body)))) ((((unquote place) (unquote value)) (unquote-splicing rest)) (let (((tup g-decls g-place) (lift-place-subforms place)) (old-value (gensym))) (quasiquote (let ((unquote-splicing g-decls) ((unquote old-value) (unquote g-place))) (fin (seq (set (unquote g-place) (unquote value)) (dlet ((unquote-splicing rest)) (unquote-splicing body))) (set (unquote g-place) (unquote old-value))))))) (#t (syntax-error Bad dlet places %= places))) (macro-error 'dlet exp)))"));
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
  fun_x_1276_114 = YPfab_met(FUNCODEREF(fun_x_1276_114),T146,LITREF(lit_225),LITREF(lit_226),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'def-fun-var exp)))"));
  T145 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPfab_met(FUNCODEREF(fun_115),T145,YPfalse,LITREF(lit_224),YPfalse,YPsb((P)"(fun (return) (loc ((x-1276 ((msg <str>) (args ...)) (return (macro-error 'def-fun-var exp)))) (let ((x-1275 exp)) (let ((var #f) (value #f)) (if (isa? x-1275 <lst>) (let ((x-1275 (match-atom x-1275 'def-fun-var x-1276))) (let ((x-1275 (seq (set var (match-unquote x-1275 x-1276)) (tail x-1275)))) (let ((x-1275 (seq (set value (match-unquote x-1275 x-1276)) (tail x-1275)))) (let ((x-1275 (seq (let ((x-1275 (match-sublist x-1275 x-1276))) (match-nul-list x-1275 x-1276)) (tail x-1275)))) (match-nul-list x-1275 x-1276))))) (x-1276 Match Pattern Failure x-1275)) (let ((nam (var-name var)) (typ (var-type var)) (vnam (cat-sym * nam *))) (quasiquote (seq (dv (unquote vnam) (unquote value)) (dm (unquote nam) (=> (unquote typ)) (unquote vnam)) (dm (unquote (fab-setter-name nam)) ((z (unquote typ))) (set (unquote vnam) z)))))))))"));
  T144 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_116 = YPfab_met(FUNCODEREF(fun_116),T144,YPfalse,LITREF(lit_223),YPfalse,YPsb((P)"(fun (exp) (mif ((def-fun-var (unquote var) (unquote value)) exp) (let ((nam (var-name var)) (typ (var-type var)) (vnam (cat-sym * nam *))) (quasiquote (seq (dv (unquote vnam) (unquote value)) (dm (unquote nam) (=> (unquote typ)) (unquote vnam)) (dm (unquote (fab-setter-name nam)) ((z (unquote typ))) (set (unquote vnam) z))))) (macro-error 'def-fun-var exp)))"));
  T147 = fun_116;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"def-fun-var"),T147);
  lit_234 = YPPlist(1,YPPsym((P)"exp"));
  lit_235 = YPPlist(1,YPPsym((P)"return"));
  lit_236 = YPPsym((P)"x-1280");
  lit_237 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_238 = YPPsym((P)"without-prop-unbound-errors");
  lit_239 = YPPsym((P)"*report-prop-unbound-errors?*");
  T150 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1280_117 = YPfab_met(FUNCODEREF(fun_x_1280_117),T150,LITREF(lit_236),LITREF(lit_237),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'without-prop-unbound-errors exp)))"));
  T149 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPfab_met(FUNCODEREF(fun_118),T149,YPfalse,LITREF(lit_235),YPfalse,YPsb((P)"(fun (return) (loc ((x-1280 ((msg <str>) (args ...)) (return (macro-error 'without-prop-unbound-errors exp)))) (let ((x-1279 exp)) (let ((body #f)) (if (isa? x-1279 <lst>) (let ((x-1279 (match-atom x-1279 'without-prop-unbound-errors x-1280))) (let ((x-1279 (seq (set body x-1279) '()))) (let ((x-1279 (seq (let ((x-1279 (match-sublist x-1279 x-1280))) (match-nul-list x-1279 x-1280)) (tail x-1279)))) (match-nul-list x-1279 x-1280)))) (x-1280 Match Pattern Failure x-1279)) (quasiquote (dlet ((*report-prop-unbound-errors?* #f)) (unquote-splicing body)))))))"));
  T148 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPfab_met(FUNCODEREF(fun_119),T148,YPfalse,LITREF(lit_234),YPfalse,YPsb((P)"(fun (exp) (mif ((without-prop-unbound-errors (unquote-splicing body)) exp) (quasiquote (dlet ((*report-prop-unbound-errors?* #f)) (unquote-splicing body))) (macro-error 'without-prop-unbound-errors exp)))"));
  T151 = fun_119;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"without-prop-unbound-errors"),T151);
  lit_240 = YPPlist(1,YPPsym((P)"exp"));
  lit_241 = YPPlist(1,YPPsym((P)"return"));
  lit_242 = YPPsym((P)"x-1284");
  lit_243 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_244 = YPPsym((P)"need-implementation");
  lit_245 = YPPsym((P)"export");
  T154 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1284_120 = YPfab_met(FUNCODEREF(fun_x_1284_120),T154,LITREF(lit_242),LITREF(lit_243),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'need-implementation exp)))"));
  T153 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPfab_met(FUNCODEREF(fun_121),T153,YPfalse,LITREF(lit_241),YPfalse,YPsb((P)"(fun (return) (loc ((x-1284 ((msg <str>) (args ...)) (return (macro-error 'need-implementation exp)))) (let ((x-1283 exp)) (let ((names #f)) (if (isa? x-1283 <lst>) (let ((x-1283 (match-atom x-1283 'need-implementation x-1284))) (let ((x-1283 (seq (set names x-1283) '()))) (let ((x-1283 (seq (let ((x-1283 (match-sublist x-1283 x-1284))) (match-nul-list x-1283 x-1284)) (tail x-1283)))) (match-nul-list x-1283 x-1284)))) (x-1284 Match Pattern Failure x-1283)) (if (nul? names) #f (quasiquote (seq (and #f (unquote (head names))) (export (unquote (head names))) (need-implementation (unquote-splicing (tail names))))))))))"));
  T152 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPfab_met(FUNCODEREF(fun_122),T152,YPfalse,LITREF(lit_240),YPfalse,YPsb((P)"(fun (exp) (mif ((need-implementation (unquote-splicing names)) exp) (if (nul? names) #f (quasiquote (seq (and #f (unquote (head names))) (export (unquote (head names))) (need-implementation (unquote-splicing (tail names)))))) (macro-error 'need-implementation exp)))"));
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
  fun_x_1312_123 = YPfab_met(FUNCODEREF(fun_x_1312_123),T174,LITREF(lit_248),LITREF(lit_249),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'pub exp)))"));
  T173 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1336_124 = YPfab_met(FUNCODEREF(fun_x_1336_124),T173,LITREF(lit_273),LITREF(lit_274),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1334)))"));
  T172 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_125 = YPfab_met(FUNCODEREF(fun_125),T172,YPfalse,LITREF(lit_272),YPfalse,YPsb((P)"(fun (return) (loc ((x-1336 ((msg <str>) (args ...)) (return (match x-1334)))) (let ((x-1335 x-1334)) (let ((name #f)) (if (isa? x-1335 <lst>) (let ((x-1335 (seq (set name (match-unquote x-1335 x-1336)) (tail x-1335)))) (let ((x-1335 (seq (let ((x-1335 (match-sublist x-1335 x-1336))) (match-nul-list x-1335 x-1336)) (tail x-1335)))) (match-nul-list x-1335 x-1336))) (x-1336 Match Pattern Failure x-1335)) (seq (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '()))))))"));
  T171 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1333_126 = YPfab_met(FUNCODEREF(fun_x_1333_126),T171,LITREF(lit_270),LITREF(lit_271),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1331 (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '())))))"));
  T170 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPfab_met(FUNCODEREF(fun_127),T170,YPfalse,LITREF(lit_269),YPfalse,YPsb((P)"(fun (return) (loc ((x-1333 ((msg <str>) (args ...)) (return (match x-1331 (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '())))))) (let ((x-1332 x-1331)) (let ((name #f) (rest #f)) (if (isa? x-1332 <lst>) (let ((x-1332 (match-atom x-1332 'dc x-1333))) (let ((x-1332 (seq (set name (match-unquote x-1332 x-1333)) (tail x-1332)))) (let ((x-1332 (seq (set rest x-1332) '()))) (let ((x-1332 (seq (let ((x-1332 (match-sublist x-1332 x-1333))) (match-nul-list x-1332 x-1333)) (tail x-1332)))) (match-nul-list x-1332 x-1333))))) (x-1333 Match Pattern Failure x-1332)) (seq (quasiquote ((unquote def) (export (unquote name)))))))))"));
  T169 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1330_128 = YPfab_met(FUNCODEREF(fun_x_1330_128),T169,LITREF(lit_267),LITREF(lit_268),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1328 ((dc (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '())))))"));
  T168 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_129 = YPfab_met(FUNCODEREF(fun_129),T168,YPfalse,LITREF(lit_266),YPfalse,YPsb((P)"(fun (return) (loc ((x-1330 ((msg <str>) (args ...)) (return (match x-1328 ((dc (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '())))))) (let ((x-1329 x-1328)) (let ((name #f) (rest #f)) (if (isa? x-1329 <lst>) (let ((x-1329 (match-atom x-1329 'dg x-1330))) (let ((x-1329 (seq (set name (match-unquote x-1329 x-1330)) (tail x-1329)))) (let ((x-1329 (seq (set rest x-1329) '()))) (let ((x-1329 (seq (let ((x-1329 (match-sublist x-1329 x-1330))) (match-nul-list x-1329 x-1330)) (tail x-1329)))) (match-nul-list x-1329 x-1330))))) (x-1330 Match Pattern Failure x-1329)) (seq (quasiquote ((unquote def) (export (unquote name)))))))))"));
  T167 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1327_130 = YPfab_met(FUNCODEREF(fun_x_1327_130),T167,LITREF(lit_264),LITREF(lit_265),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1325 ((dg (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dc (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '())))))"));
  T166 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_131 = YPfab_met(FUNCODEREF(fun_131),T166,YPfalse,LITREF(lit_263),YPfalse,YPsb((P)"(fun (return) (loc ((x-1327 ((msg <str>) (args ...)) (return (match x-1325 ((dg (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dc (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '())))))) (let ((x-1326 x-1325)) (let ((name #f) (rest #f)) (if (isa? x-1326 <lst>) (let ((x-1326 (match-atom x-1326 'd. x-1327))) (let ((x-1326 (seq (set name (match-unquote x-1326 x-1327)) (tail x-1326)))) (let ((x-1326 (seq (set rest x-1326) '()))) (let ((x-1326 (seq (let ((x-1326 (match-sublist x-1326 x-1327))) (match-nul-list x-1326 x-1327)) (tail x-1326)))) (match-nul-list x-1326 x-1327))))) (x-1327 Match Pattern Failure x-1326)) (seq (quasiquote ((unquote def) (export (unquote name)))))))))"));
  T165 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1324_132 = YPfab_met(FUNCODEREF(fun_x_1324_132),T165,LITREF(lit_261),LITREF(lit_262),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1322 ((d. (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dg (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dc (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '())))))"));
  T164 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_133 = YPfab_met(FUNCODEREF(fun_133),T164,YPfalse,LITREF(lit_260),YPfalse,YPsb((P)"(fun (return) (loc ((x-1324 ((msg <str>) (args ...)) (return (match x-1322 ((d. (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dg (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dc (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '())))))) (let ((x-1323 x-1322)) (let ((name #f) (rest #f)) (if (isa? x-1323 <lst>) (let ((x-1323 (match-atom x-1323 'dv x-1324))) (let ((x-1323 (seq (set name (match-unquote x-1323 x-1324)) (tail x-1323)))) (let ((x-1323 (seq (set rest x-1323) '()))) (let ((x-1323 (seq (let ((x-1323 (match-sublist x-1323 x-1324))) (match-nul-list x-1323 x-1324)) (tail x-1323)))) (match-nul-list x-1323 x-1324))))) (x-1324 Match Pattern Failure x-1323)) (seq (quasiquote ((unquote def) (export (unquote name)))))))))"));
  T163 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1321_134 = YPfab_met(FUNCODEREF(fun_x_1321_134),T163,LITREF(lit_258),LITREF(lit_259),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1319 ((dv (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((d. (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dg (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dc (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '())))))"));
  T162 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPfab_met(FUNCODEREF(fun_135),T162,YPfalse,LITREF(lit_257),YPfalse,YPsb((P)"(fun (return) (loc ((x-1321 ((msg <str>) (args ...)) (return (match x-1319 ((dv (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((d. (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dg (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dc (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '())))))) (let ((x-1320 x-1319)) (let ((name #f) (rest #f)) (if (isa? x-1320 <lst>) (let ((x-1320 (match-atom x-1320 'df x-1321))) (let ((x-1320 (seq (set name (match-unquote x-1320 x-1321)) (tail x-1320)))) (let ((x-1320 (seq (set rest x-1320) '()))) (let ((x-1320 (seq (let ((x-1320 (match-sublist x-1320 x-1321))) (match-nul-list x-1320 x-1321)) (tail x-1320)))) (match-nul-list x-1320 x-1321))))) (x-1321 Match Pattern Failure x-1320)) (seq (quasiquote ((unquote name) (export (unquote name)))))))))"));
  T161 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1318_136 = YPfab_met(FUNCODEREF(fun_x_1318_136),T161,LITREF(lit_255),LITREF(lit_256),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1316 ((df (unquote name) (unquote-splicing rest)) (quasiquote ((unquote name) (export (unquote name))))) ((dv (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((d. (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dg (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dc (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '())))))"));
  T160 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_137 = YPfab_met(FUNCODEREF(fun_137),T160,YPfalse,LITREF(lit_254),YPfalse,YPsb((P)"(fun (return) (loc ((x-1318 ((msg <str>) (args ...)) (return (match x-1316 ((df (unquote name) (unquote-splicing rest)) (quasiquote ((unquote name) (export (unquote name))))) ((dv (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((d. (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dg (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dc (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '())))))) (let ((x-1317 x-1316)) (let ((name #f) (rest #f)) (if (isa? x-1317 <lst>) (let ((x-1317 (match-atom x-1317 'dp! x-1318))) (let ((x-1317 (seq (set name (match-unquote x-1317 x-1318)) (tail x-1317)))) (let ((x-1317 (seq (set rest x-1317) '()))) (let ((x-1317 (seq (let ((x-1317 (match-sublist x-1317 x-1318))) (match-nul-list x-1317 x-1318)) (tail x-1317)))) (match-nul-list x-1317 x-1318))))) (x-1318 Match Pattern Failure x-1317)) (seq (quasiquote ((unquote def) (export (unquote name)) (export (unquote (fab-setter-name name))))))))))"));
  T159 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1315_138 = YPfab_met(FUNCODEREF(fun_x_1315_138),T159,LITREF(lit_252),LITREF(lit_253),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (match x-1313 ((dp! (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name)) (export (unquote (fab-setter-name name)))))) ((df (unquote name) (unquote-splicing rest)) (quasiquote ((unquote name) (export (unquote name))))) ((dv (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((d. (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dg (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dc (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '())))))"));
  T158 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPfab_met(FUNCODEREF(fun_139),T158,YPfalse,LITREF(lit_251),YPfalse,YPsb((P)"(fun (return) (loc ((x-1315 ((msg <str>) (args ...)) (return (match x-1313 ((dp! (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name)) (export (unquote (fab-setter-name name)))))) ((df (unquote name) (unquote-splicing rest)) (quasiquote ((unquote name) (export (unquote name))))) ((dv (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((d. (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dg (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dc (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '())))))) (let ((x-1314 x-1313)) (let ((name #f) (rest #f)) (if (isa? x-1314 <lst>) (let ((x-1314 (match-atom x-1314 'dp x-1315))) (let ((x-1314 (seq (set name (match-unquote x-1314 x-1315)) (tail x-1314)))) (let ((x-1314 (seq (set rest x-1314) '()))) (let ((x-1314 (seq (let ((x-1314 (match-sublist x-1314 x-1315))) (match-nul-list x-1314 x-1315)) (tail x-1314)))) (match-nul-list x-1314 x-1315))))) (x-1315 Match Pattern Failure x-1314)) (seq (quasiquote ((unquote def) (export (unquote name)))))))))"));
  T157 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_140 = YPfab_met(FUNCODEREF(fun_140),T157,YPfalse,LITREF(lit_247),YPfalse,YPsb((P)"(fun (return) (loc ((x-1312 ((msg <str>) (args ...)) (return (macro-error 'pub exp)))) (let ((x-1311 exp)) (let ((def #f)) (if (isa? x-1311 <lst>) (let ((x-1311 (match-atom x-1311 'pub x-1312))) (let ((x-1311 (seq (set def x-1311) '()))) (let ((x-1311 (seq (let ((x-1311 (match-sublist x-1311 x-1312))) (match-nul-list x-1311 x-1312)) (tail x-1311)))) (match-nul-list x-1311 x-1312)))) (x-1312 Match Pattern Failure x-1311)) (let ((defs (match def ((dp (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dp! (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name)) (export (unquote (fab-setter-name name)))))) ((df (unquote name) (unquote-splicing rest)) (quasiquote ((unquote name) (export (unquote name))))) ((dv (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((d. (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dg (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dc (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '()))))) (quasiquote (seq (unquote-splicing defs))))))))"));
  T156 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPfab_met(FUNCODEREF(fun_141),T156,YPfalse,LITREF(lit_246),YPfalse,YPsb((P)"(fun (exp) (mif ((pub (unquote-splicing def)) exp) (let ((defs (match def ((dp (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dp! (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name)) (export (unquote (fab-setter-name name)))))) ((df (unquote name) (unquote-splicing rest)) (quasiquote ((unquote name) (export (unquote name))))) ((dv (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((d. (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dg (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) ((dc (unquote name) (unquote-splicing rest)) (quasiquote ((unquote def) (export (unquote name))))) (((unquote name)) (if (isa? name <sym>) (quasiquote ((unquote name) (export (unquote name)))) '()))))) (quasiquote (seq (unquote-splicing defs)))) (macro-error 'pub exp)))"));
  T175 = fun_141;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pub"),T175);
  lit_281 = YPPlist(1,YPPsym((P)"exp"));
  lit_282 = YPPlist(1,YPPsym((P)"return"));
  lit_283 = YPPsym((P)"x-1340");
  lit_284 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_285 = YPPsym((P)"exported");
  lit_286 = YPPlist(1,YPPsym((P)"x"));
  T179 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1340_142 = YPfab_met(FUNCODEREF(fun_x_1340_142),T179,LITREF(lit_283),LITREF(lit_284),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'exported exp)))"));
  T178 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_143 = YPfab_met(FUNCODEREF(fun_143),T178,YPfalse,LITREF(lit_286),YPfalse,YPsb((P)"(fun (x) (def x (if (isa? x <lst>) x (lst x))) (cat (lst 'pub) x '()))"));
  T177 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_144 = YPfab_met(FUNCODEREF(fun_144),T177,YPfalse,LITREF(lit_282),YPfalse,YPsb((P)"(fun (return) (loc ((x-1340 ((msg <str>) (args ...)) (return (macro-error 'exported exp)))) (let ((x-1339 exp)) (let ((defs #f)) (if (isa? x-1339 <lst>) (let ((x-1339 (match-atom x-1339 'exported x-1340))) (let ((x-1339 (seq (set defs x-1339) '()))) (let ((x-1339 (seq (let ((x-1339 (match-sublist x-1339 x-1340))) (match-nul-list x-1339 x-1340)) (tail x-1339)))) (match-nul-list x-1339 x-1340)))) (x-1340 Match Pattern Failure x-1339)) (quasiquote (seq (unquote-splicing (map (fun (x) (def x (if (isa? x <lst>) x (lst x))) (quasiquote (pub (unquote-splicing x)))) defs))))))))"));
  T176 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_145 = YPfab_met(FUNCODEREF(fun_145),T176,YPfalse,LITREF(lit_281),YPfalse,YPsb((P)"(fun (exp) (mif ((exported (unquote-splicing defs)) exp) (quasiquote (seq (unquote-splicing (map (fun (x) (def x (if (isa? x <lst>) x (lst x))) (quasiquote (pub (unquote-splicing x)))) defs)))) (macro-error 'exported exp)))"));
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
  {"@@==", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"decf", PVAR, NULL},
  {"assert", PVAR, NULL},
  {"@checked-next-methods", CVAR, &YgooSmacrosYOchecked_next_methods},
  {"pub", PVAR, NULL},
  {"unless", PVAR, NULL},
  {"cat", CVAR, &YgooSmacrosYcat},
  {"app", PVAR, NULL},
  {"var-type", CVAR, &YgooSmacrosYvar_type},
  {"cat-sym", CVAR, &YgooSmacrosYcat_sym},
  {"match-nul-list", CVAR, &YgooSmacrosYmatch_nul_list},
  {"and", PVAR, NULL},
  {"last", CVAR, &YgooSmacrosYlast},
  {"nul?", CVAR, &YgooSmacrosYnulQ},
  {"rotf", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"2nd", CVAR, &YgooSmacrosY2nd},
  {"match-sublist", CVAR, &YgooSmacrosYmatch_sublist},
  {"---main-1---", PVAR, NULL},
  {"app-sup", PVAR, NULL},
  {"or/set", PVAR, NULL},
  {"1st", CVAR, &YgooSmacrosY1st},
  {"dlet", PVAR, NULL},
  {"swapf", PVAR, NULL},
  {"rev!", CVAR, &YgooSmacrosYrevX},
  {"match", PVAR, NULL},
  {"do-case-by", CVAR, &YgooSmacrosYdo_case_by},
  {"var-name", CVAR, &YgooSmacrosYvar_name},
  {"map2", CVAR, &YgooSmacrosYmap2},
  {"or", PVAR, NULL},
  {"napp", CVAR, &YgooSmacrosYnapp},
  {"map", CVAR, &YgooSmacrosYmap},
  {"without-prop-unbound-errors", PVAR, NULL},
  {"incf", PVAR, NULL},
  {"match-atom", CVAR, &YgooSmacrosYmatch_atom},
  {"pushf", PVAR, NULL},
  {"==", CVAR, &YgooSmacrosYEE},
  {"do", CVAR, &YgooSmacrosYdo},
  {"case", PVAR, NULL},
  {"cond", PVAR, NULL},
  {"lift-place-subforms", CVAR, &YgooSmacrosYlift_place_subforms},
  {"sup", PVAR, NULL},
  {"fab-setter-name", CVAR, &YgooSmacrosYfab_setter_name},
  {"macro-error", CVAR, &YgooSmacrosYmacro_error},
  {"for", PVAR, NULL},
  {"pair", CVAR, &YgooSmacrosYpair},
  {"elt", CVAR, &YgooSmacrosYelt},
  {"when", PVAR, NULL},
  {"match-unquote", CVAR, &YgooSmacrosYmatch_unquote},
  {"while", PVAR, NULL},
  {"popf", PVAR, NULL},
  {"exported", PVAR, NULL},
  {"until", PVAR, NULL},
  {"need-implementation", PVAR, NULL},
  {"gensym", CVAR, &YgooSmacrosYgensym},
  {"def-fun-var", PVAR, NULL},
  {"case-by", PVAR, NULL},
  {"opf", PVAR, NULL},
  {"renew", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"decf", NULL},
  {"assert", NULL},
  {"@checked-next-methods", NULL},
  {"pub", NULL},
  {"unless", NULL},
  {"cat", NULL},
  {"app", NULL},
  {"var-type", NULL},
  {"cat-sym", NULL},
  {"match-nul-list", NULL},
  {"and", NULL},
  {"last", NULL},
  {"nul?", NULL},
  {"rotf", NULL},
  {"2nd", NULL},
  {"or", NULL},
  {"match-sublist", NULL},
  {"app-sup", NULL},
  {"need-implementation", NULL},
  {"or/set", NULL},
  {"1st", NULL},
  {"dlet", NULL},
  {"incf", NULL},
  {"error", NULL},
  {"swapf", NULL},
  {"rev!", NULL},
  {"match", NULL},
  {"var-name", NULL},
  {"map2", NULL},
  {"napp", NULL},
  {"map", NULL},
  {"without-prop-unbound-errors", NULL},
  {"until", NULL},
  {"opf", NULL},
  {"match-atom", NULL},
  {"pushf", NULL},
  {"==", NULL},
  {"do", NULL},
  {"case", NULL},
  {"cond", NULL},
  {"lift-place-subforms", NULL},
  {"sup", NULL},
  {"fab-setter-name", NULL},
  {"macro-error", NULL},
  {"for", NULL},
  {"pair", NULL},
  {"elt", NULL},
  {"when", NULL},
  {"match-unquote", NULL},
  {"while", NULL},
  {"exported", NULL},
  {"tup", NULL},
  {"popf", NULL},
  {"renew", NULL},
  {"gensym", NULL},
  {"def-fun-var", NULL},
  {"case-by", NULL},
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
