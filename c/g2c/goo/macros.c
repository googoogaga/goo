/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/macros */

EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ynot,"goo/boot","not");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLcolG,"goo/boot","<col>");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YgooSmacrosYelt,"goo/macros","elt");
DEF(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Ylst,"goo/boot","lst");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YgooSmacrosYdo_case_by,"goo/macros","do-case-by");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yclone,"goo/boot","clone");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
DEF(YgooSmacrosY1st,"goo/macros","1st");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YLanyG,"goo/boot","<any>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooSmacrosYEE,"goo/macros","==");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ynil,"goo/boot","nil");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
DEF(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLmetG,"goo/boot","<met>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YPsnul,"goo/boot","%snul");
DEF(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Ytype_object,"goo/boot","type-object");
DEF(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Ytail,"goo/boot","tail");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ynul,"goo/boot","nul");
DEF(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooSmacrosYdo,"goo/macros","do");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yerror,"goo/boot","error");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yfun_src,"goo/boot","fun-src");
DEF(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YgooSmacrosYlast,"goo/macros","last");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YisaQ,"goo/boot","isa?");
DEF(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yunexec,"goo/boot","unexec");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_135);
DEFLIT(lit_32);
DEFLIT(lit_80);
DEFLIT(lit_198);
DEFLIT(lit_274);
DEFLIT(lit_222);
DEFLIT(lit_7);
DEFLIT(lit_207);
DEFLIT(lit_183);
DEFLIT(lit_67);
DEFLIT(lit_202);
DEFLIT(lit_258);
DEFLIT(lit_138);
DEFLIT(lit_43);
DEFLIT(lit_26);
DEFLIT(lit_148);
DEFLIT(lit_121);
DEFLIT(lit_201);
DEFLIT(lit_191);
DEFLIT(lit_94);
DEFLIT(lit_27);
DEFLIT(lit_103);
DEFLIT(lit_76);
DEFLIT(lit_60);
DEFLIT(lit_110);
DEFLIT(lit_6);
DEFLIT(lit_88);
DEFLIT(lit_213);
DEFLIT(lit_231);
DEFLIT(lit_247);
DEFLIT(lit_264);
DEFLIT(lit_128);
DEFLIT(lit_91);
DEFLIT(lit_181);
DEFLIT(lit_70);
DEFLIT(lit_79);
DEFLIT(lit_5);
DEFLIT(lit_136);
DEFLIT(lit_20);
DEFLIT(lit_118);
DEFLIT(lit_211);
DEFLIT(lit_195);
DEFLIT(lit_194);
DEFLIT(lit_167);
DEFLIT(lit_113);
DEFLIT(lit_267);
DEFLIT(lit_250);
DEFLIT(lit_215);
DEFLIT(lit_278);
DEFLIT(lit_106);
DEFLIT(lit_4);
DEFLIT(lit_154);
DEFLIT(lit_30);
DEFLIT(lit_208);
DEFLIT(lit_90);
DEFLIT(lit_287);
DEFLIT(lit_66);
DEFLIT(lit_205);
DEFLIT(lit_259);
DEFLIT(lit_229);
DEFLIT(lit_218);
DEFLIT(lit_77);
DEFLIT(lit_147);
DEFLIT(lit_282);
DEFLIT(lit_92);
DEFLIT(lit_116);
DEFLIT(lit_59);
DEFLIT(lit_190);
DEFLIT(lit_232);
DEFLIT(lit_254);
DEFLIT(lit_122);
DEFLIT(lit_245);
DEFLIT(lit_172);
DEFLIT(lit_97);
DEFLIT(lit_163);
DEFLIT(lit_63);
DEFLIT(lit_290);
DEFLIT(lit_298);
DEFLIT(lit_33);
DEFLIT(lit_111);
DEFLIT(lit_131);
DEFLIT(lit_217);
DEFLIT(lit_15);
DEFLIT(lit_23);
DEFLIT(lit_220);
DEFLIT(lit_187);
DEFLIT(lit_227);
DEFLIT(lit_240);
DEFLIT(lit_29);
DEFLIT(lit_277);
DEFLIT(lit_124);
DEFLIT(lit_257);
DEFLIT(lit_95);
DEFLIT(lit_39);
DEFLIT(lit_197);
DEFLIT(lit_188);
DEFLIT(lit_51);
DEFLIT(lit_206);
DEFLIT(lit_151);
DEFLIT(lit_19);
DEFLIT(lit_120);
DEFLIT(lit_249);
DEFLIT(lit_81);
DEFLIT(lit_49);
DEFLIT(lit_61);
DEFLIT(lit_44);
DEFLIT(lit_31);
DEFLIT(lit_109);
DEFLIT(lit_86);
DEFLIT(lit_224);
DEFLIT(lit_35);
DEFLIT(lit_21);
DEFLIT(lit_164);
DEFLIT(lit_219);
DEFLIT(lit_285);
DEFLIT(lit_115);
DEFLIT(lit_255);
DEFLIT(lit_283);
DEFLIT(lit_57);
DEFLIT(lit_256);
DEFLIT(lit_292);
DEFLIT(lit_93);
DEFLIT(lit_230);
DEFLIT(lit_78);
DEFLIT(lit_48);
DEFLIT(lit_156);
DEFLIT(lit_193);
DEFLIT(lit_142);
DEFLIT(lit_233);
DEFLIT(lit_146);
DEFLIT(lit_236);
DEFLIT(lit_179);
DEFLIT(lit_50);
DEFLIT(lit_47);
DEFLIT(lit_291);
DEFLIT(lit_159);
DEFLIT(lit_273);
DEFLIT(lit_286);
DEFLIT(lit_228);
DEFLIT(lit_89);
DEFLIT(lit_200);
DEFLIT(lit_149);
DEFLIT(lit_293);
DEFLIT(lit_17);
DEFLIT(lit_281);
DEFLIT(lit_125);
DEFLIT(lit_212);
DEFLIT(lit_155);
DEFLIT(lit_192);
DEFLIT(lit_297);
DEFLIT(lit_54);
DEFLIT(lit_296);
DEFLIT(lit_237);
DEFLIT(lit_186);
DEFLIT(lit_52);
DEFLIT(lit_104);
DEFLIT(lit_171);
DEFLIT(lit_152);
DEFLIT(lit_127);
DEFLIT(lit_223);
DEFLIT(lit_129);
DEFLIT(lit_251);
DEFLIT(lit_271);
DEFLIT(lit_158);
DEFLIT(lit_14);
DEFLIT(lit_87);
DEFLIT(lit_209);
DEFLIT(lit_3);
DEFLIT(lit_25);
DEFLIT(lit_98);
DEFLIT(lit_46);
DEFLIT(lit_263);
DEFLIT(lit_266);
DEFLIT(lit_284);
DEFLIT(lit_226);
DEFLIT(lit_169);
DEFLIT(lit_16);
DEFLIT(lit_276);
DEFLIT(lit_68);
DEFLIT(lit_108);
DEFLIT(lit_170);
DEFLIT(lit_139);
DEFLIT(lit_246);
DEFLIT(lit_13);
DEFLIT(lit_221);
DEFLIT(lit_203);
DEFLIT(lit_204);
DEFLIT(lit_295);
DEFLIT(lit_214);
DEFLIT(lit_268);
DEFLIT(lit_96);
DEFLIT(lit_244);
DEFLIT(lit_75);
DEFLIT(lit_0);
DEFLIT(lit_238);
DEFLIT(lit_177);
DEFLIT(lit_1);
DEFLIT(lit_242);
DEFLIT(lit_28);
DEFLIT(lit_36);
DEFLIT(lit_130);
DEFLIT(lit_107);
DEFLIT(lit_241);
DEFLIT(lit_85);
DEFLIT(lit_239);
DEFLIT(lit_37);
DEFLIT(lit_12);
DEFLIT(lit_189);
DEFLIT(lit_288);
DEFLIT(lit_137);
DEFLIT(lit_299);
DEFLIT(lit_175);
DEFLIT(lit_272);
DEFLIT(lit_53);
DEFLIT(lit_99);
DEFLIT(lit_243);
DEFLIT(lit_82);
DEFLIT(lit_166);
DEFLIT(lit_153);
DEFLIT(lit_117);
DEFLIT(lit_84);
DEFLIT(lit_119);
DEFLIT(lit_22);
DEFLIT(lit_11);
DEFLIT(lit_105);
DEFLIT(lit_199);
DEFLIT(lit_114);
DEFLIT(lit_216);
DEFLIT(lit_176);
DEFLIT(lit_270);
DEFLIT(lit_248);
DEFLIT(lit_62);
DEFLIT(lit_55);
DEFLIT(lit_265);
DEFLIT(lit_24);
DEFLIT(lit_210);
DEFLIT(lit_275);
DEFLIT(lit_173);
DEFLIT(lit_165);
DEFLIT(lit_174);
DEFLIT(lit_234);
DEFLIT(lit_145);
DEFLIT(lit_143);
DEFLIT(lit_83);
DEFLIT(lit_102);
DEFLIT(lit_34);
DEFLIT(lit_10);
DEFLIT(lit_133);
DEFLIT(lit_134);
DEFLIT(lit_262);
DEFLIT(lit_157);
DEFLIT(lit_289);
DEFLIT(lit_140);
DEFLIT(lit_112);
DEFLIT(lit_252);
DEFLIT(lit_182);
DEFLIT(lit_196);
DEFLIT(lit_162);
DEFLIT(lit_71);
DEFLIT(lit_42);
DEFLIT(lit_253);
DEFLIT(lit_178);
DEFLIT(lit_126);
DEFLIT(lit_9);
DEFLIT(lit_225);
DEFLIT(lit_141);
DEFLIT(lit_168);
DEFLIT(lit_100);
DEFLIT(lit_58);
DEFLIT(lit_294);
DEFLIT(lit_74);
DEFLIT(lit_65);
DEFLIT(lit_18);
DEFLIT(lit_269);
DEFLIT(lit_184);
DEFLIT(lit_280);
DEFLIT(lit_38);
DEFLIT(lit_235);
DEFLIT(lit_185);
DEFLIT(lit_161);
DEFLIT(lit_180);
DEFLIT(lit_132);
DEFLIT(lit_144);
DEFLIT(lit_8);
DEFLIT(lit_260);
DEFLIT(lit_73);
DEFLIT(lit_45);
DEFLIT(lit_150);
DEFLIT(lit_160);
DEFLIT(lit_261);
DEFLIT(lit_123);
DEFLIT(lit_64);
DEFLIT(lit_40);
DEFLIT(lit_2);
DEFLIT(lit_69);
DEFLIT(lit_56);
DEFLIT(lit_279);
DEFLIT(lit_101);
DEFLIT(lit_72);
DEFLIT(lit_41);

/* FUNCTIONS: */

LOCFOR(fun_x_1076_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_x_1080_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_x_1084_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_x_1088_9);
LOCFOR(fun_loop_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_munch_13);
FUNFOR(YgooSmacrosYlift_place_subforms);
LOCFOR(fun_x_1094_15);
LOCFOR(fun_x_1096_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_x_1102_20);
LOCFOR(fun_x_1104_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_x_1108_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_x_1112_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_x_1116_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_x_1120_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_x_1124_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_x_1128_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_x_1132_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_x_1140_49);
LOCFOR(fun_x_1142_50);
LOCFOR(fun_x_1144_51);
LOCFOR(fun_52);
LOCFOR(fun_53);
LOCFOR(fun_54);
LOCFOR(fun_55);
LOCFOR(fun_x_1152_56);
LOCFOR(fun_x_1154_57);
LOCFOR(fun_x_1156_58);
LOCFOR(fun_59);
LOCFOR(fun_60);
LOCFOR(fun_61);
LOCFOR(fun_62);
LOCFOR(fun_x_1162_63);
LOCFOR(fun_x_1164_64);
LOCFOR(fun_65);
LOCFOR(fun_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1170_68);
LOCFOR(fun_x_1172_69);
LOCFOR(fun_70);
LOCFOR(fun_71);
LOCFOR(fun_72);
FUNFOR(YgooSmacrosYdo_case_by);
LOCFOR(fun_x_1176_74);
LOCFOR(fun_75);
LOCFOR(fun_76);
LOCFOR(fun_x_1180_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_x_1184_80);
LOCFOR(fun_81);
LOCFOR(fun_splice_82);
LOCFOR(fun_rest_opQ_83);
LOCFOR(fun_84);
LOCFOR(fun_85);
LOCFOR(fun_walk_op_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_x_1192_89);
LOCFOR(fun_x_1196_90);
LOCFOR(fun_91);
LOCFOR(fun_x_1194_92);
LOCFOR(fun_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_x_1200_96);
LOCFOR(fun_97);
LOCFOR(fun_98);
LOCFOR(fun_x_1208_99);
LOCFOR(fun_x_1210_100);
LOCFOR(fun_x_1212_101);
LOCFOR(fun_102);
LOCFOR(fun_103);
LOCFOR(fun_grok_104);
LOCFOR(fun_105);
LOCFOR(fun_106);
LOCFOR(fun_x_1216_107);
LOCFOR(fun_108);
LOCFOR(fun_109);
LOCFOR(fun_x_1220_110);
LOCFOR(fun_111);
LOCFOR(fun_112);
LOCFOR(fun_x_1228_113);
LOCFOR(fun_x_1232_114);
LOCFOR(fun_115);
LOCFOR(fun_x_1230_116);
LOCFOR(fun_117);
LOCFOR(fun_118);
LOCFOR(fun_119);
LOCFOR(fun_x_1236_120);
LOCFOR(fun_121);
LOCFOR(fun_122);
LOCFOR(fun_x_1240_123);
LOCFOR(fun_124);
LOCFOR(fun_125);
LOCFOR(fun_x_1244_126);
LOCFOR(fun_127);
LOCFOR(fun_128);
LOCFOR(fun_x_1266_129);
LOCFOR(fun_x_1284_130);
LOCFOR(fun_131);
LOCFOR(fun_x_1281_132);
LOCFOR(fun_133);
LOCFOR(fun_x_1278_134);
LOCFOR(fun_135);
LOCFOR(fun_x_1275_136);
LOCFOR(fun_137);
LOCFOR(fun_x_1272_138);
LOCFOR(fun_139);
LOCFOR(fun_x_1269_140);
LOCFOR(fun_141);
LOCFOR(fun_142);
LOCFOR(fun_143);
LOCFOR(fun_x_1288_144);
LOCFOR(fun_145);
LOCFOR(fun_146);
LOCFOR(fun_147);
extern P YgooSmacrosY___main_0___ ();
extern P YgooSmacrosY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_x_1076_0) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_4),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_1) {
  P return_;
  P x_1075F966;
  P x_1075F965;
  P argsF964;
  P x_1075F963;
  P x_1076F962;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1076_0,2);
  x_1076F962 = T1;
  FUNINIT(x_1076F962, 2,FREEREF(0),return_);
  x_1075F963 = FREEREF(0);
  argsF964 = YPfalse;
  argsF964 = BOXFAB(argsF964);
  T5 = CALL2(1,VARREF(YisaQ),x_1075F963,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1075F963,LITREF(lit_4),x_1076F962);
    x_1075F965 = T7;
    BOXVAL(argsF964) = x_1075F965;
    x_1075F966 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1075F966,x_1076F962);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1076F962,LITREF(lit_5),x_1075F963);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T19 = CALL2(1,VARREF(YgooSmacrosYcat),T20,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T38 = CALL1(1,VARREF(Ylst),Ynil);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T28,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_16));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T50 = BOXVAL(argsF964);
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T54 = CALL1(1,VARREF(Ylst),Ynil);
  T52 = CALL3(1,VARREF(YgooSmacrosYcat),T53,T54,Ynil);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T40 = CALLN(1,VARREF(YgooSmacrosYcat),6,T41,T42,T46,T50,T51,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_17));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_18));
  T59 = CALL2(1,VARREF(YgooSmacrosYcat),T60,Ynil);
  T58 = CALL1(1,VARREF(Ylst),T59);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_19));
  T64 = BOXVAL(argsF964);
  T62 = CALL3(1,VARREF(YgooSmacrosYcat),T63,T64,Ynil);
  T61 = CALL1(1,VARREF(Ylst),T62);
  T56 = CALL4(1,VARREF(YgooSmacrosYcat),T57,T58,T61,Ynil);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T22 = CALL5(1,VARREF(YgooSmacrosYcat),T23,T24,T39,T55,Ynil);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T21,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_1,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1080_3) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_24),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  P return_;
  P x_1079F971;
  P x_1079F970;
  P argsF969;
  P x_1079F968;
  P x_1080F967;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1080_3,2);
  x_1080F967 = T1;
  FUNINIT(x_1080F967, 2,FREEREF(0),return_);
  x_1079F968 = FREEREF(0);
  argsF969 = YPfalse;
  argsF969 = BOXFAB(argsF969);
  T5 = CALL2(1,VARREF(YisaQ),x_1079F968,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1079F968,LITREF(lit_24),x_1080F967);
    x_1079F970 = T7;
    BOXVAL(argsF969) = x_1079F970;
    x_1079F971 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1079F971,x_1080F967);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1080F967,LITREF(lit_5),x_1079F968);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_8));
  T19 = CALL2(1,VARREF(YgooSmacrosYcat),T20,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_11));
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_12));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_13));
  T38 = CALL1(1,VARREF(Ylst),Ynil);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T28,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T45,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_16));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T50 = BOXVAL(argsF969);
  T40 = CALL5(1,VARREF(YgooSmacrosYcat),T41,T42,T46,T50,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_17));
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_18));
  T55 = CALL2(1,VARREF(YgooSmacrosYcat),T56,Ynil);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_19));
  T60 = BOXVAL(argsF969);
  T58 = CALL3(1,VARREF(YgooSmacrosYcat),T59,T60,Ynil);
  T57 = CALL1(1,VARREF(Ylst),T58);
  T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T57,Ynil);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T22 = CALL5(1,VARREF(YgooSmacrosYcat),T23,T24,T39,T51,Ynil);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T21,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_4,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1084_6) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_29),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P return_;
  P x_1083F978;
  P x_1083F977;
  P x_1083F976;
  P argsF975;
  P fF974;
  P x_1083F973;
  P x_1084F972;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1084_6,2);
  x_1084F972 = T1;
  FUNINIT(x_1084F972, 2,FREEREF(0),return_);
  x_1083F973 = FREEREF(0);
  fF974 = YPfalse;
  fF974 = BOXFAB(fF974);
  argsF975 = YPfalse;
  argsF975 = BOXFAB(argsF975);
  T7 = CALL2(1,VARREF(YisaQ),x_1083F973,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1083F973,LITREF(lit_29),x_1084F972);
    x_1083F976 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1083F976,x_1084F972);
    BOXVAL(fF974) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1083F976);
    x_1083F977 = T12;
    BOXVAL(argsF975) = x_1083F977;
    x_1083F978 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1083F978,x_1084F972);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1084F972,LITREF(lit_5),x_1083F973);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_14));
  T19 = BOXVAL(fF974);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),YPfalse);
  T21 = BOXVAL(argsF975);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T20,T21,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_7,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1088_9) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_34),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_10) {
  P sets_,inits_;
  P valF979;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1,a2;
LINK_STACK();
  ARG(sets_, 0);
  ARG(inits_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),inits_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),sets_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),inits_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    valF979 = T4;
    T9 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
    T13 = CALL1(1,VARREF(Yhead),inits_);
    T12 = CALL1(1,VARREF(Ylst),T13);
    T14 = CALL1(1,VARREF(Ylst),FREEREF(0));
    T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T14,Ynil);
    T10 = CALL1(1,VARREF(Ylst),T11);
    T15 = CALL1(1,VARREF(Ylst),valF979);
    T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T15,Ynil);
    T7 = CALL2(1,VARREF(YgooSmacrosYpair),T8,sets_);
    T17 = CALL1(1,VARREF(Ytail),inits_);
    T16 = CALL1(1,VARREF(Ytail),T17);
    a1 = T7;
    a2 = T16;
    sets_ = a1;
    inits_ = a2;
    goto loop;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P return_;
  P setsF989;
  P loopF988;
  P varF987;
  P x_1087F986;
  P x_1087F985;
  P x_1087F984;
  P prop_initsF983;
  P xF982;
  P x_1087F981;
  P x_1088F980;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1088_9,2);
  x_1088F980 = T1;
  FUNINIT(x_1088F980, 2,FREEREF(0),return_);
  x_1087F981 = FREEREF(0);
  xF982 = YPfalse;
  xF982 = BOXFAB(xF982);
  prop_initsF983 = YPfalse;
  prop_initsF983 = BOXFAB(prop_initsF983);
  T7 = CALL2(1,VARREF(YisaQ),x_1087F981,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1087F981,LITREF(lit_34),x_1088F980);
    x_1087F984 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1087F984,x_1088F980);
    BOXVAL(xF982) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1087F984);
    x_1087F985 = T12;
    BOXVAL(prop_initsF983) = x_1087F985;
    x_1087F986 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1087F986,x_1088F980);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1088F980,LITREF(lit_5),x_1087F981);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  varF987 = T17;
  T20 = FUNSHELL(1,fun_loop_10,2);
  loopF988 = T20;
  FUNINIT(loopF988, 2,varF987,loopF988);
  T22 = BOXVAL(prop_initsF983);
  T21 = CALL2(0,loopF988,Ynil,T22);
  T19 = T21;
  setsF989 = T19;
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T29 = CALL1(1,VARREF(Ylst),varF987);
  T31 = BOXVAL(xF982);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = CALL1(1,VARREF(Ylst),varF987);
  T23 = CALL5(1,VARREF(YgooSmacrosYcat),T24,T25,setsF989,T32,Ynil);
  T18 = T23;
  T16 = T18;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_11,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_munch_13) {
  P subforms_;
  P gF993;
  P g_argsF992;
  P g_declsF991;
  P tup3F990;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(subforms_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),subforms_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ytup),Ynil,Ynil);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),subforms_);
    T4 = CALL1(1,FREEREF(0),T5);
    tup3F990 = T4;
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F990,YPint((P)0));
    g_declsF991 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup3F990,YPint((P)1));
    g_argsF992 = T9;
    T11 = CALL0(1,VARREF(YgooSmacrosYgensym));
    gF993 = T11;
    T15 = CALL1(1,VARREF(Ylst),gF993);
    T17 = CALL1(1,VARREF(Yhead),subforms_);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T16,Ynil);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_declsF991);
    T18 = CALL2(1,VARREF(YgooSmacrosYpair),gF993,g_argsF992);
    T12 = CALL2(1,VARREF(Ytup),T13,T18);
    T10 = T12;
    T8 = T10;
    T6 = T8;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmacrosYlift_place_subforms) {
  P place_;
  P g_argsF997;
  P g_declsF996;
  P tup4F995;
  P munchF994;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(place_, 0);
loop:
  T1 = FUNSHELL(1,fun_munch_13,1);
  munchF994 = T1;
  FUNINIT(munchF994, 1,munchF994);
  T3 = CALL2(1,VARREF(YisaQ),place_,VARREF(YLsymG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytup),Ynil,place_);
    T2 = T4;
  } else {
    T7 = CALL1(1,VARREF(Ytail),place_);
    T6 = CALL1(1,munchF994,T7);
    tup4F995 = T6;
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F995,YPint((P)0));
    g_declsF996 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup4F995,YPint((P)1));
    g_argsF997 = T11;
    T14 = CALL1(1,VARREF(Yhead),place_);
    T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,g_argsF997);
    T12 = CALL2(1,VARREF(Ytup),g_declsF996,T13);
    T10 = T12;
    T8 = T10;
    T5 = T8;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1094_15) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_46),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1096_16) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P return_;
  P x_1095F1001;
  P amountF1000;
  P x_1095F999;
  P x_1096F998;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1096_16,1);
  x_1096F998 = T1;
  FUNINIT(x_1096F998, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1095F999 = T3;
  amountF1000 = YPfalse;
  amountF1000 = BOXFAB(amountF1000);
  T6 = CALL2(1,VARREF(YisaQ),x_1095F999,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1095F999,x_1096F998);
    BOXVAL(amountF1000) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1095F999);
    x_1095F1001 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1095F1001,x_1096F998);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1096F998,LITREF(lit_5),x_1095F999);
  }
  T12 = BOXVAL(amountF1000);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P return_;
  P amountF1012;
  P g_placeF1011;
  P g_declsF1010;
  P tup6F1009;
  P x_1093F1008;
  P x_1093F1007;
  P x_1093F1006;
  P amountF1005;
  P placeF1004;
  P x_1093F1003;
  P x_1094F1002;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1094_15,2);
  x_1094F1002 = T1;
  FUNINIT(x_1094F1002, 2,FREEREF(0),return_);
  x_1093F1003 = FREEREF(0);
  placeF1004 = YPfalse;
  placeF1004 = BOXFAB(placeF1004);
  amountF1005 = YPfalse;
  amountF1005 = BOXFAB(amountF1005);
  T7 = CALL2(1,VARREF(YisaQ),x_1093F1003,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1093F1003,LITREF(lit_46),x_1094F1002);
    x_1093F1006 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1093F1006,x_1094F1002);
    BOXVAL(placeF1004) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1093F1006);
    x_1093F1007 = T12;
    BOXVAL(amountF1005) = x_1093F1007;
    x_1093F1008 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1093F1008,x_1094F1002);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1094F1002,LITREF(lit_5),x_1093F1003);
  }
  T18 = BOXVAL(placeF1004);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup6F1009 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F1009,YPint((P)0));
  g_declsF1010 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup6F1009,YPint((P)1));
  g_placeF1011 = T22;
  T25 = FUNFAB(fun_17,1,amountF1005);
  T24 = with_exit(T25);
  amountF1012 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1010,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T33 = CALL1(1,VARREF(Ylst),g_placeF1011);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_50));
  T37 = CALL1(1,VARREF(Ylst),g_placeF1011);
  T38 = CALL1(1,VARREF(Ylst),amountF1012);
  T35 = CALL4(1,VARREF(YgooSmacrosYcat),T36,T37,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T30,Ynil);
  T23 = T26;
  T21 = T23;
  T19 = T21;
  T16 = T19;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_18,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1102_20) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_55),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1104_21) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  P return_;
  P x_1103F1016;
  P amountF1015;
  P x_1103F1014;
  P x_1104F1013;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1104_21,1);
  x_1104F1013 = T1;
  FUNINIT(x_1104F1013, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1103F1014 = T3;
  amountF1015 = YPfalse;
  amountF1015 = BOXFAB(amountF1015);
  T6 = CALL2(1,VARREF(YisaQ),x_1103F1014,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1103F1014,x_1104F1013);
    BOXVAL(amountF1015) = T8;
    T9 = CALL1(1,VARREF(Ytail),x_1103F1014);
    x_1103F1016 = T9;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1103F1016,x_1104F1013);
    T7 = T10;
  } else {
    T11 = CALL2(1,x_1104F1013,LITREF(lit_5),x_1103F1014);
  }
  T12 = BOXVAL(amountF1015);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P return_;
  P amountF1027;
  P g_placeF1026;
  P g_declsF1025;
  P tup8F1024;
  P x_1101F1023;
  P x_1101F1022;
  P x_1101F1021;
  P amountF1020;
  P placeF1019;
  P x_1101F1018;
  P x_1102F1017;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1102_20,2);
  x_1102F1017 = T1;
  FUNINIT(x_1102F1017, 2,FREEREF(0),return_);
  x_1101F1018 = FREEREF(0);
  placeF1019 = YPfalse;
  placeF1019 = BOXFAB(placeF1019);
  amountF1020 = YPfalse;
  amountF1020 = BOXFAB(amountF1020);
  T7 = CALL2(1,VARREF(YisaQ),x_1101F1018,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1101F1018,LITREF(lit_55),x_1102F1017);
    x_1101F1021 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1101F1021,x_1102F1017);
    BOXVAL(placeF1019) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1101F1021);
    x_1101F1022 = T12;
    BOXVAL(amountF1020) = x_1101F1022;
    x_1101F1023 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1101F1023,x_1102F1017);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1102F1017,LITREF(lit_5),x_1101F1018);
  }
  T18 = BOXVAL(placeF1019);
  T17 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T18);
  tup8F1024 = T17;
  T20 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F1024,YPint((P)0));
  g_declsF1025 = T20;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup8F1024,YPint((P)1));
  g_placeF1026 = T22;
  T25 = FUNFAB(fun_22,1,amountF1020);
  T24 = with_exit(T25);
  amountF1027 = T24;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T29 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1025,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T33 = CALL1(1,VARREF(Ylst),g_placeF1026);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T37 = CALL1(1,VARREF(Ylst),g_placeF1026);
  T38 = CALL1(1,VARREF(Ylst),amountF1027);
  T35 = CALL4(1,VARREF(YgooSmacrosYcat),T36,T37,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T30,Ynil);
  T23 = T26;
  T21 = T23;
  T19 = T21;
  T16 = T19;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_23,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1108_25) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_64),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P return_;
  P g_placeF1037;
  P g_declsF1036;
  P tup10F1035;
  P x_1107F1034;
  P x_1107F1033;
  P x_1107F1032;
  P valueF1031;
  P placeF1030;
  P x_1107F1029;
  P x_1108F1028;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1108_25,2);
  x_1108F1028 = T1;
  FUNINIT(x_1108F1028, 2,FREEREF(0),return_);
  x_1107F1029 = FREEREF(0);
  placeF1030 = YPfalse;
  placeF1030 = BOXFAB(placeF1030);
  valueF1031 = YPfalse;
  valueF1031 = BOXFAB(valueF1031);
  T7 = CALL2(1,VARREF(YisaQ),x_1107F1029,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1107F1029,LITREF(lit_64),x_1108F1028);
    x_1107F1032 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F1032,x_1108F1028);
    BOXVAL(placeF1030) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1107F1032);
    x_1107F1033 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1107F1033,x_1108F1028);
    BOXVAL(valueF1031) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1107F1033);
    x_1107F1034 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1107F1034,x_1108F1028);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1108F1028,LITREF(lit_5),x_1107F1029);
  }
  T20 = BOXVAL(placeF1030);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup10F1035 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F1035,YPint((P)0));
  g_declsF1036 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup10F1035,YPint((P)1));
  g_placeF1037 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),g_declsF1036,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T32 = CALL1(1,VARREF(Ylst),g_placeF1037);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T36 = CALL1(1,VARREF(Ylst),g_placeF1037);
  T38 = BOXVAL(valueF1031);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T33,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T29,Ynil);
  T23 = T25;
  T21 = T23;
  T18 = T21;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_26,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1112_28) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_70),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P return_;
  P tmpF1051;
  P yg_placeF1050;
  P yg_declsF1049;
  P tup14F1048;
  P xg_placeF1047;
  P xg_declsF1046;
  P tup13F1045;
  P x_1111F1044;
  P x_1111F1043;
  P x_1111F1042;
  P yF1041;
  P xF1040;
  P x_1111F1039;
  P x_1112F1038;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1112_28,2);
  x_1112F1038 = T1;
  FUNINIT(x_1112F1038, 2,FREEREF(0),return_);
  x_1111F1039 = FREEREF(0);
  xF1040 = YPfalse;
  xF1040 = BOXFAB(xF1040);
  yF1041 = YPfalse;
  yF1041 = BOXFAB(yF1041);
  T7 = CALL2(1,VARREF(YisaQ),x_1111F1039,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1111F1039,LITREF(lit_70),x_1112F1038);
    x_1111F1042 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F1042,x_1112F1038);
    BOXVAL(xF1040) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1111F1042);
    x_1111F1043 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1111F1043,x_1112F1038);
    BOXVAL(yF1041) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1111F1043);
    x_1111F1044 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1111F1044,x_1112F1038);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1112F1038,LITREF(lit_5),x_1111F1039);
  }
  T20 = BOXVAL(xF1040);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup13F1045 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F1045,YPint((P)0));
  xg_declsF1046 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup13F1045,YPint((P)1));
  xg_placeF1047 = T24;
  T27 = BOXVAL(yF1041);
  T26 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T27);
  tup14F1048 = T26;
  T29 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F1048,YPint((P)0));
  yg_declsF1049 = T29;
  T31 = CALL2(1,VARREF(YgooSmacrosYelt),tup14F1048,YPint((P)1));
  yg_placeF1050 = T31;
  T33 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tmpF1051 = T33;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T40 = CALL1(1,VARREF(Ylst),tmpF1051);
  T41 = CALL1(1,VARREF(Ylst),xg_placeF1047);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),xg_declsF1046,yg_declsF1049,T38,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T45 = CALL1(1,VARREF(Ylst),xg_placeF1047);
  T46 = CALL1(1,VARREF(Ylst),yg_placeF1050);
  T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T46,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T50 = CALL1(1,VARREF(Ylst),yg_placeF1050);
  T51 = CALL1(1,VARREF(Ylst),tmpF1051);
  T48 = CALL4(1,VARREF(YgooSmacrosYcat),T49,T50,T51,Ynil);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T34 = CALL5(1,VARREF(YgooSmacrosYcat),T35,T36,T42,T47,Ynil);
  T32 = T34;
  T30 = T32;
  T28 = T30;
  T25 = T28;
  T23 = T25;
  T21 = T23;
  T18 = T21;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_30) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_29,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1116_31) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_75),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL0(1,VARREF(YgooSmacrosYgensym));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P t_,p_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(p_, 1);
loop:
  T1 = CALL1(1,VARREF(Ylst),t_);
  T2 = CALL1(1,VARREF(Ylst),p_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),T1,T2,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P p_,t_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(t_, 1);
loop:
  T1 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T2 = CALL1(1,VARREF(Ylst),p_);
  T3 = CALL1(1,VARREF(Ylst),t_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  P return_;
  P placesF1065;
  P declsF1064;
  P psF1063;
  P tmpsF1062;
  P placesF1061;
  P x_1115F1060;
  P x_1115F1059;
  P x_1115F1058;
  P x_1115F1057;
  P zsF1056;
  P yF1055;
  P xF1054;
  P x_1115F1053;
  P x_1116F1052;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1116_31,2);
  x_1116F1052 = T1;
  FUNINIT(x_1116F1052, 2,FREEREF(0),return_);
  x_1115F1053 = FREEREF(0);
  xF1054 = YPfalse;
  xF1054 = BOXFAB(xF1054);
  yF1055 = YPfalse;
  yF1055 = BOXFAB(yF1055);
  zsF1056 = YPfalse;
  zsF1056 = BOXFAB(zsF1056);
  T9 = CALL2(1,VARREF(YisaQ),x_1115F1053,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1115F1053,LITREF(lit_75),x_1116F1052);
    x_1115F1057 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F1057,x_1116F1052);
    BOXVAL(xF1054) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1115F1057);
    x_1115F1058 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1115F1058,x_1116F1052);
    BOXVAL(yF1055) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1115F1058);
    x_1115F1059 = T17;
    BOXVAL(zsF1056) = x_1115F1059;
    x_1115F1060 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1115F1060,x_1116F1052);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1116F1052,LITREF(lit_5),x_1115F1053);
  }
  T24 = BOXVAL(xF1054);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(yF1055);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T27 = BOXVAL(zsF1056);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T25,T27,Ynil);
  placesF1061 = T22;
  T30 = fun_32;
  T29 = CALL2(1,VARREF(YgooSmacrosYmap),T30,placesF1061);
  tmpsF1062 = T29;
  T32 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosYlift_place_subforms),placesF1061);
  psF1063 = T32;
  T34 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY1st),psF1063);
  declsF1064 = T34;
  T36 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY2nd),psF1063);
  placesF1065 = T36;
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T41 = CALL3(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmacrosYcat),YPfalse,declsF1064);
  T43 = fun_33;
  T42 = CALL3(1,VARREF(YgooSmacrosYmap2),T43,tmpsF1062,placesF1065);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T45 = fun_34;
  T46 = CALL1(1,VARREF(Ytail),tmpsF1062);
  T44 = CALL3(1,VARREF(YgooSmacrosYmap2),T45,placesF1065,T46);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T51 = CALL1(1,VARREF(YgooSmacrosYlast),placesF1065);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T53 = CALL1(1,VARREF(YgooSmacrosY1st),tmpsF1062);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T48 = CALL4(1,VARREF(YgooSmacrosYcat),T49,T50,T52,Ynil);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T37 = CALL5(1,VARREF(YgooSmacrosYcat),T38,T39,T44,T47,Ynil);
  T35 = T37;
  T33 = T35;
  T31 = T33;
  T28 = T31;
  T21 = T28;
  T7 = T21;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_35,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1120_37) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_83),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  P return_;
  P valF1075;
  P new_colF1074;
  P g_placeF1073;
  P g_declsF1072;
  P tup16F1071;
  P x_1119F1070;
  P x_1119F1069;
  P placeF1068;
  P x_1119F1067;
  P x_1120F1066;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1120_37,2);
  x_1120F1066 = T1;
  FUNINIT(x_1120F1066, 2,FREEREF(0),return_);
  x_1119F1067 = FREEREF(0);
  placeF1068 = YPfalse;
  placeF1068 = BOXFAB(placeF1068);
  T5 = CALL2(1,VARREF(YisaQ),x_1119F1067,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1119F1067,LITREF(lit_83),x_1120F1066);
    x_1119F1069 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1119F1069,x_1120F1066);
    BOXVAL(placeF1068) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1119F1069);
    x_1119F1070 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1119F1070,x_1120F1066);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1120F1066,LITREF(lit_5),x_1119F1067);
  }
  T15 = BOXVAL(placeF1068);
  T14 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T15);
  tup16F1071 = T14;
  T17 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F1071,YPint((P)0));
  g_declsF1072 = T17;
  T19 = CALL2(1,VARREF(YgooSmacrosYelt),tup16F1071,YPint((P)1));
  g_placeF1073 = T19;
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  new_colF1074 = T21;
  T23 = CALL0(1,VARREF(YgooSmacrosYgensym));
  valF1075 = T23;
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T33 = CALL1(1,VARREF(Ylst),new_colF1074);
  T34 = CALL1(1,VARREF(Ylst),valF1075);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T34,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T38 = CALL1(1,VARREF(Ylst),g_placeF1073);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T35,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF1072,T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T42 = CALL1(1,VARREF(Ylst),g_placeF1073);
  T43 = CALL1(1,VARREF(Ylst),new_colF1074);
  T40 = CALL4(1,VARREF(YgooSmacrosYcat),T41,T42,T43,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T44 = CALL1(1,VARREF(Ylst),valF1075);
  T24 = CALL5(1,VARREF(YgooSmacrosYcat),T25,T26,T39,T44,Ynil);
  T22 = T24;
  T20 = T22;
  T18 = T20;
  T16 = T18;
  T13 = T16;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_39) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_38,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1124_40) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_90),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P return_;
  P g_placeF1085;
  P g_declsF1084;
  P tup18F1083;
  P x_1123F1082;
  P x_1123F1081;
  P x_1123F1080;
  P callF1079;
  P placeF1078;
  P x_1123F1077;
  P x_1124F1076;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1124_40,2);
  x_1124F1076 = T1;
  FUNINIT(x_1124F1076, 2,FREEREF(0),return_);
  x_1123F1077 = FREEREF(0);
  placeF1078 = YPfalse;
  placeF1078 = BOXFAB(placeF1078);
  callF1079 = YPfalse;
  callF1079 = BOXFAB(callF1079);
  T7 = CALL2(1,VARREF(YisaQ),x_1123F1077,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1123F1077,LITREF(lit_90),x_1124F1076);
    x_1123F1080 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F1080,x_1124F1076);
    BOXVAL(placeF1078) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1123F1080);
    x_1123F1081 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1123F1081,x_1124F1076);
    BOXVAL(callF1079) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1123F1081);
    x_1123F1082 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1123F1082,x_1124F1076);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1124F1076,LITREF(lit_5),x_1123F1077);
  }
  T20 = BOXVAL(placeF1078);
  T19 = CALL1(1,VARREF(YgooSmacrosYlift_place_subforms),T20);
  tup18F1083 = T19;
  T22 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F1083,YPint((P)0));
  g_declsF1084 = T22;
  T24 = CALL2(1,VARREF(YgooSmacrosYelt),tup18F1083,YPint((P)1));
  g_placeF1085 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
  T32 = CALL1(1,VARREF(Ylst),g_placeF1085);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),g_declsF1084,T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T36 = CALL1(1,VARREF(Ylst),g_placeF1085);
  T38 = BOXVAL(callF1079);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T33,Ynil);
  T23 = T25;
  T21 = T23;
  T18 = T21;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_41,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1128_43) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_96),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P return_;
  P x_1127F1092;
  P x_1127F1091;
  P x_1127F1090;
  P bodyF1089;
  P testF1088;
  P x_1127F1087;
  P x_1128F1086;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1128_43,2);
  x_1128F1086 = T1;
  FUNINIT(x_1128F1086, 2,FREEREF(0),return_);
  x_1127F1087 = FREEREF(0);
  testF1088 = YPfalse;
  testF1088 = BOXFAB(testF1088);
  bodyF1089 = YPfalse;
  bodyF1089 = BOXFAB(bodyF1089);
  T7 = CALL2(1,VARREF(YisaQ),x_1127F1087,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1127F1087,LITREF(lit_96),x_1128F1086);
    x_1127F1090 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1127F1090,x_1128F1086);
    BOXVAL(testF1088) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1127F1090);
    x_1127F1091 = T12;
    BOXVAL(bodyF1089) = x_1127F1091;
    x_1127F1092 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1127F1092,x_1128F1086);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1128F1086,LITREF(lit_5),x_1127F1087);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T22 = BOXVAL(testF1088);
  T21 = CALL1(1,VARREF(Ylst),T22);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T26 = BOXVAL(bodyF1089);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T23,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_44,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1132_46) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_103),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P return_;
  P x_1131F1099;
  P x_1131F1098;
  P x_1131F1097;
  P bodyF1096;
  P testF1095;
  P x_1131F1094;
  P x_1132F1093;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1132_46,2);
  x_1132F1093 = T1;
  FUNINIT(x_1132F1093, 2,FREEREF(0),return_);
  x_1131F1094 = FREEREF(0);
  testF1095 = YPfalse;
  testF1095 = BOXFAB(testF1095);
  bodyF1096 = YPfalse;
  bodyF1096 = BOXFAB(bodyF1096);
  T7 = CALL2(1,VARREF(YisaQ),x_1131F1094,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1131F1094,LITREF(lit_103),x_1132F1093);
    x_1131F1097 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1131F1097,x_1132F1093);
    BOXVAL(testF1095) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1131F1097);
    x_1131F1098 = T12;
    BOXVAL(bodyF1096) = x_1131F1098;
    x_1131F1099 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1131F1099,x_1132F1093);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1132F1093,LITREF(lit_5),x_1131F1094);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T19 = BOXVAL(testF1095);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T23 = BOXVAL(bodyF1096);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T20,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_47,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1140_49) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_108),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1142_50) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1144_51) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_115));
  T9 = BOXVAL(FREEREF(0));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_115));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_115));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
  T18 = BOXVAL(FREEREF(1));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T14,T15,Ynil);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T10,Ynil);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P return_;
  P x_1143F1101;
  P x_1144F1100;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1144_51,3);
  x_1144F1100 = T1;
  FUNINIT(x_1144F1100, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1143F1101 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1143F1101,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1143F1101,x_1144F1100);
  } else {
    T6 = CALL2(1,x_1144F1100,LITREF(lit_5),x_1143F1101);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1141F1107;
  P x_1141F1106;
  P restF1105;
  P xF1104;
  P x_1141F1103;
  P x_1142F1102;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1142_50,1);
  x_1142F1102 = T1;
  FUNINIT(x_1142F1102, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1141F1103 = T3;
  xF1104 = YPfalse;
  xF1104 = BOXFAB(xF1104);
  restF1105 = YPfalse;
  restF1105 = BOXFAB(restF1105);
  T8 = CALL2(1,VARREF(YisaQ),x_1141F1103,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1141F1103,x_1142F1102);
    BOXVAL(xF1104) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1141F1103);
    x_1141F1106 = T11;
    BOXVAL(restF1105) = x_1141F1106;
    x_1141F1107 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1141F1107,x_1142F1102);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1142F1102,LITREF(lit_5),x_1141F1103);
  }
  T16 = FUNFAB(fun_52,2,xF1104,restF1105);
  T15 = with_exit(T16);
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P return_;
  P x_1139F1112;
  P x_1139F1111;
  P restF1110;
  P x_1139F1109;
  P x_1140F1108;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1140_49,2);
  x_1140F1108 = T1;
  FUNINIT(x_1140F1108, 2,FREEREF(0),return_);
  x_1139F1109 = FREEREF(0);
  restF1110 = YPfalse;
  restF1110 = BOXFAB(restF1110);
  T5 = CALL2(1,VARREF(YisaQ),x_1139F1109,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1139F1109,LITREF(lit_108),x_1140F1108);
    x_1139F1111 = T7;
    BOXVAL(restF1110) = x_1139F1111;
    x_1139F1112 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1139F1112,x_1140F1108);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1140F1108,LITREF(lit_5),x_1139F1109);
  }
  T12 = FUNFAB(fun_53,1,restF1110);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_54,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1152_56) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_10),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1154_57) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1156_58) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_115));
  T9 = BOXVAL(FREEREF(0));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,Ynil);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T13 = CALL1(1,VARREF(Ylst),LITREF(lit_115));
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T17 = BOXVAL(FREEREF(1));
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T17,Ynil);
  T14 = CALL1(1,VARREF(Ylst),T15);
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T14,T18,Ynil);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T10,Ynil);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1155F1114;
  P x_1156F1113;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1156_58,3);
  x_1156F1113 = T1;
  FUNINIT(x_1156F1113, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1155F1114 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1155F1114,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1155F1114,x_1156F1113);
  } else {
    T6 = CALL2(1,x_1156F1113,LITREF(lit_5),x_1155F1114);
  }
  T7 = BOXVAL(FREEREF(0));
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P return_;
  P x_1153F1120;
  P x_1153F1119;
  P restF1118;
  P xF1117;
  P x_1153F1116;
  P x_1154F1115;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1154_57,1);
  x_1154F1115 = T1;
  FUNINIT(x_1154F1115, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1153F1116 = T3;
  xF1117 = YPfalse;
  xF1117 = BOXFAB(xF1117);
  restF1118 = YPfalse;
  restF1118 = BOXFAB(restF1118);
  T8 = CALL2(1,VARREF(YisaQ),x_1153F1116,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1153F1116,x_1154F1115);
    BOXVAL(xF1117) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1153F1116);
    x_1153F1119 = T11;
    BOXVAL(restF1118) = x_1153F1119;
    x_1153F1120 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1153F1120,x_1154F1115);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1154F1115,LITREF(lit_5),x_1153F1116);
  }
  T16 = FUNFAB(fun_59,2,xF1117,restF1118);
  T15 = with_exit(T16);
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1151F1125;
  P x_1151F1124;
  P restF1123;
  P x_1151F1122;
  P x_1152F1121;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1152_56,2);
  x_1152F1121 = T1;
  FUNINIT(x_1152F1121, 2,FREEREF(0),return_);
  x_1151F1122 = FREEREF(0);
  restF1123 = YPfalse;
  restF1123 = BOXFAB(restF1123);
  T5 = CALL2(1,VARREF(YisaQ),x_1151F1122,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1151F1122,LITREF(lit_10),x_1152F1121);
    x_1151F1124 = T7;
    BOXVAL(restF1123) = x_1151F1124;
    x_1151F1125 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1151F1125,x_1152F1121);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1152F1121,LITREF(lit_5),x_1151F1122);
  }
  T12 = FUNFAB(fun_60,1,restF1123);
  T11 = with_exit(T12);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_61,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1162_63) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_130),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1164_64) {
  P msg_,args_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(Yhead),T3);
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_134),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1163F1131;
  P x_1163F1130;
  P bodyF1129;
  P condF1128;
  P x_1163F1127;
  P x_1164F1126;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1164_64,2);
  x_1164F1126 = T1;
  FUNINIT(x_1164F1126, 2,FREEREF(0),return_);
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(Yhead),T4);
  x_1163F1127 = T3;
  condF1128 = YPfalse;
  condF1128 = BOXFAB(condF1128);
  bodyF1129 = YPfalse;
  bodyF1129 = BOXFAB(bodyF1129);
  T9 = CALL2(1,VARREF(YisaQ),x_1163F1127,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1163F1127,x_1164F1126);
    BOXVAL(condF1128) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1163F1127);
    x_1163F1130 = T12;
    BOXVAL(bodyF1129) = x_1163F1130;
    x_1163F1131 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1163F1131,x_1164F1126);
    T13 = T14;
    T10 = T13;
  } else {
    T15 = CALL2(1,x_1164F1126,LITREF(lit_5),x_1163F1127);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T19 = BOXVAL(condF1128);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T23 = BOXVAL(bodyF1129);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_130));
  T28 = BOXVAL(FREEREF(0));
  T27 = CALL1(1,VARREF(Ytail),T28);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T20,T24,Ynil);
  T7 = T16;
  T5 = T7;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_66) {
  P return_;
  P x_1161F1136;
  P x_1161F1135;
  P casesF1134;
  P x_1161F1133;
  P x_1162F1132;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1162_63,2);
  x_1162F1132 = T1;
  FUNINIT(x_1162F1132, 2,FREEREF(0),return_);
  x_1161F1133 = FREEREF(0);
  casesF1134 = YPfalse;
  casesF1134 = BOXFAB(casesF1134);
  T5 = CALL2(1,VARREF(YisaQ),x_1161F1133,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1161F1133,LITREF(lit_130),x_1162F1132);
    x_1161F1135 = T7;
    BOXVAL(casesF1134) = x_1161F1135;
    x_1161F1136 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1161F1136,x_1162F1132);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1162F1132,LITREF(lit_5),x_1161F1133);
  }
  T13 = BOXVAL(casesF1134);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = FUNFAB(fun_65,1,casesF1134);
    T14 = with_exit(T15);
    T11 = T14;
  }
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_66,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1170_68) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Yhead),FREEREF(0));
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_140),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1172_69) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL1(1,VARREF(Yhead),FREEREF(0));
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_144),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T2 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T3 = CALL1(1,VARREF(Ylst),x_);
  T0 = CALL4(1,VARREF(YgooSmacrosYcat),T1,T2,T3,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P return_;
  P x_1171F1140;
  P valuesF1139;
  P x_1171F1138;
  P x_1172F1137;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1172_69,2);
  x_1172F1137 = T1;
  FUNINIT(x_1172F1137, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(1));
  x_1171F1138 = T3;
  valuesF1139 = YPfalse;
  valuesF1139 = BOXFAB(valuesF1139);
  T6 = CALL2(1,VARREF(YisaQ),x_1171F1138,VARREF(YLlstG));
  if (T6 != YPfalse) {
    BOXVAL(valuesF1139) = x_1171F1138;
    x_1171F1140 = Ynil;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1171F1140,x_1172F1137);
    T7 = T8;
  } else {
    T9 = CALL2(1,x_1172F1137,LITREF(lit_5),x_1171F1138);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
  T16 = FUNFAB(fun_70,2,FREEREF(2),FREEREF(3));
  T17 = BOXVAL(valuesF1139);
  T15 = CALL2(1,VARREF(YgooSmacrosYmap),T16,T17);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,Ynil);
  T12 = CALL1(1,VARREF(Ylst),T13);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T21 = BOXVAL(FREEREF(4));
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T21,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T24 = CALL1(1,VARREF(Ytail),FREEREF(0));
  T23 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),FREEREF(3),FREEREF(2),T24);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T10 = CALL5(1,VARREF(YgooSmacrosYcat),T11,T12,T18,T22,Ynil);
  T4 = T10;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P return_;
  P x_1169F1146;
  P x_1169F1145;
  P bodyF1144;
  P condF1143;
  P x_1169F1142;
  P x_1170F1141;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1170_68,2);
  x_1170F1141 = T1;
  FUNINIT(x_1170F1141, 2,FREEREF(0),return_);
  T3 = CALL1(1,VARREF(Yhead),FREEREF(0));
  x_1169F1142 = T3;
  condF1143 = YPfalse;
  condF1143 = BOXFAB(condF1143);
  bodyF1144 = YPfalse;
  bodyF1144 = BOXFAB(bodyF1144);
  T8 = CALL2(1,VARREF(YisaQ),x_1169F1142,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1169F1142,x_1170F1141);
    BOXVAL(condF1143) = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1169F1142);
    x_1169F1145 = T11;
    BOXVAL(bodyF1144) = x_1169F1145;
    x_1169F1146 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1169F1146,x_1170F1141);
    T12 = T13;
    T9 = T12;
  } else {
    T14 = CALL2(1,x_1170F1141,LITREF(lit_5),x_1169F1142);
  }
  T17 = BOXVAL(condF1143);
  T16 = CALL2(1,VARREF(YgooSmacrosYEE),T17,YPtrue);
  if (T16 != YPfalse) {
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
    T20 = BOXVAL(bodyF1144);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,Ynil);
    T15 = T18;
  } else {
    T22 = FUNFAB(fun_71,5,FREEREF(0),condF1143,FREEREF(1),FREEREF(2),bodyF1144);
    T21 = with_exit(T22);
    T15 = T21;
  }
  T6 = T15;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYdo_case_by) {
  P val_,tst_,cases_;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(val_, 0);
  ARG(tst_, 1);
  ARG(cases_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),cases_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T3 = FUNFAB(fun_72,3,cases_,tst_,val_);
    T2 = with_exit(T3);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1176_74) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_150),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P tst_varF1157;
  P val_varF1156;
  P x_1175F1155;
  P x_1175F1154;
  P x_1175F1153;
  P x_1175F1152;
  P casesF1151;
  P tstF1150;
  P valF1149;
  P x_1175F1148;
  P x_1176F1147;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1176_74,2);
  x_1176F1147 = T1;
  FUNINIT(x_1176F1147, 2,FREEREF(0),return_);
  x_1175F1148 = FREEREF(0);
  valF1149 = YPfalse;
  valF1149 = BOXFAB(valF1149);
  tstF1150 = YPfalse;
  tstF1150 = BOXFAB(tstF1150);
  casesF1151 = YPfalse;
  casesF1151 = BOXFAB(casesF1151);
  T9 = CALL2(1,VARREF(YisaQ),x_1175F1148,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1175F1148,LITREF(lit_150),x_1176F1147);
    x_1175F1152 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1175F1152,x_1176F1147);
    BOXVAL(valF1149) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1175F1152);
    x_1175F1153 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1175F1153,x_1176F1147);
    BOXVAL(tstF1150) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1175F1153);
    x_1175F1154 = T17;
    BOXVAL(casesF1151) = x_1175F1154;
    x_1175F1155 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1175F1155,x_1176F1147);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1176F1147,LITREF(lit_5),x_1175F1148);
  }
  T22 = CALL0(1,VARREF(YgooSmacrosYgensym));
  val_varF1156 = T22;
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  tst_varF1157 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T31 = CALL1(1,VARREF(Ylst),val_varF1156);
  T33 = BOXVAL(valF1149);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T36 = CALL1(1,VARREF(Ylst),tst_varF1157);
  T38 = BOXVAL(tstF1150);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T34,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T41 = BOXVAL(casesF1151);
  T40 = CALL3(1,VARREF(YgooSmacrosYdo_case_by),val_varF1156,tst_varF1157,T41);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T39,Ynil);
  T23 = T25;
  T21 = T23;
  T7 = T21;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_75,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1180_77) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_155),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_78) {
  P return_;
  P x_1179F1164;
  P x_1179F1163;
  P x_1179F1162;
  P casesF1161;
  P valF1160;
  P x_1179F1159;
  P x_1180F1158;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1180_77,2);
  x_1180F1158 = T1;
  FUNINIT(x_1180F1158, 2,FREEREF(0),return_);
  x_1179F1159 = FREEREF(0);
  valF1160 = YPfalse;
  valF1160 = BOXFAB(valF1160);
  casesF1161 = YPfalse;
  casesF1161 = BOXFAB(casesF1161);
  T7 = CALL2(1,VARREF(YisaQ),x_1179F1159,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1179F1159,LITREF(lit_155),x_1180F1158);
    x_1179F1162 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1179F1162,x_1180F1158);
    BOXVAL(valF1160) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1179F1162);
    x_1179F1163 = T12;
    BOXVAL(casesF1161) = x_1179F1163;
    x_1179F1164 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1179F1164,x_1180F1158);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1180F1158,LITREF(lit_5),x_1179F1159);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_150));
  T19 = BOXVAL(valF1160);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
  T21 = BOXVAL(casesF1161);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T20,T21,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_78,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1184_80) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_161),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_165));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_166));
    T4 = CALL1(1,VARREF(Ylst),LITREF(lit_167));
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_168));
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T5,Ynil);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(Ylst),LITREF(lit_19));
    T8 = CALL1(1,VARREF(Ylst),x_);
    T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_splice_82) {
  P y_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T1 = fun_81;
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,y_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rest_opQ_83) {
  P x_;
  P tmpF1166;
  P tmpF1165;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  tmpF1165 = T2;
  if (tmpF1165 != YPfalse) {
    T4 = CALL2(1,VARREF(YOanyQ),FREEREF(0),x_);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  tmpF1166 = T1;
  if (tmpF1166 != YPfalse) {
    T5 = tmpF1166;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_165));
    T5 = T6;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_84) {
  P y_;
  P T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),y_,LITREF(lit_165));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  P y_;
  P T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T0 = CALL2(1,FREEREF(1),FREEREF(0),y_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_walk_op_86) {
  P vars_,x_;
  P yF1169;
  P spliceQF1168;
  P varF1167;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(vars_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,LITREF(lit_91));
  if (T1 != YPfalse) {
    T4 = (P)YOlen(vars_);
    T3 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_173),T4);
    varF1167 = T3;
    T6 = CALL1(1,VARREF(Ytail),vars_);
    T5 = CALL2(1,VARREF(YgooSmacrosYpair),varF1167,T6);
    CALL2(1,VARREF(Ytail_setter),T5,vars_);
    T2 = varF1167;
    T0 = T2;
  } else {
    T8 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
    if (T8 != YPfalse) {
      T11 = fun_84;
      T10 = CALL2(1,VARREF(YOanyQ),T11,x_);
      spliceQF1168 = T10;
      T14 = FUNFAB(fun_85,2,vars_,FREEREF(0));
      T13 = CALL2(1,VARREF(YgooSmacrosYmap),T14,x_);
      yF1169 = T13;
      if (spliceQF1168 != YPfalse) {
        T17 = CALL1(1,VARREF(Ylst),LITREF(lit_29));
        T19 = CALL1(1,VARREF(Yhead),yF1169);
        T18 = CALL1(1,VARREF(Ylst),T19);
        T22 = CALL1(1,VARREF(Ylst),LITREF(lit_176));
        T24 = CALL1(1,VARREF(Ytail),yF1169);
        T23 = CALL1(1,FREEREF(1),T24);
        T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
        T20 = CALL1(1,VARREF(Ylst),T21);
        T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T18,T20,Ynil);
        T15 = T16;
      } else {
        T15 = yF1169;
      }
      T12 = T15;
      T9 = T12;
      T7 = T9;
    } else {
      if (YPtrue != YPfalse) {
        T25 = x_;
      } else {
        T25 = YPfalse;
      }
      T7 = T25;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_87) {
  P return_;
  P argsF1182;
  P exprF1181;
  P varsF1180;
  P walk_opF1179;
  P rest_opQF1178;
  P spliceF1177;
  P x_1183F1176;
  P x_1183F1175;
  P x_1183F1174;
  P argsF1173;
  P fF1172;
  P x_1183F1171;
  P x_1184F1170;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1184_80,2);
  x_1184F1170 = T1;
  FUNINIT(x_1184F1170, 2,FREEREF(0),return_);
  x_1183F1171 = FREEREF(0);
  fF1172 = YPfalse;
  fF1172 = BOXFAB(fF1172);
  argsF1173 = YPfalse;
  argsF1173 = BOXFAB(argsF1173);
  T7 = CALL2(1,VARREF(YisaQ),x_1183F1171,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1183F1171,LITREF(lit_161),x_1184F1170);
    x_1183F1174 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1183F1174,x_1184F1170);
    BOXVAL(fF1172) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1183F1174);
    x_1183F1175 = T12;
    BOXVAL(argsF1173) = x_1183F1175;
    x_1183F1176 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1183F1176,x_1184F1170);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1184F1170,LITREF(lit_5),x_1183F1171);
  }
  T17 = fun_splice_82;
  spliceF1177 = T17;
  T18 = FUNSHELL(0,fun_rest_opQ_83,1);
  rest_opQF1178 = T18;
  T19 = FUNSHELL(1,fun_walk_op_86,2);
  walk_opF1179 = T19;
  FUNINIT(rest_opQF1178, 1,rest_opQF1178);
  FUNINIT(walk_opF1179, 2,walk_opF1179,spliceF1177);
  T22 = BOXVAL(argsF1173);
  T21 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T22);
  if (T21 != YPfalse) {
    T25 = BOXVAL(fF1172);
    T24 = CALL2(1,VARREF(YgooSmacrosYEE),T25,LITREF(lit_91));
    if (T24 != YPfalse) {
      T27 = CALL1(1,VARREF(Ylst),LITREF(lit_177));
      T30 = CALL1(1,VARREF(Ylst),LITREF(lit_178));
      T29 = CALL2(1,VARREF(YgooSmacrosYcat),T30,Ynil);
      T28 = CALL1(1,VARREF(Ylst),T29);
      T31 = CALL1(1,VARREF(Ylst),LITREF(lit_178));
      T26 = CALL4(1,VARREF(YgooSmacrosYcat),T27,T28,T31,Ynil);
      T23 = T26;
    } else {
      T33 = CALL1(1,VARREF(Ylst),LITREF(lit_177));
      T38 = CALL1(1,VARREF(Ylst),LITREF(lit_178));
      T39 = CALL1(1,VARREF(Ylst),LITREF(lit_165));
      T37 = CALL3(1,VARREF(YgooSmacrosYcat),T38,T39,Ynil);
      T36 = CALL1(1,VARREF(Ylst),T37);
      T35 = CALL2(1,VARREF(YgooSmacrosYcat),T36,Ynil);
      T34 = CALL1(1,VARREF(Ylst),T35);
      T41 = BOXVAL(fF1172);
      T40 = CALL1(1,VARREF(Ylst),T41);
      T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T40,Ynil);
      T23 = T32;
    }
    T20 = T23;
  } else {
    T43 = CALL2(1,VARREF(YgooSmacrosYpair),YPfalse,Ynil);
    varsF1180 = T43;
    T48 = BOXVAL(fF1172);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T49 = BOXVAL(argsF1173);
    T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
    T45 = CALL2(1,walk_opF1179,varsF1180,T46);
    exprF1181 = T45;
    T53 = CALL1(1,VARREF(Ytail),varsF1180);
    T52 = CALL1(1,VARREF(YgooSmacrosYrevX),T53);
    T56 = BOXVAL(argsF1173);
    T55 = CALL1(1,rest_opQF1178,T56);
    if (T55 != YPfalse) {
      T54 = LITREF(lit_179);
    } else {
      T54 = Ynil;
    }
    T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T54,Ynil);
    argsF1182 = T51;
    T58 = CALL1(1,VARREF(Ylst),LITREF(lit_177));
    T59 = CALL1(1,VARREF(Ylst),argsF1182);
    T60 = CALL1(1,VARREF(Ylst),exprF1181);
    T57 = CALL4(1,VARREF(YgooSmacrosYcat),T58,T59,T60,Ynil);
    T50 = T57;
    T44 = T50;
    T42 = T44;
    T20 = T42;
  }
  T16 = T20;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_88) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_87,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1192_89) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_184),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1196_90) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_191));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_91) {
  P return_;
  P varF1193;
  P x_1195F1192;
  P x_1195F1191;
  P x_1195F1190;
  P x_1195F1189;
  P x_1195F1188;
  P restF1187;
  P thenF1186;
  P patF1185;
  P x_1195F1184;
  P x_1196F1183;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1196_90,1);
  x_1196F1183 = T1;
  FUNINIT(x_1196F1183, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  x_1195F1184 = T3;
  patF1185 = YPfalse;
  patF1185 = BOXFAB(patF1185);
  thenF1186 = YPfalse;
  thenF1186 = BOXFAB(thenF1186);
  restF1187 = YPfalse;
  restF1187 = BOXFAB(restF1187);
  T10 = CALL2(1,VARREF(YisaQ),x_1195F1184,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1195F1184,x_1196F1183);
    x_1195F1188 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1195F1188,x_1196F1183);
    BOXVAL(patF1185) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1195F1188);
    x_1195F1189 = T15;
    BOXVAL(thenF1186) = x_1195F1189;
    x_1195F1190 = Ynil;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F1190,x_1196F1183);
    T16 = T17;
    T13 = T16;
    T18 = CALL1(1,VARREF(Ytail),x_1195F1184);
    x_1195F1191 = T18;
    BOXVAL(restF1187) = x_1195F1191;
    x_1195F1192 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1195F1192,x_1196F1183);
    T19 = T20;
    T11 = T19;
  } else {
    T21 = CALL2(1,x_1196F1183,LITREF(lit_5),x_1195F1184);
  }
  T24 = BOXVAL(patF1185);
  T23 = CALL2(1,VARREF(YgooSmacrosYEE),T24,YPtrue);
  if (T23 != YPfalse) {
    T26 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
    T27 = BOXVAL(thenF1186);
    T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
    T22 = T25;
  } else {
    T29 = CALL0(1,VARREF(YgooSmacrosYgensym));
    varF1193 = T29;
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
    T36 = CALL1(1,VARREF(Ylst),varF1193);
    T38 = BOXVAL(FREEREF(1));
    T37 = CALL1(1,VARREF(Ylst),T38);
    T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
    T34 = CALL1(1,VARREF(Ylst),T35);
    T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
    T32 = CALL1(1,VARREF(Ylst),T33);
    T41 = CALL1(1,VARREF(Ylst),LITREF(lit_192));
    T45 = BOXVAL(patF1185);
    T44 = CALL1(1,VARREF(Ylst),T45);
    T46 = CALL1(1,VARREF(Ylst),varF1193);
    T43 = CALL3(1,VARREF(YgooSmacrosYcat),T44,T46,Ynil);
    T42 = CALL1(1,VARREF(Ylst),T43);
    T49 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
    T50 = BOXVAL(thenF1186);
    T48 = CALL3(1,VARREF(YgooSmacrosYcat),T49,T50,Ynil);
    T47 = CALL1(1,VARREF(Ylst),T48);
    T53 = CALL1(1,VARREF(Ylst),LITREF(lit_184));
    T54 = CALL1(1,VARREF(Ylst),varF1193);
    T55 = BOXVAL(restF1187);
    T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T55,Ynil);
    T51 = CALL1(1,VARREF(Ylst),T52);
    T40 = CALL5(1,VARREF(YgooSmacrosYcat),T41,T42,T47,T51,Ynil);
    T39 = CALL1(1,VARREF(Ylst),T40);
    T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T39,Ynil);
    T28 = T30;
    T22 = T28;
  }
  T8 = T22;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1194_92) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_91,2,FREEREF(0),FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_93) {
  P return_;
  P x_1193F1195;
  P x_1194F1194;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1194_92,3);
  x_1194F1194 = T1;
  FUNINIT(x_1194F1194, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1193F1195 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1193F1195,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1193F1195,x_1194F1194);
  } else {
    T6 = CALL2(1,x_1194F1194,LITREF(lit_5),x_1193F1195);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_193));
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_194));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_94) {
  P return_;
  P x_1191F1202;
  P x_1191F1201;
  P x_1191F1200;
  P casesF1199;
  P expF1198;
  P x_1191F1197;
  P x_1192F1196;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1192_89,2);
  x_1192F1196 = T1;
  FUNINIT(x_1192F1196, 2,FREEREF(0),return_);
  x_1191F1197 = FREEREF(0);
  expF1198 = YPfalse;
  expF1198 = BOXFAB(expF1198);
  casesF1199 = YPfalse;
  casesF1199 = BOXFAB(casesF1199);
  T7 = CALL2(1,VARREF(YisaQ),x_1191F1197,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1191F1197,LITREF(lit_184),x_1192F1196);
    x_1191F1200 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1191F1200,x_1192F1196);
    BOXVAL(expF1198) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1191F1200);
    x_1191F1201 = T12;
    BOXVAL(casesF1199) = x_1191F1201;
    x_1191F1202 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1191F1202,x_1192F1196);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1192F1196,LITREF(lit_5),x_1191F1197);
  }
  T17 = FUNFAB(fun_93,2,casesF1199,expF1198);
  T16 = with_exit(T17);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_95) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_94,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1200_96) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_199),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_97) {
  P return_;
  P x_1199F1211;
  P x_1199F1210;
  P x_1199F1209;
  P x_1199F1208;
  P argsF1207;
  P messageF1206;
  P condF1205;
  P x_1199F1204;
  P x_1200F1203;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1200_96,2);
  x_1200F1203 = T1;
  FUNINIT(x_1200F1203, 2,FREEREF(0),return_);
  x_1199F1204 = FREEREF(0);
  condF1205 = YPfalse;
  condF1205 = BOXFAB(condF1205);
  messageF1206 = YPfalse;
  messageF1206 = BOXFAB(messageF1206);
  argsF1207 = YPfalse;
  argsF1207 = BOXFAB(argsF1207);
  T9 = CALL2(1,VARREF(YisaQ),x_1199F1204,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1199F1204,LITREF(lit_199),x_1200F1203);
    x_1199F1208 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1199F1208,x_1200F1203);
    BOXVAL(condF1205) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1199F1208);
    x_1199F1209 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1199F1209,x_1200F1203);
    BOXVAL(messageF1206) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1199F1209);
    x_1199F1210 = T17;
    BOXVAL(argsF1207) = x_1199F1210;
    x_1199F1211 = Ynil;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1199F1211,x_1200F1203);
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T20 = CALL2(1,x_1200F1203,LITREF(lit_5),x_1199F1204);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_9));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_97));
  T27 = BOXVAL(condF1205);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_200));
  T32 = BOXVAL(messageF1206);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = BOXVAL(argsF1207);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T33,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T21 = CALL4(1,VARREF(YgooSmacrosYcat),T22,T23,T28,Ynil);
  T7 = T21;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_98) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_97,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1208_99) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_205),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1210_100) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1212_101) {
  P msg_,args_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(1,VARREF(Ylst),T3);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_217));
  T7 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T5 = CALL3(1,VARREF(YgooSmacrosYcat),T6,T7,Ynil);
  T4 = CALL1(1,VARREF(Ylst),T5);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),T2,T4,Ynil);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_102) {
  P return_;
  P x_1211F1218;
  P x_1211F1217;
  P x_1211F1216;
  P valF1215;
  P keyF1214;
  P x_1211F1213;
  P x_1212F1212;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1212_101,3);
  x_1212F1212 = T1;
  FUNINIT(x_1212F1212, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1211F1213 = T3;
  keyF1214 = YPfalse;
  keyF1214 = BOXFAB(keyF1214);
  valF1215 = YPfalse;
  valF1215 = BOXFAB(valF1215);
  T8 = CALL2(1,VARREF(YisaQ),x_1211F1213,VARREF(YLlstG));
  if (T8 != YPfalse) {
    T10 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1211F1213,LITREF(lit_84),x_1212F1212);
    x_1211F1216 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1211F1216,x_1212F1212);
    BOXVAL(keyF1214) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1211F1216);
    x_1211F1217 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1211F1217,x_1212F1212);
    BOXVAL(valF1215) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1211F1217);
    x_1211F1218 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1211F1218,x_1212F1212);
    T14 = T17;
    T11 = T14;
    T9 = T11;
  } else {
    T18 = CALL2(1,x_1212F1212,LITREF(lit_5),x_1211F1213);
  }
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T24 = BOXVAL(keyF1214);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T26 = BOXVAL(valF1215);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T21 = CALL4(1,VARREF(YgooSmacrosYcat),T22,T23,T25,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_218));
  T33 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_217));
  T37 = CALL1(1,VARREF(Ylst),FREEREF(1));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T34,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T27,Ynil);
  T6 = T19;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_103) {
  P return_;
  P stateF1225;
  P x_1209F1224;
  P x_1209F1223;
  P expF1222;
  P varF1221;
  P x_1209F1220;
  P x_1210F1219;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1210_100,1);
  x_1210F1219 = T1;
  FUNINIT(x_1210F1219, 1,return_);
  x_1209F1220 = FREEREF(0);
  varF1221 = YPfalse;
  varF1221 = BOXFAB(varF1221);
  expF1222 = YPfalse;
  expF1222 = BOXFAB(expF1222);
  T7 = CALL2(1,VARREF(YisaQ),x_1209F1220,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1209F1220,x_1210F1219);
    BOXVAL(varF1221) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1209F1220);
    x_1209F1223 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1209F1223,x_1210F1219);
    BOXVAL(expF1222) = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1209F1223);
    x_1209F1224 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1209F1224,x_1210F1219);
    T11 = T14;
    T8 = T11;
  } else {
    T15 = CALL2(1,x_1210F1219,LITREF(lit_5),x_1209F1220);
  }
  T17 = CALL0(1,VARREF(YgooSmacrosYgensym));
  stateF1225 = T17;
  T19 = CALL1(1,VARREF(Ytail),FREEREF(1));
  T22 = CALL1(1,VARREF(Ylst),stateF1225);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_212));
  T27 = BOXVAL(expF1222);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,Ynil);
  T20 = CALL2(1,VARREF(YgooSmacrosYpair),T21,FREEREF(2));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_213));
  T31 = CALL1(1,VARREF(Ylst),stateF1225);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,Ynil);
  T28 = CALL2(1,VARREF(YgooSmacrosYpair),T29,FREEREF(3));
  T34 = FUNFAB(fun_102,2,varF1221,stateF1225);
  T33 = with_exit(T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYpair),T33,FREEREF(4));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_219));
  T38 = CALL1(1,VARREF(Ylst),stateF1225);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T38,Ynil);
  T35 = CALL2(1,VARREF(YgooSmacrosYpair),T36,FREEREF(5));
  T18 = CALL5(0,FREEREF(6),T19,T20,T28,T32,T35);
  T16 = T18;
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_grok_104) {
  P clauses_,inits_,preds_,nows_,nexts_;
  P clauseF1227;
  P loopF1226;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(clauses_, 0);
  ARG(inits_, 1);
  ARG(preds_, 2);
  ARG(nows_, 3);
  ARG(nexts_, 4);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),clauses_);
  if (T1 != YPfalse) {
    T3 = CALL0(1,VARREF(YgooSmacrosYgensym));
    loopF1226 = T3;
    T5 = CALL1(1,VARREF(Ylst),LITREF(lit_208));
    T6 = CALL1(1,VARREF(Ylst),loopF1226);
    T7 = CALL1(1,VARREF(Ylst),inits_);
    T10 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
    T13 = CALL1(1,VARREF(Ylst),LITREF(lit_108));
    T12 = CALL3(1,VARREF(YgooSmacrosYcat),T13,preds_,Ynil);
    T11 = CALL1(1,VARREF(Ylst),T12);
    T16 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
    T17 = CALL1(1,VARREF(Ylst),nows_);
    T18 = BOXVAL(FREEREF(0));
    T21 = CALL1(1,VARREF(Ylst),loopF1226);
    T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,nexts_,Ynil);
    T19 = CALL1(1,VARREF(Ylst),T20);
    T15 = CALL5(1,VARREF(YgooSmacrosYcat),T16,T17,T18,T19,Ynil);
    T14 = CALL1(1,VARREF(Ylst),T15);
    T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T14,Ynil);
    T8 = CALL1(1,VARREF(Ylst),T9);
    T4 = CALL5(1,VARREF(YgooSmacrosYcat),T5,T6,T7,T8,Ynil);
    T2 = T4;
    T0 = T2;
  } else {
    T23 = CALL1(1,VARREF(Yhead),clauses_);
    clauseF1227 = T23;
    T25 = FUNFAB(fun_103,7,clauseF1227,clauses_,inits_,preds_,nows_,nexts_,FREEREF(1));
    T24 = with_exit(T25);
    T22 = T24;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_105) {
  P return_;
  P grokF1237;
  P x_1207F1236;
  P x_1207F1235;
  P x_1207F1234;
  P x_1207F1233;
  P x_1207F1232;
  P bodyF1231;
  P clausesF1230;
  P x_1207F1229;
  P x_1208F1228;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1208_99,2);
  x_1208F1228 = T1;
  FUNINIT(x_1208F1228, 2,FREEREF(0),return_);
  x_1207F1229 = FREEREF(0);
  clausesF1230 = YPfalse;
  clausesF1230 = BOXFAB(clausesF1230);
  bodyF1231 = YPfalse;
  bodyF1231 = BOXFAB(bodyF1231);
  T7 = CALL2(1,VARREF(YisaQ),x_1207F1229,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1207F1229,LITREF(lit_205),x_1208F1228);
    x_1207F1232 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1207F1232,x_1208F1228);
    x_1207F1233 = T11;
    BOXVAL(clausesF1230) = x_1207F1233;
    x_1207F1234 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F1234,x_1208F1228);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1207F1232);
    x_1207F1235 = T14;
    BOXVAL(bodyF1231) = x_1207F1235;
    x_1207F1236 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1207F1236,x_1208F1228);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1208F1228,LITREF(lit_5),x_1207F1229);
  }
  T19 = FUNSHELL(1,fun_grok_104,2);
  grokF1237 = T19;
  FUNINIT(grokF1237, 2,bodyF1231,grokF1237);
  T21 = BOXVAL(clausesF1230);
  T20 = CALL5(0,grokF1237,T21,Ynil,Ynil,Ynil,Ynil);
  T18 = T20;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_106) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_105,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1216_107) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_224),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_108) {
  P return_;
  P x_1215F1244;
  P x_1215F1243;
  P x_1215F1242;
  P bodyF1241;
  P testF1240;
  P x_1215F1239;
  P x_1216F1238;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1216_107,2);
  x_1216F1238 = T1;
  FUNINIT(x_1216F1238, 2,FREEREF(0),return_);
  x_1215F1239 = FREEREF(0);
  testF1240 = YPfalse;
  testF1240 = BOXFAB(testF1240);
  bodyF1241 = YPfalse;
  bodyF1241 = BOXFAB(bodyF1241);
  T7 = CALL2(1,VARREF(YisaQ),x_1215F1239,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1215F1239,LITREF(lit_224),x_1216F1238);
    x_1215F1242 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1215F1242,x_1216F1238);
    BOXVAL(testF1240) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1215F1242);
    x_1215F1243 = T12;
    BOXVAL(bodyF1241) = x_1215F1243;
    x_1215F1244 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1215F1244,x_1216F1238);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1216F1238,LITREF(lit_5),x_1215F1239);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_208));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_225));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_103));
  T24 = BOXVAL(testF1240);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF1241);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_225));
  T27 = CALL2(1,VARREF(YgooSmacrosYcat),T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T21 = CALL5(1,VARREF(YgooSmacrosYcat),T22,T23,T25,T26,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T19,T20,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_109) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_108,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1220_110) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_230),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_111) {
  P return_;
  P x_1219F1251;
  P x_1219F1250;
  P x_1219F1249;
  P bodyF1248;
  P testF1247;
  P x_1219F1246;
  P x_1220F1245;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1220_110,2);
  x_1220F1245 = T1;
  FUNINIT(x_1220F1245, 2,FREEREF(0),return_);
  x_1219F1246 = FREEREF(0);
  testF1247 = YPfalse;
  testF1247 = BOXFAB(testF1247);
  bodyF1248 = YPfalse;
  bodyF1248 = BOXFAB(bodyF1248);
  T7 = CALL2(1,VARREF(YisaQ),x_1219F1246,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1219F1246,LITREF(lit_230),x_1220F1245);
    x_1219F1249 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1219F1249,x_1220F1245);
    BOXVAL(testF1247) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1219F1249);
    x_1219F1250 = T12;
    BOXVAL(bodyF1248) = x_1219F1250;
    x_1219F1251 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1219F1251,x_1220F1245);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1220F1245,LITREF(lit_5),x_1219F1246);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_208));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_225));
  T19 = CALL1(1,VARREF(Ylst),Ynil);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_96));
  T24 = BOXVAL(testF1247);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = BOXVAL(bodyF1248);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_225));
  T27 = CALL2(1,VARREF(YgooSmacrosYcat),T28,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T21 = CALL5(1,VARREF(YgooSmacrosYcat),T22,T23,T25,T26,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T19,T20,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_112) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_111,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1228_113) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_235),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1232_114) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_242),T2);
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_115) {
  P return_;
  P old_valueF1263;
  P nameF1262;
  P x_1231F1261;
  P x_1231F1260;
  P x_1231F1259;
  P x_1231F1258;
  P x_1231F1257;
  P restF1256;
  P valueF1255;
  P varF1254;
  P x_1231F1253;
  P x_1232F1252;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1232_114,2);
  x_1232F1252 = T1;
  FUNINIT(x_1232F1252, 2,FREEREF(0),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1231F1253 = T3;
  varF1254 = YPfalse;
  varF1254 = BOXFAB(varF1254);
  valueF1255 = YPfalse;
  valueF1255 = BOXFAB(valueF1255);
  restF1256 = YPfalse;
  restF1256 = BOXFAB(restF1256);
  T10 = CALL2(1,VARREF(YisaQ),x_1231F1253,VARREF(YLlstG));
  if (T10 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1231F1253,x_1232F1252);
    x_1231F1257 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F1257,x_1232F1252);
    BOXVAL(varF1254) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1231F1257);
    x_1231F1258 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1231F1258,x_1232F1252);
    BOXVAL(valueF1255) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1231F1258);
    x_1231F1259 = T18;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F1259,x_1232F1252);
    T16 = T19;
    T13 = T16;
    T20 = CALL1(1,VARREF(Ytail),x_1231F1253);
    x_1231F1260 = T20;
    BOXVAL(restF1256) = x_1231F1260;
    x_1231F1261 = Ynil;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1231F1261,x_1232F1252);
    T21 = T22;
    T11 = T21;
  } else {
    T23 = CALL2(1,x_1232F1252,LITREF(lit_5),x_1231F1253);
  }
  T26 = BOXVAL(varF1254);
  T25 = CALL1(1,VARREF(YgooSmacrosYvar_name),T26);
  nameF1262 = T25;
  T28 = CALL0(1,VARREF(YgooSmacrosYgensym));
  old_valueF1263 = T28;
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T35 = CALL1(1,VARREF(Ylst),old_valueF1263);
  T36 = CALL1(1,VARREF(Ylst),nameF1262);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T32 = CALL2(1,VARREF(YgooSmacrosYcat),T33,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_243));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T46 = CALL1(1,VARREF(Ylst),nameF1262);
  T48 = BOXVAL(valueF1255);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_235));
  T54 = BOXVAL(restF1256);
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,Ynil);
  T52 = CALL1(1,VARREF(Ylst),T53);
  T55 = BOXVAL(FREEREF(1));
  T50 = CALL4(1,VARREF(YgooSmacrosYcat),T51,T52,T55,Ynil);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T49,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T59 = CALL1(1,VARREF(Ylst),nameF1262);
  T60 = CALL1(1,VARREF(Ylst),old_valueF1263);
  T57 = CALL4(1,VARREF(YgooSmacrosYcat),T58,T59,T60,Ynil);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T56,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T37,Ynil);
  T27 = T29;
  T24 = T27;
  T8 = T24;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1230_116) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = FUNFAB(fun_115,2,FREEREF(0),FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_117) {
  P return_;
  P x_1229F1265;
  P x_1230F1264;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1230_116,3);
  x_1230F1264 = T1;
  FUNINIT(x_1230F1264, 3,FREEREF(0),FREEREF(1),return_);
  T3 = BOXVAL(FREEREF(0));
  x_1229F1265 = T3;
  T4 = CALL2(1,VARREF(YisaQ),x_1229F1265,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1229F1265,x_1230F1264);
  } else {
    T6 = CALL2(1,x_1230F1264,LITREF(lit_5),x_1229F1265);
  }
  T8 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T9 = BOXVAL(FREEREF(1));
  T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,T9,Ynil);
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_118) {
  P return_;
  P x_1227F1272;
  P x_1227F1271;
  P x_1227F1270;
  P bodyF1269;
  P bindingsF1268;
  P x_1227F1267;
  P x_1228F1266;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1228_113,2);
  x_1228F1266 = T1;
  FUNINIT(x_1228F1266, 2,FREEREF(0),return_);
  x_1227F1267 = FREEREF(0);
  bindingsF1268 = YPfalse;
  bindingsF1268 = BOXFAB(bindingsF1268);
  bodyF1269 = YPfalse;
  bodyF1269 = BOXFAB(bodyF1269);
  T7 = CALL2(1,VARREF(YisaQ),x_1227F1267,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1227F1267,LITREF(lit_235),x_1228F1266);
    x_1227F1270 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1227F1270,x_1228F1266);
    BOXVAL(bindingsF1268) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1227F1270);
    x_1227F1271 = T12;
    BOXVAL(bodyF1269) = x_1227F1271;
    x_1227F1272 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1227F1272,x_1228F1266);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1228F1266,LITREF(lit_5),x_1227F1267);
  }
  T17 = FUNFAB(fun_117,2,bindingsF1268,bodyF1269);
  T16 = with_exit(T17);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_119) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_118,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1236_120) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_248),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_121) {
  P return_;
  P vnamF1282;
  P typF1281;
  P namF1280;
  P x_1235F1279;
  P x_1235F1278;
  P x_1235F1277;
  P valueF1276;
  P varF1275;
  P x_1235F1274;
  P x_1236F1273;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1236_120,2);
  x_1236F1273 = T1;
  FUNINIT(x_1236F1273, 2,FREEREF(0),return_);
  x_1235F1274 = FREEREF(0);
  varF1275 = YPfalse;
  varF1275 = BOXFAB(varF1275);
  valueF1276 = YPfalse;
  valueF1276 = BOXFAB(valueF1276);
  T7 = CALL2(1,VARREF(YisaQ),x_1235F1274,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1235F1274,LITREF(lit_248),x_1236F1273);
    x_1235F1277 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F1277,x_1236F1273);
    BOXVAL(varF1275) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1235F1277);
    x_1235F1278 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1235F1278,x_1236F1273);
    BOXVAL(valueF1276) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1235F1278);
    x_1235F1279 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1235F1279,x_1236F1273);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1236F1273,LITREF(lit_5),x_1235F1274);
  }
  T20 = BOXVAL(varF1275);
  T19 = CALL1(1,VARREF(YgooSmacrosYvar_name),T20);
  namF1280 = T19;
  T23 = BOXVAL(varF1275);
  T22 = CALL1(1,VARREF(YgooSmacrosYvar_type),T23);
  typF1281 = T22;
  T25 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_249),namF1280,LITREF(lit_250));
  vnamF1282 = T25;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_251));
  T31 = CALL1(1,VARREF(Ylst),vnamF1282);
  T33 = BOXVAL(valueF1276);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,Ynil);
  T28 = CALL1(1,VARREF(Ylst),T29);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_252));
  T37 = CALL1(1,VARREF(Ylst),namF1280);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_253));
  T41 = CALL1(1,VARREF(Ylst),typF1281);
  T39 = CALL3(1,VARREF(YgooSmacrosYcat),T40,T41,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = CALL1(1,VARREF(Ylst),vnamF1282);
  T35 = CALL5(1,VARREF(YgooSmacrosYcat),T36,T37,T38,T42,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_252));
  T47 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),namF1280);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_254));
  T53 = CALL1(1,VARREF(Ylst),typF1281);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T49 = CALL2(1,VARREF(YgooSmacrosYcat),T50,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T57 = CALL1(1,VARREF(Ylst),vnamF1282);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_254));
  T55 = CALL4(1,VARREF(YgooSmacrosYcat),T56,T57,T58,Ynil);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T44 = CALL5(1,VARREF(YgooSmacrosYcat),T45,T46,T48,T54,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T26 = CALL5(1,VARREF(YgooSmacrosYcat),T27,T28,T34,T43,Ynil);
  T24 = T26;
  T21 = T24;
  T18 = T21;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_122) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_121,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1240_123) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_259),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_124) {
  P return_;
  P x_1239F1287;
  P x_1239F1286;
  P bodyF1285;
  P x_1239F1284;
  P x_1240F1283;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1240_123,2);
  x_1240F1283 = T1;
  FUNINIT(x_1240F1283, 2,FREEREF(0),return_);
  x_1239F1284 = FREEREF(0);
  bodyF1285 = YPfalse;
  bodyF1285 = BOXFAB(bodyF1285);
  T5 = CALL2(1,VARREF(YisaQ),x_1239F1284,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1239F1284,LITREF(lit_259),x_1240F1283);
    x_1239F1286 = T7;
    BOXVAL(bodyF1285) = x_1239F1286;
    x_1239F1287 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1239F1287,x_1240F1283);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1240F1283,LITREF(lit_5),x_1239F1284);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_235));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_260));
  T18 = CALL1(1,VARREF(Ylst),YPfalse);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T19 = BOXVAL(bodyF1285);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T19,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_125) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_124,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1244_126) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_265),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_127) {
  P return_;
  P x_1243F1292;
  P x_1243F1291;
  P namesF1290;
  P x_1243F1289;
  P x_1244F1288;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1244_126,2);
  x_1244F1288 = T1;
  FUNINIT(x_1244F1288, 2,FREEREF(0),return_);
  x_1243F1289 = FREEREF(0);
  namesF1290 = YPfalse;
  namesF1290 = BOXFAB(namesF1290);
  T5 = CALL2(1,VARREF(YisaQ),x_1243F1289,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1243F1289,LITREF(lit_265),x_1244F1288);
    x_1243F1291 = T7;
    BOXVAL(namesF1290) = x_1243F1291;
    x_1243F1292 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1243F1292,x_1244F1288);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1244F1288,LITREF(lit_5),x_1243F1289);
  }
  T13 = BOXVAL(namesF1290);
  T12 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T13);
  if (T12 != YPfalse) {
    T11 = YPfalse;
  } else {
    T15 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
    T18 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
    T19 = CALL1(1,VARREF(Ylst),YPfalse);
    T22 = BOXVAL(namesF1290);
    T21 = CALL1(1,VARREF(Yhead),T22);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,Ynil);
    T16 = CALL1(1,VARREF(Ylst),T17);
    T25 = CALL1(1,VARREF(Ylst),LITREF(lit_266));
    T28 = BOXVAL(namesF1290);
    T27 = CALL1(1,VARREF(Yhead),T28);
    T26 = CALL1(1,VARREF(Ylst),T27);
    T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
    T23 = CALL1(1,VARREF(Ylst),T24);
    T31 = CALL1(1,VARREF(Ylst),LITREF(lit_265));
    T33 = BOXVAL(namesF1290);
    T32 = CALL1(1,VARREF(Ytail),T33);
    T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
    T29 = CALL1(1,VARREF(Ylst),T30);
    T14 = CALL5(1,VARREF(YgooSmacrosYcat),T15,T16,T23,T29,Ynil);
    T11 = T14;
  }
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_128) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_127,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1266_129) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_271),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1284_130) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_194));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_131) {
  P return_;
  P x_1283F1296;
  P nameF1295;
  P x_1283F1294;
  P x_1284F1293;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1284_130,1);
  x_1284F1293 = T1;
  FUNINIT(x_1284F1293, 1,return_);
  x_1283F1294 = FREEREF(0);
  nameF1295 = YPfalse;
  nameF1295 = BOXFAB(nameF1295);
  T5 = CALL2(1,VARREF(YisaQ),x_1283F1294,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1283F1294,x_1284F1293);
    BOXVAL(nameF1295) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1283F1294);
    x_1283F1296 = T8;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1283F1296,x_1284F1293);
    T6 = T9;
  } else {
    T10 = CALL2(1,x_1284F1293,LITREF(lit_5),x_1283F1294);
  }
  T13 = BOXVAL(nameF1295);
  T12 = CALL2(1,VARREF(YisaQ),T13,VARREF(YLsymG));
  if (T12 != YPfalse) {
    T16 = BOXVAL(nameF1295);
    T15 = CALL1(1,VARREF(Ylst),T16);
    T19 = CALL1(1,VARREF(Ylst),LITREF(lit_266));
    T21 = BOXVAL(nameF1295);
    T20 = CALL1(1,VARREF(Ylst),T21);
    T18 = CALL3(1,VARREF(YgooSmacrosYcat),T19,T20,Ynil);
    T17 = CALL1(1,VARREF(Ylst),T18);
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),T15,T17,Ynil);
    T11 = T14;
  } else {
    T11 = Ynil;
  }
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1281_132) {
  P msg_,args_;
  P x_1282F1297;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1282F1297 = FREEREF(0);
  T3 = FUNFAB(fun_131,1,x_1282F1297);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_133) {
  P return_;
  P x_1280F1304;
  P x_1280F1303;
  P x_1280F1302;
  P restF1301;
  P nameF1300;
  P x_1280F1299;
  P x_1281F1298;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1281_132,2);
  x_1281F1298 = T1;
  FUNINIT(x_1281F1298, 2,FREEREF(0),return_);
  x_1280F1299 = FREEREF(0);
  nameF1300 = YPfalse;
  nameF1300 = BOXFAB(nameF1300);
  restF1301 = YPfalse;
  restF1301 = BOXFAB(restF1301);
  T7 = CALL2(1,VARREF(YisaQ),x_1280F1299,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1280F1299,LITREF(lit_290),x_1281F1298);
    x_1280F1302 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1280F1302,x_1281F1298);
    BOXVAL(nameF1300) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1280F1302);
    x_1280F1303 = T12;
    BOXVAL(restF1301) = x_1280F1303;
    x_1280F1304 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1280F1304,x_1281F1298);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1281F1298,LITREF(lit_5),x_1280F1299);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_266));
  T23 = BOXVAL(nameF1300);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T19,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1278_134) {
  P msg_,args_;
  P x_1279F1305;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1279F1305 = FREEREF(0);
  T3 = FUNFAB(fun_133,2,x_1279F1305,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_135) {
  P return_;
  P x_1277F1312;
  P x_1277F1311;
  P x_1277F1310;
  P restF1309;
  P nameF1308;
  P x_1277F1307;
  P x_1278F1306;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1278_134,3);
  x_1278F1306 = T1;
  FUNINIT(x_1278F1306, 3,FREEREF(0),FREEREF(1),return_);
  x_1277F1307 = FREEREF(0);
  nameF1308 = YPfalse;
  nameF1308 = BOXFAB(nameF1308);
  restF1309 = YPfalse;
  restF1309 = BOXFAB(restF1309);
  T7 = CALL2(1,VARREF(YisaQ),x_1277F1307,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1277F1307,LITREF(lit_291),x_1278F1306);
    x_1277F1310 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1277F1310,x_1278F1306);
    BOXVAL(nameF1308) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1277F1310);
    x_1277F1311 = T12;
    BOXVAL(restF1309) = x_1277F1311;
    x_1277F1312 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1277F1312,x_1278F1306);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1278F1306,LITREF(lit_5),x_1277F1307);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_266));
  T23 = BOXVAL(nameF1308);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T19,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1275_136) {
  P msg_,args_;
  P x_1276F1313;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1276F1313 = FREEREF(0);
  T3 = FUNFAB(fun_135,2,x_1276F1313,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_137) {
  P return_;
  P x_1274F1320;
  P x_1274F1319;
  P x_1274F1318;
  P restF1317;
  P nameF1316;
  P x_1274F1315;
  P x_1275F1314;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1275_136,3);
  x_1275F1314 = T1;
  FUNINIT(x_1275F1314, 3,FREEREF(0),FREEREF(1),return_);
  x_1274F1315 = FREEREF(0);
  nameF1316 = YPfalse;
  nameF1316 = BOXFAB(nameF1316);
  restF1317 = YPfalse;
  restF1317 = BOXFAB(restF1317);
  T7 = CALL2(1,VARREF(YisaQ),x_1274F1315,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1274F1315,LITREF(lit_251),x_1275F1314);
    x_1274F1318 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1274F1318,x_1275F1314);
    BOXVAL(nameF1316) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1274F1318);
    x_1274F1319 = T12;
    BOXVAL(restF1317) = x_1274F1319;
    x_1274F1320 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1274F1320,x_1275F1314);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1275F1314,LITREF(lit_5),x_1274F1315);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_266));
  T23 = BOXVAL(nameF1316);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T19,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1272_138) {
  P msg_,args_;
  P x_1273F1321;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1273F1321 = FREEREF(0);
  T3 = FUNFAB(fun_137,2,x_1273F1321,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_139) {
  P return_;
  P x_1271F1328;
  P x_1271F1327;
  P x_1271F1326;
  P restF1325;
  P nameF1324;
  P x_1271F1323;
  P x_1272F1322;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1272_138,3);
  x_1272F1322 = T1;
  FUNINIT(x_1272F1322, 3,FREEREF(0),FREEREF(1),return_);
  x_1271F1323 = FREEREF(0);
  nameF1324 = YPfalse;
  nameF1324 = BOXFAB(nameF1324);
  restF1325 = YPfalse;
  restF1325 = BOXFAB(restF1325);
  T7 = CALL2(1,VARREF(YisaQ),x_1271F1323,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1271F1323,LITREF(lit_292),x_1272F1322);
    x_1271F1326 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1271F1326,x_1272F1322);
    BOXVAL(nameF1324) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1271F1326);
    x_1271F1327 = T12;
    BOXVAL(restF1325) = x_1271F1327;
    x_1271F1328 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1271F1328,x_1272F1322);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1272F1322,LITREF(lit_5),x_1271F1323);
  }
  T18 = BOXVAL(nameF1324);
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_266));
  T23 = BOXVAL(nameF1324);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T19,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1269_140) {
  P msg_,args_;
  P x_1270F1329;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1270F1329 = FREEREF(0);
  T3 = FUNFAB(fun_139,2,x_1270F1329,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_141) {
  P return_;
  P x_1268F1336;
  P x_1268F1335;
  P x_1268F1334;
  P restF1333;
  P nameF1332;
  P x_1268F1331;
  P x_1269F1330;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1269_140,3);
  x_1269F1330 = T1;
  FUNINIT(x_1269F1330, 3,FREEREF(0),FREEREF(1),return_);
  x_1268F1331 = FREEREF(0);
  nameF1332 = YPfalse;
  nameF1332 = BOXFAB(nameF1332);
  restF1333 = YPfalse;
  restF1333 = BOXFAB(restF1333);
  T7 = CALL2(1,VARREF(YisaQ),x_1268F1331,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1268F1331,LITREF(lit_293),x_1269F1330);
    x_1268F1334 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1268F1334,x_1269F1330);
    BOXVAL(nameF1332) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1268F1334);
    x_1268F1335 = T12;
    BOXVAL(restF1333) = x_1268F1335;
    x_1268F1336 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1268F1336,x_1269F1330);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1269F1330,LITREF(lit_5),x_1268F1331);
  }
  T18 = BOXVAL(FREEREF(1));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_266));
  T23 = BOXVAL(nameF1332);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_266));
  T29 = BOXVAL(nameF1332);
  T28 = CALL1(1,VARREF(YgooSmacrosYfab_setter_name),T29);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T16 = CALL4(1,VARREF(YgooSmacrosYcat),T17,T19,T24,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_142) {
  P return_;
  P defsF1343;
  P x_1267F1342;
  P x_1265F1341;
  P x_1265F1340;
  P defF1339;
  P x_1265F1338;
  P x_1266F1337;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1266_129,2);
  x_1266F1337 = T1;
  FUNINIT(x_1266F1337, 2,FREEREF(0),return_);
  x_1265F1338 = FREEREF(0);
  defF1339 = YPfalse;
  defF1339 = BOXFAB(defF1339);
  T5 = CALL2(1,VARREF(YisaQ),x_1265F1338,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1265F1338,LITREF(lit_271),x_1266F1337);
    x_1265F1340 = T7;
    BOXVAL(defF1339) = x_1265F1340;
    x_1265F1341 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1265F1341,x_1266F1337);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1266F1337,LITREF(lit_5),x_1265F1338);
  }
  T13 = BOXVAL(defF1339);
  x_1267F1342 = T13;
  T15 = FUNFAB(fun_141,2,x_1267F1342,defF1339);
  T14 = with_exit(T15);
  T12 = T14;
  defsF1343 = T12;
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,defsF1343,Ynil);
  T11 = T16;
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_143) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_142,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1288_144) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_298),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_145) {
  P x_;
  P xF1344;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T1 = x_;
  } else {
    T3 = CALL1(1,VARREF(Ylst),x_);
    T1 = T3;
  }
  xF1344 = T1;
  T5 = CALL1(1,VARREF(Ylst),LITREF(lit_271));
  T4 = CALL3(1,VARREF(YgooSmacrosYcat),T5,xF1344,Ynil);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_146) {
  P return_;
  P x_1287F1349;
  P x_1287F1348;
  P defsF1347;
  P x_1287F1346;
  P x_1288F1345;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1288_144,2);
  x_1288F1345 = T1;
  FUNINIT(x_1288F1345, 2,FREEREF(0),return_);
  x_1287F1346 = FREEREF(0);
  defsF1347 = YPfalse;
  defsF1347 = BOXFAB(defsF1347);
  T5 = CALL2(1,VARREF(YisaQ),x_1287F1346,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1287F1346,LITREF(lit_298),x_1288F1345);
    x_1287F1348 = T7;
    BOXVAL(defsF1347) = x_1287F1348;
    x_1287F1349 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1287F1349,x_1288F1345);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1288F1345,LITREF(lit_5),x_1287F1346);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_98));
  T14 = fun_145;
  T15 = BOXVAL(defsF1347);
  T13 = CALL2(1,VARREF(YgooSmacrosYmap),T14,T15);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T13,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_147) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_146,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSmacrosY___main_0___() {
  P tmpF1365;
  P tmpF1364;
  P tmpF1363;
  P tmpF1362;
  P tmpF1361;
  P tmpF1360;
  P tmpF1359;
  P tmpF1358;
  P tmpF1357;
  P tmpF1356;
  P tmpF1355;
  P tmpF1354;
  P tmpF1353;
  P tmpF1352;
  P tmpF1351;
  P tmpF1350;
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
  P T192,T193,T194,T195,T196,T197,T198,T199;
DEFCREGS();
loop:
  lit_0 = YPPlist(1,YPPsym((P)"exp"));
  lit_1 = YPPlist(1,YPPsym((P)"return"));
  lit_2 = YPPsym((P)"x-1076");
  lit_3 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_4 = YPPsym((P)"sup");
  lit_5 = YPsb((P)"Match Pattern Failure");
  lit_6 = YPPsym((P)"let");
  lit_7 = YPPsym((P)"next-mets");
  lit_8 = YPPsym((P)"%next-methods");
  lit_9 = YPPsym((P)"if");
  lit_10 = YPPsym((P)"and");
  lit_11 = YPPsym((P)"@not");
  lit_12 = YPPsym((P)"@==");
  lit_13 = YPPsym((P)"quote");
  lit_14 = YPPsym((P)"napp");
  lit_15 = YPPsym((P)"head");
  lit_16 = YPPsym((P)"tail");
  lit_17 = YPPsym((P)"no-next-methods-error");
  lit_18 = YPPsym((P)"%fun-reg");
  lit_19 = YPPsym((P)"lst");
  T2 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1076_0 = YPmet(FUNCODEREF(fun_x_1076_0),LITREF(lit_2),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(LITREF(lit_0),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_2;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"sup"),T3);
  lit_20 = YPPlist(1,YPPsym((P)"exp"));
  lit_21 = YPPlist(1,YPPsym((P)"return"));
  lit_22 = YPPsym((P)"x-1080");
  lit_23 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_24 = YPPsym((P)"app-sup");
  T6 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1080_3 = YPmet(FUNCODEREF(fun_x_1080_3),LITREF(lit_22),T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T7 = fun_5;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app-sup"),T7);
  lit_25 = YPPlist(1,YPPsym((P)"exp"));
  lit_26 = YPPlist(1,YPPsym((P)"return"));
  lit_27 = YPPsym((P)"x-1084");
  lit_28 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_29 = YPPsym((P)"app");
  T10 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1084_6 = YPmet(FUNCODEREF(fun_x_1084_6),LITREF(lit_27),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T11 = fun_8;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"app"),T11);
  lit_30 = YPPlist(1,YPPsym((P)"exp"));
  lit_31 = YPPlist(1,YPPsym((P)"return"));
  lit_32 = YPPsym((P)"x-1088");
  lit_33 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_34 = YPPsym((P)"renew");
  lit_35 = YPPsym((P)"loop");
  lit_36 = YPPlist(2,YPPsym((P)"sets"),YPPsym((P)"inits"));
  lit_37 = YPPsym((P)"set");
  T15 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1088_9 = YPmet(FUNCODEREF(fun_x_1088_9),LITREF(lit_32),T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(LITREF(lit_36),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_10 = YPmet(FUNCODEREF(fun_loop_10),LITREF(lit_35),T14,ENVNUL,PNUL,YPfalse);
  T13 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T16 = fun_12;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"renew"),T16);
  lit_38 = YPPsym((P)"lift-place-subforms");
  lit_39 = YPPlist(1,YPPsym((P)"place"));
  lit_40 = YPPsym((P)"munch");
  lit_41 = YPPlist(1,YPPsym((P)"subforms"));
  T20 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T19 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T20,Ynil);
  fun_munch_13 = YPmet(FUNCODEREF(fun_munch_13),LITREF(lit_40),T19,ENVNUL,PNUL,YPfalse);
  T18 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T17 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),T18,Ynil);
  YgooSmacrosYlift_place_subforms = YPmet(FUNCODEREF(YgooSmacrosYlift_place_subforms),LITREF(lit_38),T17,ENVNUL,PNUL,YPfalse);
  T21 = YgooSmacrosYlift_place_subforms;
  VARSET(YgooSmacrosYlift_place_subforms,T21);
  lit_42 = YPPlist(1,YPPsym((P)"exp"));
  lit_43 = YPPlist(1,YPPsym((P)"return"));
  lit_44 = YPPsym((P)"x-1094");
  lit_45 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_46 = YPPsym((P)"incf");
  lit_47 = YPPlist(1,YPPsym((P)"return"));
  lit_48 = YPPsym((P)"x-1096");
  lit_49 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_50 = YPPsym((P)"+");
  T26 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1094_15 = YPmet(FUNCODEREF(fun_x_1094_15),LITREF(lit_44),T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1096_16 = YPmet(FUNCODEREF(fun_x_1096_16),LITREF(lit_48),T25,ENVNUL,PNUL,YPfalse);
  T24 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T24,ENVNUL,PNUL,YPfalse);
  T23 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T22 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T22,ENVNUL,PNUL,YPfalse);
  T27 = fun_19;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"incf"),T27);
  lit_51 = YPPlist(1,YPPsym((P)"exp"));
  lit_52 = YPPlist(1,YPPsym((P)"return"));
  lit_53 = YPPsym((P)"x-1102");
  lit_54 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_55 = YPPsym((P)"decf");
  lit_56 = YPPlist(1,YPPsym((P)"return"));
  lit_57 = YPPsym((P)"x-1104");
  lit_58 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_59 = YPPsym((P)"-");
  T32 = YPsig(LITREF(lit_54),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1102_20 = YPmet(FUNCODEREF(fun_x_1102_20),LITREF(lit_53),T32,ENVNUL,PNUL,YPfalse);
  T31 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1104_21 = YPmet(FUNCODEREF(fun_x_1104_21),LITREF(lit_57),T31,ENVNUL,PNUL,YPfalse);
  T30 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T28,ENVNUL,PNUL,YPfalse);
  T33 = fun_24;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"decf"),T33);
  lit_60 = YPPlist(1,YPPsym((P)"exp"));
  lit_61 = YPPlist(1,YPPsym((P)"return"));
  lit_62 = YPPsym((P)"x-1108");
  lit_63 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_64 = YPPsym((P)"pushf");
  lit_65 = YPPsym((P)"push!");
  T36 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1108_25 = YPmet(FUNCODEREF(fun_x_1108_25),LITREF(lit_62),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(LITREF(lit_61),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T34,ENVNUL,PNUL,YPfalse);
  T37 = fun_27;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pushf"),T37);
  lit_66 = YPPlist(1,YPPsym((P)"exp"));
  lit_67 = YPPlist(1,YPPsym((P)"return"));
  lit_68 = YPPsym((P)"x-1112");
  lit_69 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_70 = YPPsym((P)"swapf");
  T40 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1112_28 = YPmet(FUNCODEREF(fun_x_1112_28),LITREF(lit_68),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(LITREF(lit_66),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T41 = fun_30;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"swapf"),T41);
  lit_71 = YPPlist(1,YPPsym((P)"exp"));
  lit_72 = YPPlist(1,YPPsym((P)"return"));
  lit_73 = YPPsym((P)"x-1116");
  lit_74 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_75 = YPPsym((P)"rotf");
  lit_76 = YPPlist(1,YPPsym((P)"x"));
  lit_77 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"p"));
  lit_78 = YPPlist(2,YPPsym((P)"p"),YPPsym((P)"t"));
  T47 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1116_31 = YPmet(FUNCODEREF(fun_x_1116_31),LITREF(lit_73),T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T46,ENVNUL,PNUL,YPfalse);
  T45 = YPsig(LITREF(lit_77),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T48 = fun_36;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"rotf"),T48);
  lit_79 = YPPlist(1,YPPsym((P)"exp"));
  lit_80 = YPPlist(1,YPPsym((P)"return"));
  lit_81 = YPPsym((P)"x-1120");
  lit_82 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_83 = YPPsym((P)"popf");
  lit_84 = YPPsym((P)"tup");
  lit_85 = YPPsym((P)"pop!");
  T51 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1120_37 = YPmet(FUNCODEREF(fun_x_1120_37),LITREF(lit_81),T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(LITREF(lit_80),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T52 = fun_39;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"popf"),T52);
  lit_86 = YPPlist(1,YPPsym((P)"exp"));
  lit_87 = YPPlist(1,YPPsym((P)"return"));
  lit_88 = YPPsym((P)"x-1124");
  lit_89 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_90 = YPPsym((P)"opf");
  lit_91 = YPPsym((P)"_");
  T55 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1124_40 = YPmet(FUNCODEREF(fun_x_1124_40),LITREF(lit_88),T55,ENVNUL,PNUL,YPfalse);
  T54 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T56 = fun_42;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"opf"),T56);
  lit_92 = YPPlist(1,YPPsym((P)"exp"));
  lit_93 = YPPlist(1,YPPsym((P)"return"));
  lit_94 = YPPsym((P)"x-1128");
  lit_95 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_96 = YPPsym((P)"unless");
  lit_97 = YPPsym((P)"not");
  lit_98 = YPPsym((P)"seq");
  T59 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1128_43 = YPmet(FUNCODEREF(fun_x_1128_43),LITREF(lit_94),T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(LITREF(lit_93),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T57,ENVNUL,PNUL,YPfalse);
  T60 = fun_45;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"unless"),T60);
  lit_99 = YPPlist(1,YPPsym((P)"exp"));
  lit_100 = YPPlist(1,YPPsym((P)"return"));
  lit_101 = YPPsym((P)"x-1132");
  lit_102 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_103 = YPPsym((P)"when");
  T63 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1132_46 = YPmet(FUNCODEREF(fun_x_1132_46),LITREF(lit_101),T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T64 = fun_48;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"when"),T64);
  lit_104 = YPPlist(1,YPPsym((P)"exp"));
  lit_105 = YPPlist(1,YPPsym((P)"return"));
  lit_106 = YPPsym((P)"x-1140");
  lit_107 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_108 = YPPsym((P)"or");
  lit_109 = YPPlist(1,YPPsym((P)"return"));
  lit_110 = YPPsym((P)"x-1142");
  lit_111 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_112 = YPPlist(1,YPPsym((P)"return"));
  lit_113 = YPPsym((P)"x-1144");
  lit_114 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_115 = YPPsym((P)"tmp");
  T71 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1140_49 = YPmet(FUNCODEREF(fun_x_1140_49),LITREF(lit_106),T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1142_50 = YPmet(FUNCODEREF(fun_x_1142_50),LITREF(lit_110),T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1144_51 = YPmet(FUNCODEREF(fun_x_1144_51),LITREF(lit_113),T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T72 = fun_55;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"or"),T72);
  lit_116 = YPPlist(1,YPPsym((P)"exp"));
  lit_117 = YPPlist(1,YPPsym((P)"return"));
  lit_118 = YPPsym((P)"x-1152");
  lit_119 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_120 = YPPlist(1,YPPsym((P)"return"));
  lit_121 = YPPsym((P)"x-1154");
  lit_122 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_123 = YPPlist(1,YPPsym((P)"return"));
  lit_124 = YPPsym((P)"x-1156");
  lit_125 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T79 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1152_56 = YPmet(FUNCODEREF(fun_x_1152_56),LITREF(lit_118),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1154_57 = YPmet(FUNCODEREF(fun_x_1154_57),LITREF(lit_121),T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1156_58 = YPmet(FUNCODEREF(fun_x_1156_58),LITREF(lit_124),T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(LITREF(lit_123),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(LITREF(lit_116),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T80 = fun_62;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"and"),T80);
  lit_126 = YPPlist(1,YPPsym((P)"exp"));
  lit_127 = YPPlist(1,YPPsym((P)"return"));
  lit_128 = YPPsym((P)"x-1162");
  lit_129 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_130 = YPPsym((P)"cond");
  lit_131 = YPPlist(1,YPPsym((P)"return"));
  lit_132 = YPPsym((P)"x-1164");
  lit_133 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_134 = YPsb((P)"bad case %=");
  T85 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1162_63 = YPmet(FUNCODEREF(fun_x_1162_63),LITREF(lit_128),T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(LITREF(lit_133),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1164_64 = YPmet(FUNCODEREF(fun_x_1164_64),LITREF(lit_132),T84,ENVNUL,PNUL,YPfalse);
  T83 = YPsig(LITREF(lit_131),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T81,ENVNUL,PNUL,YPfalse);
  T86 = fun_67;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"cond"),T86);
  lit_135 = YPPsym((P)"do-case-by");
  lit_136 = YPPlist(3,YPPsym((P)"val"),YPPsym((P)"tst"),YPPsym((P)"cases"));
  lit_137 = YPPlist(1,YPPsym((P)"return"));
  lit_138 = YPPsym((P)"x-1170");
  lit_139 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_140 = YPsb((P)"bad case %=");
  lit_141 = YPPlist(1,YPPsym((P)"return"));
  lit_142 = YPPsym((P)"x-1172");
  lit_143 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_144 = YPsb((P)"bad case %=");
  lit_145 = YPPlist(1,YPPsym((P)"x"));
  T92 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1170_68 = YPmet(FUNCODEREF(fun_x_1170_68),LITREF(lit_138),T92,ENVNUL,PNUL,YPfalse);
  T91 = YPsig(LITREF(lit_143),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1172_69 = YPmet(FUNCODEREF(fun_x_1172_69),LITREF(lit_142),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(LITREF(lit_145),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(LITREF(lit_141),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(LITREF(lit_137),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(LITREF(lit_136),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSmacrosYdo_case_by = YPmet(FUNCODEREF(YgooSmacrosYdo_case_by),LITREF(lit_135),T87,ENVNUL,PNUL,YPfalse);
  T93 = YgooSmacrosYdo_case_by;
  VARSET(YgooSmacrosYdo_case_by,T93);
  lit_146 = YPPlist(1,YPPsym((P)"exp"));
  lit_147 = YPPlist(1,YPPsym((P)"return"));
  lit_148 = YPPsym((P)"x-1176");
  lit_149 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_150 = YPPsym((P)"case-by");
  T96 = YPsig(LITREF(lit_149),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1176_74 = YPmet(FUNCODEREF(fun_x_1176_74),LITREF(lit_148),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(LITREF(lit_147),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(LITREF(lit_146),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T94,ENVNUL,PNUL,YPfalse);
  T97 = fun_76;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case-by"),T97);
  lit_151 = YPPlist(1,YPPsym((P)"exp"));
  lit_152 = YPPlist(1,YPPsym((P)"return"));
  lit_153 = YPPsym((P)"x-1180");
  lit_154 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_155 = YPPsym((P)"case");
  lit_156 = YPPsym((P)"==");
  T100 = YPsig(LITREF(lit_154),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1180_77 = YPmet(FUNCODEREF(fun_x_1180_77),LITREF(lit_153),T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(LITREF(lit_152),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(LITREF(lit_151),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T101 = fun_79;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"case"),T101);
  lit_157 = YPPlist(1,YPPsym((P)"exp"));
  lit_158 = YPPlist(1,YPPsym((P)"return"));
  lit_159 = YPPsym((P)"x-1184");
  lit_160 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_161 = YPPsym((P)"op");
  lit_162 = YPPsym((P)"splice");
  lit_163 = YPPlist(1,YPPsym((P)"y"));
  lit_164 = YPPlist(1,YPPsym((P)"x"));
  lit_165 = YPPsym((P)"...");
  lit_166 = YPPsym((P)"as");
  lit_167 = YPPsym((P)"<lst>");
  lit_168 = YPPsym((P)"_*");
  lit_169 = YPPsym((P)"rest-op?");
  lit_170 = YPPlist(1,YPPsym((P)"x"));
  lit_171 = YPPsym((P)"walk-op");
  lit_172 = YPPlist(2,YPPsym((P)"vars"),YPPsym((P)"x"));
  lit_173 = YPsb((P)"_");
  lit_174 = YPPlist(1,YPPsym((P)"y"));
  lit_175 = YPPlist(1,YPPsym((P)"y"));
  lit_176 = YPPsym((P)"cat!");
  lit_177 = YPPsym((P)"fun");
  lit_178 = YPPsym((P)"x");
  lit_179 = YPPlist(1,YPPlist(2,YPPsym((P)"_*"),YPPsym((P)"...")));
  T110 = YPsig(LITREF(lit_160),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1184_80 = YPmet(FUNCODEREF(fun_x_1184_80),LITREF(lit_159),T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(LITREF(lit_164),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(LITREF(lit_163),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_splice_82 = YPmet(FUNCODEREF(fun_splice_82),LITREF(lit_162),T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(LITREF(lit_170),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_rest_opQ_83 = YPmet(FUNCODEREF(fun_rest_opQ_83),LITREF(lit_169),T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(LITREF(lit_175),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(LITREF(lit_172),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_walk_op_86 = YPmet(FUNCODEREF(fun_walk_op_86),LITREF(lit_171),T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(LITREF(lit_158),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(LITREF(lit_157),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T102,ENVNUL,PNUL,YPfalse);
  T111 = fun_88;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"op"),T111);
  lit_180 = YPPlist(1,YPPsym((P)"exp"));
  lit_181 = YPPlist(1,YPPsym((P)"return"));
  lit_182 = YPPsym((P)"x-1192");
  lit_183 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_184 = YPPsym((P)"match");
  lit_185 = YPPlist(1,YPPsym((P)"return"));
  lit_186 = YPPsym((P)"x-1194");
  lit_187 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_188 = YPPlist(1,YPPsym((P)"return"));
  lit_189 = YPPsym((P)"x-1196");
  lit_190 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_191 = YPsb((P)"invalid match syntax.");
  lit_192 = YPPsym((P)"mif");
  lit_193 = YPPsym((P)"syntax-error");
  lit_194 = YPsb((P)"failed to match.");
  T118 = YPsig(LITREF(lit_183),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1192_89 = YPmet(FUNCODEREF(fun_x_1192_89),LITREF(lit_182),T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1196_90 = YPmet(FUNCODEREF(fun_x_1196_90),LITREF(lit_189),T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(LITREF(lit_187),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1194_92 = YPmet(FUNCODEREF(fun_x_1194_92),LITREF(lit_186),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(LITREF(lit_185),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T114,ENVNUL,PNUL,YPfalse);
  T113 = YPsig(LITREF(lit_181),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(LITREF(lit_180),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T119 = fun_95;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"match"),T119);
  lit_195 = YPPlist(1,YPPsym((P)"exp"));
  lit_196 = YPPlist(1,YPPsym((P)"return"));
  lit_197 = YPPsym((P)"x-1200");
  lit_198 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_199 = YPPsym((P)"assert");
  lit_200 = YPPsym((P)"assert-error");
  T122 = YPsig(LITREF(lit_198),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1200_96 = YPmet(FUNCODEREF(fun_x_1200_96),LITREF(lit_197),T122,ENVNUL,PNUL,YPfalse);
  T121 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T121,ENVNUL,PNUL,YPfalse);
  T120 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T120,ENVNUL,PNUL,YPfalse);
  T123 = fun_98;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"assert"),T123);
  lit_201 = YPPlist(1,YPPsym((P)"exp"));
  lit_202 = YPPlist(1,YPPsym((P)"return"));
  lit_203 = YPPsym((P)"x-1208");
  lit_204 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_205 = YPPsym((P)"for");
  lit_206 = YPPsym((P)"grok");
  lit_207 = YPPlist(5,YPPsym((P)"clauses"),YPPsym((P)"inits"),YPPsym((P)"preds"),YPPsym((P)"nows"),YPPsym((P)"nexts"));
  lit_208 = YPPsym((P)"rep");
  lit_209 = YPPlist(1,YPPsym((P)"return"));
  lit_210 = YPPsym((P)"x-1210");
  lit_211 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_212 = YPPsym((P)"enum");
  lit_213 = YPPsym((P)"fin?");
  lit_214 = YPPlist(1,YPPsym((P)"return"));
  lit_215 = YPPsym((P)"x-1212");
  lit_216 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_217 = YPPsym((P)"now");
  lit_218 = YPPsym((P)"now-key");
  lit_219 = YPPsym((P)"nxt");
  T131 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1208_99 = YPmet(FUNCODEREF(fun_x_1208_99),LITREF(lit_203),T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(LITREF(lit_211),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1210_100 = YPmet(FUNCODEREF(fun_x_1210_100),LITREF(lit_210),T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(LITREF(lit_216),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1212_101 = YPmet(FUNCODEREF(fun_x_1212_101),LITREF(lit_215),T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T128,ENVNUL,PNUL,YPfalse);
  T127 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_103 = YPmet(FUNCODEREF(fun_103),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(LITREF(lit_207),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_grok_104 = YPmet(FUNCODEREF(fun_grok_104),LITREF(lit_206),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(LITREF(lit_202),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(LITREF(lit_201),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_106 = YPmet(FUNCODEREF(fun_106),YPfalse,T124,ENVNUL,PNUL,YPfalse);
  T132 = fun_106;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"for"),T132);
  lit_220 = YPPlist(1,YPPsym((P)"exp"));
  lit_221 = YPPlist(1,YPPsym((P)"return"));
  lit_222 = YPPsym((P)"x-1216");
  lit_223 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_224 = YPPsym((P)"while");
  lit_225 = YPPsym((P)"_loop");
  T135 = YPsig(LITREF(lit_223),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1216_107 = YPmet(FUNCODEREF(fun_x_1216_107),LITREF(lit_222),T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(LITREF(lit_221),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(LITREF(lit_220),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T136 = fun_109;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"while"),T136);
  lit_226 = YPPlist(1,YPPsym((P)"exp"));
  lit_227 = YPPlist(1,YPPsym((P)"return"));
  lit_228 = YPPsym((P)"x-1220");
  lit_229 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_230 = YPPsym((P)"until");
  T139 = YPsig(LITREF(lit_229),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1220_110 = YPmet(FUNCODEREF(fun_x_1220_110),LITREF(lit_228),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(LITREF(lit_227),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_112 = YPmet(FUNCODEREF(fun_112),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T140 = fun_112;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"until"),T140);
  lit_231 = YPPlist(1,YPPsym((P)"exp"));
  lit_232 = YPPlist(1,YPPsym((P)"return"));
  lit_233 = YPPsym((P)"x-1228");
  lit_234 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_235 = YPPsym((P)"dlet");
  lit_236 = YPPlist(1,YPPsym((P)"return"));
  lit_237 = YPPsym((P)"x-1230");
  lit_238 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_239 = YPPlist(1,YPPsym((P)"return"));
  lit_240 = YPPsym((P)"x-1232");
  lit_241 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_242 = YPsb((P)"Bad dlet bindings %=");
  lit_243 = YPPsym((P)"fin");
  T147 = YPsig(LITREF(lit_234),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1228_113 = YPmet(FUNCODEREF(fun_x_1228_113),LITREF(lit_233),T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(LITREF(lit_241),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1232_114 = YPmet(FUNCODEREF(fun_x_1232_114),LITREF(lit_240),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(LITREF(lit_239),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_115 = YPmet(FUNCODEREF(fun_115),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(LITREF(lit_238),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1230_116 = YPmet(FUNCODEREF(fun_x_1230_116),LITREF(lit_237),T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(LITREF(lit_236),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_117 = YPmet(FUNCODEREF(fun_117),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(LITREF(lit_232),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(LITREF(lit_231),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_119 = YPmet(FUNCODEREF(fun_119),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T148 = fun_119;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"dlet"),T148);
  lit_244 = YPPlist(1,YPPsym((P)"exp"));
  lit_245 = YPPlist(1,YPPsym((P)"return"));
  lit_246 = YPPsym((P)"x-1236");
  lit_247 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_248 = YPPsym((P)"def-fun-var");
  lit_249 = YPsb((P)"*");
  lit_250 = YPsb((P)"*");
  lit_251 = YPPsym((P)"dv");
  lit_252 = YPPsym((P)"dm");
  lit_253 = YPPsym((P)"=>");
  lit_254 = YPPsym((P)"z");
  T151 = YPsig(LITREF(lit_247),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1236_120 = YPmet(FUNCODEREF(fun_x_1236_120),LITREF(lit_246),T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(LITREF(lit_245),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_121 = YPmet(FUNCODEREF(fun_121),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(LITREF(lit_244),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T152 = fun_122;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"def-fun-var"),T152);
  lit_255 = YPPlist(1,YPPsym((P)"exp"));
  lit_256 = YPPlist(1,YPPsym((P)"return"));
  lit_257 = YPPsym((P)"x-1240");
  lit_258 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_259 = YPPsym((P)"without-prop-unbound-errors");
  lit_260 = YPPsym((P)"*report-prop-unbound-errors?*");
  T155 = YPsig(LITREF(lit_258),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1240_123 = YPmet(FUNCODEREF(fun_x_1240_123),LITREF(lit_257),T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(LITREF(lit_256),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(LITREF(lit_255),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_125 = YPmet(FUNCODEREF(fun_125),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T156 = fun_125;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"without-prop-unbound-errors"),T156);
  lit_261 = YPPlist(1,YPPsym((P)"exp"));
  lit_262 = YPPlist(1,YPPsym((P)"return"));
  lit_263 = YPPsym((P)"x-1244");
  lit_264 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_265 = YPPsym((P)"need-implementation");
  lit_266 = YPPsym((P)"export");
  T159 = YPsig(LITREF(lit_264),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1244_126 = YPmet(FUNCODEREF(fun_x_1244_126),LITREF(lit_263),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(LITREF(lit_262),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(LITREF(lit_261),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_128 = YPmet(FUNCODEREF(fun_128),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T160 = fun_128;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"need-implementation"),T160);
  lit_267 = YPPlist(1,YPPsym((P)"exp"));
  lit_268 = YPPlist(1,YPPsym((P)"return"));
  lit_269 = YPPsym((P)"x-1266");
  lit_270 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_271 = YPPsym((P)"pub");
  lit_272 = YPPlist(1,YPPsym((P)"return"));
  lit_273 = YPPsym((P)"x-1269");
  lit_274 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_275 = YPPlist(1,YPPsym((P)"return"));
  lit_276 = YPPsym((P)"x-1272");
  lit_277 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_278 = YPPlist(1,YPPsym((P)"return"));
  lit_279 = YPPsym((P)"x-1275");
  lit_280 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_281 = YPPlist(1,YPPsym((P)"return"));
  lit_282 = YPPsym((P)"x-1278");
  lit_283 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_284 = YPPlist(1,YPPsym((P)"return"));
  lit_285 = YPPsym((P)"x-1281");
  lit_286 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_287 = YPPlist(1,YPPsym((P)"return"));
  lit_288 = YPPsym((P)"x-1284");
  lit_289 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_290 = YPPsym((P)"dc");
  lit_291 = YPPsym((P)"dg");
  lit_292 = YPPsym((P)"df");
  lit_293 = YPPsym((P)"dp");
  T175 = YPsig(LITREF(lit_270),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1266_129 = YPmet(FUNCODEREF(fun_x_1266_129),LITREF(lit_269),T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(LITREF(lit_289),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1284_130 = YPmet(FUNCODEREF(fun_x_1284_130),LITREF(lit_288),T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(LITREF(lit_287),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_131 = YPmet(FUNCODEREF(fun_131),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(LITREF(lit_286),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1281_132 = YPmet(FUNCODEREF(fun_x_1281_132),LITREF(lit_285),T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(LITREF(lit_284),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_133 = YPmet(FUNCODEREF(fun_133),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(LITREF(lit_283),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1278_134 = YPmet(FUNCODEREF(fun_x_1278_134),LITREF(lit_282),T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(LITREF(lit_281),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_135 = YPmet(FUNCODEREF(fun_135),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(LITREF(lit_280),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1275_136 = YPmet(FUNCODEREF(fun_x_1275_136),LITREF(lit_279),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(LITREF(lit_278),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_137 = YPmet(FUNCODEREF(fun_137),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(LITREF(lit_277),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1272_138 = YPmet(FUNCODEREF(fun_x_1272_138),LITREF(lit_276),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(LITREF(lit_275),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(LITREF(lit_274),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1269_140 = YPmet(FUNCODEREF(fun_x_1269_140),LITREF(lit_273),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(LITREF(lit_272),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(LITREF(lit_268),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_142 = YPmet(FUNCODEREF(fun_142),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(LITREF(lit_267),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_143 = YPmet(FUNCODEREF(fun_143),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T176 = fun_143;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"pub"),T176);
  lit_294 = YPPlist(1,YPPsym((P)"exp"));
  lit_295 = YPPlist(1,YPPsym((P)"return"));
  lit_296 = YPPsym((P)"x-1288");
  lit_297 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_298 = YPPsym((P)"exported");
  lit_299 = YPPlist(1,YPPsym((P)"x"));
  T180 = YPsig(LITREF(lit_297),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1288_144 = YPmet(FUNCODEREF(fun_x_1288_144),LITREF(lit_296),T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(LITREF(lit_299),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_145 = YPmet(FUNCODEREF(fun_145),YPfalse,T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(LITREF(lit_295),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_146 = YPmet(FUNCODEREF(fun_146),YPfalse,T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(LITREF(lit_294),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_147 = YPmet(FUNCODEREF(fun_147),YPfalse,T177,ENVNUL,PNUL,YPfalse);
  T181 = fun_147;
  YPmacro(YPPsym((P)"goo/macros"),YPPsym((P)"exported"),T181);
  tmpF1350 = YPfalse;
  if (tmpF1350 != YPfalse) {
    T182 = VARREF(YgooSmacrosYEE);
  } else {
    T182 = YPfalse;
  }
  tmpF1351 = YPfalse;
  if (tmpF1351 != YPfalse) {
    T183 = VARREF(YgooSmacrosYdo);
  } else {
    T183 = YPfalse;
  }
  tmpF1352 = YPfalse;
  if (tmpF1352 != YPfalse) {
    T184 = VARREF(YgooSmacrosYrevX);
  } else {
    T184 = YPfalse;
  }
  tmpF1353 = YPfalse;
  if (tmpF1353 != YPfalse) {
    T185 = VARREF(YgooSmacrosYcat);
  } else {
    T185 = YPfalse;
  }
  tmpF1354 = YPfalse;
  if (tmpF1354 != YPfalse) {
    T186 = VARREF(YgooSmacrosYelt);
  } else {
    T186 = YPfalse;
  }
  tmpF1355 = YPfalse;
  if (tmpF1355 != YPfalse) {
    T187 = VARREF(YgooSmacrosY1st);
  } else {
    T187 = YPfalse;
  }
  tmpF1356 = YPfalse;
  if (tmpF1356 != YPfalse) {
    T188 = VARREF(YgooSmacrosY2nd);
  } else {
    T188 = YPfalse;
  }
  tmpF1357 = YPfalse;
  if (tmpF1357 != YPfalse) {
    T189 = VARREF(YgooSmacrosYlast);
  } else {
    T189 = YPfalse;
  }
  tmpF1358 = YPfalse;
  if (tmpF1358 != YPfalse) {
    T190 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T190 = YPfalse;
  }
  tmpF1359 = YPfalse;
  if (tmpF1359 != YPfalse) {
    T191 = VARREF(Yerror);
  } else {
    T191 = YPfalse;
  }
  tmpF1360 = YPfalse;
  if (tmpF1360 != YPfalse) {
    T192 = VARREF(YgooSmacrosYgensym);
  } else {
    T192 = YPfalse;
  }
  tmpF1361 = YPfalse;
  if (tmpF1361 != YPfalse) {
    T193 = VARREF(Ylst);
  } else {
    T193 = YPfalse;
  }
  tmpF1362 = YPfalse;
  if (tmpF1362 != YPfalse) {
    T194 = VARREF(YgooSmacrosYfab_setter_name);
  } else {
    T194 = YPfalse;
  }
  tmpF1363 = YPfalse;
  if (tmpF1363 != YPfalse) {
    T195 = VARREF(YgooSmacrosYcat_sym);
  } else {
    T195 = YPfalse;
  }
  tmpF1364 = YPfalse;
  if (tmpF1364 != YPfalse) {
    T196 = VARREF(YgooSmacrosYmap);
  } else {
    T196 = YPfalse;
  }
  tmpF1365 = YPfalse;
  if (tmpF1365 != YPfalse) {
    T199 = VARREF(YgooSmacrosYmap2);
  } else {
    T199 = YPfalse;
  }
  T198 = T199;
  T197 = T198;
  return T197;
}

P YgooSmacrosY___main_1___() {
  P tmpF1375;
  P tmpF1374;
  P tmpF1373;
  P tmpF1372;
  P tmpF1371;
  P tmpF1370;
  P tmpF1369;
  P tmpF1368;
  P tmpF1367;
  P tmpF1366;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
loop:
  tmpF1366 = YPfalse;
  if (tmpF1366 != YPfalse) {
    T0 = VARREF(YgooSmacrosYmatch_atom);
  } else {
    T0 = YPfalse;
  }
  tmpF1367 = YPfalse;
  if (tmpF1367 != YPfalse) {
    T1 = VARREF(YgooSmacrosYmatch_empty_list);
  } else {
    T1 = YPfalse;
  }
  tmpF1368 = YPfalse;
  if (tmpF1368 != YPfalse) {
    T2 = VARREF(YgooSmacrosYmatch_sublist);
  } else {
    T2 = YPfalse;
  }
  tmpF1369 = YPfalse;
  if (tmpF1369 != YPfalse) {
    T3 = VARREF(YgooSmacrosYmatch_unquote);
  } else {
    T3 = YPfalse;
  }
  tmpF1370 = YPfalse;
  if (tmpF1370 != YPfalse) {
    T4 = VARREF(YgooSmacrosYpair);
  } else {
    T4 = YPfalse;
  }
  tmpF1371 = YPfalse;
  if (tmpF1371 != YPfalse) {
    T5 = VARREF(Ytup);
  } else {
    T5 = YPfalse;
  }
  tmpF1372 = YPfalse;
  if (tmpF1372 != YPfalse) {
    T6 = VARREF(YgooSmacrosYvar_name);
  } else {
    T6 = YPfalse;
  }
  tmpF1373 = YPfalse;
  if (tmpF1373 != YPfalse) {
    T7 = VARREF(YgooSmacrosYvar_type);
  } else {
    T7 = YPfalse;
  }
  tmpF1374 = YPfalse;
  if (tmpF1374 != YPfalse) {
    T8 = VARREF(YgooSmacrosYnapp);
  } else {
    T8 = YPfalse;
  }
  tmpF1375 = YPfalse;
  if (tmpF1375 != YPfalse) {
    T9 = VARREF(YgooSmacrosYmacro_error);
  } else {
    T9 = YPfalse;
  }
  T10 = YPfalse;
  return T10;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"not", &module_info_gooSboot, "not"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"loc", &module_info_gooSboot, "loc"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"clone", &module_info_gooSboot, "clone"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"def", &module_info_gooSboot, "def"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"export", &module_info_gooSboot, "export"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"set", &module_info_gooSboot, "set"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"if", &module_info_gooSboot, "if"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"ct", &module_info_gooSboot, "ct"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"mif", &module_info_gooSboot, "mif"},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"let", &module_info_gooSboot, "let"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"dss", &module_info_gooSboot, "dss"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"@len", &module_info_gooSboot, "@len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"use", &module_info_gooSboot, "use"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%met", &module_info_gooSboot, "%met"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%time", &module_info_gooSboot, "%time"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"nul", &module_info_gooSboot, "nul"},
  {"seq", &module_info_gooSboot, "seq"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"error", &module_info_gooSboot, "error"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"%im", &module_info_gooSboot, "%im"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"df", &module_info_gooSboot, "df"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"dg", &module_info_gooSboot, "dg"},
  {"@<", &module_info_gooSboot, "@<"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"try", &module_info_gooSboot, "try"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"esc", &module_info_gooSboot, "esc"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"assert", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"opf", PVAR, NULL},
  {"pub", PVAR, NULL},
  {"elt", CVAR, &YgooSmacrosYelt},
  {"cat-sym", CVAR, &YgooSmacrosYcat_sym},
  {"exported", PVAR, NULL},
  {"lift-place-subforms", CVAR, &YgooSmacrosYlift_place_subforms},
  {"2nd", CVAR, &YgooSmacrosY2nd},
  {"do-case-by", CVAR, &YgooSmacrosYdo_case_by},
  {"pushf", PVAR, NULL},
  {"match-sublist", CVAR, &YgooSmacrosYmatch_sublist},
  {"op", PVAR, NULL},
  {"napp", CVAR, &YgooSmacrosYnapp},
  {"macro-error", CVAR, &YgooSmacrosYmacro_error},
  {"empty?", CVAR, &YgooSmacrosYemptyQ},
  {"1st", CVAR, &YgooSmacrosY1st},
  {"need-implementation", PVAR, NULL},
  {"or", PVAR, NULL},
  {"popf", PVAR, NULL},
  {"and", PVAR, NULL},
  {"match-atom", CVAR, &YgooSmacrosYmatch_atom},
  {"dlet", PVAR, NULL},
  {"map2", CVAR, &YgooSmacrosYmap2},
  {"==", CVAR, &YgooSmacrosYEE},
  {"renew", PVAR, NULL},
  {"match-unquote", CVAR, &YgooSmacrosYmatch_unquote},
  {"cond", PVAR, NULL},
  {"case", PVAR, NULL},
  {"sup", PVAR, NULL},
  {"decf", PVAR, NULL},
  {"match", PVAR, NULL},
  {"rev!", CVAR, &YgooSmacrosYrevX},
  {"when", PVAR, NULL},
  {"var-type", CVAR, &YgooSmacrosYvar_type},
  {"match-empty-list", CVAR, &YgooSmacrosYmatch_empty_list},
  {"without-prop-unbound-errors", PVAR, NULL},
  {"until", PVAR, NULL},
  {"app", PVAR, NULL},
  {"case-by", PVAR, NULL},
  {"swapf", PVAR, NULL},
  {"rotf", PVAR, NULL},
  {"map", CVAR, &YgooSmacrosYmap},
  {"do", CVAR, &YgooSmacrosYdo},
  {"for", PVAR, NULL},
  {"unless", PVAR, NULL},
  {"var-name", CVAR, &YgooSmacrosYvar_name},
  {"while", PVAR, NULL},
  {"pair", CVAR, &YgooSmacrosYpair},
  {"---main-0---", PVAR, NULL},
  {"last", CVAR, &YgooSmacrosYlast},
  {"incf", PVAR, NULL},
  {"app-sup", PVAR, NULL},
  {"def-fun-var", PVAR, NULL},
  {"fab-setter-name", CVAR, &YgooSmacrosYfab_setter_name},
  {"cat", CVAR, &YgooSmacrosYcat},
  {"gensym", CVAR, &YgooSmacrosYgensym},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"assert", "assert"},
  {"opf", "opf"},
  {"pub", "pub"},
  {"elt", "elt"},
  {"cat-sym", "cat-sym"},
  {"exported", "exported"},
  {"lift-place-subforms", "lift-place-subforms"},
  {"lst", "lst"},
  {"2nd", "2nd"},
  {"pushf", "pushf"},
  {"match-sublist", "match-sublist"},
  {"op", "op"},
  {"napp", "napp"},
  {"macro-error", "macro-error"},
  {"empty?", "empty?"},
  {"map", "map"},
  {"tup", "tup"},
  {"1st", "1st"},
  {"need-implementation", "need-implementation"},
  {"or", "or"},
  {"popf", "popf"},
  {"and", "and"},
  {"match-atom", "match-atom"},
  {"dlet", "dlet"},
  {"map2", "map2"},
  {"==", "=="},
  {"renew", "renew"},
  {"match-unquote", "match-unquote"},
  {"case", "case"},
  {"sup", "sup"},
  {"decf", "decf"},
  {"match", "match"},
  {"rev!", "rev!"},
  {"*report-prop-unbound-errors?*", "*report-prop-unbound-errors?*"},
  {"when", "when"},
  {"var-type", "var-type"},
  {"match-empty-list", "match-empty-list"},
  {"without-prop-unbound-errors", "without-prop-unbound-errors"},
  {"until", "until"},
  {"app", "app"},
  {"case-by", "case-by"},
  {"cond", "cond"},
  {"rotf", "rotf"},
  {"do", "do"},
  {"for", "for"},
  {"unless", "unless"},
  {"error", "error"},
  {"var-name", "var-name"},
  {"while", "while"},
  {"pair", "pair"},
  {"last", "last"},
  {"incf", "incf"},
  {"app-sup", "app-sup"},
  {"def-fun-var", "def-fun-var"},
  {"swapf", "swapf"},
  {"fab-setter-name", "fab-setter-name"},
  {"cat", "cat"},
  {"gensym", "gensym"},
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
